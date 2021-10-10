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
  shapeHit->isValid = rayHit->isValid;
  shapeHit->fraction = rayHit->fraction;
  shapeHit->contactPosition = rayHit->position;
  shapeHit->shapePosition = rayHit->position;
  shapeHit->hitContactNormal = rayHit->normal;
  shapeHit->queryContactNormal.v[0] = COERCE_FLOAT(LODWORD(rayHit->normal.v[0]) ^ _xmm);
  shapeHit->queryContactNormal.v[1] = COERCE_FLOAT(LODWORD(rayHit->normal.v[1]) ^ _xmm);
  shapeHit->queryContactNormal.v[2] = COERCE_FLOAT(LODWORD(rayHit->normal.v[2]) ^ _xmm);
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
  double RaycastHitFraction; 

  if ( ((LODWORD(start->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 364, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
    __debugbreak();
  if ( ((LODWORD(end->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 365, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 366, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 367, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( HavokPhysics_CollisionQueryResult::HasHit(result) && HavokPhysics_CollisionQueryResult::GetNumHits(result) > index )
  {
    hit->isValid = 1;
    RaycastHitFraction = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(result, index);
    hit->fraction = *(float *)&RaycastHitFraction;
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
  double ShapecastHitFraction; 
  float fraction; 

  if ( ((LODWORD(start->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 387, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
    __debugbreak();
  if ( ((LODWORD(end->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 388, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 389, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 390, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( HavokPhysics_CollisionQueryResult::HasHit(result) && HavokPhysics_CollisionQueryResult::GetNumHits(result) > index )
  {
    hit->isValid = 1;
    ShapecastHitFraction = HavokPhysics_CollisionQueryResult::GetShapecastHitFraction(result, index);
    hit->fraction = *(float *)&ShapecastHitFraction;
    HavokPhysics_CollisionQueryResult::GetShapecastHitContactPosition(result, index, &hit->contactPosition);
    fraction = hit->fraction;
    hit->shapePosition.v[0] = (float)((float)(end->v[0] - start->v[0]) * fraction) + start->v[0];
    hit->shapePosition.v[1] = (float)((float)(end->v[1] - start->v[1]) * fraction) + start->v[1];
    hit->shapePosition.v[2] = (float)((float)(end->v[2] - start->v[2]) * fraction) + start->v[2];
    HavokPhysics_CollisionQueryResult::GetShapecastHitHitContactNormal(result, index, &hit->hitContactNormal);
    HavokPhysics_CollisionQueryResult::GetShapecastHitQueryContactNormal(result, index, &hit->queryContactNormal);
    hit->surfaceFlags = HavokPhysics_CollisionQueryResult::GetShapecastHitHitSurfFlags(result, index);
    hit->contents = HavokPhysics_CollisionQueryResult::GetShapecastHitHitContents(result, index);
    hit->material = HavokPhysics_CollisionQueryResult::GetShapecastHitHitMaterialId(result, index);
    hit->ref = HavokPhysics_CollisionQueryResult::GetShapecastHitRef(result, index);
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
  double ClosestPointHitDistance; 

  if ( ((LODWORD(point->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 436, ASSERT_TYPE_SANITY, "( !IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] )") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 437, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 438, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( HavokPhysics_CollisionQueryResult::HasHit(result) && HavokPhysics_CollisionQueryResult::GetNumHits(result) > index )
  {
    hit->isValid = 1;
    HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(result, index, &hit->hitPosition);
    HavokPhysics_CollisionQueryResult::GetClosestPointHitQueryPosition(result, index, &hit->queryPosition);
    HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(result, index, &hit->separatingNormal);
    ClosestPointHitDistance = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(result, index);
    hit->distance = *(float *)&ClosestPointHitDistance;
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
  double ClosestPointHitDistance; 

  if ( ((LODWORD(point->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 412, ASSERT_TYPE_SANITY, "( !IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] )") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 413, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 414, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( HavokPhysics_CollisionQueryResult::HasHit(result) && HavokPhysics_CollisionQueryResult::GetNumHits(result) > index )
  {
    hit->isValid = 1;
    HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(result, index, &hit->hitPosition);
    HavokPhysics_CollisionQueryResult::GetClosestPointHitQueryPosition(result, index, &hit->queryPosition);
    HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(result, index, &hit->separatingNormal);
    ClosestPointHitDistance = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(result, index);
    hit->distance = *(float *)&ClosestPointHitDistance;
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
  HavokPhysics_CollisionQueryResult *v11; 
  signed int NumHits; 
  int v13; 

  v7 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 863, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 864, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( ((LODWORD(min->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(min->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(min->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 865, ASSERT_TYPE_SANITY, "( !IS_NAN( ( min )[0] ) && !IS_NAN( ( min )[1] ) && !IS_NAN( ( min )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( min )[0] ) && !IS_NAN( ( min )[1] ) && !IS_NAN( ( min )[2] )") )
    __debugbreak();
  if ( ((LODWORD(max->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(max->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(max->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 866, ASSERT_TYPE_SANITY, "( !IS_NAN( ( max )[0] ) && !IS_NAN( ( max )[1] ) && !IS_NAN( ( max )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( max )[0] ) && !IS_NAN( ( max )[1] ) && !IS_NAN( ( max )[2] )") )
    __debugbreak();
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
  v11 = s_PhysicsQuery_AllQueryResults[(int)(28 * v7 + Physics_GetThreadId())];
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 878, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v11, 1);
  Physics_AABBQuery((Physics_WorldId)v7, min, max, extendedData, v11);
  NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(v11);
  if ( maxNumHits < NumHits )
    NumHits = maxNumHits;
  v13 = 0;
  for ( *hitsFound = NumHits; v13 < *hitsFound; ++v13 )
    PhysicsQuery_ExtractHitData(v11, v13, &hits[v13]);
}

/*
==============
PhysicsQuery_ImmediateAABBQueryAll
==============
*/
void PhysicsQuery_ImmediateAABBQueryAll(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, PhysicsQuery_AABBQueryHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v8; 
  Physics_AABBQueryExtendedData *v12; 
  PhysicsQuery_AABBQueryHit *v13; 
  int v14; 
  int *v15; 
  HavokPhysics_CollisionQueryResult *result; 
  signed int v17; 
  signed int v18; 
  vec3_t *v19; 
  vec3_t *v20; 
  unsigned int v21; 
  hknpBodyId *RigidBodyID; 
  int NumHits; 
  __int64 v24; 
  int NumRigidBodys; 
  unsigned int instanceIda; 
  vec3_t *mina; 
  vec3_t *maxa; 

  maxa = (vec3_t *)max;
  mina = (vec3_t *)min;
  instanceIda = instanceId;
  v8 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1142, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1143, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( ((LODWORD(min->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(min->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(min->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1144, ASSERT_TYPE_SANITY, "( !IS_NAN( ( min )[0] ) && !IS_NAN( ( min )[1] ) && !IS_NAN( ( min )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( min )[0] ) && !IS_NAN( ( min )[1] ) && !IS_NAN( ( min )[2] )") )
    __debugbreak();
  if ( ((LODWORD(max->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(max->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(max->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1145, ASSERT_TYPE_SANITY, "( !IS_NAN( ( max )[0] ) && !IS_NAN( ( max )[1] ) && !IS_NAN( ( max )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( max )[0] ) && !IS_NAN( ( max )[1] ) && !IS_NAN( ( max )[2] )") )
    __debugbreak();
  v12 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1146, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v12->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1147, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  v13 = hits;
  if ( !hits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1148, ASSERT_TYPE_ASSERT, "(hits)", (const char *)&queryFormat, "hits") )
    __debugbreak();
  v14 = maxNumHits;
  if ( maxNumHits <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1149, ASSERT_TYPE_ASSERT, "(maxNumHits > 0)", (const char *)&queryFormat, "maxNumHits > 0") )
    __debugbreak();
  v15 = hitsFound;
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
    v17 = 0;
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v8, instanceId);
    v18 = 0;
    if ( NumRigidBodys > 0 )
    {
      v19 = maxa;
      v20 = mina;
      v21 = instanceIda;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v8 > 7 )
        {
          LODWORD(v24) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v24) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v8 - 2) <= 5 )
        {
          LODWORD(v24) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v24) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v8 <= 1 )
        {
          LODWORD(v24) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v24) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID((hknpBodyId *)&instanceIda, (const Physics_WorldId)v8, v21, v18);
        Physics_AABBQuery((Physics_WorldId)v8, RigidBodyID->m_serialAndIndex, v20, v19, v12, result);
        ++v18;
      }
      while ( v18 < NumRigidBodys );
      v15 = hitsFound;
      v17 = 0;
      v13 = hits;
      v14 = maxNumHits;
    }
    NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(result);
    if ( v14 < NumHits )
      NumHits = v14;
    *v15 = NumHits;
    if ( NumHits > 0 )
    {
      do
      {
        PhysicsQuery_ExtractHitData(result, v17, &v13[v17]);
        ++v17;
      }
      while ( v17 < *v15 );
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
  HavokPhysics_CollisionQueryResult *v9; 

  v5 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 833, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 834, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( ((LODWORD(min->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(min->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(min->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 835, ASSERT_TYPE_SANITY, "( !IS_NAN( ( min )[0] ) && !IS_NAN( ( min )[1] ) && !IS_NAN( ( min )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( min )[0] ) && !IS_NAN( ( min )[1] ) && !IS_NAN( ( min )[2] )") )
    __debugbreak();
  if ( ((LODWORD(max->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(max->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(max->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 836, ASSERT_TYPE_SANITY, "( !IS_NAN( ( max )[0] ) && !IS_NAN( ( max )[1] ) && !IS_NAN( ( max )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( max )[0] ) && !IS_NAN( ( max )[1] ) && !IS_NAN( ( max )[2] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 837, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !extendedData->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 838, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 839, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 841, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v9 = s_PhysicsQuery_ClosestQueryResults[(int)(28 * v5 + Physics_GetThreadId())];
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 846, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v9, 1);
  Physics_AABBQuery((Physics_WorldId)v5, min, max, extendedData, v9);
  PhysicsQuery_ExtractHitData(v9, 0, hit);
}

/*
==============
PhysicsQuery_ImmediateAABBQueryClosest
==============
*/
void PhysicsQuery_ImmediateAABBQueryClosest(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, PhysicsQuery_AABBQueryHit *hit)
{
  __int64 v6; 
  Physics_AABBQueryExtendedData *v10; 
  PhysicsQuery_AABBQueryHit *v11; 
  HavokPhysics_CollisionQueryResult *result; 
  int NumRigidBodys; 
  signed int v14; 
  int v15; 
  unsigned int v16; 
  hknpBodyId *RigidBodyID; 
  __int64 v18; 
  unsigned int instanceIda; 

  instanceIda = instanceId;
  v6 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1048, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1049, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( ((LODWORD(min->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(min->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(min->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1050, ASSERT_TYPE_SANITY, "( !IS_NAN( ( min )[0] ) && !IS_NAN( ( min )[1] ) && !IS_NAN( ( min )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( min )[0] ) && !IS_NAN( ( min )[1] ) && !IS_NAN( ( min )[2] )") )
    __debugbreak();
  if ( ((LODWORD(max->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(max->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(max->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1051, ASSERT_TYPE_SANITY, "( !IS_NAN( ( max )[0] ) && !IS_NAN( ( max )[1] ) && !IS_NAN( ( max )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( max )[0] ) && !IS_NAN( ( max )[1] ) && !IS_NAN( ( max )[2] )") )
    __debugbreak();
  v10 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1052, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v10->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1053, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  v11 = hit;
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
    v14 = 0;
    v15 = NumRigidBodys;
    if ( NumRigidBodys > 0 )
    {
      v16 = instanceIda;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v6 > 7 )
        {
          LODWORD(v18) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v18) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v6 - 2) <= 5 )
        {
          LODWORD(v18) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v18) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v6 <= 1 )
        {
          LODWORD(v18) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v18) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID((hknpBodyId *)&instanceIda, (const Physics_WorldId)v6, v16, v14);
        Physics_AABBQuery((Physics_WorldId)v6, RigidBodyID->m_serialAndIndex, min, max, v10, result);
        ++v14;
      }
      while ( v14 < v15 );
      v11 = hit;
    }
    PhysicsQuery_ExtractHitData(result, 0, v11);
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
  HavokPhysics_CollisionQueryResult *v8; 

  v4 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 802, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 803, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( ((LODWORD(min->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(min->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(min->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 804, ASSERT_TYPE_SANITY, "( !IS_NAN( ( min )[0] ) && !IS_NAN( ( min )[1] ) && !IS_NAN( ( min )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( min )[0] ) && !IS_NAN( ( min )[1] ) && !IS_NAN( ( min )[2] )") )
    __debugbreak();
  if ( ((LODWORD(max->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(max->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(max->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 805, ASSERT_TYPE_SANITY, "( !IS_NAN( ( max )[0] ) && !IS_NAN( ( max )[1] ) && !IS_NAN( ( max )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( max )[0] ) && !IS_NAN( ( max )[1] ) && !IS_NAN( ( max )[2] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 806, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !extendedData->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 807, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 809, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v8 = s_PhysicsQuery_AnyQueryResults[(int)(28 * v4 + Physics_GetThreadId())];
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 814, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v8, 1);
  Physics_AABBQuery((Physics_WorldId)v4, min, max, extendedData, v8);
  return !HavokPhysics_CollisionQueryResult::HasHit(v8);
}

/*
==============
PhysicsQuery_ImmediateAABBQuerySightCheck
==============
*/
bool PhysicsQuery_ImmediateAABBQuerySightCheck(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData)
{
  __int64 v5; 
  Physics_AABBQueryExtendedData *v9; 
  HavokPhysics_CollisionQueryResult *v11; 
  signed int v12; 
  int NumRigidBodys; 
  hknpBodyId *RigidBodyID; 
  __int64 v15; 
  hknpBodyId result; 

  v5 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 952, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 953, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  result.m_serialAndIndex = LODWORD(min->v[0]);
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 || (result.m_serialAndIndex = LODWORD(min->v[1]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) || (result.m_serialAndIndex = LODWORD(min->v[2]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 954, ASSERT_TYPE_SANITY, "( !IS_NAN( ( min )[0] ) && !IS_NAN( ( min )[1] ) && !IS_NAN( ( min )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( min )[0] ) && !IS_NAN( ( min )[1] ) && !IS_NAN( ( min )[2] )") )
      __debugbreak();
  }
  result.m_serialAndIndex = LODWORD(max->v[0]);
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 || (result.m_serialAndIndex = LODWORD(max->v[1]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) || (result.m_serialAndIndex = LODWORD(max->v[2]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 955, ASSERT_TYPE_SANITY, "( !IS_NAN( ( max )[0] ) && !IS_NAN( ( max )[1] ) && !IS_NAN( ( max )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( max )[0] ) && !IS_NAN( ( max )[1] ) && !IS_NAN( ( max )[2] )") )
      __debugbreak();
  }
  v9 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 956, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v9->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 957, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( instanceId == -1 )
    return 0;
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 965, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v11 = s_PhysicsQuery_AnyQueryResults[(int)(28 * v5 + Physics_GetThreadId())];
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 970, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v11, 1);
  v12 = 0;
  NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v5, instanceId);
  if ( NumRigidBodys > 0 )
  {
    do
    {
      if ( HavokPhysics_CollisionQueryResult::HasHit(v11) )
        break;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v5 > 7 )
      {
        LODWORD(v15) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v15) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v5 - 2) <= 5 )
      {
        LODWORD(v15) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v15) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v5 <= 1 )
      {
        LODWORD(v15) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v15) )
          __debugbreak();
      }
      RigidBodyID = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v5, instanceId, v12);
      Physics_AABBQuery((Physics_WorldId)v5, RigidBodyID->m_serialAndIndex, min, max, v9, v11);
      ++v12;
    }
    while ( v12 < NumRigidBodys );
  }
  return !HavokPhysics_CollisionQueryResult::HasHit(v11);
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
  __int64 v9; 
  HavokPhysics_CollisionQueryResult *result; 
  signed int NumHits; 
  int v15; 

  v9 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2427, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2428, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2429, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  if ( ((LODWORD(point->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2430, ASSERT_TYPE_SANITY, "( !IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] )") )
    __debugbreak();
  if ( ((LODWORD(rotation->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2431, ASSERT_TYPE_SANITY, "( !IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] )") )
    __debugbreak();
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
  result = s_PhysicsQuery_AllQueryResults[(int)(28 * v9 + Physics_GetThreadId())];
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2443, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(result, 1);
  Physics_GetClosestPoints((Physics_WorldId)v9, shape, point, rotation, radius, extendedData, result);
  NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(result);
  if ( maxNumHits < NumHits )
    NumHits = maxNumHits;
  v15 = 0;
  for ( *hitsFound = NumHits; v15 < *hitsFound; ++v15 )
    PhysicsQuery_ExtractHitData(point, radius, result, v15, &hits[(__int64)v15]);
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsAll
==============
*/
void PhysicsQuery_ImmediateGetClosestPointsAll(Physics_WorldId worldId, hknpShape *shape, unsigned int instanceId, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData, PhysicsQuery_GetClosestPointsHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v10; 
  const vec4_t *v14; 
  Physics_GetClosestPointsExtendedData *v15; 
  PhysicsQuery_GetClosestPointsHit *v16; 
  int *v17; 
  HavokPhysics_CollisionQueryResult *result; 
  int NumRigidBodys; 
  float maxDistance; 
  signed int v21; 
  signed int v22; 
  Physics_GetClosestPointsExtendedData *v23; 
  unsigned int v24; 
  hknpBodyId *RigidBodyID; 
  int NumHits; 
  Physics_GetClosestPointsExtendedData *v27; 
  int v28; 
  unsigned int instanceIda; 

  instanceIda = instanceId;
  v10 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2928, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2929, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2930, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  if ( ((LODWORD(point->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2931, ASSERT_TYPE_SANITY, "( !IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] )") )
    __debugbreak();
  v14 = rotation;
  if ( ((LODWORD(rotation->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2932, ASSERT_TYPE_SANITY, "( !IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] )") )
    __debugbreak();
  v15 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2933, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v15->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2934, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  v16 = hits;
  if ( !hits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2935, ASSERT_TYPE_ASSERT, "(hits)", (const char *)&queryFormat, "hits") )
    __debugbreak();
  if ( maxNumHits <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2936, ASSERT_TYPE_ASSERT, "(maxNumHits > 0)", (const char *)&queryFormat, "maxNumHits > 0") )
    __debugbreak();
  v17 = hitsFound;
  if ( !hitsFound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2937, ASSERT_TYPE_ASSERT, "(hitsFound)", (const char *)&queryFormat, "hitsFound") )
    __debugbreak();
  if ( instanceId != -1 )
  {
    if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2945, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
      __debugbreak();
    result = s_PhysicsQuery_AllQueryResults[(int)(28 * v10 + Physics_GetThreadId())];
    if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2950, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    HavokPhysics_CollisionQueryResult::Reset(result, 1);
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v10, instanceId);
    maxDistance = radius;
    v21 = 0;
    v28 = NumRigidBodys;
    v22 = 0;
    if ( NumRigidBodys > 0 )
    {
      v23 = extendedData;
      v24 = instanceIda;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v10 > 7 )
        {
          LODWORD(v27) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v27) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v10 - 2) <= 5 )
        {
          LODWORD(v27) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v27) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v10 <= 1 )
        {
          LODWORD(v27) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v27) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID((hknpBodyId *)&instanceIda, (const Physics_WorldId)v10, v24, v22);
        Physics_GetClosestPoints((Physics_WorldId)v10, RigidBodyID->m_serialAndIndex, shape, point, v14, maxDistance, v23, result);
        ++v22;
      }
      while ( v22 < v28 );
      v17 = hitsFound;
      v21 = 0;
      v16 = hits;
    }
    NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(result);
    if ( maxNumHits < NumHits )
      NumHits = maxNumHits;
    *v17 = NumHits;
    if ( NumHits > 0 )
    {
      do
      {
        PhysicsQuery_ExtractHitData(point, maxDistance, result, v21, &v16[(__int64)v21]);
        ++v21;
      }
      while ( v21 < *v17 );
    }
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
  PhysicsQuery_ImmediateGetClosestPointsAll((Physics_WorldId)v11, shape, v15, point, rotation, radius, extendedData, hits, maxNumHits, hitsFound);
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
  HavokPhysics_CollisionQueryResult *v10; 

  v6 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2364, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2365, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2366, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  if ( ((LODWORD(point->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2367, ASSERT_TYPE_SANITY, "( !IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] )") )
    __debugbreak();
  if ( ((LODWORD(rotation->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2368, ASSERT_TYPE_SANITY, "( !IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2369, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !extendedData->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2370, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2372, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v10 = s_PhysicsQuery_AnyQueryResults[(int)(28 * v6 + Physics_GetThreadId())];
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2377, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v10, 1);
  Physics_GetClosestPoints((Physics_WorldId)v6, shape, point, rotation, radius, extendedData, v10);
  return !HavokPhysics_CollisionQueryResult::HasHit(v10);
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsFree
==============
*/
bool PhysicsQuery_ImmediateGetClosestPointsFree(Physics_WorldId worldId, hknpShape *shape, unsigned int instanceId, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData)
{
  __int64 v7; 
  const vec4_t *v11; 
  Physics_GetClosestPointsExtendedData *v12; 
  HavokPhysics_CollisionQueryResult *v14; 
  signed int v15; 
  int NumRigidBodys; 
  float maxDistance; 
  hknpBodyId *RigidBodyID; 
  Physics_GetClosestPointsExtendedData *v19; 
  hknpBodyId result; 
  hknpShape *shapea; 

  shapea = shape;
  v7 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2517, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2518, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2519, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  result.m_serialAndIndex = LODWORD(point->v[0]);
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 || (result.m_serialAndIndex = LODWORD(point->v[1]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) || (result.m_serialAndIndex = LODWORD(point->v[2]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2520, ASSERT_TYPE_SANITY, "( !IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] )") )
      __debugbreak();
  }
  v11 = rotation;
  result.m_serialAndIndex = LODWORD(rotation->v[0]);
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 || (result.m_serialAndIndex = LODWORD(rotation->v[1]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) || (result.m_serialAndIndex = LODWORD(rotation->v[2]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) || (result.m_serialAndIndex = LODWORD(rotation->v[3]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2521, ASSERT_TYPE_SANITY, "( !IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] )") )
      __debugbreak();
  }
  v12 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2522, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v12->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2523, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( instanceId == -1 )
    return 0;
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2531, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v14 = s_PhysicsQuery_AnyQueryResults[(int)(28 * v7 + Physics_GetThreadId())];
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2536, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v14, 1);
  v15 = 0;
  NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v7, instanceId);
  if ( NumRigidBodys > 0 )
  {
    maxDistance = radius;
    do
    {
      if ( HavokPhysics_CollisionQueryResult::HasHit(v14) )
        break;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v7 > 7 )
      {
        LODWORD(v19) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v19) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v7 - 2) <= 5 )
      {
        LODWORD(v19) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v19) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v7 <= 1 )
      {
        LODWORD(v19) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v19) )
          __debugbreak();
      }
      RigidBodyID = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v7, instanceId, v15);
      Physics_GetClosestPoints((Physics_WorldId)v7, RigidBodyID->m_serialAndIndex, shapea, point, v11, maxDistance, v12, v14);
      ++v15;
    }
    while ( v15 < NumRigidBodys );
  }
  return !HavokPhysics_CollisionQueryResult::HasHit(v14);
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
  return PhysicsQuery_ImmediateGetClosestPointsFree((Physics_WorldId)v8, shape, v12, point, rotation, radius, extendedData);
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
  __int64 v7; 
  HavokPhysics_CollisionQueryResult *result; 

  v7 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2396, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2397, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2398, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  if ( ((LODWORD(point->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2399, ASSERT_TYPE_SANITY, "( !IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] )") )
    __debugbreak();
  if ( ((LODWORD(rotation->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2400, ASSERT_TYPE_SANITY, "( !IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2401, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !extendedData->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2402, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2403, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2405, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  result = s_PhysicsQuery_ClosestQueryResults[(int)(28 * v7 + Physics_GetThreadId())];
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2410, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(result, 1);
  Physics_GetClosestPoints((Physics_WorldId)v7, shape, point, rotation, radius, extendedData, result);
  PhysicsQuery_ExtractHitData(point, radius, result, 0, hit);
}

/*
==============
PhysicsQuery_ImmediateGetClosestPointsWorst
==============
*/
void PhysicsQuery_ImmediateGetClosestPointsWorst(Physics_WorldId worldId, hknpShape *shape, unsigned int instanceId, const vec3_t *point, const vec4_t *rotation, const float radius, Physics_GetClosestPointsExtendedData *extendedData, PhysicsQuery_GetClosestPointsHit *hit)
{
  __int64 v8; 
  const vec4_t *v12; 
  Physics_GetClosestPointsExtendedData *v13; 
  PhysicsQuery_GetClosestPointsHit *v14; 
  HavokPhysics_CollisionQueryResult *result; 
  int NumRigidBodys; 
  float maxDistance; 
  signed int v18; 
  int v19; 
  unsigned int v20; 
  hknpBodyId *RigidBodyID; 
  Physics_GetClosestPointsExtendedData *v22; 
  unsigned int instanceIda; 

  instanceIda = instanceId;
  v8 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2614, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2615, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2616, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  if ( ((LODWORD(point->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2617, ASSERT_TYPE_SANITY, "( !IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] )") )
    __debugbreak();
  v12 = rotation;
  if ( ((LODWORD(rotation->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2618, ASSERT_TYPE_SANITY, "( !IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] )") )
    __debugbreak();
  v13 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2619, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v13->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2620, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  v14 = hit;
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2621, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( instanceId != -1 )
  {
    if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2629, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
      __debugbreak();
    result = s_PhysicsQuery_ClosestQueryResults[(int)(28 * v8 + Physics_GetThreadId())];
    if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2634, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    HavokPhysics_CollisionQueryResult::Reset(result, 1);
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v8, instanceId);
    maxDistance = radius;
    v18 = 0;
    v19 = NumRigidBodys;
    if ( NumRigidBodys > 0 )
    {
      v20 = instanceIda;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v8 > 7 )
        {
          LODWORD(v22) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v22) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v8 - 2) <= 5 )
        {
          LODWORD(v22) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v22) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v8 <= 1 )
        {
          LODWORD(v22) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v22) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID((hknpBodyId *)&instanceIda, (const Physics_WorldId)v8, v20, v18);
        Physics_GetClosestPoints((Physics_WorldId)v8, RigidBodyID->m_serialAndIndex, shape, point, v12, maxDistance, v13, result);
        ++v18;
      }
      while ( v18 < v19 );
      v14 = hit;
    }
    PhysicsQuery_ExtractHitData(point, maxDistance, result, 0, v14);
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
  PhysicsQuery_ImmediateGetClosestPointsWorst((Physics_WorldId)v9, shape, v13, point, rotation, radius, extendedData, hit);
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
void PhysicsQuery_ImmediateQueryPointAll(Physics_WorldId worldId, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData, PhysicsQuery_QueryPointHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v7; 
  HavokPhysics_CollisionQueryResult *v10; 
  signed int NumHits; 
  int v12; 

  v7 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2039, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2040, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( ((LODWORD(point->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2041, ASSERT_TYPE_SANITY, "( !IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] )") )
    __debugbreak();
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
  v10 = s_PhysicsQuery_AllQueryResults[(int)(28 * v7 + Physics_GetThreadId())];
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2053, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v10, 1);
  Physics_QueryPoint((Physics_WorldId)v7, point, radius, extendedData, v10);
  NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(v10);
  if ( maxNumHits < NumHits )
    NumHits = maxNumHits;
  v12 = 0;
  for ( *hitsFound = NumHits; v12 < *hitsFound; ++v12 )
    PhysicsQuery_ExtractHitData(point, radius, v10, v12, &hits[v12]);
}

/*
==============
PhysicsQuery_ImmediateQueryPointAll
==============
*/
void PhysicsQuery_ImmediateQueryPointAll(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData, PhysicsQuery_QueryPointHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v8; 
  Physics_QueryPointExtendedData *v11; 
  PhysicsQuery_QueryPointHit *v12; 
  int v13; 
  int *v14; 
  HavokPhysics_CollisionQueryResult *result; 
  signed int v16; 
  signed int v17; 
  Physics_QueryPointExtendedData *v18; 
  unsigned int v19; 
  hknpBodyId *RigidBodyID; 
  int NumHits; 
  __int64 v22; 
  int NumRigidBodys; 
  unsigned int instanceIda; 

  instanceIda = instanceId;
  v8 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2316, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2317, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( ((LODWORD(point->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2318, ASSERT_TYPE_SANITY, "( !IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] )") )
    __debugbreak();
  v11 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2319, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v11->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2320, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  v12 = hits;
  if ( !hits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2321, ASSERT_TYPE_ASSERT, "(hits)", (const char *)&queryFormat, "hits") )
    __debugbreak();
  v13 = maxNumHits;
  if ( maxNumHits <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2322, ASSERT_TYPE_ASSERT, "(maxNumHits > 0)", (const char *)&queryFormat, "maxNumHits > 0") )
    __debugbreak();
  v14 = hitsFound;
  if ( !hitsFound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2323, ASSERT_TYPE_ASSERT, "(hitsFound)", (const char *)&queryFormat, "hitsFound") )
    __debugbreak();
  if ( instanceId != -1 )
  {
    if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2331, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
      __debugbreak();
    result = s_PhysicsQuery_AllQueryResults[(int)(28 * v8 + Physics_GetThreadId())];
    if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2336, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    HavokPhysics_CollisionQueryResult::Reset(result, 1);
    v16 = 0;
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v8, instanceId);
    v17 = 0;
    if ( NumRigidBodys > 0 )
    {
      v18 = extendedData;
      v19 = instanceIda;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v8 > 7 )
        {
          LODWORD(v22) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v22) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v8 - 2) <= 5 )
        {
          LODWORD(v22) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v22) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v8 <= 1 )
        {
          LODWORD(v22) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v22) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID((hknpBodyId *)&instanceIda, (const Physics_WorldId)v8, v19, v17);
        Physics_QueryPoint((Physics_WorldId)v8, RigidBodyID->m_serialAndIndex, point, radius, v18, result);
        ++v17;
      }
      while ( v17 < NumRigidBodys );
      v14 = hitsFound;
      v16 = 0;
      v12 = hits;
      v13 = maxNumHits;
    }
    NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(result);
    if ( v13 < NumHits )
      NumHits = v13;
    *v14 = NumHits;
    if ( NumHits > 0 )
    {
      do
      {
        PhysicsQuery_ExtractHitData(point, radius, result, v16, &v12[v16]);
        ++v16;
      }
      while ( v16 < *v14 );
    }
  }
}

/*
==============
PhysicsQuery_ImmediateQueryPointAll
==============
*/
void PhysicsQuery_ImmediateQueryPointAll(Physics_WorldId worldId, PhysicsObject *physObj, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData, PhysicsQuery_QueryPointHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v8; 

  v8 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2298, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2299, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2300, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  PhysicsQuery_ImmediateQueryPointAll((Physics_WorldId)v8, physObj->physicsInstances[v8], point, radius, extendedData, hits, maxNumHits, hitsFound);
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
  PhysicsQuery_ImmediateQueryPointAll((Physics_WorldId)v9, v13, point, radius, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateQueryPointAll
==============
*/
void PhysicsQuery_ImmediateQueryPointAll(Physics_WorldId worldId, const gentity_s *ent, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData, PhysicsQuery_QueryPointHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v8; 
  G_PhysicsObject *v11; 

  v8 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2263, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2264, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2265, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v11 = G_PhysicsObject_Get(ent);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2268, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  PhysicsQuery_ImmediateQueryPointAll((Physics_WorldId)v8, v11, point, radius, extendedData, hits, maxNumHits, hitsFound);
}

/*
==============
PhysicsQuery_ImmediateQueryPointFree
==============
*/
bool PhysicsQuery_ImmediateQueryPointFree(Physics_WorldId worldId, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData)
{
  __int64 v4; 
  HavokPhysics_CollisionQueryResult *v7; 

  v4 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1980, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1981, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( ((LODWORD(point->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1982, ASSERT_TYPE_SANITY, "( !IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1983, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !extendedData->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1984, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1986, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v7 = s_PhysicsQuery_AnyQueryResults[(int)(28 * v4 + Physics_GetThreadId())];
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1991, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v7, 1);
  Physics_QueryPoint((Physics_WorldId)v4, point, radius, extendedData, v7);
  return !HavokPhysics_CollisionQueryResult::HasHit(v7);
}

/*
==============
PhysicsQuery_ImmediateQueryPointFree
==============
*/
bool PhysicsQuery_ImmediateQueryPointFree(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData)
{
  __int64 v5; 
  Physics_QueryPointExtendedData *v8; 
  HavokPhysics_CollisionQueryResult *v10; 
  signed int v11; 
  int NumRigidBodys; 
  hknpBodyId *RigidBodyID; 
  __int64 v14; 
  hknpBodyId result; 

  v5 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2127, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2128, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  result.m_serialAndIndex = LODWORD(point->v[0]);
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 || (result.m_serialAndIndex = LODWORD(point->v[1]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) || (result.m_serialAndIndex = LODWORD(point->v[2]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2129, ASSERT_TYPE_SANITY, "( !IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] )") )
      __debugbreak();
  }
  v8 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2130, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v8->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2131, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( instanceId == -1 )
    return 0;
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2139, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v10 = s_PhysicsQuery_AnyQueryResults[(int)(28 * v5 + Physics_GetThreadId())];
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2144, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v10, 1);
  v11 = 0;
  NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v5, instanceId);
  if ( NumRigidBodys > 0 )
  {
    do
    {
      if ( HavokPhysics_CollisionQueryResult::HasHit(v10) )
        break;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v5 > 7 )
      {
        LODWORD(v14) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v14) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v5 - 2) <= 5 )
      {
        LODWORD(v14) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v14) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v5 <= 1 )
      {
        LODWORD(v14) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v14) )
          __debugbreak();
      }
      RigidBodyID = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v5, instanceId, v11);
      Physics_QueryPoint((Physics_WorldId)v5, RigidBodyID->m_serialAndIndex, point, radius, v8, v10);
      ++v11;
    }
    while ( v11 < NumRigidBodys );
  }
  return !HavokPhysics_CollisionQueryResult::HasHit(v10);
}

/*
==============
PhysicsQuery_ImmediateQueryPointFree
==============
*/
bool PhysicsQuery_ImmediateQueryPointFree(Physics_WorldId worldId, PhysicsObject *physObj, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData)
{
  __int64 v5; 

  v5 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2108, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2109, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2110, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  return PhysicsQuery_ImmediateQueryPointFree((Physics_WorldId)v5, physObj->physicsInstances[v5], point, radius, extendedData);
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
  return PhysicsQuery_ImmediateQueryPointFree((Physics_WorldId)v6, v10, point, radius, extendedData);
}

/*
==============
PhysicsQuery_ImmediateQueryPointFree
==============
*/
bool PhysicsQuery_ImmediateQueryPointFree(Physics_WorldId worldId, const gentity_s *ent, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData)
{
  __int64 v5; 
  G_PhysicsObject *v8; 

  v5 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2073, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2074, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2075, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v8 = G_PhysicsObject_Get(ent);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2078, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  return PhysicsQuery_ImmediateQueryPointFree((Physics_WorldId)v5, v8, point, radius, extendedData);
}

/*
==============
PhysicsQuery_ImmediateQueryPointWorst
==============
*/
void PhysicsQuery_ImmediateQueryPointWorst(Physics_WorldId worldId, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData, PhysicsQuery_QueryPointHit *hit)
{
  __int64 v5; 
  HavokPhysics_CollisionQueryResult *v8; 

  v5 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2010, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2011, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( ((LODWORD(point->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2012, ASSERT_TYPE_SANITY, "( !IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2013, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !extendedData->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2014, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2015, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2017, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v8 = s_PhysicsQuery_ClosestQueryResults[(int)(28 * v5 + Physics_GetThreadId())];
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2022, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v8, 1);
  Physics_QueryPoint((Physics_WorldId)v5, point, radius, extendedData, v8);
  PhysicsQuery_ExtractHitData(point, radius, v8, 0, hit);
}

/*
==============
PhysicsQuery_ImmediateQueryPointWorst
==============
*/
void PhysicsQuery_ImmediateQueryPointWorst(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData, PhysicsQuery_QueryPointHit *hit)
{
  __int64 v6; 
  Physics_QueryPointExtendedData *v9; 
  PhysicsQuery_QueryPointHit *v10; 
  HavokPhysics_CollisionQueryResult *v11; 
  signed int v12; 
  int NumRigidBodys; 
  hknpBodyId *RigidBodyID; 
  __int64 v15; 
  hknpBodyId result; 

  v6 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2222, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2223, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  result.m_serialAndIndex = LODWORD(point->v[0]);
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 || (result.m_serialAndIndex = LODWORD(point->v[1]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) || (result.m_serialAndIndex = LODWORD(point->v[2]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2224, ASSERT_TYPE_SANITY, "( !IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( point )[0] ) && !IS_NAN( ( point )[1] ) && !IS_NAN( ( point )[2] )") )
      __debugbreak();
  }
  v9 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2225, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v9->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2226, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  v10 = hit;
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2227, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( instanceId != -1 )
  {
    if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2235, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
      __debugbreak();
    v11 = s_PhysicsQuery_ClosestQueryResults[(int)(28 * v6 + Physics_GetThreadId())];
    if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2240, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    HavokPhysics_CollisionQueryResult::Reset(v11, 1);
    v12 = 0;
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v6, instanceId);
    if ( NumRigidBodys > 0 )
    {
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v6 > 7 )
        {
          LODWORD(v15) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v15) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v6 - 2) <= 5 )
        {
          LODWORD(v15) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v15) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v6 <= 1 )
        {
          LODWORD(v15) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v15) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v6, instanceId, v12);
        Physics_QueryPoint((Physics_WorldId)v6, RigidBodyID->m_serialAndIndex, point, radius, v9, v11);
        ++v12;
      }
      while ( v12 < NumRigidBodys );
      v10 = hit;
    }
    PhysicsQuery_ExtractHitData(point, radius, v11, 0, v10);
  }
}

/*
==============
PhysicsQuery_ImmediateQueryPointWorst
==============
*/
void PhysicsQuery_ImmediateQueryPointWorst(Physics_WorldId worldId, PhysicsObject *physObj, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData, PhysicsQuery_QueryPointHit *hit)
{
  __int64 v6; 

  v6 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2205, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2206, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !physObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2207, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  PhysicsQuery_ImmediateQueryPointWorst((Physics_WorldId)v6, physObj->physicsInstances[v6], point, radius, extendedData, hit);
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
  PhysicsQuery_ImmediateQueryPointWorst((Physics_WorldId)v7, v11, point, radius, extendedData, hit);
}

/*
==============
PhysicsQuery_ImmediateQueryPointWorst
==============
*/
void PhysicsQuery_ImmediateQueryPointWorst(Physics_WorldId worldId, const gentity_s *ent, const vec3_t *point, const float radius, Physics_QueryPointExtendedData *extendedData, PhysicsQuery_QueryPointHit *hit)
{
  __int64 v6; 
  G_PhysicsObject *v9; 

  v6 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2170, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2171, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2172, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v9 = G_PhysicsObject_Get(ent);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2175, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    __debugbreak();
  PhysicsQuery_ImmediateQueryPointWorst((Physics_WorldId)v6, v9, point, radius, extendedData, hit);
}

/*
==============
PhysicsQuery_ImmediateRaycastAll
==============
*/
void PhysicsQuery_ImmediateRaycastAll(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, PhysicsQuery_RaycastHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v7; 
  HavokPhysics_CollisionQueryResult *v11; 
  signed int NumHits; 
  int v13; 

  v7 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1251, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1252, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( ((LODWORD(start->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1253, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
    __debugbreak();
  if ( ((LODWORD(end->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1254, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
    __debugbreak();
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
  v11 = s_PhysicsQuery_AllQueryResults[(int)(28 * v7 + Physics_GetThreadId())];
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1266, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v11, 1);
  Physics_Raycast((Physics_WorldId)v7, start, end, extendedData, v11);
  NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(v11);
  if ( maxNumHits < NumHits )
    NumHits = maxNumHits;
  v13 = 0;
  for ( *hitsFound = NumHits; v13 < *hitsFound; ++v13 )
    PhysicsQuery_ExtractHitData(start, end, v11, v13, &hits[v13]);
}

/*
==============
PhysicsQuery_ImmediateRaycastAll
==============
*/
void PhysicsQuery_ImmediateRaycastAll(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, PhysicsQuery_RaycastHit *hits, int maxNumHits, int *hitsFound)
{
  __int64 v8; 
  Physics_RaycastExtendedData *v12; 
  PhysicsQuery_RaycastHit *v13; 
  int *v14; 
  HavokPhysics_CollisionQueryResult *result; 
  signed int v16; 
  signed int v17; 
  Physics_RaycastExtendedData *v18; 
  unsigned int v19; 
  hknpBodyId *RigidBodyID; 
  int NumHits; 
  __int64 v22; 
  int NumRigidBodys; 
  unsigned int instanceIda; 

  instanceIda = instanceId;
  v8 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1531, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1532, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( ((LODWORD(start->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1533, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
    __debugbreak();
  if ( ((LODWORD(end->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1534, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
    __debugbreak();
  v12 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1535, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v12->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1536, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  v13 = hits;
  if ( !hits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1537, ASSERT_TYPE_ASSERT, "(hits)", (const char *)&queryFormat, "hits") )
    __debugbreak();
  if ( maxNumHits <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1538, ASSERT_TYPE_ASSERT, "(maxNumHits > 0)", (const char *)&queryFormat, "maxNumHits > 0") )
    __debugbreak();
  v14 = hitsFound;
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
    v16 = 0;
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v8, instanceId);
    v17 = 0;
    if ( NumRigidBodys > 0 )
    {
      v18 = extendedData;
      v19 = instanceIda;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v8 > 7 )
        {
          LODWORD(v22) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v22) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v8 - 2) <= 5 )
        {
          LODWORD(v22) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v22) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v8 <= 1 )
        {
          LODWORD(v22) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v22) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID((hknpBodyId *)&instanceIda, (const Physics_WorldId)v8, v19, v17);
        Physics_Raycast((Physics_WorldId)v8, RigidBodyID->m_serialAndIndex, start, end, v18, result);
        ++v17;
      }
      while ( v17 < NumRigidBodys );
      v14 = hitsFound;
      v16 = 0;
      v13 = hits;
    }
    NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(result);
    if ( maxNumHits < NumHits )
      NumHits = maxNumHits;
    *v14 = NumHits;
    if ( NumHits > 0 )
    {
      do
      {
        PhysicsQuery_ExtractHitData(start, end, result, v16, &v13[v16]);
        ++v16;
      }
      while ( v16 < *v14 );
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
  HavokPhysics_CollisionQueryResult *v9; 

  v5 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1221, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1222, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( ((LODWORD(start->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1223, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
    __debugbreak();
  if ( ((LODWORD(end->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1224, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1225, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !extendedData->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1226, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1227, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1229, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v9 = s_PhysicsQuery_ClosestQueryResults[(int)(28 * v5 + Physics_GetThreadId())];
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1234, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v9, 1);
  Physics_Raycast((Physics_WorldId)v5, start, end, extendedData, v9);
  PhysicsQuery_ExtractHitData(start, end, v9, 0, hit);
}

/*
==============
PhysicsQuery_ImmediateRaycastClosest
==============
*/
void PhysicsQuery_ImmediateRaycastClosest(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, PhysicsQuery_RaycastHit *hit)
{
  __int64 v6; 
  Physics_RaycastExtendedData *v10; 
  PhysicsQuery_RaycastHit *v11; 
  HavokPhysics_CollisionQueryResult *result; 
  int NumRigidBodys; 
  signed int v14; 
  int v15; 
  unsigned int v16; 
  hknpBodyId *RigidBodyID; 
  __int64 v18; 
  unsigned int instanceIda; 

  instanceIda = instanceId;
  v6 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1436, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1437, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( ((LODWORD(start->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1438, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
    __debugbreak();
  if ( ((LODWORD(end->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1439, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
    __debugbreak();
  v10 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1440, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v10->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1441, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  v11 = hit;
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
    v14 = 0;
    v15 = NumRigidBodys;
    if ( NumRigidBodys > 0 )
    {
      v16 = instanceIda;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v6 > 7 )
        {
          LODWORD(v18) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v18) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v6 - 2) <= 5 )
        {
          LODWORD(v18) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v18) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v6 <= 1 )
        {
          LODWORD(v18) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v18) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID((hknpBodyId *)&instanceIda, (const Physics_WorldId)v6, v16, v14);
        Physics_Raycast((Physics_WorldId)v6, RigidBodyID->m_serialAndIndex, start, end, v10, result);
        ++v14;
      }
      while ( v14 < v15 );
      v11 = hit;
    }
    PhysicsQuery_ExtractHitData(start, end, result, 0, v11);
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
  HavokPhysics_CollisionQueryResult *v8; 

  v4 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1190, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1191, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( ((LODWORD(start->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1192, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
    __debugbreak();
  if ( ((LODWORD(end->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1193, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1194, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !extendedData->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1195, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1197, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v8 = s_PhysicsQuery_AnyQueryResults[(int)(28 * v4 + Physics_GetThreadId())];
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1202, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v8, 1);
  Physics_Raycast((Physics_WorldId)v4, start, end, extendedData, v8);
  return !HavokPhysics_CollisionQueryResult::HasHit(v8);
}

/*
==============
PhysicsQuery_ImmediateRaycastSightCheck
==============
*/
bool PhysicsQuery_ImmediateRaycastSightCheck(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData)
{
  __int64 v5; 
  Physics_RaycastExtendedData *v9; 
  HavokPhysics_CollisionQueryResult *v11; 
  signed int v12; 
  int NumRigidBodys; 
  hknpBodyId *RigidBodyID; 
  __int64 v15; 
  hknpBodyId result; 

  v5 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1340, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1341, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  result.m_serialAndIndex = LODWORD(start->v[0]);
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 || (result.m_serialAndIndex = LODWORD(start->v[1]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) || (result.m_serialAndIndex = LODWORD(start->v[2]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1342, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
      __debugbreak();
  }
  result.m_serialAndIndex = LODWORD(end->v[0]);
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 || (result.m_serialAndIndex = LODWORD(end->v[1]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) || (result.m_serialAndIndex = LODWORD(end->v[2]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1343, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
      __debugbreak();
  }
  v9 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1344, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v9->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1345, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( instanceId == -1 )
    return 0;
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1353, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v11 = s_PhysicsQuery_AnyQueryResults[(int)(28 * v5 + Physics_GetThreadId())];
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1358, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v11, 1);
  v12 = 0;
  NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v5, instanceId);
  if ( NumRigidBodys > 0 )
  {
    do
    {
      if ( HavokPhysics_CollisionQueryResult::HasHit(v11) )
        break;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v5 > 7 )
      {
        LODWORD(v15) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v15) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v5 - 2) <= 5 )
      {
        LODWORD(v15) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v15) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v5 <= 1 )
      {
        LODWORD(v15) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v15) )
          __debugbreak();
      }
      RigidBodyID = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v5, instanceId, v12);
      Physics_Raycast((Physics_WorldId)v5, RigidBodyID->m_serialAndIndex, start, end, v9, v11);
      ++v12;
    }
    while ( v12 < NumRigidBodys );
  }
  return !HavokPhysics_CollisionQueryResult::HasHit(v11);
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
  int v14; 
  int NumHits; 

  v9 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1643, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1644, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1645, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  if ( ((LODWORD(start->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1646, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
    __debugbreak();
  if ( ((LODWORD(end->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1647, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
    __debugbreak();
  if ( ((LODWORD(rotation->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1648, ASSERT_TYPE_SANITY, "( !IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] )") )
    __debugbreak();
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
  v14 = 0;
  Physics_Shapecast(worldId, shape, start, end, rotation, extendedData, result, NULL);
  NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(result);
  if ( maxNumHits < NumHits )
    NumHits = maxNumHits;
  *hitsFound = NumHits;
  if ( NumHits > 0 )
  {
    do
    {
      PhysicsQuery_ExtractHitData(start, end, result, v14, &hits[v14]);
      ++v14;
    }
    while ( v14 < *hitsFound );
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
  const vec3_t *v13; 
  const vec4_t *v14; 
  Physics_ShapecastExtendedData *v15; 
  PhysicsQuery_ShapecastHit *v16; 
  int *v17; 
  HavokPhysics_CollisionQueryResult *result; 
  signed int v19; 
  Physics_ShapecastExtendedData *v20; 
  unsigned int v21; 
  hknpBodyId *RigidBodyID; 
  int NumHits; 
  Physics_ShapecastExtendedData *v24; 
  signed int bodyIdx; 
  unsigned int instanceIda; 

  instanceIda = instanceId;
  v10 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1929, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1930, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( ((LODWORD(start->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1931, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
    __debugbreak();
  v13 = end;
  if ( ((LODWORD(end->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1932, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
    __debugbreak();
  v14 = rotation;
  if ( ((LODWORD(rotation->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1933, ASSERT_TYPE_SANITY, "( !IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] )") )
    __debugbreak();
  v15 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1934, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v15->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1935, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  v16 = hits;
  if ( !hits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1936, ASSERT_TYPE_ASSERT, "(hits)", (const char *)&queryFormat, "hits") )
    __debugbreak();
  if ( maxNumHits <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1937, ASSERT_TYPE_ASSERT, "(maxNumHits > 0)", (const char *)&queryFormat, "maxNumHits > 0") )
    __debugbreak();
  v17 = hitsFound;
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
    v19 = 0;
    LODWORD(end) = Physics_GetNumRigidBodys((const Physics_WorldId)v10, instanceIda);
    bodyIdx = 0;
    if ( (int)end > 0 )
    {
      v20 = extendedData;
      v21 = instanceIda;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v10 > 7 )
        {
          LODWORD(v24) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v24) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v10 - 2) <= 5 )
        {
          LODWORD(v24) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v24) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v10 <= 1 )
        {
          LODWORD(v24) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v24) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID((hknpBodyId *)&instanceIda, (const Physics_WorldId)v10, v21, bodyIdx);
        Physics_Shapecast((Physics_WorldId)v10, RigidBodyID->m_serialAndIndex, shape, start, v13, v14, v20, result, NULL);
        ++bodyIdx;
      }
      while ( bodyIdx < (int)end );
      v17 = hitsFound;
      v16 = hits;
    }
    NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(result);
    if ( maxNumHits < NumHits )
      NumHits = maxNumHits;
    *v17 = NumHits;
    if ( NumHits > 0 )
    {
      do
      {
        PhysicsQuery_ExtractHitData(start, v13, result, v19, &v16[v19]);
        ++v19;
      }
      while ( v19 < *v17 );
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

  v7 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1612, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1613, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1614, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  if ( ((LODWORD(start->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1615, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
    __debugbreak();
  if ( ((LODWORD(end->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1616, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
    __debugbreak();
  if ( ((LODWORD(rotation->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1617, ASSERT_TYPE_SANITY, "( !IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] )") )
    __debugbreak();
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
  Physics_Shapecast((Physics_WorldId)v7, shape, start, end, rotation, extendedData, result, NULL);
  PhysicsQuery_ExtractHitData(start, end, result, 0, hit);
}

/*
==============
PhysicsQuery_ImmediateShapecastClosest
==============
*/
void PhysicsQuery_ImmediateShapecastClosest(Physics_WorldId worldId, hknpShape *shape, unsigned int instanceId, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, PhysicsQuery_ShapecastHit *hit)
{
  __int64 v8; 
  const vec3_t *v12; 
  const vec4_t *v13; 
  Physics_ShapecastExtendedData *v14; 
  HavokPhysics_CollisionQueryResult *v15; 
  unsigned int NumRigidBodys; 
  signed int v17; 
  signed int i; 
  hknpBodyId *RigidBodyID; 
  Physics_ShapecastExtendedData *v20; 
  hknpBodyId result; 
  hknpShape *shapea; 
  unsigned int instanceIda; 

  instanceIda = instanceId;
  shapea = shape;
  v8 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1832, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1833, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  result.m_serialAndIndex = LODWORD(start->v[0]);
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 || (result.m_serialAndIndex = LODWORD(start->v[1]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) || (result.m_serialAndIndex = LODWORD(start->v[2]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1834, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
      __debugbreak();
  }
  v12 = end;
  result.m_serialAndIndex = LODWORD(end->v[0]);
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 || (result.m_serialAndIndex = LODWORD(end->v[1]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) || (result.m_serialAndIndex = LODWORD(end->v[2]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1835, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
      __debugbreak();
  }
  v13 = rotation;
  result.m_serialAndIndex = LODWORD(rotation->v[0]);
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 || (result.m_serialAndIndex = LODWORD(rotation->v[1]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) || (result.m_serialAndIndex = LODWORD(rotation->v[2]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) || (result.m_serialAndIndex = LODWORD(rotation->v[3]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1836, ASSERT_TYPE_SANITY, "( !IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] )") )
      __debugbreak();
  }
  v14 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1837, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v14->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1838, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1839, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1840, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  if ( instanceId != -1 )
  {
    if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1848, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
      __debugbreak();
    v15 = s_PhysicsQuery_ClosestQueryResults[(int)(28 * v8 + Physics_GetThreadId())];
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1853, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    HavokPhysics_CollisionQueryResult::Reset(v15, 1);
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v8, instanceId);
    v17 = 0;
    for ( i = NumRigidBodys; v17 < i; ++v17 )
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v8 > 7 )
      {
        LODWORD(v20) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v20) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v8 - 2) <= 5 )
      {
        LODWORD(v20) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v20) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v8 <= 1 )
      {
        LODWORD(v20) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v20) )
          __debugbreak();
      }
      RigidBodyID = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v8, instanceIda, v17);
      Physics_Shapecast((Physics_WorldId)v8, RigidBodyID->m_serialAndIndex, shapea, start, v12, v13, v14, v15, NULL);
    }
    PhysicsQuery_ExtractHitData(start, v12, v15, 0, hit);
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
  HavokPhysics_CollisionQueryResult *v10; 

  v6 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1580, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1581, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1582, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  if ( ((LODWORD(start->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1583, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
    __debugbreak();
  if ( ((LODWORD(end->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1584, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
    __debugbreak();
  if ( ((LODWORD(rotation->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1585, ASSERT_TYPE_SANITY, "( !IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1586, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !extendedData->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1587, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1589, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v10 = s_PhysicsQuery_AnyQueryResults[(int)(28 * v6 + Physics_GetThreadId())];
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1594, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v10, 1);
  Physics_Shapecast((Physics_WorldId)v6, shape, start, end, rotation, extendedData, v10, NULL);
  return !HavokPhysics_CollisionQueryResult::HasHit(v10);
}

/*
==============
PhysicsQuery_ImmediateShapecastSightCheck
==============
*/
bool PhysicsQuery_ImmediateShapecastSightCheck(Physics_WorldId worldId, hknpShape *shape, unsigned int instanceId, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData)
{
  __int64 v7; 
  const vec3_t *v11; 
  const vec4_t *v12; 
  Physics_ShapecastExtendedData *v13; 
  HavokPhysics_CollisionQueryResult *v15; 
  unsigned int NumRigidBodys; 
  signed int v17; 
  signed int i; 
  hknpBodyId *RigidBodyID; 
  Physics_ShapecastExtendedData *v20; 
  hknpBodyId result; 
  hknpShape *shapea; 
  unsigned int instanceIda; 

  instanceIda = instanceId;
  shapea = shape;
  v7 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1734, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1735, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  result.m_serialAndIndex = LODWORD(start->v[0]);
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 || (result.m_serialAndIndex = LODWORD(start->v[1]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) || (result.m_serialAndIndex = LODWORD(start->v[2]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1736, ASSERT_TYPE_SANITY, "( !IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( start )[0] ) && !IS_NAN( ( start )[1] ) && !IS_NAN( ( start )[2] )") )
      __debugbreak();
  }
  v11 = end;
  result.m_serialAndIndex = LODWORD(end->v[0]);
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 || (result.m_serialAndIndex = LODWORD(end->v[1]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) || (result.m_serialAndIndex = LODWORD(end->v[2]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1737, ASSERT_TYPE_SANITY, "( !IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( end )[0] ) && !IS_NAN( ( end )[1] ) && !IS_NAN( ( end )[2] )") )
      __debugbreak();
  }
  v12 = rotation;
  result.m_serialAndIndex = LODWORD(rotation->v[0]);
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 || (result.m_serialAndIndex = LODWORD(rotation->v[1]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) || (result.m_serialAndIndex = LODWORD(rotation->v[2]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) || (result.m_serialAndIndex = LODWORD(rotation->v[3]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1738, ASSERT_TYPE_SANITY, "( !IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( rotation )[0] ) && !IS_NAN( ( rotation )[1] ) && !IS_NAN( ( rotation )[2] ) && !IS_NAN( ( rotation )[3] )") )
      __debugbreak();
  }
  v13 = extendedData;
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1739, ASSERT_TYPE_ASSERT, "(extendedData)", (const char *)&queryFormat, "extendedData") )
    __debugbreak();
  if ( !v13->contents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1740, ASSERT_TYPE_ASSERT, "(extendedData->contents != 0)", (const char *)&queryFormat, "extendedData->contents != 0") )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1741, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  if ( instanceId == -1 )
    return 0;
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1749, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v15 = s_PhysicsQuery_AnyQueryResults[(int)(28 * v7 + Physics_GetThreadId())];
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 1754, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v15, 1);
  NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v7, instanceId);
  v17 = 0;
  for ( i = NumRigidBodys; v17 < i; ++v17 )
  {
    if ( HavokPhysics_CollisionQueryResult::HasHit(v15) )
      break;
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( (unsigned int)v7 > 7 )
    {
      LODWORD(v20) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v20) )
        __debugbreak();
    }
    if ( !g_physicsClientWorldsCreated && (unsigned int)(v7 - 2) <= 5 )
    {
      LODWORD(v20) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v20) )
        __debugbreak();
    }
    if ( !g_physicsServerWorldsCreated && (unsigned int)v7 <= 1 )
    {
      LODWORD(v20) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v20) )
        __debugbreak();
    }
    RigidBodyID = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v7, instanceIda, v17);
    Physics_Shapecast((Physics_WorldId)v7, RigidBodyID->m_serialAndIndex, shapea, start, v11, v12, v13, v15, NULL);
  }
  return !HavokPhysics_CollisionQueryResult::HasHit(v15);
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
  __int64 v7; 
  hkMonitorStream *Value; 
  hkMonitorStream *v9; 
  int v10; 
  float v11; 
  HavokPhysics_CollisionQueryResult *v12; 
  float v13; 
  float v14; 
  __int128 v15; 
  float v16; 
  float v20; 
  float v21; 
  Physics_RaycastExtendedData extendedData; 
  __int64 v24; 
  hkMonitorStream *v25; 
  vec3_t pos; 
  vec3_t wallPos; 
  vec3_t normal; 

  v24 = -2i64;
  v7 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v9 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_BrushModelSightTraceAroundCorners");
  v25 = v9;
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5028, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  if ( (unsigned int)v7 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5030, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5031, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  extendedData.ignoreBodies = NULL;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.collisionBuffer = 0.0;
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5037, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v10 = 28 * v7 + Physics_GetThreadId();
  v11 = FLOAT_1_0;
  extendedData.contents = contentMask;
  if ( end->v[0] != start->v[0] || end->v[1] != start->v[1] || end->v[2] != start->v[2] )
  {
    v12 = s_PhysicsQuery_LegacyTraceResults[v10];
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5051, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    HavokPhysics_CollisionQueryResult::Reset(v12, 1);
    Physics_Raycast((Physics_WorldId)v7, start, end, &extendedData, v12);
    if ( HavokPhysics_CollisionQueryResult::HasHit(v12) )
    {
      v13 = end->v[0] - start->v[0];
      v15 = LODWORD(end->v[1]);
      v14 = end->v[1] - start->v[1];
      v16 = end->v[2] - start->v[2];
      *(float *)&v15 = fsqrt((float)((float)(v14 * v14) + (float)(v13 * v13)) + (float)(v16 * v16));
      _XMM1 = v15;
      __asm
      {
        vcmpless xmm0, xmm1, cs:__real@80000000
        vblendvps xmm1, xmm1, xmm7, xmm0
      }
      v20 = v14 * (float)(1.0 / *(float *)&_XMM1);
      v21 = v16 * (float)(1.0 / *(float *)&_XMM1);
      HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(v12, 0, &pos);
      HavokPhysics_CollisionQueryResult::GetRaycastHitNormal(v12, 0, &normal);
      wallPos.v[0] = pos.v[0] - (float)(v13 * (float)(1.0 / *(float *)&_XMM1));
      wallPos.v[1] = pos.v[1] - v20;
      wallPos.v[2] = pos.v[2] - v21;
      v11 = PhysicsQuery_LegacyTraceRoundCorners((Physics_WorldId)v7, &wallPos, &normal, end, contentMask);
    }
  }
  if ( v9 )
    hkMonitorStream::timerEnd(v9, "Et");
  return v11;
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
  __int64 v12; 
  hkMonitorStream *Value; 
  hkMonitorStream *v14; 
  int v15; 
  hknpShape *v16; 
  hknpShape *v17; 
  hknpShape *v18; 
  hknpBodyId *v19; 
  unsigned int ThreadId; 
  bool IsShapeCacheDisabled; 
  bool v22; 
  signed int v23; 
  hknpBodyId *RigidBodyID; 
  double RaycastHitFraction; 
  unsigned int RaycastHitBodyId; 
  hknpShape **shape; 
  hknpShape **shapea; 
  bool v29; 
  int NumRigidBodys; 
  signed int bodyIdx; 
  hknpBodyId result[2]; 
  vec3_t *enda; 
  vec3_t *starta; 
  trace_t *trace; 
  hkMonitorStream *v36; 
  hknpShape *nonBrushShape; 
  hknpShape *v38; 
  Physics_ShapecastExtendedData extendedData; 
  __int64 v40; 
  hkMonitorStream *v41; 
  Physics_RaycastExtendedData quat; 

  v40 = -2i64;
  enda = (vec3_t *)end;
  starta = (vec3_t *)start;
  trace = results;
  v12 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v14 = Value;
  v36 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyCapsuleBrushEntityTrace");
  v41 = v14;
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3915, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v15 = 28 * v12 + Physics_GetThreadId();
  if ( (unsigned int)v12 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3918, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3919, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !results && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3920, ASSERT_TYPE_ASSERT, "(results)", (const char *)&queryFormat, "results") )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3921, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyQueryResults[v15], 1);
  HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyTraceResults[v15], 1);
  if ( instanceId == -1 )
    NumRigidBodys = 0;
  else
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v12, instanceId);
  if ( bounds->halfSize.v[2] == 0.0 || bounds->halfSize.v[0] == 0.0 )
  {
    v23 = 0;
    if ( NumRigidBodys > 0 )
    {
      do
      {
        quat.ignoreBodies = NULL;
        quat.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
        quat.collisionBuffer = 0.0;
        quat.phaseSelection = All;
        quat.insideHitType = Physics_RaycastInsideHitType_InsideHits;
        *(_WORD *)&quat.collectInsideHits = 256;
        quat.contents = contentMask;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v12 > 7 )
        {
          LODWORD(shape) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", shape) )
            __debugbreak();
        }
        if ( instanceId == -1 )
        {
          LODWORD(shape) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", shape) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v12 - 2) <= 5 )
        {
          LODWORD(shape) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", shape) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v12 <= 1 )
        {
          LODWORD(shape) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", shape) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID(result, (const Physics_WorldId)v12, instanceId, v23);
        Physics_Raycast((Physics_WorldId)v12, RigidBodyID->m_serialAndIndex, starta, enda, &quat, s_PhysicsQuery_LegacyTraceResults[v15]);
        ++v23;
      }
      while ( v23 < NumRigidBodys );
      v14 = v36;
    }
    if ( HavokPhysics_CollisionQueryResult::HasHit(s_PhysicsQuery_LegacyTraceResults[v15]) )
    {
      RaycastHitFraction = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(s_PhysicsQuery_LegacyTraceResults[v15], 0);
      if ( *(float *)&RaycastHitFraction <= 0.0 )
      {
        *((_BYTE *)&quat.contents + 4) = 0;
        quat.ignoreBodies = NULL;
        quat.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
        quat.collisionBuffer = 0.0;
        quat.phaseSelection = All;
        quat.contents = contentMask;
        RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(s_PhysicsQuery_LegacyTraceResults[v15], 0);
        if ( (RaycastHitBodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4026, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( hitBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( hitBodyId )") )
          __debugbreak();
        Physics_QueryPoint((Physics_WorldId)v12, RaycastHitBodyId, starta, -0.1251, (Physics_QueryPointExtendedData *)&quat, s_PhysicsQuery_LegacyQueryResults[v15]);
      }
    }
    Physics_ConvertRayQueryResultToLegacyTrace(s_PhysicsQuery_LegacyTraceResults[v15], s_PhysicsQuery_LegacyQueryResults[v15], NULL, trace);
  }
  else
  {
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
      *(vec4_t *)&quat.contents = quat_identity;
    }
    v29 = PhysicsQuery_LegacyTraceCreateShape((Physics_WorldId)v12, ps, bounds, 0, s_PhysicsQuery_LegacyTraceShapeBuffers[v15], 0, &v38, &nonBrushShape, (hknpShape **)result, NULL);
    bodyIdx = 0;
    v16 = *(hknpShape **)&result[0].m_serialAndIndex;
    v17 = nonBrushShape;
    v18 = v38;
    if ( NumRigidBodys > 0 )
    {
      do
      {
        extendedData.startTolerance = 0.0;
        extendedData.accuracy = FLOAT_0_016000001;
        extendedData.simplifyStart = 0;
        extendedData.ignoreBodies = NULL;
        extendedData.phaseSelection = All;
        extendedData.permitOutwardTrace = 0;
        extendedData.contents = contentMask;
        extendedData.collisionBuffer = FLOAT_0_125;
        extendedData.nonBrushShape = v17;
        extendedData.secondPassShape = v16;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v12 > 7 )
        {
          LODWORD(shapea) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", shapea) )
            __debugbreak();
        }
        if ( instanceId == -1 )
        {
          LODWORD(shapea) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", shapea) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v12 - 2) <= 5 )
        {
          LODWORD(shapea) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", shapea) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v12 <= 1 )
        {
          LODWORD(shapea) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", shapea) )
            __debugbreak();
        }
        v19 = HavokPhysics_GetRigidBodyID(result, (const Physics_WorldId)v12, instanceId, bodyIdx);
        Physics_Shapecast((Physics_WorldId)v12, v19->m_serialAndIndex, v18, starta, enda, (const vec4_t *)&quat, &extendedData, s_PhysicsQuery_LegacyTraceResults[v15], s_PhysicsQuery_LegacyQueryResults[v15]);
        ++bodyIdx;
      }
      while ( bodyIdx < NumRigidBodys );
      v14 = v36;
    }
    Physics_ConvertShapeQueryResultToLegacyTrace(s_PhysicsQuery_LegacyTraceResults[v15], s_PhysicsQuery_LegacyQueryResults[v15], trace);
    PhysicsQuery_LegacyTraceProcessAllSolid((Physics_WorldId)v12, trace, (const vec4_t *)&quat, v15, contentMask, v17, All, v18, enda);
    ThreadId = Physics_GetThreadId();
    IsShapeCacheDisabled = Physics_IsShapeCacheDisabled(ThreadId);
    v22 = IsShapeCacheDisabled;
    if ( v16 )
      Physics_ReleaseShape((Physics_WorldId)v12, v16, IsShapeCacheDisabled);
    if ( v18 && v29 )
      Physics_ReleaseShape((Physics_WorldId)v12, v18, v22);
  }
  if ( v14 )
    hkMonitorStream::timerEnd(v14, "Et");
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
  const vec3_t *v16; 
  const vec3_t *v17; 
  __int64 v19; 
  unsigned int *v20; 
  PhysicsQuery_ContextSettings *v21; 
  hkMonitorStream *Value; 
  hkMonitorStream *v23; 
  int v24; 
  bool v25; 
  __int64 v26; 
  unsigned int m_flags; 
  unsigned int v28; 
  int v29; 
  __int64 v30; 
  __int64 v31; 
  HavokPhysics_IgnoreBodies *v32; 
  int v33; 
  __int64 v34; 
  bool v35; 
  bool v36; 
  float v37; 
  vec3_t *v38; 
  HavokPhysics_CollisionQueryResult *v39; 
  hknpShape *v40; 
  HavokPhysics_CollisionQueryResult *v41; 
  HavokPhysics_CollisionQueryResult *v42; 
  unsigned int ThreadId; 
  bool IsShapeCacheDisabled; 
  bool v45; 
  HavokPhysics_CollisionQueryResult *v46; 
  double RaycastHitFraction; 
  unsigned int RaycastHitBodyId; 
  bool linked; 
  bool v50; 
  bool v51; 
  hknpShape *nonBrushShape; 
  hknpShape *shape; 
  vec3_t *enda; 
  trace_t *trace; 
  Physics_ShapecastExtendedData extendedData; 
  int legacyEntryId; 
  PhysicsQuery_ContextSettings *contextSettings; 
  vec3_t *angles; 
  hkMonitorStream *v60; 
  Bounds *v61; 
  playerState_s *v62; 
  BG_PMove_Cage *v63; 
  int *v64; 
  const vec3_t *v65; 
  __int64 v66; 
  hkMonitorStream *v67; 
  Physics_QueryPointExtendedData quat; 

  v66 = -2i64;
  v16 = end;
  enda = (vec3_t *)end;
  v17 = start;
  v65 = start;
  trace = results;
  v19 = worldId;
  LODWORD(shape) = worldId;
  v61 = (Bounds *)bounds;
  v64 = skipEntities;
  v20 = ignoreBodies;
  *(_QWORD *)&quat.contents = ignoreBodies;
  v62 = (playerState_s *)ps;
  angles = (vec3_t *)overrideAngles;
  v63 = cage;
  v21 = traceContext;
  contextSettings = traceContext;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v23 = Value;
  v60 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyCapsuleTrace");
  v67 = v23;
  Sys_ProfBeginNamedEvent(0xFFFF6347, "PhysicsQuery_LegacyCapsuleTrace_Internal");
  if ( (unsigned int)v19 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3718, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v19] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3719, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !results && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3720, ASSERT_TYPE_ASSERT, "(results)", (const char *)&queryFormat, "results") )
    __debugbreak();
  if ( !v61 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3721, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3723, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v24 = 28 * v19 + Physics_GetThreadId();
  legacyEntryId = v24;
  if ( traceContext )
  {
    v25 = vehicleTrace;
    if ( (traceContext->m_flags & 0x20) != 0 )
      v25 = 1;
    v51 = v25;
    v21 = contextSettings;
  }
  else
  {
    v51 = vehicleTrace;
  }
  v26 = v24;
  HavokPhysics_IgnoreBodies::Reset(s_PhysicsQuery_LegacyIgnoreBodies[v24]);
  HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyQueryResults[v26], 1);
  HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyQueryAnyResults[v26], 1);
  HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyTraceResults[v26], 1);
  if ( v21 )
  {
    m_flags = v21->m_flags;
    v28 = v21->m_flags >> 2;
    LOBYTE(v28) = (v21->m_flags & 4) == 0;
    LODWORD(nonBrushShape) = v28;
    v29 = m_flags & 8;
  }
  else
  {
    LOBYTE(nonBrushShape) = 1;
    v29 = 0;
  }
  linked = v29 != 0;
  v30 = numSkipEntities;
  if ( numSkipEntities > 0 )
  {
    v31 = 0i64;
    do
    {
      v32 = s_PhysicsQuery_LegacyIgnoreBodies[v26];
      v33 = v64[v31];
      if ( !v32 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 727, ASSERT_TYPE_ASSERT, "(ignoreBodies)", (const char *)&queryFormat, "ignoreBodies") )
          __debugbreak();
        v30 = numSkipEntities;
      }
      if ( v33 >= 0 )
      {
        HavokPhysics_IgnoreBodies::AddIgnoreEntity(v32, v33, 1, (bool)nonBrushShape, 0, 1, linked);
        v30 = numSkipEntities;
      }
      ++v31;
    }
    while ( v31 < v30 );
    v23 = v60;
    LODWORD(v19) = (_DWORD)shape;
    v17 = v65;
    v20 = *(unsigned int **)&quat.contents;
    v16 = enda;
  }
  if ( numIgnoreBodies )
  {
    v34 = numIgnoreBodies;
    do
    {
      HavokPhysics_IgnoreBodies::AddIgnoreBody(s_PhysicsQuery_LegacyIgnoreBodies[v26], *v20++);
      --v34;
    }
    while ( v34 );
    v23 = v60;
  }
  if ( v61->halfSize.v[2] == 0.0 || v61->halfSize.v[0] == 0.0 )
  {
    if ( v16->v[0] == v17->v[0] && v16->v[1] == v17->v[1] && v16->v[2] == v17->v[2] )
    {
      quat.simplify = 0;
      quat.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
      quat.collisionBuffer = 0.0;
      quat.phaseSelection = All;
      quat.contents = contentMask;
      quat.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v26];
      if ( allowCheapPointQueries )
        v46 = s_PhysicsQuery_LegacyQueryAnyResults[v26];
      else
        v46 = s_PhysicsQuery_LegacyQueryResults[v26];
      Physics_QueryPoint((Physics_WorldId)v19, v17, 0.0, &quat, v46);
      Physics_ConvertClosestPointsToLegacyTrace(v46, trace);
    }
    else
    {
      LODWORD(extendedData.ignoreBodies) = 1;
      *((float *)&extendedData.ignoreBodies + 1) = 0.0;
      *(_QWORD *)&extendedData.collisionBuffer = 0x100000000i64;
      LOWORD(extendedData.nonBrushShape) = 256;
      extendedData.contents = contentMask;
      *(_QWORD *)&extendedData.accuracy = s_PhysicsQuery_LegacyIgnoreBodies[v26];
      Physics_Raycast((Physics_WorldId)v19, v17, v16, (Physics_RaycastExtendedData *)&extendedData, s_PhysicsQuery_LegacyTraceResults[v26]);
      if ( HavokPhysics_CollisionQueryResult::HasHit(s_PhysicsQuery_LegacyTraceResults[v26]) )
      {
        RaycastHitFraction = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(s_PhysicsQuery_LegacyTraceResults[v26], 0);
        if ( *(float *)&RaycastHitFraction <= 0.0 )
        {
          quat.simplify = 0;
          quat.ignoreBodies = NULL;
          quat.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
          quat.collisionBuffer = 0.0;
          quat.phaseSelection = All;
          quat.contents = contentMask;
          RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(s_PhysicsQuery_LegacyTraceResults[v26], 0);
          if ( (RaycastHitBodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3871, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( hitBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( hitBodyId )") )
            __debugbreak();
          Physics_QueryPoint((Physics_WorldId)v19, RaycastHitBodyId, v17, -0.1251, &quat, s_PhysicsQuery_LegacyQueryResults[v26]);
        }
      }
      Physics_ConvertRayQueryResultToLegacyTrace(s_PhysicsQuery_LegacyTraceResults[v26], s_PhysicsQuery_LegacyQueryResults[v26], NULL, trace);
    }
  }
  else
  {
    if ( angles )
    {
      AnglesToQuat(angles, (vec4_t *)&quat);
      v35 = v51;
    }
    else
    {
      v35 = v51;
      PhysicsQuery_LegacyTraceBuildTraceQuat((Physics_WorldId)v19, v62, (vec4_t *)&quat, v51);
    }
    v36 = PhysicsQuery_LegacyTraceCreateShape((Physics_WorldId)v19, v62, v61, 0, s_PhysicsQuery_LegacyTraceShapeBuffers[v26], v35, &shape, &nonBrushShape, (hknpShape **)&angles, contextSettings);
    v50 = v36;
    v37 = v16->v[0];
    v38 = angles;
    if ( v37 == v17->v[0] && enda->v[1] == v17->v[1] && enda->v[2] == v17->v[2] )
    {
      LOBYTE(extendedData.startTolerance) = 0;
      *(float *)&extendedData.ignoreBodies = 0.0;
      LODWORD(extendedData.nonBrushShape) = 0;
      extendedData.contents = contentMask;
      *(_QWORD *)&extendedData.accuracy = s_PhysicsQuery_LegacyIgnoreBodies[v26];
      *(_QWORD *)&extendedData.collisionBuffer = nonBrushShape;
      if ( allowCheapPointQueries )
        v39 = s_PhysicsQuery_LegacyQueryAnyResults[v26];
      else
        v39 = s_PhysicsQuery_LegacyQueryResults[v26];
      v40 = shape;
      if ( v63 )
        Physics_GetClosestPoints((Physics_WorldId)v19, v63->numBodies, v63->bodies, shape, v17, (const vec4_t *)&quat, 0.0, (Physics_GetClosestPointsExtendedData *)&extendedData, v39);
      else
        Physics_GetClosestPoints((Physics_WorldId)v19, shape, v17, (const vec4_t *)&quat, 0.0, (Physics_GetClosestPointsExtendedData *)&extendedData, v39);
      Physics_ConvertClosestPointsToLegacyTrace(v39, trace);
    }
    else
    {
      extendedData.startTolerance = 0.0;
      extendedData.accuracy = FLOAT_0_016000001;
      extendedData.simplifyStart = 0;
      extendedData.phaseSelection = All;
      extendedData.contents = contentMask;
      extendedData.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v26];
      extendedData.collisionBuffer = FLOAT_0_125;
      extendedData.nonBrushShape = nonBrushShape;
      extendedData.secondPassShape = (hknpShape *)angles;
      if ( contextSettings )
        extendedData.permitOutwardTrace = (contextSettings->m_flags & 0x10) == 0;
      else
        extendedData.permitOutwardTrace = 1;
      if ( allowCheapPointQueries )
        v41 = s_PhysicsQuery_LegacyQueryAnyResults[v26];
      else
        v41 = s_PhysicsQuery_LegacyQueryResults[v26];
      v42 = s_PhysicsQuery_LegacyTraceResults[v26];
      v40 = shape;
      if ( v63 )
        Physics_Shapecast((Physics_WorldId)v19, v63->numBodies, v63->bodies, shape, v17, enda, (const vec4_t *)&quat, &extendedData, v42, v41);
      else
        Physics_Shapecast((Physics_WorldId)v19, shape, v17, enda, (const vec4_t *)&quat, &extendedData, v42, v41);
      Physics_ConvertShapeQueryResultToLegacyTrace(s_PhysicsQuery_LegacyTraceResults[v26], v41, trace);
      PhysicsQuery_LegacyTraceProcessAllSolid((Physics_WorldId)v19, trace, (const vec4_t *)&quat, legacyEntryId, contentMask, nonBrushShape, All, v40, enda);
      v36 = v50;
    }
    ThreadId = Physics_GetThreadId();
    IsShapeCacheDisabled = Physics_IsShapeCacheDisabled(ThreadId);
    v45 = IsShapeCacheDisabled;
    if ( v38 )
      Physics_ReleaseShape((Physics_WorldId)v19, (hknpShape *)v38, IsShapeCacheDisabled);
    if ( v40 && v36 )
      Physics_ReleaseShape((Physics_WorldId)v19, v40, v45);
  }
  Sys_ProfEndNamedEvent();
  if ( v23 )
    hkMonitorStream::timerEnd(v23, "Et");
}

/*
==============
PhysicsQuery_LegacyEntityContactCapsule
==============
*/
__int64 PhysicsQuery_LegacyEntityContactCapsule(Physics_WorldId worldId, const Bounds *bounds, unsigned int physicsInstanceId, const gentity_s *ent)
{
  __int64 v7; 
  hkMonitorStream *Value; 
  hkMonitorStream *v9; 
  int v10; 
  unsigned int v11; 
  unsigned __int8 modelType; 
  __int64 v13; 
  HavokPhysics_CollisionQueryResult *v14; 
  hknpShape *ShapeCapsuleUpAxis; 
  int NumRigidBodys; 
  unsigned int v17; 
  unsigned int RigidBodyID; 
  bool v19; 
  Physics_GetClosestPointsExtendedData extendedData; 

  v7 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v9 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyEntityContactCapsule");
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4515, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v10 = Physics_GetThreadId() + 28 * v7;
  if ( (unsigned int)v7 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4518, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4519, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4520, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  v11 = 0;
  modelType = 5;
  if ( ent )
    modelType = ent->r.modelType;
  switch ( modelType )
  {
    case 1u:
      if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4538, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
        __debugbreak();
      v19 = BG_TriggerRadius_Contacts_Capsule(&ent->r.currentOrigin, &ent->r.box, bounds);
      goto LABEL_44;
    case 2u:
      if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4545, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
        __debugbreak();
      v19 = BG_TriggerRadiusRotate_Contacts_Capsule(&ent->r.currentOrigin, &ent->r.currentAngles, &ent->r.box, bounds);
      goto LABEL_44;
    case 3u:
      if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4552, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
        __debugbreak();
      v19 = BG_TriggerDisk_Contacts_Capsule(&ent->r.currentOrigin, &ent->r.box, bounds);
LABEL_44:
      v11 = v19;
      goto LABEL_45;
  }
  if ( physicsInstanceId != -1 )
  {
    extendedData.contents = -1;
    extendedData.simplify = 0;
    extendedData.ignoreBodies = NULL;
    extendedData.collisionBuffer = 0.0;
    extendedData.nonBrushShape = NULL;
    extendedData.phaseSelection = All;
    v13 = v10;
    v14 = s_PhysicsQuery_LegacyQueryAnyResults[v10];
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4569, ASSERT_TYPE_ASSERT, "(queryResult)", (const char *)&queryFormat, "queryResult") )
      __debugbreak();
    HavokPhysics_CollisionQueryResult::Reset(v14, 1);
    ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis((Physics_WorldId)v7, &bounds->midPoint, bounds->halfSize.v[2] - bounds->halfSize.v[0], bounds->halfSize.v[0] + 0.125, s_PhysicsQuery_LegacyTraceShapeBuffers[v13], 432, Temporary);
    if ( !ShapeCapsuleUpAxis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4574, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
      __debugbreak();
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v7, physicsInstanceId);
    v17 = 0;
    if ( NumRigidBodys > 0 )
    {
      while ( 1 )
      {
        RigidBodyID = Physics_GetRigidBodyID((const Physics_WorldId)v7, physicsInstanceId, v17);
        Physics_GetClosestPoints((Physics_WorldId)v7, RigidBodyID, ShapeCapsuleUpAxis, &vec3_origin, &quat_identity, 0.0, &extendedData, v14);
        if ( HavokPhysics_CollisionQueryResult::HasHit(v14) )
          break;
        if ( (int)++v17 >= NumRigidBodys )
          goto LABEL_45;
      }
      v11 = 1;
    }
  }
LABEL_45:
  if ( v9 )
    hkMonitorStream::timerEnd(v9, "Et");
  return v11;
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
  unsigned int LegacyEntityContactPointDefaultCase; 
  float v11; 
  float v12; 
  float v13; 
  bool v14; 
  bool v15; 
  float v16; 
  float v17; 
  float v18; 
  vec3_t vec; 
  vec3_t v21; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 

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
  switch ( ent->r.modelType )
  {
    case 1u:
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(ent->r.currentOrigin.v[2] + ent->r.box.midPoint.v[2]) - pos->v[2]) & _xmm) < ent->r.box.halfSize.v[2] )
      {
        v16 = ent->r.box.halfSize.v[0] * ent->r.box.halfSize.v[0];
        v17 = pos->v[1] - ent->r.currentOrigin.v[1];
        v18 = (float)(pos->v[0] - ent->r.currentOrigin.v[0]) * (float)(pos->v[0] - ent->r.currentOrigin.v[0]);
        LegacyEntityContactPointDefaultCase = 0;
        v14 = v16 < (float)((float)(v17 * v17) + v18);
        v15 = v16 == (float)((float)(v17 * v17) + v18);
        goto LABEL_22;
      }
LABEL_20:
      LegacyEntityContactPointDefaultCase = 0;
      break;
    case 2u:
      AnglesToAxis(&ent->r.currentAngles, &axis);
      MatrixInverse(&axis, &out);
      vec.v[0] = pos->v[0] - ent->r.currentOrigin.v[0];
      vec.v[1] = pos->v[1] - ent->r.currentOrigin.v[1];
      vec.v[2] = pos->v[2] - ent->r.currentOrigin.v[2];
      AxisTransformVec3(&out, &vec, &v21);
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(ent->r.box.midPoint.v[2] - v21.v[2]) & _xmm) < ent->r.box.halfSize.v[2] )
      {
        v12 = ent->r.box.halfSize.v[0] * ent->r.box.halfSize.v[0];
        v13 = v21.v[1];
        LegacyEntityContactPointDefaultCase = 0;
        v14 = v12 < (float)((float)(v21.v[0] * v21.v[0]) + (float)(v13 * v13));
        v15 = v12 == (float)((float)(v21.v[0] * v21.v[0]) + (float)(v13 * v13));
LABEL_22:
        LOBYTE(LegacyEntityContactPointDefaultCase) = !v14 && !v15;
        break;
      }
      goto LABEL_20;
    case 3u:
      v11 = pos->v[1] - ent->r.currentOrigin.v[1];
      LegacyEntityContactPointDefaultCase = (float)((float)(v11 * v11) + (float)((float)(pos->v[0] - ent->r.currentOrigin.v[0]) * (float)(pos->v[0] - ent->r.currentOrigin.v[0]))) >= (float)((float)((float)(pos->v[0] + ent->r.box.halfSize.v[0]) - 64.0) * (float)((float)(pos->v[0] + ent->r.box.halfSize.v[0]) - 64.0));
      break;
    default:
      LegacyEntityContactPointDefaultCase = PhysicsQuery_LegacyEntityContactPointDefaultCase((Physics_WorldId)v7, pos, physicsInstanceId);
      break;
  }
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
  unsigned int v6; 
  HavokPhysics_CollisionQueryResult *v7; 
  int NumRigidBodys; 
  hknpBodyId *RigidBodyID; 
  __int64 v11; 
  Physics_QueryPointExtendedData extendedData; 
  hknpBodyId result; 

  if ( physicsInstanceId == -1 )
    return 0i64;
  v6 = 0;
  extendedData.contents = -1;
  extendedData.collisionBuffer = 0.0;
  extendedData.ignoreBodies = NULL;
  extendedData.phaseSelection = All;
  extendedData.simplify = 0;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  v7 = s_PhysicsQuery_LegacyQueryAnyResults[Physics_GetThreadId() + 28 * worldId];
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4396, ASSERT_TYPE_ASSERT, "(queryResult)", (const char *)&queryFormat, "queryResult") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v7, 1);
  NumRigidBodys = Physics_GetNumRigidBodys(worldId, physicsInstanceId);
  if ( NumRigidBodys <= 0 )
    return 0i64;
  while ( 1 )
  {
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
    {
      LODWORD(v11) = worldId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v11) )
        __debugbreak();
    }
    if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
    {
      LODWORD(v11) = worldId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v11) )
        __debugbreak();
    }
    if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
    {
      LODWORD(v11) = worldId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v11) )
        __debugbreak();
    }
    RigidBodyID = HavokPhysics_GetRigidBodyID(&result, worldId, physicsInstanceId, v6);
    Physics_QueryPoint(worldId, RigidBodyID->m_serialAndIndex, pos, 0.0, &extendedData, v7);
    if ( HavokPhysics_CollisionQueryResult::HasHit(v7) )
      break;
    if ( (int)++v6 >= NumRigidBodys )
      return 0i64;
  }
  return 1i64;
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
  __int64 v7; 
  hkMonitorStream *Value; 
  hkMonitorStream *v9; 
  int v10; 
  float v11; 
  float v12; 
  __int64 v13; 
  HavokPhysics_CollisionQueryResult *v14; 
  unsigned int v15; 
  unsigned int v16; 
  int NumRigidBodys; 
  hknpShape *ShapeCapsuleUpAxis; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned __int8 *WeaponPriorityMap; 
  unsigned int v24; 
  hknpBodyId *RigidBodyID; 
  __int64 shapeStorage; 
  Physics_ShapecastExtendedData extendedData; 

  v7 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v9 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyEntitySightTrace");
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4733, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v10 = Physics_GetThreadId() + 28 * v7;
  if ( (unsigned int)v7 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4736, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4737, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4738, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  v11 = bounds->halfSize.v[0];
  v12 = bounds->halfSize.v[2];
  v13 = v10;
  v14 = s_PhysicsQuery_LegacyQueryAnyResults[v10];
  if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4750, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v14, 1);
  v15 = 0;
  v16 = physicsInstanceId;
  if ( physicsInstanceId != -1 )
  {
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v7, physicsInstanceId);
    if ( v12 == 0.0 || v11 == 0.0 )
    {
      *(_QWORD *)&extendedData.accuracy = 0i64;
      LODWORD(extendedData.ignoreBodies) = 1;
      *((float *)&extendedData.ignoreBodies + 1) = 0.0;
      extendedData.collisionBuffer = 0.0;
      *((_DWORD *)&extendedData.collisionBuffer + 1) = 1;
      LOWORD(extendedData.nonBrushShape) = 256;
      extendedData.contents = contentMask;
      if ( Physics_IsDetailWorld((Physics_WorldId)v7) )
      {
        WeaponPriorityMap = BG_GetWeaponPriorityMap(&NULL_WEAPON, 0);
        Physics_AddDetailTrace(v14, WeaponPriorityMap);
        LODWORD(extendedData.ignoreBodies) = 0;
      }
      v24 = 0;
      if ( NumRigidBodys > 0 )
      {
        do
        {
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( (unsigned int)v7 > 7 )
          {
            LODWORD(shapeStorage) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", shapeStorage) )
              __debugbreak();
          }
          if ( !g_physicsClientWorldsCreated && (unsigned int)(v7 - 2) <= 5 )
          {
            LODWORD(shapeStorage) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", shapeStorage) )
              __debugbreak();
          }
          if ( !g_physicsServerWorldsCreated && (unsigned int)v7 <= 1 )
          {
            LODWORD(shapeStorage) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", shapeStorage) )
              __debugbreak();
          }
          RigidBodyID = HavokPhysics_GetRigidBodyID((hknpBodyId *)&physicsInstanceId, (const Physics_WorldId)v7, v16, v24);
          Physics_Raycast((Physics_WorldId)v7, RigidBodyID->m_serialAndIndex, start, end, (Physics_RaycastExtendedData *)&extendedData, v14);
          if ( HavokPhysics_CollisionQueryResult::HasHit(v14) )
            goto LABEL_48;
        }
        while ( (int)++v24 < NumRigidBodys );
      }
    }
    else
    {
      extendedData.startTolerance = 0.0;
      _XMM0 = LODWORD(FLOAT_0_016000001);
      extendedData.accuracy = FLOAT_0_016000001;
      extendedData.simplifyStart = 0;
      extendedData.ignoreBodies = NULL;
      extendedData.collisionBuffer = 0.0;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&extendedData.nonBrushShape = _XMM0;
      extendedData.phaseSelection = All;
      extendedData.permitOutwardTrace = 0;
      extendedData.contents = contentMask;
      ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis((Physics_WorldId)v7, &bounds->midPoint, v12 - v11, v11, s_PhysicsQuery_LegacyTraceShapeBuffers[v13], 432, Temporary);
      if ( !ShapeCapsuleUpAxis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4770, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
        __debugbreak();
      v21 = 0;
      if ( NumRigidBodys > 0 )
      {
        while ( 1 )
        {
          v22 = Physics_GetRigidBodyID((const Physics_WorldId)v7, v16, v21);
          Physics_Shapecast((Physics_WorldId)v7, v22, ShapeCapsuleUpAxis, start, end, &quat_identity, &extendedData, v14, NULL);
          if ( HavokPhysics_CollisionQueryResult::HasHit(v14) )
            break;
          if ( (int)++v21 >= NumRigidBodys )
            goto LABEL_49;
        }
LABEL_48:
        v15 = 1;
      }
    }
  }
LABEL_49:
  if ( v9 )
    hkMonitorStream::timerEnd(v9, "Et");
  return v15;
}

/*
==============
PhysicsQuery_LegacyGetEntityPointContents
==============
*/
__int64 PhysicsQuery_LegacyGetEntityPointContents(Physics_WorldId worldId, const vec3_t *pos, unsigned int physicsInstanceId, int contentMask)
{
  int v4; 
  __int64 v6; 
  hkMonitorStream *Value; 
  hkMonitorStream *v8; 
  unsigned int v9; 
  HavokPhysics_CollisionQueryResult *v10; 
  int NumRigidBodys; 
  signed int v12; 
  vec3_t *v13; 
  hknpBodyId *RigidBodyID; 
  __int64 v16; 
  hkMonitorStream *v17; 
  Physics_QueryPointExtendedData extendedData; 
  hknpBodyId result; 
  vec3_t *point; 
  int v21; 

  v21 = contentMask;
  point = (vec3_t *)pos;
  v4 = contentMask;
  v6 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v8 = Value;
  v17 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyGetEntityPointContents");
  if ( (unsigned int)v6 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4337, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4338, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  extendedData.simplify = 0;
  v9 = 0;
  extendedData.ignoreBodies = NULL;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.collisionBuffer = 0.0;
  extendedData.phaseSelection = All;
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4345, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  extendedData.contents = v4;
  v10 = s_PhysicsQuery_LegacyQueryAnyResults[(int)(28 * v6 + Physics_GetThreadId())];
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4353, ASSERT_TYPE_ASSERT, "(queryResult)", (const char *)&queryFormat, "queryResult") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v10, 1);
  NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v6, physicsInstanceId);
  v12 = 0;
  if ( NumRigidBodys > 0 )
  {
    v13 = point;
    do
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v6 > 7 )
      {
        LODWORD(v16) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v16) )
          __debugbreak();
      }
      if ( physicsInstanceId == -1 )
      {
        LODWORD(v16) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v16) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(v6 - 2) <= 5 )
      {
        LODWORD(v16) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v16) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)v6 <= 1 )
      {
        LODWORD(v16) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v16) )
          __debugbreak();
      }
      RigidBodyID = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v6, physicsInstanceId, v12);
      Physics_QueryPoint((Physics_WorldId)v6, RigidBodyID->m_serialAndIndex, v13, 0.0, &extendedData, v10);
      ++v12;
    }
    while ( v12 < NumRigidBodys );
    v8 = v17;
    v9 = 0;
    v4 = v21;
  }
  if ( HavokPhysics_CollisionQueryResult::HasHit(v10) )
    v9 = v4 & HavokPhysics_CollisionQueryResult::GetClosestPointHitHitContents(v10, 0);
  if ( v8 )
    hkMonitorStream::timerEnd(v8, "Et");
  return v9;
}

/*
==============
PhysicsQuery_LegacyGetPointContents
==============
*/
__int64 PhysicsQuery_LegacyGetPointContents(Physics_WorldId worldId, const vec3_t *pos, int skipEntity, int contentMask)
{
  __int64 v7; 
  hkMonitorStream *Value; 
  hkMonitorStream *v9; 
  int v10; 
  unsigned int v11; 
  HavokPhysics_IgnoreBodies *v12; 
  HavokPhysics_CollisionQueryResult *v13; 
  Physics_QueryPointExtendedData extendedData; 

  v7 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v9 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyGetPointContents");
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4290, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v10 = Physics_GetThreadId() + 28 * v7;
  if ( (unsigned int)v7 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4293, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4294, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  extendedData.simplify = 0;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.collisionBuffer = 0.0;
  v11 = 0;
  extendedData.phaseSelection = All;
  HavokPhysics_IgnoreBodies::Reset(s_PhysicsQuery_LegacyIgnoreBodies[v10]);
  v12 = s_PhysicsQuery_LegacyIgnoreBodies[v10];
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 727, ASSERT_TYPE_ASSERT, "(ignoreBodies)", (const char *)&queryFormat, "ignoreBodies") )
    __debugbreak();
  if ( skipEntity >= 0 )
    HavokPhysics_IgnoreBodies::AddIgnoreEntity(v12, skipEntity, 1, 1, 0, 1, 0);
  extendedData.contents = contentMask;
  extendedData.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v10];
  v13 = s_PhysicsQuery_LegacyQueryAnyResults[v10];
  if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4310, ASSERT_TYPE_ASSERT, "(queryResult)", (const char *)&queryFormat, "queryResult") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v13, 1);
  Physics_QueryPoint((Physics_WorldId)v7, pos, 0.0, &extendedData, v13);
  if ( HavokPhysics_CollisionQueryResult::HasHit(v13) )
    v11 = contentMask & HavokPhysics_CollisionQueryResult::GetClosestPointHitHitContents(v13, 0);
  if ( v9 )
    hkMonitorStream::timerEnd(v9, "Et");
  return v11;
}

/*
==============
PhysicsQuery_LegacyGrenadeTrace
==============
*/
void PhysicsQuery_LegacyGrenadeTrace(trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int grenadeEntity, const int *skipEntities, int skipEntityCount, team_t skipTeamCharacters, int contentMask, Physics_QueryPhaseSelection phaseSelection, bool detail, const Physics_WorldId mainWorldId, const Physics_WorldId detailWorldId)
{
  const vec3_t *v15; 
  const vec3_t *v16; 
  hkMonitorStream *Value; 
  hkMonitorStream *v19; 
  __int64 v21; 
  HavokPhysics_IgnoreBodies *v22; 
  __int64 v23; 
  int v24; 
  __int64 v25; 
  HavokPhysics_IgnoreBodies *v26; 
  int v27; 
  hknpShape *v28; 
  unsigned __int8 *WeaponPriorityMap; 
  trace_t *v31; 
  unsigned __int8 *v32; 
  int NumHits; 
  int v34; 
  HavokPhysics_CollisionQueryResult *v35; 
  int ClosestPointHitRef; 
  bool v37; 
  double RaycastHitFraction; 
  const Physics_DetailHitData *DetailHitData; 
  hkMonitorStream *v41; 
  Physics_RaycastExtendedData v44; 
  Physics_QueryPointExtendedData v45; 
  Physics_ShapecastExtendedData extendedData; 
  __int64 v47; 
  hkMonitorStream *v48; 
  vec3_t center; 
  float v50; 
  float v51; 
  float v52; 

  v47 = -2i64;
  v15 = end;
  v16 = start;
  if ( !skipEntities && skipEntityCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5223, ASSERT_TYPE_ASSERT, "(skipEntities || skipEntityCount == 0)", (const char *)&queryFormat, "skipEntities || skipEntityCount == 0") )
    __debugbreak();
  center.v[0] = 0.0;
  center.v[1] = 0.0;
  center.v[2] = 0.0;
  v50 = tinyRadius;
  v51 = tinyRadius;
  v52 = tinyRadius;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v19 = Value;
  v41 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyGrenadeTrace");
  v48 = v19;
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
  v21 = (int)(28 * mainWorldId + Physics_GetThreadId());
  HavokPhysics_IgnoreBodies::Reset(s_PhysicsQuery_LegacyIgnoreBodies[v21]);
  v22 = s_PhysicsQuery_LegacyIgnoreBodies[v21];
  if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 727, ASSERT_TYPE_ASSERT, "(ignoreBodies)", (const char *)&queryFormat, "ignoreBodies") )
    __debugbreak();
  if ( grenadeEntity >= 0 )
    HavokPhysics_IgnoreBodies::AddIgnoreEntity(v22, grenadeEntity, 1, 1, 0, 0, 0);
  v23 = skipEntityCount;
  v24 = 0;
  if ( skipEntityCount > 0i64 )
  {
    v25 = 0i64;
    do
    {
      v26 = s_PhysicsQuery_LegacyIgnoreBodies[v21];
      v27 = skipEntities[v25];
      if ( !v26 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 727, ASSERT_TYPE_ASSERT, "(ignoreBodies)", (const char *)&queryFormat, "ignoreBodies") )
          __debugbreak();
        v23 = skipEntityCount;
      }
      if ( v27 >= 0 )
      {
        HavokPhysics_IgnoreBodies::AddIgnoreEntity(v26, v27, 1, 0, 0, 0, 0);
        v23 = skipEntityCount;
      }
      ++v25;
    }
    while ( v25 < v23 );
    v19 = v41;
    v24 = 0;
    v16 = start;
    v15 = end;
  }
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(s_PhysicsQuery_LegacyIgnoreBodies[v21], -830);
  s_PhysicsQuery_LegacyIgnoreBodies[v21]->m_ignoreTeamCharacters = skipTeamCharacters;
  v28 = Physics_CreateShapeCapsuleUpAxis(mainWorldId, &center, v52 - v50, v50, s_PhysicsQuery_LegacyTraceShapeBuffers[v21], 432, Temporary);
  if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5276, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  if ( v15->v[0] == v16->v[0] && v15->v[1] == v16->v[1] && v15->v[2] == v16->v[2] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5281, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Grenade trying to trace zero distance - currently unsupported") )
      __debugbreak();
  }
  else
  {
    extendedData.startTolerance = 0.0;
    extendedData.accuracy = FLOAT_0_016000001;
    extendedData.simplifyStart = 0;
    __asm { vpxor   xmm1, xmm1, xmm1 }
    *(_OWORD *)&extendedData.nonBrushShape = _XMM1;
    v44.collisionBuffer = 0.0;
    v44.insideHitType = Physics_RaycastInsideHitType_InsideHits;
    *(_WORD *)&v44.collectInsideHits = 256;
    v45.simplify = 0;
    v45.collisionBuffer = 0.0;
    extendedData.contents = contentMask & 0xFDFFBFFF;
    extendedData.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v21];
    extendedData.collisionBuffer = FLOAT_0_125;
    extendedData.phaseSelection = phaseSelection;
    extendedData.permitOutwardTrace = 1;
    v44.contents = contentMask & 0x2004000;
    v44.ignoreBodies = extendedData.ignoreBodies;
    v44.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
    v44.phaseSelection = phaseSelection;
    v45.contents = contentMask & 0x2004000;
    v45.ignoreBodies = extendedData.ignoreBodies;
    v45.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
    v45.phaseSelection = phaseSelection;
    HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyTraceResults[v21], 1);
    if ( detail )
    {
      WeaponPriorityMap = BG_GetWeaponPriorityMap(&NULL_WEAPON, 0);
      Physics_AddDetailTrace(s_PhysicsQuery_LegacyTraceResults[v21], WeaponPriorityMap);
    }
    Physics_Shapecast(mainWorldId, v28, v16, v15, &quat_identity, &extendedData, s_PhysicsQuery_LegacyTraceResults[v21], NULL);
    v31 = results;
    Physics_ConvertShapeQueryResultToLegacyTrace(s_PhysicsQuery_LegacyTraceResults[v21], NULL, results);
    HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyTraceResults[v21], 1);
    v32 = BG_GetWeaponPriorityMap(&NULL_WEAPON, 0);
    Physics_AddDetailTrace(s_PhysicsQuery_LegacyTraceResults[v21], v32);
    Physics_Raycast(mainWorldId, v16, v15, &v44, s_PhysicsQuery_LegacyTraceResults[v21]);
    HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyQueryAllResults[v21], 1);
    Physics_QueryPoint(mainWorldId, v16, 0.0, &v45, s_PhysicsQuery_LegacyQueryAllResults[v21]);
    NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(s_PhysicsQuery_LegacyQueryAllResults[v21]);
    if ( NumHits > 0 )
    {
      v34 = NumHits;
      do
      {
        if ( !HavokPhysics_CollisionQueryResult::HasHit(s_PhysicsQuery_LegacyTraceResults[v21]) || (v35 = s_PhysicsQuery_LegacyTraceResults[v21], ClosestPointHitRef = HavokPhysics_CollisionQueryResult::GetClosestPointHitRef(s_PhysicsQuery_LegacyQueryAllResults[v21], v24), v37 = HavokPhysics_CollisionQueryResult::GetRaycastHitRef(v35, 0) == ClosestPointHitRef, v15 = end, !v37) )
          HavokPhysics_CollisionQueryResult::AddQueryPointHitAsRaycastHit(s_PhysicsQuery_LegacyTraceResults[v21], mainWorldId, s_PhysicsQuery_LegacyQueryAllResults[v21], v24, v16, v15, &v44);
        ++v24;
      }
      while ( v24 < v34 );
      v19 = v41;
      v31 = results;
    }
    if ( HavokPhysics_CollisionQueryResult::HasHit(s_PhysicsQuery_LegacyTraceResults[v21]) )
    {
      RaycastHitFraction = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(s_PhysicsQuery_LegacyTraceResults[v21], 0);
      if ( *(float *)&RaycastHitFraction < v31->fraction )
      {
        DetailHitData = Physics_GetDetailHitData(s_PhysicsQuery_LegacyTraceResults[v21], 0, 0);
        Physics_ConvertRayQueryResultToLegacyTrace(s_PhysicsQuery_LegacyTraceResults[v21], NULL, DetailHitData, v31);
      }
    }
  }
  Profile_EndInternal(NULL);
  if ( v19 )
    hkMonitorStream::timerEnd(v19, "Et");
}

/*
==============
PhysicsQuery_LegacyLightSightTrace
==============
*/
_BOOL8 PhysicsQuery_LegacyLightSightTrace(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, int contentMask)
{
  __int64 v7; 
  hkMonitorStream *Value; 
  hkMonitorStream *v9; 
  int v10; 
  BOOL HasHit; 
  HavokPhysics_CollisionQueryResult *v12; 
  Physics_RaycastExtendedData extendedData; 

  v7 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v9 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyLightSightTrace");
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4823, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS", -2i64, v9) )
    __debugbreak();
  v10 = Physics_GetThreadId() + 28 * v7;
  if ( (unsigned int)(v7 - 2) > 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4826, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_CLIENT_FIRST && worldId <= PHYSICS_WORLD_ID_CLIENT_LAST") )
    __debugbreak();
  if ( s_PhysicsQuery_WorldInitialized[v7] )
  {
    HavokPhysics_IgnoreBodies::Reset(s_PhysicsQuery_LegacyIgnoreBodies[v10]);
    HavokPhysics_IgnoreBodies::SetIgnoreRefs(s_PhysicsQuery_LegacyIgnoreBodies[v10], -2);
    v12 = s_PhysicsQuery_LegacyQueryAnyResults[v10];
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4847, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
      __debugbreak();
    HavokPhysics_CollisionQueryResult::Reset(v12, 1);
    extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
    extendedData.collisionBuffer = 0.0;
    extendedData.phaseSelection = All;
    extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
    *(_WORD *)&extendedData.collectInsideHits = 256;
    extendedData.contents = contentMask;
    extendedData.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v10];
    Physics_Raycast((Physics_WorldId)v7, start, end, &extendedData, v12);
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(v12);
  }
  else
  {
    HasHit = 0;
  }
  if ( v9 )
    hkMonitorStream::timerEnd(v9, "Et");
  return HasHit;
}

/*
==============
PhysicsQuery_LegacyMPCGWeaponSimTrace
==============
*/
void PhysicsQuery_LegacyMPCGWeaponSimTrace(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, const int *skipEntities, int skipEntityCount, int skipChildren, int contentMask, int locational, unsigned __int8 *priorityMap, Physics_QueryPhaseSelection phaseSelection, const bool detectInsideRaycasts)
{
  const vec3_t *v13; 
  const vec3_t *v14; 
  trace_t *v15; 
  __int64 v16; 
  hknpShape *Value; 
  hknpShape *v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  const int *v22; 
  HavokPhysics_IgnoreBodies *v23; 
  int v24; 
  char v25; 
  const vec3_t *v26; 
  hknpShape *v27; 
  int v28; 
  hknpShape *v29; 
  Physics_QueryPhaseSelection v30; 
  const vec3_t *v31; 
  unsigned int ThreadId; 
  bool IsShapeCacheDisabled; 
  int v34; 
  unsigned __int8 *v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  HavokPhysics_CollisionQueryResult *v40; 
  int ClosestPointHitRef; 
  double RaycastHitFraction; 
  unsigned int RaycastHitBodyId; 
  Physics_QueryPointExtendedData v44; 
  hknpShape *shape; 
  Physics_ShapecastExtendedData extendedData; 
  int legacyEntryId; 
  Physics_DetailHitData *detailHitData; 
  __int64 v49; 
  __int128 v50; 

  v49 = -2i64;
  v13 = end;
  v14 = start;
  v15 = results;
  v16 = worldId;
  Value = (hknpShape *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v18 = Value;
  shape = Value;
  if ( Value )
    hkMonitorStream::timerBegin((hkMonitorStream *)Value, "TtLegacyQuery: PhysicsQuery_LegacyMPCGWeaponSimTrace");
  *(_QWORD *)&v50 = v18;
  if ( (unsigned int)v16 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3527, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v16] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3528, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3529, ASSERT_TYPE_ASSERT, "(results)", (const char *)&queryFormat, "results") )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3530, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  if ( !skipEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3531, ASSERT_TYPE_ASSERT, "(skipEntities)", (const char *)&queryFormat, "skipEntities") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3533, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  legacyEntryId = 28 * v16 + Physics_GetThreadId();
  v19 = legacyEntryId;
  HavokPhysics_IgnoreBodies::Reset(s_PhysicsQuery_LegacyIgnoreBodies[legacyEntryId]);
  HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyQueryResults[legacyEntryId], 1);
  HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyTraceResults[legacyEntryId], 1);
  v20 = skipEntityCount;
  v21 = 0i64;
  detailHitData = NULL;
  if ( skipEntityCount > 0 )
  {
    v22 = skipEntities;
    do
    {
      v23 = s_PhysicsQuery_LegacyIgnoreBodies[legacyEntryId];
      v24 = v22[v21];
      if ( !v23 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 727, ASSERT_TYPE_ASSERT, "(ignoreBodies)", (const char *)&queryFormat, "ignoreBodies") )
          __debugbreak();
        v20 = skipEntityCount;
      }
      if ( v24 >= 0 )
      {
        HavokPhysics_IgnoreBodies::AddIgnoreEntity(v23, v24, 1, skipChildren == 1, 0, 1, 0);
        v20 = skipEntityCount;
      }
      ++v21;
    }
    while ( v21 < v20 );
    v18 = shape;
    LODWORD(v16) = worldId;
    v14 = start;
    v13 = end;
    v15 = results;
  }
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(s_PhysicsQuery_LegacyIgnoreBodies[legacyEntryId], 194);
  if ( bounds->halfSize.v[2] == 0.0 || bounds->halfSize.v[0] == 0.0 )
  {
    if ( v13->v[0] == v14->v[0] && v13->v[1] == v14->v[1] && v13->v[2] == v14->v[2] )
    {
      v44.simplify = 0;
      v44.collisionBuffer = 0.0;
      if ( locational && priorityMap )
      {
        v34 = contentMask & 0xFDFFBFFF;
        v44.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
      }
      else
      {
        v34 = contentMask;
        v44.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
      }
      v44.contents = v34;
      v44.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[legacyEntryId];
      v44.phaseSelection = phaseSelection;
      Physics_QueryPoint((Physics_WorldId)v16, v14, 0.0, &v44, s_PhysicsQuery_LegacyQueryResults[legacyEntryId]);
      Physics_ConvertClosestPointsToLegacyTrace(s_PhysicsQuery_LegacyQueryResults[v19], v15);
    }
    else
    {
      v35 = priorityMap;
      if ( locational && priorityMap )
        Physics_AddDetailTrace(s_PhysicsQuery_LegacyTraceResults[legacyEntryId], priorityMap);
      *((float *)&extendedData.ignoreBodies + 1) = 0.0;
      LOWORD(extendedData.nonBrushShape) = 256;
      v36 = contentMask;
      extendedData.contents = contentMask;
      *(_QWORD *)&extendedData.accuracy = s_PhysicsQuery_LegacyIgnoreBodies[legacyEntryId];
      if ( !locational || (LODWORD(extendedData.ignoreBodies) = 0, !v35) )
        LODWORD(extendedData.ignoreBodies) = 1;
      LODWORD(extendedData.collisionBuffer) = phaseSelection;
      v37 = 1;
      if ( detectInsideRaycasts )
        v37 = 2;
      *((_DWORD *)&extendedData.collisionBuffer + 1) = v37;
      Physics_Raycast((Physics_WorldId)v16, v14, v13, (Physics_RaycastExtendedData *)&extendedData, s_PhysicsQuery_LegacyTraceResults[legacyEntryId]);
      v38 = locational;
      if ( locational && v35 )
      {
        v44.simplify = 0;
        v44.collisionBuffer = 0.0;
        v44.contents = v36 & 0x2004000;
        v44.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v19];
        v39 = 0;
        v44.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
        v44.phaseSelection = phaseSelection;
        HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyQueryAllResults[v19], 1);
        Physics_QueryPoint((Physics_WorldId)v16, v14, 0.0, &v44, s_PhysicsQuery_LegacyQueryAllResults[v19]);
        skipEntityCount = HavokPhysics_CollisionQueryResult::GetNumHits(s_PhysicsQuery_LegacyQueryAllResults[v19]);
        if ( skipEntityCount > 0 )
        {
          do
          {
            if ( !HavokPhysics_CollisionQueryResult::HasHit(s_PhysicsQuery_LegacyTraceResults[v19]) || (v40 = s_PhysicsQuery_LegacyTraceResults[v19], ClosestPointHitRef = HavokPhysics_CollisionQueryResult::GetClosestPointHitRef(s_PhysicsQuery_LegacyQueryAllResults[v19], v39), HavokPhysics_CollisionQueryResult::GetRaycastHitRef(v40, 0) != ClosestPointHitRef) )
              HavokPhysics_CollisionQueryResult::AddQueryPointHitAsRaycastHit(s_PhysicsQuery_LegacyTraceResults[v19], (Physics_WorldId)v16, s_PhysicsQuery_LegacyQueryAllResults[v19], v39, v14, end, (Physics_RaycastExtendedData *)&extendedData);
            ++v39;
          }
          while ( v39 < skipEntityCount );
          v18 = shape;
          v35 = priorityMap;
          v36 = contentMask;
        }
        v38 = locational;
      }
      if ( HavokPhysics_CollisionQueryResult::HasHit(s_PhysicsQuery_LegacyTraceResults[v19]) )
      {
        RaycastHitFraction = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(s_PhysicsQuery_LegacyTraceResults[v19], 0);
        if ( *(float *)&RaycastHitFraction <= 0.0 )
        {
          v44.simplify = 0;
          v44.ignoreBodies = NULL;
          v44.collisionBuffer = 0.0;
          if ( v38 && v35 )
          {
            v36 &= 0xFDFFBFFF;
            v44.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
          }
          else
          {
            v44.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
          }
          v44.contents = v36;
          v44.phaseSelection = phaseSelection;
          RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(s_PhysicsQuery_LegacyTraceResults[v19], 0);
          if ( (RaycastHitBodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3696, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( hitBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( hitBodyId )") )
            __debugbreak();
          Physics_QueryPoint((Physics_WorldId)v16, RaycastHitBodyId, v14, 0.0, &v44, s_PhysicsQuery_LegacyQueryResults[v19]);
        }
      }
      if ( v38 && v35 )
        detailHitData = (Physics_DetailHitData *)Physics_GetDetailHitData(s_PhysicsQuery_LegacyTraceResults[v19], 0, 0);
      Physics_ConvertRayQueryResultToLegacyTrace(s_PhysicsQuery_LegacyTraceResults[v19], s_PhysicsQuery_LegacyQueryResults[v19], detailHitData, results);
    }
  }
  else
  {
    v25 = PhysicsQuery_LegacyTraceCreateShape((Physics_WorldId)v16, NULL, bounds, 0, s_PhysicsQuery_LegacyTraceShapeBuffers[legacyEntryId], 0, (hknpShape **)&bounds, (hknpShape **)&skipEntities, &shape, NULL);
    LOBYTE(skipEntityCount) = v25;
    if ( v13->v[0] == v14->v[0] && v13->v[1] == v14->v[1] && v13->v[2] == v14->v[2] )
    {
      LOBYTE(extendedData.startTolerance) = 0;
      *(float *)&extendedData.ignoreBodies = 0.0;
      if ( locational && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3565, ASSERT_TYPE_ASSERT, "(locational == qfalse)", "%s\n\tCan't do locational shape traces - only locational ray-traces", "locational == qfalse") )
        __debugbreak();
      extendedData.contents = contentMask;
      *(_QWORD *)&extendedData.accuracy = s_PhysicsQuery_LegacyIgnoreBodies[v19];
      *(_QWORD *)&extendedData.collisionBuffer = skipEntities;
      LODWORD(extendedData.nonBrushShape) = phaseSelection;
      v26 = v14;
      v27 = (hknpShape *)bounds;
      Physics_GetClosestPoints((Physics_WorldId)v16, (hknpShape *)bounds, v26, &quat_identity, 0.0, (Physics_GetClosestPointsExtendedData *)&extendedData, s_PhysicsQuery_LegacyQueryResults[v19]);
      Physics_ConvertClosestPointsToLegacyTrace(s_PhysicsQuery_LegacyQueryResults[v19], results);
    }
    else
    {
      extendedData.startTolerance = 0.0;
      extendedData.accuracy = FLOAT_0_016000001;
      extendedData.simplifyStart = 0;
      extendedData.permitOutwardTrace = 0;
      if ( locational && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3582, ASSERT_TYPE_ASSERT, "(locational == qfalse)", "%s\n\tCan't do locational shape traces - only locational ray-traces", "locational == qfalse") )
        __debugbreak();
      v28 = contentMask;
      extendedData.contents = contentMask;
      extendedData.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v19];
      extendedData.collisionBuffer = FLOAT_0_125;
      v29 = (hknpShape *)skipEntities;
      extendedData.nonBrushShape = (hknpShape *)skipEntities;
      extendedData.secondPassShape = shape;
      v30 = phaseSelection;
      extendedData.phaseSelection = phaseSelection;
      v31 = v14;
      v27 = (hknpShape *)bounds;
      Physics_Shapecast((Physics_WorldId)v16, (hknpShape *)bounds, v31, end, &quat_identity, &extendedData, s_PhysicsQuery_LegacyTraceResults[v19], s_PhysicsQuery_LegacyQueryResults[v19]);
      Physics_ConvertShapeQueryResultToLegacyTrace(s_PhysicsQuery_LegacyTraceResults[v19], s_PhysicsQuery_LegacyQueryResults[v19], results);
      PhysicsQuery_LegacyTraceProcessAllSolid((Physics_WorldId)v16, results, &quat_identity, legacyEntryId, v28, v29, v30, v27, end);
      v25 = skipEntityCount;
    }
    ThreadId = Physics_GetThreadId();
    IsShapeCacheDisabled = Physics_IsShapeCacheDisabled(ThreadId);
    if ( shape )
      Physics_ReleaseShape((Physics_WorldId)v16, shape, IsShapeCacheDisabled);
    if ( v27 && v25 )
      Physics_ReleaseShape((Physics_WorldId)v16, v27, IsShapeCacheDisabled);
  }
  if ( v18 )
    hkMonitorStream::timerEnd((hkMonitorStream *)v18, "Et");
}

/*
==============
PhysicsQuery_LegacyPenetrationBrushEntityTrace
==============
*/
void PhysicsQuery_LegacyPenetrationBrushEntityTrace(Physics_WorldId worldId, vec3_t *normal, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int contentMask, unsigned int physicsInstanceId, const playerState_s *ps, int brushId, const vec3_t *brushOrigin, const vec3_t *brushAngles)
{
  __int64 v11; 
  hkMonitorStream *Value; 
  hkMonitorStream *v13; 
  int v14; 
  HavokPhysics_CollisionQueryResult *v15; 
  HavokPhysics_CollisionQueryResult *startResult; 
  float v17; 
  float v18; 
  signed int v20; 
  hknpShape *ShapeCapsuleUpAxis; 
  HavokPhysics_CollisionQueryResult *v23; 
  hknpBodyId *v24; 
  signed int v25; 
  HavokPhysics_CollisionQueryResult *v26; 
  hknpBodyId *RigidBodyID; 
  __int64 shapeStorage; 
  __int64 shapeStoragea; 
  int NumRigidBodys; 
  hknpBodyId result[2]; 
  vec3_t *enda; 
  vec3_t *starta; 
  hkMonitorStream *v34; 
  Physics_ShapecastExtendedData extendedData; 
  vec3_t *normala; 
  __int64 v37; 
  hkMonitorStream *v38; 
  vec4_t quat; 

  v37 = -2i64;
  enda = (vec3_t *)end;
  starta = (vec3_t *)start;
  normala = normal;
  v11 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v13 = Value;
  v34 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyPenetrationBrushEntityTrace");
  v38 = v13;
  if ( (unsigned int)v11 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4190, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4191, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4192, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4194, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v14 = Physics_GetThreadId() + 28 * v11;
  if ( physicsInstanceId == -1 )
    NumRigidBodys = 0;
  else
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v11, physicsInstanceId);
  v15 = s_PhysicsQuery_LegacyTraceResults[v14];
  *(_QWORD *)&result[0].m_serialAndIndex = v15;
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4202, ASSERT_TYPE_ASSERT, "(traceResult)", (const char *)&queryFormat, "traceResult") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v15, 1);
  startResult = s_PhysicsQuery_LegacyQueryResults[v14];
  if ( !startResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4205, ASSERT_TYPE_ASSERT, "(queryResult)", (const char *)&queryFormat, "queryResult") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(startResult, 1);
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2834, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BGMovingPlatformPS::IsNewRockingMoverCollisionEnabled() )
  {
    AnglesToQuat(&ps->movingPlatforms.m_moverUpAngles, &quat);
  }
  else if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xEu) )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_STUNNED_END|0x80) )
      BGMovingPlatforms::GetBestPlatformUp(ps, brushAngles, NULL, &quat);
    else
      AnglesToQuat(brushAngles, &quat);
  }
  else
  {
    quat = quat_identity;
  }
  v17 = bounds->halfSize.v[0];
  v18 = bounds->halfSize.v[2];
  if ( v18 == 0.0 || v17 == 0.0 )
  {
    v25 = 0;
    *(_QWORD *)&extendedData.accuracy = 0i64;
    LODWORD(extendedData.ignoreBodies) = 1;
    *((float *)&extendedData.ignoreBodies + 1) = 0.0;
    extendedData.collisionBuffer = 0.0;
    *((_DWORD *)&extendedData.collisionBuffer + 1) = 1;
    LOWORD(extendedData.nonBrushShape) = 256;
    extendedData.contents = contentMask;
    v26 = *(HavokPhysics_CollisionQueryResult **)&result[0].m_serialAndIndex;
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
        if ( physicsInstanceId == -1 )
        {
          LODWORD(shapeStorage) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", shapeStorage) )
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
        RigidBodyID = HavokPhysics_GetRigidBodyID(result, (const Physics_WorldId)v11, physicsInstanceId, v25);
        Physics_Raycast((Physics_WorldId)v11, RigidBodyID->m_serialAndIndex, starta, enda, (Physics_RaycastExtendedData *)&extendedData, v26);
        ++v25;
      }
      while ( v25 < NumRigidBodys );
      v13 = v34;
    }
    if ( HavokPhysics_CollisionQueryResult::HasHit(v26) )
      HavokPhysics_CollisionQueryResult::GetRaycastHitNormal(v26, 0, normala);
  }
  else
  {
    extendedData.startTolerance = 0.0;
    _XMM0 = LODWORD(FLOAT_0_016000001);
    extendedData.accuracy = FLOAT_0_016000001;
    extendedData.simplifyStart = 0;
    v20 = 0;
    extendedData.ignoreBodies = NULL;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&extendedData.nonBrushShape = _XMM0;
    extendedData.phaseSelection = All;
    extendedData.permitOutwardTrace = 0;
    extendedData.contents = contentMask;
    extendedData.collisionBuffer = FLOAT_0_125;
    ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis((Physics_WorldId)v11, &bounds->midPoint, v18 - v17, v17, s_PhysicsQuery_LegacyTraceShapeBuffers[v14], 432, Temporary);
    if ( !ShapeCapsuleUpAxis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4252, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
      __debugbreak();
    if ( NumRigidBodys > 0 )
    {
      v23 = *(HavokPhysics_CollisionQueryResult **)&result[0].m_serialAndIndex;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v11 > 7 )
        {
          LODWORD(shapeStoragea) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", shapeStoragea) )
            __debugbreak();
        }
        if ( physicsInstanceId == -1 )
        {
          LODWORD(shapeStoragea) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", shapeStoragea) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v11 - 2) <= 5 )
        {
          LODWORD(shapeStoragea) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", shapeStoragea) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v11 <= 1 )
        {
          LODWORD(shapeStoragea) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", shapeStoragea) )
            __debugbreak();
        }
        v24 = HavokPhysics_GetRigidBodyID(result, (const Physics_WorldId)v11, physicsInstanceId, v20);
        Physics_Shapecast((Physics_WorldId)v11, v24->m_serialAndIndex, ShapeCapsuleUpAxis, starta, enda, &quat, &extendedData, v23, startResult);
        ++v20;
      }
      while ( v20 < NumRigidBodys );
      v13 = v34;
    }
  }
  if ( v13 )
    hkMonitorStream::timerEnd(v13, "Et");
}

/*
==============
PhysicsQuery_LegacyPenetrationTest
==============
*/
void PhysicsQuery_LegacyPenetrationTest(Physics_WorldId worldId, const playerState_s *ps, bool *penetrating, bool *penetratingBrushBasis, vec3_t *penetration, const vec3_t *pos, const vec3_t *angles, const Bounds *bounds, int contentMask, unsigned int physicsInstanceId, const vec3_t *brushAngles, int ignoreEnt, bool vehicleTrace)
{
  __int64 v15; 
  hkMonitorStream *Value; 
  hkMonitorStream *v17; 
  int v18; 
  __int16 groundRefEnt; 
  bool *v20; 
  int v21; 
  __int64 v22; 
  HavokPhysics_CollisionQueryResult *v23; 
  __m128 v24; 
  float v25; 
  float v26; 
  playerState_s *v27; 
  unsigned int NumRigidBodys; 
  unsigned int v29; 
  hknpBodyId *RigidBodyID; 
  hknpShape *v31; 
  bool HasHit; 
  float viewHeightCurrent; 
  float v34; 
  float v35; 
  float v36; 
  HavokPhysics_IgnoreBodies *v37; 
  bool ClosestPointHitHitBrushBasis; 
  bool *v39; 
  float v40; 
  __int128 v41; 
  float v42; 
  __int128 v43; 
  vec3_t *v46; 
  unsigned int ThreadId; 
  bool IsShapeCacheDisabled; 
  bool v49; 
  hknpShape **shape; 
  char v51; 
  bool v52; 
  hknpBodyId result[2]; 
  hknpShape *v54; 
  playerState_s *psa; 
  bool *v56; 
  vec3_t *v57; 
  vec3_t *v58; 
  hknpShape *paddedShape; 
  Physics_GetClosestPointsExtendedData extendedData; 
  __int64 v61; 
  hkMonitorStream *v62; 
  vec3_t normal; 
  vec3_t v64; 
  vec3_t point; 
  tmat33_t<vec3_t> axis; 
  vec4_t quat; 
  Bounds v68; 

  v61 = -2i64;
  v56 = penetratingBrushBasis;
  *(_QWORD *)v64.v = penetrating;
  psa = (playerState_s *)ps;
  v15 = worldId;
  v58 = penetration;
  v57 = (vec3_t *)angles;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v17 = Value;
  *(_QWORD *)normal.v = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyPenetrationTest");
  v62 = v17;
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4041, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v18 = Physics_GetThreadId() + 28 * v15;
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
    v51 = 0;
  else
    v51 = 1;
  if ( (unsigned int)v15 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4045, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4046, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !penetrating && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4047, ASSERT_TYPE_ASSERT, "(penetrating)", (const char *)&queryFormat, "penetrating") )
    __debugbreak();
  v20 = v56;
  if ( !v56 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4048, ASSERT_TYPE_ASSERT, "(penetratingBrushBasis)", (const char *)&queryFormat, "penetratingBrushBasis") )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4049, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  *penetrating = 0;
  *v20 = 0;
  v21 = 0;
  *(_QWORD *)penetration->v = 0i64;
  penetration->v[2] = 0.0;
  v22 = v18;
  v23 = s_PhysicsQuery_LegacyQueryResults[v18];
  if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4057, ASSERT_TYPE_ASSERT, "(queryResult)", (const char *)&queryFormat, "queryResult") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v23, 1);
  if ( (bounds->halfSize.v[0] == 0.0 || bounds->halfSize.v[2] == 0.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4061, ASSERT_TYPE_ASSERT, "(bounds->halfSize[0] != 0.f && bounds->halfSize[2] != 0.f)", (const char *)&queryFormat, "bounds->halfSize[0] != 0.f && bounds->halfSize[2] != 0.f") )
    __debugbreak();
  v24 = *(__m128 *)bounds->midPoint.v;
  *(__m128 *)v68.midPoint.v = v24;
  *(_QWORD *)&v68.halfSize.y = *(_QWORD *)&bounds->halfSize.y;
  LODWORD(v25) = _mm_shuffle_ps(v24, v24, 85).m128_u32[0];
  LODWORD(v26) = _mm_shuffle_ps(v24, v24, 170).m128_u32[0];
  v68.midPoint.v[0] = 0.0;
  v68.midPoint.v[1] = 0.0;
  v68.midPoint.v[2] = 0.0;
  v27 = psa;
  v52 = PhysicsQuery_LegacyTraceCreateShape((Physics_WorldId)v15, psa, &v68, 0, s_PhysicsQuery_LegacyTraceShapeBuffers[v18], vehicleTrace, &v54, (hknpShape **)result, &paddedShape, NULL);
  extendedData.simplify = 0;
  extendedData.ignoreBodies = NULL;
  extendedData.collisionBuffer = 0.0;
  extendedData.phaseSelection = All;
  extendedData.contents = contentMask;
  extendedData.nonBrushShape = *(hknpShape **)&result[0].m_serialAndIndex;
  if ( v57 )
    AnglesToQuat(v57, &quat);
  else
    PhysicsQuery_LegacyTraceBuildTraceQuat((Physics_WorldId)v15, v27, &quat, vehicleTrace);
  QuatToAxis(&quat, &axis);
  point.v[0] = (float)((float)((float)(v25 * axis.m[1].v[0]) + (float)(v24.m128_f32[0] * axis.m[0].v[0])) + (float)(v26 * axis.m[2].v[0])) + pos->v[0];
  point.v[1] = (float)((float)((float)(v25 * axis.m[1].v[1]) + (float)(v24.m128_f32[0] * axis.m[0].v[1])) + (float)(v26 * axis.m[2].v[1])) + pos->v[1];
  point.v[2] = (float)((float)((float)(v25 * axis.m[1].v[2]) + (float)(v24.m128_f32[0] * axis.m[0].v[2])) + (float)(v26 * axis.m[2].v[2])) + pos->v[2];
  if ( physicsInstanceId == -1 )
  {
    v37 = s_PhysicsQuery_LegacyIgnoreBodies[v18];
    HavokPhysics_IgnoreBodies::Reset(s_PhysicsQuery_LegacyIgnoreBodies[v22]);
    PhysicsQuery_AddEntityChainToIgnoreList(ignoreEnt, v37, 1, 1, 0, 1, 0);
    extendedData.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v22];
    v31 = v54;
    Physics_GetClosestPoints((Physics_WorldId)v15, v54, &point, &quat, 0.0, &extendedData, v23);
  }
  else
  {
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v15, physicsInstanceId);
    v29 = 0;
    if ( NumRigidBodys )
    {
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v15 > 7 )
        {
          LODWORD(shape) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", shape) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v15 - 2) <= 5 )
        {
          LODWORD(shape) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", shape) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v15 <= 1 )
        {
          LODWORD(shape) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", shape) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID(result, (const Physics_WorldId)v15, physicsInstanceId, v29);
        Physics_GetClosestPoints((Physics_WorldId)v15, RigidBodyID->m_serialAndIndex, v54, &point, &quat, 0.0, &extendedData, v23);
        ++v29;
      }
      while ( v29 < NumRigidBodys );
      v17 = *(hkMonitorStream **)normal.v;
      v21 = 0;
      v27 = psa;
    }
    v31 = v54;
  }
  HasHit = HavokPhysics_CollisionQueryResult::HasHit(v23);
  **(_BYTE **)v64.v = HasHit;
  if ( HasHit )
  {
    if ( v51 )
    {
      viewHeightCurrent = v27->viewHeightCurrent;
      v34 = (float)(viewHeightCurrent * axis.m[2].v[0]) + v27->origin.v[0];
      v35 = (float)(viewHeightCurrent * axis.m[2].v[1]) + v27->origin.v[1];
      v36 = (float)(viewHeightCurrent * axis.m[2].v[2]) + v27->origin.v[2];
    }
    else
    {
      v35 = *(float *)&result[0].m_serialAndIndex;
      v36 = *(float *)&result[0].m_serialAndIndex;
      v34 = *(float *)&result[0].m_serialAndIndex;
    }
    ClosestPointHitHitBrushBasis = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitBrushBasis(v23, 0);
    v39 = v56;
    *v56 = ClosestPointHitHitBrushBasis;
    if ( HavokPhysics_CollisionQueryResult::GetNumHits(v23) )
    {
      while ( 1 )
      {
        HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(v23, v21, &v64);
        v40 = v64.v[0] - point.v[0];
        v41 = LODWORD(v64.v[1]);
        *(float *)&v41 = v64.v[1] - point.v[1];
        v42 = v64.v[2] - point.v[2];
        HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(v23, v21, &normal);
        *((_QWORD *)&v43 + 1) = *((_QWORD *)&v41 + 1);
        if ( (float)((float)((float)(*(float *)&v41 * normal.v[1]) + (float)(v40 * normal.v[0])) + (float)(v42 * normal.v[2])) < 0.0 )
        {
          if ( !v51 )
            break;
          *((_QWORD *)&v43 + 1) = 0i64;
          if ( (float)((float)((float)((float)(v64.v[0] - v34) * normal.v[0]) + (float)((float)(v64.v[1] - v35) * normal.v[1])) + (float)(normal.v[2] * (float)(v64.v[2] - v36))) < 0.0 )
            break;
        }
        if ( ++v21 >= HavokPhysics_CollisionQueryResult::GetNumHits(v23) )
          goto LABEL_77;
      }
      *(double *)&v43 = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(v23, v21);
      _XMM1 = v43 ^ _xmm;
      __asm { vmaxss  xmm3, xmm1, cs:__real@3a83126f }
      v46 = v58;
      v58->v[0] = *(float *)&_XMM3 * normal.v[0];
      v46->v[1] = *(float *)&_XMM3 * normal.v[1];
      v46->v[2] = *(float *)&_XMM3 * normal.v[2];
      *v39 = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitBrushBasis(v23, v21);
    }
  }
LABEL_77:
  ThreadId = Physics_GetThreadId();
  IsShapeCacheDisabled = Physics_IsShapeCacheDisabled(ThreadId);
  v49 = IsShapeCacheDisabled;
  if ( paddedShape )
    Physics_ReleaseShape((Physics_WorldId)v15, paddedShape, IsShapeCacheDisabled);
  if ( v31 && v52 )
    Physics_ReleaseShape((Physics_WorldId)v15, v31, v49);
  if ( v17 )
    hkMonitorStream::timerEnd(v17, "Et");
}

/*
==============
PhysicsQuery_LegacySightTrace
==============
*/
_BOOL8 PhysicsQuery_LegacySightTrace(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int skipEntity0, int skipEntity1, int contentMask)
{
  __int64 v10; 
  hkMonitorStream *Value; 
  hkMonitorStream *v12; 
  int v13; 
  float v14; 
  float v15; 
  __int64 v16; 
  HavokPhysics_CollisionQueryResult *v17; 
  HavokPhysics_IgnoreBodies *v18; 
  HavokPhysics_IgnoreBodies *v19; 
  hknpShape *ShapeCapsuleUpAxis; 
  BOOL HasHit; 
  Physics_ShapecastExtendedData extendedData; 

  v10 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v12 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacySightTrace");
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4667, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v13 = Physics_GetThreadId() + 28 * v10;
  if ( (unsigned int)v10 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4670, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4671, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4672, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  v14 = bounds->halfSize.v[0];
  v15 = bounds->halfSize.v[2];
  v16 = v13;
  v17 = s_PhysicsQuery_LegacyQueryAnyResults[v13];
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4684, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v17, 1);
  HavokPhysics_IgnoreBodies::Reset(s_PhysicsQuery_LegacyIgnoreBodies[v16]);
  v18 = s_PhysicsQuery_LegacyIgnoreBodies[v16];
  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 727, ASSERT_TYPE_ASSERT, "(ignoreBodies)", (const char *)&queryFormat, "ignoreBodies") )
    __debugbreak();
  if ( skipEntity0 >= 0 )
    HavokPhysics_IgnoreBodies::AddIgnoreEntity(v18, skipEntity0, 1, 1, 0, 1, 0);
  v19 = s_PhysicsQuery_LegacyIgnoreBodies[v16];
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 727, ASSERT_TYPE_ASSERT, "(ignoreBodies)", (const char *)&queryFormat, "ignoreBodies") )
    __debugbreak();
  if ( skipEntity1 >= 0 )
    HavokPhysics_IgnoreBodies::AddIgnoreEntity(v19, skipEntity1, 1, 1, 0, 1, 0);
  if ( v15 == 0.0 || v14 == 0.0 )
  {
    LODWORD(extendedData.ignoreBodies) = 1;
    *((float *)&extendedData.ignoreBodies + 1) = 0.0;
    extendedData.collisionBuffer = 0.0;
    *((_DWORD *)&extendedData.collisionBuffer + 1) = 1;
    LOWORD(extendedData.nonBrushShape) = 256;
    extendedData.contents = contentMask;
    *(_QWORD *)&extendedData.accuracy = s_PhysicsQuery_LegacyIgnoreBodies[v16];
    Physics_Raycast((Physics_WorldId)v10, start, end, (Physics_RaycastExtendedData *)&extendedData, v17);
  }
  else
  {
    extendedData.startTolerance = 0.0;
    _XMM0 = LODWORD(FLOAT_0_016000001);
    extendedData.accuracy = FLOAT_0_016000001;
    extendedData.simplifyStart = 0;
    extendedData.collisionBuffer = 0.0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&extendedData.nonBrushShape = _XMM0;
    extendedData.phaseSelection = All;
    extendedData.permitOutwardTrace = 0;
    extendedData.contents = contentMask;
    extendedData.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v16];
    ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis((Physics_WorldId)v10, &bounds->midPoint, v15 - v14, v14, s_PhysicsQuery_LegacyTraceShapeBuffers[v16], 432, Temporary);
    if ( !ShapeCapsuleUpAxis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4705, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
      __debugbreak();
    Physics_Shapecast((Physics_WorldId)v10, ShapeCapsuleUpAxis, start, end, &quat_identity, &extendedData, v17, NULL);
  }
  HasHit = HavokPhysics_CollisionQueryResult::HasHit(v17);
  if ( v12 )
    hkMonitorStream::timerEnd(v12, "Et");
  return HasHit;
}

/*
==============
PhysicsQuery_LegacySightTraceWithEntityBBox
==============
*/
_BOOL8 PhysicsQuery_LegacySightTraceWithEntityBBox(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int skipEntity, int contentMask)
{
  __int64 v9; 
  hkMonitorStream *Value; 
  hkMonitorStream *v11; 
  int v12; 
  float v13; 
  float v14; 
  __int64 v15; 
  HavokPhysics_CollisionQueryResult *v16; 
  HavokPhysics_IgnoreBodies *v17; 
  hknpShape *ShapeCapsuleUpAxis; 
  BOOL HasHit; 
  Physics_ShapecastExtendedData extendedData; 

  v9 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v11 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacySightTraceWithEntityBBox");
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5088, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER )") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5089, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v12 = Physics_GetThreadId() + 28 * v9;
  if ( (unsigned int)v9 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5092, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5093, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5094, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  v13 = bounds->halfSize.v[0];
  v14 = bounds->halfSize.v[2];
  v15 = v12;
  v16 = s_PhysicsQuery_LegacyQueryAnyResults[v12];
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5106, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v16, 1);
  HavokPhysics_IgnoreBodies::Reset(s_PhysicsQuery_LegacyIgnoreBodies[v15]);
  v17 = s_PhysicsQuery_LegacyIgnoreBodies[v15];
  if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 727, ASSERT_TYPE_ASSERT, "(ignoreBodies)", (const char *)&queryFormat, "ignoreBodies") )
    __debugbreak();
  if ( skipEntity >= 0 )
    HavokPhysics_IgnoreBodies::AddIgnoreEntity(v17, skipEntity, 1, 1, 0, 1, 0);
  if ( v14 == 0.0 || v13 == 0.0 )
  {
    LODWORD(extendedData.ignoreBodies) = 1;
    *((float *)&extendedData.ignoreBodies + 1) = 0.0;
    extendedData.collisionBuffer = 0.0;
    *((_DWORD *)&extendedData.collisionBuffer + 1) = 1;
    LOWORD(extendedData.nonBrushShape) = 256;
    extendedData.contents = contentMask;
    *(_QWORD *)&extendedData.accuracy = s_PhysicsQuery_LegacyIgnoreBodies[v15];
    Physics_Raycast((Physics_WorldId)v9, start, end, (Physics_RaycastExtendedData *)&extendedData, v16);
  }
  else
  {
    extendedData.startTolerance = 0.0;
    _XMM0 = LODWORD(FLOAT_0_016000001);
    extendedData.accuracy = FLOAT_0_016000001;
    extendedData.simplifyStart = 0;
    extendedData.collisionBuffer = 0.0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&extendedData.nonBrushShape = _XMM0;
    extendedData.phaseSelection = All;
    extendedData.permitOutwardTrace = 0;
    extendedData.contents = contentMask;
    extendedData.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v15];
    ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis((Physics_WorldId)v9, &bounds->midPoint, v14 - v13, v13, s_PhysicsQuery_LegacyTraceShapeBuffers[v15], 432, Temporary);
    if ( !ShapeCapsuleUpAxis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5124, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
      __debugbreak();
    Physics_Shapecast((Physics_WorldId)v9, ShapeCapsuleUpAxis, start, end, &quat_identity, &extendedData, v16, NULL);
  }
  HasHit = HavokPhysics_CollisionQueryResult::HasHit(v16);
  if ( v11 )
    hkMonitorStream::timerEnd(v11, "Et");
  return HasHit;
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
  CgHandler *v8; 
  vec3_t platformAngles; 
  WorldUpReferenceFrame v10; 

  if ( !ps || vehicleTrace )
    goto LABEL_11;
  if ( PhysicsQuery_MoverUpAnglesToQuat(ps, outQuat) )
    return;
  if ( WorldUpReferenceFrame::HasValidWorldUpInPs(ps) )
  {
    HandlerFromWorldId = PhysicsQuery_GetHandlerFromWorldId(worldId);
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v10, ps, HandlerFromWorldId);
    *outQuat = quat_identity;
    WorldUpReferenceFrame::ApplyReferenceFrameToQuat(&v10, outQuat);
    return;
  }
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0xEu) && BGMovingPlatforms::IsOnMovingPlatform(ps) )
  {
    v8 = PhysicsQuery_GetHandlerFromWorldId(worldId);
    v8->GetEntityAngles(v8, ps->movingPlatforms.m_movingPlatformEntity, &platformAngles);
    if ( Com_GameMode_SupportsFeature(WEAPON_STUNNED_END|0x80) )
      BGMovingPlatforms::GetBestPlatformUp(ps, &platformAngles, NULL, outQuat);
    else
      AnglesToQuat(&platformAngles, outQuat);
  }
  else
  {
LABEL_11:
    *outQuat = quat_identity;
  }
}

/*
==============
PhysicsQuery_LegacyTraceCreateShape
==============
*/
char PhysicsQuery_LegacyTraceCreateShape(Physics_WorldId worldId, const playerState_s *ps, const Bounds *bounds, int locational, char *shapeBuffers, bool vehicleTrace, hknpShape **shape, hknpShape **nonBrushShape, hknpShape **paddedShape, PhysicsQuery_ContextSettings *contextSettings)
{
  float v14; 
  float v15; 
  hknpShape *ShapeCapsuleUpAxis; 
  hknpShape *ShapeCylinder; 
  bool v19; 
  double v20; 
  hknpShape *v21; 
  Bounds boundsa; 

  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2726, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  if ( !nonBrushShape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2727, ASSERT_TYPE_ASSERT, "(nonBrushShape)", (const char *)&queryFormat, "nonBrushShape") )
    __debugbreak();
  if ( !paddedShape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2728, ASSERT_TYPE_ASSERT, "(paddedShape)", (const char *)&queryFormat, "paddedShape") )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2729, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  if ( locational && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2731, ASSERT_TYPE_ASSERT, "(locational == qfalse)", "%s\n\tCan't do locational shape traces - only locational ray-traces", "locational == qfalse") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF6347, "PhysicsQuery_LegacyTraceCreateShape");
  v14 = bounds->halfSize.v[0];
  v15 = bounds->halfSize.v[2];
  *shape = NULL;
  *nonBrushShape = NULL;
  *paddedShape = NULL;
  if ( contextSettings && (contextSettings->m_flags & 0x20) != 0 || vehicleTrace )
  {
    ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis(worldId, &bounds->midPoint, v15 - v14, v14, shapeBuffers, 432, Temporary);
    *shape = ShapeCapsuleUpAxis;
    if ( !ShapeCapsuleUpAxis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2762, ASSERT_TYPE_ASSERT, "(*shape)", (const char *)&queryFormat, "*shape") )
      __debugbreak();
    Sys_ProfEndNamedEvent();
    return 0;
  }
  if ( contextSettings && (contextSettings->m_flags & 2) != 0 || !BG_UsingNewPlayerCollision() || !ps )
  {
    *nonBrushShape = Physics_CreateShapeCapsuleUpAxis(worldId, &bounds->midPoint, v15 - v14, v14, shapeBuffers, 432, Temporary);
    *shape = Physics_CreateShapeCylinder(&bounds->midPoint, v15, v14, 16, 1);
    *paddedShape = Physics_CreateShapeCylinder(&bounds->midPoint, v15 + 0.125, v14 + 0.125, 16, 1);
    if ( !*nonBrushShape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2801, ASSERT_TYPE_ASSERT, "(*nonBrushShape)", (const char *)&queryFormat, "*nonBrushShape") )
      __debugbreak();
    if ( !*shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2802, ASSERT_TYPE_ASSERT, "(*shape)", (const char *)&queryFormat, "*shape") )
      __debugbreak();
    if ( *paddedShape )
      goto LABEL_45;
    v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2803, ASSERT_TYPE_ASSERT, "(*paddedShape)", (const char *)&queryFormat, "*paddedShape");
    goto LABEL_43;
  }
  if ( contextSettings && (contextSettings->m_flags & 1) != 0 )
  {
    ShapeCylinder = Physics_CreateShapeCylinder(&bounds->midPoint, v15, v14, 16, 1);
    *shape = ShapeCylinder;
    if ( ShapeCylinder )
    {
LABEL_45:
      Sys_ProfEndNamedEvent();
      return 1;
    }
    v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2778, ASSERT_TYPE_ASSERT, "(*shape)", (const char *)&queryFormat, "*shape");
