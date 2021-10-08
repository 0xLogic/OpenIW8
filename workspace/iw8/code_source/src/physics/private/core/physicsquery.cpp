/*
==============
PhysicsQuery_ImmediateQueryPointWorst
==============
*/

void __fastcall PhysicsQuery_ImmediateQueryPointWorst(Physics_WorldId worldId, const gentity_s *ent, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData, PhysicsQuery_QueryPointHit *hit)
{
  ?PhysicsQuery_ImmediateQueryPointWorst@@YAXW4Physics_WorldId@@PEBUgentity_s@@AEBTvec3_t@@MPEAUPhysics_QueryPointExtendedData@@PEAUPhysicsQuery_QueryPointHit@@@Z(worldId, ent, point, radius, extendedData, hit);
}

/*
==============
PhysicsQuery_LegacyTraceRotated
==============
*/

void __fastcall PhysicsQuery_LegacyTraceRotated(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const vec3_t *angles, const Bounds *bounds, int skipEntity, int skipChildren, int contentMask, int locational, unsigned __int8 *priorityMap, Physics_QueryPhaseSelection phaseSelection)
{
  ?PhysicsQuery_LegacyTraceRotated@@YAXW4Physics_WorldId@@PEAUtrace_t@@AEBTvec3_t@@22PEBUBounds@@HHHHPEAEW4Physics_QueryPhaseSelection@@@Z(worldId, results, start, end, angles, bounds, skipEntity, skipChildren, contentMask, locational, priorityMap, phaseSelection);
}

/*
==============
PhysicsQuery_GetRef
==============
*/

int __fastcall PhysicsQuery_GetRef(const PhysicsQuery_ShapecastHit *hit)
{
  return ?PhysicsQuery_GetRef@@YAHPEBUPhysicsQuery_ShapecastHit@@@Z(hit);
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsFree
==============
*/

bool __fastcall PhysicsQuery_ImmediateGetClosestPointsFree(Physics_WorldId worldId, hknpShape *shape, PhysicsObject *physObj, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData)
{
  return ?PhysicsQuery_ImmediateGetClosestPointsFree@@YA_NW4Physics_WorldId@@PEAVhknpShape@@PEAVPhysicsObject@@AEBTvec3_t@@AEBTvec4_t@@MPEAUPhysics_GetClosestPointsExtendedData@@@Z(worldId, shape, physObj, point, rotation, radius, extendedData);
}

/*
==============
PhysicsQuery_ImmediateRaycastAll
==============
*/

void __fastcall PhysicsQuery_ImmediateRaycastAll(Physics_WorldId worldId, PhysicsObject *physObj, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, PhysicsQuery_RaycastHit *hits, int maxNumHits, int *hitsFound)
{
  ?PhysicsQuery_ImmediateRaycastAll@@YAXW4Physics_WorldId@@PEAVPhysicsObject@@AEBTvec3_t@@2PEAUPhysics_RaycastExtendedData@@PEAUPhysicsQuery_RaycastHit@@HPEAH@Z(worldId, physObj, start, end, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateAABBQueryClosest
==============
*/

void __fastcall PhysicsQuery_ImmediateAABBQueryClosest(Physics_WorldId worldId, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, PhysicsQuery_AABBQueryHit *hit)
{
  ?PhysicsQuery_ImmediateAABBQueryClosest@@YAXW4Physics_WorldId@@AEBTvec3_t@@1PEAUPhysics_AABBQueryExtendedData@@PEAUPhysicsQuery_AABBQueryHit@@@Z(worldId, min, max, extendedData, hit);
}

/*
==============
PhysicsQuery_GetRef
==============
*/

int __fastcall PhysicsQuery_GetRef(const PhysicsQuery_GetClosestPointsHit *hit)
{
  return ?PhysicsQuery_GetRef@@YAHPEBUPhysicsQuery_GetClosestPointsHit@@@Z(hit);
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsWorst
==============
*/

void __fastcall PhysicsQuery_ImmediateGetClosestPointsWorst(Physics_WorldId worldId, hknpShape *shape, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData, PhysicsQuery_GetClosestPointsHit *hit)
{
  ?PhysicsQuery_ImmediateGetClosestPointsWorst@@YAXW4Physics_WorldId@@PEAVhknpShape@@PEBUcentity_t@@W4LocalClientNum_t@@AEBTvec3_t@@AEBTvec4_t@@MPEAUPhysics_GetClosestPointsExtendedData@@PEAUPhysicsQuery_GetClosestPointsHit@@@Z(worldId, shape, ent, localClientNum, point, rotation, radius, extendedData, hit);
}

/*
==============
PhysicsQuery_ExtractHitData
==============
*/

void __fastcall PhysicsQuery_ExtractHitData(const vec3_t *point, const float radius, HavokPhysics_CollisionQueryResult *result, unsigned int index, PhysicsQuery_GetClosestPointsHit *hit)
{
  ?PhysicsQuery_ExtractHitData@@YAXAEBTvec3_t@@MPEAVHavokPhysics_CollisionQueryResult@@IPEAUPhysicsQuery_GetClosestPointsHit@@@Z(point, radius, result, index, hit);
}

/*
==============
PhysicsQuery_ImmediateRaycastSightCheck
==============
*/

bool __fastcall PhysicsQuery_ImmediateRaycastSightCheck(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData)
{
  return ?PhysicsQuery_ImmediateRaycastSightCheck@@YA_NW4Physics_WorldId@@IAEBTvec3_t@@1PEAUPhysics_RaycastExtendedData@@@Z(worldId, instanceId, start, end, extendedData);
}

/*
==============
PhysicsQuery_ImmediateAABBQueryClosest
==============
*/

void __fastcall PhysicsQuery_ImmediateAABBQueryClosest(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, PhysicsQuery_AABBQueryHit *hit)
{
  ?PhysicsQuery_ImmediateAABBQueryClosest@@YAXW4Physics_WorldId@@IAEBTvec3_t@@1PEAUPhysics_AABBQueryExtendedData@@PEAUPhysicsQuery_AABBQueryHit@@@Z(worldId, instanceId, min, max, extendedData, hit);
}

/*
==============
PhysicsQuery_LegacyTrace
==============
*/

void __fastcall PhysicsQuery_LegacyTrace(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, const int *skipEntities, int skipEntityCount, int skipChildren, int contentMask, int locational, unsigned __int8 *priorityMap, Physics_QueryPhaseSelection phaseSelection)
{
  ?PhysicsQuery_LegacyTrace@@YAXW4Physics_WorldId@@PEAUtrace_t@@AEBTvec3_t@@2PEBUBounds@@PEBHHHHHPEAEW4Physics_QueryPhaseSelection@@@Z(worldId, results, start, end, bounds, skipEntities, skipEntityCount, skipChildren, contentMask, locational, priorityMap, phaseSelection);
}

/*
==============
PhysicsQuery_ImmediateAABBQuerySightCheck
==============
*/

bool __fastcall PhysicsQuery_ImmediateAABBQuerySightCheck(Physics_WorldId worldId, PhysicsObject *physObj, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData)
{
  return ?PhysicsQuery_ImmediateAABBQuerySightCheck@@YA_NW4Physics_WorldId@@PEAVPhysicsObject@@AEBTvec3_t@@2PEAUPhysics_AABBQueryExtendedData@@@Z(worldId, physObj, min, max, extendedData);
}

/*
==============
PhysicsQuery_GetIgnoreBodies
==============
*/

HavokPhysics_IgnoreBodies *__fastcall PhysicsQuery_GetIgnoreBodies(int entryId)
{
  return ?PhysicsQuery_GetIgnoreBodies@@YAPEAVHavokPhysics_IgnoreBodies@@H@Z(entryId);
}

/*
==============
PhysicsQuery_ImmediateAABBQueryClosest
==============
*/

void __fastcall PhysicsQuery_ImmediateAABBQueryClosest(Physics_WorldId worldId, PhysicsObject *physObj, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, PhysicsQuery_AABBQueryHit *hit)
{
  ?PhysicsQuery_ImmediateAABBQueryClosest@@YAXW4Physics_WorldId@@PEAVPhysicsObject@@AEBTvec3_t@@2PEAUPhysics_AABBQueryExtendedData@@PEAUPhysicsQuery_AABBQueryHit@@@Z(worldId, physObj, min, max, extendedData, hit);
}

/*
==============
PhysicsQuery_GetSVHitId
==============
*/

int __fastcall PhysicsQuery_GetSVHitId(const int ref)
{
  return ?PhysicsQuery_GetSVHitId@@YAHH@Z(ref);
}

/*
==============
PhysicsQuery_ImmediateShapecastAll
==============
*/

void __fastcall PhysicsQuery_ImmediateShapecastAll(Physics_WorldId worldId, hknpShape *shape, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, PhysicsQuery_ShapecastHit *hits, int maxNumHits, int *hitsFound)
{
  ?PhysicsQuery_ImmediateShapecastAll@@YAXW4Physics_WorldId@@PEAVhknpShape@@PEBUcentity_t@@W4LocalClientNum_t@@AEBTvec3_t@@4AEBTvec4_t@@PEAUPhysics_ShapecastExtendedData@@PEAUPhysicsQuery_ShapecastHit@@HPEAH@Z(worldId, shape, ent, localClientNum, start, end, rotation, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_LegacyBulletTrace
==============
*/

void __fastcall PhysicsQuery_LegacyBulletTrace(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, const int *skipEntities, int skipEntityCount, int skipChildren, int contentMask, int locational, unsigned __int8 *priorityMap, Physics_QueryPhaseSelection phaseSelection)
{
  ?PhysicsQuery_LegacyBulletTrace@@YAXW4Physics_WorldId@@PEAUtrace_t@@AEBTvec3_t@@2PEBUBounds@@PEBHHHHHPEAEW4Physics_QueryPhaseSelection@@@Z(worldId, results, start, end, bounds, skipEntities, skipEntityCount, skipChildren, contentMask, locational, priorityMap, phaseSelection);
}

/*
==============
PhysicsQuery_LegacyGrenadeTrace
==============
*/

void __fastcall PhysicsQuery_LegacyGrenadeTrace(trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int grenadeEntity, const int *skipEntities, int skipEntityCount, team_t skipTeamCharacters, int contentMask, Physics_QueryPhaseSelection phaseSelection, bool detail, const Physics_WorldId mainWorldId, const Physics_WorldId detailWorldId)
{
  ?PhysicsQuery_LegacyGrenadeTrace@@YAXPEAUtrace_t@@AEBTvec3_t@@1PEBUBounds@@HPEBHHW4team_t@@HW4Physics_QueryPhaseSelection@@_NW4Physics_WorldId@@7@Z(results, start, end, bounds, grenadeEntity, skipEntities, skipEntityCount, skipTeamCharacters, contentMask, phaseSelection, detail, mainWorldId, detailWorldId);
}

/*
==============
PhysicsQuery_LegacyTraceSkipEntities
==============
*/

void __fastcall PhysicsQuery_LegacyTraceSkipEntities(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, const int *skipEntities, int skipEntityCount, int skipChildren, int contentMask, int locational, unsigned __int8 *priorityMap, Physics_QueryPhaseSelection phaseSelection)
{
  ?PhysicsQuery_LegacyTraceSkipEntities@@YAXW4Physics_WorldId@@PEAUtrace_t@@AEBTvec3_t@@2PEBUBounds@@PEBHHHHHPEAEW4Physics_QueryPhaseSelection@@@Z(worldId, results, start, end, bounds, skipEntities, skipEntityCount, skipChildren, contentMask, locational, priorityMap, phaseSelection);
}

/*
==============
PhysicsQuery_ImmediateQueryPointFree
==============
*/

bool __fastcall PhysicsQuery_ImmediateQueryPointFree(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData)
{
  return ?PhysicsQuery_ImmediateQueryPointFree@@YA_NW4Physics_WorldId@@IAEBTvec3_t@@MPEAUPhysics_QueryPointExtendedData@@@Z(worldId, instanceId, point, radius, extendedData);
}

/*
==============
PhysicsQuery_ExtractHitData
==============
*/

void __fastcall PhysicsQuery_ExtractHitData(const vec3_t *start, const vec3_t *end, HavokPhysics_CollisionQueryResult *result, unsigned int index, PhysicsQuery_ShapecastHit *hit)
{
  ?PhysicsQuery_ExtractHitData@@YAXAEBTvec3_t@@0PEAVHavokPhysics_CollisionQueryResult@@IPEAUPhysicsQuery_ShapecastHit@@@Z(start, end, result, index, hit);
}

/*
==============
PhysicsQuery_AddEntityChainToIgnoreList
==============
*/

void __fastcall PhysicsQuery_AddEntityChainToIgnoreList(int svEntNum, HavokPhysics_IgnoreBodies *ignoreBodies, bool self, bool children, bool parent, bool siblings, bool linked)
{
  ?PhysicsQuery_AddEntityChainToIgnoreList@@YAXHPEAVHavokPhysics_IgnoreBodies@@_N1111@Z(svEntNum, ignoreBodies, self, children, parent, siblings, linked);
}

/*
==============
PhysicsQuery_LegacyTracePassed
==============
*/

int __fastcall PhysicsQuery_LegacyTracePassed(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int skipEntity0, int skipEntity1, int contentMask, int locational, unsigned __int8 *priorityMap, bool ignoreTransparentVolumes)
{
  return ?PhysicsQuery_LegacyTracePassed@@YAHW4Physics_WorldId@@AEBTvec3_t@@1PEBUBounds@@HHHHPEAE_N@Z(worldId, start, end, bounds, skipEntity0, skipEntity1, contentMask, locational, priorityMap, ignoreTransparentVolumes);
}

/*
==============
PhysicsQuery_ImmediateRaycastSightCheck
==============
*/

bool __fastcall PhysicsQuery_ImmediateRaycastSightCheck(Physics_WorldId worldId, const gentity_s *ent, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData)
{
  return ?PhysicsQuery_ImmediateRaycastSightCheck@@YA_NW4Physics_WorldId@@PEBUgentity_s@@AEBTvec3_t@@2PEAUPhysics_RaycastExtendedData@@@Z(worldId, ent, start, end, extendedData);
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsWorst
==============
*/

void __fastcall PhysicsQuery_ImmediateGetClosestPointsWorst(Physics_WorldId worldId, hknpShape *shape, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData, PhysicsQuery_GetClosestPointsHit *hit)
{
  ?PhysicsQuery_ImmediateGetClosestPointsWorst@@YAXW4Physics_WorldId@@PEAVhknpShape@@AEBTvec3_t@@AEBTvec4_t@@MPEAUPhysics_GetClosestPointsExtendedData@@PEAUPhysicsQuery_GetClosestPointsHit@@@Z(worldId, shape, point, rotation, radius, extendedData, hit);
}

/*
==============
PhysicsQuery_ImmediateRaycastSightCheck
==============
*/

bool __fastcall PhysicsQuery_ImmediateRaycastSightCheck(Physics_WorldId worldId, PhysicsObject *physObj, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData)
{
  return ?PhysicsQuery_ImmediateRaycastSightCheck@@YA_NW4Physics_WorldId@@PEAVPhysicsObject@@AEBTvec3_t@@2PEAUPhysics_RaycastExtendedData@@@Z(worldId, physObj, start, end, extendedData);
}

/*
==============
PhysicsQuery_LegacyTraceReleaseShapes
==============
*/

void __fastcall PhysicsQuery_LegacyTraceReleaseShapes(Physics_WorldId worldId, bool baseShapeNeedsRelease, hknpShape **shape, hknpShape **paddedShape)
{
  ?PhysicsQuery_LegacyTraceReleaseShapes@@YAXW4Physics_WorldId@@_NPEAPEAVhknpShape@@2@Z(worldId, baseShapeNeedsRelease, shape, paddedShape);
}

/*
==============
PhysicsQuery_LegacyLightSightTrace
==============
*/

int __fastcall PhysicsQuery_LegacyLightSightTrace(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, int contentMask)
{
  return ?PhysicsQuery_LegacyLightSightTrace@@YAHW4Physics_WorldId@@AEBTvec3_t@@1H@Z(worldId, start, end, contentMask);
}

/*
==============
PhysicsQuery_LegacyEntitySightTrace
==============
*/

int __fastcall PhysicsQuery_LegacyEntitySightTrace(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int contentMask, unsigned int physicsInstanceId, int entityNum)
{
  return ?PhysicsQuery_LegacyEntitySightTrace@@YAHW4Physics_WorldId@@AEBTvec3_t@@1PEBUBounds@@HIH@Z(worldId, start, end, bounds, contentMask, physicsInstanceId, entityNum);
}

/*
==============
PhysicsQuery_LegacyWorldOnlySightTrace
==============
*/

int __fastcall PhysicsQuery_LegacyWorldOnlySightTrace(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int contentMask)
{
  return ?PhysicsQuery_LegacyWorldOnlySightTrace@@YAHW4Physics_WorldId@@AEBTvec3_t@@1PEBUBounds@@H@Z(worldId, start, end, bounds, contentMask);
}

/*
==============
PhysicsQuery_ImmediateAABBQuerySightCheck
==============
*/

bool __fastcall PhysicsQuery_ImmediateAABBQuerySightCheck(Physics_WorldId worldId, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData)
{
  return ?PhysicsQuery_ImmediateAABBQuerySightCheck@@YA_NW4Physics_WorldId@@PEBUcentity_t@@W4LocalClientNum_t@@AEBTvec3_t@@3PEAUPhysics_AABBQueryExtendedData@@@Z(worldId, ent, localClientNum, min, max, extendedData);
}

/*
==============
PhysicsQuery_LegacyGetEntityPointContents
==============
*/

int __fastcall PhysicsQuery_LegacyGetEntityPointContents(Physics_WorldId worldId, const vec3_t *pos, unsigned int physicsInstanceId, int contentMask, int brushId)
{
  return ?PhysicsQuery_LegacyGetEntityPointContents@@YAHW4Physics_WorldId@@AEBTvec3_t@@IHH@Z(worldId, pos, physicsInstanceId, contentMask, brushId);
}

/*
==============
PhysicsQuery_ImmediateQueryPointFree
==============
*/

bool __fastcall PhysicsQuery_ImmediateQueryPointFree(Physics_WorldId worldId, const gentity_s *ent, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData)
{
  return ?PhysicsQuery_ImmediateQueryPointFree@@YA_NW4Physics_WorldId@@PEBUgentity_s@@AEBTvec3_t@@MPEAUPhysics_QueryPointExtendedData@@@Z(worldId, ent, point, radius, extendedData);
}

/*
==============
PhysicsQuery_ImmediateRaycastAll
==============
*/

void __fastcall PhysicsQuery_ImmediateRaycastAll(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, PhysicsQuery_RaycastHit *hits, int maxNumHits, int *hitsFound)
{
  ?PhysicsQuery_ImmediateRaycastAll@@YAXW4Physics_WorldId@@AEBTvec3_t@@1PEAUPhysics_RaycastExtendedData@@PEAUPhysicsQuery_RaycastHit@@HPEAH@Z(worldId, start, end, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_LegacyTraceRotated
==============
*/

void __fastcall PhysicsQuery_LegacyTraceRotated(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const vec3_t *angles, const Bounds *bounds, int skipEntity, int skipChildren, int contentMask, int locational, unsigned __int8 *priorityMap, Physics_QueryPhaseSelection phaseSelection, int ignoreRefs)
{
  ?PhysicsQuery_LegacyTraceRotated@@YAXW4Physics_WorldId@@PEAUtrace_t@@AEBTvec3_t@@22PEBUBounds@@HHHHPEAEW4Physics_QueryPhaseSelection@@H@Z(worldId, results, start, end, angles, bounds, skipEntity, skipChildren, contentMask, locational, priorityMap, phaseSelection, ignoreRefs);
}

/*
==============
PhysicsQuery_LegacyEntityContactCapsule
==============
*/

int __fastcall PhysicsQuery_LegacyEntityContactCapsule(Physics_WorldId worldId, const Bounds *bounds, unsigned int physicsInstanceId, const gentity_s *ent)
{
  return ?PhysicsQuery_LegacyEntityContactCapsule@@YAHW4Physics_WorldId@@PEBUBounds@@IPEBUgentity_s@@@Z(worldId, bounds, physicsInstanceId, ent);
}

/*
==============
PhysicsQuery_ImmediateQueryPointFree
==============
*/

bool __fastcall PhysicsQuery_ImmediateQueryPointFree(Physics_WorldId worldId, PhysicsObject *physObj, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData)
{
  return ?PhysicsQuery_ImmediateQueryPointFree@@YA_NW4Physics_WorldId@@PEAVPhysicsObject@@AEBTvec3_t@@MPEAUPhysics_QueryPointExtendedData@@@Z(worldId, physObj, point, radius, extendedData);
}

/*
==============
PhysicsQuery_GetResultContainer
==============
*/

HavokPhysics_CollisionQueryResult *__fastcall PhysicsQuery_GetResultContainer(PhysicsQueryResultType type, int entryId)
{
  return ?PhysicsQuery_GetResultContainer@@YAPEAVHavokPhysics_CollisionQueryResult@@W4PhysicsQueryResultType@@H@Z(type, entryId);
}

/*
==============
PhysicsQuery_AddEntityToIgnoreList
==============
*/

void __fastcall PhysicsQuery_AddEntityToIgnoreList(Physics_WorldId worldId, centity_t *ent, LocalClientNum_t localClientNum, HavokPhysics_IgnoreBodies *ignoreBodies)
{
  ?PhysicsQuery_AddEntityToIgnoreList@@YAXW4Physics_WorldId@@PEAUcentity_t@@W4LocalClientNum_t@@PEAVHavokPhysics_IgnoreBodies@@@Z(worldId, ent, localClientNum, ignoreBodies);
}

/*
==============
PhysicsQuery_ResetGetClosestPointsHit
==============
*/

void __fastcall PhysicsQuery_ResetGetClosestPointsHit(PhysicsQuery_GetClosestPointsHit *hit)
{
  ?PhysicsQuery_ResetGetClosestPointsHit@@YAXPEAUPhysicsQuery_GetClosestPointsHit@@@Z(hit);
}

/*
==============
PhysicsQuery_ExtractHitData
==============
*/

void __fastcall PhysicsQuery_ExtractHitData(const vec3_t *point, const float radius, HavokPhysics_CollisionQueryResult *result, unsigned int index, PhysicsQuery_QueryPointHit *hit)
{
  ?PhysicsQuery_ExtractHitData@@YAXAEBTvec3_t@@MPEAVHavokPhysics_CollisionQueryResult@@IPEAUPhysicsQuery_QueryPointHit@@@Z(point, radius, result, index, hit);
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsFree
==============
*/

bool __fastcall PhysicsQuery_ImmediateGetClosestPointsFree(Physics_WorldId worldId, hknpShape *shape, unsigned int instanceId, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData)
{
  return ?PhysicsQuery_ImmediateGetClosestPointsFree@@YA_NW4Physics_WorldId@@PEAVhknpShape@@IAEBTvec3_t@@AEBTvec4_t@@MPEAUPhysics_GetClosestPointsExtendedData@@@Z(worldId, shape, instanceId, point, rotation, radius, extendedData);
}

/*
==============
PhysicsQuery_ImmediateShapecastAll
==============
*/

void __fastcall PhysicsQuery_ImmediateShapecastAll(Physics_WorldId worldId, hknpShape *shape, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, PhysicsQuery_ShapecastHit *hits, int maxNumHits, int *hitsFound)
{
  ?PhysicsQuery_ImmediateShapecastAll@@YAXW4Physics_WorldId@@PEAVhknpShape@@AEBTvec3_t@@2AEBTvec4_t@@PEAUPhysics_ShapecastExtendedData@@PEAUPhysicsQuery_ShapecastHit@@HPEAH@Z(worldId, shape, start, end, rotation, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateAABBQuerySightCheck
==============
*/

bool __fastcall PhysicsQuery_ImmediateAABBQuerySightCheck(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData)
{
  return ?PhysicsQuery_ImmediateAABBQuerySightCheck@@YA_NW4Physics_WorldId@@IAEBTvec3_t@@1PEAUPhysics_AABBQueryExtendedData@@@Z(worldId, instanceId, min, max, extendedData);
}

/*
==============
PhysicsQuery_ImmediateAABBQueryClosest
==============
*/

void __fastcall PhysicsQuery_ImmediateAABBQueryClosest(Physics_WorldId worldId, const gentity_s *ent, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, PhysicsQuery_AABBQueryHit *hit)
{
  ?PhysicsQuery_ImmediateAABBQueryClosest@@YAXW4Physics_WorldId@@PEBUgentity_s@@AEBTvec3_t@@2PEAUPhysics_AABBQueryExtendedData@@PEAUPhysicsQuery_AABBQueryHit@@@Z(worldId, ent, min, max, extendedData, hit);
}

/*
==============
PhysicsQuery_ImmediateAABBQueryAll
==============
*/

void __fastcall PhysicsQuery_ImmediateAABBQueryAll(Physics_WorldId worldId, PhysicsObject *physObj, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, PhysicsQuery_AABBQueryHit *hits, int maxNumHits, int *hitsFound)
{
  ?PhysicsQuery_ImmediateAABBQueryAll@@YAXW4Physics_WorldId@@PEAVPhysicsObject@@AEBTvec3_t@@2PEAUPhysics_AABBQueryExtendedData@@PEAUPhysicsQuery_AABBQueryHit@@HPEAH@Z(worldId, physObj, min, max, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsAll
==============
*/

void __fastcall PhysicsQuery_ImmediateGetClosestPointsAll(Physics_WorldId worldId, hknpShape *shape, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData, PhysicsQuery_GetClosestPointsHit *hits, int maxNumHits, int *hitsFound)
{
  ?PhysicsQuery_ImmediateGetClosestPointsAll@@YAXW4Physics_WorldId@@PEAVhknpShape@@PEBUcentity_t@@W4LocalClientNum_t@@AEBTvec3_t@@AEBTvec4_t@@MPEAUPhysics_GetClosestPointsExtendedData@@PEAUPhysicsQuery_GetClosestPointsHit@@HPEAH@Z(worldId, shape, ent, localClientNum, point, rotation, radius, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateRaycastSightCheck
==============
*/

bool __fastcall PhysicsQuery_ImmediateRaycastSightCheck(Physics_WorldId worldId, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData)
{
  return ?PhysicsQuery_ImmediateRaycastSightCheck@@YA_NW4Physics_WorldId@@PEBUcentity_t@@W4LocalClientNum_t@@AEBTvec3_t@@3PEAUPhysics_RaycastExtendedData@@@Z(worldId, ent, localClientNum, start, end, extendedData);
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsAll
==============
*/

void __fastcall PhysicsQuery_ImmediateGetClosestPointsAll(Physics_WorldId worldId, hknpShape *shape, unsigned int instanceId, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData, PhysicsQuery_GetClosestPointsHit *hits, int maxNumHits, int *hitsFound)
{
  ?PhysicsQuery_ImmediateGetClosestPointsAll@@YAXW4Physics_WorldId@@PEAVhknpShape@@IAEBTvec3_t@@AEBTvec4_t@@MPEAUPhysics_GetClosestPointsExtendedData@@PEAUPhysicsQuery_GetClosestPointsHit@@HPEAH@Z(worldId, shape, instanceId, point, rotation, radius, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateShapecastClosest
==============
*/

void __fastcall PhysicsQuery_ImmediateShapecastClosest(Physics_WorldId worldId, hknpShape *shape, PhysicsObject *physObj, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, PhysicsQuery_ShapecastHit *hit)
{
  ?PhysicsQuery_ImmediateShapecastClosest@@YAXW4Physics_WorldId@@PEAVhknpShape@@PEAVPhysicsObject@@AEBTvec3_t@@3AEBTvec4_t@@PEAUPhysics_ShapecastExtendedData@@PEAUPhysicsQuery_ShapecastHit@@@Z(worldId, shape, physObj, start, end, rotation, extendedData, hit);
}

/*
==============
PhysicsQuery_ResetRaycastHit
==============
*/

void __fastcall PhysicsQuery_ResetRaycastHit(PhysicsQuery_RaycastHit *hit)
{
  ?PhysicsQuery_ResetRaycastHit@@YAXPEAUPhysicsQuery_RaycastHit@@@Z(hit);
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsFree
==============
*/

bool __fastcall PhysicsQuery_ImmediateGetClosestPointsFree(Physics_WorldId worldId, hknpShape *shape, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData)
{
  return ?PhysicsQuery_ImmediateGetClosestPointsFree@@YA_NW4Physics_WorldId@@PEAVhknpShape@@PEBUcentity_t@@W4LocalClientNum_t@@AEBTvec3_t@@AEBTvec4_t@@MPEAUPhysics_GetClosestPointsExtendedData@@@Z(worldId, shape, ent, localClientNum, point, rotation, radius, extendedData);
}

/*
==============
PhysicsQuery_ImmediateAABBQueryAll
==============
*/

void __fastcall PhysicsQuery_ImmediateAABBQueryAll(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, PhysicsQuery_AABBQueryHit *hits, int maxNumHits, int *hitsFound)
{
  ?PhysicsQuery_ImmediateAABBQueryAll@@YAXW4Physics_WorldId@@IAEBTvec3_t@@1PEAUPhysics_AABBQueryExtendedData@@PEAUPhysicsQuery_AABBQueryHit@@HPEAH@Z(worldId, instanceId, min, max, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_Shutdown
==============
*/

void PhysicsQuery_Shutdown(void)
{
  ?PhysicsQuery_Shutdown@@YAXXZ();
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsWorst
==============
*/

void __fastcall PhysicsQuery_ImmediateGetClosestPointsWorst(Physics_WorldId worldId, hknpShape *shape, PhysicsObject *physObj, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData, PhysicsQuery_GetClosestPointsHit *hit)
{
  ?PhysicsQuery_ImmediateGetClosestPointsWorst@@YAXW4Physics_WorldId@@PEAVhknpShape@@PEAVPhysicsObject@@AEBTvec3_t@@AEBTvec4_t@@MPEAUPhysics_GetClosestPointsExtendedData@@PEAUPhysicsQuery_GetClosestPointsHit@@@Z(worldId, shape, physObj, point, rotation, radius, extendedData, hit);
}

/*
==============
PhysicsQuery_LegacyVehicleCapsuleTrace
==============
*/

void __fastcall PhysicsQuery_LegacyVehicleCapsuleTrace(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int *skipEntities, int numSkipEntities, int contentMask, const playerState_s *ps, bool allowCheapPointQueries, PhysicsQuery_ContextSettings *traceContext)
{
  ?PhysicsQuery_LegacyVehicleCapsuleTrace@@YAXW4Physics_WorldId@@PEAUtrace_t@@AEBTvec3_t@@2PEBUBounds@@PEAHHHPEBUplayerState_s@@_NPEAVPhysicsQuery_ContextSettings@@@Z(worldId, results, start, end, bounds, skipEntities, numSkipEntities, contentMask, ps, allowCheapPointQueries, traceContext);
}

/*
==============
PhysicsQuery_ImmediateQueryPointAll
==============
*/

void __fastcall PhysicsQuery_ImmediateQueryPointAll(Physics_WorldId worldId, PhysicsObject *physObj, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData, PhysicsQuery_QueryPointHit *hits, int maxNumHits, int *hitsFound)
{
  ?PhysicsQuery_ImmediateQueryPointAll@@YAXW4Physics_WorldId@@PEAVPhysicsObject@@AEBTvec3_t@@MPEAUPhysics_QueryPointExtendedData@@PEAUPhysicsQuery_QueryPointHit@@HPEAH@Z(worldId, physObj, point, radius, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_LegacyCapsuleBrushEntityTrace
==============
*/

void __fastcall PhysicsQuery_LegacyCapsuleBrushEntityTrace(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int contentMask, unsigned int instanceId, int brushId, const vec3_t *brushOrigin, const vec3_t *brushAngles, const playerState_s *ps)
{
  ?PhysicsQuery_LegacyCapsuleBrushEntityTrace@@YAXW4Physics_WorldId@@PEAUtrace_t@@AEBTvec3_t@@2PEBUBounds@@HIH22PEBUplayerState_s@@@Z(worldId, results, start, end, bounds, contentMask, instanceId, brushId, brushOrigin, brushAngles, ps);
}

/*
==============
PhysicsQuery_LegacyPenetrationTest
==============
*/

void __fastcall PhysicsQuery_LegacyPenetrationTest(Physics_WorldId worldId, const playerState_s *ps, bool *penetrating, bool *penetratingBrushBasis, vec3_t *penetration, const vec3_t *pos, const vec3_t *angles, const Bounds *bounds, int contentMask, unsigned int physicsInstanceId, const vec3_t *brushAngles, int ignoreEnt, bool vehicleTrace)
{
  ?PhysicsQuery_LegacyPenetrationTest@@YAXW4Physics_WorldId@@PEBUplayerState_s@@PEA_N2AEATvec3_t@@AEBT3@PEBT3@PEBUBounds@@HI4H_N@Z(worldId, ps, penetrating, penetratingBrushBasis, penetration, pos, angles, bounds, contentMask, physicsInstanceId, brushAngles, ignoreEnt, vehicleTrace);
}

/*
==============
PhysicsQuery_ImmediateQueryPointWorst
==============
*/

void __fastcall PhysicsQuery_ImmediateQueryPointWorst(Physics_WorldId worldId, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData, PhysicsQuery_QueryPointHit *hit)
{
  ?PhysicsQuery_ImmediateQueryPointWorst@@YAXW4Physics_WorldId@@PEBUcentity_t@@W4LocalClientNum_t@@AEBTvec3_t@@MPEAUPhysics_QueryPointExtendedData@@PEAUPhysicsQuery_QueryPointHit@@@Z(worldId, ent, localClientNum, point, radius, extendedData, hit);
}

/*
==============
PhysicsQuery_LegacyBrushModelSightTraceAroundCorners
==============
*/

double __fastcall PhysicsQuery_LegacyBrushModelSightTraceAroundCorners(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, int contentMask)
{
  double result; 

  *(float *)&result = ?PhysicsQuery_LegacyBrushModelSightTraceAroundCorners@@YAMW4Physics_WorldId@@AEBTvec3_t@@1H@Z(worldId, start, end, contentMask);
  return result;
}

/*
==============
PhysicsQuery_ImmediateAABBQueryAll
==============
*/

void __fastcall PhysicsQuery_ImmediateAABBQueryAll(Physics_WorldId worldId, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, PhysicsQuery_AABBQueryHit *hits, int maxNumHits, int *hitsFound)
{
  ?PhysicsQuery_ImmediateAABBQueryAll@@YAXW4Physics_WorldId@@AEBTvec3_t@@1PEAUPhysics_AABBQueryExtendedData@@PEAUPhysicsQuery_AABBQueryHit@@HPEAH@Z(worldId, min, max, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateAABBQuerySightCheck
==============
*/

bool __fastcall PhysicsQuery_ImmediateAABBQuerySightCheck(Physics_WorldId worldId, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData)
{
  return ?PhysicsQuery_ImmediateAABBQuerySightCheck@@YA_NW4Physics_WorldId@@AEBTvec3_t@@1PEAUPhysics_AABBQueryExtendedData@@@Z(worldId, min, max, extendedData);
}

/*
==============
PhysicsQuery_ImmediateQueryPointWorst
==============
*/

void __fastcall PhysicsQuery_ImmediateQueryPointWorst(Physics_WorldId worldId, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData, PhysicsQuery_QueryPointHit *hit)
{
  ?PhysicsQuery_ImmediateQueryPointWorst@@YAXW4Physics_WorldId@@AEBTvec3_t@@MPEAUPhysics_QueryPointExtendedData@@PEAUPhysicsQuery_QueryPointHit@@@Z(worldId, point, radius, extendedData, hit);
}

/*
==============
PhysicsQuery_LegacyTraceProcessAllSolid
==============
*/

void __fastcall PhysicsQuery_LegacyTraceProcessAllSolid(Physics_WorldId worldId, trace_t *results, const vec4_t *quat, const int legacyEntryId, int contentMask, hknpShape *nonBrushShape, Physics_QueryPhaseSelection phaseSelection, hknpShape *shape, const vec3_t *end)
{
  ?PhysicsQuery_LegacyTraceProcessAllSolid@@YAXW4Physics_WorldId@@PEAUtrace_t@@AEBTvec4_t@@HHPEAVhknpShape@@W4Physics_QueryPhaseSelection@@3AEBTvec3_t@@@Z(worldId, results, quat, legacyEntryId, contentMask, nonBrushShape, phaseSelection, shape, end);
}

/*
==============
PhysicsQuery_ImmediateRaycastAll
==============
*/

void __fastcall PhysicsQuery_ImmediateRaycastAll(Physics_WorldId worldId, const gentity_s *ent, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, PhysicsQuery_RaycastHit *hits, int maxNumHits, int *hitsFound)
{
  ?PhysicsQuery_ImmediateRaycastAll@@YAXW4Physics_WorldId@@PEBUgentity_s@@AEBTvec3_t@@2PEAUPhysics_RaycastExtendedData@@PEAUPhysicsQuery_RaycastHit@@HPEAH@Z(worldId, ent, start, end, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateAABBQueryClosest
==============
*/

void __fastcall PhysicsQuery_ImmediateAABBQueryClosest(Physics_WorldId worldId, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, PhysicsQuery_AABBQueryHit *hit)
{
  ?PhysicsQuery_ImmediateAABBQueryClosest@@YAXW4Physics_WorldId@@PEBUcentity_t@@W4LocalClientNum_t@@AEBTvec3_t@@3PEAUPhysics_AABBQueryExtendedData@@PEAUPhysicsQuery_AABBQueryHit@@@Z(worldId, ent, localClientNum, min, max, extendedData, hit);
}

/*
==============
PhysicsQuery_ImmediateQueryPointFree
==============
*/

bool __fastcall PhysicsQuery_ImmediateQueryPointFree(Physics_WorldId worldId, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData)
{
  return ?PhysicsQuery_ImmediateQueryPointFree@@YA_NW4Physics_WorldId@@PEBUcentity_t@@W4LocalClientNum_t@@AEBTvec3_t@@MPEAUPhysics_QueryPointExtendedData@@@Z(worldId, ent, localClientNum, point, radius, extendedData);
}

/*
==============
GetTraceShapeBuffers
==============
*/

char *__fastcall GetTraceShapeBuffers(int entryId)
{
  return ?GetTraceShapeBuffers@@YAPEADH@Z(entryId);
}

/*
==============
PhysicsQuery_LegacyTraceSkipEntities
==============
*/

void __fastcall PhysicsQuery_LegacyTraceSkipEntities(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, const int *skipEntities, int skipEntityCount, int skipChildren, int contentMask, int locational, unsigned __int8 *priorityMap, Physics_QueryPhaseSelection phaseSelection, int ignoreRefs)
{
  ?PhysicsQuery_LegacyTraceSkipEntities@@YAXW4Physics_WorldId@@PEAUtrace_t@@AEBTvec3_t@@2PEBUBounds@@PEBHHHHHPEAEW4Physics_QueryPhaseSelection@@H@Z(worldId, results, start, end, bounds, skipEntities, skipEntityCount, skipChildren, contentMask, locational, priorityMap, phaseSelection, ignoreRefs);
}

/*
==============
PhysicsQuery_ResetAABBQueryHit
==============
*/

void __fastcall PhysicsQuery_ResetAABBQueryHit(PhysicsQuery_AABBQueryHit *hit)
{
  ?PhysicsQuery_ResetAABBQueryHit@@YAXPEAUPhysicsQuery_AABBQueryHit@@@Z(hit);
}

/*
==============
PhysicsQuery_LegacyGetPointContents
==============
*/

int __fastcall PhysicsQuery_LegacyGetPointContents(Physics_WorldId worldId, const vec3_t *pos, int skipEntity, int contentMask)
{
  return ?PhysicsQuery_LegacyGetPointContents@@YAHW4Physics_WorldId@@AEBTvec3_t@@HH@Z(worldId, pos, skipEntity, contentMask);
}

/*
==============
PhysicsQuery_AddPhysicsObjectToIgnoreList
==============
*/

void __fastcall PhysicsQuery_AddPhysicsObjectToIgnoreList(Physics_WorldId worldId, PhysicsObject *physObj, HavokPhysics_IgnoreBodies *ignoreBodies)
{
  ?PhysicsQuery_AddPhysicsObjectToIgnoreList@@YAXW4Physics_WorldId@@PEAVPhysicsObject@@PEAVHavokPhysics_IgnoreBodies@@@Z(worldId, physObj, ignoreBodies);
}

/*
==============
PhysicsQuery_ImmediateShapecastSightCheck
==============
*/

bool __fastcall PhysicsQuery_ImmediateShapecastSightCheck(Physics_WorldId worldId, hknpShape *shape, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData)
{
  return ?PhysicsQuery_ImmediateShapecastSightCheck@@YA_NW4Physics_WorldId@@PEAVhknpShape@@AEBTvec3_t@@2AEBTvec4_t@@PEAUPhysics_ShapecastExtendedData@@@Z(worldId, shape, start, end, rotation, extendedData);
}

/*
==============
PhysicsQuery_LegacyEntityContactPointPhysicsOnly
==============
*/

int __fastcall PhysicsQuery_LegacyEntityContactPointPhysicsOnly(Physics_WorldId worldId, const vec3_t *pos, unsigned int physicsInstanceId)
{
  return ?PhysicsQuery_LegacyEntityContactPointPhysicsOnly@@YAHW4Physics_WorldId@@AEBTvec3_t@@I@Z(worldId, pos, physicsInstanceId);
}

/*
==============
PhysicsQuery_ImmediateQueryPointFree
==============
*/

bool __fastcall PhysicsQuery_ImmediateQueryPointFree(Physics_WorldId worldId, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData)
{
  return ?PhysicsQuery_ImmediateQueryPointFree@@YA_NW4Physics_WorldId@@AEBTvec3_t@@MPEAUPhysics_QueryPointExtendedData@@@Z(worldId, point, radius, extendedData);
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsFree
==============
*/

bool __fastcall PhysicsQuery_ImmediateGetClosestPointsFree(Physics_WorldId worldId, hknpShape *shape, const gentity_s *ent, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData)
{
  return ?PhysicsQuery_ImmediateGetClosestPointsFree@@YA_NW4Physics_WorldId@@PEAVhknpShape@@PEBUgentity_s@@AEBTvec3_t@@AEBTvec4_t@@MPEAUPhysics_GetClosestPointsExtendedData@@@Z(worldId, shape, ent, point, rotation, radius, extendedData);
}

/*
==============
PhysicsQuery_ImmediateRaycastAll
==============
*/

void __fastcall PhysicsQuery_ImmediateRaycastAll(Physics_WorldId worldId, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, PhysicsQuery_RaycastHit *hits, int maxNumHits, int *hitsFound)
{
  ?PhysicsQuery_ImmediateRaycastAll@@YAXW4Physics_WorldId@@PEBUcentity_t@@W4LocalClientNum_t@@AEBTvec3_t@@3PEAUPhysics_RaycastExtendedData@@PEAUPhysicsQuery_RaycastHit@@HPEAH@Z(worldId, ent, localClientNum, start, end, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateShapecastSightCheck
==============
*/

bool __fastcall PhysicsQuery_ImmediateShapecastSightCheck(Physics_WorldId worldId, hknpShape *shape, const gentity_s *ent, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData)
{
  return ?PhysicsQuery_ImmediateShapecastSightCheck@@YA_NW4Physics_WorldId@@PEAVhknpShape@@PEBUgentity_s@@AEBTvec3_t@@3AEBTvec4_t@@PEAUPhysics_ShapecastExtendedData@@@Z(worldId, shape, ent, start, end, rotation, extendedData);
}

/*
==============
PhysicsQuery_ImmediateQueryPointAll
==============
*/

void __fastcall PhysicsQuery_ImmediateQueryPointAll(Physics_WorldId worldId, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData, PhysicsQuery_QueryPointHit *hits, int maxNumHits, int *hitsFound)
{
  ?PhysicsQuery_ImmediateQueryPointAll@@YAXW4Physics_WorldId@@AEBTvec3_t@@MPEAUPhysics_QueryPointExtendedData@@PEAUPhysicsQuery_QueryPointHit@@HPEAH@Z(worldId, point, radius, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateRaycastSightCheck
==============
*/

bool __fastcall PhysicsQuery_ImmediateRaycastSightCheck(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData)
{
  return ?PhysicsQuery_ImmediateRaycastSightCheck@@YA_NW4Physics_WorldId@@AEBTvec3_t@@1PEAUPhysics_RaycastExtendedData@@@Z(worldId, start, end, extendedData);
}

/*
==============
PhysicsQuery_ExtractHitData
==============
*/

void __fastcall PhysicsQuery_ExtractHitData(HavokPhysics_CollisionQueryResult *result, unsigned int index, PhysicsQuery_AABBQueryHit *hit)
{
  ?PhysicsQuery_ExtractHitData@@YAXPEAVHavokPhysics_CollisionQueryResult@@IPEAUPhysicsQuery_AABBQueryHit@@@Z(result, index, hit);
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsWorst
==============
*/

void __fastcall PhysicsQuery_ImmediateGetClosestPointsWorst(Physics_WorldId worldId, hknpShape *shape, const gentity_s *ent, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData, PhysicsQuery_GetClosestPointsHit *hit)
{
  ?PhysicsQuery_ImmediateGetClosestPointsWorst@@YAXW4Physics_WorldId@@PEAVhknpShape@@PEBUgentity_s@@AEBTvec3_t@@AEBTvec4_t@@MPEAUPhysics_GetClosestPointsExtendedData@@PEAUPhysicsQuery_GetClosestPointsHit@@@Z(worldId, shape, ent, point, rotation, radius, extendedData, hit);
}

/*
==============
PhysicsQuery_TraceCmd
==============
*/

void __fastcall PhysicsQuery_TraceCmd(const void *const cmdData)
{
  ?PhysicsQuery_TraceCmd@@YAXQEBX@Z(cmdData);
}

/*
==============
PhysicsQuery_LegacySightTraceWithEntityBBox
==============
*/

int __fastcall PhysicsQuery_LegacySightTraceWithEntityBBox(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int skipEntity, int contentMask)
{
  return ?PhysicsQuery_LegacySightTraceWithEntityBBox@@YAHW4Physics_WorldId@@AEBTvec3_t@@1PEBUBounds@@HH@Z(worldId, start, end, bounds, skipEntity, contentMask);
}

/*
==============
PhysicsQuery_LegacyPenetrationBrushEntityTrace
==============
*/

void __fastcall PhysicsQuery_LegacyPenetrationBrushEntityTrace(Physics_WorldId worldId, vec3_t *normal, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int contentMask, unsigned int physicsInstanceId, const playerState_s *ps, int brushId, const vec3_t *brushOrigin, const vec3_t *brushAngles)
{
  ?PhysicsQuery_LegacyPenetrationBrushEntityTrace@@YAXW4Physics_WorldId@@AEATvec3_t@@AEBT2@2PEBUBounds@@HIPEBUplayerState_s@@H22@Z(worldId, normal, start, end, bounds, contentMask, physicsInstanceId, ps, brushId, brushOrigin, brushAngles);
}

/*
==============
PhysicsQuery_GetRef
==============
*/

int __fastcall PhysicsQuery_GetRef(const PhysicsQuery_AABBQueryHit *hit)
{
  return ?PhysicsQuery_GetRef@@YAHPEBUPhysicsQuery_AABBQueryHit@@@Z(hit);
}

/*
==============
PhysicsQuery_InitForWorld
==============
*/

void __fastcall PhysicsQuery_InitForWorld(Physics_WorldId worldId)
{
  ?PhysicsQuery_InitForWorld@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
PhysicsQuery_LegacySightTrace
==============
*/

int __fastcall PhysicsQuery_LegacySightTrace(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int skipEntity0, int skipEntity1, int contentMask)
{
  return ?PhysicsQuery_LegacySightTrace@@YAHW4Physics_WorldId@@AEBTvec3_t@@1PEBUBounds@@HHH@Z(worldId, start, end, bounds, skipEntity0, skipEntity1, contentMask);
}

/*
==============
PhysicsQuery_ResetQueryPointHit
==============
*/

void __fastcall PhysicsQuery_ResetQueryPointHit(PhysicsQuery_QueryPointHit *hit)
{
  ?PhysicsQuery_ResetQueryPointHit@@YAXPEAUPhysicsQuery_QueryPointHit@@@Z(hit);
}

/*
==============
PhysicsQuery_GetCLHitId
==============
*/

int __fastcall PhysicsQuery_GetCLHitId(const int ref)
{
  return ?PhysicsQuery_GetCLHitId@@YAHH@Z(ref);
}

/*
==============
PhysicsQuery_ImmediateShapecastAll
==============
*/

void __fastcall PhysicsQuery_ImmediateShapecastAll(Physics_WorldId worldId, hknpShape *shape, unsigned int instanceId, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, PhysicsQuery_ShapecastHit *hits, int maxNumHits, int *hitsFound)
{
  ?PhysicsQuery_ImmediateShapecastAll@@YAXW4Physics_WorldId@@PEAVhknpShape@@IAEBTvec3_t@@2AEBTvec4_t@@PEAUPhysics_ShapecastExtendedData@@PEAUPhysicsQuery_ShapecastHit@@HPEAH@Z(worldId, shape, instanceId, start, end, rotation, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsWorst
==============
*/

void __fastcall PhysicsQuery_ImmediateGetClosestPointsWorst(Physics_WorldId worldId, hknpShape *shape, unsigned int instanceId, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData, PhysicsQuery_GetClosestPointsHit *hit)
{
  ?PhysicsQuery_ImmediateGetClosestPointsWorst@@YAXW4Physics_WorldId@@PEAVhknpShape@@IAEBTvec3_t@@AEBTvec4_t@@MPEAUPhysics_GetClosestPointsExtendedData@@PEAUPhysicsQuery_GetClosestPointsHit@@@Z(worldId, shape, instanceId, point, rotation, radius, extendedData, hit);
}

/*
==============
PhysicsQuery_LegacyCapsuleTraceAngles
==============
*/

void __fastcall PhysicsQuery_LegacyCapsuleTraceAngles(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int *skipEntities, int numSkipEntities, int contentMask, const playerState_s *ps, bool allowCheapPointQueries, const vec3_t *overrideAngles)
{
  ?PhysicsQuery_LegacyCapsuleTraceAngles@@YAXW4Physics_WorldId@@PEAUtrace_t@@AEBTvec3_t@@2PEBUBounds@@PEAHHHPEBUplayerState_s@@_N2@Z(worldId, results, start, end, bounds, skipEntities, numSkipEntities, contentMask, ps, allowCheapPointQueries, overrideAngles);
}

/*
==============
PhysicsQuery_GetRef
==============
*/

int __fastcall PhysicsQuery_GetRef(const PhysicsQuery_RaycastHit *hit)
{
  return ?PhysicsQuery_GetRef@@YAHPEBUPhysicsQuery_RaycastHit@@@Z(hit);
}

/*
==============
PhysicsQuery_GetClosestResult
==============
*/

HavokPhysics_CollisionQueryResult *__fastcall PhysicsQuery_GetClosestResult(Physics_WorldId worldId)
{
  return ?PhysicsQuery_GetClosestResult@@YAPEAVHavokPhysics_CollisionQueryResult@@W4Physics_WorldId@@@Z(worldId);
}

/*
==============
PhysicsQuery_AddPhysicsInstanceToIgnoreList
==============
*/

void __fastcall PhysicsQuery_AddPhysicsInstanceToIgnoreList(Physics_WorldId worldId, unsigned int instanceId, HavokPhysics_IgnoreBodies *ignoreBodies)
{
  ?PhysicsQuery_AddPhysicsInstanceToIgnoreList@@YAXW4Physics_WorldId@@IPEAVHavokPhysics_IgnoreBodies@@@Z(worldId, instanceId, ignoreBodies);
}

/*
==============
PhysicsQuery_ImmediateAABBQuerySightCheck
==============
*/

bool __fastcall PhysicsQuery_ImmediateAABBQuerySightCheck(Physics_WorldId worldId, const gentity_s *ent, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData)
{
  return ?PhysicsQuery_ImmediateAABBQuerySightCheck@@YA_NW4Physics_WorldId@@PEBUgentity_s@@AEBTvec3_t@@2PEAUPhysics_AABBQueryExtendedData@@@Z(worldId, ent, min, max, extendedData);
}

/*
==============
PhysicsQuery_ImmediateRaycastClosest
==============
*/

void __fastcall PhysicsQuery_ImmediateRaycastClosest(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, PhysicsQuery_RaycastHit *hit)
{
  ?PhysicsQuery_ImmediateRaycastClosest@@YAXW4Physics_WorldId@@IAEBTvec3_t@@1PEAUPhysics_RaycastExtendedData@@PEAUPhysicsQuery_RaycastHit@@@Z(worldId, instanceId, start, end, extendedData, hit);
}

/*
==============
PhysicsQuery_LegacyTraceCreateShape
==============
*/

bool __fastcall PhysicsQuery_LegacyTraceCreateShape(Physics_WorldId worldId, const playerState_s *ps, const Bounds *bounds, int locational, char *shapeBuffers, bool vehicleTrace, hknpShape **shape, hknpShape **nonBrushShape, hknpShape **paddedShape, PhysicsQuery_ContextSettings *contextSettings)
{
  return ?PhysicsQuery_LegacyTraceCreateShape@@YA_NW4Physics_WorldId@@PEBUplayerState_s@@PEBUBounds@@HPEAD_NPEAPEAVhknpShape@@55PEAVPhysicsQuery_ContextSettings@@@Z(worldId, ps, bounds, locational, shapeBuffers, vehicleTrace, shape, nonBrushShape, paddedShape, contextSettings);
}

/*
==============
PhysicsQuery_ShutdownForWorld
==============
*/

void __fastcall PhysicsQuery_ShutdownForWorld(Physics_WorldId worldId)
{
  ?PhysicsQuery_ShutdownForWorld@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsFree
==============
*/

bool __fastcall PhysicsQuery_ImmediateGetClosestPointsFree(Physics_WorldId worldId, hknpShape *shape, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData)
{
  return ?PhysicsQuery_ImmediateGetClosestPointsFree@@YA_NW4Physics_WorldId@@PEAVhknpShape@@AEBTvec3_t@@AEBTvec4_t@@MPEAUPhysics_GetClosestPointsExtendedData@@@Z(worldId, shape, point, rotation, radius, extendedData);
}

/*
==============
PhysicsQuery_ResetShapecastHit
==============
*/

void __fastcall PhysicsQuery_ResetShapecastHit(PhysicsQuery_ShapecastHit *hit)
{
  ?PhysicsQuery_ResetShapecastHit@@YAXPEAUPhysicsQuery_ShapecastHit@@@Z(hit);
}

/*
==============
PhysicsQuery_GetAnyResult
==============
*/

HavokPhysics_CollisionQueryResult *__fastcall PhysicsQuery_GetAnyResult(Physics_WorldId worldId)
{
  return ?PhysicsQuery_GetAnyResult@@YAPEAVHavokPhysics_CollisionQueryResult@@W4Physics_WorldId@@@Z(worldId);
}

/*
==============
PhysicsQuery_ImmediateShapecastSightCheck
==============
*/

bool __fastcall PhysicsQuery_ImmediateShapecastSightCheck(Physics_WorldId worldId, hknpShape *shape, PhysicsObject *physObj, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData)
{
  return ?PhysicsQuery_ImmediateShapecastSightCheck@@YA_NW4Physics_WorldId@@PEAVhknpShape@@PEAVPhysicsObject@@AEBTvec3_t@@3AEBTvec4_t@@PEAUPhysics_ShapecastExtendedData@@@Z(worldId, shape, physObj, start, end, rotation, extendedData);
}

/*
==============
PhysicsQuery_IsWorldInitialized
==============
*/

bool __fastcall PhysicsQuery_IsWorldInitialized(Physics_WorldId worldId)
{
  return ?PhysicsQuery_IsWorldInitialized@@YA_NW4Physics_WorldId@@@Z(worldId);
}

/*
==============
PhysicsQuery_GetCLHitCategory
==============
*/

PhysicsQuery_CLHitCategory __fastcall PhysicsQuery_GetCLHitCategory(const int ref)
{
  return ?PhysicsQuery_GetCLHitCategory@@YA?AW4PhysicsQuery_CLHitCategory@@H@Z(ref);
}

/*
==============
PhysicsQuery_TriggerAABBBroadphaseQuery
==============
*/

void __fastcall PhysicsQuery_TriggerAABBBroadphaseQuery(Physics_WorldId worldId, const vec3_t *aabbMin, const vec3_t *aabbMax, int contents, PhysicsQuery_Collected<unsigned short> *collectedEnts, PhysicsQuery_Collected<unsigned int> *collectedScriptables)
{
  ?PhysicsQuery_TriggerAABBBroadphaseQuery@@YAXW4Physics_WorldId@@AEBTvec3_t@@1HAEAU?$PhysicsQuery_Collected@G@@PEAU?$PhysicsQuery_Collected@I@@@Z(worldId, aabbMin, aabbMax, contents, collectedEnts, collectedScriptables);
}

/*
==============
PhysicsQuery_ImmediateShapecastClosest
==============
*/

void __fastcall PhysicsQuery_ImmediateShapecastClosest(Physics_WorldId worldId, hknpShape *shape, unsigned int instanceId, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, PhysicsQuery_ShapecastHit *hit)
{
  ?PhysicsQuery_ImmediateShapecastClosest@@YAXW4Physics_WorldId@@PEAVhknpShape@@IAEBTvec3_t@@2AEBTvec4_t@@PEAUPhysics_ShapecastExtendedData@@PEAUPhysicsQuery_ShapecastHit@@@Z(worldId, shape, instanceId, start, end, rotation, extendedData, hit);
}

/*
==============
PhysicsQuery_ImmediateShapecastClosest
==============
*/

void __fastcall PhysicsQuery_ImmediateShapecastClosest(Physics_WorldId worldId, hknpShape *shape, const gentity_s *ent, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, PhysicsQuery_ShapecastHit *hit)
{
  ?PhysicsQuery_ImmediateShapecastClosest@@YAXW4Physics_WorldId@@PEAVhknpShape@@PEBUgentity_s@@AEBTvec3_t@@3AEBTvec4_t@@PEAUPhysics_ShapecastExtendedData@@PEAUPhysicsQuery_ShapecastHit@@@Z(worldId, shape, ent, start, end, rotation, extendedData, hit);
}

/*
==============
PhysicsQuery_ExtractHitData
==============
*/

void __fastcall PhysicsQuery_ExtractHitData(const vec3_t *start, const vec3_t *end, HavokPhysics_CollisionQueryResult *result, unsigned int index, PhysicsQuery_RaycastHit *hit)
{
  ?PhysicsQuery_ExtractHitData@@YAXAEBTvec3_t@@0PEAVHavokPhysics_CollisionQueryResult@@IPEAUPhysicsQuery_RaycastHit@@@Z(start, end, result, index, hit);
}

/*
==============
PhysicsQuery_ImmediateQueryPointWorst
==============
*/

void __fastcall PhysicsQuery_ImmediateQueryPointWorst(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData, PhysicsQuery_QueryPointHit *hit)
{
  ?PhysicsQuery_ImmediateQueryPointWorst@@YAXW4Physics_WorldId@@IAEBTvec3_t@@MPEAUPhysics_QueryPointExtendedData@@PEAUPhysicsQuery_QueryPointHit@@@Z(worldId, instanceId, point, radius, extendedData, hit);
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsAll
==============
*/

void __fastcall PhysicsQuery_ImmediateGetClosestPointsAll(Physics_WorldId worldId, hknpShape *shape, PhysicsObject *physObj, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData, PhysicsQuery_GetClosestPointsHit *hits, int maxNumHits, int *hitsFound)
{
  ?PhysicsQuery_ImmediateGetClosestPointsAll@@YAXW4Physics_WorldId@@PEAVhknpShape@@PEAVPhysicsObject@@AEBTvec3_t@@AEBTvec4_t@@MPEAUPhysics_GetClosestPointsExtendedData@@PEAUPhysicsQuery_GetClosestPointsHit@@HPEAH@Z(worldId, shape, physObj, point, rotation, radius, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateShapecastClosest
==============
*/

void __fastcall PhysicsQuery_ImmediateShapecastClosest(Physics_WorldId worldId, hknpShape *shape, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, PhysicsQuery_ShapecastHit *hit)
{
  ?PhysicsQuery_ImmediateShapecastClosest@@YAXW4Physics_WorldId@@PEAVhknpShape@@AEBTvec3_t@@2AEBTvec4_t@@PEAUPhysics_ShapecastExtendedData@@PEAUPhysicsQuery_ShapecastHit@@@Z(worldId, shape, start, end, rotation, extendedData, hit);
}

/*
==============
PhysicsQuery_ImmediateQueryPointAll
==============
*/

void __fastcall PhysicsQuery_ImmediateQueryPointAll(Physics_WorldId worldId, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData, PhysicsQuery_QueryPointHit *hits, int maxNumHits, int *hitsFound)
{
  ?PhysicsQuery_ImmediateQueryPointAll@@YAXW4Physics_WorldId@@PEBUcentity_t@@W4LocalClientNum_t@@AEBTvec3_t@@MPEAUPhysics_QueryPointExtendedData@@PEAUPhysicsQuery_QueryPointHit@@HPEAH@Z(worldId, ent, localClientNum, point, radius, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateShapecastClosest
==============
*/

void __fastcall PhysicsQuery_ImmediateShapecastClosest(Physics_WorldId worldId, hknpShape *shape, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, PhysicsQuery_ShapecastHit *hit)
{
  ?PhysicsQuery_ImmediateShapecastClosest@@YAXW4Physics_WorldId@@PEAVhknpShape@@PEBUcentity_t@@W4LocalClientNum_t@@AEBTvec3_t@@4AEBTvec4_t@@PEAUPhysics_ShapecastExtendedData@@PEAUPhysicsQuery_ShapecastHit@@@Z(worldId, shape, ent, localClientNum, start, end, rotation, extendedData, hit);
}

/*
==============
PhysicsQuery_GetAllResult
==============
*/

HavokPhysics_CollisionQueryResult *__fastcall PhysicsQuery_GetAllResult(Physics_WorldId worldId)
{
  return ?PhysicsQuery_GetAllResult@@YAPEAVHavokPhysics_CollisionQueryResult@@W4Physics_WorldId@@@Z(worldId);
}

/*
==============
PhysicsQuery_ImmediateShapecastSightCheck
==============
*/

bool __fastcall PhysicsQuery_ImmediateShapecastSightCheck(Physics_WorldId worldId, hknpShape *shape, unsigned int instanceId, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData)
{
  return ?PhysicsQuery_ImmediateShapecastSightCheck@@YA_NW4Physics_WorldId@@PEAVhknpShape@@IAEBTvec3_t@@2AEBTvec4_t@@PEAUPhysics_ShapecastExtendedData@@@Z(worldId, shape, instanceId, start, end, rotation, extendedData);
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsAll
==============
*/

void __fastcall PhysicsQuery_ImmediateGetClosestPointsAll(Physics_WorldId worldId, hknpShape *shape, const gentity_s *ent, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData, PhysicsQuery_GetClosestPointsHit *hits, int maxNumHits, int *hitsFound)
{
  ?PhysicsQuery_ImmediateGetClosestPointsAll@@YAXW4Physics_WorldId@@PEAVhknpShape@@PEBUgentity_s@@AEBTvec3_t@@AEBTvec4_t@@MPEAUPhysics_GetClosestPointsExtendedData@@PEAUPhysicsQuery_GetClosestPointsHit@@HPEAH@Z(worldId, shape, ent, point, rotation, radius, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateShapecastSightCheck
==============
*/

bool __fastcall PhysicsQuery_ImmediateShapecastSightCheck(Physics_WorldId worldId, hknpShape *shape, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData)
{
  return ?PhysicsQuery_ImmediateShapecastSightCheck@@YA_NW4Physics_WorldId@@PEAVhknpShape@@PEBUcentity_t@@W4LocalClientNum_t@@AEBTvec3_t@@4AEBTvec4_t@@PEAUPhysics_ShapecastExtendedData@@@Z(worldId, shape, ent, localClientNum, start, end, rotation, extendedData);
}

/*
==============
PhysicsQuery_ImmediateRaycastClosest
==============
*/

void __fastcall PhysicsQuery_ImmediateRaycastClosest(Physics_WorldId worldId, PhysicsObject *physObj, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, PhysicsQuery_RaycastHit *hit)
{
  ?PhysicsQuery_ImmediateRaycastClosest@@YAXW4Physics_WorldId@@PEAVPhysicsObject@@AEBTvec3_t@@2PEAUPhysics_RaycastExtendedData@@PEAUPhysicsQuery_RaycastHit@@@Z(worldId, physObj, start, end, extendedData, hit);
}

/*
==============
PhysicsQuery_LegacyCapsuleTrace
==============
*/

void __fastcall PhysicsQuery_LegacyCapsuleTrace(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int *skipEntities, int numSkipEntities, int contentMask, const playerState_s *ps, bool allowCheapPointQueries, BG_PMove_Cage *cage, PhysicsQuery_ContextSettings *traceContext)
{
  ?PhysicsQuery_LegacyCapsuleTrace@@YAXW4Physics_WorldId@@PEAUtrace_t@@AEBTvec3_t@@2PEBUBounds@@PEAHHHPEBUplayerState_s@@_NPEAUBG_PMove_Cage@@PEAVPhysicsQuery_ContextSettings@@@Z(worldId, results, start, end, bounds, skipEntities, numSkipEntities, contentMask, ps, allowCheapPointQueries, cage, traceContext);
}

/*
==============
PhysicsQuery_LegacyCapsuleTraceIgnoreBodies
==============
*/

void __fastcall PhysicsQuery_LegacyCapsuleTraceIgnoreBodies(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int *skipEntities, int numSkipEntities, unsigned int *ignoreBodies, unsigned int numIgnoreBodies, int contentMask, const playerState_s *ps, bool allowCheapPointQueries, BG_PMove_Cage *cage, PhysicsQuery_ContextSettings *traceContext)
{
  ?PhysicsQuery_LegacyCapsuleTraceIgnoreBodies@@YAXW4Physics_WorldId@@PEAUtrace_t@@AEBTvec3_t@@2PEBUBounds@@PEAHHPEAIIHPEBUplayerState_s@@_NPEAUBG_PMove_Cage@@PEAVPhysicsQuery_ContextSettings@@@Z(worldId, results, start, end, bounds, skipEntities, numSkipEntities, ignoreBodies, numIgnoreBodies, contentMask, ps, allowCheapPointQueries, cage, traceContext);
}

/*
==============
PhysicsQuery_ImmediateRaycastClosest
==============
*/

void __fastcall PhysicsQuery_ImmediateRaycastClosest(Physics_WorldId worldId, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, PhysicsQuery_RaycastHit *hit)
{
  ?PhysicsQuery_ImmediateRaycastClosest@@YAXW4Physics_WorldId@@PEBUcentity_t@@W4LocalClientNum_t@@AEBTvec3_t@@3PEAUPhysics_RaycastExtendedData@@PEAUPhysicsQuery_RaycastHit@@@Z(worldId, ent, localClientNum, start, end, extendedData, hit);
}

/*
==============
PhysicsQuery_LegacyMPCGWeaponSimTrace
==============
*/

void __fastcall PhysicsQuery_LegacyMPCGWeaponSimTrace(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, const int *skipEntities, int skipEntityCount, int skipChildren, int contentMask, int locational, unsigned __int8 *priorityMap, Physics_QueryPhaseSelection phaseSelection, const bool detectInsideRaycasts)
{
  ?PhysicsQuery_LegacyMPCGWeaponSimTrace@@YAXW4Physics_WorldId@@PEAUtrace_t@@AEBTvec3_t@@2PEBUBounds@@PEBHHHHHPEAEW4Physics_QueryPhaseSelection@@_N@Z(worldId, results, start, end, bounds, skipEntities, skipEntityCount, skipChildren, contentMask, locational, priorityMap, phaseSelection, detectInsideRaycasts);
}

/*
==============
PhysicsQuery_ImmediateShapecastAll
==============
*/

void __fastcall PhysicsQuery_ImmediateShapecastAll(Physics_WorldId worldId, hknpShape *shape, PhysicsObject *physObj, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, PhysicsQuery_ShapecastHit *hits, int maxNumHits, int *hitsFound)
{
  ?PhysicsQuery_ImmediateShapecastAll@@YAXW4Physics_WorldId@@PEAVhknpShape@@PEAVPhysicsObject@@AEBTvec3_t@@3AEBTvec4_t@@PEAUPhysics_ShapecastExtendedData@@PEAUPhysicsQuery_ShapecastHit@@HPEAH@Z(worldId, shape, physObj, start, end, rotation, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_Init
==============
*/

void PhysicsQuery_Init(void)
{
  ?PhysicsQuery_Init@@YAXXZ();
}

/*
==============
PhysicsQuery_ImmediateQueryPointAll
==============
*/

void __fastcall PhysicsQuery_ImmediateQueryPointAll(Physics_WorldId worldId, const gentity_s *ent, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData, PhysicsQuery_QueryPointHit *hits, int maxNumHits, int *hitsFound)
{
  ?PhysicsQuery_ImmediateQueryPointAll@@YAXW4Physics_WorldId@@PEBUgentity_s@@AEBTvec3_t@@MPEAUPhysics_QueryPointExtendedData@@PEAUPhysicsQuery_QueryPointHit@@HPEAH@Z(worldId, ent, point, radius, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateQueryPointWorst
==============
*/

void __fastcall PhysicsQuery_ImmediateQueryPointWorst(Physics_WorldId worldId, PhysicsObject *physObj, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData, PhysicsQuery_QueryPointHit *hit)
{
  ?PhysicsQuery_ImmediateQueryPointWorst@@YAXW4Physics_WorldId@@PEAVPhysicsObject@@AEBTvec3_t@@MPEAUPhysics_QueryPointExtendedData@@PEAUPhysicsQuery_QueryPointHit@@@Z(worldId, physObj, point, radius, extendedData, hit);
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsAll
==============
*/

void __fastcall PhysicsQuery_ImmediateGetClosestPointsAll(Physics_WorldId worldId, hknpShape *shape, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData, PhysicsQuery_GetClosestPointsHit *hits, int maxNumHits, int *hitsFound)
{
  ?PhysicsQuery_ImmediateGetClosestPointsAll@@YAXW4Physics_WorldId@@PEAVhknpShape@@AEBTvec3_t@@AEBTvec4_t@@MPEAUPhysics_GetClosestPointsExtendedData@@PEAUPhysicsQuery_GetClosestPointsHit@@HPEAH@Z(worldId, shape, point, rotation, radius, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_LegacyTraceSkipEntitiesRotated
==============
*/

void __fastcall PhysicsQuery_LegacyTraceSkipEntitiesRotated(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const vec3_t *angles, const Bounds *bounds, const int *skipEntities, int skipEntityCount, int skipChildren, int contentMask, int locational, unsigned __int8 *priorityMap, Physics_QueryPhaseSelection phaseSelection, int ignoreRefs)
{
  ?PhysicsQuery_LegacyTraceSkipEntitiesRotated@@YAXW4Physics_WorldId@@PEAUtrace_t@@AEBTvec3_t@@22PEBUBounds@@PEBHHHHHPEAEW4Physics_QueryPhaseSelection@@H@Z(worldId, results, start, end, angles, bounds, skipEntities, skipEntityCount, skipChildren, contentMask, locational, priorityMap, phaseSelection, ignoreRefs);
}

/*
==============
PhysicsQuery_ImmediateAABBQueryAll
==============
*/

void __fastcall PhysicsQuery_ImmediateAABBQueryAll(Physics_WorldId worldId, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, PhysicsQuery_AABBQueryHit *hits, int maxNumHits, int *hitsFound)
{
  ?PhysicsQuery_ImmediateAABBQueryAll@@YAXW4Physics_WorldId@@PEBUcentity_t@@W4LocalClientNum_t@@AEBTvec3_t@@3PEAUPhysics_AABBQueryExtendedData@@PEAUPhysicsQuery_AABBQueryHit@@HPEAH@Z(worldId, ent, localClientNum, min, max, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateRaycastClosest
==============
*/

void __fastcall PhysicsQuery_ImmediateRaycastClosest(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, PhysicsQuery_RaycastHit *hit)
{
  ?PhysicsQuery_ImmediateRaycastClosest@@YAXW4Physics_WorldId@@AEBTvec3_t@@1PEAUPhysics_RaycastExtendedData@@PEAUPhysicsQuery_RaycastHit@@@Z(worldId, start, end, extendedData, hit);
}

/*
==============
PhysicsQuery_LegacyTrace
==============
*/

void __fastcall PhysicsQuery_LegacyTrace(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int skipEntity, int skipChildren, int contentMask, int locational, unsigned __int8 *priorityMap, Physics_QueryPhaseSelection phaseSelection, int ignoreRefs)
{
  ?PhysicsQuery_LegacyTrace@@YAXW4Physics_WorldId@@PEAUtrace_t@@AEBTvec3_t@@2PEBUBounds@@HHHHPEAEW4Physics_QueryPhaseSelection@@H@Z(worldId, results, start, end, bounds, skipEntity, skipChildren, contentMask, locational, priorityMap, phaseSelection, ignoreRefs);
}

/*
==============
PhysicsQuery_LegacyTrace
==============
*/

void __fastcall PhysicsQuery_LegacyTrace(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int skipEntity, int skipChildren, int contentMask, int locational, unsigned __int8 *priorityMap, Physics_QueryPhaseSelection phaseSelection)
{
  ?PhysicsQuery_LegacyTrace@@YAXW4Physics_WorldId@@PEAUtrace_t@@AEBTvec3_t@@2PEBUBounds@@HHHHPEAEW4Physics_QueryPhaseSelection@@@Z(worldId, results, start, end, bounds, skipEntity, skipChildren, contentMask, locational, priorityMap, phaseSelection);
}

/*
==============
PhysicsQuery_LegacyTraceSkipEntitiesRotated
==============
*/

void __fastcall PhysicsQuery_LegacyTraceSkipEntitiesRotated(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const vec3_t *angles, const Bounds *bounds, const int *skipEntities, int skipEntityCount, int skipChildren, int contentMask, int locational, unsigned __int8 *priorityMap, Physics_QueryPhaseSelection phaseSelection)
{
  ?PhysicsQuery_LegacyTraceSkipEntitiesRotated@@YAXW4Physics_WorldId@@PEAUtrace_t@@AEBTvec3_t@@22PEBUBounds@@PEBHHHHHPEAEW4Physics_QueryPhaseSelection@@@Z(worldId, results, start, end, angles, bounds, skipEntities, skipEntityCount, skipChildren, contentMask, locational, priorityMap, phaseSelection);
}

/*
==============
PhysicsQuery_ImmediateAABBQueryAll
==============
*/

void __fastcall PhysicsQuery_ImmediateAABBQueryAll(Physics_WorldId worldId, const gentity_s *ent, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, PhysicsQuery_AABBQueryHit *hits, int maxNumHits, int *hitsFound)
{
  ?PhysicsQuery_ImmediateAABBQueryAll@@YAXW4Physics_WorldId@@PEBUgentity_s@@AEBTvec3_t@@2PEAUPhysics_AABBQueryExtendedData@@PEAUPhysicsQuery_AABBQueryHit@@HPEAH@Z(worldId, ent, min, max, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateRaycastClosest
==============
*/

void __fastcall PhysicsQuery_ImmediateRaycastClosest(Physics_WorldId worldId, const gentity_s *ent, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, PhysicsQuery_RaycastHit *hit)
{
  ?PhysicsQuery_ImmediateRaycastClosest@@YAXW4Physics_WorldId@@PEBUgentity_s@@AEBTvec3_t@@2PEAUPhysics_RaycastExtendedData@@PEAUPhysicsQuery_RaycastHit@@@Z(worldId, ent, start, end, extendedData, hit);
}

/*
==============
PhysicsQuery_ImmediateRaycastAll
==============
*/

void __fastcall PhysicsQuery_ImmediateRaycastAll(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, PhysicsQuery_RaycastHit *hits, int maxNumHits, int *hitsFound)
{
  ?PhysicsQuery_ImmediateRaycastAll@@YAXW4Physics_WorldId@@IAEBTvec3_t@@1PEAUPhysics_RaycastExtendedData@@PEAUPhysicsQuery_RaycastHit@@HPEAH@Z(worldId, instanceId, start, end, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateQueryPointAll
==============
*/

void __fastcall PhysicsQuery_ImmediateQueryPointAll(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData, PhysicsQuery_QueryPointHit *hits, int maxNumHits, int *hitsFound)
{
  ?PhysicsQuery_ImmediateQueryPointAll@@YAXW4Physics_WorldId@@IAEBTvec3_t@@MPEAUPhysics_QueryPointExtendedData@@PEAUPhysicsQuery_QueryPointHit@@HPEAH@Z(worldId, instanceId, point, radius, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_CopyRayToShapeHit
==============
*/

void __fastcall PhysicsQuery_CopyRayToShapeHit(PhysicsQuery_RaycastHit *rayHit, PhysicsQuery_ShapecastHit *shapeHit)
{
  ?PhysicsQuery_CopyRayToShapeHit@@YAXPEAUPhysicsQuery_RaycastHit@@PEAUPhysicsQuery_ShapecastHit@@@Z(rayHit, shapeHit);
}

/*
==============
PhysicsQuery_AddEntityToIgnoreList
==============
*/

void __fastcall PhysicsQuery_AddEntityToIgnoreList(Physics_WorldId worldId, gentity_s *ent, HavokPhysics_IgnoreBodies *ignoreBodies)
{
  ?PhysicsQuery_AddEntityToIgnoreList@@YAXW4Physics_WorldId@@PEAUgentity_s@@PEAVHavokPhysics_IgnoreBodies@@@Z(worldId, ent, ignoreBodies);
}

/*
==============
PhysicsQuery_ImmediateAABBBroadphaseQuery
==============
*/

void __fastcall PhysicsQuery_ImmediateAABBBroadphaseQuery(Physics_WorldId worldId, const vec3_t *aabbMin, const vec3_t *aabbMax, int contents, unsigned int numIgnoreEnts, const int *ignoreEnts, PhysicsQuery_Collected<unsigned short> *collectedEnts, PhysicsQuery_Collected<unsigned int> *collectedScriptables, bool removeDuplicates)
{
  ?PhysicsQuery_ImmediateAABBBroadphaseQuery@@YAXW4Physics_WorldId@@AEBTvec3_t@@1HIPEBHAEAU?$PhysicsQuery_Collected@G@@PEAU?$PhysicsQuery_Collected@I@@_N@Z(worldId, aabbMin, aabbMax, contents, numIgnoreEnts, ignoreEnts, collectedEnts, collectedScriptables, removeDuplicates);
}

/*
==============
PhysicsQuery_GetRef
==============
*/

int __fastcall PhysicsQuery_GetRef(const PhysicsQuery_QueryPointHit *hit)
{
  return ?PhysicsQuery_GetRef@@YAHPEBUPhysicsQuery_QueryPointHit@@@Z(hit);
}

/*
==============
PhysicsQuery_LegacyTracePassedWithSkipParams
==============
*/

int __fastcall PhysicsQuery_LegacyTracePassedWithSkipParams(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int skipEntity0, bool skipEntity0Children, bool skipEntity0Siblings, int skipEntity1, bool skipEntity1Children, bool skipEntity1Siblings, int contentMask, int locational, unsigned __int8 *priorityMap, bool ignoreTransparentVolumes)
{
  return ?PhysicsQuery_LegacyTracePassedWithSkipParams@@YAHW4Physics_WorldId@@AEBTvec3_t@@1PEBUBounds@@H_N3H33HHPEAE3@Z(worldId, start, end, bounds, skipEntity0, skipEntity0Children, skipEntity0Siblings, skipEntity1, skipEntity1Children, skipEntity1Siblings, contentMask, locational, priorityMap, ignoreTransparentVolumes);
}

/*
==============
PhysicsQuery_ImmediateShapecastAll
==============
*/

void __fastcall PhysicsQuery_ImmediateShapecastAll(Physics_WorldId worldId, hknpShape *shape, const gentity_s *ent, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, PhysicsQuery_ShapecastHit *hits, int maxNumHits, int *hitsFound)
{
  ?PhysicsQuery_ImmediateShapecastAll@@YAXW4Physics_WorldId@@PEAVhknpShape@@PEBUgentity_s@@AEBTvec3_t@@3AEBTvec4_t@@PEAUPhysics_ShapecastExtendedData@@PEAUPhysicsQuery_ShapecastHit@@HPEAH@Z(worldId, shape, ent, start, end, rotation, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_LegacyEntityContactPoint
==============
*/

int __fastcall PhysicsQuery_LegacyEntityContactPoint(Physics_WorldId worldId, const vec3_t *pos, unsigned int physicsInstanceId, const gentity_s *ent)
{
  return ?PhysicsQuery_LegacyEntityContactPoint@@YAHW4Physics_WorldId@@AEBTvec3_t@@IPEBUgentity_s@@@Z(worldId, pos, physicsInstanceId, ent);
}

/*
==============
GetTraceShapeBuffers
==============
*/
char *GetTraceShapeBuffers(int entryId)
{
  __int64 v1; 
  int v4; 

  v1 = entryId;
  if ( (unsigned int)entryId >= 0xE0 )
  {
    v4 = 224;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 83, ASSERT_TYPE_ASSERT, "(unsigned)( entryId ) < (unsigned)( (PHYSICS_MAX_SUPPORTED_NUM_THREADS * PHYSICS_WORLD_ID_COUNT) )", "entryId doesn't index (PHYSICS_MAX_SUPPORTED_NUM_THREADS * PHYSICS_WORLD_ID_COUNT)\n\t%i not in [0, %i)", entryId, v4) )
      __debugbreak();
  }
  return s_PhysicsQuery_LegacyTraceShapeBuffers[v1];
}

/*
==============
PhysicsQuery_AddEntityChainToIgnoreList
==============
*/
void PhysicsQuery_AddEntityChainToIgnoreList(int svEntNum, HavokPhysics_IgnoreBodies *ignoreBodies, bool self, bool children, bool parent, bool siblings, bool linked)
{
  if ( !ignoreBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 727, ASSERT_TYPE_ASSERT, "(ignoreBodies)", (const char *)&queryFormat, "ignoreBodies") )
    __debugbreak();
  if ( svEntNum >= 0 )
    HavokPhysics_IgnoreBodies::AddIgnoreEntity(ignoreBodies, svEntNum, self, children, parent, siblings, linked);
}

/*
==============
PhysicsQuery_AddEntityToIgnoreList
==============
*/
void PhysicsQuery_AddEntityToIgnoreList(Physics_WorldId worldId, centity_t *ent, LocalClientNum_t localClientNum, HavokPhysics_IgnoreBodies *ignoreBodies)
{
  __int64 v4; 
  CG_PhysicsObject *v8; 

  v4 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 741, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 742, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 743, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (ent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 744, ASSERT_TYPE_ASSERT, "(CENextValid( ent ))", (const char *)&queryFormat, "CENextValid( ent )") )
    __debugbreak();
  if ( !ignoreBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 745, ASSERT_TYPE_ASSERT, "(ignoreBodies)", (const char *)&queryFormat, "ignoreBodies") )
    __debugbreak();
  v8 = CG_PhysicsObject_Get(ent->nextState.number, localClientNum);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 748, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  PhysicsQuery_AddPhysicsObjectToIgnoreList((Physics_WorldId)v4, v8, ignoreBodies);
}

/*
==============
PhysicsQuery_AddEntityToIgnoreList
==============
*/
void PhysicsQuery_AddEntityToIgnoreList(Physics_WorldId worldId, gentity_s *ent, HavokPhysics_IgnoreBodies *ignoreBodies)
{
  __int64 v3; 
  G_PhysicsObject *v6; 

  v3 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 713, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 714, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 715, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ignoreBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 716, ASSERT_TYPE_ASSERT, "(ignoreBodies)", (const char *)&queryFormat, "ignoreBodies") )
    __debugbreak();
  v6 = G_PhysicsObject_Get(ent);
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 719, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  PhysicsQuery_AddPhysicsObjectToIgnoreList((Physics_WorldId)v3, v6, ignoreBodies);
}

/*
==============
PhysicsQuery_AddPhysicsInstanceToIgnoreList
==============
*/
void PhysicsQuery_AddPhysicsInstanceToIgnoreList(Physics_WorldId worldId, unsigned int instanceId, HavokPhysics_IgnoreBodies *ignoreBodies)
{
  __int64 v3; 
  signed int v6; 
  int NumRigidBodys; 
  hknpBodyId *RigidBodyID; 
  __int64 v9; 
  hknpBodyId result; 

  v3 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 774, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 775, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ignoreBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 776, ASSERT_TYPE_ASSERT, "(ignoreBodies)", (const char *)&queryFormat, "ignoreBodies") )
    __debugbreak();
  if ( instanceId != -1 )
  {
    v6 = 0;
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v3, instanceId);
    if ( NumRigidBodys > 0 )
    {
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v3 > 7 )
        {
          LODWORD(v9) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v9) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v3 - 2) <= 5 )
        {
          LODWORD(v9) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v9) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v3 <= 1 )
        {
          LODWORD(v9) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v9) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v3, instanceId, v6);
        HavokPhysics_IgnoreBodies::AddIgnoreBody(ignoreBodies, RigidBodyID->m_serialAndIndex);
        ++v6;
      }
      while ( v6 < NumRigidBodys );
    }
  }
}

/*
==============
PhysicsQuery_AddPhysicsObjectToIgnoreList
==============
*/
void PhysicsQuery_AddPhysicsObjectToIgnoreList(Physics_WorldId worldId, PhysicsObject *physObj, HavokPhysics_IgnoreBodies *ignoreBodies)
{
  __int64 v3; 

  v3 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 759, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 760, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 761, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  if ( !ignoreBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 762, ASSERT_TYPE_ASSERT, "(ignoreBodies)", (const char *)&queryFormat, "ignoreBodies") )
    __debugbreak();
  PhysicsQuery_AddPhysicsInstanceToIgnoreList((Physics_WorldId)v3, physObj->physicsInstances[v3], ignoreBodies);
}

/*
==============
PhysicsQuery_CopyRayToShapeHit
==============
*/
void PhysicsQuery_CopyRayToShapeHit(PhysicsQuery_RaycastHit *rayHit, PhysicsQuery_ShapecastHit *shapeHit)
{
  __asm { vmovss  xmm3, dword ptr cs:__xmm@80000000800000008000000080000000 }
  shapeHit->isValid = rayHit->isValid;
  shapeHit->fraction = rayHit->fraction;
  shapeHit->contactPosition = rayHit->position;
  shapeHit->shapePosition = rayHit->position;
  shapeHit->hitContactNormal = rayHit->normal;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+14h]
    vxorps  xmm0, xmm0, xmm3
    vmovss  dword ptr [rdx+2Ch], xmm0
    vmovss  xmm1, dword ptr [rcx+18h]
    vxorps  xmm2, xmm1, xmm3
    vmovss  dword ptr [rdx+30h], xmm2
    vmovss  xmm0, dword ptr [rcx+1Ch]
    vxorps  xmm1, xmm0, xmm3
    vmovss  dword ptr [rdx+34h], xmm1
  }
  shapeHit->surfaceFlags = rayHit->surfaceFlags;
  shapeHit->contents = rayHit->contents;
  shapeHit->material = rayHit->material;
  shapeHit->ref = rayHit->ref;
}

/*
==============
PhysicsQuery_ExtractHitData
==============
*/
void PhysicsQuery_ExtractHitData(const vec3_t *start, const vec3_t *end, HavokPhysics_CollisionQueryResult *result, unsigned int index, PhysicsQuery_RaycastHit *hit)
{
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  _RDI = end;
  if ( (v13 & 0x7F800000) == 2139095040 )
    goto LABEL_23;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v14 & 0x7F800000) == 2139095040 )
    goto LABEL_23;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v15 & 0x7F800000) == 2139095040 )
  {
LABEL_23:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 364, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v16 & 0x7F800000) == 2139095040 )
    goto LABEL_24;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v17 & 0x7F800000) == 2139095040 )
    goto LABEL_24;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v18 & 0x7F800000) == 2139095040 )
  {
LABEL_24:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 365, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
      __debugbreak();
  }
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 366, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  _RDI = hit;
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 367, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( HavokPhysics_CollisionQueryResult::HasHit(result) && HavokPhysics_CollisionQueryResult::GetNumHits(result) > index )
  {
    hit->isValid = 1;
    *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(result, index);
    __asm { vmovss  dword ptr [rdi+4], xmm0 }
    HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(result, index, &hit->position);
    HavokPhysics_CollisionQueryResult::GetRaycastHitNormal(result, index, &hit->normal);
    hit->surfaceFlags = HavokPhysics_CollisionQueryResult::GetRaycastHitSurfFlags(result, index);
    hit->contents = HavokPhysics_CollisionQueryResult::GetRaycastHitContents(result, index);
    hit->material = HavokPhysics_CollisionQueryResult::GetRaycastHitMaterialId(result, index);
    hit->ref = HavokPhysics_CollisionQueryResult::GetRaycastHitRef(result, index);
    hit->bodyId = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(result, index);
  }
  else
  {
    hit->isValid = 0;
  }
}

/*
==============
PhysicsQuery_ExtractHitData
==============
*/
void PhysicsQuery_ExtractHitData(const vec3_t *start, const vec3_t *end, HavokPhysics_CollisionQueryResult *result, unsigned int index, PhysicsQuery_ShapecastHit *hit)
{
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  _RSI = end;
  if ( (v29 & 0x7F800000) == 2139095040 )
    goto LABEL_23;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v30 & 0x7F800000) == 2139095040 )
    goto LABEL_23;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v31 & 0x7F800000) == 2139095040 )
  {
LABEL_23:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 387, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v32 & 0x7F800000) == 2139095040 )
    goto LABEL_24;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v33 & 0x7F800000) == 2139095040 )
    goto LABEL_24;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v34 & 0x7F800000) == 2139095040 )
  {
LABEL_24:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 388, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
      __debugbreak();
  }
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 389, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  _RDI = hit;
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 390, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( HavokPhysics_CollisionQueryResult::HasHit(result) && HavokPhysics_CollisionQueryResult::GetNumHits(result) > index )
  {
    __asm { vmovaps [rsp+58h+var_28], xmm6 }
    hit->isValid = 1;
    *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetShapecastHitFraction(result, index);
    __asm { vmovss  dword ptr [rdi+4], xmm0 }
    HavokPhysics_CollisionQueryResult::GetShapecastHitContactPosition(result, index, &hit->contactPosition);
    __asm
    {
      vmovss  xmm6, dword ptr [rdi+4]
      vmovss  xmm0, dword ptr [rsi]
      vsubss  xmm1, xmm0, dword ptr [rbp+0]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rbp+0]
      vmovss  dword ptr [rdi+14h], xmm3
      vmovss  xmm0, dword ptr [rsi+4]
      vsubss  xmm1, xmm0, dword ptr [rbp+4]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rbp+4]
      vmovss  dword ptr [rdi+18h], xmm3
      vmovss  xmm0, dword ptr [rsi+8]
      vsubss  xmm1, xmm0, dword ptr [rbp+8]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rbp+8]
      vmovss  dword ptr [rdi+1Ch], xmm3
    }
    HavokPhysics_CollisionQueryResult::GetShapecastHitHitContactNormal(result, index, &hit->hitContactNormal);
    HavokPhysics_CollisionQueryResult::GetShapecastHitQueryContactNormal(result, index, &hit->queryContactNormal);
    hit->surfaceFlags = HavokPhysics_CollisionQueryResult::GetShapecastHitHitSurfFlags(result, index);
    hit->contents = HavokPhysics_CollisionQueryResult::GetShapecastHitHitContents(result, index);
    hit->material = HavokPhysics_CollisionQueryResult::GetShapecastHitHitMaterialId(result, index);
    hit->ref = HavokPhysics_CollisionQueryResult::GetShapecastHitRef(result, index);
    __asm { vmovaps xmm6, [rsp+58h+var_28] }
    hit->bodyId = HavokPhysics_CollisionQueryResult::GetShapecastHitBodyId(result, index);
  }
  else
  {
    hit->isValid = 0;
  }
}

/*
==============
PhysicsQuery_ExtractHitData
==============
*/
void PhysicsQuery_ExtractHitData(const vec3_t *point, const float radius, HavokPhysics_CollisionQueryResult *result, unsigned int index, PhysicsQuery_GetClosestPointsHit *hit)
{
  int v9; 
  int v10; 
  int v11; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v9 & 0x7F800000) == 2139095040 )
    goto LABEL_18;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v10 & 0x7F800000) == 2139095040 )
    goto LABEL_18;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v11 & 0x7F800000) == 2139095040 )
  {
LABEL_18:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 436, ASSERT_TYPE_SANITY, "( !IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] )") )
      __debugbreak();
  }
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 437, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  _RDI = hit;
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 438, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( HavokPhysics_CollisionQueryResult::HasHit(result) && HavokPhysics_CollisionQueryResult::GetNumHits(result) > index )
  {
    hit->isValid = 1;
    HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(result, index, &hit->hitPosition);
    HavokPhysics_CollisionQueryResult::GetClosestPointHitQueryPosition(result, index, &hit->queryPosition);
    HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(result, index, &hit->separatingNormal);
    *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(result, index);
    __asm { vmovss  dword ptr [rdi+28h], xmm0 }
    hit->surfaceFlags = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(result, index);
    hit->contents = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitContents(result, index);
    hit->material = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitMaterialId(result, index);
    hit->ref = HavokPhysics_CollisionQueryResult::GetClosestPointHitRef(result, index);
    hit->bodyId = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(result, index);
  }
  else
  {
    hit->isValid = 0;
  }
}

/*
==============
PhysicsQuery_ExtractHitData
==============
*/
void PhysicsQuery_ExtractHitData(const vec3_t *point, const float radius, HavokPhysics_CollisionQueryResult *result, unsigned int index, PhysicsQuery_QueryPointHit *hit)
{
  int v9; 
  int v10; 
  int v11; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v9 & 0x7F800000) == 2139095040 )
    goto LABEL_18;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v10 & 0x7F800000) == 2139095040 )
    goto LABEL_18;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+8]
    vmovss  [rsp+38h+arg_0], xmm0
  }
  if ( (v11 & 0x7F800000) == 2139095040 )
  {
LABEL_18:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 412, ASSERT_TYPE_SANITY, "( !IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] )") )
      __debugbreak();
  }
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 413, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  _RDI = hit;
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 414, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( HavokPhysics_CollisionQueryResult::HasHit(result) && HavokPhysics_CollisionQueryResult::GetNumHits(result) > index )
  {
    hit->isValid = 1;
    HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(result, index, &hit->hitPosition);
    HavokPhysics_CollisionQueryResult::GetClosestPointHitQueryPosition(result, index, &hit->queryPosition);
    HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(result, index, &hit->separatingNormal);
    *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(result, index);
    __asm { vmovss  dword ptr [rdi+28h], xmm0 }
    hit->surfaceFlags = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(result, index);
    hit->contents = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitContents(result, index);
    hit->material = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitMaterialId(result, index);
    hit->ref = HavokPhysics_CollisionQueryResult::GetClosestPointHitRef(result, index);
    hit->bodyId = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(result, index);
    hit->shapeKey = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitShapeKey(result, index);
  }
  else
  {
    hit->isValid = 0;
  }
}

/*
==============
PhysicsQuery_ExtractHitData
==============
*/
void PhysicsQuery_ExtractHitData(HavokPhysics_CollisionQueryResult *result, unsigned int index, PhysicsQuery_AABBQueryHit *hit)
{
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 347, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 348, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( HavokPhysics_CollisionQueryResult::HasHit(result) && HavokPhysics_CollisionQueryResult::GetNumHits(result) > index )
  {
    hit->isValid = 1;
    hit->surfaceFlags = HavokPhysics_CollisionQueryResult::GetAABBQueryHitSurfFlags(result, index);
    hit->contents = HavokPhysics_CollisionQueryResult::GetAABBQueryHitContents(result, index);
    hit->material = HavokPhysics_CollisionQueryResult::GetAABBQueryHitMaterialId(result, index);
    hit->ref = HavokPhysics_CollisionQueryResult::GetAABBQueryHitRef(result, index);
    hit->bodyId = HavokPhysics_CollisionQueryResult::GetAABBQueryHitBodyId(result, index);
  }
  else
  {
    hit->isValid = 0;
  }
}

/*
==============
PhysicsQuery_GetAllResult
==============
*/
HavokPhysics_CollisionQueryResult *PhysicsQuery_GetAllResult(Physics_WorldId worldId)
{
  if ( !s_PhysicsQuery_WorldInitialized[worldId] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 245, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 247, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  return s_PhysicsQuery_AllQueryResults[28 * worldId + Physics_GetThreadId()];
}

/*
==============
PhysicsQuery_GetAnyResult
==============
*/
HavokPhysics_CollisionQueryResult *PhysicsQuery_GetAnyResult(Physics_WorldId worldId)
{
  if ( !s_PhysicsQuery_WorldInitialized[worldId] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 219, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 221, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  return s_PhysicsQuery_AnyQueryResults[28 * worldId + Physics_GetThreadId()];
}

/*
==============
PhysicsQuery_GetCLHitCategory
==============
*/
__int64 PhysicsQuery_GetCLHitCategory(const int ref)
{
  __int64 result; 

  switch ( Physics_GetRefSystem(ref) )
  {
    case Physics_RefSystem_WorldGeo:
    case Physics_RefSystem_CEntities:
    case Physics_RefSystem_CCharacterProxies:
      result = 1i64;
      break;
    case Physics_RefSystem_DynEnts:
      result = 2i64;
      break;
    case Physics_RefSystem_Ragdoll:
      result = 3i64;
      break;
    case Physics_RefSystem_Particles:
      result = 4i64;
      break;
    case Physics_RefSystem_Scriptable:
      result = 5i64;
      break;
    case Physics_RefSystem_CModels:
      result = 6i64;
      break;
    case Physics_RefSystem_ClothProxy:
      result = 7i64;
      break;
    case Physics_RefSystem_LightweightParticles:
      goto $LN4_28;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 621, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported RefSystem") )
        __debugbreak();
$LN4_28:
      result = 0i64;
      break;
  }
  return result;
}

/*
==============
PhysicsQuery_GetCLHitId
==============
*/
__int64 PhysicsQuery_GetCLHitId(const int ref)
{
  __int64 result; 
  unsigned __int8 RefSubSystem; 
  int v4; 

  switch ( Physics_GetRefSystem(ref) )
  {
    case Physics_RefSystem_WorldGeo:
      result = 2046i64;
      break;
    case Physics_RefSystem_DynEnts:
      RefSubSystem = Physics_GetRefSubSystem(ref);
      result = ((RefSubSystem & 1) << 16) | (unsigned int)Physics_GetRefId(ref);
      break;
    case Physics_RefSystem_CEntities:
    case Physics_RefSystem_CCharacterProxies:
    case Physics_RefSystem_CModels:
      result = Physics_GetRefId(ref);
      break;
    case Physics_RefSystem_Ragdoll:
    case Physics_RefSystem_Particles:
      v4 = Physics_GetRefSubSystem(ref);
      result = (v4 << 16) | (unsigned int)Physics_GetRefId(ref);
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 704, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported RefSystem") )
        __debugbreak();
      result = 2047i64;
      break;
  }
  return result;
}

/*
==============
PhysicsQuery_GetClosestResult
==============
*/
HavokPhysics_CollisionQueryResult *PhysicsQuery_GetClosestResult(Physics_WorldId worldId)
{
  if ( !s_PhysicsQuery_WorldInitialized[worldId] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 232, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 234, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  return s_PhysicsQuery_ClosestQueryResults[28 * worldId + Physics_GetThreadId()];
}

/*
==============
PhysicsQuery_GetHandlerFromWorldId
==============
*/
CgHandler *PhysicsQuery_GetHandlerFromWorldId(Physics_WorldId worldId)
{
  CgHandler *Handler; 
  LocalClientNum_t LocalClientForWorld; 
  CgHandler *v3; 

  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
    LocalClientForWorld = Physics_GetLocalClientForWorld(worldId);
    Handler = CgHandler::getHandler(LocalClientForWorld);
  }
  else
  {
    Handler = (CgHandler *)GHandler::getHandler();
  }
  v3 = Handler;
  if ( !Handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2719, ASSERT_TYPE_ASSERT, "(bgHandler)", (const char *)&queryFormat, "bgHandler") )
    __debugbreak();
  return v3;
}

/*
==============
PhysicsQuery_GetIgnoreBodies
==============
*/
HavokPhysics_IgnoreBodies *PhysicsQuery_GetIgnoreBodies(int entryId)
{
  __int64 v1; 
  int v4; 

  v1 = entryId;
  if ( (unsigned int)entryId >= 0xE0 )
  {
    v4 = 224;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 97, ASSERT_TYPE_ASSERT, "(unsigned)( entryId ) < (unsigned)( (PHYSICS_MAX_SUPPORTED_NUM_THREADS * PHYSICS_WORLD_ID_COUNT) )", "entryId doesn't index (PHYSICS_MAX_SUPPORTED_NUM_THREADS * PHYSICS_WORLD_ID_COUNT)\n\t%i not in [0, %i)", entryId, v4) )
      __debugbreak();
  }
  return s_PhysicsQuery_LegacyIgnoreBodies[v1];
}

/*
==============
PhysicsQuery_GetRef
==============
*/
__int64 PhysicsQuery_GetRef(const PhysicsQuery_AABBQueryHit *hit)
{
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 459, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( !hit->isValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 462, ASSERT_TYPE_ASSERT, "(hit->isValid)", (const char *)&queryFormat, "hit->isValid") )
    __debugbreak();
  return (unsigned int)hit->ref;
}

/*
==============
PhysicsQuery_GetRef
==============
*/
__int64 PhysicsQuery_GetRef(const PhysicsQuery_GetClosestPointsHit *hit)
{
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 511, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( !hit->isValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 514, ASSERT_TYPE_ASSERT, "(hit->isValid)", (const char *)&queryFormat, "hit->isValid") )
    __debugbreak();
  return (unsigned int)hit->ref;
}

/*
==============
PhysicsQuery_GetRef
==============
*/
__int64 PhysicsQuery_GetRef(const PhysicsQuery_QueryPointHit *hit)
{
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 498, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( !hit->isValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 501, ASSERT_TYPE_ASSERT, "(hit->isValid)", (const char *)&queryFormat, "hit->isValid") )
    __debugbreak();
  return (unsigned int)hit->ref;
}

/*
==============
PhysicsQuery_GetRef
==============
*/
__int64 PhysicsQuery_GetRef(const PhysicsQuery_RaycastHit *hit)
{
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 472, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( !hit->isValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 475, ASSERT_TYPE_ASSERT, "(hit->isValid)", (const char *)&queryFormat, "hit->isValid") )
    __debugbreak();
  return (unsigned int)hit->ref;
}

/*
==============
PhysicsQuery_GetRef
==============
*/
__int64 PhysicsQuery_GetRef(const PhysicsQuery_ShapecastHit *hit)
{
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 485, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( !hit->isValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 488, ASSERT_TYPE_ASSERT, "(hit->isValid)", (const char *)&queryFormat, "hit->isValid") )
    __debugbreak();
  return (unsigned int)hit->ref;
}

/*
==============
PhysicsQuery_GetResultContainer
==============
*/
HavokPhysics_CollisionQueryResult *PhysicsQuery_GetResultContainer(PhysicsQueryResultType type, int entryId)
{
  __int64 v3; 
  HavokPhysics_CollisionQueryResult *result; 
  __int64 v5; 
  int v7; 

  v3 = entryId;
  if ( (unsigned int)type >= 0xE0 )
  {
    v7 = 224;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 104, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( (PHYSICS_MAX_SUPPORTED_NUM_THREADS * PHYSICS_WORLD_ID_COUNT) )", "type doesn't index (PHYSICS_MAX_SUPPORTED_NUM_THREADS * PHYSICS_WORLD_ID_COUNT)\n\t%i not in [0, %i)", type, v7) )
      __debugbreak();
  }
  switch ( type )
  {
    case PQ_TYPE_ANY:
      result = s_PhysicsQuery_AnyQueryResults[v3];
      break;
    case PQ_TYPE_CLOSEST:
      result = s_PhysicsQuery_ClosestQueryResults[v3];
      break;
    case PQ_TYPE_ALL:
      result = s_PhysicsQuery_AllQueryResults[v3];
      break;
    case PQ_TYPE_LEGACY:
      result = s_PhysicsQuery_LegacyQueryResults[v3];
      break;
    case PQ_TYPE_LEGACYANY:
      result = s_PhysicsQuery_LegacyQueryAnyResults[v3];
      break;
    case PQ_TYPE_LEGACYALL:
      result = s_PhysicsQuery_LegacyQueryAllResults[v3];
      break;
    case PQ_TYPE_LEGACYTRACE:
      result = s_PhysicsQuery_LegacyTraceResults[v3];
      break;
    default:
      LODWORD(v5) = type;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 116, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "PhysicsQueryResultType %d unhandled\n", v5) )
        __debugbreak();
      result = NULL;
      break;
  }
  return result;
}

/*
==============
PhysicsQuery_GetSVHitId
==============
*/
__int64 PhysicsQuery_GetSVHitId(const int ref)
{
  Physics_RefSystem RefSystem; 

  RefSystem = Physics_GetRefSystem(ref);
  if ( RefSystem == Physics_RefSystem_WorldGeo )
    return 2046i64;
  if ( (unsigned int)(RefSystem - 2) <= 1 || RefSystem == Physics_RefSystem_GItems )
    return Physics_GetRefId(ref);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 548, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported RefSystem") )
    __debugbreak();
  return 2047i64;
}

/*
==============
PhysicsQuery_ImmediateAABBBroadphaseQuery
==============
*/
void PhysicsQuery_ImmediateAABBBroadphaseQuery(Physics_WorldId worldId, const vec3_t *aabbMin, const vec3_t *aabbMax, int contents, unsigned int numIgnoreEnts, const int *ignoreEnts, PhysicsQuery_Collected<unsigned short> *collectedEnts, PhysicsQuery_Collected<unsigned int> *collectedScriptables, bool removeDuplicates)
{
  __int64 v12; 
  int *v14; 
  unsigned int i; 
  unsigned int NumHits; 
  unsigned int j; 
  unsigned int HitBodyId; 
  int Ref; 
  Physics_RefSystem RefSystem; 
  int EntityNum; 
  unsigned __int16 v22; 
  int v23; 
  unsigned int count; 
  unsigned int k; 
  unsigned int v26; 
  int v27; 
  int v28; 
  int v29; 
  unsigned int v30; 
  hkMemoryAllocator *v31; 
  hkMemoryAllocator *v32; 
  Physics_AABBBroadphaseQueryExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v34; 
  HavokPhysics_BroadphaseCollisionQueryResult *collectedEntsa; 

  v12 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5365, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5366, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !collectedEnts->ids && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5367, ASSERT_TYPE_ASSERT, "(collectedEnts.ids)", (const char *)&queryFormat, "collectedEnts.ids") )
    __debugbreak();
  v14 = (int *)ignoreEnts;
  if ( numIgnoreEnts && !ignoreEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5368, ASSERT_TYPE_ASSERT, "(numIgnoreEnts == 0 || ignoreEnts)", (const char *)&queryFormat, "numIgnoreEnts == 0 || ignoreEnts") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5370, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  collectedEntsa = s_PhysicsQuery_BroadphaseTraceResults[(int)(28 * v12 + Physics_GetThreadId())];
  HavokPhysics_BroadphaseCollisionQueryResult::Reset(collectedEntsa);
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v34, numIgnoreEnts, 0);
  for ( i = 0; i < numIgnoreEnts; ++v14 )
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v34, i++, *v14, 1, 0, 0, 0, 0);
  extendedData.phaseSelection = All;
  extendedData.contents = contents;
  extendedData.ignoreBodies = &v34;
  Physics_AABBBroadphaseQuery((Physics_WorldId)v12, aabbMin, aabbMax, &extendedData, collectedEntsa);
  NumHits = HavokPhysics_BroadphaseCollisionQueryResult::GetNumHits(collectedEntsa);
  collectedEnts->count = 0;
  for ( j = 0; j < NumHits; ++j )
  {
    if ( collectedEnts->count >= collectedEnts->countMax )
      break;
    HitBodyId = HavokPhysics_BroadphaseCollisionQueryResult::GetHitBodyId(collectedEntsa, j);
    Ref = Physics_GetRef((Physics_WorldId)v12, HitBodyId);
    RefSystem = Physics_GetRefSystem(Ref);
    if ( (unsigned int)(RefSystem - 2) <= 3 || RefSystem == Physics_RefSystem_GItems )
    {
      EntityNum = Physics_GetEntityNum(Ref);
      v22 = EntityNum;
      if ( (EntityNum < 0 || (unsigned int)EntityNum > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)EntityNum, "signed", EntityNum) )
        __debugbreak();
      if ( !collectedEnts->ids && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5345, ASSERT_TYPE_ASSERT, "(collected.ids)", (const char *)&queryFormat, "collected.ids") )
        __debugbreak();
      if ( removeDuplicates && (v23 = 0, (count = collectedEnts->count) != 0) )
      {
        while ( v22 != collectedEnts->ids[v23] )
        {
          if ( ++v23 >= count )
            goto LABEL_34;
        }
      }
      else
      {
LABEL_34:
        if ( collectedEnts->count >= collectedEnts->countMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5357, ASSERT_TYPE_ASSERT, "(collected.count < collected.countMax)", (const char *)&queryFormat, "collected.count < collected.countMax") )
          __debugbreak();
        collectedEnts->ids[collectedEnts->count++] = v22;
      }
    }
  }
  if ( collectedScriptables )
  {
    collectedScriptables->count = 0;
    for ( k = 0; k < NumHits; ++k )
    {
      if ( collectedScriptables->count >= collectedScriptables->countMax )
        break;
      v26 = HavokPhysics_BroadphaseCollisionQueryResult::GetHitBodyId(collectedEntsa, k);
      v27 = Physics_GetRef((Physics_WorldId)v12, v26);
      if ( Physics_GetRefSystem(v27) == Physics_RefSystem_Scriptable )
      {
        v28 = v27 & 0x3FFFFF;
        if ( !collectedScriptables->ids && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5345, ASSERT_TYPE_ASSERT, "(collected.ids)", (const char *)&queryFormat, "collected.ids") )
          __debugbreak();
        if ( removeDuplicates && (v29 = 0, (v30 = collectedScriptables->count) != 0) )
        {
          while ( v28 != collectedScriptables->ids[v29] )
          {
            if ( ++v29 >= v30 )
              goto LABEL_50;
          }
        }
        else
        {
LABEL_50:
          if ( collectedScriptables->count >= collectedScriptables->countMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5357, ASSERT_TYPE_ASSERT, "(collected.count < collected.countMax)", (const char *)&queryFormat, "collected.count < collected.countMax") )
            __debugbreak();
          collectedScriptables->ids[collectedScriptables->count++] = v28;
        }
      }
    }
  }
  v31 = hkMemHeapAllocator();
  v34.m_ignoreBodies.m_size = 0;
  if ( v34.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v31, v34.m_ignoreBodies.m_data, 4, v34.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v34.m_ignoreBodies.m_data = NULL;
  v34.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v32 = hkMemHeapAllocator();
  v34.m_ignoreEntities.m_size = 0;
  if ( v34.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v32, v34.m_ignoreEntities.m_data, 8, v34.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
}

/*
==============
PhysicsQuery_ImmediateAABBQueryAll
==============
*/
void PhysicsQuery_ImmediateAABBQueryAll(Physics_WorldId worldId, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, PhysicsQuery_AABBQueryHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v7; 
  HavokPhysics_CollisionQueryResult *v17; 
  signed int NumHits; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 

  v7 = worldId;
  _RBP = max;
  _R15 = min;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 863, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 864, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r15]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v20 & 0x7F800000) == 2139095040 )
    goto LABEL_44;
  __asm
  {
    vmovss  xmm0, dword ptr [r15+4]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v21 & 0x7F800000) == 2139095040 )
    goto LABEL_44;
  __asm
  {
    vmovss  xmm0, dword ptr [r15+8]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v22 & 0x7F800000) == 2139095040 )
  {
LABEL_44:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 865, ASSERT_TYPE_SANITY, "( !IS_NAN( ( min )[0] ) && !IS_NAN( ( min )[1] ) && !IS_NAN( ( min )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( min )[0] ) && !IS_NAN( ( min )[1] ) && !IS_NAN( ( min )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v23 & 0x7F800000) == 2139095040 )
    goto LABEL_45;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v24 & 0x7F800000) == 2139095040 )
    goto LABEL_45;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v25 & 0x7F800000) == 2139095040 )
  {
LABEL_45:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 866, ASSERT_TYPE_SANITY, "( !IS_NAN( ( max )[0] ) && !IS_NAN( ( max )[1] ) && !IS_NAN( ( max )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( max )[0] ) && !IS_NAN( ( max )[1] ) && !IS_NAN( ( max )[2] )") )
      __debugbreak();
  }
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 867, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !extendedData->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 868, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( !hits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 869, ASSERT_TYPE_ASSERT, "(hits)", (const char *)&queryFormat, "hits") )
    __debugbreak();
  if ( maxNumHits <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 870, ASSERT_TYPE_ASSERT, "(maxNumHits > 0)", (const char *)&queryFormat, "maxNumHits > 0") )
    __debugbreak();
  if ( !hitsFound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 871, ASSERT_TYPE_ASSERT, "(hitsFound)", (const char *)&queryFormat, "hitsFound") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 873, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v17 = s_PhysicsQuery_AllQueryResults[(int)(28 * v7 + Physics_GetThreadId())];
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 878, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v17, 1);
  Physics_AABBQuery((Physics_WorldId)v7, _R15, _RBP, extendedData, v17);
  NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(v17);
  if ( maxNumHits < NumHits )
    NumHits = maxNumHits;
  v19 = 0;
  for ( *hitsFound = NumHits; v19 < *hitsFound; ++v19 )
    PhysicsQuery_ExtractHitData(v17, v19, &hits[v19]);
}

/*
==============
PhysicsQuery_ImmediateAABBQueryAll
==============
*/
void PhysicsQuery_ImmediateAABBQueryAll(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, PhysicsQuery_AABBQueryHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v8; 
  Physics_AABBQueryExtendedData *v18; 
  PhysicsQuery_AABBQueryHit *v19; 
  int v20; 
  int *v21; 
  HavokPhysics_CollisionQueryResult *result; 
  signed int v23; 
  signed int v24; 
  vec3_t *v25; 
  vec3_t *v26; 
  unsigned int v27; 
  hknpBodyId *RigidBodyID; 
  int NumHits; 
  __int64 v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int NumRigidBodys; 
  unsigned int instanceIda; 
  vec3_t *mina; 
  vec3_t *maxa; 

  maxa = (vec3_t *)max;
  mina = (vec3_t *)min;
  instanceIda = instanceId;
  v8 = worldId;
  _RBX = max;
  _RSI = min;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1142, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1143, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+88h+arg_0], xmm0
  }
  if ( (v31 & 0x7F800000) == 2139095040 )
    goto LABEL_63;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+88h+arg_0], xmm0
  }
  if ( (v32 & 0x7F800000) == 2139095040 )
    goto LABEL_63;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+88h+arg_0], xmm0
  }
  if ( (v33 & 0x7F800000) == 2139095040 )
  {
LABEL_63:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1144, ASSERT_TYPE_SANITY, "( !IS_NAN( ( min )[0] ) && !IS_NAN( ( min )[1] ) && !IS_NAN( ( min )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( min )[0] ) && !IS_NAN( ( min )[1] ) && !IS_NAN( ( min )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+88h+arg_0], xmm0
  }
  if ( (v34 & 0x7F800000) == 2139095040 )
    goto LABEL_64;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+88h+arg_0], xmm0
  }
  if ( (v35 & 0x7F800000) == 2139095040 )
    goto LABEL_64;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+88h+arg_0], xmm0
  }
  if ( (v36 & 0x7F800000) == 2139095040 )
  {
LABEL_64:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1145, ASSERT_TYPE_SANITY, "( !IS_NAN( ( max )[0] ) && !IS_NAN( ( max )[1] ) && !IS_NAN( ( max )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( max )[0] ) && !IS_NAN( ( max )[1] ) && !IS_NAN( ( max )[2] )") )
      __debugbreak();
  }
  v18 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1146, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v18->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1147, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  v19 = hits;
  if ( !hits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1148, ASSERT_TYPE_ASSERT, "(hits)", (const char *)&queryFormat, "hits") )
    __debugbreak();
  v20 = maxNumHits;
  if ( maxNumHits <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1149, ASSERT_TYPE_ASSERT, "(maxNumHits > 0)", (const char *)&queryFormat, "maxNumHits > 0") )
    __debugbreak();
  v21 = hitsFound;
  if ( !hitsFound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1150, ASSERT_TYPE_ASSERT, "(hitsFound)", (const char *)&queryFormat, "hitsFound") )
    __debugbreak();
  if ( instanceId != -1 )
  {
    if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1157, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
      __debugbreak();
    result = s_PhysicsQuery_AllQueryResults[(int)(28 * v8 + Physics_GetThreadId())];
    if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1162, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    HavokPhysics_CollisionQueryResult::Reset(result, 1);
    v23 = 0;
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v8, instanceId);
    v24 = 0;
    if ( NumRigidBodys > 0 )
    {
      v25 = maxa;
      v26 = mina;
      v27 = instanceIda;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v8 > 7 )
        {
          LODWORD(v30) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v30) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v8 - 2) <= 5 )
        {
          LODWORD(v30) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v30) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v8 <= 1 )
        {
          LODWORD(v30) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v30) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID((hknpBodyId *)&instanceIda, (const Physics_WorldId)v8, v27, v24);
        Physics_AABBQuery((Physics_WorldId)v8, RigidBodyID->m_serialAndIndex, v26, v25, v18, result);
        ++v24;
      }
      while ( v24 < NumRigidBodys );
      v21 = hitsFound;
      v23 = 0;
      v19 = hits;
      v20 = maxNumHits;
    }
    NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(result);
    if ( v20 < NumHits )
      NumHits = v20;
    *v21 = NumHits;
    if ( NumHits > 0 )
    {
      do
      {
        PhysicsQuery_ExtractHitData(result, v23, &v19[v23]);
        ++v23;
      }
      while ( v23 < *v21 );
    }
  }
}

/*
==============
PhysicsQuery_ImmediateAABBQueryAll
==============
*/
void PhysicsQuery_ImmediateAABBQueryAll(Physics_WorldId worldId, PhysicsObject *physObj, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, PhysicsQuery_AABBQueryHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v8; 

  v8 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1124, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1125, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1126, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  PhysicsQuery_ImmediateAABBQueryAll((Physics_WorldId)v8, physObj->physicsInstances[v8], min, max, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateAABBQueryAll
==============
*/
void PhysicsQuery_ImmediateAABBQueryAll(Physics_WorldId worldId, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, PhysicsQuery_AABBQueryHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v9; 
  CG_PhysicsObject *v13; 

  v9 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1107, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1108, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (ent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1109, ASSERT_TYPE_ASSERT, "(CENextValid( ent ))", (const char *)&queryFormat, "CENextValid( ent )") )
    __debugbreak();
  v13 = CG_PhysicsObject_Get(ent->nextState.number, localClientNum);
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1112, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  PhysicsQuery_ImmediateAABBQueryAll((Physics_WorldId)v9, v13, min, max, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateAABBQueryAll
==============
*/
void PhysicsQuery_ImmediateAABBQueryAll(Physics_WorldId worldId, const gentity_s *ent, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, PhysicsQuery_AABBQueryHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v8; 
  G_PhysicsObject *v12; 

  v8 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1089, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1090, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1091, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v12 = G_PhysicsObject_Get(ent);
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1094, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  PhysicsQuery_ImmediateAABBQueryAll((Physics_WorldId)v8, v12, min, max, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateAABBQueryClosest
==============
*/
void PhysicsQuery_ImmediateAABBQueryClosest(Physics_WorldId worldId, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, PhysicsQuery_AABBQueryHit *hit)
{
  __int64 v5; 
  HavokPhysics_CollisionQueryResult *v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 

  v5 = worldId;
  _RSI = max;
  _RBP = min;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 833, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 834, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v16 & 0x7F800000) == 2139095040 )
    goto LABEL_35;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v17 & 0x7F800000) == 2139095040 )
    goto LABEL_35;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v18 & 0x7F800000) == 2139095040 )
  {
LABEL_35:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 835, ASSERT_TYPE_SANITY, "( !IS_NAN( ( min )[0] ) && !IS_NAN( ( min )[1] ) && !IS_NAN( ( min )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( min )[0] ) && !IS_NAN( ( min )[1] ) && !IS_NAN( ( min )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v19 & 0x7F800000) == 2139095040 )
    goto LABEL_36;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v20 & 0x7F800000) == 2139095040 )
    goto LABEL_36;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v21 & 0x7F800000) == 2139095040 )
  {
LABEL_36:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 836, ASSERT_TYPE_SANITY, "( !IS_NAN( ( max )[0] ) && !IS_NAN( ( max )[1] ) && !IS_NAN( ( max )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( max )[0] ) && !IS_NAN( ( max )[1] ) && !IS_NAN( ( max )[2] )") )
      __debugbreak();
  }
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 837, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !extendedData->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 838, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 839, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 841, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v15 = s_PhysicsQuery_ClosestQueryResults[(int)(28 * v5 + Physics_GetThreadId())];
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 846, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v15, 1);
  Physics_AABBQuery((Physics_WorldId)v5, _RBP, _RSI, extendedData, v15);
  PhysicsQuery_ExtractHitData(v15, 0, hit);
}

/*
==============
PhysicsQuery_ImmediateAABBQueryClosest
==============
*/
void PhysicsQuery_ImmediateAABBQueryClosest(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, PhysicsQuery_AABBQueryHit *hit)
{
  __int64 v6; 
  Physics_AABBQueryExtendedData *v16; 
  PhysicsQuery_AABBQueryHit *v17; 
  HavokPhysics_CollisionQueryResult *result; 
  int NumRigidBodys; 
  signed int v20; 
  int v21; 
  unsigned int v22; 
  hknpBodyId *RigidBodyID; 
  __int64 v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  unsigned int instanceIda; 

  instanceIda = instanceId;
  v6 = worldId;
  _R14 = max;
  _R15 = min;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1048, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1049, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r15]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v25 & 0x7F800000) == 2139095040 )
    goto LABEL_54;
  __asm
  {
    vmovss  xmm0, dword ptr [r15+4]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v26 & 0x7F800000) == 2139095040 )
    goto LABEL_54;
  __asm
  {
    vmovss  xmm0, dword ptr [r15+8]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v27 & 0x7F800000) == 2139095040 )
  {
LABEL_54:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1050, ASSERT_TYPE_SANITY, "( !IS_NAN( ( min )[0] ) && !IS_NAN( ( min )[1] ) && !IS_NAN( ( min )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( min )[0] ) && !IS_NAN( ( min )[1] ) && !IS_NAN( ( min )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v28 & 0x7F800000) == 2139095040 )
    goto LABEL_55;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+4]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v29 & 0x7F800000) == 2139095040 )
    goto LABEL_55;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v30 & 0x7F800000) == 2139095040 )
  {
LABEL_55:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1051, ASSERT_TYPE_SANITY, "( !IS_NAN( ( max )[0] ) && !IS_NAN( ( max )[1] ) && !IS_NAN( ( max )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( max )[0] ) && !IS_NAN( ( max )[1] ) && !IS_NAN( ( max )[2] )") )
      __debugbreak();
  }
  v16 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1052, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v16->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1053, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  v17 = hit;
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1054, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( instanceId != -1 )
  {
    if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1061, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
      __debugbreak();
    result = s_PhysicsQuery_ClosestQueryResults[(int)(28 * v6 + Physics_GetThreadId())];
    if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1066, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    HavokPhysics_CollisionQueryResult::Reset(result, 1);
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v6, instanceId);
    v20 = 0;
    v21 = NumRigidBodys;
    if ( NumRigidBodys > 0 )
    {
      v22 = instanceIda;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v6 > 7 )
        {
          LODWORD(v24) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v24) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v6 - 2) <= 5 )
        {
          LODWORD(v24) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v24) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v6 <= 1 )
        {
          LODWORD(v24) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v24) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID((hknpBodyId *)&instanceIda, (const Physics_WorldId)v6, v22, v20);
        Physics_AABBQuery((Physics_WorldId)v6, RigidBodyID->m_serialAndIndex, _R15, _R14, v16, result);
        ++v20;
      }
      while ( v20 < v21 );
      v17 = hit;
    }
    PhysicsQuery_ExtractHitData(result, 0, v17);
  }
}

/*
==============
PhysicsQuery_ImmediateAABBQueryClosest
==============
*/
void PhysicsQuery_ImmediateAABBQueryClosest(Physics_WorldId worldId, PhysicsObject *physObj, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, PhysicsQuery_AABBQueryHit *hit)
{
  __int64 v6; 

  v6 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1031, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1032, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1033, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  PhysicsQuery_ImmediateAABBQueryClosest((Physics_WorldId)v6, physObj->physicsInstances[v6], min, max, extendedData, hit);
}

/*
==============
PhysicsQuery_ImmediateAABBQueryClosest
==============
*/
void PhysicsQuery_ImmediateAABBQueryClosest(Physics_WorldId worldId, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, PhysicsQuery_AABBQueryHit *hit)
{
  __int64 v7; 
  CG_PhysicsObject *v11; 

  v7 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1013, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1014, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1015, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (ent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1016, ASSERT_TYPE_ASSERT, "(CENextValid( ent ))", (const char *)&queryFormat, "CENextValid( ent )") )
    __debugbreak();
  v11 = CG_PhysicsObject_Get(ent->nextState.number, localClientNum);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1019, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  PhysicsQuery_ImmediateAABBQueryClosest((Physics_WorldId)v7, v11, min, max, extendedData, hit);
}

/*
==============
PhysicsQuery_ImmediateAABBQueryClosest
==============
*/
void PhysicsQuery_ImmediateAABBQueryClosest(Physics_WorldId worldId, const gentity_s *ent, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, PhysicsQuery_AABBQueryHit *hit)
{
  __int64 v6; 
  G_PhysicsObject *v10; 

  v6 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 996, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 997, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 998, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v10 = G_PhysicsObject_Get(ent);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1001, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  PhysicsQuery_ImmediateAABBQueryClosest((Physics_WorldId)v6, v10, min, max, extendedData, hit);
}

/*
==============
PhysicsQuery_ImmediateAABBQuerySightCheck
==============
*/
bool PhysicsQuery_ImmediateAABBQuerySightCheck(Physics_WorldId worldId, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData)
{
  __int64 v4; 
  HavokPhysics_CollisionQueryResult *v14; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 

  v4 = worldId;
  _RDI = max;
  _RSI = min;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 802, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 803, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v16 & 0x7F800000) == 2139095040 )
    goto LABEL_32;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v17 & 0x7F800000) == 2139095040 )
    goto LABEL_32;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v18 & 0x7F800000) == 2139095040 )
  {
LABEL_32:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 804, ASSERT_TYPE_SANITY, "( !IS_NAN( ( min )[0] ) && !IS_NAN( ( min )[1] ) && !IS_NAN( ( min )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( min )[0] ) && !IS_NAN( ( min )[1] ) && !IS_NAN( ( min )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v19 & 0x7F800000) == 2139095040 )
    goto LABEL_33;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v20 & 0x7F800000) == 2139095040 )
    goto LABEL_33;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v21 & 0x7F800000) == 2139095040 )
  {
LABEL_33:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 805, ASSERT_TYPE_SANITY, "( !IS_NAN( ( max )[0] ) && !IS_NAN( ( max )[1] ) && !IS_NAN( ( max )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( max )[0] ) && !IS_NAN( ( max )[1] ) && !IS_NAN( ( max )[2] )") )
      __debugbreak();
  }
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 806, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !extendedData->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 807, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 809, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v14 = s_PhysicsQuery_AnyQueryResults[(int)(28 * v4 + Physics_GetThreadId())];
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 814, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v14, 1);
  Physics_AABBQuery((Physics_WorldId)v4, _RSI, _RDI, extendedData, v14);
  return !HavokPhysics_CollisionQueryResult::HasHit(v14);
}

/*
==============
PhysicsQuery_ImmediateAABBQuerySightCheck
==============
*/
bool PhysicsQuery_ImmediateAABBQuerySightCheck(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData)
{
  __int64 v5; 
  Physics_AABBQueryExtendedData *v15; 
  HavokPhysics_CollisionQueryResult *v17; 
  signed int v18; 
  int NumRigidBodys; 
  hknpBodyId *RigidBodyID; 
  __int64 v21; 
  hknpBodyId result; 

  v5 = worldId;
  _R14 = max;
  _R15 = min;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 952, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 953, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r15]
    vmovss  [rsp+68h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_51;
  __asm
  {
    vmovss  xmm0, dword ptr [r15+4]
    vmovss  [rsp+68h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_51;
  __asm
  {
    vmovss  xmm0, dword ptr [r15+8]
    vmovss  [rsp+68h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
  {
LABEL_51:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 954, ASSERT_TYPE_SANITY, "( !IS_NAN( ( min )[0] ) && !IS_NAN( ( min )[1] ) && !IS_NAN( ( min )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( min )[0] ) && !IS_NAN( ( min )[1] ) && !IS_NAN( ( min )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vmovss  [rsp+68h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_52;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+4]
    vmovss  [rsp+68h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_52;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  [rsp+68h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
  {
LABEL_52:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 955, ASSERT_TYPE_SANITY, "( !IS_NAN( ( max )[0] ) && !IS_NAN( ( max )[1] ) && !IS_NAN( ( max )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( max )[0] ) && !IS_NAN( ( max )[1] ) && !IS_NAN( ( max )[2] )") )
      __debugbreak();
  }
  v15 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 956, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v15->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 957, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( instanceId == -1 )
    return 0;
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 965, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v17 = s_PhysicsQuery_AnyQueryResults[(int)(28 * v5 + Physics_GetThreadId())];
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 970, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v17, 1);
  v18 = 0;
  NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v5, instanceId);
  if ( NumRigidBodys > 0 )
  {
    do
    {
      if ( HavokPhysics_CollisionQueryResult::HasHit(v17) )
        break;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v5 > 7 )
      {
        LODWORD(v21) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v21) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v5 - 2) <= 5 )
      {
        LODWORD(v21) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v21) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v5 <= 1 )
      {
        LODWORD(v21) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v21) )
          __debugbreak();
      }
      RigidBodyID = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v5, instanceId, v18);
      Physics_AABBQuery((Physics_WorldId)v5, RigidBodyID->m_serialAndIndex, _R15, _R14, v15, v17);
      ++v18;
    }
    while ( v18 < NumRigidBodys );
  }
  return !HavokPhysics_CollisionQueryResult::HasHit(v17);
}

/*
==============
PhysicsQuery_ImmediateAABBQuerySightCheck
==============
*/
bool PhysicsQuery_ImmediateAABBQuerySightCheck(Physics_WorldId worldId, PhysicsObject *physObj, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData)
{
  __int64 v5; 

  v5 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 933, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 934, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 935, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  return PhysicsQuery_ImmediateAABBQuerySightCheck((Physics_WorldId)v5, physObj->physicsInstances[v5], min, max, extendedData);
}

/*
==============
PhysicsQuery_ImmediateAABBQuerySightCheck
==============
*/
bool PhysicsQuery_ImmediateAABBQuerySightCheck(Physics_WorldId worldId, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData)
{
  __int64 v6; 
  CG_PhysicsObject *v10; 

  v6 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 915, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 916, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 917, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (ent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 918, ASSERT_TYPE_ASSERT, "(CENextValid( ent ))", (const char *)&queryFormat, "CENextValid( ent )") )
    __debugbreak();
  v10 = CG_PhysicsObject_Get(ent->nextState.number, localClientNum);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 921, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  return PhysicsQuery_ImmediateAABBQuerySightCheck((Physics_WorldId)v6, v10, min, max, extendedData);
}

/*
==============
PhysicsQuery_ImmediateAABBQuerySightCheck
==============
*/
bool PhysicsQuery_ImmediateAABBQuerySightCheck(Physics_WorldId worldId, const gentity_s *ent, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData)
{
  __int64 v5; 
  G_PhysicsObject *v9; 

  v5 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 898, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 899, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 900, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v9 = G_PhysicsObject_Get(ent);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 903, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  return PhysicsQuery_ImmediateAABBQuerySightCheck((Physics_WorldId)v5, v9, min, max, extendedData);
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsAll
==============
*/
void PhysicsQuery_ImmediateGetClosestPointsAll(Physics_WorldId worldId, hknpShape *shape, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData, PhysicsQuery_GetClosestPointsHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v10; 
  HavokPhysics_CollisionQueryResult *result; 
  signed int NumHits; 
  int v24; 
  float fmt; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 

  v10 = worldId;
  __asm { vmovaps [rsp+78h+var_38], xmm6 }
  _RBX = rotation;
  _RBP = point;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2427, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2428, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2429, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v29 & 0x7F800000) == 2139095040 )
    goto LABEL_49;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v30 & 0x7F800000) == 2139095040 )
    goto LABEL_49;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v31 & 0x7F800000) == 2139095040 )
  {
LABEL_49:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2430, ASSERT_TYPE_SANITY, "( !IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v32 & 0x7F800000) == 2139095040 )
    goto LABEL_50;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v33 & 0x7F800000) == 2139095040 )
    goto LABEL_50;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v34 & 0x7F800000) == 2139095040 )
    goto LABEL_50;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v35 & 0x7F800000) == 2139095040 )
  {
LABEL_50:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2431, ASSERT_TYPE_SANITY, "( !IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] )") )
      __debugbreak();
  }
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2432, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !extendedData->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2433, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( !hits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2434, ASSERT_TYPE_ASSERT, "(hits)", (const char *)&queryFormat, "hits") )
    __debugbreak();
  if ( maxNumHits <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2435, ASSERT_TYPE_ASSERT, "(maxNumHits > 0)", (const char *)&queryFormat, "maxNumHits > 0") )
    __debugbreak();
  if ( !hitsFound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2436, ASSERT_TYPE_ASSERT, "(hitsFound)", (const char *)&queryFormat, "hitsFound") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2438, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  result = s_PhysicsQuery_AllQueryResults[(int)(28 * v10 + Physics_GetThreadId())];
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2443, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(result, 1);
  __asm
  {
    vmovss  xmm6, [rsp+78h+radius]
    vmovss  dword ptr [rsp+78h+fmt], xmm6
  }
  Physics_GetClosestPoints((Physics_WorldId)v10, shape, _RBP, _RBX, fmt, extendedData, result);
  NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(result);
  if ( maxNumHits < NumHits )
    NumHits = maxNumHits;
  v24 = 0;
  for ( *hitsFound = NumHits; v24 < *hitsFound; ++v24 )
  {
    __asm { vmovaps xmm1, xmm6; radius }
    PhysicsQuery_ExtractHitData(_RBP, *(const float *)&_XMM1, result, v24, &hits[(__int64)v24]);
  }
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsAll
==============
*/
void PhysicsQuery_ImmediateGetClosestPointsAll(Physics_WorldId worldId, hknpShape *shape, unsigned int instanceId, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData, PhysicsQuery_GetClosestPointsHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v11; 
  Physics_GetClosestPointsExtendedData *v23; 
  PhysicsQuery_GetClosestPointsHit *v24; 
  int *v25; 
  HavokPhysics_CollisionQueryResult *result; 
  int NumRigidBodys; 
  signed int v29; 
  signed int v30; 
  Physics_GetClosestPointsExtendedData *v31; 
  unsigned int v32; 
  hknpBodyId *RigidBodyID; 
  int NumHits; 
  float maxDistance; 
  Physics_GetClosestPointsExtendedData *v38; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  unsigned int instanceIda; 

  instanceIda = instanceId;
  v11 = worldId;
  _RBP = point;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2928, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2929, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2930, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  [rsp+88h+arg_0], xmm0
  }
  if ( (v40 & 0x7F800000) == 2139095040 )
    goto LABEL_68;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vmovss  [rsp+88h+arg_0], xmm0
  }
  if ( (v41 & 0x7F800000) == 2139095040 )
    goto LABEL_68;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  [rsp+88h+arg_0], xmm0
  }
  if ( (v42 & 0x7F800000) == 2139095040 )
  {
LABEL_68:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2931, ASSERT_TYPE_SANITY, "( !IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] )") )
      __debugbreak();
  }
  _R12 = rotation;
  __asm
  {
    vmovss  xmm0, dword ptr [r12]
    vmovss  [rsp+88h+arg_0], xmm0
  }
  if ( (v43 & 0x7F800000) == 2139095040 )
    goto LABEL_69;
  __asm
  {
    vmovss  xmm0, dword ptr [r12+4]
    vmovss  [rsp+88h+arg_0], xmm0
  }
  if ( (v44 & 0x7F800000) == 2139095040 )
    goto LABEL_69;
  __asm
  {
    vmovss  xmm0, dword ptr [r12+8]
    vmovss  [rsp+88h+arg_0], xmm0
  }
  if ( (v45 & 0x7F800000) == 2139095040 )
    goto LABEL_69;
  __asm
  {
    vmovss  xmm0, dword ptr [r12+0Ch]
    vmovss  [rsp+88h+arg_0], xmm0
  }
  if ( (v46 & 0x7F800000) == 2139095040 )
  {
LABEL_69:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2932, ASSERT_TYPE_SANITY, "( !IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] )") )
      __debugbreak();
  }
  v23 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2933, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v23->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2934, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  v24 = hits;
  if ( !hits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2935, ASSERT_TYPE_ASSERT, "(hits)", (const char *)&queryFormat, "hits") )
    __debugbreak();
  if ( maxNumHits <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2936, ASSERT_TYPE_ASSERT, "(maxNumHits > 0)", (const char *)&queryFormat, "maxNumHits > 0") )
    __debugbreak();
  v25 = hitsFound;
  if ( !hitsFound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2937, ASSERT_TYPE_ASSERT, "(hitsFound)", (const char *)&queryFormat, "hitsFound") )
    __debugbreak();
  if ( instanceId != -1 )
  {
    __asm { vmovaps [rsp+88h+var_48], xmm6 }
    if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2945, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
      __debugbreak();
    result = s_PhysicsQuery_AllQueryResults[(int)(28 * v11 + Physics_GetThreadId())];
    if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2950, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    HavokPhysics_CollisionQueryResult::Reset(result, 1);
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v11, instanceId);
    __asm { vmovss  xmm6, [rsp+88h+radius] }
    v29 = 0;
    v47 = NumRigidBodys;
    v30 = 0;
    if ( NumRigidBodys > 0 )
    {
      v31 = extendedData;
      v32 = instanceIda;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v11 > 7 )
        {
          LODWORD(v38) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v38) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v11 - 2) <= 5 )
        {
          LODWORD(v38) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v38) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v11 <= 1 )
        {
          LODWORD(v38) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v38) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID((hknpBodyId *)&instanceIda, (const Physics_WorldId)v11, v32, v30);
        __asm { vmovss  [rsp+88h+maxDistance], xmm6 }
        Physics_GetClosestPoints((Physics_WorldId)v11, RigidBodyID->m_serialAndIndex, shape, _RBP, _R12, maxDistance, v31, result);
        ++v30;
      }
      while ( v30 < v47 );
      v25 = hitsFound;
      v29 = 0;
      v24 = hits;
    }
    NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(result);
    if ( maxNumHits < NumHits )
      NumHits = maxNumHits;
    *v25 = NumHits;
    if ( NumHits > 0 )
    {
      do
      {
        __asm { vmovaps xmm1, xmm6; radius }
        PhysicsQuery_ExtractHitData(_RBP, *(const float *)&_XMM1, result, v29, &v24[(__int64)v29]);
        ++v29;
      }
      while ( v29 < *v25 );
    }
    __asm { vmovaps xmm6, [rsp+88h+var_48] }
  }
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsAll
==============
*/
void PhysicsQuery_ImmediateGetClosestPointsAll(Physics_WorldId worldId, hknpShape *shape, PhysicsObject *physObj, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData, PhysicsQuery_GetClosestPointsHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v10; 

  v10 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2692, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2693, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2694, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  PhysicsQuery_ImmediateGetClosestPointsAll((Physics_WorldId)v10, shape, physObj->physicsInstances[v10], point, rotation, radius, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsAll
==============
*/
void PhysicsQuery_ImmediateGetClosestPointsAll(Physics_WorldId worldId, hknpShape *shape, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData, PhysicsQuery_GetClosestPointsHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v11; 
  CG_PhysicsObject *v15; 
  float v17; 

  v11 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2674, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2675, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2676, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (ent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2677, ASSERT_TYPE_ASSERT, "(CENextValid( ent ))", (const char *)&queryFormat, "CENextValid( ent )") )
    __debugbreak();
  v15 = CG_PhysicsObject_Get(ent->nextState.number, localClientNum);
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2680, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, [rsp+58h+radius]
    vmovss  [rsp+58h+var_30], xmm0
  }
  PhysicsQuery_ImmediateGetClosestPointsAll((Physics_WorldId)v11, shape, v15, point, rotation, v17, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsAll
==============
*/
void PhysicsQuery_ImmediateGetClosestPointsAll(Physics_WorldId worldId, hknpShape *shape, const gentity_s *ent, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData, PhysicsQuery_GetClosestPointsHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v10; 
  G_PhysicsObject *v14; 

  v10 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2657, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2658, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2659, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v14 = G_PhysicsObject_Get(ent);
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2662, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  PhysicsQuery_ImmediateGetClosestPointsAll((Physics_WorldId)v10, shape, v14, point, rotation, radius, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsFree
==============
*/
bool PhysicsQuery_ImmediateGetClosestPointsFree(Physics_WorldId worldId, hknpShape *shape, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData)
{
  __int64 v6; 
  HavokPhysics_CollisionQueryResult *v17; 
  float fmt; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 

  v6 = worldId;
  _RSI = rotation;
  _RBP = point;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2364, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2365, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2366, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v21 & 0x7F800000) == 2139095040 )
    goto LABEL_36;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v22 & 0x7F800000) == 2139095040 )
    goto LABEL_36;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v23 & 0x7F800000) == 2139095040 )
  {
LABEL_36:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2367, ASSERT_TYPE_SANITY, "( !IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v24 & 0x7F800000) == 2139095040 )
    goto LABEL_37;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v25 & 0x7F800000) == 2139095040 )
    goto LABEL_37;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v26 & 0x7F800000) == 2139095040 )
    goto LABEL_37;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+0Ch]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v27 & 0x7F800000) == 2139095040 )
  {
LABEL_37:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2368, ASSERT_TYPE_SANITY, "( !IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] )") )
      __debugbreak();
  }
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2369, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !extendedData->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2370, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2372, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v17 = s_PhysicsQuery_AnyQueryResults[(int)(28 * v6 + Physics_GetThreadId())];
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2377, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v17, 1);
  __asm
  {
    vmovss  xmm0, [rsp+68h+radius]
    vmovss  dword ptr [rsp+68h+fmt], xmm0
  }
  Physics_GetClosestPoints((Physics_WorldId)v6, shape, _RBP, _RSI, fmt, extendedData, v17);
  return !HavokPhysics_CollisionQueryResult::HasHit(v17);
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsFree
==============
*/
bool PhysicsQuery_ImmediateGetClosestPointsFree(Physics_WorldId worldId, hknpShape *shape, unsigned int instanceId, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData)
{
  __int64 v8; 
  Physics_GetClosestPointsExtendedData *v20; 
  HavokPhysics_CollisionQueryResult *v22; 
  signed int v23; 
  int NumRigidBodys; 
  hknpBodyId *RigidBodyID; 
  float maxDistance; 
  Physics_GetClosestPointsExtendedData *v29; 
  hknpBodyId result; 
  hknpShape *shapea; 

  shapea = shape;
  v8 = worldId;
  _R15 = point;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2517, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2518, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2519, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r15]
    vmovss  [rsp+88h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_57;
  __asm
  {
    vmovss  xmm0, dword ptr [r15+4]
    vmovss  [rsp+88h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_57;
  __asm
  {
    vmovss  xmm0, dword ptr [r15+8]
    vmovss  [rsp+88h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
  {
LABEL_57:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2520, ASSERT_TYPE_SANITY, "( !IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] )") )
      __debugbreak();
  }
  _RSI = rotation;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+88h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_58;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+88h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_58;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+88h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_58;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+0Ch]
    vmovss  [rsp+88h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
  {
LABEL_58:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2521, ASSERT_TYPE_SANITY, "( !IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] )") )
      __debugbreak();
  }
  v20 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2522, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v20->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2523, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( instanceId == -1 )
    return 0;
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2531, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v22 = s_PhysicsQuery_AnyQueryResults[(int)(28 * v8 + Physics_GetThreadId())];
  if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2536, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v22, 1);
  v23 = 0;
  NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v8, instanceId);
  if ( NumRigidBodys > 0 )
  {
    __asm
    {
      vmovaps [rsp+88h+var_48], xmm6
      vmovss  xmm6, [rsp+88h+radius]
    }
    do
    {
      if ( HavokPhysics_CollisionQueryResult::HasHit(v22) )
        break;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v8 > 7 )
      {
        LODWORD(v29) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v29) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v8 - 2) <= 5 )
      {
        LODWORD(v29) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v29) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v8 <= 1 )
      {
        LODWORD(v29) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v29) )
          __debugbreak();
      }
      RigidBodyID = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v8, instanceId, v23);
      __asm { vmovss  [rsp+88h+maxDistance], xmm6 }
      Physics_GetClosestPoints((Physics_WorldId)v8, RigidBodyID->m_serialAndIndex, shapea, _R15, _RSI, maxDistance, v20, v22);
      ++v23;
    }
    while ( v23 < NumRigidBodys );
    __asm { vmovaps xmm6, [rsp+88h+var_48] }
  }
  return !HavokPhysics_CollisionQueryResult::HasHit(v22);
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsFree
==============
*/
bool PhysicsQuery_ImmediateGetClosestPointsFree(Physics_WorldId worldId, hknpShape *shape, PhysicsObject *physObj, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData)
{
  __int64 v7; 

  v7 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2498, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2499, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2500, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  return PhysicsQuery_ImmediateGetClosestPointsFree((Physics_WorldId)v7, shape, physObj->physicsInstances[v7], point, rotation, radius, extendedData);
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsFree
==============
*/
bool PhysicsQuery_ImmediateGetClosestPointsFree(Physics_WorldId worldId, hknpShape *shape, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData)
{
  __int64 v8; 
  CG_PhysicsObject *v12; 
  float rotationa; 

  v8 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2480, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2481, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2482, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (ent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2483, ASSERT_TYPE_ASSERT, "(CENextValid( ent ))", (const char *)&queryFormat, "CENextValid( ent )") )
    __debugbreak();
  v12 = CG_PhysicsObject_Get(ent->nextState.number, localClientNum);
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2486, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+48h+radius]
    vmovss  dword ptr [rsp+48h+rotation], xmm0
  }
  return PhysicsQuery_ImmediateGetClosestPointsFree((Physics_WorldId)v8, shape, v12, point, rotation, rotationa, extendedData);
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsFree
==============
*/
bool PhysicsQuery_ImmediateGetClosestPointsFree(Physics_WorldId worldId, hknpShape *shape, const gentity_s *ent, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData)
{
  __int64 v7; 
  G_PhysicsObject *v11; 

  v7 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2463, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2464, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2465, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v11 = G_PhysicsObject_Get(ent);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2468, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  return PhysicsQuery_ImmediateGetClosestPointsFree((Physics_WorldId)v7, shape, v11, point, rotation, radius, extendedData);
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsWorst
==============
*/
void PhysicsQuery_ImmediateGetClosestPointsWorst(Physics_WorldId worldId, hknpShape *shape, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData, PhysicsQuery_GetClosestPointsHit *hit)
{
  __int64 v8; 
  HavokPhysics_CollisionQueryResult *result; 
  float fmt; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 

  v8 = worldId;
  __asm { vmovaps [rsp+78h+var_38], xmm6 }
  _RSI = rotation;
  _R14 = point;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2396, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2397, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2398, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v25 & 0x7F800000) == 2139095040 )
    goto LABEL_39;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+4]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v26 & 0x7F800000) == 2139095040 )
    goto LABEL_39;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v27 & 0x7F800000) == 2139095040 )
  {
LABEL_39:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2399, ASSERT_TYPE_SANITY, "( !IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v28 & 0x7F800000) == 2139095040 )
    goto LABEL_40;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v29 & 0x7F800000) == 2139095040 )
    goto LABEL_40;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v30 & 0x7F800000) == 2139095040 )
    goto LABEL_40;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+0Ch]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v31 & 0x7F800000) == 2139095040 )
  {
LABEL_40:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2400, ASSERT_TYPE_SANITY, "( !IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] )") )
      __debugbreak();
  }
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2401, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !extendedData->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2402, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2403, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2405, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  result = s_PhysicsQuery_ClosestQueryResults[(int)(28 * v8 + Physics_GetThreadId())];
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2410, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(result, 1);
  __asm
  {
    vmovss  xmm6, dword ptr [rsp+78h+radius]
    vmovss  dword ptr [rsp+78h+fmt], xmm6
  }
  Physics_GetClosestPoints((Physics_WorldId)v8, shape, _R14, _RSI, fmt, extendedData, result);
  __asm
  {
    vmovaps xmm1, xmm6; radius
    vmovaps xmm6, [rsp+78h+var_38]
  }
  PhysicsQuery_ExtractHitData(_R14, *(const float *)&_XMM1, result, 0, hit);
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsWorst
==============
*/
void PhysicsQuery_ImmediateGetClosestPointsWorst(Physics_WorldId worldId, hknpShape *shape, unsigned int instanceId, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData, PhysicsQuery_GetClosestPointsHit *hit)
{
  __int64 v9; 
  Physics_GetClosestPointsExtendedData *v21; 
  PhysicsQuery_GetClosestPointsHit *v22; 
  HavokPhysics_CollisionQueryResult *result; 
  int NumRigidBodys; 
  signed int v26; 
  int v27; 
  unsigned int v28; 
  hknpBodyId *RigidBodyID; 
  float maxDistance; 
  Physics_GetClosestPointsExtendedData *v33; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  unsigned int instanceIda; 

  instanceIda = instanceId;
  v9 = worldId;
  _RBP = point;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2614, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2615, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2616, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  [rsp+88h+arg_0], xmm0
  }
  if ( (v35 & 0x7F800000) == 2139095040 )
    goto LABEL_58;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vmovss  [rsp+88h+arg_0], xmm0
  }
  if ( (v36 & 0x7F800000) == 2139095040 )
    goto LABEL_58;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  [rsp+88h+arg_0], xmm0
  }
  if ( (v37 & 0x7F800000) == 2139095040 )
  {
LABEL_58:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2617, ASSERT_TYPE_SANITY, "( !IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] )") )
      __debugbreak();
  }
  _RDI = rotation;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+88h+arg_0], xmm0
  }
  if ( (v38 & 0x7F800000) == 2139095040 )
    goto LABEL_59;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+88h+arg_0], xmm0
  }
  if ( (v39 & 0x7F800000) == 2139095040 )
    goto LABEL_59;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+88h+arg_0], xmm0
  }
  if ( (v40 & 0x7F800000) == 2139095040 )
    goto LABEL_59;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+0Ch]
    vmovss  [rsp+88h+arg_0], xmm0
  }
  if ( (v41 & 0x7F800000) == 2139095040 )
  {
LABEL_59:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2618, ASSERT_TYPE_SANITY, "( !IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] )") )
      __debugbreak();
  }
  v21 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2619, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v21->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2620, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  v22 = hit;
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2621, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( instanceId != -1 )
  {
    __asm { vmovaps [rsp+88h+var_48], xmm6 }
    if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2629, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
      __debugbreak();
    result = s_PhysicsQuery_ClosestQueryResults[(int)(28 * v9 + Physics_GetThreadId())];
    if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2634, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    HavokPhysics_CollisionQueryResult::Reset(result, 1);
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v9, instanceId);
    __asm { vmovss  xmm6, [rsp+88h+radius] }
    v26 = 0;
    v27 = NumRigidBodys;
    if ( NumRigidBodys > 0 )
    {
      v28 = instanceIda;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v9 > 7 )
        {
          LODWORD(v33) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v33) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v9 - 2) <= 5 )
        {
          LODWORD(v33) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v33) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v9 <= 1 )
        {
          LODWORD(v33) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v33) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID((hknpBodyId *)&instanceIda, (const Physics_WorldId)v9, v28, v26);
        __asm { vmovss  [rsp+88h+maxDistance], xmm6 }
        Physics_GetClosestPoints((Physics_WorldId)v9, RigidBodyID->m_serialAndIndex, shape, _RBP, _RDI, maxDistance, v21, result);
        ++v26;
      }
      while ( v26 < v27 );
      v22 = hit;
    }
    __asm { vmovaps xmm1, xmm6; radius }
    PhysicsQuery_ExtractHitData(_RBP, *(const float *)&_XMM1, result, 0, v22);
    __asm { vmovaps xmm6, [rsp+88h+var_48] }
  }
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsWorst
==============
*/
void PhysicsQuery_ImmediateGetClosestPointsWorst(Physics_WorldId worldId, hknpShape *shape, PhysicsObject *physObj, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData, PhysicsQuery_GetClosestPointsHit *hit)
{
  __int64 v8; 

  v8 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2597, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2598, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2599, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  PhysicsQuery_ImmediateGetClosestPointsWorst((Physics_WorldId)v8, shape, physObj->physicsInstances[v8], point, rotation, radius, extendedData, hit);
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsWorst
==============
*/
void PhysicsQuery_ImmediateGetClosestPointsWorst(Physics_WorldId worldId, hknpShape *shape, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData, PhysicsQuery_GetClosestPointsHit *hit)
{
  __int64 v9; 
  CG_PhysicsObject *v13; 
  float v15; 

  v9 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2579, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2580, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2581, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (ent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2582, ASSERT_TYPE_ASSERT, "(CENextValid( ent ))", (const char *)&queryFormat, "CENextValid( ent )") )
    __debugbreak();
  v13 = CG_PhysicsObject_Get(ent->nextState.number, localClientNum);
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2585, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, [rsp+48h+radius]
    vmovss  [rsp+48h+var_20], xmm0
  }
  PhysicsQuery_ImmediateGetClosestPointsWorst((Physics_WorldId)v9, shape, v13, point, rotation, v15, extendedData, hit);
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsWorst
==============
*/
void PhysicsQuery_ImmediateGetClosestPointsWorst(Physics_WorldId worldId, hknpShape *shape, const gentity_s *ent, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData, PhysicsQuery_GetClosestPointsHit *hit)
{
  __int64 v8; 
  G_PhysicsObject *v12; 

  v8 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2562, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2563, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2564, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v12 = G_PhysicsObject_Get(ent);
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2567, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  PhysicsQuery_ImmediateGetClosestPointsWorst((Physics_WorldId)v8, shape, v12, point, rotation, radius, extendedData, hit);
}

/*
==============
PhysicsQuery_ImmediateQueryPointAll
==============
*/

void __fastcall PhysicsQuery_ImmediateQueryPointAll(Physics_WorldId worldId, const vec3_t *point, double radius, Physics_QueryPointExtendedData *extendedData, PhysicsQuery_QueryPointHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v8; 
  HavokPhysics_CollisionQueryResult *v15; 
  signed int NumHits; 
  int v18; 
  int v22; 
  int v23; 
  int v24; 

  v8 = worldId;
  __asm { vmovaps [rsp+68h+var_38], xmm6 }
  _RDI = point;
  __asm { vmovaps xmm6, xmm2 }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2039, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2040, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v22 & 0x7F800000) == 2139095040 )
    goto LABEL_40;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v23 & 0x7F800000) == 2139095040 )
    goto LABEL_40;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v24 & 0x7F800000) == 2139095040 )
  {
LABEL_40:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2041, ASSERT_TYPE_SANITY, "( !IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] )") )
      __debugbreak();
  }
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2042, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !extendedData->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2043, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( !hits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2044, ASSERT_TYPE_ASSERT, "(hits)", (const char *)&queryFormat, "hits") )
    __debugbreak();
  if ( maxNumHits <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2045, ASSERT_TYPE_ASSERT, "(maxNumHits > 0)", (const char *)&queryFormat, "maxNumHits > 0") )
    __debugbreak();
  if ( !hitsFound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2046, ASSERT_TYPE_ASSERT, "(hitsFound)", (const char *)&queryFormat, "hitsFound") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2048, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v15 = s_PhysicsQuery_AllQueryResults[(int)(28 * v8 + Physics_GetThreadId())];
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2053, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v15, 1);
  __asm { vmovaps xmm2, xmm6; maxDistance }
  Physics_QueryPoint((Physics_WorldId)v8, _RDI, *(float *)&_XMM2, extendedData, v15);
  NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(v15);
  if ( maxNumHits < NumHits )
    NumHits = maxNumHits;
  v18 = 0;
  for ( *hitsFound = NumHits; v18 < *hitsFound; ++v18 )
  {
    __asm { vmovaps xmm1, xmm6; radius }
    PhysicsQuery_ExtractHitData(_RDI, *(const float *)&_XMM1, v15, v18, &hits[v18]);
  }
  __asm { vmovaps xmm6, [rsp+68h+var_38] }
}

/*
==============
PhysicsQuery_ImmediateQueryPointAll
==============
*/

void __fastcall PhysicsQuery_ImmediateQueryPointAll(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *point, double radius, Physics_QueryPointExtendedData *extendedData, PhysicsQuery_QueryPointHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v9; 
  Physics_QueryPointExtendedData *v16; 
  PhysicsQuery_QueryPointHit *v17; 
  int v18; 
  int *v19; 
  HavokPhysics_CollisionQueryResult *result; 
  signed int v21; 
  signed int v22; 
  Physics_QueryPointExtendedData *v23; 
  unsigned int v24; 
  hknpBodyId *RigidBodyID; 
  int NumHits; 
  __int64 v30; 
  int v32; 
  int v33; 
  int v34; 
  int NumRigidBodys; 
  unsigned int instanceIda; 

  instanceIda = instanceId;
  v9 = worldId;
  __asm { vmovaps [rsp+88h+var_48], xmm6 }
  _RBP = point;
  __asm { vmovaps xmm6, xmm3 }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2316, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2317, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  [rsp+88h+arg_0], xmm0
  }
  if ( (v32 & 0x7F800000) == 2139095040 )
    goto LABEL_59;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vmovss  [rsp+88h+arg_0], xmm0
  }
  if ( (v33 & 0x7F800000) == 2139095040 )
    goto LABEL_59;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  [rsp+88h+arg_0], xmm0
  }
  if ( (v34 & 0x7F800000) == 2139095040 )
  {
LABEL_59:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2318, ASSERT_TYPE_SANITY, "( !IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] )") )
      __debugbreak();
  }
  v16 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2319, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v16->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2320, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  v17 = hits;
  if ( !hits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2321, ASSERT_TYPE_ASSERT, "(hits)", (const char *)&queryFormat, "hits") )
    __debugbreak();
  v18 = maxNumHits;
  if ( maxNumHits <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2322, ASSERT_TYPE_ASSERT, "(maxNumHits > 0)", (const char *)&queryFormat, "maxNumHits > 0") )
    __debugbreak();
  v19 = hitsFound;
  if ( !hitsFound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2323, ASSERT_TYPE_ASSERT, "(hitsFound)", (const char *)&queryFormat, "hitsFound") )
    __debugbreak();
  if ( instanceId != -1 )
  {
    if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2331, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
      __debugbreak();
    result = s_PhysicsQuery_AllQueryResults[(int)(28 * v9 + Physics_GetThreadId())];
    if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2336, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    HavokPhysics_CollisionQueryResult::Reset(result, 1);
    v21 = 0;
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v9, instanceId);
    v22 = 0;
    if ( NumRigidBodys > 0 )
    {
      v23 = extendedData;
      v24 = instanceIda;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v9 > 7 )
        {
          LODWORD(v30) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v30) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v9 - 2) <= 5 )
        {
          LODWORD(v30) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v30) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v9 <= 1 )
        {
          LODWORD(v30) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v30) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID((hknpBodyId *)&instanceIda, (const Physics_WorldId)v9, v24, v22);
        __asm { vmovaps xmm3, xmm6; maxDistance }
        Physics_QueryPoint((Physics_WorldId)v9, RigidBodyID->m_serialAndIndex, _RBP, *(float *)&_XMM3, v23, result);
        ++v22;
      }
      while ( v22 < NumRigidBodys );
      v19 = hitsFound;
      v21 = 0;
      v17 = hits;
      v18 = maxNumHits;
    }
    NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(result);
    if ( v18 < NumHits )
      NumHits = v18;
    *v19 = NumHits;
    if ( NumHits > 0 )
    {
      do
      {
        __asm { vmovaps xmm1, xmm6; radius }
        PhysicsQuery_ExtractHitData(_RBP, *(const float *)&_XMM1, result, v21, &v17[v21]);
        ++v21;
      }
      while ( v21 < *v19 );
    }
  }
  __asm { vmovaps xmm6, [rsp+88h+var_48] }
}

/*
==============
PhysicsQuery_ImmediateQueryPointAll
==============
*/

void __fastcall PhysicsQuery_ImmediateQueryPointAll(Physics_WorldId worldId, PhysicsObject *physObj, const vec3_t *point, double radius, Physics_QueryPointExtendedData *extendedData, PhysicsQuery_QueryPointHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v9; 

  v9 = worldId;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2298, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2299, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2300, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  __asm
  {
    vmovaps xmm3, xmm6; radius
    vmovaps xmm6, [rsp+58h+var_18]
  }
  PhysicsQuery_ImmediateQueryPointAll((Physics_WorldId)v9, physObj->physicsInstances[v9], point, *(const float *)&_XMM3, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateQueryPointAll
==============
*/
void PhysicsQuery_ImmediateQueryPointAll(Physics_WorldId worldId, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData, PhysicsQuery_QueryPointHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v9; 
  CG_PhysicsObject *v13; 

  v9 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2280, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2281, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2282, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (ent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2283, ASSERT_TYPE_ASSERT, "(CENextValid( ent ))", (const char *)&queryFormat, "CENextValid( ent )") )
    __debugbreak();
  v13 = CG_PhysicsObject_Get(ent->nextState.number, localClientNum);
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2286, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  __asm { vmovss  xmm3, [rsp+48h+radius]; radius }
  PhysicsQuery_ImmediateQueryPointAll((Physics_WorldId)v9, v13, point, *(const float *)&_XMM3, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateQueryPointAll
==============
*/

void __fastcall PhysicsQuery_ImmediateQueryPointAll(Physics_WorldId worldId, const gentity_s *ent, const vec3_t *point, double radius, Physics_QueryPointExtendedData *extendedData, PhysicsQuery_QueryPointHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v9; 
  G_PhysicsObject *v13; 

  v9 = worldId;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2263, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2264, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2265, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v13 = G_PhysicsObject_Get(ent);
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2268, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  __asm
  {
    vmovaps xmm3, xmm6; radius
    vmovaps xmm6, [rsp+58h+var_18]
  }
  PhysicsQuery_ImmediateQueryPointAll((Physics_WorldId)v9, v13, point, *(const float *)&_XMM3, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateQueryPointFree
==============
*/

bool __fastcall PhysicsQuery_ImmediateQueryPointFree(Physics_WorldId worldId, const vec3_t *point, double radius, Physics_QueryPointExtendedData *extendedData)
{
  __int64 v5; 
  HavokPhysics_CollisionQueryResult *v12; 
  int v17; 
  int v18; 
  int v19; 

  v5 = worldId;
  __asm { vmovaps [rsp+58h+var_28], xmm6 }
  _RDI = point;
  __asm { vmovaps xmm6, xmm2 }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1980, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1981, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v17 & 0x7F800000) == 2139095040 )
    goto LABEL_27;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v18 & 0x7F800000) == 2139095040 )
    goto LABEL_27;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v19 & 0x7F800000) == 2139095040 )
  {
LABEL_27:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1982, ASSERT_TYPE_SANITY, "( !IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] )") )
      __debugbreak();
  }
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1983, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !extendedData->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1984, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1986, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v12 = s_PhysicsQuery_AnyQueryResults[(int)(28 * v5 + Physics_GetThreadId())];
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1991, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v12, 1);
  __asm { vmovaps xmm2, xmm6; maxDistance }
  Physics_QueryPoint((Physics_WorldId)v5, _RDI, *(float *)&_XMM2, extendedData, v12);
  __asm { vmovaps xmm6, [rsp+58h+var_28] }
  return !HavokPhysics_CollisionQueryResult::HasHit(v12);
}

/*
==============
PhysicsQuery_ImmediateQueryPointFree
==============
*/

bool __fastcall PhysicsQuery_ImmediateQueryPointFree(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *point, double radius, Physics_QueryPointExtendedData *extendedData)
{
  __int64 v6; 
  Physics_QueryPointExtendedData *v13; 
  bool v14; 
  HavokPhysics_CollisionQueryResult *v15; 
  signed int v16; 
  int NumRigidBodys; 
  hknpBodyId *RigidBodyID; 
  __int64 v21; 
  hknpBodyId result; 

  v6 = worldId;
  __asm { vmovaps [rsp+78h+var_38], xmm6 }
  _RBP = point;
  __asm { vmovaps xmm6, xmm3 }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2127, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2128, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  [rsp+78h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_47;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vmovss  [rsp+78h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_47;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  [rsp+78h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
  {
LABEL_47:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2129, ASSERT_TYPE_SANITY, "( !IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] )") )
      __debugbreak();
  }
  v13 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2130, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v13->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2131, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( instanceId == -1 )
  {
    v14 = 0;
  }
  else
  {
    if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2139, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
      __debugbreak();
    v15 = s_PhysicsQuery_AnyQueryResults[(int)(28 * v6 + Physics_GetThreadId())];
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2144, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    HavokPhysics_CollisionQueryResult::Reset(v15, 1);
    v16 = 0;
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v6, instanceId);
    if ( NumRigidBodys > 0 )
    {
      do
      {
        if ( HavokPhysics_CollisionQueryResult::HasHit(v15) )
          break;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v6 > 7 )
        {
          LODWORD(v21) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v21) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v6 - 2) <= 5 )
        {
          LODWORD(v21) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v21) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v6 <= 1 )
        {
          LODWORD(v21) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v21) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v6, instanceId, v16);
        __asm { vmovaps xmm3, xmm6; maxDistance }
        Physics_QueryPoint((Physics_WorldId)v6, RigidBodyID->m_serialAndIndex, _RBP, *(float *)&_XMM3, v13, v15);
        ++v16;
      }
      while ( v16 < NumRigidBodys );
    }
    v14 = !HavokPhysics_CollisionQueryResult::HasHit(v15);
  }
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
  return v14;
}

/*
==============
PhysicsQuery_ImmediateQueryPointFree
==============
*/

bool __fastcall PhysicsQuery_ImmediateQueryPointFree(Physics_WorldId worldId, PhysicsObject *physObj, const vec3_t *point, double radius, Physics_QueryPointExtendedData *extendedData)
{
  __int64 v6; 

  v6 = worldId;
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2108, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2109, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2110, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  __asm
  {
    vmovaps xmm3, xmm6; radius
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return PhysicsQuery_ImmediateQueryPointFree((Physics_WorldId)v6, physObj->physicsInstances[v6], point, *(const float *)&_XMM3, extendedData);
}

/*
==============
PhysicsQuery_ImmediateQueryPointFree
==============
*/
bool PhysicsQuery_ImmediateQueryPointFree(Physics_WorldId worldId, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData)
{
  __int64 v6; 
  CG_PhysicsObject *v10; 

  v6 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2090, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2091, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2092, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (ent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2093, ASSERT_TYPE_ASSERT, "(CENextValid( ent ))", (const char *)&queryFormat, "CENextValid( ent )") )
    __debugbreak();
  v10 = CG_PhysicsObject_Get(ent->nextState.number, localClientNum);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2096, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  __asm { vmovss  xmm3, dword ptr [rsp+38h+radius]; radius }
  return PhysicsQuery_ImmediateQueryPointFree((Physics_WorldId)v6, v10, point, *(const float *)&_XMM3, extendedData);
}

/*
==============
PhysicsQuery_ImmediateQueryPointFree
==============
*/

bool __fastcall PhysicsQuery_ImmediateQueryPointFree(Physics_WorldId worldId, const gentity_s *ent, const vec3_t *point, double radius, Physics_QueryPointExtendedData *extendedData)
{
  __int64 v6; 
  G_PhysicsObject *v10; 

  v6 = worldId;
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2073, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2074, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2075, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v10 = G_PhysicsObject_Get(ent);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2078, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  __asm
  {
    vmovaps xmm3, xmm6; radius
    vmovaps xmm6, [rsp+48h+var_18]
  }
  return PhysicsQuery_ImmediateQueryPointFree((Physics_WorldId)v6, v10, point, *(const float *)&_XMM3, extendedData);
}

/*
==============
PhysicsQuery_ImmediateQueryPointWorst
==============
*/

void __fastcall PhysicsQuery_ImmediateQueryPointWorst(Physics_WorldId worldId, const vec3_t *point, double radius, Physics_QueryPointExtendedData *extendedData, PhysicsQuery_QueryPointHit *hit)
{
  __int64 v6; 
  HavokPhysics_CollisionQueryResult *v13; 
  int v18; 
  int v19; 
  int v20; 

  v6 = worldId;
  __asm { vmovaps [rsp+58h+var_28], xmm6 }
  _RBX = point;
  __asm { vmovaps xmm6, xmm2 }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2010, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2011, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v18 & 0x7F800000) == 2139095040 )
    goto LABEL_30;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v19 & 0x7F800000) == 2139095040 )
    goto LABEL_30;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v20 & 0x7F800000) == 2139095040 )
  {
LABEL_30:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2012, ASSERT_TYPE_SANITY, "( !IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] )") )
      __debugbreak();
  }
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2013, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !extendedData->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2014, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2015, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2017, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v13 = s_PhysicsQuery_ClosestQueryResults[(int)(28 * v6 + Physics_GetThreadId())];
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2022, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v13, 1);
  __asm { vmovaps xmm2, xmm6; maxDistance }
  Physics_QueryPoint((Physics_WorldId)v6, _RBX, *(float *)&_XMM2, extendedData, v13);
  __asm
  {
    vmovaps xmm1, xmm6; radius
    vmovaps xmm6, [rsp+58h+var_28]
  }
  PhysicsQuery_ExtractHitData(_RBX, *(const float *)&_XMM1, v13, 0, hit);
}

/*
==============
PhysicsQuery_ImmediateQueryPointWorst
==============
*/

void __fastcall PhysicsQuery_ImmediateQueryPointWorst(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *point, double radius, Physics_QueryPointExtendedData *extendedData, PhysicsQuery_QueryPointHit *hit)
{
  __int64 v7; 
  Physics_QueryPointExtendedData *v14; 
  PhysicsQuery_QueryPointHit *v15; 
  HavokPhysics_CollisionQueryResult *v16; 
  signed int v17; 
  int NumRigidBodys; 
  hknpBodyId *RigidBodyID; 
  __int64 v23; 
  hknpBodyId result; 

  v7 = worldId;
  __asm { vmovaps [rsp+78h+var_38], xmm6 }
  _RDI = point;
  __asm { vmovaps xmm6, xmm3 }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2222, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2223, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+78h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_49;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+78h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_49;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+78h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
  {
LABEL_49:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2224, ASSERT_TYPE_SANITY, "( !IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] )") )
      __debugbreak();
  }
  v14 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2225, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v14->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2226, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  v15 = hit;
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2227, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( instanceId != -1 )
  {
    if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2235, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
      __debugbreak();
    v16 = s_PhysicsQuery_ClosestQueryResults[(int)(28 * v7 + Physics_GetThreadId())];
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2240, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    HavokPhysics_CollisionQueryResult::Reset(v16, 1);
    v17 = 0;
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v7, instanceId);
    if ( NumRigidBodys > 0 )
    {
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v7 > 7 )
        {
          LODWORD(v23) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v23) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v7 - 2) <= 5 )
        {
          LODWORD(v23) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v23) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v7 <= 1 )
        {
          LODWORD(v23) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v23) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v7, instanceId, v17);
        __asm { vmovaps xmm3, xmm6; maxDistance }
        Physics_QueryPoint((Physics_WorldId)v7, RigidBodyID->m_serialAndIndex, _RDI, *(float *)&_XMM3, v14, v16);
        ++v17;
      }
      while ( v17 < NumRigidBodys );
      v15 = hit;
    }
    __asm { vmovaps xmm1, xmm6; radius }
    PhysicsQuery_ExtractHitData(_RDI, *(const float *)&_XMM1, v16, 0, v15);
  }
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
}

/*
==============
PhysicsQuery_ImmediateQueryPointWorst
==============
*/

void __fastcall PhysicsQuery_ImmediateQueryPointWorst(Physics_WorldId worldId, PhysicsObject *physObj, const vec3_t *point, double radius, Physics_QueryPointExtendedData *extendedData, PhysicsQuery_QueryPointHit *hit)
{
  __int64 v7; 

  v7 = worldId;
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2205, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2206, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2207, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  __asm
  {
    vmovaps xmm3, xmm6; radius
    vmovaps xmm6, [rsp+48h+var_18]
  }
  PhysicsQuery_ImmediateQueryPointWorst((Physics_WorldId)v7, physObj->physicsInstances[v7], point, *(const float *)&_XMM3, extendedData, hit);
}

/*
==============
PhysicsQuery_ImmediateQueryPointWorst
==============
*/
void PhysicsQuery_ImmediateQueryPointWorst(Physics_WorldId worldId, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData, PhysicsQuery_QueryPointHit *hit)
{
  __int64 v7; 
  CG_PhysicsObject *v11; 

  v7 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2187, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2188, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2189, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (ent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2190, ASSERT_TYPE_ASSERT, "(CENextValid( ent ))", (const char *)&queryFormat, "CENextValid( ent )") )
    __debugbreak();
  v11 = CG_PhysicsObject_Get(ent->nextState.number, localClientNum);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2193, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  __asm { vmovss  xmm3, [rsp+38h+radius]; radius }
  PhysicsQuery_ImmediateQueryPointWorst((Physics_WorldId)v7, v11, point, *(const float *)&_XMM3, extendedData, hit);
}

/*
==============
PhysicsQuery_ImmediateQueryPointWorst
==============
*/

void __fastcall PhysicsQuery_ImmediateQueryPointWorst(Physics_WorldId worldId, const gentity_s *ent, const vec3_t *point, double radius, Physics_QueryPointExtendedData *extendedData, PhysicsQuery_QueryPointHit *hit)
{
  __int64 v7; 
  G_PhysicsObject *v11; 

  v7 = worldId;
  __asm
  {
    vmovaps [rsp+48h+var_18], xmm6
    vmovaps xmm6, xmm3
  }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2170, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2171, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2172, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v11 = G_PhysicsObject_Get(ent);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2175, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  __asm
  {
    vmovaps xmm3, xmm6; radius
    vmovaps xmm6, [rsp+48h+var_18]
  }
  PhysicsQuery_ImmediateQueryPointWorst((Physics_WorldId)v7, v11, point, *(const float *)&_XMM3, extendedData, hit);
}

/*
==============
PhysicsQuery_ImmediateRaycastAll
==============
*/
void PhysicsQuery_ImmediateRaycastAll(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, PhysicsQuery_RaycastHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v7; 
  HavokPhysics_CollisionQueryResult *v17; 
  signed int NumHits; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 

  v7 = worldId;
  _RBP = end;
  _R14 = start;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1251, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1252, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v20 & 0x7F800000) == 2139095040 )
    goto LABEL_44;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+4]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v21 & 0x7F800000) == 2139095040 )
    goto LABEL_44;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v22 & 0x7F800000) == 2139095040 )
  {
LABEL_44:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1253, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v23 & 0x7F800000) == 2139095040 )
    goto LABEL_45;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v24 & 0x7F800000) == 2139095040 )
    goto LABEL_45;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v25 & 0x7F800000) == 2139095040 )
  {
LABEL_45:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1254, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
      __debugbreak();
  }
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1255, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !extendedData->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1256, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( !hits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1257, ASSERT_TYPE_ASSERT, "(hits)", (const char *)&queryFormat, "hits") )
    __debugbreak();
  if ( maxNumHits <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1258, ASSERT_TYPE_ASSERT, "(maxNumHits > 0)", (const char *)&queryFormat, "maxNumHits > 0") )
    __debugbreak();
  if ( !hitsFound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1259, ASSERT_TYPE_ASSERT, "(hitsFound)", (const char *)&queryFormat, "hitsFound") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1261, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v17 = s_PhysicsQuery_AllQueryResults[(int)(28 * v7 + Physics_GetThreadId())];
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1266, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v17, 1);
  Physics_Raycast((Physics_WorldId)v7, _R14, _RBP, extendedData, v17);
  NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(v17);
  if ( maxNumHits < NumHits )
    NumHits = maxNumHits;
  v19 = 0;
  for ( *hitsFound = NumHits; v19 < *hitsFound; ++v19 )
    PhysicsQuery_ExtractHitData(_R14, _RBP, v17, v19, &hits[v19]);
}

/*
==============
PhysicsQuery_ImmediateRaycastAll
==============
*/
void PhysicsQuery_ImmediateRaycastAll(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, PhysicsQuery_RaycastHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v8; 
  Physics_RaycastExtendedData *v18; 
  PhysicsQuery_RaycastHit *v19; 
  int *v20; 
  HavokPhysics_CollisionQueryResult *result; 
  signed int v22; 
  signed int v23; 
  Physics_RaycastExtendedData *v24; 
  unsigned int v25; 
  hknpBodyId *RigidBodyID; 
  int NumHits; 
  __int64 v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int NumRigidBodys; 
  unsigned int instanceIda; 

  instanceIda = instanceId;
  v8 = worldId;
  _RBP = end;
  _R14 = start;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1531, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1532, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v29 & 0x7F800000) == 2139095040 )
    goto LABEL_63;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+4]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v30 & 0x7F800000) == 2139095040 )
    goto LABEL_63;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v31 & 0x7F800000) == 2139095040 )
  {
LABEL_63:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1533, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v32 & 0x7F800000) == 2139095040 )
    goto LABEL_64;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v33 & 0x7F800000) == 2139095040 )
    goto LABEL_64;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v34 & 0x7F800000) == 2139095040 )
  {
LABEL_64:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1534, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
      __debugbreak();
  }
  v18 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1535, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v18->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1536, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  v19 = hits;
  if ( !hits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1537, ASSERT_TYPE_ASSERT, "(hits)", (const char *)&queryFormat, "hits") )
    __debugbreak();
  if ( maxNumHits <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1538, ASSERT_TYPE_ASSERT, "(maxNumHits > 0)", (const char *)&queryFormat, "maxNumHits > 0") )
    __debugbreak();
  v20 = hitsFound;
  if ( !hitsFound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1539, ASSERT_TYPE_ASSERT, "(hitsFound)", (const char *)&queryFormat, "hitsFound") )
    __debugbreak();
  if ( instanceId != -1 )
  {
    if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1547, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
      __debugbreak();
    result = s_PhysicsQuery_AllQueryResults[(int)(28 * v8 + Physics_GetThreadId())];
    if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1552, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    HavokPhysics_CollisionQueryResult::Reset(result, 1);
    v22 = 0;
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v8, instanceId);
    v23 = 0;
    if ( NumRigidBodys > 0 )
    {
      v24 = extendedData;
      v25 = instanceIda;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v8 > 7 )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v28) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v8 - 2) <= 5 )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v28) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v8 <= 1 )
        {
          LODWORD(v28) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v28) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID((hknpBodyId *)&instanceIda, (const Physics_WorldId)v8, v25, v23);
        Physics_Raycast((Physics_WorldId)v8, RigidBodyID->m_serialAndIndex, _R14, _RBP, v24, result);
        ++v23;
      }
      while ( v23 < NumRigidBodys );
      v20 = hitsFound;
      v22 = 0;
      v19 = hits;
    }
    NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(result);
    if ( maxNumHits < NumHits )
      NumHits = maxNumHits;
    *v20 = NumHits;
    if ( NumHits > 0 )
    {
      do
      {
        PhysicsQuery_ExtractHitData(_R14, _RBP, result, v22, &v19[v22]);
        ++v22;
      }
      while ( v22 < *v20 );
    }
  }
}

/*
==============
PhysicsQuery_ImmediateRaycastAll
==============
*/
void PhysicsQuery_ImmediateRaycastAll(Physics_WorldId worldId, PhysicsObject *physObj, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, PhysicsQuery_RaycastHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v8; 

  v8 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1513, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1514, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1515, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  PhysicsQuery_ImmediateRaycastAll((Physics_WorldId)v8, physObj->physicsInstances[v8], start, end, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateRaycastAll
==============
*/
void PhysicsQuery_ImmediateRaycastAll(Physics_WorldId worldId, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, PhysicsQuery_RaycastHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v9; 
  CG_PhysicsObject *v13; 

  v9 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1495, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1496, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1497, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (ent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1498, ASSERT_TYPE_ASSERT, "(CENextValid( ent ))", (const char *)&queryFormat, "CENextValid( ent )") )
    __debugbreak();
  v13 = CG_PhysicsObject_Get(ent->nextState.number, localClientNum);
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1501, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  PhysicsQuery_ImmediateRaycastAll((Physics_WorldId)v9, v13, start, end, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateRaycastAll
==============
*/
void PhysicsQuery_ImmediateRaycastAll(Physics_WorldId worldId, const gentity_s *ent, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, PhysicsQuery_RaycastHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v8; 
  G_PhysicsObject *v12; 

  v8 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1478, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1479, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1480, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v12 = G_PhysicsObject_Get(ent);
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1483, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  PhysicsQuery_ImmediateRaycastAll((Physics_WorldId)v8, v12, start, end, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateRaycastClosest
==============
*/
void PhysicsQuery_ImmediateRaycastClosest(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, PhysicsQuery_RaycastHit *hit)
{
  __int64 v5; 
  HavokPhysics_CollisionQueryResult *v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 

  v5 = worldId;
  _RSI = end;
  _RBP = start;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1221, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1222, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v16 & 0x7F800000) == 2139095040 )
    goto LABEL_35;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v17 & 0x7F800000) == 2139095040 )
    goto LABEL_35;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v18 & 0x7F800000) == 2139095040 )
  {
LABEL_35:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1223, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v19 & 0x7F800000) == 2139095040 )
    goto LABEL_36;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v20 & 0x7F800000) == 2139095040 )
    goto LABEL_36;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+58h+arg_0], xmm0
  }
  if ( (v21 & 0x7F800000) == 2139095040 )
  {
LABEL_36:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1224, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
      __debugbreak();
  }
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1225, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !extendedData->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1226, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1227, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1229, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v15 = s_PhysicsQuery_ClosestQueryResults[(int)(28 * v5 + Physics_GetThreadId())];
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1234, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v15, 1);
  Physics_Raycast((Physics_WorldId)v5, _RBP, _RSI, extendedData, v15);
  PhysicsQuery_ExtractHitData(_RBP, _RSI, v15, 0, hit);
}

/*
==============
PhysicsQuery_ImmediateRaycastClosest
==============
*/
void PhysicsQuery_ImmediateRaycastClosest(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, PhysicsQuery_RaycastHit *hit)
{
  __int64 v6; 
  Physics_RaycastExtendedData *v16; 
  PhysicsQuery_RaycastHit *v17; 
  HavokPhysics_CollisionQueryResult *result; 
  int NumRigidBodys; 
  signed int v20; 
  int v21; 
  unsigned int v22; 
  hknpBodyId *RigidBodyID; 
  __int64 v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  unsigned int instanceIda; 

  instanceIda = instanceId;
  v6 = worldId;
  _RSI = end;
  _RBP = start;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1436, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1437, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v25 & 0x7F800000) == 2139095040 )
    goto LABEL_54;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v26 & 0x7F800000) == 2139095040 )
    goto LABEL_54;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v27 & 0x7F800000) == 2139095040 )
  {
LABEL_54:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1438, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v28 & 0x7F800000) == 2139095040 )
    goto LABEL_55;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v29 & 0x7F800000) == 2139095040 )
    goto LABEL_55;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+78h+arg_0], xmm0
  }
  if ( (v30 & 0x7F800000) == 2139095040 )
  {
LABEL_55:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1439, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
      __debugbreak();
  }
  v16 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1440, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v16->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1441, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  v17 = hit;
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1442, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( instanceId != -1 )
  {
    if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1450, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
      __debugbreak();
    result = s_PhysicsQuery_ClosestQueryResults[(int)(28 * v6 + Physics_GetThreadId())];
    if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1455, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    HavokPhysics_CollisionQueryResult::Reset(result, 1);
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v6, instanceId);
    v20 = 0;
    v21 = NumRigidBodys;
    if ( NumRigidBodys > 0 )
    {
      v22 = instanceIda;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v6 > 7 )
        {
          LODWORD(v24) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v24) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v6 - 2) <= 5 )
        {
          LODWORD(v24) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v24) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v6 <= 1 )
        {
          LODWORD(v24) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v24) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID((hknpBodyId *)&instanceIda, (const Physics_WorldId)v6, v22, v20);
        Physics_Raycast((Physics_WorldId)v6, RigidBodyID->m_serialAndIndex, _RBP, _RSI, v16, result);
        ++v20;
      }
      while ( v20 < v21 );
      v17 = hit;
    }
    PhysicsQuery_ExtractHitData(_RBP, _RSI, result, 0, v17);
  }
}

/*
==============
PhysicsQuery_ImmediateRaycastClosest
==============
*/
void PhysicsQuery_ImmediateRaycastClosest(Physics_WorldId worldId, PhysicsObject *physObj, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, PhysicsQuery_RaycastHit *hit)
{
  __int64 v6; 

  v6 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1419, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1420, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1421, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  PhysicsQuery_ImmediateRaycastClosest((Physics_WorldId)v6, physObj->physicsInstances[v6], start, end, extendedData, hit);
}

/*
==============
PhysicsQuery_ImmediateRaycastClosest
==============
*/
void PhysicsQuery_ImmediateRaycastClosest(Physics_WorldId worldId, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, PhysicsQuery_RaycastHit *hit)
{
  __int64 v7; 
  CG_PhysicsObject *v11; 

  v7 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1401, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1402, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1403, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (ent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1404, ASSERT_TYPE_ASSERT, "(CENextValid( ent ))", (const char *)&queryFormat, "CENextValid( ent )") )
    __debugbreak();
  v11 = CG_PhysicsObject_Get(ent->nextState.number, localClientNum);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1407, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  PhysicsQuery_ImmediateRaycastClosest((Physics_WorldId)v7, v11, start, end, extendedData, hit);
}

/*
==============
PhysicsQuery_ImmediateRaycastClosest
==============
*/
void PhysicsQuery_ImmediateRaycastClosest(Physics_WorldId worldId, const gentity_s *ent, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, PhysicsQuery_RaycastHit *hit)
{
  __int64 v6; 
  G_PhysicsObject *v10; 

  v6 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1384, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1385, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1386, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v10 = G_PhysicsObject_Get(ent);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1389, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  PhysicsQuery_ImmediateRaycastClosest((Physics_WorldId)v6, v10, start, end, extendedData, hit);
}

/*
==============
PhysicsQuery_ImmediateRaycastSightCheck
==============
*/
bool PhysicsQuery_ImmediateRaycastSightCheck(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData)
{
  __int64 v4; 
  HavokPhysics_CollisionQueryResult *v14; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 

  v4 = worldId;
  _RDI = end;
  _RSI = start;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1190, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1191, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v16 & 0x7F800000) == 2139095040 )
    goto LABEL_32;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v17 & 0x7F800000) == 2139095040 )
    goto LABEL_32;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v18 & 0x7F800000) == 2139095040 )
  {
LABEL_32:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1192, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v19 & 0x7F800000) == 2139095040 )
    goto LABEL_33;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v20 & 0x7F800000) == 2139095040 )
    goto LABEL_33;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+48h+arg_0], xmm0
  }
  if ( (v21 & 0x7F800000) == 2139095040 )
  {
LABEL_33:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1193, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
      __debugbreak();
  }
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1194, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !extendedData->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1195, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1197, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v14 = s_PhysicsQuery_AnyQueryResults[(int)(28 * v4 + Physics_GetThreadId())];
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1202, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v14, 1);
  Physics_Raycast((Physics_WorldId)v4, _RSI, _RDI, extendedData, v14);
  return !HavokPhysics_CollisionQueryResult::HasHit(v14);
}

/*
==============
PhysicsQuery_ImmediateRaycastSightCheck
==============
*/
bool PhysicsQuery_ImmediateRaycastSightCheck(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData)
{
  __int64 v5; 
  Physics_RaycastExtendedData *v15; 
  HavokPhysics_CollisionQueryResult *v17; 
  signed int v18; 
  int NumRigidBodys; 
  hknpBodyId *RigidBodyID; 
  __int64 v21; 
  hknpBodyId result; 

  v5 = worldId;
  _R14 = end;
  _R15 = start;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1340, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1341, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r15]
    vmovss  [rsp+68h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_51;
  __asm
  {
    vmovss  xmm0, dword ptr [r15+4]
    vmovss  [rsp+68h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_51;
  __asm
  {
    vmovss  xmm0, dword ptr [r15+8]
    vmovss  [rsp+68h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
  {
LABEL_51:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1342, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vmovss  [rsp+68h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_52;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+4]
    vmovss  [rsp+68h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_52;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  [rsp+68h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
  {
LABEL_52:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1343, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
      __debugbreak();
  }
  v15 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1344, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v15->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1345, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( instanceId == -1 )
    return 0;
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1353, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v17 = s_PhysicsQuery_AnyQueryResults[(int)(28 * v5 + Physics_GetThreadId())];
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1358, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v17, 1);
  v18 = 0;
  NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v5, instanceId);
  if ( NumRigidBodys > 0 )
  {
    do
    {
      if ( HavokPhysics_CollisionQueryResult::HasHit(v17) )
        break;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v5 > 7 )
      {
        LODWORD(v21) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v21) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v5 - 2) <= 5 )
      {
        LODWORD(v21) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v21) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v5 <= 1 )
      {
        LODWORD(v21) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v21) )
          __debugbreak();
      }
      RigidBodyID = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v5, instanceId, v18);
      Physics_Raycast((Physics_WorldId)v5, RigidBodyID->m_serialAndIndex, _R15, _R14, v15, v17);
      ++v18;
    }
    while ( v18 < NumRigidBodys );
  }
  return !HavokPhysics_CollisionQueryResult::HasHit(v17);
}

/*
==============
PhysicsQuery_ImmediateRaycastSightCheck
==============
*/
bool PhysicsQuery_ImmediateRaycastSightCheck(Physics_WorldId worldId, PhysicsObject *physObj, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData)
{
  __int64 v5; 

  v5 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1321, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1322, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1323, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  return PhysicsQuery_ImmediateRaycastSightCheck((Physics_WorldId)v5, physObj->physicsInstances[v5], start, end, extendedData);
}

/*
==============
PhysicsQuery_ImmediateRaycastSightCheck
==============
*/
bool PhysicsQuery_ImmediateRaycastSightCheck(Physics_WorldId worldId, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData)
{
  __int64 v6; 
  CG_PhysicsObject *v10; 

  v6 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1303, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1304, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1305, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (ent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1306, ASSERT_TYPE_ASSERT, "(CENextValid( ent ))", (const char *)&queryFormat, "CENextValid( ent )") )
    __debugbreak();
  v10 = CG_PhysicsObject_Get(ent->nextState.number, localClientNum);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1309, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  return PhysicsQuery_ImmediateRaycastSightCheck((Physics_WorldId)v6, v10, start, end, extendedData);
}

/*
==============
PhysicsQuery_ImmediateRaycastSightCheck
==============
*/
bool PhysicsQuery_ImmediateRaycastSightCheck(Physics_WorldId worldId, const gentity_s *ent, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData)
{
  __int64 v5; 
  G_PhysicsObject *v9; 

  v5 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1286, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1287, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1288, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v9 = G_PhysicsObject_Get(ent);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1291, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  return PhysicsQuery_ImmediateRaycastSightCheck((Physics_WorldId)v5, v9, start, end, extendedData);
}

/*
==============
PhysicsQuery_ImmediateShapecastAll
==============
*/
void PhysicsQuery_ImmediateShapecastAll(Physics_WorldId worldId, hknpShape *shape, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, PhysicsQuery_ShapecastHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v9; 
  HavokPhysics_CollisionQueryResult *result; 
  int v25; 
  int NumHits; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int rotationa; 
  int rotationb; 
  int rotationc; 
  int rotationd; 

  v9 = worldId;
  _RBP = end;
  _R14 = start;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1643, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1644, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1645, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vmovss  [rsp+78h+arg_10], xmm0
  }
  if ( (v29 & 0x7F800000) == 2139095040 )
    goto LABEL_53;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+4]
    vmovss  [rsp+78h+arg_10], xmm0
  }
  if ( (v30 & 0x7F800000) == 2139095040 )
    goto LABEL_53;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  [rsp+78h+arg_10], xmm0
  }
  if ( (v31 & 0x7F800000) == 2139095040 )
  {
LABEL_53:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1646, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  [rsp+78h+arg_10], xmm0
  }
  if ( (v32 & 0x7F800000) == 2139095040 )
    goto LABEL_54;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vmovss  [rsp+78h+arg_10], xmm0
  }
  if ( (v33 & 0x7F800000) == 2139095040 )
    goto LABEL_54;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  [rsp+78h+arg_10], xmm0
  }
  if ( (v34 & 0x7F800000) == 2139095040 )
  {
LABEL_54:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1647, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
      __debugbreak();
  }
  _R12 = rotation;
  __asm
  {
    vmovss  xmm0, dword ptr [r12]
    vmovss  dword ptr [rsp+78h+rotation], xmm0
  }
  if ( (rotationa & 0x7F800000) == 2139095040 )
    goto LABEL_55;
  __asm
  {
    vmovss  xmm0, dword ptr [r12+4]
    vmovss  dword ptr [rsp+78h+rotation], xmm0
  }
  if ( (rotationb & 0x7F800000) == 2139095040 )
    goto LABEL_55;
  __asm
  {
    vmovss  xmm0, dword ptr [r12+8]
    vmovss  dword ptr [rsp+78h+rotation], xmm0
  }
  if ( (rotationc & 0x7F800000) == 2139095040 )
    goto LABEL_55;
  __asm
  {
    vmovss  xmm0, dword ptr [r12+0Ch]
    vmovss  dword ptr [rsp+78h+rotation], xmm0
  }
  if ( (rotationd & 0x7F800000) == 2139095040 )
  {
LABEL_55:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1648, ASSERT_TYPE_SANITY, "( !IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] )") )
      __debugbreak();
  }
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1649, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !extendedData->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1650, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( !hits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1651, ASSERT_TYPE_ASSERT, "(hits)", (const char *)&queryFormat, "hits") )
    __debugbreak();
  if ( maxNumHits <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1652, ASSERT_TYPE_ASSERT, "(maxNumHits > 0)", (const char *)&queryFormat, "maxNumHits > 0") )
    __debugbreak();
  if ( !hitsFound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1653, ASSERT_TYPE_ASSERT, "(hitsFound)", (const char *)&queryFormat, "hitsFound") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1655, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  result = s_PhysicsQuery_AllQueryResults[(int)(28 * v9 + Physics_GetThreadId())];
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1660, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(result, 1);
  v25 = 0;
  Physics_Shapecast(worldId, shape, _R14, _RBP, _R12, extendedData, result, NULL);
  NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(result);
  if ( maxNumHits < NumHits )
    NumHits = maxNumHits;
  *hitsFound = NumHits;
  if ( NumHits > 0 )
  {
    do
    {
      PhysicsQuery_ExtractHitData(_R14, _RBP, result, v25, &hits[v25]);
      ++v25;
    }
    while ( v25 < *hitsFound );
  }
}

/*
==============
PhysicsQuery_ImmediateShapecastAll
==============
*/
void PhysicsQuery_ImmediateShapecastAll(Physics_WorldId worldId, hknpShape *shape, unsigned int instanceId, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, PhysicsQuery_ShapecastHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v10; 
  Physics_ShapecastExtendedData *v25; 
  PhysicsQuery_ShapecastHit *v26; 
  int *v27; 
  HavokPhysics_CollisionQueryResult *result; 
  signed int v29; 
  Physics_ShapecastExtendedData *v30; 
  unsigned int v31; 
  hknpBodyId *RigidBodyID; 
  int NumHits; 
  Physics_ShapecastExtendedData *v34; 
  unsigned int bodyIdxa; 
  unsigned int bodyIdxb; 
  unsigned int bodyIdxc; 
  unsigned int bodyIdxd; 
  unsigned int bodyIdxe; 
  unsigned int bodyIdxf; 
  unsigned int bodyIdxg; 
  unsigned int bodyIdxh; 
  unsigned int bodyIdxi; 
  unsigned int bodyIdxj; 
  signed int bodyIdx; 
  unsigned int instanceIda; 

  instanceIda = instanceId;
  v10 = worldId;
  _R14 = start;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1929, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1930, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vmovss  [rsp+88h+bodyIdx], xmm0
  }
  if ( (bodyIdxa & 0x7F800000) == 2139095040 )
    goto LABEL_72;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+4]
    vmovss  [rsp+88h+bodyIdx], xmm0
  }
  if ( (bodyIdxb & 0x7F800000) == 2139095040 )
    goto LABEL_72;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  [rsp+88h+bodyIdx], xmm0
  }
  if ( (bodyIdxc & 0x7F800000) == 2139095040 )
  {
LABEL_72:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1931, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
      __debugbreak();
  }
  _RBP = end;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  [rsp+88h+bodyIdx], xmm0
  }
  if ( (bodyIdxd & 0x7F800000) == 2139095040 )
    goto LABEL_73;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vmovss  [rsp+88h+bodyIdx], xmm0
  }
  if ( (bodyIdxe & 0x7F800000) == 2139095040 )
    goto LABEL_73;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  [rsp+88h+bodyIdx], xmm0
  }
  if ( (bodyIdxf & 0x7F800000) == 2139095040 )
  {
LABEL_73:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1932, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
      __debugbreak();
  }
  _R13 = rotation;
  __asm
  {
    vmovss  xmm0, dword ptr [r13+0]
    vmovss  [rsp+88h+bodyIdx], xmm0
  }
  if ( (bodyIdxg & 0x7F800000) == 2139095040 )
    goto LABEL_74;
  __asm
  {
    vmovss  xmm0, dword ptr [r13+4]
    vmovss  [rsp+88h+bodyIdx], xmm0
  }
  if ( (bodyIdxh & 0x7F800000) == 2139095040 )
    goto LABEL_74;
  __asm
  {
    vmovss  xmm0, dword ptr [r13+8]
    vmovss  [rsp+88h+bodyIdx], xmm0
  }
  if ( (bodyIdxi & 0x7F800000) == 2139095040 )
    goto LABEL_74;
  __asm
  {
    vmovss  xmm0, dword ptr [r13+0Ch]
    vmovss  [rsp+88h+bodyIdx], xmm0
  }
  if ( (bodyIdxj & 0x7F800000) == 2139095040 )
  {
LABEL_74:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1933, ASSERT_TYPE_SANITY, "( !IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] )") )
      __debugbreak();
  }
  v25 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1934, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v25->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1935, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  v26 = hits;
  if ( !hits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1936, ASSERT_TYPE_ASSERT, "(hits)", (const char *)&queryFormat, "hits") )
    __debugbreak();
  if ( maxNumHits <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1937, ASSERT_TYPE_ASSERT, "(maxNumHits > 0)", (const char *)&queryFormat, "maxNumHits > 0") )
    __debugbreak();
  v27 = hitsFound;
  if ( !hitsFound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1938, ASSERT_TYPE_ASSERT, "(hitsFound)", (const char *)&queryFormat, "hitsFound") )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1939, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  if ( instanceId != -1 )
  {
    if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1947, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
      __debugbreak();
    result = s_PhysicsQuery_AllQueryResults[(int)(28 * v10 + Physics_GetThreadId())];
    if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1952, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    HavokPhysics_CollisionQueryResult::Reset(result, 1);
    v29 = 0;
    LODWORD(end) = Physics_GetNumRigidBodys((const Physics_WorldId)v10, instanceIda);
    bodyIdx = 0;
    if ( (int)end > 0 )
    {
      v30 = extendedData;
      v31 = instanceIda;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v10 > 7 )
        {
          LODWORD(v34) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v34) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v10 - 2) <= 5 )
        {
          LODWORD(v34) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v34) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v10 <= 1 )
        {
          LODWORD(v34) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v34) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID((hknpBodyId *)&instanceIda, (const Physics_WorldId)v10, v31, bodyIdx);
        Physics_Shapecast((Physics_WorldId)v10, RigidBodyID->m_serialAndIndex, shape, _R14, _RBP, _R13, v30, result, NULL);
        ++bodyIdx;
      }
      while ( bodyIdx < (int)end );
      v27 = hitsFound;
      v26 = hits;
    }
    NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(result);
    if ( maxNumHits < NumHits )
      NumHits = maxNumHits;
    *v27 = NumHits;
    if ( NumHits > 0 )
    {
      do
      {
        PhysicsQuery_ExtractHitData(_R14, _RBP, result, v29, &v26[v29]);
        ++v29;
      }
      while ( v29 < *v27 );
    }
  }
}

/*
==============
PhysicsQuery_ImmediateShapecastAll
==============
*/
void PhysicsQuery_ImmediateShapecastAll(Physics_WorldId worldId, hknpShape *shape, PhysicsObject *physObj, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, PhysicsQuery_ShapecastHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v10; 

  v10 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1911, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1912, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1913, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  PhysicsQuery_ImmediateShapecastAll((Physics_WorldId)v10, shape, physObj->physicsInstances[v10], start, end, rotation, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateShapecastAll
==============
*/
void PhysicsQuery_ImmediateShapecastAll(Physics_WorldId worldId, hknpShape *shape, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, PhysicsQuery_ShapecastHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v11; 
  CG_PhysicsObject *v15; 

  v11 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1893, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1894, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1895, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (ent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1896, ASSERT_TYPE_ASSERT, "(CENextValid( ent ))", (const char *)&queryFormat, "CENextValid( ent )") )
    __debugbreak();
  v15 = CG_PhysicsObject_Get(ent->nextState.number, localClientNum);
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1899, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  PhysicsQuery_ImmediateShapecastAll((Physics_WorldId)v11, shape, v15, start, end, rotation, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateShapecastAll
==============
*/
void PhysicsQuery_ImmediateShapecastAll(Physics_WorldId worldId, hknpShape *shape, const gentity_s *ent, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, PhysicsQuery_ShapecastHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v10; 
  G_PhysicsObject *v14; 

  v10 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1876, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1877, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1878, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v14 = G_PhysicsObject_Get(ent);
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1881, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  PhysicsQuery_ImmediateShapecastAll((Physics_WorldId)v10, shape, v14, start, end, rotation, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateShapecastClosest
==============
*/
void PhysicsQuery_ImmediateShapecastClosest(Physics_WorldId worldId, hknpShape *shape, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, PhysicsQuery_ShapecastHit *hit)
{
  __int64 v7; 
  HavokPhysics_CollisionQueryResult *result; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 

  v7 = worldId;
  _R14 = end;
  _R15 = start;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1612, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1613, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1614, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r15]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v23 & 0x7F800000) == 2139095040 )
    goto LABEL_44;
  __asm
  {
    vmovss  xmm0, dword ptr [r15+4]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v24 & 0x7F800000) == 2139095040 )
    goto LABEL_44;
  __asm
  {
    vmovss  xmm0, dword ptr [r15+8]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v25 & 0x7F800000) == 2139095040 )
  {
LABEL_44:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1615, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v26 & 0x7F800000) == 2139095040 )
    goto LABEL_45;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+4]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v27 & 0x7F800000) == 2139095040 )
    goto LABEL_45;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v28 & 0x7F800000) == 2139095040 )
  {
LABEL_45:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1616, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
      __debugbreak();
  }
  _RBX = rotation;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v29 & 0x7F800000) == 2139095040 )
    goto LABEL_46;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v30 & 0x7F800000) == 2139095040 )
    goto LABEL_46;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v31 & 0x7F800000) == 2139095040 )
    goto LABEL_46;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v32 & 0x7F800000) == 2139095040 )
  {
LABEL_46:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1617, ASSERT_TYPE_SANITY, "( !IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] )") )
      __debugbreak();
  }
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1618, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !extendedData->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1619, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1620, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1622, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  result = s_PhysicsQuery_ClosestQueryResults[(int)(28 * v7 + Physics_GetThreadId())];
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1627, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(result, 1);
  Physics_Shapecast((Physics_WorldId)v7, shape, _R15, _R14, rotation, extendedData, result, NULL);
  PhysicsQuery_ExtractHitData(_R15, _R14, result, 0, hit);
}

/*
==============
PhysicsQuery_ImmediateShapecastClosest
==============
*/
void PhysicsQuery_ImmediateShapecastClosest(Physics_WorldId worldId, hknpShape *shape, unsigned int instanceId, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, PhysicsQuery_ShapecastHit *hit)
{
  __int64 v8; 
  Physics_ShapecastExtendedData *v24; 
  HavokPhysics_CollisionQueryResult *v25; 
  unsigned int NumRigidBodys; 
  signed int v27; 
  signed int i; 
  hknpBodyId *RigidBodyID; 
  Physics_ShapecastExtendedData *v30; 
  hknpBodyId result; 
  hknpShape *shapea; 
  unsigned int instanceIda; 

  instanceIda = instanceId;
  shapea = shape;
  v8 = worldId;
  _R14 = start;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1832, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1833, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vmovss  [rsp+88h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_61;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+4]
    vmovss  [rsp+88h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_61;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  [rsp+88h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
  {
LABEL_61:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1834, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
      __debugbreak();
  }
  _RBP = end;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  [rsp+88h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_62;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vmovss  [rsp+88h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_62;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  [rsp+88h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
  {
LABEL_62:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1835, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
      __debugbreak();
  }
  _RSI = rotation;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+88h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_63;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+88h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_63;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+88h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_63;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+0Ch]
    vmovss  [rsp+88h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
  {
LABEL_63:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1836, ASSERT_TYPE_SANITY, "( !IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] )") )
      __debugbreak();
  }
  v24 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1837, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v24->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1838, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1839, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1840, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  if ( instanceId != -1 )
  {
    if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1848, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
      __debugbreak();
    v25 = s_PhysicsQuery_ClosestQueryResults[(int)(28 * v8 + Physics_GetThreadId())];
    if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1853, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    HavokPhysics_CollisionQueryResult::Reset(v25, 1);
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v8, instanceId);
    v27 = 0;
    for ( i = NumRigidBodys; v27 < i; ++v27 )
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v8 > 7 )
      {
        LODWORD(v30) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v30) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v8 - 2) <= 5 )
      {
        LODWORD(v30) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v30) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v8 <= 1 )
      {
        LODWORD(v30) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v30) )
          __debugbreak();
      }
      RigidBodyID = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v8, instanceIda, v27);
      Physics_Shapecast((Physics_WorldId)v8, RigidBodyID->m_serialAndIndex, shapea, _R14, _RBP, _RSI, v24, v25, NULL);
    }
    PhysicsQuery_ExtractHitData(_R14, _RBP, v25, 0, hit);
  }
}

/*
==============
PhysicsQuery_ImmediateShapecastClosest
==============
*/
void PhysicsQuery_ImmediateShapecastClosest(Physics_WorldId worldId, hknpShape *shape, PhysicsObject *physObj, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, PhysicsQuery_ShapecastHit *hit)
{
  __int64 v8; 

  v8 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1815, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1816, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1817, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  PhysicsQuery_ImmediateShapecastClosest((Physics_WorldId)v8, shape, physObj->physicsInstances[v8], start, end, rotation, extendedData, hit);
}

/*
==============
PhysicsQuery_ImmediateShapecastClosest
==============
*/
void PhysicsQuery_ImmediateShapecastClosest(Physics_WorldId worldId, hknpShape *shape, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, PhysicsQuery_ShapecastHit *hit)
{
  __int64 v9; 
  CG_PhysicsObject *v13; 

  v9 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1797, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1798, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1799, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (ent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1800, ASSERT_TYPE_ASSERT, "(CENextValid( ent ))", (const char *)&queryFormat, "CENextValid( ent )") )
    __debugbreak();
  v13 = CG_PhysicsObject_Get(ent->nextState.number, localClientNum);
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1803, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  PhysicsQuery_ImmediateShapecastClosest((Physics_WorldId)v9, shape, v13, start, end, rotation, extendedData, hit);
}

/*
==============
PhysicsQuery_ImmediateShapecastClosest
==============
*/
void PhysicsQuery_ImmediateShapecastClosest(Physics_WorldId worldId, hknpShape *shape, const gentity_s *ent, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, PhysicsQuery_ShapecastHit *hit)
{
  __int64 v8; 
  G_PhysicsObject *v12; 

  v8 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1780, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1781, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1782, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v12 = G_PhysicsObject_Get(ent);
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1785, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  PhysicsQuery_ImmediateShapecastClosest((Physics_WorldId)v8, shape, v12, start, end, rotation, extendedData, hit);
}

/*
==============
PhysicsQuery_ImmediateShapecastSightCheck
==============
*/
bool PhysicsQuery_ImmediateShapecastSightCheck(Physics_WorldId worldId, hknpShape *shape, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData)
{
  __int64 v6; 
  HavokPhysics_CollisionQueryResult *v21; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 

  v6 = worldId;
  _RBP = end;
  _R14 = start;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1580, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1581, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1582, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v23 & 0x7F800000) == 2139095040 )
    goto LABEL_41;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+4]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v24 & 0x7F800000) == 2139095040 )
    goto LABEL_41;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v25 & 0x7F800000) == 2139095040 )
  {
LABEL_41:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1583, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+0]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v26 & 0x7F800000) == 2139095040 )
    goto LABEL_42;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+4]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v27 & 0x7F800000) == 2139095040 )
    goto LABEL_42;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+8]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v28 & 0x7F800000) == 2139095040 )
  {
LABEL_42:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1584, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
      __debugbreak();
  }
  _RBX = rotation;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v29 & 0x7F800000) == 2139095040 )
    goto LABEL_43;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v30 & 0x7F800000) == 2139095040 )
    goto LABEL_43;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v31 & 0x7F800000) == 2139095040 )
    goto LABEL_43;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+0Ch]
    vmovss  [rsp+68h+arg_0], xmm0
  }
  if ( (v32 & 0x7F800000) == 2139095040 )
  {
LABEL_43:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1585, ASSERT_TYPE_SANITY, "( !IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] )") )
      __debugbreak();
  }
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1586, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !extendedData->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1587, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1589, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v21 = s_PhysicsQuery_AnyQueryResults[(int)(28 * v6 + Physics_GetThreadId())];
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1594, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v21, 1);
  Physics_Shapecast((Physics_WorldId)v6, shape, _R14, _RBP, rotation, extendedData, v21, NULL);
  return !HavokPhysics_CollisionQueryResult::HasHit(v21);
}

/*
==============
PhysicsQuery_ImmediateShapecastSightCheck
==============
*/
bool PhysicsQuery_ImmediateShapecastSightCheck(Physics_WorldId worldId, hknpShape *shape, unsigned int instanceId, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData)
{
  __int64 v7; 
  Physics_ShapecastExtendedData *v23; 
  HavokPhysics_CollisionQueryResult *v25; 
  unsigned int NumRigidBodys; 
  signed int v27; 
  signed int i; 
  hknpBodyId *RigidBodyID; 
  Physics_ShapecastExtendedData *v30; 
  hknpBodyId result; 
  hknpShape *shapea; 
  unsigned int instanceIda; 

  instanceIda = instanceId;
  shapea = shape;
  v7 = worldId;
  _R12 = start;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1734, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1735, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r12]
    vmovss  [rsp+88h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_60;
  __asm
  {
    vmovss  xmm0, dword ptr [r12+4]
    vmovss  [rsp+88h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_60;
  __asm
  {
    vmovss  xmm0, dword ptr [r12+8]
    vmovss  [rsp+88h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
  {
LABEL_60:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1736, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
      __debugbreak();
  }
  _R14 = end;
  __asm
  {
    vmovss  xmm0, dword ptr [r14]
    vmovss  [rsp+88h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_61;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+4]
    vmovss  [rsp+88h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_61;
  __asm
  {
    vmovss  xmm0, dword ptr [r14+8]
    vmovss  [rsp+88h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
  {
LABEL_61:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1737, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
      __debugbreak();
  }
  _RSI = rotation;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rsp+88h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_62;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rsp+88h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_62;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rsp+88h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
    goto LABEL_62;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+0Ch]
    vmovss  [rsp+88h+result.m_serialAndIndex], xmm0
  }
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 )
  {
LABEL_62:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1738, ASSERT_TYPE_SANITY, "( !IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] )") )
      __debugbreak();
  }
  v23 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1739, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v23->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1740, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1741, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  if ( instanceId == -1 )
    return 0;
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1749, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v25 = s_PhysicsQuery_AnyQueryResults[(int)(28 * v7 + Physics_GetThreadId())];
  if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1754, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v25, 1);
  NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v7, instanceId);
  v27 = 0;
  for ( i = NumRigidBodys; v27 < i; ++v27 )
  {
    if ( HavokPhysics_CollisionQueryResult::HasHit(v25) )
      break;
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( (unsigned int)v7 > 7 )
    {
      LODWORD(v30) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v30) )
        __debugbreak();
    }
    if ( !g_physicsClientWorldsCreated && (unsigned int)(v7 - 2) <= 5 )
    {
      LODWORD(v30) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v30) )
        __debugbreak();
    }
    if ( !g_physicsServerWorldsCreated && (unsigned int)v7 <= 1 )
    {
      LODWORD(v30) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v30) )
        __debugbreak();
    }
    RigidBodyID = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v7, instanceIda, v27);
    Physics_Shapecast((Physics_WorldId)v7, RigidBodyID->m_serialAndIndex, shapea, _R12, _R14, _RSI, v23, v25, NULL);
  }
  return !HavokPhysics_CollisionQueryResult::HasHit(v25);
}

/*
==============
PhysicsQuery_ImmediateShapecastSightCheck
==============
*/
bool PhysicsQuery_ImmediateShapecastSightCheck(Physics_WorldId worldId, hknpShape *shape, PhysicsObject *physObj, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData)
{
  __int64 v7; 

  v7 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1715, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1716, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1717, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  return PhysicsQuery_ImmediateShapecastSightCheck((Physics_WorldId)v7, shape, physObj->physicsInstances[v7], start, end, rotation, extendedData);
}

/*
==============
PhysicsQuery_ImmediateShapecastSightCheck
==============
*/
bool PhysicsQuery_ImmediateShapecastSightCheck(Physics_WorldId worldId, hknpShape *shape, const centity_t *ent, LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData)
{
  __int64 v8; 
  CG_PhysicsObject *v12; 

  v8 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1697, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1698, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1699, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (ent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1700, ASSERT_TYPE_ASSERT, "(CENextValid( ent ))", (const char *)&queryFormat, "CENextValid( ent )") )
    __debugbreak();
  v12 = CG_PhysicsObject_Get(ent->nextState.number, localClientNum);
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1703, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  return PhysicsQuery_ImmediateShapecastSightCheck((Physics_WorldId)v8, shape, v12, start, end, rotation, extendedData);
}

/*
==============
PhysicsQuery_ImmediateShapecastSightCheck
==============
*/
bool PhysicsQuery_ImmediateShapecastSightCheck(Physics_WorldId worldId, hknpShape *shape, const gentity_s *ent, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData)
{
  __int64 v7; 
  G_PhysicsObject *v11; 

  v7 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1680, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1681, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1682, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v11 = G_PhysicsObject_Get(ent);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1685, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  return PhysicsQuery_ImmediateShapecastSightCheck((Physics_WorldId)v7, shape, v11, start, end, rotation, extendedData);
}

/*
==============
PhysicsQuery_Init
==============
*/
void PhysicsQuery_Init(void)
{
  ;
}

/*
==============
PhysicsQuery_InitForWorld
==============
*/
void PhysicsQuery_InitForWorld(Physics_WorldId worldId)
{
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  HavokPhysics_CollisionQueryResult *v6; 
  HavokPhysics_CollisionQueryResult *v7; 
  HavokPhysics_CollisionQueryResult *v8; 
  HavokPhysics_BroadphaseCollisionQueryResult *BroadphaseCollisionQueryResult; 
  hkMemoryRouter *Value; 
  HavokPhysics_IgnoreBodies *v11; 

  v1 = worldId;
  v2 = worldId;
  if ( s_PhysicsQuery_WorldInitialized[worldId] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 128, ASSERT_TYPE_ASSERT, "(!s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "!s_PhysicsQuery_WorldInitialized[worldId]", -2i64) )
    __debugbreak();
  s_PhysicsQuery_WorldInitialized[v1] = 1;
  v3 = 28 * v2;
  v4 = 28i64;
  do
  {
    if ( s_PhysicsQuery_AnyQueryResults[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 136, ASSERT_TYPE_ASSERT, "(!s_PhysicsQuery_AnyQueryResults[entryId])", (const char *)&queryFormat, "!s_PhysicsQuery_AnyQueryResults[entryId]") )
      __debugbreak();
    s_PhysicsQuery_AnyQueryResults[v3] = Physics_AllocateCollisionQueryResult((Physics_WorldId)v1, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY);
    if ( s_PhysicsQuery_ClosestQueryResults[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 138, ASSERT_TYPE_ASSERT, "(!s_PhysicsQuery_ClosestQueryResults[entryId])", (const char *)&queryFormat, "!s_PhysicsQuery_ClosestQueryResults[entryId]") )
      __debugbreak();
    s_PhysicsQuery_ClosestQueryResults[v3] = Physics_AllocateCollisionQueryResult((Physics_WorldId)v1, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST);
    if ( s_PhysicsQuery_AllQueryResults[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 140, ASSERT_TYPE_ASSERT, "(!s_PhysicsQuery_AllQueryResults[entryId])", (const char *)&queryFormat, "!s_PhysicsQuery_AllQueryResults[entryId]") )
      __debugbreak();
    s_PhysicsQuery_AllQueryResults[v3] = Physics_AllocateCollisionQueryResult((Physics_WorldId)v1, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL);
    if ( s_PhysicsQuery_LegacyQueryAnyResults[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 143, ASSERT_TYPE_ASSERT, "(!s_PhysicsQuery_LegacyQueryAnyResults[entryId])", (const char *)&queryFormat, "!s_PhysicsQuery_LegacyQueryAnyResults[entryId]") )
      __debugbreak();
    CollisionQueryResult = Physics_AllocateCollisionQueryResult((Physics_WorldId)v1, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY);
    s_PhysicsQuery_LegacyQueryAnyResults[v3] = CollisionQueryResult;
    if ( !CollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 145, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_LegacyQueryAnyResults[entryId])", (const char *)&queryFormat, "s_PhysicsQuery_LegacyQueryAnyResults[entryId]") )
      __debugbreak();
    if ( s_PhysicsQuery_LegacyQueryResults[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 146, ASSERT_TYPE_ASSERT, "(!s_PhysicsQuery_LegacyQueryResults[entryId])", (const char *)&queryFormat, "!s_PhysicsQuery_LegacyQueryResults[entryId]") )
      __debugbreak();
    v6 = Physics_AllocateCollisionQueryResult((Physics_WorldId)v1, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST);
    s_PhysicsQuery_LegacyQueryResults[v3] = v6;
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 148, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_LegacyQueryResults[entryId])", (const char *)&queryFormat, "s_PhysicsQuery_LegacyQueryResults[entryId]") )
      __debugbreak();
    if ( s_PhysicsQuery_LegacyQueryAllResults[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 149, ASSERT_TYPE_ASSERT, "(!s_PhysicsQuery_LegacyQueryAllResults[entryId])", (const char *)&queryFormat, "!s_PhysicsQuery_LegacyQueryAllResults[entryId]") )
      __debugbreak();
    v7 = Physics_AllocateCollisionQueryResult((Physics_WorldId)v1, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL);
    s_PhysicsQuery_LegacyQueryAllResults[v3] = v7;
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 151, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_LegacyQueryAllResults[entryId])", (const char *)&queryFormat, "s_PhysicsQuery_LegacyQueryAllResults[entryId]") )
      __debugbreak();
    if ( s_PhysicsQuery_LegacyTraceResults[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 152, ASSERT_TYPE_ASSERT, "(!s_PhysicsQuery_LegacyTraceResults[entryId])", (const char *)&queryFormat, "!s_PhysicsQuery_LegacyTraceResults[entryId]") )
      __debugbreak();
    v8 = Physics_AllocateCollisionQueryResult((Physics_WorldId)v1, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST);
    s_PhysicsQuery_LegacyTraceResults[v3] = v8;
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 154, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_LegacyTraceResults[entryId])", (const char *)&queryFormat, "s_PhysicsQuery_LegacyTraceResults[entryId]") )
      __debugbreak();
    if ( s_PhysicsQuery_BroadphaseTraceResults[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 156, ASSERT_TYPE_ASSERT, "(!s_PhysicsQuery_BroadphaseTraceResults[entryId])", (const char *)&queryFormat, "!s_PhysicsQuery_BroadphaseTraceResults[entryId]") )
      __debugbreak();
    BroadphaseCollisionQueryResult = Physics_AllocateBroadphaseCollisionQueryResult((Physics_WorldId)v1);
    s_PhysicsQuery_BroadphaseTraceResults[v3] = BroadphaseCollisionQueryResult;
    if ( !BroadphaseCollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 158, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_BroadphaseTraceResults[entryId])", (const char *)&queryFormat, "s_PhysicsQuery_BroadphaseTraceResults[entryId]") )
      __debugbreak();
    if ( s_PhysicsQuery_LegacyIgnoreBodies[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 161, ASSERT_TYPE_ASSERT, "(!s_PhysicsQuery_LegacyIgnoreBodies[entryId])", (const char *)&queryFormat, "!s_PhysicsQuery_LegacyIgnoreBodies[entryId]") )
      __debugbreak();
    Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
    if ( !Value )
      Value = hkMemoryRouter::s_fallbackRouter;
    v11 = (HavokPhysics_IgnoreBodies *)Value->m_heap->blockAlloc(Value->m_heap, 56i64);
    if ( v11 )
      HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(v11, 1, 0);
    s_PhysicsQuery_LegacyIgnoreBodies[v3] = v11;
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 163, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_LegacyIgnoreBodies[entryId])", (const char *)&queryFormat, "s_PhysicsQuery_LegacyIgnoreBodies[entryId]") )
      __debugbreak();
    ++v3;
    --v4;
  }
  while ( v4 );
}

/*
==============
PhysicsQuery_IsWorldInitialized
==============
*/
_BOOL8 PhysicsQuery_IsWorldInitialized(Physics_WorldId worldId)
{
  return s_PhysicsQuery_WorldInitialized[worldId];
}

/*
==============
PhysicsQuery_LegacyBrushModelSightTraceAroundCorners
==============
*/
float PhysicsQuery_LegacyBrushModelSightTraceAroundCorners(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, int contentMask)
{
  __int64 v12; 
  hkMonitorStream *Value; 
  hkMonitorStream *v14; 
  unsigned int ThreadId; 
  bool v17; 
  int v18; 
  HavokPhysics_CollisionQueryResult *v23; 
  Physics_RaycastExtendedData extendedData; 
  __int64 v55; 
  hkMonitorStream *v56; 
  vec3_t pos; 
  vec3_t wallPos; 
  vec3_t normal; 
  char v60; 
  void *retaddr; 

  _RAX = &retaddr;
  v55 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
  }
  _RSI = end;
  _RBP = start;
  v12 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v14 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_BrushModelSightTraceAroundCorners");
  v56 = v14;
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5028, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  if ( (unsigned int)v12 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5030, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5031, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  extendedData.ignoreBodies = NULL;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+128h+extendedData.collisionBuffer], xmm0
  }
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5037, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  ThreadId = Physics_GetThreadId();
  v17 = 28 * (_DWORD)v12 + ThreadId == 0;
  v18 = 28 * v12 + ThreadId;
  __asm { vmovss  xmm7, cs:__real@3f800000 }
  extendedData.contents = contentMask;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vucomiss xmm0, dword ptr [rbp+0]
  }
  if ( !v17 )
    goto LABEL_18;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vucomiss xmm0, dword ptr [rbp+4]
  }
  if ( !v17 )
    goto LABEL_18;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vucomiss xmm0, dword ptr [rbp+8]
  }
  if ( !v17 )
  {
LABEL_18:
    v23 = s_PhysicsQuery_LegacyTraceResults[v18];
    if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5051, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    HavokPhysics_CollisionQueryResult::Reset(v23, 1);
    Physics_Raycast((Physics_WorldId)v12, _RBP, _RSI, &extendedData, v23);
    if ( HavokPhysics_CollisionQueryResult::HasHit(v23) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi]
        vsubss  xmm6, xmm0, dword ptr [rbp+0]
        vmovss  xmm1, dword ptr [rsi+4]
        vsubss  xmm5, xmm1, dword ptr [rbp+4]
        vmovss  xmm0, dword ptr [rsi+8]
        vsubss  xmm4, xmm0, dword ptr [rbp+8]
        vmulss  xmm2, xmm5, xmm5
        vmulss  xmm1, xmm6, xmm6
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm3, xmm0
        vsqrtss xmm1, xmm2, xmm2
        vcmpless xmm0, xmm1, cs:__real@80000000
        vblendvps xmm1, xmm1, xmm7, xmm0
        vdivss  xmm0, xmm7, xmm1
        vmulss  xmm6, xmm6, xmm0
        vmulss  xmm7, xmm5, xmm0
        vmulss  xmm8, xmm4, xmm0
      }
      HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(v23, 0, &pos);
      HavokPhysics_CollisionQueryResult::GetRaycastHitNormal(v23, 0, &normal);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+128h+pos]
        vsubss  xmm1, xmm0, xmm6
        vmovss  dword ptr [rsp+128h+wallPos], xmm1
        vmovss  xmm2, dword ptr [rsp+128h+pos+4]
        vsubss  xmm0, xmm2, xmm7
        vmovss  dword ptr [rsp+128h+wallPos+4], xmm0
        vmovss  xmm1, dword ptr [rsp+128h+pos+8]
        vsubss  xmm2, xmm1, xmm8
        vmovss  dword ptr [rsp+128h+wallPos+8], xmm2
      }
      *(float *)&_XMM0 = PhysicsQuery_LegacyTraceRoundCorners((Physics_WorldId)v12, &wallPos, &normal, _RSI, contentMask);
      __asm { vmovaps xmm7, xmm0 }
    }
  }
  if ( v14 )
    hkMonitorStream::timerEnd(v14, "Et");
  __asm { vmovaps xmm0, xmm7 }
  _R11 = &v60;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
  }
  return *(float *)&_XMM0;
}

/*
==============
PhysicsQuery_LegacyBulletTrace
==============
*/
void PhysicsQuery_LegacyBulletTrace(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, const int *skipEntities, int skipEntityCount, int skipChildren, int contentMask, int locational, unsigned __int8 *priorityMap, Physics_QueryPhaseSelection phaseSelection)
{
  PhysicsQuery_LegacyTraceSkipEntities_Internal(worldId, results, start, end, bounds, skipEntities, skipEntityCount, skipChildren, contentMask, locational, priorityMap, phaseSelection, 0, 1);
}

/*
==============
PhysicsQuery_LegacyCapsuleBrushEntityTrace
==============
*/
void PhysicsQuery_LegacyCapsuleBrushEntityTrace(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int contentMask, unsigned int instanceId, int brushId, const vec3_t *brushOrigin, const vec3_t *brushAngles, const playerState_s *ps)
{
  __int64 v16; 
  hkMonitorStream *Value; 
  hkMonitorStream *v19; 
  int v20; 
  bool v21; 
  hknpShape *v26; 
  hknpShape *v27; 
  hknpShape *v28; 
  hknpBodyId *v31; 
  unsigned int ThreadId; 
  bool IsShapeCacheDisabled; 
  bool v34; 
  signed int v35; 
  hknpBodyId *RigidBodyID; 
  char v37; 
  unsigned int RaycastHitBodyId; 
  hknpShape **shape; 
  hknpShape **shapea; 
  bool v46; 
  int NumRigidBodys; 
  signed int bodyIdx; 
  hknpBodyId result[2]; 
  vec3_t *enda; 
  vec3_t *starta; 
  trace_t *trace; 
  hkMonitorStream *v53; 
  hknpShape *nonBrushShape; 
  hknpShape *v55; 
  Physics_ShapecastExtendedData extendedData; 
  __int64 v57; 
  hkMonitorStream *v58; 
  Physics_RaycastExtendedData quat; 
  char v60; 
  void *retaddr; 

  _RAX = &retaddr;
  v57 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
  }
  enda = (vec3_t *)end;
  starta = (vec3_t *)start;
  trace = results;
  v16 = worldId;
  _R14 = bounds;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v19 = Value;
  v53 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyCapsuleBrushEntityTrace");
  v58 = v19;
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3915, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v20 = 28 * v16 + Physics_GetThreadId();
  if ( (unsigned int)v16 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3918, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v16] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3919, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !results && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3920, ASSERT_TYPE_ASSERT, "(results)", (const char *)&queryFormat, "results") )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3921, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyQueryResults[v20], 1);
  HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyTraceResults[v20], 1);
  v21 = instanceId == -1;
  if ( instanceId == -1 )
  {
    NumRigidBodys = 0;
  }
  else
  {
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v16, instanceId);
    v21 = 1;
  }
  __asm
  {
    vmovss  xmm1, dword ptr [r14+0Ch]
    vmovss  xmm0, dword ptr [r14+14h]
    vxorps  xmm8, xmm8, xmm8
    vucomiss xmm0, xmm8
  }
  if ( v21 )
  {
    v35 = 0;
    if ( NumRigidBodys > 0 )
    {
      do
      {
        quat.ignoreBodies = NULL;
        quat.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
        __asm { vmovss  [rbp+80h+var_8C], xmm8 }
        quat.phaseSelection = All;
        quat.insideHitType = Physics_RaycastInsideHitType_InsideHits;
        *(_WORD *)&quat.collectInsideHits = 256;
        quat.contents = contentMask;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v16 > 7 )
        {
          LODWORD(shape) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", shape) )
            __debugbreak();
        }
        if ( instanceId == -1 )
        {
          LODWORD(shape) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", shape) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v16 - 2) <= 5 )
        {
          LODWORD(shape) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", shape) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v16 <= 1 )
        {
          LODWORD(shape) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", shape) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID(result, (const Physics_WorldId)v16, instanceId, v35);
        Physics_Raycast((Physics_WorldId)v16, RigidBodyID->m_serialAndIndex, starta, enda, &quat, s_PhysicsQuery_LegacyTraceResults[v20]);
        ++v35;
      }
      while ( v35 < NumRigidBodys );
      v19 = v53;
    }
    if ( HavokPhysics_CollisionQueryResult::HasHit(s_PhysicsQuery_LegacyTraceResults[v20]) )
    {
      *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(s_PhysicsQuery_LegacyTraceResults[v20], 0);
      __asm { vcomiss xmm0, xmm8 }
      if ( v37 | v21 )
      {
        *((_BYTE *)&quat.contents + 4) = 0;
        quat.ignoreBodies = NULL;
        quat.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
        __asm { vmovss  [rbp+80h+var_8C], xmm8 }
        quat.phaseSelection = All;
        quat.contents = contentMask;
        RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(s_PhysicsQuery_LegacyTraceResults[v20], 0);
        if ( (RaycastHitBodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4026, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( hitBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( hitBodyId )") )
          __debugbreak();
        __asm { vmovss  xmm3, cs:__real@be001a37; maxDistance }
        Physics_QueryPoint((Physics_WorldId)v16, RaycastHitBodyId, starta, *(float *)&_XMM3, (Physics_QueryPointExtendedData *)&quat, s_PhysicsQuery_LegacyQueryResults[v20]);
      }
    }
    Physics_ConvertRayQueryResultToLegacyTrace(s_PhysicsQuery_LegacyTraceResults[v20], s_PhysicsQuery_LegacyQueryResults[v20], NULL, trace);
  }
  else
  {
    __asm { vucomiss xmm1, xmm8 }
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2834, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( BGMovingPlatformPS::IsNewRockingMoverCollisionEnabled() )
    {
      AnglesToQuat(&ps->movingPlatforms.m_moverUpAngles, (vec4_t *)&quat);
    }
    else if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xEu) )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_STUNNED_END|0x80) )
        BGMovingPlatforms::GetBestPlatformUp(ps, brushAngles, NULL, (vec4_t *)&quat);
      else
        AnglesToQuat(brushAngles, (vec4_t *)&quat);
    }
    else
    {
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
        vmovups xmmword ptr [rbp+80h+quat], xmm0
      }
    }
    v46 = PhysicsQuery_LegacyTraceCreateShape((Physics_WorldId)v16, ps, bounds, 0, s_PhysicsQuery_LegacyTraceShapeBuffers[v20], 0, &v55, &nonBrushShape, (hknpShape **)result, NULL);
    bodyIdx = 0;
    v26 = *(hknpShape **)&result[0].m_serialAndIndex;
    v27 = nonBrushShape;
    v28 = v55;
    if ( NumRigidBodys > 0 )
    {
      __asm
      {
        vmovss  xmm6, cs:__real@3c83126f
        vmovss  xmm7, cs:__real@3e000000
      }
      do
      {
        __asm
        {
          vmovss  [rbp+80h+extendedData.startTolerance], xmm8
          vmovss  [rbp+80h+extendedData.accuracy], xmm6
        }
        extendedData.simplifyStart = 0;
        extendedData.ignoreBodies = NULL;
        extendedData.phaseSelection = All;
        extendedData.permitOutwardTrace = 0;
        extendedData.contents = contentMask;
        __asm { vmovss  [rbp+80h+extendedData.collisionBuffer], xmm7 }
        extendedData.nonBrushShape = v27;
        extendedData.secondPassShape = v26;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v16 > 7 )
        {
          LODWORD(shapea) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", shapea) )
            __debugbreak();
        }
        if ( instanceId == -1 )
        {
          LODWORD(shapea) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", shapea) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v16 - 2) <= 5 )
        {
          LODWORD(shapea) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", shapea) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v16 <= 1 )
        {
          LODWORD(shapea) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", shapea) )
            __debugbreak();
        }
        v31 = HavokPhysics_GetRigidBodyID(result, (const Physics_WorldId)v16, instanceId, bodyIdx);
        Physics_Shapecast((Physics_WorldId)v16, v31->m_serialAndIndex, v28, starta, enda, (const vec4_t *)&quat, &extendedData, s_PhysicsQuery_LegacyTraceResults[v20], s_PhysicsQuery_LegacyQueryResults[v20]);
        ++bodyIdx;
      }
      while ( bodyIdx < NumRigidBodys );
      v19 = v53;
    }
    Physics_ConvertShapeQueryResultToLegacyTrace(s_PhysicsQuery_LegacyTraceResults[v20], s_PhysicsQuery_LegacyQueryResults[v20], trace);
    PhysicsQuery_LegacyTraceProcessAllSolid((Physics_WorldId)v16, trace, (const vec4_t *)&quat, v20, contentMask, v27, All, v28, enda);
    ThreadId = Physics_GetThreadId();
    IsShapeCacheDisabled = Physics_IsShapeCacheDisabled(ThreadId);
    v34 = IsShapeCacheDisabled;
    if ( v26 )
      Physics_ReleaseShape((Physics_WorldId)v16, v26, IsShapeCacheDisabled);
    if ( v28 && v46 )
      Physics_ReleaseShape((Physics_WorldId)v16, v28, v34);
  }
  if ( v19 )
    hkMonitorStream::timerEnd(v19, "Et");
  _R11 = &v60;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
  }
}

/*
==============
PhysicsQuery_LegacyCapsuleTrace
==============
*/
void PhysicsQuery_LegacyCapsuleTrace(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int *skipEntities, int numSkipEntities, int contentMask, const playerState_s *ps, bool allowCheapPointQueries, BG_PMove_Cage *cage, PhysicsQuery_ContextSettings *traceContext)
{
  PhysicsQuery_LegacyCapsuleTrace_Internal(worldId, results, start, end, bounds, skipEntities, numSkipEntities, NULL, 0, contentMask, ps, allowCheapPointQueries, 0, NULL, cage, traceContext);
}

/*
==============
PhysicsQuery_LegacyCapsuleTraceAngles
==============
*/
void PhysicsQuery_LegacyCapsuleTraceAngles(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int *skipEntities, int numSkipEntities, int contentMask, const playerState_s *ps, bool allowCheapPointQueries, const vec3_t *overrideAngles)
{
  PhysicsQuery_LegacyCapsuleTrace_Internal(worldId, results, start, end, bounds, skipEntities, numSkipEntities, NULL, 0, contentMask, ps, allowCheapPointQueries, 0, overrideAngles, NULL, NULL);
}

/*
==============
PhysicsQuery_LegacyCapsuleTraceIgnoreBodies
==============
*/
void PhysicsQuery_LegacyCapsuleTraceIgnoreBodies(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int *skipEntities, int numSkipEntities, unsigned int *ignoreBodies, unsigned int numIgnoreBodies, int contentMask, const playerState_s *ps, bool allowCheapPointQueries, BG_PMove_Cage *cage, PhysicsQuery_ContextSettings *traceContext)
{
  PhysicsQuery_LegacyCapsuleTrace_Internal(worldId, results, start, end, bounds, skipEntities, numSkipEntities, ignoreBodies, numIgnoreBodies, contentMask, ps, allowCheapPointQueries, 0, NULL, cage, traceContext);
}

/*
==============
PhysicsQuery_LegacyCapsuleTrace_Internal
==============
*/
void PhysicsQuery_LegacyCapsuleTrace_Internal(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int *skipEntities, int numSkipEntities, unsigned int *ignoreBodies, unsigned int numIgnoreBodies, int contentMask, const playerState_s *ps, bool allowCheapPointQueries, bool vehicleTrace, const vec3_t *overrideAngles, BG_PMove_Cage *cage, PhysicsQuery_ContextSettings *traceContext)
{
  __int64 v21; 
  unsigned int *v22; 
  PhysicsQuery_ContextSettings *v23; 
  hkMonitorStream *Value; 
  hkMonitorStream *v25; 
  int v26; 
  bool v27; 
  __int64 v28; 
  unsigned int m_flags; 
  unsigned int v30; 
  int v31; 
  __int64 v32; 
  __int64 v33; 
  HavokPhysics_IgnoreBodies *v34; 
  int v35; 
  bool v36; 
  __int64 v37; 
  bool v42; 
  char v43; 
  bool v44; 
  vec3_t *v46; 
  HavokPhysics_CollisionQueryResult *v50; 
  hknpShape *v51; 
  HavokPhysics_CollisionQueryResult *v54; 
  HavokPhysics_CollisionQueryResult *v55; 
  unsigned int ThreadId; 
  bool IsShapeCacheDisabled; 
  bool v58; 
  HavokPhysics_CollisionQueryResult *v60; 
  char v62; 
  unsigned int RaycastHitBodyId; 
  float fmt; 
  float linked; 
  bool v68; 
  bool v69; 
  bool v70; 
  hknpShape *nonBrushShape; 
  hknpShape *shape; 
  vec3_t *enda; 
  trace_t *trace; 
  Physics_ShapecastExtendedData extendedData; 
  int legacyEntryId; 
  PhysicsQuery_ContextSettings *contextSettings; 
  vec3_t *angles; 
  hkMonitorStream *v79; 
  Bounds *v80; 
  playerState_s *v81; 
  BG_PMove_Cage *v82; 
  int *v83; 
  const vec3_t *v84; 
  __int64 v85; 
  hkMonitorStream *v86; 
  Physics_QueryPointExtendedData quat; 

  v85 = -2i64;
  __asm { vmovaps [rsp+180h+var_50], xmm6 }
  _R13 = end;
  enda = (vec3_t *)end;
  _R15 = start;
  v84 = start;
  trace = results;
  v21 = worldId;
  LODWORD(shape) = worldId;
  v80 = (Bounds *)bounds;
  v83 = skipEntities;
  v22 = ignoreBodies;
  *(_QWORD *)&quat.contents = ignoreBodies;
  v81 = (playerState_s *)ps;
  angles = (vec3_t *)overrideAngles;
  v82 = cage;
  v23 = traceContext;
  contextSettings = traceContext;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v25 = Value;
  v79 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyCapsuleTrace");
  v86 = v25;
  Sys_ProfBeginNamedEvent(0xFFFF6347, "PhysicsQuery_LegacyCapsuleTrace_Internal");
  if ( (unsigned int)v21 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3718, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v21] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3719, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !results && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3720, ASSERT_TYPE_ASSERT, "(results)", (const char *)&queryFormat, "results") )
    __debugbreak();
  if ( !v80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3721, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3723, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v26 = 28 * v21 + Physics_GetThreadId();
  legacyEntryId = v26;
  if ( traceContext )
  {
    v27 = vehicleTrace;
    if ( (traceContext->m_flags & 0x20) != 0 )
      v27 = 1;
    v70 = v27;
    v23 = contextSettings;
  }
  else
  {
    v70 = vehicleTrace;
  }
  v28 = v26;
  HavokPhysics_IgnoreBodies::Reset(s_PhysicsQuery_LegacyIgnoreBodies[v26]);
  HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyQueryResults[v28], 1);
  HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyQueryAnyResults[v28], 1);
  HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyTraceResults[v28], 1);
  if ( v23 )
  {
    m_flags = v23->m_flags;
    v30 = v23->m_flags >> 2;
    LOBYTE(v30) = (v23->m_flags & 4) == 0;
    LODWORD(nonBrushShape) = v30;
    v31 = m_flags & 8;
  }
  else
  {
    LOBYTE(nonBrushShape) = 1;
    v31 = 0;
  }
  v68 = v31 != 0;
  v32 = numSkipEntities;
  if ( numSkipEntities > 0 )
  {
    v33 = 0i64;
    do
    {
      v34 = s_PhysicsQuery_LegacyIgnoreBodies[v28];
      v35 = v83[v33];
      if ( !v34 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 727, ASSERT_TYPE_ASSERT, "(ignoreBodies)", (const char *)&queryFormat, "ignoreBodies") )
          __debugbreak();
        v32 = numSkipEntities;
      }
      if ( v35 >= 0 )
      {
        HavokPhysics_IgnoreBodies::AddIgnoreEntity(v34, v35, 1, (bool)nonBrushShape, 0, 1, v68);
        v32 = numSkipEntities;
      }
      ++v33;
    }
    while ( v33 < v32 );
    v25 = v79;
    LODWORD(v21) = (_DWORD)shape;
    _R15 = v84;
    v22 = *(unsigned int **)&quat.contents;
    _R13 = enda;
  }
  v36 = numIgnoreBodies == 0;
  if ( numIgnoreBodies )
  {
    v37 = numIgnoreBodies;
    do
    {
      HavokPhysics_IgnoreBodies::AddIgnoreBody(s_PhysicsQuery_LegacyIgnoreBodies[v28], *v22++);
      v36 = --v37 == 0;
    }
    while ( v37 );
    v25 = v79;
  }
  _R12 = v80;
  __asm
  {
    vmovss  xmm1, dword ptr [r12+0Ch]
    vmovss  xmm0, dword ptr [r12+14h]
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm0, xmm6
  }
  if ( v36 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r13+0]
      vucomiss xmm0, dword ptr [r15]
    }
    if ( !v36 )
      goto LABEL_76;
    __asm
    {
      vmovss  xmm0, dword ptr [r13+4]
      vucomiss xmm0, dword ptr [r15+4]
    }
    if ( !v36 )
      goto LABEL_76;
    __asm
    {
      vmovss  xmm0, dword ptr [r13+8]
      vucomiss xmm0, dword ptr [r15+8]
    }
    if ( v36 )
    {
      quat.simplify = 0;
      quat.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
      __asm { vmovss  [rbp+80h+var_64], xmm6 }
      quat.phaseSelection = All;
      quat.contents = contentMask;
      quat.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v28];
      if ( allowCheapPointQueries )
        v60 = s_PhysicsQuery_LegacyQueryAnyResults[v28];
      else
        v60 = s_PhysicsQuery_LegacyQueryResults[v28];
      __asm { vxorps  xmm2, xmm2, xmm2; maxDistance }
      Physics_QueryPoint((Physics_WorldId)v21, _R15, *(float *)&_XMM2, &quat, v60);
      Physics_ConvertClosestPointsToLegacyTrace(v60, trace);
    }
    else
    {
LABEL_76:
      LODWORD(extendedData.ignoreBodies) = 1;
      __asm { vmovss  dword ptr [rbp+80h+extendedData+14h], xmm6 }
      *(_QWORD *)&extendedData.collisionBuffer = 0x100000000i64;
      LOWORD(extendedData.nonBrushShape) = 256;
      extendedData.contents = contentMask;
      *(_QWORD *)&extendedData.accuracy = s_PhysicsQuery_LegacyIgnoreBodies[v28];
      Physics_Raycast((Physics_WorldId)v21, _R15, _R13, (Physics_RaycastExtendedData *)&extendedData, s_PhysicsQuery_LegacyTraceResults[v28]);
      if ( HavokPhysics_CollisionQueryResult::HasHit(s_PhysicsQuery_LegacyTraceResults[v28]) )
      {
        *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(s_PhysicsQuery_LegacyTraceResults[v28], 0);
        __asm { vcomiss xmm0, xmm6 }
        if ( v62 | v36 )
        {
          quat.simplify = 0;
          quat.ignoreBodies = NULL;
          quat.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
          __asm { vmovss  [rbp+80h+var_64], xmm6 }
          quat.phaseSelection = All;
          quat.contents = contentMask;
          RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(s_PhysicsQuery_LegacyTraceResults[v28], 0);
          if ( (RaycastHitBodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3871, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( hitBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( hitBodyId )") )
            __debugbreak();
          __asm { vmovss  xmm3, cs:__real@be001a37; maxDistance }
          Physics_QueryPoint((Physics_WorldId)v21, RaycastHitBodyId, _R15, *(float *)&_XMM3, &quat, s_PhysicsQuery_LegacyQueryResults[v28]);
        }
      }
      Physics_ConvertRayQueryResultToLegacyTrace(s_PhysicsQuery_LegacyTraceResults[v28], s_PhysicsQuery_LegacyQueryResults[v28], NULL, trace);
    }
  }
  else
  {
    __asm { vucomiss xmm1, xmm6 }
    if ( angles )
    {
      AnglesToQuat(angles, (vec4_t *)&quat);
      v42 = v70;
    }
    else
    {
      v42 = v70;
      PhysicsQuery_LegacyTraceBuildTraceQuat((Physics_WorldId)v21, v81, (vec4_t *)&quat, v70);
    }
    v44 = PhysicsQuery_LegacyTraceCreateShape((Physics_WorldId)v21, v81, v80, 0, s_PhysicsQuery_LegacyTraceShapeBuffers[v28], v42, &shape, &nonBrushShape, (hknpShape **)&angles, contextSettings);
    v69 = v44;
    __asm { vmovss  xmm0, dword ptr [r13+0] }
    v46 = angles;
    _RCX = enda;
    __asm { vucomiss xmm0, dword ptr [r15] }
    if ( !v43 )
      goto LABEL_54;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+4]
      vucomiss xmm0, dword ptr [r15+4]
    }
    if ( !v43 )
      goto LABEL_54;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+8]
      vucomiss xmm0, dword ptr [r15+8]
    }
    if ( v43 )
    {
      LOBYTE(extendedData.startTolerance) = 0;
      __asm { vmovss  [rbp+80h+extendedData.collisionBuffer], xmm6 }
      LODWORD(extendedData.nonBrushShape) = 0;
      extendedData.contents = contentMask;
      *(_QWORD *)&extendedData.accuracy = s_PhysicsQuery_LegacyIgnoreBodies[v28];
      *(_QWORD *)&extendedData.collisionBuffer = nonBrushShape;
      if ( allowCheapPointQueries )
        v50 = s_PhysicsQuery_LegacyQueryAnyResults[v28];
      else
        v50 = s_PhysicsQuery_LegacyQueryResults[v28];
      v51 = shape;
      if ( v82 )
      {
        __asm { vmovss  dword ptr [rsp+180h+linked], xmm6 }
        Physics_GetClosestPoints((Physics_WorldId)v21, v82->numBodies, v82->bodies, shape, _R15, (const vec4_t *)&quat, linked, (Physics_GetClosestPointsExtendedData *)&extendedData, v50);
      }
      else
      {
        __asm { vmovss  dword ptr [rsp+180h+fmt], xmm6 }
        Physics_GetClosestPoints((Physics_WorldId)v21, shape, _R15, (const vec4_t *)&quat, fmt, (Physics_GetClosestPointsExtendedData *)&extendedData, v50);
      }
      Physics_ConvertClosestPointsToLegacyTrace(v50, trace);
    }
    else
    {
LABEL_54:
      __asm
      {
        vmovss  dword ptr [rsp+180h+extendedData.simplify], xmm6
        vmovss  xmm0, cs:__real@3c83126f
        vmovss  dword ptr [rbp+80h+extendedData.ignoreBodies], xmm0
      }
      extendedData.simplifyStart = 0;
      extendedData.phaseSelection = All;
      extendedData.contents = contentMask;
      extendedData.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v28];
      __asm
      {
        vmovss  xmm0, cs:__real@3e000000
        vmovss  dword ptr [rbp+80h+extendedData.nonBrushShape], xmm0
      }
      extendedData.nonBrushShape = nonBrushShape;
      extendedData.secondPassShape = (hknpShape *)angles;
      if ( contextSettings )
        extendedData.permitOutwardTrace = (contextSettings->m_flags & 0x10) == 0;
      else
        extendedData.permitOutwardTrace = 1;
      if ( allowCheapPointQueries )
        v54 = s_PhysicsQuery_LegacyQueryAnyResults[v28];
      else
        v54 = s_PhysicsQuery_LegacyQueryResults[v28];
      v55 = s_PhysicsQuery_LegacyTraceResults[v28];
      v51 = shape;
      if ( v82 )
        Physics_Shapecast((Physics_WorldId)v21, v82->numBodies, v82->bodies, shape, _R15, enda, (const vec4_t *)&quat, &extendedData, v55, v54);
      else
        Physics_Shapecast((Physics_WorldId)v21, shape, _R15, enda, (const vec4_t *)&quat, &extendedData, v55, v54);
      Physics_ConvertShapeQueryResultToLegacyTrace(s_PhysicsQuery_LegacyTraceResults[v28], v54, trace);
      PhysicsQuery_LegacyTraceProcessAllSolid((Physics_WorldId)v21, trace, (const vec4_t *)&quat, legacyEntryId, contentMask, nonBrushShape, All, v51, enda);
      v44 = v69;
    }
    ThreadId = Physics_GetThreadId();
    IsShapeCacheDisabled = Physics_IsShapeCacheDisabled(ThreadId);
    v58 = IsShapeCacheDisabled;
    if ( v46 )
      Physics_ReleaseShape((Physics_WorldId)v21, (hknpShape *)v46, IsShapeCacheDisabled);
    if ( v51 && v44 )
      Physics_ReleaseShape((Physics_WorldId)v21, v51, v58);
  }
  Sys_ProfEndNamedEvent();
  if ( v25 )
    hkMonitorStream::timerEnd(v25, "Et");
  __asm { vmovaps xmm6, [rsp+180h+var_50] }
}

/*
==============
PhysicsQuery_LegacyEntityContactCapsule
==============
*/
__int64 PhysicsQuery_LegacyEntityContactCapsule(Physics_WorldId worldId, const Bounds *bounds, unsigned int physicsInstanceId, const gentity_s *ent)
{
  __int64 v9; 
  hkMonitorStream *Value; 
  hkMonitorStream *v11; 
  int v12; 
  unsigned int v13; 
  unsigned __int8 modelType; 
  __int64 v16; 
  HavokPhysics_CollisionQueryResult *v17; 
  hknpShape *ShapeCapsuleUpAxis; 
  int NumRigidBodys; 
  unsigned int v24; 
  unsigned int RigidBodyID; 
  bool v26; 
  __int64 result; 
  int optionalInplaceBufferSize; 
  Physics_GetClosestPointsExtendedData extendedData; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  _RBP = bounds;
  v9 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v11 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyEntityContactCapsule");
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4515, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v12 = Physics_GetThreadId() + 28 * v9;
  if ( (unsigned int)v9 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4518, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4519, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4520, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  v13 = 0;
  modelType = 5;
  if ( ent )
    modelType = ent->r.modelType;
  switch ( modelType )
  {
    case 1u:
      if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4538, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
        __debugbreak();
      v26 = BG_TriggerRadius_Contacts_Capsule(&ent->r.currentOrigin, &ent->r.box, _RBP);
      goto LABEL_44;
    case 2u:
      if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4545, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
        __debugbreak();
      v26 = BG_TriggerRadiusRotate_Contacts_Capsule(&ent->r.currentOrigin, &ent->r.currentAngles, &ent->r.box, _RBP);
      goto LABEL_44;
    case 3u:
      if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4552, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
        __debugbreak();
      v26 = BG_TriggerDisk_Contacts_Capsule(&ent->r.currentOrigin, &ent->r.box, _RBP);
LABEL_44:
      v13 = v26;
      goto LABEL_45;
  }
  if ( physicsInstanceId != -1 )
  {
    extendedData.contents = -1;
    extendedData.simplify = 0;
    extendedData.ignoreBodies = NULL;
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vmovss  [rsp+0A8h+extendedData.collisionBuffer], xmm6
    }
    extendedData.nonBrushShape = NULL;
    extendedData.phaseSelection = All;
    v16 = v12;
    v17 = s_PhysicsQuery_LegacyQueryAnyResults[v12];
    if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4569, ASSERT_TYPE_ASSERT, "(queryResult)", (const char *)&queryFormat, "queryResult") )
      __debugbreak();
    HavokPhysics_CollisionQueryResult::Reset(v17, 1);
    __asm
    {
      vmovss  xmm1, dword ptr [rbp+0Ch]
      vaddss  xmm3, xmm1, cs:__real@3e000000; radius
      vmovss  xmm0, dword ptr [rbp+14h]
      vsubss  xmm2, xmm0, xmm1; halfHeight
    }
    ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis((Physics_WorldId)v9, &_RBP->midPoint, *(float *)&_XMM2, *(float *)&_XMM3, s_PhysicsQuery_LegacyTraceShapeBuffers[v16], 432, Temporary);
    if ( !ShapeCapsuleUpAxis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4574, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
      __debugbreak();
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v9, physicsInstanceId);
    v24 = 0;
    if ( NumRigidBodys > 0 )
    {
      while ( 1 )
      {
        RigidBodyID = Physics_GetRigidBodyID((const Physics_WorldId)v9, physicsInstanceId, v24);
        __asm { vmovss  [rsp+0A8h+optionalInplaceBufferSize], xmm6 }
        Physics_GetClosestPoints((Physics_WorldId)v9, RigidBodyID, ShapeCapsuleUpAxis, &vec3_origin, &quat_identity, *(float *)&optionalInplaceBufferSize, &extendedData, v17);
        if ( HavokPhysics_CollisionQueryResult::HasHit(v17) )
          break;
        if ( (int)++v24 >= NumRigidBodys )
          goto LABEL_45;
      }
      v13 = 1;
    }
  }
LABEL_45:
  if ( v11 )
    hkMonitorStream::timerEnd(v11, "Et");
  result = v13;
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
  return result;
}

/*
==============
PhysicsQuery_LegacyEntityContactPoint
==============
*/
__int64 PhysicsQuery_LegacyEntityContactPoint(Physics_WorldId worldId, const vec3_t *pos, unsigned int physicsInstanceId, const gentity_s *ent)
{
  __int64 v7; 
  hkMonitorStream *Value; 
  hkMonitorStream *v9; 
  int modelType; 
  bool v11; 
  int v12; 
  int v13; 
  unsigned int LegacyEntityContactPointDefaultCase; 
  vec3_t vec; 
  vec3_t v56; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

  _RDI = ent;
  _RSI = pos;
  v7 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v9 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyEntityContactPoint");
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4425, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS", -2i64, v9) )
    __debugbreak();
  if ( (unsigned int)v7 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4427, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4428, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  modelType = _RDI->r.modelType;
  v11 = modelType == 0;
  v12 = modelType - 1;
  if ( !v12 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+138h]
      vaddss  xmm1, xmm0, dword ptr [rdi+108h]
      vsubss  xmm2, xmm1, dword ptr [rsi+8]
      vandps  xmm2, xmm2, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm2, dword ptr [rdi+114h]
    }
    if ( v11 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+10Ch]
        vmulss  xmm5, xmm0, xmm0
        vmovss  xmm1, dword ptr [rsi]
        vsubss  xmm4, xmm1, dword ptr [rdi+130h]
        vmovss  xmm0, dword ptr [rsi+4]
        vsubss  xmm2, xmm0, dword ptr [rdi+134h]
        vmulss  xmm3, xmm2, xmm2
        vmulss  xmm1, xmm4, xmm4
        vaddss  xmm0, xmm3, xmm1
      }
      LegacyEntityContactPointDefaultCase = 0;
      __asm { vcomiss xmm5, xmm0 }
      goto LABEL_22;
    }
LABEL_20:
    LegacyEntityContactPointDefaultCase = 0;
    goto LABEL_23;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    AnglesToAxis(&_RDI->r.currentAngles, &axis);
    MatrixInverse(&axis, &out);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vsubss  xmm1, xmm0, dword ptr [rdi+130h]
      vmovss  dword ptr [rsp+0F8h+vec], xmm1
      vmovss  xmm2, dword ptr [rsi+4]
      vsubss  xmm0, xmm2, dword ptr [rdi+134h]
      vmovss  dword ptr [rsp+0F8h+vec+4], xmm0
      vmovss  xmm1, dword ptr [rsi+8]
      vsubss  xmm2, xmm1, dword ptr [rdi+138h]
      vmovss  dword ptr [rsp+0F8h+vec+8], xmm2
    }
    AxisTransformVec3(&out, &vec, &v56);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+108h]
      vsubss  xmm1, xmm0, dword ptr [rsp+0F8h+var_A8+8]
      vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm1, dword ptr [rdi+114h]
    }
    if ( v11 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+10Ch]
        vmulss  xmm4, xmm0, xmm0
        vmovss  xmm1, dword ptr [rsp+0F8h+var_A8]
        vmulss  xmm3, xmm1, xmm1
        vmovss  xmm0, dword ptr [rsp+0F8h+var_A8+4]
        vmulss  xmm2, xmm0, xmm0
        vaddss  xmm1, xmm3, xmm2
      }
      LegacyEntityContactPointDefaultCase = 0;
      __asm { vcomiss xmm4, xmm1 }
LABEL_22:
      LOBYTE(LegacyEntityContactPointDefaultCase) = 0;
      goto LABEL_23;
    }
    goto LABEL_20;
  }
  if ( v13 == 1 )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rsi]
      vaddss  xmm0, xmm2, dword ptr [rdi+10Ch]
      vsubss  xmm1, xmm0, cs:__real@42800000
      vmulss  xmm4, xmm1, xmm1
      vsubss  xmm2, xmm2, dword ptr [rdi+130h]
      vmovss  xmm0, dword ptr [rsi+4]
      vsubss  xmm1, xmm0, dword ptr [rdi+134h]
      vmulss  xmm3, xmm1, xmm1
      vmulss  xmm2, xmm2, xmm2
      vaddss  xmm0, xmm3, xmm2
      vcomiss xmm0, xmm4
    }
    LegacyEntityContactPointDefaultCase = 1;
  }
  else
  {
    LegacyEntityContactPointDefaultCase = PhysicsQuery_LegacyEntityContactPointDefaultCase((Physics_WorldId)v7, _RSI, physicsInstanceId);
  }
LABEL_23:
  if ( v9 )
    hkMonitorStream::timerEnd(v9, "Et");
  return LegacyEntityContactPointDefaultCase;
}

/*
==============
PhysicsQuery_LegacyEntityContactPointDefaultCase
==============
*/
__int64 PhysicsQuery_LegacyEntityContactPointDefaultCase(Physics_WorldId worldId, const vec3_t *pos, unsigned int physicsInstanceId)
{
  unsigned int v8; 
  HavokPhysics_CollisionQueryResult *v10; 
  int NumRigidBodys; 
  hknpBodyId *RigidBodyID; 
  __int64 v14; 
  __int64 v16; 
  Physics_QueryPointExtendedData extendedData; 
  void *retaddr; 
  hknpBodyId result; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  if ( physicsInstanceId == -1 )
    goto LABEL_22;
  v8 = 0;
  extendedData.contents = -1;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  dword ptr [rax-44h], xmm6
  }
  extendedData.ignoreBodies = NULL;
  extendedData.phaseSelection = All;
  extendedData.simplify = 0;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  v10 = s_PhysicsQuery_LegacyQueryAnyResults[Physics_GetThreadId() + 28 * worldId];
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4396, ASSERT_TYPE_ASSERT, "(queryResult)", (const char *)&queryFormat, "queryResult") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v10, 1);
  NumRigidBodys = Physics_GetNumRigidBodys(worldId, physicsInstanceId);
  if ( NumRigidBodys <= 0 )
  {
LABEL_22:
    v14 = 0i64;
  }
  else
  {
    while ( 1 )
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(v16) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v16) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
      {
        LODWORD(v16) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v16) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
      {
        LODWORD(v16) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v16) )
          __debugbreak();
      }
      RigidBodyID = HavokPhysics_GetRigidBodyID(&result, worldId, physicsInstanceId, v8);
      __asm { vmovaps xmm3, xmm6; maxDistance }
      Physics_QueryPoint(worldId, RigidBodyID->m_serialAndIndex, pos, *(float *)&_XMM3, &extendedData, v10);
      if ( HavokPhysics_CollisionQueryResult::HasHit(v10) )
        break;
      if ( (int)++v8 >= NumRigidBodys )
        goto LABEL_22;
    }
    v14 = 1i64;
  }
  __asm { vmovaps xmm6, [rsp+98h+var_38] }
  return v14;
}

/*
==============
PhysicsQuery_LegacyEntityContactPointPhysicsOnly
==============
*/
__int64 PhysicsQuery_LegacyEntityContactPointPhysicsOnly(Physics_WorldId worldId, const vec3_t *pos, unsigned int physicsInstanceId)
{
  __int64 v5; 
  hkMonitorStream *Value; 
  hkMonitorStream *v7; 
  __int64 result; 
  unsigned int v9; 

  v5 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v7 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyEntityContactPointPhysicsOnly");
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4498, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS", -2i64) )
    __debugbreak();
  if ( (unsigned int)v5 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4500, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4501, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  result = PhysicsQuery_LegacyEntityContactPointDefaultCase((Physics_WorldId)v5, pos, physicsInstanceId);
  v9 = result;
  if ( v7 )
  {
    hkMonitorStream::timerEnd(v7, "Et");
    return v9;
  }
  return result;
}

/*
==============
PhysicsQuery_LegacyEntitySightTrace
==============
*/
__int64 PhysicsQuery_LegacyEntitySightTrace(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int contentMask, unsigned int physicsInstanceId)
{
  __int64 v11; 
  hkMonitorStream *Value; 
  hkMonitorStream *v13; 
  int v14; 
  __int64 v17; 
  HavokPhysics_CollisionQueryResult *v18; 
  unsigned int v19; 
  unsigned int v20; 
  int NumRigidBodys; 
  char v23; 
  hknpShape *ShapeCapsuleUpAxis; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned __int8 *WeaponPriorityMap; 
  unsigned int v32; 
  hknpBodyId *RigidBodyID; 
  __int64 result; 
  __int64 shapeStorage; 
  Physics_ShapecastExtendedData extendedData; 
  char v40; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _RSI = bounds;
  v11 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v13 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyEntitySightTrace");
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4733, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v14 = Physics_GetThreadId() + 28 * v11;
  if ( (unsigned int)v11 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4736, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4737, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4738, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, dword ptr [rsi+0Ch]
    vmovss  xmm7, dword ptr [rsi+14h]
  }
  v17 = v14;
  v18 = s_PhysicsQuery_LegacyQueryAnyResults[v14];
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4750, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v18, 1);
  v19 = 0;
  v20 = physicsInstanceId;
  if ( physicsInstanceId != -1 )
  {
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v11, physicsInstanceId);
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vucomiss xmm7, xmm1
    }
    if ( v23 )
    {
      *(_QWORD *)&extendedData.accuracy = 0i64;
      LODWORD(extendedData.ignoreBodies) = 1;
      __asm { vmovss  dword ptr [rsp+0E8h+extendedData.ignoreBodies+4], xmm1 }
      extendedData.collisionBuffer = 0.0;
      *((_DWORD *)&extendedData.collisionBuffer + 1) = 1;
      LOWORD(extendedData.nonBrushShape) = 256;
      extendedData.contents = contentMask;
      if ( Physics_IsDetailWorld((Physics_WorldId)v11) )
      {
        WeaponPriorityMap = BG_GetWeaponPriorityMap(&NULL_WEAPON, 0);
        Physics_AddDetailTrace(v18, WeaponPriorityMap);
        LODWORD(extendedData.ignoreBodies) = 0;
      }
      v32 = 0;
      if ( NumRigidBodys > 0 )
      {
        do
        {
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( (unsigned int)v11 > 7 )
          {
            LODWORD(shapeStorage) = v11;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", shapeStorage) )
              __debugbreak();
          }
          if ( !g_physicsClientWorldsCreated && (unsigned int)(v11 - 2) <= 5 )
          {
            LODWORD(shapeStorage) = v11;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", shapeStorage) )
              __debugbreak();
          }
          if ( !g_physicsServerWorldsCreated && (unsigned int)v11 <= 1 )
          {
            LODWORD(shapeStorage) = v11;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", shapeStorage) )
              __debugbreak();
          }
          RigidBodyID = HavokPhysics_GetRigidBodyID((hknpBodyId *)&physicsInstanceId, (const Physics_WorldId)v11, v20, v32);
          Physics_Raycast((Physics_WorldId)v11, RigidBodyID->m_serialAndIndex, start, end, (Physics_RaycastExtendedData *)&extendedData, v18);
          if ( HavokPhysics_CollisionQueryResult::HasHit(v18) )
            goto LABEL_47;
        }
        while ( (int)++v32 < NumRigidBodys );
      }
    }
    else
    {
      __asm
      {
        vucomiss xmm6, xmm1
        vmovss  [rsp+0E8h+extendedData.startTolerance], xmm1
        vmovss  xmm0, cs:__real@3c83126f
        vmovss  [rsp+0E8h+extendedData.accuracy], xmm0
      }
      extendedData.simplifyStart = 0;
      extendedData.ignoreBodies = NULL;
      __asm
      {
        vmovss  [rsp+0E8h+extendedData.collisionBuffer], xmm1
        vpxor   xmm0, xmm0, xmm0
        vmovdqu xmmword ptr [rsp+0E8h+extendedData.nonBrushShape], xmm0
      }
      extendedData.phaseSelection = All;
      extendedData.permitOutwardTrace = 0;
      extendedData.contents = contentMask;
      __asm
      {
        vsubss  xmm2, xmm7, xmm6; halfHeight
        vmovaps xmm3, xmm6; radius
      }
      ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis((Physics_WorldId)v11, &_RSI->midPoint, *(float *)&_XMM2, *(float *)&_XMM3, s_PhysicsQuery_LegacyTraceShapeBuffers[v17], 432, Temporary);
      if ( !ShapeCapsuleUpAxis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4770, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
        __debugbreak();
      v29 = 0;
      if ( NumRigidBodys > 0 )
      {
        while ( 1 )
        {
          v30 = Physics_GetRigidBodyID((const Physics_WorldId)v11, v20, v29);
          Physics_Shapecast((Physics_WorldId)v11, v30, ShapeCapsuleUpAxis, start, end, &quat_identity, &extendedData, v18, NULL);
          if ( HavokPhysics_CollisionQueryResult::HasHit(v18) )
            break;
          if ( (int)++v29 >= NumRigidBodys )
            goto LABEL_48;
        }
LABEL_47:
        v19 = 1;
      }
    }
  }
LABEL_48:
  if ( v13 )
    hkMonitorStream::timerEnd(v13, "Et");
  result = v19;
  _R11 = &v40;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  return result;
}

/*
==============
PhysicsQuery_LegacyGetEntityPointContents
==============
*/
__int64 PhysicsQuery_LegacyGetEntityPointContents(Physics_WorldId worldId, const vec3_t *pos, unsigned int physicsInstanceId, int contentMask)
{
  int v6; 
  __int64 v8; 
  hkMonitorStream *Value; 
  hkMonitorStream *v10; 
  unsigned int v11; 
  HavokPhysics_CollisionQueryResult *v13; 
  int NumRigidBodys; 
  signed int v15; 
  vec3_t *v16; 
  hknpBodyId *RigidBodyID; 
  __int64 v19; 
  __int64 v21; 
  hkMonitorStream *v22; 
  Physics_QueryPointExtendedData extendedData; 
  void *retaddr; 
  hknpBodyId result; 
  vec3_t *point; 
  int v28; 

  _RAX = &retaddr;
  v28 = contentMask;
  point = (vec3_t *)pos;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  v6 = contentMask;
  v8 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v10 = Value;
  v22 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyGetEntityPointContents");
  if ( (unsigned int)v8 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4337, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4338, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  extendedData.simplify = 0;
  v11 = 0;
  extendedData.ignoreBodies = NULL;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  [rsp+0C8h+extendedData.collisionBuffer], xmm6
  }
  extendedData.phaseSelection = All;
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4345, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  extendedData.contents = v6;
  v13 = s_PhysicsQuery_LegacyQueryAnyResults[(int)(28 * v8 + Physics_GetThreadId())];
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4353, ASSERT_TYPE_ASSERT, "(queryResult)", (const char *)&queryFormat, "queryResult") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v13, 1);
  NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v8, physicsInstanceId);
  v15 = 0;
  if ( NumRigidBodys > 0 )
  {
    v16 = point;
    do
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v8 > 7 )
      {
        LODWORD(v21) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v21) )
          __debugbreak();
      }
      if ( physicsInstanceId == -1 )
      {
        LODWORD(v21) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v21) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v8 - 2) <= 5 )
      {
        LODWORD(v21) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v21) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v8 <= 1 )
      {
        LODWORD(v21) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v21) )
          __debugbreak();
      }
      RigidBodyID = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v8, physicsInstanceId, v15);
      __asm { vmovaps xmm3, xmm6; maxDistance }
      Physics_QueryPoint((Physics_WorldId)v8, RigidBodyID->m_serialAndIndex, v16, *(float *)&_XMM3, &extendedData, v13);
      ++v15;
    }
    while ( v15 < NumRigidBodys );
    v10 = v22;
    v11 = 0;
    v6 = v28;
  }
  if ( HavokPhysics_CollisionQueryResult::HasHit(v13) )
    v11 = v6 & HavokPhysics_CollisionQueryResult::GetClosestPointHitHitContents(v13, 0);
  if ( v10 )
    hkMonitorStream::timerEnd(v10, "Et");
  v19 = v11;
  __asm { vmovaps xmm6, [rsp+0C8h+var_48] }
  return v19;
}

/*
==============
PhysicsQuery_LegacyGetPointContents
==============
*/
__int64 PhysicsQuery_LegacyGetPointContents(Physics_WorldId worldId, const vec3_t *pos, int skipEntity, int contentMask)
{
  __int64 v10; 
  hkMonitorStream *Value; 
  hkMonitorStream *v12; 
  int v13; 
  unsigned int v15; 
  HavokPhysics_IgnoreBodies *v16; 
  HavokPhysics_CollisionQueryResult *v17; 
  __int64 result; 
  Physics_QueryPointExtendedData extendedData; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  v10 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v12 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyGetPointContents");
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4290, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v13 = Physics_GetThreadId() + 28 * v10;
  if ( (unsigned int)v10 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4293, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4294, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  extendedData.simplify = 0;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  [rsp+0A8h+extendedData.collisionBuffer], xmm6
  }
  v15 = 0;
  extendedData.phaseSelection = All;
  HavokPhysics_IgnoreBodies::Reset(s_PhysicsQuery_LegacyIgnoreBodies[v13]);
  v16 = s_PhysicsQuery_LegacyIgnoreBodies[v13];
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 727, ASSERT_TYPE_ASSERT, "(ignoreBodies)", (const char *)&queryFormat, "ignoreBodies") )
    __debugbreak();
  if ( skipEntity >= 0 )
    HavokPhysics_IgnoreBodies::AddIgnoreEntity(v16, skipEntity, 1, 1, 0, 1, 0);
  extendedData.contents = contentMask;
  extendedData.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v13];
  v17 = s_PhysicsQuery_LegacyQueryAnyResults[v13];
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4310, ASSERT_TYPE_ASSERT, "(queryResult)", (const char *)&queryFormat, "queryResult") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v17, 1);
  __asm { vxorps  xmm2, xmm2, xmm2; maxDistance }
  Physics_QueryPoint((Physics_WorldId)v10, pos, *(float *)&_XMM2, &extendedData, v17);
  if ( HavokPhysics_CollisionQueryResult::HasHit(v17) )
    v15 = contentMask & HavokPhysics_CollisionQueryResult::GetClosestPointHitHitContents(v17, 0);
  if ( v12 )
    hkMonitorStream::timerEnd(v12, "Et");
  result = v15;
  __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
  return result;
}

/*
==============
PhysicsQuery_LegacyGrenadeTrace
==============
*/
void PhysicsQuery_LegacyGrenadeTrace(trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int grenadeEntity, const int *skipEntities, int skipEntityCount, team_t skipTeamCharacters, int contentMask, Physics_QueryPhaseSelection phaseSelection, bool detail, const Physics_WorldId mainWorldId, const Physics_WorldId detailWorldId)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v23; 
  __int64 v25; 
  HavokPhysics_IgnoreBodies *v26; 
  __int64 v27; 
  int v28; 
  __int64 v29; 
  HavokPhysics_IgnoreBodies *v30; 
  int v31; 
  hknpShape *v35; 
  bool v36; 
  bool v37; 
  unsigned __int8 *WeaponPriorityMap; 
  unsigned __int8 *v46; 
  int NumHits; 
  int v49; 
  HavokPhysics_CollisionQueryResult *v50; 
  int ClosestPointHitRef; 
  char v52; 
  const Physics_DetailHitData *DetailHitData; 
  hkMonitorStream *v56; 
  Physics_RaycastExtendedData v59; 
  Physics_QueryPointExtendedData v60; 
  Physics_ShapecastExtendedData extendedData; 
  __int64 v62; 
  hkMonitorStream *v63; 
  vec3_t center; 
  void *retaddr; 

  _RAX = &retaddr;
  v62 = -2i64;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  _RDI = end;
  _R12 = start;
  if ( !skipEntities && skipEntityCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5223, ASSERT_TYPE_ASSERT, "(skipEntities || skipEntityCount == 0)", (const char *)&queryFormat, "skipEntities || skipEntityCount == 0") )
    __debugbreak();
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vmovss  dword ptr [rbp+60h+center], xmm6
    vmovss  dword ptr [rbp+60h+center+4], xmm6
    vmovss  dword ptr [rbp+60h+center+8], xmm6
    vmovss  xmm0, cs:tinyRadius
    vmovss  [rbp+60h+var_54], xmm0
    vmovss  [rbp+60h+var_50], xmm0
    vmovss  [rbp+60h+var_4C], xmm0
  }
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v23 = Value;
  v56 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyGrenadeTrace");
  v63 = v23;
  Profile_Begin(789);
  if ( !results && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5235, ASSERT_TYPE_ASSERT, "(results)", (const char *)&queryFormat, "results") )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5236, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  if ( detail )
    mainWorldId = detailWorldId;
  if ( !s_PhysicsQuery_WorldInitialized[mainWorldId] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5239, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5241, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v25 = (int)(28 * mainWorldId + Physics_GetThreadId());
  HavokPhysics_IgnoreBodies::Reset(s_PhysicsQuery_LegacyIgnoreBodies[v25]);
  v26 = s_PhysicsQuery_LegacyIgnoreBodies[v25];
  if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 727, ASSERT_TYPE_ASSERT, "(ignoreBodies)", (const char *)&queryFormat, "ignoreBodies") )
    __debugbreak();
  if ( grenadeEntity >= 0 )
    HavokPhysics_IgnoreBodies::AddIgnoreEntity(v26, grenadeEntity, 1, 1, 0, 0, 0);
  v27 = skipEntityCount;
  v28 = 0;
  if ( skipEntityCount > 0i64 )
  {
    v29 = 0i64;
    do
    {
      v30 = s_PhysicsQuery_LegacyIgnoreBodies[v25];
      v31 = skipEntities[v29];
      if ( !v30 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 727, ASSERT_TYPE_ASSERT, "(ignoreBodies)", (const char *)&queryFormat, "ignoreBodies") )
          __debugbreak();
        v27 = skipEntityCount;
      }
      if ( v31 >= 0 )
      {
        HavokPhysics_IgnoreBodies::AddIgnoreEntity(v30, v31, 1, 0, 0, 0, 0);
        v27 = skipEntityCount;
      }
      ++v29;
    }
    while ( v29 < v27 );
    v23 = v56;
    v28 = 0;
    _R12 = start;
    _RDI = end;
  }
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(s_PhysicsQuery_LegacyIgnoreBodies[v25], -830);
  s_PhysicsQuery_LegacyIgnoreBodies[v25]->m_ignoreTeamCharacters = skipTeamCharacters;
  __asm
  {
    vmovss  xmm3, [rbp+60h+var_54]; radius
    vmovss  xmm0, [rbp+60h+var_4C]
    vsubss  xmm2, xmm0, xmm3; halfHeight
  }
  v35 = Physics_CreateShapeCapsuleUpAxis(mainWorldId, &center, *(float *)&_XMM2, *(float *)&_XMM3, s_PhysicsQuery_LegacyTraceShapeBuffers[v25], 432, Temporary);
  v36 = v35 == NULL;
  if ( !v35 )
  {
    v37 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5276, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape");
    v36 = !v37;
    if ( v37 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vucomiss xmm0, dword ptr [r12]
  }
  if ( !v36 )
    goto LABEL_44;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vucomiss xmm0, dword ptr [r12+4]
  }
  if ( !v36 )
    goto LABEL_44;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vucomiss xmm0, dword ptr [r12+8]
  }
  if ( v36 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5281, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Grenade trying to trace zero distance - currently unsupported") )
      __debugbreak();
  }
  else
  {
LABEL_44:
    __asm
    {
      vmovss  [rbp+60h+extendedData.startTolerance], xmm6
      vmovss  xmm0, cs:__real@3c83126f
      vmovss  [rbp+60h+extendedData.accuracy], xmm0
    }
    extendedData.simplifyStart = 0;
    __asm
    {
      vpxor   xmm1, xmm1, xmm1
      vmovdqu xmmword ptr [rbp+60h+extendedData.nonBrushShape], xmm1
      vmovss  [rbp+60h+var_F0.collisionBuffer], xmm6
    }
    v59.insideHitType = Physics_RaycastInsideHitType_InsideHits;
    *(_WORD *)&v59.collectInsideHits = 256;
    v60.simplify = 0;
    __asm { vmovss  [rbp+60h+var_C8.collisionBuffer], xmm6 }
    extendedData.contents = contentMask & 0xFDFFBFFF;
    extendedData.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v25];
    __asm
    {
      vmovss  xmm0, cs:__real@3e000000
      vmovss  [rbp+60h+extendedData.collisionBuffer], xmm0
    }
    extendedData.phaseSelection = phaseSelection;
    extendedData.permitOutwardTrace = 1;
    v59.contents = contentMask & 0x2004000;
    v59.ignoreBodies = extendedData.ignoreBodies;
    v59.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
    v59.phaseSelection = phaseSelection;
    v60.contents = contentMask & 0x2004000;
    v60.ignoreBodies = extendedData.ignoreBodies;
    v60.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
    v60.phaseSelection = phaseSelection;
    HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyTraceResults[v25], 1);
    if ( detail )
    {
      WeaponPriorityMap = BG_GetWeaponPriorityMap(&NULL_WEAPON, 0);
      Physics_AddDetailTrace(s_PhysicsQuery_LegacyTraceResults[v25], WeaponPriorityMap);
    }
    Physics_Shapecast(mainWorldId, v35, _R12, _RDI, &quat_identity, &extendedData, s_PhysicsQuery_LegacyTraceResults[v25], NULL);
    _RSI = results;
    Physics_ConvertShapeQueryResultToLegacyTrace(s_PhysicsQuery_LegacyTraceResults[v25], NULL, results);
    HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyTraceResults[v25], 1);
    v46 = BG_GetWeaponPriorityMap(&NULL_WEAPON, 0);
    Physics_AddDetailTrace(s_PhysicsQuery_LegacyTraceResults[v25], v46);
    Physics_Raycast(mainWorldId, _R12, _RDI, &v59, s_PhysicsQuery_LegacyTraceResults[v25]);
    HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyQueryAllResults[v25], 1);
    __asm { vmovaps xmm2, xmm6; maxDistance }
    Physics_QueryPoint(mainWorldId, _R12, *(float *)&_XMM2, &v60, s_PhysicsQuery_LegacyQueryAllResults[v25]);
    NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(s_PhysicsQuery_LegacyQueryAllResults[v25]);
    if ( NumHits > 0 )
    {
      v49 = NumHits;
      do
      {
        if ( !HavokPhysics_CollisionQueryResult::HasHit(s_PhysicsQuery_LegacyTraceResults[v25]) || (v50 = s_PhysicsQuery_LegacyTraceResults[v25], ClosestPointHitRef = HavokPhysics_CollisionQueryResult::GetClosestPointHitRef(s_PhysicsQuery_LegacyQueryAllResults[v25], v28), v36 = HavokPhysics_CollisionQueryResult::GetRaycastHitRef(v50, 0) == ClosestPointHitRef, _RDI = end, !v36) )
          HavokPhysics_CollisionQueryResult::AddQueryPointHitAsRaycastHit(s_PhysicsQuery_LegacyTraceResults[v25], mainWorldId, s_PhysicsQuery_LegacyQueryAllResults[v25], v28, _R12, _RDI, &v59);
        ++v28;
      }
      while ( v28 < v49 );
      v23 = v56;
      _RSI = results;
    }
    if ( HavokPhysics_CollisionQueryResult::HasHit(s_PhysicsQuery_LegacyTraceResults[v25]) )
    {
      *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(s_PhysicsQuery_LegacyTraceResults[v25], 0);
      __asm { vcomiss xmm0, dword ptr [rsi] }
      if ( v52 )
      {
        DetailHitData = Physics_GetDetailHitData(s_PhysicsQuery_LegacyTraceResults[v25], 0, 0);
        Physics_ConvertRayQueryResultToLegacyTrace(s_PhysicsQuery_LegacyTraceResults[v25], NULL, DetailHitData, _RSI);
      }
    }
  }
  Profile_EndInternal(NULL);
  if ( v23 )
    hkMonitorStream::timerEnd(v23, "Et");
  __asm { vmovaps xmm6, xmmword ptr [rsp+160h+var_48+8] }
}

/*
==============
PhysicsQuery_LegacyLightSightTrace
==============
*/
_BOOL8 PhysicsQuery_LegacyLightSightTrace(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, int contentMask)
{
  __int64 v8; 
  hkMonitorStream *Value; 
  hkMonitorStream *v10; 
  int v11; 
  BOOL HasHit; 
  HavokPhysics_CollisionQueryResult *v13; 
  Physics_RaycastExtendedData extendedData; 

  v8 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v10 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyLightSightTrace");
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4823, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS", -2i64, v10) )
    __debugbreak();
  v11 = Physics_GetThreadId() + 28 * v8;
  if ( (unsigned int)(v8 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4826, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( s_PhysicsQuery_WorldInitialized[v8] )
  {
    HavokPhysics_IgnoreBodies::Reset(s_PhysicsQuery_LegacyIgnoreBodies[v11]);
    HavokPhysics_IgnoreBodies::SetIgnoreRefs(s_PhysicsQuery_LegacyIgnoreBodies[v11], -2);
    v13 = s_PhysicsQuery_LegacyQueryAnyResults[v11];
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4847, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    HavokPhysics_CollisionQueryResult::Reset(v13, 1);
    extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rsp+98h+extendedData.collisionBuffer], xmm0
    }
    extendedData.phaseSelection = All;
    extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
    *(_WORD *)&extendedData.collectInsideHits = 256;
    extendedData.contents = contentMask;
    extendedData.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v11];
    Physics_Raycast((Physics_WorldId)v8, start, end, &extendedData, v13);
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(v13);
  }
  else
  {
    HasHit = 0;
  }
  if ( v10 )
    hkMonitorStream::timerEnd(v10, "Et");
  return HasHit;
}

/*
==============
PhysicsQuery_LegacyMPCGWeaponSimTrace
==============
*/
void PhysicsQuery_LegacyMPCGWeaponSimTrace(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, const int *skipEntities, int skipEntityCount, int skipChildren, int contentMask, int locational, unsigned __int8 *priorityMap, Physics_QueryPhaseSelection phaseSelection, const bool detectInsideRaycasts)
{
  trace_t *v18; 
  __int64 v19; 
  hknpShape *Value; 
  hknpShape *v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  const int *v25; 
  HavokPhysics_IgnoreBodies *v26; 
  int v27; 
  char v28; 
  char v33; 
  char v34; 
  const vec3_t *v38; 
  hknpShape *v39; 
  int v41; 
  hknpShape *v43; 
  Physics_QueryPhaseSelection v44; 
  const vec3_t *v45; 
  unsigned int ThreadId; 
  bool IsShapeCacheDisabled; 
  int v49; 
  unsigned __int8 *v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  HavokPhysics_CollisionQueryResult *v57; 
  int ClosestPointHitRef; 
  char v59; 
  unsigned int RaycastHitBodyId; 
  float fmt; 
  Physics_QueryPointExtendedData v64; 
  hknpShape *shape; 
  Physics_ShapecastExtendedData extendedData; 
  int legacyEntryId; 
  Physics_DetailHitData *detailHitData; 
  __int64 v69; 
  _QWORD v70[11]; 
  void *retaddr; 

  _RAX = &retaddr;
  v69 = -2i64;
  __asm { vmovaps xmmword ptr [rax-58h], xmm6 }
  _R14 = end;
  _R12 = start;
  v18 = results;
  v19 = worldId;
  Value = (hknpShape *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v21 = Value;
  shape = Value;
  if ( Value )
    hkMonitorStream::timerBegin((hkMonitorStream *)Value, "TtLegacyQuery: PhysicsQuery_LegacyMPCGWeaponSimTrace");
  v70[0] = v21;
  if ( (unsigned int)v19 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3527, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v19] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3528, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3529, ASSERT_TYPE_ASSERT, "(results)", (const char *)&queryFormat, "results") )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3530, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  if ( !skipEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3531, ASSERT_TYPE_ASSERT, "(skipEntities)", (const char *)&queryFormat, "skipEntities") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3533, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  legacyEntryId = 28 * v19 + Physics_GetThreadId();
  v22 = legacyEntryId;
  HavokPhysics_IgnoreBodies::Reset(s_PhysicsQuery_LegacyIgnoreBodies[legacyEntryId]);
  HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyQueryResults[legacyEntryId], 1);
  HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyTraceResults[legacyEntryId], 1);
  v23 = skipEntityCount;
  v24 = 0i64;
  detailHitData = NULL;
  if ( skipEntityCount > 0 )
  {
    v25 = skipEntities;
    do
    {
      v26 = s_PhysicsQuery_LegacyIgnoreBodies[legacyEntryId];
      v27 = v25[v24];
      if ( !v26 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 727, ASSERT_TYPE_ASSERT, "(ignoreBodies)", (const char *)&queryFormat, "ignoreBodies") )
          __debugbreak();
        v23 = skipEntityCount;
      }
      if ( v27 >= 0 )
      {
        HavokPhysics_IgnoreBodies::AddIgnoreEntity(v26, v27, 1, skipChildren == 1, 0, 1, 0);
        v23 = skipEntityCount;
      }
      ++v24;
    }
    while ( v24 < v23 );
    v21 = shape;
    LODWORD(v19) = worldId;
    _R12 = start;
    _R14 = end;
    v18 = results;
  }
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(s_PhysicsQuery_LegacyIgnoreBodies[legacyEntryId], 194);
  _RCX = bounds;
  __asm
  {
    vmovss  xmm1, dword ptr [rcx+0Ch]
    vmovss  xmm0, dword ptr [rcx+14h]
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm0, xmm6
  }
  if ( v28 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r14]
      vucomiss xmm0, dword ptr [r12]
    }
    if ( !v28 )
      goto LABEL_56;
    __asm
    {
      vmovss  xmm0, dword ptr [r14+4]
      vucomiss xmm0, dword ptr [r12+4]
    }
    if ( !v28 )
      goto LABEL_56;
    __asm
    {
      vmovss  xmm0, dword ptr [r14+8]
      vucomiss xmm0, dword ptr [r12+8]
    }
    if ( v28 )
    {
      v64.simplify = 0;
      __asm { vmovss  [rbp+3Fh+var_D0.collisionBuffer], xmm6 }
      if ( locational && priorityMap )
      {
        v49 = contentMask & 0xFDFFBFFF;
        v64.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
      }
      else
      {
        v49 = contentMask;
        v64.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
      }
      v64.contents = v49;
      v64.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[legacyEntryId];
      v64.phaseSelection = phaseSelection;
      __asm { vxorps  xmm2, xmm2, xmm2; maxDistance }
      Physics_QueryPoint((Physics_WorldId)v19, _R12, *(float *)&_XMM2, &v64, s_PhysicsQuery_LegacyQueryResults[legacyEntryId]);
      Physics_ConvertClosestPointsToLegacyTrace(s_PhysicsQuery_LegacyQueryResults[v22], v18);
    }
    else
    {
LABEL_56:
      v51 = priorityMap;
      if ( locational && priorityMap )
        Physics_AddDetailTrace(s_PhysicsQuery_LegacyTraceResults[legacyEntryId], priorityMap);
      __asm { vmovss  dword ptr [rbp+3Fh+extendedData+14h], xmm6 }
      LOWORD(extendedData.nonBrushShape) = 256;
      v52 = contentMask;
      extendedData.contents = contentMask;
      *(_QWORD *)&extendedData.accuracy = s_PhysicsQuery_LegacyIgnoreBodies[legacyEntryId];
      if ( !locational || (LODWORD(extendedData.ignoreBodies) = 0, !v51) )
        LODWORD(extendedData.ignoreBodies) = 1;
      LODWORD(extendedData.collisionBuffer) = phaseSelection;
      v53 = 1;
      if ( detectInsideRaycasts )
        v53 = 2;
      *((_DWORD *)&extendedData.collisionBuffer + 1) = v53;
      Physics_Raycast((Physics_WorldId)v19, _R12, _R14, (Physics_RaycastExtendedData *)&extendedData, s_PhysicsQuery_LegacyTraceResults[legacyEntryId]);
      v54 = locational;
      if ( locational && v51 )
      {
        v64.simplify = 0;
        __asm { vmovss  [rbp+3Fh+var_D0.collisionBuffer], xmm6 }
        v64.contents = v52 & 0x2004000;
        v64.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v22];
        v55 = 0;
        v64.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
        v64.phaseSelection = phaseSelection;
        HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyQueryAllResults[v22], 1);
        __asm { vxorps  xmm2, xmm2, xmm2; maxDistance }
        Physics_QueryPoint((Physics_WorldId)v19, _R12, *(float *)&_XMM2, &v64, s_PhysicsQuery_LegacyQueryAllResults[v22]);
        skipEntityCount = HavokPhysics_CollisionQueryResult::GetNumHits(s_PhysicsQuery_LegacyQueryAllResults[v22]);
        if ( skipEntityCount > 0 )
        {
          do
          {
            if ( !HavokPhysics_CollisionQueryResult::HasHit(s_PhysicsQuery_LegacyTraceResults[v22]) || (v57 = s_PhysicsQuery_LegacyTraceResults[v22], ClosestPointHitRef = HavokPhysics_CollisionQueryResult::GetClosestPointHitRef(s_PhysicsQuery_LegacyQueryAllResults[v22], v55), HavokPhysics_CollisionQueryResult::GetRaycastHitRef(v57, 0) != ClosestPointHitRef) )
              HavokPhysics_CollisionQueryResult::AddQueryPointHitAsRaycastHit(s_PhysicsQuery_LegacyTraceResults[v22], (Physics_WorldId)v19, s_PhysicsQuery_LegacyQueryAllResults[v22], v55, _R12, end, (Physics_RaycastExtendedData *)&extendedData);
            ++v55;
          }
          while ( v55 < skipEntityCount );
          v21 = shape;
          v51 = priorityMap;
          v52 = contentMask;
        }
        v54 = locational;
      }
      if ( HavokPhysics_CollisionQueryResult::HasHit(s_PhysicsQuery_LegacyTraceResults[v22]) )
      {
        *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(s_PhysicsQuery_LegacyTraceResults[v22], 0);
        __asm { vcomiss xmm0, xmm6 }
        if ( v59 | v28 )
        {
          v64.simplify = 0;
          v64.ignoreBodies = NULL;
          __asm { vmovss  [rbp+3Fh+var_D0.collisionBuffer], xmm6 }
          if ( v54 && v51 )
          {
            v52 &= 0xFDFFBFFF;
            v64.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
          }
          else
          {
            v64.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
          }
          v64.contents = v52;
          v64.phaseSelection = phaseSelection;
          RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(s_PhysicsQuery_LegacyTraceResults[v22], 0);
          if ( (RaycastHitBodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3696, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( hitBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( hitBodyId )") )
            __debugbreak();
          __asm { vmovaps xmm3, xmm6; maxDistance }
          Physics_QueryPoint((Physics_WorldId)v19, RaycastHitBodyId, _R12, *(float *)&_XMM3, &v64, s_PhysicsQuery_LegacyQueryResults[v22]);
        }
      }
      if ( v54 && v51 )
        detailHitData = (Physics_DetailHitData *)Physics_GetDetailHitData(s_PhysicsQuery_LegacyTraceResults[v22], 0, 0);
      Physics_ConvertRayQueryResultToLegacyTrace(s_PhysicsQuery_LegacyTraceResults[v22], s_PhysicsQuery_LegacyQueryResults[v22], detailHitData, results);
    }
  }
  else
  {
    __asm { vucomiss xmm1, xmm6 }
    v34 = PhysicsQuery_LegacyTraceCreateShape((Physics_WorldId)v19, NULL, bounds, 0, s_PhysicsQuery_LegacyTraceShapeBuffers[legacyEntryId], 0, (hknpShape **)&bounds, (hknpShape **)&skipEntities, &shape, NULL);
    LOBYTE(skipEntityCount) = v34;
    __asm
    {
      vmovss  xmm0, dword ptr [r14]
      vucomiss xmm0, dword ptr [r12]
    }
    if ( !v33 )
      goto LABEL_39;
    __asm
    {
      vmovss  xmm0, dword ptr [r14+4]
      vucomiss xmm0, dword ptr [r12+4]
    }
    if ( !v33 )
      goto LABEL_39;
    __asm
    {
      vmovss  xmm0, dword ptr [r14+8]
      vucomiss xmm0, dword ptr [r12+8]
    }
    if ( v33 )
    {
      LOBYTE(extendedData.startTolerance) = 0;
      __asm { vmovss  [rbp+3Fh+extendedData.collisionBuffer], xmm6 }
      if ( locational && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3565, ASSERT_TYPE_ASSERT, "(locational == qfalse)", "%s\n\tCan't do locational shape traces - only locational ray-traces", "locational == qfalse") )
        __debugbreak();
      extendedData.contents = contentMask;
      *(_QWORD *)&extendedData.accuracy = s_PhysicsQuery_LegacyIgnoreBodies[v22];
      *(_QWORD *)&extendedData.collisionBuffer = skipEntities;
      LODWORD(extendedData.nonBrushShape) = phaseSelection;
      __asm { vmovss  dword ptr [rsp+120h+fmt], xmm6 }
      v38 = _R12;
      v39 = (hknpShape *)bounds;
      Physics_GetClosestPoints((Physics_WorldId)v19, (hknpShape *)bounds, v38, &quat_identity, fmt, (Physics_GetClosestPointsExtendedData *)&extendedData, s_PhysicsQuery_LegacyQueryResults[v22]);
      Physics_ConvertClosestPointsToLegacyTrace(s_PhysicsQuery_LegacyQueryResults[v22], results);
    }
    else
    {
LABEL_39:
      __asm
      {
        vmovss  dword ptr [rbp+3Fh+extendedData.simplify], xmm6
        vmovss  xmm0, cs:__real@3c83126f
        vmovss  dword ptr [rbp+3Fh+extendedData.ignoreBodies], xmm0
      }
      extendedData.simplifyStart = 0;
      extendedData.permitOutwardTrace = 0;
      if ( locational && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3582, ASSERT_TYPE_ASSERT, "(locational == qfalse)", "%s\n\tCan't do locational shape traces - only locational ray-traces", "locational == qfalse") )
        __debugbreak();
      v41 = contentMask;
      extendedData.contents = contentMask;
      extendedData.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v22];
      __asm
      {
        vmovss  xmm0, cs:__real@3e000000
        vmovss  dword ptr [rbp+3Fh+extendedData.nonBrushShape], xmm0
      }
      v43 = (hknpShape *)skipEntities;
      extendedData.nonBrushShape = (hknpShape *)skipEntities;
      extendedData.secondPassShape = shape;
      v44 = phaseSelection;
      extendedData.phaseSelection = phaseSelection;
      v45 = _R12;
      v39 = (hknpShape *)bounds;
      Physics_Shapecast((Physics_WorldId)v19, (hknpShape *)bounds, v45, end, &quat_identity, &extendedData, s_PhysicsQuery_LegacyTraceResults[v22], s_PhysicsQuery_LegacyQueryResults[v22]);
      Physics_ConvertShapeQueryResultToLegacyTrace(s_PhysicsQuery_LegacyTraceResults[v22], s_PhysicsQuery_LegacyQueryResults[v22], results);
      PhysicsQuery_LegacyTraceProcessAllSolid((Physics_WorldId)v19, results, &quat_identity, legacyEntryId, v41, v43, v44, v39, end);
      v34 = skipEntityCount;
    }
    ThreadId = Physics_GetThreadId();
    IsShapeCacheDisabled = Physics_IsShapeCacheDisabled(ThreadId);
    if ( shape )
      Physics_ReleaseShape((Physics_WorldId)v19, shape, IsShapeCacheDisabled);
    if ( v39 && v34 )
      Physics_ReleaseShape((Physics_WorldId)v19, v39, IsShapeCacheDisabled);
  }
  if ( v21 )
    hkMonitorStream::timerEnd((hkMonitorStream *)v21, "Et");
  __asm { vmovaps xmm6, xmmword ptr [rsp+120h+var_58+8] }
}

/*
==============
PhysicsQuery_LegacyPenetrationBrushEntityTrace
==============
*/
void PhysicsQuery_LegacyPenetrationBrushEntityTrace(Physics_WorldId worldId, vec3_t *normal, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int contentMask, unsigned int physicsInstanceId, const playerState_s *ps, int brushId, const vec3_t *brushOrigin, const vec3_t *brushAngles)
{
  __int64 v12; 
  hkMonitorStream *Value; 
  hkMonitorStream *v15; 
  int v16; 
  HavokPhysics_CollisionQueryResult *v17; 
  HavokPhysics_CollisionQueryResult *startResult; 
  bool v19; 
  bool v20; 
  signed int v25; 
  hknpShape *ShapeCapsuleUpAxis; 
  HavokPhysics_CollisionQueryResult *v30; 
  hknpBodyId *v31; 
  signed int v32; 
  HavokPhysics_CollisionQueryResult *v33; 
  hknpBodyId *RigidBodyID; 
  __int64 shapeStorage; 
  __int64 shapeStoragea; 
  int NumRigidBodys; 
  hknpBodyId result[2]; 
  vec3_t *enda; 
  vec3_t *starta; 
  hkMonitorStream *v41; 
  Physics_ShapecastExtendedData extendedData; 
  vec3_t *normala; 
  __int64 v44; 
  hkMonitorStream *v45; 
  vec4_t quat; 

  v44 = -2i64;
  enda = (vec3_t *)end;
  starta = (vec3_t *)start;
  normala = normal;
  v12 = worldId;
  _R15 = bounds;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v15 = Value;
  v41 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyPenetrationBrushEntityTrace");
  v45 = v15;
  if ( (unsigned int)v12 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4190, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4191, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4192, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4194, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v16 = Physics_GetThreadId() + 28 * v12;
  if ( physicsInstanceId == -1 )
    NumRigidBodys = 0;
  else
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v12, physicsInstanceId);
  v17 = s_PhysicsQuery_LegacyTraceResults[v16];
  *(_QWORD *)&result[0].m_serialAndIndex = v17;
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4202, ASSERT_TYPE_ASSERT, "(traceResult)", (const char *)&queryFormat, "traceResult") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v17, 1);
  startResult = s_PhysicsQuery_LegacyQueryResults[v16];
  if ( !startResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4205, ASSERT_TYPE_ASSERT, "(queryResult)", (const char *)&queryFormat, "queryResult") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(startResult, 1);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2834, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BGMovingPlatformPS::IsNewRockingMoverCollisionEnabled() )
  {
    AnglesToQuat(&ps->movingPlatforms.m_moverUpAngles, &quat);
  }
  else
  {
    v20 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xEu);
    v19 = !v20;
    if ( v20 )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_STUNNED_END|0x80) )
        BGMovingPlatforms::GetBestPlatformUp(ps, brushAngles, NULL, &quat);
      else
        AnglesToQuat(brushAngles, &quat);
    }
    else
    {
      __asm
      {
        vmovups xmm0, xmmword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
        vmovups xmmword ptr [rbp+3Fh+quat], xmm0
      }
    }
  }
  __asm
  {
    vmovss  xmm3, dword ptr [r15+0Ch]; radius
    vmovss  xmm1, dword ptr [r15+14h]
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm1, xmm0
  }
  if ( v19 )
  {
    v32 = 0;
    *(_QWORD *)&extendedData.accuracy = 0i64;
    LODWORD(extendedData.ignoreBodies) = 1;
    __asm { vmovss  dword ptr [rbp+3Fh+extendedData.ignoreBodies+4], xmm0 }
    extendedData.collisionBuffer = 0.0;
    *((_DWORD *)&extendedData.collisionBuffer + 1) = 1;
    LOWORD(extendedData.nonBrushShape) = 256;
    extendedData.contents = contentMask;
    v33 = *(HavokPhysics_CollisionQueryResult **)&result[0].m_serialAndIndex;
    if ( NumRigidBodys > 0 )
    {
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v12 > 7 )
        {
          LODWORD(shapeStorage) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", shapeStorage) )
            __debugbreak();
        }
        if ( physicsInstanceId == -1 )
        {
          LODWORD(shapeStorage) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", shapeStorage) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v12 - 2) <= 5 )
        {
          LODWORD(shapeStorage) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", shapeStorage) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v12 <= 1 )
        {
          LODWORD(shapeStorage) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", shapeStorage) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID(result, (const Physics_WorldId)v12, physicsInstanceId, v32);
        Physics_Raycast((Physics_WorldId)v12, RigidBodyID->m_serialAndIndex, starta, enda, (Physics_RaycastExtendedData *)&extendedData, v33);
        ++v32;
      }
      while ( v32 < NumRigidBodys );
      v15 = v41;
    }
    if ( HavokPhysics_CollisionQueryResult::HasHit(v33) )
      HavokPhysics_CollisionQueryResult::GetRaycastHitNormal(v33, 0, normala);
  }
  else
  {
    __asm
    {
      vucomiss xmm3, xmm0
      vmovss  [rbp+3Fh+extendedData.startTolerance], xmm0
      vmovss  xmm0, cs:__real@3c83126f
      vmovss  [rbp+3Fh+extendedData.accuracy], xmm0
    }
    extendedData.simplifyStart = 0;
    v25 = 0;
    extendedData.ignoreBodies = NULL;
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rbp+3Fh+extendedData.nonBrushShape], xmm0
    }
    extendedData.phaseSelection = All;
    extendedData.permitOutwardTrace = 0;
    extendedData.contents = contentMask;
    __asm
    {
      vmovss  xmm0, cs:__real@3e000000
      vmovss  [rbp+3Fh+extendedData.collisionBuffer], xmm0
      vsubss  xmm2, xmm1, xmm3; halfHeight
    }
    ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis((Physics_WorldId)v12, &bounds->midPoint, *(float *)&_XMM2, *(float *)&_XMM3, s_PhysicsQuery_LegacyTraceShapeBuffers[v16], 432, Temporary);
    if ( !ShapeCapsuleUpAxis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4252, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
      __debugbreak();
    if ( NumRigidBodys > 0 )
    {
      v30 = *(HavokPhysics_CollisionQueryResult **)&result[0].m_serialAndIndex;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v12 > 7 )
        {
          LODWORD(shapeStoragea) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", shapeStoragea) )
            __debugbreak();
        }
        if ( physicsInstanceId == -1 )
        {
          LODWORD(shapeStoragea) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", shapeStoragea) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v12 - 2) <= 5 )
        {
          LODWORD(shapeStoragea) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", shapeStoragea) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v12 <= 1 )
        {
          LODWORD(shapeStoragea) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", shapeStoragea) )
            __debugbreak();
        }
        v31 = HavokPhysics_GetRigidBodyID(result, (const Physics_WorldId)v12, physicsInstanceId, v25);
        Physics_Shapecast((Physics_WorldId)v12, v31->m_serialAndIndex, ShapeCapsuleUpAxis, starta, enda, &quat, &extendedData, v30, startResult);
        ++v25;
      }
      while ( v25 < NumRigidBodys );
      v15 = v41;
    }
  }
  if ( v15 )
    hkMonitorStream::timerEnd(v15, "Et");
}

/*
==============
PhysicsQuery_LegacyPenetrationTest
==============
*/
void PhysicsQuery_LegacyPenetrationTest(Physics_WorldId worldId, const playerState_s *ps, bool *penetrating, bool *penetratingBrushBasis, vec3_t *penetration, const vec3_t *pos, const vec3_t *angles, const Bounds *bounds, int contentMask, unsigned int physicsInstanceId, const vec3_t *brushAngles, int ignoreEnt, bool vehicleTrace)
{
  __int64 v23; 
  hkMonitorStream *Value; 
  hkMonitorStream *v26; 
  int v27; 
  __int16 groundRefEnt; 
  bool *v29; 
  unsigned int v30; 
  __int64 v31; 
  HavokPhysics_CollisionQueryResult *v32; 
  char v33; 
  unsigned int NumRigidBodys; 
  unsigned int v59; 
  hknpBodyId *RigidBodyID; 
  hknpShape *v61; 
  bool HasHit; 
  HavokPhysics_IgnoreBodies *v70; 
  bool ClosestPointHitHitBrushBasis; 
  bool *v75; 
  char v90; 
  unsigned int ThreadId; 
  bool IsShapeCacheDisabled; 
  bool v110; 
  float fmt; 
  float maxDistance; 
  hknpShape **shape; 
  char v122; 
  bool v123; 
  hknpBodyId result[2]; 
  hknpShape *v125; 
  playerState_s *psa; 
  bool *v127; 
  vec3_t *v128; 
  vec3_t *v129; 
  hknpShape *paddedShape; 
  Physics_GetClosestPointsExtendedData extendedData; 
  __int64 v132; 
  hkMonitorStream *v133; 
  vec3_t normal; 
  vec3_t v135; 
  vec3_t point; 
  tmat33_t<vec3_t> axis; 
  vec4_t quat; 
  Bounds v139; 
  char v140; 
  void *retaddr; 

  _RAX = &retaddr;
  v132 = -2i64;
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
  v127 = penetratingBrushBasis;
  *(_QWORD *)v135.v = penetrating;
  psa = (playerState_s *)ps;
  v23 = worldId;
  v129 = penetration;
  v128 = (vec3_t *)angles;
  _R13 = bounds;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v26 = Value;
  *(_QWORD *)normal.v = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyPenetrationTest");
  v133 = v26;
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4041, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v27 = Physics_GetThreadId() + 28 * v23;
  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2605, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2571, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x2Au) )
    goto LABEL_20;
  groundRefEnt = ps->groundRefEnt;
  if ( groundRefEnt != 2047 )
  {
    if ( groundRefEnt )
      goto LABEL_20;
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2575, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG )") )
    __debugbreak();
  if ( BG_IsPlayerZeroGWalking(ps) || vehicleTrace )
LABEL_20:
    v122 = 0;
  else
    v122 = 1;
  if ( (unsigned int)v23 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4045, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v23] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4046, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !penetrating && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4047, ASSERT_TYPE_ASSERT, "(penetrating)", (const char *)&queryFormat, "penetrating") )
    __debugbreak();
  v29 = v127;
  if ( !v127 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4048, ASSERT_TYPE_ASSERT, "(penetratingBrushBasis)", (const char *)&queryFormat, "penetratingBrushBasis") )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4049, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  *penetrating = 0;
  *v29 = 0;
  v30 = 0;
  *(_QWORD *)penetration->v = 0i64;
  penetration->v[2] = 0.0;
  v31 = v27;
  v32 = s_PhysicsQuery_LegacyQueryResults[v27];
  if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4057, ASSERT_TYPE_ASSERT, "(queryResult)", (const char *)&queryFormat, "queryResult") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v32, 1);
  __asm
  {
    vxorps  xmm12, xmm12, xmm12
    vucomiss xmm12, dword ptr [r13+0Ch]
  }
  if ( v33 )
    goto LABEL_87;
  __asm { vucomiss xmm12, dword ptr [r13+14h] }
  if ( v33 )
  {
LABEL_87:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4061, ASSERT_TYPE_ASSERT, "(bounds->halfSize[0] != 0.f && bounds->halfSize[2] != 0.f)", (const char *)&queryFormat, "bounds->halfSize[0] != 0.f && bounds->halfSize[2] != 0.f") )
      __debugbreak();
  }
  __asm
  {
    vmovups xmm6, xmmword ptr [r13+0]
    vmovups xmmword ptr [rbp+100h+var_D0.midPoint], xmm6
    vmovsd  xmm0, qword ptr [r13+10h]
    vmovsd  qword ptr [rbp+100h+var_D0.halfSize+4], xmm0
    vshufps xmm7, xmm6, xmm6, 55h ; 'U'
    vshufps xmm8, xmm6, xmm6, 0AAh ; 'ª'
    vmovss  dword ptr [rbp+100h+var_D0.midPoint], xmm12
    vmovss  dword ptr [rbp+100h+var_D0.midPoint+4], xmm12
    vmovss  dword ptr [rbp+100h+var_D0.midPoint+8], xmm12
  }
  _R13 = psa;
  v123 = PhysicsQuery_LegacyTraceCreateShape((Physics_WorldId)v23, psa, &v139, 0, s_PhysicsQuery_LegacyTraceShapeBuffers[v27], vehicleTrace, &v125, (hknpShape **)result, &paddedShape, NULL);
  extendedData.simplify = 0;
  extendedData.ignoreBodies = NULL;
  __asm { vmovss  [rbp+100h+extendedData.collisionBuffer], xmm12 }
  extendedData.phaseSelection = All;
  extendedData.contents = contentMask;
  extendedData.nonBrushShape = *(hknpShape **)&result[0].m_serialAndIndex;
  if ( v128 )
    AnglesToQuat(v128, &quat);
  else
    PhysicsQuery_LegacyTraceBuildTraceQuat((Physics_WorldId)v23, _R13, &quat, vehicleTrace);
  QuatToAxis(&quat, &axis);
  __asm
  {
    vmulss  xmm3, xmm7, dword ptr [rbp+100h+axis+0Ch]
    vmulss  xmm2, xmm6, dword ptr [rbp+100h+axis]
    vaddss  xmm3, xmm3, xmm2
    vmulss  xmm0, xmm8, dword ptr [rbp+100h+axis+18h]
    vaddss  xmm1, xmm3, xmm0
    vaddss  xmm1, xmm1, dword ptr [rax]
    vmovss  dword ptr [rbp+100h+point], xmm1
    vmulss  xmm3, xmm7, dword ptr [rbp+100h+axis+10h]
    vmulss  xmm2, xmm6, dword ptr [rbp+100h+axis+4]
    vaddss  xmm3, xmm3, xmm2
    vmulss  xmm0, xmm8, dword ptr [rbp+100h+axis+1Ch]
    vaddss  xmm1, xmm3, xmm0
    vaddss  xmm2, xmm1, dword ptr [rax+4]
    vmovss  dword ptr [rbp+100h+point+4], xmm2
    vmulss  xmm3, xmm7, dword ptr [rbp+100h+axis+14h]
    vmulss  xmm2, xmm6, dword ptr [rbp+100h+axis+8]
    vaddss  xmm3, xmm3, xmm2
    vmulss  xmm0, xmm8, dword ptr [rbp+100h+axis+20h]
    vaddss  xmm1, xmm3, xmm0
    vaddss  xmm2, xmm1, dword ptr [rax+8]
    vmovss  dword ptr [rbp+100h+point+8], xmm2
  }
  if ( physicsInstanceId == -1 )
  {
    v70 = s_PhysicsQuery_LegacyIgnoreBodies[v27];
    HavokPhysics_IgnoreBodies::Reset(s_PhysicsQuery_LegacyIgnoreBodies[v31]);
    PhysicsQuery_AddEntityChainToIgnoreList(ignoreEnt, v70, 1, 1, 0, 1, 0);
    extendedData.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v31];
    __asm { vmovss  dword ptr [rsp+200h+fmt], xmm12 }
    v61 = v125;
    Physics_GetClosestPoints((Physics_WorldId)v23, v125, &point, &quat, fmt, &extendedData, v32);
  }
  else
  {
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v23, physicsInstanceId);
    v59 = 0;
    if ( NumRigidBodys )
    {
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v23 > 7 )
        {
          LODWORD(shape) = v23;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", shape) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v23 - 2) <= 5 )
        {
          LODWORD(shape) = v23;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", shape) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v23 <= 1 )
        {
          LODWORD(shape) = v23;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", shape) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID(result, (const Physics_WorldId)v23, physicsInstanceId, v59);
        __asm { vmovss  [rsp+200h+maxDistance], xmm12 }
        Physics_GetClosestPoints((Physics_WorldId)v23, RigidBodyID->m_serialAndIndex, v125, &point, &quat, maxDistance, &extendedData, v32);
        ++v59;
      }
      while ( v59 < NumRigidBodys );
      v26 = *(hkMonitorStream **)normal.v;
      v30 = 0;
      _R13 = psa;
    }
    v61 = v125;
  }
  HasHit = HavokPhysics_CollisionQueryResult::HasHit(v32);
  **(_BYTE **)v135.v = HasHit;
  if ( HasHit )
  {
    if ( v122 )
    {
      __asm
      {
        vmovss  xmm2, dword ptr [r13+1E8h]
        vmulss  xmm0, xmm2, dword ptr [rbp+100h+axis+18h]
        vaddss  xmm9, xmm0, dword ptr [r13+30h]
        vmulss  xmm1, xmm2, dword ptr [rbp+100h+axis+1Ch]
        vaddss  xmm10, xmm1, dword ptr [r13+34h]
        vmulss  xmm0, xmm2, dword ptr [rbp+100h+axis+20h]
        vaddss  xmm11, xmm0, dword ptr [r13+38h]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm10, [rsp+200h+result.m_serialAndIndex]
        vmovss  xmm11, [rsp+200h+result.m_serialAndIndex]
        vmovss  xmm9, [rsp+200h+result.m_serialAndIndex]
      }
    }
    ClosestPointHitHitBrushBasis = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitBrushBasis(v32, 0);
    v75 = v127;
    *v127 = ClosestPointHitHitBrushBasis;
    if ( HavokPhysics_CollisionQueryResult::GetNumHits(v32) )
    {
      do
      {
        HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(v32, v30, &v135);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+100h+var_128]
          vsubss  xmm8, xmm0, dword ptr [rbp+100h+point]
          vmovss  xmm1, dword ptr [rbp+100h+var_128+4]
          vsubss  xmm6, xmm1, dword ptr [rbp+100h+point+4]
          vmovss  xmm0, dword ptr [rbp+100h+var_128+8]
          vsubss  xmm7, xmm0, dword ptr [rbp+100h+point+8]
        }
        HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(v32, v30, &normal);
        __asm
        {
          vmovss  xmm5, dword ptr [rbp+100h+normal+4]
          vmulss  xmm1, xmm6, xmm5
          vmovss  xmm6, dword ptr [rbp+100h+normal]
          vmulss  xmm0, xmm8, xmm6
          vaddss  xmm2, xmm1, xmm0
          vmovss  xmm8, dword ptr [rbp+100h+normal+8]
          vmulss  xmm1, xmm7, xmm8
          vaddss  xmm0, xmm2, xmm1
          vcomiss xmm0, xmm12
        }
        if ( v90 )
        {
          if ( !v122 )
          {
            *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(v32, v30);
            __asm
            {
              vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
              vmaxss  xmm3, xmm1, cs:__real@3a83126f
              vmulss  xmm2, xmm3, dword ptr [rbp+100h+normal]
            }
            _RAX = v129;
            __asm
            {
              vmovss  dword ptr [rax], xmm2
              vmulss  xmm0, xmm3, dword ptr [rbp+100h+normal+4]
              vmovss  dword ptr [rax+4], xmm0
              vmulss  xmm1, xmm3, dword ptr [rbp+100h+normal+8]
              vmovss  dword ptr [rax+8], xmm1
            }
            *v75 = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitBrushBasis(v32, v30);
            break;
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+100h+var_128]
            vsubss  xmm2, xmm0, xmm9
            vmovss  xmm1, dword ptr [rbp+100h+var_128+4]
            vsubss  xmm3, xmm1, xmm10
            vmovss  xmm0, dword ptr [rbp+100h+var_128+8]
            vsubss  xmm4, xmm0, xmm11
            vmulss  xmm2, xmm2, xmm6
            vmulss  xmm1, xmm3, xmm5
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm8, xmm4
            vaddss  xmm4, xmm3, xmm0
            vcomiss xmm4, xmm12
          }
        }
        ++v30;
      }
      while ( v30 < HavokPhysics_CollisionQueryResult::GetNumHits(v32) );
    }
  }
  ThreadId = Physics_GetThreadId();
  IsShapeCacheDisabled = Physics_IsShapeCacheDisabled(ThreadId);
  v110 = IsShapeCacheDisabled;
  if ( paddedShape )
    Physics_ReleaseShape((Physics_WorldId)v23, paddedShape, IsShapeCacheDisabled);
  if ( v61 && v123 )
    Physics_ReleaseShape((Physics_WorldId)v23, v61, v110);
  if ( v26 )
    hkMonitorStream::timerEnd(v26, "Et");
  _R11 = &v140;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm11, xmmword ptr [r11-68h]
    vmovaps xmm12, xmmword ptr [r11-78h]
  }
}

/*
==============
PhysicsQuery_LegacySightTrace
==============
*/
_BOOL8 PhysicsQuery_LegacySightTrace(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int skipEntity0, int skipEntity1, int contentMask)
{
  __int64 v14; 
  hkMonitorStream *Value; 
  hkMonitorStream *v16; 
  int v17; 
  __int64 v20; 
  HavokPhysics_CollisionQueryResult *v21; 
  HavokPhysics_IgnoreBodies *v22; 
  HavokPhysics_IgnoreBodies *v23; 
  bool v24; 
  hknpShape *ShapeCapsuleUpAxis; 
  BOOL HasHit; 
  _BOOL8 result; 
  Physics_ShapecastExtendedData extendedData; 
  char v37; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _R15 = bounds;
  v14 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v16 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacySightTrace");
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4667, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v17 = Physics_GetThreadId() + 28 * v14;
  if ( (unsigned int)v14 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4670, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4671, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4672, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, dword ptr [r15+0Ch]
    vmovss  xmm7, dword ptr [r15+14h]
  }
  v20 = v17;
  v21 = s_PhysicsQuery_LegacyQueryAnyResults[v17];
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4684, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v21, 1);
  HavokPhysics_IgnoreBodies::Reset(s_PhysicsQuery_LegacyIgnoreBodies[v20]);
  v22 = s_PhysicsQuery_LegacyIgnoreBodies[v20];
  if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 727, ASSERT_TYPE_ASSERT, "(ignoreBodies)", (const char *)&queryFormat, "ignoreBodies") )
    __debugbreak();
  if ( skipEntity0 >= 0 )
    HavokPhysics_IgnoreBodies::AddIgnoreEntity(v22, skipEntity0, 1, 1, 0, 1, 0);
  v23 = s_PhysicsQuery_LegacyIgnoreBodies[v20];
  if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 727, ASSERT_TYPE_ASSERT, "(ignoreBodies)", (const char *)&queryFormat, "ignoreBodies") )
    __debugbreak();
  v24 = skipEntity1 == 0;
  if ( skipEntity1 >= 0 )
    HavokPhysics_IgnoreBodies::AddIgnoreEntity(v23, skipEntity1, 1, 1, 0, 1, 0);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm7, xmm1
  }
  if ( v24 )
  {
    LODWORD(extendedData.ignoreBodies) = 1;
    __asm { vmovss  dword ptr [rsp+0C8h+extendedData.ignoreBodies+4], xmm1 }
    extendedData.collisionBuffer = 0.0;
    *((_DWORD *)&extendedData.collisionBuffer + 1) = 1;
    LOWORD(extendedData.nonBrushShape) = 256;
    extendedData.contents = contentMask;
    *(_QWORD *)&extendedData.accuracy = s_PhysicsQuery_LegacyIgnoreBodies[v20];
    Physics_Raycast((Physics_WorldId)v14, start, end, (Physics_RaycastExtendedData *)&extendedData, v21);
  }
  else
  {
    __asm
    {
      vucomiss xmm6, xmm1
      vmovss  [rsp+0C8h+extendedData.startTolerance], xmm1
      vmovss  xmm0, cs:__real@3c83126f
      vmovss  [rsp+0C8h+extendedData.accuracy], xmm0
    }
    extendedData.simplifyStart = 0;
    __asm
    {
      vmovss  [rsp+0C8h+extendedData.collisionBuffer], xmm1
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+0C8h+extendedData.nonBrushShape], xmm0
    }
    extendedData.phaseSelection = All;
    extendedData.permitOutwardTrace = 0;
    extendedData.contents = contentMask;
    extendedData.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v20];
    __asm
    {
      vsubss  xmm2, xmm7, xmm6; halfHeight
      vmovaps xmm3, xmm6; radius
    }
    ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis((Physics_WorldId)v14, &_R15->midPoint, *(float *)&_XMM2, *(float *)&_XMM3, s_PhysicsQuery_LegacyTraceShapeBuffers[v20], 432, Temporary);
    if ( !ShapeCapsuleUpAxis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4705, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
      __debugbreak();
    Physics_Shapecast((Physics_WorldId)v14, ShapeCapsuleUpAxis, start, end, &quat_identity, &extendedData, v21, NULL);
  }
  HasHit = HavokPhysics_CollisionQueryResult::HasHit(v21);
  if ( v16 )
    hkMonitorStream::timerEnd(v16, "Et");
  result = HasHit;
  _R11 = &v37;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  return result;
}

/*
==============
PhysicsQuery_LegacySightTraceWithEntityBBox
==============
*/
_BOOL8 PhysicsQuery_LegacySightTraceWithEntityBBox(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int skipEntity, int contentMask)
{
  __int64 v13; 
  hkMonitorStream *Value; 
  hkMonitorStream *v15; 
  int v16; 
  __int64 v19; 
  HavokPhysics_CollisionQueryResult *v20; 
  HavokPhysics_IgnoreBodies *v21; 
  bool v22; 
  hknpShape *ShapeCapsuleUpAxis; 
  BOOL HasHit; 
  _BOOL8 result; 
  Physics_ShapecastExtendedData extendedData; 
  char v35; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _R15 = bounds;
  v13 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v15 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacySightTraceWithEntityBBox");
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5088, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER )") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5089, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v16 = Physics_GetThreadId() + 28 * v13;
  if ( (unsigned int)v13 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5092, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5093, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5094, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, dword ptr [r15+0Ch]
    vmovss  xmm7, dword ptr [r15+14h]
  }
  v19 = v16;
  v20 = s_PhysicsQuery_LegacyQueryAnyResults[v16];
  if ( !v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5106, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v20, 1);
  HavokPhysics_IgnoreBodies::Reset(s_PhysicsQuery_LegacyIgnoreBodies[v19]);
  v21 = s_PhysicsQuery_LegacyIgnoreBodies[v19];
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 727, ASSERT_TYPE_ASSERT, "(ignoreBodies)", (const char *)&queryFormat, "ignoreBodies") )
    __debugbreak();
  v22 = skipEntity == 0;
  if ( skipEntity >= 0 )
    HavokPhysics_IgnoreBodies::AddIgnoreEntity(v21, skipEntity, 1, 1, 0, 1, 0);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm7, xmm1
  }
  if ( v22 )
  {
    LODWORD(extendedData.ignoreBodies) = 1;
    __asm { vmovss  dword ptr [rsp+0C8h+extendedData.ignoreBodies+4], xmm1 }
    extendedData.collisionBuffer = 0.0;
    *((_DWORD *)&extendedData.collisionBuffer + 1) = 1;
    LOWORD(extendedData.nonBrushShape) = 256;
    extendedData.contents = contentMask;
    *(_QWORD *)&extendedData.accuracy = s_PhysicsQuery_LegacyIgnoreBodies[v19];
    Physics_Raycast((Physics_WorldId)v13, start, end, (Physics_RaycastExtendedData *)&extendedData, v20);
  }
  else
  {
    __asm
    {
      vucomiss xmm6, xmm1
      vmovss  [rsp+0C8h+extendedData.startTolerance], xmm1
      vmovss  xmm0, cs:__real@3c83126f
      vmovss  [rsp+0C8h+extendedData.accuracy], xmm0
    }
    extendedData.simplifyStart = 0;
    __asm
    {
      vmovss  [rsp+0C8h+extendedData.collisionBuffer], xmm1
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+0C8h+extendedData.nonBrushShape], xmm0
    }
    extendedData.phaseSelection = All;
    extendedData.permitOutwardTrace = 0;
    extendedData.contents = contentMask;
    extendedData.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v19];
    __asm
    {
      vsubss  xmm2, xmm7, xmm6; halfHeight
      vmovaps xmm3, xmm6; radius
    }
    ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis((Physics_WorldId)v13, &_R15->midPoint, *(float *)&_XMM2, *(float *)&_XMM3, s_PhysicsQuery_LegacyTraceShapeBuffers[v19], 432, Temporary);
    if ( !ShapeCapsuleUpAxis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5124, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
      __debugbreak();
    Physics_Shapecast((Physics_WorldId)v13, ShapeCapsuleUpAxis, start, end, &quat_identity, &extendedData, v20, NULL);
  }
  HasHit = HavokPhysics_CollisionQueryResult::HasHit(v20);
  if ( v15 )
    hkMonitorStream::timerEnd(v15, "Et");
  result = HasHit;
  _R11 = &v35;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  return result;
}

/*
==============
PhysicsQuery_LegacyTrace
==============
*/
void PhysicsQuery_LegacyTrace(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int skipEntity, int skipChildren, int contentMask, int locational, unsigned __int8 *priorityMap, Physics_QueryPhaseSelection phaseSelection)
{
  PhysicsQuery_LegacyTraceSkipEntities_Internal(worldId, results, start, end, bounds, &skipEntity, 1, skipChildren, contentMask, locational, priorityMap, phaseSelection, 0, 0);
}

/*
==============
PhysicsQuery_LegacyTrace
==============
*/
void PhysicsQuery_LegacyTrace(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int skipEntity, int skipChildren, int contentMask, int locational, unsigned __int8 *priorityMap, Physics_QueryPhaseSelection phaseSelection, int ignoreRefs)
{
  PhysicsQuery_LegacyTraceSkipEntities_Internal(worldId, results, start, end, bounds, &skipEntity, 1, skipChildren, contentMask, locational, priorityMap, phaseSelection, ignoreRefs, 0);
}

/*
==============
PhysicsQuery_LegacyTrace
==============
*/
void PhysicsQuery_LegacyTrace(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, const int *skipEntities, int skipEntityCount, int skipChildren, int contentMask, int locational, unsigned __int8 *priorityMap, Physics_QueryPhaseSelection phaseSelection)
{
  PhysicsQuery_LegacyTraceSkipEntities_Internal(worldId, results, start, end, bounds, skipEntities, skipEntityCount, skipChildren, contentMask, locational, priorityMap, phaseSelection, 0, 0);
}

/*
==============
PhysicsQuery_LegacyTraceBuildTraceQuat
==============
*/
void PhysicsQuery_LegacyTraceBuildTraceQuat(Physics_WorldId worldId, const playerState_s *ps, vec4_t *outQuat, bool vehicleTrace)
{
  CgHandler *HandlerFromWorldId; 
  CgHandler *v12; 
  vec3_t platformAngles; 
  WorldUpReferenceFrame v18; 

  _RBX = outQuat;
  if ( !ps || vehicleTrace )
    goto LABEL_11;
  if ( PhysicsQuery_MoverUpAnglesToQuat(ps, outQuat) )
    return;
  if ( WorldUpReferenceFrame::HasValidWorldUpInPs(ps) )
  {
    HandlerFromWorldId = PhysicsQuery_GetHandlerFromWorldId(worldId);
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v18, ps, HandlerFromWorldId);
    __asm
    {
      vmovss  xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm1, dword ptr cs:?quat_identity@@3Tvec4_t@@B+4; vec4_t const quat_identity
      vmovss  dword ptr [rbx+4], xmm1
      vmovss  xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B+8; vec4_t const quat_identity
      vmovss  dword ptr [rbx+8], xmm0
      vmovss  xmm1, dword ptr cs:?quat_identity@@3Tvec4_t@@B+0Ch; vec4_t const quat_identity
      vmovss  dword ptr [rbx+0Ch], xmm1
    }
    WorldUpReferenceFrame::ApplyReferenceFrameToQuat(&v18, _RBX);
    return;
  }
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xEu) && BGMovingPlatforms::IsOnMovingPlatform(ps) )
  {
    v12 = PhysicsQuery_GetHandlerFromWorldId(worldId);
    v12->GetEntityAngles(v12, ps->movingPlatforms.m_movingPlatformEntity, &platformAngles);
    if ( Com_GameMode_SupportsFeature(WEAPON_STUNNED_END|0x80) )
      BGMovingPlatforms::GetBestPlatformUp(ps, &platformAngles, NULL, _RBX);
    else
      AnglesToQuat(&platformAngles, _RBX);
  }
  else
  {
LABEL_11:
    __asm
    {
      vmovss  xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
      vmovss  dword ptr [rbx], xmm0
      vmovss  xmm1, dword ptr cs:?quat_identity@@3Tvec4_t@@B+4; vec4_t const quat_identity
      vmovss  dword ptr [rbx+4], xmm1
      vmovss  xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B+8; vec4_t const quat_identity
      vmovss  dword ptr [rbx+8], xmm0
      vmovss  xmm1, dword ptr cs:?quat_identity@@3Tvec4_t@@B+0Ch; vec4_t const quat_identity
      vmovss  dword ptr [rbx+0Ch], xmm1
    }
  }
}

/*
==============
PhysicsQuery_LegacyTraceCreateShape
==============
*/
bool PhysicsQuery_LegacyTraceCreateShape(Physics_WorldId worldId, const playerState_s *ps, const Bounds *bounds, int locational, char *shapeBuffers, bool vehicleTrace, hknpShape **shape, hknpShape **nonBrushShape, hknpShape **paddedShape, PhysicsQuery_ContextSettings *contextSettings)
{
  hknpShape *ShapeCapsuleUpAxis; 
  bool result; 
  hknpShape *v24; 
  bool v25; 
  hknpShape *v30; 
  hknpShape *ShapeCylinder; 
  Bounds boundsa; 

  __asm
  {
    vmovaps [rsp+0B8h+var_48], xmm6
    vmovaps [rsp+0B8h+var_58], xmm7
  }
  _RDI = bounds;
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2726, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  if ( !nonBrushShape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2727, ASSERT_TYPE_ASSERT, "(nonBrushShape)", (const char *)&queryFormat, "nonBrushShape") )
    __debugbreak();
  if ( !paddedShape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2728, ASSERT_TYPE_ASSERT, "(paddedShape)", (const char *)&queryFormat, "paddedShape") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2729, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  if ( locational && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2731, ASSERT_TYPE_ASSERT, "(locational == qfalse)", "%s\n\tCan't do locational shape traces - only locational ray-traces", "locational == qfalse") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF6347, "PhysicsQuery_LegacyTraceCreateShape");
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+0Ch]
    vmovss  xmm7, dword ptr [rdi+14h]
  }
  *shape = NULL;
  *nonBrushShape = NULL;
  *paddedShape = NULL;
  if ( contextSettings && (contextSettings->m_flags & 0x20) != 0 || vehicleTrace )
  {
    __asm
    {
      vsubss  xmm2, xmm7, xmm6; halfHeight
      vmovaps xmm3, xmm6; radius
    }
    ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis(worldId, &_RDI->midPoint, *(float *)&_XMM2, *(float *)&_XMM3, shapeBuffers, 432, Temporary);
    *shape = ShapeCapsuleUpAxis;
    if ( !ShapeCapsuleUpAxis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2762, ASSERT_TYPE_ASSERT, "(*shape)", (const char *)&queryFormat, "*shape") )
      __debugbreak();
    Sys_ProfEndNamedEvent();
    result = 0;
    goto LABEL_46;
  }
  if ( contextSettings && (contextSettings->m_flags & 2) != 0 || !BG_UsingNewPlayerCollision() || !ps )
  {
    __asm
    {
      vsubss  xmm2, xmm7, xmm6; halfHeight
      vmovaps xmm3, xmm6; radius
    }
    *nonBrushShape = Physics_CreateShapeCapsuleUpAxis(worldId, &_RDI->midPoint, *(float *)&_XMM2, *(float *)&_XMM3, shapeBuffers, 432, Temporary);
    __asm
    {
      vmovaps xmm2, xmm6; radius
      vmovaps xmm1, xmm7; halfHeight
    }
    ShapeCylinder = Physics_CreateShapeCylinder(&_RDI->midPoint, *(float *)&_XMM1, *(float *)&_XMM2, 16, 1);
    __asm
    {
      vaddss  xmm2, xmm6, cs:__real@3e000000; radius
      vaddss  xmm1, xmm7, cs:__real@3e000000; halfHeight
    }
    *shape = ShapeCylinder;
    *paddedShape = Physics_CreateShapeCylinder(&_RDI->midPoint, *(float *)&_XMM1, *(float *)&_XMM2, 16, 1);
    if ( !*nonBrushShape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2801, ASSERT_TYPE_ASSERT, "(*nonBrushShape)", (const char *)&queryFormat, "*nonBrushShape") )
      __debugbreak();
    if ( !*shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2802, ASSERT_TYPE_ASSERT, "(*shape)", (const char *)&queryFormat, "*shape") )
      __debugbreak();
    if ( *paddedShape )
      goto LABEL_45;
    v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2803, ASSERT_TYPE_ASSERT, "(*paddedShape)", (const char *)&queryFormat, "*paddedShape");
    goto LABEL_43;
  }
  if ( contextSettings && (contextSettings->m_flags & 1) != 0 )
  {
    __asm
    {
      vmovaps xmm2, xmm6; radius
      vmovaps xmm1, xmm7; halfHeight
    }
    v24 = Physics_CreateShapeCylinder(&_RDI->midPoint, *(float *)&_XMM1, *(float *)&_XMM2, 16, 1);
    *shape = v24;
    if ( v24 )
    {
LABEL_45:
      Sys_ProfEndNamedEvent();
      result = 1;
      goto LABEL_46;
    }
    v25 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2778, ASSERT_TYPE_ASSERT, "(*shape)", (const char *)&queryFormat, "*shape");
LABEL_43:
    if ( v25 )
      __debugbreak();
    goto LABEL_45;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rdi]
    vmovsd  xmm1, qword ptr [rdi+10h]
    vmovups xmmword ptr [rsp+0B8h+bounds.midPoint], xmm0
    vmovsd  qword ptr [rsp+0B8h+bounds.halfSize+4], xmm1
  }
  BG_PlayerCollision_AdjustCapsuleBoundsForStickSystem(&boundsa);
  __asm
  {
    vmovss  xmm3, dword ptr [rsp+0B8h+bounds.halfSize]; radius
    vmovss  xmm2, dword ptr [rsp+0B8h+bounds.halfSize+8]; halfHeight
  }
  v30 = Physics_CreateShapeCapsuleUpAxis(worldId, &boundsa.midPoint, *(float *)&_XMM2, *(float *)&_XMM3, shapeBuffers, 432, Temporary);
  *shape = v30;
  if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2790, ASSERT_TYPE_ASSERT, "(*shape)", (const char *)&queryFormat, "*shape") )
    __debugbreak();
  Sys_ProfEndNamedEvent();
  result = 0;
LABEL_46:
  __asm
  {
    vmovaps xmm6, [rsp+0B8h+var_48]
    vmovaps xmm7, [rsp+0B8h+var_58]
  }
  return result;
}

/*
==============
PhysicsQuery_LegacyTracePassed
==============
*/
int PhysicsQuery_LegacyTracePassed(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int skipEntity0, int skipEntity1, int contentMask, int locational, unsigned __int8 *priorityMap, bool ignoreTransparentVolumes)
{
  return PhysicsQuery_LegacyTracePassedWithSkipParams(worldId, start, end, bounds, skipEntity0, 1, 1, skipEntity1, 1, 1, contentMask, locational, priorityMap, ignoreTransparentVolumes);
}

/*
==============
PhysicsQuery_LegacyTracePassedWithSkipParams
==============
*/
__int64 PhysicsQuery_LegacyTracePassedWithSkipParams(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int skipEntity0, bool skipEntity0Children, bool skipEntity0Siblings, int skipEntity1, bool skipEntity1Children, bool skipEntity1Siblings, int contentMask, int locational, unsigned __int8 *priorityMap, bool ignoreTransparentVolumes)
{
  __int64 v21; 
  hkMonitorStream *Value; 
  hkMonitorStream *v23; 
  __int64 v24; 
  char v28; 
  unsigned int v31; 
  hknpShape *ShapeCapsuleUpAxis; 
  __int64 result; 
  Physics_ShapecastExtendedData extendedData; 
  char v40; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _R14 = bounds;
  v21 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v23 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyTracePassed");
  if ( (unsigned int)v21 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3448, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v21] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3449, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3450, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3452, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v24 = (int)(28 * v21 + Physics_GetThreadId());
  HavokPhysics_IgnoreBodies::Reset(s_PhysicsQuery_LegacyIgnoreBodies[v24]);
  HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyTraceResults[v24], 1);
  PhysicsQuery_AddEntityChainToIgnoreList(skipEntity0, s_PhysicsQuery_LegacyIgnoreBodies[v24], 1, skipEntity0Children, 0, skipEntity0Siblings, 0);
  PhysicsQuery_AddEntityChainToIgnoreList(skipEntity1, s_PhysicsQuery_LegacyIgnoreBodies[v24], 1, skipEntity1Children, 0, skipEntity1Siblings, 0);
  s_PhysicsQuery_LegacyIgnoreBodies[v24]->m_ignoreTransparentVolumes = ignoreTransparentVolumes;
  __asm
  {
    vmovss  xmm6, dword ptr [r14+0Ch]
    vmovss  xmm7, dword ptr [r14+14h]
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm7, xmm1
  }
  if ( v28 )
  {
    LODWORD(extendedData.ignoreBodies) = 1;
    __asm { vmovss  dword ptr [rsp+0C8h+extendedData.ignoreBodies+4], xmm1 }
    v31 = 0;
    extendedData.collisionBuffer = 0.0;
    *((_DWORD *)&extendedData.collisionBuffer + 1) = 1;
    LOWORD(extendedData.nonBrushShape) = 256;
    extendedData.contents = contentMask;
    *(_QWORD *)&extendedData.accuracy = s_PhysicsQuery_LegacyIgnoreBodies[v24];
    if ( locational && priorityMap )
    {
      Physics_AddDetailTrace(s_PhysicsQuery_LegacyTraceResults[v24], priorityMap);
      LODWORD(extendedData.ignoreBodies) = 0;
    }
    Physics_Raycast((Physics_WorldId)v21, start, end, (Physics_RaycastExtendedData *)&extendedData, s_PhysicsQuery_LegacyTraceResults[v24]);
  }
  else
  {
    __asm
    {
      vucomiss xmm6, xmm1
      vmovss  [rsp+0C8h+extendedData.startTolerance], xmm1
      vmovss  xmm0, cs:__real@3c83126f
      vmovss  [rsp+0C8h+extendedData.accuracy], xmm0
    }
    extendedData.simplifyStart = 0;
    __asm
    {
      vmovss  [rsp+0C8h+extendedData.collisionBuffer], xmm1
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+0C8h+extendedData.nonBrushShape], xmm0
    }
    v31 = 0;
    extendedData.phaseSelection = All;
    extendedData.permitOutwardTrace = 0;
    if ( locational && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3476, ASSERT_TYPE_ASSERT, "(locational == qfalse)", "%s\n\tCan't do locational shape traces - only locational ray-traces", "locational == qfalse") )
      __debugbreak();
    extendedData.contents = contentMask;
    extendedData.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v24];
    __asm
    {
      vsubss  xmm2, xmm7, xmm6; halfHeight
      vmovaps xmm3, xmm6; radius
    }
    ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis((Physics_WorldId)v21, &_R14->midPoint, *(float *)&_XMM2, *(float *)&_XMM3, s_PhysicsQuery_LegacyTraceShapeBuffers[v24], 432, Temporary);
    if ( !ShapeCapsuleUpAxis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3483, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
      __debugbreak();
    Physics_Shapecast((Physics_WorldId)v21, ShapeCapsuleUpAxis, start, end, &quat_identity, &extendedData, s_PhysicsQuery_LegacyTraceResults[v24], NULL);
  }
  LOBYTE(v31) = !HavokPhysics_CollisionQueryResult::HasHit(s_PhysicsQuery_LegacyTraceResults[v24]);
  if ( v23 )
    hkMonitorStream::timerEnd(v23, "Et");
  result = v31;
  _R11 = &v40;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  return result;
}

/*
==============
PhysicsQuery_LegacyTraceProcessAllSolid
==============
*/
void PhysicsQuery_LegacyTraceProcessAllSolid(Physics_WorldId worldId, trace_t *results, const vec4_t *quat, const int legacyEntryId, int contentMask, hknpShape *nonBrushShape, Physics_QueryPhaseSelection phaseSelection, hknpShape *shape, const vec3_t *end)
{
  __int64 v14; 
  HavokPhysics_CollisionQueryResult *v16; 
  HavokPhysics_CollisionQueryResult *result; 
  unsigned int ShapecastHitBodyId; 
  bool HasHit; 
  float v21; 
  Physics_GetClosestPointsExtendedData extendedData; 
  void *retaddr; 

  _RAX = &retaddr;
  if ( results->startsolid )
  {
    extendedData.simplify = 0;
    extendedData.ignoreBodies = NULL;
    __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
    v14 = legacyEntryId;
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vmovss  dword ptr [rax-48h], xmm6
    }
    v16 = s_PhysicsQuery_LegacyQueryResults[legacyEntryId];
    extendedData.contents = contentMask;
    extendedData.nonBrushShape = nonBrushShape;
    extendedData.phaseSelection = phaseSelection;
    HavokPhysics_CollisionQueryResult::Reset(v16, 1);
    result = s_PhysicsQuery_LegacyQueryResults[v14];
    ShapecastHitBodyId = HavokPhysics_CollisionQueryResult::GetShapecastHitBodyId(s_PhysicsQuery_LegacyTraceResults[v14], 0);
    __asm { vmovss  [rsp+98h+var_70], xmm6 }
    Physics_GetClosestPoints(worldId, ShapecastHitBodyId, shape, end, quat, v21, &extendedData, result);
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(s_PhysicsQuery_LegacyQueryResults[v14]);
    __asm { vmovaps xmm6, [rsp+98h+var_28] }
    if ( HasHit )
      results->allsolid = 1;
  }
}

/*
==============
PhysicsQuery_LegacyTraceReleaseShapes
==============
*/
void PhysicsQuery_LegacyTraceReleaseShapes(Physics_WorldId worldId, bool baseShapeNeedsRelease, hknpShape **shape, hknpShape **paddedShape)
{
  unsigned int ThreadId; 
  bool IsShapeCacheDisabled; 
  bool v10; 

  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2812, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  if ( !paddedShape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2813, ASSERT_TYPE_ASSERT, "(paddedShape)", (const char *)&queryFormat, "paddedShape") )
    __debugbreak();
  ThreadId = Physics_GetThreadId();
  IsShapeCacheDisabled = Physics_IsShapeCacheDisabled(ThreadId);
  v10 = IsShapeCacheDisabled;
  if ( *paddedShape )
  {
    Physics_ReleaseShape(worldId, *paddedShape, IsShapeCacheDisabled);
    *paddedShape = NULL;
  }
  if ( *shape )
  {
    if ( baseShapeNeedsRelease )
    {
      Physics_ReleaseShape(worldId, *shape, v10);
      *shape = NULL;
    }
  }
}

/*
==============
PhysicsQuery_LegacyTraceRotated
==============
*/
void PhysicsQuery_LegacyTraceRotated(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const vec3_t *angles, const Bounds *bounds, int skipEntity, int skipChildren, int contentMask, int locational, unsigned __int8 *priorityMap, Physics_QueryPhaseSelection phaseSelection)
{
  PhysicsQuery_LegacyTraceSkipEntitiesRotated(worldId, results, start, end, angles, bounds, &skipEntity, 1, skipChildren, contentMask, locational, priorityMap, phaseSelection, 0);
}

/*
==============
PhysicsQuery_LegacyTraceRotated
==============
*/
void PhysicsQuery_LegacyTraceRotated(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const vec3_t *angles, const Bounds *bounds, int skipEntity, int skipChildren, int contentMask, int locational, unsigned __int8 *priorityMap, Physics_QueryPhaseSelection phaseSelection, int ignoreRefs)
{
  PhysicsQuery_LegacyTraceSkipEntitiesRotated(worldId, results, start, end, angles, bounds, &skipEntity, 1, skipChildren, contentMask, locational, priorityMap, phaseSelection, ignoreRefs);
}

/*
==============
PhysicsQuery_LegacyTraceRoundCorners
==============
*/
float PhysicsQuery_LegacyTraceRoundCorners(Physics_WorldId worldId, const vec3_t *wallPos, const vec3_t *wallNorm, const vec3_t *end)
{
  __int64 v15; 
  hkMonitorStream *Value; 
  hkMonitorStream *v17; 
  Physics_RaycastExtendedData extendedData; 
  __int64 v34; 
  hkMonitorStream *v35; 
  char v36; 
  void *retaddr; 

  _RAX = &retaddr;
  v34 = -2i64;
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
  }
  _R15 = wallNorm;
  v15 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v17 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyTraceRoundCorners");
  v35 = v17;
  extendedData.contents = -1;
  extendedData.ignoreBodies = NULL;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vmovss  [rsp+1A0h+extendedData.collisionBuffer], xmm7
  }
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4895, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  Physics_GetThreadId();
  if ( (unsigned int)v15 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4898, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4899, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [r15+8]
    vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vcomiss xmm0, cs:__real@3f7fbe77
  }
  if ( v17 )
    hkMonitorStream::timerEnd(v17, "Et");
  __asm { vmovaps xmm0, xmm7 }
  _R11 = &v36;
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
  }
  return *(float *)&_XMM0;
}

/*
==============
PhysicsQuery_LegacyTraceSkipEntities
==============
*/
void PhysicsQuery_LegacyTraceSkipEntities(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, const int *skipEntities, int skipEntityCount, int skipChildren, int contentMask, int locational, unsigned __int8 *priorityMap, Physics_QueryPhaseSelection phaseSelection)
{
  PhysicsQuery_LegacyTraceSkipEntities_Internal(worldId, results, start, end, bounds, skipEntities, skipEntityCount, skipChildren, contentMask, locational, priorityMap, phaseSelection, 0, 0);
}

/*
==============
PhysicsQuery_LegacyTraceSkipEntities
==============
*/
void PhysicsQuery_LegacyTraceSkipEntities(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, const int *skipEntities, int skipEntityCount, int skipChildren, int contentMask, int locational, unsigned __int8 *priorityMap, Physics_QueryPhaseSelection phaseSelection, int ignoreRefs)
{
  PhysicsQuery_LegacyTraceSkipEntities_Internal(worldId, results, start, end, bounds, skipEntities, skipEntityCount, skipChildren, contentMask, locational, priorityMap, phaseSelection, ignoreRefs, 0);
}

/*
==============
PhysicsQuery_LegacyTraceSkipEntitiesRotated
==============
*/
void PhysicsQuery_LegacyTraceSkipEntitiesRotated(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const vec3_t *angles, const Bounds *bounds, const int *skipEntities, int skipEntityCount, int skipChildren, int contentMask, int locational, unsigned __int8 *priorityMap, Physics_QueryPhaseSelection phaseSelection)
{
  PhysicsQuery_LegacyTraceSkipEntitiesRotated(worldId, results, start, end, angles, bounds, skipEntities, skipEntityCount, skipChildren, contentMask, locational, priorityMap, phaseSelection, 0);
}

/*
==============
PhysicsQuery_LegacyTraceSkipEntitiesRotated
==============
*/
void PhysicsQuery_LegacyTraceSkipEntitiesRotated(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const vec3_t *angles, const Bounds *bounds, const int *skipEntities, int skipEntityCount, int skipChildren, int contentMask, int locational, unsigned __int8 *priorityMap, Physics_QueryPhaseSelection phaseSelection, int ignoreRefs)
{
  __int64 v21; 
  void *v22; 
  hknpShape *Value; 
  hknpShape *v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  HavokPhysics_IgnoreBodies *v28; 
  int v29; 
  char v33; 
  char v35; 
  bool v36; 
  const vec3_t *v40; 
  hknpShape *v41; 
  hknpShape *v44; 
  const vec3_t *v45; 
  unsigned int ThreadId; 
  bool IsShapeCacheDisabled; 
  int v49; 
  int v51; 
  hknpShape *v52; 
  int v53; 
  int v54; 
  int NumHits; 
  int v57; 
  HavokPhysics_CollisionQueryResult *v58; 
  int ClosestPointHitRef; 
  int RaycastHitRef; 
  const Physics_DetailHitData *DetailHitData; 
  unsigned int RaycastHitBodyId; 
  float fmt; 
  hknpShape *nonBrushShape; 
  int legacyEntryId; 
  trace_t *trace; 
  Physics_QueryPointExtendedData v72; 
  vec3_t *enda; 
  hknpShape *paddedShape; 
  hknpShape *shape; 
  Physics_ShapecastExtendedData extendedData; 
  Bounds *v77; 
  const int *v78; 
  const vec3_t *v79; 
  vec3_t *v80; 
  __int64 v81; 
  hknpShape *v82; 
  vec4_t quat; 
  char v84; 
  void *retaddr; 

  _RAX = &retaddr;
  v81 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
    vmovaps xmmword ptr [rax-78h], xmm8
  }
  _RSI = end;
  enda = (vec3_t *)end;
  _R12 = start;
  v79 = start;
  trace = results;
  v21 = worldId;
  LODWORD(shape) = worldId;
  v80 = (vec3_t *)angles;
  v77 = (Bounds *)bounds;
  v78 = skipEntities;
  v22 = priorityMap;
  nonBrushShape = (hknpShape *)priorityMap;
  Value = (hknpShape *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v24 = Value;
  paddedShape = Value;
  if ( Value )
    hkMonitorStream::timerBegin((hkMonitorStream *)Value, "TtLegacyQuery: PhysicsQuery_LegacyTrace");
  v82 = v24;
  if ( (unsigned int)v21 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3217, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v21] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3218, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3219, ASSERT_TYPE_ASSERT, "(results)", (const char *)&queryFormat, "results") )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3220, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  if ( !skipEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3221, ASSERT_TYPE_ASSERT, "(skipEntities)", (const char *)&queryFormat, "skipEntities") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3223, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  legacyEntryId = 28 * v21 + Physics_GetThreadId();
  v25 = legacyEntryId;
  HavokPhysics_IgnoreBodies::Reset(s_PhysicsQuery_LegacyIgnoreBodies[legacyEntryId]);
  HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyQueryResults[legacyEntryId], 1);
  HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyTraceResults[legacyEntryId], 1);
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(s_PhysicsQuery_LegacyIgnoreBodies[legacyEntryId], ignoreRefs);
  v26 = skipEntityCount;
  v27 = 0i64;
  if ( skipEntityCount > 0 )
  {
    do
    {
      v28 = s_PhysicsQuery_LegacyIgnoreBodies[legacyEntryId];
      v29 = v78[v27];
      if ( !v28 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 727, ASSERT_TYPE_ASSERT, "(ignoreBodies)", (const char *)&queryFormat, "ignoreBodies") )
          __debugbreak();
        v26 = skipEntityCount;
      }
      if ( v29 >= 0 )
      {
        HavokPhysics_IgnoreBodies::AddIgnoreEntity(v28, v29, 1, skipChildren == 1, 0, 1, 0);
        v26 = skipEntityCount;
      }
      ++v27;
    }
    while ( v27 < v26 );
    v24 = paddedShape;
    _R12 = v79;
    LODWORD(v21) = (_DWORD)shape;
    _RSI = enda;
    v22 = nonBrushShape;
  }
  _RAX = v77;
  __asm
  {
    vmovss  xmm8, dword ptr [rax+0Ch]
    vmovss  xmm6, dword ptr [rax+14h]
  }
  AnglesToQuat(v80, &quat);
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm6, xmm7
  }
  if ( v33 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vucomiss xmm0, dword ptr [r12]
    }
    if ( !v33 )
      goto LABEL_55;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+4]
      vucomiss xmm0, dword ptr [r12+4]
    }
    if ( !v33 )
      goto LABEL_55;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+8]
      vucomiss xmm0, dword ptr [r12+8]
    }
    if ( v33 )
    {
      v72.simplify = 0;
      __asm { vmovss  [rbp+0A0h+var_130.collisionBuffer], xmm7 }
      if ( locational && v22 )
      {
        v49 = contentMask & 0xFDFFBFFF;
        v72.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
      }
      else
      {
        v49 = contentMask;
        v72.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
      }
      v72.contents = v49;
      v72.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[legacyEntryId];
      v72.phaseSelection = phaseSelection;
      __asm { vxorps  xmm2, xmm2, xmm2; maxDistance }
      Physics_QueryPoint((Physics_WorldId)v21, _R12, *(float *)&_XMM2, &v72, s_PhysicsQuery_LegacyQueryResults[legacyEntryId]);
      Physics_ConvertClosestPointsToLegacyTrace(s_PhysicsQuery_LegacyQueryResults[legacyEntryId], trace);
    }
    else
    {
LABEL_55:
      v51 = locational;
      v52 = nonBrushShape;
      if ( locational && nonBrushShape )
      {
        Physics_AddDetailTrace(s_PhysicsQuery_LegacyTraceResults[legacyEntryId], (unsigned __int8 *)nonBrushShape);
        v52 = nonBrushShape;
      }
      __asm { vmovss  dword ptr [rbp+0A0h+extendedData+14h], xmm7 }
      *((_DWORD *)&extendedData.collisionBuffer + 1) = 1;
      LOWORD(extendedData.nonBrushShape) = 256;
      v53 = contentMask;
      extendedData.contents = contentMask;
      *(_QWORD *)&extendedData.accuracy = s_PhysicsQuery_LegacyIgnoreBodies[legacyEntryId];
      if ( !locational || (LODWORD(extendedData.ignoreBodies) = 0, !v52) )
        LODWORD(extendedData.ignoreBodies) = 1;
      LODWORD(extendedData.collisionBuffer) = phaseSelection;
      Physics_Raycast((Physics_WorldId)v21, _R12, _RSI, (Physics_RaycastExtendedData *)&extendedData, s_PhysicsQuery_LegacyTraceResults[legacyEntryId]);
      if ( locational && nonBrushShape )
      {
        v72.simplify = 0;
        __asm { vmovss  [rbp+0A0h+var_130.collisionBuffer], xmm7 }
        v72.contents = contentMask & 0x2004000;
        v72.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[legacyEntryId];
        v54 = 0;
        v72.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
        v72.phaseSelection = phaseSelection;
        HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyQueryAllResults[legacyEntryId], 1);
        __asm { vxorps  xmm2, xmm2, xmm2; maxDistance }
        Physics_QueryPoint((Physics_WorldId)v21, _R12, *(float *)&_XMM2, &v72, s_PhysicsQuery_LegacyQueryAllResults[legacyEntryId]);
        NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(s_PhysicsQuery_LegacyQueryAllResults[legacyEntryId]);
        if ( NumHits > 0 )
        {
          v57 = NumHits;
          do
          {
            if ( !HavokPhysics_CollisionQueryResult::HasHit(s_PhysicsQuery_LegacyTraceResults[legacyEntryId]) || (v58 = s_PhysicsQuery_LegacyTraceResults[legacyEntryId], ClosestPointHitRef = HavokPhysics_CollisionQueryResult::GetClosestPointHitRef(s_PhysicsQuery_LegacyQueryAllResults[legacyEntryId], v54), RaycastHitRef = HavokPhysics_CollisionQueryResult::GetRaycastHitRef(v58, 0), _RSI = enda, RaycastHitRef != ClosestPointHitRef) )
              HavokPhysics_CollisionQueryResult::AddQueryPointHitAsRaycastHit(s_PhysicsQuery_LegacyTraceResults[legacyEntryId], (Physics_WorldId)v21, s_PhysicsQuery_LegacyQueryAllResults[legacyEntryId], v54, _R12, _RSI, (Physics_RaycastExtendedData *)&extendedData);
            ++v54;
          }
          while ( v54 < v57 );
          v24 = paddedShape;
          v53 = contentMask;
        }
        v51 = locational;
      }
      if ( HavokPhysics_CollisionQueryResult::HasHit(s_PhysicsQuery_LegacyTraceResults[legacyEntryId]) )
      {
        *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(s_PhysicsQuery_LegacyTraceResults[legacyEntryId], 0);
        DetailHitData = NULL;
        __asm { vcomiss xmm0, xmm7 }
        v72.simplify = 0;
        v72.ignoreBodies = NULL;
        __asm { vmovss  [rbp+0A0h+var_130.collisionBuffer], xmm7 }
        if ( v51 && nonBrushShape )
        {
          v53 &= 0xFDFFBFFF;
          v72.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
        }
        else
        {
          v72.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
        }
        v72.contents = v53;
        v72.phaseSelection = phaseSelection;
        RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(s_PhysicsQuery_LegacyTraceResults[legacyEntryId], 0);
        if ( (RaycastHitBodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3383, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( hitBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( hitBodyId )") )
          __debugbreak();
        __asm { vmovaps xmm3, xmm7; maxDistance }
        Physics_QueryPoint((Physics_WorldId)v21, RaycastHitBodyId, _R12, *(float *)&_XMM3, &v72, s_PhysicsQuery_LegacyQueryResults[legacyEntryId]);
      }
      else
      {
        DetailHitData = NULL;
      }
      if ( v51 && nonBrushShape )
        DetailHitData = Physics_GetDetailHitData(s_PhysicsQuery_LegacyTraceResults[legacyEntryId], 0, 0);
      Physics_ConvertRayQueryResultToLegacyTrace(s_PhysicsQuery_LegacyTraceResults[legacyEntryId], s_PhysicsQuery_LegacyQueryResults[legacyEntryId], DetailHitData, trace);
    }
  }
  else
  {
    __asm { vucomiss xmm8, xmm7 }
    v36 = PhysicsQuery_LegacyTraceCreateShape((Physics_WorldId)v21, NULL, v77, 0, s_PhysicsQuery_LegacyTraceShapeBuffers[legacyEntryId], 0, &shape, &nonBrushShape, &paddedShape, NULL);
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vucomiss xmm0, dword ptr [r12]
    }
    if ( !v35 )
      goto LABEL_38;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+4]
      vucomiss xmm0, dword ptr [r12+4]
    }
    if ( !v35 )
      goto LABEL_38;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+8]
      vucomiss xmm0, dword ptr [r12+8]
    }
    if ( v35 )
    {
      LOBYTE(extendedData.startTolerance) = 0;
      __asm { vmovss  [rbp+0A0h+extendedData.collisionBuffer], xmm7 }
      if ( locational && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3257, ASSERT_TYPE_ASSERT, "(locational == qfalse)", "%s\n\tCan't do locational shape traces - only locational ray-traces", "locational == qfalse") )
        __debugbreak();
      extendedData.contents = contentMask;
      *(_QWORD *)&extendedData.accuracy = s_PhysicsQuery_LegacyIgnoreBodies[v25];
      *(_QWORD *)&extendedData.collisionBuffer = nonBrushShape;
      LODWORD(extendedData.nonBrushShape) = phaseSelection;
      __asm { vmovss  dword ptr [rsp+1A0h+fmt], xmm7 }
      v40 = _R12;
      v41 = shape;
      Physics_GetClosestPoints((Physics_WorldId)v21, shape, v40, &quat, fmt, (Physics_GetClosestPointsExtendedData *)&extendedData, s_PhysicsQuery_LegacyQueryResults[v25]);
      Physics_ConvertClosestPointsToLegacyTrace(s_PhysicsQuery_LegacyQueryResults[v25], trace);
    }
    else
    {
LABEL_38:
      __asm
      {
        vmovss  dword ptr [rbp+0A0h+extendedData.simplify], xmm7
        vmovss  xmm0, cs:__real@3c83126f
        vmovss  dword ptr [rbp+0A0h+extendedData.ignoreBodies], xmm0
      }
      extendedData.simplifyStart = 0;
      extendedData.permitOutwardTrace = 0;
      if ( locational && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3274, ASSERT_TYPE_ASSERT, "(locational == qfalse)", "%s\n\tCan't do locational shape traces - only locational ray-traces", "locational == qfalse") )
        __debugbreak();
      extendedData.contents = contentMask;
      extendedData.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v25];
      __asm
      {
        vmovss  xmm0, cs:__real@3e000000
        vmovss  dword ptr [rbp+0A0h+extendedData.nonBrushShape], xmm0
      }
      v44 = nonBrushShape;
      extendedData.nonBrushShape = nonBrushShape;
      extendedData.secondPassShape = paddedShape;
      extendedData.phaseSelection = phaseSelection;
      v45 = _R12;
      v41 = shape;
      Physics_Shapecast((Physics_WorldId)v21, shape, v45, enda, &quat, &extendedData, s_PhysicsQuery_LegacyTraceResults[v25], s_PhysicsQuery_LegacyQueryResults[v25]);
      Physics_ConvertShapeQueryResultToLegacyTrace(s_PhysicsQuery_LegacyTraceResults[v25], s_PhysicsQuery_LegacyQueryResults[v25], trace);
      PhysicsQuery_LegacyTraceProcessAllSolid((Physics_WorldId)v21, trace, &quat, legacyEntryId, contentMask, v44, phaseSelection, v41, enda);
    }
    ThreadId = Physics_GetThreadId();
    IsShapeCacheDisabled = Physics_IsShapeCacheDisabled(ThreadId);
    if ( paddedShape )
      Physics_ReleaseShape((Physics_WorldId)v21, paddedShape, IsShapeCacheDisabled);
    if ( v41 && v36 )
      Physics_ReleaseShape((Physics_WorldId)v21, v41, IsShapeCacheDisabled);
  }
  if ( v24 )
    hkMonitorStream::timerEnd((hkMonitorStream *)v24, "Et");
  _R11 = &v84;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
  }
}

/*
==============
PhysicsQuery_LegacyTraceSkipEntities_Internal
==============
*/
void PhysicsQuery_LegacyTraceSkipEntities_Internal(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, const int *skipEntities, int skipEntityCount, int skipChildren, int contentMask, int locational, unsigned __int8 *priorityMap, Physics_QueryPhaseSelection phaseSelection, int ignoreRefs, const bool detectInsideRaycasts)
{
  trace_t *v19; 
  __int64 v20; 
  hkMonitorStream *Value; 
  hkMonitorStream *v22; 
  hknpShape *v23; 
  __int64 v24; 
  hknpShape *v25; 
  bool v26; 
  __int64 v27; 
  const int *v28; 
  HavokPhysics_IgnoreBodies *v29; 
  int v30; 
  char v35; 
  bool v36; 
  const vec3_t *v40; 
  hknpShape *v41; 
  int v43; 
  hknpShape *v45; 
  Physics_QueryPhaseSelection v46; 
  const vec3_t *v47; 
  unsigned int ThreadId; 
  bool IsShapeCacheDisabled; 
  int v51; 
  unsigned __int8 *v53; 
  int v54; 
  int v55; 
  int v56; 
  int NumHits; 
  int v59; 
  HavokPhysics_CollisionQueryResult *v60; 
  int ClosestPointHitRef; 
  int RaycastHitRef; 
  char v63; 
  unsigned int RaycastHitBodyId; 
  float fmt; 
  hknpShape *shape; 
  Physics_QueryPointExtendedData v69; 
  Physics_ShapecastExtendedData extendedData; 
  hkMonitorStream *v71; 
  Physics_DetailHitData *detailHitData; 
  __int64 v73; 
  _QWORD v74[11]; 
  void *retaddr; 
  bool v77; 

  _RAX = &retaddr;
  v73 = -2i64;
  __asm { vmovaps xmmword ptr [rax-58h], xmm6 }
  _RSI = end;
  _R13 = start;
  v19 = results;
  v20 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v22 = Value;
  v71 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyTrace");
  v74[0] = v22;
  if ( (unsigned int)v20 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2989, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v20] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2990, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2991, ASSERT_TYPE_ASSERT, "(results)", (const char *)&queryFormat, "results") )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2992, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  v23 = (hknpShape *)skipEntityCount;
  if ( !skipEntities && skipEntityCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2993, ASSERT_TYPE_ASSERT, "(skipEntities || skipEntityCount == 0)", (const char *)&queryFormat, "skipEntities || skipEntityCount == 0") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2995, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  skipEntityCount = 28 * v20 + Physics_GetThreadId();
  v24 = skipEntityCount;
  HavokPhysics_IgnoreBodies::Reset(s_PhysicsQuery_LegacyIgnoreBodies[skipEntityCount]);
  HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyQueryResults[v24], 1);
  HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyTraceResults[v24], 1);
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(s_PhysicsQuery_LegacyIgnoreBodies[v24], ignoreRefs);
  v25 = v23;
  shape = v23;
  detailHitData = NULL;
  v26 = (_DWORD)v23 == 0;
  if ( (int)v23 > 0 )
  {
    v27 = 0i64;
    v28 = skipEntities;
    do
    {
      v29 = s_PhysicsQuery_LegacyIgnoreBodies[v24];
      v30 = v28[v27];
      if ( !v29 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 727, ASSERT_TYPE_ASSERT, "(ignoreBodies)", (const char *)&queryFormat, "ignoreBodies") )
          __debugbreak();
        v25 = shape;
      }
      if ( v30 >= 0 )
      {
        HavokPhysics_IgnoreBodies::AddIgnoreEntity(v29, v30, 1, skipChildren == 1, 0, 1, 0);
        v25 = shape;
      }
      ++v27;
    }
    while ( v27 < (__int64)v25 );
    v22 = v71;
    LODWORD(v20) = worldId;
    _R13 = start;
    _RSI = end;
    v26 = 1;
    v19 = results;
  }
  _RDX = bounds;
  __asm
  {
    vmovss  xmm1, dword ptr [rdx+0Ch]
    vmovss  xmm0, dword ptr [rdx+14h]
    vxorps  xmm6, xmm6, xmm6
    vucomiss xmm0, xmm6
  }
  if ( v26 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vucomiss xmm0, dword ptr [r13+0]
    }
    if ( !v26 )
      goto LABEL_58;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+4]
      vucomiss xmm0, dword ptr [r13+4]
    }
    if ( !v26 )
      goto LABEL_58;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+8]
      vucomiss xmm0, dword ptr [r13+8]
    }
    if ( v26 )
    {
      v69.simplify = 0;
      __asm { vmovss  [rbp+3Fh+var_C8.collisionBuffer], xmm6 }
      if ( locational && priorityMap )
      {
        v51 = contentMask & 0xFDFFBFFF;
        v69.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
      }
      else
      {
        v51 = contentMask;
        v69.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
      }
      v69.contents = v51;
      v69.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v24];
      v69.phaseSelection = phaseSelection;
      __asm { vxorps  xmm2, xmm2, xmm2; maxDistance }
      Physics_QueryPoint((Physics_WorldId)v20, _R13, *(float *)&_XMM2, &v69, s_PhysicsQuery_LegacyQueryResults[v24]);
      Physics_ConvertClosestPointsToLegacyTrace(s_PhysicsQuery_LegacyQueryResults[v24], v19);
    }
    else
    {
LABEL_58:
      v53 = priorityMap;
      if ( locational && priorityMap )
        Physics_AddDetailTrace(s_PhysicsQuery_LegacyTraceResults[v24], priorityMap);
      __asm { vmovss  dword ptr [rbp+3Fh+extendedData+14h], xmm6 }
      LOWORD(extendedData.nonBrushShape) = 256;
      v54 = contentMask;
      extendedData.contents = contentMask;
      *(_QWORD *)&extendedData.accuracy = s_PhysicsQuery_LegacyIgnoreBodies[v24];
      if ( !locational || (LODWORD(extendedData.ignoreBodies) = 0, !v53) )
        LODWORD(extendedData.ignoreBodies) = 1;
      LODWORD(extendedData.collisionBuffer) = phaseSelection;
      v55 = 1;
      if ( detectInsideRaycasts )
        v55 = 2;
      *((_DWORD *)&extendedData.collisionBuffer + 1) = v55;
      Physics_Raycast((Physics_WorldId)v20, _R13, _RSI, (Physics_RaycastExtendedData *)&extendedData, s_PhysicsQuery_LegacyTraceResults[v24]);
      if ( locational && v53 )
      {
        v69.simplify = 0;
        __asm { vmovss  [rbp+3Fh+var_C8.collisionBuffer], xmm6 }
        v69.contents = v54 & 0x2004000;
        v69.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v24];
        v56 = 0;
        v69.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
        v69.phaseSelection = phaseSelection;
        HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyQueryAllResults[v24], 1);
        __asm { vxorps  xmm2, xmm2, xmm2; maxDistance }
        Physics_QueryPoint((Physics_WorldId)v20, _R13, *(float *)&_XMM2, &v69, s_PhysicsQuery_LegacyQueryAllResults[v24]);
        NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(s_PhysicsQuery_LegacyQueryAllResults[v24]);
        if ( NumHits > 0 )
        {
          v59 = NumHits;
          do
          {
            if ( !HavokPhysics_CollisionQueryResult::HasHit(s_PhysicsQuery_LegacyTraceResults[v24]) || (v60 = s_PhysicsQuery_LegacyTraceResults[v24], ClosestPointHitRef = HavokPhysics_CollisionQueryResult::GetClosestPointHitRef(s_PhysicsQuery_LegacyQueryAllResults[v24], v56), RaycastHitRef = HavokPhysics_CollisionQueryResult::GetRaycastHitRef(v60, 0), _RSI = end, RaycastHitRef != ClosestPointHitRef) )
              HavokPhysics_CollisionQueryResult::AddQueryPointHitAsRaycastHit(s_PhysicsQuery_LegacyTraceResults[v24], (Physics_WorldId)v20, s_PhysicsQuery_LegacyQueryAllResults[v24], v56, _R13, _RSI, (Physics_RaycastExtendedData *)&extendedData);
            ++v56;
          }
          while ( v56 < v59 );
          v22 = v71;
          v53 = priorityMap;
        }
        v54 = contentMask;
      }
      if ( HavokPhysics_CollisionQueryResult::HasHit(s_PhysicsQuery_LegacyTraceResults[v24]) )
      {
        *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(s_PhysicsQuery_LegacyTraceResults[v24], 0);
        __asm { vcomiss xmm0, xmm6 }
        if ( v63 | v26 )
        {
          v69.simplify = 0;
          v69.ignoreBodies = NULL;
          __asm { vmovss  [rbp+3Fh+var_C8.collisionBuffer], xmm6 }
          if ( locational && v53 )
          {
            v54 &= 0xFDFFBFFF;
            v69.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
          }
          else
          {
            v69.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
          }
          v69.contents = v54;
          v69.phaseSelection = phaseSelection;
          RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(s_PhysicsQuery_LegacyTraceResults[v24], 0);
          if ( (RaycastHitBodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3156, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( hitBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( hitBodyId )") )
            __debugbreak();
          __asm { vmovaps xmm3, xmm6; maxDistance }
          Physics_QueryPoint((Physics_WorldId)v20, RaycastHitBodyId, _R13, *(float *)&_XMM3, &v69, s_PhysicsQuery_LegacyQueryResults[v24]);
        }
      }
      if ( locational && v53 )
        detailHitData = (Physics_DetailHitData *)Physics_GetDetailHitData(s_PhysicsQuery_LegacyTraceResults[v24], 0, 0);
      Physics_ConvertRayQueryResultToLegacyTrace(s_PhysicsQuery_LegacyTraceResults[v24], s_PhysicsQuery_LegacyQueryResults[v24], detailHitData, results);
    }
  }
  else
  {
    __asm { vucomiss xmm1, xmm6 }
    v36 = PhysicsQuery_LegacyTraceCreateShape((Physics_WorldId)v20, NULL, bounds, 0, s_PhysicsQuery_LegacyTraceShapeBuffers[v24], 0, (hknpShape **)&bounds, (hknpShape **)&skipEntities, &shape, NULL);
    v77 = v36;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vucomiss xmm0, dword ptr [r13+0]
    }
    if ( !v35 )
      goto LABEL_41;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+4]
      vucomiss xmm0, dword ptr [r13+4]
    }
    if ( !v35 )
      goto LABEL_41;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+8]
      vucomiss xmm0, dword ptr [r13+8]
    }
    if ( v35 )
    {
      LOBYTE(extendedData.startTolerance) = 0;
      __asm { vmovss  [rbp+3Fh+extendedData.collisionBuffer], xmm6 }
      if ( locational && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3026, ASSERT_TYPE_ASSERT, "(locational == qfalse)", "%s\n\tCan't do locational shape traces - only locational ray-traces", "locational == qfalse") )
        __debugbreak();
      extendedData.contents = contentMask;
      *(_QWORD *)&extendedData.accuracy = s_PhysicsQuery_LegacyIgnoreBodies[v24];
      *(_QWORD *)&extendedData.collisionBuffer = skipEntities;
      LODWORD(extendedData.nonBrushShape) = phaseSelection;
      __asm { vmovss  dword ptr [rsp+120h+fmt], xmm6 }
      v40 = _R13;
      v41 = (hknpShape *)bounds;
      Physics_GetClosestPoints((Physics_WorldId)v20, (hknpShape *)bounds, v40, &quat_identity, fmt, (Physics_GetClosestPointsExtendedData *)&extendedData, s_PhysicsQuery_LegacyQueryResults[v24]);
      Physics_ConvertClosestPointsToLegacyTrace(s_PhysicsQuery_LegacyQueryResults[v24], results);
    }
    else
    {
LABEL_41:
      __asm
      {
        vmovss  dword ptr [rbp+3Fh+extendedData.simplify], xmm6
        vmovss  xmm0, cs:__real@3c83126f
        vmovss  dword ptr [rbp+3Fh+extendedData.ignoreBodies], xmm0
      }
      extendedData.simplifyStart = 0;
      extendedData.permitOutwardTrace = 0;
      if ( locational && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3043, ASSERT_TYPE_ASSERT, "(locational == qfalse)", "%s\n\tCan't do locational shape traces - only locational ray-traces", "locational == qfalse") )
        __debugbreak();
      v43 = contentMask;
      extendedData.contents = contentMask;
      extendedData.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v24];
      __asm
      {
        vmovss  xmm0, cs:__real@3e000000
        vmovss  dword ptr [rbp+3Fh+extendedData.nonBrushShape], xmm0
      }
      v45 = (hknpShape *)skipEntities;
      extendedData.nonBrushShape = (hknpShape *)skipEntities;
      extendedData.secondPassShape = shape;
      v46 = phaseSelection;
      extendedData.phaseSelection = phaseSelection;
      v47 = _R13;
      v41 = (hknpShape *)bounds;
      Physics_Shapecast((Physics_WorldId)v20, (hknpShape *)bounds, v47, end, &quat_identity, &extendedData, s_PhysicsQuery_LegacyTraceResults[v24], s_PhysicsQuery_LegacyQueryResults[v24]);
      Physics_ConvertShapeQueryResultToLegacyTrace(s_PhysicsQuery_LegacyTraceResults[v24], s_PhysicsQuery_LegacyQueryResults[v24], results);
      PhysicsQuery_LegacyTraceProcessAllSolid((Physics_WorldId)v20, results, &quat_identity, skipEntityCount, v43, v45, v46, v41, end);
      v36 = v77;
    }
    ThreadId = Physics_GetThreadId();
    IsShapeCacheDisabled = Physics_IsShapeCacheDisabled(ThreadId);
    if ( shape )
      Physics_ReleaseShape((Physics_WorldId)v20, shape, IsShapeCacheDisabled);
    if ( v41 && v36 )
      Physics_ReleaseShape((Physics_WorldId)v20, v41, IsShapeCacheDisabled);
  }
  if ( v22 )
    hkMonitorStream::timerEnd(v22, "Et");
  __asm { vmovaps xmm6, xmmword ptr [rsp+120h+var_58+8] }
}

/*
==============
PhysicsQuery_LegacyVehicleCapsuleTrace
==============
*/
void PhysicsQuery_LegacyVehicleCapsuleTrace(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int *skipEntities, int numSkipEntities, int contentMask, const playerState_s *ps, bool allowCheapPointQueries, PhysicsQuery_ContextSettings *traceContext)
{
  PhysicsQuery_LegacyCapsuleTrace_Internal(worldId, results, start, end, bounds, skipEntities, numSkipEntities, NULL, 0, contentMask, ps, allowCheapPointQueries, 1, NULL, NULL, traceContext);
}

/*
==============
PhysicsQuery_LegacyWorldOnlySightTrace
==============
*/
_BOOL8 PhysicsQuery_LegacyWorldOnlySightTrace(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int contentMask)
{
  __int64 v12; 
  hkMonitorStream *Value; 
  hkMonitorStream *v14; 
  int v15; 
  __int64 v18; 
  HavokPhysics_CollisionQueryResult *v19; 
  char v21; 
  hknpShape *ShapeCapsuleUpAxis; 
  BOOL HasHit; 
  _BOOL8 result; 
  Physics_ShapecastExtendedData extendedData; 
  char v33; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  _R15 = bounds;
  v12 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v14 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyWorldOnlySightTrace");
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4603, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v15 = Physics_GetThreadId() + 28 * v12;
  if ( (unsigned int)v12 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4606, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4607, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4608, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, dword ptr [r15+0Ch]
    vmovss  xmm7, dword ptr [r15+14h]
  }
  v18 = v15;
  v19 = s_PhysicsQuery_LegacyQueryAnyResults[v15];
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4620, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v19, 1);
  HavokPhysics_IgnoreBodies::Reset(s_PhysicsQuery_LegacyIgnoreBodies[v18]);
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(s_PhysicsQuery_LegacyIgnoreBodies[v18], -2);
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm7, xmm1
  }
  if ( v21 )
  {
    LODWORD(extendedData.ignoreBodies) = 1;
    __asm { vmovss  dword ptr [rsp+0C8h+extendedData.ignoreBodies+4], xmm1 }
    extendedData.collisionBuffer = 0.0;
    *((_DWORD *)&extendedData.collisionBuffer + 1) = 1;
    LOWORD(extendedData.nonBrushShape) = 256;
    extendedData.contents = contentMask;
    *(_QWORD *)&extendedData.accuracy = s_PhysicsQuery_LegacyIgnoreBodies[v18];
    Physics_Raycast((Physics_WorldId)v12, start, end, (Physics_RaycastExtendedData *)&extendedData, v19);
  }
  else
  {
    __asm
    {
      vucomiss xmm6, xmm1
      vmovss  [rsp+0C8h+extendedData.startTolerance], xmm1
      vmovss  xmm0, cs:__real@3c83126f
      vmovss  [rsp+0C8h+extendedData.accuracy], xmm0
    }
    extendedData.simplifyStart = 0;
    __asm
    {
      vmovss  [rsp+0C8h+extendedData.collisionBuffer], xmm1
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr [rsp+0C8h+extendedData.nonBrushShape], xmm0
    }
    extendedData.phaseSelection = All;
    extendedData.permitOutwardTrace = 0;
    extendedData.contents = contentMask;
    extendedData.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v18];
    __asm
    {
      vsubss  xmm2, xmm7, xmm6; halfHeight
      vmovaps xmm3, xmm6; radius
    }
    ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis((Physics_WorldId)v12, &_R15->midPoint, *(float *)&_XMM2, *(float *)&_XMM3, s_PhysicsQuery_LegacyTraceShapeBuffers[v18], 432, Temporary);
    if ( !ShapeCapsuleUpAxis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4640, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
      __debugbreak();
    Physics_Shapecast((Physics_WorldId)v12, ShapeCapsuleUpAxis, start, end, &quat_identity, &extendedData, v19, NULL);
  }
  HasHit = HavokPhysics_CollisionQueryResult::HasHit(v19);
  if ( v14 )
    hkMonitorStream::timerEnd(v14, "Et");
  result = HasHit;
  _R11 = &v33;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  return result;
}

/*
==============
PhysicsQuery_MoverUpAnglesToQuat
==============
*/
char PhysicsQuery_MoverUpAnglesToQuat(const playerState_s *ps, vec4_t *outQuat)
{
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2834, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !BGMovingPlatformPS::IsNewRockingMoverCollisionEnabled() )
    return 0;
  AnglesToQuat(&ps->movingPlatforms.m_moverUpAngles, outQuat);
  return 1;
}

/*
==============
PhysicsQuery_ResetAABBQueryHit
==============
*/
void PhysicsQuery_ResetAABBQueryHit(PhysicsQuery_AABBQueryHit *hit)
{
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 257, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  hit->isValid = 0;
  *(_QWORD *)&hit->surfaceFlags = 0i64;
  hit->material = 0;
  hit->ref = 0;
}

/*
==============
PhysicsQuery_ResetGetClosestPointsHit
==============
*/
void PhysicsQuery_ResetGetClosestPointsHit(PhysicsQuery_GetClosestPointsHit *hit)
{
  hit->isValid = 0;
  *(_OWORD *)hit->hitPosition.v = 0ui64;
  *(_QWORD *)&hit->queryPosition.y = 0i64;
  *(_OWORD *)hit->separatingNormal.v = 0ui64;
  *(_QWORD *)&hit->surfaceFlags = 0i64;
  hit->material = 0;
  hit->ref = 0;
}

/*
==============
PhysicsQuery_ResetQueryPointHit
==============
*/
void PhysicsQuery_ResetQueryPointHit(PhysicsQuery_QueryPointHit *hit)
{
  hit->isValid = 0;
  *(_OWORD *)hit->hitPosition.v = 0ui64;
  *(_QWORD *)&hit->queryPosition.y = 0i64;
  *(_OWORD *)hit->separatingNormal.v = 0ui64;
  *(_QWORD *)&hit->surfaceFlags = 0i64;
  hit->material = 0;
  hit->ref = 0;
}

/*
==============
PhysicsQuery_ResetRaycastHit
==============
*/
void PhysicsQuery_ResetRaycastHit(PhysicsQuery_RaycastHit *hit)
{
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 270, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  hit->isValid = 0;
  *(_QWORD *)&hit->fraction = 1065353216i64;
  *(_QWORD *)&hit->position.y = 0i64;
  *(_QWORD *)hit->normal.v = 0i64;
  *(_QWORD *)&hit->normal.z = 0i64;
  hit->contents = 0;
  hit->material = 0;
  hit->ref = 0;
}

/*
==============
PhysicsQuery_ResetShapecastHit
==============
*/
void PhysicsQuery_ResetShapecastHit(PhysicsQuery_ShapecastHit *hit)
{
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 286, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  hit->isValid = 0;
  *(_QWORD *)&hit->fraction = 1065353216i64;
  *(_QWORD *)&hit->contactPosition.y = 0i64;
  *(_QWORD *)hit->shapePosition.v = 0i64;
  *(_QWORD *)&hit->shapePosition.z = 0i64;
  *(_QWORD *)&hit->hitContactNormal.y = 0i64;
  *(_QWORD *)hit->queryContactNormal.v = 0i64;
  *(_QWORD *)&hit->queryContactNormal.z = 0i64;
  hit->contents = 0;
  hit->material = 0;
  hit->ref = 0;
}

/*
==============
PhysicsQuery_Shutdown
==============
*/
void PhysicsQuery_Shutdown(void)
{
  ;
}

/*
==============
PhysicsQuery_ShutdownForWorld
==============
*/
void PhysicsQuery_ShutdownForWorld(__int64 worldId)
{
  unsigned __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  HavokPhysics_IgnoreBodies *v4; 
  hkMemoryRouter *Value; 

  v1 = (int)worldId;
  if ( !s_PhysicsQuery_WorldInitialized[(int)worldId] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 173, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]", -2i64) )
    __debugbreak();
  if ( v1 >= 8 )
  {
    j___report_rangecheckfailure(worldId);
    JUMPOUT(0x140F03D4Fi64);
  }
  s_PhysicsQuery_WorldInitialized[v1] = 0;
  v2 = 27i64;
  v3 = 28 * v1;
  do
  {
    if ( !s_PhysicsQuery_LegacyIgnoreBodies[v3 + 27] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 181, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_LegacyIgnoreBodies[entryId])", (const char *)&queryFormat, "s_PhysicsQuery_LegacyIgnoreBodies[entryId]") )
      __debugbreak();
    v4 = s_PhysicsQuery_LegacyIgnoreBodies[v3 + 27];
    if ( v4 )
    {
      HavokPhysics_IgnoreBodies::~HavokPhysics_IgnoreBodies(s_PhysicsQuery_LegacyIgnoreBodies[v3 + 27]);
      Value = (hkMemoryRouter *)TlsGetValue(hkMemoryRouter::s_memoryRouter.m_slotID);
      if ( !Value )
        Value = hkMemoryRouter::s_fallbackRouter;
      Value->m_heap->blockFree(Value->m_heap, v4, 56);
    }
    s_PhysicsQuery_LegacyIgnoreBodies[v3 + 27] = NULL;
    if ( !s_PhysicsQuery_LegacyTraceResults[v3 + 27] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 186, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_LegacyTraceResults[entryId])", (const char *)&queryFormat, "s_PhysicsQuery_LegacyTraceResults[entryId]") )
      __debugbreak();
    Physics_FreeCollisionQueryResult(s_PhysicsQuery_LegacyTraceResults[v3 + 27]);
    s_PhysicsQuery_LegacyTraceResults[v3 + 27] = NULL;
    if ( !s_PhysicsQuery_LegacyQueryAllResults[v3 + 27] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 189, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_LegacyQueryAllResults[entryId])", (const char *)&queryFormat, "s_PhysicsQuery_LegacyQueryAllResults[entryId]") )
      __debugbreak();
    Physics_FreeCollisionQueryResult(s_PhysicsQuery_LegacyQueryAllResults[v3 + 27]);
    s_PhysicsQuery_LegacyQueryAllResults[v3 + 27] = NULL;
    if ( !s_PhysicsQuery_LegacyQueryResults[v3 + 27] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 192, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_LegacyQueryResults[entryId])", (const char *)&queryFormat, "s_PhysicsQuery_LegacyQueryResults[entryId]") )
      __debugbreak();
    Physics_FreeCollisionQueryResult(s_PhysicsQuery_LegacyQueryResults[v3 + 27]);
    s_PhysicsQuery_LegacyQueryResults[v3 + 27] = NULL;
    if ( !s_PhysicsQuery_LegacyQueryAnyResults[v3 + 27] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 195, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_LegacyQueryAnyResults[entryId])", (const char *)&queryFormat, "s_PhysicsQuery_LegacyQueryAnyResults[entryId]") )
      __debugbreak();
    Physics_FreeCollisionQueryResult(s_PhysicsQuery_LegacyQueryAnyResults[v3 + 27]);
    s_PhysicsQuery_LegacyQueryAnyResults[v3 + 27] = NULL;
    if ( !s_PhysicsQuery_AllQueryResults[v3 + 27] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 199, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_AllQueryResults[entryId])", (const char *)&queryFormat, "s_PhysicsQuery_AllQueryResults[entryId]") )
      __debugbreak();
    Physics_FreeCollisionQueryResult(s_PhysicsQuery_AllQueryResults[v3 + 27]);
    s_PhysicsQuery_AllQueryResults[v3 + 27] = NULL;
    if ( !s_PhysicsQuery_ClosestQueryResults[v3 + 27] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 202, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_ClosestQueryResults[entryId])", (const char *)&queryFormat, "s_PhysicsQuery_ClosestQueryResults[entryId]") )
      __debugbreak();
    Physics_FreeCollisionQueryResult(s_PhysicsQuery_ClosestQueryResults[v3 + 27]);
    s_PhysicsQuery_ClosestQueryResults[v3 + 27] = NULL;
    if ( !s_PhysicsQuery_AnyQueryResults[v3 + 27] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 205, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_AnyQueryResults[entryId])", (const char *)&queryFormat, "s_PhysicsQuery_AnyQueryResults[entryId]") )
      __debugbreak();
    Physics_FreeCollisionQueryResult(s_PhysicsQuery_AnyQueryResults[v3 + 27]);
    s_PhysicsQuery_AnyQueryResults[v3 + 27] = NULL;
    if ( !s_PhysicsQuery_BroadphaseTraceResults[v3 + 27] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 209, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_BroadphaseTraceResults[entryId])", (const char *)&queryFormat, "s_PhysicsQuery_BroadphaseTraceResults[entryId]") )
      __debugbreak();
    Physics_FreeBroadphaseCollisionQueryResult(s_PhysicsQuery_BroadphaseTraceResults[v3 + 27]);
    s_PhysicsQuery_BroadphaseTraceResults[v3 + 27] = NULL;
    --v3;
    --v2;
  }
  while ( v2 >= 0 );
}

/*
==============
PhysicsQuery_TraceCmd
==============
*/

void __fastcall PhysicsQuery_TraceCmd(const void *const cmdData, __int64 a2, double _XMM2_8)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v6; 
  unsigned int v19; 
  bool v20; 
  bool v21; 
  int v27; 
  _QWORD v47[34]; 

  v47[33] = -2i64;
  _RBP = (unsigned __int64)v47 & 0xFFFFFFFFFFFFFF80ui64;
  _RDI = (char *)cmdData;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v6 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_TraceCmd");
  *(_QWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFF80ui64) + 8) = v6;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5151, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER )") )
    __debugbreak();
  memset_0((void *)(_RBP + 132), 0, 0x58ui64);
  *(_QWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFF80ui64) + 0xF4) = 0i64;
  *(_DWORD *)(((unsigned __int64)v47 & 0xFFFFFFFFFFFFFF80ui64) + 0xFC) = 0;
  __asm
  {
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rbp+330h+results.fraction], xmm0
    vmovss  xmm0, dword ptr [rdi+0Ch]
    vmovss  dword ptr [rbp+330h+start], xmm0
    vmovss  xmm1, dword ptr [rdi+10h]
    vmovss  dword ptr [rbp+330h+start+4], xmm1
    vmovss  xmm0, dword ptr [rdi+14h]
    vmovss  dword ptr [rbp+330h+start+8], xmm0
  }
  _RSI = _RDI + 24;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  dword ptr [rbp+330h+end], xmm0
    vmovss  xmm1, dword ptr [rsi+4]
    vmovss  dword ptr [rbp+330h+end+4], xmm1
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rbp+330h+end+8], xmm0
  }
  if ( *((int *)_RDI + 64) < 0 )
    goto LABEL_18;
  if ( _RDI[268] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5173, ASSERT_TYPE_ASSERT, "(!cmd->boundsCylinder)", (const char *)&queryFormat, "!cmd->boundsCylinder") )
    __debugbreak();
  if ( !CG_CalcTraceEnd(*((LocalClientNum_t *)_RDI + 19), *((_DWORD *)_RDI + 20), (const vec3_t *)(_RDI + 64), *((_DWORD *)_RDI + 64), *((scr_string_t *)_RDI + 65), (vec3_t *)_RDI + 2) )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  [rbp+330h+results.fraction], xmm0
    }
    goto LABEL_24;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rbp+330h+var_330.m_flags], xmm0
  }
  if ( (*(_DWORD *)_RBP & 0x7F800000) == 2139095040 )
    goto LABEL_28;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+1Ch]
    vmovss  [rbp+330h+var_330.m_flags], xmm0
  }
  if ( (*(_DWORD *)_RBP & 0x7F800000) == 2139095040 )
    goto LABEL_28;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+20h]
    vmovss  [rbp+330h+var_330.m_flags], xmm0
  }
  v19 = *(_DWORD *)_RBP & 0x7F800000;
  v20 = v19 <= 0x7F800000;
  if ( v19 == 2139095040 )
  {
LABEL_28:
    v21 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5182, ASSERT_TYPE_SANITY, "( !IS_NAN( ( cmd->end )[0] ) && !IS_NAN( ( cmd->end )[1] ) && !IS_NAN( ( cmd->end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( cmd->end )[0] ) && !IS_NAN( ( cmd->end )[1] ) && !IS_NAN( ( cmd->end )[2] )");
    v20 = !v21;
    if ( v21 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  dword ptr [rbp+330h+end], xmm0
    vmovss  xmm1, dword ptr [rsi+4]
    vmovss  dword ptr [rbp+330h+end+4], xmm1
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  dword ptr [rbp+330h+end+8], xmm0
    vxorps  xmm2, xmm2, xmm2
    vmovss  xmm1, [rbp+330h+results.fraction]
    vcomiss xmm1, xmm2
  }
  if ( !v20 )
  {
LABEL_18:
    v27 = 3 * *((_DWORD *)_RDI + 19) + 2;
    if ( _RDI[268] )
    {
      *(_DWORD *)_RBP = 5;
      if ( !*((_QWORD *)_RDI + 34) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5196, ASSERT_TYPE_ASSERT, "(cmd->ps)", (const char *)&queryFormat, "cmd->ps") )
        __debugbreak();
      PhysicsQuery_LegacyCapsuleTrace_Internal((Physics_WorldId)v27, (trace_t *)(_RBP + 128), (const vec3_t *)(_RBP + 220), (const vec3_t *)(_RBP + 232), (const Bounds *)(_RDI + 36), (int *)_RDI + 48, *((_DWORD *)_RDI + 56), NULL, 0, *((_DWORD *)_RDI + 15), *((const playerState_s **)_RDI + 34), 0, 0, NULL, NULL, (PhysicsQuery_ContextSettings *)((unsigned __int64)v47 & 0xFFFFFFFFFFFFFF80ui64));
    }
    else
    {
      PhysicsQuery_LegacyTraceSkipEntities_Internal((Physics_WorldId)v27, (trace_t *)(_RBP + 128), (const vec3_t *)(_RBP + 220), (const vec3_t *)(_RBP + 232), (const Bounds *)(_RDI + 36), (const int *)_RDI + 48, *((_DWORD *)_RDI + 56), 0, *((_DWORD *)_RDI + 15), *((_DWORD *)_RDI + 58), *((unsigned __int8 **)_RDI + 30), *((Physics_QueryPhaseSelection *)_RDI + 66), 0, 0);
    }
  }
LABEL_24:
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+0Ch]
    vmovss  dword ptr [rbp+330h+start], xmm0
    vmovss  xmm1, dword ptr [rdi+10h]
    vmovss  dword ptr [rbp+330h+start+4], xmm1
    vmovss  xmm0, dword ptr [rdi+14h]
    vmovss  dword ptr [rbp+330h+start+8], xmm0
    vmovss  xmm1, dword ptr [rsi]
    vmovss  dword ptr [rbp+330h+end], xmm1
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  dword ptr [rbp+330h+end+4], xmm0
    vmovss  xmm1, dword ptr [rsi+8]
    vmovss  dword ptr [rbp+330h+end+8], xmm1
  }
  _RAX = *(_QWORD *)_RDI;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+330h+results.fraction]
    vmovups ymmword ptr [rax], ymm0
    vmovups ymm1, ymmword ptr [rbp+330h+results.contents]
    vmovups ymmword ptr [rax+20h], ymm1
    vmovups xmm0, xmmword ptr [rbp+330h+results.allsolid]
    vmovups xmmword ptr [rax+40h], xmm0
    vmovsd  xmm1, [rbp+330h+results.debugHitName]
    vmovsd  qword ptr [rax+50h], xmm1
  }
  _RAX = *(_QWORD *)_RDI;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+330h+start]
    vmovss  dword ptr [rax+5Ch], xmm0
    vmovss  xmm1, dword ptr [rbp+330h+start+4]
    vmovss  dword ptr [rax+60h], xmm1
    vmovss  xmm0, dword ptr [rbp+330h+start+8]
    vmovss  dword ptr [rax+64h], xmm0
  }
  _RAX = *(_QWORD *)_RDI;
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+330h+end]
    vmovss  dword ptr [rax+68h], xmm0
    vmovss  xmm1, dword ptr [rbp+330h+end+4]
    vmovss  dword ptr [rax+6Ch], xmm1
    vmovss  xmm0, dword ptr [rbp+330h+end+8]
    vmovss  dword ptr [rax+70h], xmm0
  }
  *(_DWORD *)(*(_QWORD *)_RDI + 88i64) = 2;
  if ( v6 )
    hkMonitorStream::timerEnd(v6, "Et");
}

/*
==============
PhysicsQuery_TriggerAABBBroadphaseQuery
==============
*/
void PhysicsQuery_TriggerAABBBroadphaseQuery(Physics_WorldId worldId, const vec3_t *aabbMin, const vec3_t *aabbMax, int contents, PhysicsQuery_Collected<unsigned short> *collectedEnts, PhysicsQuery_Collected<unsigned int> *collectedScriptables)
{
  if ( (contents & 0x40440008) != contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2974, ASSERT_TYPE_ASSERT, "((contents & (((1 << 3)|(1 << 18)|(1 << 30)|(1 << 22)))) == contents)", (const char *)&queryFormat, "(contents & (MASK_TRIGGER)) == contents") )
    __debugbreak();
  PhysicsQuery_ImmediateAABBBroadphaseQuery(worldId, aabbMin, aabbMax, contents, 0, NULL, collectedEnts, collectedScriptables, 0);
  G_Trigger_MathTriggerAABBQuery(aabbMin, aabbMax, contents, collectedEnts->countMax, &collectedEnts->count, collectedEnts->ids);
}

