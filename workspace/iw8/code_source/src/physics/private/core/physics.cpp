/*
==============
Physics_GetRigidBodyTransformAfterWarpInstanceTo
==============
*/

void __fastcall Physics_GetRigidBodyTransformAfterWarpInstanceTo(Physics_WorldId worldId, unsigned int instanceId, unsigned int bodyId, const vec3_t *instancePosition, const vec4_t *instanceOrientationAsQuat, vec3_t *bodyPosition, vec4_t *bodyOrientationAsQuat)
{
  ?Physics_GetRigidBodyTransformAfterWarpInstanceTo@@YAXW4Physics_WorldId@@IIAEBTvec3_t@@AEBTvec4_t@@AEAT2@AEAT3@@Z(worldId, instanceId, bodyId, instancePosition, instanceOrientationAsQuat, bodyPosition, bodyOrientationAsQuat);
}

/*
==============
Physics_DeferredRaycast
==============
*/

void __fastcall Physics_DeferredRaycast(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, Physics_DeferredCollisionQueryData *data)
{
  ?Physics_DeferredRaycast@@YAXW4Physics_WorldId@@IAEBTvec3_t@@1PEAUPhysics_RaycastExtendedData@@PEAUPhysics_DeferredCollisionQueryData@@@Z(worldId, bodyId, start, end, extendedData, data);
}

/*
==============
Physics_RemoveShapeList
==============
*/

void __fastcall Physics_RemoveShapeList(char *rawShapeData, unsigned int rawShapeDataSize)
{
  ?Physics_RemoveShapeList@@YAXPEADI@Z(rawShapeData, rawShapeDataSize);
}

/*
==============
Physics_GetRigidBodyAABB
==============
*/

void __fastcall Physics_GetRigidBodyAABB(Physics_WorldId worldId, unsigned int bodyId, vec3_t *aabbMin, vec3_t *aabbMax, bool worldSpace)
{
  ?Physics_GetRigidBodyAABB@@YAXW4Physics_WorldId@@IAEATvec3_t@@1_N@Z(worldId, bodyId, aabbMin, aabbMax, worldSpace);
}

/*
==============
Physics_DeferredQueryPoint
==============
*/

void __fastcall Physics_DeferredQueryPoint(Physics_WorldId worldId, const vec3_t *point, float maxDistance, Physics_QueryPointExtendedData *extendedData, Physics_DeferredCollisionQueryData *data)
{
  ?Physics_DeferredQueryPoint@@YAXW4Physics_WorldId@@AEBTvec3_t@@MPEAUPhysics_QueryPointExtendedData@@PEAUPhysics_DeferredCollisionQueryData@@@Z(worldId, point, maxDistance, extendedData, data);
}

/*
==============
Physics_DecodeSubShapeKey
==============
*/

void __fastcall Physics_DecodeSubShapeKey(Physics_WorldId worldId, unsigned int instanceId, unsigned __int64 key, int *bodyIdx, unsigned __int16 *shapeInstanceId)
{
  ?Physics_DecodeSubShapeKey@@YAXW4Physics_WorldId@@I_KPEAHPEAG@Z(worldId, instanceId, key, bodyIdx, shapeInstanceId);
}

/*
==============
Physics_SetRigidBodyContents
==============
*/

void __fastcall Physics_SetRigidBodyContents(Physics_WorldId worldId, unsigned int bodyId, int contents, bool forceCacheRebuild)
{
  ?Physics_SetRigidBodyContents@@YAXW4Physics_WorldId@@IH_N@Z(worldId, bodyId, contents, forceCacheRebuild);
}

/*
==============
Physics_GetInstantiatiationPenetrationDepthForAsset
==============
*/

double __fastcall Physics_GetInstantiatiationPenetrationDepthForAsset(Physics_WorldId worldId, const PhysicsAsset *physicsAsset, const vec3_t *position, const vec4_t *orientationAsQuat, Physics_InstantiateShapeOverride *shapeOverride, int ignoreSystems)
{
  double result; 

  *(float *)&result = ?Physics_GetInstantiatiationPenetrationDepthForAsset@@YAMW4Physics_WorldId@@PEBUPhysicsAsset@@AEBTvec3_t@@AEBTvec4_t@@PEAUPhysics_InstantiateShapeOverride@@H@Z(worldId, physicsAsset, position, orientationAsQuat, shapeOverride, ignoreSystems);
  return result;
}

/*
==============
Physics_TransientZoneLoaded
==============
*/

void __fastcall Physics_TransientZoneLoaded(unsigned int worldTransientIndex, bool fullLoad)
{
  ?Physics_TransientZoneLoaded@@YAXI_N@Z(worldTransientIndex, fullLoad);
}

/*
==============
Physics_GetRendererThreadId
==============
*/

unsigned int __fastcall Physics_GetRendererThreadId()
{
  return ?Physics_GetRendererThreadId@@YAIXZ();
}

/*
==============
Physics_AddDeferredKeyframeInstance
==============
*/

void __fastcall Physics_AddDeferredKeyframeInstance(const Physics_WorldId worldId, const unsigned int instanceId, const vec3_t *origin, const vec4_t *orientationAsQuat)
{
  ?Physics_AddDeferredKeyframeInstance@@YAXW4Physics_WorldId@@IAEBTvec3_t@@AEBTvec4_t@@@Z(worldId, instanceId, origin, orientationAsQuat);
}

/*
==============
Physics_HasVFXEventAsset
==============
*/

bool __fastcall Physics_HasVFXEventAsset(Physics_WorldId worldId, unsigned int bodyId)
{
  return ?Physics_HasVFXEventAsset@@YA_NW4Physics_WorldId@@I@Z(worldId, bodyId);
}

/*
==============
Physics_UpdateVDB
==============
*/

void Physics_UpdateVDB(void)
{
  ?Physics_UpdateVDB@@YAXXZ();
}

/*
==============
Physics_DoDeferredQueries
==============
*/

void __fastcall Physics_DoDeferredQueries(Physics_WorldId worldId)
{
  ?Physics_DoDeferredQueries@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
Physics_AddXModelDetailCollisionAsset
==============
*/

void __fastcall Physics_AddXModelDetailCollisionAsset(XModelDetailCollision *detailCollision)
{
  ?Physics_AddXModelDetailCollisionAsset@@YAXPEAUXModelDetailCollision@@@Z(detailCollision);
}

/*
==============
Physics_MoveXModelAsset
==============
*/

void __fastcall Physics_MoveXModelAsset(XModel *from, XModel *to)
{
  ?Physics_MoveXModelAsset@@YAXPEAUXModel@@0@Z(from, to);
}

/*
==============
Physics_IsQueryWorld
==============
*/

bool __fastcall Physics_IsQueryWorld(Physics_WorldId worldId)
{
  return ?Physics_IsQueryWorld@@YA_NW4Physics_WorldId@@@Z(worldId);
}

/*
==============
Physics_Raycast
==============
*/

void __fastcall Physics_Raycast(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, HavokPhysics_CollisionQueryResult *result)
{
  ?Physics_Raycast@@YAXW4Physics_WorldId@@AEBTvec3_t@@1PEAUPhysics_RaycastExtendedData@@PEAVHavokPhysics_CollisionQueryResult@@@Z(worldId, start, end, extendedData, result);
}

/*
==============
Physics_StepWorld
==============
*/

void __fastcall Physics_StepWorld(Physics_WorldId worldId, int stepIndex, int numStepsPlanned, float stepTimeOverride)
{
  ?Physics_StepWorld@@YAXW4Physics_WorldId@@HHM@Z(worldId, stepIndex, numStepsPlanned, stepTimeOverride);
}

/*
==============
Physics_ConvertShapeQueryResultToLegacyTrace
==============
*/

void __fastcall Physics_ConvertShapeQueryResultToLegacyTrace(HavokPhysics_CollisionQueryResult *traceResult, HavokPhysics_CollisionQueryResult *queryResult, trace_t *trace)
{
  ?Physics_ConvertShapeQueryResultToLegacyTrace@@YAXPEAVHavokPhysics_CollisionQueryResult@@0PEAUtrace_t@@@Z(traceResult, queryResult, trace);
}

/*
==============
Physics_IsPhysicsAssetBodyDynamic
==============
*/

bool __fastcall Physics_IsPhysicsAssetBodyDynamic(const PhysicsAsset *physicsAsset, int bodyIdx)
{
  return ?Physics_IsPhysicsAssetBodyDynamic@@YA_NPEBUPhysicsAsset@@H@Z(physicsAsset, bodyIdx);
}

/*
==============
Physics_IsDebugCodeReadingServer
==============
*/

bool __fastcall Physics_IsDebugCodeReadingServer()
{
  return ?Physics_IsDebugCodeReadingServer@@YA_NXZ();
}

/*
==============
Physics_DrawDebugString
==============
*/

void __fastcall Physics_DrawDebugString(const ScreenPlacement *scrPlace, float x, float y, const char *string, const vec4_t *setColor, int forceColor, int shadow, float charHeight, int adjust)
{
  ?Physics_DrawDebugString@@YAXPEBUScreenPlacement@@MMPEBDAEBTvec4_t@@HHMH@Z(scrPlace, x, y, string, setColor, forceColor, shadow, charHeight, adjust);
}

/*
==============
Physics_DrawDebug
==============
*/

void __fastcall Physics_DrawDebug(const ScreenPlacement *scrPlace)
{
  ?Physics_DrawDebug@@YAXPEBUScreenPlacement@@@Z(scrPlace);
}

/*
==============
Physics_RenderDebugEnabled
==============
*/

bool __fastcall Physics_RenderDebugEnabled()
{
  return ?Physics_RenderDebugEnabled@@YA_NXZ();
}

/*
==============
Physics_DoCmd_StepWorldEnd
==============
*/

void __fastcall Physics_DoCmd_StepWorldEnd(const void *const cmdInfo)
{
  ?Physics_DoCmd_StepWorldEnd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
Physics_ReleaseShape
==============
*/

void __fastcall Physics_ReleaseShape(Physics_WorldId worldId, hknpShape *shape, bool finalReference)
{
  ?Physics_ReleaseShape@@YAXW4Physics_WorldId@@PEAVhknpShape@@_N@Z(worldId, shape, finalReference);
}

/*
==============
Physics_SetInstanceContents
==============
*/

void __fastcall Physics_SetInstanceContents(Physics_WorldId worldId, unsigned int instanceId, int contents)
{
  ?Physics_SetInstanceContents@@YAXW4Physics_WorldId@@IH@Z(worldId, instanceId, contents);
}

/*
==============
Physics_SwapXModelDetailCollisionAsset
==============
*/

void __fastcall Physics_SwapXModelDetailCollisionAsset(XModelDetailCollision *from, XModelDetailCollision *to)
{
  ?Physics_SwapXModelDetailCollisionAsset@@YAXPEAUXModelDetailCollision@@0@Z(from, to);
}

/*
==============
Physics_IsRigidBodyStatic
==============
*/

bool __fastcall Physics_IsRigidBodyStatic(Physics_WorldId worldId, unsigned int bodyId)
{
  return ?Physics_IsRigidBodyStatic@@YA_NW4Physics_WorldId@@I@Z(worldId, bodyId);
}

/*
==============
Physics_SetThreadHeapAllocationGeneral
==============
*/

void __fastcall Physics_SetThreadHeapAllocationGeneral(unsigned int threadId)
{
  ?Physics_SetThreadHeapAllocationGeneral@@YAXI@Z(threadId);
}

/*
==============
Physics_CreateDevGui
==============
*/

void __fastcall Physics_CreateDevGui(LocalClientNum_t localClientNum)
{
  ?Physics_CreateDevGui@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Physics_DestroyClientWorlds
==============
*/

void Physics_DestroyClientWorlds(void)
{
  ?Physics_DestroyClientWorlds@@YAXXZ();
}

/*
==============
Physics_ProcessDeferredForce
==============
*/

void __fastcall Physics_ProcessDeferredForce(const Physics_WorldId worldId)
{
  ?Physics_ProcessDeferredForce@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
Physics_SetCGDynEntAuthoritativeDebugData
==============
*/

void __fastcall Physics_SetCGDynEntAuthoritativeDebugData(LocalClientNum_t localClientNum, int dynEntCount, int dynEntSimpleCount, int dynEntSimpleAdditionalBoneCount, int dynEntComplexCount, int dynEntComplexBodyCount, int dynEntComplexAdditionalBoneCount)
{
  ?Physics_SetCGDynEntAuthoritativeDebugData@@YAXW4LocalClientNum_t@@HHHHHH@Z(localClientNum, dynEntCount, dynEntSimpleCount, dynEntSimpleAdditionalBoneCount, dynEntComplexCount, dynEntComplexBodyCount, dynEntComplexAdditionalBoneCount);
}

/*
==============
Physics_CreateShapeCapsuleUpAxis
==============
*/

hknpShape *__fastcall Physics_CreateShapeCapsuleUpAxis(Physics_WorldId worldId, const vec3_t *center, float halfHeight, float radius, char *optionalInplaceBuffer, int optionalInplaceBufferSize, Physics_ShapeStorage shapeStorage)
{
  return ?Physics_CreateShapeCapsuleUpAxis@@YAPEAVhknpShape@@W4Physics_WorldId@@AEBTvec3_t@@MMPEADHW4Physics_ShapeStorage@@@Z(worldId, center, halfHeight, radius, optionalInplaceBuffer, optionalInplaceBufferSize, shapeStorage);
}

/*
==============
Physics_SetCGFXOldDetailPropagationDebugData
==============
*/

void __fastcall Physics_SetCGFXOldDetailPropagationDebugData(LocalClientNum_t localClientNum, int numOldElems, int numOldElemsWithPhysics)
{
  ?Physics_SetCGFXOldDetailPropagationDebugData@@YAXW4LocalClientNum_t@@HH@Z(localClientNum, numOldElems, numOldElemsWithPhysics);
}

/*
==============
Physics_InstantiateHingeConstraint
==============
*/

bool __fastcall Physics_InstantiateHingeConstraint(Physics_WorldId worldId, unsigned int instanceId, unsigned int bodyIdx, const vec3_t *position, const vec3_t *direction, float friction, float angleMin, float angleMax, float breakingThreshold, unsigned int *outConstraintId)
{
  return ?Physics_InstantiateHingeConstraint@@YA_NW4Physics_WorldId@@IIAEBTvec3_t@@1MMMMPEAI@Z(worldId, instanceId, bodyIdx, position, direction, friction, angleMin, angleMax, breakingThreshold, outConstraintId);
}

/*
==============
Physics_IsAssetBodyAnimationDriven
==============
*/

bool __fastcall Physics_IsAssetBodyAnimationDriven(const PhysicsAsset *physicsAsset, int bodyIdx)
{
  return ?Physics_IsAssetBodyAnimationDriven@@YA_NPEBUPhysicsAsset@@H@Z(physicsAsset, bodyIdx);
}

/*
==============
Physics_ReleasePhysicsAsset
==============
*/

void __fastcall Physics_ReleasePhysicsAsset(PhysicsAsset *physicsAsset, bool unloadPackFileData)
{
  ?Physics_ReleasePhysicsAsset@@YAXPEAUPhysicsAsset@@_N@Z(physicsAsset, unloadPackFileData);
}

/*
==============
Physics_SetCGPhysicsObjectAuthoritativeDebugData
==============
*/

void __fastcall Physics_SetCGPhysicsObjectAuthoritativeDebugData(LocalClientNum_t localClientNum, int physicsObjectDynamicBoneMappingHavingCount, int physicsObjectDynamicBoneMappingCount)
{
  ?Physics_SetCGPhysicsObjectAuthoritativeDebugData@@YAXW4LocalClientNum_t@@HH@Z(localClientNum, physicsObjectDynamicBoneMappingHavingCount, physicsObjectDynamicBoneMappingCount);
}

/*
==============
Physics_ProcessDeferredKeyframe
==============
*/

void __fastcall Physics_ProcessDeferredKeyframe(const Physics_WorldId worldId, const float velocityScale)
{
  ?Physics_ProcessDeferredKeyframe@@YAXW4Physics_WorldId@@M@Z(worldId, velocityScale);
}

/*
==============
Physics_SetCGFXSystemsDetailPropagationDebugData
==============
*/

void __fastcall Physics_SetCGFXSystemsDetailPropagationDebugData(LocalClientNum_t localClientNum, int numSystems, int numPhysicsSystems)
{
  ?Physics_SetCGFXSystemsDetailPropagationDebugData@@YAXW4LocalClientNum_t@@HH@Z(localClientNum, numSystems, numPhysicsSystems);
}

/*
==============
Physics_ReleaseMapLocalAllocatorBuffer
==============
*/

void Physics_ReleaseMapLocalAllocatorBuffer(void)
{
  ?Physics_ReleaseMapLocalAllocatorBuffer@@YAXXZ();
}

/*
==============
Physics_GetRigidBodyMaxLinSpeed
==============
*/

void __fastcall Physics_GetRigidBodyMaxLinSpeed(Physics_WorldId worldId, unsigned int bodyId, float *maxLinSpeed)
{
  ?Physics_GetRigidBodyMaxLinSpeed@@YAXW4Physics_WorldId@@IPEAM@Z(worldId, bodyId, maxLinSpeed);
}

/*
==============
Physics_GetInstanceXModel
==============
*/

const XModel *__fastcall Physics_GetInstanceXModel(Physics_WorldId worldId, unsigned int instanceId)
{
  return ?Physics_GetInstanceXModel@@YAPEBUXModel@@W4Physics_WorldId@@I@Z(worldId, instanceId);
}

/*
==============
Physics_UpdateLoosenedConstraint
==============
*/

bool __fastcall Physics_UpdateLoosenedConstraint(Physics_WorldId worldId, unsigned int constraintId, const vec4_t *bodyAOrientation, const vec3_t *bodyAPosition, const vec4_t *bodyBOrientation, const vec3_t *bodyBPosition, PhysicsConstraintLooseningResult *result)
{
  return ?Physics_UpdateLoosenedConstraint@@YA_NW4Physics_WorldId@@IAEBTvec4_t@@AEBTvec3_t@@12PEAUPhysicsConstraintLooseningResult@@@Z(worldId, constraintId, bodyAOrientation, bodyAPosition, bodyBOrientation, bodyBPosition, result);
}

/*
==============
Physics_AddPhysicsAsset
==============
*/

void __fastcall Physics_AddPhysicsAsset(PhysicsAsset *physicsAsset)
{
  ?Physics_AddPhysicsAsset@@YAXPEAUPhysicsAsset@@@Z(physicsAsset);
}

/*
==============
Physics_RenderDebug
==============
*/

void __fastcall Physics_RenderDebug(GfxCmdBufContext *gfxContext)
{
  ?Physics_RenderDebug@@YAXUGfxCmdBufContext@@@Z(gfxContext);
}

/*
==============
Physics_GetSFXEventAsset
==============
*/

int __fastcall Physics_GetSFXEventAsset(Physics_WorldId worldId, unsigned int bodyId0, unsigned int bodyId1, PhysicsSFXEventAsset **asset)
{
  return ?Physics_GetSFXEventAsset@@YAHW4Physics_WorldId@@IIPEAPEAUPhysicsSFXEventAsset@@@Z(worldId, bodyId0, bodyId1, asset);
}

/*
==============
Physics_GetEntityNum
==============
*/

int __fastcall Physics_GetEntityNum(int ref)
{
  return ?Physics_GetEntityNum@@YAHH@Z(ref);
}

/*
==============
Physics_GetHitTypeByEntId
==============
*/

TraceHitType __fastcall Physics_GetHitTypeByEntId(const unsigned int entId)
{
  return ?Physics_GetHitTypeByEntId@@YA?AW4TraceHitType@@I@Z(entId);
}

/*
==============
Physics_DeferredShapecast
==============
*/

void __fastcall Physics_DeferredShapecast(Physics_WorldId worldId, unsigned int bodyId, hknpShape *shape, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, Physics_DeferredCollisionQueryData *data)
{
  ?Physics_DeferredShapecast@@YAXW4Physics_WorldId@@IPEAVhknpShape@@AEBTvec3_t@@2AEBTvec4_t@@PEAUPhysics_ShapecastExtendedData@@PEAUPhysics_DeferredCollisionQueryData@@@Z(worldId, bodyId, shape, start, end, rotation, extendedData, data);
}

/*
==============
Physics_UnlockWorld
==============
*/

void __fastcall Physics_UnlockWorld(Physics_WorldId worldId)
{
  ?Physics_UnlockWorld@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
Physics_WarpDetailRigidBodyTo
==============
*/

Physics_MovementType __fastcall Physics_WarpDetailRigidBodyTo(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *position, const vec4_t *orientationAsQuat, bool updateBroadphase, bool activate)
{
  return ?Physics_WarpDetailRigidBodyTo@@YA?AW4Physics_MovementType@@W4Physics_WorldId@@IAEBTvec3_t@@AEBTvec4_t@@_N3@Z(worldId, bodyId, position, orientationAsQuat, updateBroadphase, activate);
}

/*
==============
Physics_DoCmd_UpdatePredictiveWorldPre
==============
*/

void __fastcall Physics_DoCmd_UpdatePredictiveWorldPre(const void *const cmdInfo)
{
  ?Physics_DoCmd_UpdatePredictiveWorldPre@@YAXQEBX@Z(cmdInfo);
}

/*
==============
Physics_InstantiateAssetBodySphere
==============
*/

bool __fastcall Physics_InstantiateAssetBodySphere(unsigned int instanceId, Physics_WorldId worldId, const PhysicsAsset *physicsAsset, int bodyIdx, int ref, const vec3_t *position, const vec4_t *orientationAsQuat, bool add, bool tryStartDeactivated, bool neverDeactivate, float radius, Physics_InstantiationForceType forceType, Physics_InstantiationFilterType filterType, bool forQueryOnly)
{
  return ?Physics_InstantiateAssetBodySphere@@YA_NIW4Physics_WorldId@@PEBUPhysicsAsset@@HHAEBTvec3_t@@AEBTvec4_t@@_N44MW4Physics_InstantiationForceType@@W4Physics_InstantiationFilterType@@4@Z(instanceId, worldId, physicsAsset, bodyIdx, ref, position, orientationAsQuat, add, tryStartDeactivated, neverDeactivate, radius, forceType, filterType, forQueryOnly);
}

/*
==============
Physics_FlushMovedStatics
==============
*/

void __fastcall Physics_FlushMovedStatics(Physics_WorldId worldId)
{
  ?Physics_FlushMovedStatics@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
Physics_SetWorkerError
==============
*/

void Physics_SetWorkerError(void)
{
  ?Physics_SetWorkerError@@YAXXZ();
}

/*
==============
Physics_GetNumConvexCountsInShapeList
==============
*/

int __fastcall Physics_GetNumConvexCountsInShapeList(HavokPhysicsShapeList *shapeList)
{
  return ?Physics_GetNumConvexCountsInShapeList@@YAHPEAVHavokPhysicsShapeList@@@Z(shapeList);
}

/*
==============
Physics_IsClientEntitylessScriptable
==============
*/

bool __fastcall Physics_IsClientEntitylessScriptable(const int ref)
{
  return ?Physics_IsClientEntitylessScriptable@@YA_NH@Z(ref);
}

/*
==============
Physics_SetNoQueriesAllowed
==============
*/

void __fastcall Physics_SetNoQueriesAllowed(Physics_WorldId worldId, bool noQueriesAllowed)
{
  ?Physics_SetNoQueriesAllowed@@YAXW4Physics_WorldId@@_N@Z(worldId, noQueriesAllowed);
}

/*
==============
Physics_KeyframeRigidBodyToFast
==============
*/

Physics_MovementType __fastcall Physics_KeyframeRigidBodyToFast(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *position, const vec4_t *orientationAsQuat, float velocityScale, bool canWarp, bool updateBroadphaseIfWarping, float stepTimeOverride)
{
  return ?Physics_KeyframeRigidBodyToFast@@YA?AW4Physics_MovementType@@W4Physics_WorldId@@IAEBTvec3_t@@AEBTvec4_t@@M_N3M@Z(worldId, bodyId, position, orientationAsQuat, velocityScale, canWarp, updateBroadphaseIfWarping, stepTimeOverride);
}

/*
==============
Physics_CalcRigidBodyShapeAABBWorld
==============
*/

void __fastcall Physics_CalcRigidBodyShapeAABBWorld(Physics_WorldId worldId, unsigned int bodyId, vec3_t *aabbMin, vec3_t *aabbMax)
{
  ?Physics_CalcRigidBodyShapeAABBWorld@@YAXW4Physics_WorldId@@IAEATvec3_t@@1@Z(worldId, bodyId, aabbMin, aabbMax);
}

/*
==============
Physics_IsShapeCacheDisabled
==============
*/

bool __fastcall Physics_IsShapeCacheDisabled(unsigned int threadId)
{
  return ?Physics_IsShapeCacheDisabled@@YA_NI@Z(threadId);
}

/*
==============
Physics_TightenConstraint
==============
*/

void __fastcall Physics_TightenConstraint(Physics_WorldId worldId, unsigned int constraintId, PhysicsConstraintLooseningResult *values, float proportion)
{
  ?Physics_TightenConstraint@@YAXW4Physics_WorldId@@IPEAUPhysicsConstraintLooseningResult@@M@Z(worldId, constraintId, values, proportion);
}

/*
==============
Physics_GetWorkerThreadId
==============
*/

unsigned int __fastcall Physics_GetWorkerThreadId(unsigned int index)
{
  return ?Physics_GetWorkerThreadId@@YAII@Z(index);
}

/*
==============
Physics_DoCmd_StepWorldStart
==============
*/

void __fastcall Physics_DoCmd_StepWorldStart(const void *const cmdInfo)
{
  ?Physics_DoCmd_StepWorldStart@@YAXQEBX@Z(cmdInfo);
}

/*
==============
Physics_DeferredQueryPoint
==============
*/

void __fastcall Physics_DeferredQueryPoint(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *point, float maxDistance, Physics_QueryPointExtendedData *extendedData, Physics_DeferredCollisionQueryData *data)
{
  ?Physics_DeferredQueryPoint@@YAXW4Physics_WorldId@@IAEBTvec3_t@@MPEAUPhysics_QueryPointExtendedData@@PEAUPhysics_DeferredCollisionQueryData@@@Z(worldId, bodyId, point, maxDistance, extendedData, data);
}

/*
==============
Physics_SetCGPhysicsObjectPropagatedDebugData
==============
*/

void __fastcall Physics_SetCGPhysicsObjectPropagatedDebugData(LocalClientNum_t localClientNum, int numPropagatedPhysicsObjects, int numPropagatedBodies)
{
  ?Physics_SetCGPhysicsObjectPropagatedDebugData@@YAXW4LocalClientNum_t@@HH@Z(localClientNum, numPropagatedPhysicsObjects, numPropagatedBodies);
}

/*
==============
Physics_ApplyBulletForceBody
==============
*/

void __fastcall Physics_ApplyBulletForceBody(const Physics_WorldId worldId, const unsigned int bodyId, const vec3_t *position, const vec3_t *direction, const unsigned int inflictorEntNum, const bool isMelee)
{
  ?Physics_ApplyBulletForceBody@@YAXW4Physics_WorldId@@IAEBTvec3_t@@1I_N@Z(worldId, bodyId, position, direction, inflictorEntNum, isMelee);
}

/*
==============
Physics_ProcessDeferredForceCallbacks
==============
*/

void __fastcall Physics_ProcessDeferredForceCallbacks(const Physics_WorldId worldId)
{
  ?Physics_ProcessDeferredForceCallbacks@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
Physics_ReleaseXModelAsset
==============
*/

void __fastcall Physics_ReleaseXModelAsset(XModel *xmodel)
{
  ?Physics_ReleaseXModelAsset@@YAXPEAUXModel@@@Z(xmodel);
}

/*
==============
Physics_AddRigidBodyContents
==============
*/

void __fastcall Physics_AddRigidBodyContents(Physics_WorldId worldId, unsigned int bodyId, int contents, bool forceCacheRebuild)
{
  ?Physics_AddRigidBodyContents@@YAXW4Physics_WorldId@@IH_N@Z(worldId, bodyId, contents, forceCacheRebuild);
}

/*
==============
Physics_GetErrorString
==============
*/

const char *__fastcall Physics_GetErrorString()
{
  return ?Physics_GetErrorString@@YAPEBDXZ();
}

/*
==============
Physics_GetDetailCollisionShape
==============
*/

const hknpShape *__fastcall Physics_GetDetailCollisionShape(const XModelDetailCollision *detailCollision, int shapeIdx)
{
  return ?Physics_GetDetailCollisionShape@@YAPEBVhknpShape@@PEBUXModelDetailCollision@@H@Z(detailCollision, shapeIdx);
}

/*
==============
Physics_CreateShapeCompound
==============
*/

hknpShape *__fastcall Physics_CreateShapeCompound(hkArray<hknpShapeInstance,hkContainerHeapAllocator> *instanceArray)
{
  return ?Physics_CreateShapeCompound@@YAPEAVhknpShape@@PEAV?$hkArray@UhknpShapeInstance@@UhkContainerHeapAllocator@@@@@Z(instanceArray);
}

/*
==============
Physics_MovePhysicsVFXEventAsset
==============
*/

void __fastcall Physics_MovePhysicsVFXEventAsset(PhysicsVFXEventAsset *from, PhysicsVFXEventAsset *to)
{
  ?Physics_MovePhysicsVFXEventAsset@@YAXPEAUPhysicsVFXEventAsset@@0@Z(from, to);
}

/*
==============
Physics_InstantiateAssetConstraint
==============
*/

bool __fastcall Physics_InstantiateAssetConstraint(unsigned int instanceId, Physics_WorldId worldId, const PhysicsAsset *physicsAsset, int constraintIdx, int instanceRef, bool deepCloneConstraintData)
{
  return ?Physics_InstantiateAssetConstraint@@YA_NIW4Physics_WorldId@@PEBUPhysicsAsset@@HH_N@Z(instanceId, worldId, physicsAsset, constraintIdx, instanceRef, deepCloneConstraintData);
}

/*
==============
Physics_MovePhysicsSFXEventAsset
==============
*/

void __fastcall Physics_MovePhysicsSFXEventAsset(PhysicsSFXEventAsset *from, PhysicsSFXEventAsset *to)
{
  ?Physics_MovePhysicsSFXEventAsset@@YAXPEAUPhysicsSFXEventAsset@@0@Z(from, to);
}

/*
==============
Physics_ToggleCGDynEntAuthoritativeDebugData
==============
*/

void __fastcall Physics_ToggleCGDynEntAuthoritativeDebugData(LocalClientNum_t localClientNum)
{
  ?Physics_ToggleCGDynEntAuthoritativeDebugData@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Physics_SwapPhysicsSFXEventAsset
==============
*/

void __fastcall Physics_SwapPhysicsSFXEventAsset(PhysicsSFXEventAsset *from, PhysicsSFXEventAsset *to)
{
  ?Physics_SwapPhysicsSFXEventAsset@@YAXPEAUPhysicsSFXEventAsset@@0@Z(from, to);
}

/*
==============
Physics_SwapXModelAsset
==============
*/

void __fastcall Physics_SwapXModelAsset(XModel *from, XModel *to)
{
  ?Physics_SwapXModelAsset@@YAXPEAUXModel@@0@Z(from, to);
}

/*
==============
Physics_GetRigidBodyAABB
==============
*/

void __fastcall Physics_GetRigidBodyAABB(Physics_WorldId worldId, unsigned int bodyId, vec3_t *aabbMin, vec3_t *aabbMax)
{
  ?Physics_GetRigidBodyAABB@@YAXW4Physics_WorldId@@IAEATvec3_t@@1@Z(worldId, bodyId, aabbMin, aabbMax);
}

/*
==============
Physics_SetMassPropertiesMass
==============
*/

void __fastcall Physics_SetMassPropertiesMass(hkMassProperties *massProperties, float mass)
{
  ?Physics_SetMassPropertiesMass@@YAXPEAUhkMassProperties@@M@Z(massProperties, mass);
}

/*
==============
Physics_IsServerEntitylessScriptable
==============
*/

bool __fastcall Physics_IsServerEntitylessScriptable(const int ref)
{
  return ?Physics_IsServerEntitylessScriptable@@YA_NH@Z(ref);
}

/*
==============
Physics_GetWorldName
==============
*/

const char *__fastcall Physics_GetWorldName(Physics_WorldId worldId)
{
  return ?Physics_GetWorldName@@YAPEBDW4Physics_WorldId@@@Z(worldId);
}

/*
==============
Physics_GetInstanceDetailModel
==============
*/

const XModel *__fastcall Physics_GetInstanceDetailModel(Physics_WorldId worldId, unsigned int instanceId)
{
  return ?Physics_GetInstanceDetailModel@@YAPEBUXModel@@W4Physics_WorldId@@I@Z(worldId, instanceId);
}

/*
==============
Physics_AddClipMap
==============
*/

void __fastcall Physics_AddClipMap(clipMap_t *clipMap)
{
  ?Physics_AddClipMap@@YAXPEAUclipMap_t@@@Z(clipMap);
}

/*
==============
Physics_AreDetailModelsInterchangeable
==============
*/

bool __fastcall Physics_AreDetailModelsInterchangeable(const XModel *const detailModelA, const XModel *const detailModelB)
{
  return ?Physics_AreDetailModelsInterchangeable@@YA_NQEBUXModel@@0@Z(detailModelA, detailModelB);
}

/*
==============
Physics_CreateShapeCapsule
==============
*/

hknpShape *__fastcall Physics_CreateShapeCapsule(Physics_WorldId worldId, const vec3_t *center, float halfHeight, float radius, const vec3_t *majorAxis, char *optionalInplaceBuffer, int optionalInplaceBufferSize, Physics_ShapeStorage shapeStorage)
{
  return ?Physics_CreateShapeCapsule@@YAPEAVhknpShape@@W4Physics_WorldId@@AEBTvec3_t@@MM1PEADHW4Physics_ShapeStorage@@@Z(worldId, center, halfHeight, radius, majorAxis, optionalInplaceBuffer, optionalInplaceBufferSize, shapeStorage);
}

/*
==============
Physics_ApplyAngularImpulse
==============
*/

void __fastcall Physics_ApplyAngularImpulse(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *position, const vec3_t *normalizedDirection, float magnitude)
{
  ?Physics_ApplyAngularImpulse@@YAXW4Physics_WorldId@@IAEBTvec3_t@@1M@Z(worldId, bodyId, position, normalizedDirection, magnitude);
}

/*
==============
Physics_SetCGFXEmittersDetailPropagationDebugData
==============
*/

void __fastcall Physics_SetCGFXEmittersDetailPropagationDebugData(LocalClientNum_t localClientNum, int numEmitters, int numPhysicsEmitters)
{
  ?Physics_SetCGFXEmittersDetailPropagationDebugData@@YAXW4LocalClientNum_t@@HH@Z(localClientNum, numEmitters, numPhysicsEmitters);
}

/*
==============
Physics_IsInitialized
==============
*/

bool __fastcall Physics_IsInitialized()
{
  return ?Physics_IsInitialized@@YA_NXZ();
}

/*
==============
Physics_IsInstanceDeactivated
==============
*/

bool __fastcall Physics_IsInstanceDeactivated(Physics_WorldId worldId, unsigned int instanceId)
{
  return ?Physics_IsInstanceDeactivated@@YA_NW4Physics_WorldId@@I@Z(worldId, instanceId);
}

/*
==============
Physics_ConvertClosestPointsToLegacyTrace
==============
*/

void __fastcall Physics_ConvertClosestPointsToLegacyTrace(HavokPhysics_CollisionQueryResult *queryResult, trace_t *trace)
{
  ?Physics_ConvertClosestPointsToLegacyTrace@@YAXPEAVHavokPhysics_CollisionQueryResult@@PEAUtrace_t@@@Z(queryResult, trace);
}

/*
==============
Physics_DeactivateBody
==============
*/

void __fastcall Physics_DeactivateBody(Physics_WorldId worldId, unsigned int bodyId)
{
  ?Physics_DeactivateBody@@YAXW4Physics_WorldId@@I@Z(worldId, bodyId);
}

/*
==============
Physics_GetFilterSubGroupIdNoCollideIdFromUserData
==============
*/

char __fastcall Physics_GetFilterSubGroupIdNoCollideIdFromUserData(unsigned __int64 userData)
{
  return ?Physics_GetFilterSubGroupIdNoCollideIdFromUserData@@YAD_K@Z(userData);
}

/*
==============
Physics_AddDeferredRadiusForce
==============
*/

void __fastcall Physics_AddDeferredRadiusForce(const Physics_WorldId worldId, const vec3_t *position, const float radius, const float innerDamage, const float outerDamage, const float impulseOverride, const vec3_t *impulseVecOverride, int randSeed, float forceScalar)
{
  ?Physics_AddDeferredRadiusForce@@YAXW4Physics_WorldId@@AEBTvec3_t@@MMMM1HM@Z(worldId, position, radius, innerDamage, outerDamage, impulseOverride, impulseVecOverride, randSeed, forceScalar);
}

/*
==============
Physics_GetLocalClientForWorld
==============
*/

LocalClientNum_t __fastcall Physics_GetLocalClientForWorld(Physics_WorldId worldId)
{
  return ?Physics_GetLocalClientForWorld@@YA?AW4LocalClientNum_t@@W4Physics_WorldId@@@Z(worldId);
}

/*
==============
Physics_GetRigidBodyContents
==============
*/

int __fastcall Physics_GetRigidBodyContents(const Physics_WorldId worldId, const unsigned int instanceId, const unsigned int bodyIdx)
{
  return ?Physics_GetRigidBodyContents@@YAHW4Physics_WorldId@@II@Z(worldId, instanceId, bodyIdx);
}

/*
==============
Physics_GetVFXEventAsset
==============
*/

int __fastcall Physics_GetVFXEventAsset(Physics_WorldId worldId, unsigned int bodyId0, unsigned int bodyId1, PhysicsVFXEventAsset **asset)
{
  return ?Physics_GetVFXEventAsset@@YAHW4Physics_WorldId@@IIPEAPEAUPhysicsVFXEventAsset@@@Z(worldId, bodyId0, bodyId1, asset);
}

/*
==============
Physics_OnThreadInit
==============
*/

void __fastcall Physics_OnThreadInit(unsigned int threadId)
{
  ?Physics_OnThreadInit@@YAXI@Z(threadId);
}

/*
==============
Physics_SetCGCharacterProxyPredictiveDebugData
==============
*/

void __fastcall Physics_SetCGCharacterProxyPredictiveDebugData(LocalClientNum_t localClientNum, int numCharacterProxies)
{
  ?Physics_SetCGCharacterProxyPredictiveDebugData@@YAXW4LocalClientNum_t@@H@Z(localClientNum, numCharacterProxies);
}

/*
==============
Physics_SetMassPropertiesCenterOfMass
==============
*/

void __fastcall Physics_SetMassPropertiesCenterOfMass(hkMassProperties *massProperties, const vec3_t *centerOfMass)
{
  ?Physics_SetMassPropertiesCenterOfMass@@YAXPEAUhkMassProperties@@AEBTvec3_t@@@Z(massProperties, centerOfMass);
}

/*
==============
Physics_FreeIgnoreBodies
==============
*/

void __fastcall Physics_FreeIgnoreBodies(HavokPhysics_IgnoreBodies *ignoreBodies)
{
  ?Physics_FreeIgnoreBodies@@YAXPEAVHavokPhysics_IgnoreBodies@@@Z(ignoreBodies);
}

/*
==============
Physics_AABBQuery
==============
*/

void __fastcall Physics_AABBQuery(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, HavokPhysics_CollisionQueryResult *result)
{
  ?Physics_AABBQuery@@YAXW4Physics_WorldId@@IAEBTvec3_t@@1PEAUPhysics_AABBQueryExtendedData@@PEAVHavokPhysics_CollisionQueryResult@@@Z(worldId, bodyId, min, max, extendedData, result);
}

/*
==============
Physics_DoGarbageCollectionClient
==============
*/

void Physics_DoGarbageCollectionClient(void)
{
  ?Physics_DoGarbageCollectionClient@@YAXXZ();
}

/*
==============
Physics_Write
==============
*/

void __fastcall Physics_Write(MemoryFile *memFile)
{
  ?Physics_Write@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
Physics_GetConstraintBodyIds
==============
*/

void __fastcall Physics_GetConstraintBodyIds(Physics_WorldId worldId, unsigned int constraintId, unsigned int *bodyIdA, unsigned int *bodyIdB)
{
  ?Physics_GetConstraintBodyIds@@YAXW4Physics_WorldId@@IPEAI1@Z(worldId, constraintId, bodyIdA, bodyIdB);
}

/*
==============
Physics_AddShapeReference
==============
*/

void __fastcall Physics_AddShapeReference(hknpShape *shape)
{
  ?Physics_AddShapeReference@@YAXPEAVhknpShape@@@Z(shape);
}

/*
==============
Physics_AddPhysicsSFXEventAsset
==============
*/

void __fastcall Physics_AddPhysicsSFXEventAsset(PhysicsSFXEventAsset *physicsSFXEventAsset)
{
  ?Physics_AddPhysicsSFXEventAsset@@YAXPEAUPhysicsSFXEventAsset@@@Z(physicsSFXEventAsset);
}

/*
==============
Physics_IsInBroadphase
==============
*/

bool __fastcall Physics_IsInBroadphase(Physics_WorldId worldId, const vec3_t *position)
{
  return ?Physics_IsInBroadphase@@YA_NW4Physics_WorldId@@AEBTvec3_t@@@Z(worldId, position);
}

/*
==============
Physics_LoosenConstraint
==============
*/

bool __fastcall Physics_LoosenConstraint(Physics_WorldId worldId, unsigned int constraintId, PhysicsConstraintLooseningResult *result)
{
  return ?Physics_LoosenConstraint@@YA_NW4Physics_WorldId@@IPEAUPhysicsConstraintLooseningResult@@@Z(worldId, constraintId, result);
}

/*
==============
Physics_AddRigidBodyContents
==============
*/

void __fastcall Physics_AddRigidBodyContents(Physics_WorldId worldId, unsigned int instanceId, unsigned int bodyIdx, int contents, bool forceCacheRebuild)
{
  ?Physics_AddRigidBodyContents@@YAXW4Physics_WorldId@@IIH_N@Z(worldId, instanceId, bodyIdx, contents, forceCacheRebuild);
}

/*
==============
Physics_CopyXModelAsset
==============
*/

void __fastcall Physics_CopyXModelAsset(XModel *from, XModel *to)
{
  ?Physics_CopyXModelAsset@@YAXPEAUXModel@@0@Z(from, to);
}

/*
==============
Physics_SetRigidBodyStatic
==============
*/

void __fastcall Physics_SetRigidBodyStatic(Physics_WorldId worldId, unsigned int bodyId)
{
  ?Physics_SetRigidBodyStatic@@YAXW4Physics_WorldId@@I@Z(worldId, bodyId);
}

/*
==============
Physics_RemoveInstanceFromWorld
==============
*/

void __fastcall Physics_RemoveInstanceFromWorld(Physics_WorldId worldId, unsigned int instanceId, bool activate)
{
  ?Physics_RemoveInstanceFromWorld@@YAXW4Physics_WorldId@@I_N@Z(worldId, instanceId, activate);
}

/*
==============
Physics_GetRelationshipSystem
==============
*/

Physics_RelationshipSystem __fastcall Physics_GetRelationshipSystem(int ref)
{
  return ?Physics_GetRelationshipSystem@@YA?AW4Physics_RelationshipSystem@@H@Z(ref);
}

/*
==============
Physics_DoCmd_StepWorldPhysicsObjects
==============
*/

void __fastcall Physics_DoCmd_StepWorldPhysicsObjects(const void *const cmdInfo)
{
  ?Physics_DoCmd_StepWorldPhysicsObjects@@YAXQEBX@Z(cmdInfo);
}

/*
==============
Physics_GetRefSystem
==============
*/

Physics_RefSystem __fastcall Physics_GetRefSystem(int ref)
{
  return ?Physics_GetRefSystem@@YA?AW4Physics_RefSystem@@H@Z(ref);
}

/*
==============
Physics_RemoveClipMap
==============
*/

void __fastcall Physics_RemoveClipMap(clipMap_t *clipMap)
{
  ?Physics_RemoveClipMap@@YAXPEAUclipMap_t@@@Z(clipMap);
}

/*
==============
Physics_SetRigidBodyVelocity
==============
*/

void __fastcall Physics_SetRigidBodyVelocity(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *linearVelocity, const vec3_t *angularVelocity)
{
  ?Physics_SetRigidBodyVelocity@@YAXW4Physics_WorldId@@IAEBTvec3_t@@1@Z(worldId, bodyId, linearVelocity, angularVelocity);
}

/*
==============
Physics_FreeCollisionQueryResult
==============
*/

void __fastcall Physics_FreeCollisionQueryResult(HavokPhysics_CollisionQueryResult *result)
{
  ?Physics_FreeCollisionQueryResult@@YAXPEAVHavokPhysics_CollisionQueryResult@@@Z(result);
}

/*
==============
Physics_CreateShapeConvexHull
==============
*/

hknpShape *__fastcall Physics_CreateShapeConvexHull(const vec3_t *verts, unsigned int numVertices, unsigned int maxNumGeneratedVertices, bool useCache)
{
  return ?Physics_CreateShapeConvexHull@@YAPEAVhknpShape@@PEBTvec3_t@@II_N@Z(verts, numVertices, maxNumGeneratedVertices, useCache);
}

/*
==============
Physics_GetDetailCollisionShapeTag
==============
*/

unsigned __int16 __fastcall Physics_GetDetailCollisionShapeTag(const XModelDetailCollision *detailCollision, int shapeIdx)
{
  return ?Physics_GetDetailCollisionShapeTag@@YAGPEBUXModelDetailCollision@@H@Z(detailCollision, shapeIdx);
}

/*
==============
Physics_IsRigidBodyValid
==============
*/

bool __fastcall Physics_IsRigidBodyValid(Physics_WorldId worldId, unsigned int bodyId)
{
  return ?Physics_IsRigidBodyValid@@YA_NW4Physics_WorldId@@I@Z(worldId, bodyId);
}

/*
==============
Physics_GetShapeFromShapeList
==============
*/

hknpShape *__fastcall Physics_GetShapeFromShapeList(HavokPhysicsShapeList *shapeList, unsigned int shapeIdx)
{
  return ?Physics_GetShapeFromShapeList@@YAPEAVhknpShape@@PEAVHavokPhysicsShapeList@@I@Z(shapeList, shapeIdx);
}

/*
==============
Physics_SwapPhysicsAsset
==============
*/

void __fastcall Physics_SwapPhysicsAsset(PhysicsAsset *from, PhysicsAsset *to)
{
  ?Physics_SwapPhysicsAsset@@YAXPEAUPhysicsAsset@@0@Z(from, to);
}

/*
==============
Physics_SetMainShapeList
==============
*/

void __fastcall Physics_SetMainShapeList(HavokPhysicsShapeList *shapeList)
{
  ?Physics_SetMainShapeList@@YAXPEAVHavokPhysicsShapeList@@@Z(shapeList);
}

/*
==============
Physics_ReleasePhysicsLibrary
==============
*/

void __fastcall Physics_ReleasePhysicsLibrary(PhysicsLibrary *physicsLibrary)
{
  ?Physics_ReleasePhysicsLibrary@@YAXPEAUPhysicsLibrary@@@Z(physicsLibrary);
}

/*
==============
Physics_GetRigidBodyDefaultMass
==============
*/

double __fastcall Physics_GetRigidBodyDefaultMass(Physics_WorldId worldId, const PhysicsAsset *physAsset)
{
  double result; 

  *(float *)&result = ?Physics_GetRigidBodyDefaultMass@@YAMW4Physics_WorldId@@PEBUPhysicsAsset@@@Z(worldId, physAsset);
  return result;
}

/*
==============
Physics_AABBQuery
==============
*/

void __fastcall Physics_AABBQuery(Physics_WorldId worldId, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, HavokPhysics_CollisionQueryResult *result)
{
  ?Physics_AABBQuery@@YAXW4Physics_WorldId@@AEBTvec3_t@@1PEAUPhysics_AABBQueryExtendedData@@PEAVHavokPhysics_CollisionQueryResult@@@Z(worldId, min, max, extendedData, result);
}

/*
==============
Physics_DeferredGetClosestPoints
==============
*/

void __fastcall Physics_DeferredGetClosestPoints(Physics_WorldId worldId, hknpShape *shape, const vec3_t *point, const vec4_t *rotation, float maxDistance, Physics_GetClosestPointsExtendedData *extendedData, Physics_DeferredCollisionQueryData *data)
{
  ?Physics_DeferredGetClosestPoints@@YAXW4Physics_WorldId@@PEAVhknpShape@@AEBTvec3_t@@AEBTvec4_t@@MPEAUPhysics_GetClosestPointsExtendedData@@PEAUPhysics_DeferredCollisionQueryData@@@Z(worldId, shape, point, rotation, maxDistance, extendedData, data);
}

/*
==============
Physics_IsRigidBodyDynamic
==============
*/

bool __fastcall Physics_IsRigidBodyDynamic(Physics_WorldId worldId, unsigned int bodyId)
{
  return ?Physics_IsRigidBodyDynamic@@YA_NW4Physics_WorldId@@I@Z(worldId, bodyId);
}

/*
==============
Physics_DestroyConstraint
==============
*/

void __fastcall Physics_DestroyConstraint(Physics_WorldId worldId, unsigned int instanceId, int constraintIdx, bool activate)
{
  ?Physics_DestroyConstraint@@YAXW4Physics_WorldId@@IH_N@Z(worldId, instanceId, constraintIdx, activate);
}

/*
==============
Physics_GetRigidBodyMaxAngSpeed
==============
*/

void __fastcall Physics_GetRigidBodyMaxAngSpeed(Physics_WorldId worldId, unsigned int bodyId, float *maxAngSpeed)
{
  ?Physics_GetRigidBodyMaxAngSpeed@@YAXW4Physics_WorldId@@IPEAM@Z(worldId, bodyId, maxAngSpeed);
}

/*
==============
Physics_DirtyBroadphase
==============
*/

void __fastcall Physics_DirtyBroadphase(Physics_WorldId worldId, const hkArray<hknpBodyId,hkContainerHeapAllocator> *array)
{
  ?Physics_DirtyBroadphase@@YAXW4Physics_WorldId@@PEBV?$hkArray@UhknpBodyId@@UhkContainerHeapAllocator@@@@@Z(worldId, array);
}

/*
==============
Physics_GetPhysicsAssetBodyTransform
==============
*/

void __fastcall Physics_GetPhysicsAssetBodyTransform(const PhysicsAsset *physicsAsset, int bodyIdx, vec3_t *bodyPosition, vec4_t *bodyOrientationAsQuat)
{
  ?Physics_GetPhysicsAssetBodyTransform@@YAXPEBUPhysicsAsset@@HAEATvec3_t@@AEATvec4_t@@@Z(physicsAsset, bodyIdx, bodyPosition, bodyOrientationAsQuat);
}

/*
==============
Physics_SetRigidBodyInverseInertiaLocal
==============
*/

void __fastcall Physics_SetRigidBodyInverseInertiaLocal(Physics_WorldId worldId, unsigned int bodyId, const vec4_t *invInertia)
{
  ?Physics_SetRigidBodyInverseInertiaLocal@@YAXW4Physics_WorldId@@IAEBTvec4_t@@@Z(worldId, bodyId, invInertia);
}

/*
==============
Physics_AntilagWarpInstanceTo
==============
*/

bool __fastcall Physics_AntilagWarpInstanceTo(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *position, const vec4_t *orientationAsQuat, vec3_t *restorePosition, vec4_t *restoreOrientationAsQuat)
{
  return ?Physics_AntilagWarpInstanceTo@@YA_NW4Physics_WorldId@@IAEBTvec3_t@@AEBTvec4_t@@AEAT2@AEAT3@@Z(worldId, instanceId, position, orientationAsQuat, restorePosition, restoreOrientationAsQuat);
}

/*
==============
Physics_MyChangesInitAndLoad
==============
*/

void Physics_MyChangesInitAndLoad(void)
{
  ?Physics_MyChangesInitAndLoad@@YAXXZ();
}

/*
==============
Physics_InstantiateStaticBody
==============
*/

unsigned int __fastcall Physics_InstantiateStaticBody(Physics_WorldId worldId, const hknpShape *shape, int ref, const char *name, const char *physicsMaterial, int contents, const vec3_t *position, const vec4_t *orientationAsQuat, bool add, bool tryStartDeactivated, bool forQueryOnly)
{
  return ?Physics_InstantiateStaticBody@@YAIW4Physics_WorldId@@PEBVhknpShape@@HPEBD2HAEBTvec3_t@@AEBTvec4_t@@_N55@Z(worldId, shape, ref, name, physicsMaterial, contents, position, orientationAsQuat, add, tryStartDeactivated, forQueryOnly);
}

/*
==============
Physics_Shapecast
==============
*/

void __fastcall Physics_Shapecast(Physics_WorldId worldId, unsigned int bodyId, hknpShape *shape, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, HavokPhysics_CollisionQueryResult *result, HavokPhysics_CollisionQueryResult *startResult)
{
  ?Physics_Shapecast@@YAXW4Physics_WorldId@@IPEAVhknpShape@@AEBTvec3_t@@2AEBTvec4_t@@PEAUPhysics_ShapecastExtendedData@@PEAVHavokPhysics_CollisionQueryResult@@5@Z(worldId, bodyId, shape, start, end, rotation, extendedData, result, startResult);
}

/*
==============
Physics_DoCmd_StepWorldPrep
==============
*/

void __fastcall Physics_DoCmd_StepWorldPrep(const void *const cmdInfo)
{
  ?Physics_DoCmd_StepWorldPrep@@YAXQEBX@Z(cmdInfo);
}

/*
==============
Physics_ReleaseXModelDetailCollisionAsset
==============
*/

void __fastcall Physics_ReleaseXModelDetailCollisionAsset(XModelDetailCollision *detailCollision, bool unloadPackFileData)
{
  ?Physics_ReleaseXModelDetailCollisionAsset@@YAXPEAUXModelDetailCollision@@_N@Z(detailCollision, unloadPackFileData);
}

/*
==============
Physics_GetIsClutterFromUserData
==============
*/

bool __fastcall Physics_GetIsClutterFromUserData(unsigned __int64 userData)
{
  return ?Physics_GetIsClutterFromUserData@@YA_N_K@Z(userData);
}

/*
==============
Physics_GetContentsFromShapeList
==============
*/

int __fastcall Physics_GetContentsFromShapeList(HavokPhysicsShapeList *shapeList, unsigned int shapeIdx)
{
  return ?Physics_GetContentsFromShapeList@@YAHPEAVHavokPhysicsShapeList@@I@Z(shapeList, shapeIdx);
}

/*
==============
Physics_GetNumTriCountsInShapeList
==============
*/

int __fastcall Physics_GetNumTriCountsInShapeList(HavokPhysicsShapeList *shapeList)
{
  return ?Physics_GetNumTriCountsInShapeList@@YAHPEAVHavokPhysicsShapeList@@@Z(shapeList);
}

/*
==============
Physics_QueryPoint
==============
*/

void __fastcall Physics_QueryPoint(Physics_WorldId worldId, const vec3_t *point, float maxDistance, Physics_QueryPointExtendedData *extendedData, HavokPhysics_CollisionQueryResult *result)
{
  ?Physics_QueryPoint@@YAXW4Physics_WorldId@@AEBTvec3_t@@MPEAUPhysics_QueryPointExtendedData@@PEAVHavokPhysics_CollisionQueryResult@@@Z(worldId, point, maxDistance, extendedData, result);
}

/*
==============
Physics_ApplyBulletForceInstance
==============
*/

void __fastcall Physics_ApplyBulletForceInstance(const Physics_WorldId worldId, const unsigned int instanceId, const vec3_t *position, const vec3_t *direction, const unsigned int inflictorEntNum, const bool isMelee)
{
  ?Physics_ApplyBulletForceInstance@@YAXW4Physics_WorldId@@IAEBTvec3_t@@1I_N@Z(worldId, instanceId, position, direction, inflictorEntNum, isMelee);
}

/*
==============
Physics_IsRigidBodyActive
==============
*/

bool __fastcall Physics_IsRigidBodyActive(Physics_WorldId worldId, unsigned int bodyId)
{
  return ?Physics_IsRigidBodyActive@@YA_NW4Physics_WorldId@@I@Z(worldId, bodyId);
}

/*
==============
Physics_GetRefEntityType
==============
*/

__int16 __fastcall Physics_GetRefEntityType(Physics_WorldId worldId, Physics_RefSystem refSystem, int ref)
{
  return ?Physics_GetRefEntityType@@YAFW4Physics_WorldId@@W4Physics_RefSystem@@H@Z(worldId, refSystem, ref);
}

/*
==============
Physics_GetRefId
==============
*/

unsigned __int16 __fastcall Physics_GetRefId(int ref)
{
  return ?Physics_GetRefId@@YAGH@Z(ref);
}

/*
==============
Physics_GetMainThreadId
==============
*/

unsigned int __fastcall Physics_GetMainThreadId()
{
  return ?Physics_GetMainThreadId@@YAIXZ();
}

/*
==============
Physics_GetSaveGameSecondarySaveStateThreadId
==============
*/

unsigned int __fastcall Physics_GetSaveGameSecondarySaveStateThreadId()
{
  return ?Physics_GetSaveGameSecondarySaveStateThreadId@@YAIXZ();
}

/*
==============
Physics_AccumulateAngularImpulse
==============
*/

void __fastcall Physics_AccumulateAngularImpulse(const vec3_t *impulseWs, const vec3_t *atPointWs, const vec3_t *comWs, const tmat33_t<vec3_t> *invInertiaWs, vec3_t *outAngularVelWs)
{
  ?Physics_AccumulateAngularImpulse@@YAXAEBTvec3_t@@00AEBT?$tmat33_t@Tvec3_t@@@@AEAT1@@Z(impulseWs, atPointWs, comWs, invInertiaWs, outAngularVelWs);
}

/*
==============
Physics_GetRigidBodyCenterOfMass
==============
*/

void __fastcall Physics_GetRigidBodyCenterOfMass(Physics_WorldId worldId, unsigned int bodyId, vec3_t *centerOfMass)
{
  ?Physics_GetRigidBodyCenterOfMass@@YAXW4Physics_WorldId@@IAEATvec3_t@@@Z(worldId, bodyId, centerOfMass);
}

/*
==============
Physics_AddXModelAsset
==============
*/

void __fastcall Physics_AddXModelAsset(XModel *xmodel)
{
  ?Physics_AddXModelAsset@@YAXPEAUXModel@@@Z(xmodel);
}

/*
==============
Physics_GetDetailCollisionShapeTransform
==============
*/

void __fastcall Physics_GetDetailCollisionShapeTransform(const XModelDetailCollision *detailCollision, int shapeIdx, vec3_t *shapePosition, vec4_t *shapeOrientationAsQuat)
{
  ?Physics_GetDetailCollisionShapeTransform@@YAXPEBUXModelDetailCollision@@HAEATvec3_t@@AEATvec4_t@@@Z(detailCollision, shapeIdx, shapePosition, shapeOrientationAsQuat);
}

/*
==============
Physics_ApplyImpulse
==============
*/

void __fastcall Physics_ApplyImpulse(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *position, const vec3_t *normalizedDirection, float magnitude)
{
  ?Physics_ApplyImpulse@@YAXW4Physics_WorldId@@IAEBTvec3_t@@1M@Z(worldId, bodyId, position, normalizedDirection, magnitude);
}

/*
==============
Physics_GetNumShapesInShapeList
==============
*/

int __fastcall Physics_GetNumShapesInShapeList(HavokPhysicsShapeList *shapeList)
{
  return ?Physics_GetNumShapesInShapeList@@YAHPEAVHavokPhysicsShapeList@@@Z(shapeList);
}

/*
==============
Physics_AddDetailTrace
==============
*/

void __fastcall Physics_AddDetailTrace(HavokPhysics_CollisionQueryResult *result, unsigned __int8 *detailPriorityMap)
{
  ?Physics_AddDetailTrace@@YAXPEAVHavokPhysics_CollisionQueryResult@@PEAE@Z(result, detailPriorityMap);
}

/*
==============
Physics_GetBrushBasisFromUserData
==============
*/

bool __fastcall Physics_GetBrushBasisFromUserData(unsigned __int64 userData)
{
  return ?Physics_GetBrushBasisFromUserData@@YA_N_K@Z(userData);
}

/*
==============
Physics_GetDebugMemorySize
==============
*/

unsigned __int64 __fastcall Physics_GetDebugMemorySize()
{
  return ?Physics_GetDebugMemorySize@@YA_KXZ();
}

/*
==============
Physics_GetDBThreadId
==============
*/

unsigned int __fastcall Physics_GetDBThreadId()
{
  return ?Physics_GetDBThreadId@@YAIXZ();
}

/*
==============
Physics_SetCGPhysicsObjectDetailPropagationDebugData
==============
*/

void __fastcall Physics_SetCGPhysicsObjectDetailPropagationDebugData(LocalClientNum_t localClientNum, int detailBoundedCount, int duplicationCount, int duplicationBodyCount)
{
  ?Physics_SetCGPhysicsObjectDetailPropagationDebugData@@YAXW4LocalClientNum_t@@HHH@Z(localClientNum, detailBoundedCount, duplicationCount, duplicationBodyCount);
}

/*
==============
Physics_DoCmd_UpdatePredictiveWorld
==============
*/

void __fastcall Physics_DoCmd_UpdatePredictiveWorld(const void *const cmdInfo)
{
  ?Physics_DoCmd_UpdatePredictiveWorld@@YAXQEBX@Z(cmdInfo);
}

/*
==============
Physics_AreClientWorldsCreated
==============
*/

bool __fastcall Physics_AreClientWorldsCreated()
{
  return ?Physics_AreClientWorldsCreated@@YA_NXZ();
}

/*
==============
Physics_GetNumContentsInShapeList
==============
*/

int __fastcall Physics_GetNumContentsInShapeList(HavokPhysicsShapeList *shapeList)
{
  return ?Physics_GetNumContentsInShapeList@@YAHPEAVHavokPhysicsShapeList@@@Z(shapeList);
}

/*
==============
Physics_CreateShapeConvexHullFromAABB
==============
*/

hknpShape *__fastcall Physics_CreateShapeConvexHullFromAABB(const vec3_t *mins, const vec3_t *maxs)
{
  return ?Physics_CreateShapeConvexHullFromAABB@@YAPEAVhknpShape@@AEBTvec3_t@@0@Z(mins, maxs);
}

/*
==============
Physics_DestroyServerWorlds
==============
*/

void Physics_DestroyServerWorlds(void)
{
  ?Physics_DestroyServerWorlds@@YAXXZ();
}

/*
==============
Physics_IsDetailWorld
==============
*/

bool __fastcall Physics_IsDetailWorld(Physics_WorldId worldId)
{
  return ?Physics_IsDetailWorld@@YA_NW4Physics_WorldId@@@Z(worldId);
}

/*
==============
Physics_FreeBroadphaseCollisionQueryResult
==============
*/

void __fastcall Physics_FreeBroadphaseCollisionQueryResult(HavokPhysics_BroadphaseCollisionQueryResult *result)
{
  ?Physics_FreeBroadphaseCollisionQueryResult@@YAXPEAVHavokPhysics_BroadphaseCollisionQueryResult@@@Z(result);
}

/*
==============
Physics_PrepareForDetailCollisionAssetChange
==============
*/

void __fastcall Physics_PrepareForDetailCollisionAssetChange(XModelDetailCollision *detailCollision)
{
  ?Physics_PrepareForDetailCollisionAssetChange@@YAXPEAUXModelDetailCollision@@@Z(detailCollision);
}

/*
==============
Physics_InstantiateKeyframedBody
==============
*/

unsigned int __fastcall Physics_InstantiateKeyframedBody(Physics_WorldId worldId, const hknpShape *shape, int ref, const char *name, const char *physicsMaterial, int contents, const vec3_t *position, const vec4_t *orientationAsQuat, bool add, bool tryStartDeactivated, bool forQueryOnly)
{
  return ?Physics_InstantiateKeyframedBody@@YAIW4Physics_WorldId@@PEBVhknpShape@@HPEBD2HAEBTvec3_t@@AEBTvec4_t@@_N55@Z(worldId, shape, ref, name, physicsMaterial, contents, position, orientationAsQuat, add, tryStartDeactivated, forQueryOnly);
}

/*
==============
Physics_DoCmd_StepWorldCollide
==============
*/

void __fastcall Physics_DoCmd_StepWorldCollide(const void *const cmdInfo)
{
  ?Physics_DoCmd_StepWorldCollide@@YAXQEBX@Z(cmdInfo);
}

/*
==============
Physics_CheckShapecastConstraints
==============
*/

void __fastcall Physics_CheckShapecastConstraints(const hknpShape *shape, const vec3_t *start, const vec3_t *end)
{
  ?Physics_CheckShapecastConstraints@@YAXPEBVhknpShape@@AEBTvec3_t@@1@Z(shape, start, end);
}

/*
==============
Physics_AddPhysicsVFXEventAsset
==============
*/

void __fastcall Physics_AddPhysicsVFXEventAsset(PhysicsVFXEventAsset *physicsVFXEventAsset)
{
  ?Physics_AddPhysicsVFXEventAsset@@YAXPEAUPhysicsVFXEventAsset@@@Z(physicsVFXEventAsset);
}

/*
==============
Physics_TakeSnapshot
==============
*/

void __fastcall Physics_TakeSnapshot(Physics_WorldId worldId, const char *filename, bool humanReadable)
{
  ?Physics_TakeSnapshot@@YAXW4Physics_WorldId@@PEBD_N@Z(worldId, filename, humanReadable);
}

/*
==============
Physics_GetRefDetailFlag
==============
*/

bool __fastcall Physics_GetRefDetailFlag(int ref)
{
  return ?Physics_GetRefDetailFlag@@YA_NH@Z(ref);
}

/*
==============
Physics_SetErrorString
==============
*/

void __fastcall Physics_SetErrorString(const char *string)
{
  ?Physics_SetErrorString@@YAXPEBD@Z(string);
}

/*
==============
Physics_GetRigidBodyInverseInertiaLocal
==============
*/

void __fastcall Physics_GetRigidBodyInverseInertiaLocal(Physics_WorldId worldId, unsigned int bodyId, vec4_t *invInertia)
{
  ?Physics_GetRigidBodyInverseInertiaLocal@@YAXW4Physics_WorldId@@IAEATvec4_t@@@Z(worldId, bodyId, invInertia);
}

/*
==============
Physics_DestroyInstance
==============
*/

void __fastcall Physics_DestroyInstance(Physics_WorldId worldId, unsigned int instanceId, bool activate)
{
  ?Physics_DestroyInstance@@YAXW4Physics_WorldId@@I_N@Z(worldId, instanceId, activate);
}

/*
==============
Physics_SetRigidBodyMass
==============
*/

void __fastcall Physics_SetRigidBodyMass(Physics_WorldId worldId, unsigned int bodyId, float mass)
{
  ?Physics_SetRigidBodyMass@@YAXW4Physics_WorldId@@IM@Z(worldId, bodyId, mass);
}

/*
==============
Physics_ApplyRadiusForce
==============
*/

void __fastcall Physics_ApplyRadiusForce(const Physics_WorldId worldId, const vec3_t *position, const float radius, const float innerDamage, const float outerDamage, const float impulseOverride, const vec3_t *impulseVecOverride, unsigned int randSeed, float forceScalar)
{
  ?Physics_ApplyRadiusForce@@YAXW4Physics_WorldId@@AEBTvec3_t@@MMMM1IM@Z(worldId, position, radius, innerDamage, outerDamage, impulseOverride, impulseVecOverride, randSeed, forceScalar);
}

/*
==============
Physics_GetShapeNameFromShapeList
==============
*/

const char *__fastcall Physics_GetShapeNameFromShapeList(HavokPhysicsShapeList *shapeList, unsigned int shapeIdx)
{
  return ?Physics_GetShapeNameFromShapeList@@YAPEBDPEAVHavokPhysicsShapeList@@I@Z(shapeList, shapeIdx);
}

/*
==============
Physics_AddToScene
==============
*/

void __fastcall Physics_AddToScene(LocalClientNum_t localClientNum)
{
  ?Physics_AddToScene@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Physics_CalcShapeRadius
==============
*/

void __fastcall Physics_CalcShapeRadius(const hknpShape *shape, float *radiusOut)
{
  ?Physics_CalcShapeRadius@@YAXPEBVhknpShape@@AEAM@Z(shape, radiusOut);
}

/*
==============
Physics_IsChildOfShape
==============
*/

bool __fastcall Physics_IsChildOfShape(const hknpShape *possibleParent, const hknpShape *possibleChild)
{
  return ?Physics_IsChildOfShape@@YA_NPEBVhknpShape@@0@Z(possibleParent, possibleChild);
}

/*
==============
Physics_CopyPhysicsVFXEventAsset
==============
*/

void __fastcall Physics_CopyPhysicsVFXEventAsset(PhysicsVFXEventAsset *from, PhysicsVFXEventAsset *to)
{
  ?Physics_CopyPhysicsVFXEventAsset@@YAXPEAUPhysicsVFXEventAsset@@0@Z(from, to);
}

/*
==============
Physics_DeferredShapecast
==============
*/

void __fastcall Physics_DeferredShapecast(Physics_WorldId worldId, hknpShape *shape, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, Physics_DeferredCollisionQueryData *data)
{
  ?Physics_DeferredShapecast@@YAXW4Physics_WorldId@@PEAVhknpShape@@AEBTvec3_t@@2AEBTvec4_t@@PEAUPhysics_ShapecastExtendedData@@PEAUPhysics_DeferredCollisionQueryData@@@Z(worldId, shape, start, end, rotation, extendedData, data);
}

/*
==============
Physics_GetAssetByName
==============
*/

const PhysicsAsset *__fastcall Physics_GetAssetByName(const char *name)
{
  return ?Physics_GetAssetByName@@YAPEBUPhysicsAsset@@PEBD@Z(name);
}

/*
==============
Physics_UnsubscribeFromTriggerEvent
==============
*/

void __fastcall Physics_UnsubscribeFromTriggerEvent(Physics_WorldId worldId, unsigned int bodyId)
{
  ?Physics_UnsubscribeFromTriggerEvent@@YAXW4Physics_WorldId@@I@Z(worldId, bodyId);
}

/*
==============
Physics_SetupBootDvars
==============
*/

void Physics_SetupBootDvars(void)
{
  ?Physics_SetupBootDvars@@YAXXZ();
}

/*
==============
Physics_SetRigidBodyDynamic
==============
*/

void __fastcall Physics_SetRigidBodyDynamic(Physics_WorldId worldId, unsigned int bodyId)
{
  ?Physics_SetRigidBodyDynamic@@YAXW4Physics_WorldId@@I@Z(worldId, bodyId);
}

/*
==============
Physics_ResetWorkerError
==============
*/

void Physics_ResetWorkerError(void)
{
  ?Physics_ResetWorkerError@@YAXXZ();
}

/*
==============
Physics_DeferredRaycast
==============
*/

void __fastcall Physics_DeferredRaycast(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, Physics_DeferredCollisionQueryData *data)
{
  ?Physics_DeferredRaycast@@YAXW4Physics_WorldId@@AEBTvec3_t@@1PEAUPhysics_RaycastExtendedData@@PEAUPhysics_DeferredCollisionQueryData@@@Z(worldId, start, end, extendedData, data);
}

/*
==============
Physics_GetServerThreadId
==============
*/

unsigned int __fastcall Physics_GetServerThreadId()
{
  return ?Physics_GetServerThreadId@@YAIXZ();
}

/*
==============
Physics_SetMassPropertiesInertiaTensor
==============
*/

void __fastcall Physics_SetMassPropertiesInertiaTensor(hkMassProperties *massProperties, const vec3_t *inertiaTensor)
{
  ?Physics_SetMassPropertiesInertiaTensor@@YAXPEAUhkMassProperties@@AEBTvec3_t@@@Z(massProperties, inertiaTensor);
}

/*
==============
Physics_WaitForPredictiveWorldUpdateCommandToFinish
==============
*/

void Physics_WaitForPredictiveWorldUpdateCommandToFinish(void)
{
  ?Physics_WaitForPredictiveWorldUpdateCommandToFinish@@YAXXZ();
}

/*
==============
Physics_AreServerWorldsCreated
==============
*/

bool __fastcall Physics_AreServerWorldsCreated()
{
  return ?Physics_AreServerWorldsCreated@@YA_NXZ();
}

/*
==============
Physics_QueryPoint
==============
*/

void __fastcall Physics_QueryPoint(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *point, float maxDistance, Physics_QueryPointExtendedData *extendedData, HavokPhysics_CollisionQueryResult *result)
{
  ?Physics_QueryPoint@@YAXW4Physics_WorldId@@IAEBTvec3_t@@MPEAUPhysics_QueryPointExtendedData@@PEAVHavokPhysics_CollisionQueryResult@@@Z(worldId, bodyId, point, maxDistance, extendedData, result);
}

/*
==============
Physics_GetNoQueriesAllowed
==============
*/

bool __fastcall Physics_GetNoQueriesAllowed(Physics_WorldId worldId)
{
  return ?Physics_GetNoQueriesAllowed@@YA_NW4Physics_WorldId@@@Z(worldId);
}

/*
==============
Physics_AllocateMemoryBuffer
==============
*/

char *__fastcall Physics_AllocateMemoryBuffer(const unsigned __int64 size, const char *name)
{
  return ?Physics_AllocateMemoryBuffer@@YAPEAD_KPEBD@Z(size, name);
}

/*
==============
Physics_GetDetailHitData
==============
*/

const Physics_DetailHitData *__fastcall Physics_GetDetailHitData(const HavokPhysics_CollisionQueryResult *result, int modifierIndex, int hitIndex)
{
  return ?Physics_GetDetailHitData@@YAPEBUPhysics_DetailHitData@@PEBVHavokPhysics_CollisionQueryResult@@HH@Z(result, modifierIndex, hitIndex);
}

/*
==============
Physics_TransientZoneUnloading
==============
*/

void __fastcall Physics_TransientZoneUnloading(unsigned int worldTransientIndex, bool fullUnload)
{
  ?Physics_TransientZoneUnloading@@YAXI_N@Z(worldTransientIndex, fullUnload);
}

/*
==============
Physics_AddDeferredBulletForce
==============
*/

void __fastcall Physics_AddDeferredBulletForce(const Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, const unsigned int inflictorEntNum, const bool isMelee, const Weapon *weapon, bool isAlternate, int mod, void (__fastcall *effectCallback)(const LocalClientNum_t, unsigned int, unsigned int, const vec3_t *, const vec3_t *, const int, const vec3_t *, const scr_string_t *, const unsigned int, const Weapon *, bool, int))
{
  ?Physics_AddDeferredBulletForce@@YAXW4Physics_WorldId@@AEBTvec3_t@@1I_NAEBUWeapon@@_NHP6AXW4LocalClientNum_t@@II11H1PEBW4scr_string_t@@I34H@Z@Z(worldId, start, end, inflictorEntNum, isMelee, weapon, isAlternate, mod, effectCallback);
}

/*
==============
Physics_GetRigidBodyMaxLinAngSpeed
==============
*/

void __fastcall Physics_GetRigidBodyMaxLinAngSpeed(Physics_WorldId worldId, unsigned int bodyId, float *maxLinSpeed, float *maxAngSpeed)
{
  ?Physics_GetRigidBodyMaxLinAngSpeed@@YAXW4Physics_WorldId@@IPEAM1@Z(worldId, bodyId, maxLinSpeed, maxAngSpeed);
}

/*
==============
Physics_CheckForGarbageCollectionServer
==============
*/

void __fastcall Physics_CheckForGarbageCollectionServer(float timeStep)
{
  ?Physics_CheckForGarbageCollectionServer@@YAXM@Z(timeStep);
}

/*
==============
Physics_Shapecast
==============
*/

void __fastcall Physics_Shapecast(Physics_WorldId worldId, hknpShape *shape, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, HavokPhysics_CollisionQueryResult *result, HavokPhysics_CollisionQueryResult *startResult)
{
  ?Physics_Shapecast@@YAXW4Physics_WorldId@@PEAVhknpShape@@AEBTvec3_t@@2AEBTvec4_t@@PEAUPhysics_ShapecastExtendedData@@PEAVHavokPhysics_CollisionQueryResult@@5@Z(worldId, shape, start, end, rotation, extendedData, result, startResult);
}

/*
==============
Physics_GetNumVertCountsInShapeList
==============
*/

int __fastcall Physics_GetNumVertCountsInShapeList(HavokPhysicsShapeList *shapeList)
{
  return ?Physics_GetNumVertCountsInShapeList@@YAHPEAVHavokPhysicsShapeList@@@Z(shapeList);
}

/*
==============
Physics_GetRef
==============
*/

int __fastcall Physics_GetRef(Physics_WorldId worldId, unsigned int bodyId)
{
  return ?Physics_GetRef@@YAHW4Physics_WorldId@@I@Z(worldId, bodyId);
}

/*
==============
Physics_DeferredAABBQuery
==============
*/

void __fastcall Physics_DeferredAABBQuery(Physics_WorldId worldId, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, Physics_DeferredCollisionQueryData *data)
{
  ?Physics_DeferredAABBQuery@@YAXW4Physics_WorldId@@AEBTvec3_t@@1PEAUPhysics_AABBQueryExtendedData@@PEAUPhysics_DeferredCollisionQueryData@@@Z(worldId, min, max, extendedData, data);
}

/*
==============
Physics_CopyXModelDetailCollisionAsset
==============
*/

void __fastcall Physics_CopyXModelDetailCollisionAsset(XModelDetailCollision *from, XModelDetailCollision *to)
{
  ?Physics_CopyXModelDetailCollisionAsset@@YAXPEAUXModelDetailCollision@@0@Z(from, to);
}

/*
==============
Physics_WarpInstanceTo
==============
*/

bool __fastcall Physics_WarpInstanceTo(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *position, const vec4_t *orientationAsQuat, bool updateBroadphaseIfNecessary)
{
  return ?Physics_WarpInstanceTo@@YA_NW4Physics_WorldId@@IAEBTvec3_t@@AEBTvec4_t@@_N@Z(worldId, instanceId, position, orientationAsQuat, updateBroadphaseIfNecessary);
}

/*
==============
Physics_AddPendingBodies
==============
*/

void __fastcall Physics_AddPendingBodies(Physics_WorldId worldId)
{
  ?Physics_AddPendingBodies@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
Physics_WaitForAllCommandsToFinish
==============
*/

void Physics_WaitForAllCommandsToFinish(void)
{
  ?Physics_WaitForAllCommandsToFinish@@YAXXZ();
}

/*
==============
Physics_GetPhysicsAssetContents
==============
*/

int __fastcall Physics_GetPhysicsAssetContents(const PhysicsAsset *physicsAsset)
{
  return ?Physics_GetPhysicsAssetContents@@YAHPEBUPhysicsAsset@@@Z(physicsAsset);
}

/*
==============
Physics_MakeRef
==============
*/

int __fastcall Physics_MakeRef(Physics_RefSystem system, Physics_RelationshipSystem relationSystem, unsigned __int8 subSystem, unsigned __int16 id)
{
  return ?Physics_MakeRef@@YAHW4Physics_RefSystem@@W4Physics_RelationshipSystem@@EG@Z(system, relationSystem, subSystem, id);
}

/*
==============
Physics_AntilagRestoreInstanceTo
==============
*/

void __fastcall Physics_AntilagRestoreInstanceTo(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *position, const vec4_t *orientationAsQuat)
{
  ?Physics_AntilagRestoreInstanceTo@@YAXW4Physics_WorldId@@IAEBTvec3_t@@AEBTvec4_t@@@Z(worldId, instanceId, position, orientationAsQuat);
}

/*
==============
Physics_Load
==============
*/

void __fastcall Physics_Load(SaveGame *save)
{
  ?Physics_Load@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
Physics_SetBroadphaseNeedsRefresh
==============
*/

void __fastcall Physics_SetBroadphaseNeedsRefresh(const Physics_WorldId worldId, const bool needsRefresh)
{
  ?Physics_SetBroadphaseNeedsRefresh@@YAXW4Physics_WorldId@@_N@Z(worldId, needsRefresh);
}

/*
==============
Physics_CheckWorldReplayDeterminism
==============
*/

void __fastcall Physics_CheckWorldReplayDeterminism(Physics_WorldId worldId)
{
  ?Physics_CheckWorldReplayDeterminism@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
Physics_GetPhysicsAssetBodyBounds
==============
*/

void __fastcall Physics_GetPhysicsAssetBodyBounds(const PhysicsAsset *physicsAsset, int bodyIdx, vec3_t *min, vec3_t *max)
{
  ?Physics_GetPhysicsAssetBodyBounds@@YAXPEBUPhysicsAsset@@HAEATvec3_t@@1@Z(physicsAsset, bodyIdx, min, max);
}

/*
==============
Physics_GetDetailCollisionContents
==============
*/

int __fastcall Physics_GetDetailCollisionContents(const XModelDetailCollision *detailCollision)
{
  return ?Physics_GetDetailCollisionContents@@YAHPEBUXModelDetailCollision@@@Z(detailCollision);
}

/*
==============
Physics_SetCGDynEntDetailPropagationDebugData
==============
*/

void __fastcall Physics_SetCGDynEntDetailPropagationDebugData(LocalClientNum_t localClientNum, int detailBoundedCount, int duplicationCount, int duplicationBodyCount)
{
  ?Physics_SetCGDynEntDetailPropagationDebugData@@YAXW4LocalClientNum_t@@HHH@Z(localClientNum, detailBoundedCount, duplicationCount, duplicationBodyCount);
}

/*
==============
Physics_InstantiateAssetBody
==============
*/

bool __fastcall Physics_InstantiateAssetBody(unsigned int instanceId, Physics_WorldId worldId, const PhysicsAsset *physicsAsset, int bodyIdx, int ref, const vec3_t *position, const vec4_t *orientationAsQuat, bool add, bool tryStartDeactivated, bool neverDeactivate, int shapeOverride, Physics_InstantiationForceType forceType, Physics_InstantiationFilterType filterType, bool forQueryOnly)
{
  return ?Physics_InstantiateAssetBody@@YA_NIW4Physics_WorldId@@PEBUPhysicsAsset@@HHAEBTvec3_t@@AEBTvec4_t@@_N44HW4Physics_InstantiationForceType@@W4Physics_InstantiationFilterType@@4@Z(instanceId, worldId, physicsAsset, bodyIdx, ref, position, orientationAsQuat, add, tryStartDeactivated, neverDeactivate, shapeOverride, forceType, filterType, forQueryOnly);
}

/*
==============
Physics_DoCmd_Task
==============
*/

void __fastcall Physics_DoCmd_Task(const void *const cmdInfo)
{
  ?Physics_DoCmd_Task@@YAXQEBX@Z(cmdInfo);
}

/*
==============
Physics_GetDontCollideWithClutterFromUserData
==============
*/

bool __fastcall Physics_GetDontCollideWithClutterFromUserData(unsigned __int64 userData)
{
  return ?Physics_GetDontCollideWithClutterFromUserData@@YA_N_K@Z(userData);
}

/*
==============
Physics_WaitForPredictiveWorldUpdatePreCommandToFinish
==============
*/

void Physics_WaitForPredictiveWorldUpdatePreCommandToFinish(void)
{
  ?Physics_WaitForPredictiveWorldUpdatePreCommandToFinish@@YAXXZ();
}

/*
==============
Physics_GetFilterSubGroupIdFromUserData
==============
*/

char __fastcall Physics_GetFilterSubGroupIdFromUserData(unsigned __int64 userData)
{
  return ?Physics_GetFilterSubGroupIdFromUserData@@YAD_K@Z(userData);
}

/*
==============
Physics_SetCGFXStatesDetailPropagationDebugData
==============
*/

void __fastcall Physics_SetCGFXStatesDetailPropagationDebugData(LocalClientNum_t localClientNum, int numState, int numPhysicsState)
{
  ?Physics_SetCGFXStatesDetailPropagationDebugData@@YAXW4LocalClientNum_t@@HH@Z(localClientNum, numState, numPhysicsState);
}

/*
==============
Physics_GetShapeOverrideContents
==============
*/

int __fastcall Physics_GetShapeOverrideContents(int shapeOverride)
{
  return ?Physics_GetShapeOverrideContents@@YAHH@Z(shapeOverride);
}

/*
==============
Physics_SetRigidBodyToDefault
==============
*/

void __fastcall Physics_SetRigidBodyToDefault(Physics_WorldId worldId, unsigned int bodyId, const PhysicsAsset *asset, unsigned int assetIndex)
{
  ?Physics_SetRigidBodyToDefault@@YAXW4Physics_WorldId@@IPEBUPhysicsAsset@@I@Z(worldId, bodyId, asset, assetIndex);
}

/*
==============
Physics_GetClosestPoints
==============
*/

void __fastcall Physics_GetClosestPoints(Physics_WorldId worldId, unsigned int bodyId, hknpShape *shape, const vec3_t *point, const vec4_t *rotation, float maxDistance, Physics_GetClosestPointsExtendedData *extendedData, HavokPhysics_CollisionQueryResult *result)
{
  ?Physics_GetClosestPoints@@YAXW4Physics_WorldId@@IPEAVhknpShape@@AEBTvec3_t@@AEBTvec4_t@@MPEAUPhysics_GetClosestPointsExtendedData@@PEAVHavokPhysics_CollisionQueryResult@@@Z(worldId, bodyId, shape, point, rotation, maxDistance, extendedData, result);
}

/*
==============
Physics_ConvertRefSystemToString
==============
*/

void __fastcall Physics_ConvertRefSystemToString(int ref, Physics_WorldId worldId, char *string, int stringLen)
{
  ?Physics_ConvertRefSystemToString@@YAXHW4Physics_WorldId@@PEADH@Z(ref, worldId, string, stringLen);
}

/*
==============
Physics_CreateShapeCylinder
==============
*/

hknpShape *__fastcall Physics_CreateShapeCylinder(const vec3_t *center, float halfHeight, float radius, int numVertices, bool useCache)
{
  return ?Physics_CreateShapeCylinder@@YAPEAVhknpShape@@AEBTvec3_t@@MMH_N@Z(center, halfHeight, radius, numVertices, useCache);
}

/*
==============
Physics_GetShapeVertCountFromShapeList
==============
*/

int __fastcall Physics_GetShapeVertCountFromShapeList(HavokPhysicsShapeList *shapeList, unsigned int shapeIdx)
{
  return ?Physics_GetShapeVertCountFromShapeList@@YAHPEAVHavokPhysicsShapeList@@I@Z(shapeList, shapeIdx);
}

/*
==============
Physics_GetPhysicsAssetBodyName
==============
*/

const char *__fastcall Physics_GetPhysicsAssetBodyName(const PhysicsAsset *physicsAsset, int bodyIdx)
{
  return ?Physics_GetPhysicsAssetBodyName@@YAPEBDPEBUPhysicsAsset@@H@Z(physicsAsset, bodyIdx);
}

/*
==============
Physics_SetRigidBodyCenterOfMass
==============
*/

void __fastcall Physics_SetRigidBodyCenterOfMass(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *centerOfMass)
{
  ?Physics_SetRigidBodyCenterOfMass@@YAXW4Physics_WorldId@@IAEBTvec3_t@@@Z(worldId, bodyId, centerOfMass);
}

/*
==============
Physics_IsInstanceInWorld
==============
*/

bool __fastcall Physics_IsInstanceInWorld(Physics_WorldId worldId, unsigned int instanceId, bool checkPending)
{
  return ?Physics_IsInstanceInWorld@@YA_NW4Physics_WorldId@@I_N@Z(worldId, instanceId, checkPending);
}

/*
==============
Physics_TakeMemorySnapshot
==============
*/

void __fastcall Physics_TakeMemorySnapshot(const char *filename)
{
  ?Physics_TakeMemorySnapshot@@YAXPEBD@Z(filename);
}

/*
==============
Physics_EnableDeactivationForBody
==============
*/

void __fastcall Physics_EnableDeactivationForBody(Physics_WorldId worldId, unsigned int bodyId, bool enableDeactivation)
{
  ?Physics_EnableDeactivationForBody@@YAXW4Physics_WorldId@@I_N@Z(worldId, bodyId, enableDeactivation);
}

/*
==============
Physics_DecodeShapeKeyIntoShapes
==============
*/

unsigned int __fastcall Physics_DecodeShapeKeyIntoShapes(Physics_WorldId worldId, unsigned int bodyId, unsigned int key, const hknpShape **shapes)
{
  return ?Physics_DecodeShapeKeyIntoShapes@@YAIW4Physics_WorldId@@IIQEAPEBVhknpShape@@@Z(worldId, bodyId, key, shapes);
}

/*
==============
Physics_ActivateBody
==============
*/

void __fastcall Physics_ActivateBody(Physics_WorldId worldId, unsigned int bodyId)
{
  ?Physics_ActivateBody@@YAXW4Physics_WorldId@@I@Z(worldId, bodyId);
}

/*
==============
Physics_DeferredAABBQuery
==============
*/

void __fastcall Physics_DeferredAABBQuery(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, Physics_DeferredCollisionQueryData *data)
{
  ?Physics_DeferredAABBQuery@@YAXW4Physics_WorldId@@IAEBTvec3_t@@1PEAUPhysics_AABBQueryExtendedData@@PEAUPhysics_DeferredCollisionQueryData@@@Z(worldId, bodyId, min, max, extendedData, data);
}

/*
==============
Physics_InverseInertiaFromLocalToWorld
==============
*/

void __fastcall Physics_InverseInertiaFromLocalToWorld(const vec3_t *invInertiaLocal, const tmat33_t<vec3_t> *rotation, tmat33_t<vec3_t> *invInertiaWs)
{
  ?Physics_InverseInertiaFromLocalToWorld@@YAXAEBTvec3_t@@AEBT?$tmat33_t@Tvec3_t@@@@AEAT2@@Z(invInertiaLocal, rotation, invInertiaWs);
}

/*
==============
Physics_AllocateCollisionQueryResult
==============
*/

HavokPhysics_CollisionQueryResult *__fastcall Physics_AllocateCollisionQueryResult(Physics_WorldId worldId, Physics_CollisionQueryCollectionType type)
{
  return ?Physics_AllocateCollisionQueryResult@@YAPEAVHavokPhysics_CollisionQueryResult@@W4Physics_WorldId@@W4Physics_CollisionQueryCollectionType@@@Z(worldId, type);
}

/*
==============
Physics_DisableShapeCache
==============
*/

void __fastcall Physics_DisableShapeCache(unsigned int threadId, bool disable)
{
  ?Physics_DisableShapeCache@@YAXI_N@Z(threadId, disable);
}

/*
==============
Physics_GetNumServerRigidBodysInAsset
==============
*/

int __fastcall Physics_GetNumServerRigidBodysInAsset(const PhysicsAsset *physicsAsset)
{
  return ?Physics_GetNumServerRigidBodysInAsset@@YAHPEBUPhysicsAsset@@@Z(physicsAsset);
}

/*
==============
Physics_ClearAntilagFlags
==============
*/

void __fastcall Physics_ClearAntilagFlags(Physics_WorldId worldId)
{
  ?Physics_ClearAntilagFlags@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
Physics_StepVDB
==============
*/

void __fastcall Physics_StepVDB(Physics_WorldId worldId, float time, bool updateStats)
{
  ?Physics_StepVDB@@YAXW4Physics_WorldId@@M_N@Z(worldId, time, updateStats);
}

/*
==============
Physics_PreStepWorld
==============
*/

void __fastcall Physics_PreStepWorld(Physics_WorldId worldId, float timeStep)
{
  ?Physics_PreStepWorld@@YAXW4Physics_WorldId@@M@Z(worldId, timeStep);
}

/*
==============
Physics_GetRigidBodyCenterOfMassLocal
==============
*/

void __fastcall Physics_GetRigidBodyCenterOfMassLocal(Physics_WorldId worldId, unsigned int bodyId, vec3_t *centerOfMassLocal)
{
  ?Physics_GetRigidBodyCenterOfMassLocal@@YAXW4Physics_WorldId@@IAEATvec3_t@@@Z(worldId, bodyId, centerOfMassLocal);
}

/*
==============
Physics_LockWorld
==============
*/

void __fastcall Physics_LockWorld(Physics_WorldId worldId)
{
  ?Physics_LockWorld@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
Physics_AllocateBroadphaseCollisionQueryResult
==============
*/

HavokPhysics_BroadphaseCollisionQueryResult *__fastcall Physics_AllocateBroadphaseCollisionQueryResult(Physics_WorldId worldId)
{
  return ?Physics_AllocateBroadphaseCollisionQueryResult@@YAPEAVHavokPhysics_BroadphaseCollisionQueryResult@@W4Physics_WorldId@@@Z(worldId);
}

/*
==============
Physics_AddDetailCollisionShapesToInstanceList
==============
*/

unsigned int __fastcall Physics_AddDetailCollisionShapesToInstanceList(const XModelDetailCollision *detailCollision, const vec3_t *origin, const float scale, const vec4_t *orientation, hkArray<hknpShapeInstance,hkContainerHeapAllocator> *instanceArray)
{
  return ?Physics_AddDetailCollisionShapesToInstanceList@@YAIPEBUXModelDetailCollision@@AEBTvec3_t@@MAEBTvec4_t@@PEAV?$hkArray@UhknpShapeInstance@@UhkContainerHeapAllocator@@@@@Z(detailCollision, origin, scale, orientation, instanceArray);
}

/*
==============
Physics_KeyframeInstanceTo
==============
*/

Physics_MovementType __fastcall Physics_KeyframeInstanceTo(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *position, const vec4_t *orientationAsQuat, float velocityScale, bool canWarp, bool updateBroadphaseIfWarping, float stepTimeOverride)
{
  return ?Physics_KeyframeInstanceTo@@YA?AW4Physics_MovementType@@W4Physics_WorldId@@IAEBTvec3_t@@AEBTvec4_t@@M_N3M@Z(worldId, instanceId, position, orientationAsQuat, velocityScale, canWarp, updateBroadphaseIfWarping, stepTimeOverride);
}

/*
==============
Physics_SetInstanceXModel
==============
*/

void __fastcall Physics_SetInstanceXModel(const Physics_WorldId worldId, const unsigned int instanceId, const XModel *const xmodel)
{
  ?Physics_SetInstanceXModel@@YAXW4Physics_WorldId@@IQEBUXModel@@@Z(worldId, instanceId, xmodel);
}

/*
==============
Physics_DoGarbageCollectionServer
==============
*/

void Physics_DoGarbageCollectionServer(void)
{
  ?Physics_DoGarbageCollectionServer@@YAXXZ();
}

/*
==============
Physics_ReleasePhysicsSFXEventAsset
==============
*/

void __fastcall Physics_ReleasePhysicsSFXEventAsset(PhysicsSFXEventAsset *physicsSFXEventAsset)
{
  ?Physics_ReleasePhysicsSFXEventAsset@@YAXPEAUPhysicsSFXEventAsset@@@Z(physicsSFXEventAsset);
}

/*
==============
Physics_RemoveRigidBodiesFromWorld
==============
*/

void __fastcall Physics_RemoveRigidBodiesFromWorld(Physics_WorldId worldId, unsigned int *bodyIds, int numBodies, bool activate)
{
  ?Physics_RemoveRigidBodiesFromWorld@@YAXW4Physics_WorldId@@PEAIH_N@Z(worldId, bodyIds, numBodies, activate);
}

/*
==============
Physics_RenderDebugOverlays
==============
*/

void __fastcall Physics_RenderDebugOverlays(GfxCmdBufContext *gfxContext)
{
  ?Physics_RenderDebugOverlays@@YAXUGfxCmdBufContext@@@Z(gfxContext);
}

/*
==============
Physics_SwapPhysicsVFXEventAsset
==============
*/

void __fastcall Physics_SwapPhysicsVFXEventAsset(PhysicsVFXEventAsset *from, PhysicsVFXEventAsset *to)
{
  ?Physics_SwapPhysicsVFXEventAsset@@YAXPEAUPhysicsVFXEventAsset@@0@Z(from, to);
}

/*
==============
Physics_SetMapLocalAllocatorBuffer
==============
*/

void __fastcall Physics_SetMapLocalAllocatorBuffer(void *buffer, unsigned int size)
{
  ?Physics_SetMapLocalAllocatorBuffer@@YAXPEAXI@Z(buffer, size);
}

/*
==============
Physics_CopyPhysicsAsset
==============
*/

void __fastcall Physics_CopyPhysicsAsset(PhysicsAsset *from, PhysicsAsset *to)
{
  ?Physics_CopyPhysicsAsset@@YAXPEAUPhysicsAsset@@0@Z(from, to);
}

/*
==============
Physics_SetCGGlassDetailPropagationDebugData
==============
*/

void __fastcall Physics_SetCGGlassDetailPropagationDebugData(LocalClientNum_t localClientNum, int glassPieceCount, int glassPhysicsCount, int glassBodyCount)
{
  ?Physics_SetCGGlassDetailPropagationDebugData@@YAXW4LocalClientNum_t@@HHH@Z(localClientNum, glassPieceCount, glassPhysicsCount, glassBodyCount);
}

/*
==============
Physics_AddInstanceToWorld
==============
*/

void __fastcall Physics_AddInstanceToWorld(Physics_WorldId worldId, unsigned int instanceId, bool immediate, bool tryStartDeactivated)
{
  ?Physics_AddInstanceToWorld@@YAXW4Physics_WorldId@@I_N1@Z(worldId, instanceId, immediate, tryStartDeactivated);
}

/*
==============
Physics_IsInstanceStatic
==============
*/

bool __fastcall Physics_IsInstanceStatic(Physics_WorldId worldId, unsigned int instanceId)
{
  return ?Physics_IsInstanceStatic@@YA_NW4Physics_WorldId@@I@Z(worldId, instanceId);
}

/*
==============
Physics_GetRigidBodyMass
==============
*/

void __fastcall Physics_GetRigidBodyMass(Physics_WorldId worldId, unsigned int bodyId, float *mass)
{
  ?Physics_GetRigidBodyMass@@YAXW4Physics_WorldId@@IPEAM@Z(worldId, bodyId, mass);
}

/*
==============
Physics_WarpRigidBodyToRelative
==============
*/

void __fastcall Physics_WarpRigidBodyToRelative(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *startPosition, const vec4_t *startOrientationAsQuat, const vec3_t *endPosition, const vec4_t *endOrientationAsQuat)
{
  ?Physics_WarpRigidBodyToRelative@@YAXW4Physics_WorldId@@IAEBTvec3_t@@AEBTvec4_t@@12@Z(worldId, bodyId, startPosition, startOrientationAsQuat, endPosition, endOrientationAsQuat);
}

/*
==============
Physics_ApplyLinearImpulse
==============
*/

void __fastcall Physics_ApplyLinearImpulse(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *normalizedDirection, float magnitude)
{
  ?Physics_ApplyLinearImpulse@@YAXW4Physics_WorldId@@IAEBTvec3_t@@M@Z(worldId, bodyId, normalizedDirection, magnitude);
}

/*
==============
Physics_GetShape
==============
*/

hknpShape *__fastcall Physics_GetShape(Physics_WorldId worldId, unsigned int bodyId)
{
  return ?Physics_GetShape@@YAPEAVhknpShape@@W4Physics_WorldId@@I@Z(worldId, bodyId);
}

/*
==============
Physics_MoveXModelDetailCollisionAsset
==============
*/

void __fastcall Physics_MoveXModelDetailCollisionAsset(XModelDetailCollision *from, XModelDetailCollision *to)
{
  ?Physics_MoveXModelDetailCollisionAsset@@YAXPEAUXModelDetailCollision@@0@Z(from, to);
}

/*
==============
Physics_CheckForGarbageCollectionClient
==============
*/

void __fastcall Physics_CheckForGarbageCollectionClient(float timeStep)
{
  ?Physics_CheckForGarbageCollectionClient@@YAXM@Z(timeStep);
}

/*
==============
Physics_WarpLeafDetailRigidBodyTo
==============
*/

Physics_MovementType __fastcall Physics_WarpLeafDetailRigidBodyTo(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *position, const vec4_t *orientationAsQuat, bool updateBroadphase, bool activate)
{
  return ?Physics_WarpLeafDetailRigidBodyTo@@YA?AW4Physics_MovementType@@W4Physics_WorldId@@IAEBTvec3_t@@AEBTvec4_t@@_N3@Z(worldId, bodyId, position, orientationAsQuat, updateBroadphase, activate);
}

/*
==============
Physics_AABBBroadphaseQuery
==============
*/

void __fastcall Physics_AABBBroadphaseQuery(Physics_WorldId worldId, const vec3_t *min, const vec3_t *max, Physics_AABBBroadphaseQueryExtendedData *extendedData, HavokPhysics_BroadphaseCollisionQueryResult *result)
{
  ?Physics_AABBBroadphaseQuery@@YAXW4Physics_WorldId@@AEBTvec3_t@@1PEAUPhysics_AABBBroadphaseQueryExtendedData@@PEAVHavokPhysics_BroadphaseCollisionQueryResult@@@Z(worldId, min, max, extendedData, result);
}

/*
==============
Physics_GetPhysicsAssetShape
==============
*/

const hknpShape *__fastcall Physics_GetPhysicsAssetShape(const PhysicsAsset *physicsAsset, int bodyIdx)
{
  return ?Physics_GetPhysicsAssetShape@@YAPEBVhknpShape@@PEBUPhysicsAsset@@H@Z(physicsAsset, bodyIdx);
}

/*
==============
Physics_CalculateMassProperties
==============
*/

void __fastcall Physics_CalculateMassProperties(hknpShape *shape, float mass, hkMassProperties *massProperties)
{
  ?Physics_CalculateMassProperties@@YAXPEAVhknpShape@@MPEAUhkMassProperties@@@Z(shape, mass, massProperties);
}

/*
==============
Physics_IsRigidBodyKeyframed
==============
*/

bool __fastcall Physics_IsRigidBodyKeyframed(Physics_WorldId worldId, unsigned int bodyId)
{
  return ?Physics_IsRigidBodyKeyframed@@YA_NW4Physics_WorldId@@I@Z(worldId, bodyId);
}

/*
==============
Physics_GetRigidBodyContents
==============
*/

int __fastcall Physics_GetRigidBodyContents(const Physics_WorldId worldId, const unsigned int bodyId)
{
  return ?Physics_GetRigidBodyContents@@YAHW4Physics_WorldId@@I@Z(worldId, bodyId);
}

/*
==============
Physics_SetCGFXParticlesDetailPropagationDebugData
==============
*/

void __fastcall Physics_SetCGFXParticlesDetailPropagationDebugData(LocalClientNum_t localClientNum, int numParticles, int numPhysicsParticles)
{
  ?Physics_SetCGFXParticlesDetailPropagationDebugData@@YAXW4LocalClientNum_t@@HH@Z(localClientNum, numParticles, numPhysicsParticles);
}

/*
==============
Physics_GetShapeUserData
==============
*/

unsigned __int64 __fastcall Physics_GetShapeUserData(hknpShape *inShape)
{
  return ?Physics_GetShapeUserData@@YA_KPEAVhknpShape@@@Z(inShape);
}

/*
==============
Physics_CreateServerWorlds
==============
*/

void __fastcall Physics_CreateServerWorlds(const unsigned int maxClients)
{
  ?Physics_CreateServerWorlds@@YAXI@Z(maxClients);
}

/*
==============
Physics_GetBroadphaseNeedsRefresh
==============
*/

bool __fastcall Physics_GetBroadphaseNeedsRefresh(const Physics_WorldId worldId)
{
  return ?Physics_GetBroadphaseNeedsRefresh@@YA_NW4Physics_WorldId@@@Z(worldId);
}

/*
==============
Physics_IsAssetRagdoll
==============
*/

bool __fastcall Physics_IsAssetRagdoll(const PhysicsAsset *physicsAsset)
{
  return ?Physics_IsAssetRagdoll@@YA_NPEBUPhysicsAsset@@@Z(physicsAsset);
}

/*
==============
Physics_GetShapeTypeName
==============
*/

const char *__fastcall Physics_GetShapeTypeName(const hknpShape *shape)
{
  return ?Physics_GetShapeTypeName@@YAPEBDPEBVhknpShape@@@Z(shape);
}

/*
==============
Physics_CreateClientWorlds
==============
*/

void __fastcall Physics_CreateClientWorlds(LocalClientNum_t localClientNum)
{
  ?Physics_CreateClientWorlds@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Physics_ReleasePhysicsVFXEventAsset
==============
*/

void __fastcall Physics_ReleasePhysicsVFXEventAsset(PhysicsVFXEventAsset *physicsVFXEventAsset)
{
  ?Physics_ReleasePhysicsVFXEventAsset@@YAXPEAUPhysicsVFXEventAsset@@@Z(physicsVFXEventAsset);
}

/*
==============
Physics_MyChangesSaveAndShutdown
==============
*/

void Physics_MyChangesSaveAndShutdown(void)
{
  ?Physics_MyChangesSaveAndShutdown@@YAXXZ();
}

/*
==============
Physics_HasSFXEventAsset
==============
*/

bool __fastcall Physics_HasSFXEventAsset(Physics_WorldId worldId, unsigned int bodyId)
{
  return ?Physics_HasSFXEventAsset@@YA_NW4Physics_WorldId@@I@Z(worldId, bodyId);
}

/*
==============
Physics_GetShapeConvexCountFromShapeList
==============
*/

int __fastcall Physics_GetShapeConvexCountFromShapeList(HavokPhysicsShapeList *shapeList, unsigned int shapeIdx)
{
  return ?Physics_GetShapeConvexCountFromShapeList@@YAHPEAVHavokPhysicsShapeList@@I@Z(shapeList, shapeIdx);
}

/*
==============
Physics_Init
==============
*/

void Physics_Init(void)
{
  ?Physics_Init@@YAXXZ();
}

/*
==============
Physics_InstantiateAssetBodyCylinder
==============
*/

bool __fastcall Physics_InstantiateAssetBodyCylinder(unsigned int instanceId, Physics_WorldId worldId, const PhysicsAsset *physicsAsset, int bodyIdx, int ref, const vec3_t *position, const vec4_t *orientationAsQuat, bool add, bool tryStartDeactivated, bool neverDeactivate, float radius, float height, Physics_InstantiationForceType forceType, Physics_InstantiationFilterType filterType, bool forQueryOnly)
{
  return ?Physics_InstantiateAssetBodyCylinder@@YA_NIW4Physics_WorldId@@PEBUPhysicsAsset@@HHAEBTvec3_t@@AEBTvec4_t@@_N44MMW4Physics_InstantiationForceType@@W4Physics_InstantiationFilterType@@4@Z(instanceId, worldId, physicsAsset, bodyIdx, ref, position, orientationAsQuat, add, tryStartDeactivated, neverDeactivate, radius, height, forceType, filterType, forQueryOnly);
}

/*
==============
Physics_SetCGPhysicsObjectPredictiveDebugData
==============
*/

void __fastcall Physics_SetCGPhysicsObjectPredictiveDebugData(LocalClientNum_t localClientNum, int numPhysicsObjects, int numPhysicsObjectsNeedingUpdate, int numPhysicsObjectsNeedingFullUpdate, int physicsObjectChildHavingCount, int physicsObjectChildCount, int physicsObjectDynamicBoneMappingHavingCount, int physicsObjectDynamicBoneMappingCount, int physicsObjectKeyframedBoneMappingHavingCount, int physicsObjectKeyframedBoneMappingCount, int physicsObjectKeyframedBoneMappingHavingCountUpdated, int physicsObjectKeyframedBoneMappingCountUpdated, int physicsObjectKeyframedOffsetMappingHavingCount, int physicsObjectKeyframedOffsetMappingCount, int physicsObjectKeyframedOffsetMappingHavingCountUpdated, int physicsObjectKeyframedOffsetMappingCountUpdated)
{
  ?Physics_SetCGPhysicsObjectPredictiveDebugData@@YAXW4LocalClientNum_t@@HHHHHHHHHHHHHHH@Z(localClientNum, numPhysicsObjects, numPhysicsObjectsNeedingUpdate, numPhysicsObjectsNeedingFullUpdate, physicsObjectChildHavingCount, physicsObjectChildCount, physicsObjectDynamicBoneMappingHavingCount, physicsObjectDynamicBoneMappingCount, physicsObjectKeyframedBoneMappingHavingCount, physicsObjectKeyframedBoneMappingCount, physicsObjectKeyframedBoneMappingHavingCountUpdated, physicsObjectKeyframedBoneMappingCountUpdated, physicsObjectKeyframedOffsetMappingHavingCount, physicsObjectKeyframedOffsetMappingCount, physicsObjectKeyframedOffsetMappingHavingCountUpdated, physicsObjectKeyframedOffsetMappingCountUpdated);
}

/*
==============
Physics_AccumulateRigidBodyAngularImpulse
==============
*/

void __fastcall Physics_AccumulateRigidBodyAngularImpulse(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *impulseWs, const vec3_t *atPointWs, vec3_t *outAngularVelWs)
{
  ?Physics_AccumulateRigidBodyAngularImpulse@@YAXW4Physics_WorldId@@IAEBTvec3_t@@1AEAT2@@Z(worldId, bodyId, impulseWs, atPointWs, outAngularVelWs);
}

/*
==============
Physics_ValidateWorld
==============
*/

void __fastcall Physics_ValidateWorld(Physics_WorldId worldId)
{
  ?Physics_ValidateWorld@@YAXW4Physics_WorldId@@@Z(worldId);
}

/*
==============
Physics_Shapecast
==============
*/

void __fastcall Physics_Shapecast(Physics_WorldId worldId, unsigned int numBodies, unsigned int *bodyIds, hknpShape *shape, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, HavokPhysics_CollisionQueryResult *result, HavokPhysics_CollisionQueryResult *startResult)
{
  ?Physics_Shapecast@@YAXW4Physics_WorldId@@IPEAIPEAVhknpShape@@AEBTvec3_t@@3AEBTvec4_t@@PEAUPhysics_ShapecastExtendedData@@PEAVHavokPhysics_CollisionQueryResult@@6@Z(worldId, numBodies, bodyIds, shape, start, end, rotation, extendedData, result, startResult);
}

/*
==============
Physics_GetDecalTypeFromUserData
==============
*/

bool __fastcall Physics_GetDecalTypeFromUserData(unsigned __int64 userData)
{
  return ?Physics_GetDecalTypeFromUserData@@YA_N_K@Z(userData);
}

/*
==============
Physics_AddPhysicsLibrary
==============
*/

void __fastcall Physics_AddPhysicsLibrary(PhysicsLibrary *physicsLibrary)
{
  ?Physics_AddPhysicsLibrary@@YAXPEAUPhysicsLibrary@@@Z(physicsLibrary);
}

/*
==============
Physics_SetInstanceDetailModel
==============
*/

void __fastcall Physics_SetInstanceDetailModel(const Physics_WorldId worldId, const unsigned int instanceId, const XModel *const xmodel)
{
  ?Physics_SetInstanceDetailModel@@YAXW4Physics_WorldId@@IQEBUXModel@@@Z(worldId, instanceId, xmodel);
}

/*
==============
Physics_GetPhysicsAssetShapeTag
==============
*/

unsigned __int16 __fastcall Physics_GetPhysicsAssetShapeTag(const PhysicsAsset *physicsAsset, int bodyIdx)
{
  return ?Physics_GetPhysicsAssetShapeTag@@YAGPEBUPhysicsAsset@@H@Z(physicsAsset, bodyIdx);
}

/*
==============
Physics_AllocateIgnoreBodies
==============
*/

HavokPhysics_IgnoreBodies *__fastcall Physics_AllocateIgnoreBodies(int minEntities, int minBodies)
{
  return ?Physics_AllocateIgnoreBodies@@YAPEAVHavokPhysics_IgnoreBodies@@HH@Z(minEntities, minBodies);
}

/*
==============
Physics_CreateInstance
==============
*/

unsigned int __fastcall Physics_CreateInstance(Physics_WorldId worldId)
{
  return ?Physics_CreateInstance@@YAIW4Physics_WorldId@@@Z(worldId);
}

/*
==============
Physics_MovePhysicsAsset
==============
*/

void __fastcall Physics_MovePhysicsAsset(PhysicsAsset *from, PhysicsAsset *to)
{
  ?Physics_MovePhysicsAsset@@YAXPEAUPhysicsAsset@@0@Z(from, to);
}

/*
==============
Physics_GetThreadId
==============
*/

unsigned int __fastcall Physics_GetThreadId()
{
  return ?Physics_GetThreadId@@YAIXZ();
}

/*
==============
Physics_AddRigidBodyIdToArray
==============
*/

void __fastcall Physics_AddRigidBodyIdToArray(hkArray<hknpBodyId,hkContainerHeapAllocator> *array, unsigned int bodyId)
{
  ?Physics_AddRigidBodyIdToArray@@YAXPEAV?$hkArray@UhknpBodyId@@UhkContainerHeapAllocator@@@@I@Z(array, bodyId);
}

/*
==============
Physics_AddShapeList
==============
*/

HavokPhysicsShapeList *__fastcall Physics_AddShapeList(char **rawShapeData, unsigned int *rawShapeDataSize, const char *name, int type)
{
  return ?Physics_AddShapeList@@YAPEAVHavokPhysicsShapeList@@PEAPEADPEAIPEBDH@Z(rawShapeData, rawShapeDataSize, name, type);
}

/*
==============
Physics_GetRefSubSystem
==============
*/

unsigned __int8 __fastcall Physics_GetRefSubSystem(int ref)
{
  return ?Physics_GetRefSubSystem@@YAEH@Z(ref);
}

/*
==============
Physics_DeferredAABBBroadphaseQuery
==============
*/

void __fastcall Physics_DeferredAABBBroadphaseQuery(Physics_WorldId worldId, const vec3_t *min, const vec3_t *max, Physics_AABBBroadphaseQueryExtendedData *extendedData, Physics_DeferredBroadphaseCollisionQueryData *data)
{
  ?Physics_DeferredAABBBroadphaseQuery@@YAXW4Physics_WorldId@@AEBTvec3_t@@1PEAUPhysics_AABBBroadphaseQueryExtendedData@@PEAUPhysics_DeferredBroadphaseCollisionQueryData@@@Z(worldId, min, max, extendedData, data);
}

/*
==============
Physics_ApplyAngularImpulse
==============
*/

void __fastcall Physics_ApplyAngularImpulse(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *torqueVector, float magnitude)
{
  ?Physics_ApplyAngularImpulse@@YAXW4Physics_WorldId@@IAEBTvec3_t@@M@Z(worldId, bodyId, torqueVector, magnitude);
}

/*
==============
Physics_ClearShapeCache
==============
*/

void Physics_ClearShapeCache(void)
{
  ?Physics_ClearShapeCache@@YAXXZ();
}

/*
==============
Physics_SetRigidBodyKeyframed
==============
*/

void __fastcall Physics_SetRigidBodyKeyframed(Physics_WorldId worldId, unsigned int bodyId)
{
  ?Physics_SetRigidBodyKeyframed@@YAXW4Physics_WorldId@@I@Z(worldId, bodyId);
}

/*
==============
Physics_GetRigidBodyDynamicMass
==============
*/

void __fastcall Physics_GetRigidBodyDynamicMass(Physics_WorldId worldId, unsigned int bodyId, float *mass)
{
  ?Physics_GetRigidBodyDynamicMass@@YAXW4Physics_WorldId@@IPEAM@Z(worldId, bodyId, mass);
}

/*
==============
Physics_AddPhysicsAssetShapesToInstanceList
==============
*/

unsigned int __fastcall Physics_AddPhysicsAssetShapesToInstanceList(const PhysicsAsset *physicsAsset, const vec3_t *origin, const float scale, const vec4_t *orientation, hkArray<hknpShapeInstance,hkContainerHeapAllocator> *instanceArray)
{
  return ?Physics_AddPhysicsAssetShapesToInstanceList@@YAIPEBUPhysicsAsset@@AEBTvec3_t@@MAEBTvec4_t@@PEAV?$hkArray@UhknpShapeInstance@@UhkContainerHeapAllocator@@@@@Z(physicsAsset, origin, scale, orientation, instanceArray);
}

/*
==============
Physics_CreateShapeSphere
==============
*/

hknpShape *__fastcall Physics_CreateShapeSphere(const vec3_t *center, float radius, char *optionalInplaceBuffer, int optionalInplaceBufferSize)
{
  return ?Physics_CreateShapeSphere@@YAPEAVhknpShape@@AEBTvec3_t@@MPEADH@Z(center, radius, optionalInplaceBuffer, optionalInplaceBufferSize);
}

/*
==============
Physics_GetGlassIdFromUserData
==============
*/

unsigned __int16 __fastcall Physics_GetGlassIdFromUserData(unsigned __int64 userData)
{
  return ?Physics_GetGlassIdFromUserData@@YAG_K@Z(userData);
}

/*
==============
Physics_CopyPhysicsSFXEventAsset
==============
*/

void __fastcall Physics_CopyPhysicsSFXEventAsset(PhysicsSFXEventAsset *from, PhysicsSFXEventAsset *to)
{
  ?Physics_CopyPhysicsSFXEventAsset@@YAXPEAUPhysicsSFXEventAsset@@0@Z(from, to);
}

/*
==============
Physics_SetNoBroadphaseQueriesAllowed
==============
*/

void __fastcall Physics_SetNoBroadphaseQueriesAllowed(Physics_WorldId worldId, bool noQueriesAllowed)
{
  ?Physics_SetNoBroadphaseQueriesAllowed@@YAXW4Physics_WorldId@@_N@Z(worldId, noQueriesAllowed);
}

/*
==============
Physics_UpdateBroadphase
==============
*/

void __fastcall Physics_UpdateBroadphase(Physics_WorldId worldId, bool updateAll)
{
  ?Physics_UpdateBroadphase@@YAXW4Physics_WorldId@@_N@Z(worldId, updateAll);
}

/*
==============
Physics_AddInstanceContents
==============
*/

void __fastcall Physics_AddInstanceContents(Physics_WorldId worldId, unsigned int instanceId, int contents)
{
  ?Physics_AddInstanceContents@@YAXW4Physics_WorldId@@IH@Z(worldId, instanceId, contents);
}

/*
==============
Physics_OnThreadShutdown
==============
*/

void __fastcall Physics_OnThreadShutdown(unsigned int threadId)
{
  ?Physics_OnThreadShutdown@@YAXI@Z(threadId);
}

/*
==============
Physics_AreClientWorldsCreated
==============
*/

bool __fastcall Physics_AreClientWorldsCreated(LocalClientNum_t localClientNum)
{
  return ?Physics_AreClientWorldsCreated@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
Physics_GetWireframeGeometry
==============
*/

void __fastcall Physics_GetWireframeGeometry(hknpShape *shape, vec3_t *pointArray, int pointArraySize, int *numLines)
{
  ?Physics_GetWireframeGeometry@@YAXPEAVhknpShape@@PEATvec3_t@@HPEAH@Z(shape, pointArray, pointArraySize, numLines);
}

/*
==============
Physics_GetPhysicsAssetConstraintCount
==============
*/

int __fastcall Physics_GetPhysicsAssetConstraintCount(const PhysicsAsset *physicsAsset)
{
  return ?Physics_GetPhysicsAssetConstraintCount@@YAHPEBUPhysicsAsset@@@Z(physicsAsset);
}

/*
==============
Physics_GetFixedMemoryPoolUsage
==============
*/

double __fastcall Physics_GetFixedMemoryPoolUsage(Physics_WorldId worldId)
{
  double result; 

  *(float *)&result = ?Physics_GetFixedMemoryPoolUsage@@YAMW4Physics_WorldId@@@Z(worldId);
  return result;
}

/*
==============
Physics_IsPredictiveWorld
==============
*/

bool __fastcall Physics_IsPredictiveWorld(Physics_WorldId worldId)
{
  return ?Physics_IsPredictiveWorld@@YA_NW4Physics_WorldId@@@Z(worldId);
}

/*
==============
Physics_DeferredGetClosestPoints
==============
*/

void __fastcall Physics_DeferredGetClosestPoints(Physics_WorldId worldId, unsigned int bodyId, hknpShape *shape, const vec3_t *point, const vec4_t *rotation, float maxDistance, Physics_GetClosestPointsExtendedData *extendedData, Physics_DeferredCollisionQueryData *data)
{
  ?Physics_DeferredGetClosestPoints@@YAXW4Physics_WorldId@@IPEAVhknpShape@@AEBTvec3_t@@AEBTvec4_t@@MPEAUPhysics_GetClosestPointsExtendedData@@PEAUPhysics_DeferredCollisionQueryData@@@Z(worldId, bodyId, shape, point, rotation, maxDistance, extendedData, data);
}

/*
==============
Physics_IsPhysicsAssetDynamic
==============
*/

bool __fastcall Physics_IsPhysicsAssetDynamic(const PhysicsAsset *physicsAsset)
{
  return ?Physics_IsPhysicsAssetDynamic@@YA_NPEBUPhysicsAsset@@@Z(physicsAsset);
}

/*
==============
Physics_GetPhysicsAssetConstraintBodyIds
==============
*/

void __fastcall Physics_GetPhysicsAssetConstraintBodyIds(const PhysicsAsset *physicsAsset, int constraintIdx, int *bodyId1, int *bodyId2)
{
  ?Physics_GetPhysicsAssetConstraintBodyIds@@YAXPEBUPhysicsAsset@@HPEAH1@Z(physicsAsset, constraintIdx, bodyId1, bodyId2);
}

/*
==============
Physics_GetClosestPoints
==============
*/

void __fastcall Physics_GetClosestPoints(Physics_WorldId worldId, hknpShape *shape, const vec3_t *point, const vec4_t *rotation, float maxDistance, Physics_GetClosestPointsExtendedData *extendedData, HavokPhysics_CollisionQueryResult *result)
{
  ?Physics_GetClosestPoints@@YAXW4Physics_WorldId@@PEAVhknpShape@@AEBTvec3_t@@AEBTvec4_t@@MPEAUPhysics_GetClosestPointsExtendedData@@PEAVHavokPhysics_CollisionQueryResult@@@Z(worldId, shape, point, rotation, maxDistance, extendedData, result);
}

/*
==============
Physics_DoCmd_StepWorldDetail
==============
*/

void __fastcall Physics_DoCmd_StepWorldDetail(const void *const cmdInfo)
{
  ?Physics_DoCmd_StepWorldDetail@@YAXQEBX@Z(cmdInfo);
}

/*
==============
Physics_SetDebugCameras
==============
*/

void __fastcall Physics_SetDebugCameras(const GfxViewInfo *viewInfo)
{
  ?Physics_SetDebugCameras@@YAXPEBUGfxViewInfo@@@Z(viewInfo);
}

/*
==============
Physics_InstantiateAsset
==============
*/

unsigned int __fastcall Physics_InstantiateAsset(Physics_WorldId worldId, const XModel *baseModel, const PhysicsAsset *physicsAsset, int ref, const vec3_t *position, const vec4_t *orientationAsQuat, bool add, bool forceAddImmediate, bool tryStartDeactivated, Physics_InstantiateShapeOverride *shapeOverride, Physics_InstantiationForceType forceType, Physics_InstantiationFilterType filterType, bool forQueryOnly)
{
  return ?Physics_InstantiateAsset@@YAIW4Physics_WorldId@@PEBUXModel@@PEBUPhysicsAsset@@HAEBTvec3_t@@AEBTvec4_t@@_N55PEAUPhysics_InstantiateShapeOverride@@W4Physics_InstantiationForceType@@W4Physics_InstantiationFilterType@@5@Z(worldId, baseModel, physicsAsset, ref, position, orientationAsQuat, add, forceAddImmediate, tryStartDeactivated, shapeOverride, forceType, filterType, forQueryOnly);
}

/*
==============
Physics_ApplyBulletForce
==============
*/

void __fastcall Physics_ApplyBulletForce(const Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, const unsigned int inflictorEntNum, const bool isMelee, const Weapon *weapon, bool isAlternate, int mod, void (__fastcall *effectCallback)(const LocalClientNum_t, unsigned int, unsigned int, const vec3_t *, const vec3_t *, const int, const vec3_t *, const scr_string_t *, const unsigned int, const Weapon *, bool, int))
{
  ?Physics_ApplyBulletForce@@YAXW4Physics_WorldId@@AEBTvec3_t@@1I_NAEBUWeapon@@_NHP6AXW4LocalClientNum_t@@II11H1PEBW4scr_string_t@@I34H@Z@Z(worldId, start, end, inflictorEntNum, isMelee, weapon, isAlternate, mod, effectCallback);
}

/*
==============
Physics_DoCmd_StepWorldFX
==============
*/

void __fastcall Physics_DoCmd_StepWorldFX(const void *const cmdInfo)
{
  ?Physics_DoCmd_StepWorldFX@@YAXQEBX@Z(cmdInfo);
}

/*
==============
Physics_GetNumShapeNamesInShapeList
==============
*/

int __fastcall Physics_GetNumShapeNamesInShapeList(HavokPhysicsShapeList *shapeList)
{
  return ?Physics_GetNumShapeNamesInShapeList@@YAHPEAVHavokPhysicsShapeList@@@Z(shapeList);
}

/*
==============
Physics_GetSurfaceFlagsFromUserData
==============
*/

unsigned int __fastcall Physics_GetSurfaceFlagsFromUserData(unsigned __int64 userData)
{
  return ?Physics_GetSurfaceFlagsFromUserData@@YAI_K@Z(userData);
}

/*
==============
Physics_Raycast
==============
*/

void __fastcall Physics_Raycast(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, HavokPhysics_CollisionQueryResult *result)
{
  ?Physics_Raycast@@YAXW4Physics_WorldId@@IAEBTvec3_t@@1PEAUPhysics_RaycastExtendedData@@PEAVHavokPhysics_CollisionQueryResult@@@Z(worldId, bodyId, start, end, extendedData, result);
}

/*
==============
Physics_GetShapeTriCountFromShapeList
==============
*/

int __fastcall Physics_GetShapeTriCountFromShapeList(HavokPhysicsShapeList *shapeList, unsigned int shapeIdx)
{
  return ?Physics_GetShapeTriCountFromShapeList@@YAHPEAVHavokPhysicsShapeList@@I@Z(shapeList, shapeIdx);
}

/*
==============
Physics_UpdateWorld
==============
*/

void __fastcall Physics_UpdateWorld(Physics_WorldId worldId, bool syncStats)
{
  ?Physics_UpdateWorld@@YAXW4Physics_WorldId@@_N@Z(worldId, syncStats);
}

/*
==============
Physics_GetNoBroadphaseQueriesAllowed
==============
*/

bool __fastcall Physics_GetNoBroadphaseQueriesAllowed(Physics_WorldId worldId)
{
  return ?Physics_GetNoBroadphaseQueriesAllowed@@YA_NW4Physics_WorldId@@@Z(worldId);
}

/*
==============
Physics_GetInstanceAsset
==============
*/

const PhysicsAsset *__fastcall Physics_GetInstanceAsset(Physics_WorldId worldId, unsigned int instanceId)
{
  return ?Physics_GetInstanceAsset@@YAPEBUPhysicsAsset@@W4Physics_WorldId@@I@Z(worldId, instanceId);
}

/*
==============
Physics_GetDetailCollisionShapeCount
==============
*/

int __fastcall Physics_GetDetailCollisionShapeCount(const XModelDetailCollision *detailCollision)
{
  return ?Physics_GetDetailCollisionShapeCount@@YAHPEBUXModelDetailCollision@@@Z(detailCollision);
}

/*
==============
Physics_CreateShapeCube
==============
*/

hknpShape *__fastcall Physics_CreateShapeCube(const vec3_t *center, float halfSize)
{
  return ?Physics_CreateShapeCube@@YAPEAVhknpShape@@AEBTvec3_t@@M@Z(center, halfSize);
}

/*
==============
Physics_IsAuthoritativeWorld
==============
*/

bool __fastcall Physics_IsAuthoritativeWorld(Physics_WorldId worldId)
{
  return ?Physics_IsAuthoritativeWorld@@YA_NW4Physics_WorldId@@@Z(worldId);
}

/*
==============
Physics_EnableShapeInstance
==============
*/

void __fastcall Physics_EnableShapeInstance(Physics_WorldId worldId, unsigned int bodyId, unsigned __int16 shapeInstanceId, bool enabled)
{
  ?Physics_EnableShapeInstance@@YAXW4Physics_WorldId@@IG_N@Z(worldId, bodyId, shapeInstanceId, enabled);
}

/*
==============
Physics_SetThreadHeapAllocationMapLocal
==============
*/

void __fastcall Physics_SetThreadHeapAllocationMapLocal(unsigned int threadId)
{
  ?Physics_SetThreadHeapAllocationMapLocal@@YAXI@Z(threadId);
}

/*
==============
Physics_GetRigidBodyName
==============
*/

const char *__fastcall Physics_GetRigidBodyName(Physics_WorldId worldId, unsigned int bodyId)
{
  return ?Physics_GetRigidBodyName@@YAPEBDW4Physics_WorldId@@I@Z(worldId, bodyId);
}

/*
==============
Physics_KeyframeRigidBodyTo
==============
*/

Physics_MovementType __fastcall Physics_KeyframeRigidBodyTo(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *position, const vec4_t *orientationAsQuat, float velocityScale, bool canWarp, bool updateBroadphaseIfWarping, float stepTimeOverride)
{
  return ?Physics_KeyframeRigidBodyTo@@YA?AW4Physics_MovementType@@W4Physics_WorldId@@IAEBTvec3_t@@AEBTvec4_t@@M_N3M@Z(worldId, bodyId, position, orientationAsQuat, velocityScale, canWarp, updateBroadphaseIfWarping, stepTimeOverride);
}

/*
==============
Physics_SetRigidBodyContents
==============
*/

void __fastcall Physics_SetRigidBodyContents(Physics_WorldId worldId, unsigned int instanceId, unsigned int bodyIdx, int contents, bool forceCacheRebuild)
{
  ?Physics_SetRigidBodyContents@@YAXW4Physics_WorldId@@IIH_N@Z(worldId, instanceId, bodyIdx, contents, forceCacheRebuild);
}

/*
==============
Physics_GetPhysicsAssetBodyCount
==============
*/

int __fastcall Physics_GetPhysicsAssetBodyCount(const PhysicsAsset *physicsAsset)
{
  return ?Physics_GetPhysicsAssetBodyCount@@YAHPEBUPhysicsAsset@@@Z(physicsAsset);
}

/*
==============
Physics_DoCmd_StepWorldSolve
==============
*/

void __fastcall Physics_DoCmd_StepWorldSolve(const void *const cmdInfo)
{
  ?Physics_DoCmd_StepWorldSolve@@YAXQEBX@Z(cmdInfo);
}

/*
==============
Physics_ConvertRayQueryResultToLegacyTrace
==============
*/

void __fastcall Physics_ConvertRayQueryResultToLegacyTrace(HavokPhysics_CollisionQueryResult *traceResult, HavokPhysics_CollisionQueryResult *queryResult, const Physics_DetailHitData *detailHitData, trace_t *trace)
{
  ?Physics_ConvertRayQueryResultToLegacyTrace@@YAXPEAVHavokPhysics_CollisionQueryResult@@0PEBUPhysics_DetailHitData@@PEAUtrace_t@@@Z(traceResult, queryResult, detailHitData, trace);
}

/*
==============
Physics_BatchRaycast
==============
*/

void __fastcall Physics_BatchRaycast(Physics_WorldId worldId, unsigned int numRays, const vec3_t *starts, const vec3_t *ends, Physics_RaycastExtendedData *extendedData, HavokPhysics_CollisionQueryResult **results)
{
  ?Physics_BatchRaycast@@YAXW4Physics_WorldId@@IPEBTvec3_t@@1PEAUPhysics_RaycastExtendedData@@PEAPEAVHavokPhysics_CollisionQueryResult@@@Z(worldId, numRays, starts, ends, extendedData, results);
}

/*
==============
Physics_SubscribeToTriggerEvent
==============
*/

void __fastcall Physics_SubscribeToTriggerEvent(Physics_WorldId worldId, unsigned int bodyId)
{
  ?Physics_SubscribeToTriggerEvent@@YAXW4Physics_WorldId@@I@Z(worldId, bodyId);
}

/*
==============
Physics_AddDebugLine
==============
*/

void __fastcall Physics_AddDebugLine(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, const vec4_t *color)
{
  ?Physics_AddDebugLine@@YAXW4Physics_WorldId@@AEBTvec3_t@@1AEBTvec4_t@@@Z(worldId, start, end, color);
}

/*
==============
Physics_Shutdown
==============
*/

void Physics_Shutdown(void)
{
  ?Physics_Shutdown@@YAXXZ();
}

/*
==============
Physics_GetClosestPoints
==============
*/

void __fastcall Physics_GetClosestPoints(Physics_WorldId worldId, unsigned int numBodies, unsigned int *bodyIds, hknpShape *shape, const vec3_t *point, const vec4_t *rotation, float maxDistance, Physics_GetClosestPointsExtendedData *extendedData, HavokPhysics_CollisionQueryResult *result)
{
  ?Physics_GetClosestPoints@@YAXW4Physics_WorldId@@IPEAIPEAVhknpShape@@AEBTvec3_t@@AEBTvec4_t@@MPEAUPhysics_GetClosestPointsExtendedData@@PEAVHavokPhysics_CollisionQueryResult@@@Z(worldId, numBodies, bodyIds, shape, point, rotation, maxDistance, extendedData, result);
}

/*
==============
Physics_InstantiateDetailModel
==============
*/

unsigned int __fastcall Physics_InstantiateDetailModel(Physics_WorldId worldId, const XModel *detailModel, int ref, const vec3_t *position, const vec4_t *orientationAsQuat, bool add, bool tryStartDeactivated, bool forQueryOnly, bool allowSingleBodyAddToWorld)
{
  return ?Physics_InstantiateDetailModel@@YAIW4Physics_WorldId@@PEBUXModel@@HAEBTvec3_t@@AEBTvec4_t@@_N444@Z(worldId, detailModel, ref, position, orientationAsQuat, add, tryStartDeactivated, forQueryOnly, allowSingleBodyAddToWorld);
}

/*
==============
Physics_BroadphaseUpdateServerMain
==============
*/

void __fastcall Physics_BroadphaseUpdateServerMain(Physics_WorldId worldId)
{
  GPlayerTraceInfo::ClearServerCages();
}

/*
==============
Physics_WorldBodyListChangedServerMain
==============
*/

void __fastcall Physics_WorldBodyListChangedServerMain(Physics_WorldId worldId)
{
  GPlayerTraceInfo::ClearServerCages();
}

/*
==============
Physics_PreStepWorldServerMain
==============
*/
void Physics_PreStepWorldServerMain(Physics_WorldId worldId)
{
  PhysPerfTrack_PMoveServerTimeStore();
  PhysPerfTrack_PMoveServerCountStore();
  PhysPerfTrack_PMoveServerTraceTimeStore();
  PhysPerfTrack_PMoveServerTraceCountStore();
  PhysPerfTrack_BulletServerTimeStore();
  PhysPerfTrack_BulletServerEventCountStore();
  PhysPerfTrack_BulletServerPelletCountStore();
  PhysPerfTrack_BulletServerTraceTimeStore();
  PhysPerfTrack_BulletServerTraceCountStore();
  WorldCollision_SetupTileCollision(worldId);
  StaticModels_SetupTileCollision(worldId);
  if ( !GVehicles::ms_gVehiclesSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2413, ASSERT_TYPE_ASSERT, "(GVehicles::IsVehicleSystemAllocated())", "%s\n\tPhysics_PreStepWorldServerMain, we assume a valid GVehicles system created for this world", "GVehicles::IsVehicleSystemAllocated()") )
      __debugbreak();
    if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
      __debugbreak();
  }
  GVehicles::PhysicsBeforeWorldStep(GVehicles::ms_gVehiclesSystem, worldId);
}

/*
==============
Physics_PreStepWorldClientPredictive
==============
*/
void Physics_PreStepWorldClientPredictive(Physics_WorldId worldId)
{
  LocalClientNum_t v2; 
  LocalClientNum_t v3; 
  int numVertsGeneral; 
  int v5; 
  int value; 
  int v7; 
  int v8; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  CgVehicleSystem *VehicleSystem; 

  Profile_Begin(641);
  v2 = LOCAL_CLIENT_INVALID;
  if ( (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
LABEL_19:
    v3 = LOCAL_CLIENT_INVALID;
    goto LABEL_20;
  }
  if ( worldId > PHYSICS_WORLD_ID_CLIENT0_DETAIL )
  {
    if ( worldId <= PHYSICS_WORLD_ID_CLIENT1_DETAIL )
    {
      v3 = LOCAL_CLIENT_1;
      goto LABEL_20;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1787, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid world") )
      __debugbreak();
    goto LABEL_19;
  }
  v3 = LOCAL_CLIENT_0;
  PhysPerfTrack_PMoveClientTimeStore();
  PhysPerfTrack_PMoveClientTraceTimeStore();
  PhysPerfTrack_PMoveClientCountStore();
  PhysPerfTrack_PMoveClientTraceCountStore();
  PhysPerfTrack_BulletClientTimeStore();
  PhysPerfTrack_BulletClientEventCountStore();
  PhysPerfTrack_BulletClientPelletCountStore();
  PhysPerfTrack_BulletClientTraceCountStore();
  if ( g_PhysPerfTrack_DebugData && !CL_TransientsCollisionMP_HasStreamingTiles() )
  {
    numVertsGeneral = g_PhysPerfTrack_DebugData->worldMeshDebugData.numVertsGeneral;
    v5 = numVertsGeneral + g_PhysPerfTrack_DebugData->worldMeshDebugData.numVertsCharacter;
    value = g_PhysPerfTrack_DebugData->worldMeshDebugData.numVertsTotal;
    v7 = numVertsGeneral + g_PhysPerfTrack_DebugData->worldMeshDebugData.numVertsWeapon;
    v8 = numVertsGeneral + g_PhysPerfTrack_DebugData->worldMeshDebugData.numVertsItem;
    if ( value <= 350000 )
    {
      if ( v5 <= 130000 )
      {
        if ( v7 <= 300000 )
        {
          if ( v8 > 150000 )
          {
            v12 = j_va("Sim WorldColl verts:%i max:%i", (unsigned int)v8, 150000i64);
            StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_PHYS_WORLD_GEO_SIMULATION, 3000, v12, v8);
          }
        }
        else
        {
          v11 = j_va("Weapon WorldColl verts:%i max:%i", (unsigned int)v7, 300000i64);
          StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_PHYS_WORLD_GEO_WEAPON, 3000, v11, v7);
        }
      }
      else
      {
        v10 = j_va("Player WorldColl verts:%i max:%i", (unsigned int)v5, 130000i64);
        StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_PHYS_WORLD_GEO_PMOVE, 3000, v10, v5);
      }
    }
    else
    {
      v9 = j_va("WorldColl verts:%i max:%i", (unsigned int)value, 350000i64);
      StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_PHYS_WORLD_GEO_ALL, 3000, v9, value);
    }
  }
  if ( CL_TransientsCollisionMP_HasStreamingTiles() )
  {
    WorldCollision_CheckTransientBudgets(LOCAL_CLIENT_0);
    StaticModels_CheckTransientBudgets(LOCAL_CLIENT_0);
  }
LABEL_20:
  WorldCollision_SetupTileCollision(worldId);
  StaticModels_SetupTileCollision(worldId);
  Physics_UpdateClientGravity(worldId, v3);
  Profile_Begin(642);
  CG_PhysicsObject_PreUpdatePredictiveWorld(worldId, v3);
  Profile_EndInternal(NULL);
  Profile_Begin(643);
  CG_PhysicsCharacterProxy_Update(v3, worldId, (Physics_WorldId)(3 * v3 + 3), (Physics_WorldId)(3 * v3 + 4));
  Profile_EndInternal(NULL);
  Profile_EndInternal(NULL);
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
    if ( worldId > PHYSICS_WORLD_ID_CLIENT0_DETAIL )
    {
      if ( worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1787, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid world") )
          __debugbreak();
      }
      else
      {
        v2 = LOCAL_CLIENT_1;
      }
    }
    else
    {
      v2 = LOCAL_CLIENT_0;
    }
  }
  CgPlayerTraceInfo::ClearCage(v2);
  if ( !CgVehicleSystem::IsVehicleSystemAllocated(v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2501, ASSERT_TYPE_ASSERT, "(CgVehicleSystem::IsVehicleSystemAllocated( localClientNum ))", "%s\n\tPhysics_PreStepWorldClientPredictive, we assume a valid CgVehicleSystem create for this world", "CgVehicleSystem::IsVehicleSystemAllocated( localClientNum )") )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(v3);
  CgVehicleSystem::PhysicsBeforeWorldStep(VehicleSystem, worldId);
}

/*
==============
Physics_PreStepWorldClientAuthoritative
==============
*/
void Physics_PreStepWorldClientAuthoritative(Physics_WorldId worldId)
{
  Sys_ProfBeginNamedEvent(0xFF008008, "ClientPhysicsBeforeAuthoritative");
  WorldCollision_SetupTileCollision(worldId);
  StaticModels_SetupTileCollision(worldId);
  Sys_ProfEndNamedEvent();
}

/*
==============
Physics_BeforeStepWorldServerMain
==============
*/
void Physics_BeforeStepWorldServerMain(Physics_WorldId worldId, int timePostStep, int stepIndex, int numStepsPlanned)
{
  unsigned int DebugWorldPersistantMemoryPeak; 
  int value; 
  const char *v6; 

  Profile_Begin(621);
  DebugWorldPersistantMemoryPeak = HavokPhysics_GetDebugWorldPersistantMemoryPeak(PHYSICS_WORLD_ID_FIRST);
  value = DebugWorldPersistantMemoryPeak;
  if ( DebugWorldPersistantMemoryPeak > 0x700000 )
  {
    v6 = j_va("Havok server world %i bytes - budget %i", DebugWorldPersistantMemoryPeak, 7340032i64);
    StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_HAVOKSERVERMEM, 3000, v6, value);
  }
  Profile_EndInternal(NULL);
  G_GameInterface_PhysicsBodyCapacityChecks();
}

/*
==============
Physics_BeforeUpdateWorldServerDetail
==============
*/
void Physics_BeforeUpdateWorldServerDetail(Physics_WorldId worldId)
{
  Profile_Begin(629);
  WorldCollision_SetupTileCollision(worldId);
  StaticModels_SetupTileCollision(worldId);
  Profile_Begin(630);
  G_PhysicsObject_PropagateToDetailWorld(PHYSICS_WORLD_ID_FIRST, PHYSICS_WORLD_ID_SERVER_DETAIL);
  Profile_EndInternal(NULL);
  Profile_Begin(631);
  G_PhysicsCharacterProxy_PropagateToDetailWorld();
  Profile_EndInternal(NULL);
  Profile_EndInternal(NULL);
}

/*
==============
Physics_BeforeUpdateWorldClientDetail
==============
*/
void Physics_BeforeUpdateWorldClientDetail(Physics_WorldId worldId)
{
  LocalClientNum_t v2; 

  if ( (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
    goto LABEL_8;
  if ( worldId > PHYSICS_WORLD_ID_CLIENT0_DETAIL )
  {
    if ( worldId <= PHYSICS_WORLD_ID_CLIENT1_DETAIL )
    {
      v2 = LOCAL_CLIENT_1;
      goto LABEL_9;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1787, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid world") )
      __debugbreak();
LABEL_8:
    v2 = LOCAL_CLIENT_INVALID;
    goto LABEL_9;
  }
  v2 = LOCAL_CLIENT_0;
LABEL_9:
  Profile_Begin(666);
  WorldCollision_SetupTileCollision(worldId);
  StaticModels_SetupTileCollision(worldId);
  Profile_Begin(667);
  CG_PhysicsObject_PropagateToDetailWorld((Physics_WorldId)(3 * v2 + 3), worldId, v2);
  Profile_EndInternal(NULL);
  Profile_Begin(532);
  DynEnt_PropagateToDetailWorld(v2);
  Profile_EndInternal(NULL);
  Profile_Begin(668);
  FX_PropagateToDetailWorld(v2);
  Profile_EndInternal(NULL);
  Profile_Begin(671);
  Glass_PropagateToDetailWorld(v2);
  Profile_EndInternal(NULL);
  CG_ClientModel_Physics_PropagateToDetailWorld(v2);
  Profile_EndInternal(NULL);
}

/*
==============
Physics_BeforeStepWorldClientAuthoritative
==============
*/
void Physics_BeforeStepWorldClientAuthoritative(Physics_WorldId worldId, int timePostStep, int stepIndex, int numStepsPlanned, float stepTimeOverride)
{
  signed int v6; 
  Physics_WorldId v7; 

  if ( (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
    goto LABEL_8;
  if ( worldId > PHYSICS_WORLD_ID_CLIENT0_DETAIL )
  {
    if ( worldId <= PHYSICS_WORLD_ID_CLIENT1_DETAIL )
    {
      v6 = 1;
      goto LABEL_9;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1787, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid world") )
      __debugbreak();
LABEL_8:
    v6 = -1;
    goto LABEL_9;
  }
  v6 = 0;
LABEL_9:
  Profile_Begin(658);
  Profile_Begin(659);
  Physics_UpdateClientGravity(worldId, (LocalClientNum_t)v6);
  Profile_EndInternal(NULL);
  Profile_Begin(660);
  CG_PhysicsObject_Propagate((Physics_WorldId)(3 * v6 + 2), worldId, (LocalClientNum_t)v6, 1);
  Profile_EndInternal(NULL);
  CG_ClientModel_Physics_PreStepWorld((const LocalClientNum_t)v6);
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7737, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to process deferred force when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v7 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7738, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to process deferred force with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v7) )
      __debugbreak();
  }
  HavokPhysics_ProcessDeferredForce(worldId);
  DynEnt_PrePhysicsUpdate((LocalClientNum_t)v6);
  Cloth_Update_PhysicsProxies(v6);
  Profile_EndInternal(NULL);
}

/*
==============
Physics_AfterStepWorldServerMain
==============
*/
void Physics_AfterStepWorldServerMain(Physics_WorldId worldId, int stepIndex, int numStepsPlanned)
{
  if ( stepIndex >= numStepsPlanned - 1 )
  {
    Sys_ProfBeginNamedEvent(0xFF008008, "ServerPhysicsStepWorldEndClearCaches");
    PhysicsGravityModifier_ClearCache(worldId);
    PhysicsForceAction_ClearCache(worldId);
    Sys_ProfEndNamedEvent();
    if ( !GVehicles::ms_gVehiclesSystem )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2664, ASSERT_TYPE_ASSERT, "(GVehicles::IsVehicleSystemAllocated())", "%s\n\tPhysics_AfterStepWorldServerMain, we assume a valid GVehicles system created for this world", "GVehicles::IsVehicleSystemAllocated()") )
        __debugbreak();
      if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
        __debugbreak();
    }
    GVehicles::PhysicsAfterWorldStep(GVehicles::ms_gVehiclesSystem, worldId);
  }
}

/*
==============
Physics_AfterStepWorldClientAuthoritative
==============
*/
void Physics_AfterStepWorldClientAuthoritative(Physics_WorldId worldId, int stepIndex, int numStepsPlanned)
{
  PhysicsGravityModifier_ClearCache(worldId);
  PhysicsForceAction_ClearCache(worldId);
}

/*
==============
Physics_AfterStepWorldClientPredictive
==============
*/
void Physics_AfterStepWorldClientPredictive(Physics_WorldId worldId, int stepIndex, int numStepsPlanned)
{
  LocalClientNum_t v4; 
  CgVehicleSystem *VehicleSystem; 

  PhysicsGravityModifier_ClearCache(worldId);
  PhysicsForceAction_ClearCache(worldId);
  if ( (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
    goto LABEL_8;
  if ( worldId > PHYSICS_WORLD_ID_CLIENT0_DETAIL )
  {
    if ( worldId <= PHYSICS_WORLD_ID_CLIENT1_DETAIL )
    {
      v4 = LOCAL_CLIENT_1;
      goto LABEL_9;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1787, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid world") )
      __debugbreak();
LABEL_8:
    v4 = LOCAL_CLIENT_INVALID;
    goto LABEL_9;
  }
  v4 = LOCAL_CLIENT_0;
LABEL_9:
  if ( !CgVehicleSystem::IsVehicleSystemAllocated(v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2690, ASSERT_TYPE_ASSERT, "(CgVehicleSystem::IsVehicleSystemAllocated( localClientNum ))", "%s\n\tPhysics_AfterStepWorldClientPredictive, we assume a valid CgVehicleSystem create for this world", "CgVehicleSystem::IsVehicleSystemAllocated( localClientNum )") )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(v4);
  CgVehicleSystem::PhysicsAfterWorldStep(VehicleSystem, worldId);
}

/*
==============
Physics_StepWorldPhysicsObjectsClientAuthoritative
==============
*/
void Physics_StepWorldPhysicsObjectsClientAuthoritative(Physics_WorldId worldId, int stepIndex, int numStepsPlanned)
{
  LocalClientNum_t v4; 

  if ( (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
    goto LABEL_8;
  if ( worldId > PHYSICS_WORLD_ID_CLIENT0_DETAIL )
  {
    if ( worldId <= PHYSICS_WORLD_ID_CLIENT1_DETAIL )
    {
      v4 = LOCAL_CLIENT_1;
      goto LABEL_9;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1787, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid world") )
      __debugbreak();
LABEL_8:
    v4 = LOCAL_CLIENT_INVALID;
    goto LABEL_9;
  }
  v4 = LOCAL_CLIENT_0;
LABEL_9:
  Profile_Begin(663);
  CG_PhysicsObject_PostUpdateAuthoritativeWorld(worldId, v4);
  Profile_EndInternal(NULL);
  CG_ClientModel_Physics_PostStepWorld(v4);
}

/*
==============
Physics_StepWorldPhysicsObjectsClientPredictive
==============
*/
void Physics_StepWorldPhysicsObjectsClientPredictive(Physics_WorldId worldId, int stepIndex, int numStepsPlanned)
{
  LocalClientNum_t v4; 

  if ( (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
    goto LABEL_8;
  if ( worldId > PHYSICS_WORLD_ID_CLIENT0_DETAIL )
  {
    if ( worldId <= PHYSICS_WORLD_ID_CLIENT1_DETAIL )
    {
      v4 = LOCAL_CLIENT_1;
      goto LABEL_9;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1787, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid world") )
      __debugbreak();
LABEL_8:
    v4 = LOCAL_CLIENT_INVALID;
    goto LABEL_9;
  }
  v4 = LOCAL_CLIENT_0;
LABEL_9:
  Profile_Begin(664);
  CG_PhysicsObject_PostUpdatePredictiveWorld(worldId, v4);
  Profile_EndInternal(NULL);
  CG_ClientModel_Physics_PostStepWorld(v4);
}

/*
==============
Physics_StepWorldDetailClientAuthoritative
==============
*/
void Physics_StepWorldDetailClientAuthoritative(Physics_WorldId worldId, int stepIndex, int numStepsPlanned)
{
  Physics_WorldId v3; 
  double TimeScale; 

  if ( (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
    goto LABEL_8;
  if ( worldId > PHYSICS_WORLD_ID_CLIENT0_DETAIL )
  {
    if ( worldId <= PHYSICS_WORLD_ID_CLIENT1_DETAIL )
    {
      v3 = PHYSICS_WORLD_ID_CLIENT1_DETAIL;
      goto LABEL_9;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1787, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid world") )
      __debugbreak();
LABEL_8:
    v3 = PHYSICS_WORLD_ID_SERVER_DETAIL;
    goto LABEL_9;
  }
  v3 = PHYSICS_WORLD_ID_CLIENT0_DETAIL;
LABEL_9:
  Profile_Begin(665);
  TimeScale = Com_GetTimeScale();
  Physics_PreStepWorld(v3, *(float *)&TimeScale * 0.016666668);
  Physics_UpdateWorld(v3, 0);
  Profile_EndInternal(NULL);
}

/*
==============
Physics_AABBBroadphaseQuery
==============
*/
void Physics_AABBBroadphaseQuery(Physics_WorldId worldId, const vec3_t *min, const vec3_t *max, Physics_AABBBroadphaseQueryExtendedData *extendedData, HavokPhysics_BroadphaseCollisionQueryResult *result)
{
  __int64 v8; 
  const dvar_t *v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  hkAabb v14; 

  v8 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8436, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to fire AABB Broadphase Query when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v8 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8437, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to fire aabb broadphase query with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v8) )
    __debugbreak();
  if ( ((LODWORD(min->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(min->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(min->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8438, ASSERT_TYPE_ASSERT, "(!IS_NAN( min[0] ) && !IS_NAN( min[1] ) && !IS_NAN( min[2] ))", "%s\n\tPhysics: Trying to fire aabb broadphase query with invalid start", "!IS_NAN( min[0] ) && !IS_NAN( min[1] ) && !IS_NAN( min[2] )") )
    __debugbreak();
  if ( ((LODWORD(max->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(max->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(max->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8439, ASSERT_TYPE_ASSERT, "(!IS_NAN( max[0] ) && !IS_NAN( max[1] ) && !IS_NAN( max[2] ))", "%s\n\tPhysics: Trying to fire aabb broadphase query with invalid start", "!IS_NAN( max[0] ) && !IS_NAN( max[1] ) && !IS_NAN( max[2] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8440, ASSERT_TYPE_ASSERT, "(extendedData)", "%s\n\tPhysics: Trying to fire aabb broadphase query with invalid extended data", "extendedData") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8441, ASSERT_TYPE_ASSERT, "(result)", "%s\n\tPhysics: Trying to fire aabb broadphase query with invalid result", "result") )
    __debugbreak();
  if ( g_physicsBroadphaseQueriesNotAllowedForWorld[v8] )
  {
    v9 = DVARBOOL_physics_allowQueryDisabling;
    if ( !DVARBOOL_physics_allowQueryDisabling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_allowQueryDisabling") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8442, ASSERT_TYPE_ASSERT, "(!g_physicsBroadphaseQueriesNotAllowedForWorld[worldId] || !Dvar_GetBool_Internal_DebugName( DVARBOOL_physics_allowQueryDisabling, \"physics_allowQueryDisabling\" ))", "%s\n\tCan't perform a physics query here - they have been expressly disallowed", "!g_physicsBroadphaseQueriesNotAllowedForWorld[worldId] || !Dvar_GetBool( physics_allowQueryDisabling )") )
      __debugbreak();
  }
  if ( g_physicsQueriesNotAllowedForWorld[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8443, ASSERT_TYPE_ASSERT, "(!g_physicsQueriesNotAllowedForWorld[worldId])", "%s\n\tCan't perform a physics query here - they have been expressly disallowed", "!g_physicsQueriesNotAllowedForWorld[worldId]") )
    __debugbreak();
  CG_EntityWorkers_CheckHasAnyLock_Physics();
  if ( (unsigned int)v8 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8404, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( g_physicsBroadphaseRefreshNeeded[v8] )
    Physics_UpdateBroadphase((Physics_WorldId)v8, 1);
  v10 = 0.03125 * min->v[1];
  v11 = 0.03125 * min->v[2];
  v14.m_min.m_quad.m128_f32[0] = 0.03125 * min->v[0];
  v12 = 0.03125 * max->v[1];
  v14.m_min.m_quad.m128_f32[1] = v10;
  v13 = 0.03125 * max->v[2];
  v14.m_min.m_quad.m128_f32[2] = v11;
  v14.m_max.m_quad.m128_f32[0] = 0.03125 * max->v[0];
  v14.m_max.m_quad.m128_f32[1] = v12;
  v14.m_max.m_quad.m128_f32[2] = v13;
  v14.m_min.m_quad.m128_f32[3] = 0.0;
  v14.m_max.m_quad.m128_f32[3] = 0.0;
  switch ( (int)v8 )
  {
    case 0:
      Profile_Begin(692);
      break;
    case 1:
      Profile_Begin(693);
      break;
    case 2:
    case 5:
      Profile_Begin(694);
      break;
    case 3:
    case 6:
      Profile_Begin(695);
      break;
    case 4:
    case 7:
      Profile_Begin(696);
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8499, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown world id") )
        __debugbreak();
      break;
  }
  HavokPhysics_AABBBroadphaseQuery((Physics_WorldId)v8, &v14, extendedData, result);
  Profile_EndInternal(NULL);
}

/*
==============
Physics_AABBQuery
==============
*/
void Physics_AABBQuery(Physics_WorldId worldId, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, HavokPhysics_CollisionQueryResult *result)
{
  __int64 v8; 
  const dvar_t *v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  hkAabb v14; 

  v8 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8538, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to fire AABB Query when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v8 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8539, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to fire aabb query with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v8) )
    __debugbreak();
  if ( ((LODWORD(min->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(min->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(min->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8540, ASSERT_TYPE_ASSERT, "(!IS_NAN( min[0] ) && !IS_NAN( min[1] ) && !IS_NAN( min[2] ))", "%s\n\tPhysics: Trying to fire aabb query with invalid start", "!IS_NAN( min[0] ) && !IS_NAN( min[1] ) && !IS_NAN( min[2] )") )
    __debugbreak();
  if ( ((LODWORD(max->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(max->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(max->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8541, ASSERT_TYPE_ASSERT, "(!IS_NAN( max[0] ) && !IS_NAN( max[1] ) && !IS_NAN( max[2] ))", "%s\n\tPhysics: Trying to fire aabb query with invalid start", "!IS_NAN( max[0] ) && !IS_NAN( max[1] ) && !IS_NAN( max[2] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8542, ASSERT_TYPE_ASSERT, "(extendedData)", "%s\n\tPhysics: Trying to fire aabb query with invalid extended data", "extendedData") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8543, ASSERT_TYPE_ASSERT, "(result)", "%s\n\tPhysics: Trying to fire aabb query with invalid result", "result") )
    __debugbreak();
  if ( g_physicsBroadphaseQueriesNotAllowedForWorld[v8] )
  {
    v9 = DVARBOOL_physics_allowQueryDisabling;
    if ( !DVARBOOL_physics_allowQueryDisabling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_allowQueryDisabling") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8544, ASSERT_TYPE_ASSERT, "(!g_physicsBroadphaseQueriesNotAllowedForWorld[worldId] || !Dvar_GetBool_Internal_DebugName( DVARBOOL_physics_allowQueryDisabling, \"physics_allowQueryDisabling\" ))", "%s\n\tCan't perform a physics query here - they have been expressly disallowed", "!g_physicsBroadphaseQueriesNotAllowedForWorld[worldId] || !Dvar_GetBool( physics_allowQueryDisabling )") )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasAnyLock_Physics();
  if ( (unsigned int)v8 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8404, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( g_physicsBroadphaseRefreshNeeded[v8] )
    Physics_UpdateBroadphase((Physics_WorldId)v8, 1);
  v10 = 0.03125 * min->v[1];
  v11 = 0.03125 * min->v[2];
  v14.m_min.m_quad.m128_f32[0] = 0.03125 * min->v[0];
  v12 = 0.03125 * max->v[1];
  v14.m_min.m_quad.m128_f32[1] = v10;
  v13 = 0.03125 * max->v[2];
  v14.m_min.m_quad.m128_f32[2] = v11;
  v14.m_max.m_quad.m128_f32[0] = 0.03125 * max->v[0];
  v14.m_max.m_quad.m128_f32[1] = v12;
  v14.m_max.m_quad.m128_f32[2] = v13;
  v14.m_min.m_quad.m128_f32[3] = 0.0;
  v14.m_max.m_quad.m128_f32[3] = 0.0;
  switch ( (int)v8 )
  {
    case 0:
      Profile_Begin(697);
      break;
    case 1:
      Profile_Begin(698);
      break;
    case 2:
    case 5:
      Profile_Begin(699);
      break;
    case 3:
    case 6:
      Profile_Begin(700);
      break;
    case 4:
    case 7:
      Profile_Begin(701);
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8600, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown world id") )
        __debugbreak();
      break;
  }
  HavokPhysics_AABBQuery((Physics_WorldId)v8, &v14, extendedData, result);
  Profile_EndInternal(NULL);
}

/*
==============
Physics_AABBQuery
==============
*/
void Physics_AABBQuery(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, HavokPhysics_CollisionQueryResult *result)
{
  __int64 v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  __int64 v14; 
  hkAabb v15; 

  v9 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9187, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to fire AABB Query when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v9 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9188, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to fire aabb query against body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v9) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v14) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9189, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to fire aabb query against body with invalid body id %i", "Physics_IsRigidBodyIdValid( bodyId )", v14) )
      __debugbreak();
  }
  if ( ((LODWORD(min->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(min->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(min->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9190, ASSERT_TYPE_ASSERT, "(!IS_NAN( min[0] ) && !IS_NAN( min[1] ) && !IS_NAN( min[2] ))", "%s\n\tPhysics: Trying to fire aabb query against body with invalid start", "!IS_NAN( min[0] ) && !IS_NAN( min[1] ) && !IS_NAN( min[2] )") )
    __debugbreak();
  if ( ((LODWORD(max->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(max->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(max->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9191, ASSERT_TYPE_ASSERT, "(!IS_NAN( max[0] ) && !IS_NAN( max[1] ) && !IS_NAN( max[2] ))", "%s\n\tPhysics: Trying to fire aabb query against body with invalid start", "!IS_NAN( max[0] ) && !IS_NAN( max[1] ) && !IS_NAN( max[2] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9192, ASSERT_TYPE_ASSERT, "(extendedData)", "%s\n\tPhysics: Trying to fire aabb query against body with invalid extended data", "extendedData") )
    __debugbreak();
  if ( extendedData->ignoreBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9193, ASSERT_TYPE_ASSERT, "(!extendedData->ignoreBodies)", "%s\n\tPhysics: Trying to fire aabb query against body with ignore bodies", "!extendedData->ignoreBodies") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9194, ASSERT_TYPE_ASSERT, "(result)", "%s\n\tPhysics: Trying to fire aabb query against body with invalid result", "result") )
    __debugbreak();
  if ( g_physicsQueriesNotAllowedForWorld[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9195, ASSERT_TYPE_ASSERT, "(!g_physicsQueriesNotAllowedForWorld[worldId])", "%s\n\tCan't perform a physics query here - they have been expressly disallowed", "!g_physicsQueriesNotAllowedForWorld[worldId]") )
    __debugbreak();
  CG_EntityWorkers_CheckHasAnyLock_Physics();
  v10 = 0.03125 * min->v[1];
  v11 = 0.03125 * min->v[2];
  v15.m_min.m_quad.m128_f32[0] = 0.03125 * min->v[0];
  v12 = 0.03125 * max->v[1];
  v15.m_min.m_quad.m128_f32[1] = v10;
  v13 = 0.03125 * max->v[2];
  v15.m_min.m_quad.m128_f32[2] = v11;
  v15.m_max.m_quad.m128_f32[0] = 0.03125 * max->v[0];
  v15.m_max.m_quad.m128_f32[1] = v12;
  v15.m_max.m_quad.m128_f32[2] = v13;
  v15.m_min.m_quad.m128_f32[3] = 0.0;
  v15.m_max.m_quad.m128_f32[3] = 0.0;
  switch ( (int)v9 )
  {
    case 0:
      Profile_Begin(727);
      break;
    case 1:
      Profile_Begin(728);
      break;
    case 2:
    case 5:
      Profile_Begin(729);
      break;
    case 3:
    case 6:
      Profile_Begin(730);
      break;
    case 4:
    case 7:
      Profile_Begin(731);
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9245, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown world id") )
        __debugbreak();
      break;
  }
  HavokPhysics_AABBQuery((Physics_WorldId)v9, (hknpBodyId)bodyId, &v15, extendedData, result);
  Profile_EndInternal(NULL);
}

/*
==============
Physics_AccumulateAngularImpulse
==============
*/
void Physics_AccumulateAngularImpulse(const vec3_t *impulseWs, const vec3_t *atPointWs, const vec3_t *comWs, const tmat33_t<vec3_t> *invInertiaWs, vec3_t *outAngularVelWs)
{
  float v5; 
  float v6; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  vec3_t mulVec; 
  vec3_t solution; 

  v5 = atPointWs->v[0] - comWs->v[0];
  v6 = atPointWs->v[2] - comWs->v[2];
  v9 = atPointWs->v[1] - comWs->v[1];
  if ( impulseWs == &mulVec && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 1668, ASSERT_TYPE_ASSERT, "( &v1 != &cross )", (const char *)&queryFormat, "&v1 != &cross") )
    __debugbreak();
  v10 = v6 * impulseWs->v[0];
  v11 = v5 * impulseWs->v[1];
  v12 = v5 * impulseWs->v[2];
  mulVec.v[0] = (float)(v9 * impulseWs->v[2]) - (float)(v6 * impulseWs->v[1]);
  v13 = v10 - v12;
  v14 = v9 * impulseWs->v[0];
  mulVec.v[1] = v13;
  mulVec.v[2] = v11 - v14;
  MatrixVecMultiply(invInertiaWs, &mulVec, &solution);
  v15 = solution.v[1];
  outAngularVelWs->v[0] = solution.v[0] + outAngularVelWs->v[0];
  v16 = v15 + outAngularVelWs->v[1];
  v17 = solution.v[2];
  outAngularVelWs->v[1] = v16;
  outAngularVelWs->v[2] = v17 + outAngularVelWs->v[2];
}

/*
==============
Physics_AccumulateRigidBodyAngularImpulse
==============
*/
void Physics_AccumulateRigidBodyAngularImpulse(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *impulseWs, const vec3_t *atPointWs, vec3_t *outAngularVelWs)
{
  float v10; 
  float v11; 
  float v16; 
  float v17; 
  __int64 v19; 
  Physics_WorldId v20; 
  hkVector4f atPointWsa; 
  hkVector4f impulseWsa; 
  hkVector4f v23; 

  _RSI = outAngularVelWs;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6361, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to accumulate angular impulse form Rigid Body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v20 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6362, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to accumulate angular impulse form Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v20) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v19) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6363, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to accumulate angular impulse form Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v19) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  v10 = 0.03125 * impulseWs->v[1];
  v11 = 0.03125 * impulseWs->v[2];
  impulseWsa.m_quad.m128_f32[0] = 0.03125 * impulseWs->v[0];
  atPointWsa.m_quad.m128_f32[1] = 0.03125 * atPointWs->v[1];
  _XMM0 = 0i64;
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rsi], 0
    vinsertps xmm0, xmm0, dword ptr [rsi+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rsi+8], 20h ; ' '
  }
  impulseWsa.m_quad.m128_f32[1] = v10;
  v16 = 0.03125 * atPointWs->v[2];
  impulseWsa.m_quad.m128_f32[2] = v11;
  v17 = 0.03125 * atPointWs->v[0];
  v23.m_quad = _XMM0;
  impulseWsa.m_quad.m128_f32[3] = 0.0;
  atPointWsa.m_quad.m128_f32[0] = v17;
  atPointWsa.m_quad.m128_f32[2] = v16;
  atPointWsa.m_quad.m128_f32[3] = 0.0;
  HavokPhysics_AccumulateAngularImpulse(worldId, (hknpBodyId)bodyId, &impulseWsa, &atPointWsa, &v23);
  _XMM0 = v23.m_quad;
  __asm
  {
    vmovlps qword ptr [rsi], xmm0
    vextractps dword ptr [rsi+8], xmm0, 2
  }
}

/*
==============
Physics_ActivateBody
==============
*/
void Physics_ActivateBody(Physics_WorldId worldId, unsigned int bodyId)
{
  __int64 v4; 
  Physics_WorldId v5; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7830, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to activate a body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v5 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7831, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to activate a body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v5) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v4) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7832, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to activate a body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v4) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  HavokPhysics_ActivateBody(worldId, (hknpBodyId)bodyId);
}

/*
==============
Physics_AddClipMap
==============
*/
void Physics_AddClipMap(clipMap_t *clipMap)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4042, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Add ClipMap when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  HavokPhysics_AddClipMap(clipMap);
}

/*
==============
Physics_AddDebugLine
==============
*/
void Physics_AddDebugLine(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, const vec4_t *color)
{
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  unsigned int colora[4]; 
  hkVector4f enda; 
  hkVector4f starta; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 12940, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Add Debug Line when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  v8 = 0.03125 * start->v[1];
  v9 = 0.03125 * start->v[2];
  starta.m_quad.m128_f32[0] = 0.03125 * start->v[0];
  v10 = 0.03125 * end->v[1];
  starta.m_quad.m128_f32[1] = v8;
  v11 = 0.03125 * end->v[2];
  starta.m_quad.m128_f32[2] = v9;
  enda.m_quad.m128_f32[0] = 0.03125 * end->v[0];
  v12 = color->v[1];
  enda.m_quad.m128_f32[1] = v10;
  v13 = color->v[0];
  enda.m_quad.m128_f32[2] = v11;
  v14 = color->v[2];
  starta.m_quad.m128_f32[3] = 0.0;
  enda.m_quad.m128_f32[3] = 0.0;
  colora[0] = hkColor::rgbFromFloats(v13, v12, v14, color->v[3]);
  HavokPhysics_AddDebugLine(worldId, &starta, &enda, colora);
}

/*
==============
Physics_AddDeferredBulletForce
==============
*/
void Physics_AddDeferredBulletForce(const Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, const unsigned int inflictorEntNum, const bool isMelee, const Weapon *weapon, bool isAlternate, int mod, void (*effectCallback)(const LocalClientNum_t, unsigned int, unsigned int, const vec3_t *, const vec3_t *, const int, const vec3_t *, const scr_string_t *, const unsigned int, const Weapon *, bool, int))
{
  Physics_WorldId v13; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7693, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Add deferred bullet force when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v13 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7694, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Add deferred bullet force with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v13) )
      __debugbreak();
  }
  if ( ((LODWORD(start->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7695, ASSERT_TYPE_ASSERT, "(!IS_NAN( start[0] ) && !IS_NAN( start[1] ) && !IS_NAN( start[2] ))", "%s\n\tPhysics: Trying to Add deferred bullet force with invalid start", "!IS_NAN( start[0] ) && !IS_NAN( start[1] ) && !IS_NAN( start[2] )") )
    __debugbreak();
  if ( ((LODWORD(end->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7696, ASSERT_TYPE_ASSERT, "(!IS_NAN( end[0] ) && !IS_NAN( end[1] ) && !IS_NAN( end[2] ))", "%s\n\tPhysics: Trying to Add deferred bullet force with invalid end", "!IS_NAN( end[0] ) && !IS_NAN( end[1] ) && !IS_NAN( end[2] )") )
    __debugbreak();
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  HavokPhysics_AddDeferredBulletForce(worldId, start, end, inflictorEntNum, isMelee, weapon, isAlternate, mod, effectCallback);
}

/*
==============
Physics_AddDeferredKeyframeInstance
==============
*/
void Physics_AddDeferredKeyframeInstance(const Physics_WorldId worldId, const unsigned int instanceId, const vec3_t *origin, const vec4_t *orientationAsQuat)
{
  __int64 v8; 
  Physics_WorldId v9; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7678, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Add deferred keyframe when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( worldId )
  {
    if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
    {
      v9 = worldId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Request IsAuthoritativeWorld with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v9) )
        __debugbreak();
    }
    if ( worldId != PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE && worldId != PHYSICS_WORLD_ID_CLIENT1_AUTHORITATIVE )
    {
      LODWORD(v8) = worldId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7679, ASSERT_TYPE_ASSERT, "(worldId == PHYSICS_WORLD_ID_SERVER_MAIN || Physics_IsAuthoritativeWorld( worldId ))", "%s\n\tPhysics: Trying to Add deferred keyframe with invalid world index %i", "worldId == PHYSICS_WORLD_ID_SERVER_MAIN || Physics_IsAuthoritativeWorld( worldId )", v8) )
        __debugbreak();
    }
  }
  if ( ((LODWORD(origin->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(origin->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(origin->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7680, ASSERT_TYPE_ASSERT, "(!IS_NAN( origin[0] ) && !IS_NAN( origin[1] ) && !IS_NAN( origin[2] ))", "%s\n\tPhysics: Trying to Add deferred keyframe with invalid origin", "!IS_NAN( origin[0] ) && !IS_NAN( origin[1] ) && !IS_NAN( origin[2] )") )
    __debugbreak();
  if ( ((LODWORD(orientationAsQuat->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7681, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Add deferred keyframe with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
    __debugbreak();
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  HavokPhysics_AddDeferredKeyframeInstance(worldId, instanceId, origin, orientationAsQuat);
}

/*
==============
Physics_AddDeferredRadiusForce
==============
*/
void Physics_AddDeferredRadiusForce(const Physics_WorldId worldId, const vec3_t *position, const float radius, const float innerDamage, const float outerDamage, const float impulseOverride, const vec3_t *impulseVecOverride, int randSeed, float forceScalar)
{
  Physics_WorldId v11; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7708, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Add deferred radius force when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v11 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7709, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Add deferred radius force with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v11) )
      __debugbreak();
  }
  if ( ((LODWORD(position->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7710, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Add deferred radius force with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
    __debugbreak();
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  HavokPhysics_AddDeferredRadiusForce(worldId, position, radius, innerDamage, outerDamage, impulseOverride, impulseVecOverride, randSeed, forceScalar);
}

/*
==============
Physics_AddDetailCollisionShapesToInstanceList
==============
*/
unsigned int Physics_AddDetailCollisionShapesToInstanceList(const XModelDetailCollision *detailCollision, const vec3_t *origin, const float scale, const vec4_t *orientation, hkArray<hknpShapeInstance,hkContainerHeapAllocator> *instanceArray)
{
  float v9; 
  float v10; 
  __m128 v11; 
  hkQuaternionf orientationa; 
  hkVector4f origina; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10096, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Physics_AddDetailCollisionShapesToInstanceList when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  v9 = 0.03125 * origin->v[1];
  v10 = 0.03125 * origin->v[2];
  origina.m_quad.m128_f32[0] = 0.03125 * origin->v[0];
  v11 = *(__m128 *)orientation;
  origina.m_quad.m128_f32[1] = v9;
  orientationa.m_vec.m_quad = v11;
  origina.m_quad.m128_f32[2] = v10;
  origina.m_quad.m128_f32[3] = 0.0;
  return HavokPhysics_AddDetailCollisionShapesToInstanceList(detailCollision, &origina, scale, &orientationa, instanceArray);
}

/*
==============
Physics_AddDetailTrace
==============
*/
void Physics_AddDetailTrace(HavokPhysics_CollisionQueryResult *result, unsigned __int8 *detailPriorityMap)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8082, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to AddDetailTrace when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8083, ASSERT_TYPE_ASSERT, "(result)", "%s\n\tPhysics: Trying to AddDetailTrace for invalid result", "result") )
    __debugbreak();
  HavokPhysics_AddDetailTrace(result, detailPriorityMap);
}

/*
==============
Physics_AddInstanceContents
==============
*/
void Physics_AddInstanceContents(Physics_WorldId worldId, unsigned int instanceId, int contents)
{
  signed int v6; 
  int NumRigidBodys; 
  __int64 v8; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6530, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Add Instance contents when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6531, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Add Instance contents with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( instanceId == -1 )
  {
    LODWORD(v8) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6532, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Add Instance contents with invalid instance %i", "instanceId != PHYSICSINSTANCEID_INVALID", v8) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  v6 = 0;
  NumRigidBodys = Physics_GetNumRigidBodys(worldId, instanceId);
  if ( NumRigidBodys > 0 )
  {
    do
      Physics_AddRigidBodyContents(worldId, instanceId, v6++, contents, 0);
    while ( v6 < NumRigidBodys );
  }
}

/*
==============
Physics_AddInstanceToWorld
==============
*/
void Physics_AddInstanceToWorld(Physics_WorldId worldId, unsigned int instanceId, bool immediate, bool tryStartDeactivated)
{
  __int64 v8; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5926, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to add instance to world when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5927, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to add instance to world with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( instanceId == -1 )
  {
    LODWORD(v8) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5928, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to add instance to world with invalid instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v8) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  HavokPhysics_AddInstanceToWorld(worldId, instanceId, immediate, tryStartDeactivated);
}

/*
==============
Physics_AddPendingBodies
==============
*/
void Physics_AddPendingBodies(Physics_WorldId worldId)
{
  __int64 v2; 
  Physics_WorldId v3; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5785, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Add Pending Bodies when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v3 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5786, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Add Pending Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v3) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
  {
    LODWORD(v2) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5787, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Add Pending Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v2) )
      __debugbreak();
  }
  if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
    LODWORD(v2) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5788, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Add Pending Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v2) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  HavokPhysics_AddPendingBodies(worldId);
}

/*
==============
Physics_AddPhysicsAsset
==============
*/
void Physics_AddPhysicsAsset(PhysicsAsset *physicsAsset)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3665, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Add PhysicsAsset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  HavokPhysics_AddPhysicsAsset(physicsAsset);
}

/*
==============
Physics_AddPhysicsAssetShapesToInstanceList
==============
*/
unsigned int Physics_AddPhysicsAssetShapesToInstanceList(const PhysicsAsset *physicsAsset, const vec3_t *origin, const float scale, const vec4_t *orientation, hkArray<hknpShapeInstance,hkContainerHeapAllocator> *instanceArray)
{
  float v9; 
  float v10; 
  __m128 v11; 
  hkQuaternionf orientationa; 
  hkVector4f origina; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10079, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Physics_AddPhysicsAssetShapesToInstanceList when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  v9 = 0.03125 * origin->v[1];
  v10 = 0.03125 * origin->v[2];
  origina.m_quad.m128_f32[0] = 0.03125 * origin->v[0];
  v11 = *(__m128 *)orientation;
  origina.m_quad.m128_f32[1] = v9;
  orientationa.m_vec.m_quad = v11;
  origina.m_quad.m128_f32[2] = v10;
  origina.m_quad.m128_f32[3] = 0.0;
  return HavokPhysics_AddPhysicsAssetShapesToInstanceList(physicsAsset, &origina, scale, &orientationa, instanceArray);
}

/*
==============
Physics_AddPhysicsLibrary
==============
*/
void Physics_AddPhysicsLibrary(PhysicsLibrary *physicsLibrary)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3530, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Add PhysicsLibary when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  HavokPhysics_AddPhysicsLibrary(physicsLibrary);
}

/*
==============
Physics_AddPhysicsSFXEventAsset
==============
*/
void Physics_AddPhysicsSFXEventAsset(PhysicsSFXEventAsset *physicsSFXEventAsset)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3553, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Add physicsSFXEventAsset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  HavokPhysics_AddPhysicsSFXEventAsset(physicsSFXEventAsset);
}

/*
==============
Physics_AddPhysicsVFXEventAsset
==============
*/
void Physics_AddPhysicsVFXEventAsset(PhysicsVFXEventAsset *physicsVFXEventAsset)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3608, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Add physicsVFXEventAsset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  HavokPhysics_AddPhysicsVFXEventAsset(physicsVFXEventAsset);
}

/*
==============
Physics_AddRigidBodyContents
==============
*/
void Physics_AddRigidBodyContents(Physics_WorldId worldId, unsigned int bodyId, int contents, bool forceCacheRebuild)
{
  Physics_WorldId v8; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6571, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Add RigidBody contents when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v8 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6572, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Add RigidBody contents with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v8) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  HavokPhysics_AddRigidBodyContents(worldId, (hknpBodyId)bodyId, contents, forceCacheRebuild);
}

/*
==============
Physics_AddRigidBodyContents
==============
*/
void Physics_AddRigidBodyContents(Physics_WorldId worldId, unsigned int instanceId, unsigned int bodyIdx, int contents, bool forceCacheRebuild)
{
  hknpBodyId v9; 
  __int64 v10; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6553, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Add RigidBody contents when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6554, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Add RigidBody contents with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( instanceId == -1 )
  {
    LODWORD(v10) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6555, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Add RigidBody contents with invalid instance %i", "instanceId != PHYSICSINSTANCEID_INVALID", v10) )
      __debugbreak();
  }
  if ( bodyIdx >= Physics_GetNumRigidBodys(worldId, instanceId) )
  {
    LODWORD(v10) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6556, ASSERT_TYPE_ASSERT, "(bodyIdx < Physics_GetNumRigidBodys( worldId, instanceId ))", "%s\n\tPhysics: Trying to Add RigidBody contents with invalid bodyIdx %i %i", "bodyIdx < Physics_GetNumRigidBodys( worldId, instanceId )", v10, bodyIdx) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  v9.m_serialAndIndex = Physics_GetRigidBodyID(worldId, instanceId, bodyIdx);
  if ( (v9.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6562, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
    __debugbreak();
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6571, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Add RigidBody contents when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    LODWORD(v10) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6572, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Add RigidBody contents with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v10) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  HavokPhysics_AddRigidBodyContents(worldId, v9, contents, forceCacheRebuild);
}

/*
==============
Physics_AddRigidBodyIdToArray
==============
*/
void Physics_AddRigidBodyIdToArray(hkArray<hknpBodyId,hkContainerHeapAllocator> *array, unsigned int bodyId)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6416, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Physics_AddRigidBodyIdToArray when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !array && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6417, ASSERT_TYPE_ASSERT, "(array)", (const char *)&queryFormat, "array") )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6418, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
    __debugbreak();
  HavokPhysics_AddRigidBodyIdToArray(array, (hknpBodyId)bodyId);
}

/*
==============
Physics_AddShapeList
==============
*/
HavokPhysicsShapeList *Physics_AddShapeList(char **rawShapeData, unsigned int *rawShapeDataSize, const char *name, int type)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3816, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Add ShapeList when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !rawShapeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3818, ASSERT_TYPE_ASSERT, "(rawShapeData)", (const char *)&queryFormat, "rawShapeData") )
    __debugbreak();
  if ( !rawShapeDataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3819, ASSERT_TYPE_ASSERT, "(rawShapeDataSize)", (const char *)&queryFormat, "rawShapeDataSize") )
    __debugbreak();
  if ( !*rawShapeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3820, ASSERT_TYPE_ASSERT, "(*rawShapeData)", (const char *)&queryFormat, "*rawShapeData") )
    __debugbreak();
  if ( !*rawShapeDataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3821, ASSERT_TYPE_ASSERT, "(*rawShapeDataSize > 0)", (const char *)&queryFormat, "*rawShapeDataSize > 0") )
    __debugbreak();
  return HavokPhysics_AddShapeList(rawShapeData, rawShapeDataSize, name, type);
}

/*
==============
Physics_AddShapeReference
==============
*/

void __fastcall Physics_AddShapeReference(hknpShape *shape)
{
  HavokPhysics_AddShapeReference(shape);
}

/*
==============
Physics_AddToScene
==============
*/

void __fastcall Physics_AddToScene(LocalClientNum_t localClientNum)
{
  DynEnt_AddToScene(localClientNum);
}

/*
==============
Physics_AddXModelAsset
==============
*/
void Physics_AddXModelAsset(XModel *xmodel)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4152, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Add XModel Asset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  HavokPhysics_AddXModelAsset(xmodel);
}

/*
==============
Physics_AddXModelDetailCollisionAsset
==============
*/
void Physics_AddXModelDetailCollisionAsset(XModelDetailCollision *detailCollision)
{
  const char *name; 
  const char *v3; 
  __int64 v4; 
  signed __int64 v5; 
  char v6; 
  __int64 v7; 
  char v8; 

  if ( detailCollision->physicsLODDataSize )
  {
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4072, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Add XModel Physics LOD Asset when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    HavokPhysics_AddXModelDetailCollisionAsset(detailCollision);
  }
  else
  {
    name = detailCollision->name;
    v3 = "void";
    v4 = 0x7FFFFFFFi64;
    if ( !detailCollision->name && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    v5 = name - "void";
    do
    {
      v6 = v3[v5];
      v7 = v4;
      v8 = *v3++;
      --v4;
      if ( !v7 )
        break;
      if ( v6 != v8 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4066, ASSERT_TYPE_ASSERT, "(I_strcmp( detailCollision->name, \"void\" ) == 0)", "%s\n\tPhysics: only default 'void' physicslod should be zero sized", "I_strcmp( detailCollision->name, \"void\" ) == 0") )
          __debugbreak();
        return;
      }
    }
    while ( v6 );
  }
}

/*
==============
Physics_AllocateBroadphaseCollisionQueryResult
==============
*/
HavokPhysics_BroadphaseCollisionQueryResult *Physics_AllocateBroadphaseCollisionQueryResult(Physics_WorldId worldId)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8041, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to AllocateBroadphaseCollisionQueryResult when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  CG_EntityWorkers_CheckHasAnyLock_Physics();
  return HavokPhysics_AllocateBroadphaseCollisionQueryResult(worldId);
}

/*
==============
Physics_AllocateCollisionQueryResult
==============
*/
HavokPhysics_CollisionQueryResult *Physics_AllocateCollisionQueryResult(Physics_WorldId worldId, Physics_CollisionQueryCollectionType type)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8067, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to AllocateCollisionQueryResult when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)type > PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8068, ASSERT_TYPE_ASSERT, "(type >= 0 && type < PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_COUNT)", "%s\n\tPhysics: Trying to AllocateCollisionQueryResult for invalid type", "type >= 0 && type < PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_COUNT") )
    __debugbreak();
  CG_EntityWorkers_CheckHasAnyLock_Physics();
  return HavokPhysics_AllocateCollisionQueryResult(worldId, type);
}

/*
==============
Physics_AllocateIgnoreBodies
==============
*/
HavokPhysics_IgnoreBodies *Physics_AllocateIgnoreBodies(int minEntities, int minBodies)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8120, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to AllocateIgnoreBodies when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  return HavokPhysics_AllocateIgnoreBodies(minEntities, minBodies);
}

/*
==============
Physics_AllocateMemoryBuffer
==============
*/
char *Physics_AllocateMemoryBuffer(const unsigned __int64 size, const char *name)
{
  return (char *)PMem_Alloc(size, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, name);
}

/*
==============
Physics_AntilagRestoreInstanceTo
==============
*/
void Physics_AntilagRestoreInstanceTo(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *position, const vec4_t *orientationAsQuat)
{
  float v8; 
  float v9; 
  __int64 v14; 
  hkVector4f hkPosition; 
  hkQuaternionf hkOrientation; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6715, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Instance when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6716, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Warp Instance with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( instanceId == -1 )
  {
    LODWORD(v14) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6717, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Warp Instance with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v14) )
      __debugbreak();
  }
  if ( ((LODWORD(position->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6718, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Instance with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
    __debugbreak();
  if ( ((LODWORD(orientationAsQuat->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6719, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Instance with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
    __debugbreak();
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  v8 = 0.03125 * position->v[1];
  v9 = 0.03125 * position->v[2];
  hkPosition.m_quad.m128_f32[0] = 0.03125 * position->v[0];
  _XMM0 = LODWORD(orientationAsQuat->v[0]);
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rbx+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rbx+8], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rbx+0Ch], 30h ; '0'
  }
  hkPosition.m_quad.m128_f32[1] = v8;
  hkOrientation.m_vec.m_quad = _XMM0;
  hkPosition.m_quad.m128_f32[2] = v9;
  hkPosition.m_quad.m128_f32[3] = 0.0;
  HavokPhysics_AntilagRestoreInstanceTo(worldId, instanceId, &hkPosition, &hkOrientation);
}

/*
==============
Physics_AntilagWarpInstanceTo
==============
*/
bool Physics_AntilagWarpInstanceTo(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *position, const vec4_t *orientationAsQuat, vec3_t *restorePosition, vec4_t *restoreOrientationAsQuat)
{
  float v10; 
  float v11; 
  bool result; 
  float v17; 
  float v18; 
  vec4_t m_quad; 
  __int64 v20; 
  hkVector4f hkPosition; 
  hkQuaternionf hkRestoreOrientation; 
  hkVector4f hkRestorePosition; 
  hkQuaternionf hkOrientation; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6680, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Instance when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6681, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Warp Instance with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( instanceId == -1 )
  {
    LODWORD(v20) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6682, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Warp Instance with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v20) )
      __debugbreak();
  }
  if ( ((LODWORD(position->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6683, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Instance with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
    __debugbreak();
  if ( ((LODWORD(orientationAsQuat->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6684, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Instance with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
    __debugbreak();
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  v10 = 0.03125 * position->v[1];
  v11 = 0.03125 * position->v[2];
  hkPosition.m_quad.m128_f32[0] = 0.03125 * position->v[0];
  _XMM0 = LODWORD(orientationAsQuat->v[0]);
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rbx+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rbx+8], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rbx+0Ch], 30h ; '0'
  }
  hkPosition.m_quad.m128_f32[1] = v10;
  hkOrientation.m_vec.m_quad = _XMM0;
  hkPosition.m_quad.m128_f32[2] = v11;
  hkPosition.m_quad.m128_f32[3] = 0.0;
  result = HavokPhysics_AntilagWarpInstanceTo(worldId, instanceId, &hkPosition, &hkOrientation, &hkRestorePosition, &hkRestoreOrientation);
  if ( result )
  {
    v17 = 32.0 * hkRestorePosition.m_quad.m128_f32[0];
    v18 = 32.0 * hkRestorePosition.m_quad.m128_f32[2];
    restorePosition->v[1] = 32.0 * hkRestorePosition.m_quad.m128_f32[1];
    m_quad = (vec4_t)hkRestoreOrientation.m_vec.m_quad;
    restorePosition->v[0] = v17;
    restorePosition->v[2] = v18;
    *restoreOrientationAsQuat = m_quad;
  }
  return result;
}

/*
==============
Physics_ApplyAngularImpulse
==============
*/
void Physics_ApplyAngularImpulse(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *position, const vec3_t *normalizedDirection, float magnitude)
{
  float v9; 
  float v10; 
  __int64 v15; 
  Physics_WorldId v16; 
  hkVector4f hkPosition; 
  hkVector4f hkDirection; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7067, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Apply angular impulse to a Body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v16 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7068, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Apply angular impulse to a Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v16) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v15) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7069, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Apply angular impulse to a Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v15) )
      __debugbreak();
  }
  if ( ((LODWORD(position->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7070, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Apply angular impulse to a Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
    __debugbreak();
  if ( ((LODWORD(normalizedDirection->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(normalizedDirection->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(normalizedDirection->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7071, ASSERT_TYPE_ASSERT, "(!IS_NAN( normalizedDirection[0] ) && !IS_NAN( normalizedDirection[1] ) && !IS_NAN( normalizedDirection[2] ))", "%s\n\tPhysics: Trying to Apply angular impulse to a Body with invalid direction", "!IS_NAN( normalizedDirection[0] ) && !IS_NAN( normalizedDirection[1] ) && !IS_NAN( normalizedDirection[2] )") )
    __debugbreak();
  if ( magnitude != 0.0 && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(normalizedDirection->v[0] * normalizedDirection->v[0]) + (float)(normalizedDirection->v[1] * normalizedDirection->v[1])) + (float)(normalizedDirection->v[2] * normalizedDirection->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7072, ASSERT_TYPE_ASSERT, "(magnitude == 0.f || Vec3IsNormalized( normalizedDirection ))", "%s\n\tPhysics: Trying to Apply angular impulse to a Body with non normal direction", "magnitude == 0.f || Vec3IsNormalized( normalizedDirection )") )
    __debugbreak();
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  if ( magnitude != 0.0 )
  {
    v9 = 0.03125 * position->v[1];
    v10 = 0.03125 * position->v[2];
    hkPosition.m_quad.m128_f32[0] = 0.03125 * position->v[0];
    _XMM0 = 0i64;
    __asm
    {
      vinsertps xmm0, xmm0, dword ptr [rbx], 0
      vinsertps xmm0, xmm0, dword ptr [rbx+4], 10h
      vinsertps xmm0, xmm0, dword ptr [rbx+8], 20h ; ' '
    }
    hkDirection.m_quad = _XMM0;
    hkPosition.m_quad.m128_f32[1] = v9;
    hkPosition.m_quad.m128_f32[2] = v10;
    hkPosition.m_quad.m128_f32[3] = 0.0;
    HavokPhysics_ApplyAngularImpulse(worldId, (hknpBodyId)bodyId, &hkPosition, &hkDirection, magnitude * 0.03125);
  }
}

/*
==============
Physics_ApplyAngularImpulse
==============
*/
void Physics_ApplyAngularImpulse(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *torqueVector, float magnitude)
{
  __int64 v11; 
  Physics_WorldId v12; 
  hkVector4f hkTorqueVector; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7100, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Apply angular impulse to a Body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v12 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7101, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Apply angular impulse to a Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v12) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v11) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7102, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Apply angular impulse to a Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v11) )
      __debugbreak();
  }
  if ( ((LODWORD(torqueVector->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(torqueVector->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(torqueVector->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7103, ASSERT_TYPE_ASSERT, "(!IS_NAN( torqueVector[0] ) && !IS_NAN( torqueVector[1] ) && !IS_NAN( torqueVector[2] ))", "%s\n\tPhysics: Trying to Apply angular impulse to a Body with invalid torque vector", "!IS_NAN( torqueVector[0] ) && !IS_NAN( torqueVector[1] ) && !IS_NAN( torqueVector[2] )") )
    __debugbreak();
  if ( (LODWORD(magnitude) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7104, ASSERT_TYPE_ASSERT, "(!IS_NAN( magnitude ))", "%s\n\tPhysics: Trying to Apply angular impulse to a Body with invalid magnitude", "!IS_NAN( magnitude )") )
    __debugbreak();
  if ( magnitude == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7105, ASSERT_TYPE_ASSERT, "(magnitude != 0.f)", "%s\n\tPhysics: Trying to Apply angular impulse to a Body with 0 magnitude", "magnitude != 0.f") )
    __debugbreak();
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  if ( magnitude != 0.0 )
  {
    _XMM0 = 0i64;
    __asm
    {
      vinsertps xmm0, xmm0, dword ptr [rbx], 0
      vinsertps xmm0, xmm0, dword ptr [rbx+4], 10h
      vinsertps xmm0, xmm0, dword ptr [rbx+8], 20h ; ' '
    }
    hkTorqueVector.m_quad = _XMM0;
    HavokPhysics_ApplyAngularImpulse(worldId, (hknpBodyId)bodyId, &hkTorqueVector, magnitude * 0.03125);
  }
}

/*
==============
Physics_ApplyBulletForce
==============
*/
void Physics_ApplyBulletForce(const Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, const unsigned int inflictorEntNum, const bool isMelee, const Weapon *weapon, bool isAlternate, int mod, void (*effectCallback)(const LocalClientNum_t, unsigned int, unsigned int, const vec3_t *, const vec3_t *, const int, const vec3_t *, const scr_string_t *, const unsigned int, const Weapon *, bool, int))
{
  unsigned int HitBody; 
  hknpBodyId v14; 
  float v15; 
  float v16; 
  __int128 v17; 
  float v18; 
  scr_string_t partName; 
  int hitSurfaceFlags; 
  unsigned int shapeKey; 
  vec3_t position; 
  vec3_t hitNormal; 
  vec3_t direction; 

  Sys_ProfBeginNamedEvent(0xFF008008, "Physics_ApplyBulletForce");
  position.v[0] = 0.0;
  position.v[1] = 0.0;
  position.v[2] = 0.0;
  hitNormal.v[0] = 0.0;
  hitNormal.v[1] = 0.0;
  hitNormal.v[2] = FLOAT_1_0;
  HitBody = Physics_ApplyBulletForce_GetHitBody(worldId, start, end, inflictorEntNum, isMelee, &position, &hitSurfaceFlags, &hitNormal, &partName, &shapeKey);
  v14.m_serialAndIndex = HitBody;
  if ( (HitBody & 0xFFFFFF) != 0xFFFFFF )
  {
    v15 = end->v[0] - start->v[0];
    v17 = LODWORD(end->v[1]);
    v16 = end->v[1] - start->v[1];
    v18 = end->v[2] - start->v[2];
    *(float *)&v17 = fsqrt((float)((float)(v16 * v16) + (float)(v15 * v15)) + (float)(v18 * v18));
    _XMM1 = v17;
    __asm
    {
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm0, xmm1, xmm7, xmm0
    }
    direction.v[0] = v15 * (float)(1.0 / *(float *)&_XMM0);
    direction.v[2] = v18 * (float)(1.0 / *(float *)&_XMM0);
    direction.v[1] = v16 * (float)(1.0 / *(float *)&_XMM0);
    Physics_ApplyBulletForceBody(worldId, HitBody, &position, &direction, inflictorEntNum, isMelee);
    if ( effectCallback )
      HavokPhysics_AddDeferredBulletEffectCallback(effectCallback, worldId, v14, shapeKey, start, &position, hitSurfaceFlags, &hitNormal, &partName, inflictorEntNum, weapon, isAlternate, mod);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Physics_ApplyBulletForceBody
==============
*/
void Physics_ApplyBulletForceBody(const Physics_WorldId worldId, const unsigned int bodyId, const vec3_t *position, const vec3_t *direction)
{
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  const dvar_t *v14; 
  float value; 
  int Ref; 
  const dvar_t *v17; 
  int v18; 
  float v19; 
  const dvar_t *v20; 
  int v21; 
  unsigned __int16 v22; 
  Ragdoll *Ragdoll; 
  float v24; 
  __int64 v25; 
  float mass; 
  float v27; 

  Sys_ProfBeginNamedEvent(0xFF008008, "Physics_ApplyBulletForceBody");
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7317, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Apply bullet force when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7318, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Apply bullet force with invalid body id %i", "Physics_IsRigidBodyIdValid( bodyId )", worldId) )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    LODWORD(v25) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7319, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Apply bullet force with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v25) )
      __debugbreak();
  }
  v8 = position->v[0];
  v27 = position->v[0];
  if ( (LODWORD(v27) & 0x7F800000) == 2139095040 || (v27 = position->v[1], (LODWORD(v27) & 0x7F800000) == 2139095040) || (v27 = position->v[2], (LODWORD(v27) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7320, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Apply bullet force with invalid position (%f %f %f)", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )", v8, position->v[1], position->v[2]) )
      __debugbreak();
  }
  v9 = direction->v[0];
  v27 = direction->v[0];
  if ( (LODWORD(v27) & 0x7F800000) == 2139095040 || (v27 = direction->v[1], (LODWORD(v27) & 0x7F800000) == 2139095040) || (v27 = direction->v[2], (LODWORD(v27) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7321, ASSERT_TYPE_ASSERT, "(!IS_NAN( direction[0] ) && !IS_NAN( direction[1] ) && !IS_NAN( direction[2] ))", "%s\n\tPhysics: Trying to Apply bullet force with invalid direction (%f %f %f)", "!IS_NAN( direction[0] ) && !IS_NAN( direction[1] ) && !IS_NAN( direction[2] )", v9, direction->v[1], direction->v[2]) )
      __debugbreak();
  }
  v10 = direction->v[1];
  v11 = direction->v[0];
  v12 = direction->v[2];
  v13 = FLOAT_1_0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v11 * v11) + (float)(v10 * v10)) + (float)(v12 * v12)) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7322, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( direction ))", "%s\n\tPhysics: Trying to Apply bullet force with non normal direction (%f %f %f)", "Vec3IsNormalized( direction )", v11, v10, v12) )
    __debugbreak();
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  if ( Physics_IsRigidBodyDynamic(worldId, bodyId) )
  {
    mass = 0.0;
    Physics_GetRigidBodyMass(worldId, bodyId, &mass);
    if ( mass <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7335, ASSERT_TYPE_ASSERT, "(bodyMass > 0.f)", (const char *)&queryFormat, "bodyMass > 0.f") )
      __debugbreak();
    v14 = DCONST_DVARFLT_physics_BulletForceMassLimit;
    if ( !DCONST_DVARFLT_physics_BulletForceMassLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_BulletForceMassLimit") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    value = v14->current.value;
    if ( mass < value )
      v13 = mass / value;
    Ref = Physics_GetRef(worldId, bodyId);
    v17 = DCONST_DVARFLT_physics_BulletForceDefault;
    v18 = Ref;
    if ( !DCONST_DVARFLT_physics_BulletForceDefault && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_BulletForceDefault") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    v19 = v17->current.value;
    if ( (v18 & 0x3E000000) == 201326592 )
    {
      v20 = DCONST_DVARFLT_physics_BulletForceRagdoll;
      if ( !DCONST_DVARFLT_physics_BulletForceRagdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_BulletForceRagdoll") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v20);
      v19 = v20->current.value;
    }
    if ( (v18 & 0x3E000000) != 201326592 )
    {
      v24 = v19 * v13;
      goto LABEL_47;
    }
    v21 = v18 >> 16;
    v22 = truncate_cast<unsigned short,int>((unsigned __int16)v18);
    Ragdoll = Ragdoll_GetRagdoll((unsigned int)(unsigned __int8)v21 + 1);
    if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7363, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
      __debugbreak();
    if ( Ragdoll_CheckApplyBulletForce(Ragdoll, v22) )
    {
      v24 = v19 * v13;
      Ragdoll_SetDebugBulletImpulse(Ragdoll, v22, position, direction, v24 / mass);
LABEL_47:
      Physics_ApplyImpulse(worldId, bodyId, position, direction, v24);
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Physics_ApplyBulletForceInstance
==============
*/
void Physics_ApplyBulletForceInstance(const Physics_WorldId worldId, const unsigned int instanceId, const vec3_t *position, const vec3_t *direction, const unsigned int inflictorEntNum, const bool isMelee)
{
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  unsigned int v15; 
  unsigned int NumRigidBodys; 
  bool v17; 
  unsigned int m_serialAndIndex; 
  __int64 v19; 
  hknpBodyId result; 

  Sys_ProfBeginNamedEvent(0xFF008008, "Physics_ApplyBulletForceInstance");
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7389, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Apply bullet force when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7390, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Apply bullet force with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( instanceId == -1 )
  {
    LODWORD(v19) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7391, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Apply bullet force with invalid instance id %i", "instanceId != PHYSICSINSTANCEID_INVALID", v19) )
      __debugbreak();
  }
  v10 = position->v[0];
  result.m_serialAndIndex = LODWORD(position->v[0]);
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 || (result.m_serialAndIndex = LODWORD(position->v[1]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) || (result.m_serialAndIndex = LODWORD(position->v[2]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7392, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Apply bullet force with invalid position (%f %f %f)", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )", v10, position->v[1], position->v[2]) )
      __debugbreak();
  }
  v11 = direction->v[0];
  result.m_serialAndIndex = LODWORD(direction->v[0]);
  if ( (result.m_serialAndIndex & 0x7F800000) == 2139095040 || (result.m_serialAndIndex = LODWORD(direction->v[1]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) || (result.m_serialAndIndex = LODWORD(direction->v[2]), (result.m_serialAndIndex & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7393, ASSERT_TYPE_ASSERT, "(!IS_NAN( direction[0] ) && !IS_NAN( direction[1] ) && !IS_NAN( direction[2] ))", "%s\n\tPhysics: Trying to Apply bullet force with invalid direction (%f %f %f)", "!IS_NAN( direction[0] ) && !IS_NAN( direction[1] ) && !IS_NAN( direction[2] )", v11, direction->v[1], direction->v[2]) )
      __debugbreak();
  }
  v12 = direction->v[1];
  v13 = direction->v[0];
  v14 = direction->v[2];
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14)) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7394, ASSERT_TYPE_ASSERT, "(Vec3IsNormalized( direction ))", "%s\n\tPhysics: Trying to Apply bullet force with non normal direction (%f %f %f)", "Vec3IsNormalized( direction )", v13, v12, v14) )
    __debugbreak();
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  v15 = 0;
  NumRigidBodys = Physics_GetNumRigidBodys(worldId, instanceId);
  if ( NumRigidBodys )
  {
    v17 = isMelee;
    do
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      {
        LODWORD(v19) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v19) )
          __debugbreak();
      }
      if ( instanceId == -1 )
      {
        LODWORD(v19) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v19) )
          __debugbreak();
      }
      if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
      {
        LODWORD(v19) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v19) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
      {
        LODWORD(v19) = worldId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v19) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, worldId, instanceId, v15)->m_serialAndIndex;
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7403, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      Physics_ApplyBulletForceBody(worldId, m_serialAndIndex, position, direction, inflictorEntNum, v17);
      ++v15;
    }
    while ( v15 < NumRigidBodys );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Physics_ApplyBulletForce_GetHitBody
==============
*/
__int64 Physics_ApplyBulletForce_GetHitBody(const Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, const unsigned int inflictorEntNum, const bool isMelee, vec3_t *hitPos, int *hitSurfaceFlags, vec3_t *hitNormal, scr_string_t *partName, unsigned int *shapeKey)
{
  __int64 v12; 
  int v13; 
  __int32 v14; 
  HavokPhysics_CollisionQueryResult *ClosestResult; 
  HavokPhysics_CollisionQueryResult *v16; 
  const vec3_t *v17; 
  const vec3_t *v18; 
  float v19; 
  float v20; 
  __int128 v21; 
  float v22; 
  float v26; 
  float v27; 
  double RaycastHitFraction; 
  unsigned int physicsSystemDetailId; 
  unsigned int physicsSystemId; 
  int Ref; 
  int v32; 
  const char *RagdollBoneName; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  unsigned int v38; 
  LocalClientNum_t v39; 
  int v40; 
  LocalClientNum_t v41; 
  CgHandler *Handler; 
  PhysicsObject *Base; 
  unsigned __int16 v44; 
  __int64 LocalClientForWorld; 
  DynEntityBasis v46; 
  unsigned __int16 v47; 
  __int64 v48; 
  unsigned __int16 v49; 
  DynEntityClient *v50; 
  const XModel *InstanceXModel; 
  unsigned int RaycastHitBodyId; 
  hkMemoryAllocator *v53; 
  hkMemoryAllocator *v54; 
  hkMemoryAllocator *v55; 
  hkMemoryAllocator *v56; 
  unsigned int NumRigidBodys; 
  const char *name; 
  const char *v60; 
  unsigned int v61; 
  unsigned int RaycastHitShapeKey; 
  const char *RigidBodyName; 
  __int64 parent; 
  __int64 siblings; 
  DynEntityBasis basisOut[8]; 
  unsigned int *v67; 
  int *v68; 
  scr_string_t *v69; 
  HavokPhysics_IgnoreBodies v70; 
  HavokPhysics_CollisionQueryResult *v71; 
  HavokPhysics_IgnoreBodies v72; 
  Physics_RaycastExtendedData extendedData; 
  Physics_RaycastExtendedData v74; 
  Physics_QueryPointExtendedData v75; 
  __int64 v76; 
  vec3_t starta; 
  vec3_t pos; 
  PhysicsQuery_QueryPointHit hit; 

  v76 = -2i64;
  *(_QWORD *)starta.v = start;
  v12 = worldId;
  v68 = hitSurfaceFlags;
  v69 = partName;
  v67 = shapeKey;
  v13 = inflictorEntNum != 2047;
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v72, v13, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(&v72, -2241);
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v70, v13, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(&v70, -1559);
  if ( inflictorEntNum != 2047 )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v72, 0, inflictorEntNum, 1, 1, 0, 0, 0);
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v70, 0, inflictorEntNum, 1, 1, 0, 0, 0);
  }
  if ( (unsigned int)v12 > 1 && isMelee )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreRefs(&v72, -193);
    HavokPhysics_IgnoreBodies::SetIgnoreRefs(&v70, -3);
  }
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.collisionBuffer = 0.0;
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  v74.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  v74.collisionBuffer = 0.0;
  v74.phaseSelection = All;
  v74.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&v74.collectInsideHits = 256;
  extendedData.contents = 41969969;
  v74.contents = 41969969;
  extendedData.ignoreBodies = &v72;
  v74.ignoreBodies = &v70;
  v14 = 1;
  if ( (unsigned int)v12 > 1 )
    v14 = 3 * Physics_GetLocalClientForWorld((Physics_WorldId)v12) + 4;
  ClosestResult = PhysicsQuery_GetClosestResult((Physics_WorldId)v12);
  v16 = PhysicsQuery_GetClosestResult((Physics_WorldId)v14);
  v71 = v16;
  HavokPhysics_CollisionQueryResult::Reset(ClosestResult, 1);
  HavokPhysics_CollisionQueryResult::Reset(v16, 1);
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8082, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to AddDetailTrace when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8083, ASSERT_TYPE_ASSERT, "(result)", "%s\n\tPhysics: Trying to AddDetailTrace for invalid result", "result") )
    __debugbreak();
  HavokPhysics_AddDetailTrace(v16, NULL);
  pos = *end;
  v17 = end;
  v18 = *(const vec3_t **)starta.v;
  Physics_Raycast((Physics_WorldId)v12, *(const vec3_t **)starta.v, v17, &extendedData, ClosestResult);
  if ( HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
  {
    HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(ClosestResult, 0, &pos);
    starta.v[0] = hitPos->v[0];
    if ( (LODWORD(starta.v[0]) & 0x7F800000) == 2139095040 || (starta.v[0] = hitPos->v[1], (LODWORD(starta.v[0]) & 0x7F800000) == 2139095040) || (starta.v[0] = hitPos->v[2], (LODWORD(starta.v[0]) & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7465, ASSERT_TYPE_ASSERT, "(!IS_NAN( hitPos[0] ) && !IS_NAN( hitPos[1] ) && !IS_NAN( hitPos[2] ))", (const char *)&queryFormat, "!IS_NAN( hitPos[0] ) && !IS_NAN( hitPos[1] ) && !IS_NAN( hitPos[2] )") )
        __debugbreak();
    }
  }
  v19 = pos.v[0] - v18->v[0];
  v21 = LODWORD(pos.v[1]);
  v20 = pos.v[1] - v18->v[1];
  v22 = pos.v[2] - v18->v[2];
  *(float *)&v21 = fsqrt((float)((float)(v20 * v20) + (float)(v19 * v19)) + (float)(v22 * v22));
  _XMM9 = v21;
  __asm
  {
    vcmpless xmm0, xmm9, cs:__real@80000000
    vblendvps xmm1, xmm9, xmm2, xmm0
  }
  starta.v[0] = *(float *)&_XMM1;
  *(double *)&_XMM0 = HavokPhysics_GetDetailBoundingSphereMax((Physics_WorldId)v14);
  v26 = (float)(*(float *)&_XMM0 * 32.0) * 2.0;
  starta.v[0] = (float)((float)((float)(1.0 / *(float *)&_XMM1) * v19) * v26) + pos.v[0];
  starta.v[1] = (float)((float)((float)(1.0 / *(float *)&_XMM1) * v20) * v26) + pos.v[1];
  starta.v[2] = (float)((float)((float)(1.0 / *(float *)&_XMM1) * v22) * v26) + pos.v[2];
  v27 = *(float *)&v21 / (float)(*(float *)&v21 + v26);
  Physics_Raycast((Physics_WorldId)v14, v18, &starta, &v74, v16);
  if ( !HavokPhysics_CollisionQueryResult::HasHit(v16) || (RaycastHitFraction = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(v16, 0), *(float *)&RaycastHitFraction >= v27) )
  {
    if ( !HavokPhysics_CollisionQueryResult::HasHit(ClosestResult) )
      goto LABEL_92;
    HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(ClosestResult, 0, hitPos);
    starta.v[0] = hitPos->v[0];
    if ( (LODWORD(starta.v[0]) & 0x7F800000) == 2139095040 || (starta.v[0] = hitPos->v[1], (LODWORD(starta.v[0]) & 0x7F800000) == 2139095040) || (starta.v[0] = hitPos->v[2], (LODWORD(starta.v[0]) & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7609, ASSERT_TYPE_ASSERT, "(!IS_NAN( hitPos[0] ) && !IS_NAN( hitPos[1] ) && !IS_NAN( hitPos[2] ))", (const char *)&queryFormat, "!IS_NAN( hitPos[0] ) && !IS_NAN( hitPos[1] ) && !IS_NAN( hitPos[2] )") )
        __debugbreak();
    }
    *v68 = HavokPhysics_CollisionQueryResult::GetRaycastHitSurfFlags(ClosestResult, 0);
    HavokPhysics_CollisionQueryResult::GetRaycastHitNormal(ClosestResult, 0, hitNormal);
    starta.v[0] = hitNormal->v[0];
    if ( (LODWORD(starta.v[0]) & 0x7F800000) == 2139095040 || (starta.v[0] = hitNormal->v[1], (LODWORD(starta.v[0]) & 0x7F800000) == 2139095040) || (starta.v[0] = hitNormal->v[2], (LODWORD(starta.v[0]) & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7612, ASSERT_TYPE_ASSERT, "(!IS_NAN( hitNormal[0] ) && !IS_NAN( hitNormal[1] ) && !IS_NAN( hitNormal[2] ))", (const char *)&queryFormat, "!IS_NAN( hitNormal[0] ) && !IS_NAN( hitNormal[1] ) && !IS_NAN( hitNormal[2] )") )
        __debugbreak();
    }
    RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(ClosestResult, 0);
    RigidBodyName = Physics_GetRigidBodyName((Physics_WorldId)v12, RaycastHitBodyId);
    if ( (Physics_GetRef((Physics_WorldId)v12, RaycastHitBodyId) & 0x3E000000) == 201326592 )
      RigidBodyName = Physics_GetRagdollBoneName(RigidBodyName);
    *v69 = SL_FindString(RigidBodyName);
    *v67 = HavokPhysics_CollisionQueryResult::GetRaycastHitShapeKey(ClosestResult, 0);
    goto LABEL_93;
  }
  HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(v16, 0, hitPos);
  starta.v[0] = hitPos->v[0];
  if ( (LODWORD(starta.v[0]) & 0x7F800000) == 2139095040 || (starta.v[0] = hitPos->v[1], (LODWORD(starta.v[0]) & 0x7F800000) == 2139095040) || (starta.v[0] = hitPos->v[2], (LODWORD(starta.v[0]) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7488, ASSERT_TYPE_ASSERT, "(!IS_NAN( hitPos[0] ) && !IS_NAN( hitPos[1] ) && !IS_NAN( hitPos[2] ))", (const char *)&queryFormat, "!IS_NAN( hitPos[0] ) && !IS_NAN( hitPos[1] ) && !IS_NAN( hitPos[2] )") )
      __debugbreak();
  }
  *v68 = HavokPhysics_CollisionQueryResult::GetRaycastHitSurfFlags(v16, 0);
  HavokPhysics_CollisionQueryResult::GetRaycastHitNormal(v16, 0, hitNormal);
  starta.v[0] = hitNormal->v[0];
  if ( (LODWORD(starta.v[0]) & 0x7F800000) == 2139095040 || (starta.v[0] = hitNormal->v[1], (LODWORD(starta.v[0]) & 0x7F800000) == 2139095040) || (starta.v[0] = hitNormal->v[2], (LODWORD(starta.v[0]) & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7491, ASSERT_TYPE_ASSERT, "(!IS_NAN( hitNormal[0] ) && !IS_NAN( hitNormal[1] ) && !IS_NAN( hitNormal[2] ))", (const char *)&queryFormat, "!IS_NAN( hitNormal[0] ) && !IS_NAN( hitNormal[1] ) && !IS_NAN( hitNormal[2] )") )
      __debugbreak();
  }
  physicsSystemDetailId = -1;
  physicsSystemId = -1;
  LODWORD(starta.v[0]) = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(v16, 0);
  Ref = Physics_GetRef((Physics_WorldId)v14, LODWORD(starta.v[0]));
  v32 = (Ref >> 25) & 0x1F;
  RagdollBoneName = Physics_GetRigidBodyName((Physics_WorldId)v14, LODWORD(starta.v[0]));
  if ( v32 == 6 )
    RagdollBoneName = Physics_GetRagdollBoneName(RagdollBoneName);
  *v69 = SL_FindString(RagdollBoneName);
  if ( PhysicsCoverWall_IsCoverWall((Physics_WorldId)v12, Ref) )
    goto LABEL_92;
  v34 = v32 - 1;
  if ( !v34 )
  {
    LocalClientForWorld = Physics_GetLocalClientForWorld((Physics_WorldId)v12);
    DynEnt_GetBasisAndDynEntClientId(Ref, basisOut, (unsigned __int16 *)&basisOut[4]);
    v46 = basisOut[0];
    v47 = *(_WORD *)&basisOut[4];
    if ( (unsigned int)LocalClientForWorld >= 2 )
    {
      LODWORD(siblings) = 2;
      LODWORD(parent) = LocalClientForWorld;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", parent, siblings) )
        __debugbreak();
    }
    if ( (unsigned __int8)v46 >= DYNENT_BASIS_COUNT )
    {
      LODWORD(siblings) = 2;
      LODWORD(parent) = (unsigned __int8)v46;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 323, ASSERT_TYPE_ASSERT, "(unsigned)( basis ) < (unsigned)( DYNENT_BASIS_COUNT )", "basis doesn't index DYNENT_BASIS_COUNT\n\t%i not in [0, %i)", parent, siblings) )
        __debugbreak();
    }
    v48 = (unsigned __int8)v46 + 2 * LocalClientForWorld;
    v49 = g_dynEntClientEntsAllocCount[0][v48];
    if ( v47 >= v49 )
    {
      LODWORD(siblings) = v49;
      LODWORD(parent) = v47;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", parent, siblings) )
        __debugbreak();
    }
    if ( !g_dynEntClientLists[0][v48] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
      __debugbreak();
    v50 = &g_dynEntClientLists[0][v48][v47];
    if ( !v50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7548, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
      __debugbreak();
    physicsSystemDetailId = v50->physicsSystemDetailId;
    physicsSystemId = v50->physicsSystemId;
LABEL_66:
    if ( physicsSystemDetailId != -1 )
      goto LABEL_69;
    goto LABEL_67;
  }
  v35 = v34 - 1;
  if ( !v35 )
    goto LABEL_47;
  v36 = v35 - 2;
  if ( !v36 )
  {
    v40 = truncate_cast<unsigned short,int>((unsigned __int16)Ref);
    v41 = Physics_GetLocalClientForWorld((Physics_WorldId)v12);
    Handler = CgHandler::getHandler(v41);
    Base = (PhysicsObject *)Handler->GetPhysicsObject(Handler, v40, v41);
    if ( !Base && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7524, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
      __debugbreak();
    goto LABEL_46;
  }
  v37 = v36 - 5;
  if ( !v37 )
  {
LABEL_47:
    v44 = truncate_cast<unsigned short,int>((unsigned __int16)Ref);
    Base = G_PhysicsObject_GetBase(v44, LOCAL_CLIENT_INVALID);
    if ( !Base && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7535, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
    {
      __debugbreak();
      physicsSystemDetailId = *(_DWORD *)(4i64 * v14 + 4);
      physicsSystemId = *(_DWORD *)(4 * v12 + 4);
      goto LABEL_66;
    }
LABEL_46:
    physicsSystemDetailId = Base->physicsInstances[v14];
    physicsSystemId = Base->physicsInstances[v12];
    goto LABEL_66;
  }
  if ( v37 == 1 )
  {
    v38 = truncate_cast<unsigned short,int>((unsigned __int16)Ref);
    v39 = Physics_GetLocalClientForWorld((Physics_WorldId)v12);
    physicsSystemId = CG_ClientModel_Physics_GetInstanceId(v39, v38);
    physicsSystemDetailId = CG_ClientModel_Physics_GetDetailInstanceId(v39, v38);
    goto LABEL_66;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7565, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported ref system") )
    __debugbreak();
LABEL_67:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7567, ASSERT_TYPE_ASSERT, "(detailInstanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "detailInstanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
LABEL_69:
  if ( physicsSystemId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7568, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", (const char *)&queryFormat, "instanceId != PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5832, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Instance model Asset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v12 > 7 )
  {
    LODWORD(siblings) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5833, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Instance model Asset with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", siblings) )
      __debugbreak();
  }
  if ( physicsSystemId == -1 )
  {
    LODWORD(siblings) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5834, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Instance model Asset with invalid instance Id in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", siblings) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(v12 - 2) <= 5 )
  {
    LODWORD(siblings) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5835, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Instance model Asset in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", siblings) )
      __debugbreak();
  }
  if ( !g_physicsServerWorldsCreated && (unsigned int)v12 <= 1 )
  {
    LODWORD(siblings) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5836, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Instance model Asset in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", siblings) )
      __debugbreak();
  }
  InstanceXModel = HavokPhysics_GetInstanceXModel((Physics_WorldId)v12, physicsSystemId);
  if ( InstanceXModel )
  {
    v75.simplify = 0;
    v75.ignoreBodies = NULL;
    v75.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
    v75.collisionBuffer = 0.0;
    v75.phaseSelection = All;
    v75.contents = 41969969;
    PhysicsQuery_ImmediateQueryPointWorst((Physics_WorldId)v12, physicsSystemId, hitPos, maxRange, &v75, &hit);
    if ( !hit.isValid )
    {
      Com_PrintWarning(14, "Probable bad art asset - %s: No dynamic body in range %.2f of detail body. Check ColLod and physics asset for this model\n", InstanceXModel->name, maxRange);
LABEL_92:
      RaycastHitBodyId = 0xFFFFFF;
      goto LABEL_93;
    }
    *v67 = hit.shapeKey;
    RaycastHitBodyId = hit.bodyId;
  }
  else
  {
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v14, physicsSystemDetailId);
    name = "Unknown";
    if ( NumRigidBodys != Physics_GetNumRigidBodys((const Physics_WorldId)v12, physicsSystemId) )
    {
      v60 = Physics_GetInstanceAsset((Physics_WorldId)v12, physicsSystemId) ? Physics_GetInstanceAsset((Physics_WorldId)v12, physicsSystemId)->name : "Unknown";
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7591, ASSERT_TYPE_ASSERT, "(numBodies == Physics_GetNumRigidBodys( worldId, instanceId ))", "%s\n\tDetail and Simulation physics body count mismatch for %s", "numBodies == Physics_GetNumRigidBodys( worldId, instanceId )", v60) )
        __debugbreak();
    }
    v61 = 0;
    if ( !NumRigidBodys )
    {
LABEL_112:
      if ( Physics_GetInstanceAsset((Physics_WorldId)v12, physicsSystemId) )
        name = Physics_GetInstanceAsset((Physics_WorldId)v12, physicsSystemId)->name;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7602, ASSERT_TYPE_ASSERT, "(false)", "%s\n\tCouldn't find Detail body for %s", "false", name) )
        __debugbreak();
      goto LABEL_92;
    }
    while ( Physics_GetRigidBodyID((const Physics_WorldId)v14, physicsSystemDetailId, v61) != LODWORD(starta.v[0]) )
    {
      if ( ++v61 >= NumRigidBodys )
        goto LABEL_112;
    }
    RaycastHitShapeKey = HavokPhysics_CollisionQueryResult::GetRaycastHitShapeKey(v71, 0);
    *v67 = RaycastHitShapeKey;
    RaycastHitBodyId = Physics_GetRigidBodyID((const Physics_WorldId)v12, physicsSystemId, v61);
  }
LABEL_93:
  v53 = hkMemHeapAllocator();
  v70.m_ignoreBodies.m_size = 0;
  if ( v70.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v53, v70.m_ignoreBodies.m_data, 4, v70.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v70.m_ignoreBodies.m_data = NULL;
  v70.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v54 = hkMemHeapAllocator();
  v70.m_ignoreEntities.m_size = 0;
  if ( v70.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v54, v70.m_ignoreEntities.m_data, 8, v70.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v70.m_ignoreEntities.m_data = NULL;
  v70.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
  v55 = hkMemHeapAllocator();
  v72.m_ignoreBodies.m_size = 0;
  if ( v72.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v55, v72.m_ignoreBodies.m_data, 4, v72.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v72.m_ignoreBodies.m_data = NULL;
  v72.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v56 = hkMemHeapAllocator();
  v72.m_ignoreEntities.m_size = 0;
  if ( v72.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v56, v72.m_ignoreEntities.m_data, 8, v72.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  return RaycastHitBodyId;
}

/*
==============
Physics_ApplyImpulse
==============
*/
void Physics_ApplyImpulse(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *position, const vec3_t *normalizedDirection, float magnitude)
{
  float v9; 
  float v10; 
  __int64 v15; 
  Physics_WorldId v16; 
  hkVector4f hkPosition; 
  hkVector4f hkDirection; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7004, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Apply impulse to a Body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v16 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7005, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Apply impulse to a Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v16) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v15) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7006, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Apply impulse to a Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v15) )
      __debugbreak();
  }
  if ( ((LODWORD(position->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7007, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Apply impulse to a Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
    __debugbreak();
  if ( ((LODWORD(normalizedDirection->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(normalizedDirection->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(normalizedDirection->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7008, ASSERT_TYPE_ASSERT, "(!IS_NAN( normalizedDirection[0] ) && !IS_NAN( normalizedDirection[1] ) && !IS_NAN( normalizedDirection[2] ))", "%s\n\tPhysics: Trying to Apply impulse to a Body with invalid direction", "!IS_NAN( normalizedDirection[0] ) && !IS_NAN( normalizedDirection[1] ) && !IS_NAN( normalizedDirection[2] )") )
    __debugbreak();
  if ( magnitude != 0.0 && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(normalizedDirection->v[0] * normalizedDirection->v[0]) + (float)(normalizedDirection->v[1] * normalizedDirection->v[1])) + (float)(normalizedDirection->v[2] * normalizedDirection->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7009, ASSERT_TYPE_ASSERT, "(magnitude == 0.f || Vec3IsNormalized( normalizedDirection ))", "%s\n\tPhysics: Trying to Apply impulse to a Body with non normal direction", "magnitude == 0.f || Vec3IsNormalized( normalizedDirection )") )
    __debugbreak();
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  if ( magnitude != 0.0 )
  {
    v9 = 0.03125 * position->v[1];
    v10 = 0.03125 * position->v[2];
    hkPosition.m_quad.m128_f32[0] = 0.03125 * position->v[0];
    _XMM0 = 0i64;
    __asm
    {
      vinsertps xmm0, xmm0, dword ptr [rbx], 0
      vinsertps xmm0, xmm0, dword ptr [rbx+4], 10h
      vinsertps xmm0, xmm0, dword ptr [rbx+8], 20h ; ' '
    }
    hkDirection.m_quad = _XMM0;
    hkPosition.m_quad.m128_f32[1] = v9;
    hkPosition.m_quad.m128_f32[2] = v10;
    hkPosition.m_quad.m128_f32[3] = 0.0;
    HavokPhysics_ApplyImpulse(worldId, (hknpBodyId)bodyId, &hkPosition, &hkDirection, magnitude * 0.03125);
  }
}

/*
==============
Physics_ApplyLinearImpulse
==============
*/
void Physics_ApplyLinearImpulse(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *normalizedDirection, float magnitude)
{
  __int64 v11; 
  Physics_WorldId v12; 
  hkVector4f hkDirection; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7037, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Apply impulse to a Body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v12 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7038, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Apply impulse to a Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v12) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v11) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7039, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Apply impulse to a Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v11) )
      __debugbreak();
  }
  if ( ((LODWORD(normalizedDirection->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(normalizedDirection->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(normalizedDirection->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7040, ASSERT_TYPE_ASSERT, "(!IS_NAN( normalizedDirection[0] ) && !IS_NAN( normalizedDirection[1] ) && !IS_NAN( normalizedDirection[2] ))", "%s\n\tPhysics: Trying to Apply impulse to a Body with invalid direction", "!IS_NAN( normalizedDirection[0] ) && !IS_NAN( normalizedDirection[1] ) && !IS_NAN( normalizedDirection[2] )") )
    __debugbreak();
  if ( magnitude != 0.0 && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(normalizedDirection->v[0] * normalizedDirection->v[0]) + (float)(normalizedDirection->v[1] * normalizedDirection->v[1])) + (float)(normalizedDirection->v[2] * normalizedDirection->v[2])) - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7041, ASSERT_TYPE_ASSERT, "(magnitude == 0.f || Vec3IsNormalized( normalizedDirection ))", "%s\n\tPhysics: Trying to Apply impulse to a Body with non normal direction", "magnitude == 0.f || Vec3IsNormalized( normalizedDirection )") )
    __debugbreak();
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  if ( magnitude != 0.0 )
  {
    _XMM0 = 0i64;
    __asm
    {
      vinsertps xmm0, xmm0, dword ptr [rbx], 0
      vinsertps xmm0, xmm0, dword ptr [rbx+4], 10h
      vinsertps xmm0, xmm0, dword ptr [rbx+8], 20h ; ' '
    }
    hkDirection.m_quad = _XMM0;
    HavokPhysics_ApplyLinearImpulse(worldId, (hknpBodyId)bodyId, &hkDirection, magnitude * 0.03125);
  }
}

/*
==============
Physics_ApplyRadiusForce
==============
*/
void Physics_ApplyRadiusForce(const Physics_WorldId worldId, const vec3_t *position, const float radius, const float innerDamage, const float outerDamage, const float impulseOverride, const vec3_t *impulseVecOverride, unsigned int randSeed, float forceScalar)
{
  float v9; 
  float v13; 
  float v14; 
  __int128 v15; 
  float v16; 
  __int128 v18; 
  hkVector4f v21; 
  float v22; 
  __m128 v23; 
  float v24; 
  float v28; 
  float v29; 
  float v30; 
  const dvar_t *v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  HavokPhysics_CollisionQueryResult *AllResult; 
  const dvar_t *v38; 
  int integer; 
  signed int NumHits; 
  int v41; 
  int v42; 
  HavokPhysics_CollisionQueryResult *v43; 
  float v44; 
  unsigned int AABBQueryHitBodyId; 
  int Ref; 
  int v47; 
  Ragdoll *Ragdoll; 
  __int128 v50; 
  float v51; 
  float v52; 
  __int128 v53; 
  __int128 v56; 
  __int128 v58; 
  const dvar_t *v59; 
  const dvar_t *v62; 
  const dvar_t *v63; 
  float value; 
  float v65; 
  float v66; 
  __int128 v67; 
  float v68; 
  __int128 v72; 
  float v73; 
  float v74; 
  float v75; 
  float v79; 
  float v80; 
  int v81; 
  unsigned __int16 v82; 
  unsigned int v83; 
  hkMemoryAllocator *v84; 
  hkMemoryAllocator *v85; 
  double Float_Internal_DebugName; 
  __int64 v87; 
  __int64 v88; 
  bool v89; 
  unsigned int v90; 
  float mass; 
  int v92; 
  float v93; 
  float v94; 
  int v95; 
  float v96; 
  float v97; 
  float v98; 
  HavokPhysics_CollisionQueryResult *v99; 
  Physics_AABBQueryExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v101; 
  __int64 v102; 
  vec3_t min; 
  vec3_t positiona; 
  vec3_t max; 
  vec3_t impulseDirOverride; 
  vec4_t orientation; 

  v102 = -2i64;
  v9 = innerDamage;
  v93 = innerDamage;
  Sys_ProfBeginNamedEvent(0xFF008008, "Physics_ApplyRadiusForce");
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7133, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Apply radius force when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7134, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Apply radius force with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( ((LODWORD(position->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7135, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Apply radius force with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
    __debugbreak();
  v13 = forceScalar;
  if ( (forceScalar < 0.0 || forceScalar > 2.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7136, ASSERT_TYPE_ASSERT, "(forceScalar >= 0.0f && forceScalar <= PHYSICS_MAX_RADIUSFORCE_SCALAR)", "%s\n\tPhysics: forceScalar=%.2f is out of allowed range [0, %.2f]", "forceScalar >= 0.0f && forceScalar <= PHYSICS_MAX_RADIUSFORCE_SCALAR", forceScalar, DOUBLE_2_0) )
    __debugbreak();
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  v96 = v13 * 10.0;
  v14 = impulseVecOverride->v[1];
  v15 = LODWORD(impulseVecOverride->v[0]);
  v16 = impulseVecOverride->v[2];
  v18 = v15;
  *(float *)&v18 = fsqrt((float)((float)(*(float *)&v15 * *(float *)&v15) + (float)(v14 * v14)) + (float)(v16 * v16));
  _XMM6 = v18;
  v95 = v18;
  __asm
  {
    vcmpless xmm0, xmm6, xmm11
    vblendvps xmm1, xmm6, xmm10, xmm0
  }
  v94 = *(float *)&_XMM1;
  impulseDirOverride.v[0] = *(float *)&v15 * (float)(1.0 / *(float *)&_XMM1);
  impulseDirOverride.v[1] = v14 * (float)(1.0 / *(float *)&_XMM1);
  impulseDirOverride.v[2] = v16 * (float)(1.0 / *(float *)&_XMM1);
  if ( v9 != 0.0 || (v89 = 1, *(float *)&v18 == 0.0) )
    v89 = 0;
  BG_srand(&randSeed);
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 42, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Gravity when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    LODWORD(v87) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 43, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v87) )
      __debugbreak();
    LODWORD(v88) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 95, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Get Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v88) )
      __debugbreak();
  }
  v21.m_quad = (__m128)HavokPhysics_GetConstWorld(worldId)->world->m_gravity;
  v23 = _mm_shuffle_ps(v21.m_quad, v21.m_quad, 85);
  v22 = v23.m128_f32[0] * 32.0;
  v24 = _mm_shuffle_ps(v21.m_quad, v21.m_quad, 170).m128_f32[0] * 32.0;
  v23.m128_f32[0] = fsqrt((float)((float)(v22 * v22) + (float)((float)(v21.m_quad.m128_f32[0] * 32.0) * (float)(v21.m_quad.m128_f32[0] * 32.0))) + (float)(v24 * v24));
  _XMM3 = v23;
  __asm
  {
    vcmpless xmm0, xmm3, xmm11
    vblendvps xmm1, xmm3, xmm10, xmm0
  }
  v94 = *(float *)&_XMM1;
  v28 = (float)(v21.m_quad.m128_f32[0] * 32.0) * (float)(1.0 / *(float *)&_XMM1);
  v29 = v22 * (float)(1.0 / *(float *)&_XMM1);
  v30 = v24 * (float)(1.0 / *(float *)&_XMM1);
  v31 = DCONST_DVARFLT_physics_RadiusForceUpBias;
  if ( !DCONST_DVARFLT_physics_RadiusForceUpBias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_RadiusForceUpBias") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v31);
  LODWORD(v32) = v31->current.integer ^ _xmm;
  v97 = v28 * v32;
  v98 = v29 * v32;
  v94 = v30 * v32;
  v33 = radius * radius;
  v34 = position->v[0];
  min.v[0] = position->v[0] - radius;
  v35 = position->v[1];
  min.v[1] = v35 - radius;
  v36 = position->v[2];
  min.v[2] = v36 - radius;
  max.v[0] = radius + v34;
  max.v[1] = radius + v35;
  max.v[2] = radius + v36;
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v101, 0, 0);
  HavokPhysics_IgnoreBodies::SetIgnoreRefs(&v101, -1751);
  extendedData.collisionBuffer = 0.0;
  extendedData.phaseSelection = All;
  extendedData.contents = 41969969;
  extendedData.simplify = 1;
  extendedData.ignoreBodies = &v101;
  AllResult = PhysicsQuery_GetAllResult(worldId);
  v99 = AllResult;
  HavokPhysics_CollisionQueryResult::Reset(AllResult, 1);
  Physics_AABBQuery(worldId, &min, &max, &extendedData, AllResult);
  HavokPhysics_CollisionQueryResult::SortResults(AllResult);
  v38 = DVARINT_physics_RadiusForceHitLimit;
  if ( !DVARINT_physics_RadiusForceHitLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_RadiusForceHitLimit") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v38);
  integer = v38->current.integer;
  NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(AllResult);
  if ( NumHits < integer )
    integer = NumHits;
  v92 = integer;
  v41 = 0;
  v42 = 0;
  v90 = 0;
  v43 = v99;
  if ( HavokPhysics_CollisionQueryResult::GetNumHits(v99) )
  {
    v44 = FLOAT_N1_0;
    do
    {
      if ( v41 >= integer )
        break;
      AABBQueryHitBodyId = HavokPhysics_CollisionQueryResult::GetAABBQueryHitBodyId(v43, v42);
      if ( (AABBQueryHitBodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7189, ASSERT_TYPE_ASSERT, "( Physics_IsRigidBodyIdValid( bodyId ) )", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
        __debugbreak();
      if ( Physics_IsRigidBodyDynamic(worldId, AABBQueryHitBodyId) )
      {
        Ref = Physics_GetRef(worldId, AABBQueryHitBodyId);
        v47 = Ref;
        Ragdoll = NULL;
        if ( (Ref & 0x3E000000) != 201326592 )
          goto LABEL_47;
        Ragdoll = Ragdoll_GetRagdoll((unsigned int)BYTE2(Ref) + 1);
        if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7204, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
          __debugbreak();
        if ( Ragdoll_CheckApplyRadiusForce(Ragdoll, radius) )
        {
LABEL_47:
          Physics_GetRigidBodyTransform(worldId, AABBQueryHitBodyId, &max, &orientation);
          _XMM11 = LODWORD(max.v[0]);
          v50 = LODWORD(max.v[1]);
          v51 = max.v[2];
          v53 = LODWORD(FLOAT_1_0);
          *(float *)&v53 = 1.0 - (float)((float)((float)((float)((float)(position->v[1] - max.v[1]) * (float)(position->v[1] - max.v[1])) + (float)((float)(position->v[0] - max.v[0]) * (float)(position->v[0] - max.v[0]))) + (float)((float)(position->v[2] - max.v[2]) * (float)(position->v[2] - max.v[2]))) / v33);
          v52 = *(float *)&v53;
          if ( *(float *)&v53 > 0.0 )
          {
            if ( v9 == 0.0 )
            {
              *(float *)&v53 = *(float *)&v53 * impulseOverride;
              _XMM0 = v53;
              __asm { vmaxss  xmm2, xmm0, [rsp+200h+var_1A8] }
            }
            else
            {
              v56 = LODWORD(FLOAT_1_0);
              *(float *)&v56 = (float)((float)(1.0 - v52) * outerDamage) + (float)(v52 * v9);
              _XMM2 = v56;
            }
            v58 = _XMM2;
            *(float *)&v58 = *(float *)&_XMM2 * v96;
            _XMM6 = v58;
            v59 = DCONST_DVARFLT_physics_RadiusForceMax;
            if ( !DCONST_DVARFLT_physics_RadiusForceMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_RadiusForceMax") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v59);
            __asm { vminss  xmm13, xmm6, dword ptr [rbx+28h] }
            if ( (v47 & 0x3E000000) != 201326592 )
              goto LABEL_59;
            if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7239, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
              __debugbreak();
            if ( !Ragdoll_ApplyFullBodyRadiusForce(Ragdoll, position, radius, v89, &impulseDirOverride, *(float *)&_XMM13) )
            {
LABEL_59:
              __asm { vunpcklps xmm0, xmm11, xmm12 }
              *(double *)max.v = *(double *)&_XMM0;
              *(double *)positiona.v = *(double *)&_XMM0;
              positiona.v[2] = max.v[2];
              v62 = DCONST_DVARFLT_physics_RadiusForceUpOffset;
              if ( !DCONST_DVARFLT_physics_RadiusForceUpOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_RadiusForceUpOffset") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v62);
              positiona.v[2] = positiona.v[2] + v62->current.value;
              BG_flrand(v44, 1.0, &randSeed);
              BG_flrand(v44, 1.0, &randSeed);
              BG_flrand(v44, 1.0, &randSeed);
              v63 = DCONST_DVARFLT_physics_RadiusForceRandomOffset;
              if ( !DCONST_DVARFLT_physics_RadiusForceRandomOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_RadiusForceRandomOffset") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v63);
              value = v63->current.value;
              positiona.v[0] = (float)(v44 * value) + positiona.v[0];
              positiona.v[1] = (float)(value * v44) + positiona.v[1];
              positiona.v[2] = (float)(value * v44) + positiona.v[2];
              if ( v89 )
              {
                min = impulseDirOverride;
              }
              else
              {
                v65 = *(float *)&_XMM11 - position->v[0];
                v67 = v50;
                v66 = *(float *)&v50 - position->v[1];
                v68 = v51 - position->v[2];
                *(float *)&v67 = fsqrt((float)((float)(v66 * v66) + (float)(v65 * v65)) + (float)(v68 * v68));
                _XMM3 = v67;
                __asm
                {
                  vcmpless xmm0, xmm3, cs:__real@80000000
                  vblendvps xmm1, xmm3, xmm10, xmm0
                }
                v72 = LODWORD(FLOAT_1_0);
                v73 = (float)((float)(1.0 / *(float *)&_XMM1) * v65) + v97;
                v74 = (float)((float)(1.0 / *(float *)&_XMM1) * v66) + v98;
                v75 = (float)((float)(1.0 / *(float *)&_XMM1) * v68) + v94;
                *(float *)&v72 = fsqrt((float)((float)(v74 * v74) + (float)(v73 * v73)) + (float)(v75 * v75));
                _XMM4 = v72;
                __asm
                {
                  vcmpless xmm0, xmm4, cs:__real@80000000
                  vblendvps xmm1, xmm4, xmm10, xmm0
                }
                mass = *(float *)&_XMM1;
                min.v[0] = (float)(1.0 / *(float *)&_XMM1) * v73;
                min.v[1] = (float)(1.0 / *(float *)&_XMM1) * v74;
                min.v[2] = (float)(1.0 / *(float *)&_XMM1) * v75;
                if ( *(float *)&v72 == 0.0 )
                {
                  min.v[0] = 0.0;
                  min.v[1] = 0.0;
                  min.v[2] = FLOAT_1_0;
                }
              }
              mass = 0.0;
              Physics_GetRigidBodyMass(worldId, AABBQueryHitBodyId, &mass);
              if ( mass <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7276, ASSERT_TYPE_ASSERT, "(bodyMass > 0.f)", (const char *)&queryFormat, "bodyMass > 0.f") )
                __debugbreak();
              v79 = FLOAT_1_0;
              if ( dword_14B804C40 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
              {
                j__Init_thread_header(&dword_14B804C40);
                if ( dword_14B804C40 == -1 )
                {
                  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_physics_RadiusForceMassLimit, "physics_RadiusForceMassLimit");
                  massLimit = *(float *)&Float_Internal_DebugName;
                  j__Init_thread_footer(&dword_14B804C40);
                }
              }
              if ( mass < massLimit )
                v79 = mass / massLimit;
              v80 = *(float *)&_XMM13 * v79;
              Physics_ApplyImpulse(worldId, AABBQueryHitBodyId, &positiona, &min, v80);
              v81 = v41 + 1;
              if ( (v47 & 0x3E000000) == 201326592 )
                v81 = v41;
              v41 = v81;
              if ( (v47 & 0x3E000000) == 201326592 )
              {
                if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7300, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
                  __debugbreak();
                v82 = truncate_cast<unsigned short,int>((unsigned __int16)v47);
                Ragdoll_SetDebugExplosionImpulse(Ragdoll, v82, &positiona, &min, v80 / mass);
              }
              v44 = FLOAT_N1_0;
            }
            v33 = radius * radius;
            v9 = v93;
          }
        }
        integer = v92;
      }
      v42 = ++v90;
      v83 = HavokPhysics_CollisionQueryResult::GetNumHits(v99);
      v43 = v99;
    }
    while ( v90 < v83 );
  }
  Sys_ProfEndNamedEvent();
  v84 = hkMemHeapAllocator();
  v101.m_ignoreBodies.m_size = 0;
  if ( v101.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v84, v101.m_ignoreBodies.m_data, 4, v101.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v101.m_ignoreBodies.m_data = NULL;
  v101.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v85 = hkMemHeapAllocator();
  v101.m_ignoreEntities.m_size = 0;
  if ( v101.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v85, v101.m_ignoreEntities.m_data, 8, v101.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
}

/*
==============
Physics_AreClientWorldsCreated
==============
*/
unsigned __int8 Physics_AreClientWorldsCreated(LocalClientNum_t localClientNum)
{
  int v2; 
  int v5; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2081, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( LOCAL_CLIENT_COUNT )", "localClientNum doesn't index LOCAL_CLIENT_COUNT\n\t%i not in [0, %i)", localClientNum, v5) )
      __debugbreak();
  }
  v2 = g_physicsClientWorldsCreated;
  return _bittest(&v2, localClientNum);
}

/*
==============
Physics_AreClientWorldsCreated
==============
*/
bool Physics_AreClientWorldsCreated()
{
  return g_physicsClientWorldsCreated != 0;
}

/*
==============
Physics_AreDetailModelsInterchangeable
==============
*/
bool Physics_AreDetailModelsInterchangeable(const XModel *const detailModelA, const XModel *const detailModelB)
{
  if ( !detailModelA && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5442, ASSERT_TYPE_ASSERT, "(detailModelA)", "%s\n\tPhysics: Trying to query NULL Detail Model", "detailModelA") )
    __debugbreak();
  if ( !detailModelA->detailCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5443, ASSERT_TYPE_ASSERT, "(detailModelA->detailCollision)", "%s\n\tPhysics: Trying to query Detail Model with no detail physics data", "detailModelA->detailCollision") )
    __debugbreak();
  if ( !detailModelB && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5444, ASSERT_TYPE_ASSERT, "(detailModelB)", "%s\n\tPhysics: Trying to query NULL Detail Model", "detailModelB") )
    __debugbreak();
  if ( !detailModelB->detailCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5445, ASSERT_TYPE_ASSERT, "(detailModelB->detailCollision)", "%s\n\tPhysics: Trying to query Detail Model with no detail physics data", "detailModelB->detailCollision") )
    __debugbreak();
  return HavokPhysics_AreDetailModelsInterchangeable(detailModelA, detailModelB);
}

/*
==============
Physics_AreServerWorldsCreated
==============
*/
_BOOL8 Physics_AreServerWorldsCreated()
{
  return g_physicsServerWorldsCreated;
}

/*
==============
Physics_BatchRaycast
==============
*/
void Physics_BatchRaycast(Physics_WorldId worldId, unsigned int numRays, const vec3_t *starts, const vec3_t *ends, Physics_RaycastExtendedData *extendedData, HavokPhysics_CollisionQueryResult **results)
{
  __int128 v6; 
  Physics_RaycastExtendedData *v7; 
  __int64 v10; 
  const dvar_t *v12; 
  unsigned int v13; 
  unsigned int v14; 
  signed __int64 v15; 
  float *v16; 
  __int64 v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  __int64 v22; 
  hkVector4f endsa[64]; 
  hkVector4f startsa[64]; 
  __int128 v26; 

  v7 = extendedData;
  v10 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8719, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to fire BatchRaycast when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v10 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8720, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to fire BatchRaycast with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v10) )
    __debugbreak();
  if ( !starts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8721, ASSERT_TYPE_ASSERT, "(starts)", "%s\n\tPhysics: Trying to fire BatchRaycast with null starts", "starts") )
    __debugbreak();
  if ( !ends && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8722, ASSERT_TYPE_ASSERT, "(ends)", "%s\n\tPhysics: Trying to fire BatchRaycast with null ends", "ends") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8723, ASSERT_TYPE_ASSERT, "(extendedData)", "%s\n\tPhysics: Trying to fire BatchRaycast with invalid extended data", "extendedData") )
    __debugbreak();
  if ( !results && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8724, ASSERT_TYPE_ASSERT, "(results)", "%s\n\tPhysics: Trying to fire BatchRaycast with invalid results", "results") )
    __debugbreak();
  if ( numRays <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8725, ASSERT_TYPE_ASSERT, "(numRays > 1)", "%s\n\tPhysics: Trying to fire BatchRaycast with too few rays", "numRays > 1") )
    __debugbreak();
  if ( numRays > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8726, ASSERT_TYPE_ASSERT, "(numRays <= PHYSICS_BATCHRAYCAST_MAX_RAYS)", "%s\n\tPhysics: Trying to fire BatchRaycast with too many rays", "numRays <= PHYSICS_BATCHRAYCAST_MAX_RAYS") )
    __debugbreak();
  if ( g_physicsBroadphaseQueriesNotAllowedForWorld[v10] )
  {
    v12 = DVARBOOL_physics_allowQueryDisabling;
    if ( !DVARBOOL_physics_allowQueryDisabling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_allowQueryDisabling") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8727, ASSERT_TYPE_ASSERT, "(!g_physicsBroadphaseQueriesNotAllowedForWorld[worldId] || !Dvar_GetBool_Internal_DebugName( DVARBOOL_physics_allowQueryDisabling, \"physics_allowQueryDisabling\" ))", "%s\n\tCan't perform a physics query here - they have been expressly disallowed", "!g_physicsBroadphaseQueriesNotAllowedForWorld[worldId] || !Dvar_GetBool( physics_allowQueryDisabling )") )
      __debugbreak();
  }
  if ( g_physicsQueriesNotAllowedForWorld[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8728, ASSERT_TYPE_ASSERT, "(!g_physicsQueriesNotAllowedForWorld[worldId])", "%s\n\tCan't perform a physics query here - they have been expressly disallowed", "!g_physicsQueriesNotAllowedForWorld[worldId]") )
    __debugbreak();
  CG_EntityWorkers_CheckHasAnyLock_Physics();
  v13 = 64;
  if ( (int)numRays < 64 )
    v13 = numRays;
  if ( (unsigned int)v10 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8404, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( g_physicsBroadphaseRefreshNeeded[v10] )
    Physics_UpdateBroadphase((Physics_WorldId)v10, 1);
  v14 = 0;
  if ( v13 )
  {
    v15 = (char *)ends - (char *)starts;
    v26 = v6;
    v16 = &starts->v[2];
    v17 = 0i64;
    do
    {
      if ( (*(_DWORD *)(v16 - 2) & 0x7F800000) == 2139095040 || (*(_DWORD *)(v16 - 1) & 0x7F800000) == 2139095040 || (*(_DWORD *)v16 & 0x7F800000) == 2139095040 )
      {
        LODWORD(v22) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8747, ASSERT_TYPE_ASSERT, "(!IS_NAN( starts[rayIdx][0] ) && !IS_NAN( starts[rayIdx][1] ) && !IS_NAN( starts[rayIdx][2] ))", "%s\n\tPhysics: Trying to fire BatchRaycast with invalid start %i", "!IS_NAN( starts[rayIdx][0] ) && !IS_NAN( starts[rayIdx][1] ) && !IS_NAN( starts[rayIdx][2] )", v22) )
          __debugbreak();
      }
      if ( (*(_DWORD *)((_BYTE *)v16 + v15 - 8) & 0x7F800000) == 2139095040 || (*(_DWORD *)((_BYTE *)v16 + v15 - 4) & 0x7F800000) == 2139095040 || (*(_DWORD *)((_BYTE *)v16 + v15) & 0x7F800000) == 2139095040 )
      {
        LODWORD(v22) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8748, ASSERT_TYPE_ASSERT, "(!IS_NAN( ends[rayIdx][0] ) && !IS_NAN( ends[rayIdx][1] ) && !IS_NAN( ends[rayIdx][2] ))", "%s\n\tPhysics: Trying to fire BatchRaycast with invalid end %i", "!IS_NAN( ends[rayIdx][0] ) && !IS_NAN( ends[rayIdx][1] ) && !IS_NAN( ends[rayIdx][2] )", v22) )
          __debugbreak();
      }
      v18 = 0.03125 * *v16;
      v19 = 0.03125 * *(float *)((char *)v16 + v15);
      startsa[v17].m_quad.m128_f32[0] = 0.03125 * *(v16 - 2);
      startsa[v17].m_quad.m128_f32[1] = 0.03125 * *(v16 - 1);
      v20 = 0.03125 * *(float *)((char *)v16 + v15 - 4);
      startsa[v17].m_quad.m128_f32[2] = v18;
      v21 = 0.03125 * *(float *)((char *)v16 + v15 - 8);
      endsa[v17].m_quad.m128_f32[1] = v20;
      endsa[v17].m_quad.m128_f32[0] = v21;
      endsa[v17].m_quad.m128_f32[2] = v19;
      startsa[v17].m_quad.m128_i32[3] = 0;
      endsa[v17++].m_quad.m128_i32[3] = 0;
      ++v14;
      v16 += 3;
    }
    while ( v14 < v13 );
    LODWORD(v10) = worldId;
    v7 = extendedData;
  }
  switch ( (int)v10 )
  {
    case 0:
      Profile_Begin(707);
      break;
    case 1:
      Profile_Begin(708);
      break;
    case 2:
    case 5:
      Profile_Begin(709);
      break;
    case 3:
    case 6:
      Profile_Begin(710);
      break;
    case 4:
    case 7:
      Profile_Begin(711);
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8793, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown world id") )
        __debugbreak();
      break;
  }
  HavokPhysics_BatchRaycast((Physics_WorldId)v10, v13, startsa, endsa, v7, results);
  Profile_EndInternal(NULL);
}

/*
==============
Physics_CalcRigidBodyShapeAABBWorld
==============
*/
void Physics_CalcRigidBodyShapeAABBWorld(Physics_WorldId worldId, unsigned int bodyId, vec3_t *aabbMin, vec3_t *aabbMax)
{
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  __int64 v13; 
  Physics_WorldId v14; 
  hkAabb aabb; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6274, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body aabb when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v14 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6275, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body aabb with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v14) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v13) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6276, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body aabb with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v13) )
      __debugbreak();
  }
  if ( aabbMin == aabbMax )
  {
    LODWORD(v13) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6277, ASSERT_TYPE_ASSERT, "(&aabbMin != &aabbMax)", "%s\n\tPhysics: Trying to Get Rigid Body aabb in world %i with aabbMin == aabbMax", "&aabbMin != &aabbMax", v13) )
      __debugbreak();
  }
  HavokPhysics_CalcRigidBodyShapeAABBWorld(worldId, (hknpBodyId)bodyId, &aabb);
  v8 = 32.0 * aabb.m_min.m_quad.m128_f32[1];
  v9 = 32.0 * aabb.m_min.m_quad.m128_f32[2];
  aabbMin->v[0] = 32.0 * aabb.m_min.m_quad.m128_f32[0];
  v10 = 32.0 * aabb.m_max.m_quad.m128_f32[0];
  aabbMin->v[1] = v8;
  v11 = 32.0 * aabb.m_max.m_quad.m128_f32[1];
  aabbMin->v[2] = v9;
  v12 = 32.0 * aabb.m_max.m_quad.m128_f32[2];
  aabbMax->v[0] = v10;
  aabbMax->v[1] = v11;
  aabbMax->v[2] = v12;
}

/*
==============
Physics_CalcShapeRadius
==============
*/
void Physics_CalcShapeRadius(const hknpShape *shape, float *radiusOut)
{
  float radiusOuta; 

  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9555, ASSERT_TYPE_ASSERT, "(shape)", "%s\n\tPhysics: Trying to calculate shape radius with an invalid shape", "shape") )
    __debugbreak();
  HavokPhysics_CalcShapeRadius(shape, &radiusOuta);
  *radiusOut = radiusOuta * 32.0;
}

/*
==============
Physics_CalculateMassProperties
==============
*/
void Physics_CalculateMassProperties(hknpShape *shape, float mass, hkMassProperties *massProperties)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10143, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to CalculateMassPropertiesForConvexHull when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10144, ASSERT_TYPE_ASSERT, "(shape)", "%s\n\tPhysics: Trying to CalculateMassPropertiesForConvexHull with null shape", "shape") )
    __debugbreak();
  if ( mass <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10145, ASSERT_TYPE_ASSERT, "(mass > 0)", "%s\n\tPhysics: Trying to CalculateMassPropertiesForConvexHull with 0 or negative mass", "mass > 0") )
    __debugbreak();
  if ( !massProperties && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10146, ASSERT_TYPE_ASSERT, "(massProperties)", "%s\n\tPhysics: Trying to CalculateMassPropertiesForConvexHull with NULL mass properties", "massProperties") )
    __debugbreak();
  HavokPhysics_CalculateMassProperties(shape, mass, massProperties);
}

/*
==============
Physics_CheckForGarbageCollectionClient
==============
*/
void Physics_CheckForGarbageCollectionClient(float timeStep)
{
  s_garbageCollectionTimer_Client = timeStep + s_garbageCollectionTimer_Client;
  if ( s_garbageCollectionTimer_Client >= 3600.0 )
  {
    s_garbageCollectionTimer_Client = 0.0;
    HavokPhysics_DoGarbageCollectionClient();
  }
}

/*
==============
Physics_CheckForGarbageCollectionServer
==============
*/
void Physics_CheckForGarbageCollectionServer(float timeStep)
{
  s_garbageCollectionTimer_Server = timeStep + s_garbageCollectionTimer_Server;
  if ( s_garbageCollectionTimer_Server >= 3600.0 )
  {
    s_garbageCollectionTimer_Server = 0.0;
    HavokPhysics_DoGarbageCollectionServer();
  }
}

/*
==============
Physics_CheckShapecastConstraints
==============
*/
void Physics_CheckShapecastConstraints(const hknpShape *shape, const vec3_t *start, const vec3_t *end)
{
  const dvar_t *v3; 
  float value; 
  float v8; 
  float v9; 
  const dvar_t *v10; 
  float v11; 
  float radiusOut[4]; 

  v3 = DVARFLT_physics_shapecastMaxDist;
  if ( !DVARFLT_physics_shapecastMaxDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_shapecastMaxDist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  value = v3->current.value;
  if ( value > 0.0 )
  {
    v8 = end->v[1] - start->v[1];
    v9 = end->v[2] - start->v[2];
    if ( (float)((float)((float)(v8 * v8) + (float)((float)(end->v[0] - start->v[0]) * (float)(end->v[0] - start->v[0]))) + (float)(v9 * v9)) > (float)(value * value) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8843, ASSERT_TYPE_ASSERT, "( Vec3DistanceSq( start, end ) <= SQR( maxDist ) )", "Physics: Shapecast exceeded the maximum distance of %f.", value) )
      __debugbreak();
  }
  v10 = DVARFLT_physics_shapecastMaxRadius;
  if ( !DVARFLT_physics_shapecastMaxRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_shapecastMaxRadius") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v11 = v10->current.value;
  if ( v11 > 0.0 )
  {
    if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9555, ASSERT_TYPE_ASSERT, "(shape)", "%s\n\tPhysics: Trying to calculate shape radius with an invalid shape", "shape") )
      __debugbreak();
    HavokPhysics_CalcShapeRadius(shape, radiusOut);
    if ( (float)(radiusOut[0] * 32.0) > v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8852, ASSERT_TYPE_ASSERT, "( radius <= maxRadius )", "Physics: Shapecast exceeded the radius of %f.", v11) )
      __debugbreak();
  }
}

/*
==============
Physics_CheckWorldReplayDeterminism
==============
*/
void Physics_CheckWorldReplayDeterminism(Physics_WorldId worldId)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v3; 
  Physics_WorldId v4; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2304, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Check world for replay determinism when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v4 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2305, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Check world for replay determinism with invalid world index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v4) )
      __debugbreak();
  }
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v3 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtPhysics_CheckWorldReplayDeterminism");
  HavokPhysics_CheckWorldReplayDeterminism(worldId);
  if ( v3 )
    hkMonitorStream::timerEnd(v3, "Et");
}

/*
==============
Physics_ClearAntilagFlags
==============
*/
void Physics_ClearAntilagFlags(Physics_WorldId worldId)
{
  Physics_WorldId v2; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7803, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to ClearAntilagFlags when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v2 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7804, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to ClearAntilagFlags with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v2) )
      __debugbreak();
  }
  HavokPhysics_ClearAntilagFlags(worldId);
}

/*
==============
Physics_ClearShapeCache
==============
*/
void Physics_ClearShapeCache(void)
{
  if ( g_physicsServerWorldsCreated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10112, ASSERT_TYPE_ASSERT, "(!Physics_AreServerWorldsCreated())", (const char *)&queryFormat, "!Physics_AreServerWorldsCreated()") )
    __debugbreak();
  if ( g_physicsClientWorldsCreated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10113, ASSERT_TYPE_ASSERT, "(!Physics_AreClientWorldsCreated())", (const char *)&queryFormat, "!Physics_AreClientWorldsCreated()") )
    __debugbreak();
  HavokPhysics_ClearShapeCache();
}

/*
==============
Physics_ConvertClosestPointsToLegacyTrace
==============
*/
void Physics_ConvertClosestPointsToLegacyTrace(HavokPhysics_CollisionQueryResult *queryResult, trace_t *trace)
{
  int ClosestPointHitRef; 
  int v5; 
  double ClosestPointHitDistance; 
  unsigned __int16 ClosestPointHitHitGlassId; 
  TraceHitType HitTypeByEntId; 
  int EntityNum; 
  unsigned __int16 v10; 

  memset_0(&trace->position, 0, 0x54ui64);
  trace->fraction = 1.0;
  if ( HavokPhysics_CollisionQueryResult::HasHit(queryResult) )
  {
    ClosestPointHitRef = HavokPhysics_CollisionQueryResult::GetClosestPointHitRef(queryResult, 0);
    trace->fraction = 0.0;
    v5 = ClosestPointHitRef;
    ClosestPointHitDistance = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(queryResult, 0);
    trace->closestPointsPenetration = COERCE_FLOAT(LODWORD(ClosestPointHitDistance) ^ _xmm);
    HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(queryResult, 0, &trace->position);
    HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(queryResult, 0, &trace->normal);
    trace->surfaceFlags = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(queryResult, 0);
    trace->contents = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitContents(queryResult, 0);
    ClosestPointHitHitGlassId = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitGlassId(queryResult, 0);
    if ( ClosestPointHitHitGlassId )
    {
      trace->hitId = ClosestPointHitHitGlassId;
      HitTypeByEntId = TRACE_HITTYPE_GLASS;
    }
    else
    {
      EntityNum = Physics_GetEntityNum(v5);
      v10 = truncate_cast<unsigned short,int>(EntityNum);
      trace->hitId = v10;
      HitTypeByEntId = Physics_GetHitTypeByEntId(v10);
    }
    trace->hitType = HitTypeByEntId;
    *(_WORD *)&trace->allsolid = 257;
    trace->walkable = trace->normal.v[2] >= 0.69999999;
  }
}

/*
==============
Physics_ConvertRayQueryResultToLegacyTrace
==============
*/
void Physics_ConvertRayQueryResultToLegacyTrace(HavokPhysics_CollisionQueryResult *traceResult, HavokPhysics_CollisionQueryResult *queryResult, const Physics_DetailHitData *detailHitData, trace_t *trace)
{
  int RaycastHitRef; 
  unsigned __int16 RaycastHitCoverWallId; 
  double RaycastHitFraction; 
  unsigned __int16 RaycastHitGlassId; 
  TraceHitType HitTypeByEntId; 
  int v13; 
  const ScriptableDef *def; 
  int EntityNum; 
  unsigned __int16 v16; 
  bool v17; 
  bool v18; 
  unsigned int RaycastHitBodyId; 
  const char *RigidBodyName; 

  memset_0(&trace->position, 0, 0x54ui64);
  trace->fraction = 1.0;
  if ( !HavokPhysics_CollisionQueryResult::HasHit(traceResult) )
    return;
  RaycastHitRef = HavokPhysics_CollisionQueryResult::GetRaycastHitRef(traceResult, 0);
  RaycastHitCoverWallId = HavokPhysics_CollisionQueryResult::GetRaycastHitCoverWallId(traceResult, 0);
  RaycastHitFraction = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(traceResult, 0);
  trace->fraction = *(float *)&RaycastHitFraction;
  HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(traceResult, 0, &trace->position);
  HavokPhysics_CollisionQueryResult::GetRaycastHitNormal(traceResult, 0, &trace->normal);
  trace->surfaceFlags = HavokPhysics_CollisionQueryResult::GetRaycastHitSurfFlags(traceResult, 0);
  trace->contents = HavokPhysics_CollisionQueryResult::GetRaycastHitContents(traceResult, 0);
  RaycastHitGlassId = HavokPhysics_CollisionQueryResult::GetRaycastHitGlassId(traceResult, 0);
  if ( RaycastHitGlassId )
  {
    trace->hitId = RaycastHitGlassId;
    HitTypeByEntId = TRACE_HITTYPE_GLASS;
    goto LABEL_12;
  }
  if ( (RaycastHitRef & 0x3E000000) != 0x10000000 || ((RaycastHitRef >> 22) & 3) != 0 || (v13 = RaycastHitRef & 0x3FFFFF, (def = ScriptableSv_GetInstanceCommonContext(RaycastHitRef & 0x3FFFFF)->def) == NULL) || !ScriptableDef_IsStandaloneRequested(def) )
  {
    if ( !Physics_IsClientEntitylessScriptable(RaycastHitRef) )
    {
      EntityNum = Physics_GetEntityNum(RaycastHitRef);
      v16 = truncate_cast<unsigned short,int>(EntityNum);
      trace->hitId = v16;
      HitTypeByEntId = Physics_GetHitTypeByEntId(v16);
      goto LABEL_12;
    }
    v13 = RaycastHitRef & 0x3FFFFF;
  }
  trace->hitId = v13;
  HitTypeByEntId = TRACE_HITTYPE_SCRIPTABLE;
LABEL_12:
  trace->hitType = HitTypeByEntId;
  v17 = trace->fraction > 0.0;
  trace->allsolid = 0;
  v18 = !v17 && queryResult && HavokPhysics_CollisionQueryResult::HasHit(queryResult);
  trace->startsolid = v18;
  trace->walkable = trace->normal.v[2] >= 0.69999999;
  if ( detailHitData && detailHitData->isValid )
  {
    trace->surfaceFlags = detailHitData->surfaceflags;
    trace->modelIndex = detailHitData->modelIndex;
    trace->partName = detailHitData->partName;
    trace->partGroup = detailHitData->partGroup;
  }
  else
  {
    RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(traceResult, 0);
    RigidBodyName = Physics_GetRigidBodyName(traceResult->m_worldId, RaycastHitBodyId);
    trace->partName = SL_FindString(RigidBodyName);
  }
  if ( RaycastHitCoverWallId != 0xFFFF )
  {
    trace->hitSubType = TRACE_HITSUBTYPE_COVERWALL;
    trace->subTypeData.coverWall.id = RaycastHitCoverWallId;
  }
}

/*
==============
Physics_ConvertRefSystemToString
==============
*/
void Physics_ConvertRefSystemToString(int ref, Physics_WorldId worldId, char *string, int stringLen)
{
  unsigned __int64 v4; 
  int v8; 
  unsigned __int16 v9; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  char *v13; 
  LocalClientNum_t LocalClientForWorld; 
  const char *v15; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  const char *v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  const char *v25; 
  const char *v26; 
  const char *v27; 
  const char *v28; 
  char *fmt; 
  __int64 v30; 
  DynEntityBasis basisOut; 
  unsigned int dynEntIdOut; 

  v4 = stringLen;
  if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4969, ASSERT_TYPE_ASSERT, "(string)", (const char *)&queryFormat, "string") )
    __debugbreak();
  if ( (int)v4 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4970, ASSERT_TYPE_ASSERT, "(stringLen > 0)", (const char *)&queryFormat, "stringLen > 0") )
    __debugbreak();
  v8 = ref >> 30;
  v9 = truncate_cast<unsigned short,int>((unsigned __int16)ref);
  switch ( (ref >> 25) & 0x1F )
  {
    case 0:
      v10 = "StaticModel";
      if ( !BYTE2(ref) )
        v10 = "World";
      v11 = (char *)&queryFormat.fmt + 3;
      fmt = (char *)v10;
      v12 = "%s%s";
      v13 = string;
      if ( v8 )
        v11 = "Detail ";
      goto LABEL_39;
    case 1:
      LocalClientForWorld = Physics_GetLocalClientForWorld(worldId);
      if ( LocalClientForWorld == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4993, ASSERT_TYPE_ASSERT, "(localClientNum != LOCAL_CLIENT_INVALID)", (const char *)&queryFormat, "localClientNum != LOCAL_CLIENT_INVALID") )
        __debugbreak();
      DynEnt_GetBasisAndDynEntId(ref, LocalClientForWorld, &basisOut, &dynEntIdOut);
      v15 = "Brush";
      if ( basisOut == DYNENT_BASIS_MODEL )
        v15 = "Model";
      v16 = "%sDynent %s %u";
      LODWORD(v30) = dynEntIdOut;
      fmt = (char *)v15;
      goto LABEL_56;
    case 2:
      LODWORD(fmt) = v9;
      v17 = (char *)&queryFormat.fmt + 3;
      if ( v8 )
        v17 = "Detail ";
      Com_sprintf(string, v4, "%sServer Entity %u", v17, fmt);
      return;
    case 3:
      LODWORD(fmt) = v9;
      v18 = (char *)&queryFormat.fmt + 3;
      if ( v8 )
        v18 = "Detail ";
      Com_sprintf(string, v4, "%sServer Character for Entity %u", v18, fmt);
      return;
    case 4:
      LODWORD(fmt) = v9;
      v19 = (char *)&queryFormat.fmt + 3;
      if ( v8 )
        v19 = "Detail ";
      Com_sprintf(string, v4, "%sClient Entity %u", v19, fmt);
      return;
    case 5:
      LODWORD(fmt) = v9;
      v20 = (char *)&queryFormat.fmt + 3;
      if ( v8 )
        v20 = "Detail ";
      Com_sprintf(string, v4, "%sClient Character for Entity %u", v20, fmt);
      return;
    case 6:
      v21 = v9;
      v16 = "%sRagdoll %i Body %u";
      v22 = BYTE2(ref);
      goto LABEL_55;
    case 7:
      v11 = (char *)&queryFormat.fmt + 3;
      if ( !(BYTE2(ref) >> 6) )
      {
        v23 = v9;
        v12 = "%sFX Element %i";
        LODWORD(fmt) = v23 | ((BYTE2(ref) & 0x3F) << 16);
        v13 = string;
        if ( v8 )
          v11 = "Detail ";
LABEL_39:
        Com_sprintf(v13, v4, v12, v11, fmt);
        return;
      }
      if ( BYTE2(ref) >> 6 == 1 )
      {
        v24 = v9;
        v12 = "%sFunc Glass piece %i";
        LODWORD(fmt) = v24 | ((BYTE2(ref) & 0x3F) << 16);
        v13 = string;
        if ( v8 )
          v11 = "Detail ";
        goto LABEL_39;
      }
      if ( v8 )
        v11 = "Detail ";
      Com_sprintf(string, v4, "%sUnknown Particle", v11);
      return;
    case 8:
      v25 = (char *)&queryFormat.fmt + 3;
      if ( v8 )
        v25 = "Detail ";
      LODWORD(fmt) = ref & 0x3FFFFF;
      Com_sprintf(string, v4, "%sScriptable Collision %i", v25, fmt);
      return;
    case 9:
      LODWORD(fmt) = v9;
      v26 = (char *)&queryFormat.fmt + 3;
      if ( v8 )
        v26 = "Detail ";
      Com_sprintf(string, v4, "%sServer Item %u", v26, fmt);
      return;
    case 0xA:
      LODWORD(fmt) = v9;
      v27 = (char *)&queryFormat.fmt + 3;
      if ( v8 )
        v27 = "Detail ";
      Com_sprintf(string, v4, "%sClient Model %u ", v27, fmt);
      return;
    case 0xB:
      v22 = v9;
      v16 = "%sCloth Proxy %u:%u";
      goto LABEL_54;
    case 0xC:
      v22 = v9;
      v16 = "%sLightweightParticle proxy %u:%u";
LABEL_54:
      v21 = BYTE2(ref);
LABEL_55:
      LODWORD(v30) = v21;
      LODWORD(fmt) = v22;
LABEL_56:
      v28 = (char *)&queryFormat.fmt + 3;
      if ( v8 )
        v28 = "Detail ";
      Com_sprintf(string, v4, v16, v28, fmt, v30);
      return;
    default:
      return;
  }
}

/*
==============
Physics_ConvertShapeQueryResultToLegacyTrace
==============
*/
void Physics_ConvertShapeQueryResultToLegacyTrace(HavokPhysics_CollisionQueryResult *traceResult, HavokPhysics_CollisionQueryResult *queryResult, trace_t *trace)
{
  int ShapecastHitRef; 
  double ShapecastHitFraction; 
  unsigned __int16 ShapecastHitHitGlassId; 
  TraceHitType HitTypeByEntId; 
  const ScriptableDef *def; 
  int EntityNum; 
  unsigned __int16 v12; 
  bool v13; 
  bool v14; 
  unsigned int ShapecastHitBodyId; 
  const char *RigidBodyName; 
  double ClosestPointHitDistance; 

  memset_0(&trace->position, 0, 0x54ui64);
  trace->fraction = 1.0;
  if ( HavokPhysics_CollisionQueryResult::HasHit(traceResult) )
  {
    ShapecastHitRef = HavokPhysics_CollisionQueryResult::GetShapecastHitRef(traceResult, 0);
    ShapecastHitFraction = HavokPhysics_CollisionQueryResult::GetShapecastHitFraction(traceResult, 0);
    trace->fraction = *(float *)&ShapecastHitFraction;
    HavokPhysics_CollisionQueryResult::GetShapecastHitContactPosition(traceResult, 0, &trace->position);
    HavokPhysics_CollisionQueryResult::GetShapecastHitHitContactNormal(traceResult, 0, &trace->normal);
    trace->surfaceFlags = HavokPhysics_CollisionQueryResult::GetShapecastHitHitSurfFlags(traceResult, 0);
    trace->contents = HavokPhysics_CollisionQueryResult::GetShapecastHitHitContents(traceResult, 0);
    ShapecastHitHitGlassId = HavokPhysics_CollisionQueryResult::GetShapecastHitHitGlassId(traceResult, 0);
    if ( ShapecastHitHitGlassId )
    {
      trace->hitId = ShapecastHitHitGlassId;
      HitTypeByEntId = TRACE_HITTYPE_GLASS;
    }
    else if ( (ShapecastHitRef & 0x3E000000) == 0x10000000 && ((ShapecastHitRef >> 22) & 3) == 0 && (def = ScriptableSv_GetInstanceCommonContext(ShapecastHitRef & 0x3FFFFF)->def) != NULL && ScriptableDef_IsStandaloneRequested(def) || Physics_IsClientEntitylessScriptable(ShapecastHitRef) )
    {
      trace->hitId = truncate_cast<unsigned short,int>((unsigned __int16)ShapecastHitRef);
      HitTypeByEntId = TRACE_HITTYPE_SCRIPTABLE;
    }
    else
    {
      EntityNum = Physics_GetEntityNum(ShapecastHitRef);
      v12 = truncate_cast<unsigned short,int>(EntityNum);
      trace->hitId = v12;
      HitTypeByEntId = Physics_GetHitTypeByEntId(v12);
    }
    trace->hitType = HitTypeByEntId;
    v13 = trace->fraction > 0.0;
    trace->allsolid = 0;
    v14 = !v13 && queryResult && HavokPhysics_CollisionQueryResult::HasHit(queryResult);
    trace->startsolid = v14;
    trace->walkable = trace->normal.v[2] >= 0.69999999;
    ShapecastHitBodyId = HavokPhysics_CollisionQueryResult::GetShapecastHitBodyId(traceResult, 0);
    RigidBodyName = Physics_GetRigidBodyName(traceResult->m_worldId, ShapecastHitBodyId);
    trace->partName = SL_FindString(RigidBodyName);
    if ( queryResult )
    {
      if ( HavokPhysics_CollisionQueryResult::HasHit(queryResult) )
      {
        ClosestPointHitDistance = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(queryResult, 0);
        trace->closestPointsPenetration = COERCE_FLOAT(LODWORD(ClosestPointHitDistance) ^ _xmm);
      }
    }
  }
}

/*
==============
Physics_CopyPhysicsAsset
==============
*/
void Physics_CopyPhysicsAsset(PhysicsAsset *from, PhysicsAsset *to)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3783, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Copy PhysicsAsset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (to->usageCounter.serverEnt || to->usageCounter.clientEnt || to->usageCounter.dynEnt) && DB_ShouldUpdateGameOnPhysicsChange() )
  {
    if ( to->usageCounter.serverEnt )
      G_Utils_PhysicsPrepareForPhysicsAssetChange(to);
    if ( to->usageCounter.clientEnt )
      CG_Entity_PhysicsPrepareForPhysicsAssetChange(to);
    if ( to->usageCounter.dynEnt )
      DynEnt_PrepareForPhysicsAssetChange(to);
  }
  HavokPhysics_CopyPhysicsAsset(from, to);
}

/*
==============
Physics_CopyPhysicsSFXEventAsset
==============
*/
void Physics_CopyPhysicsSFXEventAsset(PhysicsSFXEventAsset *from, PhysicsSFXEventAsset *to)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3597, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to copy PhysicsSFXEventAsset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  HavokPhysics_CopyPhysicsSFXEventAsset(from, to);
}

/*
==============
Physics_CopyPhysicsVFXEventAsset
==============
*/
void Physics_CopyPhysicsVFXEventAsset(PhysicsVFXEventAsset *from, PhysicsVFXEventAsset *to)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3652, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to copy PhysicsVFXEventAsset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  HavokPhysics_CopyPhysicsVFXEventAsset(from, to);
}

/*
==============
Physics_CopyXModelAsset
==============
*/
void Physics_CopyXModelAsset(XModel *from, XModel *to)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4297, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Copy XModel Asset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (to->physicsUsageCounter.serverEnt || to->physicsUsageCounter.clientEnt || to->physicsUsageCounter.dynEnt) && DB_ShouldUpdateGameOnPhysicsChange() )
  {
    if ( to->physicsUsageCounter.serverEnt )
      G_Utils_PhysicsPrepareForXModelChange(to);
    if ( to->physicsUsageCounter.clientEnt )
      CG_Entity_PhysicsPrepareForXModelChange(to);
    if ( to->physicsUsageCounter.dynEnt )
      DynEnt_PrepareForXModelChange(to);
  }
  HavokPhysics_CopyXModelAsset(from, to);
}

/*
==============
Physics_CopyXModelDetailCollisionAsset
==============
*/
void Physics_CopyXModelDetailCollisionAsset(XModelDetailCollision *from, XModelDetailCollision *to)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4139, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Copy XModelDetailCollision Asset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( DB_ShouldUpdateGameOnPhysicsChange() )
  {
    G_Utils_PhysicsPrepareForXModelDetailCollisionChange(to);
    CG_Entity_PhysicsPrepareForXModelDetailCollisionChange(to);
    DynEnt_PrepareForXModelDetailCollisionChange(to);
  }
  HavokPhysics_CopyXModelDetailCollisionAsset(from, to);
}

/*
==============
Physics_CreateClientWorlds
==============
*/
void Physics_CreateClientWorlds(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v2; 
  const dvar_t *v3; 
  int v4; 
  Physics_WorldId v5; 
  Physics_WorldId v6; 
  int integer; 
  float v8; 
  unsigned int v9; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  unsigned int IndexByName; 
  unsigned int v14; 
  unsigned int v15; 
  OmnvarData *Data; 
  OmnvarData *v17; 
  OmnvarData *v18; 
  OmnvarData *v19; 
  float value; 
  Physics_WorldId v21; 
  __int64 v22; 

  v1 = localClientNum;
  Sys_EnterCriticalSection(CRITSECT_PHYS_WORLDCREATE);
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1842, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to CreateServerWorlds when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  v2 = g_physicsClientWorldsCreated;
  if ( _bittest(&v2, v1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1843, ASSERT_TYPE_ASSERT, "(( g_physicsClientWorldsCreated & ( 1 << localClientNum ) ) == 0)", "%s\n\tPhysics: Trying to CreateClientWorlds twice for the same client", "( g_physicsClientWorldsCreated & ( 1 << localClientNum ) ) == 0") )
    __debugbreak();
  Physics_SetupClientWorldCInfos();
  v3 = DCONST_DVARINT_physics_ExtraClientAuthFixedMemory;
  v4 = 3 * v1;
  v5 = 3 * v1 + 2;
  v6 = 3 * v1 + 4;
  if ( !DCONST_DVARINT_physics_ExtraClientAuthFixedMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_ExtraClientAuthFixedMemory") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  integer = v3->current.integer;
  v8 = cl_maxLocalClients;
  v9 = 0x700000u / LODWORD(cl_maxLocalClients);
  v22 = 16 * (5i64 * v4 + 10);
  v10 = 2 * (5i64 * v4 + 15);
  *(int *)((char *)&s_physicsWorldCInfos[0].persistentBufferSize + v22) = 0x700000u / LODWORD(cl_maxLocalClients);
  *(char **)((char *)&s_physicsWorldCInfos[0].persistentBuffer + v22) = &s_physicsWorldPersistentBufferSizeClientPredictive[(int)(v1 * v9)];
  v11 = (integer + 13631488) / SLODWORD(v8);
  v12 = 2 * (5i64 * v4 + 20);
  *(&s_physicsWorldCInfos[0].persistentBufferSize + 2 * v10) = v11;
  *((_QWORD *)&s_physicsWorldCInfos[0].persistentBuffer + v10) = &s_physicsWorldPersistentBufferSizeClientAuthoritative[(int)v1 * v11];
  *(&s_physicsWorldCInfos[0].persistentBufferSize + 2 * v12) = 0x40000u / LODWORD(v8);
  *((_QWORD *)&s_physicsWorldCInfos[0].persistentBuffer + v12) = &s_physicsWorldPersistentBufferSizeClientDetail[(int)(v1 * (0x40000u / LODWORD(v8)))];
  s_physicsClientWorldGravityOmnvarIdxX = BG_Omnvar_GetIndexByName("physics_gravity_x");
  s_physicsClientWorldGravityOmnvarIdxY = BG_Omnvar_GetIndexByName("physics_gravity_y");
  IndexByName = BG_Omnvar_GetIndexByName("physics_gravity_z");
  s_physicsClientWorldGravityOmnvarIdxZ = IndexByName;
  if ( (s_physicsClientWorldGravityOmnvarIdxX == -1 || s_physicsClientWorldGravityOmnvarIdxY == -1 || IndexByName == -1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1866, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Physics Client World Init can't find gravity omnvars - check omnvar.csv") )
    __debugbreak();
  s_physicsClientWorldGravityRagdollOmnvarIdx = BG_Omnvar_GetIndexByName("physics_gravity_ragdoll");
  s_physicsClientWorldGravityDynentOmnvarIdx = BG_Omnvar_GetIndexByName("physics_gravity_dynent");
  v14 = BG_Omnvar_GetIndexByName("physics_gravity_particle");
  v15 = s_physicsClientWorldGravityRagdollOmnvarIdx;
  s_physicsClientWorldGravityParticleOmnvarIdx = v14;
  if ( s_physicsClientWorldGravityRagdollOmnvarIdx == -1 || s_physicsClientWorldGravityDynentOmnvarIdx == -1 || v14 == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1874, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Physics Client World Init can't find gravity modifier omnvars - check omnvar.csv") )
      __debugbreak();
    v15 = s_physicsClientWorldGravityRagdollOmnvarIdx;
  }
  Data = CG_Omnvar_GetData((LocalClientNum_t)v1, v15);
  v17 = CG_Omnvar_GetData((LocalClientNum_t)v1, s_physicsClientWorldGravityDynentOmnvarIdx);
  v18 = CG_Omnvar_GetData((LocalClientNum_t)v1, s_physicsClientWorldGravityParticleOmnvarIdx);
  v19 = v18;
  if ( (!Data || !v17 || !v18) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1881, ASSERT_TYPE_ASSERT, "(ragdollScalarValue && dynentScalarValue && particleScalarValue)", (const char *)&queryFormat, "ragdollScalarValue && dynentScalarValue && particleScalarValue") )
    __debugbreak();
  g_physicsClientWorldGravityScalars[0][v1] = 1.0;
  g_physicsClientWorldGravityScalars[1][v1] = 1.0;
  g_physicsClientWorldGravityScalars[2][v1] = 1.0;
  g_physicsClientWorldGravityScalars[3][v1] = 1.0;
  g_physicsClientWorldGravityScalars[4][v1] = 1.0;
  g_physicsClientWorldGravityScalars[5][v1] = 1.0;
  g_physicsClientWorldGravityScalars[6][v1] = 1.0;
  g_physicsClientWorldGravityScalars[7][v1] = 1.0;
  g_physicsClientWorldGravityScalars[8][v1] = 1.0;
  g_physicsClientWorldGravityScalars[9][v1] = 1.0;
  g_physicsClientWorldGravityScalars[10][v1] = 1.0;
  g_physicsClientWorldGravityScalars[11][v1] = 1.0;
  g_physicsClientWorldGravityScalars[12][v1] = 1.0;
  LODWORD(g_physicsClientWorldGravityScalars[6][v1]) = Data->current.integer;
  value = v17->current.value;
  v21 = 3 * v1 + 2;
  g_physicsClientWorldGravityScalars[1][v1] = value;
  LODWORD(g_physicsClientWorldGravityScalars[7][v1]) = v19->current.integer;
  if ( v5 <= v6 )
  {
    do
      Physics_CreateWorld(v21++);
    while ( v21 <= v6 );
  }
  PhysicsForceAction_Init(v5, *(int *)((char *)&s_physicsWorldCInfos[0].bodyCountMax + v22));
  PhysicsForceAction_Init((const Physics_WorldId)(v4 + 3), s_physicsWorldCInfos[v4 + 3].bodyCountMax);
  PhysicsGravityModifier_Init(v5, *(int *)((char *)&s_physicsWorldCInfos[0].motionCountMax + v22));
  PhysicsGravityModifier_Init((const Physics_WorldId)(v4 + 3), s_physicsWorldCInfos[v4 + 3].motionCountMax);
  CG_PhysicsVolume_Init((LocalClientNum_t)v1);
  PhysicsSVFX_RegisterWorld((Physics_WorldId)(v4 + 3), (LocalClientNum_t)v1, s_physicsWorldCInfos[v4 + 3].bodyCountMax);
  g_physicsClientWorldsCreated |= 1 << v1;
  s_garbageCollectionTimer_Client = 0.0;
  Sys_LeaveCriticalSection(CRITSECT_PHYS_WORLDCREATE);
}

/*
==============
Physics_CreateDevGui
==============
*/
void Physics_CreateDevGui(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v2; 
  int cmdsize; 
  int v4; 
  __int64 i; 

  v1 = localClientNum;
  Sys_EnterCriticalSection(CRITSECT_CBUF);
  v2 = truncate_cast<int,unsigned __int64>(0x14ui64);
  cmdsize = s_cmd_superUser_textArray[v1].cmdsize;
  v4 = v2 + 1;
  if ( cmdsize + v2 + 1 <= s_cmd_superUser_textArray[v1].maxsize )
  {
    for ( i = cmdsize - 1; i >= 0; --i )
      s_cmd_superUser_textArray[v1].data[v4 + i] = s_cmd_superUser_textArray[v1].data[i];
    memcpy_0(s_cmd_superUser_textArray[v1].data, "exec devgui_physics\n", v4 - 1);
    s_cmd_superUser_textArray[v1].data[v4 - 1] = 10;
    s_cmd_superUser_textArray[v1].cmdsize += v4;
  }
  else
  {
    Com_PrintError(1, "Cbuf_InsertText overflowed\n");
  }
  Sys_LeaveCriticalSection(CRITSECT_CBUF);
}

/*
==============
Physics_CreateInstance
==============
*/
unsigned int Physics_CreateInstance(Physics_WorldId worldId)
{
  Physics_WorldId v3; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5206, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to create an instance when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v3 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5207, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to create an instance with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v3) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  return HavokPhysics_CreateInstance(worldId);
}

/*
==============
Physics_CreateServerWorlds
==============
*/
void Physics_CreateServerWorlds(const unsigned int maxClients)
{
  int i; 
  hkMonitorStream *Value; 
  hkMonitorStream *v4; 
  __int64 v5; 

  Sys_EnterCriticalSection(CRITSECT_PHYS_WORLDCREATE);
  if ( maxClients - 1 > 0xC7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1797, ASSERT_TYPE_ASSERT, "((maxClients > 0) && (maxClients <= ((1 >= 200) ? 1 : 200)))", (const char *)&queryFormat, "(maxClients > 0) && (maxClients <= MAX_CLIENTS_STATIC)") )
    __debugbreak();
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1801, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to CreateServerWorlds when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( g_physicsServerWorldsCreated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1802, ASSERT_TYPE_ASSERT, "(!g_physicsServerWorldsCreated)", "%s\n\tPhysics: Trying to CreateServerWorlds twice", "!g_physicsServerWorldsCreated") )
    __debugbreak();
  Physics_SetupServerWorldCInfos(maxClients);
  for ( i = 0; i <= 1; ++i )
  {
    Physics_CreateWorld((Physics_WorldId)i);
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2304, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Check world for replay determinism when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( (unsigned int)i > 7 )
    {
      LODWORD(v5) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2305, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Check world for replay determinism with invalid world index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v5) )
        __debugbreak();
    }
    Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
    v4 = Value;
    if ( Value )
      hkMonitorStream::timerBegin(Value, "TtPhysics_CheckWorldReplayDeterminism");
    HavokPhysics_CheckWorldReplayDeterminism((Physics_WorldId)i);
    if ( v4 )
      hkMonitorStream::timerEnd(v4, "Et");
  }
  PhysicsForceAction_Init(PHYSICS_WORLD_ID_FIRST, s_physicsWorldCInfos[0].bodyCountMax);
  PhysicsGravityModifier_Init(PHYSICS_WORLD_ID_FIRST, s_physicsWorldCInfos[0].motionCountMax);
  G_PhysicsVolume_Init();
  s_garbageCollectionTimer_Server = 0.0;
  g_physicsServerWorldsCreated = 1;
  Sys_LeaveCriticalSection(CRITSECT_PHYS_WORLDCREATE);
}

/*
==============
Physics_CreateShapeCapsule
==============
*/
hknpShape *Physics_CreateShapeCapsule(Physics_WorldId worldId, const vec3_t *center, float halfHeight, float radius, const vec3_t *majorAxis, char *optionalInplaceBuffer, int optionalInplaceBufferSize, Physics_ShapeStorage shapeStorage)
{
  float v11; 
  float v12; 
  float v14; 
  float v15; 
  hkVector4f centera; 
  hkVector4f v21; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9923, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to CreateShapeCapsule when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( ((LODWORD(center->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(center->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(center->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9924, ASSERT_TYPE_ASSERT, "(!IS_NAN( center[0] ) && !IS_NAN( center[1] ) && !IS_NAN( center[2] ))", "%s\n\tPhysics: Trying to CreateShapeCapsule with invalid center", "!IS_NAN( center[0] ) && !IS_NAN( center[1] ) && !IS_NAN( center[2] )") )
    __debugbreak();
  if ( halfHeight < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9925, ASSERT_TYPE_ASSERT, "(halfHeight >= 0.f)", "%s\n\tPhysics: Trying to CreateShapeCapsule with bad halfheight", "halfHeight >= 0.f") )
    __debugbreak();
  if ( radius <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9926, ASSERT_TYPE_ASSERT, "(radius > 0.f)", "%s\n\tPhysics: Trying to CreateShapeCapsule with bad radius", "radius > 0.f") )
    __debugbreak();
  if ( ((LODWORD(majorAxis->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(majorAxis->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(majorAxis->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9927, ASSERT_TYPE_ASSERT, "(!IS_NAN( majorAxis[0] ) && !IS_NAN( majorAxis[1] ) && !IS_NAN( majorAxis[2] ))", "%s\n\tPhysics: Trying to CreateShapeCapsule with invalid majorAxis", "!IS_NAN( majorAxis[0] ) && !IS_NAN( majorAxis[1] ) && !IS_NAN( majorAxis[2] )") )
    __debugbreak();
  if ( (float)((float)((float)(majorAxis->v[0] * majorAxis->v[0]) + (float)(majorAxis->v[1] * majorAxis->v[1])) + (float)(majorAxis->v[2] * majorAxis->v[2])) != 1.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9928, ASSERT_TYPE_ASSERT, "(Vec3LengthSq( majorAxis ) == 1.f)", "%s\n\tPhysics: Trying to CreateShapeCapsule with non normal majorAxis", "Vec3LengthSq( majorAxis ) == 1.f") )
    __debugbreak();
  if ( optionalInplaceBuffer && optionalInplaceBufferSize <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9929, ASSERT_TYPE_ASSERT, "(!optionalInplaceBuffer || optionalInplaceBufferSize > 0)", "%s\n\tPhysics: Trying to CreateShapeCapsule with bad inplace buffer data", "!optionalInplaceBuffer || optionalInplaceBufferSize > 0") )
    __debugbreak();
  if ( shapeStorage == Permanent )
    CG_EntityWorkers_CheckHasWriteLock_Physics();
  if ( halfHeight > 0.0099999998 )
  {
    v14 = 0.03125 * center->v[0];
    v15 = 0.03125 * center->v[2];
    v21.m_quad.m128_f32[1] = 0.03125 * center->v[1];
    _XMM2 = LODWORD(majorAxis->v[0]);
    __asm
    {
      vinsertps xmm2, xmm2, dword ptr [rdi+4], 10h
      vinsertps xmm2, xmm2, dword ptr [rdi+8], 20h ; ' '
      vinsertps xmm2, xmm2, xmm6, 30h ; '0'
    }
    centera.m_quad = _XMM2;
    v21.m_quad.m128_f32[0] = v14;
    v21.m_quad.m128_f32[2] = v15;
    v21.m_quad.m128_f32[3] = 0.0;
    return HavokPhysics_CreateShapeCapsuleCenterHeight(worldId, &v21, halfHeight * 0.03125, radius * 0.03125, &centera, optionalInplaceBuffer, optionalInplaceBufferSize, shapeStorage);
  }
  else
  {
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9900, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to CreateShapeSphere when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( ((LODWORD(center->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(center->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(center->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9901, ASSERT_TYPE_ASSERT, "(!IS_NAN( center[0] ) && !IS_NAN( center[1] ) && !IS_NAN( center[2] ))", "%s\n\tPhysics: Trying to CreateShapeSphere with invalid center", "!IS_NAN( center[0] ) && !IS_NAN( center[1] ) && !IS_NAN( center[2] )") )
      __debugbreak();
    if ( radius <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9902, ASSERT_TYPE_ASSERT, "(radius > 0.f)", "%s\n\tPhysics: Trying to CreateShapeSphere with bad radius", "radius > 0.f") )
      __debugbreak();
    if ( optionalInplaceBuffer && optionalInplaceBufferSize <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9903, ASSERT_TYPE_ASSERT, "(!optionalInplaceBuffer || optionalInplaceBufferSize > 0)", "%s\n\tPhysics: Trying to CreateShapeSphere with bad inplace buffer data", "!optionalInplaceBuffer || optionalInplaceBufferSize > 0") )
      __debugbreak();
    v11 = 0.03125 * center->v[0];
    v12 = 0.03125 * center->v[1];
    centera.m_quad.m128_f32[2] = 0.03125 * center->v[2];
    centera.m_quad.m128_f32[0] = v11;
    centera.m_quad.m128_f32[1] = v12;
    centera.m_quad.m128_f32[3] = 0.0;
    return HavokPhysics_CreateShapeSphere(&centera, radius * 0.03125, optionalInplaceBuffer, optionalInplaceBufferSize);
  }
}

/*
==============
Physics_CreateShapeCapsuleUpAxis
==============
*/
hknpShape *Physics_CreateShapeCapsuleUpAxis(Physics_WorldId worldId, const vec3_t *center, float halfHeight, float radius, char *optionalInplaceBuffer, int optionalInplaceBufferSize, Physics_ShapeStorage shapeStorage)
{
  vec3_t majorAxis; 

  majorAxis.v[0] = 0.0;
  majorAxis.v[1] = 0.0;
  majorAxis.v[2] = FLOAT_1_0;
  return Physics_CreateShapeCapsule(worldId, center, halfHeight, radius, &majorAxis, optionalInplaceBuffer, optionalInplaceBufferSize, shapeStorage);
}

/*
==============
Physics_CreateShapeCompound
==============
*/
hknpShape *Physics_CreateShapeCompound(hkArray<hknpShapeInstance,hkContainerHeapAllocator> *instanceArray)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10066, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Physics_CreateShapeCompound when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  return HavokPhysics_CreateShapeCompound(instanceArray);
}

/*
==============
Physics_CreateShapeConvexHull
==============
*/
hknpShape *Physics_CreateShapeConvexHull(const vec3_t *verts, unsigned int numVertices, unsigned int maxNumGeneratedVertices, bool useCache)
{
  __int64 v6; 
  float *v8; 
  hkMemoryAllocator *v9; 
  int m_size; 
  hknpShape *v11; 
  hkMemoryAllocator *v12; 
  hkArray<hkVector4f,hkContainerHeapAllocator> array; 
  __int64 v15; 
  hkVector4f v16; 

  v15 = -2i64;
  v6 = numVertices;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10024, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to CreateShapeConvexHull when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v6 < 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10025, ASSERT_TYPE_ASSERT, "(numVertices >= 3)", "%s\n\tPhysics: Trying to CreateShapeConvexHull with bad vertex count", "numVertices >= 3") )
    __debugbreak();
  array.m_data = NULL;
  array.m_size = 0;
  array.m_capacityAndFlags = 0x80000000;
  if ( (_DWORD)v6 )
  {
    v16.m_quad.m128_f32[3] = 0.0;
    v8 = &verts->v[2];
    do
    {
      v16.m_quad.m128_f32[0] = 0.03125 * *(v8 - 2);
      v16.m_quad.m128_f32[1] = 0.03125 * *(v8 - 1);
      v16.m_quad.m128_f32[2] = 0.03125 * *v8;
      v9 = hkMemHeapAllocator();
      m_size = array.m_size;
      if ( array.m_size == (array.m_capacityAndFlags & 0x3FFFFFFF) )
      {
        hkArrayUtil::_reserveMore(v9, &array, 16);
        m_size = array.m_size;
      }
      array.m_data[m_size] = (hkVector4f)v16.m_quad;
      ++array.m_size;
      v8 += 3;
      --v6;
    }
    while ( v6 );
  }
  v11 = HavokPhysics_CreateShapeConvexHull(&array, maxNumGeneratedVertices, useCache);
  v12 = hkMemHeapAllocator();
  array.m_size = 0;
  if ( array.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v12, array.m_data, 16, array.m_capacityAndFlags & 0x3FFFFFFF);
  return v11;
}

/*
==============
Physics_CreateShapeConvexHullFromAABB
==============
*/
hknpShape *Physics_CreateShapeConvexHullFromAABB(const vec3_t *mins, const vec3_t *maxs)
{
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  hkVector4f maxsa; 
  hkVector4f minsa; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10046, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Physics_CreateShapeCuboid when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  v4 = 0.03125 * mins->v[1];
  v5 = 0.03125 * mins->v[2];
  minsa.m_quad.m128_f32[0] = 0.03125 * mins->v[0];
  v6 = 0.03125 * maxs->v[1];
  minsa.m_quad.m128_f32[1] = v4;
  v7 = 0.03125 * maxs->v[2];
  minsa.m_quad.m128_f32[2] = v5;
  maxsa.m_quad.m128_f32[0] = 0.03125 * maxs->v[0];
  maxsa.m_quad.m128_f32[1] = v6;
  maxsa.m_quad.m128_f32[2] = v7;
  minsa.m_quad.m128_f32[3] = 0.0;
  maxsa.m_quad.m128_f32[3] = 0.0;
  return HavokPhysics_CreateShapeConvexHullFromAABB(&minsa, &maxsa);
}

/*
==============
Physics_CreateShapeCube
==============
*/
hknpShape *Physics_CreateShapeCube(const vec3_t *center, float halfSize)
{
  float v3; 
  float v4; 
  hkVector4f centera; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9976, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to CreateShapeCylinder when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( ((LODWORD(center->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(center->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(center->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9977, ASSERT_TYPE_ASSERT, "(!IS_NAN( center[0] ) && !IS_NAN( center[1] ) && !IS_NAN( center[2] ))", "%s\n\tPhysics: Trying to CreateShapeCube with invalid center", "!IS_NAN( center[0] ) && !IS_NAN( center[1] ) && !IS_NAN( center[2] )") )
    __debugbreak();
  if ( halfSize < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9978, ASSERT_TYPE_ASSERT, "(halfSize >= 0.f)", "%s\n\tPhysics: Trying to CreateShapeCube with bad halfSize", "halfSize >= 0.f") )
    __debugbreak();
  v3 = 0.03125 * center->v[0];
  v4 = 0.03125 * center->v[1];
  centera.m_quad.m128_f32[2] = 0.03125 * center->v[2];
  centera.m_quad.m128_f32[0] = v3;
  centera.m_quad.m128_f32[1] = v4;
  centera.m_quad.m128_f32[3] = 0.0;
  return HavokPhysics_CreateShapeCube(&centera, halfSize * 0.03125);
}

/*
==============
Physics_CreateShapeCylinder
==============
*/
hknpShape *Physics_CreateShapeCylinder(const vec3_t *center, float halfHeight, float radius, int numVertices, bool useCache)
{
  float v8; 
  float v9; 
  hkVector4f centera; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9998, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to CreateShapeCylinder when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( ((LODWORD(center->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(center->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(center->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9999, ASSERT_TYPE_ASSERT, "(!IS_NAN( center[0] ) && !IS_NAN( center[1] ) && !IS_NAN( center[2] ))", "%s\n\tPhysics: Trying to CreateShapeCylinder with invalid center", "!IS_NAN( center[0] ) && !IS_NAN( center[1] ) && !IS_NAN( center[2] )") )
    __debugbreak();
  if ( halfHeight < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10000, ASSERT_TYPE_ASSERT, "(halfHeight >= 0.f)", "%s\n\tPhysics: Trying to CreateShapeCylinder with bad halfheight", "halfHeight >= 0.f") )
    __debugbreak();
  if ( radius <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10001, ASSERT_TYPE_ASSERT, "(radius > 0.f)", "%s\n\tPhysics: Trying to CreateShapeCylinder with bad radius", "radius > 0.f") )
    __debugbreak();
  if ( (numVertices < 8 || (numVertices & 1) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10002, ASSERT_TYPE_ASSERT, "(numVertices >= 8 && !(numVertices & 1))", "%s\n\tPhysics: Trying to CreateShapeCylinder with bad vertex count", "numVertices >= 8 && !(numVertices & 1)") )
    __debugbreak();
  v8 = 0.03125 * center->v[2];
  v9 = 0.03125 * center->v[0];
  centera.m_quad.m128_f32[1] = 0.03125 * center->v[1];
  centera.m_quad.m128_f32[2] = v8;
  centera.m_quad.m128_f32[0] = v9;
  centera.m_quad.m128_f32[3] = 0.0;
  return HavokPhysics_CreateShapeCylinder(&centera, halfHeight * 0.03125, radius * 0.03125, numVertices, useCache);
}

/*
==============
Physics_CreateShapeSphere
==============
*/
hknpShape *Physics_CreateShapeSphere(const vec3_t *center, float radius, char *optionalInplaceBuffer, int optionalInplaceBufferSize)
{
  float v7; 
  float v8; 
  hkVector4f centera; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9900, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to CreateShapeSphere when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( ((LODWORD(center->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(center->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(center->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9901, ASSERT_TYPE_ASSERT, "(!IS_NAN( center[0] ) && !IS_NAN( center[1] ) && !IS_NAN( center[2] ))", "%s\n\tPhysics: Trying to CreateShapeSphere with invalid center", "!IS_NAN( center[0] ) && !IS_NAN( center[1] ) && !IS_NAN( center[2] )") )
    __debugbreak();
  if ( radius <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9902, ASSERT_TYPE_ASSERT, "(radius > 0.f)", "%s\n\tPhysics: Trying to CreateShapeSphere with bad radius", "radius > 0.f") )
    __debugbreak();
  if ( optionalInplaceBuffer && optionalInplaceBufferSize <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9903, ASSERT_TYPE_ASSERT, "(!optionalInplaceBuffer || optionalInplaceBufferSize > 0)", "%s\n\tPhysics: Trying to CreateShapeSphere with bad inplace buffer data", "!optionalInplaceBuffer || optionalInplaceBufferSize > 0") )
    __debugbreak();
  v7 = 0.03125 * center->v[0];
  v8 = 0.03125 * center->v[1];
  centera.m_quad.m128_f32[2] = 0.03125 * center->v[2];
  centera.m_quad.m128_f32[0] = v7;
  centera.m_quad.m128_f32[1] = v8;
  centera.m_quad.m128_f32[3] = 0.0;
  return HavokPhysics_CreateShapeSphere(&centera, radius * 0.03125, optionalInplaceBuffer, optionalInplaceBufferSize);
}

/*
==============
Physics_CreateWorld
==============
*/
void Physics_CreateWorld(Physics_WorldId worldId)
{
  unsigned __int64 v1; 
  Physics_WorldCInfo *v2; 
  Physics_WorldInfo *v3; 
  bool isMultiThreaded; 
  GVehicles *VehicleSystem; 
  int LocalClientForWorld; 
  CgVehicleSystem *v7; 
  int v8; 

  v1 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1653, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to CreateWorld when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v1 > 7 )
  {
    v8 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1654, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to CreateWorld with invalid world index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v8) )
      __debugbreak();
  }
  if ( v1 >= 8 )
  {
    j___report_rangecheckfailure(v1);
    JUMPOUT(0x140EA776Fi64);
  }
  v2 = &s_physicsWorldCInfos[v1];
  v3 = &s_physicsWorldInfos[v1];
  g_physicsBroadphaseQueriesNotAllowedForWorld[v1] = 0;
  isMultiThreaded = v2->isMultiThreaded;
  g_physicsQueriesNotAllowedForWorld[v1] = 0;
  v3->isMultiThreaded = isMultiThreaded;
  v3->defaultTimestep = v2->defaultTimeStep;
  *(_QWORD *)&v3->timePreStep = 0i64;
  g_physicsBroadphaseRefreshNeeded[v1] = 0;
  HavokPhysics_CreateWorld((Physics_WorldId)v1, v2);
  PhysicsQuery_InitForWorld((Physics_WorldId)v1);
  if ( v2->hasFXSupport )
    PhysicsFX_RegisterWorld((Physics_WorldId)v1);
  Physics_SimpleCollisionCallback_InitForWorld((Physics_WorldId)v1);
  Physics_ManifoldCallback_InitForWorld((Physics_WorldId)v1);
  if ( GVehicles::ms_gVehiclesSystem )
  {
    VehicleSystem = GVehicles::GetVehicleSystem();
    PhysicsVehicle_CreateWorld((Physics_WorldId)v1, VehicleSystem);
  }
  LocalClientForWorld = Physics_GetLocalClientForWorld((Physics_WorldId)v1);
  if ( LocalClientForWorld >= 0 && LocalClientForWorld < CgVehicleSystem::ms_allocatedCount )
  {
    if ( CgVehicleSystem::ms_vehicleSystemArray[LocalClientForWorld] )
    {
      v7 = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)LocalClientForWorld);
      PhysicsVehicle_CreateWorld((Physics_WorldId)v1, v7);
    }
  }
}

/*
==============
Physics_DeactivateBody
==============
*/
void Physics_DeactivateBody(Physics_WorldId worldId, unsigned int bodyId)
{
  __int64 v4; 
  Physics_WorldId v5; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7844, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to deactivate a body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v5 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7845, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to deactivate a body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v5) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v4) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7846, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to deactivate a body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v4) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  HavokPhysics_DeactivateBody(worldId, (hknpBodyId)bodyId);
}

/*
==============
Physics_DecodeShapeKeyIntoShapes
==============
*/

unsigned int __fastcall Physics_DecodeShapeKeyIntoShapes(Physics_WorldId worldId, unsigned int bodyId, unsigned int key, const hknpShape **shapes)
{
  return HavokPhysics_DecodeShapeKeyIntoShapes(worldId, (hknpBodyId)bodyId, (hkHandle<unsigned int,4294967295,hknpShapeKeyDiscriminant>)key, shapes);
}

/*
==============
Physics_DecodeSubShapeKey
==============
*/
void Physics_DecodeSubShapeKey(Physics_WorldId worldId, unsigned int instanceId, unsigned __int64 key, int *bodyIdx, unsigned __int16 *shapeInstanceId)
{
  hkHandle<unsigned short,65535,hknpShapeInstanceIdDiscriminant> *v9; 
  __int64 v10; 
  hkHandle<unsigned short,65535,hknpShapeInstanceIdDiscriminant> v11; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10233, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to DecodeSubShapeKey when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10234, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to DecodeSubShapeKey with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( instanceId == -1 )
  {
    LODWORD(v10) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10235, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to DecodeSubShapeKey with invalid InstanceId in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v10) )
      __debugbreak();
  }
  if ( !bodyIdx )
  {
    LODWORD(v10) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10236, ASSERT_TYPE_ASSERT, "(bodyIdx)", "%s\n\tPhysics: Trying to DecodeSubShapeKey with invalid bodyIdx in world %i", "bodyIdx", v10) )
      __debugbreak();
  }
  v9 = (hkHandle<unsigned short,65535,hknpShapeInstanceIdDiscriminant> *)shapeInstanceId;
  if ( !shapeInstanceId )
  {
    LODWORD(v10) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10237, ASSERT_TYPE_ASSERT, "(shapeInstanceId)", "%s\n\tPhysics: Trying to DecodeSubShapeKey with invalid shapeInstanceId in world %i", "shapeInstanceId", v10) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  HavokPhysics_DecodeSubShapeKey(worldId, instanceId, key, bodyIdx, &v11);
  v9->m_value = v11.m_value;
}

/*
==============
Physics_DeferredAABBBroadphaseQuery
==============
*/
void Physics_DeferredAABBBroadphaseQuery(Physics_WorldId worldId, const vec3_t *min, const vec3_t *max, Physics_AABBBroadphaseQueryExtendedData *extendedData, Physics_DeferredBroadphaseCollisionQueryData *data)
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  hkAabb v13; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8412, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to fire deferred aabb broadphase query when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8413, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to fire deferred aabb broadphase query with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( ((LODWORD(min->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(min->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(min->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8414, ASSERT_TYPE_ASSERT, "(!IS_NAN( min[0] ) && !IS_NAN( min[1] ) && !IS_NAN( min[2] ))", "%s\n\tPhysics: Trying to fire deferred aabb broadphase query with invalid start", "!IS_NAN( min[0] ) && !IS_NAN( min[1] ) && !IS_NAN( min[2] )") )
    __debugbreak();
  if ( ((LODWORD(max->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(max->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(max->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8415, ASSERT_TYPE_ASSERT, "(!IS_NAN( max[0] ) && !IS_NAN( max[1] ) && !IS_NAN( max[2] ))", "%s\n\tPhysics: Trying to fire deferred aabb broadphase query with invalid start", "!IS_NAN( max[0] ) && !IS_NAN( max[1] ) && !IS_NAN( max[2] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8416, ASSERT_TYPE_ASSERT, "(extendedData)", "%s\n\tPhysics: Trying to fire deferred aabb broadphase query with invalid extended data", "extendedData") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8417, ASSERT_TYPE_ASSERT, "(data)", "%s\n\tPhysics: Trying to fire deferred aabb broadphase query with invalid data", "data") )
    __debugbreak();
  CG_EntityWorkers_CheckHasAnyLock_Physics();
  v9 = 0.03125 * min->v[1];
  v10 = 0.03125 * min->v[2];
  v13.m_min.m_quad.m128_f32[0] = 0.03125 * min->v[0];
  v11 = 0.03125 * max->v[1];
  v13.m_min.m_quad.m128_f32[1] = v9;
  v12 = 0.03125 * max->v[2];
  v13.m_min.m_quad.m128_f32[2] = v10;
  v13.m_max.m_quad.m128_f32[0] = 0.03125 * max->v[0];
  v13.m_max.m_quad.m128_f32[1] = v11;
  v13.m_max.m_quad.m128_f32[2] = v12;
  v13.m_min.m_quad.m128_f32[3] = 0.0;
  v13.m_max.m_quad.m128_f32[3] = 0.0;
  HavokPhysics_DeferredAABBBroadphaseQuery(worldId, &v13, extendedData, data);
}

/*
==============
Physics_DeferredAABBQuery
==============
*/
void Physics_DeferredAABBQuery(Physics_WorldId worldId, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, Physics_DeferredCollisionQueryData *data)
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  hkAabb v13; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8514, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to fire deferred aabb query when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8515, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to fire deferred aabb query with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( ((LODWORD(min->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(min->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(min->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8516, ASSERT_TYPE_ASSERT, "(!IS_NAN( min[0] ) && !IS_NAN( min[1] ) && !IS_NAN( min[2] ))", "%s\n\tPhysics: Trying to fire deferred aabb query with invalid start", "!IS_NAN( min[0] ) && !IS_NAN( min[1] ) && !IS_NAN( min[2] )") )
    __debugbreak();
  if ( ((LODWORD(max->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(max->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(max->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8517, ASSERT_TYPE_ASSERT, "(!IS_NAN( max[0] ) && !IS_NAN( max[1] ) && !IS_NAN( max[2] ))", "%s\n\tPhysics: Trying to fire deferred aabb query with invalid start", "!IS_NAN( max[0] ) && !IS_NAN( max[1] ) && !IS_NAN( max[2] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8518, ASSERT_TYPE_ASSERT, "(extendedData)", "%s\n\tPhysics: Trying to fire deferred aabb query with invalid extended data", "extendedData") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8519, ASSERT_TYPE_ASSERT, "(data)", "%s\n\tPhysics: Trying to fire deferred aabb query with invalid data", "data") )
    __debugbreak();
  CG_EntityWorkers_CheckHasAnyLock_Physics();
  v9 = 0.03125 * min->v[1];
  v10 = 0.03125 * min->v[2];
  v13.m_min.m_quad.m128_f32[0] = 0.03125 * min->v[0];
  v11 = 0.03125 * max->v[1];
  v13.m_min.m_quad.m128_f32[1] = v9;
  v12 = 0.03125 * max->v[2];
  v13.m_min.m_quad.m128_f32[2] = v10;
  v13.m_max.m_quad.m128_f32[0] = 0.03125 * max->v[0];
  v13.m_max.m_quad.m128_f32[1] = v11;
  v13.m_max.m_quad.m128_f32[2] = v12;
  v13.m_min.m_quad.m128_f32[3] = 0.0;
  v13.m_max.m_quad.m128_f32[3] = 0.0;
  HavokPhysics_DeferredAABBQuery(worldId, &v13, extendedData, data);
}

/*
==============
Physics_DeferredAABBQuery
==============
*/
void Physics_DeferredAABBQuery(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *min, const vec3_t *max, Physics_AABBQueryExtendedData *extendedData, Physics_DeferredCollisionQueryData *data)
{
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  __int64 v14; 
  hkAabb v15; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9161, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to fire deferred aabb query when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9162, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to fire deferred aabb query against body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v14) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9163, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to fire deferred aabb query against body with invalid body id %i", "Physics_IsRigidBodyIdValid( bodyId )", v14) )
      __debugbreak();
  }
  if ( ((LODWORD(min->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(min->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(min->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9164, ASSERT_TYPE_ASSERT, "(!IS_NAN( min[0] ) && !IS_NAN( min[1] ) && !IS_NAN( min[2] ))", "%s\n\tPhysics: Trying to fire deferred aabb query against body with invalid start", "!IS_NAN( min[0] ) && !IS_NAN( min[1] ) && !IS_NAN( min[2] )") )
    __debugbreak();
  if ( ((LODWORD(max->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(max->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(max->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9165, ASSERT_TYPE_ASSERT, "(!IS_NAN( max[0] ) && !IS_NAN( max[1] ) && !IS_NAN( max[2] ))", "%s\n\tPhysics: Trying to fire deferred aabb query against body with invalid start", "!IS_NAN( max[0] ) && !IS_NAN( max[1] ) && !IS_NAN( max[2] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9166, ASSERT_TYPE_ASSERT, "(extendedData)", "%s\n\tPhysics: Trying to fire deferred aabb query against body with invalid extended data", "extendedData") )
    __debugbreak();
  if ( extendedData->ignoreBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9167, ASSERT_TYPE_ASSERT, "(!extendedData->ignoreBodies)", "%s\n\tPhysics: Trying to fire deferred aabb query against body with ignore bodies", "!extendedData->ignoreBodies") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9168, ASSERT_TYPE_ASSERT, "(data)", "%s\n\tPhysics: Trying to fire deferred aabb query against body with invalid data", "data") )
    __debugbreak();
  CG_EntityWorkers_CheckHasAnyLock_Physics();
  v10 = 0.03125 * min->v[1];
  v11 = 0.03125 * min->v[2];
  v15.m_min.m_quad.m128_f32[0] = 0.03125 * min->v[0];
  v12 = 0.03125 * max->v[1];
  v15.m_min.m_quad.m128_f32[1] = v10;
  v13 = 0.03125 * max->v[2];
  v15.m_min.m_quad.m128_f32[2] = v11;
  v15.m_max.m_quad.m128_f32[0] = 0.03125 * max->v[0];
  v15.m_max.m_quad.m128_f32[1] = v12;
  v15.m_max.m_quad.m128_f32[2] = v13;
  v15.m_min.m_quad.m128_f32[3] = 0.0;
  v15.m_max.m_quad.m128_f32[3] = 0.0;
  HavokPhysics_DeferredAABBQuery(worldId, (hknpBodyId)bodyId, &v15, extendedData, data);
}

/*
==============
Physics_DeferredGetClosestPoints
==============
*/
void Physics_DeferredGetClosestPoints(Physics_WorldId worldId, unsigned int bodyId, hknpShape *shape, const vec3_t *point, const vec4_t *rotation, float maxDistance, Physics_GetClosestPointsExtendedData *extendedData, Physics_DeferredCollisionQueryData *data)
{
  float v12; 
  float v13; 
  Physics_GetClosestPointsExtendedData *v20; 
  hkVector4f pointa; 
  hkQuaternionf v22; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9672, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to fire deferred GetClosestPoints against body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9673, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to fire deferred GetClosestPoints against body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v20) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9674, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to fire deferred GetClosestPoints against body with invalid body id %i", "Physics_IsRigidBodyIdValid( bodyId )", v20) )
      __debugbreak();
  }
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9675, ASSERT_TYPE_ASSERT, "(shape)", "%s\n\tPhysics: Trying to fire deferred Shapecast against body with null shape", "shape") )
    __debugbreak();
  if ( ((LODWORD(point->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9676, ASSERT_TYPE_ASSERT, "(!IS_NAN( point[0] ) && !IS_NAN( point[1] ) && !IS_NAN( point[2] ))", "%s\n\tPhysics: Trying to fire deferred GetClosestPoints against body with invalid point", "!IS_NAN( point[0] ) && !IS_NAN( point[1] ) && !IS_NAN( point[2] )") )
    __debugbreak();
  if ( ((LODWORD(rotation->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9677, ASSERT_TYPE_ASSERT, "(!IS_NAN( rotation[0] ) && !IS_NAN( rotation[1] ) && !IS_NAN( rotation[2] ) && !IS_NAN( rotation[3] ))", "%s\n\tPhysics: Trying to fire deferred GetClosestPoints against body with invalid rotation", "!IS_NAN( rotation[0] ) && !IS_NAN( rotation[1] ) && !IS_NAN( rotation[2] ) && !IS_NAN( rotation[3] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9678, ASSERT_TYPE_ASSERT, "(extendedData)", "%s\n\tPhysics: Trying to fire deferred GetClosestPoints against body with invalid extended data", "extendedData") )
    __debugbreak();
  if ( extendedData->ignoreBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9679, ASSERT_TYPE_ASSERT, "(!extendedData->ignoreBodies)", "%s\n\tPhysics: Trying to fire deferred GetClosestPoints against body with ignore bodies", "!extendedData->ignoreBodies") )
    __debugbreak();
  if ( extendedData->simplify && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9680, ASSERT_TYPE_ASSERT, "(!extendedData->simplify)", "%s\n\tPhysics: Trying to fire deferred GetClosestPoints against body with simplify - not supported", "!extendedData->simplify") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9681, ASSERT_TYPE_ASSERT, "(data)", "%s\n\tPhysics: Trying to fire deferred GetClosestPoints against body with invalid data", "data") )
    __debugbreak();
  CG_EntityWorkers_CheckHasAnyLock_Physics();
  v12 = 0.03125 * point->v[0];
  v13 = 0.03125 * point->v[2];
  _XMM5 = LODWORD(rotation->v[0]);
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [rbx+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rbx+8], 20h ; ' '
    vinsertps xmm5, xmm5, dword ptr [rbx+0Ch], 30h ; '0'
  }
  pointa.m_quad.m128_f32[1] = 0.03125 * point->v[1];
  pointa.m_quad.m128_f32[0] = v12;
  pointa.m_quad.m128_f32[3] = 0.0;
  __asm
  {
    vdpps   xmm0, xmm5, xmm5, 0FFh
    vrsqrtps xmm4, xmm0
  }
  pointa.m_quad.m128_f32[2] = v13;
  v22.m_vec.m_quad = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM0, _XMM4), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM5);
  HavokPhysics_DeferredGetClosestPoints(worldId, (hknpBodyId)bodyId, shape, &pointa, &v22, 0.03125 * maxDistance, extendedData, data);
}

/*
==============
Physics_DeferredGetClosestPoints
==============
*/
void Physics_DeferredGetClosestPoints(Physics_WorldId worldId, hknpShape *shape, const vec3_t *point, const vec4_t *rotation, float maxDistance, Physics_GetClosestPointsExtendedData *extendedData, Physics_DeferredCollisionQueryData *data)
{
  float v11; 
  float v12; 
  hkVector4f pointa; 
  hkQuaternionf rotationa; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9049, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to fire deferred GetClosestPoints when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9050, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to fire deferred GetClosestPoints with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9051, ASSERT_TYPE_ASSERT, "(shape)", "%s\n\tPhysics: Trying to fire deferred Shapecast with null shape", "shape") )
    __debugbreak();
  if ( ((LODWORD(point->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9052, ASSERT_TYPE_ASSERT, "(!IS_NAN( point[0] ) && !IS_NAN( point[1] ) && !IS_NAN( point[2] ))", "%s\n\tPhysics: Trying to fire deferred GetClosestPoints with invalid point", "!IS_NAN( point[0] ) && !IS_NAN( point[1] ) && !IS_NAN( point[2] )") )
    __debugbreak();
  if ( ((LODWORD(rotation->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9053, ASSERT_TYPE_ASSERT, "(!IS_NAN( rotation[0] ) && !IS_NAN( rotation[1] ) && !IS_NAN( rotation[2] ) && !IS_NAN( rotation[3] ))", "%s\n\tPhysics: Trying to fire deferred GetClosestPoints with invalid rotation", "!IS_NAN( rotation[0] ) && !IS_NAN( rotation[1] ) && !IS_NAN( rotation[2] ) && !IS_NAN( rotation[3] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9054, ASSERT_TYPE_ASSERT, "(extendedData)", "%s\n\tPhysics: Trying to fire deferred GetClosestPoints with invalid extended data", "extendedData") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9055, ASSERT_TYPE_ASSERT, "(data)", "%s\n\tPhysics: Trying to fire deferred GetClosestPoints with invalid data", "data") )
    __debugbreak();
  CG_EntityWorkers_CheckHasAnyLock_Physics();
  v11 = 0.03125 * point->v[0];
  v12 = 0.03125 * point->v[2];
  _XMM5 = LODWORD(rotation->v[0]);
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [rbx+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rbx+8], 20h ; ' '
    vinsertps xmm5, xmm5, dword ptr [rbx+0Ch], 30h ; '0'
  }
  pointa.m_quad.m128_f32[1] = 0.03125 * point->v[1];
  pointa.m_quad.m128_f32[0] = v11;
  pointa.m_quad.m128_f32[3] = 0.0;
  __asm
  {
    vdpps   xmm0, xmm5, xmm5, 0FFh
    vrsqrtps xmm4, xmm0
  }
  pointa.m_quad.m128_f32[2] = v12;
  rotationa.m_vec.m_quad = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM0, _XMM4), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM5);
  HavokPhysics_DeferredGetClosestPoints(worldId, shape, &pointa, &rotationa, 0.03125 * maxDistance, extendedData, data);
}

/*
==============
Physics_DeferredQueryPoint
==============
*/
void Physics_DeferredQueryPoint(Physics_WorldId worldId, const vec3_t *point, float maxDistance, Physics_QueryPointExtendedData *extendedData, Physics_DeferredCollisionQueryData *data)
{
  float v8; 
  float v9; 
  hkVector4f pointa; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8947, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to fire deferred QueryPoint when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8948, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to fire deferred QueryPoint with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( ((LODWORD(point->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8949, ASSERT_TYPE_ASSERT, "(!IS_NAN( point[0] ) && !IS_NAN( point[1] ) && !IS_NAN( point[2] ))", "%s\n\tPhysics: Trying to fire deferred QueryPoint with invalid point", "!IS_NAN( point[0] ) && !IS_NAN( point[1] ) && !IS_NAN( point[2] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8950, ASSERT_TYPE_ASSERT, "(extendedData)", "%s\n\tPhysics: Trying to fire deferred QueryPoint with invalid extended data", "extendedData") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8951, ASSERT_TYPE_ASSERT, "(data)", "%s\n\tPhysics: Trying to fire deferred QueryPoint with invalid data", "data") )
    __debugbreak();
  CG_EntityWorkers_CheckHasAnyLock_Physics();
  v8 = 0.03125 * point->v[0];
  v9 = 0.03125 * point->v[2];
  pointa.m_quad.m128_f32[1] = 0.03125 * point->v[1];
  pointa.m_quad.m128_f32[3] = 0.0;
  pointa.m_quad.m128_f32[0] = v8;
  pointa.m_quad.m128_f32[2] = v9;
  HavokPhysics_DeferredQueryPoint(worldId, &pointa, maxDistance * 0.03125, extendedData, data);
}

/*
==============
Physics_DeferredQueryPoint
==============
*/
void Physics_DeferredQueryPoint(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *point, float maxDistance, Physics_QueryPointExtendedData *extendedData, Physics_DeferredCollisionQueryData *data)
{
  float v9; 
  float v10; 
  __int64 v11; 
  hkVector4f pointa; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9571, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to fire deferred QueryPoint against body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9572, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to fire deferred QueryPoint against body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v11) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9573, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to fire deferred QueryPoint against body with invalid body id %i", "Physics_IsRigidBodyIdValid( bodyId )", v11) )
      __debugbreak();
  }
  if ( ((LODWORD(point->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9574, ASSERT_TYPE_ASSERT, "(!IS_NAN( point[0] ) && !IS_NAN( point[1] ) && !IS_NAN( point[2] ))", "%s\n\tPhysics: Trying to fire deferred QueryPoint against body with invalid point", "!IS_NAN( point[0] ) && !IS_NAN( point[1] ) && !IS_NAN( point[2] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9575, ASSERT_TYPE_ASSERT, "(extendedData)", "%s\n\tPhysics: Trying to fire deferred QueryPoint against body with invalid extended data", "extendedData") )
    __debugbreak();
  if ( extendedData->ignoreBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9576, ASSERT_TYPE_ASSERT, "(!extendedData->ignoreBodies)", "%s\n\tPhysics: Trying to fire deferred QueryPoint against body with ignore bodies", "!extendedData->ignoreBodies") )
    __debugbreak();
  if ( extendedData->simplify && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9577, ASSERT_TYPE_ASSERT, "(!extendedData->simplify)", "%s\n\tPhysics: Trying to fire deferred QueryPoint against body with simplify - not supported", "!extendedData->simplify") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9578, ASSERT_TYPE_ASSERT, "(data)", "%s\n\tPhysics: Trying to fire deferred QueryPoint against body with invalid data", "data") )
    __debugbreak();
  CG_EntityWorkers_CheckHasAnyLock_Physics();
  v9 = 0.03125 * point->v[0];
  v10 = 0.03125 * point->v[2];
  pointa.m_quad.m128_f32[1] = 0.03125 * point->v[1];
  pointa.m_quad.m128_f32[3] = 0.0;
  pointa.m_quad.m128_f32[0] = v9;
  pointa.m_quad.m128_f32[2] = v10;
  HavokPhysics_DeferredQueryPoint(worldId, (hknpBodyId)bodyId, &pointa, maxDistance * 0.03125, extendedData, data);
}

/*
==============
Physics_DeferredRaycast
==============
*/
void Physics_DeferredRaycast(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, Physics_DeferredCollisionQueryData *data)
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  hkVector4f enda; 
  hkVector4f starta; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8615, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to fire deferred Raycast when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8616, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to fire deferred Raycast with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( ((LODWORD(start->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8617, ASSERT_TYPE_ASSERT, "(!IS_NAN( start[0] ) && !IS_NAN( start[1] ) && !IS_NAN( start[2] ))", "%s\n\tPhysics: Trying to fire deferred Raycast with invalid start", "!IS_NAN( start[0] ) && !IS_NAN( start[1] ) && !IS_NAN( start[2] )") )
    __debugbreak();
  if ( ((LODWORD(end->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8618, ASSERT_TYPE_ASSERT, "(!IS_NAN( end[0] ) && !IS_NAN( end[1] ) && !IS_NAN( end[2] ))", "%s\n\tPhysics: Trying to fire deferred Raycast with invalid start", "!IS_NAN( end[0] ) && !IS_NAN( end[1] ) && !IS_NAN( end[2] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8619, ASSERT_TYPE_ASSERT, "(extendedData)", "%s\n\tPhysics: Trying to fire deferred Raycast with invalid extended data", "extendedData") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8620, ASSERT_TYPE_ASSERT, "(data)", "%s\n\tPhysics: Trying to fire deferred Raycast with invalid data", "data") )
    __debugbreak();
  CG_EntityWorkers_CheckHasAnyLock_Physics();
  v9 = 0.03125 * start->v[1];
  v10 = 0.03125 * start->v[2];
  starta.m_quad.m128_f32[0] = 0.03125 * start->v[0];
  v11 = 0.03125 * end->v[1];
  starta.m_quad.m128_f32[1] = v9;
  v12 = 0.03125 * end->v[2];
  starta.m_quad.m128_f32[2] = v10;
  enda.m_quad.m128_f32[0] = 0.03125 * end->v[0];
  enda.m_quad.m128_f32[1] = v11;
  enda.m_quad.m128_f32[2] = v12;
  starta.m_quad.m128_f32[3] = 0.0;
  enda.m_quad.m128_f32[3] = 0.0;
  HavokPhysics_DeferredRaycast(worldId, &starta, &enda, extendedData, data);
}

/*
==============
Physics_DeferredRaycast
==============
*/
void Physics_DeferredRaycast(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, Physics_DeferredCollisionQueryData *data)
{
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  __int64 v14; 
  hkVector4f enda; 
  hkVector4f starta; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9260, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to fire deferred Raycast when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9261, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to fire deferred Raycast against body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v14) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9262, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to fire deferred raycast against body with invalid body id %i", "Physics_IsRigidBodyIdValid( bodyId )", v14) )
      __debugbreak();
  }
  if ( ((LODWORD(start->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9263, ASSERT_TYPE_ASSERT, "(!IS_NAN( start[0] ) && !IS_NAN( start[1] ) && !IS_NAN( start[2] ))", "%s\n\tPhysics: Trying to fire deferred Raycast against body with invalid start", "!IS_NAN( start[0] ) && !IS_NAN( start[1] ) && !IS_NAN( start[2] )") )
    __debugbreak();
  if ( ((LODWORD(end->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9264, ASSERT_TYPE_ASSERT, "(!IS_NAN( end[0] ) && !IS_NAN( end[1] ) && !IS_NAN( end[2] ))", "%s\n\tPhysics: Trying to fire deferred Raycast against body with invalid start", "!IS_NAN( end[0] ) && !IS_NAN( end[1] ) && !IS_NAN( end[2] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9265, ASSERT_TYPE_ASSERT, "(extendedData)", "%s\n\tPhysics: Trying to fire deferred Raycast against body with invalid extended data", "extendedData") )
    __debugbreak();
  if ( extendedData->ignoreBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9266, ASSERT_TYPE_ASSERT, "(!extendedData->ignoreBodies)", "%s\n\tPhysics: Trying to fire deferred Raycast against body with ignore bodies", "!extendedData->ignoreBodies") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9267, ASSERT_TYPE_ASSERT, "(data)", "%s\n\tPhysics: Trying to fire deferred Raycast against body with invalid data", "data") )
    __debugbreak();
  CG_EntityWorkers_CheckHasAnyLock_Physics();
  v10 = 0.03125 * start->v[1];
  v11 = 0.03125 * start->v[2];
  starta.m_quad.m128_f32[0] = 0.03125 * start->v[0];
  v12 = 0.03125 * end->v[1];
  starta.m_quad.m128_f32[1] = v10;
  v13 = 0.03125 * end->v[2];
  starta.m_quad.m128_f32[2] = v11;
  enda.m_quad.m128_f32[0] = 0.03125 * end->v[0];
  enda.m_quad.m128_f32[1] = v12;
  enda.m_quad.m128_f32[2] = v13;
  starta.m_quad.m128_f32[3] = 0.0;
  enda.m_quad.m128_f32[3] = 0.0;
  HavokPhysics_DeferredRaycast(worldId, (hknpBodyId)bodyId, &starta, &enda, extendedData, data);
}

/*
==============
Physics_DeferredShapecast
==============
*/
void Physics_DeferredShapecast(Physics_WorldId worldId, unsigned int bodyId, hknpShape *shape, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, Physics_DeferredCollisionQueryData *data)
{
  float v12; 
  float v13; 
  float v18; 
  Physics_ShapecastExtendedData *v21; 
  hkVector4f v22; 
  hkVector4f starta; 
  hkQuaternionf v24; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9361, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to fire deferred Shapecast against body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9362, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to fire deferred Shapecast against body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v21) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9363, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to fire deferred shapecast against body with invalid body id %i", "Physics_IsRigidBodyIdValid( bodyId )", v21) )
      __debugbreak();
  }
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9364, ASSERT_TYPE_ASSERT, "(shape)", "%s\n\tPhysics: Trying to fire deferred Shapecast against body with null shape", "shape") )
    __debugbreak();
  if ( ((LODWORD(start->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9365, ASSERT_TYPE_ASSERT, "(!IS_NAN( start[0] ) && !IS_NAN( start[1] ) && !IS_NAN( start[2] ))", "%s\n\tPhysics: Trying to fire deferred Shapecast against body with invalid start", "!IS_NAN( start[0] ) && !IS_NAN( start[1] ) && !IS_NAN( start[2] )") )
    __debugbreak();
  if ( ((LODWORD(end->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9366, ASSERT_TYPE_ASSERT, "(!IS_NAN( end[0] ) && !IS_NAN( end[1] ) && !IS_NAN( end[2] ))", "%s\n\tPhysics: Trying to fire deferred Shapecast against body with invalid start", "!IS_NAN( end[0] ) && !IS_NAN( end[1] ) && !IS_NAN( end[2] )") )
    __debugbreak();
  if ( ((LODWORD(rotation->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9367, ASSERT_TYPE_ASSERT, "(!IS_NAN( rotation[0] ) && !IS_NAN( rotation[1] ) && !IS_NAN( rotation[2] ) && !IS_NAN( rotation[3] ))", "%s\n\tPhysics: Trying to fire deferred Shapecast against body with invalid rotation", "!IS_NAN( rotation[0] ) && !IS_NAN( rotation[1] ) && !IS_NAN( rotation[2] ) && !IS_NAN( rotation[3] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9368, ASSERT_TYPE_ASSERT, "(extendedData)", "%s\n\tPhysics: Trying to fire deferred Shapecast against body with invalid extended data", "extendedData") )
    __debugbreak();
  if ( extendedData->ignoreBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9369, ASSERT_TYPE_ASSERT, "(!extendedData->ignoreBodies)", "%s\n\tPhysics: Trying to fire deferred Shapecast against body with ignore bodies", "!extendedData->ignoreBodies") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9370, ASSERT_TYPE_ASSERT, "(data)", "%s\n\tPhysics: Trying to fire deferred Shapecast against body with invalid data", "data") )
    __debugbreak();
  if ( data->startResult && extendedData->startTolerance <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9371, ASSERT_TYPE_ASSERT, "(!data->startResult || extendedData->startTolerance > 0.f)", "%s\n\tPhysics: Trying to fire deferred Shapecast against body with startResult and bad tolerance", "!data->startResult || extendedData->startTolerance > 0.f") )
    __debugbreak();
  CG_EntityWorkers_CheckHasAnyLock_Physics();
  v12 = 0.03125 * start->v[1];
  v13 = 0.03125 * start->v[2];
  _XMM5 = LODWORD(rotation->v[0]);
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [rbx+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rbx+8], 20h ; ' '
    vinsertps xmm5, xmm5, dword ptr [rbx+0Ch], 30h ; '0'
  }
  starta.m_quad.m128_f32[0] = 0.03125 * start->v[0];
  v22.m_quad.m128_f32[1] = 0.03125 * end->v[1];
  starta.m_quad.m128_f32[1] = v12;
  v18 = 0.03125 * end->v[2];
  starta.m_quad.m128_f32[2] = v13;
  __asm
  {
    vdpps   xmm0, xmm5, xmm5, 0FFh
    vrsqrtps xmm4, xmm0
  }
  v22.m_quad.m128_f32[0] = 0.03125 * end->v[0];
  v22.m_quad.m128_f32[2] = v18;
  v24.m_vec.m_quad = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM0), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM5);
  starta.m_quad.m128_f32[3] = 0.0;
  v22.m_quad.m128_f32[3] = 0.0;
  HavokPhysics_DeferredShapecast(worldId, (hknpBodyId)bodyId, shape, &starta, &v22, &v24, extendedData, data);
}

/*
==============
Physics_DeferredShapecast
==============
*/
void Physics_DeferredShapecast(Physics_WorldId worldId, hknpShape *shape, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, Physics_DeferredCollisionQueryData *data)
{
  float v11; 
  float v12; 
  float v17; 
  float v18; 
  float v19; 
  hkVector4f enda; 
  hkVector4f starta; 
  hkQuaternionf v24; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8808, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to fire deferred Shapecast when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8809, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to fire deferred Shapecast with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8810, ASSERT_TYPE_ASSERT, "(shape)", "%s\n\tPhysics: Trying to fire deferred Shapecast with null shape", "shape") )
    __debugbreak();
  if ( ((LODWORD(start->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8811, ASSERT_TYPE_ASSERT, "(!IS_NAN( start[0] ) && !IS_NAN( start[1] ) && !IS_NAN( start[2] ))", "%s\n\tPhysics: Trying to fire deferred Shapecast with invalid start", "!IS_NAN( start[0] ) && !IS_NAN( start[1] ) && !IS_NAN( start[2] )") )
    __debugbreak();
  if ( ((LODWORD(end->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8812, ASSERT_TYPE_ASSERT, "(!IS_NAN( end[0] ) && !IS_NAN( end[1] ) && !IS_NAN( end[2] ))", "%s\n\tPhysics: Trying to fire deferred Shapecast with invalid end", "!IS_NAN( end[0] ) && !IS_NAN( end[1] ) && !IS_NAN( end[2] )") )
    __debugbreak();
  if ( ((LODWORD(rotation->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8813, ASSERT_TYPE_ASSERT, "(!IS_NAN( rotation[0] ) && !IS_NAN( rotation[1] ) && !IS_NAN( rotation[2] ) && !IS_NAN( rotation[3] ))", "%s\n\tPhysics: Trying to fire deferred Shapecast with invalid rotation", "!IS_NAN( rotation[0] ) && !IS_NAN( rotation[1] ) && !IS_NAN( rotation[2] ) && !IS_NAN( rotation[3] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8814, ASSERT_TYPE_ASSERT, "(extendedData)", "%s\n\tPhysics: Trying to fire deferred Shapecast with invalid extended data", "extendedData") )
    __debugbreak();
  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8815, ASSERT_TYPE_ASSERT, "(data)", "%s\n\tPhysics: Trying to fire deferred Shapecast with invalid data", "data") )
    __debugbreak();
  if ( data->startResult && extendedData->startTolerance <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8816, ASSERT_TYPE_ASSERT, "(!data->startResult || extendedData->startTolerance > 0.f)", "%s\n\tPhysics: Trying to fire deferred Shapecast with startResult and bad tolerance", "!data->startResult || extendedData->startTolerance > 0.f") )
    __debugbreak();
  CG_EntityWorkers_CheckHasAnyLock_Physics();
  v11 = 0.03125 * start->v[1];
  v12 = 0.03125 * start->v[2];
  _XMM5 = LODWORD(rotation->v[0]);
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [rbx+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rbx+8], 20h ; ' '
    vinsertps xmm5, xmm5, dword ptr [rbx+0Ch], 30h ; '0'
  }
  starta.m_quad.m128_f32[0] = 0.03125 * start->v[0];
  v17 = 0.03125 * end->v[1];
  starta.m_quad.m128_f32[1] = v11;
  v18 = 0.03125 * end->v[2];
  starta.m_quad.m128_f32[2] = v12;
  v19 = 0.03125 * end->v[0];
  enda.m_quad.m128_f32[1] = v17;
  __asm
  {
    vdpps   xmm0, xmm5, xmm5, 0FFh
    vrsqrtps xmm4, xmm0
  }
  enda.m_quad.m128_f32[0] = v19;
  enda.m_quad.m128_f32[2] = v18;
  v24.m_vec.m_quad = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM0), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM5);
  starta.m_quad.m128_f32[3] = 0.0;
  enda.m_quad.m128_f32[3] = 0.0;
  HavokPhysics_DeferredShapecast(worldId, shape, &starta, &enda, &v24, extendedData, data);
}

/*
==============
Physics_DestroyClientWorlds
==============
*/
void Physics_DestroyClientWorlds(void)
{
  LocalClientNum_t v0; 
  int i; 
  int v2; 
  int j; 
  Physics_WorldId v4; 

  Sys_EnterCriticalSection(CRITSECT_PHYS_WORLDCREATE);
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1988, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to CreateServerWorlds when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !g_physicsClientWorldsCreated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1989, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated)", "%s\n\tPhysics: Trying to DestroyClientWorlds that weren't created", "g_physicsClientWorldsCreated") )
    __debugbreak();
  v0 = LOCAL_CLIENT_0;
  for ( i = 3; i <= 6; i += 3 )
  {
    if ( CG_PhysicsVolume_IsInitialized(v0) )
      CG_PhysicsVolume_Shutdown(v0);
    if ( PhysicsSVFX_IsWorldRegistered((Physics_WorldId)i, v0) )
      PhysicsSVFX_UnregisterWorld((Physics_WorldId)i, v0);
    if ( PhysicsGravityModifier_IsInitialized((const Physics_WorldId)i) )
      PhysicsGravityModifier_Shutdown((const Physics_WorldId)i);
    if ( PhysicsGravityModifier_IsInitialized((const Physics_WorldId)(i - 1)) )
      PhysicsGravityModifier_Shutdown((const Physics_WorldId)(i - 1));
    if ( PhysicsForceAction_IsInitialized((const Physics_WorldId)i) )
      PhysicsForceAction_Shutdown((const Physics_WorldId)i);
    if ( PhysicsForceAction_IsInitialized((const Physics_WorldId)(i - 1)) )
      PhysicsForceAction_Shutdown((const Physics_WorldId)(i - 1));
    ++v0;
  }
  CG_PhysicsCharacterProxy_Clear();
  CG_PhysicsCoverWall_Clear();
  v2 = 1;
  for ( j = 4; j <= 7; j += 3 )
  {
    if ( (v2 & g_physicsClientWorldsCreated) != 0 )
    {
      v4 = j;
      if ( !__OFSUB__(j, j - 2) )
      {
        do
          Physics_DestroyWorld(v4--);
        while ( v4 >= j - 2 );
      }
    }
    v2 = __ROL4__(v2, 1);
  }
  g_physicsClientWorldsCreated = 0;
  if ( !g_physicsServerWorldsCreated )
    Physics_NoWorldTidyUp();
  HavokPhysics_DoGarbageCollectionClient();
  Sys_LeaveCriticalSection(CRITSECT_PHYS_WORLDCREATE);
}

/*
==============
Physics_DestroyConstraint
==============
*/
void Physics_DestroyConstraint(Physics_WorldId worldId, unsigned int instanceId, int constraintIdx, bool activate)
{
  __int64 v8; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5769, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Destroy constraint when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5770, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Destroy constraint with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( instanceId == -1 )
  {
    LODWORD(v8) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5771, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Destroy constraint in invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v8) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
  {
    LODWORD(v8) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5772, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Destroy constraint in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v8) )
      __debugbreak();
  }
  if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
    LODWORD(v8) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5773, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Destroy constraint in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v8) )
      __debugbreak();
  }
  if ( constraintIdx < 0 || constraintIdx >= (int)Physics_GetNumConstraints(worldId, instanceId) )
  {
    LODWORD(v8) = constraintIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5774, ASSERT_TYPE_ASSERT, "(constraintIdx >= 0 && constraintIdx < (int)Physics_GetNumConstraints( worldId, instanceId))", "%s\n\tPhysics: Trying to Destroy constraint with invalid index %i in world %i", "constraintIdx >= 0 && constraintIdx < (int)Physics_GetNumConstraints( worldId, instanceId)", v8, worldId) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  HavokPhysics_DestroyConstraint(worldId, instanceId, constraintIdx, activate);
}

/*
==============
Physics_DestroyInstance
==============
*/
void Physics_DestroyInstance(Physics_WorldId worldId, unsigned int instanceId, bool activate)
{
  __int64 v5; 
  void (__fastcall *v6)(Physics_WorldId); 
  __int64 v7; 

  v5 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5741, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Destroy Instance when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v5 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5742, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Destroy Instance with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v5) )
    __debugbreak();
  if ( instanceId == -1 )
  {
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5743, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Destroy invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v7) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(v5 - 2) <= 5 )
  {
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5744, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Destroy Instance in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v7) )
      __debugbreak();
  }
  if ( !g_physicsServerWorldsCreated && (unsigned int)v5 <= 1 )
  {
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5745, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Destroy Instance in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v7) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  if ( !Com_ErrorEntered() || HavokPhysics_IsInstanceInUse((Physics_WorldId)v5, instanceId) )
  {
    HavokPhysics_DestroyInstance((Physics_WorldId)v5, instanceId, activate);
    v6 = s_physicsWorldBodyListChangedFns[v5];
    if ( v6 )
      v6((Physics_WorldId)v5);
  }
}

/*
==============
Physics_DestroyServerWorlds
==============
*/
void Physics_DestroyServerWorlds(void)
{
  int i; 

  Sys_EnterCriticalSection(CRITSECT_PHYS_WORLDCREATE);
  if ( !level.initializing || g_physicsServerWorldsCreated )
  {
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1946, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to CreateServerWorlds when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( !g_physicsServerWorldsCreated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1947, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated)", "%s\n\tPhysics: Trying to DestroyServerWorlds that weren't created", "g_physicsServerWorldsCreated") )
      __debugbreak();
    G_PhysicsVolume_Shutdown();
    G_PhysicsCharacterProxy_Update(1.0);
    PhysicsGravityModifier_Shutdown(PHYSICS_WORLD_ID_FIRST);
    PhysicsForceAction_Shutdown(PHYSICS_WORLD_ID_FIRST);
    for ( i = 1; i >= 0; --i )
      Physics_DestroyWorld((Physics_WorldId)i);
    g_physicsServerWorldsCreated = 0;
    if ( !g_physicsClientWorldsCreated )
      Physics_NoWorldTidyUp();
    HavokPhysics_DoGarbageCollectionServer();
  }
  Sys_LeaveCriticalSection(CRITSECT_PHYS_WORLDCREATE);
}

/*
==============
Physics_DestroyWorld
==============
*/
void Physics_DestroyWorld(Physics_WorldId worldId)
{
  __int64 v1; 
  LocalClientNum_t v2; 
  int integer; 
  unsigned int v4; 
  CgVehicleSystem *VehicleSystem; 

  v1 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1721, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to DestroyWorld when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v1 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1722, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to DestroyWorld with invalid world index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v1) )
    __debugbreak();
  v2 = LOCAL_CLIENT_0;
  integer = physics_debugVisualizeWorld->current.integer;
  if ( integer )
  {
    v4 = integer - 2;
    if ( v4 > 7 )
      v4 = -1;
    if ( !g_physicsServerWorldsCreated && v4 <= 1 )
      v4 = -1;
    if ( !g_physicsClientWorldsCreated && v4 - 2 <= 5 )
      v4 = -1;
    if ( v4 == (_DWORD)v1 )
    {
      Dvar_SetInt_Internal(physics_debugVisualizeWorld, 0);
      Dvar_MakeLatchedValueCurrent(physics_debugVisualizeWorld);
      if ( g_physicsServerWorldsCreated || g_physicsClientWorldsCreated )
        HavokPhysics_StopDrawDebugWorld((Physics_WorldId)v1);
    }
  }
  if ( GVehicles::ms_gVehiclesSystem )
    PhysicsVehicle_DestroyWorld((Physics_WorldId)v1, GVehicles::ms_gVehiclesSystem);
  if ( (unsigned int)v1 > 1 )
  {
    if ( (int)v1 <= 4 )
    {
LABEL_26:
      if ( v2 < CgVehicleSystem::ms_allocatedCount && CgVehicleSystem::ms_vehicleSystemArray[v2] )
      {
        VehicleSystem = CgVehicleSystem::GetVehicleSystem(v2);
        PhysicsVehicle_DestroyWorld((Physics_WorldId)v1, VehicleSystem);
      }
      goto LABEL_31;
    }
    if ( (int)v1 <= 7 )
    {
      v2 = LOCAL_CLIENT_1;
      goto LABEL_26;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1787, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid world") )
      __debugbreak();
  }
LABEL_31:
  Physics_ManifoldCallback_ShutdownForWorld((Physics_WorldId)v1);
  Physics_SimpleCollisionCallback_ShutdownForWorld((Physics_WorldId)v1);
  if ( s_physicsWorldCInfos[v1].hasFXSupport )
    PhysicsFX_UnregisterWorld((Physics_WorldId)v1);
  PhysicsQuery_ShutdownForWorld((Physics_WorldId)v1);
  HavokPhysics_DestroyWorld((Physics_WorldId)v1);
}

/*
==============
Physics_DirtyBroadphase
==============
*/
void Physics_DirtyBroadphase(Physics_WorldId worldId, const hkArray<hknpBodyId,hkContainerHeapAllocator> *array)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6429, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Physics_DirtyBroadphase when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6430, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set Instance contents with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( !array && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6431, ASSERT_TYPE_ASSERT, "(array)", (const char *)&queryFormat, "array") )
    __debugbreak();
  HavokPhysics_DirtyBroadphase(worldId, array);
}

/*
==============
Physics_DisableShapeCache
==============
*/

void __fastcall Physics_DisableShapeCache(unsigned int threadId, bool disable)
{
  HavokPhysics_DisableShapeCache(threadId, disable);
}

/*
==============
Physics_DoCmd_StepWorldCollide
==============
*/
void Physics_DoCmd_StepWorldCollide(const void *const cmdInfo)
{
  float v2; 
  int v3; 
  int v4; 
  __int64 v5; 
  __int128 v6; 
  int v7; 
  __int128 data; 
  int v9; 

  v2 = *((float *)cmdInfo + 4);
  v3 = *((_DWORD *)cmdInfo + 3);
  v4 = *((_DWORD *)cmdInfo + 2);
  v5 = *(int *)cmdInfo;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2801, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Step World collide when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v5 > 7 )
  {
    v7 = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2802, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Step World collide with invalid world index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v7) )
      __debugbreak();
  }
  qword_14B804BF0[v5] = Sys_Milliseconds();
  HavokPhysics_StepWorldCollide((Physics_WorldId)v5, v4, v3, v2);
  Physics_SetBroadphaseNeedsRefresh((const Physics_WorldId)v5, 0);
  v6 = *(_OWORD *)cmdInfo;
  v9 = *((_DWORD *)cmdInfo + 4);
  data = v6;
  Sys_AddWorkerCmd(WRKCMD_PHYSICS_STEP_WORLD_SOLVE, &data);
}

/*
==============
Physics_DoCmd_StepWorldDetail
==============
*/
void Physics_DoCmd_StepWorldDetail(const void *const cmdInfo)
{
  Physics_StepWorldDetail(*(Physics_WorldId *)cmdInfo, *((_DWORD *)cmdInfo + 2), *((_DWORD *)cmdInfo + 3));
}

/*
==============
Physics_DoCmd_StepWorldEnd
==============
*/
void Physics_DoCmd_StepWorldEnd(const void *const cmdInfo)
{
  __int128 v2; 
  __int128 data; 
  int v4; 

  Physics_StepWorldEnd(*(Physics_WorldId *)cmdInfo, *((_DWORD *)cmdInfo + 2), *((_DWORD *)cmdInfo + 3));
  v2 = *(_OWORD *)cmdInfo;
  v4 = *((_DWORD *)cmdInfo + 4);
  data = v2;
  Sys_AddWorkerCmd(WRKCMD_PHYSICS_STEP_WORLD_DETAIL, &data);
}

/*
==============
Physics_DoCmd_StepWorldFX
==============
*/
void Physics_DoCmd_StepWorldFX(const void *const cmdInfo)
{
  int v2; 
  int v3; 
  Physics_WorldId v4; 
  float v5; 
  int v6; 
  int v7; 
  Physics_WorldId v8; 
  int data; 

  v2 = *((_DWORD *)cmdInfo + 3);
  v3 = *((_DWORD *)cmdInfo + 2);
  v4 = *(_DWORD *)cmdInfo;
  v5 = *((float *)cmdInfo + 4);
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2833, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Step World fx when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v4 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v8 = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2834, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Step World fx with invalid world index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v8) )
      __debugbreak();
  }
  HavokPhysics_StepWorldFX(v4, v3, v2, v5);
  v6 = *(_DWORD *)cmdInfo;
  if ( *(_DWORD *)cmdInfo <= 1u )
    goto LABEL_14;
  if ( v6 > 4 )
  {
    if ( v6 <= 7 )
    {
      v7 = 1;
      goto LABEL_15;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1787, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid world") )
      __debugbreak();
LABEL_14:
    v7 = -1;
    goto LABEL_15;
  }
  v7 = 0;
LABEL_15:
  data = v7;
  Sys_AddWorkerCmd(WRKCMD_PHYSICSFX_PLAYSOUNDS, &data);
}

/*
==============
Physics_DoCmd_StepWorldPhysicsObjects
==============
*/
void Physics_DoCmd_StepWorldPhysicsObjects(const void *const cmdInfo)
{
  Physics_StepWorldPhysicsObjects(*(Physics_WorldId *)cmdInfo, *((_DWORD *)cmdInfo + 2), *((_DWORD *)cmdInfo + 3));
}

/*
==============
Physics_DoCmd_StepWorldPrep
==============
*/
void Physics_DoCmd_StepWorldPrep(const void *const cmdInfo)
{
  float v2; 
  int v3; 
  int v4; 
  Physics_WorldId v5; 
  __int128 v6; 
  Physics_WorldId v7; 
  __int128 data; 
  int v9; 

  v2 = *((float *)cmdInfo + 4);
  v3 = *((_DWORD *)cmdInfo + 3);
  v4 = *((_DWORD *)cmdInfo + 2);
  v5 = *(_DWORD *)cmdInfo;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2789, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Step World Prep when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v5 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v7 = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2790, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Step World Prep with invalid world index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v7) )
      __debugbreak();
  }
  HavokPhysics_StepWorldPrep(v5, v4, v3, v2);
  v6 = *(_OWORD *)cmdInfo;
  v9 = *((_DWORD *)cmdInfo + 4);
  data = v6;
  Sys_AddWorkerCmd(WRKCMD_PHYSICS_STEP_WORLD_COLLIDE, &data);
}

/*
==============
Physics_DoCmd_StepWorldSolve
==============
*/
void Physics_DoCmd_StepWorldSolve(const void *const cmdInfo)
{
  float v2; 
  int v3; 
  int v4; 
  Physics_WorldId v5; 
  __int128 v6; 
  Physics_WorldId v7; 
  __int128 data; 
  int v9; 

  v2 = *((float *)cmdInfo + 4);
  v3 = *((_DWORD *)cmdInfo + 3);
  v4 = *((_DWORD *)cmdInfo + 2);
  v5 = *(_DWORD *)cmdInfo;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2820, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Step World solve when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v5 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v7 = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2821, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Step World solve with invalid world index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v7) )
      __debugbreak();
  }
  HavokPhysics_StepWorldSolve(v5, v4, v3, v2);
  v6 = *(_OWORD *)cmdInfo;
  v9 = *((_DWORD *)cmdInfo + 4);
  data = v6;
  Sys_AddWorkerCmd(WRKCMD_PHYSICS_STEP_WORLD_FX, &data);
  Sys_AddWorkerCmd(WRKCMD_PHYSICS_STEP_WORLD_END, &data);
  Sys_AddWorkerCmd(WRKCMD_PHYSICS_STEP_WORLD_PHYSICS_OBJECTS, &data);
}

/*
==============
Physics_DoCmd_StepWorldStart
==============
*/
void Physics_DoCmd_StepWorldStart(const void *const cmdInfo)
{
  __int128 v2; 
  __int128 data; 
  int v4; 

  Physics_StepWorldStart(*(Physics_WorldId *)cmdInfo, *((_DWORD *)cmdInfo + 1), *((_DWORD *)cmdInfo + 2), *((_DWORD *)cmdInfo + 3), *((float *)cmdInfo + 4));
  v2 = *(_OWORD *)cmdInfo;
  v4 = *((_DWORD *)cmdInfo + 4);
  data = v2;
  Sys_AddWorkerCmd(WRKCMD_PHYSICS_STEP_WORLD_PREP, &data);
}

/*
==============
Physics_DoCmd_Task
==============
*/
void Physics_DoCmd_Task(const void *const cmdInfo)
{
  int v1; 
  Physics_WorldId v2; 
  Physics_WorldId v3; 

  v1 = *((_DWORD *)cmdInfo + 1);
  v2 = *(_DWORD *)cmdInfo;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2879, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Process a task when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v2 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v3 = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2880, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Process a task with invalid world index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v3) )
      __debugbreak();
  }
  Profile_Begin(612);
  HavokPhysics_Task(v2, v1);
  Profile_EndInternal(NULL);
}

/*
==============
Physics_DoCmd_UpdatePredictiveWorld
==============
*/
void Physics_DoCmd_UpdatePredictiveWorld(const void *const cmdInfo)
{
  Profile_Begin(602);
  Physics_StepWorld(*(Physics_WorldId *)cmdInfo, 0, 1, 0.0);
  Profile_EndInternal(NULL);
}

/*
==============
Physics_DoCmd_UpdatePredictiveWorldPre
==============
*/
void Physics_DoCmd_UpdatePredictiveWorldPre(const void *const cmdInfo)
{
  Sys_ProfBeginNamedEvent(0xFF808080, "ClientPhysicsPredictiveWorldUpdatePre");
  Physics_PreStepWorld(*(Physics_WorldId *)cmdInfo, *((float *)cmdInfo + 1));
  Sys_ProfEndNamedEvent();
}

/*
==============
Physics_DoDeferredQueries
==============
*/
void Physics_DoDeferredQueries(Physics_WorldId worldId)
{
  char v2; 
  Physics_WorldId v3; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9860, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to DoDeferredQueries against body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v3 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9861, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to DoDeferredQueries against body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v3) )
      __debugbreak();
  }
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_SERVER_DETAIL && Physics_IsDetailWorld(worldId) )
  {
    v2 = 1;
    CL_Main_SkeletonCacheValidity_Lock(SkeletonCacheValidityLockType_Locked_Physics);
  }
  else
  {
    v2 = 0;
  }
  HavokPhysics_DoDeferredQueries(worldId);
  if ( v2 )
    CL_Main_SkeletonCacheValidity_Unlock(SkeletonCacheValidityLockType_Locked_Physics);
}

/*
==============
Physics_DoGarbageCollectionClient
==============
*/

void Physics_DoGarbageCollectionClient(void)
{
  HavokPhysics_DoGarbageCollectionClient();
}

/*
==============
Physics_DoGarbageCollectionServer
==============
*/

void Physics_DoGarbageCollectionServer(void)
{
  HavokPhysics_DoGarbageCollectionServer();
}

/*
==============
Physics_DrawDebug
==============
*/
void Physics_DrawDebug(const ScreenPlacement *scrPlace)
{
  signed __int64 v1; 
  void *v2; 
  fileHandle_t *v4; 
  int integer; 
  int v6; 
  int v7; 
  unsigned int unsignedInt; 
  BOOL enabled; 
  int v10; 
  int v11; 
  float v12; 
  Physics_WorldId v13; 
  float v14; 
  Physics_WorldId v15; 
  __int64 v16; 
  Physics_WorldId v17; 
  int v18; 
  const char **v19; 
  const char *v20; 
  char v21; 
  int v22; 
  char v23; 
  char v24; 
  char v25; 
  char v26; 
  char v27; 
  char v28; 
  char v29; 
  char v30; 
  char v31; 
  char v32; 
  char v33; 
  char v34; 
  char v35; 
  char v36; 
  char v37; 
  char v38; 
  char v39; 
  char v40; 
  char v41; 
  char v42; 
  char v43; 
  char v44; 
  char v45; 
  char v46; 
  char v47; 
  char v48; 
  char v49; 
  char v50; 
  char v51; 
  char v52; 
  char v53; 
  char v54; 
  char v55; 
  char v56; 
  char v57; 
  char v58; 
  char v59; 
  Physics_WorldId v60; 
  int v61; 
  int v62; 
  char v63; 
  const char *WorldName; 
  float v65; 
  __int64 v66; 
  LocalClientNum_t v67; 
  __int64 v68; 
  __int64 v69; 
  __int64 v70; 
  __int64 v71; 
  __int64 v72; 
  __int64 v73; 
  __int64 v74; 
  __int64 v75; 
  __int64 v76; 
  MapEnts *mapEnts; 
  unsigned int v78; 
  float v79; 
  __int64 v80; 
  signed int v81; 
  const char *MapEntsShapeName; 
  unsigned int v83; 
  DB_AssetEntryFlags *p_m_headEntries; 
  unsigned int v85; 
  DB_AssetEntryPool *AssetEntryPool; 
  __int64 v87; 
  unsigned int v88; 
  float v89; 
  __int64 v90; 
  __int64 v91; 
  _DWORD *v92; 
  unsigned int v93; 
  int v94; 
  __int64 v95; 
  unsigned int v96; 
  __int64 v97; 
  _BYTE *v98; 
  __int64 v99; 
  float v100; 
  Physics_WorldId v101; 
  __int64 v102; 
  __int64 v103; 
  const char *v104; 
  float v105; 
  float v106; 
  float v107; 
  float v108; 
  Physics_WorldId v109; 
  __int64 v110; 
  const char *v111; 
  float v112; 
  float v113; 
  float v114; 
  float v115; 
  Physics_WorldId v116; 
  __int64 v117; 
  Physics_WorldId v118; 
  __int64 v119; 
  Physics_WorldId v120; 
  __int64 v121; 
  Physics_WorldId v122; 
  __int64 v123; 
  Physics_WorldId v124; 
  float v125; 
  const char *v126; 
  __int64 v127; 
  Physics_WorldId v128; 
  int v129; 
  int v130; 
  const dvar_t *v131; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  char *fmtc; 
  char *fmtd; 
  char *fmte; 
  char *fmtf; 
  char *fmtg; 
  char *fmth; 
  char *fmti; 
  char *fmtj; 
  char *fmtk; 
  char *fmtl; 
  char *fmtm; 
  char *fmtn; 
  char *fmto; 
  __int64 forceColor; 
  __int64 forceColorb; 
  __int64 forceColorc; 
  __int64 forceColord; 
  __int64 forceColore; 
  __int64 forceColorf; 
  __int64 forceColorg; 
  __int64 forceColorh; 
  __int64 forceColora; 
  __int64 shadow; 
  __int64 shadowa; 
  __int64 shadowb; 
  __int64 shadowc; 
  __int64 charHeight; 
  __int64 adjust; 
  float x; 
  float y; 
  unsigned int collisionFilterInfo; 
  char buffer[32]; 
  __int64 v167[3584]; 
  char dest[256]; 

  v2 = alloca(v1);
  if ( !physics_debugDisplayOffsetX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10661, ASSERT_TYPE_ASSERT, "(physics_debugDisplayOffsetX)", "%s\n\tPhysics: debug dvar physics_debugDisplayOffsetX is null", "physics_debugDisplayOffsetX") )
    __debugbreak();
  if ( !physics_debugDisplayOffsetY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10662, ASSERT_TYPE_ASSERT, "(physics_debugDisplayOffsetY)", "%s\n\tPhysics: debug dvar physics_debugDisplayOffsetY is null", "physics_debugDisplayOffsetY") )
    __debugbreak();
  if ( !physics_debugMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10663, ASSERT_TYPE_ASSERT, "(physics_debugMemory)", "%s\n\tPhysics: debug dvar physics_debugMemory is null", "physics_debugMemory") )
    __debugbreak();
  if ( !physics_debugCPU && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10664, ASSERT_TYPE_ASSERT, "(physics_debugCPU)", "%s\n\tPhysics: debug dvar physics_debugCPU is null", "physics_debugCPU") )
    __debugbreak();
  if ( !physics_debugProfileData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10665, ASSERT_TYPE_ASSERT, "(physics_debugProfileData)", "%s\n\tPhysics: debug dvar physics_debugProfileData is null", "physics_debugProfileData") )
    __debugbreak();
  if ( !physics_debugTimestep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10666, ASSERT_TYPE_ASSERT, "(physics_debugTimestep)", "%s\n\tPhysics: debug dvar physics_debugTimestep is null", "physics_debugTimestep") )
    __debugbreak();
  if ( !physics_debugRefSystemCounts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10667, ASSERT_TYPE_ASSERT, "(physics_debugRefSystemCounts)", "%s\n\tPhysics: debug dvar physics_debugRefSystemCounts is null", "physics_debugRefSystemCounts") )
    __debugbreak();
  if ( !physics_debugVisualizeWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10668, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorld)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorld is null", "physics_debugVisualizeWorld") )
    __debugbreak();
  if ( !physics_debugVisualizeWorldIgnoreCharacterProxies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10669, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorldIgnoreCharacterProxies)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorldIgnoreCharacterProxies is null", "physics_debugVisualizeWorldIgnoreCharacterProxies") )
    __debugbreak();
  if ( !physics_debugVisualizeWorldRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10670, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorldRadius)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorldRadius is null", "physics_debugVisualizeWorldRadius") )
    __debugbreak();
  if ( !physics_debugVisualizeWorldClearZFirst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10671, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorldClearZFirst)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorldClearZFirst is null", "physics_debugVisualizeWorldClearZFirst") )
    __debugbreak();
  if ( !physics_debugVisualizeWorldViewMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10672, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorldViewMode)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorldViewMode is null", "physics_debugVisualizeWorldViewMode") )
    __debugbreak();
  if ( !physics_debugVisualizeWorldComplexityTriThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10673, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorldComplexityTriThreshold)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorldComplexityTriThreshold is null", "physics_debugVisualizeWorldComplexityTriThreshold") )
    __debugbreak();
  if ( !physics_debugVisualizeWorldComplexityLineThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10674, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorldComplexityLineThreshold)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorldComplexityLineThreshold is null", "physics_debugVisualizeWorldComplexityLineThreshold") )
    __debugbreak();
  if ( !physics_debugVisualizeWorldBodyId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10675, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorldBodyId)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorldBodyId is null", "physics_debugVisualizeWorldBodyId") )
    __debugbreak();
  if ( !physics_debugVisualizeWorldBroadphase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10676, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorldBroadphase)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorldBroadphase is null", "physics_debugVisualizeWorldBroadphase") )
    __debugbreak();
  if ( !physics_debugVisualizeWorldConstraint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10677, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorldConstraint)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorldConstraint is null", "physics_debugVisualizeWorldConstraint") )
    __debugbreak();
  if ( !physics_debugVisualizeWorldDeactivation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10678, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorldDeactivation)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorldDeactivation is null", "physics_debugVisualizeWorldDeactivation") )
    __debugbreak();
  if ( !physics_debugVisualizeWorldManifold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10679, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorldManifold)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorldManifold is null", "physics_debugVisualizeWorldManifold") )
    __debugbreak();
  if ( !physics_debugVisualizeWorldMassProperties && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10680, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorldMassProperties)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorldMassProperties is null", "physics_debugVisualizeWorldMassProperties") )
    __debugbreak();
  if ( !physics_debugVisualizeWorldMotionId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10681, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorldMotionId)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorldMotionId is null", "physics_debugVisualizeWorldMotionId") )
    __debugbreak();
  if ( !physics_debugVisualizeWorldShape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10682, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorldShape)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorldShape is null", "physics_debugVisualizeWorldShape") )
    __debugbreak();
  if ( !physics_debugVisualizeWorldShapeLowRes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10683, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorldShapeLowRes)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorldShapeLowRes is null", "physics_debugVisualizeWorldShapeLowRes") )
    __debugbreak();
  if ( !physics_debugVisualizeWorldVehicles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10684, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorldVehicles)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorldVehicles is null", "physics_debugVisualizeWorldVehicles") )
    __debugbreak();
  if ( !physics_debugVisualizeWorldCollisionHeatmap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10685, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorldCollisionHeatmap)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorldCollisionHeatmap is null", "physics_debugVisualizeWorldCollisionHeatmap") )
    __debugbreak();
  if ( !physics_debugVisualizeWorldCollisionHeatmapGood && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10686, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorldCollisionHeatmapGood)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorldCollisionHeatmapGood is null", "physics_debugVisualizeWorldCollisionHeatmapGood") )
    __debugbreak();
  if ( !physics_debugVisualizeWorldCollisionHeatmapBad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10687, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorldCollisionHeatmapBad)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorldCollisionHeatmapBad is null", "physics_debugVisualizeWorldCollisionHeatmapBad") )
    __debugbreak();
  if ( !physics_debugVisualizeWorldCollisionHeatmapRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10688, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorldCollisionHeatmapRange)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorldCollisionHeatmapRange is null", "physics_debugVisualizeWorldCollisionHeatmapRange") )
    __debugbreak();
  if ( !physics_debugVisualizeWorldDebugDraw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10689, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorldDebugDraw)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorldDebugDraw is null", "physics_debugVisualizeWorldDebugDraw") )
    __debugbreak();
  if ( !physics_debugVisualizeWorldCollisionTile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10690, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorldCollisionTile)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorldCollisionTile is null", "physics_debugVisualizeWorldCollisionTile") )
    __debugbreak();
  if ( !physics_debugVisualizeWorldRaycasts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10691, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorldRaycasts)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorldRaycasts is null", "physics_debugVisualizeWorldRaycasts") )
    __debugbreak();
  if ( !physics_debugVisualizeWorldShapecasts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10692, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorldShapecasts)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorldShapecasts is null", "physics_debugVisualizeWorldShapecasts") )
    __debugbreak();
  if ( !physics_debugVisualizeWorldAABBQuery && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10693, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorldAABBQuery)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorldAABBQuery is null", "physics_debugVisualizeWorldAABBQuery") )
    __debugbreak();
  if ( !physics_debugVisualizeWorldPointQuery && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10694, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorldPointQuery)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorldPointQuery is null", "physics_debugVisualizeWorldPointQuery") )
    __debugbreak();
  if ( !physics_debugVisualizeWorldClosestPointsQuery && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10695, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorldClosestPointsQuery)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorldClosestPointsQuery is null", "physics_debugVisualizeWorldClosestPointsQuery") )
    __debugbreak();
  if ( !physics_debugVisualizeCharacterProxies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10696, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeCharacterProxies)", "%s\n\tPhysics: debug dvar physics_debugVisualizeCharacterProxies is null", "physics_debugVisualizeCharacterProxies") )
    __debugbreak();
  if ( !physics_debugVisualizeWorldIWShape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10697, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorldIWShape)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorldIWShape is null", "physics_debugVisualizeWorldIWShape") )
    __debugbreak();
  if ( !physics_debugVisualizeWorldParticles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10698, ASSERT_TYPE_ASSERT, "(physics_debugVisualizeWorldParticles)", "%s\n\tPhysics: debug dvar physics_debugVisualizeWorldParticles is null", "physics_debugVisualizeWorldParticles") )
    __debugbreak();
  if ( !cloth_debugVisualizeWorldGeometry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10699, ASSERT_TYPE_ASSERT, "(cloth_debugVisualizeWorldGeometry)", "%s\n\tCloth: debug dvar cloth_debugVisualizeWorldGeometry is null", "cloth_debugVisualizeWorldGeometry") )
    __debugbreak();
  if ( !cloth_debugVisualizeWorldSimParticlePosition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10700, ASSERT_TYPE_ASSERT, "(cloth_debugVisualizeWorldSimParticlePosition)", "%s\n\tCloth: debug dvar cloth_debugVisualizeWorldSimParticlePosition is null", "cloth_debugVisualizeWorldSimParticlePosition") )
    __debugbreak();
  if ( !cloth_debugVisualizeWorldSimNormals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10701, ASSERT_TYPE_ASSERT, "(cloth_debugVisualizeWorldSimNormals)", "%s\n\tCloth: debug dvar cloth_debugVisualizeWorldSimNormals is null", "cloth_debugVisualizeWorldSimNormals") )
    __debugbreak();
  if ( !cloth_debugVisualizeWorldParticleVelocity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10702, ASSERT_TYPE_ASSERT, "(cloth_debugVisualizeWorldParticleVelocity)", "%s\n\tCloth: debug dvar cloth_debugVisualizeWorldParticleVelocity is null", "cloth_debugVisualizeWorldParticleVelocity") )
    __debugbreak();
  if ( !cloth_debugVisualizeWorldParticleId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10703, ASSERT_TYPE_ASSERT, "(cloth_debugVisualizeWorldParticleId)", "%s\n\tCloth: debug dvar cloth_debugVisualizeWorldParticleId is null", "cloth_debugVisualizeWorldParticleId") )
    __debugbreak();
  if ( !cloth_debugVisualizeWorldSimStandardLinks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10704, ASSERT_TYPE_ASSERT, "(cloth_debugVisualizeWorldSimStandardLinks)", "%s\n\tCloth: debug dvar cloth_debugVisualizeWorldSimStandardLinks is null", "cloth_debugVisualizeWorldSimStandardLinks") )
    __debugbreak();
  if ( !cloth_debugVisualizeWorldSimStretchLinks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10705, ASSERT_TYPE_ASSERT, "(cloth_debugVisualizeWorldSimStretchLinks)", "%s\n\tCloth: debug dvar cloth_debugVisualizeWorldSimStretchLinks is null", "cloth_debugVisualizeWorldSimStretchLinks") )
    __debugbreak();
  if ( !cloth_debugVisualizeWorldSimBendLinks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10706, ASSERT_TYPE_ASSERT, "(cloth_debugVisualizeWorldSimBendLinks)", "%s\n\tCloth: debug dvar cloth_debugVisualizeWorldSimBendLinks is null", "cloth_debugVisualizeWorldSimBendLinks") )
    __debugbreak();
  if ( !cloth_debugVisualizeWorldSimBendStiffness && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10707, ASSERT_TYPE_ASSERT, "(cloth_debugVisualizeWorldSimBendStiffness)", "%s\n\tCloth: debug dvar cloth_debugVisualizeWorldSimBendStiffness is null", "cloth_debugVisualizeWorldSimBendStiffness") )
    __debugbreak();
  if ( !cloth_debugVisualizeWorldSimVolumeTransforms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10708, ASSERT_TYPE_ASSERT, "(cloth_debugVisualizeWorldSimVolumeTransforms)", "%s\n\tCloth: debug dvar cloth_debugVisualizeWorldSimVolumeTransforms is null", "cloth_debugVisualizeWorldSimVolumeTransforms") )
    __debugbreak();
  if ( !cloth_debugVisualizeWorldLocalRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10709, ASSERT_TYPE_ASSERT, "(cloth_debugVisualizeWorldLocalRange)", "%s\n\tCloth: debug dvar cloth_debugVisualizeWorldLocalRange is null", "cloth_debugVisualizeWorldLocalRange") )
    __debugbreak();
  if ( !cloth_debugVisualizeWorldBonePlane && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10710, ASSERT_TYPE_ASSERT, "(cloth_debugVisualizeWorldBonePlane)", "%s\n\tCloth: debug dvar cloth_debugVisualizeWorldBonePlane is null", "cloth_debugVisualizeWorldBonePlane") )
    __debugbreak();
  if ( !cloth_debugVisualizeWorldTransition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10711, ASSERT_TYPE_ASSERT, "(cloth_debugVisualizeWorldTransition)", "%s\n\tCloth: debug dvar cloth_debugVisualizeWorldTransition is null", "cloth_debugVisualizeWorldTransition") )
    __debugbreak();
  if ( !cloth_debugVisualizeWorldCollidable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10712, ASSERT_TYPE_ASSERT, "(cloth_debugVisualizeWorldCollidable)", "%s\n\tCloth: debug dvar cloth_debugVisualizeWorldCollidable is null", "cloth_debugVisualizeWorldCollidable") )
    __debugbreak();
  if ( !cloth_debugVisualizeWorldParticleRadius && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10713, ASSERT_TYPE_ASSERT, "(cloth_debugVisualizeWorldParticleRadius)", "%s\n\tCloth: debug dvar cloth_debugVisualizeWorldParticleRadius is null", "cloth_debugVisualizeWorldParticleRadius") )
    __debugbreak();
  if ( !cloth_debugVisualizeWorldVirtualCollisionPoints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10714, ASSERT_TYPE_ASSERT, "(cloth_debugVisualizeWorldVirtualCollisionPoints)", "%s\n\tCloth: debug dvar cloth_debugVisualizeWorldVirtualCollisionPoints is null", "cloth_debugVisualizeWorldVirtualCollisionPoints") )
    __debugbreak();
  if ( !cloth_debugVisualizeWorldVirtualCollisionPointsLandscape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10715, ASSERT_TYPE_ASSERT, "(cloth_debugVisualizeWorldVirtualCollisionPointsLandscape)", "%s\n\tCloth: debug dvar cloth_debugVisualizeWorldVirtualCollisionPointsLandscape is null", "cloth_debugVisualizeWorldVirtualCollisionPointsLandscape") )
    __debugbreak();
  if ( !physics_debugVisualize_CONTENTS_SOLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10716, ASSERT_TYPE_ASSERT, "(physics_debugVisualize_CONTENTS_SOLID)", "%s\n\tPhysics: debug dvar physics_debugVisualize_CONTENTS_SOLID is null", "physics_debugVisualize_CONTENTS_SOLID") )
    __debugbreak();
  if ( !physics_debugVisualize_CONTENTS_FOLIAGE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10717, ASSERT_TYPE_ASSERT, "(physics_debugVisualize_CONTENTS_FOLIAGE)", "%s\n\tPhysics: debug dvar physics_debugVisualize_CONTENTS_FOLIAGE is null", "physics_debugVisualize_CONTENTS_FOLIAGE") )
    __debugbreak();
  if ( !physics_debugVisualize_CONTENTS_VEHICLETRIGGER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10718, ASSERT_TYPE_ASSERT, "(physics_debugVisualize_CONTENTS_VEHICLETRIGGER)", "%s\n\tPhysics: debug dvar physics_debugVisualize_CONTENTS_VEHICLETRIGGER is null", "physics_debugVisualize_CONTENTS_VEHICLETRIGGER") )
    __debugbreak();
  if ( !physics_debugVisualize_CONTENTS_GLASS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10719, ASSERT_TYPE_ASSERT, "(physics_debugVisualize_CONTENTS_GLASS)", "%s\n\tPhysics: debug dvar physics_debugVisualize_CONTENTS_GLASS is null", "physics_debugVisualize_CONTENTS_GLASS") )
    __debugbreak();
  if ( !physics_debugVisualize_CONTENTS_WATER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10720, ASSERT_TYPE_ASSERT, "(physics_debugVisualize_CONTENTS_WATER)", "%s\n\tPhysics: debug dvar physics_debugVisualize_CONTENTS_WATER is null", "physics_debugVisualize_CONTENTS_WATER") )
    __debugbreak();
  if ( !physics_debugVisualize_CONTENTS_AI_NOSHOOT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10721, ASSERT_TYPE_ASSERT, "(physics_debugVisualize_CONTENTS_AI_NOSHOOT)", "%s\n\tPhysics: debug dvar physics_debugVisualize_CONTENTS_AI_NOSHOOT is null", "physics_debugVisualize_CONTENTS_AI_NOSHOOT") )
    __debugbreak();
  if ( !physics_debugVisualize_CONTENTS_MISSILECLIP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10722, ASSERT_TYPE_ASSERT, "(physics_debugVisualize_CONTENTS_MISSILECLIP)", "%s\n\tPhysics: debug dvar physics_debugVisualize_CONTENTS_MISSILECLIP is null", "physics_debugVisualize_CONTENTS_MISSILECLIP") )
    __debugbreak();
  if ( !physics_debugVisualize_CONTENTS_ITEM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10723, ASSERT_TYPE_ASSERT, "(physics_debugVisualize_CONTENTS_ITEM)", "%s\n\tPhysics: debug dvar physics_debugVisualize_CONTENTS_ITEM is null", "physics_debugVisualize_CONTENTS_ITEM") )
    __debugbreak();
  if ( !physics_debugVisualize_CONTENTS_VEHICLECLIP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10724, ASSERT_TYPE_ASSERT, "(physics_debugVisualize_CONTENTS_VEHICLECLIP)", "%s\n\tPhysics: debug dvar physics_debugVisualize_CONTENTS_VEHICLECLIP is null", "physics_debugVisualize_CONTENTS_VEHICLECLIP") )
    __debugbreak();
  if ( !physics_debugVisualize_CONTENTS_ITEMCLIP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10725, ASSERT_TYPE_ASSERT, "(physics_debugVisualize_CONTENTS_ITEMCLIP)", "%s\n\tPhysics: debug dvar physics_debugVisualize_CONTENTS_ITEMCLIP is null", "physics_debugVisualize_CONTENTS_ITEMCLIP") )
    __debugbreak();
  if ( !physics_debugVisualize_CONTENTS_SKY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10726, ASSERT_TYPE_ASSERT, "(physics_debugVisualize_CONTENTS_SKY)", "%s\n\tPhysics: debug dvar physics_debugVisualize_CONTENTS_SKY is null", "physics_debugVisualize_CONTENTS_SKY") )
    __debugbreak();
  if ( !physics_debugVisualize_CONTENTS_AI_NOSIGHT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10727, ASSERT_TYPE_ASSERT, "(physics_debugVisualize_CONTENTS_AI_NOSIGHT)", "%s\n\tPhysics: debug dvar physics_debugVisualize_CONTENTS_AI_NOSIGHT is null", "physics_debugVisualize_CONTENTS_AI_NOSIGHT") )
    __debugbreak();
  if ( !physics_debugVisualize_CONTENTS_CLIPSHOT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10728, ASSERT_TYPE_ASSERT, "(physics_debugVisualize_CONTENTS_CLIPSHOT)", "%s\n\tPhysics: debug dvar physics_debugVisualize_CONTENTS_CLIPSHOT is null", "physics_debugVisualize_CONTENTS_CLIPSHOT") )
    __debugbreak();
  if ( !physics_debugVisualize_CONTENTS_ACTOR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10729, ASSERT_TYPE_ASSERT, "(physics_debugVisualize_CONTENTS_ACTOR)", "%s\n\tPhysics: debug dvar physics_debugVisualize_CONTENTS_ACTOR is null", "physics_debugVisualize_CONTENTS_ACTOR") )
    __debugbreak();
  if ( !physics_debugVisualize_CONTENTS_PLAYERCLIP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10730, ASSERT_TYPE_ASSERT, "(physics_debugVisualize_CONTENTS_PLAYERCLIP)", "%s\n\tPhysics: debug dvar physics_debugVisualize_CONTENTS_PLAYERCLIP is null", "physics_debugVisualize_CONTENTS_PLAYERCLIP") )
    __debugbreak();
  if ( !physics_debugVisualize_CONTENTS_PLAYER_NOSIGHT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10731, ASSERT_TYPE_ASSERT, "(physics_debugVisualize_CONTENTS_PLAYER_NOSIGHT)", "%s\n\tPhysics: debug dvar physics_debugVisualize_CONTENTS_PLAYER_NOSIGHT is null", "physics_debugVisualize_CONTENTS_PLAYER_NOSIGHT") )
    __debugbreak();
  if ( !physics_debugVisualize_CONTENTS_AI_CLIP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10732, ASSERT_TYPE_ASSERT, "(physics_debugVisualize_CONTENTS_AI_CLIP)", "%s\n\tPhysics: debug dvar physics_debugVisualize_CONTENTS_AI_CLIP is null", "physics_debugVisualize_CONTENTS_AI_CLIP") )
    __debugbreak();
  if ( !physics_debugVisualize_CONTENTS_SENTIENTTRIGGER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10733, ASSERT_TYPE_ASSERT, "(physics_debugVisualize_CONTENTS_SENTIENTTRIGGER)", "%s\n\tPhysics: debug dvar physics_debugVisualize_CONTENTS_SENTIENTTRIGGER is null", "physics_debugVisualize_CONTENTS_SENTIENTTRIGGER") )
    __debugbreak();
  if ( !physics_debugVisualize_CONTENTS_EXPLOSIONCLIP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10734, ASSERT_TYPE_ASSERT, "(physics_debugVisualize_CONTENTS_EXPLOSIONCLIP)", "%s\n\tPhysics: debug dvar physics_debugVisualize_CONTENTS_EXPLOSIONCLIP is null", "physics_debugVisualize_CONTENTS_EXPLOSIONCLIP") )
    __debugbreak();
  if ( !physics_debugVisualize_CONTENTS_SOUNDCLIP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10735, ASSERT_TYPE_ASSERT, "(physics_debugVisualize_CONTENTS_SOUNDCLIP)", "%s\n\tPhysics: debug dvar physics_debugVisualize_CONTENTS_SOUNDCLIP is null", "physics_debugVisualize_CONTENTS_SOUNDCLIP") )
    __debugbreak();
  if ( !physics_debugVisualize_CONTENTS_SOUNDREFLECT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10736, ASSERT_TYPE_ASSERT, "(physics_debugVisualize_CONTENTS_SOUNDREFLECT)", "%s\n\tPhysics: debug dvar physics_debugVisualize_CONTENTS_SOUNDREFLECT is null", "physics_debugVisualize_CONTENTS_SOUNDREFLECT") )
    __debugbreak();
  if ( !physics_debugVisualize_CONTENTS_NONSENTIENTTRIGGER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10737, ASSERT_TYPE_ASSERT, "(physics_debugVisualize_CONTENTS_NONSENTIENTTRIGGER)", "%s\n\tPhysics: debug dvar physics_debugVisualize_CONTENTS_NONSENTIENTTRIGGER is null", "physics_debugVisualize_CONTENTS_NONSENTIENTTRIGGER") )
    __debugbreak();
  if ( !physics_debugVisualize_CONTENTS_VEHICLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10738, ASSERT_TYPE_ASSERT, "(physics_debugVisualize_CONTENTS_VEHICLE)", "%s\n\tPhysics: debug dvar physics_debugVisualize_CONTENTS_VEHICLE is null", "physics_debugVisualize_CONTENTS_VEHICLE") )
    __debugbreak();
  if ( !physics_debugVisualize_CONTENTS_MANTLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10739, ASSERT_TYPE_ASSERT, "(physics_debugVisualize_CONTENTS_MANTLE)", "%s\n\tPhysics: debug dvar physics_debugVisualize_CONTENTS_MANTLE is null", "physics_debugVisualize_CONTENTS_MANTLE") )
    __debugbreak();
  if ( !physics_debugVisualize_CONTENTS_PLAYER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10740, ASSERT_TYPE_ASSERT, "(physics_debugVisualize_CONTENTS_PLAYER)", "%s\n\tPhysics: debug dvar physics_debugVisualize_CONTENTS_PLAYER is null", "physics_debugVisualize_CONTENTS_PLAYER") )
    __debugbreak();
  if ( !physics_debugVisualize_CONTENTS_USECLIP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10741, ASSERT_TYPE_ASSERT, "(physics_debugVisualize_CONTENTS_USECLIP)", "%s\n\tPhysics: debug dvar physics_debugVisualize_CONTENTS_USECLIP is null", "physics_debugVisualize_CONTENTS_USECLIP") )
    __debugbreak();
  if ( !physics_debugVisualize_CONTENTS_PLAYERTRIGGER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10742, ASSERT_TYPE_ASSERT, "(physics_debugVisualize_CONTENTS_PLAYERTRIGGER)", "%s\n\tPhysics: debug dvar physics_debugVisualize_CONTENTS_PLAYERTRIGGER is null", "physics_debugVisualize_CONTENTS_PLAYERTRIGGER") )
    __debugbreak();
  if ( !physics_debugVisualize_Preset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10743, ASSERT_TYPE_ASSERT, "(physics_debugVisualize_Preset)", "%s\n\tPhysics: debug dvar physics_debugVisualize_Preset is null", "physics_debugVisualize_Preset") )
    __debugbreak();
  if ( !physics_debugVisualize_Query && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10744, ASSERT_TYPE_ASSERT, "(physics_debugVisualize_Query)", "%s\n\tPhysics: debug dvar physics_debugVisualize_Query is null", "physics_debugVisualize_Query") )
    __debugbreak();
  if ( !physics_debugLibraryMaterials && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10745, ASSERT_TYPE_ASSERT, "(physics_debugLibraryMaterials)", "%s\n\tPhysics: debug dvar physics_debugLibraryMaterials is null", "physics_debugLibraryMaterials") )
    __debugbreak();
  if ( !physics_debugLibraryBodyQualitys && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10746, ASSERT_TYPE_ASSERT, "(physics_debugLibraryBodyQualitys)", "%s\n\tPhysics: debug dvar physics_debugLibraryBodyQualitys is null", "physics_debugLibraryBodyQualitys") )
    __debugbreak();
  if ( !physics_debugLibraryMotionProperties && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10747, ASSERT_TYPE_ASSERT, "(physics_debugLibraryMotionProperties)", "%s\n\tPhysics: debug dvar physics_debugLibraryMotionProperties is null", "physics_debugLibraryMotionProperties") )
    __debugbreak();
  if ( !physics_debugLibraryMaterialId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10748, ASSERT_TYPE_ASSERT, "(physics_debugLibraryMaterialId)", "%s\n\tPhysics: debug dvar physics_debugLibraryMaterialId is null", "physics_debugLibraryMaterialId") )
    __debugbreak();
  if ( !physics_debugLibraryBodyQualityId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10749, ASSERT_TYPE_ASSERT, "(physics_debugLibraryBodyQualityId)", "%s\n\tPhysics: debug dvar physics_debugLibraryBodyQualityId is null", "physics_debugLibraryBodyQualityId") )
    __debugbreak();
  if ( !physics_debugLibraryMotionPropertiesId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10750, ASSERT_TYPE_ASSERT, "(physics_debugLibraryMotionPropertiesId)", "%s\n\tPhysics: debug dvar physics_debugLibraryMotionPropertiesId is null", "physics_debugLibraryMotionPropertiesId") )
    __debugbreak();
  if ( !physics_debugAssetsByName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10751, ASSERT_TYPE_ASSERT, "(physics_debugAssetsByName)", "%s\n\tPhysics: debug dvar physics_debugAssetsByName is null", "physics_debugAssetsByName") )
    __debugbreak();
  if ( !physics_debugAssetsByMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10752, ASSERT_TYPE_ASSERT, "(physics_debugAssetsByMemory)", "%s\n\tPhysics: debug dvar physics_debugAssetsByMemory is null", "physics_debugAssetsByMemory") )
    __debugbreak();
  if ( !physics_debugAssetIdByName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10753, ASSERT_TYPE_ASSERT, "(physics_debugAssetIdByName)", "%s\n\tPhysics: debug dvar physics_debugAssetIdByName is null", "physics_debugAssetIdByName") )
    __debugbreak();
  if ( !physics_debugAssetIdByMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10754, ASSERT_TYPE_ASSERT, "(physics_debugAssetIdByMemory)", "%s\n\tPhysics: debug dvar physics_debugAssetIdByMemory is null", "physics_debugAssetIdByMemory") )
    __debugbreak();
  if ( !physics_debugXModelsWithNoPhysicsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10755, ASSERT_TYPE_ASSERT, "(physics_debugXModelsWithNoPhysicsAsset)", "%s\n\tPhysics: debug dvar physics_debugXModelsWithNoPhysicsAsset is null", "physics_debugXModelsWithNoPhysicsAsset") )
    __debugbreak();
  if ( !physics_debugXModelsWithCollLods && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10756, ASSERT_TYPE_ASSERT, "(physics_debugXModelsWithCollLods)", "%s\n\tPhysics: debug dvar physics_debugXModelsWithCollLods is null", "physics_debugXModelsWithCollLods") )
    __debugbreak();
  if ( !physics_debugXModelsExcludeDoNotUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10757, ASSERT_TYPE_ASSERT, "(physics_debugXModelsExcludeDoNotUse)", "%s\n\tPhysics: debug dvar physics_debugXModelsExcludeDoNotUse is null", "physics_debugXModelsExcludeDoNotUse") )
    __debugbreak();
  if ( !physics_debugXModelsByName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10758, ASSERT_TYPE_ASSERT, "(physics_debugXModelsByName)", "%s\n\tPhysics: debug dvar physics_debugXModelsByName is null", "physics_debugXModelsByName") )
    __debugbreak();
  if ( !physics_debugXModelsByMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10759, ASSERT_TYPE_ASSERT, "(physics_debugXModelsByMemory)", "%s\n\tPhysics: debug dvar physics_debugXModelsByMemory is null", "physics_debugXModelsByMemory") )
    __debugbreak();
  if ( !physics_debugXModelsByDetailBodyCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10760, ASSERT_TYPE_ASSERT, "(physics_debugXModelsByDetailBodyCount)", "%s\n\tPhysics: debug dvar physics_debugXModelsByDetailBodyCount is null", "physics_debugXModelsByDetailBodyCount") )
    __debugbreak();
  if ( !physics_debugXModelIdByName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10761, ASSERT_TYPE_ASSERT, "(physics_debugXModelIdByName)", "%s\n\tPhysics: debug dvar physics_debugXModelIdByName is null", "physics_debugXModelIdByName") )
    __debugbreak();
  if ( !physics_debugXModelIdByMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10762, ASSERT_TYPE_ASSERT, "(physics_debugXModelIdByMemory)", "%s\n\tPhysics: debug dvar physics_debugXModelIdByMemory is null", "physics_debugXModelIdByMemory") )
    __debugbreak();
  if ( !physics_debugSFXEventAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10763, ASSERT_TYPE_ASSERT, "(physics_debugSFXEventAssets)", "%s\n\tPhysics: debug dvar physics_debugSFXEventAssets is null", "physics_debugSFXEventAssets") )
    __debugbreak();
  if ( !physics_debugSFXEventAssetId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10764, ASSERT_TYPE_ASSERT, "(physics_debugSFXEventAssetId)", "%s\n\tPhysics: debug dvar physics_debugSFXEventAssetId is null", "physics_debugSFXEventAssetId") )
    __debugbreak();
  if ( !physics_debugVFXEventAssets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10765, ASSERT_TYPE_ASSERT, "(physics_debugVFXEventAssets)", "%s\n\tPhysics: debug dvar physics_debugVFXEventAssets is null", "physics_debugVFXEventAssets") )
    __debugbreak();
  if ( !physics_debugVFXEventAssetId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10766, ASSERT_TYPE_ASSERT, "(physics_debugVFXEventAssetId)", "%s\n\tPhysics: debug dvar physics_debugVFXEventAssetId is null", "physics_debugVFXEventAssetId") )
    __debugbreak();
  if ( !physics_debugClipmapBrushes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10767, ASSERT_TYPE_ASSERT, "(physics_debugClipmapBrushes)", "%s\n\tPhysics: debug dvar physics_debugClipmapBrushes is null", "physics_debugClipmapBrushes") )
    __debugbreak();
  if ( !physics_debugParticlesHeavyweight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10768, ASSERT_TYPE_ASSERT, "(physics_debugParticlesHeavyweight)", "%s\n\tPhysics: debug dvar physics_debugClipmapBrushes is null", "physics_debugParticlesHeavyweight") )
    __debugbreak();
  if ( !physics_debugWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10769, ASSERT_TYPE_ASSERT, "(physics_debugWorld)", "%s\n\tPhysics: debug dvar physics_debugWorld is null", "physics_debugWorld") )
    __debugbreak();
  if ( !physics_debugWorldFull && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10770, ASSERT_TYPE_ASSERT, "(physics_debugWorldFull)", "%s\n\tPhysics: debug dvar physics_debugWorldFull is null", "physics_debugWorldFull") )
    __debugbreak();
  if ( !physics_debugWorldBody && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10771, ASSERT_TYPE_ASSERT, "(physics_debugWorldBody)", "%s\n\tPhysics: debug dvar physics_debugWorldBody is null", "physics_debugWorldBody") )
    __debugbreak();
  if ( !physics_debugRayWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10772, ASSERT_TYPE_ASSERT, "(physics_debugRayWorld)", "%s\n\tPhysics: debug dvar physics_debugRayWorld is null", "physics_debugRayWorld") )
    __debugbreak();
  if ( !physics_debugShapeCastWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10773, ASSERT_TYPE_ASSERT, "(physics_debugShapeCastWorld)", "%s\n\tPhysics: debug dvar physics_debugShapeCastWorld is null", "physics_debugShapeCastWorld") )
    __debugbreak();
  if ( !physics_debugQueryPointWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10774, ASSERT_TYPE_ASSERT, "(physics_debugQueryPointWorld)", "%s\n\tPhysics: debug dvar physics_debugQueryPointWorld is null", "physics_debugQueryPointWorld") )
    __debugbreak();
  if ( !physics_debugQueryPointPosition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10775, ASSERT_TYPE_ASSERT, "(physics_debugQueryPointPosition)", "%s\n\tPhysics: debug dvar physics_debugQueryPointPosition is null", "physics_debugQueryPointPosition") )
    __debugbreak();
  if ( !physics_debugQueryPointMaxDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10776, ASSERT_TYPE_ASSERT, "(physics_debugQueryPointMaxDistance)", "%s\n\tPhysics: debug dvar physics_debugQueryPointMaxDistance is null", "physics_debugQueryPointMaxDistance") )
    __debugbreak();
  if ( !physics_debugGetClosestPointsWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10777, ASSERT_TYPE_ASSERT, "(physics_debugGetClosestPointsWorld)", "%s\n\tPhysics: debug dvar physics_debugGetClosestPointsWorld is null", "physics_debugGetClosestPointsWorld") )
    __debugbreak();
  if ( !physics_debugGetClosestPointsPosition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10778, ASSERT_TYPE_ASSERT, "(physics_debugGetClosestPointsPosition)", "%s\n\tPhysics: debug dvar physics_debugGetClosestPointsPosition is null", "physics_debugGetClosestPointsPosition") )
    __debugbreak();
  if ( !physics_debugGetClosestPointsMaxDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10779, ASSERT_TYPE_ASSERT, "(physics_debugGetClosestPointsMaxDistance)", "%s\n\tPhysics: debug dvar physics_debugGetClosestPointsMaxDistance is null", "physics_debugGetClosestPointsMaxDistance") )
    __debugbreak();
  if ( !physics_debugQuery_CONTENTS_SOLID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10780, ASSERT_TYPE_ASSERT, "(physics_debugQuery_CONTENTS_SOLID)", "%s\n\tPhysics: debug dvar physics_debugQuery_CONTENTS_SOLID is null", "physics_debugQuery_CONTENTS_SOLID") )
    __debugbreak();
  if ( !physics_debugQuery_CONTENTS_FOLIAGE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10781, ASSERT_TYPE_ASSERT, "(physics_debugQuery_CONTENTS_FOLIAGE)", "%s\n\tPhysics: debug dvar physics_debugQuery_CONTENTS_FOLIAGE is null", "physics_debugQuery_CONTENTS_FOLIAGE") )
    __debugbreak();
  if ( !physics_debugQuery_CONTENTS_VEHICLETRIGGER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10782, ASSERT_TYPE_ASSERT, "(physics_debugQuery_CONTENTS_VEHICLETRIGGER)", "%s\n\tPhysics: debug dvar physics_debugQuery_CONTENTS_VEHICLETRIGGER is null", "physics_debugQuery_CONTENTS_VEHICLETRIGGER") )
    __debugbreak();
  if ( !physics_debugQuery_CONTENTS_GLASS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10783, ASSERT_TYPE_ASSERT, "(physics_debugQuery_CONTENTS_GLASS)", "%s\n\tPhysics: debug dvar physics_debugQuery_CONTENTS_GLASS is null", "physics_debugQuery_CONTENTS_GLASS") )
    __debugbreak();
  if ( !physics_debugQuery_CONTENTS_WATER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10784, ASSERT_TYPE_ASSERT, "(physics_debugQuery_CONTENTS_WATER)", "%s\n\tPhysics: debug dvar physics_debugQuery_CONTENTS_WATER is null", "physics_debugQuery_CONTENTS_WATER") )
    __debugbreak();
  if ( !physics_debugQuery_CONTENTS_AI_NOSHOOT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10785, ASSERT_TYPE_ASSERT, "(physics_debugQuery_CONTENTS_AI_NOSHOOT)", "%s\n\tPhysics: debug dvar physics_debugQuery_CONTENTS_AI_NOSHOOT is null", "physics_debugQuery_CONTENTS_AI_NOSHOOT") )
    __debugbreak();
  if ( !physics_debugQuery_CONTENTS_MISSILECLIP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10786, ASSERT_TYPE_ASSERT, "(physics_debugQuery_CONTENTS_MISSILECLIP)", "%s\n\tPhysics: debug dvar physics_debugQuery_CONTENTS_MISSILECLIP is null", "physics_debugQuery_CONTENTS_MISSILECLIP") )
    __debugbreak();
  if ( !physics_debugQuery_CONTENTS_ITEM && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10787, ASSERT_TYPE_ASSERT, "(physics_debugQuery_CONTENTS_ITEM)", "%s\n\tPhysics: debug dvar physics_debugQuery_CONTENTS_ITEM is null", "physics_debugQuery_CONTENTS_ITEM") )
    __debugbreak();
  if ( !physics_debugQuery_CONTENTS_VEHICLECLIP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10788, ASSERT_TYPE_ASSERT, "(physics_debugQuery_CONTENTS_VEHICLECLIP)", "%s\n\tPhysics: debug dvar physics_debugQuery_CONTENTS_VEHICLECLIP is null", "physics_debugQuery_CONTENTS_VEHICLECLIP") )
    __debugbreak();
  if ( !physics_debugQuery_CONTENTS_ITEMCLIP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10789, ASSERT_TYPE_ASSERT, "(physics_debugQuery_CONTENTS_ITEMCLIP)", "%s\n\tPhysics: debug dvar physics_debugQuery_CONTENTS_ITEMCLIP is null", "physics_debugQuery_CONTENTS_ITEMCLIP") )
    __debugbreak();
  if ( !physics_debugQuery_CONTENTS_SKY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10790, ASSERT_TYPE_ASSERT, "(physics_debugQuery_CONTENTS_SKY)", "%s\n\tPhysics: debug dvar physics_debugQuery_CONTENTS_SKY is null", "physics_debugQuery_CONTENTS_SKY") )
    __debugbreak();
  if ( !physics_debugQuery_CONTENTS_AI_NOSIGHT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10791, ASSERT_TYPE_ASSERT, "(physics_debugQuery_CONTENTS_AI_NOSIGHT)", "%s\n\tPhysics: debug dvar physics_debugQuery_CONTENTS_AI_NOSIGHT is null", "physics_debugQuery_CONTENTS_AI_NOSIGHT") )
    __debugbreak();
  if ( !physics_debugQuery_CONTENTS_CLIPSHOT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10792, ASSERT_TYPE_ASSERT, "(physics_debugQuery_CONTENTS_CLIPSHOT)", "%s\n\tPhysics: debug dvar physics_debugQuery_CONTENTS_CLIPSHOT is null", "physics_debugQuery_CONTENTS_CLIPSHOT") )
    __debugbreak();
  if ( !physics_debugQuery_CONTENTS_ACTOR && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10793, ASSERT_TYPE_ASSERT, "(physics_debugQuery_CONTENTS_ACTOR)", "%s\n\tPhysics: debug dvar physics_debugQuery_CONTENTS_ACTOR is null", "physics_debugQuery_CONTENTS_ACTOR") )
    __debugbreak();
  if ( !physics_debugQuery_CONTENTS_PLAYERCLIP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10794, ASSERT_TYPE_ASSERT, "(physics_debugQuery_CONTENTS_PLAYERCLIP)", "%s\n\tPhysics: debug dvar physics_debugQuery_CONTENTS_PLAYERCLIP is null", "physics_debugQuery_CONTENTS_PLAYERCLIP") )
    __debugbreak();
  if ( !physics_debugQuery_CONTENTS_PLAYER_NOSIGHT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10795, ASSERT_TYPE_ASSERT, "(physics_debugQuery_CONTENTS_PLAYER_NOSIGHT)", "%s\n\tPhysics: debug dvar physics_debugQuery_CONTENTS_PLAYER_NOSIGHT is null", "physics_debugQuery_CONTENTS_PLAYER_NOSIGHT") )
    __debugbreak();
  if ( !physics_debugQuery_CONTENTS_AI_CLIP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10796, ASSERT_TYPE_ASSERT, "(physics_debugQuery_CONTENTS_AI_CLIP)", "%s\n\tPhysics: debug dvar physics_debugQuery_CONTENTS_AI_CLIP is null", "physics_debugQuery_CONTENTS_AI_CLIP") )
    __debugbreak();
  if ( !physics_debugQuery_CONTENTS_SENTIENTTRIGGER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10797, ASSERT_TYPE_ASSERT, "(physics_debugQuery_CONTENTS_SENTIENTTRIGGER)", "%s\n\tPhysics: debug dvar physics_debugQuery_CONTENTS_SENTIENTTRIGGER is null", "physics_debugQuery_CONTENTS_SENTIENTTRIGGER") )
    __debugbreak();
  if ( !physics_debugQuery_CONTENTS_EXPLOSIONCLIP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10798, ASSERT_TYPE_ASSERT, "(physics_debugQuery_CONTENTS_EXPLOSIONCLIP)", "%s\n\tPhysics: debug dvar physics_debugQuery_CONTENTS_EXPLOSIONCLIP is null", "physics_debugQuery_CONTENTS_EXPLOSIONCLIP") )
    __debugbreak();
  if ( !physics_debugQuery_CONTENTS_SOUNDCLIP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10799, ASSERT_TYPE_ASSERT, "(physics_debugQuery_CONTENTS_SOUNDCLIP)", "%s\n\tPhysics: debug dvar physics_debugQuery_CONTENTS_SOUNDCLIP is null", "physics_debugQuery_CONTENTS_SOUNDCLIP") )
    __debugbreak();
  if ( !physics_debugQuery_CONTENTS_SOUNDREFLECT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10800, ASSERT_TYPE_ASSERT, "(physics_debugQuery_CONTENTS_SOUNDREFLECT)", "%s\n\tPhysics: debug dvar physics_debugQuery_CONTENTS_SOUNDREFLECT is null", "physics_debugQuery_CONTENTS_SOUNDREFLECT") )
    __debugbreak();
  if ( !physics_debugQuery_CONTENTS_NONSENTIENTTRIGGER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10801, ASSERT_TYPE_ASSERT, "(physics_debugQuery_CONTENTS_NONSENTIENTTRIGGER)", "%s\n\tPhysics: debug dvar physics_debugQuery_CONTENTS_NONSENTIENTTRIGGER is null", "physics_debugQuery_CONTENTS_NONSENTIENTTRIGGER") )
    __debugbreak();
  if ( !physics_debugQuery_CONTENTS_VEHICLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10802, ASSERT_TYPE_ASSERT, "(physics_debugQuery_CONTENTS_VEHICLE)", "%s\n\tPhysics: debug dvar physics_debugQuery_CONTENTS_VEHICLE is null", "physics_debugQuery_CONTENTS_VEHICLE") )
    __debugbreak();
  if ( !physics_debugQuery_CONTENTS_MANTLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10803, ASSERT_TYPE_ASSERT, "(physics_debugQuery_CONTENTS_MANTLE)", "%s\n\tPhysics: debug dvar physics_debugQuery_CONTENTS_MANTLE is null", "physics_debugQuery_CONTENTS_MANTLE") )
    __debugbreak();
  if ( !physics_debugQuery_CONTENTS_PLAYER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10804, ASSERT_TYPE_ASSERT, "(physics_debugQuery_CONTENTS_PLAYER)", "%s\n\tPhysics: debug dvar physics_debugQuery_CONTENTS_PLAYER is null", "physics_debugQuery_CONTENTS_PLAYER") )
    __debugbreak();
  if ( !physics_debugQuery_CONTENTS_USECLIP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10805, ASSERT_TYPE_ASSERT, "(physics_debugQuery_CONTENTS_USECLIP)", "%s\n\tPhysics: debug dvar physics_debugQuery_CONTENTS_USECLIP is null", "physics_debugQuery_CONTENTS_USECLIP") )
    __debugbreak();
  if ( !physics_debugQuery_CONTENTS_PLAYERTRIGGER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10806, ASSERT_TYPE_ASSERT, "(physics_debugQuery_CONTENTS_PLAYERTRIGGER)", "%s\n\tPhysics: debug dvar physics_debugQuery_CONTENTS_PLAYERTRIGGER is null", "physics_debugQuery_CONTENTS_PLAYERTRIGGER") )
    __debugbreak();
  if ( !physics_debugQuery_Preset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10807, ASSERT_TYPE_ASSERT, "(physics_debugQuery_Preset)", "%s\n\tPhysics: debug dvar physics_debugQuery_Preset is null", "physics_debugQuery_Preset") )
    __debugbreak();
  if ( !physics_debugQuery_IgnoreVolumes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10808, ASSERT_TYPE_ASSERT, "(physics_debugQuery_IgnoreVolumes)", "%s\n\tPhysics: debug dvar physics_debugQuery_IgnoreVolumes is null", "physics_debugQuery_IgnoreVolumes") )
    __debugbreak();
  if ( !physics_debugDetailModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10809, ASSERT_TYPE_ASSERT, "(physics_debugDetailModel)", "%s\n\tPhysics: debug dvar physics_debugDetailModel is null", "physics_debugDetailModel") )
    __debugbreak();
  if ( !physics_debugFlickerColLod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10810, ASSERT_TYPE_ASSERT, "(physics_debugFlickerColLod)", "%s\n\tPhysics: debug dvar physics_debugFlickerColLod is null", "physics_debugFlickerColLod") )
    __debugbreak();
  if ( !physics_debugBadColLods && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10811, ASSERT_TYPE_ASSERT, "(physics_debugBadColLods)", "%s\n\tPhysics: debug dvar physics_debugBadColLods is null", "physics_debugBadColLods") )
    __debugbreak();
  if ( !physics_debugMutableShapesInWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10812, ASSERT_TYPE_ASSERT, "(physics_debugMutableShapesInWorld)", "%s\n\tPhysics: debug dvar physics_debugMutableShapesInWorld is null", "physics_debugMutableShapesInWorld") )
    __debugbreak();
  if ( !physics_debugMutableShapesInWorldRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10813, ASSERT_TYPE_ASSERT, "(physics_debugMutableShapesInWorldRange)", "%s\n\tPhysics: debug dvar physics_debugMutableShapesInWorldRange is null", "physics_debugMutableShapesInWorldRange") )
    __debugbreak();
  x = (float)physics_debugDisplayOffsetX->current.integer + 8.0;
  y = (float)physics_debugDisplayOffsetY->current.integer + 8.0;
  s_physicsDumpFile.handle.handle = -1i64;
  if ( physics_debugDump->current.enabled )
  {
    v4 = FS_FOpenTextFileWrite((fileHandle_t *)&result, (const char *)0xFFFFFFFFFFFFFFFFi64);
    s_physicsDumpFile.handle.handle = (__int64)v4;
    if ( v4 != (fileHandle_t *)-1i64 )
    {
      FS_Write("<html>", 6ui64, (fileHandle_t)v4);
      FS_Write("\n\r\n", 3ui64, s_physicsDumpFile);
      FS_Write("<body>", 6ui64, s_physicsDumpFile);
      FS_Write("\n\r\n", 3ui64, s_physicsDumpFile);
    }
  }
  integer = physics_debugVisualize_Preset->current.integer;
  v6 = (physics_debugVisualize_CONTENTS_ITEM->current.enabled ? 0x100 : 0) | (physics_debugVisualize_CONTENTS_VEHICLECLIP->current.enabled ? 0x200 : 0) | (physics_debugVisualize_CONTENTS_PLAYERCLIP->current.enabled ? 0x10000 : 0) | (physics_debugVisualize_CONTENTS_PLAYER_NOSIGHT->current.enabled ? 0x8000 : 0) | (physics_debugVisualize_CONTENTS_AI_CLIP->current.enabled ? 0x20000 : 0) | (physics_debugVisualize_CONTENTS_ITEMCLIP->current.enabled ? 0x400 : 0) | (physics_debugVisualize_CONTENTS_SENTIENTTRIGGER->current.enabled ? 0x40000 : 0) | (physics_debugVisualize_CONTENTS_SKY->current.enabled ? 0x800 : 0) | (physics_debugVisualize_CONTENTS_EXPLOSIONCLIP->current.enabled ? 0x100000 : 0) | (physics_debugVisualize_CONTENTS_SOUNDCLIP->current.enabled ? 0x200000 : 0) | (physics_debugVisualize_CONTENTS_NONSENTIENTTRIGGER->current.enabled ? 0x400000 : 0) | (physics_debugVisualize_CONTENTS_VEHICLE->current.enabled ? 0x800000 : 0) | (physics_debugVisualize_CONTENTS_MANTLE->current.enabled ? 0x1000000 : 0) | (physics_debugVisualize_CONTENTS_PLAYER->current.enabled ? 0x2000000 : 0) | (physics_debugVisualize_CONTENTS_SOUNDREFLECT->current.enabled ? 0x4000000 : 0) | (physics_debugVisualize_CONTENTS_AI_NOSIGHT->current.enabled ? 0x1000 : 0) | (physics_debugVisualize_CONTENTS_CLIPSHOT->current.enabled ? 0x2000 : 0) | (physics_debugVisualize_CONTENTS_USECLIP->current.enabled ? 0x20000000 : 0);
  v7 = (physics_debugVisualize_CONTENTS_ACTOR->current.enabled ? 0x4000 : 0) | (physics_debugVisualize_CONTENTS_PLAYERTRIGGER->current.enabled ? 0x40000000 : 0) | physics_debugVisualize_CONTENTS_SOLID->current.enabled | (physics_debugVisualize_CONTENTS_FOLIAGE->current.enabled ? 2 : 0) | (physics_debugVisualize_CONTENTS_VEHICLETRIGGER->current.enabled ? 8 : 0) | (physics_debugVisualize_CONTENTS_GLASS->current.enabled ? 0x10 : 0) | (physics_debugVisualize_CONTENTS_WATER->current.enabled ? 0x20 : 0) | (physics_debugVisualize_CONTENTS_AI_NOSHOOT->current.enabled ? 0x40 : 0) | (physics_debugVisualize_CONTENTS_MISSILECLIP->current.enabled ? 0x80 : 0) | v6;
  if ( !integer )
    integer = v7;
  HavokPhysics_DebugSetVisualizeContents(integer);
  HavokPhysics_DebugSetVisualizeQuery(physics_debugVisualize_Query->current.enabled);
  unsignedInt = physics_debugQuery_Preset->current.unsignedInt;
  enabled = physics_debugQuery_CONTENTS_SOLID->current.enabled;
  v10 = (physics_debugQuery_CONTENTS_PLAYER->current.enabled ? 0x2000000 : 0) | (physics_debugQuery_CONTENTS_SOUNDREFLECT->current.enabled ? 0x4000000 : 0) | (physics_debugQuery_CONTENTS_AI_NOSIGHT->current.enabled ? 0x1000 : 0) | (physics_debugQuery_CONTENTS_CLIPSHOT->current.enabled ? 0x2000 : 0) | (physics_debugQuery_CONTENTS_USECLIP->current.enabled ? 0x20000000 : 0) | (physics_debugQuery_CONTENTS_ACTOR->current.enabled ? 0x4000 : 0) | (physics_debugQuery_CONTENTS_PLAYERTRIGGER->current.enabled ? 0x40000000 : 0) | enabled | (physics_debugQuery_CONTENTS_FOLIAGE->current.enabled ? 2 : 0) | (physics_debugQuery_CONTENTS_VEHICLETRIGGER->current.enabled ? 8 : 0) | (physics_debugQuery_CONTENTS_GLASS->current.enabled ? 0x10 : 0) | (physics_debugQuery_CONTENTS_WATER->current.enabled ? 0x20 : 0) | (physics_debugQuery_CONTENTS_AI_NOSHOOT->current.enabled ? 0x40 : 0) | (physics_debugQuery_CONTENTS_MISSILECLIP->current.enabled ? 0x80 : 0) | (physics_debugQuery_CONTENTS_ITEM->current.enabled ? 0x100 : 0) | (physics_debugQuery_CONTENTS_VEHICLECLIP->current.enabled ? 0x200 : 0) | (physics_debugQuery_CONTENTS_PLAYERCLIP->current.enabled ? 0x10000 : 0) | (physics_debugQuery_CONTENTS_PLAYER_NOSIGHT->current.enabled ? 0x8000 : 0) | (physics_debugQuery_CONTENTS_AI_CLIP->current.enabled ? 0x20000 : 0);
  v11 = (physics_debugQuery_CONTENTS_ITEMCLIP->current.enabled ? 0x400 : 0) | (physics_debugQuery_CONTENTS_SENTIENTTRIGGER->current.enabled ? 0x40000 : 0) | (physics_debugQuery_CONTENTS_SKY->current.enabled ? 0x800 : 0) | (physics_debugQuery_CONTENTS_EXPLOSIONCLIP->current.enabled ? 0x100000 : 0) | (physics_debugQuery_CONTENTS_SOUNDCLIP->current.enabled ? 0x200000 : 0) | (physics_debugQuery_CONTENTS_NONSENTIENTTRIGGER->current.enabled ? 0x400000 : 0) | (physics_debugQuery_CONTENTS_VEHICLE->current.enabled ? 0x800000 : 0) | (physics_debugQuery_CONTENTS_MANTLE->current.enabled ? 0x1000000 : 0) | v10;
  if ( !unsignedInt )
    unsignedInt = v11;
  collisionFilterInfo = unsignedInt;
  if ( physics_debugMemory->current.integer )
  {
    Physics_DebugIntToString(buffer, 16, 0x5CC0000u);
    Com_sprintf(dest, 0x100ui64, "Physics Memory Report - Total Shipping Usage:%10s", buffer);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    v12 = y + 8.0;
    y = y + 8.0;
    x = x + 12.0;
    switch ( physics_debugMemory->current.integer )
    {
      case 1:
        Physics_DrawDebugString(scrPlace, x, v12, "General", &colorWhite, 0, 1, 8.0, 0);
        y = y + 8.0;
        x = x + 12.0;
        HavokPhysics_DrawDebugGeneralMemory(scrPlace, &x, &y, 12.0, 8.0);
        x = x + -12.0;
        break;
      case 2:
        if ( g_physicsServerWorldsCreated )
        {
          v13 = PHYSICS_WORLD_ID_FIRST;
          goto LABEL_491;
        }
        break;
      case 3:
        if ( g_physicsServerWorldsCreated )
        {
          v13 = PHYSICS_WORLD_ID_SERVER_DETAIL;
          goto LABEL_491;
        }
        break;
      case 4:
        if ( g_physicsClientWorldsCreated )
        {
          v13 = PHYSICS_WORLD_ID_CLIENT_FIRST;
          goto LABEL_491;
        }
        break;
      case 5:
        if ( g_physicsClientWorldsCreated )
        {
          v13 = PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE;
          goto LABEL_491;
        }
        break;
      case 6:
        if ( g_physicsClientWorldsCreated )
        {
          v13 = PHYSICS_WORLD_ID_CLIENT0_DETAIL;
          goto LABEL_491;
        }
        break;
      case 7:
        if ( g_physicsClientWorldsCreated )
        {
          v13 = PHYSICS_WORLD_ID_CLIENT1_FIRST;
          goto LABEL_491;
        }
        break;
      case 8:
        if ( g_physicsClientWorldsCreated )
        {
          v13 = PHYSICS_WORLD_ID_CLIENT1_AUTHORITATIVE;
          goto LABEL_491;
        }
        break;
      case 9:
        if ( g_physicsClientWorldsCreated )
          goto LABEL_490;
        break;
      case 0xA:
        Physics_DrawDebugString(scrPlace, x, v12, "General", &colorWhite, 0, 1, 8.0, 0);
        y = y + 8.0;
        x = x + 12.0;
        HavokPhysics_DrawDebugGeneralMemory(scrPlace, &x, &y, 12.0, 8.0);
        x = x + -12.0;
        if ( g_physicsServerWorldsCreated )
        {
          Physics_DrawDebugWorldMemory(PHYSICS_WORLD_ID_FIRST, scrPlace, &x, &y, 12.0, 8.0);
          Physics_DrawDebugWorldMemory(PHYSICS_WORLD_ID_SERVER_DETAIL, scrPlace, &x, &y, 12.0, 8.0);
        }
        if ( g_physicsClientWorldsCreated )
        {
          Physics_DrawDebugWorldMemory(PHYSICS_WORLD_ID_CLIENT_FIRST, scrPlace, &x, &y, 12.0, 8.0);
          Physics_DrawDebugWorldMemory(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, scrPlace, &x, &y, 12.0, 8.0);
          Physics_DrawDebugWorldMemory(PHYSICS_WORLD_ID_CLIENT0_DETAIL, scrPlace, &x, &y, 12.0, 8.0);
          Physics_DrawDebugWorldMemory(PHYSICS_WORLD_ID_CLIENT1_FIRST, scrPlace, &x, &y, 12.0, 8.0);
          Physics_DrawDebugWorldMemory(PHYSICS_WORLD_ID_CLIENT1_AUTHORITATIVE, scrPlace, &x, &y, 12.0, 8.0);
LABEL_490:
          v13 = PHYSICS_WORLD_ID_CLIENT1_DETAIL;
LABEL_491:
          Physics_DrawDebugWorldMemory(v13, scrPlace, &x, &y, 12.0, 8.0);
        }
        break;
      default:
        break;
    }
    x = x + -12.0;
  }
  if ( physics_debugCPU->current.integer )
  {
    Com_sprintf(dest, 0x100ui64, "Physics CPU Report");
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    v14 = y + 8.0;
    y = y + 8.0;
    x = x + 12.0;
    switch ( physics_debugCPU->current.integer )
    {
      case 1:
        Physics_DrawDebugString(scrPlace, x, v14, "General", &colorWhite, 0, 1, 8.0, 0);
        y = y + 8.0;
        x = x + 12.0;
        HavokPhysics_DrawDebugGeneralCPU(scrPlace, &x, &y, 12.0, 8.0);
        x = x + -12.0;
        break;
      case 2:
        if ( g_physicsServerWorldsCreated )
        {
          v15 = PHYSICS_WORLD_ID_FIRST;
          goto LABEL_517;
        }
        break;
      case 3:
        if ( g_physicsServerWorldsCreated )
        {
          v15 = PHYSICS_WORLD_ID_SERVER_DETAIL;
          goto LABEL_517;
        }
        break;
      case 4:
        if ( g_physicsClientWorldsCreated )
        {
          v15 = PHYSICS_WORLD_ID_CLIENT_FIRST;
          goto LABEL_517;
        }
        break;
      case 5:
        if ( g_physicsClientWorldsCreated )
        {
          v15 = PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE;
          goto LABEL_517;
        }
        break;
      case 6:
        if ( g_physicsClientWorldsCreated )
        {
          v15 = PHYSICS_WORLD_ID_CLIENT0_DETAIL;
          goto LABEL_517;
        }
        break;
      case 7:
        if ( g_physicsClientWorldsCreated )
        {
          v15 = PHYSICS_WORLD_ID_CLIENT1_FIRST;
          goto LABEL_517;
        }
        break;
      case 8:
        if ( g_physicsClientWorldsCreated )
        {
          v15 = PHYSICS_WORLD_ID_CLIENT1_AUTHORITATIVE;
          goto LABEL_517;
        }
        break;
      case 9:
        if ( g_physicsClientWorldsCreated )
          goto LABEL_516;
        break;
      case 0xA:
        Physics_DrawDebugString(scrPlace, x, v14, "General", &colorWhite, 0, 1, 8.0, 0);
        y = y + 8.0;
        x = x + 12.0;
        HavokPhysics_DrawDebugGeneralCPU(scrPlace, &x, &y, 12.0, 8.0);
        x = x + -12.0;
        if ( g_physicsServerWorldsCreated )
        {
          Physics_DrawDebugWorldCPU(PHYSICS_WORLD_ID_FIRST, scrPlace, &x, &y, 12.0, 8.0);
          Physics_DrawDebugWorldCPU(PHYSICS_WORLD_ID_SERVER_DETAIL, scrPlace, &x, &y, 12.0, 8.0);
        }
        if ( g_physicsClientWorldsCreated )
        {
          Physics_DrawDebugWorldCPU(PHYSICS_WORLD_ID_CLIENT_FIRST, scrPlace, &x, &y, 12.0, 8.0);
          Physics_DrawDebugWorldCPU(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, scrPlace, &x, &y, 12.0, 8.0);
          Physics_DrawDebugWorldCPU(PHYSICS_WORLD_ID_CLIENT0_DETAIL, scrPlace, &x, &y, 12.0, 8.0);
          Physics_DrawDebugWorldCPU(PHYSICS_WORLD_ID_CLIENT1_FIRST, scrPlace, &x, &y, 12.0, 8.0);
          Physics_DrawDebugWorldCPU(PHYSICS_WORLD_ID_CLIENT1_AUTHORITATIVE, scrPlace, &x, &y, 12.0, 8.0);
LABEL_516:
          v15 = PHYSICS_WORLD_ID_CLIENT1_DETAIL;
LABEL_517:
          Physics_DrawDebugWorldCPU(v15, scrPlace, &x, &y, 12.0, 8.0);
        }
        break;
      default:
        break;
    }
    x = x + -12.0;
  }
  if ( physics_debugProfileData->current.enabled )
  {
    Com_sprintf(dest, 0x100ui64, "Physics Profiling Summary");
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    Com_sprintf(dest, 0x100ui64, "Client 0");
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    Com_sprintf(dest, 0x100ui64, "Entities");
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    LODWORD(forceColorb) = s_debugProfileData.clientData[0].numPredictivePhysicsObjectsNeedingFullUpdate;
    LODWORD(fmt) = s_debugProfileData.clientData[0].numPredictivePhysicsObjectsNeedingUpdate;
    y = y + 8.0;
    x = x + 12.0;
    Com_sprintf(dest, 0x100ui64, "%i Predictive Physics supporting Entities.  %i needing update including %i needing full update.", (unsigned int)s_debugProfileData.clientData[0].numPredictivePhysicsObjects, fmt, forceColorb);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    LODWORD(fmta) = s_debugProfileData.clientData[0].predictivePhysicsObjectChildCount;
    Com_sprintf(dest, 0x100ui64, "%i updating a total of %i children.", (unsigned int)s_debugProfileData.clientData[0].predictivePhysicsObjectChildHavingCount, fmta);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    LODWORD(fmtb) = s_debugProfileData.clientData[0].predictivePhysicsObjectDynamicBoneMappingCount;
    y = y + 8.0;
    Com_sprintf(dest, 0x100ui64, "%i updating a total of %i server-dynamic bone maps.", (unsigned int)s_debugProfileData.clientData[0].predictivePhysicsObjectDynamicBoneMappingHavingCount, fmtb);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    LODWORD(shadowa) = s_debugProfileData.clientData[0].predictivePhysicsObjectKeyframedBoneMappingCount;
    LODWORD(forceColorc) = s_debugProfileData.clientData[0].predictivePhysicsObjectKeyframedBoneMappingCountUpdated;
    LODWORD(fmtc) = s_debugProfileData.clientData[0].predictivePhysicsObjectKeyframedBoneMappingHavingCount;
    y = y + 8.0;
    Com_sprintf(dest, 0x100ui64, "%i of %i updating a total of %i of %i keyframed bone maps.", (unsigned int)s_debugProfileData.clientData[0].predictivePhysicsObjectKeyframedBoneMappingHavingCountUpdated, fmtc, forceColorc, shadowa);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    LODWORD(shadowb) = s_debugProfileData.clientData[0].predictivePhysicsObjectKeyframedOffsetMappingCount;
    LODWORD(forceColord) = s_debugProfileData.clientData[0].predictivePhysicsObjectKeyframedOffsetMappingCountUpdated;
    LODWORD(fmtd) = s_debugProfileData.clientData[0].predictivePhysicsObjectKeyframedOffsetMappingHavingCount;
    y = y + 8.0;
    Com_sprintf(dest, 0x100ui64, "%i of %i updating a total of %i of %i keyframed offset maps.", (unsigned int)s_debugProfileData.clientData[0].predictivePhysicsObjectKeyframedOffsetMappingHavingCountUpdated, fmtd, forceColord, shadowb);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    LODWORD(fmte) = s_debugProfileData.clientData[0].numPropagatedBodies;
    x = x + -12.0;
    Com_sprintf(dest, 0x100ui64, "%i entities with a total of %i bodies propagated to auth world.", (unsigned int)s_debugProfileData.clientData[0].numPropagatedPhysicsObjects, fmte);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    LODWORD(fmtf) = s_debugProfileData.clientData[0].authoritativePhysicsObjectDynamicBoneMappingCount;
    y = y + 8.0;
    x = x + 12.0;
    Com_sprintf(dest, 0x100ui64, "%i updating a total of %i client-dynamic bone maps.", (unsigned int)s_debugProfileData.clientData[0].authoritativePhysicsObjectDynamicBoneMappingHavingCount, fmtf);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    LODWORD(forceColore) = s_debugProfileData.clientData[0].physicsObjectDetailDuplicationBodyCount;
    LODWORD(fmtg) = s_debugProfileData.clientData[0].physicsObjectDetailDuplicationCount;
    y = y + 8.0;
    x = x + -12.0;
    Com_sprintf(dest, 0x100ui64, "%i detail bounded. %i with a total of %i bodies detail duplicated.", (unsigned int)s_debugProfileData.clientData[0].physicsObjectDetailBoundedCount, fmtg, forceColore);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + -12.0;
    Com_sprintf(dest, 0x100ui64, "Character Proxies");
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    x = x + 12.0;
    y = y + 8.0;
    Com_sprintf(dest, 0x100ui64, "%i proxies.", (unsigned int)s_debugProfileData.clientData[0].numPredictiveCharacterProxies);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + -12.0;
    Com_sprintf(dest, 0x100ui64, "DynEnts");
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    LODWORD(adjust) = s_debugProfileData.clientData[0].dynEntsData[1 - s_debugProfileData.clientData[0].dynEntsDataBufferIndex].dynEntComplexAdditionalBoneCount;
    LODWORD(charHeight) = s_debugProfileData.clientData[0].dynEntsData[1 - s_debugProfileData.clientData[0].dynEntsDataBufferIndex].dynEntComplexBodyCount;
    LODWORD(shadowc) = s_debugProfileData.clientData[0].dynEntsData[1 - s_debugProfileData.clientData[0].dynEntsDataBufferIndex].dynEntComplexCount;
    LODWORD(forceColorf) = s_debugProfileData.clientData[0].dynEntsData[1 - s_debugProfileData.clientData[0].dynEntsDataBufferIndex].dynEntSimpleAdditionalBoneCount;
    LODWORD(fmth) = s_debugProfileData.clientData[0].dynEntsData[1 - s_debugProfileData.clientData[0].dynEntsDataBufferIndex].dynEntSimpleCount;
    Com_sprintf(dest, 0x100ui64, "%i dynents.  %i Simple (%i total extra bones).  %i complex (%i/%i total bodies/extra bones).", (unsigned int)s_debugProfileData.clientData[0].dynEntsData[1 - s_debugProfileData.clientData[0].dynEntsDataBufferIndex].dynEntCount, fmth, forceColorf, shadowc, charHeight, adjust);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    LODWORD(forceColorg) = s_debugProfileData.clientData[0].dynEntDetailDuplicationBodyCount;
    LODWORD(fmti) = s_debugProfileData.clientData[0].dynEntDetailDuplicationCount;
    y = y + 8.0;
    Com_sprintf(dest, 0x100ui64, "%i detail bounded.  %i with a total of %i bodies detail duplicated.", (unsigned int)s_debugProfileData.clientData[0].dynEntDetailBoundedCount, fmti, forceColorg);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + -12.0;
    Com_sprintf(dest, 0x100ui64, "Particles");
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    LODWORD(fmtj) = s_debugProfileData.clientData[0].fxOldElemsWithPhysicsCount;
    y = y + 8.0;
    x = x + 12.0;
    Com_sprintf(dest, 0x100ui64, "%i old elements with %i heavyweight bodies.", (unsigned int)s_debugProfileData.clientData[0].fxOldElemsCount, fmtj);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    LODWORD(fmtk) = s_debugProfileData.clientData[0].fxPhysicsSystemsCount;
    y = y + 8.0;
    Com_sprintf(dest, 0x100ui64, "%i systems   - %i with heavyweight physics.", (unsigned int)s_debugProfileData.clientData[0].fxSystemsCount, fmtk);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    LODWORD(fmtl) = s_debugProfileData.clientData[0].fxPhysicsEmittersCount;
    y = y + 8.0;
    Com_sprintf(dest, 0x100ui64, "%i emitters  - %i with heavyweight physics.", (unsigned int)s_debugProfileData.clientData[0].fxEmittersCount, fmtl);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    LODWORD(fmtm) = s_debugProfileData.clientData[0].fxPhysicsStatesCount;
    y = y + 8.0;
    Com_sprintf(dest, 0x100ui64, "%i states    - %i with heavyweight physics.", (unsigned int)s_debugProfileData.clientData[0].fxStatesCount, fmtm);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    LODWORD(fmtn) = s_debugProfileData.clientData[0].fxPhysicsParticlesCount;
    y = y + 8.0;
    Com_sprintf(dest, 0x100ui64, "%i particles - %i with heavyweight physics.", (unsigned int)s_debugProfileData.clientData[0].fxParticlesCount, fmtn);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + -12.0;
    Com_sprintf(dest, 0x100ui64, "Glass");
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    LODWORD(forceColorh) = s_debugProfileData.clientData[0].glassBodyCount;
    LODWORD(fmto) = s_debugProfileData.clientData[0].glassPhysicsCount;
    y = y + 8.0;
    x = x + 12.0;
    Com_sprintf(dest, 0x100ui64, "%i pieces. %i physics pieces with %i bodies.", (unsigned int)s_debugProfileData.clientData[0].glassPieceCount, fmto, forceColorh);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = (float)(x - 12.0) - 24.0;
  }
  v16 = physics_debugTimestep->current.integer;
  if ( (_DWORD)v16 )
  {
    Com_sprintf(dest, 0x100ui64, "Physics Timestep Graph for World %s", s_Physics_DebugSectionNames[v16]);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    switch ( physics_debugTimestep->current.integer )
    {
      case 2:
        v17 = PHYSICS_WORLD_ID_FIRST;
        goto LABEL_535;
      case 3:
        v17 = PHYSICS_WORLD_ID_SERVER_DETAIL;
        goto LABEL_535;
      case 4:
        v17 = PHYSICS_WORLD_ID_CLIENT_FIRST;
        goto LABEL_535;
      case 5:
        v17 = PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE;
        goto LABEL_535;
      case 6:
        v17 = PHYSICS_WORLD_ID_CLIENT0_DETAIL;
        goto LABEL_535;
      case 7:
        v17 = PHYSICS_WORLD_ID_CLIENT1_FIRST;
        goto LABEL_535;
      case 8:
        v17 = PHYSICS_WORLD_ID_CLIENT1_AUTHORITATIVE;
        goto LABEL_535;
      case 9:
        goto $LN859;
      case 0xA:
        if ( g_physicsServerWorldsCreated )
        {
          HavokPhysics_DrawDebugWorldTimestep(PHYSICS_WORLD_ID_FIRST, scrPlace, &x, &y, 12.0, 8.0, g_physicsClientWorldsCreated == 0);
          HavokPhysics_DrawDebugWorldTimestep(PHYSICS_WORLD_ID_SERVER_DETAIL, scrPlace, &x, &y, 12.0, 8.0, g_physicsClientWorldsCreated == 0);
        }
        if ( !g_physicsClientWorldsCreated )
          goto LABEL_536;
        HavokPhysics_DrawDebugWorldTimestep(PHYSICS_WORLD_ID_CLIENT_FIRST, scrPlace, &x, &y, 12.0, 8.0, 0);
        HavokPhysics_DrawDebugWorldTimestep(PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE, scrPlace, &x, &y, 12.0, 8.0, 1);
        HavokPhysics_DrawDebugWorldTimestep(PHYSICS_WORLD_ID_CLIENT0_DETAIL, scrPlace, &x, &y, 12.0, 8.0, 1);
        HavokPhysics_DrawDebugWorldTimestep(PHYSICS_WORLD_ID_CLIENT1_FIRST, scrPlace, &x, &y, 12.0, 8.0, 0);
        HavokPhysics_DrawDebugWorldTimestep(PHYSICS_WORLD_ID_CLIENT1_AUTHORITATIVE, scrPlace, &x, &y, 12.0, 8.0, 1);
$LN859:
        v17 = PHYSICS_WORLD_ID_CLIENT1_DETAIL;
LABEL_535:
        HavokPhysics_DrawDebugWorldTimestep(v17, scrPlace, &x, &y, 12.0, 8.0, 1);
LABEL_536:
        x = x + -12.0;
        break;
      default:
        goto LABEL_536;
    }
  }
  if ( physics_debugRefSystemCounts->current.enabled )
  {
    v18 = 0;
    v19 = s_Physics_WorldNames;
    do
    {
      if ( v18 == -1 )
      {
        v20 = "Invalid";
      }
      else
      {
        if ( (unsigned int)v18 >= 8 )
        {
          LODWORD(shadow) = 8;
          LODWORD(forceColor) = v18;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 753, ASSERT_TYPE_ASSERT, "(unsigned)( worldId ) < (unsigned)( ( sizeof( *array_counter( s_Physics_WorldNames ) ) + 0 ) )", "worldId doesn't index ARRAY_COUNT( s_Physics_WorldNames )\n\t%i not in [0, %i)", forceColor, shadow) )
            __debugbreak();
        }
        v20 = *v19;
      }
      Com_sprintf(dest, 0x100ui64, "Physics Ref System counts for world %s", v20);
      Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
      y = y + 8.0;
      HavokPhysics_DrawDebugPhysicsRefSystemCounts((Physics_WorldId)v18++, scrPlace, &x, &y, 12.0, 8.0);
      ++v19;
    }
    while ( v18 < 8 );
  }
  v21 = 0;
  v22 = physics_debugVisualizeWorld->current.integer;
  if ( Dvar_HasLatchedValue(physics_debugVisualizeWorld) )
    Dvar_MakeLatchedValueCurrent(physics_debugVisualizeWorld);
  if ( Dvar_HasLatchedValue(physics_debugVisualizeWorldViewMode) )
  {
    v21 = 1;
    Dvar_MakeLatchedValueCurrent(physics_debugVisualizeWorldViewMode);
  }
  if ( Dvar_HasLatchedValue(physics_debugVisualizeWorldComplexityTriThreshold) )
  {
    v21 = 1;
    Dvar_MakeLatchedValueCurrent(physics_debugVisualizeWorldComplexityTriThreshold);
  }
  if ( Dvar_HasLatchedValue(physics_debugVisualizeWorldComplexityLineThreshold) )
  {
    v21 = 1;
    Dvar_MakeLatchedValueCurrent(physics_debugVisualizeWorldComplexityLineThreshold);
  }
  v23 = Dvar_HasLatchedValue(physics_debugVisualizeWorldBodyId) | v21;
  v24 = Dvar_HasLatchedValue(physics_debugVisualizeWorldBroadphase) | v23;
  v25 = Dvar_HasLatchedValue(physics_debugVisualizeWorldConstraint) | v24;
  v26 = Dvar_HasLatchedValue(physics_debugVisualizeWorldDeactivation) | v25;
  v27 = Dvar_HasLatchedValue(physics_debugVisualizeWorldManifold) | v26;
  v28 = Dvar_HasLatchedValue(physics_debugVisualizeWorldMassProperties) | v27;
  v29 = Dvar_HasLatchedValue(physics_debugVisualizeWorldMotionId) | v28;
  v30 = Dvar_HasLatchedValue(physics_debugVisualizeWorldShape) | v29;
  v31 = Dvar_HasLatchedValue(physics_debugVisualizeWorldShapeLowRes) | v30;
  v32 = Dvar_HasLatchedValue(physics_debugVisualizeWorldVehicles) | v31;
  v33 = Dvar_HasLatchedValue(physics_debugVisualizeWorldCollisionHeatmap) | v32;
  v34 = Dvar_HasLatchedValue(physics_debugVisualizeWorldDebugDraw) | v33;
  v35 = Dvar_HasLatchedValue(physics_debugVisualizeWorldCollisionTile) | v34;
  v36 = Dvar_HasLatchedValue(physics_debugVisualizeWorldRaycasts) | v35;
  v37 = Dvar_HasLatchedValue(physics_debugVisualizeWorldShapecasts) | v36;
  v38 = Dvar_HasLatchedValue(physics_debugVisualizeWorldAABBQuery) | v37;
  v39 = Dvar_HasLatchedValue(physics_debugVisualizeWorldPointQuery) | v38;
  v40 = Dvar_HasLatchedValue(physics_debugVisualizeWorldClosestPointsQuery) | v39;
  v41 = Dvar_HasLatchedValue(physics_debugVisualizeWorldIWShape) | v40;
  v42 = Dvar_HasLatchedValue(physics_debugVisualizeWorldParticles) | v41;
  v43 = Dvar_HasLatchedValue(cloth_debugVisualizeWorldGeometry) | v42;
  v44 = Dvar_HasLatchedValue(cloth_debugVisualizeWorldSimParticlePosition) | v43;
  v45 = Dvar_HasLatchedValue(cloth_debugVisualizeWorldSimNormals) | v44;
  v46 = Dvar_HasLatchedValue(cloth_debugVisualizeWorldParticleVelocity) | v45;
  v47 = Dvar_HasLatchedValue(cloth_debugVisualizeWorldParticleId) | v46;
  v48 = Dvar_HasLatchedValue(cloth_debugVisualizeWorldSimStandardLinks) | v47;
  v49 = Dvar_HasLatchedValue(cloth_debugVisualizeWorldSimStretchLinks) | v48;
  v50 = Dvar_HasLatchedValue(cloth_debugVisualizeWorldSimBendLinks) | v49;
  v51 = Dvar_HasLatchedValue(cloth_debugVisualizeWorldSimBendStiffness) | v50;
  v52 = Dvar_HasLatchedValue(cloth_debugVisualizeWorldSimVolumeTransforms) | v51;
  v53 = Dvar_HasLatchedValue(cloth_debugVisualizeWorldLocalRange) | v52;
  v54 = Dvar_HasLatchedValue(cloth_debugVisualizeWorldBonePlane) | v53;
  v55 = Dvar_HasLatchedValue(cloth_debugVisualizeWorldTransition) | v54;
  v56 = Dvar_HasLatchedValue(cloth_debugVisualizeWorldCollidable) | v55;
  v57 = Dvar_HasLatchedValue(cloth_debugVisualizeWorldParticleRadius) | v56;
  v58 = Dvar_HasLatchedValue(cloth_debugVisualizeWorldVirtualCollisionPoints) | v57;
  v59 = Dvar_HasLatchedValue(cloth_debugVisualizeWorldVirtualCollisionPointsLandscape) | v58;
  if ( v59 )
  {
    Dvar_MakeLatchedValueCurrent(physics_debugVisualizeWorldBodyId);
    Dvar_MakeLatchedValueCurrent(physics_debugVisualizeWorldBroadphase);
    Dvar_MakeLatchedValueCurrent(physics_debugVisualizeWorldConstraint);
    Dvar_MakeLatchedValueCurrent(physics_debugVisualizeWorldDeactivation);
    Dvar_MakeLatchedValueCurrent(physics_debugVisualizeWorldManifold);
    Dvar_MakeLatchedValueCurrent(physics_debugVisualizeWorldMassProperties);
    Dvar_MakeLatchedValueCurrent(physics_debugVisualizeWorldMotionId);
    Dvar_MakeLatchedValueCurrent(physics_debugVisualizeWorldShape);
    Dvar_MakeLatchedValueCurrent(physics_debugVisualizeWorldShapeLowRes);
    Dvar_MakeLatchedValueCurrent(physics_debugVisualizeWorldVehicles);
    Dvar_MakeLatchedValueCurrent(physics_debugVisualizeWorldCollisionHeatmap);
    Dvar_MakeLatchedValueCurrent(physics_debugVisualizeWorldDebugDraw);
    Dvar_MakeLatchedValueCurrent(physics_debugVisualizeWorldCollisionTile);
    Dvar_MakeLatchedValueCurrent(physics_debugVisualizeWorldRaycasts);
    Dvar_MakeLatchedValueCurrent(physics_debugVisualizeWorldShapecasts);
    Dvar_MakeLatchedValueCurrent(physics_debugVisualizeWorldAABBQuery);
    Dvar_MakeLatchedValueCurrent(physics_debugVisualizeWorldPointQuery);
    Dvar_MakeLatchedValueCurrent(physics_debugVisualizeWorldClosestPointsQuery);
    Dvar_MakeLatchedValueCurrent(physics_debugVisualizeWorldIWShape);
    Dvar_MakeLatchedValueCurrent(physics_debugVisualizeWorldParticles);
    Dvar_MakeLatchedValueCurrent(cloth_debugVisualizeWorldGeometry);
    Dvar_MakeLatchedValueCurrent(cloth_debugVisualizeWorldSimParticlePosition);
    Dvar_MakeLatchedValueCurrent(cloth_debugVisualizeWorldSimNormals);
    Dvar_MakeLatchedValueCurrent(cloth_debugVisualizeWorldParticleVelocity);
    Dvar_MakeLatchedValueCurrent(cloth_debugVisualizeWorldParticleId);
    Dvar_MakeLatchedValueCurrent(cloth_debugVisualizeWorldSimStandardLinks);
    Dvar_MakeLatchedValueCurrent(cloth_debugVisualizeWorldSimStretchLinks);
    Dvar_MakeLatchedValueCurrent(cloth_debugVisualizeWorldSimBendLinks);
    Dvar_MakeLatchedValueCurrent(cloth_debugVisualizeWorldSimBendStiffness);
    Dvar_MakeLatchedValueCurrent(cloth_debugVisualizeWorldSimVolumeTransforms);
    Dvar_MakeLatchedValueCurrent(cloth_debugVisualizeWorldLocalRange);
    Dvar_MakeLatchedValueCurrent(cloth_debugVisualizeWorldBonePlane);
    Dvar_MakeLatchedValueCurrent(cloth_debugVisualizeWorldTransition);
    Dvar_MakeLatchedValueCurrent(cloth_debugVisualizeWorldCollidable);
    Dvar_MakeLatchedValueCurrent(cloth_debugVisualizeWorldParticleRadius);
    Dvar_MakeLatchedValueCurrent(cloth_debugVisualizeWorldVirtualCollisionPoints);
    Dvar_MakeLatchedValueCurrent(cloth_debugVisualizeWorldVirtualCollisionPointsLandscape);
  }
  v60 = v22 - 2;
  if ( (unsigned int)v60 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
    v60 = PHYSICS_WORLD_ID_INVALID;
  if ( !g_physicsServerWorldsCreated && (unsigned int)v60 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
    v60 = PHYSICS_WORLD_ID_INVALID;
  if ( !g_physicsClientWorldsCreated && (unsigned int)(v60 - 2) <= 5 )
    v60 = PHYSICS_WORLD_ID_INVALID;
  v61 = physics_debugVisualizeWorld->current.integer - 2;
  if ( (unsigned int)v61 > 7 )
    v61 = -1;
  if ( !g_physicsServerWorldsCreated && (unsigned int)v61 <= 1 )
    v61 = -1;
  if ( !g_physicsClientWorldsCreated && (unsigned int)(v61 - 2) <= 5 )
    v61 = -1;
  if ( v60 != PHYSICS_WORLD_ID_INVALID && (v60 != v61 || v59) && (g_physicsServerWorldsCreated || g_physicsClientWorldsCreated) )
    HavokPhysics_StopDrawDebugWorld(v60);
  if ( (unsigned int)v61 > 1 )
  {
    if ( v61 > 4 )
      v62 = 2;
    else
      v62 = 1;
    if ( (v62 & g_physicsClientWorldsCreated) == 0 )
      goto LABEL_586;
LABEL_585:
    v63 = 1;
    goto LABEL_587;
  }
  if ( g_physicsServerWorldsCreated )
    goto LABEL_585;
LABEL_586:
  v63 = 0;
LABEL_587:
  if ( v61 == -1 )
    goto LABEL_599;
  if ( v60 != v61 || v59 )
  {
    if ( !v63 )
      goto LABEL_599;
    if ( g_physicsServerWorldsCreated || g_physicsClientWorldsCreated )
      HavokPhysics_StartDrawDebugWorld((Physics_WorldId)v61);
  }
  if ( v63 )
  {
    Com_sprintf(dest, 0x100ui64, "Physics World Visualization");
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    WorldName = Physics_GetWorldName((Physics_WorldId)v61);
    Physics_DrawDebugString(scrPlace, x, y, WorldName, &colorWhite, 0, 1, 8.0, 0);
    v65 = y + 8.0;
    y = y + 8.0;
    if ( g_physicsServerWorldsCreated || g_physicsClientWorldsCreated )
    {
      x = x + 12.0;
      HavokPhysics_DrawDebugWorld((Physics_WorldId)v61, scrPlace, &x, &y, 12.0, 8.0);
      x = (float)(x + -12.0) + -12.0;
    }
    else
    {
      Physics_DrawDebugString(scrPlace, x, v65, "Worlds not set up", &colorWhite, 0, 1, 8.0, 0);
      x = x + -12.0;
      y = y + 8.0;
    }
  }
LABEL_599:
  v66 = physics_debugVisualizeCharacterProxies->current.integer;
  if ( (_DWORD)v66 )
  {
    Com_sprintf(dest, 0x100ui64, "Physics character proxies in World %s", s_Physics_DebugSectionNames[v66]);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    switch ( physics_debugVisualizeCharacterProxies->current.integer )
    {
      case 1:
        G_PhysicsCharacterProxy_DebugDrawEntityData(scrPlace, &x, &y, 12.0, 8.0);
        CG_PhysicsCharacterProxy_DebugDrawEntityData(LOCAL_CLIENT_0, scrPlace, &x, &y, 12.0, 8.0);
        break;
      case 2:
        G_PhysicsCharacterProxy_DebugDrawEntityData(scrPlace, &x, &y, 12.0, 8.0);
        G_PhysicsCharacterProxy_DebugDrawEntityShapes(PHYSICS_WORLD_ID_FIRST);
        break;
      case 3:
        G_PhysicsCharacterProxy_DebugDrawEntityData(scrPlace, &x, &y, 12.0, 8.0);
        G_PhysicsCharacterProxy_DebugDrawEntityShapes(PHYSICS_WORLD_ID_SERVER_DETAIL);
        break;
      case 4:
        CG_PhysicsCharacterProxy_DebugDrawEntityData(LOCAL_CLIENT_0, scrPlace, &x, &y, 12.0, 8.0);
        CG_PhysicsCharacterProxy_DebugDrawEntityShapesPred(LOCAL_CLIENT_0);
        break;
      case 5:
        CG_PhysicsCharacterProxy_DebugDrawEntityData(LOCAL_CLIENT_0, scrPlace, &x, &y, 12.0, 8.0);
        CG_PhysicsCharacterProxy_DebugDrawEntityShapesAuth(LOCAL_CLIENT_0);
        break;
      case 6:
        CG_PhysicsCharacterProxy_DebugDrawEntityData(LOCAL_CLIENT_0, scrPlace, &x, &y, 12.0, 8.0);
        v67 = LOCAL_CLIENT_0;
        goto LABEL_612;
      case 7:
        CG_PhysicsCharacterProxy_DebugDrawEntityData(LOCAL_CLIENT_1, scrPlace, &x, &y, 12.0, 8.0);
        CG_PhysicsCharacterProxy_DebugDrawEntityShapesPred(LOCAL_CLIENT_1);
        break;
      case 8:
        CG_PhysicsCharacterProxy_DebugDrawEntityData(LOCAL_CLIENT_1, scrPlace, &x, &y, 12.0, 8.0);
        CG_PhysicsCharacterProxy_DebugDrawEntityShapesAuth(LOCAL_CLIENT_1);
        break;
      case 9:
        CG_PhysicsCharacterProxy_DebugDrawEntityData(LOCAL_CLIENT_1, scrPlace, &x, &y, 12.0, 8.0);
        goto LABEL_611;
      case 0xA:
        G_PhysicsCharacterProxy_DebugDrawEntityData(scrPlace, &x, &y, 12.0, 8.0);
        CG_PhysicsCharacterProxy_DebugDrawEntityData(LOCAL_CLIENT_0, scrPlace, &x, &y, 12.0, 8.0);
        CG_PhysicsCharacterProxy_DebugDrawEntityData(LOCAL_CLIENT_1, scrPlace, &x, &y, 12.0, 8.0);
        G_PhysicsCharacterProxy_DebugDrawEntityShapes(PHYSICS_WORLD_ID_FIRST);
        G_PhysicsCharacterProxy_DebugDrawEntityShapes(PHYSICS_WORLD_ID_SERVER_DETAIL);
        CG_PhysicsCharacterProxy_DebugDrawEntityShapesPred(LOCAL_CLIENT_0);
        CG_PhysicsCharacterProxy_DebugDrawEntityShapesAuth(LOCAL_CLIENT_0);
        CG_PhysicsCharacterProxy_DebugDrawEntityShapesDetail(LOCAL_CLIENT_0);
        CG_PhysicsCharacterProxy_DebugDrawEntityShapesPred(LOCAL_CLIENT_1);
        CG_PhysicsCharacterProxy_DebugDrawEntityShapesAuth(LOCAL_CLIENT_1);
LABEL_611:
        v67 = LOCAL_CLIENT_1;
LABEL_612:
        CG_PhysicsCharacterProxy_DebugDrawEntityShapesDetail(v67);
        break;
      default:
        break;
    }
    x = x + -12.0;
  }
  if ( physics_debugLibraryMaterials->current.enabled )
  {
    Com_sprintf(dest, 0x100ui64, "Physics Library Materials");
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    HavokPhysics_DrawPhysicsLibraryMaterials(scrPlace, &x, &y, 12.0, 8.0);
    x = x + -12.0;
  }
  if ( physics_debugLibraryBodyQualitys->current.enabled )
  {
    Com_sprintf(dest, 0x100ui64, "Physics Library Body Qualitys");
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    HavokPhysics_DrawPhysicsLibraryBodyQualitys(scrPlace, &x, &y, 12.0, 8.0);
    x = x + -12.0;
  }
  if ( physics_debugLibraryMotionProperties->current.enabled )
  {
    Com_sprintf(dest, 0x100ui64, "Physics Library Motion Properties");
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    HavokPhysics_DrawPhysicsLibraryMotionProperties(scrPlace, &x, &y, 12.0, 8.0);
    x = x + -12.0;
  }
  v68 = physics_debugLibraryMaterialId->current.unsignedInt;
  if ( (int)v68 >= 0 )
  {
    Com_sprintf(dest, 0x100ui64, "Physics Library Material Id %i", v68);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    HavokPhysics_DrawPhysicsLibraryMaterialId(physics_debugLibraryMaterialId->current.integer, scrPlace, &x, &y, 12.0, 8.0);
    x = x + -12.0;
  }
  v69 = physics_debugLibraryBodyQualityId->current.unsignedInt;
  if ( (int)v69 >= 0 )
  {
    Com_sprintf(dest, 0x100ui64, "Physics Library Body Quality Id %i", v69);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    HavokPhysics_DrawPhysicsLibraryBodyQualityId(physics_debugLibraryBodyQualityId->current.integer, scrPlace, &x, &y, 12.0, 8.0);
    x = x + -12.0;
  }
  v70 = physics_debugLibraryMotionPropertiesId->current.unsignedInt;
  if ( (int)v70 >= 0 )
  {
    Com_sprintf(dest, 0x100ui64, "Physics Library Material Id %i", v70);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    HavokPhysics_DrawPhysicsLibraryMotionPropertiesId(NULL, physics_debugLibraryMotionPropertiesId->current.integer, scrPlace, &x, &y, 12.0, 8.0);
    x = x + -12.0;
  }
  if ( physics_debugAssetsByName->current.enabled )
  {
    Com_sprintf(dest, 0x100ui64, "Physics Assets by Name");
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    HavokPhysics_DrawPhysicsAssets(1, scrPlace, &x, &y, 12.0, 8.0);
    x = x + -12.0;
  }
  if ( physics_debugAssetsByMemory->current.enabled )
  {
    Com_sprintf(dest, 0x100ui64, "Physics Assets by Memory");
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    HavokPhysics_DrawPhysicsAssets(0, scrPlace, &x, &y, 12.0, 8.0);
    x = x + -12.0;
  }
  v71 = physics_debugAssetIdByName->current.unsignedInt;
  if ( (int)v71 >= 0 )
  {
    Com_sprintf(dest, 0x100ui64, "Physics Asset Id by Name: %i", v71);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    HavokPhysics_DrawPhysicsAssetId(1, physics_debugAssetIdByName->current.integer, scrPlace, &x, &y, 12.0, 8.0);
    x = x + -12.0;
  }
  v72 = physics_debugAssetIdByMemory->current.unsignedInt;
  if ( (int)v72 >= 0 )
  {
    Com_sprintf(dest, 0x100ui64, "Physics Asset Id by Memory: %i", v72);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    HavokPhysics_DrawPhysicsAssetId(0, physics_debugAssetIdByMemory->current.integer, scrPlace, &x, &y, 12.0, 8.0);
    x = x + -12.0;
  }
  if ( physics_debugXModelsWithNoPhysicsAsset->current.enabled )
  {
    Com_sprintf(dest, 0x100ui64, "Physics XModels without PhysicsAssets");
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    HavokPhysics_DrawPhysicsXModelsWithoutPhysicsAssets(scrPlace, &x, &y, 12.0, 8.0, physics_debugXModelsExcludeDoNotUse->current.enabled);
    x = x + -12.0;
  }
  if ( physics_debugXModelsWithCollLods->current.enabled )
  {
    Com_sprintf(dest, 0x100ui64, "Physics XModels with ColLods");
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    HavokPhysics_DrawPhysicsXModelsWithColLods(scrPlace, &x, &y, 12.0, 8.0, physics_debugXModelsExcludeDoNotUse->current.enabled);
    x = x + -12.0;
  }
  if ( physics_debugXModelsByName->current.enabled )
  {
    Com_sprintf(dest, 0x100ui64, "Physics XModels By Name");
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    HavokPhysics_DrawPhysicsXModels(Physics_DebugXModelSortType_ByName, scrPlace, &x, &y, 12.0, 8.0);
    x = x + -12.0;
  }
  if ( physics_debugXModelsByMemory->current.enabled )
  {
    Com_sprintf(dest, 0x100ui64, "Physics XModels By Memory");
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    HavokPhysics_DrawPhysicsXModels(Physics_DebugXModelSortType_ByMemory, scrPlace, &x, &y, 12.0, 8.0);
    x = x + -12.0;
  }
  if ( physics_debugXModelsByDetailBodyCount->current.enabled )
  {
    Com_sprintf(dest, 0x100ui64, "Physics XModels By Detail Body Count");
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    HavokPhysics_DrawPhysicsXModels(Physics_DebugXModelSortType_ByDetailBodyCount, scrPlace, &x, &y, 12.0, 8.0);
    x = x + -12.0;
  }
  v73 = physics_debugXModelIdByName->current.unsignedInt;
  if ( (int)v73 >= 0 )
  {
    Com_sprintf(dest, 0x100ui64, "Physics XModel Id %i, indexed by name", v73);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    HavokPhysics_DrawPhysicsXModelId(1, physics_debugXModelIdByName->current.integer, scrPlace, &x, &y, 12.0, 8.0);
    x = x + -12.0;
  }
  v74 = physics_debugXModelIdByMemory->current.unsignedInt;
  if ( (int)v74 >= 0 )
  {
    Com_sprintf(dest, 0x100ui64, "Physics XModel Id %i, indexed by memory", v74);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    HavokPhysics_DrawPhysicsXModelId(0, physics_debugXModelIdByMemory->current.integer, scrPlace, &x, &y, 12.0, 8.0);
    x = x + -12.0;
  }
  if ( physics_debugSFXEventAssets->current.enabled )
  {
    Com_sprintf(dest, 0x100ui64, "Physics SFX Event Assets");
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    HavokPhysics_DrawPhysicsSFXEventAssets(scrPlace, &x, &y, 12.0, 8.0);
    x = x + -12.0;
  }
  v75 = physics_debugSFXEventAssetId->current.unsignedInt;
  if ( (int)v75 >= 0 )
  {
    Com_sprintf(dest, 0x100ui64, "Physics SFX Event Asset Id %i", v75);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    HavokPhysics_DrawPhysicsSFXEventAssetId(physics_debugSFXEventAssetId->current.integer, scrPlace, &x, &y, 12.0, 8.0);
    x = x + -12.0;
  }
  if ( physics_debugVFXEventAssets->current.enabled )
  {
    Com_sprintf(dest, 0x100ui64, "Physics VFX Event Assets");
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    HavokPhysics_DrawPhysicsVFXEventAssets(scrPlace, &x, &y, 12.0, 8.0);
    x = x + -12.0;
  }
  v76 = physics_debugVFXEventAssetId->current.unsignedInt;
  if ( (int)v76 >= 0 )
  {
    Com_sprintf(dest, 0x100ui64, "Physics VFX Event Asset Id %i", v76);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    HavokPhysics_DrawPhysicsVFXEventAssetId(physics_debugVFXEventAssetId->current.integer, scrPlace, &x, &y, 12.0, 8.0);
    x = x + -12.0;
  }
  if ( physics_debugClipmapBrushes->current.enabled )
  {
    Com_sprintf(dest, 0x100ui64, "Physics Clipmap Brushes");
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    mapEnts = cm.mapEnts;
    v78 = 0;
    v79 = x + 12.0;
    x = x + 12.0;
    y = y + 8.0;
    if ( cm.mapEnts->numSubModels )
    {
      do
      {
        v80 = (__int64)&mapEnts->cmodels[v78];
        if ( *(_QWORD *)(v80 + 32) )
        {
          v81 = *(unsigned __int16 *)(v80 + 40);
          if ( v81 >= WorldCollision_GetMapEntsShapeCount() )
            MapEntsShapeName = "Unknown";
          else
            MapEntsShapeName = WorldCollision_GetMapEntsShapeName(v81);
          Com_sprintf(dest, 0x100ui64, "%i asset:%s for brush:%s", v78, **(const char ***)(v80 + 32), MapEntsShapeName);
          Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
          mapEnts = cm.mapEnts;
          y = y + 8.0;
        }
        ++v78;
      }
      while ( v78 < mapEnts->numSubModels );
      v79 = x;
    }
    x = v79 + -12.0;
  }
  if ( physics_debugParticlesHeavyweight->current.enabled )
  {
    Com_sprintf(dest, 0x100ui64, "Loaded particle effect assets that have heavyweight bodies");
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    *(_DWORD *)buffer = 40;
    y = y + 8.0;
    *(_QWORD *)&buffer[8] = v167;
    *(_DWORD *)&buffer[16] = 0;
    *(_DWORD *)&buffer[20] = 3584;
    DB_LockHashRead();
    v83 = 0;
    p_m_headEntries = &s_assetManager.table.m_headEntries;
    v85 = 0;
    AssetEntryPool = DB_GetAssetEntryPool();
    do
    {
      DB_AssetEntryPool::MutableForEachInBlock<GetAllXAssetFunctor>(AssetEntryPool, &s_assetManager.table.m_headEntries, p_m_headEntries->m_flags.m_data[0], v85, (GetAllXAssetFunctor *)buffer);
      v85 += 64;
      ++v83;
      p_m_headEntries = (DB_AssetEntryFlags *)((char *)p_m_headEntries + 8);
    }
    while ( v83 < 0x1768 );
    DB_UnlockHashRead();
    v87 = *(int *)&buffer[16];
    unsignedInt = collisionFilterInfo;
    v88 = 0;
    v89 = x + 12.0;
    x = x + 12.0;
    if ( *(int *)&buffer[16] > 0 )
    {
      v90 = 0i64;
      do
      {
        v91 = v167[v90];
        if ( v91 )
        {
          v92 = *(_DWORD **)(v91 + 8);
          if ( v92 )
          {
            if ( (*(_BYTE *)(v91 + 36) & 8) != 0 )
            {
              v93 = *(_DWORD *)(v91 + 28);
              v94 = 0;
              if ( v93 )
              {
                v95 = v93;
                do
                {
                  if ( (v92[25] & 0x21) == 32 )
                  {
                    v96 = v92[2];
                    if ( v96 )
                    {
                      v97 = v96;
                      v98 = (_BYTE *)(*(_QWORD *)v92 + 16i64);
                      do
                      {
                        if ( (*v98 & 1) == 0 && *((_DWORD *)v98 - 2) == 7 && (*(_DWORD *)v98 & 0x400i64) != 0 )
                          v94 += v92[9];
                        v98 += 32;
                        --v97;
                      }
                      while ( v97 );
                    }
                  }
                  v92 += 40;
                  --v95;
                }
                while ( v95 );
                if ( v94 > 0 )
                {
                  LODWORD(forceColora) = v94;
                  Com_sprintf(dest, 0x100ui64, "%i \tasset:\t%s \twith max HWP:\t%i", v88, *(const char **)v91, forceColora);
                  Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
                  y = y + 8.0;
                  ++v88;
                }
              }
            }
          }
        }
        ++v90;
      }
      while ( v90 < v87 );
      v89 = x;
    }
    x = v89 + -12.0;
  }
  v99 = physics_debugWorld->current.integer;
  if ( (_DWORD)v99 )
  {
    Com_sprintf(dest, 0x100ui64, "Physics World %s", s_Physics_DebugSectionNames[v99]);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    v100 = x + 12.0;
    x = x + 12.0;
    y = y + 8.0;
    switch ( physics_debugWorld->current.integer )
    {
      case 2:
        v101 = PHYSICS_WORLD_ID_FIRST;
        goto LABEL_700;
      case 3:
        v101 = PHYSICS_WORLD_ID_SERVER_DETAIL;
        goto LABEL_700;
      case 4:
        v101 = PHYSICS_WORLD_ID_CLIENT_FIRST;
        goto LABEL_700;
      case 5:
        v101 = PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE;
        goto LABEL_700;
      case 6:
        v101 = PHYSICS_WORLD_ID_CLIENT0_DETAIL;
        goto LABEL_700;
      case 7:
        v101 = PHYSICS_WORLD_ID_CLIENT1_FIRST;
        goto LABEL_700;
      case 8:
        v101 = PHYSICS_WORLD_ID_CLIENT1_AUTHORITATIVE;
        goto LABEL_700;
      case 9:
        v101 = PHYSICS_WORLD_ID_CLIENT1_DETAIL;
LABEL_700:
        HavokPhysics_DrawWorld(v101, physics_debugWorldFull->current.enabled, scrPlace, &x, &y, 12.0, 8.0);
        v102 = physics_debugWorldBody->current.unsignedInt;
        if ( (_DWORD)v102 == -1 )
        {
          x = x + -12.0;
        }
        else
        {
          Com_sprintf(dest, 0x100ui64, "Physics Body %i", v102);
          Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
          y = y + 8.0;
          x = x + 12.0;
          HavokPhysics_DrawPhysicsBody(v101, *(hknpBodyId *)&physics_debugWorldBody->current.enabled, 1, scrPlace, &x, &y, 12.0, 8.0);
          x = (float)(x + -12.0) + -12.0;
        }
        break;
      default:
        x = v100 + -12.0;
        break;
    }
  }
  v103 = physics_debugAABBBroadphaseWorldQuery->current.integer;
  if ( (_DWORD)v103 )
  {
    v104 = s_Physics_DebugSectionNames[v103];
    *(float *)&buffer[12] = 0.0;
    v105 = 0.03125 * physics_debugAABBBroadphaseWorldQueryAABBMin->current.vector.v[1];
    v106 = 0.03125 * physics_debugAABBBroadphaseWorldQueryAABBMin->current.vector.v[2];
    *(float *)buffer = 0.03125 * physics_debugAABBBroadphaseWorldQueryAABBMin->current.value;
    *(float *)&buffer[4] = v105;
    *(float *)&buffer[8] = v106;
    v107 = 0.03125 * physics_debugAABBBroadphaseWorldQueryAABBMax->current.vector.v[1];
    v108 = 0.03125 * physics_debugAABBBroadphaseWorldQueryAABBMax->current.vector.v[2];
    *(float *)&buffer[16] = 0.03125 * physics_debugAABBBroadphaseWorldQueryAABBMax->current.value;
    *(float *)&buffer[20] = v107;
    *(float *)&buffer[24] = v108;
    *(float *)&buffer[28] = 0.0;
    Com_sprintf(dest, 0x100ui64, "Physics AABB Broadphase Query for world %s", v104);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    switch ( physics_debugAABBBroadphaseWorldQuery->current.integer )
    {
      case 2:
        v109 = PHYSICS_WORLD_ID_FIRST;
        goto LABEL_714;
      case 3:
        v109 = PHYSICS_WORLD_ID_SERVER_DETAIL;
        goto LABEL_714;
      case 4:
        v109 = PHYSICS_WORLD_ID_CLIENT_FIRST;
        goto LABEL_714;
      case 5:
        v109 = PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE;
        goto LABEL_714;
      case 6:
        v109 = PHYSICS_WORLD_ID_CLIENT0_DETAIL;
        goto LABEL_714;
      case 7:
        v109 = PHYSICS_WORLD_ID_CLIENT1_FIRST;
        goto LABEL_714;
      case 8:
        v109 = PHYSICS_WORLD_ID_CLIENT1_AUTHORITATIVE;
        goto LABEL_714;
      case 9:
        v109 = PHYSICS_WORLD_ID_CLIENT1_DETAIL;
LABEL_714:
        HavokPhysics_DrawDebugAABBBroadphaseWorldQuery(v109, unsignedInt, (const hkAabb *)buffer, scrPlace, &x, &y, 12.0, 8.0);
        break;
      default:
        break;
    }
  }
  v110 = physics_debugAABBWorldQuery->current.integer;
  if ( (_DWORD)v110 )
  {
    v111 = s_Physics_DebugSectionNames[v110];
    *(float *)&buffer[12] = 0.0;
    v112 = 0.03125 * physics_debugAABBWorldQueryAABBMin->current.vector.v[1];
    v113 = 0.03125 * physics_debugAABBWorldQueryAABBMin->current.vector.v[2];
    *(float *)buffer = 0.03125 * physics_debugAABBWorldQueryAABBMin->current.value;
    *(float *)&buffer[4] = v112;
    *(float *)&buffer[8] = v113;
    v114 = 0.03125 * physics_debugAABBWorldQueryAABBMax->current.vector.v[1];
    v115 = 0.03125 * physics_debugAABBWorldQueryAABBMax->current.vector.v[2];
    *(float *)&buffer[16] = 0.03125 * physics_debugAABBWorldQueryAABBMax->current.value;
    *(float *)&buffer[20] = v114;
    *(float *)&buffer[24] = v115;
    *(float *)&buffer[28] = 0.0;
    Com_sprintf(dest, 0x100ui64, "Physics AABB World Query for world %s", v111);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    switch ( physics_debugAABBWorldQuery->current.integer )
    {
      case 2:
        v116 = PHYSICS_WORLD_ID_FIRST;
        goto LABEL_725;
      case 3:
        v116 = PHYSICS_WORLD_ID_SERVER_DETAIL;
        goto LABEL_725;
      case 4:
        v116 = PHYSICS_WORLD_ID_CLIENT_FIRST;
        goto LABEL_725;
      case 5:
        v116 = PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE;
        goto LABEL_725;
      case 6:
        v116 = PHYSICS_WORLD_ID_CLIENT0_DETAIL;
        goto LABEL_725;
      case 7:
        v116 = PHYSICS_WORLD_ID_CLIENT1_FIRST;
        goto LABEL_725;
      case 8:
        v116 = PHYSICS_WORLD_ID_CLIENT1_AUTHORITATIVE;
        goto LABEL_725;
      case 9:
        v116 = PHYSICS_WORLD_ID_CLIENT1_DETAIL;
LABEL_725:
        HavokPhysics_DrawDebugAABBWorldQuery(v116, unsignedInt, (const hkAabb *)buffer, scrPlace, &x, &y, 12.0, 8.0);
        break;
      default:
        break;
    }
  }
  v117 = physics_debugRayWorld->current.integer;
  if ( (_DWORD)v117 )
  {
    Com_sprintf(dest, 0x100ui64, "Physics Raycast for world %s", s_Physics_DebugSectionNames[v117]);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    switch ( physics_debugRayWorld->current.integer )
    {
      case 2:
        v118 = PHYSICS_WORLD_ID_FIRST;
        goto LABEL_736;
      case 3:
        v118 = PHYSICS_WORLD_ID_SERVER_DETAIL;
        goto LABEL_736;
      case 4:
        v118 = PHYSICS_WORLD_ID_CLIENT_FIRST;
        goto LABEL_736;
      case 5:
        v118 = PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE;
        goto LABEL_736;
      case 6:
        v118 = PHYSICS_WORLD_ID_CLIENT0_DETAIL;
        goto LABEL_736;
      case 7:
        v118 = PHYSICS_WORLD_ID_CLIENT1_FIRST;
        goto LABEL_736;
      case 8:
        v118 = PHYSICS_WORLD_ID_CLIENT1_AUTHORITATIVE;
        goto LABEL_736;
      case 9:
        v118 = PHYSICS_WORLD_ID_CLIENT1_DETAIL;
LABEL_736:
        HavokPhysics_DrawDebugRaycast(v118, unsignedInt, physics_debugRayClutter->current.enabled, scrPlace, &x, &y, 12.0, 8.0);
        break;
      default:
        break;
    }
  }
  v119 = physics_debugShapeCastWorld->current.integer;
  if ( (_DWORD)v119 )
  {
    Com_sprintf(dest, 0x100ui64, "Physics Shapecast for world %s", s_Physics_DebugSectionNames[v119]);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    switch ( physics_debugShapeCastWorld->current.integer )
    {
      case 2:
        v120 = PHYSICS_WORLD_ID_FIRST;
        goto LABEL_747;
      case 3:
        v120 = PHYSICS_WORLD_ID_SERVER_DETAIL;
        goto LABEL_747;
      case 4:
        v120 = PHYSICS_WORLD_ID_CLIENT_FIRST;
        goto LABEL_747;
      case 5:
        v120 = PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE;
        goto LABEL_747;
      case 6:
        v120 = PHYSICS_WORLD_ID_CLIENT0_DETAIL;
        goto LABEL_747;
      case 7:
        v120 = PHYSICS_WORLD_ID_CLIENT1_FIRST;
        goto LABEL_747;
      case 8:
        v120 = PHYSICS_WORLD_ID_CLIENT1_AUTHORITATIVE;
        goto LABEL_747;
      case 9:
        v120 = PHYSICS_WORLD_ID_CLIENT1_DETAIL;
LABEL_747:
        HavokPhysics_DrawDebugShapecast(v120, unsignedInt, scrPlace, &x, &y, 12.0, 8.0);
        break;
      default:
        break;
    }
  }
  v121 = physics_debugQueryPointWorld->current.integer;
  if ( (_DWORD)v121 )
  {
    Com_sprintf(dest, 0x100ui64, "Physics Point Query for world %s", s_Physics_DebugSectionNames[v121]);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    x = x + 12.0;
    y = y + 8.0;
    *(float *)buffer = 0.03125 * physics_debugQueryPointPosition->current.value;
    *(float *)&buffer[4] = 0.03125 * physics_debugQueryPointPosition->current.vector.v[1];
    *(float *)&buffer[8] = 0.03125 * physics_debugQueryPointPosition->current.vector.v[2];
    *(float *)&buffer[12] = 0.0;
    switch ( physics_debugQueryPointWorld->current.integer )
    {
      case 2:
        v122 = PHYSICS_WORLD_ID_FIRST;
        goto LABEL_758;
      case 3:
        v122 = PHYSICS_WORLD_ID_SERVER_DETAIL;
        goto LABEL_758;
      case 4:
        v122 = PHYSICS_WORLD_ID_CLIENT_FIRST;
        goto LABEL_758;
      case 5:
        v122 = PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE;
        goto LABEL_758;
      case 6:
        v122 = PHYSICS_WORLD_ID_CLIENT0_DETAIL;
        goto LABEL_758;
      case 7:
        v122 = PHYSICS_WORLD_ID_CLIENT1_FIRST;
        goto LABEL_758;
      case 8:
        v122 = PHYSICS_WORLD_ID_CLIENT1_AUTHORITATIVE;
        goto LABEL_758;
      case 9:
        v122 = PHYSICS_WORLD_ID_CLIENT1_DETAIL;
LABEL_758:
        HavokPhysics_DrawDebugQueryPoint(v122, (const hkVector4f *)buffer, (float)physics_debugQueryPointMaxDistance->current.integer * 0.03125, unsignedInt, scrPlace, &x, &y, 12.0, 8.0);
        break;
      default:
        break;
    }
  }
  v123 = physics_debugGetClosestPointsWorld->current.integer;
  if ( (_DWORD)v123 )
  {
    Com_sprintf(dest, 0x100ui64, "Physics Get Closest Points Query for world %s", s_Physics_DebugSectionNames[v123]);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    x = x + 12.0;
    y = y + 8.0;
    *(float *)buffer = 0.03125 * physics_debugGetClosestPointsPosition->current.value;
    *(float *)&buffer[4] = 0.03125 * physics_debugGetClosestPointsPosition->current.vector.v[1];
    *(float *)&buffer[8] = 0.03125 * physics_debugGetClosestPointsPosition->current.vector.v[2];
    *(float *)&buffer[12] = 0.0;
    switch ( physics_debugGetClosestPointsWorld->current.integer )
    {
      case 2:
        v124 = PHYSICS_WORLD_ID_FIRST;
        goto LABEL_769;
      case 3:
        v124 = PHYSICS_WORLD_ID_SERVER_DETAIL;
        goto LABEL_769;
      case 4:
        v124 = PHYSICS_WORLD_ID_CLIENT_FIRST;
        goto LABEL_769;
      case 5:
        v124 = PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE;
        goto LABEL_769;
      case 6:
        v124 = PHYSICS_WORLD_ID_CLIENT0_DETAIL;
        goto LABEL_769;
      case 7:
        v124 = PHYSICS_WORLD_ID_CLIENT1_FIRST;
        goto LABEL_769;
      case 8:
        v124 = PHYSICS_WORLD_ID_CLIENT1_AUTHORITATIVE;
        goto LABEL_769;
      case 9:
        v124 = PHYSICS_WORLD_ID_CLIENT1_DETAIL;
LABEL_769:
        HavokPhysics_DrawDebugGetClosestPoints(v124, (const hkVector4f *)buffer, (float)physics_debugGetClosestPointsMaxDistance->current.integer * 0.03125, unsignedInt, scrPlace, &x, &y, 12.0, 8.0);
        break;
      default:
        break;
    }
  }
  if ( physics_debugDetailModel->current.enabled )
  {
    Com_sprintf(dest, 0x100ui64, "Physics Debug Detail model");
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    HavokPhysics_DrawDebugDetailModel(scrPlace, &x, &y, 12.0, 8.0);
    x = x + -12.0;
  }
  if ( physics_debugFlickerColLod->current.enabled )
  {
    v125 = timer + 0.016666668;
    timer = timer + 0.016666668;
    if ( timer > 2.0 )
    {
      timer = 0.0;
      v125 = 0.0;
    }
    Dvar_SetBoolByName("MOQLSLTLKM", v125 > 1.0);
    v126 = "Showing normal geo";
    if ( timer > 1.0 )
      v126 = "Showing ColLod";
    Com_sprintf(dest, 0x100ui64, "Flicker Debug ColLod: %s", v126);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
  }
  if ( physics_debugBadColLods->current.enabled )
  {
    Com_sprintf(dest, 0x100ui64, "Bad Detail models");
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    HavokPhysics_DrawDebugBadColLods(scrPlace, &x, &y, 12.0, 8.0);
    x = x + -12.0;
  }
  v127 = physics_debugMutableShapesInWorld->current.integer;
  v128 = v127 - 2;
  if ( (unsigned int)(v127 - 2) > 7 )
    v128 = PHYSICS_WORLD_ID_INVALID;
  if ( !g_physicsServerWorldsCreated && (unsigned int)v128 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
    v128 = PHYSICS_WORLD_ID_INVALID;
  if ( (g_physicsClientWorldsCreated || (unsigned int)(v128 - 2) > 5) && v128 != PHYSICS_WORLD_ID_INVALID )
  {
    Com_sprintf(dest, 0x100ui64, "Mutable Shapes in World %s", s_Physics_DebugSectionNames[v127]);
    Physics_DrawDebugString(scrPlace, x, y, dest, &colorWhite, 0, 1, 8.0, 0);
    y = y + 8.0;
    x = x + 12.0;
    HavokPhysics_DrawDebugMutableShapesInWorld(scrPlace, &x, &y, 12.0, 8.0, v128, physics_debugMutableShapesInWorldRange->current.value);
    x = x + -12.0;
  }
  PhysicsSVFX_DrawDebug(scrPlace, &x, &y, 12.0, 8.0);
  PhysicsFX_Debug_Draw(scrPlace, &x, &y, 12.0, 8.0);
  PhysicsVolume_DrawDebug(scrPlace, &x, &y, 12.0, 8.0);
  PhysPerfTrack_DebugDraw(scrPlace, &x, &y, 12.0, 8.0);
  PhysPerfRaycast_DebugDraw(scrPlace, &x, &y, 12.0, 8.0);
  PhysicsVehicle_DebugDraw(scrPlace, &x, &y, 12.0, 8.0);
  Ragdoll_DebugDraw(scrPlace, &x, &y, 12.0, 8.0);
  v129 = physics_debugDisplayOffsetY->current.integer;
  v130 = v129 - (int)y + 200;
  if ( v130 > 0 )
    v130 = 0;
  if ( v129 > v130 )
    v130 = physics_debugDisplayOffsetY->current.integer;
  if ( v129 != v130 )
    Dvar_SetInt_Internal(physics_debugDisplayOffsetY, v130);
  v131 = physics_debugDump;
  if ( physics_debugDump->current.enabled )
  {
    if ( s_physicsDumpFile.handle.handle != -1 )
    {
      FS_Write("<BR>", 4ui64, s_physicsDumpFile);
      FS_Write("</body>", 7ui64, s_physicsDumpFile);
      FS_Write("\n\r\n", 3ui64, s_physicsDumpFile);
      FS_Write("</html>", 7ui64, s_physicsDumpFile);
      FS_Write("\n\r\n", 3ui64, s_physicsDumpFile);
      FS_FCloseFile(s_physicsDumpFile);
      v131 = physics_debugDump;
    }
    Dvar_SetBool_Internal(v131, 0);
  }
}

/*
==============
Physics_DrawDebugString
==============
*/

void __fastcall Physics_DrawDebugString(const ScreenPlacement *scrPlace, double x, float y, const char *string, const vec4_t *setColor, int forceColor, int shadow, float charHeight, int adjust)
{
  __int128 v10; 
  float v11; 
  __int128 v12; 
  float v13; 
  float v14; 
  float v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 
  vec4_t *v19; 
  char _Buffer[128]; 
  char buffer[128]; 

  v10 = *(_OWORD *)&x;
  if ( y > 0.0 && y < 1080.0 )
    CG_DrawStringExt(scrPlace, *(float *)&x, y, string, setColor, forceColor, shadow, charHeight, adjust);
  if ( physics_debugDump->current.enabled )
  {
    v11 = (float)physics_debugDisplayOffsetX->current.integer + 8.0;
    if ( *(float *)&x > v11 )
    {
      do
      {
        Com_Printf(14, " ");
        v12 = v10;
        *(float *)&v12 = *(float *)&v10 + -12.0;
        v10 = v12;
      }
      while ( *(float *)&v12 > v11 );
    }
    Com_Printf(14, (const char *)&queryFormat, string);
    Com_Printf(14, "\n");
    if ( s_physicsDumpFile.handle.handle != -1 )
    {
      v13 = setColor->v[0];
      if ( setColor->v[0] == 1.0 && 1.0 == setColor->v[1] && 1.0 == setColor->v[2] )
      {
        v13 = colorBlack.v[0];
        v14 = colorBlack.v[1];
        v15 = colorBlack.v[2];
      }
      else
      {
        v14 = setColor->v[1];
        v15 = setColor->v[2];
      }
      j_sprintf(_Buffer, "<p style = \"margin-bottom:0px;margin-top:0px;margin-left:%ipx\">", (unsigned int)(int)(float)(*(float *)&x - v11));
      v16 = -1i64;
      v17 = -1i64;
      do
        ++v17;
      while ( _Buffer[v17] );
      FS_Write(_Buffer, v17, s_physicsDumpFile);
      LODWORD(v19) = (int)(float)(v15 * 255.0);
      j_sprintf(buffer, "<font color=\"%02X%02X%02X\">", (unsigned int)(int)(float)(v13 * 255.0), (unsigned int)(int)(float)(v14 * 255.0), v19);
      v18 = -1i64;
      do
        ++v18;
      while ( buffer[v18] );
      FS_Write(buffer, v18, s_physicsDumpFile);
      do
        ++v16;
      while ( string[v16] );
      FS_Write(string, v16, s_physicsDumpFile);
      FS_Write("\n\r\n", 3ui64, s_physicsDumpFile);
    }
  }
}

/*
==============
Physics_DrawDebugWorldCPU
==============
*/
void Physics_DrawDebugWorldCPU(Physics_WorldId worldId, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  const char *WorldName; 
  float v11; 

  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10471, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Draw Debug World CPU with invalid world index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  WorldName = Physics_GetWorldName(worldId);
  Physics_DrawDebugString(scrPlace, *x, *y, WorldName, &colorWhite, 0, 1, charHeight, 0);
  v11 = charHeight + *y;
  *y = v11;
  if ( g_physicsServerWorldsCreated || g_physicsClientWorldsCreated )
  {
    *x = tabWidth + *x;
    HavokPhysics_DrawDebugWorldCPU(worldId, scrPlace, x, y, tabWidth, charHeight);
    *x = *x - tabWidth;
  }
  else
  {
    Physics_DrawDebugString(scrPlace, *x, v11, "Worlds not set up", &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
  }
}

/*
==============
Physics_DrawDebugWorldMemory
==============
*/
void Physics_DrawDebugWorldMemory(Physics_WorldId worldId, const ScreenPlacement *scrPlace, float *x, float *y, float tabWidth, float charHeight)
{
  const char *WorldName; 
  float v11; 

  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10428, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Draw Debug World Memory with invalid world index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  WorldName = Physics_GetWorldName(worldId);
  Physics_DrawDebugString(scrPlace, *x, *y, WorldName, &colorWhite, 0, 1, charHeight, 0);
  v11 = charHeight + *y;
  *y = v11;
  if ( g_physicsServerWorldsCreated || g_physicsClientWorldsCreated )
  {
    *x = tabWidth + *x;
    HavokPhysics_DrawDebugWorldMemory(worldId, scrPlace, x, y, tabWidth, charHeight);
    *x = *x - tabWidth;
  }
  else
  {
    Physics_DrawDebugString(scrPlace, *x, v11, "Worlds not set up", &colorWhite, 0, 1, charHeight, 0);
    *y = charHeight + *y;
  }
}

/*
==============
Physics_EnableDeactivationForBody
==============
*/
void Physics_EnableDeactivationForBody(Physics_WorldId worldId, unsigned int bodyId, bool enableDeactivation)
{
  __int64 v6; 
  Physics_WorldId v7; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7858, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to enable deactivation for a body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v7 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7859, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to enable deactivation for a body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v7) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v6) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7860, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to enable deactivation for a body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v6) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  HavokPhysics_EnableDeactivationForBody(worldId, (hknpBodyId)bodyId, enableDeactivation);
}

/*
==============
Physics_EnableShapeInstance
==============
*/
void Physics_EnableShapeInstance(Physics_WorldId worldId, unsigned int bodyId, unsigned __int16 shapeInstanceId, bool enabled)
{
  __int64 v8; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10218, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to EnableShapeInstance when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10219, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to EnableShapeInstance with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v8) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10220, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to EnableShapeInstance with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v8) )
      __debugbreak();
  }
  if ( shapeInstanceId == 0xFFFF )
  {
    LODWORD(v8) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10221, ASSERT_TYPE_ASSERT, "(Physics_IsShapeInstanceIdValid( shapeInstanceId ))", "%s\n\tPhysics: Trying to EnableShapeInstance with invalid ShapeInstanceId in world %i", "Physics_IsShapeInstanceIdValid( shapeInstanceId )", v8) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  HavokPhysics_EnableShapeInstance(worldId, (hknpBodyId)bodyId, (hkHandle<unsigned short,65535,hknpShapeInstanceIdDiscriminant>)shapeInstanceId, enabled);
}

/*
==============
Physics_FlushMovedStatics
==============
*/
void Physics_FlushMovedStatics(Physics_WorldId worldId)
{
  Physics_WorldId v2; 

  Sys_ProfBeginNamedEvent(0xFF008008, "Physics_FlushMovedStatics");
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7787, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Flush Moved Statics when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v2 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7788, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Flush Moved Statics with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v2) )
      __debugbreak();
  }
  Physics_LockWorld(worldId);
  HavokPhysics_FlushMovedStatics(worldId);
  Physics_UnlockWorld(worldId);
  Sys_ProfEndNamedEvent();
}

/*
==============
Physics_FreeBroadphaseCollisionQueryResult
==============
*/
void Physics_FreeBroadphaseCollisionQueryResult(HavokPhysics_BroadphaseCollisionQueryResult *result)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8055, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to FreeBroadphaseCollisionQueryResult when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8056, ASSERT_TYPE_ASSERT, "(result)", "%s\n\tPhysics: Trying to FreeBroadphaseCollisionQueryResult for invalid result", "result") )
    __debugbreak();
  HavokPhysics_FreeBroadphaseCollisionQueryResult(result);
}

/*
==============
Physics_FreeCollisionQueryResult
==============
*/
void Physics_FreeCollisionQueryResult(HavokPhysics_CollisionQueryResult *result)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8108, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to FreeCollisionQueryResult when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8109, ASSERT_TYPE_ASSERT, "(result)", "%s\n\tPhysics: Trying to FreeCollisionQueryResult for invalid result", "result") )
    __debugbreak();
  HavokPhysics_FreeCollisionQueryResult(result);
}

/*
==============
Physics_FreeIgnoreBodies
==============
*/
void Physics_FreeIgnoreBodies(HavokPhysics_IgnoreBodies *ignoreBodies)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8133, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to FreeIgnoreBodies when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !ignoreBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8134, ASSERT_TYPE_ASSERT, "(ignoreBodies)", "%s\n\tPhysics: Trying to FreeIgnoreBodies for invalid ignoreBodies", "ignoreBodies") )
    __debugbreak();
  HavokPhysics_FreeIgnoreBodies(ignoreBodies);
}

/*
==============
Physics_GetAssetByName
==============
*/
const PhysicsAsset *Physics_GetAssetByName(const char *name)
{
  __int64 v2; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5882, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Asset by name when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( name )
  {
    v2 = -1i64;
    do
      ++v2;
    while ( name[v2] );
    if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5883, ASSERT_TYPE_ASSERT, "(!name || strlen( name ) != 0)", "%s\n\tPhysics: Trying to Get Asset by name with invalid name", "!name || strlen( name ) != 0") )
      __debugbreak();
  }
  return HavokPhysics_GetAssetByName(name);
}

/*
==============
Physics_GetBroadphaseNeedsRefresh
==============
*/
_BOOL8 Physics_GetBroadphaseNeedsRefresh(const Physics_WorldId worldId)
{
  __int64 v1; 

  v1 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8404, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  return g_physicsBroadphaseRefreshNeeded[v1];
}

/*
==============
Physics_GetBrushBasisFromUserData
==============
*/
__int64 Physics_GetBrushBasisFromUserData(unsigned __int64 userData)
{
  return BYTE6(userData) & 1;
}

/*
==============
Physics_GetClosestPoints
==============
*/
void Physics_GetClosestPoints(Physics_WorldId worldId, unsigned int numBodies, unsigned int *bodyIds, hknpShape *shape, const vec3_t *point, const vec4_t *rotation, float maxDistance, Physics_GetClosestPointsExtendedData *extendedData, HavokPhysics_CollisionQueryResult *result)
{
  __int64 v12; 
  float v13; 
  float v14; 
  __int64 v21; 
  hkVector4f v22; 
  hkQuaternionf v23; 

  v12 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9782, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to fire GetClosestPoints against bodies when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v12 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9783, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to fire GetClosestPoints against bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v12) )
    __debugbreak();
  if ( numBodies )
  {
    if ( !bodyIds )
    {
      LODWORD(v21) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9784, ASSERT_TYPE_ASSERT, "(numBodies == 0 || bodyIds)", "%s\n\tPhysics: Trying to fire GetClosestPoints against bodies with bad bodies %i", "numBodies == 0 || bodyIds", v21) )
        __debugbreak();
    }
  }
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9785, ASSERT_TYPE_ASSERT, "(shape)", "%s\n\tPhysics: Trying to fire Shapecast against bodies with null shape", "shape") )
    __debugbreak();
  if ( ((LODWORD(point->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9786, ASSERT_TYPE_ASSERT, "(!IS_NAN( point[0] ) && !IS_NAN( point[1] ) && !IS_NAN( point[2] ))", "%s\n\tPhysics: Trying to fire GetClosestPoints against bodies with invalid point", "!IS_NAN( point[0] ) && !IS_NAN( point[1] ) && !IS_NAN( point[2] )") )
    __debugbreak();
  if ( ((LODWORD(rotation->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9787, ASSERT_TYPE_ASSERT, "(!IS_NAN( rotation[0] ) && !IS_NAN( rotation[1] ) && !IS_NAN( rotation[2] ) && !IS_NAN( rotation[3] ))", "%s\n\tPhysics: Trying to fire GetClosestPoints against bodies with invalid rotation", "!IS_NAN( rotation[0] ) && !IS_NAN( rotation[1] ) && !IS_NAN( rotation[2] ) && !IS_NAN( rotation[3] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9788, ASSERT_TYPE_ASSERT, "(extendedData)", "%s\n\tPhysics: Trying to fire GetClosestPoints against bodies with invalid extended data", "extendedData") )
    __debugbreak();
  if ( !extendedData->ignoreBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9789, ASSERT_TYPE_ASSERT, "(extendedData->ignoreBodies)", "%s\n\tPhysics: Trying to fire GetClosestPoints against bodies without ignore bodies", "extendedData->ignoreBodies") )
    __debugbreak();
  if ( extendedData->simplify && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9790, ASSERT_TYPE_ASSERT, "(!extendedData->simplify)", "%s\n\tPhysics: Trying to fire GetClosestPoints against bodies with simplify - not supported", "!extendedData->simplify") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9791, ASSERT_TYPE_ASSERT, "(result)", "%s\n\tPhysics: Trying to fire GetClosestPoints against bodies with invalid result", "result") )
    __debugbreak();
  if ( g_physicsQueriesNotAllowedForWorld[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9792, ASSERT_TYPE_ASSERT, "(!g_physicsQueriesNotAllowedForWorld[worldId])", "%s\n\tCan't perform a physics query here - they have been expressly disallowed", "!g_physicsQueriesNotAllowedForWorld[worldId]") )
    __debugbreak();
  CG_EntityWorkers_CheckHasAnyLock_Physics();
  v13 = 0.03125 * point->v[1];
  v14 = 0.03125 * point->v[2];
  _XMM5 = LODWORD(rotation->v[0]);
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [rdi+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rdi+8], 20h ; ' '
    vinsertps xmm5, xmm5, dword ptr [rdi+0Ch], 30h ; '0'
  }
  v22.m_quad.m128_f32[0] = 0.03125 * point->v[0];
  __asm
  {
    vdpps   xmm0, xmm5, xmm5, 0FFh
    vrsqrtps xmm4, xmm0
  }
  v22.m_quad.m128_f32[1] = v13;
  v22.m_quad.m128_f32[2] = v14;
  v22.m_quad.m128_f32[3] = 0.0;
  v23.m_vec.m_quad = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM0, _XMM4), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM5);
  switch ( (int)v12 )
  {
    case 0:
      Profile_Begin(757);
      break;
    case 1:
      Profile_Begin(758);
      break;
    case 2:
    case 5:
      Profile_Begin(759);
      break;
    case 3:
    case 6:
      Profile_Begin(760);
      break;
    case 4:
    case 7:
      Profile_Begin(761);
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9846, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown world id") )
        __debugbreak();
      break;
  }
  HavokPhysics_GetClosestPoints((Physics_WorldId)v12, numBodies, bodyIds, shape, &v22, &v23, 0.03125 * maxDistance, extendedData, result);
  Profile_EndInternal(NULL);
}

/*
==============
Physics_GetClosestPoints
==============
*/
void Physics_GetClosestPoints(Physics_WorldId worldId, unsigned int bodyId, hknpShape *shape, const vec3_t *point, const vec4_t *rotation, float maxDistance, Physics_GetClosestPointsExtendedData *extendedData, HavokPhysics_CollisionQueryResult *result)
{
  __int64 v11; 
  float v12; 
  float v13; 
  Physics_GetClosestPointsExtendedData *v20; 
  hkVector4f pointa; 
  hkQuaternionf v22; 

  v11 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9704, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to fire GetClosestPoints against body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v11 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9705, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to fire GetClosestPoints against body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v11) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v20) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9706, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to fire GetClosestPoints against body with invalid body id %i", "Physics_IsRigidBodyIdValid( bodyId )", v20) )
      __debugbreak();
  }
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9707, ASSERT_TYPE_ASSERT, "(shape)", "%s\n\tPhysics: Trying to fire Shapecast against body with null shape", "shape") )
    __debugbreak();
  if ( ((LODWORD(point->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9708, ASSERT_TYPE_ASSERT, "(!IS_NAN( point[0] ) && !IS_NAN( point[1] ) && !IS_NAN( point[2] ))", "%s\n\tPhysics: Trying to fire GetClosestPoints against body with invalid point", "!IS_NAN( point[0] ) && !IS_NAN( point[1] ) && !IS_NAN( point[2] )") )
    __debugbreak();
  if ( ((LODWORD(rotation->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9709, ASSERT_TYPE_ASSERT, "(!IS_NAN( rotation[0] ) && !IS_NAN( rotation[1] ) && !IS_NAN( rotation[2] ) && !IS_NAN( rotation[3] ))", "%s\n\tPhysics: Trying to fire GetClosestPoints against body with invalid rotation", "!IS_NAN( rotation[0] ) && !IS_NAN( rotation[1] ) && !IS_NAN( rotation[2] ) && !IS_NAN( rotation[3] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9710, ASSERT_TYPE_ASSERT, "(extendedData)", "%s\n\tPhysics: Trying to fire GetClosestPoints against body with invalid extended data", "extendedData") )
    __debugbreak();
  if ( extendedData->ignoreBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9711, ASSERT_TYPE_ASSERT, "(!extendedData->ignoreBodies)", "%s\n\tPhysics: Trying to fire GetClosestPoints against body with ignore bodies", "!extendedData->ignoreBodies") )
    __debugbreak();
  if ( extendedData->simplify && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9712, ASSERT_TYPE_ASSERT, "(!extendedData->simplify)", "%s\n\tPhysics: Trying to fire GetClosestPoints against body with simplify - not supported", "!extendedData->simplify") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9713, ASSERT_TYPE_ASSERT, "(result)", "%s\n\tPhysics: Trying to fire GetClosestPoints against body with invalid result", "result") )
    __debugbreak();
  if ( g_physicsQueriesNotAllowedForWorld[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9714, ASSERT_TYPE_ASSERT, "(!g_physicsQueriesNotAllowedForWorld[worldId])", "%s\n\tCan't perform a physics query here - they have been expressly disallowed", "!g_physicsQueriesNotAllowedForWorld[worldId]") )
    __debugbreak();
  CG_EntityWorkers_CheckHasAnyLock_Physics();
  v12 = 0.03125 * point->v[1];
  v13 = 0.03125 * point->v[2];
  _XMM5 = LODWORD(rotation->v[0]);
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [rdi+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rdi+8], 20h ; ' '
    vinsertps xmm5, xmm5, dword ptr [rdi+0Ch], 30h ; '0'
  }
  pointa.m_quad.m128_f32[0] = 0.03125 * point->v[0];
  __asm
  {
    vdpps   xmm0, xmm5, xmm5, 0FFh
    vrsqrtps xmm4, xmm0
  }
  pointa.m_quad.m128_f32[1] = v12;
  pointa.m_quad.m128_f32[2] = v13;
  pointa.m_quad.m128_f32[3] = 0.0;
  v22.m_vec.m_quad = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM0, _XMM4), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM5);
  switch ( (int)v11 )
  {
    case 0:
      Profile_Begin(752);
      break;
    case 1:
      Profile_Begin(753);
      break;
    case 2:
    case 5:
      Profile_Begin(754);
      break;
    case 3:
    case 6:
      Profile_Begin(755);
      break;
    case 4:
    case 7:
      Profile_Begin(756);
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9768, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown world id") )
        __debugbreak();
      break;
  }
  HavokPhysics_GetClosestPoints((Physics_WorldId)v11, (hknpBodyId)bodyId, shape, &pointa, &v22, 0.03125 * maxDistance, extendedData, result);
  Profile_EndInternal(NULL);
}

/*
==============
Physics_GetClosestPoints
==============
*/
void Physics_GetClosestPoints(Physics_WorldId worldId, hknpShape *shape, const vec3_t *point, const vec4_t *rotation, float maxDistance, Physics_GetClosestPointsExtendedData *extendedData, HavokPhysics_CollisionQueryResult *result)
{
  __int64 v10; 
  const dvar_t *v11; 
  float v12; 
  float v13; 
  hkVector4f pointa; 
  hkQuaternionf rotationa; 

  v10 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9078, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to fire GetClosestPoints when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v10 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9079, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to fire GetClosestPoints with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v10) )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9080, ASSERT_TYPE_ASSERT, "(shape)", "%s\n\tPhysics: Trying to fire Shapecast with null shape", "shape") )
    __debugbreak();
  if ( ((LODWORD(point->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9081, ASSERT_TYPE_ASSERT, "(!IS_NAN( point[0] ) && !IS_NAN( point[1] ) && !IS_NAN( point[2] ))", "%s\n\tPhysics: Trying to fire GetClosestPoints with invalid point", "!IS_NAN( point[0] ) && !IS_NAN( point[1] ) && !IS_NAN( point[2] )") )
    __debugbreak();
  if ( ((LODWORD(rotation->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9082, ASSERT_TYPE_ASSERT, "(!IS_NAN( rotation[0] ) && !IS_NAN( rotation[1] ) && !IS_NAN( rotation[2] ) && !IS_NAN( rotation[3] ))", "%s\n\tPhysics: Trying to fire GetClosestPoints with invalid rotation", "!IS_NAN( rotation[0] ) && !IS_NAN( rotation[1] ) && !IS_NAN( rotation[2] ) && !IS_NAN( rotation[3] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9083, ASSERT_TYPE_ASSERT, "(extendedData)", "%s\n\tPhysics: Trying to fire GetClosestPoints with invalid extended Data", "extendedData") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9084, ASSERT_TYPE_ASSERT, "(result)", "%s\n\tPhysics: Trying to fire GetClosestPoints with invalid result", "result") )
    __debugbreak();
  if ( g_physicsBroadphaseQueriesNotAllowedForWorld[v10] )
  {
    v11 = DVARBOOL_physics_allowQueryDisabling;
    if ( !DVARBOOL_physics_allowQueryDisabling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_allowQueryDisabling") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( v11->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9085, ASSERT_TYPE_ASSERT, "(!g_physicsBroadphaseQueriesNotAllowedForWorld[worldId] || !Dvar_GetBool_Internal_DebugName( DVARBOOL_physics_allowQueryDisabling, \"physics_allowQueryDisabling\" ))", "%s\n\tCan't perform a physics query here - they have been expressly disallowed", "!g_physicsBroadphaseQueriesNotAllowedForWorld[worldId] || !Dvar_GetBool( physics_allowQueryDisabling )") )
      __debugbreak();
  }
  if ( g_physicsQueriesNotAllowedForWorld[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9086, ASSERT_TYPE_ASSERT, "(!g_physicsQueriesNotAllowedForWorld[worldId])", "%s\n\tCan't perform a physics query here - they have been expressly disallowed", "!g_physicsQueriesNotAllowedForWorld[worldId]") )
    __debugbreak();
  CG_EntityWorkers_CheckHasAnyLock_Physics();
  if ( (unsigned int)v10 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8404, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( g_physicsBroadphaseRefreshNeeded[v10] )
    Physics_UpdateBroadphase((Physics_WorldId)v10, 1);
  v12 = 0.03125 * point->v[1];
  v13 = 0.03125 * point->v[2];
  _XMM5 = LODWORD(rotation->v[0]);
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [rsi+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rsi+8], 20h ; ' '
    vinsertps xmm5, xmm5, dword ptr [rsi+0Ch], 30h ; '0'
  }
  pointa.m_quad.m128_f32[0] = 0.03125 * point->v[0];
  __asm
  {
    vdpps   xmm0, xmm5, xmm5, 0FFh
    vrsqrtps xmm4, xmm0
  }
  pointa.m_quad.m128_f32[1] = v12;
  pointa.m_quad.m128_f32[2] = v13;
  pointa.m_quad.m128_f32[3] = 0.0;
  rotationa.m_vec.m_quad = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM0, _XMM4), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM5);
  switch ( (int)v10 )
  {
    case 0:
      Profile_Begin(722);
      break;
    case 1:
      Profile_Begin(723);
      break;
    case 2:
    case 5:
      Profile_Begin(724);
      break;
    case 3:
    case 6:
      Profile_Begin(725);
      break;
    case 4:
    case 7:
      Profile_Begin(726);
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9146, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown world id") )
        __debugbreak();
      break;
  }
  HavokPhysics_GetClosestPoints((Physics_WorldId)v10, shape, &pointa, &rotationa, 0.03125 * maxDistance, extendedData, result);
  Profile_EndInternal(NULL);
}

/*
==============
Physics_GetConstraintBodyIds
==============
*/
void Physics_GetConstraintBodyIds(Physics_WorldId worldId, unsigned int constraintId, unsigned int *bodyIdA, unsigned int *bodyIdB)
{
  __int64 v8; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6151, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Constraint Body Ids when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6152, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Constraint Body Ids with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( constraintId == 0x7FFFFFFF )
  {
    LODWORD(v8) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6153, ASSERT_TYPE_ASSERT, "(Physics_IsConstraintIdValid( constraintId ))", "%s\n\tPhysics: Trying to Get Constraint Body Ids with invalid Constraint in world %i", "Physics_IsConstraintIdValid( constraintId )", v8) )
      __debugbreak();
  }
  if ( !bodyIdA )
  {
    LODWORD(v8) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6154, ASSERT_TYPE_ASSERT, "(bodyIdA)", "%s\n\tPhysics: Trying to Get Constraint Body Ids with invalid BodyIDA in world %i", "bodyIdA", v8) )
      __debugbreak();
  }
  if ( !bodyIdB )
  {
    LODWORD(v8) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6155, ASSERT_TYPE_ASSERT, "(bodyIdB)", "%s\n\tPhysics: Trying to Get Constraint Body Ids with invalid BodyIDB in world %i", "bodyIdB", v8) )
      __debugbreak();
  }
  HavokPhysics_GetConstraintBodyIds(worldId, (hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant>)constraintId, (hknpBodyId *)bodyIdA, (hknpBodyId *)bodyIdB);
}

/*
==============
Physics_GetContentsFromShapeList
==============
*/
int Physics_GetContentsFromShapeList(HavokPhysicsShapeList *shapeList, unsigned int shapeIdx)
{
  __int64 v5; 
  int NumContentsInShapeList; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3958, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to GetContentsFromShapeList when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !shapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3959, ASSERT_TYPE_ASSERT, "(shapeList)", (const char *)&queryFormat, "shapeList") )
    __debugbreak();
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3873, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to GetNumContentsInShapeList when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !shapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3874, ASSERT_TYPE_ASSERT, "(shapeList)", (const char *)&queryFormat, "shapeList") )
    __debugbreak();
  if ( shapeIdx >= HavokPhysics_GetNumContentsInShapeList(shapeList) )
  {
    NumContentsInShapeList = Physics_GetNumContentsInShapeList(shapeList);
    LODWORD(v5) = shapeIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3960, ASSERT_TYPE_ASSERT, "(unsigned)( shapeIdx ) < (unsigned)( Physics_GetNumContentsInShapeList( shapeList ) )", "shapeIdx doesn't index Physics_GetNumContentsInShapeList( shapeList )\n\t%i not in [0, %i)", v5, NumContentsInShapeList) )
      __debugbreak();
  }
  return HavokPhysics_GetContentsFromShapeList(shapeList, shapeIdx);
}

/*
==============
Physics_GetDBThreadId
==============
*/
__int64 Physics_GetDBThreadId()
{
  return 7i64;
}

/*
==============
Physics_GetDebugMemorySize
==============
*/
unsigned __int64 Physics_GetDebugMemorySize()
{
  return physics_debugMemoryEnable->current.integer != 0 ? 0xC800000 : 0;
}

/*
==============
Physics_GetDecalTypeFromUserData
==============
*/
_BOOL8 Physics_GetDecalTypeFromUserData(unsigned __int64 userData)
{
  return (userData & 0x2000000000000i64) != 0;
}

/*
==============
Physics_GetDetailCollisionContents
==============
*/
int Physics_GetDetailCollisionContents(const XModelDetailCollision *detailCollision)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4371, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to get detail collision contents when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !detailCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4372, ASSERT_TYPE_ASSERT, "(detailCollision)", "%s\n\tPhysics: Trying to get detail collision contents with invalid physics asset", "detailCollision") )
    __debugbreak();
  return HavokPhysics_GetDetailCollisionContents(detailCollision);
}

/*
==============
Physics_GetDetailCollisionShape
==============
*/
const hknpShape *Physics_GetDetailCollisionShape(const XModelDetailCollision *detailCollision, int shapeIdx)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4671, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to get detail collision shape when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !detailCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4672, ASSERT_TYPE_ASSERT, "(detailCollision)", "%s\n\tPhysics: Trying to get detail collision shape with invalid detail collision", "detailCollision") )
    __debugbreak();
  return HavokPhysics_GetDetailCollisionShape(detailCollision, shapeIdx);
}

/*
==============
Physics_GetDetailCollisionShapeCount
==============
*/
int Physics_GetDetailCollisionShapeCount(const XModelDetailCollision *detailCollision)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4437, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to get detail collision shape count when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !detailCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4438, ASSERT_TYPE_ASSERT, "(detailCollision)", "%s\n\tPhysics: Trying to get detail collision shape count with invalid detail collision", "detailCollision") )
    __debugbreak();
  return HavokPhysics_GetDetailCollisionShapeCount(detailCollision);
}

/*
==============
Physics_GetDetailCollisionShapeTag
==============
*/
unsigned __int16 Physics_GetDetailCollisionShapeTag(const XModelDetailCollision *detailCollision, int shapeIdx)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4737, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to get detail collision shapetag when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !detailCollision && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4738, ASSERT_TYPE_ASSERT, "(detailCollision)", "%s\n\tPhysics: Trying to get detail collision shapetag with invalid detail collision", "detailCollision") )
    __debugbreak();
  return HavokPhysics_GetDetailCollisionShapeTag(detailCollision, shapeIdx);
}

/*
==============
Physics_GetDetailCollisionShapeTransform
==============
*/
void Physics_GetDetailCollisionShapeTransform(const XModelDetailCollision *detailCollision, int shapeIdx, vec3_t *shapePosition, vec4_t *shapeOrientationAsQuat)
{
  float v6; 
  float v7; 
  vec4_t m_quad; 
  hkQuaternionf shapeOrientationAsQuata; 
  hkVector4f shapePositiona; 

  HavokPhysics_GetDetailCollisionShapeTransform(detailCollision, shapeIdx, &shapePositiona, &shapeOrientationAsQuata);
  v6 = 32.0 * shapePositiona.m_quad.m128_f32[0];
  v7 = 32.0 * shapePositiona.m_quad.m128_f32[2];
  shapePosition->v[1] = 32.0 * shapePositiona.m_quad.m128_f32[1];
  m_quad = (vec4_t)shapeOrientationAsQuata.m_vec.m_quad;
  shapePosition->v[0] = v6;
  shapePosition->v[2] = v7;
  *shapeOrientationAsQuat = m_quad;
}

/*
==============
Physics_GetDetailHitData
==============
*/
const Physics_DetailHitData *Physics_GetDetailHitData(const HavokPhysics_CollisionQueryResult *result, int modifierIndex, int hitIndex)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8094, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to GetDetailHitData when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8095, ASSERT_TYPE_ASSERT, "(result)", "%s\n\tPhysics: Trying to GetDetailHitData for invalid result", "result") )
    __debugbreak();
  return HavokPhysics_GetDetailHitData(result, modifierIndex, hitIndex);
}

/*
==============
Physics_GetDontCollideWithClutterFromUserData
==============
*/
_BOOL8 Physics_GetDontCollideWithClutterFromUserData(unsigned __int64 userData)
{
  return (userData & 0x2000000000000000i64) != 0;
}

/*
==============
Physics_GetEntityNum
==============
*/
unsigned int Physics_GetEntityNum(int ref)
{
  int v1; 
  int v2; 
  int v3; 
  unsigned int result; 
  int v5; 
  ScriptableInstanceContext *InstanceCommonContext; 
  int v7; 
  ScriptableLinkType LinkType; 

  v1 = ref;
  v2 = (ref >> 25) & 0x1F;
  v3 = ref >> 16;
  LOWORD(result) = truncate_cast<unsigned short,int>((unsigned __int16)ref);
  switch ( v2 )
  {
    case 0:
      return 2046;
    case 1:
    case 7:
    case 11:
    case 12:
      return 2047;
    case 2:
    case 3:
    case 4:
    case 5:
    case 9:
      return (unsigned __int16)result;
    case 6:
      return Ragdoll_GetEntityNumber((unsigned __int8)v3 + 1);
    case 8:
      v5 = v1 & 0x3FFFFF;
      LOBYTE(v1) = (v1 >> 22) & 3;
      if ( !(_BYTE)v1 )
      {
        InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(v5);
        if ( InstanceCommonContext->linkedObjectType )
        {
          v7 = (unsigned __int8)InstanceCommonContext->linkedObjectType - 1;
          if ( InstanceCommonContext->linkedObjectType == SCRIPTABLE_LINK_ENTITY )
            return ScriptableSv_GetInstanceCommonContext(v5)->linkedObjectIndex;
          goto LABEL_10;
        }
        return 2046;
      }
      v1 = (unsigned __int8)v1;
      LinkType = ScriptableCl_GetLinkType((const LocalClientNum_t)((unsigned __int8)v1 - 1), v5);
      if ( LinkType == SCRIPTABLE_LINK_NONE )
        return 2046;
      v7 = (unsigned __int8)LinkType - 1;
      if ( LinkType == SCRIPTABLE_LINK_ENTITY )
        return ScriptableCl_GetLinkObject((const LocalClientNum_t)(v1 - 1), v5);
LABEL_10:
      if ( v7 == 1 )
        return 2046;
      return 2047;
    case 10:
      return (unsigned __int16)result + 2117;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5182, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Physics_GetEntityNum unknown system") )
        __debugbreak();
      return 2047;
  }
}

/*
==============
Physics_GetErrorString
==============
*/

const char *__fastcall Physics_GetErrorString()
{
  return HavokPhysics_GetErrorString();
}

/*
==============
Physics_GetFilterSubGroupIdFromUserData
==============
*/
char Physics_GetFilterSubGroupIdFromUserData(unsigned __int64 userData)
{
  return truncate_cast<char,unsigned __int64>((userData >> 50) & 0x1F);
}

/*
==============
Physics_GetFilterSubGroupIdNoCollideIdFromUserData
==============
*/
char Physics_GetFilterSubGroupIdNoCollideIdFromUserData(unsigned __int64 userData)
{
  return truncate_cast<char,unsigned __int64>((userData >> 55) & 0x1F);
}

/*
==============
Physics_GetFixedMemoryPoolUsage
==============
*/
double Physics_GetFixedMemoryPoolUsage(Physics_WorldId worldId)
{
  Physics_WorldId v3; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10350, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Fixed Memory Pool Usage when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v3 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10351, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Fixed Memory Pool Usage with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v3) )
      __debugbreak();
  }
  return HavokPhysics_GetFixedMemoryPoolUsage(worldId);
}

/*
==============
Physics_GetGlassIdFromUserData
==============
*/
__int64 Physics_GetGlassIdFromUserData(unsigned __int64 userData)
{
  return WORD2(userData);
}

/*
==============
Physics_GetHitTypeByEntId
==============
*/
__int64 Physics_GetHitTypeByEntId(const unsigned int entId)
{
  if ( entId == 2047 )
    return 0i64;
  if ( entId - 2117 <= 0x17F )
    return 6i64;
  if ( entId >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8209, ASSERT_TYPE_ASSERT, "(unsigned)( entId ) < (unsigned)( ( 2048 ) )", "entId doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entId, 2048) )
    __debugbreak();
  return 1i64;
}

/*
==============
Physics_GetInstanceAsset
==============
*/
const PhysicsAsset *Physics_GetInstanceAsset(Physics_WorldId worldId, unsigned int instanceId)
{
  __int64 v5; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5800, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Instance Asset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5801, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Instance Asset with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( instanceId == -1 )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5802, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Instance Asset with invalid instance Id in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v5) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5803, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Instance Asset in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v5) )
      __debugbreak();
  }
  if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5804, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Instance Asset in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v5) )
      __debugbreak();
  }
  return HavokPhysics_GetInstanceAsset(worldId, instanceId);
}

/*
==============
Physics_GetInstanceDetailModel
==============
*/
const XModel *Physics_GetInstanceDetailModel(Physics_WorldId worldId, unsigned int instanceId)
{
  __int64 v5; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5816, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Instance detail Asset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5817, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Instance detail Asset with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( instanceId == -1 )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5818, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Instance detail Asset with invalid instance Id in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v5) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5819, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Instance detail Asset in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v5) )
      __debugbreak();
  }
  if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5820, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Instance detail Asset in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v5) )
      __debugbreak();
  }
  return HavokPhysics_GetInstanceDetailModel(worldId, instanceId);
}

/*
==============
Physics_GetInstanceXModel
==============
*/
const XModel *Physics_GetInstanceXModel(Physics_WorldId worldId, unsigned int instanceId)
{
  __int64 v5; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5832, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Instance model Asset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5833, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Instance model Asset with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( instanceId == -1 )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5834, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Instance model Asset with invalid instance Id in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v5) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5835, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Instance model Asset in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v5) )
      __debugbreak();
  }
  if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5836, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Instance model Asset in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v5) )
      __debugbreak();
  }
  return HavokPhysics_GetInstanceXModel(worldId, instanceId);
}

/*
==============
Physics_GetInstantiatiationPenetrationDepthForAsset
==============
*/
float Physics_GetInstantiatiationPenetrationDepthForAsset(Physics_WorldId worldId, const PhysicsAsset *physicsAsset, const vec3_t *position, const vec4_t *orientationAsQuat, Physics_InstantiateShapeOverride *shapeOverride, int ignoreSystems)
{
  float v10; 
  float v11; 
  double InstantiatiationPenetrationDepthForAsset; 
  __int64 v18; 
  __int64 v19; 
  hkVector4f positiona; 
  hkQuaternionf orientation; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5456, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to get instantiation penetration depth for PhysicsAsset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5457, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to get instantiation penetration depth for Physics Asset with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( !physicsAsset )
  {
    LODWORD(v18) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5458, ASSERT_TYPE_ASSERT, "(physicsAsset)", "%s\n\tPhysics: Trying to get instantiation penetration depth for NULL Physics Asset in world %i", "physicsAsset", v18) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5459, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to get instantiation penetration depth for Physics Asset %s in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", physicsAsset->name, worldId) )
    __debugbreak();
  if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
    LODWORD(v19) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5460, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to get instantiation penetration depth for Physics Asset %s in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", physicsAsset->name, v19) )
      __debugbreak();
  }
  if ( ((LODWORD(position->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5461, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to get instantiation penetration depth for PhysicsAsset with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
    __debugbreak();
  if ( ((LODWORD(orientationAsQuat->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5462, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to get instantiation penetration depth for PhysicsAsset with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
    __debugbreak();
  if ( !shapeOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5463, ASSERT_TYPE_ASSERT, "(shapeOverride)", "%s\n\tPhysics: Trying to get instantiation penetration depth for PhysicsAsset with NULL shape override struct", "shapeOverride") )
    __debugbreak();
  v10 = 0.03125 * position->v[1];
  v11 = 0.03125 * position->v[2];
  positiona.m_quad.m128_f32[0] = 0.03125 * position->v[0];
  _XMM0 = LODWORD(orientationAsQuat->v[0]);
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rdi+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rdi+8], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rdi+0Ch], 30h ; '0'
  }
  orientation.m_vec.m_quad = _XMM0;
  positiona.m_quad.m128_f32[1] = v10;
  positiona.m_quad.m128_f32[2] = v11;
  positiona.m_quad.m128_f32[3] = 0.0;
  InstantiatiationPenetrationDepthForAsset = HavokPhysics_GetInstantiatiationPenetrationDepthForAsset(worldId, physicsAsset, &positiona, &orientation, shapeOverride, ignoreSystems);
  if ( *(float *)&InstantiatiationPenetrationDepthForAsset >= 0.0 )
    *(float *)&InstantiatiationPenetrationDepthForAsset = *(float *)&InstantiatiationPenetrationDepthForAsset * 32.0;
  return *(float *)&InstantiatiationPenetrationDepthForAsset;
}

/*
==============
Physics_GetIsClutterFromUserData
==============
*/
_BOOL8 Physics_GetIsClutterFromUserData(unsigned __int64 userData)
{
  return (userData & 0x1000000000000000i64) != 0;
}

/*
==============
Physics_GetLocalClientForWorld
==============
*/
__int64 Physics_GetLocalClientForWorld(Physics_WorldId worldId)
{
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
    if ( worldId <= PHYSICS_WORLD_ID_CLIENT0_DETAIL )
      return 0i64;
    if ( worldId <= PHYSICS_WORLD_ID_CLIENT1_DETAIL )
      return 1i64;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1787, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid world") )
      __debugbreak();
  }
  return 0xFFFFFFFFi64;
}

/*
==============
Physics_GetMainThreadId
==============
*/
__int64 Physics_GetMainThreadId()
{
  return 0i64;
}

/*
==============
Physics_GetNoBroadphaseQueriesAllowed
==============
*/
_BOOL8 Physics_GetNoBroadphaseQueriesAllowed(Physics_WorldId worldId)
{
  __int64 v1; 

  v1 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8370, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  return g_physicsBroadphaseQueriesNotAllowedForWorld[v1];
}

/*
==============
Physics_GetNoQueriesAllowed
==============
*/
_BOOL8 Physics_GetNoQueriesAllowed(Physics_WorldId worldId)
{
  __int64 v1; 

  v1 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8387, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  return g_physicsQueriesNotAllowedForWorld[v1];
}

/*
==============
Physics_GetNumContentsInShapeList
==============
*/
int Physics_GetNumContentsInShapeList(HavokPhysicsShapeList *shapeList)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3873, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to GetNumContentsInShapeList when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !shapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3874, ASSERT_TYPE_ASSERT, "(shapeList)", (const char *)&queryFormat, "shapeList") )
    __debugbreak();
  return HavokPhysics_GetNumContentsInShapeList(shapeList);
}

/*
==============
Physics_GetNumConvexCountsInShapeList
==============
*/
int Physics_GetNumConvexCountsInShapeList(HavokPhysicsShapeList *shapeList)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3929, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to GetNumConvexCountsInShapeList when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !shapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3930, ASSERT_TYPE_ASSERT, "(shapeList)", (const char *)&queryFormat, "shapeList") )
    __debugbreak();
  return HavokPhysics_GetNumConvexCountsInShapeList(shapeList);
}

/*
==============
Physics_GetNumServerRigidBodysInAsset
==============
*/
int Physics_GetNumServerRigidBodysInAsset(const PhysicsAsset *physicsAsset)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4770, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to get physics asset server body count when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !physicsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4771, ASSERT_TYPE_ASSERT, "(physicsAsset)", "%s\n\tPhysics: Trying to get physics asset server body count with invalid physics asset", "physicsAsset") )
    __debugbreak();
  return HavokPhysics_GetNumServerRigidBodysInAsset(physicsAsset);
}

/*
==============
Physics_GetNumShapeNamesInShapeList
==============
*/
int Physics_GetNumShapeNamesInShapeList(HavokPhysicsShapeList *shapeList)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3887, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to GetNumShapeNamesInShapeList when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !shapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3888, ASSERT_TYPE_ASSERT, "(shapeList)", (const char *)&queryFormat, "shapeList") )
    __debugbreak();
  return HavokPhysics_GetNumShapeNamesInShapeList(shapeList);
}

/*
==============
Physics_GetNumShapesInShapeList
==============
*/
int Physics_GetNumShapesInShapeList(HavokPhysicsShapeList *shapeList)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3859, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to GetNumShapesInShapeList when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !shapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3860, ASSERT_TYPE_ASSERT, "(shapeList)", (const char *)&queryFormat, "shapeList") )
    __debugbreak();
  return HavokPhysics_GetNumShapesInShapeList(shapeList);
}

/*
==============
Physics_GetNumTriCountsInShapeList
==============
*/
int Physics_GetNumTriCountsInShapeList(HavokPhysicsShapeList *shapeList)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3915, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to GetNumTriCountsInShapeList when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !shapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3916, ASSERT_TYPE_ASSERT, "(shapeList)", (const char *)&queryFormat, "shapeList") )
    __debugbreak();
  return HavokPhysics_GetNumTriCountsInShapeList(shapeList);
}

/*
==============
Physics_GetNumVertCountsInShapeList
==============
*/
int Physics_GetNumVertCountsInShapeList(HavokPhysicsShapeList *shapeList)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3901, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to GetNumVertCountsInShapeList when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !shapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3902, ASSERT_TYPE_ASSERT, "(shapeList)", (const char *)&queryFormat, "shapeList") )
    __debugbreak();
  return HavokPhysics_GetNumVertCountsInShapeList(shapeList);
}

/*
==============
Physics_GetPhysicsAssetBodyBounds
==============
*/
void Physics_GetPhysicsAssetBodyBounds(const PhysicsAsset *physicsAsset, int bodyIdx, vec3_t *min, vec3_t *max)
{
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  hkAabb aabb; 
  hkTransformf transform; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4601, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to get physics asset body bounds when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !physicsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4602, ASSERT_TYPE_ASSERT, "(physicsAsset)", "%s\n\tPhysics: Trying to get physics asset body bounds with invalid physics asset", "physicsAsset") )
    __debugbreak();
  if ( (bodyIdx < 0 || bodyIdx >= Physics_GetPhysicsAssetBodyCount(physicsAsset)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4603, ASSERT_TYPE_ASSERT, "(bodyIdx >= 0 && bodyIdx < Physics_GetPhysicsAssetBodyCount( physicsAsset ))", "%s\n\tPhysics: Trying to get physics asset body bounds with invalid body index", "bodyIdx >= 0 && bodyIdx < Physics_GetPhysicsAssetBodyCount( physicsAsset )") )
    __debugbreak();
  *(_QWORD *)min->v = 0i64;
  min->v[2] = 0.0;
  *(_QWORD *)max->v = 0i64;
  max->v[2] = 0.0;
  *(__m256i *)transform.m_rotation.m_col0.m_quad.m128_f32 = *(__m256i *)g_vectorfConstants[32].m128_f32;
  *(__m256i *)transform.m_rotation.m_col2.m_quad.m128_f32 = *(__m256i *)g_vectorfConstants[34].m128_f32;
  HavokPhysics_GetPhysicsAssetBodyBounds(physicsAsset, bodyIdx, &transform, &aabb);
  v8 = 32.0 * aabb.m_min.m_quad.m128_f32[1];
  v9 = 32.0 * aabb.m_min.m_quad.m128_f32[2];
  min->v[0] = 32.0 * aabb.m_min.m_quad.m128_f32[0];
  v10 = 32.0 * aabb.m_max.m_quad.m128_f32[0];
  min->v[1] = v8;
  v11 = 32.0 * aabb.m_max.m_quad.m128_f32[1];
  min->v[2] = v9;
  v12 = 32.0 * aabb.m_max.m_quad.m128_f32[2];
  max->v[0] = v10;
  max->v[1] = v11;
  max->v[2] = v12;
}

/*
==============
Physics_GetPhysicsAssetBodyCount
==============
*/
int Physics_GetPhysicsAssetBodyCount(const PhysicsAsset *physicsAsset)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4404, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to get physics asset body count when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !physicsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4405, ASSERT_TYPE_ASSERT, "(physicsAsset)", "%s\n\tPhysics: Trying to get physics asset body count with invalid physics asset", "physicsAsset") )
    __debugbreak();
  return HavokPhysics_GetPhysicsAssetBodyCount(physicsAsset);
}

/*
==============
Physics_GetPhysicsAssetBodyName
==============
*/
const char *Physics_GetPhysicsAssetBodyName(const PhysicsAsset *physicsAsset, int bodyIdx)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4470, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to get physics asset body name when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !physicsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4471, ASSERT_TYPE_ASSERT, "(physicsAsset)", "%s\n\tPhysics: Trying to get physics asset body name with invalid physics asset", "physicsAsset") )
    __debugbreak();
  if ( bodyIdx < 0 )
    goto LABEL_20;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4404, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to get physics asset body count when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !physicsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4405, ASSERT_TYPE_ASSERT, "(physicsAsset)", "%s\n\tPhysics: Trying to get physics asset body count with invalid physics asset", "physicsAsset") )
    __debugbreak();
  if ( bodyIdx >= HavokPhysics_GetPhysicsAssetBodyCount(physicsAsset) )
  {
LABEL_20:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4472, ASSERT_TYPE_ASSERT, "(bodyIdx >= 0 && bodyIdx < Physics_GetPhysicsAssetBodyCount( physicsAsset ))", "%s\n\tPhysics: Trying to get physics asset body name with invalid body index", "bodyIdx >= 0 && bodyIdx < Physics_GetPhysicsAssetBodyCount( physicsAsset )") )
      __debugbreak();
  }
  return HavokPhysics_GetPhysicsAssetBodyName(physicsAsset, bodyIdx);
}

/*
==============
Physics_GetPhysicsAssetBodyTransform
==============
*/
void Physics_GetPhysicsAssetBodyTransform(const PhysicsAsset *physicsAsset, int bodyIdx, vec3_t *bodyPosition, vec4_t *bodyOrientationAsQuat)
{
  float v6; 
  float v7; 
  vec4_t m_quad; 
  hkQuaternionf bodyOrientationAsQuata; 
  hkVector4f bodyPositiona; 

  HavokPhysics_GetPhysicsAssetBodyTransform(physicsAsset, bodyIdx, &bodyPositiona, &bodyOrientationAsQuata);
  v6 = 32.0 * bodyPositiona.m_quad.m128_f32[0];
  v7 = 32.0 * bodyPositiona.m_quad.m128_f32[2];
  bodyPosition->v[1] = 32.0 * bodyPositiona.m_quad.m128_f32[1];
  m_quad = (vec4_t)bodyOrientationAsQuata.m_vec.m_quad;
  bodyPosition->v[0] = v6;
  bodyPosition->v[2] = v7;
  *bodyOrientationAsQuat = m_quad;
}

/*
==============
Physics_GetPhysicsAssetConstraintBodyIds
==============
*/
void Physics_GetPhysicsAssetConstraintBodyIds(const PhysicsAsset *physicsAsset, int constraintIdx, int *bodyId1, int *bodyId2)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4563, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to get physics asset constraint body ids when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !physicsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4564, ASSERT_TYPE_ASSERT, "(physicsAsset)", "%s\n\tPhysics: Trying to get physics asset constraint body ids with invalid physics asset", "physicsAsset") )
    __debugbreak();
  if ( (constraintIdx < 0 || constraintIdx >= Physics_GetPhysicsAssetBodyCount(physicsAsset)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4565, ASSERT_TYPE_ASSERT, "(constraintIdx >= 0 && constraintIdx < Physics_GetPhysicsAssetBodyCount( physicsAsset ))", "%s\n\tPhysics: Trying to get physics asset constraint body ids with invalid constraint index", "constraintIdx >= 0 && constraintIdx < Physics_GetPhysicsAssetBodyCount( physicsAsset )") )
    __debugbreak();
  if ( !bodyId1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4566, ASSERT_TYPE_ASSERT, "(bodyId1)", "%s\n\tPhysics: Trying to get physics asset constraint body ids with invalid bodyId1", "bodyId1") )
    __debugbreak();
  if ( !bodyId2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4567, ASSERT_TYPE_ASSERT, "(bodyId2)", "%s\n\tPhysics: Trying to get physics asset constraint body ids with invalid bodyId2", "bodyId2") )
    __debugbreak();
  *bodyId1 = 0;
  *bodyId2 = 0;
  HavokPhysics_GetPhysicsAssetConstraintBodyIds(physicsAsset, constraintIdx, bodyId1, bodyId2);
}

/*
==============
Physics_GetPhysicsAssetConstraintCount
==============
*/
int Physics_GetPhysicsAssetConstraintCount(const PhysicsAsset *physicsAsset)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4530, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to get physics asset constraint count when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !physicsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4531, ASSERT_TYPE_ASSERT, "(physicsAsset)", "%s\n\tPhysics: Trying to get physics asset constraint count with invalid physics asset", "physicsAsset") )
    __debugbreak();
  return HavokPhysics_GetPhysicsAssetConstraintCount(physicsAsset);
}

/*
==============
Physics_GetPhysicsAssetContents
==============
*/
int Physics_GetPhysicsAssetContents(const PhysicsAsset *physicsAsset)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4358, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to get physics asset contents when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !physicsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4359, ASSERT_TYPE_ASSERT, "(physicsAsset)", "%s\n\tPhysics: Trying to get physics asset contents with invalid physics asset", "physicsAsset") )
    __debugbreak();
  return HavokPhysics_GetPhysicsAssetContents(physicsAsset);
}

/*
==============
Physics_GetPhysicsAssetShape
==============
*/
const hknpShape *Physics_GetPhysicsAssetShape(const PhysicsAsset *physicsAsset, int bodyIdx)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4644, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to get physics asset shape when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !physicsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4645, ASSERT_TYPE_ASSERT, "(physicsAsset)", "%s\n\tPhysics: Trying to get physics asset shape with invalid physics asset", "physicsAsset") )
    __debugbreak();
  return HavokPhysics_GetPhysicsAssetShape(physicsAsset, bodyIdx);
}

/*
==============
Physics_GetPhysicsAssetShapeTag
==============
*/
unsigned __int16 Physics_GetPhysicsAssetShapeTag(const PhysicsAsset *physicsAsset, int bodyIdx)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4704, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to get physics asset shapetag when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !physicsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4705, ASSERT_TYPE_ASSERT, "(physicsAsset)", "%s\n\tPhysics: Trying to get physics asset shapetag with invalid physics asset", "physicsAsset") )
    __debugbreak();
  return HavokPhysics_GetPhysicsAssetShapeTag(physicsAsset, bodyIdx);
}

/*
==============
Physics_GetRef
==============
*/
int Physics_GetRef(Physics_WorldId worldId, unsigned int bodyId)
{
  __int64 v5; 
  Physics_WorldId v6; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5896, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Ref when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v6 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5897, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Ref with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v6) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5898, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Ref with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v5) )
      __debugbreak();
  }
  return HavokPhysics_GetRef(worldId, (hknpBodyId)bodyId);
}

/*
==============
Physics_GetRefDetailFlag
==============
*/
bool Physics_GetRefDetailFlag(int ref)
{
  return (ref & 0xC0000000) != 0;
}

/*
==============
Physics_GetRefEntityType
==============
*/
__int64 Physics_GetRefEntityType(Physics_WorldId worldId, Physics_RefSystem refSystem, int ref)
{
  __int32 v4; 
  __int32 v5; 
  __int32 v6; 
  __int64 v8; 
  LocalClientNum_t LocalClientForWorld; 
  __int64 v10; 
  CgEntitySystem *v11; 
  centity_t *v12; 
  int EntityNum; 
  __int64 v14; 
  gentity_s *v15; 
  __int64 v16; 
  __int64 v17; 

  v4 = refSystem - 2;
  if ( !v4 || (v5 = v4 - 1) == 0 )
  {
LABEL_22:
    EntityNum = Physics_GetEntityNum(ref);
    v14 = EntityNum;
    if ( (unsigned int)EntityNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", EntityNum, 2048) )
      __debugbreak();
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v15 = &g_entities[v14];
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4941, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
      __debugbreak();
    return (unsigned __int16)v15->s.eType;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    if ( v6 != 5 )
      return 0i64;
    goto LABEL_22;
  }
  v8 = Physics_GetEntityNum(ref);
  LocalClientForWorld = Physics_GetLocalClientForWorld(worldId);
  v10 = LocalClientForWorld;
  if ( !(_BYTE)CgEntitySystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", LocalClientForWorld) )
    __debugbreak();
  if ( (unsigned int)v10 >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v17) = CgEntitySystem::ms_allocatedCount;
    LODWORD(v16) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[v10] )
  {
    LODWORD(v17) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v17) )
      __debugbreak();
  }
  v11 = CgEntitySystem::ms_entitySystemArray[v10];
  if ( (unsigned int)v8 >= 0x800 )
  {
    LODWORD(v17) = 2048;
    LODWORD(v16) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  v12 = &v11->m_entities[v8];
  if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4952, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  return v12->pose.eType;
}

/*
==============
Physics_GetRefId
==============
*/
unsigned __int16 Physics_GetRefId(int ref)
{
  return truncate_cast<unsigned short,int>((unsigned __int16)ref);
}

/*
==============
Physics_GetRefSubSystem
==============
*/
__int64 Physics_GetRefSubSystem(int ref)
{
  return BYTE2(ref);
}

/*
==============
Physics_GetRefSystem
==============
*/
__int64 Physics_GetRefSystem(int ref)
{
  return (ref >> 25) & 0x1F;
}

/*
==============
Physics_GetRelationshipSystem
==============
*/
__int64 Physics_GetRelationshipSystem(int ref)
{
  return (ref >> 24) & 1;
}

/*
==============
Physics_GetRendererThreadId
==============
*/
__int64 Physics_GetRendererThreadId()
{
  return 1i64;
}

/*
==============
Physics_GetRigidBodyAABB
==============
*/
void Physics_GetRigidBodyAABB(Physics_WorldId worldId, unsigned int bodyId, vec3_t *aabbMin, vec3_t *aabbMax)
{
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  __int64 v13; 
  Physics_WorldId v14; 
  hkAabb aabb; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6252, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body aabb when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v14 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6253, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body aabb with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v14) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v13) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6254, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body aabb with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v13) )
      __debugbreak();
  }
  if ( aabbMin == aabbMax )
  {
    LODWORD(v13) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6255, ASSERT_TYPE_ASSERT, "(&aabbMin != &aabbMax)", "%s\n\tPhysics: Trying to Get Rigid Body aabb in world %i with aabbMin == aabbMax", "&aabbMin != &aabbMax", v13) )
      __debugbreak();
  }
  HavokPhysics_GetRigidBodyAABB(worldId, (hknpBodyId)bodyId, &aabb, 1);
  v8 = 32.0 * aabb.m_min.m_quad.m128_f32[1];
  v9 = 32.0 * aabb.m_min.m_quad.m128_f32[2];
  aabbMin->v[0] = 32.0 * aabb.m_min.m_quad.m128_f32[0];
  v10 = 32.0 * aabb.m_max.m_quad.m128_f32[0];
  aabbMin->v[1] = v8;
  v11 = 32.0 * aabb.m_max.m_quad.m128_f32[1];
  aabbMin->v[2] = v9;
  v12 = 32.0 * aabb.m_max.m_quad.m128_f32[2];
  aabbMax->v[0] = v10;
  aabbMax->v[1] = v11;
  aabbMax->v[2] = v12;
}

/*
==============
Physics_GetRigidBodyAABB
==============
*/
void Physics_GetRigidBodyAABB(Physics_WorldId worldId, unsigned int bodyId, vec3_t *aabbMin, vec3_t *aabbMax, bool worldSpace)
{
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  __int64 v14; 
  Physics_WorldId v15; 
  hkAabb aabb; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6252, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body aabb when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v15 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6253, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body aabb with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v15) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v14) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6254, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body aabb with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v14) )
      __debugbreak();
  }
  if ( aabbMin == aabbMax )
  {
    LODWORD(v14) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6255, ASSERT_TYPE_ASSERT, "(&aabbMin != &aabbMax)", "%s\n\tPhysics: Trying to Get Rigid Body aabb in world %i with aabbMin == aabbMax", "&aabbMin != &aabbMax", v14) )
      __debugbreak();
  }
  HavokPhysics_GetRigidBodyAABB(worldId, (hknpBodyId)bodyId, &aabb, worldSpace);
  v9 = 32.0 * aabb.m_min.m_quad.m128_f32[1];
  v10 = 32.0 * aabb.m_min.m_quad.m128_f32[2];
  aabbMin->v[0] = 32.0 * aabb.m_min.m_quad.m128_f32[0];
  v11 = 32.0 * aabb.m_max.m_quad.m128_f32[0];
  aabbMin->v[1] = v9;
  v12 = 32.0 * aabb.m_max.m_quad.m128_f32[1];
  aabbMin->v[2] = v10;
  v13 = 32.0 * aabb.m_max.m_quad.m128_f32[2];
  aabbMax->v[0] = v11;
  aabbMax->v[1] = v12;
  aabbMax->v[2] = v13;
}

/*
==============
Physics_GetRigidBodyCenterOfMass
==============
*/
void Physics_GetRigidBodyCenterOfMass(Physics_WorldId worldId, unsigned int bodyId, vec3_t *centerOfMass)
{
  float v6; 
  float v7; 
  __int64 v8; 
  Physics_WorldId v9; 
  hkVector4f centerOfMassa; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6213, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body CenterOfMass when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v9 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6214, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body CenterOfMass with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v9) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v8) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6215, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body CenterOfMass with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v8) )
      __debugbreak();
  }
  HavokPhysics_GetRigidBodyCenterOfMass(worldId, (hknpBodyId)bodyId, &centerOfMassa);
  v6 = 32.0 * centerOfMassa.m_quad.m128_f32[1];
  v7 = 32.0 * centerOfMassa.m_quad.m128_f32[2];
  centerOfMass->v[0] = 32.0 * centerOfMassa.m_quad.m128_f32[0];
  centerOfMass->v[1] = v6;
  centerOfMass->v[2] = v7;
}

/*
==============
Physics_GetRigidBodyCenterOfMassLocal
==============
*/
void Physics_GetRigidBodyCenterOfMassLocal(Physics_WorldId worldId, unsigned int bodyId, vec3_t *centerOfMassLocal)
{
  float v6; 
  float v7; 
  __int64 v8; 
  Physics_WorldId v9; 
  hkVector4f centerOfMassLocala; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6230, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Local Rigid Body CenterOfMass when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v9 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6231, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Local CenterOfMass with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v9) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v8) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6232, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Local CenterOfMass with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v8) )
      __debugbreak();
  }
  HavokPhysics_GetRigidBodyCenterOfMassLocal(worldId, (hknpBodyId)bodyId, &centerOfMassLocala);
  v6 = 32.0 * centerOfMassLocala.m_quad.m128_f32[1];
  v7 = 32.0 * centerOfMassLocala.m_quad.m128_f32[2];
  centerOfMassLocal->v[0] = 32.0 * centerOfMassLocala.m_quad.m128_f32[0];
  centerOfMassLocal->v[1] = v6;
  centerOfMassLocal->v[2] = v7;
}

/*
==============
Physics_GetRigidBodyContents
==============
*/
int Physics_GetRigidBodyContents(const Physics_WorldId worldId, const unsigned int bodyId)
{
  Physics_WorldId v5; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6515, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get RigidBody contents when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v5 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6516, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get RigidBody contents with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v5) )
      __debugbreak();
  }
  return HavokPhysics_GetRigidBodyContents(worldId, (const hknpBodyId)bodyId);
}

/*
==============
Physics_GetRigidBodyContents
==============
*/
int Physics_GetRigidBodyContents(const Physics_WorldId worldId, const unsigned int instanceId, const unsigned int bodyIdx)
{
  hknpBodyId v6; 
  __int64 v8; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6497, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get RigidBody contents when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6498, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get RigidBody contents with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( instanceId == -1 )
  {
    LODWORD(v8) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6499, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get RigidBody contents with invalid instance %i", "instanceId != PHYSICSINSTANCEID_INVALID", v8) )
      __debugbreak();
  }
  if ( bodyIdx >= Physics_GetNumRigidBodys(worldId, instanceId) )
  {
    LODWORD(v8) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6500, ASSERT_TYPE_ASSERT, "(bodyIdx < Physics_GetNumRigidBodys( worldId, instanceId ))", "%s\n\tPhysics: Trying to Get RigidBody contents with invalid bodyIdx %i %i", "bodyIdx < Physics_GetNumRigidBodys( worldId, instanceId )", v8, bodyIdx) )
      __debugbreak();
  }
  v6.m_serialAndIndex = Physics_GetRigidBodyID(worldId, instanceId, bodyIdx);
  if ( (v6.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6505, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
    __debugbreak();
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6515, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get RigidBody contents when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    LODWORD(v8) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6516, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get RigidBody contents with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v8) )
      __debugbreak();
  }
  return HavokPhysics_GetRigidBodyContents(worldId, v6);
}

/*
==============
Physics_GetRigidBodyDefaultMass
==============
*/
double Physics_GetRigidBodyDefaultMass(Physics_WorldId worldId, const PhysicsAsset *physAsset)
{
  __int64 v5; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6183, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Default Mass when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6184, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Default Mass with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( !physAsset )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6185, ASSERT_TYPE_ASSERT, "(physAsset)", "%s\n\tPhysics: Trying to Get Rigid Body Default Mass in world %i with invalid physics asset", "physAsset", v5) )
      __debugbreak();
  }
  return HavokPhysics_GetRigidBodyDefaultMass(worldId, physAsset);
}

/*
==============
Physics_GetRigidBodyDynamicMass
==============
*/
void Physics_GetRigidBodyDynamicMass(Physics_WorldId worldId, unsigned int bodyId, float *mass)
{
  __int64 v6; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6197, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Dynamic Mass when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6198, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Dynamic Mass with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v6) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6199, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Dynamic Mass with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v6) )
      __debugbreak();
  }
  if ( !mass )
  {
    LODWORD(v6) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6200, ASSERT_TYPE_ASSERT, "(mass)", "%s\n\tPhysics: Trying to Get Rigid Body Dynamic Mass in world %i with invalid mass", "mass", v6) )
      __debugbreak();
  }
  HavokPhysics_GetRigidBodyDynamicMass(worldId, (hknpBodyId)bodyId, mass);
}

/*
==============
Physics_GetRigidBodyInverseInertiaLocal
==============
*/
void Physics_GetRigidBodyInverseInertiaLocal(Physics_WorldId worldId, unsigned int bodyId, vec4_t *invInertia)
{
  float v6; 
  float v7; 
  __int64 v8; 
  Physics_WorldId v9; 
  hkVector4f invInertiaa; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6309, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Inverse Inertia Matrix when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v9 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6310, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Inverse Inertia Matrix with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v9) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v8) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6311, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Body Inverse Inertia Matrix with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v8) )
      __debugbreak();
  }
  HavokPhysics_GetRigidBodyInverseInertiaLocal(worldId, (hknpBodyId)bodyId, &invInertiaa);
  v6 = 0.0009765625 * invInertiaa.m_quad.m128_f32[0];
  v7 = 0.0009765625 * invInertiaa.m_quad.m128_f32[2];
  invInertia->v[1] = 0.0009765625 * invInertiaa.m_quad.m128_f32[1];
  invInertia->v[3] = invInertiaa.m_quad.m128_f32[3];
  invInertia->v[0] = v6;
  invInertia->v[2] = v7;
}

/*
==============
Physics_GetRigidBodyMass
==============
*/
void Physics_GetRigidBodyMass(Physics_WorldId worldId, unsigned int bodyId, float *mass)
{
  __int64 v6; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6168, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Mass when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6169, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid BodyMass with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v6) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6170, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Mass with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v6) )
      __debugbreak();
  }
  if ( !mass )
  {
    LODWORD(v6) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6171, ASSERT_TYPE_ASSERT, "(mass)", "%s\n\tPhysics: Trying to Get Rigid Body Mass in world %i with invalid mass", "mass", v6) )
      __debugbreak();
  }
  HavokPhysics_GetRigidBodyMass(worldId, (hknpBodyId)bodyId, mass);
}

/*
==============
Physics_GetRigidBodyMaxAngSpeed
==============
*/
void Physics_GetRigidBodyMaxAngSpeed(Physics_WorldId worldId, unsigned int bodyId, float *maxAngSpeed)
{
  __int64 v6; 
  float maxAngSpeeda; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6096, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Max AngSpeed when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6097, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Max AngSpeed with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v6) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6098, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Max AngSpeed with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v6) )
      __debugbreak();
  }
  if ( !maxAngSpeed )
  {
    LODWORD(v6) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6099, ASSERT_TYPE_ASSERT, "(maxAngSpeed)", "%s\n\tPhysics: Trying to Get Rigid Body Max AngSpeed in world %i with invalid maxAngSpeed", "maxAngSpeed", v6) )
      __debugbreak();
  }
  HavokPhysics_GetRigidBodyMaxAngSpeed(worldId, (hknpBodyId)bodyId, &maxAngSpeeda);
  *maxAngSpeed = maxAngSpeeda;
}

/*
==============
Physics_GetRigidBodyMaxLinAngSpeed
==============
*/
void Physics_GetRigidBodyMaxLinAngSpeed(Physics_WorldId worldId, unsigned int bodyId, float *maxLinSpeed, float *maxAngSpeed)
{
  float v8; 
  __int64 v9; 
  float maxLinSpeeda; 
  float maxAngSpeeda; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6114, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Max LinAngSpeed when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6115, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Max LinAngSpeed with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v9) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6116, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Max LinAngSpeed with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v9) )
      __debugbreak();
  }
  if ( !maxLinSpeed )
  {
    LODWORD(v9) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6117, ASSERT_TYPE_ASSERT, "(maxLinSpeed)", "%s\n\tPhysics: Trying to Get Rigid Body Max LinAngSpeed in world %i with invalid maxLinSpeed", "maxLinSpeed", v9) )
      __debugbreak();
  }
  if ( !maxAngSpeed )
  {
    LODWORD(v9) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6118, ASSERT_TYPE_ASSERT, "(maxAngSpeed)", "%s\n\tPhysics: Trying to Get Rigid Body Max LinAngSpeed in world %i with invalid maxAngSpeed", "maxAngSpeed", v9) )
      __debugbreak();
  }
  HavokPhysics_GetRigidBodyMaxLinAngSpeed(worldId, (hknpBodyId)bodyId, &maxLinSpeeda, &maxAngSpeeda);
  v8 = maxAngSpeeda;
  *maxLinSpeed = maxLinSpeeda * 32.0;
  *maxAngSpeed = v8;
}

/*
==============
Physics_GetRigidBodyMaxLinSpeed
==============
*/
void Physics_GetRigidBodyMaxLinSpeed(Physics_WorldId worldId, unsigned int bodyId, float *maxLinSpeed)
{
  __int64 v6; 
  float maxLinSpeeda; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6078, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Max LinSpeed when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6079, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Max LinSpeed with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v6) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6080, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Max LinSpeed with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v6) )
      __debugbreak();
  }
  if ( !maxLinSpeed )
  {
    LODWORD(v6) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6081, ASSERT_TYPE_ASSERT, "(maxLinSpeed)", "%s\n\tPhysics: Trying to Get Rigid Body Max LinSpeed in world %i with invalid maxLinSpeed", "maxLinSpeed", v6) )
      __debugbreak();
  }
  HavokPhysics_GetRigidBodyMaxLinSpeed(worldId, (hknpBodyId)bodyId, &maxLinSpeeda);
  *maxLinSpeed = maxLinSpeeda * 32.0;
}

/*
==============
Physics_GetRigidBodyName
==============
*/
const char *Physics_GetRigidBodyName(Physics_WorldId worldId, unsigned int bodyId)
{
  __int64 v5; 
  Physics_WorldId v6; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6136, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Name when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v6 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6137, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body Name with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v6) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6138, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Name with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v5) )
      __debugbreak();
  }
  return HavokPhysics_GetRigidBodyName(worldId, (hknpBodyId)bodyId);
}

/*
==============
Physics_GetRigidBodyTransformAfterWarpInstanceTo
==============
*/
void Physics_GetRigidBodyTransformAfterWarpInstanceTo(Physics_WorldId worldId, unsigned int instanceId, unsigned int bodyId, const vec3_t *instancePosition, const vec4_t *instanceOrientationAsQuat, vec3_t *bodyPosition, vec4_t *bodyOrientationAsQuat)
{
  float v11; 
  float v12; 
  float v17; 
  float v18; 
  vec4_t m_quad; 
  hkQuaternionf *hkBodyOrientation; 
  hkVector4f hkInstancePosition; 
  hkQuaternionf v22; 
  hkVector4f hkBodyPosition; 
  hkQuaternionf hkInstanceOrientation; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6762, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get RigidBody Transform after Warp Instance when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6763, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get RigidBody Transform after Warp Instance with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( instanceId == -1 )
  {
    LODWORD(hkBodyOrientation) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6764, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get RigidBody Transform after Warp Instance with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", hkBodyOrientation) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(hkBodyOrientation) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6765, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get RigidBody Transform after Warp Instance with invalid body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", hkBodyOrientation) )
      __debugbreak();
  }
  if ( ((LODWORD(instancePosition->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(instancePosition->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(instancePosition->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6766, ASSERT_TYPE_ASSERT, "(!IS_NAN( instancePosition[0] ) && !IS_NAN( instancePosition[1] ) && !IS_NAN( instancePosition[2] ))", "%s\n\tPhysics: Trying to Get RigidBody Transform after Warp Instance with invalid instance position", "!IS_NAN( instancePosition[0] ) && !IS_NAN( instancePosition[1] ) && !IS_NAN( instancePosition[2] )") )
    __debugbreak();
  if ( ((LODWORD(instanceOrientationAsQuat->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(instanceOrientationAsQuat->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(instanceOrientationAsQuat->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(instanceOrientationAsQuat->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6767, ASSERT_TYPE_ASSERT, "(!IS_NAN( instanceOrientationAsQuat[0] ) && !IS_NAN( instanceOrientationAsQuat[1] ) && !IS_NAN( instanceOrientationAsQuat[2] ) && !IS_NAN( instanceOrientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Get RigidBody Transform after Warp Instance with invalid instance orientation", "!IS_NAN( instanceOrientationAsQuat[0] ) && !IS_NAN( instanceOrientationAsQuat[1] ) && !IS_NAN( instanceOrientationAsQuat[2] ) && !IS_NAN( instanceOrientationAsQuat[3] )") )
    __debugbreak();
  v11 = 0.03125 * instancePosition->v[1];
  v12 = 0.03125 * instancePosition->v[2];
  hkInstancePosition.m_quad.m128_f32[0] = 0.03125 * instancePosition->v[0];
  _XMM0 = LODWORD(instanceOrientationAsQuat->v[0]);
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rbx+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rbx+8], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rbx+0Ch], 30h ; '0'
  }
  hkInstancePosition.m_quad.m128_f32[1] = v11;
  hkInstanceOrientation.m_vec.m_quad = _XMM0;
  hkInstancePosition.m_quad.m128_f32[2] = v12;
  hkInstancePosition.m_quad.m128_f32[3] = 0.0;
  HavokPhysics_GetRigidBodyTransformAfterWarpInstanceTo(worldId, instanceId, (hknpBodyId)bodyId, &hkInstancePosition, &hkInstanceOrientation, &hkBodyPosition, &v22);
  v17 = 32.0 * hkBodyPosition.m_quad.m128_f32[0];
  v18 = 32.0 * hkBodyPosition.m_quad.m128_f32[2];
  bodyPosition->v[1] = 32.0 * hkBodyPosition.m_quad.m128_f32[1];
  m_quad = (vec4_t)v22.m_vec.m_quad;
  bodyPosition->v[0] = v17;
  bodyPosition->v[2] = v18;
  *bodyOrientationAsQuat = m_quad;
}

/*
==============
Physics_GetSFXEventAsset
==============
*/

int __fastcall Physics_GetSFXEventAsset(Physics_WorldId worldId, unsigned int bodyId0, unsigned int bodyId1, PhysicsSFXEventAsset **asset)
{
  return HavokPhysics_GetSFXEventAsset(worldId, (hknpBodyId)bodyId0, (hknpBodyId)bodyId1, asset);
}

/*
==============
Physics_GetSaveGameSecondarySaveStateThreadId
==============
*/
__int64 Physics_GetSaveGameSecondarySaveStateThreadId()
{
  return 17i64;
}

/*
==============
Physics_GetServerThreadId
==============
*/
__int64 Physics_GetServerThreadId()
{
  return 5i64;
}

/*
==============
Physics_GetShape
==============
*/
hknpShape *Physics_GetShape(Physics_WorldId worldId, unsigned int bodyId)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9887, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to GetShape when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  return HavokPhysics_GetShape(worldId, (hknpBodyId)bodyId);
}

/*
==============
Physics_GetShapeConvexCountFromShapeList
==============
*/
int Physics_GetShapeConvexCountFromShapeList(HavokPhysicsShapeList *shapeList, unsigned int shapeIdx)
{
  __int64 v5; 
  int NumConvexCountsInShapeList; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4018, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to GetShapeConvexCountFromShapeList when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !shapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4019, ASSERT_TYPE_ASSERT, "(shapeList)", (const char *)&queryFormat, "shapeList") )
    __debugbreak();
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3929, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to GetNumConvexCountsInShapeList when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !shapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3930, ASSERT_TYPE_ASSERT, "(shapeList)", (const char *)&queryFormat, "shapeList") )
    __debugbreak();
  if ( shapeIdx >= HavokPhysics_GetNumConvexCountsInShapeList(shapeList) )
  {
    NumConvexCountsInShapeList = Physics_GetNumConvexCountsInShapeList(shapeList);
    LODWORD(v5) = shapeIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4020, ASSERT_TYPE_ASSERT, "(unsigned)( shapeIdx ) < (unsigned)( Physics_GetNumConvexCountsInShapeList( shapeList ) )", "shapeIdx doesn't index Physics_GetNumConvexCountsInShapeList( shapeList )\n\t%i not in [0, %i)", v5, NumConvexCountsInShapeList) )
      __debugbreak();
  }
  return HavokPhysics_GetShapeConvexCountFromShapeList(shapeList, shapeIdx);
}

/*
==============
Physics_GetShapeFromShapeList
==============
*/
hknpShape *Physics_GetShapeFromShapeList(HavokPhysicsShapeList *shapeList, unsigned int shapeIdx)
{
  __int64 v5; 
  int NumShapesInShapeList; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3943, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to GetShapeFromShapeList when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !shapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3944, ASSERT_TYPE_ASSERT, "(shapeList)", (const char *)&queryFormat, "shapeList") )
    __debugbreak();
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3859, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to GetNumShapesInShapeList when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !shapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3860, ASSERT_TYPE_ASSERT, "(shapeList)", (const char *)&queryFormat, "shapeList") )
    __debugbreak();
  if ( shapeIdx >= HavokPhysics_GetNumShapesInShapeList(shapeList) )
  {
    NumShapesInShapeList = Physics_GetNumShapesInShapeList(shapeList);
    LODWORD(v5) = shapeIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3945, ASSERT_TYPE_ASSERT, "(unsigned)( shapeIdx ) < (unsigned)( Physics_GetNumShapesInShapeList( shapeList ) )", "shapeIdx doesn't index Physics_GetNumShapesInShapeList( shapeList )\n\t%i not in [0, %i)", v5, NumShapesInShapeList) )
      __debugbreak();
  }
  return HavokPhysics_GetShapeFromShapeList(shapeList, shapeIdx);
}

/*
==============
Physics_GetShapeNameFromShapeList
==============
*/
const char *Physics_GetShapeNameFromShapeList(HavokPhysicsShapeList *shapeList, unsigned int shapeIdx)
{
  __int64 v5; 
  int NumShapeNamesInShapeList; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3973, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to GetShapeNameFromShapeList when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !shapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3974, ASSERT_TYPE_ASSERT, "(shapeList)", (const char *)&queryFormat, "shapeList") )
    __debugbreak();
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3887, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to GetNumShapeNamesInShapeList when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !shapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3888, ASSERT_TYPE_ASSERT, "(shapeList)", (const char *)&queryFormat, "shapeList") )
    __debugbreak();
  if ( shapeIdx >= HavokPhysics_GetNumShapeNamesInShapeList(shapeList) )
  {
    NumShapeNamesInShapeList = Physics_GetNumShapeNamesInShapeList(shapeList);
    LODWORD(v5) = shapeIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3975, ASSERT_TYPE_ASSERT, "(unsigned)( shapeIdx ) < (unsigned)( Physics_GetNumShapeNamesInShapeList( shapeList ) )", "shapeIdx doesn't index Physics_GetNumShapeNamesInShapeList( shapeList )\n\t%i not in [0, %i)", v5, NumShapeNamesInShapeList) )
      __debugbreak();
  }
  return HavokPhysics_GetShapeNameFromShapeList(shapeList, shapeIdx);
}

/*
==============
Physics_GetShapeOverrideContents
==============
*/
int Physics_GetShapeOverrideContents(int shapeOverride)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5193, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to GetShapeOverrideContents when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  return HavokPhysics_GetShapeOverrideContents(shapeOverride);
}

/*
==============
Physics_GetShapeTriCountFromShapeList
==============
*/
int Physics_GetShapeTriCountFromShapeList(HavokPhysicsShapeList *shapeList, unsigned int shapeIdx)
{
  __int64 v5; 
  int NumTriCountsInShapeList; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4003, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to GetShapeTriCountFromShapeList when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !shapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4004, ASSERT_TYPE_ASSERT, "(shapeList)", (const char *)&queryFormat, "shapeList") )
    __debugbreak();
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3915, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to GetNumTriCountsInShapeList when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !shapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3916, ASSERT_TYPE_ASSERT, "(shapeList)", (const char *)&queryFormat, "shapeList") )
    __debugbreak();
  if ( shapeIdx >= HavokPhysics_GetNumTriCountsInShapeList(shapeList) )
  {
    NumTriCountsInShapeList = Physics_GetNumTriCountsInShapeList(shapeList);
    LODWORD(v5) = shapeIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4005, ASSERT_TYPE_ASSERT, "(unsigned)( shapeIdx ) < (unsigned)( Physics_GetNumTriCountsInShapeList( shapeList ) )", "shapeIdx doesn't index Physics_GetNumTriCountsInShapeList( shapeList )\n\t%i not in [0, %i)", v5, NumTriCountsInShapeList) )
      __debugbreak();
  }
  return HavokPhysics_GetShapeTriCountFromShapeList(shapeList, shapeIdx);
}

/*
==============
Physics_GetShapeTypeName
==============
*/
const char *Physics_GetShapeTypeName(const hknpShape *shape)
{
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10276, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  return HavokPhysics_GetShapeTypeName(shape);
}

/*
==============
Physics_GetShapeUserData
==============
*/
unsigned __int64 Physics_GetShapeUserData(hknpShape *inShape)
{
  if ( !inShape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4031, ASSERT_TYPE_ASSERT, "(inShape)", (const char *)&queryFormat, "inShape") )
    __debugbreak();
  return HavokPhysics_GetShapeUserData(inShape);
}

/*
==============
Physics_GetShapeVertCountFromShapeList
==============
*/
int Physics_GetShapeVertCountFromShapeList(HavokPhysicsShapeList *shapeList, unsigned int shapeIdx)
{
  __int64 v5; 
  int NumVertCountsInShapeList; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3988, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to GetShapeVertCountFromShapeList when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !shapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3989, ASSERT_TYPE_ASSERT, "(shapeList)", (const char *)&queryFormat, "shapeList") )
    __debugbreak();
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3901, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to GetNumVertCountsInShapeList when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !shapeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3902, ASSERT_TYPE_ASSERT, "(shapeList)", (const char *)&queryFormat, "shapeList") )
    __debugbreak();
  if ( shapeIdx >= HavokPhysics_GetNumVertCountsInShapeList(shapeList) )
  {
    NumVertCountsInShapeList = Physics_GetNumVertCountsInShapeList(shapeList);
    LODWORD(v5) = shapeIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3990, ASSERT_TYPE_ASSERT, "(unsigned)( shapeIdx ) < (unsigned)( Physics_GetNumVertCountsInShapeList( shapeList ) )", "shapeIdx doesn't index Physics_GetNumVertCountsInShapeList( shapeList )\n\t%i not in [0, %i)", v5, NumVertCountsInShapeList) )
      __debugbreak();
  }
  return HavokPhysics_GetShapeVertCountFromShapeList(shapeList, shapeIdx);
}

/*
==============
Physics_GetSurfaceFlagsFromUserData
==============
*/
__int64 Physics_GetSurfaceFlagsFromUserData(unsigned __int64 userData)
{
  return (unsigned int)userData;
}

/*
==============
Physics_GetThreadId
==============
*/

unsigned int __fastcall Physics_GetThreadId()
{
  return HavokPhysics_GetThreadId();
}

/*
==============
Physics_GetVFXEventAsset
==============
*/

int __fastcall Physics_GetVFXEventAsset(Physics_WorldId worldId, unsigned int bodyId0, unsigned int bodyId1, PhysicsVFXEventAsset **asset)
{
  return HavokPhysics_GetVFXEventAsset(worldId, (hknpBodyId)bodyId0, (hknpBodyId)bodyId1, asset);
}

/*
==============
Physics_GetWireframeGeometry
==============
*/
void Physics_GetWireframeGeometry(hknpShape *shape, vec3_t *pointArray, int pointArraySize, int *numLines)
{
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10290, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  if ( !pointArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10291, ASSERT_TYPE_ASSERT, "(pointArray)", (const char *)&queryFormat, "pointArray") )
    __debugbreak();
  if ( pointArraySize <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10292, ASSERT_TYPE_ASSERT, "(pointArraySize > 0)", (const char *)&queryFormat, "pointArraySize > 0") )
    __debugbreak();
  HavokPhysics_GetWireframeGeometry(shape, pointArray, pointArraySize, numLines);
}

/*
==============
Physics_GetWorkerThreadId
==============
*/
ThreadContext Physics_GetWorkerThreadId(unsigned int index)
{
  ThreadContext result; 
  unsigned int v2; 
  unsigned int v3; 
  int v4; 

  result = Sys_GetCurrentThreadContext();
  v2 = result;
  if ( (unsigned int)result >= THREAD_CONTEXT_COUNT )
  {
    v4 = 28;
    v3 = result;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1480, ASSERT_TYPE_ASSERT, "(unsigned)( threadId ) < (unsigned)( PHYSICS_MAX_SUPPORTED_NUM_THREADS )", "threadId doesn't index PHYSICS_MAX_SUPPORTED_NUM_THREADS\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
    return v2;
  }
  return result;
}

/*
==============
Physics_GetWorldName
==============
*/
const char *Physics_GetWorldName(Physics_WorldId worldId)
{
  __int64 v1; 

  v1 = worldId;
  if ( worldId == PHYSICS_WORLD_ID_INVALID )
    return "Invalid";
  if ( (unsigned int)worldId >= PHYSICS_WORLD_ID_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 753, ASSERT_TYPE_ASSERT, "(unsigned)( worldId ) < (unsigned)( ( sizeof( *array_counter( s_Physics_WorldNames ) ) + 0 ) )", "worldId doesn't index ARRAY_COUNT( s_Physics_WorldNames )\n\t%i not in [0, %i)", worldId, 8) )
    __debugbreak();
  return s_Physics_WorldNames[v1];
}

/*
==============
Physics_HasSFXEventAsset
==============
*/

bool __fastcall Physics_HasSFXEventAsset(Physics_WorldId worldId, unsigned int bodyId)
{
  return HavokPhysics_HasSFXEventAsset(worldId, (hknpBodyId)bodyId);
}

/*
==============
Physics_HasVFXEventAsset
==============
*/

bool __fastcall Physics_HasVFXEventAsset(Physics_WorldId worldId, unsigned int bodyId)
{
  return HavokPhysics_HasVFXEventAsset(worldId, (hknpBodyId)bodyId);
}

/*
==============
Physics_HavokTriggerVolumeEvent
==============
*/
void Physics_HavokTriggerVolumeEvent(const hknpEventHandlerInput *input, const hknpEvent *event)
{
  unsigned __int8 m_filterBits; 
  bool v5; 
  Physics_WorldId WorldId; 
  __int64 m_bodiesAreReversed; 
  Physics_WorldId v8; 
  unsigned int v9; 
  unsigned int v10; 

  m_filterBits = event[3].m_filterBits;
  v5 = m_filterBits == 0;
  if ( m_filterBits <= 1u )
  {
    WorldId = HavokPhysics_GetWorldId(input->m_world);
    m_bodiesAreReversed = input->m_bodiesAreReversed;
    v8 = WorldId;
    v9 = *((_DWORD *)&event[1].m_filterBits + m_bodiesAreReversed);
    v10 = *((_DWORD *)&event[1].m_filterBits + (unsigned int)(1 - m_bodiesAreReversed));
    if ( (v9 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10320, ASSERT_TYPE_ASSERT, "( triggerId.isValid() )", (const char *)&queryFormat, "triggerId.isValid()") )
      __debugbreak();
    if ( (v10 & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10321, ASSERT_TYPE_ASSERT, "( triggeringId.isValid() )", (const char *)&queryFormat, "triggeringId.isValid()") )
      __debugbreak();
    PhysicsVolume_TriggerEvent(v8, v9, v10, v5);
  }
}

/*
==============
Physics_Init
==============
*/
void Physics_Init(void)
{
  unsigned int v0; 
  char *v1; 
  const dvar_t *v2; 
  int integer; 

  if ( g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1370, ASSERT_TYPE_ASSERT, "(!g_physicsInitialized)", "%s\n\tPhysics: Trying to initialize twice", "!g_physicsInitialized") )
    __debugbreak();
  *(_QWORD *)g_physicsBroadphaseQueriesNotAllowedForWorld = 0i64;
  *(_QWORD *)g_physicsQueriesNotAllowedForWorld = 0i64;
  *(_QWORD *)g_physicsBroadphaseRefreshNeeded = 0i64;
  Physics_SetupDvars();
  PhysicsCharacterProxy_Init();
  PhysicsCoverWall_Init();
  PMem_BeginAlloc(s_physicsPMemName, PMEM_STACK_GAME);
  if ( s_physicsGeneralMemoryBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1269, ASSERT_TYPE_ASSERT, "(s_physicsGeneralMemoryBuffer == nullptr)", (const char *)&queryFormat, "s_physicsGeneralMemoryBuffer == nullptr") )
    __debugbreak();
  s_physicsGeneralBufferSize = 88080384;
  if ( Mem_Paged_GetDevMemorySize() > 0x3200000 || Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO )
  {
    v0 = s_physicsGeneralBufferSize + 52428800;
    s_physicsGeneralBufferSize += 52428800;
  }
  else
  {
    v0 = s_physicsGeneralBufferSize;
  }
  if ( physics_debugMemoryEnable->current.integer )
  {
    s_physicsGeneralBufferSize = v0 + 209715200;
    Com_Printf(20, "Physics: Enabling debug physics memory (%dMB).\n", 200i64);
  }
  else
  {
    Com_Printf(20, "Physics: Disabling debug physics memory.  Certain debug features, such as collision visualization, may not work.\n");
  }
  s_physicsGeneralMemoryBuffer = (char *)PMem_Alloc(s_physicsGeneralBufferSize, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Physics");
  s_physicsWorldPersistentBufferSizeServerMain = (char *)PMem_Alloc(0x800000ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "s_physicsWorldPersistentBufferSizeServerMain");
  v1 = (char *)PMem_Alloc(0x80000ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "s_physicsWorldPersistentBufferSizeServerDetail");
  v2 = DCONST_DVARINT_physics_ExtraClientAuthFixedMemory;
  s_physicsWorldPersistentBufferSizeServerDetail = v1;
  if ( !DCONST_DVARINT_physics_ExtraClientAuthFixedMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_ExtraClientAuthFixedMemory") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  integer = v2->current.integer;
  s_physicsWorldPersistentBufferSizeClientPredictive = (char *)PMem_Alloc(0x700000ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "s_physicsWorldPersistentBufferSizeClientPredictive");
  s_physicsWorldPersistentBufferSizeClientAuthoritative = (char *)PMem_Alloc(integer + 13631488, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "s_physicsWorldPersistentBufferSizeClientAuthoritative");
  s_physicsWorldPersistentBufferSizeClientDetail = (char *)PMem_Alloc(0x40000ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "s_physicsWorldPersistentBufferSizeClientDetail");
  G_PhysicsObject_Init();
  CG_PhysicsObject_Init();
  HavokPhysics_Init(s_physicsGeneralMemoryBuffer, s_physicsGeneralBufferSize, s_physicsGeneralBufferSize, NULL, 0);
  PhysicsQuery_Init();
  PhysicsFX_Init();
  PMem_EndAlloc(s_physicsPMemName, PMEM_STACK_GAME);
  g_physicsInitialized = 1;
}

/*
==============
Physics_InstantiateAsset
==============
*/
__int64 Physics_InstantiateAsset(Physics_WorldId worldId, const XModel *baseModel, const PhysicsAsset *physicsAsset, int ref, const vec3_t *position, const vec4_t *orientationAsQuat, bool add, bool forceAddImmediate, bool tryStartDeactivated, Physics_InstantiateShapeOverride *shapeOverride, Physics_InstantiationForceType forceType, Physics_InstantiationFilterType filterType, bool forQueryOnly)
{
  __int64 v15; 
  float v16; 
  float v17; 
  unsigned int v22; 
  void (__fastcall *v23)(Physics_WorldId); 
  __int64 v25; 
  __int64 v26; 
  hkVector4f v28; 
  hkQuaternionf orientation; 

  v15 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5336, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Instantiate PhysicsAsset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v15 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5337, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Instantiate Physics Asset with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v15) )
    __debugbreak();
  if ( !physicsAsset )
  {
    LODWORD(v25) = v15;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5338, ASSERT_TYPE_ASSERT, "(physicsAsset)", "%s\n\tPhysics: Trying to Instantiate NULL Physics Asset in world %i", "physicsAsset", v25) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(v15 - 2) <= 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5339, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Instantiate Physics Asset %s in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", physicsAsset->name, v15) )
    __debugbreak();
  if ( !g_physicsServerWorldsCreated && (unsigned int)v15 <= 1 )
  {
    LODWORD(v26) = v15;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5340, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Instantiate Physics Asset %s in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", physicsAsset->name, v26) )
      __debugbreak();
  }
  if ( ((LODWORD(position->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5341, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Instantiate PhysicsAsset with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
    __debugbreak();
  if ( ((LODWORD(orientationAsQuat->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5342, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Instantiate PhysicsAsset with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
    __debugbreak();
  if ( !shapeOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5343, ASSERT_TYPE_ASSERT, "(shapeOverride)", "%s\n\tPhysics: Trying to Instantiate PhysicsAsset with NULL shape override struct", "shapeOverride") )
    __debugbreak();
  if ( forceType >= Physics_InstantiationForceType_Count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5344, ASSERT_TYPE_ASSERT, "(IsIndexInRange( forceType, Physics_InstantiationForceType_Count ))", "%s\n\tPhysics: Trying to Instantiate PhysicsAsset with invalid forceType", "IsIndexInRange( forceType, Physics_InstantiationForceType_Count )") )
    __debugbreak();
  if ( filterType >= Physics_InstantiationFilterType_Count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5345, ASSERT_TYPE_ASSERT, "(IsIndexInRange( filterType, Physics_InstantiationFilterType_Count ))", "%s\n\tPhysics: Trying to Instantiate PhysicsAsset with invalid filterType", "IsIndexInRange( filterType, Physics_InstantiationFilterType_Count )") )
    __debugbreak();
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  v16 = 0.03125 * position->v[1];
  v17 = 0.03125 * position->v[2];
  v28.m_quad.m128_f32[0] = 0.03125 * position->v[0];
  _XMM0 = LODWORD(orientationAsQuat->v[0]);
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rdi+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rdi+8], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rdi+0Ch], 30h ; '0'
  }
  v28.m_quad.m128_f32[1] = v16;
  v28.m_quad.m128_f32[2] = v17;
  v28.m_quad.m128_f32[3] = 0.0;
  orientation.m_vec.m_quad = _XMM0;
  v22 = HavokPhysics_InstantiateAsset((Physics_WorldId)v15, baseModel, physicsAsset, ref, &v28, &orientation, add, forceAddImmediate, tryStartDeactivated, shapeOverride, forceType, filterType, forQueryOnly);
  v23 = s_physicsWorldBodyListChangedFns[v15];
  if ( v23 )
    v23((Physics_WorldId)v15);
  return v22;
}

/*
==============
Physics_InstantiateAssetBody
==============
*/
_BOOL8 Physics_InstantiateAssetBody(unsigned int instanceId, Physics_WorldId worldId, const PhysicsAsset *physicsAsset, int bodyIdx, int ref, const vec3_t *position, const vec4_t *orientationAsQuat, bool add, bool tryStartDeactivated, bool neverDeactivate, int shapeOverride, Physics_InstantiationForceType forceType, Physics_InstantiationFilterType filterType, bool forQueryOnly)
{
  __int64 v16; 
  float v18; 
  float v19; 
  bool v26; 
  void (__fastcall *v27)(Physics_WorldId); 
  hkQuaternionf *orientation; 
  __int64 v30; 
  hkVector4f v31; 
  hkQuaternionf v32; 

  v16 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5501, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Instantiate PhysicsAsset body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5502, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Instantiate Physics Asset body with invalid instance id %i", "instanceId != PHYSICSINSTANCEID_INVALID", v16) )
    __debugbreak();
  if ( (unsigned int)v16 > 7 )
  {
    LODWORD(orientation) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5503, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Instantiate Physics Asset body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", orientation) )
      __debugbreak();
  }
  if ( !physicsAsset )
  {
    LODWORD(orientation) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5504, ASSERT_TYPE_ASSERT, "(physicsAsset)", "%s\n\tPhysics: Trying to Instantiate NULL Physics Asset body in world %i", "physicsAsset", orientation) )
      __debugbreak();
  }
  if ( bodyIdx < 0 || bodyIdx >= Physics_GetPhysicsAssetBodyCount(physicsAsset) )
  {
    LODWORD(orientation) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5505, ASSERT_TYPE_ASSERT, "(bodyIdx >= 0 && bodyIdx < Physics_GetPhysicsAssetBodyCount( physicsAsset ))", "%s\n\tPhysics: Trying to Instantiate NULL Physics Asset body with invalid body Idx %i %i", "bodyIdx >= 0 && bodyIdx < Physics_GetPhysicsAssetBodyCount( physicsAsset )", orientation, bodyIdx) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(v16 - 2) <= 5 )
  {
    LODWORD(v30) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5506, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Instantiate Physics Asset body %s in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", physicsAsset->name, v30) )
      __debugbreak();
  }
  if ( !g_physicsServerWorldsCreated && (unsigned int)v16 <= 1 )
  {
    LODWORD(v30) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5507, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Instantiate Physics Asset body %s in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", physicsAsset->name, v30) )
      __debugbreak();
  }
  if ( ((LODWORD(position->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5508, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Instantiate PhysicsAsset body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
    __debugbreak();
  if ( ((LODWORD(orientationAsQuat->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5509, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Instantiate PhysicsAsset body with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
    __debugbreak();
  if ( forceType >= Physics_InstantiationForceType_Count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5510, ASSERT_TYPE_ASSERT, "(IsIndexInRange( forceType, Physics_InstantiationForceType_Count ))", "%s\n\tPhysics: Trying to Instantiate PhysicsAsset body with invalid forceType", "IsIndexInRange( forceType, Physics_InstantiationForceType_Count )") )
    __debugbreak();
  if ( filterType >= Physics_InstantiationFilterType_Count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5511, ASSERT_TYPE_ASSERT, "(IsIndexInRange( filterType, Physics_InstantiationFilterType_Count ))", "%s\n\tPhysics: Trying to Instantiate PhysicsAsset body with invalid filterType", "IsIndexInRange( filterType, Physics_InstantiationFilterType_Count )") )
    __debugbreak();
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  Physics_LockWorld((Physics_WorldId)v16);
  v18 = 0.03125 * position->v[1];
  v19 = 0.03125 * position->v[2];
  _XMM5 = LODWORD(orientationAsQuat->v[0]);
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [rdi+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rdi+8], 20h ; ' '
    vinsertps xmm5, xmm5, dword ptr [rdi+0Ch], 30h ; '0'
  }
  v31.m_quad.m128_f32[0] = 0.03125 * position->v[0];
  v31.m_quad.m128_f32[1] = v18;
  __asm
  {
    vdpps   xmm0, xmm5, xmm5, 0FFh
    vrsqrtps xmm4, xmm0
  }
  v31.m_quad.m128_f32[2] = v19;
  v31.m_quad.m128_f32[3] = 0.0;
  v32.m_vec.m_quad = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM0, _XMM4), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM5);
  v26 = HavokPhysics_InstantiateAssetBody(instanceId, (Physics_WorldId)v16, physicsAsset, bodyIdx, ref, &v31, &v32, add, tryStartDeactivated, neverDeactivate, shapeOverride, forceType, filterType, forQueryOnly);
  Physics_UnlockWorld((Physics_WorldId)v16);
  v27 = s_physicsWorldBodyListChangedFns[v16];
  if ( v27 )
    v27((Physics_WorldId)v16);
  return v26;
}

/*
==============
Physics_InstantiateAssetBodyCylinder
==============
*/
_BOOL8 Physics_InstantiateAssetBodyCylinder(unsigned int instanceId, Physics_WorldId worldId, const PhysicsAsset *physicsAsset, int bodyIdx, int ref, const vec3_t *position, const vec4_t *orientationAsQuat, bool add, bool tryStartDeactivated, bool neverDeactivate, float radius, float height, Physics_InstantiationForceType forceType, Physics_InstantiationFilterType filterType, bool forQueryOnly)
{
  __int64 v17; 
  float v19; 
  float v20; 
  bool v27; 
  void (__fastcall *v28)(Physics_WorldId); 
  hkQuaternionf *orientation; 
  __int64 v31; 
  hkVector4f v32; 
  hkQuaternionf v33; 

  v17 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5621, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Instantiate PhysicsAsset body cylinder when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5622, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Instantiate Physics Asset body cylinder with invalid instance id %i", "instanceId != PHYSICSINSTANCEID_INVALID", v17) )
    __debugbreak();
  if ( (unsigned int)v17 > 7 )
  {
    LODWORD(orientation) = v17;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5623, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Instantiate Physics Asset body cylinder with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", orientation) )
      __debugbreak();
  }
  if ( !physicsAsset )
  {
    LODWORD(orientation) = v17;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5624, ASSERT_TYPE_ASSERT, "(physicsAsset)", "%s\n\tPhysics: Trying to Instantiate NULL Physics Asset body cylinder in world %i", "physicsAsset", orientation) )
      __debugbreak();
  }
  if ( bodyIdx < 0 || bodyIdx >= Physics_GetPhysicsAssetBodyCount(physicsAsset) )
  {
    LODWORD(orientation) = v17;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5625, ASSERT_TYPE_ASSERT, "(bodyIdx >= 0 && bodyIdx < Physics_GetPhysicsAssetBodyCount( physicsAsset ))", "%s\n\tPhysics: Trying to Instantiate NULL Physics Asset body cylinder with invalid body Idx %i %i", "bodyIdx >= 0 && bodyIdx < Physics_GetPhysicsAssetBodyCount( physicsAsset )", orientation, bodyIdx) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(v17 - 2) <= 5 )
  {
    LODWORD(v31) = v17;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5626, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Instantiate Physics Asset body cylinder %s in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", physicsAsset->name, v31) )
      __debugbreak();
  }
  if ( !g_physicsServerWorldsCreated && (unsigned int)v17 <= 1 )
  {
    LODWORD(v31) = v17;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5627, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Instantiate Physics Asset body cylinder %s in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", physicsAsset->name, v31) )
      __debugbreak();
  }
  if ( ((LODWORD(position->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5628, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Instantiate PhysicsAsset body cylinder with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
    __debugbreak();
  if ( ((LODWORD(orientationAsQuat->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5629, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Instantiate PhysicsAsset body cylinder with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
    __debugbreak();
  if ( radius <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5630, ASSERT_TYPE_ASSERT, "(radius > 0.f)", "%s\n\tPhysics: Trying to Instantiate PhysicsAsset body cylinder with invalid radius %.2f", "radius > 0.f", radius) )
    __debugbreak();
  if ( height <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5631, ASSERT_TYPE_ASSERT, "(height > 0.f)", "%s\n\tPhysics: Trying to Instantiate PhysicsAsset body cylinder with invalid height %.2f", "height > 0.f", height) )
    __debugbreak();
  if ( forceType >= Physics_InstantiationForceType_Count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5632, ASSERT_TYPE_ASSERT, "(IsIndexInRange( forceType, Physics_InstantiationForceType_Count ))", "%s\n\tPhysics: Trying to Instantiate PhysicsAsset body cylinder with invalid forceType", "IsIndexInRange( forceType, Physics_InstantiationForceType_Count )") )
    __debugbreak();
  if ( filterType >= Physics_InstantiationFilterType_Count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5633, ASSERT_TYPE_ASSERT, "(IsIndexInRange( filterType, Physics_InstantiationFilterType_Count ))", "%s\n\tPhysics: Trying to Instantiate PhysicsAsset body cylinder with invalid filterType", "IsIndexInRange( filterType, Physics_InstantiationFilterType_Count )") )
    __debugbreak();
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  Physics_LockWorld((Physics_WorldId)v17);
  v19 = 0.03125 * position->v[1];
  v20 = 0.03125 * position->v[2];
  _XMM5 = LODWORD(orientationAsQuat->v[0]);
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [rdi+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rdi+8], 20h ; ' '
    vinsertps xmm5, xmm5, dword ptr [rdi+0Ch], 30h ; '0'
  }
  v32.m_quad.m128_f32[0] = 0.03125 * position->v[0];
  v32.m_quad.m128_f32[1] = v19;
  __asm
  {
    vdpps   xmm0, xmm5, xmm5, 0FFh
    vrsqrtps xmm4, xmm0
  }
  v32.m_quad.m128_f32[2] = v20;
  v32.m_quad.m128_f32[3] = 0.0;
  v33.m_vec.m_quad = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM0, _XMM4), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM5);
  v27 = HavokPhysics_InstantiateAssetBodyCylinder(instanceId, (Physics_WorldId)v17, physicsAsset, bodyIdx, ref, &v32, &v33, add, tryStartDeactivated, neverDeactivate, radius * 0.03125, height * 0.03125, forceType, filterType, forQueryOnly);
  v28 = s_physicsWorldBodyListChangedFns[v17];
  if ( v28 )
    v28((Physics_WorldId)v17);
  Physics_UnlockWorld((Physics_WorldId)v17);
  return v27;
}

/*
==============
Physics_InstantiateAssetBodySphere
==============
*/
_BOOL8 Physics_InstantiateAssetBodySphere(unsigned int instanceId, Physics_WorldId worldId, const PhysicsAsset *physicsAsset, int bodyIdx, int ref, const vec3_t *position, const vec4_t *orientationAsQuat, bool add, bool tryStartDeactivated, bool neverDeactivate, float radius, Physics_InstantiationForceType forceType, Physics_InstantiationFilterType filterType, bool forQueryOnly)
{
  __int64 v16; 
  float v18; 
  float v19; 
  bool v26; 
  void (__fastcall *v27)(Physics_WorldId); 
  hkQuaternionf *orientation; 
  __int64 v30; 
  hkVector4f v31; 
  hkQuaternionf v32; 

  v16 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5560, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Instantiate PhysicsAsset body sphere when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5561, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Instantiate Physics Asset body sphere with invalid instance id %i", "instanceId != PHYSICSINSTANCEID_INVALID", v16) )
    __debugbreak();
  if ( (unsigned int)v16 > 7 )
  {
    LODWORD(orientation) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5562, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Instantiate Physics Asset body sphere with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", orientation) )
      __debugbreak();
  }
  if ( !physicsAsset )
  {
    LODWORD(orientation) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5563, ASSERT_TYPE_ASSERT, "(physicsAsset)", "%s\n\tPhysics: Trying to Instantiate NULL Physics Asset body sphere in world %i", "physicsAsset", orientation) )
      __debugbreak();
  }
  if ( bodyIdx < 0 || bodyIdx >= Physics_GetPhysicsAssetBodyCount(physicsAsset) )
  {
    LODWORD(orientation) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5564, ASSERT_TYPE_ASSERT, "(bodyIdx >= 0 && bodyIdx < Physics_GetPhysicsAssetBodyCount( physicsAsset ))", "%s\n\tPhysics: Trying to Instantiate NULL Physics Asset body sphere with invalid body Idx %i %i", "bodyIdx >= 0 && bodyIdx < Physics_GetPhysicsAssetBodyCount( physicsAsset )", orientation, bodyIdx) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(v16 - 2) <= 5 )
  {
    LODWORD(v30) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5565, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Instantiate Physics Asset body sphere %s in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", physicsAsset->name, v30) )
      __debugbreak();
  }
  if ( !g_physicsServerWorldsCreated && (unsigned int)v16 <= 1 )
  {
    LODWORD(v30) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5566, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Instantiate Physics Asset body sphere %s in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", physicsAsset->name, v30) )
      __debugbreak();
  }
  if ( ((LODWORD(position->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5567, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Instantiate PhysicsAsset body sphere with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
    __debugbreak();
  if ( ((LODWORD(orientationAsQuat->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5568, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Instantiate PhysicsAsset body sphere with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
    __debugbreak();
  if ( radius <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5569, ASSERT_TYPE_ASSERT, "(radius > 0.f)", "%s\n\tPhysics: Trying to Instantiate PhysicsAsset body sphere with invalid radius %.2f", "radius > 0.f", radius) )
    __debugbreak();
  if ( forceType >= Physics_InstantiationForceType_Count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5570, ASSERT_TYPE_ASSERT, "(IsIndexInRange( forceType, Physics_InstantiationForceType_Count ))", "%s\n\tPhysics: Trying to Instantiate PhysicsAsset body sphere with invalid forceType", "IsIndexInRange( forceType, Physics_InstantiationForceType_Count )") )
    __debugbreak();
  if ( filterType >= Physics_InstantiationFilterType_Count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5571, ASSERT_TYPE_ASSERT, "(IsIndexInRange( filterType, Physics_InstantiationFilterType_Count ))", "%s\n\tPhysics: Trying to Instantiate PhysicsAsset body sphere with invalid filterType", "IsIndexInRange( filterType, Physics_InstantiationFilterType_Count )") )
    __debugbreak();
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  Physics_LockWorld((Physics_WorldId)v16);
  v18 = 0.03125 * position->v[1];
  v19 = 0.03125 * position->v[2];
  _XMM5 = LODWORD(orientationAsQuat->v[0]);
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [rdi+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rdi+8], 20h ; ' '
    vinsertps xmm5, xmm5, dword ptr [rdi+0Ch], 30h ; '0'
  }
  v31.m_quad.m128_f32[0] = 0.03125 * position->v[0];
  __asm
  {
    vdpps   xmm0, xmm5, xmm5, 0FFh
    vrsqrtps xmm4, xmm0
  }
  v31.m_quad.m128_f32[1] = v18;
  v31.m_quad.m128_f32[2] = v19;
  v31.m_quad.m128_f32[3] = 0.0;
  v32.m_vec.m_quad = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM0, _XMM4), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM5);
  v26 = HavokPhysics_InstantiateAssetBodySphere(instanceId, (Physics_WorldId)v16, physicsAsset, bodyIdx, ref, &v31, &v32, add, tryStartDeactivated, neverDeactivate, radius * 0.03125, forceType, filterType, forQueryOnly);
  v27 = s_physicsWorldBodyListChangedFns[v16];
  if ( v27 )
    v27((Physics_WorldId)v16);
  Physics_UnlockWorld((Physics_WorldId)v16);
  return v26;
}

/*
==============
Physics_InstantiateAssetConstraint
==============
*/
bool Physics_InstantiateAssetConstraint(unsigned int instanceId, Physics_WorldId worldId, const PhysicsAsset *physicsAsset, int constraintIdx, int instanceRef, bool deepCloneConstraintData)
{
  __int64 v11; 
  __int64 v12; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5684, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Instantiate PhysicsAsset constraint when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5685, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Instantiate Physics Asset constraint with invalid instance id %i", "instanceId != PHYSICSINSTANCEID_INVALID", worldId) )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    LODWORD(v11) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5686, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Instantiate Physics Asset constraint with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v11) )
      __debugbreak();
  }
  if ( !physicsAsset )
  {
    LODWORD(v11) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5687, ASSERT_TYPE_ASSERT, "(physicsAsset)", "%s\n\tPhysics: Trying to Instantiate NULL Physics Asset constraint in world %i", "physicsAsset", v11) )
      __debugbreak();
  }
  if ( constraintIdx < 0 )
    goto LABEL_21;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4530, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to get physics asset constraint count when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !physicsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4531, ASSERT_TYPE_ASSERT, "(physicsAsset)", "%s\n\tPhysics: Trying to get physics asset constraint count with invalid physics asset", "physicsAsset") )
    __debugbreak();
  if ( constraintIdx >= HavokPhysics_GetPhysicsAssetConstraintCount(physicsAsset) )
  {
LABEL_21:
    LODWORD(v11) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5688, ASSERT_TYPE_ASSERT, "(constraintIdx >= 0 && constraintIdx < Physics_GetPhysicsAssetConstraintCount( physicsAsset ))", "%s\n\tPhysics: Trying to Instantiate NULL Physics Asset constraint with invalid constraint Idx %i %i", "constraintIdx >= 0 && constraintIdx < Physics_GetPhysicsAssetConstraintCount( physicsAsset )", v11, constraintIdx) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
  {
    LODWORD(v12) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5689, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Instantiate Physics Asset constraint %s in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", physicsAsset->name, v12) )
      __debugbreak();
  }
  if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
    LODWORD(v12) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5690, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Instantiate Physics Asset constraint %s in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", physicsAsset->name, v12) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  return HavokPhysics_InstantiateAssetConstraint(instanceId, worldId, physicsAsset, constraintIdx, instanceRef, deepCloneConstraintData);
}

/*
==============
Physics_InstantiateDetailModel
==============
*/
__int64 Physics_InstantiateDetailModel(Physics_WorldId worldId, const XModel *detailModel, int ref, const vec3_t *position, const vec4_t *orientationAsQuat, bool add, bool tryStartDeactivated, bool forQueryOnly, bool allowSingleBodyAddToWorld)
{
  __int64 v11; 
  float v13; 
  float v14; 
  unsigned int v19; 
  void (__fastcall *v20)(Physics_WorldId); 
  __int64 v22; 
  hkVector4f positiona; 
  hkQuaternionf orientation; 

  v11 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5388, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Instantiate Detail Model when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v11 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5389, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Instantiate Detail Model with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v11) )
    __debugbreak();
  if ( !detailModel )
  {
    LODWORD(v22) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5390, ASSERT_TYPE_ASSERT, "(detailModel)", "%s\n\tPhysics: Trying to Instantiate NULL Detail Model in world %i", "detailModel", v22) )
      __debugbreak();
  }
  if ( !detailModel->detailCollision )
  {
    LODWORD(v22) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5391, ASSERT_TYPE_ASSERT, "(detailModel->detailCollision)", "%s\n\tPhysics: Trying to Instantiate Detail Model with no detail physics date in world %i", "detailModel->detailCollision", v22) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(v11 - 2) <= 5 )
  {
    LODWORD(v22) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5392, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Instantiate Detail Model in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v22) )
      __debugbreak();
  }
  if ( !g_physicsServerWorldsCreated && (unsigned int)v11 <= 1 )
  {
    LODWORD(v22) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5393, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Instantiate Detail Model in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v22) )
      __debugbreak();
  }
  if ( ((LODWORD(position->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5394, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Instantiate Detail Model with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
    __debugbreak();
  if ( ((LODWORD(orientationAsQuat->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5395, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Instantiate Detail Model with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
    __debugbreak();
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  Physics_LockWorld((Physics_WorldId)v11);
  v13 = 0.03125 * position->v[1];
  v14 = 0.03125 * position->v[2];
  positiona.m_quad.m128_f32[0] = 0.03125 * position->v[0];
  _XMM0 = LODWORD(orientationAsQuat->v[0]);
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rdi+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rdi+8], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rdi+0Ch], 30h ; '0'
  }
  positiona.m_quad.m128_f32[1] = v13;
  positiona.m_quad.m128_f32[2] = v14;
  positiona.m_quad.m128_f32[3] = 0.0;
  orientation.m_vec.m_quad = _XMM0;
  v19 = HavokPhysics_InstantiateDetailModel((Physics_WorldId)v11, detailModel, ref, &positiona, &orientation, add, tryStartDeactivated, forQueryOnly, allowSingleBodyAddToWorld);
  v20 = s_physicsWorldBodyListChangedFns[v11];
  if ( v20 )
    v20((Physics_WorldId)v11);
  Physics_UnlockWorld((Physics_WorldId)v11);
  return v19;
}

/*
==============
Physics_InstantiateHingeConstraint
==============
*/
bool Physics_InstantiateHingeConstraint(Physics_WorldId worldId, unsigned int instanceId, unsigned int bodyIdx, const vec3_t *position, const vec3_t *direction, float friction, float angleMin, float angleMax, float breakingThreshold, unsigned int *outConstraintId)
{
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  __int64 minAngle; 
  hkVector4f dir; 
  hkVector4f pos; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5718, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Instantiate Hinge constraint when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( instanceId == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5719, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Instantiate Hinge constraint with invalid instance id %i", "instanceId != PHYSICSINSTANCEID_INVALID", worldId) )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    LODWORD(minAngle) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5720, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Instantiate Hinge constraint with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", minAngle) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
  {
    LODWORD(minAngle) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5721, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Instantiate Hinge constraint in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", minAngle) )
      __debugbreak();
  }
  if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
    LODWORD(minAngle) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5722, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Instantiate Hinge constraint in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", minAngle) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  v14 = 0.03125 * position->v[0];
  v15 = 0.03125 * position->v[1];
  pos.m_quad.m128_f32[2] = 0.03125 * position->v[2];
  v16 = 0.03125 * direction->v[0];
  pos.m_quad.m128_f32[0] = v14;
  v17 = 0.03125 * direction->v[1];
  dir.m_quad.m128_f32[0] = v16;
  pos.m_quad.m128_f32[1] = v15;
  v18 = 0.03125 * direction->v[2];
  dir.m_quad.m128_f32[1] = v17;
  dir.m_quad.m128_f32[2] = v18;
  pos.m_quad.m128_f32[3] = 0.0;
  dir.m_quad.m128_f32[3] = 0.0;
  return HavokPhysics_InstantiateHingeConstraint(worldId, instanceId, bodyIdx, &pos, &dir, 0.03125 * friction, angleMin, angleMax, breakingThreshold, outConstraintId);
}

/*
==============
Physics_InstantiateKeyframedBody
==============
*/
__int64 Physics_InstantiateKeyframedBody(Physics_WorldId worldId, const hknpShape *shape, int ref, const char *name, const char *physicsMaterial, int contents, const vec3_t *position, const vec4_t *orientationAsQuat, bool add, bool tryStartDeactivated, bool forQueryOnly)
{
  __int64 v14; 
  float v15; 
  float v16; 
  unsigned int v21; 
  void (__fastcall *v22)(Physics_WorldId); 
  hkVector4f *v24; 
  hkVector4f v25; 
  hkQuaternionf orientation; 

  v14 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5235, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Instantiate Keyframed Body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v14 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5236, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Instantiate Keyframed Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v14) )
    __debugbreak();
  if ( !shape )
  {
    LODWORD(v24) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5237, ASSERT_TYPE_ASSERT, "(shape)", "%s\n\tPhysics: Trying to Instantiate Keyframed Body with null shape in world %i", "shape", v24) )
      __debugbreak();
  }
  if ( !name )
  {
    LODWORD(v24) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5238, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, "%s\n\tPhysics: Trying to Instantiate Keyframed Body with null name in world %i", (const char *)&stru_143C9A1A4, v24) )
      __debugbreak();
  }
  if ( !physicsMaterial )
  {
    LODWORD(v24) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5239, ASSERT_TYPE_ASSERT, "(physicsMaterial)", "%s\n\tPhysics: Trying to Instantiate Keyframed Body with null physics material in world %i", "physicsMaterial", v24) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(v14 - 2) <= 5 )
  {
    LODWORD(v24) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5240, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Instantiate Keyframed Body in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v24) )
      __debugbreak();
  }
  if ( !g_physicsServerWorldsCreated && (unsigned int)v14 <= 1 )
  {
    LODWORD(v24) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5241, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Instantiate Keyframed Body in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v24) )
      __debugbreak();
  }
  if ( ((LODWORD(position->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5242, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Instantiate Keyframed Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
    __debugbreak();
  if ( ((LODWORD(orientationAsQuat->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5243, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Instantiate Keyframed Body with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
    __debugbreak();
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  v15 = 0.03125 * position->v[1];
  v16 = 0.03125 * position->v[2];
  v25.m_quad.m128_f32[0] = 0.03125 * position->v[0];
  _XMM0 = LODWORD(orientationAsQuat->v[0]);
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rdi+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rdi+8], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rdi+0Ch], 30h ; '0'
  }
  v25.m_quad.m128_f32[1] = v15;
  v25.m_quad.m128_f32[2] = v16;
  v25.m_quad.m128_f32[3] = 0.0;
  orientation.m_vec.m_quad = _XMM0;
  v21 = HavokPhysics_InstantiateKeyframedBody((Physics_WorldId)v14, shape, ref, name, physicsMaterial, contents, &v25, &orientation, add, tryStartDeactivated, forQueryOnly);
  v22 = s_physicsWorldBodyListChangedFns[v14];
  if ( v22 )
    v22((Physics_WorldId)v14);
  return v21;
}

/*
==============
Physics_InstantiateStaticBody
==============
*/
__int64 Physics_InstantiateStaticBody(Physics_WorldId worldId, const hknpShape *shape, int ref, const char *name, const char *physicsMaterial, int contents, const vec3_t *position, const vec4_t *orientationAsQuat, bool add, bool tryStartDeactivated, bool forQueryOnly)
{
  __int64 v14; 
  float v15; 
  float v16; 
  unsigned int v21; 
  void (__fastcall *v22)(Physics_WorldId); 
  hkVector4f *v24; 
  hkVector4f v25; 
  hkQuaternionf orientation; 

  v14 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5286, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Instantiate Static Body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v14 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5287, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Instantiate Static Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v14) )
    __debugbreak();
  if ( !shape )
  {
    LODWORD(v24) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5288, ASSERT_TYPE_ASSERT, "(shape)", "%s\n\tPhysics: Trying to Instantiate Static Body with null shape in world %i", "shape", v24) )
      __debugbreak();
  }
  if ( !name )
  {
    LODWORD(v24) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5289, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, "%s\n\tPhysics: Trying to Instantiate Static Body with null name in world %i", (const char *)&stru_143C9A1A4, v24) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(v14 - 2) <= 5 )
  {
    LODWORD(v24) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5290, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Instantiate Static Body in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v24) )
      __debugbreak();
  }
  if ( !g_physicsServerWorldsCreated && (unsigned int)v14 <= 1 )
  {
    LODWORD(v24) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5291, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Instantiate Static Body in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v24) )
      __debugbreak();
  }
  if ( ((LODWORD(position->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5292, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Instantiate Static Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
    __debugbreak();
  if ( ((LODWORD(orientationAsQuat->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5293, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Instantiate Static Body with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
    __debugbreak();
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  v15 = 0.03125 * position->v[1];
  v16 = 0.03125 * position->v[2];
  v25.m_quad.m128_f32[0] = 0.03125 * position->v[0];
  _XMM0 = LODWORD(orientationAsQuat->v[0]);
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rdi+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rdi+8], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rdi+0Ch], 30h ; '0'
  }
  v25.m_quad.m128_f32[1] = v15;
  v25.m_quad.m128_f32[2] = v16;
  v25.m_quad.m128_f32[3] = 0.0;
  orientation.m_vec.m_quad = _XMM0;
  v21 = HavokPhysics_InstantiateStaticBody((Physics_WorldId)v14, shape, ref, name, physicsMaterial, contents, &v25, &orientation, add, tryStartDeactivated, forQueryOnly);
  v22 = s_physicsWorldBodyListChangedFns[v14];
  if ( v22 )
    v22((Physics_WorldId)v14);
  return v21;
}

/*
==============
Physics_InverseInertiaFromLocalToWorld
==============
*/
void Physics_InverseInertiaFromLocalToWorld(const vec3_t *invInertiaLocal, const tmat33_t<vec3_t> *rotation, tmat33_t<vec3_t> *invInertiaWs)
{
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v12; 
  float v13; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> out; 

  v3 = invInertiaLocal->v[0];
  v4 = invInertiaLocal->v[1];
  v5 = invInertiaLocal->v[2];
  v6 = invInertiaLocal->v[0] * rotation->m[0].v[1];
  in1.m[0].v[0] = invInertiaLocal->v[0] * rotation->m[0].v[0];
  in1.m[0].v[2] = v3 * rotation->m[0].v[2];
  v7 = v4 * rotation->m[1].v[1];
  in1.m[0].v[1] = v6;
  v8 = v4 * rotation->m[1].v[0];
  in1.m[1].v[1] = v7;
  v9 = v5 * rotation->m[2].v[0];
  in1.m[1].v[0] = v8;
  v10 = v4 * rotation->m[1].v[2];
  in1.m[2].v[0] = v9;
  v12 = v5 * rotation->m[2].v[2];
  in1.m[1].v[2] = v10;
  v13 = v5 * rotation->m[2].v[1];
  in1.m[2].v[2] = v12;
  in1.m[2].v[1] = v13;
  MatrixTranspose(rotation, &out);
  MatrixMultiply(&in1, &out, invInertiaWs);
}

/*
==============
Physics_IsAssetBodyAnimationDriven
==============
*/
bool Physics_IsAssetBodyAnimationDriven(const PhysicsAsset *physicsAsset, int bodyIdx)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4813, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to get physics asset body animation driven state when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !physicsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4814, ASSERT_TYPE_ASSERT, "(physicsAsset)", "%s\n\tPhysics: Trying to get physics asset body animation driven state with invalid physics asset", "physicsAsset") )
    __debugbreak();
  if ( bodyIdx < 0 )
    goto LABEL_20;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4404, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to get physics asset body count when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !physicsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4405, ASSERT_TYPE_ASSERT, "(physicsAsset)", "%s\n\tPhysics: Trying to get physics asset body count with invalid physics asset", "physicsAsset") )
    __debugbreak();
  if ( bodyIdx >= HavokPhysics_GetPhysicsAssetBodyCount(physicsAsset) )
  {
LABEL_20:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4815, ASSERT_TYPE_ASSERT, "(bodyIdx >= 0 && bodyIdx < Physics_GetPhysicsAssetBodyCount( physicsAsset ))", "%s\n\tPhysics: Trying to get physics asset body animation driven state with invalid body index", "bodyIdx >= 0 && bodyIdx < Physics_GetPhysicsAssetBodyCount( physicsAsset )") )
      __debugbreak();
  }
  return HavokPhysics_IsAssetBodyAnimationDriven(physicsAsset, bodyIdx);
}

/*
==============
Physics_IsAssetRagdoll
==============
*/
bool Physics_IsAssetRagdoll(const PhysicsAsset *physicsAsset)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4803, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to check if an asset is a ragdoll when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !physicsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4804, ASSERT_TYPE_ASSERT, "(physicsAsset)", "%s\n\tPhysics: Trying to check if an asset is a ragdoll with invalid physics asset", "physicsAsset") )
    __debugbreak();
  return physicsAsset->useCategory == PhysicsAssetUseCategory_Ragdoll;
}

/*
==============
Physics_IsAuthoritativeWorld
==============
*/
bool Physics_IsAuthoritativeWorld(Physics_WorldId worldId)
{
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2123, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Request IsAuthoritativeWorld with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  return worldId == PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE || worldId == PHYSICS_WORLD_ID_CLIENT1_AUTHORITATIVE;
}

/*
==============
Physics_IsChildOfShape
==============
*/
bool Physics_IsChildOfShape(const hknpShape *possibleParent, const hknpShape *possibleChild)
{
  if ( !possibleParent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10262, ASSERT_TYPE_ASSERT, "(possibleParent)", (const char *)&queryFormat, "possibleParent") )
    __debugbreak();
  if ( !possibleChild && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10263, ASSERT_TYPE_ASSERT, "(possibleChild)", (const char *)&queryFormat, "possibleChild") )
    __debugbreak();
  return HavokPhysics_IsChildOfShape(possibleParent, possibleChild);
}

/*
==============
Physics_IsClientEntitylessScriptable
==============
*/
bool Physics_IsClientEntitylessScriptable(const int ref)
{
  unsigned __int8 v1; 
  unsigned int v2; 
  __int64 v3; 
  unsigned int v4; 
  const ScriptableDef *def; 
  __int64 v7; 
  __int64 v8; 

  if ( (ref & 0x3E000000) != 0x10000000 )
    return 0;
  v1 = (ref >> 22) & 3;
  if ( !v1 )
    return 0;
  v2 = ref & 0x3FFFFF;
  v3 = v1;
  v4 = ((ref >> 22) & 3) - 1;
  ScriptableCommon_AssertCountsInitialized();
  if ( v2 >= g_scriptableWorldCounts.totalInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v2, g_scriptableWorldCounts.totalInstanceCount) )
      __debugbreak();
  }
  if ( v4 >= 2 )
  {
    LODWORD(v8) = 2;
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 114, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( !g_scriptableCl_instanceContexts[v3 - 1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
    __debugbreak();
  def = g_scriptableCl_instanceContexts[v3 - 1][v2].commonContext.def;
  return def && ScriptableDef_IsStandaloneRequested(def);
}

/*
==============
Physics_IsDebugCodeReadingServer
==============
*/
bool Physics_IsDebugCodeReadingServer()
{
  bool result; 

  if ( (unsigned int)(physics_debugRayWorld->current.integer - 2) <= 1 )
    return 1;
  if ( (unsigned int)(physics_debugMutableShapesInWorld->current.integer - 2) <= 1 )
    return 1;
  if ( Physics_RenderDebugEnabled() )
    return 1;
  result = PhysicsVehicle_IsDebugDrawing();
  if ( result )
    return 1;
  return result;
}

/*
==============
Physics_IsDetailWorld
==============
*/
bool Physics_IsDetailWorld(Physics_WorldId worldId)
{
  int v2; 
  bool result; 

  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2101, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Request IsDetailWorld with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  result = 0;
  if ( (unsigned int)worldId <= PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v2 = 146;
    if ( _bittest(&v2, worldId) )
      return 1;
  }
  return result;
}

/*
==============
Physics_IsInBroadphase
==============
*/
bool Physics_IsInBroadphase(Physics_WorldId worldId, const vec3_t *position)
{
  bool v4; 
  float v5; 
  bool v6; 
  float v7; 
  Physics_WorldId v9; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7815, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to check if a point is in a broadphase when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v9 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7816, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to check if a point is in a broadphase with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v9) )
      __debugbreak();
  }
  v4 = position->v[0] >= cm.broadphaseMin.v[0] && position->v[0] <= cm.broadphaseMax.v[0];
  v5 = position->v[1];
  v6 = v5 >= cm.broadphaseMin.v[1] && v5 <= cm.broadphaseMax.v[1];
  v7 = position->v[2];
  return v7 >= cm.broadphaseMin.v[2] && v7 <= cm.broadphaseMax.v[2] && v4 && v6;
}

/*
==============
Physics_IsInitialized
==============
*/
_BOOL8 Physics_IsInitialized()
{
  return g_physicsInitialized;
}

/*
==============
Physics_IsInstanceDeactivated
==============
*/
bool Physics_IsInstanceDeactivated(Physics_WorldId worldId, unsigned int instanceId)
{
  __int64 v5; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5969, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Check if instance is deactivated when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5970, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Check if instance is deactivated with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( instanceId == -1 )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5971, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Check if instance is deactivated with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v5) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5972, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Check if instance is deactivated in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v5) )
      __debugbreak();
  }
  if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5973, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Check if instance is deactivated in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v5) )
      __debugbreak();
  }
  return HavokPhysics_IsInstanceDeactivated(worldId, instanceId);
}

/*
==============
Physics_IsInstanceInWorld
==============
*/
bool Physics_IsInstanceInWorld(Physics_WorldId worldId, unsigned int instanceId, bool checkPending)
{
  __int64 v7; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5911, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to test if instance is in world when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5912, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to test if instance is in world with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( instanceId == -1 )
  {
    LODWORD(v7) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5913, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to test if instance is in world with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v7) )
      __debugbreak();
  }
  return HavokPhysics_IsInstanceInWorld(worldId, instanceId, checkPending);
}

/*
==============
Physics_IsInstanceStatic
==============
*/
char Physics_IsInstanceStatic(Physics_WorldId worldId, unsigned int instanceId)
{
  unsigned int v4; 
  unsigned int NumRigidBodys; 
  unsigned int m_serialAndIndex; 
  __int64 v8; 
  hknpBodyId result; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6002, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Check if an instance is Static when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6003, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Check if an instance is Static with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( instanceId == -1 )
  {
    LODWORD(v8) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6004, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Check if an instance is Static with invalid instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v8) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
  {
    LODWORD(v8) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6005, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Check if an instance is Static in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v8) )
      __debugbreak();
  }
  if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
    LODWORD(v8) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6006, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Check if an instance is Static in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v8) )
      __debugbreak();
  }
  v4 = 0;
  NumRigidBodys = Physics_GetNumRigidBodys(worldId, instanceId);
  if ( !NumRigidBodys )
    return 1;
  while ( 1 )
  {
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
    {
      LODWORD(v8) = worldId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v8) )
        __debugbreak();
    }
    if ( instanceId == -1 )
    {
      LODWORD(v8) = worldId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v8) )
        __debugbreak();
    }
    if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
    {
      LODWORD(v8) = worldId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v8) )
        __debugbreak();
    }
    if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
    {
      LODWORD(v8) = worldId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v8) )
        __debugbreak();
    }
    m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, worldId, instanceId, v4)->m_serialAndIndex;
    if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6012, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
      __debugbreak();
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6027, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Check if a Rigid Body is Static when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
    {
      LODWORD(v8) = worldId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6028, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Check if a Rigid Body is Static with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v8) )
        __debugbreak();
    }
    if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
    {
      LODWORD(v8) = worldId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6029, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Check if a Rigid Body is Static with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v8) )
        __debugbreak();
    }
    if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
    {
      LODWORD(v8) = worldId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6030, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Check if a Rigid Body is Static in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v8) )
        __debugbreak();
    }
    if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
    {
      LODWORD(v8) = worldId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6031, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Check if a Rigid Body is Static in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v8) )
        __debugbreak();
    }
    if ( !HavokPhysics_IsRigidBodyStatic(worldId, (hknpBodyId)m_serialAndIndex) )
      break;
    if ( ++v4 >= NumRigidBodys )
      return 1;
  }
  return 0;
}

/*
==============
Physics_IsPhysicsAssetBodyDynamic
==============
*/
bool Physics_IsPhysicsAssetBodyDynamic(const PhysicsAsset *physicsAsset, int bodyIdx)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4344, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to test if a physics asset's body is dynamic when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !physicsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4345, ASSERT_TYPE_ASSERT, "(physicsAsset)", "%s\n\tPhysics: Trying to test if a physics asset's body is dynamic with invalid physics asset", "physicsAsset") )
    __debugbreak();
  return HavokPhysics_IsPhysicsAssetBodyDynamic(physicsAsset, bodyIdx);
}

/*
==============
Physics_IsPhysicsAssetDynamic
==============
*/
bool Physics_IsPhysicsAssetDynamic(const PhysicsAsset *physicsAsset)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4330, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to test if a physics asset is dynamic when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !physicsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4331, ASSERT_TYPE_ASSERT, "(physicsAsset)", "%s\n\tPhysics: Trying to test if a physics asset is dynamic with invalid physics asset", "physicsAsset") )
    __debugbreak();
  return HavokPhysics_IsPhysicsAssetDynamic(physicsAsset);
}

/*
==============
Physics_IsPredictiveWorld
==============
*/
bool Physics_IsPredictiveWorld(Physics_WorldId worldId)
{
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2112, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Request IsPredictiveWorld with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  return worldId == PHYSICS_WORLD_ID_CLIENT_FIRST || worldId == PHYSICS_WORLD_ID_CLIENT1_FIRST;
}

/*
==============
Physics_IsQueryWorld
==============
*/
bool Physics_IsQueryWorld(Physics_WorldId worldId)
{
  int v2; 
  bool result; 

  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2089, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Request IsQueryWorld with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  result = 0;
  if ( (unsigned int)worldId <= PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v2 = 146;
    if ( _bittest(&v2, worldId) )
      return 1;
  }
  return result;
}

/*
==============
Physics_IsRigidBodyActive
==============
*/
bool Physics_IsRigidBodyActive(Physics_WorldId worldId, unsigned int bodyId)
{
  __int64 v5; 
  Physics_WorldId v6; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6294, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body active state when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v6 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6295, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body active state with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v6) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6296, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body active state with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v5) )
      __debugbreak();
  }
  return HavokPhysics_IsRigidBodyActive(worldId, (hknpBodyId)bodyId);
}

/*
==============
Physics_IsRigidBodyDynamic
==============
*/
bool Physics_IsRigidBodyDynamic(Physics_WorldId worldId, unsigned int bodyId)
{
  __int64 v5; 
  Physics_WorldId v6; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6061, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Check if a Rigid Body is Dynamic when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v6 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6062, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Check if a Rigid Body is Dynamic with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v6) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6063, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Check if a Rigid Body is Dynamic with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v5) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6064, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Check if a Rigid Body is Dynamic in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v5) )
      __debugbreak();
  }
  if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6065, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Check if a Rigid Body is Dynamic in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v5) )
      __debugbreak();
  }
  return HavokPhysics_IsRigidBodyDynamic(worldId, (hknpBodyId)bodyId);
}

/*
==============
Physics_IsRigidBodyKeyframed
==============
*/
bool Physics_IsRigidBodyKeyframed(Physics_WorldId worldId, unsigned int bodyId)
{
  __int64 v5; 
  Physics_WorldId v6; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6044, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Check if a Rigid Body is Keyframed when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v6 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6045, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Check if a Rigid Body is Keyframed with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v6) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6046, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Check if a Rigid Body is Keyframed with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v5) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6047, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Check if a Rigid Body is Keyframed in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v5) )
      __debugbreak();
  }
  if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6048, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Check if a Rigid Body is Keyframed in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v5) )
      __debugbreak();
  }
  return HavokPhysics_IsRigidBodyKeyframed(worldId, (hknpBodyId)bodyId);
}

/*
==============
Physics_IsRigidBodyStatic
==============
*/
bool Physics_IsRigidBodyStatic(Physics_WorldId worldId, unsigned int bodyId)
{
  __int64 v5; 
  Physics_WorldId v6; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6027, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Check if a Rigid Body is Static when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v6 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6028, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Check if a Rigid Body is Static with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v6) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6029, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Check if a Rigid Body is Static with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v5) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6030, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Check if a Rigid Body is Static in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v5) )
      __debugbreak();
  }
  if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6031, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Check if a Rigid Body is Static in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v5) )
      __debugbreak();
  }
  return HavokPhysics_IsRigidBodyStatic(worldId, (hknpBodyId)bodyId);
}

/*
==============
Physics_IsRigidBodyValid
==============
*/
bool Physics_IsRigidBodyValid(Physics_WorldId worldId, unsigned int bodyId)
{
  __int64 v5; 
  Physics_WorldId v6; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5986, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Check if a Rigid Body is Valid when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v6 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5987, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Check if a Rigid Body is Valid with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v6) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5988, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Check if a Rigid Body is Valid in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v5) )
      __debugbreak();
  }
  if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5989, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Check if a Rigid Body is Valid in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v5) )
      __debugbreak();
  }
  return HavokPhysics_IsRigidBodyValid(worldId, (hknpBodyId)bodyId);
}

/*
==============
Physics_IsServerEntitylessScriptable
==============
*/
bool Physics_IsServerEntitylessScriptable(const int ref)
{
  const ScriptableDef *def; 

  return (ref & 0x3E000000) == 0x10000000 && ((ref >> 22) & 3) == 0 && (def = ScriptableSv_GetInstanceCommonContext(ref & 0x3FFFFF)->def) != NULL && ScriptableDef_IsStandaloneRequested(def);
}

/*
==============
Physics_IsShapeCacheDisabled
==============
*/

bool __fastcall Physics_IsShapeCacheDisabled(unsigned int threadId)
{
  return HavokPhysics_IsShapeCacheDisabled(threadId);
}

/*
==============
Physics_KeyframeInstanceTo
==============
*/
Physics_MovementType Physics_KeyframeInstanceTo(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *position, const vec4_t *orientationAsQuat, float velocityScale, bool canWarp, bool updateBroadphaseIfWarping, float stepTimeOverride)
{
  float v12; 
  float v13; 
  __int64 v19; 
  hkVector4f hkPosition; 
  hkQuaternionf hkOrientation; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6737, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Keyframe Instance when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6738, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Keyframe Instance with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( instanceId == -1 )
  {
    LODWORD(v19) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6739, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Keyframe Instance with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v19) )
      __debugbreak();
  }
  if ( ((LODWORD(position->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6740, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Keyframe Instance with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
    __debugbreak();
  if ( ((LODWORD(orientationAsQuat->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6741, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Keyframe Instance with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
    __debugbreak();
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  v12 = 0.03125 * position->v[1];
  v13 = 0.03125 * position->v[2];
  hkPosition.m_quad.m128_f32[0] = 0.03125 * position->v[0];
  _XMM0 = LODWORD(orientationAsQuat->v[0]);
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rbx+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rbx+8], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rbx+0Ch], 30h ; '0'
  }
  hkOrientation.m_vec.m_quad = _XMM0;
  hkPosition.m_quad.m128_f32[1] = v12;
  hkPosition.m_quad.m128_f32[2] = v13;
  hkPosition.m_quad.m128_f32[3] = 0.0;
  return HavokPhysics_KeyframeInstanceTo(worldId, instanceId, &hkPosition, &hkOrientation, velocityScale, canWarp, updateBroadphaseIfWarping, stepTimeOverride);
}

/*
==============
Physics_KeyframeRigidBodyTo
==============
*/
__int64 Physics_KeyframeRigidBodyTo(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *position, const vec4_t *orientationAsQuat, float velocityScale, bool canWarp, bool updateBroadphaseIfWarping, float stepTimeOverride)
{
  float v12; 
  float v13; 
  Physics_MovementType v18; 
  __int64 v20; 
  Physics_WorldId v21; 
  hkVector4f hkPosition; 
  hkQuaternionf hkOrientation; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6894, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Keyframe Rigid Body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v21 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6895, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Keyframe Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v21) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v20) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6896, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Keyframe Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v20) )
      __debugbreak();
  }
  if ( ((LODWORD(position->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6897, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Keyframe Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
    __debugbreak();
  if ( ((LODWORD(orientationAsQuat->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6898, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Keyframe Rigid Body with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
    __debugbreak();
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  v12 = 0.03125 * position->v[1];
  v13 = 0.03125 * position->v[2];
  hkPosition.m_quad.m128_f32[0] = 0.03125 * position->v[0];
  _XMM0 = LODWORD(orientationAsQuat->v[0]);
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rbx+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rbx+8], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rbx+0Ch], 30h ; '0'
  }
  hkOrientation.m_vec.m_quad = _XMM0;
  hkPosition.m_quad.m128_f32[1] = v12;
  hkPosition.m_quad.m128_f32[2] = v13;
  hkPosition.m_quad.m128_f32[3] = 0.0;
  v18 = HavokPhysics_KeyframeRigidBodyTo(worldId, (hknpBodyId)bodyId, &hkPosition, &hkOrientation, velocityScale, canWarp, updateBroadphaseIfWarping, stepTimeOverride);
  Physics_KeyframeRigidBodyValidation(worldId, bodyId, canWarp, v18);
  return (unsigned int)v18;
}

/*
==============
Physics_KeyframeRigidBodyToFast
==============
*/
__int64 Physics_KeyframeRigidBodyToFast(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *position, const vec4_t *orientationAsQuat, float velocityScale, bool canWarp, bool updateBroadphaseIfWarping, float stepTimeOverride)
{
  float v12; 
  float v13; 
  Physics_MovementType v18; 
  __int64 v20; 
  Physics_WorldId v21; 
  hkVector4f hkPosition; 
  hkQuaternionf hkOrientation; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6923, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Keyframe Rigid Body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v21 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6924, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Keyframe Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v21) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v20) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6925, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Keyframe Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v20) )
      __debugbreak();
  }
  if ( ((LODWORD(position->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6926, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Keyframe Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
    __debugbreak();
  if ( ((LODWORD(orientationAsQuat->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6927, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Keyframe Rigid Body with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
    __debugbreak();
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  v12 = 0.03125 * position->v[1];
  v13 = 0.03125 * position->v[2];
  hkPosition.m_quad.m128_f32[0] = 0.03125 * position->v[0];
  _XMM0 = LODWORD(orientationAsQuat->v[0]);
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rbx+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rbx+8], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rbx+0Ch], 30h ; '0'
  }
  hkOrientation.m_vec.m_quad = _XMM0;
  hkPosition.m_quad.m128_f32[1] = v12;
  hkPosition.m_quad.m128_f32[2] = v13;
  hkPosition.m_quad.m128_f32[3] = 0.0;
  v18 = HavokPhysics_KeyframeRigidBodyToFast(worldId, (hknpBodyId)bodyId, &hkPosition, &hkOrientation, velocityScale, canWarp, updateBroadphaseIfWarping, stepTimeOverride);
  Physics_KeyframeRigidBodyValidation(worldId, bodyId, canWarp, v18);
  return (unsigned int)v18;
}

/*
==============
Physics_KeyframeRigidBodyValidation
==============
*/
void Physics_KeyframeRigidBodyValidation(Physics_WorldId worldId, unsigned int bodyId, bool canWarp, Physics_MovementType movementType)
{
  float v5; 
  float v6; 
  unsigned int Ref; 
  const char *name; 
  unsigned __int16 model; 
  XModel *v10; 
  float maxLinSpeed; 
  vec3_t linVel; 
  char string[256]; 

  if ( worldId == PHYSICS_WORLD_ID_FIRST && !canWarp && movementType == Physics_MovementType_Keyframed )
  {
    Physics_GetRigidBodyLinVel(PHYSICS_WORLD_ID_FIRST, bodyId, &linVel);
    maxLinSpeed = 0.0;
    v5 = (float)((float)(linVel.v[0] * linVel.v[0]) + (float)(linVel.v[1] * linVel.v[1])) + (float)(linVel.v[2] * linVel.v[2]);
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6078, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body Max LinSpeed when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( (bodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6080, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body Max LinSpeed with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", 0) )
      __debugbreak();
    HavokPhysics_GetRigidBodyMaxLinSpeed(PHYSICS_WORLD_ID_FIRST, (hknpBodyId)bodyId, &maxLinSpeed);
    v6 = maxLinSpeed * 32.0;
    if ( v5 >= (float)(v6 * v6) && !Dvar_GetBool_Internal_DebugName(DVARBOOL_physics_disableSpammyWarnings, "physics_disableSpammyWarnings") )
    {
      Ref = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, bodyId);
      Physics_ConvertRefSystemToString(Ref, PHYSICS_WORLD_ID_FIRST, string, 256);
      name = (char *)&queryFormat.fmt + 3;
      if ( (Ref & 0x3E000000) == 0x4000000 )
      {
        model = g_entities[truncate_cast<unsigned short,int>((unsigned __int16)Ref)].model;
        if ( model )
        {
          v10 = G_Utils_GetModel(model);
          if ( v10 )
            name = v10->name;
        }
      }
      Com_PrintWarning(20, "Physics body (ref:%x %s%s) was requested to move at speed %.2f, but has a max of %.2f.  It may appear to not have server collision until it catches up.  Turn this message off with dvar physics_disableSpammyWarnings\n", Ref, string, name, fsqrt(v5), v6);
    }
  }
}

/*
==============
Physics_Load
==============
*/
void Physics_Load(SaveGame *save)
{
  MemFile_ReadSentinel(&save->memFile, 0x42158u);
  HavokPhysics_Load(save);
  G_PhysicsCharacterProxy_Load(save);
  PhysicsCoverWall_Load(save);
  G_PhysicsObject_Load(save);
  PhysicsVehicle_Load(save);
  PhysicsVolume_Load(save);
  PhysicsGravityModifier_Load(save);
  PhysicsForceAction_Load(save);
  Physics_UpdateBroadphase(PHYSICS_WORLD_ID_FIRST, 1);
  Physics_UpdateBroadphase(PHYSICS_WORLD_ID_SERVER_DETAIL, 1);
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2290, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Validate world when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  HavokPhysics_ValidateWorld(PHYSICS_WORLD_ID_FIRST);
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2290, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Validate world when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  HavokPhysics_ValidateWorld(PHYSICS_WORLD_ID_SERVER_DETAIL);
}

/*
==============
Physics_LockWorld
==============
*/
void Physics_LockWorld(Physics_WorldId worldId)
{
  Physics_WorldId v2; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3266, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Lock World when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v2 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3267, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Lock World with invalid world index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v2) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasAnyLock_Physics();
  HavokPhysics_LockWorld(worldId);
}

/*
==============
Physics_LoosenConstraint
==============
*/
bool Physics_LoosenConstraint(Physics_WorldId worldId, unsigned int constraintId, PhysicsConstraintLooseningResult *result)
{
  __int64 v7; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7909, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to loosen constraint when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7910, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to loosen constraint with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( constraintId == 0x7FFFFFFF )
  {
    LODWORD(v7) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7911, ASSERT_TYPE_ASSERT, "(Physics_IsConstraintIdValid( constraintId ))", "%s\n\tPhysics: Trying to loosen constraint with invalid constraint in world %i", "Physics_IsConstraintIdValid( constraintId )", v7) )
      __debugbreak();
  }
  if ( !result )
  {
    LODWORD(v7) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7912, ASSERT_TYPE_ASSERT, "(result)", "%s\n\tPhysics: Trying to loosen constraint with NULL result in world %i", "result", v7) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  return HavokPhysics_LoosenConstraint(worldId, (hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant>)constraintId, result);
}

/*
==============
Physics_MakeRef
==============
*/
__int64 Physics_MakeRef(Physics_RefSystem system, Physics_RelationshipSystem relationSystem, unsigned __int8 subSystem, unsigned __int16 id)
{
  return id | ((subSystem | (((2 * (char)system) | relationSystem & 1u) << 8)) << 16);
}

/*
==============
Physics_MovePhysicsAsset
==============
*/
void Physics_MovePhysicsAsset(PhysicsAsset *from, PhysicsAsset *to)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3749, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Move PhysicsAsset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (to->usageCounter.serverEnt || to->usageCounter.clientEnt || to->usageCounter.dynEnt) && DB_ShouldUpdateGameOnPhysicsChange() )
  {
    if ( to->usageCounter.serverEnt )
      G_Utils_PhysicsPrepareForPhysicsAssetChange(to);
    if ( to->usageCounter.clientEnt )
      CG_Entity_PhysicsPrepareForPhysicsAssetChange(to);
    if ( to->usageCounter.dynEnt )
      DynEnt_PrepareForPhysicsAssetChange(to);
  }
  HavokPhysics_MovePhysicsAsset(from, to);
}

/*
==============
Physics_MovePhysicsSFXEventAsset
==============
*/
void Physics_MovePhysicsSFXEventAsset(PhysicsSFXEventAsset *from, PhysicsSFXEventAsset *to)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3586, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to move PhysicsSFXEventAsset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  HavokPhysics_MovePhysicsSFXEventAsset(from, to);
}

/*
==============
Physics_MovePhysicsVFXEventAsset
==============
*/
void Physics_MovePhysicsVFXEventAsset(PhysicsVFXEventAsset *from, PhysicsVFXEventAsset *to)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3641, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to move PhysicsVFXEventAsset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  HavokPhysics_MovePhysicsVFXEventAsset(from, to);
}

/*
==============
Physics_MoveXModelAsset
==============
*/
void Physics_MoveXModelAsset(XModel *from, XModel *to)
{
  char v4; 
  PhysicsAsset *physicsAsset; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4247, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Move XModel Asset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( to->physicsAsset || from->physicsAsset )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    if ( !to->physicsUsageCounter.serverEnt && !to->physicsUsageCounter.clientEnt && !to->physicsUsageCounter.dynEnt )
      goto LABEL_25;
  }
  if ( DB_ShouldUpdateGameOnPhysicsChange() )
  {
    if ( v4 )
    {
      physicsAsset = to->physicsAsset;
      if ( !physicsAsset || physicsAsset->usageCounter.serverEnt )
      {
        G_Utils_PhysicsPrepareForPhysicsAssetChange(to, physicsAsset);
        physicsAsset = to->physicsAsset;
      }
      if ( !physicsAsset || physicsAsset->usageCounter.clientEnt )
        CG_Entity_PhysicsPrepareForPhysicsAssetChange(to, physicsAsset);
    }
    if ( to->physicsUsageCounter.serverEnt )
      G_Utils_PhysicsPrepareForXModelChange(to);
    if ( to->physicsUsageCounter.clientEnt )
      CG_Entity_PhysicsPrepareForXModelChange(to);
    if ( to->physicsUsageCounter.dynEnt )
      DynEnt_PrepareForXModelChange(to);
  }
LABEL_25:
  HavokPhysics_MoveXModelAsset(from, to);
}

/*
==============
Physics_MoveXModelDetailCollisionAsset
==============
*/
void Physics_MoveXModelDetailCollisionAsset(XModelDetailCollision *from, XModelDetailCollision *to)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4126, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Move XModelDetailCollision Asset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( DB_ShouldUpdateGameOnPhysicsChange() )
  {
    G_Utils_PhysicsPrepareForXModelDetailCollisionChange(to);
    CG_Entity_PhysicsPrepareForXModelDetailCollisionChange(to);
    DynEnt_PrepareForXModelDetailCollisionChange(to);
  }
  HavokPhysics_MoveXModelDetailCollisionAsset(from, to);
}

/*
==============
Physics_MyChangesInitAndLoad
==============
*/

void Physics_MyChangesInitAndLoad(void)
{
  HavokPhysics_MyChangesInitAndLoad();
}

/*
==============
Physics_MyChangesSaveAndShutdown
==============
*/

void Physics_MyChangesSaveAndShutdown(void)
{
  HavokPhysics_MyChangesSaveAndShutdown();
}

/*
==============
Physics_NoWorldTidyUp
==============
*/
void Physics_NoWorldTidyUp()
{
  if ( g_physicsServerWorldsCreated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1923, ASSERT_TYPE_ASSERT, "(!g_physicsServerWorldsCreated)", (const char *)&queryFormat, "!g_physicsServerWorldsCreated") )
    __debugbreak();
  if ( g_physicsClientWorldsCreated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1924, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated == 0)", (const char *)&queryFormat, "g_physicsClientWorldsCreated == 0") )
    __debugbreak();
  if ( g_physicsServerWorldsCreated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10112, ASSERT_TYPE_ASSERT, "(!Physics_AreServerWorldsCreated())", (const char *)&queryFormat, "!Physics_AreServerWorldsCreated()") )
    __debugbreak();
  if ( g_physicsClientWorldsCreated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10113, ASSERT_TYPE_ASSERT, "(!Physics_AreClientWorldsCreated())", (const char *)&queryFormat, "!Physics_AreClientWorldsCreated()") )
    __debugbreak();
  HavokPhysics_ClearShapeCache();
}

/*
==============
Physics_OnThreadInit
==============
*/
void Physics_OnThreadInit(unsigned int threadId)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1468, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to init a physics thread when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  HavokPhysics_OnThreadInit(threadId);
}

/*
==============
Physics_OnThreadShutdown
==============
*/
void Physics_OnThreadShutdown(unsigned int threadId)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1604, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to shutdown a physics thread when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  HavokPhysics_OnThreadShutdown(threadId);
}

/*
==============
Physics_PreStepWorld
==============
*/
void Physics_PreStepWorld(Physics_WorldId worldId, float timeStep)
{
  __int64 v2; 
  const dvar_t *v3; 
  char v4; 
  hkMonitorStream *Value; 
  hkMonitorStream *v6; 

  v2 = worldId;
  if ( HavokPhysics_IsTimeStepFixForProperKeyFramedBodyVelocityEnabled(worldId) )
    HavokPhysics_GetMutableWorld((Physics_WorldId)v2)->timeStep = timeStep;
  v3 = DVARBOOL_physics_killswitchEnableApplyTimeSmoothingBeforePreWorldFunctions;
  if ( !DVARBOOL_physics_killswitchEnableApplyTimeSmoothingBeforePreWorldFunctions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_killswitchEnableApplyTimeSmoothingBeforePreWorldFunctions") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled && Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x100) )
  {
    v4 = 1;
    HavokPhysics_SmoothTimeStep((Physics_WorldId)v2, timeStep);
  }
  else
  {
    v4 = 0;
  }
  if ( s_physicsPreStepWorldFns[v2] )
  {
    Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
    v6 = Value;
    if ( Value )
      hkMonitorStream::timerBegin(Value, "TtBefore Step world Fn");
    s_physicsPreStepWorldFns[v2]((Physics_WorldId)v2);
    if ( v6 )
      hkMonitorStream::timerEnd(v6, "Et");
  }
  if ( !v4 )
    HavokPhysics_SmoothTimeStep((Physics_WorldId)v2, timeStep);
  HavokPhysics_PreStepWorld((Physics_WorldId)v2, timeStep);
}

/*
==============
Physics_PrepareForDetailCollisionAssetChange
==============
*/
void Physics_PrepareForDetailCollisionAssetChange(XModelDetailCollision *detailCollision)
{
  if ( DB_ShouldUpdateGameOnPhysicsChange() )
  {
    G_Utils_PhysicsPrepareForXModelDetailCollisionChange(detailCollision);
    CG_Entity_PhysicsPrepareForXModelDetailCollisionChange(detailCollision);
    DynEnt_PrepareForXModelDetailCollisionChange(detailCollision);
  }
}

/*
==============
Physics_ProcessDeferredForce
==============
*/
void Physics_ProcessDeferredForce(const Physics_WorldId worldId)
{
  Physics_WorldId v2; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7737, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to process deferred force when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v2 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7738, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to process deferred force with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v2) )
      __debugbreak();
  }
  HavokPhysics_ProcessDeferredForce(worldId);
}

/*
==============
Physics_ProcessDeferredForceCallbacks
==============
*/
void Physics_ProcessDeferredForceCallbacks(const Physics_WorldId worldId)
{
  Physics_WorldId v2; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7749, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to process deferred force callbacks when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v2 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7750, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to process deferred force callbacks with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v2) )
      __debugbreak();
  }
  HavokPhysics_ProcessDeferredForceCallbacks(worldId);
}

/*
==============
Physics_ProcessDeferredKeyframe
==============
*/
void Physics_ProcessDeferredKeyframe(const Physics_WorldId worldId, const float velocityScale)
{
  int v3; 
  Physics_WorldId v4; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7722, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to process deferred keyframe when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_AUTHORITATIVE || (v3 = 73, !_bittest(&v3, worldId)) )
  {
    v4 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7724, ASSERT_TYPE_ASSERT, "(worldId == PHYSICS_WORLD_ID_SERVER_MAIN || worldId == PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE || worldId == PHYSICS_WORLD_ID_CLIENT1_AUTHORITATIVE)", "%s\n\tPhysics: Trying to Add deferred keyframe with invalid world index %i", "worldId == PHYSICS_WORLD_ID_SERVER_MAIN || worldId == PHYSICS_WORLD_ID_CLIENT0_AUTHORITATIVE || worldId == PHYSICS_WORLD_ID_CLIENT1_AUTHORITATIVE", v4) )
      __debugbreak();
  }
  HavokPhysics_ProcessDeferredKeyframe(worldId, velocityScale);
}

/*
==============
Physics_QueryPoint
==============
*/
void Physics_QueryPoint(Physics_WorldId worldId, const vec3_t *point, float maxDistance, Physics_QueryPointExtendedData *extendedData, HavokPhysics_CollisionQueryResult *result)
{
  __int64 v7; 
  const dvar_t *v8; 
  float v9; 
  float v10; 
  hkVector4f pointa; 

  v7 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8971, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to fire QueryPoint when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v7 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8972, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to fire QueryPoint with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v7) )
    __debugbreak();
  if ( ((LODWORD(point->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8973, ASSERT_TYPE_ASSERT, "(!IS_NAN( point[0] ) && !IS_NAN( point[1] ) && !IS_NAN( point[2] ))", "%s\n\tPhysics: Trying to fire QueryPoint with invalid point", "!IS_NAN( point[0] ) && !IS_NAN( point[1] ) && !IS_NAN( point[2] )") )
    __debugbreak();
  if ( !result )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8974, ASSERT_TYPE_ASSERT, "(result)", "%s\n\tPhysics: Trying to fire QueryPoint with invalid extended data", "result") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8975, ASSERT_TYPE_ASSERT, "(result)", "%s\n\tPhysics: Trying to fire QueryPoint with invalid result", "result") )
      __debugbreak();
  }
  if ( g_physicsBroadphaseQueriesNotAllowedForWorld[v7] )
  {
    v8 = DVARBOOL_physics_allowQueryDisabling;
    if ( !DVARBOOL_physics_allowQueryDisabling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_allowQueryDisabling") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8976, ASSERT_TYPE_ASSERT, "(!g_physicsBroadphaseQueriesNotAllowedForWorld[worldId] || !Dvar_GetBool_Internal_DebugName( DVARBOOL_physics_allowQueryDisabling, \"physics_allowQueryDisabling\" ))", "%s\n\tCan't perform a physics query here - they have been expressly disallowed", "!g_physicsBroadphaseQueriesNotAllowedForWorld[worldId] || !Dvar_GetBool( physics_allowQueryDisabling )") )
      __debugbreak();
  }
  if ( g_physicsQueriesNotAllowedForWorld[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8977, ASSERT_TYPE_ASSERT, "(!g_physicsQueriesNotAllowedForWorld[worldId])", "%s\n\tCan't perform a physics query here - they have been expressly disallowed", "!g_physicsQueriesNotAllowedForWorld[worldId]") )
    __debugbreak();
  CG_EntityWorkers_CheckHasAnyLock_Physics();
  if ( (unsigned int)v7 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8404, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( g_physicsBroadphaseRefreshNeeded[v7] )
    Physics_UpdateBroadphase((Physics_WorldId)v7, 1);
  v9 = 0.03125 * point->v[0];
  v10 = 0.03125 * point->v[2];
  pointa.m_quad.m128_f32[1] = 0.03125 * point->v[1];
  pointa.m_quad.m128_f32[3] = 0.0;
  pointa.m_quad.m128_f32[0] = v9;
  pointa.m_quad.m128_f32[2] = v10;
  switch ( (int)v7 )
  {
    case 0:
      Profile_Begin(717);
      break;
    case 1:
      Profile_Begin(718);
      break;
    case 2:
    case 5:
      Profile_Begin(719);
      break;
    case 3:
    case 6:
      Profile_Begin(720);
      break;
    case 4:
    case 7:
      Profile_Begin(721);
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9034, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown world id") )
        __debugbreak();
      break;
  }
  HavokPhysics_QueryPoint((Physics_WorldId)v7, &pointa, maxDistance * 0.03125, extendedData, result);
  Profile_EndInternal(NULL);
}

/*
==============
Physics_QueryPoint
==============
*/
void Physics_QueryPoint(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *point, float maxDistance, Physics_QueryPointExtendedData *extendedData, HavokPhysics_CollisionQueryResult *result)
{
  __int64 v8; 
  float v9; 
  float v10; 
  __int64 v11; 
  hkVector4f pointa; 

  v8 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9598, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to fire QueryPoint against body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v8 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9599, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to fire QueryPoint against body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v8) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v11) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9600, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to fire QueryPoint against body with invalid body id %i", "Physics_IsRigidBodyIdValid( bodyId )", v11) )
      __debugbreak();
  }
  if ( ((LODWORD(point->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(point->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9601, ASSERT_TYPE_ASSERT, "(!IS_NAN( point[0] ) && !IS_NAN( point[1] ) && !IS_NAN( point[2] ))", "%s\n\tPhysics: Trying to fire QueryPoint against body with invalid point", "!IS_NAN( point[0] ) && !IS_NAN( point[1] ) && !IS_NAN( point[2] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9602, ASSERT_TYPE_ASSERT, "(extendedData)", "%s\n\tPhysics: Trying to fire QueryPoint against body with invalid extended data", "extendedData") )
    __debugbreak();
  if ( extendedData->ignoreBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9603, ASSERT_TYPE_ASSERT, "(!extendedData->ignoreBodies)", "%s\n\tPhysics: Trying to fire QueryPoint against body with ignore bodies", "!extendedData->ignoreBodies") )
    __debugbreak();
  if ( extendedData->simplify && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9604, ASSERT_TYPE_ASSERT, "(!extendedData->simplify)", "%s\n\tPhysics: Trying to fire QueryPoint against body with simplify - not supported", "!extendedData->simplify") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9605, ASSERT_TYPE_ASSERT, "(result)", "%s\n\tPhysics: Trying to fire QueryPoint against body with invalid result", "result") )
    __debugbreak();
  if ( g_physicsQueriesNotAllowedForWorld[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9606, ASSERT_TYPE_ASSERT, "(!g_physicsQueriesNotAllowedForWorld[worldId])", "%s\n\tCan't perform a physics query here - they have been expressly disallowed", "!g_physicsQueriesNotAllowedForWorld[worldId]") )
    __debugbreak();
  CG_EntityWorkers_CheckHasAnyLock_Physics();
  v9 = 0.03125 * point->v[0];
  v10 = 0.03125 * point->v[2];
  pointa.m_quad.m128_f32[1] = 0.03125 * point->v[1];
  pointa.m_quad.m128_f32[3] = 0.0;
  pointa.m_quad.m128_f32[0] = v9;
  pointa.m_quad.m128_f32[2] = v10;
  switch ( (int)v8 )
  {
    case 0:
      Profile_Begin(747);
      break;
    case 1:
      Profile_Begin(748);
      break;
    case 2:
    case 5:
      Profile_Begin(749);
      break;
    case 3:
    case 6:
      Profile_Begin(750);
      break;
    case 4:
    case 7:
      Profile_Begin(751);
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9657, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown world id") )
        __debugbreak();
      break;
  }
  HavokPhysics_QueryPoint((Physics_WorldId)v8, (hknpBodyId)bodyId, &pointa, maxDistance * 0.03125, extendedData, result);
  Profile_EndInternal(NULL);
}

/*
==============
Physics_Raycast
==============
*/
void Physics_Raycast(Physics_WorldId worldId, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, HavokPhysics_CollisionQueryResult *result)
{
  __int64 v8; 
  const dvar_t *v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  hkVector4f enda; 
  hkVector4f starta; 

  v8 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8640, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to fire Raycast when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v8 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8641, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to fire Raycast with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v8) )
    __debugbreak();
  if ( ((LODWORD(start->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8642, ASSERT_TYPE_ASSERT, "(!IS_NAN( start[0] ) && !IS_NAN( start[1] ) && !IS_NAN( start[2] ))", "%s\n\tPhysics: Trying to fire Raycast with invalid start", "!IS_NAN( start[0] ) && !IS_NAN( start[1] ) && !IS_NAN( start[2] )") )
    __debugbreak();
  if ( ((LODWORD(end->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8643, ASSERT_TYPE_ASSERT, "(!IS_NAN( end[0] ) && !IS_NAN( end[1] ) && !IS_NAN( end[2] ))", "%s\n\tPhysics: Trying to fire Raycast with invalid end", "!IS_NAN( end[0] ) && !IS_NAN( end[1] ) && !IS_NAN( end[2] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8644, ASSERT_TYPE_ASSERT, "(extendedData)", "%s\n\tPhysics: Trying to fire Raycast with invalid extended data", "extendedData") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8645, ASSERT_TYPE_ASSERT, "(result)", "%s\n\tPhysics: Trying to fire Raycast with invalid result", "result") )
    __debugbreak();
  if ( g_physicsBroadphaseQueriesNotAllowedForWorld[v8] )
  {
    v9 = DVARBOOL_physics_allowQueryDisabling;
    if ( !DVARBOOL_physics_allowQueryDisabling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_allowQueryDisabling") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8646, ASSERT_TYPE_ASSERT, "(!g_physicsBroadphaseQueriesNotAllowedForWorld[worldId] || !Dvar_GetBool_Internal_DebugName( DVARBOOL_physics_allowQueryDisabling, \"physics_allowQueryDisabling\" ))", "%s\n\tCan't perform a physics query here - they have been expressly disallowed", "!g_physicsBroadphaseQueriesNotAllowedForWorld[worldId] || !Dvar_GetBool( physics_allowQueryDisabling )") )
      __debugbreak();
  }
  if ( g_physicsQueriesNotAllowedForWorld[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8647, ASSERT_TYPE_ASSERT, "(!g_physicsQueriesNotAllowedForWorld[worldId])", "%s\n\tCan't perform a physics query here - they have been expressly disallowed", "!g_physicsQueriesNotAllowedForWorld[worldId]") )
    __debugbreak();
  CG_EntityWorkers_CheckHasAnyLock_Physics();
  if ( (unsigned int)v8 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8404, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( g_physicsBroadphaseRefreshNeeded[v8] )
    Physics_UpdateBroadphase((Physics_WorldId)v8, 1);
  v10 = 0.03125 * start->v[1];
  v11 = 0.03125 * start->v[2];
  starta.m_quad.m128_f32[0] = 0.03125 * start->v[0];
  v12 = 0.03125 * end->v[1];
  starta.m_quad.m128_f32[1] = v10;
  v13 = 0.03125 * end->v[2];
  starta.m_quad.m128_f32[2] = v11;
  enda.m_quad.m128_f32[0] = 0.03125 * end->v[0];
  enda.m_quad.m128_f32[1] = v12;
  enda.m_quad.m128_f32[2] = v13;
  starta.m_quad.m128_f32[3] = 0.0;
  enda.m_quad.m128_f32[3] = 0.0;
  switch ( (int)v8 )
  {
    case 0:
      Profile_Begin(702);
      break;
    case 1:
      Profile_Begin(703);
      break;
    case 2:
    case 5:
      Profile_Begin(704);
      break;
    case 3:
    case 6:
      Profile_Begin(705);
      break;
    case 4:
    case 7:
      Profile_Begin(706);
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8704, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown world id") )
        __debugbreak();
      break;
  }
  HavokPhysics_Raycast((Physics_WorldId)v8, &starta, &enda, extendedData, result);
  Profile_EndInternal(NULL);
}

/*
==============
Physics_Raycast
==============
*/
void Physics_Raycast(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *start, const vec3_t *end, Physics_RaycastExtendedData *extendedData, HavokPhysics_CollisionQueryResult *result)
{
  __int64 v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  __int64 v14; 
  hkVector4f enda; 
  hkVector4f starta; 

  v9 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9287, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to fire Raycast against body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v9 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9288, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to fire Raycast against body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v9) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v14) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9289, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to fire raycast against body with invalid body id %i", "Physics_IsRigidBodyIdValid( bodyId )", v14) )
      __debugbreak();
  }
  if ( ((LODWORD(start->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9290, ASSERT_TYPE_ASSERT, "(!IS_NAN( start[0] ) && !IS_NAN( start[1] ) && !IS_NAN( start[2] ))", "%s\n\tPhysics: Trying to fire Raycast against body with invalid start", "!IS_NAN( start[0] ) && !IS_NAN( start[1] ) && !IS_NAN( start[2] )") )
    __debugbreak();
  if ( ((LODWORD(end->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9291, ASSERT_TYPE_ASSERT, "(!IS_NAN( end[0] ) && !IS_NAN( end[1] ) && !IS_NAN( end[2] ))", "%s\n\tPhysics: Trying to fire Raycast against body with invalid start", "!IS_NAN( end[0] ) && !IS_NAN( end[1] ) && !IS_NAN( end[2] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9292, ASSERT_TYPE_ASSERT, "(extendedData)", "%s\n\tPhysics: Trying to fire Raycast against body with invalid extended data", "extendedData") )
    __debugbreak();
  if ( extendedData->ignoreBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9293, ASSERT_TYPE_ASSERT, "(!extendedData->ignoreBodies)", "%s\n\tPhysics: Trying to fire Raycast against body with ignore bodies", "!extendedData->ignoreBodies") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9294, ASSERT_TYPE_ASSERT, "(result)", "%s\n\tPhysics: Trying to fire Raycast against body with invalid result", "result") )
    __debugbreak();
  if ( g_physicsQueriesNotAllowedForWorld[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9295, ASSERT_TYPE_ASSERT, "(!g_physicsQueriesNotAllowedForWorld[worldId])", "%s\n\tCan't perform a physics query here - they have been expressly disallowed", "!g_physicsQueriesNotAllowedForWorld[worldId]") )
    __debugbreak();
  CG_EntityWorkers_CheckHasAnyLock_Physics();
  v10 = 0.03125 * start->v[1];
  v11 = 0.03125 * start->v[2];
  starta.m_quad.m128_f32[0] = 0.03125 * start->v[0];
  v12 = 0.03125 * end->v[1];
  starta.m_quad.m128_f32[1] = v10;
  v13 = 0.03125 * end->v[2];
  starta.m_quad.m128_f32[2] = v11;
  enda.m_quad.m128_f32[0] = 0.03125 * end->v[0];
  enda.m_quad.m128_f32[1] = v12;
  enda.m_quad.m128_f32[2] = v13;
  starta.m_quad.m128_f32[3] = 0.0;
  enda.m_quad.m128_f32[3] = 0.0;
  switch ( (int)v9 )
  {
    case 0:
      Profile_Begin(732);
      break;
    case 1:
      Profile_Begin(733);
      break;
    case 2:
    case 5:
      Profile_Begin(734);
      break;
    case 3:
    case 6:
      Profile_Begin(735);
      break;
    case 4:
    case 7:
      Profile_Begin(736);
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9346, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown world id") )
        __debugbreak();
      break;
  }
  HavokPhysics_Raycast((Physics_WorldId)v9, (hknpBodyId)bodyId, &starta, &enda, extendedData, result);
  Profile_EndInternal(NULL);
}

/*
==============
Physics_ReleaseMapLocalAllocatorBuffer
==============
*/

void Physics_ReleaseMapLocalAllocatorBuffer(void)
{
  HavokPhysics_ReleaseMapLocalAllocatorBuffer();
}

/*
==============
Physics_ReleasePhysicsAsset
==============
*/
void Physics_ReleasePhysicsAsset(PhysicsAsset *physicsAsset, bool unloadPackFileData)
{
  __int64 v4; 
  int serverEnt; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3677, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Release PhysicsAsset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (physicsAsset->usageCounter.serverEnt || physicsAsset->usageCounter.clientEnt || physicsAsset->usageCounter.dynEnt) && DB_ShouldUpdateGameOnPhysicsChange() )
  {
    if ( physicsAsset->usageCounter.serverEnt )
      G_Utils_PhysicsPrepareForPhysicsAssetChange(physicsAsset);
    if ( physicsAsset->usageCounter.clientEnt )
      CG_Entity_PhysicsPrepareForPhysicsAssetChange(physicsAsset);
    if ( physicsAsset->usageCounter.dynEnt )
      DynEnt_PrepareForPhysicsAssetChange(physicsAsset);
  }
  if ( physicsAsset->usageCounter.serverEnt )
  {
    serverEnt = physicsAsset->usageCounter.serverEnt;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3701, ASSERT_TYPE_ASSERT, "(physicsAsset->usageCounter.serverEnt == 0)", "%s\n\tPhysicsAsset %s has server ent refcount of %i", "physicsAsset->usageCounter.serverEnt == 0", physicsAsset->name, serverEnt) )
      __debugbreak();
  }
  if ( physicsAsset->usageCounter.clientEnt )
  {
    LODWORD(v4) = physicsAsset->usageCounter.clientEnt;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3702, ASSERT_TYPE_ASSERT, "(physicsAsset->usageCounter.clientEnt == 0)", "%s\n\tPhysicsAsset %s has client ent refcount of %i", "physicsAsset->usageCounter.clientEnt == 0", physicsAsset->name, v4) )
      __debugbreak();
  }
  if ( physicsAsset->usageCounter.dynEnt )
  {
    LODWORD(v4) = physicsAsset->usageCounter.dynEnt;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3703, ASSERT_TYPE_ASSERT, "(physicsAsset->usageCounter.dynEnt == 0)", "%s\n\tPhysicsAsset %s has dyn ent refcount of %i", "physicsAsset->usageCounter.dynEnt == 0", physicsAsset->name, v4) )
      __debugbreak();
  }
  HavokPhysics_ReleasePhysicsAsset(physicsAsset, unloadPackFileData);
}

/*
==============
Physics_ReleasePhysicsLibrary
==============
*/
void Physics_ReleasePhysicsLibrary(PhysicsLibrary *physicsLibrary)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3541, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Release PhysicsLibary when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  HavokPhysics_ReleasePhysicsLibrary(physicsLibrary);
}

/*
==============
Physics_ReleasePhysicsSFXEventAsset
==============
*/
void Physics_ReleasePhysicsSFXEventAsset(PhysicsSFXEventAsset *physicsSFXEventAsset)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3564, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Release PhysicsSFXEventAsset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  HavokPhysics_ReleasePhysicsSFXEventAsset(physicsSFXEventAsset);
}

/*
==============
Physics_ReleasePhysicsVFXEventAsset
==============
*/
void Physics_ReleasePhysicsVFXEventAsset(PhysicsVFXEventAsset *physicsVFXEventAsset)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3619, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Release PhysicsVFXEventAsset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  HavokPhysics_ReleasePhysicsVFXEventAsset(physicsVFXEventAsset);
}

/*
==============
Physics_ReleaseShape
==============
*/

void __fastcall Physics_ReleaseShape(Physics_WorldId worldId, hknpShape *shape, bool finalReference)
{
  HavokPhysics_ReleaseShape(worldId, shape, finalReference);
}

/*
==============
Physics_ReleaseXModelAsset
==============
*/
void Physics_ReleaseXModelAsset(XModel *xmodel)
{
  __int64 v2; 
  int serverEnt; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4163, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Release XModel Asset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (xmodel->physicsUsageCounter.serverEnt || xmodel->physicsUsageCounter.clientEnt || xmodel->physicsUsageCounter.dynEnt) && DB_ShouldUpdateGameOnPhysicsChange() )
  {
    if ( xmodel->physicsUsageCounter.serverEnt )
      G_Utils_PhysicsPrepareForXModelChange(xmodel);
    if ( xmodel->physicsUsageCounter.clientEnt )
      CG_Entity_PhysicsPrepareForXModelChange(xmodel);
    if ( xmodel->physicsUsageCounter.dynEnt )
      DynEnt_PrepareForXModelChange(xmodel);
  }
  if ( xmodel->physicsUsageCounter.serverEnt )
  {
    serverEnt = xmodel->physicsUsageCounter.serverEnt;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4187, ASSERT_TYPE_ASSERT, "(xmodel->physicsUsageCounter.serverEnt == 0)", "%s\n\tXModel %s has server ent refcount of %i", "xmodel->physicsUsageCounter.serverEnt == 0", xmodel->name, serverEnt) )
      __debugbreak();
  }
  if ( xmodel->physicsUsageCounter.clientEnt )
  {
    LODWORD(v2) = xmodel->physicsUsageCounter.clientEnt;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4188, ASSERT_TYPE_ASSERT, "(xmodel->physicsUsageCounter.clientEnt == 0)", "%s\n\tXModel %s has client ent refcount of %i", "xmodel->physicsUsageCounter.clientEnt == 0", xmodel->name, v2) )
      __debugbreak();
  }
  if ( xmodel->physicsUsageCounter.dynEnt )
  {
    LODWORD(v2) = xmodel->physicsUsageCounter.dynEnt;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4189, ASSERT_TYPE_ASSERT, "(xmodel->physicsUsageCounter.dynEnt == 0)", "%s\n\tXModel %s has dyn ent refcount of %i", "xmodel->physicsUsageCounter.dynEnt == 0", xmodel->name, v2) )
      __debugbreak();
  }
  HavokPhysics_ReleaseXModelAsset(xmodel);
}

/*
==============
Physics_ReleaseXModelDetailCollisionAsset
==============
*/
void Physics_ReleaseXModelDetailCollisionAsset(XModelDetailCollision *detailCollision, bool unloadPackFileData)
{
  if ( detailCollision->physicsLODDataSize )
  {
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4100, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Release XModelDetailCollision Asset when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( DB_ShouldUpdateGameOnPhysicsChange() )
    {
      G_Utils_PhysicsPrepareForXModelDetailCollisionChange(detailCollision);
      CG_Entity_PhysicsPrepareForXModelDetailCollisionChange(detailCollision);
      DynEnt_PrepareForXModelDetailCollisionChange(detailCollision);
    }
    HavokPhysics_ReleaseXModelDetailCollisionAsset(detailCollision, unloadPackFileData);
  }
}

/*
==============
Physics_RemoveClipMap
==============
*/
void Physics_RemoveClipMap(clipMap_t *clipMap)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4053, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Release ClipMap when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  HavokPhysics_RemoveClipMap(clipMap);
}

/*
==============
Physics_RemoveInstanceFromWorld
==============
*/
void Physics_RemoveInstanceFromWorld(Physics_WorldId worldId, unsigned int instanceId, bool activate)
{
  __int64 v6; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5940, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to remove instance from world when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5941, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to remove instance from world with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( instanceId == -1 )
  {
    LODWORD(v6) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5942, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to remove instance from world with invalid instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v6) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  HavokPhysics_RemoveInstanceFromWorld(worldId, instanceId, activate);
}

/*
==============
Physics_RemoveRigidBodiesFromWorld
==============
*/
void Physics_RemoveRigidBodiesFromWorld(Physics_WorldId worldId, unsigned int *bodyIds, int numBodies, bool activate)
{
  __int64 v8; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5954, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to remove bodies from world when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5955, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to remove bodies from world with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( !bodyIds )
  {
    LODWORD(v8) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5956, ASSERT_TYPE_ASSERT, "(bodyIds)", "%s\n\tPhysics: Trying to remove bodies from world with invalid bodies array in world %i", "bodyIds", v8) )
      __debugbreak();
  }
  if ( numBodies <= 0 )
  {
    LODWORD(v8) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5957, ASSERT_TYPE_ASSERT, "(numBodies > 0)", "%s\n\tPhysics: Trying to remove bodies from world with no bodies in world %i", "numBodies > 0", v8) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  HavokPhysics_RemoveRigidBodiesFromWorld(worldId, (hknpBodyId *)bodyIds, numBodies, activate);
}

/*
==============
Physics_RemoveShapeList
==============
*/
void Physics_RemoveShapeList(char *rawShapeData, unsigned int rawShapeDataSize)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3835, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Remove ShapeList when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !rawShapeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3837, ASSERT_TYPE_ASSERT, "(rawShapeData)", (const char *)&queryFormat, "rawShapeData") )
    __debugbreak();
  if ( !rawShapeDataSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3838, ASSERT_TYPE_ASSERT, "(rawShapeDataSize > 0)", (const char *)&queryFormat, "rawShapeDataSize > 0") )
    __debugbreak();
  HavokPhysics_RemoveShapeList(rawShapeData, rawShapeDataSize);
}

/*
==============
Physics_RenderDebug
==============
*/
void Physics_RenderDebug(GfxCmdBufContext *gfxContext)
{
  bool v2; 
  GfxCmdBufContext v3; 

  v3 = *gfxContext;
  PhysPerfTrack_DebugRender(&v3);
  if ( Physics_RenderDebugEnabled() )
  {
    v2 = g_physicsServerWorldsCreated || g_physicsClientWorldsCreated;
    v3 = *gfxContext;
    HavokPhysics_RenderDebug(&v3, v2);
  }
}

/*
==============
Physics_RenderDebugEnabled
==============
*/
bool Physics_RenderDebugEnabled()
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  const dvar_t *v2; 
  int Int_Internal_DebugName; 

  if ( physics_debugVisualizeWorld->current.integer )
    goto LABEL_15;
  v0 = DVARBOOL_physics_debugTrackPerfPMoveHeatmap;
  if ( !DVARBOOL_physics_debugTrackPerfPMoveHeatmap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_debugTrackPerfPMoveHeatmap") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
    goto LABEL_15;
  v1 = DVARBOOL_physics_debugTrackPerfBulletHeatmap;
  if ( !DVARBOOL_physics_debugTrackPerfBulletHeatmap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_debugTrackPerfBulletHeatmap") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
    goto LABEL_15;
  v2 = DVARINT_physics_debugTrackWorldMeshDisplayArea;
  if ( !DVARINT_physics_debugTrackWorldMeshDisplayArea && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_debugTrackWorldMeshDisplayArea") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.integer || (Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_physics_debugRaycasterMode, "physics_debugRaycasterMode")) != 0 )
LABEL_15:
    LOBYTE(Int_Internal_DebugName) = 1;
  return Int_Internal_DebugName;
}

/*
==============
Physics_RenderDebugOverlays
==============
*/
void Physics_RenderDebugOverlays(GfxCmdBufContext *gfxContext)
{
  GfxCmdBufContext v1; 

  v1 = *gfxContext;
  PhysPerfRaycast_DebugRender(&v1);
}

/*
==============
Physics_ResetWorkerError
==============
*/
void Physics_ResetWorkerError(void)
{
  s_physicsHasWorkerError = 0;
}

/*
==============
Physics_SetBroadphaseNeedsRefresh
==============
*/
void Physics_SetBroadphaseNeedsRefresh(const Physics_WorldId worldId, const bool needsRefresh)
{
  __int64 v2; 

  v2 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8395, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8396, ASSERT_TYPE_ASSERT, "(!Sys_IsServerUserMoveWorker())", "%s\n\tCan't impact the broadphase during entity workers", "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  g_physicsBroadphaseRefreshNeeded[v2] = needsRefresh;
}

/*
==============
Physics_SetCGCharacterProxyPredictiveDebugData
==============
*/
void Physics_SetCGCharacterProxyPredictiveDebugData(LocalClientNum_t localClientNum, int numCharacterProxies)
{
  s_debugProfileData.clientData[localClientNum].numPredictiveCharacterProxies = numCharacterProxies;
}

/*
==============
Physics_SetCGDynEntAuthoritativeDebugData
==============
*/
void Physics_SetCGDynEntAuthoritativeDebugData(LocalClientNum_t localClientNum, int dynEntCount, int dynEntSimpleCount, int dynEntSimpleAdditionalBoneCount, int dynEntComplexCount, int dynEntComplexBodyCount, int dynEntComplexAdditionalBoneCount)
{
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  v7 = localClientNum;
  v8 = v7 * 208 + 24i64 * s_debugProfileData.clientData[v7].dynEntsDataBufferIndex;
  *(int *)((char *)&s_debugProfileData.clientData[0].dynEntsData[0].dynEntCount + v8) += dynEntCount;
  v9 = v7 * 208 + 24i64 * s_debugProfileData.clientData[v7].dynEntsDataBufferIndex;
  *(int *)((char *)&s_debugProfileData.clientData[0].dynEntsData[0].dynEntSimpleCount + v9) += dynEntSimpleCount;
  v10 = v7 * 208 + 24i64 * s_debugProfileData.clientData[v7].dynEntsDataBufferIndex;
  *(int *)((char *)&s_debugProfileData.clientData[0].dynEntsData[0].dynEntSimpleAdditionalBoneCount + v10) += dynEntSimpleAdditionalBoneCount;
  v11 = v7 * 208 + 24i64 * s_debugProfileData.clientData[v7].dynEntsDataBufferIndex;
  *(int *)((char *)&s_debugProfileData.clientData[0].dynEntsData[0].dynEntComplexCount + v11) += dynEntComplexCount;
  v12 = v7 * 208 + 24i64 * s_debugProfileData.clientData[v7].dynEntsDataBufferIndex;
  *(int *)((char *)&s_debugProfileData.clientData[0].dynEntsData[0].dynEntComplexBodyCount + v12) += dynEntComplexBodyCount;
  v13 = v7 * 208 + 24i64 * s_debugProfileData.clientData[v7].dynEntsDataBufferIndex;
  *(int *)((char *)&s_debugProfileData.clientData[0].dynEntsData[0].dynEntComplexAdditionalBoneCount + v13) += dynEntComplexAdditionalBoneCount;
}

/*
==============
Physics_SetCGDynEntDetailPropagationDebugData
==============
*/
void Physics_SetCGDynEntDetailPropagationDebugData(LocalClientNum_t localClientNum, int detailBoundedCount, int duplicationCount, int duplicationBodyCount)
{
  __int64 v4; 

  v4 = localClientNum;
  s_debugProfileData.clientData[v4].dynEntDetailBoundedCount = detailBoundedCount;
  s_debugProfileData.clientData[v4].dynEntDetailDuplicationCount = duplicationCount;
  s_debugProfileData.clientData[v4].dynEntDetailDuplicationBodyCount = duplicationBodyCount;
}

/*
==============
Physics_SetCGFXEmittersDetailPropagationDebugData
==============
*/
void Physics_SetCGFXEmittersDetailPropagationDebugData(LocalClientNum_t localClientNum, int numEmitters, int numPhysicsEmitters)
{
  __int64 v3; 

  v3 = localClientNum;
  s_debugProfileData.clientData[v3].fxEmittersCount = numEmitters;
  s_debugProfileData.clientData[v3].fxPhysicsEmittersCount = numPhysicsEmitters;
}

/*
==============
Physics_SetCGFXOldDetailPropagationDebugData
==============
*/
void Physics_SetCGFXOldDetailPropagationDebugData(LocalClientNum_t localClientNum, int numOldElems, int numOldElemsWithPhysics)
{
  __int64 v3; 

  v3 = localClientNum;
  s_debugProfileData.clientData[v3].fxOldElemsCount = numOldElems;
  s_debugProfileData.clientData[v3].fxOldElemsWithPhysicsCount = numOldElemsWithPhysics;
}

/*
==============
Physics_SetCGFXParticlesDetailPropagationDebugData
==============
*/
void Physics_SetCGFXParticlesDetailPropagationDebugData(LocalClientNum_t localClientNum, int numParticles, int numPhysicsParticles)
{
  __int64 v3; 

  v3 = localClientNum;
  s_debugProfileData.clientData[v3].fxParticlesCount = numParticles;
  s_debugProfileData.clientData[v3].fxPhysicsParticlesCount = numPhysicsParticles;
}

/*
==============
Physics_SetCGFXStatesDetailPropagationDebugData
==============
*/
void Physics_SetCGFXStatesDetailPropagationDebugData(LocalClientNum_t localClientNum, int numState, int numPhysicsState)
{
  __int64 v3; 

  v3 = localClientNum;
  s_debugProfileData.clientData[v3].fxStatesCount = numState;
  s_debugProfileData.clientData[v3].fxPhysicsStatesCount = numPhysicsState;
}

/*
==============
Physics_SetCGFXSystemsDetailPropagationDebugData
==============
*/
void Physics_SetCGFXSystemsDetailPropagationDebugData(LocalClientNum_t localClientNum, int numSystems, int numPhysicsSystems)
{
  __int64 v3; 

  v3 = localClientNum;
  s_debugProfileData.clientData[v3].fxSystemsCount = numSystems;
  s_debugProfileData.clientData[v3].fxPhysicsSystemsCount = numPhysicsSystems;
}

/*
==============
Physics_SetCGGlassDetailPropagationDebugData
==============
*/
void Physics_SetCGGlassDetailPropagationDebugData(LocalClientNum_t localClientNum, int glassPieceCount, int glassPhysicsCount, int glassBodyCount)
{
  __int64 v4; 

  v4 = localClientNum;
  s_debugProfileData.clientData[v4].glassPieceCount = glassPieceCount;
  s_debugProfileData.clientData[v4].glassPhysicsCount = glassPhysicsCount;
  s_debugProfileData.clientData[v4].glassBodyCount = glassBodyCount;
}

/*
==============
Physics_SetCGPhysicsObjectAuthoritativeDebugData
==============
*/
void Physics_SetCGPhysicsObjectAuthoritativeDebugData(LocalClientNum_t localClientNum, int physicsObjectDynamicBoneMappingHavingCount, int physicsObjectDynamicBoneMappingCount)
{
  __int64 v3; 

  v3 = localClientNum;
  s_debugProfileData.clientData[v3].authoritativePhysicsObjectDynamicBoneMappingHavingCount = physicsObjectDynamicBoneMappingHavingCount;
  s_debugProfileData.clientData[v3].authoritativePhysicsObjectDynamicBoneMappingCount = physicsObjectDynamicBoneMappingCount;
}

/*
==============
Physics_SetCGPhysicsObjectDetailPropagationDebugData
==============
*/
void Physics_SetCGPhysicsObjectDetailPropagationDebugData(LocalClientNum_t localClientNum, int detailBoundedCount, int duplicationCount, int duplicationBodyCount)
{
  __int64 v4; 

  v4 = localClientNum;
  s_debugProfileData.clientData[v4].physicsObjectDetailBoundedCount = detailBoundedCount;
  s_debugProfileData.clientData[v4].physicsObjectDetailDuplicationCount = duplicationCount;
  s_debugProfileData.clientData[v4].physicsObjectDetailDuplicationBodyCount = duplicationBodyCount;
}

/*
==============
Physics_SetCGPhysicsObjectPredictiveDebugData
==============
*/
void Physics_SetCGPhysicsObjectPredictiveDebugData(LocalClientNum_t localClientNum, int numPhysicsObjects, int numPhysicsObjectsNeedingUpdate, int numPhysicsObjectsNeedingFullUpdate, int physicsObjectChildHavingCount, int physicsObjectChildCount, int physicsObjectDynamicBoneMappingHavingCount, int physicsObjectDynamicBoneMappingCount, int physicsObjectKeyframedBoneMappingHavingCount, int physicsObjectKeyframedBoneMappingCount, int physicsObjectKeyframedBoneMappingHavingCountUpdated, int physicsObjectKeyframedBoneMappingCountUpdated, int physicsObjectKeyframedOffsetMappingHavingCount, int physicsObjectKeyframedOffsetMappingCount, int physicsObjectKeyframedOffsetMappingHavingCountUpdated, int physicsObjectKeyframedOffsetMappingCountUpdated)
{
  __int64 v16; 

  v16 = localClientNum;
  s_debugProfileData.clientData[v16].predictivePhysicsObjectChildHavingCount = physicsObjectChildHavingCount;
  s_debugProfileData.clientData[v16].predictivePhysicsObjectChildCount = physicsObjectChildCount;
  s_debugProfileData.clientData[v16].predictivePhysicsObjectDynamicBoneMappingHavingCount = physicsObjectDynamicBoneMappingHavingCount;
  s_debugProfileData.clientData[v16].predictivePhysicsObjectDynamicBoneMappingCount = physicsObjectDynamicBoneMappingCount;
  s_debugProfileData.clientData[v16].predictivePhysicsObjectKeyframedBoneMappingHavingCount = physicsObjectKeyframedBoneMappingHavingCount;
  s_debugProfileData.clientData[v16].predictivePhysicsObjectKeyframedBoneMappingCount = physicsObjectKeyframedBoneMappingCount;
  s_debugProfileData.clientData[v16].predictivePhysicsObjectKeyframedBoneMappingHavingCountUpdated = physicsObjectKeyframedBoneMappingHavingCountUpdated;
  s_debugProfileData.clientData[v16].predictivePhysicsObjectKeyframedBoneMappingCountUpdated = physicsObjectKeyframedBoneMappingCountUpdated;
  s_debugProfileData.clientData[v16].predictivePhysicsObjectKeyframedOffsetMappingHavingCount = physicsObjectKeyframedOffsetMappingHavingCount;
  s_debugProfileData.clientData[v16].predictivePhysicsObjectKeyframedOffsetMappingCount = physicsObjectKeyframedOffsetMappingCount;
  s_debugProfileData.clientData[v16].predictivePhysicsObjectKeyframedOffsetMappingHavingCountUpdated = physicsObjectKeyframedOffsetMappingHavingCountUpdated;
  s_debugProfileData.clientData[v16].predictivePhysicsObjectKeyframedOffsetMappingCountUpdated = physicsObjectKeyframedOffsetMappingCountUpdated;
  s_debugProfileData.clientData[v16].numPredictivePhysicsObjects = numPhysicsObjects;
  s_debugProfileData.clientData[v16].numPredictivePhysicsObjectsNeedingUpdate = numPhysicsObjectsNeedingUpdate;
  s_debugProfileData.clientData[v16].numPredictivePhysicsObjectsNeedingFullUpdate = numPhysicsObjectsNeedingFullUpdate;
}

/*
==============
Physics_SetCGPhysicsObjectPropagatedDebugData
==============
*/
void Physics_SetCGPhysicsObjectPropagatedDebugData(LocalClientNum_t localClientNum, int numPropagatedPhysicsObjects, int numPropagatedBodies)
{
  __int64 v3; 

  v3 = localClientNum;
  s_debugProfileData.clientData[v3].numPropagatedPhysicsObjects = numPropagatedPhysicsObjects;
  s_debugProfileData.clientData[v3].numPropagatedBodies = numPropagatedBodies;
}

/*
==============
Physics_SetDebugCameras
==============
*/
void Physics_SetDebugCameras(const GfxViewInfo *viewInfo)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 12928, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set Debug Cameras when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  HavokPhysics_SetDebugCameras(viewInfo);
}

/*
==============
Physics_SetErrorString
==============
*/

void __fastcall Physics_SetErrorString(const char *string)
{
  HavokPhysics_SetErrorString(string);
}

/*
==============
Physics_SetInstanceContents
==============
*/
void Physics_SetInstanceContents(Physics_WorldId worldId, unsigned int instanceId, int contents)
{
  signed int v6; 
  int NumRigidBodys; 
  __int64 v8; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6442, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set Instance contents when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6443, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set Instance contents with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( instanceId == -1 )
  {
    LODWORD(v8) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6444, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Set Instance contents with invalid instance %i", "instanceId != PHYSICSINSTANCEID_INVALID", v8) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  v6 = 0;
  NumRigidBodys = Physics_GetNumRigidBodys(worldId, instanceId);
  if ( NumRigidBodys > 0 )
  {
    do
      Physics_SetRigidBodyContents(worldId, instanceId, v6++, contents, 0);
    while ( v6 < NumRigidBodys );
  }
}

/*
==============
Physics_SetInstanceDetailModel
==============
*/
void Physics_SetInstanceDetailModel(const Physics_WorldId worldId, const unsigned int instanceId, const XModel *const xmodel)
{
  __int64 v6; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5864, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set Instance detail model Asset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5865, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set Instance detail model Asset with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( instanceId == -1 )
  {
    LODWORD(v6) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5866, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Instance model Asset with invalid instance Id in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v6) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
  {
    LODWORD(v6) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5867, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Set Instance model Asset in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v6) )
      __debugbreak();
  }
  if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
    LODWORD(v6) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5868, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Set Instance model Asset in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v6) )
      __debugbreak();
  }
  if ( !xmodel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5869, ASSERT_TYPE_ASSERT, "(xmodel)", "%s\n\tPhysics: Trying to Set null Instance model detail Asset", "xmodel") )
    __debugbreak();
  HavokPhysics_SetInstanceDetailModel(worldId, instanceId, xmodel);
}

/*
==============
Physics_SetInstanceXModel
==============
*/
void Physics_SetInstanceXModel(const Physics_WorldId worldId, const unsigned int instanceId, const XModel *const xmodel)
{
  __int64 v6; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5848, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set Instance model Asset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5849, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set Instance model Asset with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( instanceId == -1 )
  {
    LODWORD(v6) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5850, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Set Instance model Asset with invalid instance Id in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v6) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(worldId - 2) <= 5 )
  {
    LODWORD(v6) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5851, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Set Instance model Asset in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v6) )
      __debugbreak();
  }
  if ( !g_physicsServerWorldsCreated && (unsigned int)worldId <= PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
    LODWORD(v6) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5852, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Set Instance model Asset in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v6) )
      __debugbreak();
  }
  HavokPhysics_SetInstanceXModel(worldId, instanceId, xmodel);
}

/*
==============
Physics_SetMainShapeList
==============
*/
void Physics_SetMainShapeList(HavokPhysicsShapeList *shapeList)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3848, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to SetMainShapeList when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  HavokPhysics_SetMainShapeList(shapeList);
}

/*
==============
Physics_SetMapLocalAllocatorBuffer
==============
*/
void Physics_SetMapLocalAllocatorBuffer(void *buffer, unsigned int size)
{
  __int64 v4; 

  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1583, ASSERT_TYPE_ASSERT, "( buffer ) != ( nullptr )", "%s != %s\n\t%p, %p", "buffer", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( !size )
  {
    LODWORD(v4) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1584, ASSERT_TYPE_ASSERT, "( size ) > ( 0 )", "%s > %s\n\t%u, %u", "size", "0", v4, 0i64) )
      __debugbreak();
  }
  HavokPhysics_SetMapLocalAllocatorBuffer(buffer, size);
}

/*
==============
Physics_SetMassPropertiesCenterOfMass
==============
*/
void Physics_SetMassPropertiesCenterOfMass(hkMassProperties *massProperties, const vec3_t *centerOfMass)
{
  float v4; 
  float v5; 
  hkVector4f centerOfMassa; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10171, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to SetMassPropertiesCenterOfMass when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !massProperties && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10172, ASSERT_TYPE_ASSERT, "(massProperties)", "%s\n\tPhysics: Trying to SetMassPropertiesCenterOfMass with NULL mass properties", "massProperties") )
    __debugbreak();
  v4 = 0.03125 * centerOfMass->v[0];
  v5 = 0.03125 * centerOfMass->v[2];
  centerOfMassa.m_quad.m128_f32[1] = 0.03125 * centerOfMass->v[1];
  centerOfMassa.m_quad.m128_f32[3] = 0.0;
  centerOfMassa.m_quad.m128_f32[0] = v4;
  centerOfMassa.m_quad.m128_f32[2] = v5;
  HavokPhysics_SetMassPropertiesCenterOfMass(massProperties, &centerOfMassa);
}

/*
==============
Physics_SetMassPropertiesInertiaTensor
==============
*/
void Physics_SetMassPropertiesInertiaTensor(hkMassProperties *massProperties, const vec3_t *inertiaTensor)
{
  float v4; 
  float v5; 
  hkVector4f inertiaTensora; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10186, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to SetMassPropertiesInertiaTensor when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !massProperties && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10187, ASSERT_TYPE_ASSERT, "(massProperties)", "%s\n\tPhysics: Trying to SetMassPropertiesInertiaTensor with NULL mass properties", "massProperties") )
    __debugbreak();
  v4 = 0.03125 * inertiaTensor->v[0];
  v5 = 0.03125 * inertiaTensor->v[2];
  inertiaTensora.m_quad.m128_f32[1] = 0.03125 * inertiaTensor->v[1];
  inertiaTensora.m_quad.m128_f32[3] = 0.0;
  inertiaTensora.m_quad.m128_f32[0] = v4;
  inertiaTensora.m_quad.m128_f32[2] = v5;
  HavokPhysics_SetMassPropertiesInertiaTensor(massProperties, &inertiaTensora);
}

/*
==============
Physics_SetMassPropertiesMass
==============
*/
void Physics_SetMassPropertiesMass(hkMassProperties *massProperties, float mass)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10158, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to SetMassPropertiesMass when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( !massProperties && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10159, ASSERT_TYPE_ASSERT, "(massProperties)", "%s\n\tPhysics: Trying to SetMassPropertiesMass with NULL mass properties", "massProperties") )
    __debugbreak();
  if ( mass < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 10160, ASSERT_TYPE_ASSERT, "(mass >= 0.f)", "%s\n\tPhysics: Trying to SetMassPropertiesMass with negative mass", "mass >= 0.f") )
    __debugbreak();
  HavokPhysics_SetMassPropertiesMass(massProperties, mass);
}

/*
==============
Physics_SetNoBroadphaseQueriesAllowed
==============
*/
void Physics_SetNoBroadphaseQueriesAllowed(Physics_WorldId worldId, bool noQueriesAllowed)
{
  __int64 v2; 
  bool *v4; 

  v2 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8361, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  v4 = &g_physicsBroadphaseQueriesNotAllowedForWorld[v2];
  if ( *v4 == noQueriesAllowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8362, ASSERT_TYPE_ASSERT, "(g_physicsBroadphaseQueriesNotAllowedForWorld[worldId] != noQueriesAllowed)", (const char *)&queryFormat, "g_physicsBroadphaseQueriesNotAllowedForWorld[worldId] != noQueriesAllowed") )
    __debugbreak();
  *v4 = noQueriesAllowed;
}

/*
==============
Physics_SetNoQueriesAllowed
==============
*/
void Physics_SetNoQueriesAllowed(Physics_WorldId worldId, bool noQueriesAllowed)
{
  __int64 v2; 
  bool *v4; 

  v2 = worldId;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8378, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  v4 = &g_physicsQueriesNotAllowedForWorld[v2];
  if ( *v4 == noQueriesAllowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8379, ASSERT_TYPE_ASSERT, "(g_physicsQueriesNotAllowedForWorld[worldId] != noQueriesAllowed)", (const char *)&queryFormat, "g_physicsQueriesNotAllowedForWorld[worldId] != noQueriesAllowed") )
    __debugbreak();
  *v4 = noQueriesAllowed;
}

/*
==============
Physics_SetRigidBodyCenterOfMass
==============
*/
void Physics_SetRigidBodyCenterOfMass(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *centerOfMass)
{
  float v6; 
  float v7; 
  __int64 v8; 
  Physics_WorldId v9; 
  hkVector4f centerOfMassa; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6327, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set Rigid Body center of mass when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v9 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6328, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to set Rigid Body center of mass with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v9) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v8) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6329, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to set Body center of mass with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v8) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  v6 = 0.03125 * centerOfMass->v[0];
  v7 = 0.03125 * centerOfMass->v[2];
  centerOfMassa.m_quad.m128_f32[1] = 0.03125 * centerOfMass->v[1];
  centerOfMassa.m_quad.m128_f32[3] = 0.0;
  centerOfMassa.m_quad.m128_f32[0] = v6;
  centerOfMassa.m_quad.m128_f32[2] = v7;
  HavokPhysics_SetRigidBodyCenterOfMass(worldId, (hknpBodyId)bodyId, &centerOfMassa);
}

/*
==============
Physics_SetRigidBodyContents
==============
*/
void Physics_SetRigidBodyContents(Physics_WorldId worldId, unsigned int bodyId, int contents, bool forceCacheRebuild)
{
  Physics_WorldId v8; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6484, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set RigidBody contents when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v8 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6485, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set RigidBody contents with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v8) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  HavokPhysics_SetRigidBodyContents(worldId, (hknpBodyId)bodyId, contents, forceCacheRebuild);
}

/*
==============
Physics_SetRigidBodyContents
==============
*/
void Physics_SetRigidBodyContents(Physics_WorldId worldId, unsigned int instanceId, unsigned int bodyIdx, int contents, bool forceCacheRebuild)
{
  hknpBodyId v9; 
  __int64 v10; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6466, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set RigidBody contents when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6467, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set RigidBody contents with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( instanceId == -1 )
  {
    LODWORD(v10) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6468, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Set RigidBody contents with invalid instance %i", "instanceId != PHYSICSINSTANCEID_INVALID", v10) )
      __debugbreak();
  }
  if ( bodyIdx >= Physics_GetNumRigidBodys(worldId, instanceId) )
  {
    LODWORD(v10) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6469, ASSERT_TYPE_ASSERT, "(bodyIdx < Physics_GetNumRigidBodys( worldId, instanceId ))", "%s\n\tPhysics: Trying to Set RigidBody contents with invalid bodyIdx %i %i", "bodyIdx < Physics_GetNumRigidBodys( worldId, instanceId )", v10, bodyIdx) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  v9.m_serialAndIndex = Physics_GetRigidBodyID(worldId, instanceId, bodyIdx);
  if ( (v9.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6475, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
    __debugbreak();
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6484, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set RigidBody contents when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    LODWORD(v10) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6485, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set RigidBody contents with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v10) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  HavokPhysics_SetRigidBodyContents(worldId, v9, contents, forceCacheRebuild);
}

/*
==============
Physics_SetRigidBodyDynamic
==============
*/
void Physics_SetRigidBodyDynamic(Physics_WorldId worldId, unsigned int bodyId)
{
  __int64 v4; 
  Physics_WorldId v5; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6599, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set RigidBody Dynamic when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v5 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6600, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set RigidBody Dynamic with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v5) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v4) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6601, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Set RigidBody Dynamic with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v4) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  HavokPhysics_SetRigidBodyDynamic(worldId, (hknpBodyId)bodyId);
}

/*
==============
Physics_SetRigidBodyInverseInertiaLocal
==============
*/
void Physics_SetRigidBodyInverseInertiaLocal(Physics_WorldId worldId, unsigned int bodyId, const vec4_t *invInertia)
{
  float v6; 
  float v7; 
  __int64 v8; 
  Physics_WorldId v9; 
  hkVector4f invInertiaa; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6344, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set Rigid Body inertia local when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v9 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6345, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to set Rigid Body inertia local with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v9) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v8) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6346, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to set Body inertia local with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v8) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  v6 = 1024.0 * invInertia->v[0];
  v7 = 1024.0 * invInertia->v[2];
  invInertiaa.m_quad.m128_f32[1] = 1024.0 * invInertia->v[1];
  invInertiaa.m_quad.m128_i32[3] = LODWORD(invInertia->v[3]);
  invInertiaa.m_quad.m128_f32[0] = v6;
  invInertiaa.m_quad.m128_f32[2] = v7;
  HavokPhysics_SetRigidBodyInverseInertiaLocal(worldId, (hknpBodyId)bodyId, &invInertiaa);
}

/*
==============
Physics_SetRigidBodyKeyframed
==============
*/
void Physics_SetRigidBodyKeyframed(Physics_WorldId worldId, unsigned int bodyId)
{
  __int64 v4; 
  Physics_WorldId v5; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6586, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set RigidBody Keyframed when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v5 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6587, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set RigidBody keyframed with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v5) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v4) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6588, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Set RigidBody keyframed with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v4) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  HavokPhysics_SetRigidBodyKeyframed(worldId, (hknpBodyId)bodyId);
}

/*
==============
Physics_SetRigidBodyMass
==============
*/
void Physics_SetRigidBodyMass(Physics_WorldId worldId, unsigned int bodyId, float mass)
{
  __int64 v5; 
  Physics_WorldId v6; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6641, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set RigidBody Mass when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v6 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6642, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set RigidBody Mass with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v6) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v5) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6643, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Set RigidBody Mass with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v5) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  HavokPhysics_SetRigidBodyMass(worldId, (hknpBodyId)bodyId, mass);
}

/*
==============
Physics_SetRigidBodyStatic
==============
*/
void Physics_SetRigidBodyStatic(Physics_WorldId worldId, unsigned int bodyId)
{
  __int64 v4; 
  Physics_WorldId v5; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6613, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set RigidBody Static when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v5 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6614, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set RigidBody Static with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v5) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v4) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6615, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Set RigidBody Static with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v4) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  HavokPhysics_SetRigidBodyStatic(worldId, (hknpBodyId)bodyId);
}

/*
==============
Physics_SetRigidBodyToDefault
==============
*/
void Physics_SetRigidBodyToDefault(Physics_WorldId worldId, unsigned int bodyId, const PhysicsAsset *asset, unsigned int assetIndex)
{
  __int64 v8; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6627, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set RigidBody To Default when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6628, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set RigidBody Default with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v8) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6629, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Set RigidBody Default with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v8) )
      __debugbreak();
  }
  if ( !asset )
  {
    LODWORD(v8) = bodyId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6630, ASSERT_TYPE_ASSERT, "(asset)", "%s\n\tPhysics: Trying to Set RigidBody %i Default with invalid asset in world %i", "asset", v8, worldId) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  HavokPhysics_SetRigidBodyToDefault(worldId, (hknpBodyId)bodyId, asset, assetIndex);
}

/*
==============
Physics_SetRigidBodyVelocity
==============
*/
void Physics_SetRigidBodyVelocity(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *linearVelocity, const vec3_t *angularVelocity)
{
  float v8; 
  float v9; 
  __int64 v14; 
  Physics_WorldId v15; 
  hkVector4f hkLinVel; 
  hkVector4f hkAngVel; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6980, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set Rigid Body Velocity when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v15 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6981, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set Rigid Body Velocity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v15) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v14) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6982, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Set Rigid Body Velocity with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v14) )
      __debugbreak();
  }
  if ( ((LODWORD(linearVelocity->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(linearVelocity->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(linearVelocity->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6983, ASSERT_TYPE_ASSERT, "(!IS_NAN( linearVelocity[0] ) && !IS_NAN( linearVelocity[1] ) && !IS_NAN( linearVelocity[2] ))", "%s\n\tPhysics: Trying to Set Rigid Body Velocity with invalid linvel", "!IS_NAN( linearVelocity[0] ) && !IS_NAN( linearVelocity[1] ) && !IS_NAN( linearVelocity[2] )") )
    __debugbreak();
  if ( ((LODWORD(angularVelocity->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(angularVelocity->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(angularVelocity->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6984, ASSERT_TYPE_ASSERT, "(!IS_NAN( angularVelocity[0] ) && !IS_NAN( angularVelocity[1] ) && !IS_NAN( angularVelocity[2] ))", "%s\n\tPhysics: Trying to Set Rigid Body Velocity with invalid angvel", "!IS_NAN( angularVelocity[0] ) && !IS_NAN( angularVelocity[1] ) && !IS_NAN( angularVelocity[2] )") )
    __debugbreak();
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  v8 = 0.03125 * linearVelocity->v[1];
  v9 = 0.03125 * linearVelocity->v[2];
  hkLinVel.m_quad.m128_f32[0] = 0.03125 * linearVelocity->v[0];
  _XMM0 = 0i64;
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rbx], 0
    vinsertps xmm0, xmm0, dword ptr [rbx+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rbx+8], 20h ; ' '
  }
  hkLinVel.m_quad.m128_f32[1] = v8;
  hkAngVel.m_quad = _XMM0;
  hkLinVel.m_quad.m128_f32[2] = v9;
  hkLinVel.m_quad.m128_f32[3] = 0.0;
  HavokPhysics_SetRigidBodyVelocity(worldId, (hknpBodyId)bodyId, &hkLinVel, &hkAngVel);
}

/*
==============
Physics_SetThreadHeapAllocationGeneral
==============
*/

void __fastcall Physics_SetThreadHeapAllocationGeneral(unsigned int threadId)
{
  HavokPhysics_SetThreadHeapAllocationGeneral(threadId);
}

/*
==============
Physics_SetThreadHeapAllocationMapLocal
==============
*/

void __fastcall Physics_SetThreadHeapAllocationMapLocal(unsigned int threadId)
{
  HavokPhysics_SetThreadHeapAllocationMapLocal(threadId);
}

/*
==============
Physics_SetWorkerError
==============
*/
void Physics_SetWorkerError(void)
{
  s_physicsHasWorkerError = 1;
}

/*
==============
Physics_SetupBootDvars
==============
*/
void Physics_SetupBootDvars(void)
{
  physics_debugMemoryEnable = Dvar_RegisterInt("NTTKLMLOOS", 0, 0, 1, 4u, "Enables memory for physics debugging features");
}

/*
==============
Physics_SetupClientWorldCInfos
==============
*/
void Physics_SetupClientWorldCInfos()
{
  int maxNumRigidBodiesClient; 
  const dvar_t *v1; 
  int maxNumDetailRigidBodiesClient; 
  const dvar_t *v3; 
  int maxNumConstraintsClient; 
  const dvar_t *v5; 
  int maxNumMotionsClient; 
  const dvar_t *v7; 
  int maxNumRigidBodiesServer; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  int maxNumMotionsServer; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  bool v14; 
  __int64 v15; 
  __int64 v16; 

  if ( !s_physicsWorldPersistentBufferSizeClientPredictive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 877, ASSERT_TYPE_ASSERT, "(s_physicsWorldPersistentBufferSizeClientPredictive)", (const char *)&queryFormat, "s_physicsWorldPersistentBufferSizeClientPredictive") )
    __debugbreak();
  if ( !s_physicsWorldPersistentBufferSizeClientAuthoritative && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 878, ASSERT_TYPE_ASSERT, "(s_physicsWorldPersistentBufferSizeClientAuthoritative)", (const char *)&queryFormat, "s_physicsWorldPersistentBufferSizeClientAuthoritative") )
    __debugbreak();
  if ( !s_physicsWorldPersistentBufferSizeClientDetail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 879, ASSERT_TYPE_ASSERT, "(s_physicsWorldPersistentBufferSizeClientDetail)", (const char *)&queryFormat, "s_physicsWorldPersistentBufferSizeClientDetail") )
    __debugbreak();
  maxNumRigidBodiesClient = cm.physicsCapacities.maxNumRigidBodiesClient;
  if ( !cm.physicsCapacities.maxNumRigidBodiesClient )
  {
    v1 = DVARINT_physics_MaxNumClientBodies;
    if ( !DVARINT_physics_MaxNumClientBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_MaxNumClientBodies") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    maxNumRigidBodiesClient = v1->current.integer;
  }
  maxNumDetailRigidBodiesClient = cm.physicsCapacities.maxNumDetailRigidBodiesClient;
  if ( !cm.physicsCapacities.maxNumDetailRigidBodiesClient )
  {
    v3 = DVARINT_physics_MaxNumClientDetailBodies;
    if ( !DVARINT_physics_MaxNumClientDetailBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_MaxNumClientDetailBodies") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    maxNumDetailRigidBodiesClient = v3->current.integer;
  }
  maxNumConstraintsClient = cm.physicsCapacities.maxNumConstraintsClient;
  if ( !cm.physicsCapacities.maxNumConstraintsClient )
  {
    v5 = DVARINT_physics_MaxNumClientConstraints;
    if ( !DVARINT_physics_MaxNumClientConstraints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_MaxNumClientConstraints") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    maxNumConstraintsClient = v5->current.integer;
  }
  maxNumMotionsClient = cm.physicsCapacities.maxNumMotionsClient;
  if ( !cm.physicsCapacities.maxNumMotionsClient )
  {
    v7 = DVARINT_physics_MaxNumClientMotions;
    if ( !DVARINT_physics_MaxNumClientMotions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_MaxNumClientMotions") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    maxNumMotionsClient = v7->current.integer;
  }
  maxNumRigidBodiesServer = cm.physicsCapacities.maxNumRigidBodiesServer;
  if ( !cm.physicsCapacities.maxNumRigidBodiesServer )
  {
    v9 = DVARINT_physics_MaxNumServerBodies;
    if ( !DVARINT_physics_MaxNumServerBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_MaxNumServerBodies") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    maxNumRigidBodiesServer = v9->current.integer;
  }
  if ( !cm.physicsCapacities.maxNumDetailRigidBodiesServer )
  {
    v10 = DVARINT_physics_MaxNumServerDetailBodies;
    if ( !DVARINT_physics_MaxNumServerDetailBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_MaxNumServerDetailBodies") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
  }
  maxNumMotionsServer = cm.physicsCapacities.maxNumMotionsServer;
  if ( !cm.physicsCapacities.maxNumMotionsServer )
  {
    v12 = DVARINT_physics_MaxNumServerMotions;
    if ( !DVARINT_physics_MaxNumServerMotions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_MaxNumServerMotions") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    maxNumMotionsServer = v12->current.integer;
  }
  if ( cm.mapEnts )
  {
    maxNumRigidBodiesClient += cm.mapEnts->scriptableMapEnts.physicsLimits.clientStandaloneMainRigidBodyCount;
    maxNumDetailRigidBodiesClient += cm.mapEnts->scriptableMapEnts.physicsLimits.clientStandaloneDetailedRigidBodyCount;
    maxNumMotionsClient += cm.mapEnts->scriptableMapEnts.physicsLimits.clientStandaloneMotionCount;
    maxNumRigidBodiesServer += cm.mapEnts->scriptableMapEnts.physicsLimits.serverStandaloneMainRigidBodyCount;
    maxNumMotionsServer += cm.mapEnts->scriptableMapEnts.physicsLimits.serverStandaloneMotionCount;
  }
  if ( maxNumRigidBodiesServer > 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 905, ASSERT_TYPE_ASSERT, "( serverRigidBodyMax ) <= ( 0xffffff )", "%s <= %s\n\t%i, %i", "serverRigidBodyMax", "PHYSICS_HARD_MAX_BODIES_PER_WORLD", maxNumRigidBodiesServer, 0xFFFFFF) )
    __debugbreak();
  if ( maxNumRigidBodiesClient > 0xFFFFFF )
  {
    LODWORD(v16) = 0xFFFFFF;
    LODWORD(v15) = maxNumRigidBodiesClient;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 906, ASSERT_TYPE_ASSERT, "( clientRigidBodyMax ) <= ( 0xffffff )", "%s <= %s\n\t%i, %i", "clientRigidBodyMax", "PHYSICS_HARD_MAX_BODIES_PER_WORLD", v15, v16) )
      __debugbreak();
  }
  s_physicsWorldCInfos[2].motionCountMax = maxNumMotionsServer;
  s_physicsWorldCInfos[2].systemCountMax = maxNumRigidBodiesServer;
  s_physicsWorldCInfos[2].persistentBuffer = NULL;
  s_physicsWorldCInfos[2].persistentBufferSize = 0;
  *(_QWORD *)&s_physicsWorldCInfos[2].adjustSolverSettingsOnTimestep = 0i64;
  s_physicsWorldCInfos[3].persistentBuffer = NULL;
  s_physicsWorldCInfos[3].persistentBufferSize = 0;
  s_physicsWorldCInfos[2].collisionTolerance = FLOAT_1_5;
  s_physicsWorldCInfos[2].solverStrength = FLOAT_0_60000002;
  s_physicsWorldCInfos[2].solverDamping = FLOAT_1_0;
  s_physicsWorldCInfos[2].defaultTimeStep = FLOAT_0_016666668;
  s_physicsWorldCInfos[3].collisionTolerance = FLOAT_1_5;
  s_physicsWorldCInfos[3].solverStrength = FLOAT_0_60000002;
  s_physicsWorldCInfos[3].solverDamping = FLOAT_1_0;
  s_physicsWorldCInfos[3].defaultTimeStep = FLOAT_0_016666668;
  s_physicsWorldCInfos[2].bodyCountMax = maxNumRigidBodiesServer;
  s_physicsWorldCInfos[2].constraintCountMax = 1;
  *(_OWORD *)&s_physicsWorldCInfos[2].collisionAccuracy = _xmm;
  s_physicsWorldCInfos[2].solverIterations = 4;
  s_physicsWorldCInfos[3].systemCountMax = maxNumRigidBodiesClient;
  s_physicsWorldCInfos[3].bodyCountMax = maxNumRigidBodiesClient;
  s_physicsWorldCInfos[3].motionCountMax = maxNumMotionsClient;
  s_physicsWorldCInfos[3].constraintCountMax = maxNumConstraintsClient;
  *(_OWORD *)&s_physicsWorldCInfos[3].collisionAccuracy = _xmm;
  s_physicsWorldCInfos[3].solverIterations = 4;
  if ( !Com_GameMode_SupportsFeature(WEAPON_RECHAMBERING|0x100) )
    goto LABEL_58;
  v13 = DVARBOOL_physics_killswitchEnableDontAdjustSolverSettingsOnTimestep;
  if ( !DVARBOOL_physics_killswitchEnableDontAdjustSolverSettingsOnTimestep && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_killswitchEnableDontAdjustSolverSettingsOnTimestep") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  v14 = !v13->current.enabled;
  s_physicsWorldCInfos[3].adjustSolverSettingsOnTimestep = 0;
  if ( v14 )
LABEL_58:
    s_physicsWorldCInfos[3].adjustSolverSettingsOnTimestep = 1;
  *(_OWORD *)&s_physicsWorldCInfos[4].collisionAccuracy = _xmm;
  s_physicsWorldCInfos[4].systemCountMax = maxNumRigidBodiesClient;
  s_physicsWorldCInfos[5] = s_physicsWorldCInfos[2];
  s_physicsWorldCInfos[4].collisionTolerance = FLOAT_1_5;
  s_physicsWorldCInfos[4].solverStrength = FLOAT_0_60000002;
  s_physicsWorldCInfos[4].solverDamping = FLOAT_1_0;
  s_physicsWorldCInfos[4].defaultTimeStep = FLOAT_0_016666668;
  *(_WORD *)&s_physicsWorldCInfos[3].isMultiThreaded = 257;
  s_physicsWorldCInfos[3].visualizeWithCloth = 1;
  s_physicsWorldCInfos[3].maxRagdolls = 64;
  s_physicsWorldCInfos[4].bodyCountMax = maxNumDetailRigidBodiesClient;
  s_physicsWorldCInfos[4].motionCountMax = 1;
  s_physicsWorldCInfos[4].constraintCountMax = 1;
  s_physicsWorldCInfos[4].persistentBuffer = NULL;
  s_physicsWorldCInfos[4].persistentBufferSize = 0;
  s_physicsWorldCInfos[4].solverIterations = 4;
  *(_WORD *)&s_physicsWorldCInfos[4].isMultiThreaded = 0;
  s_physicsWorldCInfos[4].visualizeWithCloth = 1;
  s_physicsWorldCInfos[4].maxRagdolls = 0;
  s_physicsWorldCInfos[4].adjustSolverSettingsOnTimestep = 0;
  s_physicsWorldCInfos[6] = s_physicsWorldCInfos[3];
  s_physicsWorldCInfos[7] = s_physicsWorldCInfos[4];
}

/*
==============
Physics_SetupDvars
==============
*/
void Physics_SetupDvars()
{
  Dvar_BeginPermanentRegistration();
  DVARSTR_physics_HavokPhysicsLicense = Dvar_RegisterString("NPTRLNOPS", "0x3e0db513-0x05f256b0:2021-07-05.Physics.InfinityWard_CallofDutyInfiniteWarfare2019_PS4-Windows-XboxOne", 0, "Havok Physics License dvar");
  DVARSTR_physics_HavokClothLicense = Dvar_RegisterString("PSQKKLKSL", "0x50120c42-0x6bedefe1:2021-07-05.Cloth.InfinityWard_CallofDutyInfiniteWarfare2019_PS4-Windows-XboxOne", 0, "Havok Cloth License dvar");
  DVARINT_physics_MaxNumServerBodies = Dvar_RegisterInt("MKSSOOTQNM", 2048, 0, 0xFFFFFF, 4u, "Set Maximum number of rigid bodies on the server");
  DVARINT_physics_MaxNumServerDetailBodies = Dvar_RegisterInt("MOKOKSQMT", 4096, 0, 0xFFFFFF, 4u, "Set Maximum number of detail rigid bodies on the server");
  DVARINT_physics_MaxNumServerConstraints = Dvar_RegisterInt("NSPRQNOQSK", 100, 0, 0xFFFFFF, 4u, "Set Maximum number of constraints on the server");
  DVARINT_physics_MaxNumServerMotions = Dvar_RegisterInt("NLTTRSNSKR", 2048, 0, 0xFFFFFF, 4u, "Set Maximum number of motions on the server");
  DVARINT_physics_MaxNumClientBodies = Dvar_RegisterInt("NSTNQMNKQK", 6144, 0, 0xFFFFFF, 4u, "Set Maximum number of rigid bodies on the client");
  DVARINT_physics_MaxNumClientDetailBodies = Dvar_RegisterInt("NORNMSRTLN", 10240, 0, 0xFFFFFF, 4u, "Set Maximum number of detail rigid bodies on the client");
  DVARINT_physics_MaxNumClientConstraints = Dvar_RegisterInt("MRQOQRQTKS", 1800, 0, 0xFFFFFF, 4u, "Set Maximum number of constraints on the client");
  DVARINT_physics_MaxNumClientMotions = Dvar_RegisterInt("OLSPPSNROR", 5120, 0, 0xFFFFFF, 4u, "Set Maximum number of motions on the client");
  DVARINT_physics_ExtraLootServerBodies = Dvar_RegisterInt("LKMLSQLSSS", 1024, 0, 2048, 4u, "Number of extra rigid bodies we allocate when loot system is active");
  DVARINT_physics_ExtraPlayerServerBodies = Dvar_RegisterInt("MKMMPMRRTT", 4, 0, 128, 4u, "Number of extra rigid bodies we allocate on the server per client");
  DVARINT_physics_RadiusForceHitLimit = Dvar_RegisterInt("OLPQQNNNQS", 20, 0, 100, 0x40u, "Maximum number of entities moved on client or server by a radius force (explosion)");
  DCONST_DVARFLT_physics_RadiusForceMassLimit = Dvar_RegisterFloat("physics_RadiusForceMassLimit", 3.0, 0.0, 100000.0, 0x40004u, "Mass limit, below which we drop off radius force to prevent small objects from going flying");
  DCONST_DVARFLT_physics_RadiusForceUpOffset = Dvar_RegisterFloat("physics_RadiusForceUpOffset", 4.0, 0.0, 100000.0, 0x40004u, "Vertical offset of force applied from radius force (explosion) - used to apply rotation to objects");
  DCONST_DVARFLT_physics_RadiusForceRandomOffset = Dvar_RegisterFloat("physics_RadiusForceRandomOffset", 4.0, 0.0, 100000.0, 0x40004u, "Random offset of force applied from radius force (explosion) - used to apply rotation to objects");
  DCONST_DVARFLT_physics_RadiusForceUpBias = Dvar_RegisterFloat("physics_RadiusForceUpBias", 0.5, 0.0, 100000.0, 0x40004u, "How much we want to make objects go up during an explosion");
  DCONST_DVARFLT_physics_RadiusForceMax = Dvar_RegisterFloat("physics_RadiusForceMax", 2500.0, 0.0, 100000.0, 0x40004u, "Max Force applied from radius force (explosion)");
  DCONST_DVARFLT_physics_BulletForceMassLimit = Dvar_RegisterFloat("physics_BulletForceMassLimit", 3.0, 0.0, 100000.0, 0x40004u, "Mass limit, below which we drop off bullet force to prevent small objects from going flying");
  DCONST_DVARFLT_physics_BulletForceDefault = Dvar_RegisterFloat("physics_BulletForceDefault", 500.0, 0.0, 100000.0, 0x40004u, "Force applied from bullet hit");
  DCONST_DVARFLT_physics_BulletForceRagdoll = Dvar_RegisterFloat("physics_BulletForceRagdoll", 500.0, 0.0, 100000.0, 0x40004u, "Force applied from bullet hit");
  DVARBOOL_physics_allowQueryDisabling = Dvar_RegisterBool("NSKPNLRNOR", 1, 4u, "Allow the engine to disable queries");
  DVARBOOL_physics_disableSpammyWarnings = Dvar_RegisterBool("LNOMRSSOPP", 0, 4u, "Turn off spammy warnings");
  DCONST_DVARINT_physics_ExtraClientAuthFixedMemory = Dvar_RegisterInt("physics_ExtraClientAuthFixedMemory", 0, 0, 200000000, 0x40004u, "Extra memory for client auth fixed physics pool");
  DVARBOOL_physics_enableCharacterSoftBody = Dvar_RegisterBool("LPLMNTRPQR", 0, 4u, "Enable Character Proxy Soft Body");
  DCONST_DVARFLT_physics_characterSoftBodyDistance = Dvar_RegisterFloat("physics_characterSoftBodyDistance", 1000.0, 0.0, 10000.0, 0x40004u, "Character Proxy Soft Body activation Distance");
  DCONST_DVARFLT_physics_characterProxyClientDistance = Dvar_RegisterFloat("physics_characterProxyClientDistance", 250.0, 0.0, 10000.0, 0x40004u, "Character Proxy Clients out of this range and out of view have no proxy collision");
  DCONST_DVARFLT_physics_characterProxyClientCosFOV = Dvar_RegisterFloat("physics_characterProxyClientCosFOV", 0.5, 0.0, 1.0, 0x40004u, "Character Proxy Clients out of this fov and out of range have no proxy collision");
  DVARFLT_physics_shapecastMaxDist = Dvar_RegisterFloat("LPPQLMRSNN", 0.0, 0.0, 3000.0, 0, "Max distance permitted for a Physics_Shapecast operation. A value of 0 means that we shouldn't evaluate this constraint.");
  DVARFLT_physics_shapecastMaxRadius = Dvar_RegisterFloat("NOQQNLQTQN", 0.0, 0.0, 500.0, 0, "Max radius permitted for a Physics_Shapecast operation. A value of 0 means that we shouldn't evaluate this constraint.");
  DVARBOOL_physics_debugTrackWorldMeshStats = Dvar_RegisterBool("SNKOPNNQN", 0, 0, "Debug draw world mesh stats");
  DVARINT_physics_debugTrackWorldMeshDisplayArea = Dvar_RegisterEnum("MSOKPLNRLT", physics_debugTrackWorldMeshDisplayTypeNames, 0, 0, "Debug draw world mesh by area");
  DVARFLT_physics_debugTrackPerfWorldMeshDisplayAreaThresholdCheap = Dvar_RegisterFloat("MLSNOMLKQQ", 500.0, 1.0, 15000.0, 0, "Debug draw world mesh by area - cheap threshold");
  DVARFLT_physics_debugTrackPerfWorldMeshDisplayAreaThresholdExpensive = Dvar_RegisterFloat("MORTKOOTOM", 50.0, 1.0, 15000.0, 0, "Debug draw world mesh by area - expensive threshold");
  DVARBOOL_physics_debugTrackPerfServerWorlds = Dvar_RegisterBool("LTPKMNTTKQ", 0, 0, "Debug draw for tracking the server world update part of the frame");
  DVARBOOL_physics_debugTrackPerfPMoveHeatmap = Dvar_RegisterBool("MQLSQNTT", 0, 0, "Debug draw for pmove heatmap");
  DVARBOOL_physics_debugTrackPerfPMoveHeatmapShowCheap = Dvar_RegisterBool("LPQTSQLSRT", 1, 0, "Debug draw for move heatmap - show cheap samples");
  DVARFLT_physics_debugTrackPerfPMoveHeatmapThresholdCheap = Dvar_RegisterFloat("LTKSOTTTKR", 20.0, 0.1, 200.0, 0, "Pmove debug draw heatmap - cheap threshold");
  DVARFLT_physics_debugTrackPerfPMoveHeatmapThresholdExpensive = Dvar_RegisterFloat("MMLQLSOLMR", 30.0, 0.1, 200.0, 0, "Pmove debug draw heatmap - expensive threshold");
  DVARBOOL_physics_debugTrackPerfPMoveServer = Dvar_RegisterBool("TQRRPQLMM", 0, 0, "Debug draw for tracking pmove performance on the server");
  DVARBOOL_physics_debugTrackPerfPMoveClient = Dvar_RegisterBool("LNNNQQSOSQ", 0, 0, "Debug draw for tracking pmove performance on the client");
  DVARBOOL_physics_debugTrackPerfBulletHeatmap = Dvar_RegisterBool("LQNNPMTNKS", 0, 0, "Debug draw for bullet heatmap");
  DVARBOOL_physics_debugTrackPerfBulletHeatmapShowCheap = Dvar_RegisterBool("LPORLNSPQ", 1, 0, "Debug draw for bullet heatmap - show cheap samples");
  DVARFLT_physics_debugTrackPerfBulletHeatmapThresholdCheap = Dvar_RegisterFloat("QPPPTRKSK", 15.0, 0.1, 200.0, 0, "Bullet debug draw heatmap - cheap threshold");
  DVARFLT_physics_debugTrackPerfBulletHeatmapThresholdExpensive = Dvar_RegisterFloat("MKRPQLLQLM", 25.0, 0.1, 200.0, 0, "Bullet debug draw heatmap - expensive threshold");
  DVARBOOL_physics_debugTrackPerfBulletServer = Dvar_RegisterBool("MQPMSLPTTR", 0, 0, "Debug draw for tracking bullets performance on the server");
  DVARBOOL_physics_debugTrackPerfBulletClient = Dvar_RegisterBool("OMOMQMPQSL", 0, 0, "Debug draw for tracking bullets performance on the client");
  DVARINT_physics_debugRaycasterMode = Dvar_RegisterEnum("LQSRLNKPMR", Physics_DebugRaycasterModeNames, 0, 0, "Debug draw raycaster mode");
  DVARFLT_physics_debugRaycasterMaxCost = Dvar_RegisterFloat("LPQSKMSNP", 40.0, 1.0, 200.0, 0, "Debug draw raycaster maximum cost");
  DVARINT_physics_debugRaycasterRaysPerFrame = Dvar_RegisterInt("PKMRKKTNL", 1000, 100, 10000, 0, "Debug draw raycaster rays/frame");
  DVARBOOL_physicsFX_enableCallbacks = Dvar_RegisterBool("NSTRKPQLLQ", 1, 0, "Physics fx callbacks kill switch");
  DVARBOOL_physicsFX_debugPerformance = Dvar_RegisterBool("OKRMKOMNRS", 0, 4u, "Show physics fx performance");
  DVARBOOL_physicsFX_debugDrawFXPipelines = Dvar_RegisterBool("MRPROLRPOL", 0, 4u, "Show physics fx pipelines");
  DVARINT_physicsFX_debugDrawFXPipelineId = Dvar_RegisterInt("PQKKKSKPP", -1, -1, 10000, 4u, "Show details about a physics fx Pipeline");
  DVARBOOL_physicsFX_debugDrawFXShapes = Dvar_RegisterBool("LSRPKTMQRQ", 0, 4u, "Show physics fx Shapes");
  DVARINT_physicsFX_debugDrawFXShapeId = Dvar_RegisterInt("LLSONOSNKQ", -1, -1, 10000, 4u, "Show details about a physics fx Shape");
  DVARBOOL_physicsFX_debugDrawFXPipelineInstances = Dvar_RegisterBool("OONPSOPOO", 0, 4u, "Show physics fx pipeline instances");
  DVARINT_physicsFX_debugDrawFXPipelineInstanceId = Dvar_RegisterInt("LLQKTNQLTS", -1, -1, 10000, 4u, "Show details about a physics fx Pipeline instance");
  DVARBOOL_physicsFX_debugDrawFXPipelineInstanceDrawParticles = Dvar_RegisterBool("NSMRROLQSO", 0, 4u, "Show physics fx pipeline instance particles for the selected instance");
  DVARBOOL_physicsFX_debugDrawSounds = Dvar_RegisterBool("NQSLKRQNSQ", 0, 4u, "Show physics fx sounds");
  DVARBOOL_physics_processWorkerCommandsWhenWaiting_enabled = Dvar_RegisterBool("LLTTMRLPOL", 1, 0, "When true, process worker commands in HavokPhysicsThreadPool::waitForCompletion if we detect a stall or deadlock (IWH-237742)");
  DVARBOOL_physics_killswitchEnableRagdollFrameDelayFixOnMovers = Dvar_RegisterBool("NOPQTQPROP", 1, 0, "Enables the frame delay fix for ragdolls created on moving platforms. We have to rearchitect ragdolls next game so we can get up to date rigid body poses when rendering. This is a hack.");
  DVARBOOL_physics_killswitchEnableDontAdjustSolverSettingsOnTimestep = Dvar_RegisterBool("MOMNLSNLTS", 1, 0, "Sets the m_adjustSolverSettingsBasedOnTimestep to false for the client auth world. Keyframe rigid body velocities are not calculated correctly when this flag is set to true.");
  DVARBOOL_physics_killswitchEnableClientPredWorldUseCGameTimeForWorldStep = Dvar_RegisterBool("NRNRQMQPRM", 0, 0, "If enabled, cg_t::frametime is used for the client predictive world step time.");
  DVARBOOL_physics_killswitchEnableClientAuthWorldUseCGameTimeForWorldStep = Dvar_RegisterBool("NTTLSROMMR", 0, 0, "If enabled, cg_t::frametime is used for the client authoritative world step time.");
  DVARBOOL_physics_killswitchEnableClientPredWorldKeyFramedRigidBodyVelocityCalcFix = Dvar_RegisterBool("RTROOQNRS", 1, 0, "Enables the fix to calculate the correct linear velocity to reach the target position for the key framed client predicted world body. Only for MP.");
  DVARBOOL_physics_killswitchEnableClientAuthWorldKeyFramedRigidBodyVelocityCalcFix = Dvar_RegisterBool("NNTSLRPLMT", 1, 0, "Enables the fix to calculate the correct linear velocity to reach the target position for the key framed client authoritative world body. Only for MP.");
  DVARBOOL_physics_killswitchEnableClientAuthWorldNoMeanTimeStepCalc = Dvar_RegisterBool("MSTNTPSRQR", 0, 0, "Disables mean time step smoothing for the client authoritative world. Only for MP.");
  DVARBOOL_physics_killswitchEnableApplyTimeSmoothingBeforePreWorldFunctions = Dvar_RegisterBool("MLPPSQLONO", 1, 0, "Enables the fix to calculate the correct linear velocity to reach the target position for the key framed client predicted world body. Disables the mean step time calculation. Only for MP.");
  DVARBOOL_physics_killswitchEnableWarpingChecksForKeyframedServerObjects = Dvar_RegisterBool("LNSLTORNKN", 1, 0, "Enables an assert check on entities considered keyframed movers in server (marked with MarkKeyframedMover()). They shouldn't be warped.");
  DVARFLT_physics_maxClientWorldTimeStep = Dvar_RegisterFloat("LRNPORTQMT", 0.1, 0.0, 3.4028235e38, 0, "Caps the time step for the client predictive and authoritative worlds.");
  DVARFLT_physics_ragdollMoverFriction = Dvar_RegisterFloat("NOMLTLTRNT", 1.0, -3.4028235e38, 3.4028235e38, 0, "Ragdoll vs special mover (train) (dynamic) friction. Use a negative value to disable this override.");
  DVARFLT_physics_ragdollMoverStaticFrictionExtra = Dvar_RegisterFloat("MOSRKQNMRN", 1.0, -3.4028235e38, 3.4028235e38, 0, "Ragdoll vs special mover (train) static friction extra. Use a negative value to disable this override.");
  DVARFLT_physics_ragdollMoverRestitution = Dvar_RegisterFloat("MQPPTSLNKP", 0.0, -3.4028235e38, 3.4028235e38, 0, "Ragdoll vs special mover (train) restitution. Use a negative value to disable this override.");
  DCONST_DVARBOOL_ragdoll_debugRagdollMoverOffset = Dvar_RegisterBool("ragdoll_debugRagdollMoverOffset", 0, 0x40004u, "Verbose debugging to track down mover offset issues");
  DCONST_DVARBOOL_physics_debugClientBodyVelocities = Dvar_RegisterBool("physics_debugClientBodyVelocities", 0, 0x40004u, "Enables verbose debugging for the client predictive and authoritative physics bodies. Please use physics_debugClientBodyVelocitiesEntNumber and physics_debugClientBodyVelocitiesModelSearchString for filtering.");
  DCONST_DVARINT_physics_debugClientBodyVelocitiesEntNumber = Dvar_RegisterInt("physics_debugClientBodyVelocitiesEntNumber", 2048, 0, 2048, 0x40004u, "The entity number to filter a physics body. 2047 matches no entities and 2048 matches all entities");
  DVARSTR_physics_debugClientBodyVelocitiesModelSearchString = Dvar_RegisterString("LTMPPLNLTQ", (const char *)&queryFormat.fmt + 3, 0, "Model name to filter a physics body. Partial matches are supported. CASE SENSITIVE!");
  PhysicsVolume_SetupDvars();
  physics_debugDisplayOffsetX = Dvar_RegisterInt("LTTKKLRTOR", 0, -500, 500, 4u, "Move the Physics Debug Display in the X direction");
  physics_debugDisplayOffsetY = Dvar_RegisterInt("OMLMNQPSLK", 0, -15000, 500, 4u, "Move the Physics Debug Display in the Y direction");
  physics_debugMemory = Dvar_RegisterEnum("PSQSLMNMT", s_Physics_DebugSectionNames, 0, 4u, "Show physics memory usage");
  physics_debugCPU = Dvar_RegisterEnum("PLKLKSKOQ", s_Physics_DebugSectionNames, 0, 4u, "Show physics cpu usage");
  physics_debugProfileData = Dvar_RegisterBool("PONNOONMN", 0, 4u, "Show Physics profile data");
  physics_debugTimestep = Dvar_RegisterEnum("NQRPQSMSRP", s_Physics_DebugSectionNames, 0, 4u, "Show physics timestep");
  physics_debugRefSystemCounts = Dvar_RegisterBool("NQSKKPQPSS", 0, 4u, "Show physics ref system counts");
  physics_debugVisualizeWorld = Dvar_RegisterEnum("LQPTRSLMSO", s_Physics_DebugSectionNames, 0, 0x26u, "Show physics world");
  physics_debugVisualizeWorldIgnoreCharacterProxies = Dvar_RegisterBool("MNMSONRSNP", 1, 4u, "Don't show character proxies");
  physics_debugVisualizeWorldRadius = Dvar_RegisterInt("OSRKRRNLM", 10, 0, 4000, 4u, "Don't try to render any geometries closer than this distance in feet");
  physics_debugVisualizeWorldClearZFirst = Dvar_RegisterBool("RSKQQSKQP", 0, 4u, "Clear Z before visualizing physics world");
  physics_debugVisualizeWorldViewMode = Dvar_RegisterEnum("MNNTRKTPTO", s_Physics_DebugVisualizationViewNames, 3, 0x26u, "View Mode for world visualization");
  physics_debugVisualizeWorldComplexityTriThreshold = Dvar_RegisterInt("NNRKMNNNNQ", 0, 0, 100000, 0x26u, "Don't try to render any geometries with more triangles than this");
  physics_debugVisualizeWorldComplexityLineThreshold = Dvar_RegisterInt("SSROMTKRR", 0, 0, 100000, 0x26u, "Don't try to render any wireframe geometries with more lines than this");
  physics_debugVisualizeWorldBodyId = Dvar_RegisterBool("LSNKPQQOLN", 0, 0x26u, "Show Body Ids when rendering the physics world");
  physics_debugVisualizeWorldBroadphase = Dvar_RegisterBool("LQLMLQMTTN", 0, 0x26u, "Show Broadphase when rendering the physics world");
  physics_debugVisualizeWorldConstraint = Dvar_RegisterBool("OKSLLQLPNR", 0, 0x26u, "Show Constraints when rendering the physics world");
  physics_debugVisualizeWorldDeactivation = Dvar_RegisterBool("NNONPKPMOT", 0, 0x26u, "Show Deactivation when rendering the physics world");
  physics_debugVisualizeWorldManifold = Dvar_RegisterBool("POPPMLQQQ", 0, 0x26u, "Show Manifold when rendering the physics world");
  physics_debugVisualizeWorldMassProperties = Dvar_RegisterBool("NTKNTQOPN", 0, 0x26u, "Show Mass Properties when rendering the physics world");
  physics_debugVisualizeWorldMotionId = Dvar_RegisterBool("NSOPNOMR", 0, 0x26u, "Show Motion Ids when rendering the physics world");
  physics_debugVisualizeWorldShape = Dvar_RegisterBool("LPMMQQONNL", 0, 0x26u, "Show Shapes when rendering the physics world");
  physics_debugVisualizeWorldShapeLowRes = Dvar_RegisterBool("NLOLRSKMSN", 0, 0x26u, "Show Low-Res Shapes when rendering the physics world");
  physics_debugVisualizeWorldVehicles = Dvar_RegisterBool("NQNTQNPSSR", 0, 0x26u, "Show Vehicles when rendering the physics world");
  physics_debugVisualizeWorldCollisionHeatmap = Dvar_RegisterBool("MNKORKMKM", 0, 0x26u, "Show Collision Heatmap when rendering the physics world");
  physics_debugVisualizeWorldCollisionHeatmapGood = Dvar_RegisterFloat("NTSTRRQOL", 0.0, 0.0, 1000.0, 1.0, 4u, "Collision Heatmap Density Good Threshold");
  physics_debugVisualizeWorldCollisionHeatmapBad = Dvar_RegisterFloat("TLQKPKNPN", 100.0, 0.0, 1000.0, 1.0, 4u, "Collision Heatmap Density Bad Threshold");
  physics_debugVisualizeWorldCollisionHeatmapRange = Dvar_RegisterFloat("STSTLQQQT", 500000.0, 0.0, 500000.0, 100.0, 4u, "Collision Heatmap Density Display range");
  physics_debugVisualizeWorldDebugDraw = Dvar_RegisterBool("NQLOQTNQKT", 0, 0x26u, "Show Debug Draw data when rendering the physics world");
  physics_debugVisualizeWorldCollisionTile = Dvar_RegisterBool("LNKKPSONOQ", 0, 0x26u, "Show Collision Tile data when rendering the physics world");
  physics_debugVisualizeWorldRaycasts = Dvar_RegisterBool("OLKTNOMLQ", 0, 0x26u, "Show raycasts when rendering the physics world");
  physics_debugVisualizeWorldShapecasts = Dvar_RegisterBool("LTMPNPQRTR", 0, 0x26u, "Show shapecasts when rendering the physics world");
  physics_debugVisualizeWorldAABBQuery = Dvar_RegisterBool("OKOTKKLQOQ", 0, 0x26u, "Show aabb queries when rendering the physics world");
  physics_debugVisualizeWorldPointQuery = Dvar_RegisterBool("NRRLQPNONO", 0, 0x26u, "Show point queries when rendering the physics world");
  physics_debugVisualizeWorldClosestPointsQuery = Dvar_RegisterBool("NQRLTTOTQS", 0, 0x26u, "Show closest point queries when rendering the physics world");
  physics_debugVisualizeCharacterProxies = Dvar_RegisterEnum("NLLMTOPKKL", s_Physics_DebugSectionNames, 0, 4u, "Show character proxy data");
  physics_debugVisualizeWorldIWShape = Dvar_RegisterBool("SMKSQMTSP", 1, 0x26u, "Show IW Shapes when rendering the physics world");
  physics_debugVisualizeWorldParticles = Dvar_RegisterBool("OMPSTPTSOR", 0, 0x26u, "Show particles when rendering the physics world");
  cloth_debugVisualizeWorldGeometry = Dvar_RegisterBool("NQMQKQKRKT", 0, 0x26u, "Show Cloth Geometry when rendering the physics world");
  cloth_debugVisualizeWorldSimParticlePosition = Dvar_RegisterBool("MPTKTMLQMT", 0, 0x26u, "Show Cloth SimParticlePosition when rendering the physics world");
  cloth_debugVisualizeWorldSimNormals = Dvar_RegisterBool("LSRNKKNQRQ", 0, 0x26u, "Show Cloth SimNormals when rendering the physics world");
  cloth_debugVisualizeWorldParticleVelocity = Dvar_RegisterBool("LRNMRTNQSK", 0, 0x26u, "Show Cloth ParticleVelocity when rendering the physics world");
  cloth_debugVisualizeWorldParticleId = Dvar_RegisterBool("PLPOQPNSQ", 0, 0x26u, "Show Cloth ParticleId when rendering the physics world");
  cloth_debugVisualizeWorldSimStandardLinks = Dvar_RegisterBool("NONKTOQLPM", 0, 0x26u, "Show Cloth SimStandardLinks when rendering the physics world");
  cloth_debugVisualizeWorldSimStretchLinks = Dvar_RegisterBool("MORONTMNSK", 0, 0x26u, "Show Cloth SimStretchLinks when rendering the physics world");
  cloth_debugVisualizeWorldSimBendLinks = Dvar_RegisterBool("MOKTQTMQLO", 0, 0x26u, "Show Cloth SimBendLinks when rendering the physics world");
  cloth_debugVisualizeWorldSimBendStiffness = Dvar_RegisterBool("OLKPMPTPQO", 0, 0x26u, "Show Cloth SimBendStiffness when rendering the physics world");
  cloth_debugVisualizeWorldSimVolumeTransforms = Dvar_RegisterBool("NSTOMSOSTP", 0, 0x26u, "Show Cloth SimVolumeTransforms when rendering the physics world");
  cloth_debugVisualizeWorldLocalRange = Dvar_RegisterBool("MSTLRPTTNN", 0, 0x26u, "Show Cloth LocalRange when rendering the physics world");
  cloth_debugVisualizeWorldBonePlane = Dvar_RegisterBool("LRMKMNNTMR", 0, 0x26u, "Show Cloth BonePlane when rendering the physics world");
  cloth_debugVisualizeWorldTransition = Dvar_RegisterBool("NNMMQRPQOS", 0, 0x26u, "Show Cloth Transition when rendering the physics world");
  cloth_debugVisualizeWorldCollidable = Dvar_RegisterBool("MPRMLSOOMK", 0, 0x26u, "Show Cloth Collidable when rendering the physics world");
  cloth_debugVisualizeWorldParticleRadius = Dvar_RegisterBool("MONPQLLPL", 0, 0x26u, "Show Cloth ParticleRadius when rendering the physics world");
  cloth_debugVisualizeWorldVirtualCollisionPoints = Dvar_RegisterBool("MNNNQMTPQR", 0, 0x26u, "Show Cloth VirtualCollisionPoints when rendering the physics world");
  cloth_debugVisualizeWorldVirtualCollisionPointsLandscape = Dvar_RegisterBool("QLTLOPQSK", 0, 0x26u, "Show Cloth VirtualCollisionPointsLandscape when rendering the physics world");
  physics_debugVisualize_CONTENTS_SOLID = Dvar_RegisterBool("MMRSSLOSST", 1, 4u, "Set the physics query to use this contents flag");
  physics_debugVisualize_CONTENTS_FOLIAGE = Dvar_RegisterBool("SOSSMNPT", 1, 4u, "Set the physics query to use this contents flag");
  physics_debugVisualize_CONTENTS_VEHICLETRIGGER = Dvar_RegisterBool("PPKLORSPM", 1, 4u, "Set the physics query to use this contents flag");
  physics_debugVisualize_CONTENTS_GLASS = Dvar_RegisterBool("OKNMNOKLNS", 1, 4u, "Set the physics query to use this contents flag");
  physics_debugVisualize_CONTENTS_WATER = Dvar_RegisterBool("NMQNKRSTSP", 1, 4u, "Set the physics query to use this contents flag");
  physics_debugVisualize_CONTENTS_AI_NOSHOOT = Dvar_RegisterBool("NNSTKTTQLN", 1, 4u, "Set the physics query to use this contents flag");
  physics_debugVisualize_CONTENTS_MISSILECLIP = Dvar_RegisterBool("LSMMOSPOOQ", 1, 4u, "Set the physics query to use this contents flag");
  physics_debugVisualize_CONTENTS_ITEM = Dvar_RegisterBool("NONMMKPOP", 1, 4u, "Set the physics query to use this contents flag");
  physics_debugVisualize_CONTENTS_VEHICLECLIP = Dvar_RegisterBool("MSSLKOKTLO", 1, 4u, "Set the physics query to use this contents flag");
  physics_debugVisualize_CONTENTS_ITEMCLIP = Dvar_RegisterBool("LLMQNNTTQR", 1, 4u, "Set the physics query to use this contents flag");
  physics_debugVisualize_CONTENTS_SKY = Dvar_RegisterBool("MRPOLTTMPR", 1, 4u, "Set the physics query to use this contents flag");
  physics_debugVisualize_CONTENTS_AI_NOSIGHT = Dvar_RegisterBool("MSQNSMNRMN", 1, 4u, "Set the physics query to use this contents flag");
  physics_debugVisualize_CONTENTS_CLIPSHOT = Dvar_RegisterBool("TSPQKTNNS", 1, 4u, "Set the physics query to use this contents flag");
  physics_debugVisualize_CONTENTS_ACTOR = Dvar_RegisterBool("LLKQSOPKRT", 1, 4u, "Set the physics query to use this contents flag");
  physics_debugVisualize_CONTENTS_PLAYERCLIP = Dvar_RegisterBool("NKTLQPNOSL", 1, 4u, "Set the physics query to use this contents flag");
  physics_debugVisualize_CONTENTS_PLAYER_NOSIGHT = Dvar_RegisterBool("NNMQQOSOTM", 1, 4u, "Set the physics query to use this contents flag");
  physics_debugVisualize_CONTENTS_AI_CLIP = Dvar_RegisterBool("MNSPNLPNQT", 1, 4u, "Set the physics query to use this contents flag");
  physics_debugVisualize_CONTENTS_SENTIENTTRIGGER = Dvar_RegisterBool("OKLLOTRORS", 1, 4u, "Set the physics query to use this contents flag");
  physics_debugVisualize_CONTENTS_EXPLOSIONCLIP = Dvar_RegisterBool("MTNNQSOMTP", 1, 4u, "Set the physics query to use this contents flag");
  physics_debugVisualize_CONTENTS_SOUNDCLIP = Dvar_RegisterBool("OPONKTOSP", 1, 4u, "Set the physics query to use this contents flag");
  physics_debugVisualize_CONTENTS_SOUNDREFLECT = Dvar_RegisterBool("MTTTPMPSPQ", 1, 4u, "Set the physics query to use this contents flag");
  physics_debugVisualize_CONTENTS_NONSENTIENTTRIGGER = Dvar_RegisterBool("LMKKNSLQRN", 1, 4u, "Set the physics query to use this contents flag");
  physics_debugVisualize_CONTENTS_VEHICLE = Dvar_RegisterBool("NTKLQNKKQK", 1, 4u, "Set the physics query to use this contents flag");
  physics_debugVisualize_CONTENTS_MANTLE = Dvar_RegisterBool("MMMRPSPTTT", 1, 4u, "Set the physics query to use this contents flag");
  physics_debugVisualize_CONTENTS_PLAYER = Dvar_RegisterBool("MMSOKRRQRL", 1, 4u, "Set the physics query to use this contents flag");
  physics_debugVisualize_CONTENTS_USECLIP = Dvar_RegisterBool("MOLLRNNKT", 1, 4u, "Set the physics query to use this contents flag");
  physics_debugVisualize_CONTENTS_PLAYERTRIGGER = Dvar_RegisterBool("MQNMTQRMNP", 1, 4u, "Set the physics query to use this contents flag");
  physics_debugVisualize_Query = Dvar_RegisterBool("LPNPSNLPKN", 1, 4u, "Set this to false to hide triggers/players in the vdb");
  physics_debugVisualize_Preset = Dvar_RegisterInt("ORMOTTQOK", 0, 0x80000000, 0x7FFFFFFF, 4u, "Set the physics query to use this contents preset - if 0, uses the other settings");
  physics_debugLibraryMaterials = Dvar_RegisterBool("MNOKSQLKSN", 0, 4u, "Show Physics Library Materials");
  physics_debugLibraryBodyQualitys = Dvar_RegisterBool("MLMKOPLKQL", 0, 4u, "Show Physics Library Body Qualitys");
  physics_debugLibraryMotionProperties = Dvar_RegisterBool("MNMSTQSOOS", 0, 4u, "Show Physics Library Motion Properties");
  physics_debugLibraryMaterialId = Dvar_RegisterInt("LQLSPLTSOT", -1, -1, 1000, 4u, "Show details about a selected Material in the Physics Library");
  physics_debugLibraryBodyQualityId = Dvar_RegisterInt("MMQRMLKONT", -1, -1, 1000, 4u, "Show details about a selected Body Quality in the Physics Library");
  physics_debugLibraryMotionPropertiesId = Dvar_RegisterInt("NPTROKKPNR", -1, -1, 1000, 4u, "Show details about a selected Motion Properties in the Physics Library");
  physics_debugAssetsByName = Dvar_RegisterBool("ONSNQNOSN", 0, 4u, "Show Physics Assets by name");
  physics_debugAssetsByMemory = Dvar_RegisterBool("PNPTOKOT", 0, 4u, "Show Physics Assets by memory");
  physics_debugAssetIdByName = Dvar_RegisterInt("MLSLNSQRRR", -1, -1, 10000, 4u, "Show details about a selected Physics Asset - indexed into name ordered list");
  physics_debugAssetIdByMemory = Dvar_RegisterInt("NORQNROMMR", -1, -1, 10000, 4u, "Show details about a selected Physics Asset - indexed into memory ordered list");
  physics_debugXModelsWithNoPhysicsAsset = Dvar_RegisterBool("NPRNSLQOOS", 0, 4u, "Show Physics XModels without PhysicsAssets");
  physics_debugXModelsWithCollLods = Dvar_RegisterBool("TRLTSTRNS", 0, 4u, "Show Physics Xmodels with ColLods");
  physics_debugXModelsExcludeDoNotUse = Dvar_RegisterBool("QONOKKPTL", 1, 4u, "When using physics_debugXModelsWithNoPhysicsAsset or physics_debugXModelsWithCollLods, excludes models using material 'do_not_use'");
  physics_debugXModelsByName = Dvar_RegisterBool("OKONLRQMRM", 0, 4u, "Show Physics XModels By Name");
  physics_debugXModelsByMemory = Dvar_RegisterBool("MRKOLKQQKM", 0, 4u, "Show Physics XModels By Memory");
  physics_debugXModelsByDetailBodyCount = Dvar_RegisterBool("NPKROSRRML", 0, 4u, "Show Physics XModels By Detail body count");
  physics_debugXModelIdByName = Dvar_RegisterInt("LQQRLPSPO", -1, -1, 10000, 4u, "Show details about a selected XModel Asset Indexed By Name");
  physics_debugXModelIdByMemory = Dvar_RegisterInt("LPRTRKPPKK", -1, -1, 10000, 4u, "Show details about a selected XModel Asset Indexed By Memory");
  physics_debugSFXEventAssets = Dvar_RegisterBool("NORTRTMPRO", 0, 4u, "Show Physics SFXEvent Assets");
  physics_debugSFXEventAssetId = Dvar_RegisterInt("NQKLNLPKOK", -1, -1, 10000, 4u, "Show details about a selected Physics SFXEvent Asset");
  physics_debugVFXEventAssets = Dvar_RegisterBool("MLSLMPNSN", 0, 4u, "Show Physics VFXEvent Assets");
  physics_debugVFXEventAssetId = Dvar_RegisterInt("OMSSSQRPOT", -1, -1, 10000, 4u, "Show details about a selected Physics VFXEventAsset");
  physics_debugClipmapBrushes = Dvar_RegisterBool("PPKONLNNO", 0, 4u, "Show Physics Clipmap brushes");
  physics_debugParticlesHeavyweight = Dvar_RegisterBool("MSKQOPRMNM", 0, 4u, "Show Physics Heavyweight Particle assets");
  physics_debugWorld = Dvar_RegisterEnum("NOSMNOPOMM", s_Physics_DebugSectionNames, 0, 4u, "Show information about a physics world");
  physics_debugWorldFull = Dvar_RegisterBool("LRPOKMKQKP", 0, 4u, "Show full information about a physics world, when physics_debugWorld is set");
  physics_debugWorldBody = Dvar_RegisterInt("MRPPSMTSOQ", -1, -1, 4096, 4u, "Show details about a selected Body in the physics_debugWorld selected world");
  physics_debugQueryBody = Dvar_RegisterInt("MNOPNSNTNO", -1, -1, 4096, 4u, "Set queries to use a single body (has no effect on broadphase aabb query)");
  physics_debugAABBBroadphaseWorldQuery = Dvar_RegisterEnum("NLLRTPOQKL", s_Physics_DebugSectionNames, 0, 4u, "Fire an AABB Broadphase Query, and show info about the target");
  physics_debugAABBBroadphaseWorldQueryAABBMin = Dvar_RegisterVec3("MSLPPLSNT", -16.0, -16.0, -16.0, -128000.0, 128000.0, 4.0, 4u, "AABB Broadphase Query - AABB Min");
  physics_debugAABBBroadphaseWorldQueryAABBMax = Dvar_RegisterVec3("LTQQPLTNMT", 16.0, 16.0, 16.0, -128000.0, 128000.0, 4.0, 4u, "AABB Broadphase Query - AABB Max");
  physics_debugAABBWorldQuery = Dvar_RegisterEnum("NOOTMTPKK", s_Physics_DebugSectionNames, 0, 4u, "Fire an AABB Query, and show info about the target");
  physics_debugAABBWorldQueryAABBMin = Dvar_RegisterVec3("NSKNRLOSRS", -16.0, -16.0, -16.0, -128000.0, 128000.0, 4.0, 4u, "AABB Query - AABB Min");
  physics_debugAABBWorldQueryAABBMax = Dvar_RegisterVec3("QMLOQNKSS", 16.0, 16.0, 16.0, -128000.0, 128000.0, 4.0, 4u, "AABB Query - AABB Max");
  physics_debugRayWorld = Dvar_RegisterEnum("NRLRKKPRPM", s_Physics_DebugSectionNames, 0, 4u, "Fire a raycast, and show info about the target");
  physics_debugRayDetail = Dvar_RegisterBool("MNMSQQNKON", 0, 4u, "Do raytraces with detail check");
  physics_debugRayClutter = Dvar_RegisterBool("NMKNNMLNTT", 0, 4u, "Do raytraces with clutter flag");
  physics_debugShapeCastWorld = Dvar_RegisterEnum("PQMNRRMOO", s_Physics_DebugSectionNames, 0, 4u, "Fire a shapecast, and show info about the target");
  physics_debugQueryPointWorld = Dvar_RegisterEnum("MTKNOSPOMO", s_Physics_DebugSectionNames, 0, 4u, "Do a point query");
  physics_debugQueryPointPosition = Dvar_RegisterVec3("MOKLLNKLNP", 0.0, 0.0, 0.0, -128000.0, 128000.0, 4.0, 4u, "Query Point Position");
  physics_debugQueryPointMaxDistance = Dvar_RegisterInt("LTQPTMNPOP", 6, 0, 1024, 4u, "Query Point Max Distance");
  physics_debugGetClosestPointsWorld = Dvar_RegisterEnum("LRKOMMKRPS", s_Physics_DebugSectionNames, 0, 4u, "Do a get closest points query");
  physics_debugGetClosestPointsPosition = Dvar_RegisterVec3("MSNMSQNNRR", 0.0, 0.0, 0.0, -128000.0, 128000.0, 4.0, 4u, "Get Closest Points Position");
  physics_debugGetClosestPointsMaxDistance = Dvar_RegisterInt("NNSNRSMMOR", 6, 0, 1024, 4u, "Get Closest Points Max Distance");
  physics_debugQuery_CONTENTS_SOLID = Dvar_RegisterBool("POSKRTPKT", 1, 4u, "Set the physics query to use this contents flag");
  physics_debugQuery_CONTENTS_FOLIAGE = Dvar_RegisterBool("SSSNKSKN", 0, 4u, "Set the physics query to use this contents flag");
  physics_debugQuery_CONTENTS_VEHICLETRIGGER = Dvar_RegisterBool("RQOPLTPKO", 0, 4u, "Set the physics query to use this contents flag");
  physics_debugQuery_CONTENTS_GLASS = Dvar_RegisterBool("NNTOQMTNRO", 0, 4u, "Set the physics query to use this contents flag");
  physics_debugQuery_CONTENTS_WATER = Dvar_RegisterBool("OKMKLROKNR", 0, 4u, "Set the physics query to use this contents flag");
  physics_debugQuery_CONTENTS_AI_NOSHOOT = Dvar_RegisterBool("NLSKMNNNTN", 0, 4u, "Set the physics query to use this contents flag");
  physics_debugQuery_CONTENTS_MISSILECLIP = Dvar_RegisterBool("LNLTLTO", 0, 4u, "Set the physics query to use this contents flag");
  physics_debugQuery_CONTENTS_ITEM = Dvar_RegisterBool("LKRRKRRST", 0, 4u, "Set the physics query to use this contents flag");
  physics_debugQuery_CONTENTS_VEHICLECLIP = Dvar_RegisterBool("NPNRRQQMRK", 0, 4u, "Set the physics query to use this contents flag");
  physics_debugQuery_CONTENTS_ITEMCLIP = Dvar_RegisterBool("LMPRNKNKTL", 0, 4u, "Set the physics query to use this contents flag");
  physics_debugQuery_CONTENTS_SKY = Dvar_RegisterBool("MRRSTMNKQT", 0, 4u, "Set the physics query to use this contents flag");
  physics_debugQuery_CONTENTS_AI_NOSIGHT = Dvar_RegisterBool("NOOQQQNNNP", 0, 4u, "Set the physics query to use this contents flag");
  physics_debugQuery_CONTENTS_CLIPSHOT = Dvar_RegisterBool("MKMNSLRTPS", 0, 4u, "Set the physics query to use this contents flag");
  physics_debugQuery_CONTENTS_ACTOR = Dvar_RegisterBool("MOLPRROTKR", 0, 4u, "Set the physics query to use this contents flag");
  physics_debugQuery_CONTENTS_PLAYERCLIP = Dvar_RegisterBool("LRPQRLMML", 0, 4u, "Set the physics query to use this contents flag");
  physics_debugQuery_CONTENTS_PLAYER_NOSIGHT = Dvar_RegisterBool("TQKPMLQRM", 0, 4u, "Set the physics query to use this contents flag");
  physics_debugQuery_CONTENTS_AI_CLIP = Dvar_RegisterBool("NPMQPQNPLR", 0, 4u, "Set the physics query to use this contents flag");
  physics_debugQuery_CONTENTS_SENTIENTTRIGGER = Dvar_RegisterBool("LNQKQMRRKQ", 0, 4u, "Set the physics query to use this contents flag");
  physics_debugQuery_CONTENTS_EXPLOSIONCLIP = Dvar_RegisterBool("NPPQKTPTQN", 0, 4u, "Set the physics query to use this contents flag");
  physics_debugQuery_CONTENTS_SOUNDCLIP = Dvar_RegisterBool("MONMOKKMSL", 0, 4u, "Set the physics query to use this contents flag");
  physics_debugQuery_CONTENTS_SOUNDREFLECT = Dvar_RegisterBool("LNQQONNNKS", 0, 4u, "Set the physics query to use this contents flag");
  physics_debugQuery_CONTENTS_NONSENTIENTTRIGGER = Dvar_RegisterBool("NQPNTMSKQT", 0, 4u, "Set the physics query to use this contents flag");
  physics_debugQuery_CONTENTS_VEHICLE = Dvar_RegisterBool("RTKNTQSOS", 0, 4u, "Set the physics query to use this contents flag");
  physics_debugQuery_CONTENTS_MANTLE = Dvar_RegisterBool("LPLKLLKKN", 0, 4u, "Set the physics query to use this contents flag");
  physics_debugQuery_CONTENTS_PLAYER = Dvar_RegisterBool("MKMSPKSSPT", 0, 4u, "Set the physics query to use this contents flag");
  physics_debugQuery_CONTENTS_USECLIP = Dvar_RegisterBool("TNTLMTNNR", 0, 4u, "Set the physics query to use this contents flag");
  physics_debugQuery_CONTENTS_PLAYERTRIGGER = Dvar_RegisterBool("MKTRMOQKSR", 0, 4u, "Set the physics query to use this contents flag");
  physics_debugQuery_Preset = Dvar_RegisterInt("LLMSLMMQSO", 0, 0x80000000, 0x7FFFFFFF, 4u, "Set the physics query to use this contents preset - if 0, uses the other settings");
  physics_debugQuery_IgnoreVolumes = Dvar_RegisterBool("NSTMRSSOQ", 1, 4u, "Set the physics query to ignore volumes or include them");
  physics_dumpCharacterProxyServer = Dvar_RegisterBool("NLTOKQSORN", 0, 4u, "Dump the character proxy data on the server");
  physics_debugDetailModel = Dvar_RegisterBool("NTTPRPRPPS", 0, 4u, "Debug detail models");
  physics_debugFlickerColLod = Dvar_RegisterBool("NKKNSKTOKN", 0, 4u, "Toggle back and forth between normal lod and collod");
  physics_debugBadColLods = Dvar_RegisterBool("NMSTLLMOPP", 0, 4u, "Display models with bad collods");
  physics_debugMutableShapesInWorld = Dvar_RegisterEnum("LMLLOTTOTP", s_Physics_DebugSectionNames, 0, 4u, "Display mutable shape data for a world");
  physics_debugMutableShapesInWorldRange = Dvar_RegisterFloat("RKNQSMTRM", 500.0, 100.0, 3000.0, 100.0, 4u, "Range at which we display detailed info for mutable shapes in world debug mode");
  physics_debugDump = Dvar_RegisterBool("MOMNNTQQMO", 0, 4u, "Dump debug screen to tty");
  PhysicsSVFX_SetupDvars();
  Dvar_EndPermanentRegistration();
}

/*
==============
Physics_SetupServerWorldCInfos
==============
*/
void Physics_SetupServerWorldCInfos(const unsigned int maxClients)
{
  int maxNumRigidBodiesServer; 
  const dvar_t *v3; 
  int maxNumDetailRigidBodiesServer; 
  const dvar_t *v5; 
  int maxNumMotionsServer; 
  const dvar_t *v7; 
  int maxNumConstraintsServer; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  int integer; 
  const dvar_t *v15; 

  if ( maxClients - 1 > 0xC7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 766, ASSERT_TYPE_ASSERT, "(( maxClients > 0 ) && ( maxClients <= ((1 >= 200) ? 1 : 200) ))", (const char *)&queryFormat, "( maxClients > 0 ) && ( maxClients <= MAX_CLIENTS_STATIC )") )
    __debugbreak();
  if ( !s_physicsWorldPersistentBufferSizeServerMain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 776, ASSERT_TYPE_ASSERT, "(s_physicsWorldPersistentBufferSizeServerMain)", (const char *)&queryFormat, "s_physicsWorldPersistentBufferSizeServerMain") )
    __debugbreak();
  if ( !s_physicsWorldPersistentBufferSizeServerDetail && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 777, ASSERT_TYPE_ASSERT, "(s_physicsWorldPersistentBufferSizeServerDetail)", (const char *)&queryFormat, "s_physicsWorldPersistentBufferSizeServerDetail") )
    __debugbreak();
  maxNumRigidBodiesServer = cm.physicsCapacities.maxNumRigidBodiesServer;
  if ( !cm.physicsCapacities.maxNumRigidBodiesServer )
  {
    v3 = DVARINT_physics_MaxNumServerBodies;
    if ( !DVARINT_physics_MaxNumServerBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_MaxNumServerBodies") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    maxNumRigidBodiesServer = v3->current.integer;
  }
  maxNumDetailRigidBodiesServer = cm.physicsCapacities.maxNumDetailRigidBodiesServer;
  if ( !cm.physicsCapacities.maxNumDetailRigidBodiesServer )
  {
    v5 = DVARINT_physics_MaxNumServerDetailBodies;
    if ( !DVARINT_physics_MaxNumServerDetailBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_MaxNumServerDetailBodies") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    maxNumDetailRigidBodiesServer = v5->current.integer;
  }
  maxNumMotionsServer = cm.physicsCapacities.maxNumMotionsServer;
  if ( !cm.physicsCapacities.maxNumMotionsServer )
  {
    v7 = DVARINT_physics_MaxNumServerMotions;
    if ( !DVARINT_physics_MaxNumServerMotions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_MaxNumServerMotions") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    maxNumMotionsServer = v7->current.integer;
  }
  maxNumConstraintsServer = cm.physicsCapacities.maxNumConstraintsServer;
  if ( !cm.physicsCapacities.maxNumConstraintsServer )
  {
    v9 = DVARINT_physics_MaxNumServerConstraints;
    if ( !DVARINT_physics_MaxNumServerConstraints && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_MaxNumServerConstraints") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    maxNumConstraintsServer = v9->current.integer;
  }
  if ( cm.mapEnts )
  {
    maxNumRigidBodiesServer += cm.mapEnts->scriptableMapEnts.physicsLimits.serverStandaloneMainRigidBodyCount;
    maxNumDetailRigidBodiesServer += cm.mapEnts->scriptableMapEnts.physicsLimits.serverStandaloneDetailedRigidBodyCount;
    maxNumMotionsServer += cm.mapEnts->scriptableMapEnts.physicsLimits.serverStandaloneMotionCount;
    if ( cm.mapEnts->spawnGroupLoot.pointCount )
    {
      v10 = DVARSTR_loot_table_name;
      if ( !DVARSTR_loot_table_name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "loot_table_name") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      if ( *(_BYTE *)v10->current.integer64 )
      {
        v11 = DVARINT_physics_ExtraLootServerBodies;
        if ( !DVARINT_physics_ExtraLootServerBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_ExtraLootServerBodies") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v11);
        maxNumRigidBodiesServer += v11->current.integer;
        v12 = DVARINT_physics_ExtraLootServerBodies;
        if ( !DVARINT_physics_ExtraLootServerBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_ExtraLootServerBodies") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v12);
        maxNumDetailRigidBodiesServer += v12->current.integer;
      }
    }
    if ( maxClients > 0x40 )
    {
      v13 = DVARINT_physics_ExtraPlayerServerBodies;
      if ( !DVARINT_physics_ExtraPlayerServerBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_ExtraPlayerServerBodies") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      integer = v13->current.integer;
      v15 = DVARINT_physics_ExtraPlayerServerBodies;
      maxNumRigidBodiesServer += maxClients * integer;
      if ( !DVARINT_physics_ExtraPlayerServerBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_ExtraPlayerServerBodies") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      maxNumDetailRigidBodiesServer += maxClients * v15->current.integer;
    }
  }
  if ( maxNumRigidBodiesServer > 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 816, ASSERT_TYPE_ASSERT, "( serverRigidBodyMax ) <= ( 0xffffff )", "%s <= %s\n\t%i, %i", "serverRigidBodyMax", "PHYSICS_HARD_MAX_BODIES_PER_WORLD", maxNumRigidBodiesServer, 0xFFFFFF) )
    __debugbreak();
  s_physicsWorldCInfos[0].persistentBuffer = s_physicsWorldPersistentBufferSizeServerMain;
  s_physicsWorldCInfos[1].persistentBuffer = s_physicsWorldPersistentBufferSizeServerDetail;
  s_physicsWorldCInfos[0].collisionTolerance = FLOAT_1_5;
  s_physicsWorldCInfos[0].solverStrength = FLOAT_0_60000002;
  s_physicsWorldCInfos[0].solverDamping = FLOAT_1_0;
  s_physicsWorldCInfos[0].defaultTimeStep = FLOAT_0_016666668;
  s_physicsWorldCInfos[1].collisionTolerance = FLOAT_1_5;
  s_physicsWorldCInfos[1].solverStrength = FLOAT_0_60000002;
  s_physicsWorldCInfos[1].solverDamping = FLOAT_1_0;
  s_physicsWorldCInfos[1].defaultTimeStep = FLOAT_0_016666668;
  s_physicsWorldCInfos[0].systemCountMax = maxNumRigidBodiesServer;
  s_physicsWorldCInfos[0].bodyCountMax = maxNumRigidBodiesServer;
  s_physicsWorldCInfos[0].motionCountMax = maxNumMotionsServer;
  s_physicsWorldCInfos[0].constraintCountMax = maxNumConstraintsServer;
  s_physicsWorldCInfos[0].persistentBufferSize = 0x800000;
  *(_OWORD *)&s_physicsWorldCInfos[0].collisionAccuracy = _xmm;
  s_physicsWorldCInfos[0].solverIterations = 4;
  *(_WORD *)&s_physicsWorldCInfos[0].isMultiThreaded = 0;
  s_physicsWorldCInfos[0].visualizeWithCloth = 0;
  s_physicsWorldCInfos[0].adjustSolverSettingsOnTimestep = 0;
  s_physicsWorldCInfos[0].maxRagdolls = 0;
  s_physicsWorldCInfos[1].systemCountMax = maxNumRigidBodiesServer;
  s_physicsWorldCInfos[1].bodyCountMax = maxNumDetailRigidBodiesServer;
  s_physicsWorldCInfos[1].motionCountMax = 1;
  s_physicsWorldCInfos[1].constraintCountMax = 1;
  s_physicsWorldCInfos[1].persistentBufferSize = 0x80000;
  *(_OWORD *)&s_physicsWorldCInfos[1].collisionAccuracy = _xmm;
  s_physicsWorldCInfos[1].solverIterations = 4;
  *(_QWORD *)&s_physicsWorldCInfos[1].adjustSolverSettingsOnTimestep = 0i64;
}

/*
==============
Physics_Shapecast
==============
*/
void Physics_Shapecast(Physics_WorldId worldId, unsigned int numBodies, unsigned int *bodyIds, hknpShape *shape, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, HavokPhysics_CollisionQueryResult *result, HavokPhysics_CollisionQueryResult *startResult)
{
  __int64 v13; 
  float v14; 
  float v15; 
  float v21; 
  hkQuaternionf *v23; 
  hkVector4f v24; 
  hkVector4f v25; 
  hkQuaternionf v26; 

  v13 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9475, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to fire Shapecast against bodies when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v13 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9476, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to fire Shapecast against bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v13) )
    __debugbreak();
  if ( numBodies )
  {
    if ( !bodyIds )
    {
      LODWORD(v23) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9477, ASSERT_TYPE_ASSERT, "(numBodies == 0 || bodyIds)", "%s\n\tPhysics: Trying to fire shapecast against bodies with bad bodies %i", "numBodies == 0 || bodyIds", v23) )
        __debugbreak();
    }
  }
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9478, ASSERT_TYPE_ASSERT, "(shape)", "%s\n\tPhysics: Trying to fire Shapecast against bodies with null shape", "shape") )
    __debugbreak();
  if ( ((LODWORD(start->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9479, ASSERT_TYPE_ASSERT, "(!IS_NAN( start[0] ) && !IS_NAN( start[1] ) && !IS_NAN( start[2] ))", "%s\n\tPhysics: Trying to fire Shapecast against bodies with invalid start", "!IS_NAN( start[0] ) && !IS_NAN( start[1] ) && !IS_NAN( start[2] )") )
    __debugbreak();
  if ( ((LODWORD(end->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9480, ASSERT_TYPE_ASSERT, "(!IS_NAN( end[0] ) && !IS_NAN( end[1] ) && !IS_NAN( end[2] ))", "%s\n\tPhysics: Trying to fire Shapecast against bodies with invalid end", "!IS_NAN( end[0] ) && !IS_NAN( end[1] ) && !IS_NAN( end[2] )") )
    __debugbreak();
  if ( ((LODWORD(rotation->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9481, ASSERT_TYPE_ASSERT, "(!IS_NAN( rotation[0] ) && !IS_NAN( rotation[1] ) && !IS_NAN( rotation[2] ) && !IS_NAN( rotation[3] ))", "%s\n\tPhysics: Trying to fire Shapecast against bodies with invalid rotation", "!IS_NAN( rotation[0] ) && !IS_NAN( rotation[1] ) && !IS_NAN( rotation[2] ) && !IS_NAN( rotation[3] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9482, ASSERT_TYPE_ASSERT, "(extendedData)", "%s\n\tPhysics: Trying to fire Shapecast against bodies with invalid extended data", "extendedData") )
    __debugbreak();
  if ( !extendedData->ignoreBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9483, ASSERT_TYPE_ASSERT, "(extendedData->ignoreBodies)", "%s\n\tPhysics: Trying to fire Shapecast against bodies without ignore bodies", "extendedData->ignoreBodies") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9484, ASSERT_TYPE_ASSERT, "(result)", "%s\n\tPhysics: Trying to fire Shapecast against bodies with invalid result", "result") )
    __debugbreak();
  if ( g_physicsQueriesNotAllowedForWorld[v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9485, ASSERT_TYPE_ASSERT, "(!g_physicsQueriesNotAllowedForWorld[worldId])", "%s\n\tCan't perform a physics query here - they have been expressly disallowed", "!g_physicsQueriesNotAllowedForWorld[worldId]") )
    __debugbreak();
  CG_EntityWorkers_CheckHasAnyLock_Physics();
  Physics_CheckShapecastConstraints(shape, start, end);
  v14 = 0.03125 * start->v[1];
  v15 = 0.03125 * start->v[2];
  _XMM5 = LODWORD(rotation->v[0]);
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [rdi+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rdi+8], 20h ; ' '
    vinsertps xmm5, xmm5, dword ptr [rdi+0Ch], 30h ; '0'
  }
  v25.m_quad.m128_f32[0] = 0.03125 * start->v[0];
  v24.m_quad.m128_f32[1] = 0.03125 * end->v[1];
  __asm { vdpps   xmm0, xmm5, xmm5, 0FFh }
  v25.m_quad.m128_f32[1] = v14;
  v21 = 0.03125 * end->v[2];
  v25.m_quad.m128_f32[2] = v15;
  __asm { vrsqrtps xmm4, xmm0 }
  v24.m_quad.m128_f32[0] = 0.03125 * end->v[0];
  v24.m_quad.m128_f32[2] = v21;
  v25.m_quad.m128_f32[3] = 0.0;
  v24.m_quad.m128_f32[3] = 0.0;
  v26.m_vec.m_quad = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM0), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM5);
  switch ( (int)v13 )
  {
    case 0:
      Profile_Begin(742);
      break;
    case 1:
      Profile_Begin(743);
      break;
    case 2:
    case 5:
      Profile_Begin(744);
      break;
    case 3:
    case 6:
      Profile_Begin(745);
      break;
    case 4:
    case 7:
      Profile_Begin(746);
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9541, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown world id") )
        __debugbreak();
      break;
  }
  HavokPhysics_Shapecast((Physics_WorldId)v13, numBodies, bodyIds, shape, &v25, &v24, &v26, extendedData, result, startResult);
  Profile_EndInternal(NULL);
}

/*
==============
Physics_Shapecast
==============
*/
void Physics_Shapecast(Physics_WorldId worldId, unsigned int bodyId, hknpShape *shape, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, HavokPhysics_CollisionQueryResult *result, HavokPhysics_CollisionQueryResult *startResult)
{
  __int64 v12; 
  float v13; 
  float v14; 
  float v20; 
  Physics_ShapecastExtendedData *v22; 
  hkVector4f v23; 
  hkVector4f starta; 
  hkQuaternionf v25; 

  v12 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9394, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to fire Shapecast against body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v12 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9395, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to fire Shapecast against body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v12) )
    __debugbreak();
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v22) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9396, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to fire shapecast against body with invalid body id %i", "Physics_IsRigidBodyIdValid( bodyId )", v22) )
      __debugbreak();
  }
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9397, ASSERT_TYPE_ASSERT, "(shape)", "%s\n\tPhysics: Trying to fire Shapecast against body with null shape", "shape") )
    __debugbreak();
  if ( ((LODWORD(start->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9398, ASSERT_TYPE_ASSERT, "(!IS_NAN( start[0] ) && !IS_NAN( start[1] ) && !IS_NAN( start[2] ))", "%s\n\tPhysics: Trying to fire Shapecast against body with invalid start", "!IS_NAN( start[0] ) && !IS_NAN( start[1] ) && !IS_NAN( start[2] )") )
    __debugbreak();
  if ( ((LODWORD(end->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9399, ASSERT_TYPE_ASSERT, "(!IS_NAN( end[0] ) && !IS_NAN( end[1] ) && !IS_NAN( end[2] ))", "%s\n\tPhysics: Trying to fire Shapecast against body with invalid start", "!IS_NAN( end[0] ) && !IS_NAN( end[1] ) && !IS_NAN( end[2] )") )
    __debugbreak();
  if ( ((LODWORD(rotation->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9400, ASSERT_TYPE_ASSERT, "(!IS_NAN( rotation[0] ) && !IS_NAN( rotation[1] ) && !IS_NAN( rotation[2] ) && !IS_NAN( rotation[3] ))", "%s\n\tPhysics: Trying to fire Shapecast against body with invalid rotation", "!IS_NAN( rotation[0] ) && !IS_NAN( rotation[1] ) && !IS_NAN( rotation[2] ) && !IS_NAN( rotation[3] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9401, ASSERT_TYPE_ASSERT, "(extendedData)", "%s\n\tPhysics: Trying to fire Shapecast against body with invalid extended data", "extendedData") )
    __debugbreak();
  if ( extendedData->ignoreBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9402, ASSERT_TYPE_ASSERT, "(!extendedData->ignoreBodies)", "%s\n\tPhysics: Trying to fire Shapecast against body with ignore bodies", "!extendedData->ignoreBodies") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9403, ASSERT_TYPE_ASSERT, "(result)", "%s\n\tPhysics: Trying to fire Shapecast against body with invalid result", "result") )
    __debugbreak();
  if ( g_physicsQueriesNotAllowedForWorld[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9404, ASSERT_TYPE_ASSERT, "(!g_physicsQueriesNotAllowedForWorld[worldId])", "%s\n\tCan't perform a physics query here - they have been expressly disallowed", "!g_physicsQueriesNotAllowedForWorld[worldId]") )
    __debugbreak();
  CG_EntityWorkers_CheckHasAnyLock_Physics();
  Physics_CheckShapecastConstraints(shape, start, end);
  v13 = 0.03125 * start->v[1];
  v14 = 0.03125 * start->v[2];
  _XMM5 = LODWORD(rotation->v[0]);
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [rdi+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rdi+8], 20h ; ' '
    vinsertps xmm5, xmm5, dword ptr [rdi+0Ch], 30h ; '0'
  }
  starta.m_quad.m128_f32[0] = 0.03125 * start->v[0];
  v23.m_quad.m128_f32[1] = 0.03125 * end->v[1];
  __asm { vdpps   xmm0, xmm5, xmm5, 0FFh }
  starta.m_quad.m128_f32[1] = v13;
  v20 = 0.03125 * end->v[2];
  starta.m_quad.m128_f32[2] = v14;
  __asm { vrsqrtps xmm4, xmm0 }
  v23.m_quad.m128_f32[0] = 0.03125 * end->v[0];
  v23.m_quad.m128_f32[2] = v20;
  starta.m_quad.m128_f32[3] = 0.0;
  v23.m_quad.m128_f32[3] = 0.0;
  v25.m_vec.m_quad = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM0), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM5);
  switch ( (int)v12 )
  {
    case 0:
      Profile_Begin(737);
      break;
    case 1:
      Profile_Begin(738);
      break;
    case 2:
    case 5:
      Profile_Begin(739);
      break;
    case 3:
    case 6:
      Profile_Begin(740);
      break;
    case 4:
    case 7:
      Profile_Begin(741);
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9460, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown world id") )
        __debugbreak();
      break;
  }
  HavokPhysics_Shapecast((Physics_WorldId)v12, (hknpBodyId)bodyId, shape, &starta, &v23, &v25, extendedData, result, startResult);
  Profile_EndInternal(NULL);
}

/*
==============
Physics_Shapecast
==============
*/
void Physics_Shapecast(Physics_WorldId worldId, hknpShape *shape, const vec3_t *start, const vec3_t *end, const vec4_t *rotation, Physics_ShapecastExtendedData *extendedData, HavokPhysics_CollisionQueryResult *result, HavokPhysics_CollisionQueryResult *startResult)
{
  HavokPhysics_CollisionQueryResult *v9; 
  __int64 v12; 
  const dvar_t *v13; 
  float v14; 
  float v15; 
  float v21; 
  hkVector4f enda; 
  hkVector4f starta; 
  hkQuaternionf v25; 

  v9 = result;
  v12 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8861, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to fire Shapecast when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v12 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8862, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to fire Shapecast with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v12) )
    __debugbreak();
  if ( !shape && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8863, ASSERT_TYPE_ASSERT, "(shape)", "%s\n\tPhysics: Trying to fire Shapecast with null shape", "shape") )
    __debugbreak();
  if ( ((LODWORD(start->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(start->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8864, ASSERT_TYPE_ASSERT, "(!IS_NAN( start[0] ) && !IS_NAN( start[1] ) && !IS_NAN( start[2] ))", "%s\n\tPhysics: Trying to fire Shapecast with invalid start", "!IS_NAN( start[0] ) && !IS_NAN( start[1] ) && !IS_NAN( start[2] )") )
    __debugbreak();
  if ( ((LODWORD(end->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(end->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8865, ASSERT_TYPE_ASSERT, "(!IS_NAN( end[0] ) && !IS_NAN( end[1] ) && !IS_NAN( end[2] ))", "%s\n\tPhysics: Trying to fire Shapecast with invalid end", "!IS_NAN( end[0] ) && !IS_NAN( end[1] ) && !IS_NAN( end[2] )") )
    __debugbreak();
  if ( ((LODWORD(rotation->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(rotation->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8866, ASSERT_TYPE_ASSERT, "(!IS_NAN( rotation[0] ) && !IS_NAN( rotation[1] ) && !IS_NAN( rotation[2] ) && !IS_NAN( rotation[3] ))", "%s\n\tPhysics: Trying to fire Shapecast with invalid rotation", "!IS_NAN( rotation[0] ) && !IS_NAN( rotation[1] ) && !IS_NAN( rotation[2] ) && !IS_NAN( rotation[3] )") )
    __debugbreak();
  if ( !extendedData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8867, ASSERT_TYPE_ASSERT, "(extendedData)", "%s\n\tPhysics: Trying to fire Shapecast with invalid extended data", "extendedData") )
    __debugbreak();
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8868, ASSERT_TYPE_ASSERT, "(result)", "%s\n\tPhysics: Trying to fire Shapecast with invalid result", "result") )
    __debugbreak();
  if ( g_physicsBroadphaseQueriesNotAllowedForWorld[v12] )
  {
    v13 = DVARBOOL_physics_allowQueryDisabling;
    if ( !DVARBOOL_physics_allowQueryDisabling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "physics_allowQueryDisabling") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    if ( v13->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8869, ASSERT_TYPE_ASSERT, "(!g_physicsBroadphaseQueriesNotAllowedForWorld[worldId] || !Dvar_GetBool_Internal_DebugName( DVARBOOL_physics_allowQueryDisabling, \"physics_allowQueryDisabling\" ))", "%s\n\tCan't perform a physics query here - they have been expressly disallowed", "!g_physicsBroadphaseQueriesNotAllowedForWorld[worldId] || !Dvar_GetBool( physics_allowQueryDisabling )") )
      __debugbreak();
    v9 = result;
  }
  if ( g_physicsQueriesNotAllowedForWorld[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8870, ASSERT_TYPE_ASSERT, "(!g_physicsQueriesNotAllowedForWorld[worldId])", "%s\n\tCan't perform a physics query here - they have been expressly disallowed", "!g_physicsQueriesNotAllowedForWorld[worldId]") )
    __debugbreak();
  CG_EntityWorkers_CheckHasAnyLock_Physics();
  if ( (unsigned int)v12 > 7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8404, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( g_physicsBroadphaseRefreshNeeded[v12] )
    Physics_UpdateBroadphase((Physics_WorldId)v12, 1);
  Physics_CheckShapecastConstraints(shape, start, end);
  v14 = 0.03125 * start->v[1];
  v15 = 0.03125 * start->v[2];
  _XMM5 = LODWORD(rotation->v[0]);
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [rdi+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rdi+8], 20h ; ' '
    vinsertps xmm5, xmm5, dword ptr [rdi+0Ch], 30h ; '0'
  }
  starta.m_quad.m128_f32[0] = 0.03125 * start->v[0];
  enda.m_quad.m128_f32[1] = 0.03125 * end->v[1];
  __asm { vdpps   xmm0, xmm5, xmm5, 0FFh }
  starta.m_quad.m128_f32[1] = v14;
  v21 = 0.03125 * end->v[2];
  starta.m_quad.m128_f32[2] = v15;
  __asm { vrsqrtps xmm4, xmm0 }
  enda.m_quad.m128_f32[0] = 0.03125 * end->v[0];
  enda.m_quad.m128_f32[2] = v21;
  starta.m_quad.m128_f32[3] = 0.0;
  enda.m_quad.m128_f32[3] = 0.0;
  v25.m_vec.m_quad = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM4, _XMM0), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM5);
  switch ( (int)v12 )
  {
    case 0:
      Profile_Begin(712);
      break;
    case 1:
      Profile_Begin(713);
      break;
    case 2:
    case 5:
      Profile_Begin(714);
      break;
    case 3:
    case 6:
      Profile_Begin(715);
      break;
    case 4:
    case 7:
      Profile_Begin(716);
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 8932, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown world id") )
        __debugbreak();
      break;
  }
  HavokPhysics_Shapecast((Physics_WorldId)v12, shape, &starta, &enda, &v25, extendedData, v9, startResult);
  Profile_EndInternal(NULL);
}

/*
==============
Physics_Shutdown
==============
*/
void Physics_Shutdown(void)
{
  StreamerMemLoan result; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1422, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to shutdown when not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( g_physicsServerWorldsCreated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1423, ASSERT_TYPE_ASSERT, "(!g_physicsServerWorldsCreated)", "%s\n\tPhysics: Trying to shutdown while server worlds still exist", "!g_physicsServerWorldsCreated") )
    __debugbreak();
  if ( g_physicsClientWorldsCreated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 1424, ASSERT_TYPE_ASSERT, "(!g_physicsClientWorldsCreated)", "%s\n\tPhysics: Trying to shutdown while client worlds still exist", "!g_physicsClientWorldsCreated") )
    __debugbreak();
  PhysicsFX_Shutdown();
  PhysicsQuery_Shutdown();
  HavokPhysics_Shutdown();
  CG_PhysicsObject_Shutdown();
  G_PhysicsObject_Shutdown();
  if ( s_physicsGeneralMemoryBuffer )
  {
    PMem_Free(&result, s_physicsPMemName, PMEM_STACK_GAME);
    StreamerMemLoan::~StreamerMemLoan(&result);
    s_physicsGeneralMemoryBuffer = NULL;
    s_physicsWorldPersistentBufferSizeServerMain = NULL;
    s_physicsWorldPersistentBufferSizeServerDetail = NULL;
    s_physicsWorldPersistentBufferSizeClientPredictive = NULL;
    s_physicsWorldPersistentBufferSizeClientAuthoritative = NULL;
    s_physicsWorldPersistentBufferSizeClientDetail = NULL;
  }
  PhysicsCharacterProxy_Shutdown();
  PhysicsCoverWall_Shutdown();
  g_physicsInitialized = 0;
}

/*
==============
Physics_StepVDB
==============
*/
void Physics_StepVDB(Physics_WorldId worldId, float time, bool updateStats)
{
  Physics_WorldId v5; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3254, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Step a VDB when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v5 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3255, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Step a VDB with invalid world index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v5) )
      __debugbreak();
  }
  HavokPhysics_StepVDB(worldId, time, updateStats);
}

/*
==============
Physics_StepWorld
==============
*/
void Physics_StepWorld(Physics_WorldId worldId, int stepIndex, int numStepsPlanned, float stepTimeOverride)
{
  __int64 v5; 
  Physics_WorldInfo *v7; 
  LocalClientNum_t LocalClientForWorld; 
  __int64 v9; 
  int v10; 
  int data[6]; 

  v5 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3205, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Step World when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v5 > 7 )
  {
    v10 = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3206, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to STep World with invalid world index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v10) )
      __debugbreak();
  }
  v7 = &s_physicsWorldInfos[v5];
  if ( Com_GameIsPaused() && (unsigned int)v5 > 1 )
  {
    Physics_UpdateWorld((Physics_WorldId)v5, 1);
    if ( Physics_IsAuthoritativeWorld((Physics_WorldId)v5) )
    {
      LocalClientForWorld = Physics_GetLocalClientForWorld((Physics_WorldId)v5);
      Physics_UpdateWorld((Physics_WorldId)(3 * LocalClientForWorld + 4), 1);
    }
  }
  else if ( v7->isMultiThreaded )
  {
    data[1] = v7->timePostStep;
    data[0] = v5;
    *(float *)&data[4] = stepTimeOverride;
    data[2] = stepIndex;
    data[3] = numStepsPlanned;
    Sys_AddWorkerCmd(WRKCMD_PHYSICS_STEP_WORLD_START, data);
  }
  else
  {
    Physics_StepWorldStart((Physics_WorldId)v5, v7->timePostStep, stepIndex, numStepsPlanned, stepTimeOverride);
    if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2846, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Step World Step when system is not initialized", "g_physicsInitialized") )
      __debugbreak();
    if ( (unsigned int)v5 > 7 )
    {
      LODWORD(v9) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2847, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Step World Step with invalid world index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v9) )
        __debugbreak();
    }
    Profile_Begin(((unsigned int)v5 > 1) + 608);
    HavokPhysics_StepWorldPrep((Physics_WorldId)v5, stepIndex, numStepsPlanned, stepTimeOverride);
    HavokPhysics_StepWorldCollide((Physics_WorldId)v5, stepIndex, numStepsPlanned, stepTimeOverride);
    Physics_SetBroadphaseNeedsRefresh((const Physics_WorldId)v5, 0);
    HavokPhysics_StepWorldSolve((Physics_WorldId)v5, stepIndex, numStepsPlanned, stepTimeOverride);
    HavokPhysics_StepWorldFX((Physics_WorldId)v5, stepIndex, numStepsPlanned, stepTimeOverride);
    Profile_EndInternal(NULL);
    Physics_StepWorldPhysicsObjects((Physics_WorldId)v5, stepIndex, numStepsPlanned);
    Physics_StepWorldDetail((Physics_WorldId)v5, stepIndex, numStepsPlanned);
    Physics_StepWorldEnd((Physics_WorldId)v5, stepIndex, numStepsPlanned);
  }
}

/*
==============
Physics_StepWorldDetail
==============
*/
void Physics_StepWorldDetail(Physics_WorldId worldId, int stepIndex, int numStepsPlanned)
{
  __int64 v5; 
  void (__fastcall *v6)(Physics_WorldId, int, int); 
  int v7; 

  v5 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2930, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Step World Detail when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v5 > 7 )
  {
    v7 = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2931, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Step World Detail with invalid world index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v7) )
      __debugbreak();
  }
  Sys_ProfBeginNamedEvent(0xFF008008, "physics step world detail");
  Profile_Begin(((unsigned int)v5 > 1) + 617);
  HavokPhysics_StepWorldDetail((Physics_WorldId)v5, stepIndex, numStepsPlanned);
  v6 = s_physicsStepWorldDetailFns[v5];
  if ( v6 )
    v6((Physics_WorldId)v5, stepIndex, numStepsPlanned);
  Profile_EndInternal(NULL);
  Sys_ProfEndNamedEvent();
}

/*
==============
Physics_StepWorldEnd
==============
*/
void Physics_StepWorldEnd(Physics_WorldId worldId, int stepIndex, int numStepsPlanned)
{
  __int64 v5; 
  void (__fastcall *v6)(Physics_WorldId, int, int); 
  int v7; 

  v5 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2965, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Step World End when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v5 > 7 )
  {
    v7 = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2966, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Step World End with invalid world index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v7) )
      __debugbreak();
  }
  Sys_ProfBeginNamedEvent(0xFF008008, "physics step world end");
  Profile_Begin(((unsigned int)v5 > 1) + 619);
  HavokPhysics_StepWorldEnd((Physics_WorldId)v5, stepIndex, numStepsPlanned);
  v6 = s_physicsAfterStepWorldFns[v5];
  if ( v6 )
    v6((Physics_WorldId)v5, stepIndex, numStepsPlanned);
  Profile_EndInternal(NULL);
  Sys_ProfEndNamedEvent();
}

/*
==============
Physics_StepWorldPhysicsObjects
==============
*/
void Physics_StepWorldPhysicsObjects(Physics_WorldId worldId, int stepIndex, int numStepsPlanned)
{
  __int64 v5; 
  void (__fastcall *v6)(Physics_WorldId, int, int); 
  int v7; 

  v5 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2895, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Step World PhysicsObjects when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v5 > 7 )
  {
    v7 = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2896, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Step World PhysicsObjects with invalid world index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v7) )
      __debugbreak();
  }
  Sys_ProfBeginNamedEvent(0xFF008008, "physics step world physicsobjects");
  Profile_Begin(((unsigned int)v5 > 1) + 613);
  HavokPhysics_StepWorldPhysicsObjects((Physics_WorldId)v5, stepIndex, numStepsPlanned);
  v6 = s_physicsStepWorldPhysicsObjectsFns[v5];
  if ( v6 )
    v6((Physics_WorldId)v5, stepIndex, numStepsPlanned);
  Profile_EndInternal(NULL);
  Sys_ProfEndNamedEvent();
}

/*
==============
Physics_StepWorldStart
==============
*/
void Physics_StepWorldStart(Physics_WorldId worldId, int timePostStep, int stepIndex, int numStepsPlanned, float stepTimeOverride)
{
  __int64 v8; 
  int v9; 
  hkMonitorStream *Value; 
  hkMonitorStream *v11; 
  int v12; 

  v8 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2753, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Step World Start when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v8 > 7 )
  {
    v12 = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2754, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Step World Start with invalid world index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v12) )
      __debugbreak();
  }
  Sys_ProfBeginNamedEvent(0xFF008008, "physics step world start");
  v9 = 606;
  if ( (unsigned int)v8 > 1 )
    v9 = 607;
  Profile_Begin(v9);
  if ( s_physicsBeforeStepWorldFns[v8] )
  {
    Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
    v11 = Value;
    if ( Value )
      hkMonitorStream::timerBegin(Value, "TtBefore Step world Fn");
    ((void (__fastcall *)(Physics_WorldId, int, int, int))s_physicsBeforeStepWorldFns[v8])((Physics_WorldId)v8, timePostStep, stepIndex, numStepsPlanned);
    if ( v11 )
      hkMonitorStream::timerEnd(v11, "Et");
  }
  HavokPhysics_StepWorldStart((Physics_WorldId)v8, stepIndex, numStepsPlanned, stepTimeOverride);
  Profile_EndInternal(NULL);
  Sys_ProfEndNamedEvent();
}

/*
==============
Physics_SubscribeToTriggerEvent
==============
*/
void Physics_SubscribeToTriggerEvent(Physics_WorldId worldId, unsigned int bodyId)
{
  HavokPhysics_SubscribeToEvent(worldId, TRIGGER, (hknpBodyId)bodyId, Physics_HavokTriggerVolumeEvent, "IW Trigger");
}

/*
==============
Physics_SwapPhysicsAsset
==============
*/
void Physics_SwapPhysicsAsset(PhysicsAsset *from, PhysicsAsset *to)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3715, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Swap PhysicsAsset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (to->usageCounter.serverEnt || to->usageCounter.clientEnt || to->usageCounter.dynEnt) && DB_ShouldUpdateGameOnPhysicsChange() )
  {
    if ( to->usageCounter.serverEnt )
      G_Utils_PhysicsPrepareForPhysicsAssetChange(to);
    if ( to->usageCounter.clientEnt )
      CG_Entity_PhysicsPrepareForPhysicsAssetChange(to);
    if ( to->usageCounter.dynEnt )
      DynEnt_PrepareForPhysicsAssetChange(to);
  }
  HavokPhysics_SwapPhysicsAsset(from, to);
}

/*
==============
Physics_SwapPhysicsSFXEventAsset
==============
*/
void Physics_SwapPhysicsSFXEventAsset(PhysicsSFXEventAsset *from, PhysicsSFXEventAsset *to)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3575, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Swap PhysicsSFXEventAsset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  HavokPhysics_SwapPhysicsSFXEventAsset(from, to);
}

/*
==============
Physics_SwapPhysicsVFXEventAsset
==============
*/
void Physics_SwapPhysicsVFXEventAsset(PhysicsVFXEventAsset *from, PhysicsVFXEventAsset *to)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3630, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Swap PhysicsVFXEventAsset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  HavokPhysics_SwapPhysicsVFXEventAsset(from, to);
}

/*
==============
Physics_SwapXModelAsset
==============
*/
void Physics_SwapXModelAsset(XModel *from, XModel *to)
{
  char v4; 
  PhysicsAsset *physicsAsset; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4201, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Swap XModel Asset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( to->physicsAsset || from->physicsAsset )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    if ( !to->physicsUsageCounter.serverEnt && !to->physicsUsageCounter.clientEnt && !to->physicsUsageCounter.dynEnt )
      return;
  }
  if ( DB_ShouldUpdateGameOnPhysicsChange() )
  {
    if ( v4 )
    {
      physicsAsset = to->physicsAsset;
      if ( !physicsAsset || physicsAsset->usageCounter.serverEnt )
      {
        G_Utils_PhysicsPrepareForPhysicsAssetChange(to, physicsAsset);
        physicsAsset = to->physicsAsset;
      }
      if ( !physicsAsset || physicsAsset->usageCounter.clientEnt )
        CG_Entity_PhysicsPrepareForPhysicsAssetChange(to, physicsAsset);
    }
    if ( to->physicsUsageCounter.serverEnt )
      G_Utils_PhysicsPrepareForXModelChange(to);
    if ( to->physicsUsageCounter.clientEnt )
      CG_Entity_PhysicsPrepareForXModelChange(to);
    if ( to->physicsUsageCounter.dynEnt )
      DynEnt_PrepareForXModelChange(to);
  }
}

/*
==============
Physics_SwapXModelDetailCollisionAsset
==============
*/
void Physics_SwapXModelDetailCollisionAsset(XModelDetailCollision *from, XModelDetailCollision *to)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 4113, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Swap XModelDetailCollision Asset when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( DB_ShouldUpdateGameOnPhysicsChange() )
  {
    G_Utils_PhysicsPrepareForXModelDetailCollisionChange(to);
    CG_Entity_PhysicsPrepareForXModelDetailCollisionChange(to);
    DynEnt_PrepareForXModelDetailCollisionChange(to);
  }
  HavokPhysics_SwapXModelDetailCollisionAsset(from, to);
}

/*
==============
Physics_TakeMemorySnapshot
==============
*/
void Physics_TakeMemorySnapshot(const char *filename)
{
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 12975, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Take a memory snapshot when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  HavokPhysics_TakeMemorySnapshot(filename);
}

/*
==============
Physics_TakeSnapshot
==============
*/
void Physics_TakeSnapshot(Physics_WorldId worldId, const char *filename, bool humanReadable)
{
  Physics_WorldId v6; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 12961, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Take Snapshot when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v6 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 12962, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to take Snapshot with invalid world index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v6) )
      __debugbreak();
  }
  HavokPhysics_TakeSnapshot(worldId, filename, humanReadable);
}

/*
==============
Physics_TightenConstraint
==============
*/
void Physics_TightenConstraint(Physics_WorldId worldId, unsigned int constraintId, PhysicsConstraintLooseningResult *values, float proportion)
{
  __int64 v7; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7925, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to tighten constraint when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7926, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to tighten constraint with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( constraintId == 0x7FFFFFFF )
  {
    LODWORD(v7) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7927, ASSERT_TYPE_ASSERT, "(Physics_IsConstraintIdValid( constraintId ))", "%s\n\tPhysics: Trying to tighten constraint with invalid constraint in world %i", "Physics_IsConstraintIdValid( constraintId )", v7) )
      __debugbreak();
  }
  if ( !values )
  {
    LODWORD(v7) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7928, ASSERT_TYPE_ASSERT, "(values)", "%s\n\tPhysics: Trying to tighten constraint with NULL result in world %i", "values", v7) )
      __debugbreak();
  }
  if ( ((LODWORD(proportion) & 0x7F800000) == 2139095040 || proportion < 0.0 || proportion > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7929, ASSERT_TYPE_ASSERT, "(!IS_NAN(proportion) && proportion >= 0.f && proportion <= 1.f)", "%s\n\tPhysics: Trying to tighten constraint with invalid prop %.2f in world %i", "!IS_NAN(proportion) && proportion >= 0.f && proportion <= 1.f", proportion, worldId) )
    __debugbreak();
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  HavokPhysics_TightenConstraint(worldId, (hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant>)constraintId, values, proportion);
}

/*
==============
Physics_ToggleCGDynEntAuthoritativeDebugData
==============
*/
void Physics_ToggleCGDynEntAuthoritativeDebugData(LocalClientNum_t localClientNum)
{
  __int64 v1; 

  v1 = localClientNum;
  *(int *)((char *)&s_debugProfileData.clientData[0].dynEntsData[1 - s_debugProfileData.clientData[v1].dynEntsDataBufferIndex].dynEntCount + v1 * 208) = 0;
  *(int *)((char *)&s_debugProfileData.clientData[0].dynEntsData[1 - s_debugProfileData.clientData[v1].dynEntsDataBufferIndex].dynEntSimpleCount + v1 * 208) = 0;
  *(int *)((char *)&s_debugProfileData.clientData[0].dynEntsData[1 - s_debugProfileData.clientData[v1].dynEntsDataBufferIndex].dynEntSimpleAdditionalBoneCount + v1 * 208) = 0;
  *(int *)((char *)&s_debugProfileData.clientData[0].dynEntsData[1 - s_debugProfileData.clientData[v1].dynEntsDataBufferIndex].dynEntComplexCount + v1 * 208) = 0;
  *(int *)((char *)&s_debugProfileData.clientData[0].dynEntsData[1 - s_debugProfileData.clientData[v1].dynEntsDataBufferIndex].dynEntComplexBodyCount + v1 * 208) = 0;
  *(int *)((char *)&s_debugProfileData.clientData[0].dynEntsData[1 - s_debugProfileData.clientData[v1].dynEntsDataBufferIndex].dynEntComplexAdditionalBoneCount + v1 * 208) = 0;
  s_debugProfileData.clientData[v1].dynEntsDataBufferIndex = 1 - s_debugProfileData.clientData[v1].dynEntsDataBufferIndex;
}

/*
==============
Physics_TransientZoneLoaded
==============
*/
void Physics_TransientZoneLoaded(unsigned int worldTransientIndex, bool fullLoad)
{
  if ( g_physicsInitialized )
    HavokPhysics_TransientZoneLoaded(worldTransientIndex, fullLoad);
}

/*
==============
Physics_TransientZoneUnloading
==============
*/
void Physics_TransientZoneUnloading(unsigned int worldTransientIndex, bool fullUnload)
{
  if ( g_physicsInitialized )
    HavokPhysics_TransientZoneUnloading(worldTransientIndex, fullUnload);
}

/*
==============
Physics_UnlockWorld
==============
*/
void Physics_UnlockWorld(Physics_WorldId worldId)
{
  Physics_WorldId v2; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3279, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Unlock World when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v2 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3280, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Unlock World with invalid world index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v2) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasAnyLock_Physics();
  HavokPhysics_UnlockWorld(worldId);
}

/*
==============
Physics_UnsubscribeFromTriggerEvent
==============
*/
void Physics_UnsubscribeFromTriggerEvent(Physics_WorldId worldId, unsigned int bodyId)
{
  HavokPhysics_UnsubscribeFromEvent(worldId, TRIGGER, (hknpBodyId)bodyId, Physics_HavokTriggerVolumeEvent);
}

/*
==============
Physics_UpdateBroadphase
==============
*/
void Physics_UpdateBroadphase(Physics_WorldId worldId, bool updateAll)
{
  __int64 v3; 
  void (__fastcall *v4)(Physics_WorldId); 
  int v5; 

  v3 = worldId;
  Sys_ProfBeginNamedEvent(0xFF008008, "Physics_UpdateBroadphase");
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7762, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Update Broadphase when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v3 > 7 )
  {
    v5 = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7763, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Update Broadphase with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v5) )
      __debugbreak();
  }
  Physics_LockWorld((Physics_WorldId)v3);
  HavokPhysics_UpdateBroadphase((Physics_WorldId)v3, updateAll);
  Physics_UnlockWorld((Physics_WorldId)v3);
  Physics_SetBroadphaseNeedsRefresh((const Physics_WorldId)v3, 0);
  v4 = s_physicsBroadphaseUpdateFns[v3];
  if ( v4 )
    v4((Physics_WorldId)v3);
  Sys_ProfEndNamedEvent();
}

/*
==============
Physics_UpdateClientGravity
==============
*/
void Physics_UpdateClientGravity(Physics_WorldId worldId, LocalClientNum_t localClientNum)
{
  __int64 v2; 
  OmnvarData *Data; 
  OmnvarData *v5; 
  OmnvarData *v6; 
  OmnvarData *v7; 
  float value; 
  float v9; 
  float v10; 
  HavokPhysicsWorld *MutableWorld; 
  OmnvarData *v12; 
  OmnvarData *v13; 
  OmnvarData *v14; 
  OmnvarData *v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  __int64 v22; 
  Physics_WorldId v23; 
  int v24[4]; 

  v2 = localClientNum;
  Data = CG_Omnvar_GetData(localClientNum, s_physicsClientWorldGravityOmnvarIdxX);
  v5 = CG_Omnvar_GetData((LocalClientNum_t)v2, s_physicsClientWorldGravityOmnvarIdxY);
  v6 = CG_Omnvar_GetData((LocalClientNum_t)v2, s_physicsClientWorldGravityOmnvarIdxZ);
  v7 = v6;
  if ( (!Data || !v5 || !v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2324, ASSERT_TYPE_ASSERT, "(xData && yData && zData)", "%s\n\tCG_PhysicsSetGravity has invalid omnvars - check omnvar.csv", "xData && yData && zData") )
    __debugbreak();
  value = Data->current.value;
  v9 = v5->current.value;
  v10 = v7->current.value;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 27, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Set Gravity when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v23 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 28, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Set Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v23) )
      __debugbreak();
  }
  *(float *)v24 = value * 0.03125;
  *(float *)&v24[1] = v9 * 0.03125;
  *(float *)&v24[2] = v10 * 0.03125;
  *(float *)&v24[3] = 0.0;
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    LODWORD(v22) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicsimplementationinterface.inl", 81, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tHavok Physics: Trying to Set Gravity with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v22) )
      __debugbreak();
  }
  MutableWorld = HavokPhysics_GetMutableWorld(worldId);
  MutableWorld->world->setGravity(&MutableWorld->world->hknpWorldWriter, (const hkVector4f *)v24);
  if ( Physics_IsAuthoritativeWorld(worldId) )
  {
    v12 = CG_Omnvar_GetData((LocalClientNum_t)v2, s_physicsClientWorldGravityRagdollOmnvarIdx);
    v13 = CG_Omnvar_GetData((LocalClientNum_t)v2, s_physicsClientWorldGravityDynentOmnvarIdx);
    v14 = CG_Omnvar_GetData((LocalClientNum_t)v2, s_physicsClientWorldGravityParticleOmnvarIdx);
    v15 = v14;
    if ( (!v12 || !v13 || !v14) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2341, ASSERT_TYPE_ASSERT, "(ragdollScalarValue && dynentScalarValue && particleScalarValue)", "%s\n\tCG_PhysicsSetGravity has invalid omnvars - check omnvar.csv", "ragdollScalarValue && dynentScalarValue && particleScalarValue") )
      __debugbreak();
    v16 = v15->current.value;
    v17 = v12->current.value;
    v18 = v13->current.value;
    v19 = g_physicsClientWorldGravityScalars[6][v2];
    if ( v19 != v17 )
    {
      HavokPhysics_UpdateGravityScalar(worldId, Physics_GravityType_Ragdoll, v17 / v19);
      g_physicsClientWorldGravityScalars[6][v2] = v17;
    }
    v20 = g_physicsClientWorldGravityScalars[1][v2];
    if ( v20 != v18 )
    {
      HavokPhysics_UpdateGravityScalar(worldId, Physics_GravityType_Dynent, v18 / v20);
      g_physicsClientWorldGravityScalars[1][v2] = v18;
    }
    v21 = g_physicsClientWorldGravityScalars[7][v2];
    if ( v21 != v16 )
    {
      HavokPhysics_UpdateGravityScalar(worldId, Physics_GravityType_Particle, v16 / v21);
      g_physicsClientWorldGravityScalars[7][v2] = v16;
    }
  }
}

/*
==============
Physics_UpdateLoosenedConstraint
==============
*/
bool Physics_UpdateLoosenedConstraint(Physics_WorldId worldId, unsigned int constraintId, const vec4_t *bodyAOrientation, const vec3_t *bodyAPosition, const vec4_t *bodyBOrientation, const vec3_t *bodyBPosition, PhysicsConstraintLooseningResult *result)
{
  __int128 v12; 
  __int128 v13; 
  __int128 v15; 
  __int64 v23; 
  hkQuaternionf qi; 
  hkQuaternionf v25; 
  hkTransformf v26; 
  hkTransformf v27; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7872, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to loosen constraint when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7873, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to loosen constraint with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( constraintId == 0x7FFFFFFF )
  {
    LODWORD(v23) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7874, ASSERT_TYPE_ASSERT, "(Physics_IsConstraintIdValid( constraintId ))", "%s\n\tPhysics: Trying to loosen constraint with invalid constraint in world %i", "Physics_IsConstraintIdValid( constraintId )", v23) )
      __debugbreak();
  }
  if ( ((LODWORD(bodyAPosition->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(bodyAPosition->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(bodyAPosition->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7875, ASSERT_TYPE_ASSERT, "(!IS_NAN( bodyAPosition[0] ) && !IS_NAN( bodyAPosition[1] ) && !IS_NAN( bodyAPosition[2] ))", "%s\n\tPhysics: Trying to update loosened constraint with invalid bodyAPosition", "!IS_NAN( bodyAPosition[0] ) && !IS_NAN( bodyAPosition[1] ) && !IS_NAN( bodyAPosition[2] )") )
    __debugbreak();
  if ( ((LODWORD(bodyAOrientation->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(bodyAOrientation->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(bodyAOrientation->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(bodyAOrientation->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7876, ASSERT_TYPE_ASSERT, "(!IS_NAN( bodyAOrientation[0] ) && !IS_NAN( bodyAOrientation[1] ) && !IS_NAN( bodyAOrientation[2] ) && !IS_NAN( bodyAOrientation[3] ))", "%s\n\tPhysics: Trying to update loosened constraint with invalid bodyAOrientation", "!IS_NAN( bodyAOrientation[0] ) && !IS_NAN( bodyAOrientation[1] ) && !IS_NAN( bodyAOrientation[2] ) && !IS_NAN( bodyAOrientation[3] )") )
    __debugbreak();
  if ( ((LODWORD(bodyBPosition->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(bodyBPosition->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(bodyBPosition->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7877, ASSERT_TYPE_ASSERT, "(!IS_NAN( bodyBPosition[0] ) && !IS_NAN( bodyBPosition[1] ) && !IS_NAN( bodyBPosition[2] ))", "%s\n\tPhysics: Trying to update loosened constraint with invalid bodyBPosition", "!IS_NAN( bodyBPosition[0] ) && !IS_NAN( bodyBPosition[1] ) && !IS_NAN( bodyBPosition[2] )") )
    __debugbreak();
  if ( ((LODWORD(bodyBOrientation->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(bodyBOrientation->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(bodyBOrientation->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(bodyBOrientation->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7878, ASSERT_TYPE_ASSERT, "(!IS_NAN( bodyBOrientation[0] ) && !IS_NAN( bodyBOrientation[1] ) && !IS_NAN( bodyBOrientation[2] ) && !IS_NAN( bodyBOrientation[3] ))", "%s\n\tPhysics: Trying to update loosened constraint with invalid bodyBOrientation", "!IS_NAN( bodyBOrientation[0] ) && !IS_NAN( bodyBOrientation[1] ) && !IS_NAN( bodyBOrientation[2] ) && !IS_NAN( bodyBOrientation[3] )") )
    __debugbreak();
  if ( !result )
  {
    LODWORD(v23) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7879, ASSERT_TYPE_ASSERT, "(result)", "%s\n\tPhysics: Trying to loosen constraint with NULL result in world %i", "result", v23) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  v12 = LODWORD(bodyAPosition->v[0]);
  *(float *)&v12 = bodyAPosition->v[0] * 0.03125;
  _XMM10 = v12;
  v13 = LODWORD(bodyBPosition->v[0]);
  qi.m_vec.m_quad = (__m128)*bodyAOrientation;
  v15 = v13;
  *(float *)&v15 = *(float *)&v13 * 0.03125;
  _XMM12 = v15;
  v25.m_vec.m_quad = (__m128)*bodyBOrientation;
  hkRotationImpl<float>::set(&v27.m_rotation, &qi);
  __asm
  {
    vinsertps xmm10, xmm10, xmm6, 10h
    vinsertps xmm10, xmm10, xmm7, 20h ; ' '
    vinsertps xmm10, xmm10, xmm11, 30h ; '0'
  }
  v27.m_translation = (hkVector4f)_XMM10.m_quad;
  hkRotationImpl<float>::set(&v26.m_rotation, &v25);
  __asm
  {
    vinsertps xmm12, xmm12, xmm8, 10h
    vinsertps xmm12, xmm12, xmm9, 20h ; ' '
    vinsertps xmm12, xmm12, xmm11, 30h ; '0'
  }
  v26.m_translation = (hkVector4f)_XMM12.m_quad;
  return HavokPhysics_UpdateLoosenedConstraint(worldId, (hkHandle<unsigned int,2147483647,hknpConstraintIdDiscriminant>)constraintId, &v27, &v26, result);
}

/*
==============
Physics_UpdateVDB
==============
*/
void Physics_UpdateVDB(void)
{
  int i; 

  for ( i = 0; i <= 1; ++i )
  {
    Physics_LockWorld((Physics_WorldId)i);
    Physics_StepVDB((Physics_WorldId)i, 0.0, 1);
    Physics_UnlockWorld((Physics_WorldId)i);
  }
}

/*
==============
Physics_UpdateWorld
==============
*/
void Physics_UpdateWorld(Physics_WorldId worldId, bool syncStats)
{
  __int64 v3; 
  void (__fastcall *v4)(Physics_WorldId); 
  int v5; 
  int v6; 
  int v7; 
  char v8; 
  __int64 v9; 
  int v10; 

  v3 = worldId;
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3068, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Update World when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v3 > 7 )
  {
    v10 = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3069, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Update World with invalid world index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v10) )
      __debugbreak();
  }
  Sys_ProfBeginNamedEvent(0xFF008008, "physics update world");
  v4 = s_physicsBeforeUpdateWorldFns[v3];
  if ( v4 )
    v4((Physics_WorldId)v3);
  if ( (unsigned int)v3 > 1 )
    v5 = 634 - Physics_IsDetailWorld((Physics_WorldId)v3);
  else
    v5 = 632;
  Profile_Begin(v5);
  Physics_LockWorld((Physics_WorldId)v3);
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5785, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Add Pending Bodies when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v3 > 7 )
  {
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5786, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Add Pending Bodies with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v9) )
      __debugbreak();
  }
  if ( !g_physicsClientWorldsCreated && (unsigned int)(v3 - 2) <= 5 )
  {
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5787, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Add Pending Bodies in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v9) )
      __debugbreak();
  }
  if ( !g_physicsServerWorldsCreated && (unsigned int)v3 <= 1 )
  {
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 5788, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Add Pending Bodies in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v9) )
      __debugbreak();
  }
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  HavokPhysics_AddPendingBodies((Physics_WorldId)v3);
  if ( (unsigned int)v3 > 1 )
    v6 = 637 - Physics_IsDetailWorld((Physics_WorldId)v3);
  else
    v6 = 635;
  Profile_Begin(v6);
  Physics_UpdateBroadphase((Physics_WorldId)v3, 1);
  Profile_EndInternal(NULL);
  if ( (unsigned int)v3 <= 7 )
    goto LABEL_33;
  LODWORD(v9) = v3;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2089, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Request IsQueryWorld with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v9) )
    __debugbreak();
  if ( (unsigned int)v3 <= 7 )
  {
LABEL_33:
    v7 = 146;
    if ( _bittest(&v7, v3) )
    {
      Sys_ProfBeginNamedEvent(0xFF008008, "Physics_FlushMovedStatics");
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7787, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Flush Moved Statics when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( (unsigned int)v3 > 7 )
      {
        LODWORD(v9) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 7788, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Flush Moved Statics with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v9) )
          __debugbreak();
      }
      Physics_LockWorld((Physics_WorldId)v3);
      HavokPhysics_FlushMovedStatics((Physics_WorldId)v3);
      Physics_UnlockWorld((Physics_WorldId)v3);
      Sys_ProfEndNamedEvent();
    }
  }
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9860, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to DoDeferredQueries against body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)v3 > 7 )
  {
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 9861, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to DoDeferredQueries against body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v9) )
      __debugbreak();
  }
  if ( (unsigned int)v3 > 1 && Physics_IsDetailWorld((Physics_WorldId)v3) )
  {
    v8 = 1;
    CL_Main_SkeletonCacheValidity_Lock(SkeletonCacheValidityLockType_Locked_Physics);
  }
  else
  {
    v8 = 0;
  }
  HavokPhysics_DoDeferredQueries((Physics_WorldId)v3);
  if ( v8 )
    CL_Main_SkeletonCacheValidity_Unlock(SkeletonCacheValidityLockType_Locked_Physics);
  Physics_StepVDB((Physics_WorldId)v3, 0.0, syncStats);
  HavokPhysics_UpdateWorld((Physics_WorldId)v3, syncStats);
  Physics_UnlockWorld((Physics_WorldId)v3);
  Profile_EndInternal(NULL);
  Sys_ProfEndNamedEvent();
}

/*
==============
Physics_ValidateWorld
==============
*/
void Physics_ValidateWorld(Physics_WorldId worldId)
{
  Physics_WorldId v2; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2290, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Validate world when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v2 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2291, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Validate world with invalid world index: %d", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v2) )
      __debugbreak();
  }
  HavokPhysics_ValidateWorld(worldId);
}

/*
==============
Physics_WaitForAllCommandsToFinish
==============
*/
void Physics_WaitForAllCommandsToFinish(void)
{
  if ( !Sys_IsMainThread() && !Sys_IsRenderThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3437, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsRenderThread()") )
    __debugbreak();
  Sys_WaitWorkerCmdsOfType(WRKCMD_PHYSICS_STEP_WORLD_START);
  Sys_WaitWorkerCmdsOfType(WRKCMD_PHYSICS_STEP_WORLD_PREP);
  Sys_WaitWorkerCmdsOfType(WRKCMD_PHYSICS_STEP_WORLD_COLLIDE);
  Sys_WaitWorkerCmdsOfType(WRKCMD_PHYSICS_STEP_WORLD_SOLVE);
  Sys_WaitWorkerCmdsOfType(WRKCMD_PHYSICS_STEP_WORLD_FX);
  Sys_WaitWorkerCmdsOfType(WRKCMD_PHYSICS_TASK);
  Sys_WaitWorkerCmdsOfType(WRKCMD_PHYSICS_STEP_WORLD_PHYSICS_OBJECTS);
  Sys_WaitWorkerCmdsOfType(WRKCMD_PHYSICS_STEP_WORLD_END);
  Sys_WaitWorkerCmdsOfType(WRKCMD_PHYSICS_STEP_WORLD_DETAIL);
  Sys_WaitWorkerCmdsOfType(WRKCMD_RAGDOLL_UPDATE);
  if ( s_physicsHasWorkerError )
  {
    s_physicsHasWorkerError = 0;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EA3040, 884i64);
  }
}

/*
==============
Physics_WaitForPredictiveWorldUpdateCommandToFinish
==============
*/
void Physics_WaitForPredictiveWorldUpdateCommandToFinish(void)
{
  if ( !Sys_IsMainThread() && !Sys_IsRenderThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3486, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsRenderThread()") )
    __debugbreak();
  Sys_WaitWorkerCmdsOfType(WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD_PRE);
  Sys_WaitWorkerCmdsOfType(WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD);
  if ( s_physicsHasWorkerError )
  {
    s_physicsHasWorkerError = 0;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EA3040, 6200i64);
  }
}

/*
==============
Physics_WaitForPredictiveWorldUpdatePreCommandToFinish
==============
*/
void Physics_WaitForPredictiveWorldUpdatePreCommandToFinish(void)
{
  if ( !Sys_IsMainThread() && !Sys_IsRenderThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 3469, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsRenderThread()") )
    __debugbreak();
  Sys_WaitWorkerCmdsOfType(WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD_PRE);
  if ( s_physicsHasWorkerError )
  {
    s_physicsHasWorkerError = 0;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EA3040, 5808i64);
  }
}

/*
==============
Physics_WarpDetailRigidBodyTo
==============
*/
Physics_MovementType Physics_WarpDetailRigidBodyTo(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *position, const vec4_t *orientationAsQuat, bool updateBroadphase, bool activate)
{
  float v10; 
  float v11; 
  __int64 v19; 
  Physics_WorldId v20; 
  hkVector4f hkPosition; 
  hkQuaternionf hkOrientation; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6793, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v20 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6794, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v20) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v19) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6795, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v19) )
      __debugbreak();
  }
  if ( ((LODWORD(position->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6796, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
    __debugbreak();
  if ( ((LODWORD(orientationAsQuat->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6797, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
    __debugbreak();
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  v10 = 0.03125 * position->v[1];
  v11 = 0.03125 * position->v[2];
  _XMM5 = LODWORD(orientationAsQuat->v[0]);
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [rbx+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rbx+8], 20h ; ' '
    vinsertps xmm5, xmm5, dword ptr [rbx+0Ch], 30h ; '0'
  }
  hkPosition.m_quad.m128_f32[0] = 0.03125 * position->v[0];
  hkPosition.m_quad.m128_f32[1] = v10;
  __asm
  {
    vdpps   xmm0, xmm5, xmm5, 0FFh
    vrsqrtps xmm4, xmm0
  }
  hkPosition.m_quad.m128_f32[2] = v11;
  hkPosition.m_quad.m128_f32[3] = 0.0;
  hkOrientation.m_vec.m_quad = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM0, _XMM4), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM5);
  return HavokPhysics_WarpDetailRigidBodyTo(worldId, (hknpBodyId)bodyId, &hkPosition, &hkOrientation, updateBroadphase, activate);
}

/*
==============
Physics_WarpInstanceTo
==============
*/
bool Physics_WarpInstanceTo(Physics_WorldId worldId, unsigned int instanceId, const vec3_t *position, const vec4_t *orientationAsQuat, bool updateBroadphaseIfNecessary)
{
  float v9; 
  float v10; 
  __int64 v16; 
  hkVector4f hkPosition; 
  hkQuaternionf hkOrientation; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6656, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Instance when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6657, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Warp Instance with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", worldId) )
    __debugbreak();
  if ( instanceId == -1 )
  {
    LODWORD(v16) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6658, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Warp Instance with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v16) )
      __debugbreak();
  }
  if ( ((LODWORD(position->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6659, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Instance with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
    __debugbreak();
  if ( ((LODWORD(orientationAsQuat->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6660, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Instance with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
    __debugbreak();
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  v9 = 0.03125 * position->v[1];
  v10 = 0.03125 * position->v[2];
  hkPosition.m_quad.m128_f32[0] = 0.03125 * position->v[0];
  _XMM0 = LODWORD(orientationAsQuat->v[0]);
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rbx+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rbx+8], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rbx+0Ch], 30h ; '0'
  }
  hkPosition.m_quad.m128_f32[1] = v9;
  hkOrientation.m_vec.m_quad = _XMM0;
  hkPosition.m_quad.m128_f32[2] = v10;
  hkPosition.m_quad.m128_f32[3] = 0.0;
  return HavokPhysics_WarpInstanceTo(worldId, instanceId, &hkPosition, &hkOrientation, updateBroadphaseIfNecessary);
}

/*
==============
Physics_WarpLeafDetailRigidBodyTo
==============
*/
Physics_MovementType Physics_WarpLeafDetailRigidBodyTo(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *position, const vec4_t *orientationAsQuat, bool updateBroadphase, bool activate)
{
  float v10; 
  float v11; 
  __int64 v19; 
  Physics_WorldId v20; 
  hkVector4f hkPosition; 
  hkQuaternionf hkOrientation; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6819, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v20 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6820, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v20) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v19) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6821, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v19) )
      __debugbreak();
  }
  if ( ((LODWORD(position->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(position->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6822, ASSERT_TYPE_ASSERT, "(!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid position", "!IS_NAN( position[0] ) && !IS_NAN( position[1] ) && !IS_NAN( position[2] )") )
    __debugbreak();
  if ( ((LODWORD(orientationAsQuat->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(orientationAsQuat->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6823, ASSERT_TYPE_ASSERT, "(!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Rigid Body with invalid orientation", "!IS_NAN( orientationAsQuat[0] ) && !IS_NAN( orientationAsQuat[1] ) && !IS_NAN( orientationAsQuat[2] ) && !IS_NAN( orientationAsQuat[3] )") )
    __debugbreak();
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  v10 = 0.03125 * position->v[1];
  v11 = 0.03125 * position->v[2];
  _XMM5 = LODWORD(orientationAsQuat->v[0]);
  __asm
  {
    vinsertps xmm5, xmm5, dword ptr [rbx+4], 10h
    vinsertps xmm5, xmm5, dword ptr [rbx+8], 20h ; ' '
    vinsertps xmm5, xmm5, dword ptr [rbx+0Ch], 30h ; '0'
  }
  hkPosition.m_quad.m128_f32[0] = 0.03125 * position->v[0];
  hkPosition.m_quad.m128_f32[1] = v10;
  __asm
  {
    vdpps   xmm0, xmm5, xmm5, 0FFh
    vrsqrtps xmm4, xmm0
  }
  hkPosition.m_quad.m128_f32[2] = v11;
  hkPosition.m_quad.m128_f32[3] = 0.0;
  hkOrientation.m_vec.m_quad = _mm128_mul_ps(_mm128_mul_ps(_mm128_sub_ps(*(__m128 *)hkMath::hkSse_floatThree, _mm128_mul_ps(_mm128_mul_ps(_XMM0, _XMM4), _XMM4)), _mm128_mul_ps(_XMM4, *(__m128 *)hkMath::hkSse_floatHalf)), _XMM5);
  return HavokPhysics_WarpLeafDetailRigidBodyTo(worldId, (hknpBodyId)bodyId, &hkPosition, &hkOrientation, updateBroadphase, activate);
}

/*
==============
Physics_WarpRigidBodyToRelative
==============
*/
void Physics_WarpRigidBodyToRelative(Physics_WorldId worldId, unsigned int bodyId, const vec3_t *startPosition, const vec4_t *startOrientationAsQuat, const vec3_t *endPosition, const vec4_t *endOrientationAsQuat)
{
  float v10; 
  float v11; 
  float v20; 
  float v21; 
  __int64 v22; 
  Physics_WorldId v23; 
  hkVector4f hkEndPosition; 
  hkVector4f hkStartPosition; 
  hkQuaternionf hkEndOrientation; 
  hkQuaternionf hkStartOrientation; 

  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6951, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Warp Rigid Body relative when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (unsigned int)worldId > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
  {
    v23 = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6952, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Warp Rigid Body relative with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v23) )
      __debugbreak();
  }
  if ( (bodyId & 0xFFFFFF) == 0xFFFFFF )
  {
    LODWORD(v22) = worldId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6953, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Warp Rigid Body relative with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", v22) )
      __debugbreak();
  }
  if ( ((LODWORD(startPosition->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(startPosition->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(startPosition->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6954, ASSERT_TYPE_ASSERT, "(!IS_NAN( startPosition[0] ) && !IS_NAN( startPosition[1] ) && !IS_NAN( startPosition[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body relative with invalid start position", "!IS_NAN( startPosition[0] ) && !IS_NAN( startPosition[1] ) && !IS_NAN( startPosition[2] )") )
    __debugbreak();
  if ( ((LODWORD(startOrientationAsQuat->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(startOrientationAsQuat->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(startOrientationAsQuat->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(startOrientationAsQuat->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6955, ASSERT_TYPE_ASSERT, "(!IS_NAN( startOrientationAsQuat[0] ) && !IS_NAN( startOrientationAsQuat[1] ) && !IS_NAN( startOrientationAsQuat[2] ) && !IS_NAN( startOrientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Rigid Body relative with invalid start orientation", "!IS_NAN( startOrientationAsQuat[0] ) && !IS_NAN( startOrientationAsQuat[1] ) && !IS_NAN( startOrientationAsQuat[2] ) && !IS_NAN( startOrientationAsQuat[3] )") )
    __debugbreak();
  if ( ((LODWORD(endPosition->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(endPosition->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(endPosition->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6956, ASSERT_TYPE_ASSERT, "(!IS_NAN( endPosition[0] ) && !IS_NAN( endPosition[1] ) && !IS_NAN( endPosition[2] ))", "%s\n\tPhysics: Trying to Warp Rigid Body relative with invalid end position", "!IS_NAN( endPosition[0] ) && !IS_NAN( endPosition[1] ) && !IS_NAN( endPosition[2] )") )
    __debugbreak();
  if ( ((LODWORD(endOrientationAsQuat->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(endOrientationAsQuat->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(endOrientationAsQuat->v[2]) & 0x7F800000) == 2139095040 || (LODWORD(endOrientationAsQuat->v[3]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 6957, ASSERT_TYPE_ASSERT, "(!IS_NAN( endOrientationAsQuat[0] ) && !IS_NAN( endOrientationAsQuat[1] ) && !IS_NAN( endOrientationAsQuat[2] ) && !IS_NAN( endOrientationAsQuat[3] ))", "%s\n\tPhysics: Trying to Warp Rigid Body relative with invalid end orientation", "!IS_NAN( endOrientationAsQuat[0] ) && !IS_NAN( endOrientationAsQuat[1] ) && !IS_NAN( endOrientationAsQuat[2] ) && !IS_NAN( endOrientationAsQuat[3] )") )
    __debugbreak();
  CG_EntityWorkers_CheckHasWriteLock_Physics();
  v10 = 0.03125 * startPosition->v[1];
  v11 = 0.03125 * startPosition->v[2];
  hkStartPosition.m_quad.m128_f32[0] = 0.03125 * startPosition->v[0];
  _XMM0 = LODWORD(startOrientationAsQuat->v[0]);
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rdi+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rdi+8], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rdi+0Ch], 30h ; '0'
  }
  hkStartOrientation.m_vec.m_quad = _XMM0;
  hkEndPosition.m_quad.m128_f32[1] = 0.03125 * endPosition->v[1];
  _XMM0 = LODWORD(endOrientationAsQuat->v[0]);
  __asm
  {
    vinsertps xmm0, xmm0, dword ptr [rbx+4], 10h
    vinsertps xmm0, xmm0, dword ptr [rbx+8], 20h ; ' '
    vinsertps xmm0, xmm0, dword ptr [rbx+0Ch], 30h ; '0'
  }
  hkStartPosition.m_quad.m128_f32[1] = v10;
  v20 = 0.03125 * endPosition->v[2];
  hkStartPosition.m_quad.m128_f32[2] = v11;
  v21 = 0.03125 * endPosition->v[0];
  hkEndOrientation.m_vec.m_quad = _XMM0;
  hkStartPosition.m_quad.m128_f32[3] = 0.0;
  hkEndPosition.m_quad.m128_f32[0] = v21;
  hkEndPosition.m_quad.m128_f32[2] = v20;
  hkEndPosition.m_quad.m128_f32[3] = 0.0;
  HavokPhysics_WarpRigidBodyToRelative(worldId, (hknpBodyId)bodyId, &hkStartPosition, &hkStartOrientation, &hkEndPosition, &hkEndOrientation);
}

/*
==============
Physics_Write
==============
*/
void Physics_Write(MemoryFile *memFile)
{
  Sys_ProfBeginNamedEvent(0xFF008008, "Physics_Write");
  MemFile_WriteSentinel(memFile, 0x42158u);
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2290, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Validate world when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  HavokPhysics_ValidateWorld(PHYSICS_WORLD_ID_FIRST);
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2290, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Validate world when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  HavokPhysics_ValidateWorld(PHYSICS_WORLD_ID_SERVER_DETAIL);
  Sys_ProfBeginNamedEvent(0xFF008008, "HavokPhysics_Write");
  HavokPhysics_Write(memFile);
  Sys_ProfEndNamedEvent();
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2290, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Validate world when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  HavokPhysics_ValidateWorld(PHYSICS_WORLD_ID_FIRST);
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physics.cpp", 2290, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Validate world when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  HavokPhysics_ValidateWorld(PHYSICS_WORLD_ID_SERVER_DETAIL);
  G_PhysicsCharacterProxy_Write(memFile);
  PhysicsCoverWall_Write(memFile);
  G_PhysicsObject_Write(memFile);
  PhysicsVehicle_Write(memFile);
  PhysicsVolume_Write(memFile);
  PhysicsGravityModifier_Write(memFile);
  PhysicsForceAction_Write(memFile);
  Sys_ProfBeginNamedEvent(0xFF008008, "Physics_UpdateBroadphase");
  Physics_UpdateBroadphase(PHYSICS_WORLD_ID_FIRST, 1);
  Physics_UpdateBroadphase(PHYSICS_WORLD_ID_SERVER_DETAIL, 1);
  Sys_ProfEndNamedEvent();
  Sys_ProfEndNamedEvent();
}