LABEL_43:
    if ( v19 )
      __debugbreak();
    goto LABEL_45;
  }
  v20 = *(double *)&bounds->halfSize.y;
  *(_OWORD *)boundsa.midPoint.v = *(_OWORD *)bounds->midPoint.v;
  *(double *)&boundsa.halfSize.y = v20;
  BG_PlayerCollision_AdjustCapsuleBoundsForStickSystem(&boundsa);
  v21 = Physics_CreateShapeCapsuleUpAxis(worldId, &boundsa.midPoint, boundsa.halfSize.v[2], boundsa.halfSize.v[0], shapeBuffers, 432, Temporary);
  *shape = v21;
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2790, ASSERT_TYPE_ASSERT, "(*shape)", (const char *)&queryFormat, "*shape") )
    __debugbreak();
  Sys_ProfEndNamedEvent();
  return 0;
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
  __int64 v17; 
  hkMonitorStream *Value; 
  hkMonitorStream *v19; 
  __int64 v20; 
  float v21; 
  float v22; 
  unsigned int v25; 
  hknpShape *ShapeCapsuleUpAxis; 
  Physics_ShapecastExtendedData extendedData; 

  v17 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v19 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyTracePassed");
  if ( (unsigned int)v17 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3448, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v17] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3449, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3450, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3452, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v20 = (int)(28 * v17 + Physics_GetThreadId());
  HavokPhysics_IgnoreBodies::Reset(s_PhysicsQuery_LegacyIgnoreBodies[v20]);
  HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyTraceResults[v20], 1);
  PhysicsQuery_AddEntityChainToIgnoreList(skipEntity0, s_PhysicsQuery_LegacyIgnoreBodies[v20], 1, skipEntity0Children, 0, skipEntity0Siblings, 0);
  PhysicsQuery_AddEntityChainToIgnoreList(skipEntity1, s_PhysicsQuery_LegacyIgnoreBodies[v20], 1, skipEntity1Children, 0, skipEntity1Siblings, 0);
  s_PhysicsQuery_LegacyIgnoreBodies[v20]->m_ignoreTransparentVolumes = ignoreTransparentVolumes;
  v21 = bounds->halfSize.v[0];
  v22 = bounds->halfSize.v[2];
  if ( v22 == 0.0 || v21 == 0.0 )
  {
    LODWORD(extendedData.ignoreBodies) = 1;
    *((float *)&extendedData.ignoreBodies + 1) = 0.0;
    v25 = 0;
    extendedData.collisionBuffer = 0.0;
    *((_DWORD *)&extendedData.collisionBuffer + 1) = 1;
    LOWORD(extendedData.nonBrushShape) = 256;
    extendedData.contents = contentMask;
    *(_QWORD *)&extendedData.accuracy = s_PhysicsQuery_LegacyIgnoreBodies[v20];
    if ( locational && priorityMap )
    {
      Physics_AddDetailTrace(s_PhysicsQuery_LegacyTraceResults[v20], priorityMap);
      LODWORD(extendedData.ignoreBodies) = 0;
    }
    Physics_Raycast((Physics_WorldId)v17, start, end, (Physics_RaycastExtendedData *)&extendedData, s_PhysicsQuery_LegacyTraceResults[v20]);
  }
  else
  {
    extendedData.startTolerance = 0.0;
    _XMM0 = LODWORD(FLOAT_0_016000001);
    extendedData.accuracy = FLOAT_0_016000001;
    extendedData.simplifyStart = 0;
    extendedData.collisionBuffer = 0.0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&extendedData.nonBrushShape = _XMM0;
    v25 = 0;
    extendedData.phaseSelection = All;
    extendedData.permitOutwardTrace = 0;
    if ( locational && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3476, ASSERT_TYPE_ASSERT, "(locational == qfalse)", "%s\n\tCan't do locational shape traces - only locational ray-traces", "locational == qfalse") )
      __debugbreak();
    extendedData.contents = contentMask;
    extendedData.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v20];
    ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis((Physics_WorldId)v17, &bounds->midPoint, v22 - v21, v21, s_PhysicsQuery_LegacyTraceShapeBuffers[v20], 432, Temporary);
    if ( !ShapeCapsuleUpAxis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3483, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
      __debugbreak();
    Physics_Shapecast((Physics_WorldId)v17, ShapeCapsuleUpAxis, start, end, &quat_identity, &extendedData, s_PhysicsQuery_LegacyTraceResults[v20], NULL);
  }
  LOBYTE(v25) = !HavokPhysics_CollisionQueryResult::HasHit(s_PhysicsQuery_LegacyTraceResults[v20]);
  if ( v19 )
    hkMonitorStream::timerEnd(v19, "Et");
  return v25;
}

/*
==============
PhysicsQuery_LegacyTraceProcessAllSolid
==============
*/
void PhysicsQuery_LegacyTraceProcessAllSolid(Physics_WorldId worldId, trace_t *results, const vec4_t *quat, const int legacyEntryId, int contentMask, hknpShape *nonBrushShape, Physics_QueryPhaseSelection phaseSelection, hknpShape *shape, const vec3_t *end)
{
  __int64 v12; 
  HavokPhysics_CollisionQueryResult *v13; 
  HavokPhysics_CollisionQueryResult *result; 
  unsigned int ShapecastHitBodyId; 
  Physics_GetClosestPointsExtendedData extendedData; 

  if ( results->startsolid )
  {
    extendedData.simplify = 0;
    extendedData.ignoreBodies = NULL;
    v12 = legacyEntryId;
    extendedData.collisionBuffer = 0.0;
    v13 = s_PhysicsQuery_LegacyQueryResults[legacyEntryId];
    extendedData.contents = contentMask;
    extendedData.nonBrushShape = nonBrushShape;
    extendedData.phaseSelection = phaseSelection;
    HavokPhysics_CollisionQueryResult::Reset(v13, 1);
    result = s_PhysicsQuery_LegacyQueryResults[v12];
    ShapecastHitBodyId = HavokPhysics_CollisionQueryResult::GetShapecastHitBodyId(s_PhysicsQuery_LegacyTraceResults[v12], 0);
    Physics_GetClosestPoints(worldId, ShapecastHitBodyId, shape, end, quat, 0.0, &extendedData, result);
    if ( HavokPhysics_CollisionQueryResult::HasHit(s_PhysicsQuery_LegacyQueryResults[v12]) )
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
float PhysicsQuery_LegacyTraceRoundCorners(Physics_WorldId worldId, const vec3_t *wallPos, const vec3_t *wallNorm, const vec3_t *end, int contentMask)
{
  __int64 v7; 
  hkMonitorStream *Value; 
  hkMonitorStream *v9; 
  int v10; 
  __int64 v12; 
  float v13; 
  __int128 v14; 
  __int128 v15; 
  float v19; 
  float v20; 
  float v21; 
  HavokPhysics_CollisionQueryResult *v22; 
  HavokPhysics_CollisionQueryResult *v23; 
  bool v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  hkMonitorStream *v31; 
  hkMonitorStream *v32; 
  int v37; 
  HavokPhysics_CollisionQueryResult *v38; 
  int v39; 
  float v40; 
  __int128 v42; 
  int v43; 
  float v44; 
  __int128 v46; 
  bool HasHit; 
  int v49; 
  Physics_RaycastExtendedData extendedData; 
  __int64 v52; 
  hkMonitorStream *v53; 
  hkMonitorStream *v54; 
  vec3_t start; 
  vec3_t enda; 
  vec3_t v57; 
  vec3_t pos; 
  vec3_t v59; 

  v52 = -2i64;
  v7 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v9 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyTraceRoundCorners");
  v53 = v9;
  extendedData.contents = -1;
  v10 = 0;
  extendedData.ignoreBodies = NULL;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  LODWORD(_XMM7) = 0;
  extendedData.collisionBuffer = 0.0;
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4895, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  LODWORD(v12) = Physics_GetThreadId() + 28 * v7;
  if ( (unsigned int)v7 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4898, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4899, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( COERCE_FLOAT(LODWORD(wallNorm->v[2]) & _xmm) < 0.99900001 )
  {
    LODWORD(v13) = LODWORD(wallNorm->v[0]) ^ _xmm;
    v14 = LODWORD(wallNorm->v[1]);
    v15 = v14;
    *(float *)&v15 = fsqrt((float)(*(float *)&v14 * *(float *)&v14) + (float)(v13 * v13));
    _XMM2 = v15;
    __asm
    {
      vcmpless xmm0, xmm2, cs:__real@80000000
      vblendvps xmm1, xmm2, xmm14, xmm0
    }
    *(float *)&v15 = *(float *)&v14 * (float)(1.0 / *(float *)&_XMM1);
    *(float *)&v14 = v13 * (float)(1.0 / *(float *)&_XMM1);
    extendedData.contents = contentMask;
    v19 = *(float *)&v15 * 64.0;
    v20 = *(float *)&v14 * 64.0;
    *(float *)&v15 = *(float *)&v15 * 200.0;
    *(float *)&v14 = *(float *)&v14 * 200.0;
    v21 = wallPos->v[0];
    enda.v[0] = wallPos->v[0] - *(float *)&v15;
    *(float *)&_XMM1 = wallPos->v[1];
    enda.v[1] = *(float *)&_XMM1 - *(float *)&v14;
    enda.v[2] = wallPos->v[2];
    v57.v[0] = *(float *)&v15 + v21;
    v57.v[1] = *(float *)&v14 + *(float *)&_XMM1;
    v57.v[2] = enda.v[2];
    v12 = (int)v12;
    *(_QWORD *)start.v = v12;
    v22 = s_PhysicsQuery_LegacyTraceResults[(int)v12];
    if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4927, ASSERT_TYPE_ASSERT, "(resultL)", (const char *)&queryFormat, "resultL") )
      __debugbreak();
    HavokPhysics_CollisionQueryResult::Reset(v22, 1);
    v23 = s_PhysicsQuery_LegacyQueryResults[(int)v12];
    if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4930, ASSERT_TYPE_ASSERT, "(resultR)", (const char *)&queryFormat, "resultR") )
      __debugbreak();
    HavokPhysics_CollisionQueryResult::Reset(v23, 1);
    Physics_Raycast((Physics_WorldId)v7, wallPos, &enda, &extendedData, v22);
    Physics_Raycast((Physics_WorldId)v7, wallPos, &v57, &extendedData, v23);
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(v22);
    v24 = HavokPhysics_CollisionQueryResult::HasHit(v23);
    if ( HasHit )
      HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(v22, 0);
    if ( v24 )
      HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(v23, 0);
    v25 = wallPos->v[0] - v19;
    v26 = wallPos->v[1];
    v27 = v26 - v20;
    v28 = wallPos->v[2];
    v29 = wallPos->v[0] + v19;
    v30 = v26 + v20;
    if ( HasHit )
      HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(v22, 0, &pos);
    else
      pos = enda;
    if ( v24 )
      HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(v23, 0, &v59);
    else
      v59 = v57;
    v31 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
    v32 = v31;
    if ( v31 )
      hkMonitorStream::timerBegin(v31, "TtLegacyQuery: PhysicsQuery_LegacyTraceRoundCorners SubRays");
    v54 = v32;
    _XMM2 = 0i64;
    __asm { vroundss xmm2, xmm2, xmm0, 2 }
    v49 = (int)*(float *)&_XMM2;
    _XMM3 = 0i64;
    __asm { vroundss xmm3, xmm3, xmm1, 2 }
    v37 = (int)*(float *)&_XMM3;
    v38 = s_PhysicsQuery_LegacyQueryAnyResults[*(_QWORD *)start.v];
    if ( !v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4974, ASSERT_TYPE_ASSERT, "(sightTraceResult)", (const char *)&queryFormat, "sightTraceResult") )
      __debugbreak();
    HavokPhysics_CollisionQueryResult::Reset(v38, 1);
    v39 = 0;
    if ( v49 > 0 )
    {
      while ( 1 )
      {
        v40 = (float)v39 * 0.33333334;
        start.v[0] = (float)((float)(pos.v[0] - v25) * v40) + v25;
        start.v[1] = (float)((float)(pos.v[1] - v27) * v40) + v27;
        start.v[2] = (float)((float)(pos.v[2] - v28) * v40) + v28;
        HavokPhysics_CollisionQueryResult::Reset(v38, 1);
        Physics_Raycast((Physics_WorldId)v7, &start, end, &extendedData, v38);
        if ( !HavokPhysics_CollisionQueryResult::HasHit(v38) )
          break;
        if ( ++v39 >= v49 )
          goto LABEL_41;
      }
      v42 = LODWORD(FLOAT_1_0);
      *(float *)&v42 = 1.0 - v40;
      _XMM0 = v42;
      __asm { vmaxss  xmm7, xmm0, xmm7 }
      v43 = v39 + 2;
      if ( v37 < v39 + 2 )
        v43 = (int)*(float *)&_XMM3;
      v37 = v43;
    }
LABEL_41:
    if ( v37 > 0 )
    {
      while ( 1 )
      {
        v44 = (float)v10 * 0.33333334;
        start.v[0] = (float)((float)(v59.v[0] - v29) * v44) + v29;
        start.v[1] = (float)((float)(v59.v[1] - v30) * v44) + v30;
        start.v[2] = (float)((float)(v59.v[2] - v28) * v44) + v28;
        HavokPhysics_CollisionQueryResult::Reset(v38, 1);
        Physics_Raycast((Physics_WorldId)v7, &start, end, &extendedData, v38);
        if ( !HavokPhysics_CollisionQueryResult::HasHit(v38) )
          break;
        if ( ++v10 >= v37 )
          goto LABEL_46;
      }
      v46 = LODWORD(FLOAT_1_0);
      *(float *)&v46 = 1.0 - v44;
      _XMM0 = v46;
      __asm { vmaxss  xmm7, xmm0, xmm7 }
    }
LABEL_46:
    if ( v32 )
      hkMonitorStream::timerEnd(v32, "Et");
  }
  if ( v9 )
    hkMonitorStream::timerEnd(v9, "Et");
  return *(float *)&_XMM7;
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
  const vec3_t *v14; 
  const vec3_t *v15; 
  __int64 v16; 
  void *v17; 
  hknpShape *Value; 
  hknpShape *v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  HavokPhysics_IgnoreBodies *v23; 
  int v24; 
  float v25; 
  float v26; 
  bool v27; 
  const vec3_t *v28; 
  hknpShape *v29; 
  hknpShape *v30; 
  const vec3_t *v31; 
  unsigned int ThreadId; 
  bool IsShapeCacheDisabled; 
  int v34; 
  int v35; 
  hknpShape *v36; 
  int v37; 
  int v38; 
  int NumHits; 
  int v40; 
  HavokPhysics_CollisionQueryResult *v41; 
  int ClosestPointHitRef; 
  int RaycastHitRef; 
  double RaycastHitFraction; 
  const Physics_DetailHitData *DetailHitData; 
  unsigned int RaycastHitBodyId; 
  hknpShape *nonBrushShape; 
  int legacyEntryId; 
  trace_t *trace; 
  Physics_QueryPointExtendedData v50; 
  vec3_t *enda; 
  hknpShape *paddedShape; 
  hknpShape *shape; 
  Physics_ShapecastExtendedData extendedData; 
  Bounds *v55; 
  const int *v56; 
  const vec3_t *v57; 
  vec3_t *v58; 
  __int64 v59; 
  hknpShape *v60; 
  vec4_t quat; 

  v59 = -2i64;
  v14 = end;
  enda = (vec3_t *)end;
  v15 = start;
  v57 = start;
  trace = results;
  v16 = worldId;
  LODWORD(shape) = worldId;
  v58 = (vec3_t *)angles;
  v55 = (Bounds *)bounds;
  v56 = skipEntities;
  v17 = priorityMap;
  nonBrushShape = (hknpShape *)priorityMap;
  Value = (hknpShape *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v19 = Value;
  paddedShape = Value;
  if ( Value )
    hkMonitorStream::timerBegin((hkMonitorStream *)Value, "TtLegacyQuery: PhysicsQuery_LegacyTrace");
  v60 = v19;
  if ( (unsigned int)v16 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3217, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v16] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3218, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !trace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3219, ASSERT_TYPE_ASSERT, "(results)", (const char *)&queryFormat, "results") )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3220, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  if ( !skipEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3221, ASSERT_TYPE_ASSERT, "(skipEntities)", (const char *)&queryFormat, "skipEntities") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3223, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  legacyEntryId = 28 * v16 + Physics_GetThreadId();
  v20 = legacyEntryId;
  HavokPhysics_IgnoreBodies::Reset(s_PhysicsQuery_LegacyIgnoreBodies[legacyEntryId]);
  HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyQueryResults[legacyEntryId], 1);
  HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyTraceResults[legacyEntryId], 1);
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(s_PhysicsQuery_LegacyIgnoreBodies[legacyEntryId], ignoreRefs);
  v21 = skipEntityCount;
  v22 = 0i64;
  if ( skipEntityCount > 0 )
  {
    do
    {
      v23 = s_PhysicsQuery_LegacyIgnoreBodies[legacyEntryId];
      v24 = v56[v22];
      if ( !v23 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 727, ASSERT_TYPE_ASSERT, "(ignoreBodies)", (const char *)&queryFormat, "ignoreBodies") )
          __debugbreak();
        v21 = skipEntityCount;
      }
      if ( v24 >= 0 )
      {
        HavokPhysics_IgnoreBodies::AddIgnoreEntity(v23, v24, 1, skipChildren == 1, 0, 1, 0);
        v21 = skipEntityCount;
      }
      ++v22;
    }
    while ( v22 < v21 );
    v19 = paddedShape;
    v15 = v57;
    LODWORD(v16) = (_DWORD)shape;
    v14 = enda;
    v17 = nonBrushShape;
  }
  v25 = v55->halfSize.v[0];
  v26 = v55->halfSize.v[2];
  AnglesToQuat(v58, &quat);
  if ( v26 == 0.0 || v25 == 0.0 )
  {
    if ( v14->v[0] == v15->v[0] && v14->v[1] == v15->v[1] && v14->v[2] == v15->v[2] )
    {
      v50.simplify = 0;
      v50.collisionBuffer = 0.0;
      if ( locational && v17 )
      {
        v34 = contentMask & 0xFDFFBFFF;
        v50.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
      }
      else
      {
        v34 = contentMask;
        v50.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
      }
      v50.contents = v34;
      v50.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[legacyEntryId];
      v50.phaseSelection = phaseSelection;
      Physics_QueryPoint((Physics_WorldId)v16, v15, 0.0, &v50, s_PhysicsQuery_LegacyQueryResults[legacyEntryId]);
      Physics_ConvertClosestPointsToLegacyTrace(s_PhysicsQuery_LegacyQueryResults[legacyEntryId], trace);
    }
    else
    {
      v35 = locational;
      v36 = nonBrushShape;
      if ( locational && nonBrushShape )
      {
        Physics_AddDetailTrace(s_PhysicsQuery_LegacyTraceResults[legacyEntryId], (unsigned __int8 *)nonBrushShape);
        v36 = nonBrushShape;
      }
      *((float *)&extendedData.ignoreBodies + 1) = 0.0;
      *((_DWORD *)&extendedData.collisionBuffer + 1) = 1;
      LOWORD(extendedData.nonBrushShape) = 256;
      v37 = contentMask;
      extendedData.contents = contentMask;
      *(_QWORD *)&extendedData.accuracy = s_PhysicsQuery_LegacyIgnoreBodies[legacyEntryId];
      if ( !locational || (LODWORD(extendedData.ignoreBodies) = 0, !v36) )
        LODWORD(extendedData.ignoreBodies) = 1;
      LODWORD(extendedData.collisionBuffer) = phaseSelection;
      Physics_Raycast((Physics_WorldId)v16, v15, v14, (Physics_RaycastExtendedData *)&extendedData, s_PhysicsQuery_LegacyTraceResults[legacyEntryId]);
      if ( locational && nonBrushShape )
      {
        v50.simplify = 0;
        v50.collisionBuffer = 0.0;
        v50.contents = contentMask & 0x2004000;
        v50.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[legacyEntryId];
        v38 = 0;
        v50.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
        v50.phaseSelection = phaseSelection;
        HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyQueryAllResults[legacyEntryId], 1);
        Physics_QueryPoint((Physics_WorldId)v16, v15, 0.0, &v50, s_PhysicsQuery_LegacyQueryAllResults[legacyEntryId]);
        NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(s_PhysicsQuery_LegacyQueryAllResults[legacyEntryId]);
        if ( NumHits > 0 )
        {
          v40 = NumHits;
          do
          {
            if ( !HavokPhysics_CollisionQueryResult::HasHit(s_PhysicsQuery_LegacyTraceResults[legacyEntryId]) || (v41 = s_PhysicsQuery_LegacyTraceResults[legacyEntryId], ClosestPointHitRef = HavokPhysics_CollisionQueryResult::GetClosestPointHitRef(s_PhysicsQuery_LegacyQueryAllResults[legacyEntryId], v38), RaycastHitRef = HavokPhysics_CollisionQueryResult::GetRaycastHitRef(v41, 0), v14 = enda, RaycastHitRef != ClosestPointHitRef) )
              HavokPhysics_CollisionQueryResult::AddQueryPointHitAsRaycastHit(s_PhysicsQuery_LegacyTraceResults[legacyEntryId], (Physics_WorldId)v16, s_PhysicsQuery_LegacyQueryAllResults[legacyEntryId], v38, v15, v14, (Physics_RaycastExtendedData *)&extendedData);
            ++v38;
          }
          while ( v38 < v40 );
          v19 = paddedShape;
          v37 = contentMask;
        }
        v35 = locational;
      }
      if ( HavokPhysics_CollisionQueryResult::HasHit(s_PhysicsQuery_LegacyTraceResults[legacyEntryId]) )
      {
        RaycastHitFraction = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(s_PhysicsQuery_LegacyTraceResults[legacyEntryId], 0);
        DetailHitData = NULL;
        if ( *(float *)&RaycastHitFraction <= 0.0 )
        {
          v50.simplify = 0;
          v50.ignoreBodies = NULL;
          v50.collisionBuffer = 0.0;
          if ( v35 && nonBrushShape )
          {
            v37 &= 0xFDFFBFFF;
            v50.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
          }
          else
          {
            v50.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
          }
          v50.contents = v37;
          v50.phaseSelection = phaseSelection;
          RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(s_PhysicsQuery_LegacyTraceResults[legacyEntryId], 0);
          if ( (RaycastHitBodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3383, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( hitBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( hitBodyId )") )
            __debugbreak();
          Physics_QueryPoint((Physics_WorldId)v16, RaycastHitBodyId, v15, 0.0, &v50, s_PhysicsQuery_LegacyQueryResults[legacyEntryId]);
        }
      }
      else
      {
        DetailHitData = NULL;
      }
      if ( v35 && nonBrushShape )
        DetailHitData = Physics_GetDetailHitData(s_PhysicsQuery_LegacyTraceResults[legacyEntryId], 0, 0);
      Physics_ConvertRayQueryResultToLegacyTrace(s_PhysicsQuery_LegacyTraceResults[legacyEntryId], s_PhysicsQuery_LegacyQueryResults[legacyEntryId], DetailHitData, trace);
    }
  }
  else
  {
    v27 = PhysicsQuery_LegacyTraceCreateShape((Physics_WorldId)v16, NULL, v55, 0, s_PhysicsQuery_LegacyTraceShapeBuffers[legacyEntryId], 0, &shape, &nonBrushShape, &paddedShape, NULL);
    if ( v14->v[0] == v15->v[0] && v14->v[1] == v15->v[1] && v14->v[2] == v15->v[2] )
    {
      LOBYTE(extendedData.startTolerance) = 0;
      *(float *)&extendedData.ignoreBodies = 0.0;
      if ( locational && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3257, ASSERT_TYPE_ASSERT, "(locational == qfalse)", "%s\n\tCan't do locational shape traces - only locational ray-traces", "locational == qfalse") )
        __debugbreak();
      extendedData.contents = contentMask;
      *(_QWORD *)&extendedData.accuracy = s_PhysicsQuery_LegacyIgnoreBodies[v20];
      *(_QWORD *)&extendedData.collisionBuffer = nonBrushShape;
      LODWORD(extendedData.nonBrushShape) = phaseSelection;
      v28 = v15;
      v29 = shape;
      Physics_GetClosestPoints((Physics_WorldId)v16, shape, v28, &quat, 0.0, (Physics_GetClosestPointsExtendedData *)&extendedData, s_PhysicsQuery_LegacyQueryResults[v20]);
      Physics_ConvertClosestPointsToLegacyTrace(s_PhysicsQuery_LegacyQueryResults[v20], trace);
    }
    else
    {
      extendedData.startTolerance = 0.0;
      extendedData.accuracy = FLOAT_0_016000001;
      extendedData.simplifyStart = 0;
      extendedData.permitOutwardTrace = 0;
      if ( locational && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3274, ASSERT_TYPE_ASSERT, "(locational == qfalse)", "%s\n\tCan't do locational shape traces - only locational ray-traces", "locational == qfalse") )
        __debugbreak();
      extendedData.contents = contentMask;
      extendedData.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v20];
      extendedData.collisionBuffer = FLOAT_0_125;
      v30 = nonBrushShape;
      extendedData.nonBrushShape = nonBrushShape;
      extendedData.secondPassShape = paddedShape;
      extendedData.phaseSelection = phaseSelection;
      v31 = v15;
      v29 = shape;
      Physics_Shapecast((Physics_WorldId)v16, shape, v31, enda, &quat, &extendedData, s_PhysicsQuery_LegacyTraceResults[v20], s_PhysicsQuery_LegacyQueryResults[v20]);
      Physics_ConvertShapeQueryResultToLegacyTrace(s_PhysicsQuery_LegacyTraceResults[v20], s_PhysicsQuery_LegacyQueryResults[v20], trace);
      PhysicsQuery_LegacyTraceProcessAllSolid((Physics_WorldId)v16, trace, &quat, legacyEntryId, contentMask, v30, phaseSelection, v29, enda);
    }
    ThreadId = Physics_GetThreadId();
    IsShapeCacheDisabled = Physics_IsShapeCacheDisabled(ThreadId);
    if ( paddedShape )
      Physics_ReleaseShape((Physics_WorldId)v16, paddedShape, IsShapeCacheDisabled);
    if ( v29 && v27 )
      Physics_ReleaseShape((Physics_WorldId)v16, v29, IsShapeCacheDisabled);
  }
  if ( v19 )
    hkMonitorStream::timerEnd((hkMonitorStream *)v19, "Et");
}

/*
==============
PhysicsQuery_LegacyTraceSkipEntities_Internal
==============
*/
void PhysicsQuery_LegacyTraceSkipEntities_Internal(Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, const int *skipEntities, int skipEntityCount, int skipChildren, int contentMask, int locational, unsigned __int8 *priorityMap, Physics_QueryPhaseSelection phaseSelection, int ignoreRefs, const bool detectInsideRaycasts)
{
  const vec3_t *v14; 
  const vec3_t *v15; 
  trace_t *v16; 
  __int64 v17; 
  hkMonitorStream *Value; 
  hkMonitorStream *v19; 
  hknpShape *v20; 
  __int64 v21; 
  hknpShape *v22; 
  __int64 v23; 
  const int *v24; 
  HavokPhysics_IgnoreBodies *v25; 
  int v26; 
  bool v27; 
  const vec3_t *v28; 
  hknpShape *v29; 
  int v30; 
  hknpShape *v31; 
  Physics_QueryPhaseSelection v32; 
  const vec3_t *v33; 
  unsigned int ThreadId; 
  bool IsShapeCacheDisabled; 
  int v36; 
  unsigned __int8 *v37; 
  int v38; 
  int v39; 
  int v40; 
  int NumHits; 
  int v42; 
  HavokPhysics_CollisionQueryResult *v43; 
  int ClosestPointHitRef; 
  int RaycastHitRef; 
  double RaycastHitFraction; 
  unsigned int RaycastHitBodyId; 
  hknpShape *shape; 
  Physics_QueryPointExtendedData v49; 
  Physics_ShapecastExtendedData extendedData; 
  hkMonitorStream *v51; 
  Physics_DetailHitData *detailHitData; 
  __int64 v53; 
  __int128 v54; 
  bool v56; 

  v53 = -2i64;
  v14 = end;
  v15 = start;
  v16 = results;
  v17 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v19 = Value;
  v51 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyTrace");
  *(_QWORD *)&v54 = v19;
  if ( (unsigned int)v17 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2989, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v17] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2990, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2991, ASSERT_TYPE_ASSERT, "(results)", (const char *)&queryFormat, "results") )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2992, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  v20 = (hknpShape *)skipEntityCount;
  if ( !skipEntities && skipEntityCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2993, ASSERT_TYPE_ASSERT, "(skipEntities || skipEntityCount == 0)", (const char *)&queryFormat, "skipEntities || skipEntityCount == 0") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 2995, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  skipEntityCount = 28 * v17 + Physics_GetThreadId();
  v21 = skipEntityCount;
  HavokPhysics_IgnoreBodies::Reset(s_PhysicsQuery_LegacyIgnoreBodies[skipEntityCount]);
  HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyQueryResults[v21], 1);
  HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyTraceResults[v21], 1);
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(s_PhysicsQuery_LegacyIgnoreBodies[v21], ignoreRefs);
  v22 = v20;
  shape = v20;
  detailHitData = NULL;
  if ( (int)v20 > 0 )
  {
    v23 = 0i64;
    v24 = skipEntities;
    do
    {
      v25 = s_PhysicsQuery_LegacyIgnoreBodies[v21];
      v26 = v24[v23];
      if ( !v25 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 727, ASSERT_TYPE_ASSERT, "(ignoreBodies)", (const char *)&queryFormat, "ignoreBodies") )
          __debugbreak();
        v22 = shape;
      }
      if ( v26 >= 0 )
      {
        HavokPhysics_IgnoreBodies::AddIgnoreEntity(v25, v26, 1, skipChildren == 1, 0, 1, 0);
        v22 = shape;
      }
      ++v23;
    }
    while ( v23 < (__int64)v22 );
    v19 = v51;
    LODWORD(v17) = worldId;
    v15 = start;
    v14 = end;
    v16 = results;
  }
  if ( bounds->halfSize.v[2] == 0.0 || bounds->halfSize.v[0] == 0.0 )
  {
    if ( v14->v[0] == v15->v[0] && v14->v[1] == v15->v[1] && v14->v[2] == v15->v[2] )
    {
      v49.simplify = 0;
      v49.collisionBuffer = 0.0;
      if ( locational && priorityMap )
      {
        v36 = contentMask & 0xFDFFBFFF;
        v49.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
      }
      else
      {
        v36 = contentMask;
        v49.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
      }
      v49.contents = v36;
      v49.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v21];
      v49.phaseSelection = phaseSelection;
      Physics_QueryPoint((Physics_WorldId)v17, v15, 0.0, &v49, s_PhysicsQuery_LegacyQueryResults[v21]);
      Physics_ConvertClosestPointsToLegacyTrace(s_PhysicsQuery_LegacyQueryResults[v21], v16);
    }
    else
    {
      v37 = priorityMap;
      if ( locational && priorityMap )
        Physics_AddDetailTrace(s_PhysicsQuery_LegacyTraceResults[v21], priorityMap);
      *((float *)&extendedData.ignoreBodies + 1) = 0.0;
      LOWORD(extendedData.nonBrushShape) = 256;
      v38 = contentMask;
      extendedData.contents = contentMask;
      *(_QWORD *)&extendedData.accuracy = s_PhysicsQuery_LegacyIgnoreBodies[v21];
      if ( !locational || (LODWORD(extendedData.ignoreBodies) = 0, !v37) )
        LODWORD(extendedData.ignoreBodies) = 1;
      LODWORD(extendedData.collisionBuffer) = phaseSelection;
      v39 = 1;
      if ( detectInsideRaycasts )
        v39 = 2;
      *((_DWORD *)&extendedData.collisionBuffer + 1) = v39;
      Physics_Raycast((Physics_WorldId)v17, v15, v14, (Physics_RaycastExtendedData *)&extendedData, s_PhysicsQuery_LegacyTraceResults[v21]);
      if ( locational && v37 )
      {
        v49.simplify = 0;
        v49.collisionBuffer = 0.0;
        v49.contents = v38 & 0x2004000;
        v49.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v21];
        v40 = 0;
        v49.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
        v49.phaseSelection = phaseSelection;
        HavokPhysics_CollisionQueryResult::Reset(s_PhysicsQuery_LegacyQueryAllResults[v21], 1);
        Physics_QueryPoint((Physics_WorldId)v17, v15, 0.0, &v49, s_PhysicsQuery_LegacyQueryAllResults[v21]);
        NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(s_PhysicsQuery_LegacyQueryAllResults[v21]);
        if ( NumHits > 0 )
        {
          v42 = NumHits;
          do
          {
            if ( !HavokPhysics_CollisionQueryResult::HasHit(s_PhysicsQuery_LegacyTraceResults[v21]) || (v43 = s_PhysicsQuery_LegacyTraceResults[v21], ClosestPointHitRef = HavokPhysics_CollisionQueryResult::GetClosestPointHitRef(s_PhysicsQuery_LegacyQueryAllResults[v21], v40), RaycastHitRef = HavokPhysics_CollisionQueryResult::GetRaycastHitRef(v43, 0), v14 = end, RaycastHitRef != ClosestPointHitRef) )
              HavokPhysics_CollisionQueryResult::AddQueryPointHitAsRaycastHit(s_PhysicsQuery_LegacyTraceResults[v21], (Physics_WorldId)v17, s_PhysicsQuery_LegacyQueryAllResults[v21], v40, v15, v14, (Physics_RaycastExtendedData *)&extendedData);
            ++v40;
          }
          while ( v40 < v42 );
          v19 = v51;
          v37 = priorityMap;
        }
        v38 = contentMask;
      }
      if ( HavokPhysics_CollisionQueryResult::HasHit(s_PhysicsQuery_LegacyTraceResults[v21]) )
      {
        RaycastHitFraction = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(s_PhysicsQuery_LegacyTraceResults[v21], 0);
        if ( *(float *)&RaycastHitFraction <= 0.0 )
        {
          v49.simplify = 0;
          v49.ignoreBodies = NULL;
          v49.collisionBuffer = 0.0;
          if ( locational && v37 )
          {
            v38 &= 0xFDFFBFFF;
            v49.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
          }
          else
          {
            v49.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
          }
          v49.contents = v38;
          v49.phaseSelection = phaseSelection;
          RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(s_PhysicsQuery_LegacyTraceResults[v21], 0);
          if ( (RaycastHitBodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3156, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( hitBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( hitBodyId )") )
            __debugbreak();
          Physics_QueryPoint((Physics_WorldId)v17, RaycastHitBodyId, v15, 0.0, &v49, s_PhysicsQuery_LegacyQueryResults[v21]);
        }
      }
      if ( locational && v37 )
        detailHitData = (Physics_DetailHitData *)Physics_GetDetailHitData(s_PhysicsQuery_LegacyTraceResults[v21], 0, 0);
      Physics_ConvertRayQueryResultToLegacyTrace(s_PhysicsQuery_LegacyTraceResults[v21], s_PhysicsQuery_LegacyQueryResults[v21], detailHitData, results);
    }
  }
  else
  {
    v27 = PhysicsQuery_LegacyTraceCreateShape((Physics_WorldId)v17, NULL, bounds, 0, s_PhysicsQuery_LegacyTraceShapeBuffers[v21], 0, (hknpShape **)&bounds, (hknpShape **)&skipEntities, &shape, NULL);
    v56 = v27;
    if ( v14->v[0] == v15->v[0] && v14->v[1] == v15->v[1] && v14->v[2] == v15->v[2] )
    {
      LOBYTE(extendedData.startTolerance) = 0;
      *(float *)&extendedData.ignoreBodies = 0.0;
      if ( locational && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3026, ASSERT_TYPE_ASSERT, "(locational == qfalse)", "%s\n\tCan't do locational shape traces - only locational ray-traces", "locational == qfalse") )
        __debugbreak();
      extendedData.contents = contentMask;
      *(_QWORD *)&extendedData.accuracy = s_PhysicsQuery_LegacyIgnoreBodies[v21];
      *(_QWORD *)&extendedData.collisionBuffer = skipEntities;
      LODWORD(extendedData.nonBrushShape) = phaseSelection;
      v28 = v15;
      v29 = (hknpShape *)bounds;
      Physics_GetClosestPoints((Physics_WorldId)v17, (hknpShape *)bounds, v28, &quat_identity, 0.0, (Physics_GetClosestPointsExtendedData *)&extendedData, s_PhysicsQuery_LegacyQueryResults[v21]);
      Physics_ConvertClosestPointsToLegacyTrace(s_PhysicsQuery_LegacyQueryResults[v21], results);
    }
    else
    {
      extendedData.startTolerance = 0.0;
      extendedData.accuracy = FLOAT_0_016000001;
      extendedData.simplifyStart = 0;
      extendedData.permitOutwardTrace = 0;
      if ( locational && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 3043, ASSERT_TYPE_ASSERT, "(locational == qfalse)", "%s\n\tCan't do locational shape traces - only locational ray-traces", "locational == qfalse") )
        __debugbreak();
      v30 = contentMask;
      extendedData.contents = contentMask;
      extendedData.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v21];
      extendedData.collisionBuffer = FLOAT_0_125;
      v31 = (hknpShape *)skipEntities;
      extendedData.nonBrushShape = (hknpShape *)skipEntities;
      extendedData.secondPassShape = shape;
      v32 = phaseSelection;
      extendedData.phaseSelection = phaseSelection;
      v33 = v15;
      v29 = (hknpShape *)bounds;
      Physics_Shapecast((Physics_WorldId)v17, (hknpShape *)bounds, v33, end, &quat_identity, &extendedData, s_PhysicsQuery_LegacyTraceResults[v21], s_PhysicsQuery_LegacyQueryResults[v21]);
      Physics_ConvertShapeQueryResultToLegacyTrace(s_PhysicsQuery_LegacyTraceResults[v21], s_PhysicsQuery_LegacyQueryResults[v21], results);
      PhysicsQuery_LegacyTraceProcessAllSolid((Physics_WorldId)v17, results, &quat_identity, skipEntityCount, v30, v31, v32, v29, end);
      v27 = v56;
    }
    ThreadId = Physics_GetThreadId();
    IsShapeCacheDisabled = Physics_IsShapeCacheDisabled(ThreadId);
    if ( shape )
      Physics_ReleaseShape((Physics_WorldId)v17, shape, IsShapeCacheDisabled);
    if ( v29 && v27 )
      Physics_ReleaseShape((Physics_WorldId)v17, v29, IsShapeCacheDisabled);
  }
  if ( v19 )
    hkMonitorStream::timerEnd(v19, "Et");
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
  __int64 v8; 
  hkMonitorStream *Value; 
  hkMonitorStream *v10; 
  int v11; 
  float v12; 
  float v13; 
  __int64 v14; 
  HavokPhysics_CollisionQueryResult *v15; 
  hknpShape *ShapeCapsuleUpAxis; 
  BOOL HasHit; 
  Physics_ShapecastExtendedData extendedData; 

  v8 = worldId;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v10 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyWorldOnlySightTrace");
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4603, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  v11 = Physics_GetThreadId() + 28 * v8;
  if ( (unsigned int)v8 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4606, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !s_PhysicsQuery_WorldInitialized[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4607, ASSERT_TYPE_ASSERT, "(s_PhysicsQuery_WorldInitialized[worldId])", (const char *)&queryFormat, "s_PhysicsQuery_WorldInitialized[worldId]") )
    __debugbreak();
  if ( !bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4608, ASSERT_TYPE_ASSERT, "(bounds)", (const char *)&queryFormat, "bounds") )
    __debugbreak();
  v12 = bounds->halfSize.v[0];
  v13 = bounds->halfSize.v[2];
  v14 = v11;
  v15 = s_PhysicsQuery_LegacyQueryAnyResults[v11];
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4620, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_CollisionQueryResult::Reset(v15, 1);
  HavokPhysics_IgnoreBodies::Reset(s_PhysicsQuery_LegacyIgnoreBodies[v14]);
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(s_PhysicsQuery_LegacyIgnoreBodies[v14], -2);
  if ( v13 == 0.0 || v12 == 0.0 )
  {
    LODWORD(extendedData.ignoreBodies) = 1;
    *((float *)&extendedData.ignoreBodies + 1) = 0.0;
    extendedData.collisionBuffer = 0.0;
    *((_DWORD *)&extendedData.collisionBuffer + 1) = 1;
    LOWORD(extendedData.nonBrushShape) = 256;
    extendedData.contents = contentMask;
    *(_QWORD *)&extendedData.accuracy = s_PhysicsQuery_LegacyIgnoreBodies[v14];
    Physics_Raycast((Physics_WorldId)v8, start, end, (Physics_RaycastExtendedData *)&extendedData, v15);
  }
  else
  {
    extendedData.startTolerance = 0.0;
    _XMM0 = LODWORD(FLOAT_0_016000001);
    extendedData.accuracy = FLOAT_0_016000001;
    extendedData.simplifyStart = 0;
    extendedData.collisionBuffer = 0.0;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    *(_OWORD *)&extendedData.nonBrushShape = _XMM0;
    extendedData.phaseSelection = All;
    extendedData.permitOutwardTrace = 0;
    extendedData.contents = contentMask;
    extendedData.ignoreBodies = s_PhysicsQuery_LegacyIgnoreBodies[v14];
    ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis((Physics_WorldId)v8, &bounds->midPoint, v13 - v12, v12, s_PhysicsQuery_LegacyTraceShapeBuffers[v14], 432, Temporary);
    if ( !ShapeCapsuleUpAxis && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 4640, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
      __debugbreak();
    Physics_Shapecast((Physics_WorldId)v8, ShapeCapsuleUpAxis, start, end, &quat_identity, &extendedData, v15, NULL);
  }
  HasHit = HavokPhysics_CollisionQueryResult::HasHit(v15);
  if ( v10 )
    hkMonitorStream::timerEnd(v10, "Et");
  return HasHit;
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
void PhysicsQuery_TraceCmd(const void *const cmdData)
{
  unsigned __int64 v1; 
  hkMonitorStream *Value; 
  hkMonitorStream *v4; 
  float *v5; 
  int v6; 
  float *v7; 
  float *v8; 
  float *v9; 
  _QWORD v10[34]; 

  v10[33] = -2i64;
  v1 = (unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64;
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v4 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_TraceCmd");
  *(_QWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 8) = v4;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_MID_AIR_DETACH) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5151, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRACE_WORKER )") )
    __debugbreak();
  memset_0((void *)(v1 + 132), 0, 0x58ui64);
  *(_QWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0xF4) = 0i64;
  *(_DWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0xFC) = 0;
  *(const float *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0x80) = FLOAT_1_0;
  *(float *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0xDC) = *((float *)cmdData + 3);
  *(float *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0xE0) = *((float *)cmdData + 4);
  *(float *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0xE4) = *((float *)cmdData + 5);
  v5 = (float *)((char *)cmdData + 24);
  *(float *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0xE8) = *((float *)cmdData + 6);
  *(float *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0xEC) = *((float *)cmdData + 7);
  *(float *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0xF0) = *((float *)cmdData + 8);
  if ( *((int *)cmdData + 64) < 0 )
    goto LABEL_18;
  if ( *((_BYTE *)cmdData + 268) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5173, ASSERT_TYPE_ASSERT, "(!cmd->boundsCylinder)", (const char *)&queryFormat, "!cmd->boundsCylinder") )
    __debugbreak();
  if ( !CG_CalcTraceEnd(*((LocalClientNum_t *)cmdData + 19), *((_DWORD *)cmdData + 20), (const vec3_t *)((char *)cmdData + 64), *((_DWORD *)cmdData + 64), *((scr_string_t *)cmdData + 65), (vec3_t *)cmdData + 2) )
  {
    *(float *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0x80) = 0;
    goto LABEL_24;
  }
  *(float *)v1 = *v5;
  if ( (*(_DWORD *)v1 & 0x7F800000) == 2139095040 || (*(float *)v1 = *((float *)cmdData + 7), (*(_DWORD *)v1 & 0x7F800000) == 2139095040) || (*(float *)v1 = *((float *)cmdData + 8), (*(_DWORD *)v1 & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5182, ASSERT_TYPE_SANITY, "( !IS_NAN( ( cmd->end )[0] ) && !IS_NAN( ( cmd->end )[1] ) && !IS_NAN( ( cmd->end )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( cmd->end )[0] ) && !IS_NAN( ( cmd->end )[1] ) && !IS_NAN( ( cmd->end )[2] )") )
      __debugbreak();
  }
  *(float *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0xE8) = *v5;
  *(float *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0xEC) = *((float *)cmdData + 7);
  *(float *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0xF0) = *((float *)cmdData + 8);
  if ( *(float *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0x80) > 0.0 )
  {
LABEL_18:
    v6 = 3 * *((_DWORD *)cmdData + 19) + 2;
    if ( *((_BYTE *)cmdData + 268) )
    {
      *(_DWORD *)v1 = 5;
      if ( !*((_QWORD *)cmdData + 34) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsquery.cpp", 5196, ASSERT_TYPE_ASSERT, "(cmd->ps)", (const char *)&queryFormat, "cmd->ps") )
        __debugbreak();
      PhysicsQuery_LegacyCapsuleTrace_Internal((Physics_WorldId)v6, (trace_t *)(v1 + 128), (const vec3_t *)(v1 + 220), (const vec3_t *)(v1 + 232), (const Bounds *)((char *)cmdData + 36), (int *)cmdData + 48, *((_DWORD *)cmdData + 56), NULL, 0, *((_DWORD *)cmdData + 15), *((const playerState_s **)cmdData + 34), 0, 0, NULL, NULL, (PhysicsQuery_ContextSettings *)((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64));
    }
    else
    {
      PhysicsQuery_LegacyTraceSkipEntities_Internal((Physics_WorldId)v6, (trace_t *)(v1 + 128), (const vec3_t *)(v1 + 220), (const vec3_t *)(v1 + 232), (const Bounds *)((char *)cmdData + 36), (const int *)cmdData + 48, *((_DWORD *)cmdData + 56), 0, *((_DWORD *)cmdData + 15), *((_DWORD *)cmdData + 58), *((unsigned __int8 **)cmdData + 30), *((Physics_QueryPhaseSelection *)cmdData + 66), 0, 0);
    }
  }
LABEL_24:
  *(float *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0xDC) = *((float *)cmdData + 3);
  *(float *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0xE0) = *((float *)cmdData + 4);
  *(float *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0xE4) = *((float *)cmdData + 5);
  *(float *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0xE8) = *v5;
  *(float *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0xEC) = *((float *)cmdData + 7);
  *(float *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0xF0) = *((float *)cmdData + 8);
  v7 = *(float **)cmdData;
  *(__m256i *)v7 = *(__m256i *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0x80);
  *((__m256i *)v7 + 1) = *(__m256i *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0xA0);
  *((_OWORD *)v7 + 4) = *(_OWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0xC0);
  *((double *)v7 + 10) = *(double *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0xD0);
  v8 = *(float **)cmdData;
  v8[23] = *(float *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0xDC);
  v8[24] = *(float *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0xE0);
  v8[25] = *(float *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0xE4);
  v9 = *(float **)cmdData;
  v9[26] = *(float *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0xE8);
  v9[27] = *(float *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0xEC);
  v9[28] = *(float *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFFF80ui64) + 0xF0);
  *(_DWORD *)(*(_QWORD *)cmdData + 88i64) = 2;
  if ( v4 )
    hkMonitorStream::timerEnd(v4, "Et");
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

