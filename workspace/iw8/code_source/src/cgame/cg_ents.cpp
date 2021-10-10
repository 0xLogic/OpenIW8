/*
==============
CG_Entity_UpdateAnimationLod
==============
*/

void __fastcall CG_Entity_UpdateAnimationLod(LocalClientNum_t localClientNum, int entnum)
{
  ?CG_Entity_UpdateAnimationLod@@YAXW4LocalClientNum_t@@H@Z(localClientNum, entnum);
}

/*
==============
CG_Entity_ProcessRagdollAnimNotify
==============
*/

void __fastcall CG_Entity_ProcessRagdollAnimNotify(LocalClientNum_t localClientNum, int entNum, const XAnimNotify *animNotify)
{
  ?CG_Entity_ProcessRagdollAnimNotify@@YAXW4LocalClientNum_t@@HPEBUXAnimNotify@@@Z(localClientNum, entNum, animNotify);
}

/*
==============
CG_Entity_GetLocalClientNumForDobj
==============
*/

LocalClientNum_t __fastcall CG_Entity_GetLocalClientNumForDobj(const int entnum, const DObj *const dobj)
{
  return ?CG_Entity_GetLocalClientNumForDobj@@YA?AW4LocalClientNum_t@@HQEBUDObj@@@Z(entnum, dobj);
}

/*
==============
CG_Entity_DestroyPhysics
==============
*/

void __fastcall CG_Entity_DestroyPhysics(const LocalClientNum_t localClientNum, int entNum)
{
  ?CG_Entity_DestroyPhysics@@YAXW4LocalClientNum_t@@H@Z(localClientNum, entNum);
}

/*
==============
CG_Entity_DestroyStowedCloth
==============
*/

void __fastcall CG_Entity_DestroyStowedCloth(const LocalClientNum_t localClientNum, const int entNum)
{
  ?CG_Entity_DestroyStowedCloth@@YAXW4LocalClientNum_t@@H@Z(localClientNum, entNum);
}

/*
==============
CG_Entity_CreateCloth
==============
*/

void __fastcall CG_Entity_CreateCloth(const LocalClientNum_t localClientNum, const int entNum)
{
  ?CG_Entity_CreateCloth@@YAXW4LocalClientNum_t@@H@Z(localClientNum, entNum);
}

/*
==============
CG_Entity_DepthSortWorldTurretWithViewarms
==============
*/

void __fastcall CG_Entity_DepthSortWorldTurretWithViewarms(cg_t *cgameGlob, const centity_t *cent, unsigned int *renderFlags)
{
  ?CG_Entity_DepthSortWorldTurretWithViewarms@@YAXPEAVcg_t@@PEBUcentity_t@@PEAI@Z(cgameGlob, cent, renderFlags);
}

/*
==============
CG_Entity_GetHudOutlineInfo
==============
*/

GfxSceneHudOutlineInfo *__fastcall CG_Entity_GetHudOutlineInfo(GfxSceneHudOutlineInfo *result, const cg_t *cgameGlob, centity_t *cent)
{
  return ?CG_Entity_GetHudOutlineInfo@@YA?AUGfxSceneHudOutlineInfo@@PEBVcg_t@@PEAUcentity_t@@@Z(result, cgameGlob, cent);
}

/*
==============
CG_Entity_GetAnimationLodDistance
==============
*/

double __fastcall CG_Entity_GetAnimationLodDistance(LocalClientNum_t localClientNum, int entnum)
{
  double result; 

  *(float *)&result = ?CG_Entity_GetAnimationLodDistance@@YAMW4LocalClientNum_t@@H@Z(localClientNum, entnum);
  return result;
}

/*
==============
CG_Entity_AddDObjToScene
==============
*/

void __fastcall CG_Entity_AddDObjToScene(const LocalClientNum_t localClientNum, const DObj *obj, const cpose_t *pose, unsigned int entnum, unsigned int renderFlags, shaderOverride_t *shaderOverride, GfxSceneHudOutlineInfo *hudOutlineInfo, const vec3_t *lightingOrigin, float materialTime, unsigned int genericMaterialData)
{
  ?CG_Entity_AddDObjToScene@@YAXW4LocalClientNum_t@@PEBUDObj@@PEBUcpose_t@@IIUshaderOverride_t@@UGfxSceneHudOutlineInfo@@AEBTvec3_t@@MI@Z(localClientNum, obj, pose, entnum, renderFlags, shaderOverride, hudOutlineInfo, lightingOrigin, materialTime, genericMaterialData);
}

/*
==============
CG_Entity_ClampPrimaryLightOrigin
==============
*/

void __fastcall CG_Entity_ClampPrimaryLightOrigin(GfxLight *light, const ComPrimaryLight *refLight)
{
  ?CG_Entity_ClampPrimaryLightOrigin@@YAXPEAUGfxLight@@PEBUComPrimaryLight@@@Z(light, refLight);
}

/*
==============
CG_GetViewModelAnimWeightAndTime
==============
*/

bool __fastcall CG_GetViewModelAnimWeightAndTime(const LocalClientNum_t localClientIndex, const Weapon *weapon, const PlayerHandIndex hand, const WeaponAnimNumber *const animStates, const unsigned int numAnimStates, float *weight, float *time)
{
  return ?CG_GetViewModelAnimWeightAndTime@@YA_NW4LocalClientNum_t@@AEBUWeapon@@W4PlayerHandIndex@@QEBW4WeaponAnimNumber@@IPEAM4@Z(localClientIndex, weapon, hand, animStates, numAnimStates, weight, time);
}

/*
==============
CG_Entity_PredictiveSkinCEntity
==============
*/

void __fastcall CG_Entity_PredictiveSkinCEntity(GfxSceneEntity *sceneEnt, int forceUpdateBounds)
{
  ?CG_Entity_PredictiveSkinCEntity@@YAXPEAUGfxSceneEntity@@H@Z(sceneEnt, forceUpdateBounds);
}

/*
==============
CG_Entity_HasCloth
==============
*/

bool __fastcall CG_Entity_HasCloth(const LocalClientNum_t localClientNum, const int entNum)
{
  return ?CG_Entity_HasCloth@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, entNum);
}

/*
==============
CG_Entity_UpdateCharacterEvOffset
==============
*/

void __fastcall CG_Entity_UpdateCharacterEvOffset(const LocalClientNum_t localClientNum, unsigned int entnum, GfxSceneHudOutlineInfo *hudOutlineInfo)
{
  ?CG_Entity_UpdateCharacterEvOffset@@YAXW4LocalClientNum_t@@IAEAUGfxSceneHudOutlineInfo@@@Z(localClientNum, entnum, hudOutlineInfo);
}

/*
==============
CG_Entity_ClampPrimaryLightDir
==============
*/

void __fastcall CG_Entity_ClampPrimaryLightDir(GfxLight *light, const ComPrimaryLight *refLight)
{
  ?CG_Entity_ClampPrimaryLightDir@@YAXPEAUGfxLight@@PEBUComPrimaryLight@@@Z(light, refLight);
}

/*
==============
CG_Entity_ProcessQueuedViewModelDObj
==============
*/

void __fastcall CG_Entity_ProcessQueuedViewModelDObj(const LocalClientNum_t localClientNum)
{
  ?CG_Entity_ProcessQueuedViewModelDObj@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Entity_IsNoDraw
==============
*/

bool __fastcall CG_Entity_IsNoDraw(const LocalClientNum_t localClientNum, const entityState_t *es, const playerState_s *ps)
{
  return ?CG_Entity_IsNoDraw@@YA_NW4LocalClientNum_t@@PEBUentityState_t@@PEBUplayerState_s@@@Z(localClientNum, es, ps);
}

/*
==============
CG_Entity_PlayEntityLoopSound
==============
*/

void __fastcall CG_Entity_PlayEntityLoopSound(const LocalClientNum_t localClientNum, const centity_t *cent, const SndAliasList *soundAlias)
{
  ?CG_Entity_PlayEntityLoopSound@@YAXW4LocalClientNum_t@@PEBUcentity_t@@PEBUSndAliasList@@@Z(localClientNum, cent, soundAlias);
}

/*
==============
CG_Entity_IsParentOfChild
==============
*/

bool __fastcall CG_Entity_IsParentOfChild(LocalClientNum_t localClientNum, const centity_t *child, const centity_t *parentToSearch)
{
  return ?CG_Entity_IsParentOfChild@@YA_NW4LocalClientNum_t@@PEBUcentity_t@@1@Z(localClientNum, child, parentToSearch);
}

/*
==============
CG_DObjGetWorldBoneMatrices
==============
*/

void __fastcall CG_DObjGetWorldBoneMatrices(const cpose_t *pose, const DObj *obj, const int boneCount, const int *boneIndices, tmat33_t<vec3_t> *outTagMatrices, vec3_t *outOrigins)
{
  ?CG_DObjGetWorldBoneMatrices@@YAXPEBUcpose_t@@PEBUDObj@@HPEBHQEAT?$tmat33_t@Tvec3_t@@@@QEATvec3_t@@@Z(pose, obj, boneCount, boneIndices, outTagMatrices, outOrigins);
}

/*
==============
CG_Entity_PhysicsPrepareForPhysicsAssetChange
==============
*/

void __fastcall CG_Entity_PhysicsPrepareForPhysicsAssetChange(XModel *xmodel, PhysicsAsset *assetToBeChanged)
{
  ?CG_Entity_PhysicsPrepareForPhysicsAssetChange@@YAXPEAUXModel@@PEAUPhysicsAsset@@@Z(xmodel, assetToBeChanged);
}

/*
==============
CG_Entity_PhysicsCheckPostAssetChangeEmpty
==============
*/

void __fastcall CG_Entity_PhysicsCheckPostAssetChangeEmpty(const LocalClientNum_t localClientNum)
{
  ?CG_Entity_PhysicsCheckPostAssetChangeEmpty@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Entity_GetRootParent
==============
*/

centity_t *__fastcall CG_Entity_GetRootParent(LocalClientNum_t localClientNum, centity_t *cent)
{
  return ?CG_Entity_GetRootParent@@YAPEAUcentity_t@@W4LocalClientNum_t@@PEAU1@@Z(localClientNum, cent);
}

/*
==============
CG_Entity_PhysicsPrepareForXModelDetailCollisionChange
==============
*/

void __fastcall CG_Entity_PhysicsPrepareForXModelDetailCollisionChange(XModelDetailCollision *assetToBeChanged)
{
  ?CG_Entity_PhysicsPrepareForXModelDetailCollisionChange@@YAXPEAUXModelDetailCollision@@@Z(assetToBeChanged);
}

/*
==============
CG_Entity_PhysicsPrepareForPhysicsAssetChange
==============
*/

void __fastcall CG_Entity_PhysicsPrepareForPhysicsAssetChange(PhysicsAsset *assetToBeChanged)
{
  ?CG_Entity_PhysicsPrepareForPhysicsAssetChange@@YAXPEAUPhysicsAsset@@@Z(assetToBeChanged);
}

/*
==============
CG_Entity_MyChangesSaveAndShutdown
==============
*/

void CG_Entity_MyChangesSaveAndShutdown(void)
{
  ?CG_Entity_MyChangesSaveAndShutdown@@YAXXZ();
}

/*
==============
CG_Entity_ShouldCreatePhysicsOnInit
==============
*/

bool __fastcall CG_Entity_ShouldCreatePhysicsOnInit(LocalClientNum_t localClientNum, int entNum)
{
  return ?CG_Entity_ShouldCreatePhysicsOnInit@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, entNum);
}

/*
==============
CG_DObjGetWorldBoneBindMatrix
==============
*/

int __fastcall CG_DObjGetWorldBoneBindMatrix(const cpose_t *pose, const DObj *obj, int boneIndex, tmat33_t<vec3_t> *outTagMat, vec3_t *outOrigin)
{
  return ?CG_DObjGetWorldBoneBindMatrix@@YAHPEBUcpose_t@@PEBUDObj@@HAEAT?$tmat33_t@Tvec3_t@@@@AEATvec3_t@@@Z(pose, obj, boneIndex, outTagMat, outOrigin);
}

/*
==============
CG_Entity_UpdateBModelWorldBounds
==============
*/

void __fastcall CG_Entity_UpdateBModelWorldBounds(LocalClientNum_t localClientNum, centity_t *cent, int forceFilter)
{
  ?CG_Entity_UpdateBModelWorldBounds@@YAXW4LocalClientNum_t@@PEAUcentity_t@@H@Z(localClientNum, cent, forceFilter);
}

/*
==============
CG_Entity_HasStowedCloth
==============
*/

bool __fastcall CG_Entity_HasStowedCloth(const LocalClientNum_t localClientNum, const int entNum)
{
  return ?CG_Entity_HasStowedCloth@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, entNum);
}

/*
==============
CG_Entity_SetUpdateFlagEnabled
==============
*/

void __fastcall CG_Entity_SetUpdateFlagEnabled(bool contextKey, centity_t *cent)
{
  ?CG_Entity_SetUpdateFlagEnabled@@YAX_NPEAUcentity_t@@@Z(contextKey, cent);
}

/*
==============
CG_Utils_GetPhysicsAsset
==============
*/

void __fastcall CG_Utils_GetPhysicsAsset(LocalClientNum_t localClientNum, const centity_t *ent, const DObj **dobj, const XModel **baseModel, const PhysicsAsset **physAsset, int *physShapeOverrideIdx, const PhysicsAsset **physAssetAddendum, int *physShapeAddendumIdx, const XModel **detailModel, bool *overrideContents, int *contentsOverride)
{
  ?CG_Utils_GetPhysicsAsset@@YAXW4LocalClientNum_t@@PEBUcentity_t@@PEAPEBUDObj@@PEAPEBUXModel@@PEAPEBUPhysicsAsset@@PEAH453PEA_N5@Z(localClientNum, ent, dobj, baseModel, physAsset, physShapeOverrideIdx, physAssetAddendum, physShapeAddendumIdx, detailModel, overrideContents, contentsOverride);
}

/*
==============
CG_Entity_PhysicsPrepareForXModelChange
==============
*/

void __fastcall CG_Entity_PhysicsPrepareForXModelChange(XModel *assetToBeChanged)
{
  ?CG_Entity_PhysicsPrepareForXModelChange@@YAXPEAUXModel@@@Z(assetToBeChanged);
}

/*
==============
CG_Entity_CreatePhysics
==============
*/

void __fastcall CG_Entity_CreatePhysics(LocalClientNum_t localClientNum, int entNum, bool tryStartDeactivated)
{
  ?CG_Entity_CreatePhysics@@YAXW4LocalClientNum_t@@H_N@Z(localClientNum, entNum, tryStartDeactivated);
}

/*
==============
CG_Entity_IsTriggerVolume
==============
*/

bool __fastcall CG_Entity_IsTriggerVolume(const centity_t *cent)
{
  return ?CG_Entity_IsTriggerVolume@@YA_NPEBUcentity_t@@@Z(cent);
}

/*
==============
CG_Entity_TurretPreControllers
==============
*/

void __fastcall CG_Entity_TurretPreControllers(LocalClientNum_t localClientNum, DObj *obj, centity_t *cent)
{
  ?CG_Entity_TurretPreControllers@@YAXW4LocalClientNum_t@@PEAUDObj@@PEAUcentity_t@@@Z(localClientNum, obj, cent);
}

/*
==============
CG_Entity_MyChangesInitAndLoad
==============
*/

void CG_Entity_MyChangesInitAndLoad(void)
{
  ?CG_Entity_MyChangesInitAndLoad@@YAXXZ();
}

/*
==============
CG_Ents_TouchModelFrontEndScene
==============
*/

bool __fastcall CG_Ents_TouchModelFrontEndScene(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  return ?CG_Ents_TouchModelFrontEndScene@@YA_NW4LocalClientNum_t@@PEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_Entity_StowClothForDObjRebuild
==============
*/

void __fastcall CG_Entity_StowClothForDObjRebuild(const LocalClientNum_t localClientNum, const int entNum)
{
  ?CG_Entity_StowClothForDObjRebuild@@YAXW4LocalClientNum_t@@H@Z(localClientNum, entNum);
}

/*
==============
CG_Entity_ClearScriptableBinding
==============
*/

void __fastcall CG_Entity_ClearScriptableBinding(LocalClientNum_t localClientNum, const int entNum)
{
  ?CG_Entity_ClearScriptableBinding@@YAXW4LocalClientNum_t@@H@Z(localClientNum, entNum);
}

/*
==============
CG_DObjGetWorldBonePositons
==============
*/

void __fastcall CG_DObjGetWorldBonePositons(const cpose_t *pose, const DObj *obj, const int boneCount, const int *boneIndices, vec3_t *outOrigins)
{
  ?CG_DObjGetWorldBonePositons@@YAXPEBUcpose_t@@PEBUDObj@@HPEBHQEATvec3_t@@@Z(pose, obj, boneCount, boneIndices, outOrigins);
}

/*
==============
CG_Entity_GetAnimations
==============
*/

XAnim_s *__fastcall CG_Entity_GetAnimations(LocalClientNum_t localClientNum, int entIndex, int entType)
{
  return ?CG_Entity_GetAnimations@@YAPEAUXAnim_s@@W4LocalClientNum_t@@HH@Z(localClientNum, entIndex, entType);
}

/*
==============
CG_Entity_UpdateScriptableDObjBinding
==============
*/

void __fastcall CG_Entity_UpdateScriptableDObjBinding(LocalClientNum_t localClientNum, const int entNum, const bool forceUpdateDef)
{
  ?CG_Entity_UpdateScriptableDObjBinding@@YAXW4LocalClientNum_t@@H_N@Z(localClientNum, entNum, forceUpdateDef);
}

/*
==============
CG_Entity_PhysicsPostAssetChange
==============
*/

void CG_Entity_PhysicsPostAssetChange(void)
{
  ?CG_Entity_PhysicsPostAssetChange@@YAXXZ();
}

/*
==============
CG_Entity_CalcPhysicsPositions
==============
*/

void __fastcall CG_Entity_CalcPhysicsPositions(const LocalClientNum_t localClientNum, const CG_PhysicsObject *entityPhysicsObject, centity_t *cent)
{
  ?CG_Entity_CalcPhysicsPositions@@YAXW4LocalClientNum_t@@PEBVCG_PhysicsObject@@PEAUcentity_t@@@Z(localClientNum, entityPhysicsObject, cent);
}

/*
==============
CG_Entity_GetBoneOrientation
==============
*/

bool __fastcall CG_Entity_GetBoneOrientation(LocalClientNum_t localClientNum, int dobjHandle, int boneIndex, orientation_t *orient)
{
  return ?CG_Entity_GetBoneOrientation@@YA_NW4LocalClientNum_t@@HHPEAUorientation_t@@@Z(localClientNum, dobjHandle, boneIndex, orient);
}

/*
==============
CG_Entity_CheckLightCount
==============
*/

void __fastcall CG_Entity_CheckLightCount(unsigned int entityNum, const DObj *obj, unsigned int lightCount, const vec3_t *pos, float radius)
{
  ?CG_Entity_CheckLightCount@@YAXIPEBUDObj@@IAEBTvec3_t@@M@Z(entityNum, obj, lightCount, pos, radius);
}

/*
==============
CG_Entity_GetAnimationLodScaledDistance
==============
*/

double __fastcall CG_Entity_GetAnimationLodScaledDistance(const float distance)
{
  double result; 

  *(float *)&result = ?CG_Entity_GetAnimationLodScaledDistance@@YAMM@Z(distance);
  return result;
}

/*
==============
CG_Entity_GetPlayerViewOriginEntityWorkerHack
==============
*/

void __fastcall CG_Entity_GetPlayerViewOriginEntityWorkerHack(const playerState_s *ps, vec3_t *outOrigin)
{
  ?CG_Entity_GetPlayerViewOriginEntityWorkerHack@@YAXPEBUplayerState_s@@AEATvec3_t@@@Z(ps, outOrigin);
}

/*
==============
CG_Entity_CanUseDObj
==============
*/

bool __fastcall CG_Entity_CanUseDObj(LocalClientNum_t localClientNum, int entNum)
{
  return ?CG_Entity_CanUseDObj@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, entNum);
}

/*
==============
CG_Entity_ShouldCreateClothOnInit
==============
*/

bool __fastcall CG_Entity_ShouldCreateClothOnInit(const LocalClientNum_t localClientNum, const int entNum)
{
  return ?CG_Entity_ShouldCreateClothOnInit@@YA_NW4LocalClientNum_t@@H@Z(localClientNum, entNum);
}

/*
==============
CG_Entity_GetLinkToParent
==============
*/

centity_t *__fastcall CG_Entity_GetLinkToParent(LocalClientNum_t localClientNum, const centity_t *cent)
{
  return ?CG_Entity_GetLinkToParent@@YAPEAUcentity_t@@W4LocalClientNum_t@@PEBU1@@Z(localClientNum, cent);
}

/*
==============
CG_Entity_AddViewmodelDObjToScene
==============
*/

void __fastcall CG_Entity_AddViewmodelDObjToScene(const LocalClientNum_t localClientNum, const DObj *obj, const cpose_t *pose, unsigned int entnum, unsigned int renderFlags, shaderOverride_t *shaderOverride, GfxSceneHudOutlineInfo *hudOutlineInfo, const vec3_t *lightingOrigin, float materialTime, unsigned int genericMaterialData, int markableViewmodel)
{
  ?CG_Entity_AddViewmodelDObjToScene@@YAXW4LocalClientNum_t@@PEBUDObj@@PEBUcpose_t@@IIUshaderOverride_t@@UGfxSceneHudOutlineInfo@@AEBTvec3_t@@MIH@Z(localClientNum, obj, pose, entnum, renderFlags, shaderOverride, hudOutlineInfo, lightingOrigin, materialTime, genericMaterialData, markableViewmodel);
}

/*
==============
CG_GetPose
==============
*/

const cpose_t *__fastcall CG_GetPose(LocalClientNum_t localClientNum, int handle)
{
  return ?CG_GetPose@@YAPEBUcpose_t@@W4LocalClientNum_t@@H@Z(localClientNum, handle);
}

/*
==============
CG_Entity_GetMutableShaderData
==============
*/

GfxSceneEntityMutableShaderData *__fastcall CG_Entity_GetMutableShaderData(GfxSceneEntityMutableShaderData *result, const LocalClientNum_t localClientNum, const DObj *obj, unsigned int genericMaterialData, GfxSceneHudOutlineInfo *hudOutlineInfo, shaderOverride_t *shaderOverride, float eyeSensorPupilSize)
{
  return ?CG_Entity_GetMutableShaderData@@YA?AUGfxSceneEntityMutableShaderData@@W4LocalClientNum_t@@PEBUDObj@@IUGfxSceneHudOutlineInfo@@UshaderOverride_t@@M@Z(result, localClientNum, obj, genericMaterialData, hudOutlineInfo, shaderOverride, eyeSensorPupilSize);
}

/*
==============
CG_GetPoseExtended
==============
*/

const cpose_t *__fastcall CG_GetPoseExtended(LocalClientNum_t localClientNum, int handle, int returnNullOnInvalid)
{
  return ?CG_GetPoseExtended@@YAPEBUcpose_t@@W4LocalClientNum_t@@HH@Z(localClientNum, handle, returnNullOnInvalid);
}

/*
==============
CG_Entity_CalcParentLinkPositions
==============
*/

void __fastcall CG_Entity_CalcParentLinkPositions(LocalClientNum_t localClientNum, int entnum)
{
  ?CG_Entity_CalcParentLinkPositions@@YAXW4LocalClientNum_t@@H@Z(localClientNum, entnum);
}

/*
==============
CG_DObjGetWorldBonePos
==============
*/

int __fastcall CG_DObjGetWorldBonePos(const cpose_t *pose, const DObj *obj, int boneIndex, vec3_t *outOrigin)
{
  return ?CG_DObjGetWorldBonePos@@YAHPEBUcpose_t@@PEBUDObj@@HAEATvec3_t@@@Z(pose, obj, boneIndex, outOrigin);
}

/*
==============
CG_IsEntityInterpolationValid
==============
*/

bool __fastcall CG_IsEntityInterpolationValid(const centity_t *cent)
{
  return ?CG_IsEntityInterpolationValid@@YA_NPEBUcentity_t@@@Z(cent);
}

/*
==============
CG_Entity_UpdatePreviousPosition
==============
*/

void __fastcall CG_Entity_UpdatePreviousPosition(centity_t *cent)
{
  ?CG_Entity_UpdatePreviousPosition@@YAXPEAUcentity_t@@@Z(cent);
}

/*
==============
CG_Entity_ResetSkeleton
==============
*/

void __fastcall CG_Entity_ResetSkeleton(LocalClientNum_t localClientNum, int entNum)
{
  ?CG_Entity_ResetSkeleton@@YAXW4LocalClientNum_t@@H@Z(localClientNum, entNum);
}

/*
==============
CG_Entity_InterpolateAdvancedTrajectory
==============
*/

void __fastcall CG_Entity_InterpolateAdvancedTrajectory(LocalClientNum_t localClientNum, const centity_t *cent, DObj *obj, float lerp, vec3_t *outOrigin, vec3_t *outAngles)
{
  ?CG_Entity_InterpolateAdvancedTrajectory@@YAXW4LocalClientNum_t@@PEBUcentity_t@@PEAUDObj@@MAEATvec3_t@@3@Z(localClientNum, cent, obj, lerp, outOrigin, outAngles);
}

/*
==============
CG_GetSkinCacheEntry
==============
*/

GfxSkinCacheEntry *__fastcall CG_GetSkinCacheEntry(const cpose_t *pose)
{
  return ?CG_GetSkinCacheEntry@@YAPEAUGfxSkinCacheEntry@@PEBUcpose_t@@@Z(pose);
}

/*
==============
CG_Entity_DestroyCloth
==============
*/

void __fastcall CG_Entity_DestroyCloth(const LocalClientNum_t localClientNum, const int entNum)
{
  ?CG_Entity_DestroyCloth@@YAXW4LocalClientNum_t@@H@Z(localClientNum, entNum);
}

/*
==============
CG_Entity_SetFrameInterpolation
==============
*/

void __fastcall CG_Entity_SetFrameInterpolation(LocalClientNum_t localClientNum)
{
  ?CG_Entity_SetFrameInterpolation@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Entity_CalcLightingOrigin
==============
*/

void __fastcall CG_Entity_CalcLightingOrigin(const cpose_t *pose, const DObj *obj, vec3_t *outLightingOrigin)
{
  ?CG_Entity_CalcLightingOrigin@@YAXPEBUcpose_t@@PEBUDObj@@AEATvec3_t@@@Z(pose, obj, outLightingOrigin);
}

/*
==============
CG_Entity_GetEntityLoopSoundAlias
==============
*/

SndAliasList *__fastcall CG_Entity_GetEntityLoopSoundAlias(LocalClientNum_t localClientNum, const centity_t *cent)
{
  return ?CG_Entity_GetEntityLoopSoundAlias@@YAPEAUSndAliasList@@W4LocalClientNum_t@@PEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_Entity_PhysicsClearPostAssetChange
==============
*/

void __fastcall CG_Entity_PhysicsClearPostAssetChange(const LocalClientNum_t localClientNum)
{
  ?CG_Entity_PhysicsClearPostAssetChange@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_DObjGetWorldBoneBindPose
==============
*/

void __fastcall CG_DObjGetWorldBoneBindPose(const cpose_t *pose, const DObj *obj, int boneIndex, tmat43_t<vec3_t> *outWorldTransform)
{
  ?CG_DObjGetWorldBoneBindPose@@YAXPEBUcpose_t@@PEBUDObj@@HAEAT?$tmat43_t@Tvec3_t@@@@@Z(pose, obj, boneIndex, outWorldTransform);
}

/*
==============
CG_DObjGetWorldBoneMatrix
==============
*/

int __fastcall CG_DObjGetWorldBoneMatrix(const cpose_t *pose, const DObj *obj, int boneIndex, tmat33_t<vec3_t> *outTagMat, vec3_t *outOrigin)
{
  return ?CG_DObjGetWorldBoneMatrix@@YAHPEBUcpose_t@@PEBUDObj@@HAEAT?$tmat33_t@Tvec3_t@@@@AEATvec3_t@@@Z(pose, obj, boneIndex, outTagMat, outOrigin);
}

/*
==============
CG_Entity_GetParentAxis
==============
*/

int __fastcall CG_Entity_GetParentAxis(LocalClientNum_t localClientNum, int entnum, const clientLinkInfo_t *li, const centity_t *parent, tmat43_t<vec3_t> *parentAxis)
{
  return ?CG_Entity_GetParentAxis@@YAHW4LocalClientNum_t@@HPEBUclientLinkInfo_t@@PEBUcentity_t@@AEAT?$tmat43_t@Tvec3_t@@@@@Z(localClientNum, entnum, li, parent, parentAxis);
}

/*
==============
CG_DObjGetLocalBoneMatrices
==============
*/

void __fastcall CG_DObjGetLocalBoneMatrices(const cpose_t *pose, const DObj *obj, const int boneCount, const int *boneIndices, DObjAnimMat **outResults)
{
  ?CG_DObjGetLocalBoneMatrices@@YAXPEBUcpose_t@@PEBUDObj@@HPEBHPEAPEAUDObjAnimMat@@@Z(pose, obj, boneCount, boneIndices, outResults);
}

/*
==============
CG_DObjGetLocalBoneMatrices
==============
*/
void CG_DObjGetLocalBoneMatrices(const cpose_t *pose, const DObj *obj, const int boneCount, const int *boneIndices, DObjAnimMat **outResults)
{
  __int64 v5; 
  DObjAnimMat **v9; 
  DObjAnimMat *RotTransArray; 

  v5 = boneCount;
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 316, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 317, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( (int)v5 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 318, ASSERT_TYPE_ASSERT, "(boneCount > 0)", (const char *)&queryFormat, "boneCount > 0") )
    __debugbreak();
  if ( !boneIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 319, ASSERT_TYPE_ASSERT, "(boneIndices)", (const char *)&queryFormat, "boneIndices") )
    __debugbreak();
  v9 = outResults;
  if ( !outResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 320, ASSERT_TYPE_ASSERT, "(outResults)", (const char *)&queryFormat, "outResults") )
    __debugbreak();
  CG_DObjCalcBones(pose, obj, v5, boneIndices);
  RotTransArray = DObjGetRotTransArray(obj);
  if ( (int)v5 > 0 )
  {
    if ( RotTransArray )
    {
      v5 = (unsigned int)v5;
      do
      {
        *v9++ = DObjGetSkelBoneMatrix(obj, *boneIndices++);
        --v5;
      }
      while ( v5 );
    }
    else if ( (int)v5 > 0 )
    {
      memset(outResults, 0, 8 * v5);
    }
  }
}

/*
==============
CG_DObjGetWorldBoneBindMatrix
==============
*/
__int64 CG_DObjGetWorldBoneBindMatrix(const cpose_t *pose, const DObj *obj, int boneIndex, tmat33_t<vec3_t> *outTagMat, vec3_t *outOrigin)
{
  unsigned __int16 v9; 
  refdef_t *v10; 
  float v11; 
  float v12; 
  DObjAnimMat outMat; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 443, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 444, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !g_activeRefDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 445, ASSERT_TYPE_ASSERT, "(g_activeRefDef)", (const char *)&queryFormat, "g_activeRefDef") )
    __debugbreak();
  v9 = truncate_cast<unsigned short,int>(boneIndex);
  DObjGetBasePoseMatrix(obj, v9, &outMat);
  LocalConvertQuatToMat(&outMat, outTagMat);
  v10 = g_activeRefDef;
  v11 = outMat.trans.v[1];
  outOrigin->v[0] = outMat.trans.v[0] + g_activeRefDef->viewOffset.v[0];
  v12 = outMat.trans.v[2];
  outOrigin->v[1] = v11 + v10->viewOffset.v[1];
  outOrigin->v[2] = v12 + v10->viewOffset.v[2];
  return 1i64;
}

/*
==============
CG_DObjGetWorldBoneBindPose
==============
*/
void CG_DObjGetWorldBoneBindPose(const cpose_t *pose, const DObj *obj, int boneIndex, tmat43_t<vec3_t> *outWorldTransform)
{
  unsigned __int16 v8; 
  vec3_t outOrigin; 
  DObjAnimMat outMat; 
  tmat43_t<vec3_t> v11; 
  tmat43_t<vec3_t> axis; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 458, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 459, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  v8 = truncate_cast<unsigned short,int>(boneIndex);
  DObjGetBasePoseMatrix(obj, v8, &outMat);
  LocalConvertQuatToMat(&outMat, (tmat33_t<vec3_t> *)&axis);
  axis.m[3] = outMat.trans;
  CG_GetPoseOrigin(pose, &outOrigin);
  AnglesToAxis(&pose->angles, (tmat33_t<vec3_t> *)&v11);
  v11.m[3] = outOrigin;
  MatrixMultiply43(&axis, &v11, outWorldTransform);
}

/*
==============
CG_DObjGetWorldBoneMatrices
==============
*/
void CG_DObjGetWorldBoneMatrices(const cpose_t *pose, const DObj *obj, const int boneCount, const int *boneIndices, tmat33_t<vec3_t> *outTagMatrices, vec3_t *outOrigins)
{
  __int64 v8; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  float *i; 
  DObjAnimMat *v14; 
  refdef_t *v15; 
  const char *BoneName; 
  DObjAnimMat *outResults[4094]; 

  v8 = boneCount;
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 360, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 361, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( (int)v8 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 362, ASSERT_TYPE_ASSERT, "(boneCount > 0)", (const char *)&queryFormat, "boneCount > 0") )
    __debugbreak();
  if ( !boneIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 363, ASSERT_TYPE_ASSERT, "(boneIndices)", (const char *)&queryFormat, "boneIndices") )
    __debugbreak();
  if ( !outTagMatrices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 364, ASSERT_TYPE_ASSERT, "(outTagMatrices)", (const char *)&queryFormat, "outTagMatrices") )
    __debugbreak();
  if ( !outOrigins && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 365, ASSERT_TYPE_ASSERT, "(outOrigins)", (const char *)&queryFormat, "outOrigins") )
    __debugbreak();
  if ( !g_activeRefDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 367, ASSERT_TYPE_ASSERT, "(g_activeRefDef)", (const char *)&queryFormat, "g_activeRefDef") )
    __debugbreak();
  if ( (unsigned int)v8 > 0xFFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 371, ASSERT_TYPE_ASSERT, "(boneCount <= ( sizeof( *array_counter( matrices ) ) + 0 ))", (const char *)&queryFormat, "boneCount <= ARRAY_COUNT( matrices )") )
    __debugbreak();
  CG_DObjGetLocalBoneMatrices(pose, obj, v8, boneIndices, outResults);
  v10 = 0;
  v11 = v8;
  if ( (int)v8 > 0 )
  {
    v12 = 0i64;
    for ( i = &outOrigins->v[2]; ; i += 3 )
    {
      v14 = outResults[v12];
      if ( (LODWORD(v14->quat.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v14->quat.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(v14->quat.v[2]) & 0x7F800000) == 2139095040 || (LODWORD(v14->quat.v[3]) & 0x7F800000) == 2139095040 )
        break;
      LocalConvertQuatToMat(v14, &outTagMatrices[v10]);
      v15 = g_activeRefDef;
      ++v10;
      ++v12;
      *(i - 2) = v14->trans.v[0] + g_activeRefDef->viewOffset.v[0];
      *(i - 1) = v14->trans.v[1] + v15->viewOffset.v[1];
      *i = v14->trans.v[2] + v15->viewOffset.v[2];
      if ( v12 >= v11 )
        return;
    }
    DObjDumpInfo(obj);
    BoneName = DObjGetBoneName(obj, boneIndices[v10]);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 384, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_DObjGetLocalBoneMatrix returned a NaN quat for bone %s. Copy Log above.", BoneName) )
      __debugbreak();
  }
}

/*
==============
CG_DObjGetWorldBoneMatrix
==============
*/
__int64 CG_DObjGetWorldBoneMatrix(const cpose_t *pose, const DObj *obj, int boneIndex, tmat33_t<vec3_t> *outTagMat, vec3_t *outOrigin)
{
  DObjAnimMat *LocalBoneMatrix; 
  float *v10; 
  refdef_t *v11; 
  const char *BoneName; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 399, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 400, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !g_activeRefDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 401, ASSERT_TYPE_ASSERT, "(g_activeRefDef)", (const char *)&queryFormat, "g_activeRefDef") )
    __debugbreak();
  LocalBoneMatrix = CG_DObjGetLocalBoneMatrix(pose, obj, boneIndex);
  v10 = (float *)LocalBoneMatrix;
  if ( LocalBoneMatrix )
  {
    if ( (LODWORD(LocalBoneMatrix->quat.v[0]) & 0x7F800000) != 2139095040 && (LODWORD(LocalBoneMatrix->quat.v[1]) & 0x7F800000) != 2139095040 && (LODWORD(LocalBoneMatrix->quat.v[2]) & 0x7F800000) != 2139095040 && (LODWORD(LocalBoneMatrix->quat.v[3]) & 0x7F800000) != 2139095040 )
    {
      LocalConvertQuatToMat(LocalBoneMatrix, outTagMat);
      v11 = g_activeRefDef;
      outOrigin->v[0] = v10[4] + g_activeRefDef->viewOffset.v[0];
      outOrigin->v[1] = v10[5] + v11->viewOffset.v[1];
      outOrigin->v[2] = v10[6] + v11->viewOffset.v[2];
      return 1i64;
    }
    DObjDumpInfo(obj);
    BoneName = DObjGetBoneName(obj, boneIndex);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 412, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_DObjGetLocalBoneMatrix returned a NaN quat for bone %s. Copy Log above.", BoneName) )
      __debugbreak();
  }
  return 0i64;
}

/*
==============
CG_DObjGetWorldBonePos
==============
*/
DObjAnimMat *CG_DObjGetWorldBonePos(const cpose_t *pose, const DObj *obj, int boneIndex, vec3_t *outOrigin)
{
  DObjAnimMat *result; 
  float *v9; 
  refdef_t *v10; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 427, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 428, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !g_activeRefDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 429, ASSERT_TYPE_ASSERT, "(g_activeRefDef)", (const char *)&queryFormat, "g_activeRefDef") )
    __debugbreak();
  result = CG_DObjGetLocalBoneMatrix(pose, obj, boneIndex);
  v9 = (float *)result;
  if ( result )
  {
    v10 = g_activeRefDef;
    outOrigin->v[0] = g_activeRefDef->viewOffset.v[0] + v9[4];
    outOrigin->v[1] = v9[5] + v10->viewOffset.v[1];
    outOrigin->v[2] = v9[6] + v10->viewOffset.v[2];
    return (DObjAnimMat *)1;
  }
  return result;
}

/*
==============
CG_DObjGetWorldBonePositons
==============
*/
void CG_DObjGetWorldBonePositons(const cpose_t *pose, const DObj *obj, const int boneCount, const int *boneIndices, vec3_t *outOrigins)
{
  __int64 v6; 
  __int64 v9; 
  refdef_t *v10; 
  float *v11; 
  DObjAnimMat *v12; 
  float v13; 
  DObjAnimMat *v14; 
  float v15; 
  DObjAnimMat *v16; 
  float v17; 
  DObjAnimMat *v18; 
  refdef_t *v19; 
  float *v20; 
  DObjAnimMat *v21; 
  DObjAnimMat *outResults[254]; 

  v6 = boneCount;
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 336, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 337, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( (int)v6 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 338, ASSERT_TYPE_ASSERT, "(boneCount > 0)", (const char *)&queryFormat, "boneCount > 0") )
    __debugbreak();
  if ( !boneIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 339, ASSERT_TYPE_ASSERT, "(boneIndices)", (const char *)&queryFormat, "boneIndices") )
    __debugbreak();
  if ( !outOrigins && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 340, ASSERT_TYPE_ASSERT, "(outOrigins)", (const char *)&queryFormat, "outOrigins") )
    __debugbreak();
  if ( !g_activeRefDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 342, ASSERT_TYPE_ASSERT, "(g_activeRefDef)", (const char *)&queryFormat, "g_activeRefDef") )
    __debugbreak();
  if ( (unsigned int)v6 > 0xFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 346, ASSERT_TYPE_ASSERT, "(boneCount <= ( sizeof( *array_counter( matrices ) ) + 0 ))", (const char *)&queryFormat, "boneCount <= ARRAY_COUNT( matrices )") )
    __debugbreak();
  CG_DObjGetLocalBoneMatrices(pose, obj, v6, boneIndices, outResults);
  v9 = 0i64;
  if ( v6 >= 4 )
  {
    v10 = g_activeRefDef;
    v11 = &outOrigins[1].v[2];
    do
    {
      v12 = outResults[v9];
      v11 += 12;
      *(v11 - 17) = v12->trans.v[0] + v10->viewOffset.v[0];
      *(v11 - 16) = v12->trans.v[1] + v10->viewOffset.v[1];
      v13 = v12->trans.v[2] + v10->viewOffset.v[2];
      v14 = outResults[v9 + 1];
      *(v11 - 15) = v13;
      *(v11 - 14) = v14->trans.v[0] + v10->viewOffset.v[0];
      *(v11 - 13) = v14->trans.v[1] + v10->viewOffset.v[1];
      v15 = v14->trans.v[2] + v10->viewOffset.v[2];
      v16 = outResults[v9 + 2];
      *(v11 - 12) = v15;
      *(v11 - 11) = v16->trans.v[0] + v10->viewOffset.v[0];
      *(v11 - 10) = v16->trans.v[1] + v10->viewOffset.v[1];
      v17 = v16->trans.v[2] + v10->viewOffset.v[2];
      v18 = outResults[v9 + 3];
      v9 += 4i64;
      *(v11 - 9) = v17;
      *(v11 - 8) = v18->trans.v[0] + v10->viewOffset.v[0];
      *(v11 - 7) = v18->trans.v[1] + v10->viewOffset.v[1];
      *(v11 - 6) = v18->trans.v[2] + v10->viewOffset.v[2];
    }
    while ( v9 < v6 - 3 );
  }
  if ( v9 < v6 )
  {
    v19 = g_activeRefDef;
    v20 = &outOrigins[v9].v[2];
    do
    {
      v21 = outResults[v9];
      v20 += 3;
      ++v9;
      *(v20 - 5) = v21->trans.v[0] + v19->viewOffset.v[0];
      *(v20 - 4) = v21->trans.v[1] + v19->viewOffset.v[1];
      *(v20 - 3) = v21->trans.v[2] + v19->viewOffset.v[2];
    }
    while ( v9 < v6 );
  }
}

/*
==============
CG_Entity_AddDObjToScene
==============
*/
void CG_Entity_AddDObjToScene(const LocalClientNum_t localClientNum, const DObj *obj, const cpose_t *pose, unsigned int entnum, unsigned int renderFlags, shaderOverride_t *shaderOverride, GfxSceneHudOutlineInfo *hudOutlineInfo, const vec3_t *lightingOrigin, float materialTime, unsigned int genericMaterialData)
{
  CgEntitySystem *EntitySystem; 
  centity_t *Entity; 
  CgEntitySystem *v15; 
  __int64 v16; 
  __int64 v17; 
  unsigned int v18; 
  float eyeSensorPupilSize; 
  __m256i v20; 
  GfxSceneHudOutlineInfo *hudOutlineInfoa; 
  shaderOverride_t v23; 
  GfxSceneHudOutlineInfo v24; 
  GfxSceneEntityMutableShaderData v25; 
  GfxSceneEntityMutableShaderData entityMutableShaderData; 

  if ( obj->entnum < 0x801u )
  {
    EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
    if ( !EntitySystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2337, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
      __debugbreak();
    Entity = CgEntitySystem::GetEntity(EntitySystem, (unsigned int)obj->entnum - 1);
    if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2339, ASSERT_TYPE_ASSERT, "(cEntity)", (const char *)&queryFormat, "cEntity") )
      __debugbreak();
    if ( BG_IsCorpseEntity(&Entity->nextState) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 4u) )
    {
      v18 = renderFlags | 0x100;
      goto LABEL_25;
    }
    if ( obj->entnum < 0x801u )
    {
      v15 = CgEntitySystem::GetEntitySystem(localClientNum);
      if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2352, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
        __debugbreak();
      v16 = obj->entnum;
      if ( (unsigned int)(v16 - 1) >= 0x800 )
      {
        LODWORD(hudOutlineInfoa) = v16 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 534, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", hudOutlineInfoa, 2048) )
          __debugbreak();
      }
      v17 = (__int64)v15 + 760 * v16 - 744;
      if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2354, ASSERT_TYPE_ASSERT, "(cEntity)", (const char *)&queryFormat, "cEntity") )
        __debugbreak();
      if ( BG_IsCharacterEntity((const entityState_t *)(v17 + 400)) && (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
      {
        v18 = renderFlags | 0x40;
        goto LABEL_25;
      }
    }
  }
  v18 = renderFlags;
LABEL_25:
  if ( !CG_EntityWorkers_TryAddDObjDrawRequest(entnum, v18, genericMaterialData, materialTime, lightingOrigin, hudOutlineInfo, shaderOverride) )
  {
    CG_LocalEntity_PreAddDObjUpdate(localClientNum, entnum);
    if ( entnum >= 0x800 )
      eyeSensorPupilSize = 0.0;
    else
      eyeSensorPupilSize = CG_GetEntity(localClientNum, entnum)->eyeSensorPupilSize;
    CG_Entity_UpdateCharacterEvOffset(localClientNum, entnum, hudOutlineInfo);
    v20 = *(__m256i *)&shaderOverride->scrollRateX;
    v23.atlasTime = shaderOverride->atlasTime;
    v24.characterEVOffset = hudOutlineInfo->characterEVOffset;
    *(__m256i *)&v23.scrollRateX = v20;
    *(__m256i *)&v24.color = *(__m256i *)&hudOutlineInfo->color;
    entityMutableShaderData = *CG_Entity_GetMutableShaderData(&v25, localClientNum, obj, genericMaterialData, &v24, &v23, eyeSensorPupilSize);
    R_AddDObjToScene(obj, pose, entnum, v18, &entityMutableShaderData, lightingOrigin, materialTime);
    if ( (obj->flags & 4) != 0 )
      R_EntityHasSkinningAnimation(localClientNum, entnum);
  }
}

/*
==============
CG_Entity_AddViewmodelDObjToScene
==============
*/
void CG_Entity_AddViewmodelDObjToScene(const LocalClientNum_t localClientNum, const DObj *obj, const cpose_t *pose, unsigned int entnum, unsigned int renderFlags, shaderOverride_t *shaderOverride, GfxSceneHudOutlineInfo *hudOutlineInfo, const vec3_t *lightingOrigin, float materialTime, unsigned int genericMaterialData, int markableViewmodel)
{
  cg_t *LocalClientGlobals; 
  __int64 v16; 
  float atlasTime; 
  float characterEVOffset; 
  __m256i v19; 
  __m256i v20; 
  GfxSceneHudOutlineInfo v21; 
  shaderOverride_t v22; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2462, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( LocalClientGlobals->viewModelQueuedRenderInfo.m_enabled )
  {
    if ( entnum - 2048 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1016, ASSERT_TYPE_ASSERT, "(entNum == ENTITYNUM_VIEWMODEL || entNum == ENTITYNUM_VIEWMODEL_LEFT)", (const char *)&queryFormat, "entNum == ENTITYNUM_VIEWMODEL || entNum == ENTITYNUM_VIEWMODEL_LEFT") )
      __debugbreak();
    v16 = 512124i64;
    if ( entnum != 2049 )
      v16 = 512020i64;
    *((_BYTE *)&LocalClientGlobals->predictedPlayerState.movingPlatforms.m_movingPlatformTurnRate + v16) = 1;
    *(vec3_t *)((char *)&LocalClientGlobals->predictedPlayerState.velocity + v16 + 4) = *lightingOrigin;
    *(int *)((char *)&LocalClientGlobals->predictedPlayerState.impulseFieldAirborneStartTime + v16) = renderFlags;
    *(float *)((char *)&LocalClientGlobals->predictedPlayerState.impulseFieldSpeed + v16) = materialTime;
    atlasTime = shaderOverride->atlasTime;
    *(__m256i *)&LocalClientGlobals->predictedPlayerState.otherFlags.m_flags[(unsigned __int64)v16 / 4] = *(__m256i *)&shaderOverride->scrollRateX;
    LocalClientGlobals->predictedPlayerState.velocity.v[(unsigned __int64)v16 / 4] = atlasTime;
    characterEVOffset = hudOutlineInfo->characterEVOffset;
    *(__m256i *)((char *)&LocalClientGlobals->__vftable + v16) = *(__m256i *)&hudOutlineInfo->color;
    *(float *)&LocalClientGlobals->predictedPlayerState.pm_flags.m_flags[(unsigned __int64)v16 / 4 + 1] = characterEVOffset;
    *(PlayerCommandInput *)((char *)&LocalClientGlobals->predictedPlayerState.lastInput + v16) = (PlayerCommandInput)genericMaterialData;
    *(int *)((char *)&LocalClientGlobals->predictedPlayerState.movingPlatforms.m_movingPlatformEntity + v16) = markableViewmodel;
  }
  else
  {
    v19 = *(__m256i *)&hudOutlineInfo->color;
    v21.characterEVOffset = hudOutlineInfo->characterEVOffset;
    *(__m256i *)&v21.color = v19;
    v20 = *(__m256i *)&shaderOverride->scrollRateX;
    v22.atlasTime = shaderOverride->atlasTime;
    *(__m256i *)&v22.scrollRateX = v20;
    CG_Entity_AddViewmodelDObjToScene_Internal(localClientNum, obj, pose, entnum, renderFlags, &v22, &v21, lightingOrigin, materialTime, genericMaterialData, markableViewmodel);
  }
}

/*
==============
CG_Entity_AddViewmodelDObjToScene_Internal
==============
*/
void CG_Entity_AddViewmodelDObjToScene_Internal(const LocalClientNum_t localClientNum, const DObj *obj, const cpose_t *pose, unsigned int entnum, unsigned int renderFlags, shaderOverride_t *shaderOverride, GfxSceneHudOutlineInfo *hudOutlineInfo, const vec3_t *lightingOrigin, float materialTime, unsigned int genericMaterialData, int markableViewmodel)
{
  float atlasTime; 
  float characterEVOffset; 
  shaderOverride_t v17; 
  GfxSceneHudOutlineInfo v18; 
  GfxSceneEntityMutableShaderData v19; 
  GfxSceneEntityMutableShaderData entityMutableShaderData; 

  atlasTime = shaderOverride->atlasTime;
  characterEVOffset = hudOutlineInfo->characterEVOffset;
  CG_LocalEntity_PreAddDObjUpdate(localClientNum, entnum);
  *(__m256i *)&v17.scrollRateX = *(__m256i *)&shaderOverride->scrollRateX;
  *(__m256i *)&v18.color = *(__m256i *)&hudOutlineInfo->color;
  v17.atlasTime = atlasTime;
  v18.characterEVOffset = characterEVOffset;
  entityMutableShaderData = *CG_Entity_GetMutableShaderData(&v19, localClientNum, obj, genericMaterialData, &v18, &v17, 0.0);
  R_AddViewmodelDObjToScene(obj, pose, entnum, renderFlags, &entityMutableShaderData, lightingOrigin, materialTime, markableViewmodel);
  if ( (obj->flags & 4) != 0 )
    R_EntityHasSkinningAnimation(localClientNum, entnum);
}

/*
==============
CG_Entity_AdjustVehicleTurretAngles
==============
*/
void CG_Entity_AdjustVehicleTurretAngles(const LocalClientNum_t localClientNum, centity_t *const turretCent)
{
  CgVehicleSystem *VehicleSystem; 
  cg_t *LocalClientGlobals; 
  CgHandler *Handler; 
  int RemoteControlledVehicleEntityNum; 
  centity_t *Entity; 
  __int64 v9; 
  int v10; 
  bool v11; 
  bool v12; 
  CgHandler *v13; 
  __int128 v17; 
  __int128 v19; 
  const dvar_t *v21; 
  const char *v22; 
  __int128 v23; 
  double Float_Internal_DebugName; 
  float v25; 
  __int128 v26; 
  float v27; 
  double v29; 
  vec3_t angles; 
  vec3_t inOutViewAngles; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in; 
  tmat33_t<vec3_t> out; 
  WorldUpReferenceFrame v36; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3275, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  if ( VehicleSystem )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( LocalClientGlobals )
    {
      Handler = CgHandler::getHandler(localClientNum);
      RemoteControlledVehicleEntityNum = BG_GetRemoteControlledVehicleEntityNum(&LocalClientGlobals->predictedPlayerState, Handler);
      if ( RemoteControlledVehicleEntityNum != 2047 )
      {
        Entity = CG_GetEntity(localClientNum, RemoteControlledVehicleEntityNum);
        if ( (Entity->flags & 1) != 0 )
        {
          v9 = (__int64)VehicleSystem->GetVehicleDef(VehicleSystem, &Entity->nextState);
          if ( v9 )
          {
            v10 = *(_DWORD *)(v9 + 248);
            v11 = v10 && !*(_BYTE *)(v9 + 256);
            v12 = v10 && *(_DWORD *)(v9 + 260) == 4;
            if ( v11 )
            {
              if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_bradleyGunPitchClamp, "bg_bradleyGunPitchClamp") )
                return;
              if ( !v12 )
              {
LABEL_23:
                inOutViewAngles = LocalClientGlobals->predictedPlayerState.viewangles;
                BG_CalcLinkedViewValues(&LocalClientGlobals->predictedPlayerState, &inOutViewAngles);
                v13 = CgHandler::getHandler(localClientNum);
                WorldUpReferenceFrame::WorldUpReferenceFrame(&v36, &LocalClientGlobals->predictedPlayerState, v13, 1);
                WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v36, &inOutViewAngles);
                AnglesToAxis(&inOutViewAngles, &axis);
                AnglesToAxis(&turretCent->pose.angles, &in);
                MatrixInverse(&in, &out);
                MatrixMultiply(&axis, &out, &in1);
                AxisToAngles(&in1, &angles);
                _XMM8 = 0i64;
                __asm
                {
                  vroundss xmm2, xmm8, xmm1, 1
                  vroundss xmm3, xmm8, xmm2, 1
                }
                angles.v[0] = (float)((float)(0.0027777778 * angles.v[0]) - *(float *)&_XMM2) * 360.0;
                v17 = LODWORD(FLOAT_0_0027777778);
                angles.v[1] = (float)((float)(0.0027777778 * angles.v[1]) - *(float *)&_XMM3) * 360.0;
                __asm { vroundss xmm2, xmm8, xmm1, 1 }
                *((_QWORD *)&v19 + 1) = 0i64;
                *(float *)&v17 = (float)((float)(0.0027777778 * angles.v[2]) - *(float *)&_XMM2) * 360.0;
                _XMM1 = v17;
                angles.v[2] = *(float *)&v17;
                if ( v11 )
                {
                  *(double *)&v19 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_bradleyGunPitchClamp_begin, "bg_bradleyGunPitchClamp_begin");
                  v21 = DCONST_DVARFLT_bg_bradleyGunPitchClamp_max;
                  v22 = "bg_bradleyGunPitchClamp_max";
                }
                else
                {
                  *(double *)&v19 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vindiaGunPitchClamp_begin, "bg_vindiaGunPitchClamp_begin");
                  v21 = DCONST_DVARFLT_bg_vindiaGunPitchClamp_max;
                  v22 = "bg_vindiaGunPitchClamp_max";
                }
                v23 = v19;
                Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(v21, v22);
                v25 = *(float *)&Float_Internal_DebugName;
                if ( *(float *)&v23 >= *(float *)&Float_Internal_DebugName )
                {
                  *((_QWORD *)&v26 + 1) = *((_QWORD *)&v23 + 1);
                  *(double *)&v26 = *(float *)&v23;
                  _XMM1 = v26;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3344, ASSERT_TYPE_ASSERT, "( downClampBegin ) < ( downClampMax )", "%s < %s\n\t%g, %g", "downClampBegin", "downClampMax", *(float *)&v23, *(float *)&Float_Internal_DebugName) )
                    __debugbreak();
                }
                if ( *(float *)&v23 < angles.v[0] )
                {
                  v27 = 90.0 - *(float *)&v23;
                  if ( (float)(90.0 - *(float *)&v23) <= 0.0 )
                  {
                    __asm { vxorpd  xmm1, xmm1, xmm1 }
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3353, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( clampRange )", "%s < %s\n\t%g, %g", "0.0f", "clampRange", *(double *)&_XMM1, v27) )
                      __debugbreak();
                  }
                  v29 = I_fclamp((float)(angles.v[0] - *(float *)&v23) / v27, 0.0, 1.0);
                  angles.v[0] = (float)((float)(1.0 - *(float *)&v29) * *(float *)&v23) + (float)(*(float *)&v29 * v25);
                }
                AnglesToAxis(&angles, &in1);
                MatrixMultiply(&in1, &in, &axis);
                AxisToAngles(&axis, (vec3_t *)&turretCent->pose.160);
                turretCent->pose.turret.useOnVehicleAngles = 1;
                return;
              }
            }
            else if ( !v12 )
            {
              return;
            }
            if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_vindiaGunPitchClamp, "bg_vindiaGunPitchClamp") )
              return;
            goto LABEL_23;
          }
        }
      }
    }
  }
}

/*
==============
CG_Entity_CalcLightingOrigin
==============
*/
void CG_Entity_CalcLightingOrigin(const cpose_t *pose, const DObj *obj, vec3_t *outLightingOrigin)
{
  Bounds bounds; 
  tmat43_t<vec3_t> axis; 

  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 694, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 695, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  DObjPhysicsGetBounds(obj, &bounds);
  AnglesToAxis(&pose->angles, (tmat33_t<vec3_t> *)&axis);
  CG_GetPoseOrigin(pose, &axis.m[3]);
  MatrixTransformVector43(&bounds.midPoint, &axis, outLightingOrigin);
}

/*
==============
CG_Entity_CalcParentLinkPositions
==============
*/
void CG_Entity_CalcParentLinkPositions(LocalClientNum_t localClientNum, int entnum)
{
  centity_t *Entity; 
  unsigned int v5; 
  centity_t *v6; 
  centity_t *v7; 
  cg_t *LocalClientGlobals; 
  int v9; 
  unsigned int prevLinkParent; 
  char v11; 
  float frameInterpolation; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  vec4_t inOrigin; 
  vec4_t quat; 
  tmat43_t<vec3_t> v18; 
  vec4_t result; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> out; 

  Entity = CG_GetEntity(localClientNum, entnum);
  if ( (*(_DWORD *)&Entity->nextState.clientLinkInfo & 0x7FF) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2613, ASSERT_TYPE_ASSERT, "(li->parentId)", (const char *)&queryFormat, "li->parentId", -2i64) )
    __debugbreak();
  v5 = (*(_DWORD *)&Entity->nextState.clientLinkInfo & 0x7FF) - 1;
  v6 = CG_GetEntity(localClientNum, v5);
  v7 = v6;
  if ( (v6->flags & 1) == 0 )
  {
    Com_PrintWarning(14, "Ent #%i's parent, ent #%i, is not in client snapshot.\n", (unsigned int)entnum, v5);
    CG_SetPoseOrigin(&Entity->pose, &vec3_origin);
    *(_QWORD *)Entity->pose.angles.v = 0i64;
    Entity->pose.angles.v[2] = 0.0;
    return;
  }
  if ( (*(_DWORD *)&Entity->nextState.clientLinkInfo & 0x100000) != 0 )
  {
    AnglesToAxis(&v6->pose.angles, (tmat33_t<vec3_t> *)&axis);
    CG_GetPoseOrigin(&v7->pose, &axis.m[3]);
  }
  else if ( !CG_Entity_GetParentAxis(localClientNum, entnum, &Entity->nextState.clientLinkInfo, v6, &axis) )
  {
    CG_GetPoseOrigin(&v7->pose, (vec3_t *)&inOrigin);
    CG_SetPoseOrigin(&Entity->pose, (const vec3_t *)&inOrigin);
    Entity->pose.angles.v[0] = v7->pose.angles.v[0];
    Entity->pose.angles.v[1] = v7->pose.angles.v[1];
    Entity->pose.angles.v[2] = v7->pose.angles.v[2];
LABEL_39:
    memset(&inOrigin, 0, 0xCui64);
    return;
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v9 = *(_DWORD *)&Entity->nextState.clientLinkInfo & 0x7FF;
  prevLinkParent = Entity->prevLinkParent;
  v11 = BYTE2(Entity->flags) & 1;
  if ( v11 && prevLinkParent == v9 && !VecNCompareCustomEpsilon(Entity->prevState.pos.trDelta.v, Entity->nextState.lerp.pos.trDelta.v, 0.001, 3) )
  {
    frameInterpolation = LocalClientGlobals->frameInterpolation;
    v18.m[3].v[0] = (float)((float)(Entity->nextState.lerp.pos.trDelta.v[0] - Entity->prevState.pos.trDelta.v[0]) * frameInterpolation) + Entity->prevState.pos.trDelta.v[0];
    v18.m[3].v[1] = (float)((float)(Entity->nextState.lerp.pos.trDelta.v[1] - Entity->prevState.pos.trDelta.v[1]) * frameInterpolation) + Entity->prevState.pos.trDelta.v[1];
    v18.m[3].v[2] = (float)((float)(Entity->nextState.lerp.pos.trDelta.v[2] - Entity->prevState.pos.trDelta.v[2]) * frameInterpolation) + Entity->prevState.pos.trDelta.v[2];
  }
  else
  {
    v18.m[3] = Entity->nextState.lerp.pos.trDelta;
  }
  if ( v11 && prevLinkParent == v9 && !VecNCompareCustomEpsilon(Entity->prevState.apos.trDelta.v, Entity->nextState.lerp.apos.trDelta.v, 0.001, 3) )
  {
    AnglesToQuat(&Entity->prevState.apos.trDelta, &quat);
    AnglesToQuat(&Entity->nextState.lerp.apos.trDelta, &inOrigin);
    QuatSlerp(&quat, &inOrigin, LocalClientGlobals->frameInterpolation, &result);
    QuatToAxis(&result, (tmat33_t<vec3_t> *)&v18);
  }
  else
  {
    AnglesToAxis(&Entity->nextState.lerp.apos.trDelta, (tmat33_t<vec3_t> *)&v18);
  }
  MatrixMultiply43(&v18, &axis, &out);
  CG_SetPoseOrigin(&Entity->pose, &out.m[3]);
  AxisToAngles((const tmat33_t<vec3_t> *)&out, &Entity->pose.angles);
  if ( Entity->prevState.pos.trType == TR_LINKED )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT_ADS) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2681, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::LINKED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::LINKED_TRAJECTORIES )") )
      __debugbreak();
    if ( Entity->prevState.apos.trType != TR_LINKED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2682, ASSERT_TYPE_ASSERT, "(cent->prevState.apos.trType == TR_LINKED)", (const char *)&queryFormat, "cent->prevState.apos.trType == TR_LINKED") )
      __debugbreak();
    CG_GetPoseOrigin(&Entity->pose, (vec3_t *)&inOrigin);
    if ( Entity == (centity_t *)-416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 82, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
      __debugbreak();
    if ( Entity->nextState.lerp.pos.trType == TR_LINEAR_STOP_SECURE )
    {
      quat.v[0] = inOrigin.v[0];
      if ( (LODWORD(inOrigin.v[0]) & 0x7F800000) == 2139095040 || (quat.v[0] = inOrigin.v[1], (LODWORD(inOrigin.v[1]) & 0x7F800000) == 2139095040) || (quat.v[0] = inOrigin.v[2], (LODWORD(inOrigin.v[2]) & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 24, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
          __debugbreak();
      }
      v13 = LODWORD(inOrigin.v[0]) ^ ~s_trbase_aab_X;
      v14 = s_trbase_aab_Y ^ v13 ^ LODWORD(inOrigin.v[1]);
      v15 = s_trbase_aab_Z ^ v14 ^ LODWORD(inOrigin.v[2]);
      LODWORD(Entity->nextState.lerp.pos.trBase.v[0]) = v13;
      LODWORD(Entity->nextState.lerp.pos.trBase.v[1]) = v14;
      LODWORD(Entity->nextState.lerp.pos.trBase.v[2]) = v15;
      memset(&quat, 0, 8ui64);
    }
    else
    {
      Entity->nextState.lerp.pos.trBase.v[0] = inOrigin.v[0];
      Entity->nextState.lerp.pos.trBase.v[1] = inOrigin.v[1];
      Entity->nextState.lerp.pos.trBase.v[2] = inOrigin.v[2];
    }
    Entity->nextState.lerp.apos.trBase.v[0] = Entity->pose.angles.v[0];
    Entity->nextState.lerp.apos.trBase.v[1] = Entity->pose.angles.v[1];
    Entity->nextState.lerp.apos.trBase.v[2] = Entity->pose.angles.v[2];
    goto LABEL_39;
  }
}

/*
==============
CG_Entity_CalcPhysicsPositions
==============
*/
void CG_Entity_CalcPhysicsPositions(const LocalClientNum_t localClientNum, const CG_PhysicsObject *entityPhysicsObject, centity_t *cent)
{
  CG_PhysicsObject *v6; 
  __int32 v7; 
  unsigned int v8; 
  vec3_t trBase; 

  if ( !entityPhysicsObject && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2211, ASSERT_TYPE_ASSERT, "(entityPhysicsObject)", (const char *)&queryFormat, "entityPhysicsObject", -2i64) )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2212, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2213, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( cent->prevState.pos.trType == TR_PHYSICS_CLIENT_AUTH )
  {
    if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2067, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
      __debugbreak();
    v6 = CG_PhysicsObject_Get(cent->nextState.number, localClientNum);
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2071, ASSERT_TYPE_ASSERT, "(entityPhysicsObject)", (const char *)&queryFormat, "entityPhysicsObject") )
      __debugbreak();
    if ( v6->physicsInstances[3 * localClientNum + 3] == -1 && CG_GetLocalClientGlobals(localClientNum)->time > cent->prevState.pos.trTime + 1000 )
      goto LABEL_19;
  }
  v7 = 3 * localClientNum;
  if ( entityPhysicsObject->physicsInstances[3 * localClientNum + 3] == -1 )
  {
    CG_Entity_CreatePhysics(localClientNum, cent->nextState.number, 0);
    v8 = entityPhysicsObject->physicsInstances[v7 + 3];
    if ( v8 == -1 )
    {
LABEL_19:
      Trajectory_GetTrBase(&cent->prevState.pos, &trBase);
      CG_SetPoseOrigin(&cent->pose, &trBase);
      cent->pose.angles.v[0] = cent->prevState.apos.trBase.v[0];
      cent->pose.angles.v[1] = cent->prevState.apos.trBase.v[1];
      cent->pose.angles.v[2] = cent->prevState.apos.trBase.v[2];
      memset(&trBase, 0, sizeof(trBase));
      return;
    }
    if ( cent->prevState.pos.trType == TR_PHYSICS_CLIENT_AUTH )
    {
      CG_EntityWorkers_AcquireWriteLock_Physics(BASE);
      CG_PhysicsObject_LaunchClient((Physics_WorldId)(v7 + 3), cent, localClientNum);
      CG_EntityWorkers_ReleaseWriteLock_Physics(BASE);
      v8 = entityPhysicsObject->physicsInstances[v7 + 3];
    }
    if ( v8 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2253, ASSERT_TYPE_ASSERT, "(entityPhysicsObject->physicsInstances[Physics_GetClientAuthoritativeWorldId( localClientNum )] != 0xFFFFFFFF)", (const char *)&queryFormat, "entityPhysicsObject->physicsInstances[Physics_GetClientAuthoritativeWorldId( localClientNum )] != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
  }
  Profile_Begin(686);
  CG_EntityWorkers_AcquireWriteLock_Physics(BASE);
  CG_PhysicsObject_SetEntityTransforms((Physics_WorldId)(v7 + 3), cent->nextState.number, localClientNum);
  CG_PhysicsObject_SetEntityTransforms((Physics_WorldId)(v7 + 2), cent->nextState.number, localClientNum);
  CG_EntityWorkers_ReleaseWriteLock_Physics(BASE);
  Profile_EndInternal(NULL);
}

/*
==============
CG_Entity_CanUseDObj
==============
*/
char CG_Entity_CanUseDObj(LocalClientNum_t localClientNum, int entNum)
{
  centity_t *Entity; 
  __int16 eType; 

  Entity = CG_GetEntity(localClientNum, entNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1106, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( (Entity->flags & 1) == 0 )
    return 0;
  eType = Entity->nextState.eType;
  if ( eType >= 29 )
    return 0;
  switch ( eType )
  {
    case 5:
    case 7:
    case 8:
    case 9:
    case 16:
    case 20:
    case 22:
    case 25:
    case 26:
    case 27:
    case 28:
      return 0;
    case 6:
      if ( Entity->nextState.un.scriptMoverType == 3 )
        return 0;
      break;
    default:
      return 1;
  }
  return 1;
}

/*
==============
CG_Entity_CheckLightCount
==============
*/
void CG_Entity_CheckLightCount(unsigned int entityNum, const DObj *obj, unsigned int lightCount, const vec3_t *pos, float radius)
{
  unsigned __int64 v7; 
  volatile int *v8; 
  unsigned int v10; 
  const char *name; 
  const XModel *v12; 
  char *fmt; 

  if ( entityNum < 0x2800 )
  {
    v7 = (unsigned __int64)entityNum >> 5;
    v8 = &s_msgBits[v7];
    if ( lightCount > r_linkLightWarningThreshold->current.integer )
    {
      v10 = 1 << (entityNum & 0x1F);
      if ( (v10 & s_msgBits[v7]) == 0 )
      {
        name = "unknown";
        if ( obj )
        {
          if ( obj->numModels )
          {
            v12 = *obj->models;
            if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 121, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
              __debugbreak();
            name = v12->name;
          }
        }
        else
        {
          name = "BSP brushmodel";
        }
        LODWORD(fmt) = lightCount;
        Com_PrintWarning(8, "WARNING: Entity(%d) %s is casting shadow for %d spot lights.\n", entityNum, name, fmt);
        Com_PrintWarning(8, "  Pos=(%3.0f,%3.0f,%3.0f) Radius=%3.0f.\n", pos->v[0], pos->v[1], pos->v[2], radius);
        Com_PrintWarning(8, "  Please call CastSpotShadows(0) on the entity if we don't need spot shadow for this model.\n");
        if ( ((unsigned __int8)v8 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)v8) )
          __debugbreak();
        _InterlockedOr(v8, v10);
      }
    }
  }
}

/*
==============
CG_Entity_ClampPrimaryLightDir
==============
*/
void CG_Entity_ClampPrimaryLightDir(GfxLight *light, const ComPrimaryLight *refLight)
{
  float rotationLimit; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 

  rotationLimit = refLight->rotationLimit;
  v5 = refLight->dir.v[0];
  v6 = light->dir.v[1];
  v7 = refLight->dir.v[1];
  v8 = light->dir.v[0];
  v9 = light->dir.v[2];
  v10 = refLight->dir.v[2];
  v11 = (float)((float)(v8 * v5) + (float)(v7 * v6)) + (float)(v10 * v9);
  if ( v11 < rotationLimit )
  {
    v12 = fsqrt((float)(1.0 - (float)(rotationLimit * rotationLimit)) / (float)(1.0 - (float)(v11 * v11)));
    v13 = (float)((float)((float)(v5 * COERCE_FLOAT(LODWORD(v11) ^ _xmm)) + v8) * v12) + (float)(v5 * rotationLimit);
    light->dir.v[0] = v13;
    v14 = (float)((float)((float)(v7 * COERCE_FLOAT(LODWORD(v11) ^ _xmm)) + v6) * v12) + (float)(rotationLimit * refLight->dir.v[1]);
    light->dir.v[1] = v14;
    v15 = (float)((float)((float)(v10 * COERCE_FLOAT(LODWORD(v11) ^ _xmm)) + v9) * v12) + (float)(rotationLimit * refLight->dir.v[2]);
    v16 = (float)((float)(v14 * v14) + (float)(v13 * v13)) + (float)(v15 * v15);
    light->dir.v[2] = v15;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v16 - 1.0) & _xmm) >= 0.0020000001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 966, ASSERT_TYPE_ASSERT, "( Vec3IsNormalized( light->dir ) )", "(%g, %g, %g) len %g", v13, light->dir.v[1], v15, fsqrt(v16)) )
      __debugbreak();
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)((float)((float)(refLight->dir.v[1] * light->dir.v[1]) + (float)(refLight->dir.v[0] * light->dir.v[0])) + (float)(refLight->dir.v[2] * light->dir.v[2])) - refLight->rotationLimit) & _xmm) > 0.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 967, ASSERT_TYPE_ASSERT, "(I_fabs( Vec3Dot( light->dir, refLight->dir ) - refLight->rotationLimit ) <= 0.001f)", (const char *)&queryFormat, "I_fabs( Vec3Dot( light->dir, refLight->dir ) - refLight->rotationLimit ) <= 0.001f") )
      __debugbreak();
  }
}

/*
==============
CG_Entity_ClampPrimaryLightOrigin
==============
*/
void CG_Entity_ClampPrimaryLightOrigin(GfxLight *light, const ComPrimaryLight *refLight)
{
  float v2; 
  float v3; 
  float translationLimit; 
  float v5; 
  float v6; 
  float v7; 

  v2 = light->origin.v[0] - refLight->origin.v[0];
  v3 = light->origin.v[1] - refLight->origin.v[1];
  translationLimit = refLight->translationLimit;
  v5 = light->origin.v[2] - refLight->origin.v[2];
  v6 = (float)((float)(v2 * v2) + (float)(v3 * v3)) + (float)(v5 * v5);
  if ( v6 >= (float)(translationLimit * translationLimit) )
  {
    v7 = translationLimit / fsqrt(v6);
    light->origin.v[0] = (float)(v7 * v2) + refLight->origin.v[0];
    light->origin.v[1] = (float)(v3 * v7) + refLight->origin.v[1];
    light->origin.v[2] = (float)(v5 * v7) + refLight->origin.v[2];
  }
}

/*
==============
CG_Entity_ClearScriptableBinding
==============
*/
void CG_Entity_ClearScriptableBinding(LocalClientNum_t localClientNum, const int entNum)
{
  if ( ScriptableCl_UpdateReservedScriptableEntityBinding(localClientNum, entNum, NULL) == Started && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1759, ASSERT_TYPE_ASSERT, "((ScriptableCl_UpdateReservedScriptableEntityBinding( localClientNum, entNum, nullScriptable )) != (ScriptableBindResult::Error))", (const char *)&queryFormat, "ScriptableCl_UpdateReservedScriptableEntityBinding( localClientNum, entNum, nullScriptable ) != ScriptableBindResult::Error") )
    __debugbreak();
}

/*
==============
CG_Entity_CreateCloth
==============
*/
void CG_Entity_CreateCloth(const LocalClientNum_t localClientNum, const int entNum)
{
  DObj *ClientDObj; 
  unsigned int v5; 
  __int64 v6; 
  unsigned __int8 numModels; 
  __int64 v8; 
  XModel *v9; 
  unsigned __int8 numClothAssets; 
  __int64 v11; 
  __int64 v12; 
  ClothAsset *v13; 
  char *fmt; 
  unsigned __int8 v15; 
  unsigned int v16; 
  __int64 v19; 
  __int64 v20; 
  ClothAsset *clothAssets[16]; 
  XModel *models[255]; 

  Sys_ProfBeginNamedEvent(0xFFFA8072, "CG_Entity_CreateCloth");
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1618, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)entNum > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1619, ASSERT_TYPE_ASSERT, "(entNum >= 0 && entNum < ( 2048 ))", (const char *)&queryFormat, "entNum >= 0 && entNum < MAX_GENTITIES") )
    __debugbreak();
  if ( !Cloth_IsInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1620, ASSERT_TYPE_ASSERT, "(Cloth_IsInitialized())", (const char *)&queryFormat, "Cloth_IsInitialized()") )
    __debugbreak();
  if ( !Cloth_HasGlobalWorld(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1621, ASSERT_TYPE_ASSERT, "(Cloth_HasGlobalWorld( localClientNum ))", (const char *)&queryFormat, "Cloth_HasGlobalWorld( localClientNum )") )
    __debugbreak();
  if ( CG_Entity_HasCloth(localClientNum, entNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1622, ASSERT_TYPE_ASSERT, "(!CG_Entity_HasCloth( localClientNum, entNum ))", (const char *)&queryFormat, "!CG_Entity_HasCloth( localClientNum, entNum )") )
    __debugbreak();
  ClientDObj = Com_GetClientDObj(entNum, localClientNum);
  if ( !ClientDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1626, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  v5 = 0;
  v16 = 0;
  v6 = 0i64;
  numModels = ClientDObj->numModels;
  v15 = numModels;
  if ( numModels )
  {
    v8 = 0i64;
    v19 = 0i64;
    v20 = numModels;
    do
    {
      v9 = *(XModel **)((char *)ClientDObj->models + v8);
      if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1639, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
        __debugbreak();
      if ( v5 >= 0xFE )
      {
        LODWORD(fmt) = 254;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1442967A0, 311i64, **(_QWORD **)ClientDObj->models, fmt);
      }
      else
      {
        models[v5++] = v9;
        v16 = v5;
      }
      numClothAssets = v9->numClothAssets;
      if ( numClothAssets )
      {
        v11 = 0i64;
        v12 = numClothAssets;
        do
        {
          v13 = v9->clothAssets[v11];
          if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1657, ASSERT_TYPE_ASSERT, "(clothAsset)", (const char *)&queryFormat, "clothAsset") )
            __debugbreak();
          if ( (unsigned int)v6 >= 0x10 )
          {
            LODWORD(fmt) = 16;
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144296800, 312i64, **(_QWORD **)ClientDObj->models, fmt);
          }
          else
          {
            clothAssets[v6] = v13;
            v6 = (unsigned int)(v6 + 1);
          }
          ++v11;
          --v12;
        }
        while ( v12 );
        v5 = v16;
        v8 = v19;
      }
      v8 += 8i64;
      v19 = v8;
      --v20;
    }
    while ( v20 );
    if ( (_DWORD)v6 )
    {
      CG_EntityWorkers_AcquireWriteLock_Physics(BASE);
      CG_Cloth_Entity_Create(localClientNum, entNum, v15, (const XModel **)models, v6, (const ClothAsset **)clothAssets);
      CG_EntityWorkers_ReleaseWriteLock_Physics(BASE);
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_Entity_CreatePhysics
==============
*/
void CG_Entity_CreatePhysics(LocalClientNum_t localClientNum, int entNum, bool tryStartDeactivated)
{
  unsigned int v3; 
  centity_t *Entity; 
  const PhysicsAsset *physicsAsset; 
  XModel *v7; 
  DObj *ClientDObj; 
  const DObj *v9; 
  XModel *Model; 
  cmodel_t *v11; 
  cmodel_t *v12; 
  unsigned __int16 physicsShapeOverrideIdx; 
  const dvar_t *v14; 
  const XModel *v15; 
  int IsXAssetDefaultNonLocking; 
  const char **p_name; 
  int v18; 
  CgHandler *Handler; 
  const TriggerModel *TriggerModel; 
  CG_PhysicsObject *v21; 
  __int64 v22; 
  centity_t *v23; 
  const centity_t *i; 
  CgHandler *v25; 
  Physics_RelationshipSystem PhysicsRelationshipSystemFlag; 
  unsigned __int16 v27; 
  bool v28; 
  unsigned __int16 v29; 
  bool v30; 
  Physics_InstantiationForceType v31; 
  Physics_InstantiationForceType v32; 
  const ScriptableDef *def; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  bool forQueryOnly; 
  __int32 v36; 
  unsigned int v37; 
  __int64 v38; 
  Physics_WorldId v39; 
  unsigned int v40; 
  XModel *v41; 
  __int32 v42; 
  unsigned int v43; 
  __int16 v44; 
  __int16 v45; 
  __int16 v46; 
  __int16 v47; 
  char v48; 
  bool v50; 
  bool IsInstanceStatic; 
  unsigned int scriptableIndex; 
  int contents; 
  Physics_InstantiationForceType forceType; 
  int eType; 
  int ref; 
  Physics_InstantiationForceType v58[2]; 
  vec3_t outOrigin; 
  XModel *baseModel; 
  XModel *detailModel; 
  __int64 v62; 
  Physics_InstantiateShapeOverride shapeOverride; 
  Physics_InstantiateShapeOverride v64; 
  __int64 v65; 
  vec4_t quat; 
  vec3_t angles; 

  v65 = -2i64;
  v3 = entNum;
  Sys_ProfBeginNamedEvent(0xFFFF6347, "CG_Entity_CreatePhysics");
  Entity = CG_GetEntity(localClientNum, v3);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1342, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1343, ASSERT_TYPE_ASSERT, "(CENextValid( entity ))", (const char *)&queryFormat, "CENextValid( entity )") )
    __debugbreak();
  if ( Entity->nextState.eType == ET_PHYSICS_VOLUME )
  {
    Sys_ProfBeginNamedEvent(0xFFFF6347, "CG_Entity_CreatePhysics PhysicsVolume");
    CG_EntityWorkers_AcquireWriteLock_Physics(BASE);
    CG_PhysicsVolume_CreatePhysics(localClientNum, v3);
    CG_EntityWorkers_ReleaseWriteLock_Physics(BASE);
    Sys_ProfEndNamedEvent();
  }
  else
  {
    if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 990, ASSERT_TYPE_ASSERT, "(CENextValid( ent ))", (const char *)&queryFormat, "CENextValid( ent )") )
      __debugbreak();
    baseModel = NULL;
    physicsAsset = NULL;
    forceType = -1;
    *(_QWORD *)v58 = 0i64;
    scriptableIndex = -1;
    v7 = NULL;
    detailModel = NULL;
    v48 = 0;
    contents = 0;
    ClientDObj = Com_GetClientDObj(Entity->nextState.number, localClientNum);
    v9 = ClientDObj;
    eType = 256;
    if ( ClientDObj && ClientDObj->numModels )
    {
      Model = (XModel *)DObjGetModel(ClientDObj, 0);
      baseModel = Model;
      if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1021, ASSERT_TYPE_ASSERT, "((*baseModel))", (const char *)&queryFormat, "(*baseModel)") )
        __debugbreak();
      physicsAsset = Model->physicsAsset;
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 1u) )
      {
        v11 = &cm.mapEnts->cmodels[Entity->nextState.index.brushModel];
        *(_QWORD *)v58 = v11->physicsAsset;
        if ( *(_QWORD *)v58 )
          scriptableIndex = v11->physicsShapeOverrideIdx;
        else
          scriptableIndex = -1;
      }
    }
    else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 1u) )
    {
      v12 = &cm.mapEnts->cmodels[Entity->nextState.index.brushModel];
      physicsShapeOverrideIdx = v12->physicsShapeOverrideIdx;
      if ( physicsShapeOverrideIdx == 0xFFFF || !WorldCollision_GetMapEntsShape(physicsShapeOverrideIdx) )
      {
        if ( Entity->nextState.eType == ET_SCRIPTMOVER && (Entity->nextState.lerp.u.anonymous.data[2] & 0x100) != 0 )
        {
          Handler = CgHandler::getHandler(localClientNum);
          physicsAsset = BG_GetEdgePhysicsProxyAsset(Handler, &Entity->nextState);
          if ( physicsAsset )
          {
            v48 = 1;
            contents = 0x80000000;
          }
        }
      }
      else
      {
        physicsAsset = v12->physicsAsset;
        forceType = v12->physicsShapeOverrideIdx;
        v48 = 1;
        contents = CM_ContentsOfBrushModel(Entity->nextState.index.brushModel);
      }
      v3 = entNum;
    }
    else if ( CG_Entity_IsTriggerVolume(Entity) )
    {
      TriggerModel = CM_GetTriggerModel(Entity->nextState.index.brushModel);
      physicsAsset = TriggerModel->physicsAsset;
      forceType = TriggerModel->physicsShapeOverrideIdx;
      v48 = 1;
      contents = 1078198280;
    }
    if ( Entity->nextState.eType != ET_ITEM )
      goto LABEL_31;
    v14 = DCONST_DVARBOOL_skipItemDetailModelPhysics;
    if ( !DCONST_DVARBOOL_skipItemDetailModelPhysics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skipItemDetailModelPhysics") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( !v14->current.enabled || Entity->prevState.pos.trType != TR_PHYSICS_SERVER_AUTH )
    {
LABEL_31:
      detailModel = NULL;
      if ( v9 && v9->numModels )
      {
        v15 = DObjGetModel(v9, 0);
        if ( v15->detailCollision )
          v7 = (XModel *)v15;
        detailModel = v7;
      }
    }
    if ( physicsAsset )
    {
      IsXAssetDefaultNonLocking = DB_IsXAssetDefaultNonLocking(ASSET_TYPE_PHYSICSASSET, physicsAsset->name);
      if ( v7 && (p_name = &v7->detailCollision->name) != NULL )
        v18 = DB_IsXAssetDefaultNonLocking(ASSET_TYPE_XMODEL_DETAIL_COLLISION, *p_name);
      else
        v18 = 0;
      if ( !IsXAssetDefaultNonLocking && !v18 )
      {
        Sys_ProfBeginNamedEvent(0xFFFF6347, physicsAsset->name);
        IsInstanceStatic = 0;
        CG_EntityWorkers_AcquireWriteLock_Physics(BASE);
        v21 = CG_PhysicsObject_Get(v3, localClientNum);
        if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1404, ASSERT_TYPE_ASSERT, "(physicsObj)", (const char *)&queryFormat, "physicsObj") )
          __debugbreak();
        v22 = 3 * localClientNum;
        v62 = v22;
        if ( v21->physicsInstances[v22 + 2] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1405, ASSERT_TYPE_ASSERT, "(physicsObj->physicsInstances[ Physics_GetClientPredictiveWorldId( localClientNum ) ] == 0xFFFFFFFF)", (const char *)&queryFormat, "physicsObj->physicsInstances[ Physics_GetClientPredictiveWorldId( localClientNum ) ] == PHYSICSINSTANCEID_INVALID") )
          __debugbreak();
        if ( v21->physicsInstances[v22 + 3] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1406, ASSERT_TYPE_ASSERT, "(physicsObj->physicsInstances[ Physics_GetClientAuthoritativeWorldId( localClientNum ) ] == 0xFFFFFFFF)", (const char *)&queryFormat, "physicsObj->physicsInstances[ Physics_GetClientAuthoritativeWorldId( localClientNum ) ] == PHYSICSINSTANCEID_INVALID") )
          __debugbreak();
        if ( v21->physicsInstances[v22 + 4] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1407, ASSERT_TYPE_ASSERT, "(physicsObj->physicsInstances[ Physics_GetClientDetailWorldId( localClientNum ) ] == 0xFFFFFFFF)", (const char *)&queryFormat, "physicsObj->physicsInstances[ Physics_GetClientDetailWorldId( localClientNum ) ] == PHYSICSINSTANCEID_INVALID") )
          __debugbreak();
        CG_GetLocalClientGlobals(localClientNum);
        v21->mapping = (unsigned int)(Entity->prevState.pos.trType - 11) <= 1 || Entity->pose.eType == 14;
        CG_GetPoseOrigin(&Entity->pose, &outOrigin);
        angles = Entity->pose.angles;
        AnglesToQuat(&angles, &quat);
        if ( v3 > 0x7FFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1428, ASSERT_TYPE_ASSERT, "(entNum >= 0 && entNum < 32767)", "%s\n\tEntity Number truncated to a short here - but it doesn't fit", "entNum >= 0 && entNum < 32767") )
          __debugbreak();
        v23 = Entity;
        for ( i = CG_Entity_GetLinkToParent(localClientNum, Entity); i; i = CG_Entity_GetLinkToParent(localClientNum, i) )
          v23 = (centity_t *)i;
        if ( v23 && v23 != Entity )
          eType = (unsigned __int16)v23->nextState.eType;
        v25 = CgHandler::getHandler(localClientNum);
        PhysicsRelationshipSystemFlag = BgHandler::GetPhysicsRelationshipSystemFlag(v25, Physics_RefSystem_CEntities, Entity->nextState.eType, (entityType_s)eType);
        v27 = truncate_cast<unsigned short,int>(entNum);
        v28 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 1u);
        eType = Physics_MakeRef(Physics_RefSystem_CEntities, Physics_RelationshipSystem_None, !v28, v27);
        v29 = truncate_cast<unsigned short,int>(entNum);
        v30 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 1u);
        ref = Physics_MakeRef(Physics_RefSystem_CEntities, PhysicsRelationshipSystemFlag, !v30, v29);
        shapeOverride.customShape = NULL;
        shapeOverride.massProperties = NULL;
        *(_WORD *)&shapeOverride.overrideMass = 0;
        shapeOverride.overrideTensor = 0;
        shapeOverride.shapeOverride = forceType;
        shapeOverride.physicsAssetAddendum = *(const PhysicsAsset **)v58;
        shapeOverride.shapeAddendum = scriptableIndex;
        v64.customShape = NULL;
        v64.physicsAssetAddendum = NULL;
        v64.shapeAddendum = -1;
        v64.massProperties = NULL;
        *(_WORD *)&v64.overrideMass = 0;
        v64.overrideTensor = 0;
        v64.shapeOverride = forceType;
        v31 = Physics_InstantiationForceTypeKeyframedAtMost;
        if ( Entity->nextState.eType == ET_VEHICLE )
          v31 = Physics_InstantiationForceTypeNone;
        forceType = v31;
        v32 = Physics_InstantiationForceTypeNone;
        if ( Entity->prevState.pos.trType != TR_PHYSICS_CLIENT_AUTH )
          v32 = Physics_InstantiationForceTypeKeyframedAtMost;
        v58[0] = v32;
        v21->detailCache.position = outOrigin;
        v21->detailCache.orientationAsQuat = quat;
        v21->detailCache.cached = 0;
        if ( Entity->nextState.eType == ET_SCRIPTMOVER && Entity->nextState.un.scriptMoverType == 2 )
        {
          if ( !ScriptableCl_GetIndexForEntity(localClientNum, Entity, &scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1459, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetIndexForEntity( localClientNum, entity, &scriptableIndex ) == qtrue)", (const char *)&queryFormat, "ScriptableCl_GetIndexForEntity( localClientNum, entity, &scriptableIndex ) == qtrue") )
            __debugbreak();
          def = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def;
          InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
          if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 260, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
            __debugbreak();
          if ( (def->flags & 1) == 0 || (*((_BYTE *)InstanceCommonContext + 60) & 0x40) != 0 )
          {
            if ( Entity->prevState.pos.trType == TR_PHYSICS_CLIENT_AUTH && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1468, ASSERT_TYPE_ASSERT, "(entity->prevState.pos.trType != TR_PHYSICS_CLIENT_AUTH)", (const char *)&queryFormat, "entity->prevState.pos.trType != TR_PHYSICS_CLIENT_AUTH") )
              __debugbreak();
            forceType = Physics_InstantiationForceTypeStatic;
            v58[0] = Physics_InstantiationForceTypeStatic;
          }
        }
        forQueryOnly = CG_Entity_IsTriggerVolume(Entity);
        v50 = forQueryOnly;
        v36 = 3 * localClientNum;
        if ( Entity->prevState.pos.trType == TR_PHYSICS_CLIENT_AUTH )
        {
          v38 = v62;
        }
        else
        {
          scriptableIndex = v36 + 2;
          v37 = Physics_InstantiateAsset((Physics_WorldId)(v36 + 2), baseModel, physicsAsset, ref, &outOrigin, &quat, 1, 0, tryStartDeactivated, &shapeOverride, forceType, Physics_InstantiationFilterTypeClientReplication, forQueryOnly);
          v38 = v62;
          v21->physicsInstances[v62 + 2] = v37;
          if ( v37 != -1 && v48 )
            Physics_SetInstanceContents((Physics_WorldId)scriptableIndex, v37, contents);
        }
        v39 = v36 + 3;
        v21->physicsInstances[v38 + 3] = Physics_InstantiateAsset(v39, baseModel, physicsAsset, eType, &outOrigin, &quat, 1, 0, tryStartDeactivated, &shapeOverride, v58[0], Physics_InstantiationFilterTypeClientSimulation, v50);
        ++physicsAsset->usageCounter.clientEnt;
        v40 = v21->physicsInstances[v38 + 3];
        if ( v40 != -1 )
        {
          IsInstanceStatic = Physics_IsInstanceStatic(v39, v40);
          if ( v48 )
            Physics_SetInstanceContents(v39, v21->physicsInstances[v38 + 3], contents);
        }
        v41 = detailModel;
        v42 = 3 * localClientNum + 4;
        if ( detailModel )
        {
          ++detailModel->physicsUsageCounter.clientEnt;
          v43 = Physics_InstantiateDetailModel((Physics_WorldId)v42, v41, eType, &outOrigin, &quat, 1, tryStartDeactivated, v50, 0);
        }
        else
        {
          v43 = Physics_InstantiateAsset((Physics_WorldId)v42, baseModel, physicsAsset, eType, &outOrigin, &quat, 1, 0, tryStartDeactivated, &v64, Physics_InstantiationForceTypeStatic, Physics_InstantiationFilterTypeNone, v50);
        }
        v21->physicsInstances[v42] = v43;
        if ( v48 && v43 != -1 )
          Physics_SetInstanceContents((Physics_WorldId)v42, v43, contents);
        Entity->pose.physicsId = entNum + 1;
        ref = 3 * localClientNum + 2;
        CG_PhysicsObject_CreatePropagationMapping((Physics_WorldId)ref, v39, v21);
        if ( v9 && v9->numModels )
        {
          CG_PhysicsObject_CreateDynamicBodyToPoseMapping(v39, v21, v9, physicsAsset);
          CG_PhysicsObject_CreateKeyframedBodyToPoseMapping((Physics_WorldId)ref, v21, v9, physicsAsset);
          CG_PhysicsObject_CreateDetailBoneMapping((Physics_WorldId)v42, v21, v9, physicsAsset);
        }
        if ( Entity->prevState.pos.trType == TR_PHYSICS_CLIENT_AUTH )
          CG_PhysicsObject_LaunchClient(v39, Entity, localClientNum);
        v44 = truncate_cast<short,int>(entNum);
        CG_PhysicsObject_MarkPhysicsObjectAsUsed(localClientNum, v44, 1);
        v45 = truncate_cast<short,int>(entNum);
        CG_PhysicsObject_MarkPhysicsObjectAsMovable(localClientNum, v45, !IsInstanceStatic);
        v46 = truncate_cast<short,int>(entNum);
        CG_PhysicsObject_MarkPhysicsObjectAsShown(localClientNum, v46, 1);
        v47 = truncate_cast<short,int>(entNum);
        CG_PhysicsObject_CachePrimaryBodies(localClientNum, v47);
        CG_EntityWorkers_ReleaseWriteLock_Physics(BASE);
        memset(&outOrigin, 0, sizeof(outOrigin));
        Sys_ProfEndNamedEvent();
      }
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_Entity_DebugOverrideGetMutableShaderData
==============
*/
void CG_Entity_DebugOverrideGetMutableShaderData(const DObj *obj, GfxSceneEntityMutableShaderData *entityMutableShaderData)
{
  const dvar_t *v4; 
  unsigned int v5; 
  __m256i *HudOutlineInfo; 
  float v7; 
  const dvar_t *v8; 
  unsigned int v9; 
  __m256i *v10; 
  float v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 
  int integer; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  GfxSceneHudOutlineInfo result; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2172, ASSERT_TYPE_ASSERT, "( ( obj != nullptr ) )", "( obj ) = %p", NULL) )
    __debugbreak();
  v4 = DCONST_DVARINT_cg_drawCustomizationStreaming;
  if ( !DCONST_DVARINT_cg_drawCustomizationStreaming && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawCustomizationStreaming") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.integer == 2 )
  {
    v5 = obj->entnum - 1;
    if ( v5 <= 0x7FE )
    {
      HudOutlineInfo = (__m256i *)CG_CustomizationStreamingMP_DebugGetHudOutlineInfo(&result, v5);
      v7 = *(float *)HudOutlineInfo[1].m256i_i32;
      *(__m256i *)&entityMutableShaderData->hudOutlineInfo.color = *HudOutlineInfo;
      entityMutableShaderData->hudOutlineInfo.characterEVOffset = v7;
    }
  }
  v8 = DCONST_DVARINT_cg_drawWeaponStreaming;
  if ( !DCONST_DVARINT_cg_drawWeaponStreaming && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawWeaponStreaming") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.integer == 2 )
  {
    v9 = obj->entnum - 1;
    if ( v9 <= 0x7FE )
    {
      v10 = (__m256i *)CG_WeaponStreamingMP_DebugGetHudOutlineInfo(&result, v9);
      v11 = *(float *)v10[1].m256i_i32;
      *(__m256i *)&entityMutableShaderData->hudOutlineInfo.color = *v10;
      entityMutableShaderData->hudOutlineInfo.characterEVOffset = v11;
    }
  }
  v12 = DCONST_DVARBOOL_r_hudOutlineDebugTweakForceEnable;
  if ( !DCONST_DVARBOOL_r_hudOutlineDebugTweakForceEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineDebugTweakForceEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( v12->current.enabled )
  {
    entityMutableShaderData->hudOutlineInfo.color = -1;
    v13 = DCONST_DVARINT_r_hudOutlineDebugTweakForceMode;
    if ( !DCONST_DVARINT_r_hudOutlineDebugTweakForceMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineDebugTweakForceMode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    integer = v13->current.integer;
    if ( integer != -1 )
    {
      entityMutableShaderData->hudOutlineInfo.renderMode = truncate_cast<unsigned char,int>(integer);
      v15 = DCONST_DVARINT_r_hudOutlineDebugTweakLineWidth;
      if ( !DCONST_DVARINT_r_hudOutlineDebugTweakLineWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineDebugTweakLineWidth") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      entityMutableShaderData->hudOutlineInfo.lineWidth = v15->current.color[0];
      v16 = DCONST_DVARBOOL_r_hudOutlineDebugTweakDrawOccluded;
      if ( !DCONST_DVARBOOL_r_hudOutlineDebugTweakDrawOccluded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineDebugTweakDrawOccluded") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      entityMutableShaderData->hudOutlineInfo.drawOccludedPixels = v16->current.enabled;
      v17 = DCONST_DVARBOOL_r_hudOutlineDebugTweakDrawNonOccluded;
      if ( !DCONST_DVARBOOL_r_hudOutlineDebugTweakDrawNonOccluded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineDebugTweakDrawNonOccluded") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v17);
      entityMutableShaderData->hudOutlineInfo.drawNonOccludedPixels = v17->current.enabled;
    }
  }
}

/*
==============
CG_Entity_DepthSortWorldTurretWithViewarms
==============
*/
void CG_Entity_DepthSortWorldTurretWithViewarms(cg_t *cgameGlob, const centity_t *cent, unsigned int *renderFlags)
{
  __int64 localClientNum; 
  unsigned int v7; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2898, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  localClientNum = cgameGlob->localClientNum;
  if ( !CgWeaponMap::ms_instance[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  if ( BG_IsUsingTurretViewarms(CgWeaponMap::ms_instance[localClientNum], &cgameGlob->predictedPlayerState) && CG_Turret_GetTurretEnt((const LocalClientNum_t)localClientNum) == cent )
  {
    v7 = *renderFlags | 8;
    *renderFlags = v7;
    if ( !cgameGlob->renderingThirdPerson )
      *renderFlags = v7 | 1;
  }
}

/*
==============
CG_Entity_DestroyCloth
==============
*/
void CG_Entity_DestroyCloth(const LocalClientNum_t localClientNum, const int entNum)
{
  LocalClientNum_t v4; 
  int v5; 

  Sys_ProfBeginNamedEvent(0xFFFA8072, "CG_Entity_DestroyCloth");
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v5 = 2;
    v4 = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 600, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  if ( (unsigned int)entNum > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 601, ASSERT_TYPE_ASSERT, "(entNum >= 0 && entNum < (( 2048 ) + 0))", (const char *)&queryFormat, "entNum >= 0 && entNum < MAX_LOCAL_CENTITIES") )
    __debugbreak();
  if ( Cloth_IsInitialized() && Cloth_HasGlobalWorld(localClientNum) && CG_Entity_HasCloth(localClientNum, entNum) )
  {
    CG_EntityWorkers_AcquireWriteLock_Physics(BASE);
    CG_Cloth_Entity_Destroy(localClientNum, entNum);
    CG_EntityWorkers_ReleaseWriteLock_Physics(BASE);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_Entity_DestroyPhysics
==============
*/
void CG_Entity_DestroyPhysics(const LocalClientNum_t localClientNum, int entNum)
{
  __int64 v2; 
  centity_t *Entity; 
  CG_PhysicsObject *v5; 
  CgVehicleSystem *VehicleSystem; 
  VehicleClient *Client; 
  VehicleClient *v8; 
  int entIndex; 
  __int32 v10; 
  __int64 v11; 
  __int32 v12; 
  __int16 v13; 
  bool v14; 
  Physics_WorldId v15; 
  bool v16; 
  Physics_WorldId v17; 
  unsigned int v18; 
  const XModel *InstanceDetailModel; 
  unsigned int v20; 
  const PhysicsAsset *InstanceAsset; 
  unsigned int v22; 

  v2 = entNum;
  Sys_ProfBeginNamedEvent(0xFFFF6347, "CG_Entity_DestroyPhysics");
  Entity = CG_GetEntity(localClientNum, v2);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 484, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  v5 = CG_PhysicsObject_Get(v2, localClientNum);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 488, ASSERT_TYPE_ASSERT, "(physicsObj)", (const char *)&queryFormat, "physicsObj") )
    __debugbreak();
  if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1942, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( BG_IsCharacterEntity(&Entity->nextState) )
    goto LABEL_18;
  if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1935, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( Entity->nextState.eType == ET_SCRIPTMOVER && Entity->nextState.un.scriptMoverType == 1 || BG_IsCorpseEntity(&Entity->nextState) || Entity->nextState.eType == ET_INVISIBLE )
LABEL_18:
    CG_Weapons_DestroyRiotShieldPhysics(localClientNum, v2);
  if ( Entity->pose.eType == 14 && CgVehicleSystem::PhysicsIsValidVehicle(localClientNum, Entity) )
  {
    VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
    Client = CgVehicleSystem::GetClient(VehicleSystem, Entity);
    v8 = Client;
    entIndex = Client->entIndex;
    if ( entIndex == (_DWORD)v2 )
    {
      VehicleSystem->PhysicsDestroyVehicle(VehicleSystem, &Client->physicsId);
    }
    else if ( (CG_GetEntity(localClientNum, entIndex)->flags & 1) != 0 )
    {
      if ( (Entity->flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 519, ASSERT_TYPE_ASSERT, "(!CENextValid( entity ))", "%s\n\tMultiple entities own a client vehicle when it is trying to be destroyed, this should never happen.", "!CENextValid( entity )") )
        __debugbreak();
    }
    else
    {
      VehicleSystem->PhysicsDestroyVehicle(VehicleSystem, &v8->physicsId);
    }
  }
  v10 = 3 * localClientNum;
  v11 = 3 * localClientNum;
  v12 = 3 * localClientNum + 2;
  if ( v5->physicsInstances[v11 + 2] == -1 && v5->physicsInstances[v10 + 3] == -1 && v5->physicsInstances[v10 + 4] == -1 )
  {
    if ( (unsigned int)(v2 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v2, "signed", v2) )
      __debugbreak();
    if ( CG_PhysicsObject_IsPhysicsObjectUsed(localClientNum, v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 529, ASSERT_TYPE_ASSERT, "(!CG_PhysicsObject_IsPhysicsObjectUsed( localClientNum, truncate_cast<short>(entNum) ))", (const char *)&queryFormat, "!CG_PhysicsObject_IsPhysicsObjectUsed( localClientNum, truncate_cast<short>(entNum) )") )
      __debugbreak();
  }
  else
  {
    CG_EntityWorkers_AcquireWriteLock_Physics(BASE);
    Sys_ProfBeginNamedEvent(0xFFFF6347, "CG_Entity_DestroyPhysics WorkToDo");
    if ( Entity->pose.eType == 26 )
      CG_PhysicsVolume_PreDestroyPhysics(localClientNum, v2);
    v13 = truncate_cast<short,int>(v2);
    CG_PhysicsObject_MarkPhysicsObjectAsUsed(localClientNum, v13, 0);
    v14 = Entity->pose.eType == 26;
    v15 = v10 + 4;
    Entity->pose.physicsId = 0;
    v16 = !v14;
    CG_PhysicsObject_DestroyDetailBoneMapping((Physics_WorldId)(v10 + 4), v5);
    CG_PhysicsObject_DestroyChildData((Physics_WorldId)v12, v5);
    CG_PhysicsObject_DestroyKeyframedBodyToPoseMapping((Physics_WorldId)v12, v5);
    v17 = v10 + 3;
    CG_PhysicsObject_DestroyDynamicBodyToPoseMapping(v17, v5);
    CG_PhysicsObject_DestroyPropagationMapping((Physics_WorldId)v12, v17, v5);
    v18 = v5->physicsInstances[v11 + 4];
    if ( v18 != -1 )
    {
      InstanceDetailModel = Physics_GetInstanceDetailModel(v15, v18);
      if ( InstanceDetailModel )
        --InstanceDetailModel->physicsUsageCounter.clientEnt;
      Physics_DestroyInstance(v15, v5->physicsInstances[v11 + 4], 0);
      v5->physicsInstances[v11 + 4] = -1;
    }
    v20 = v5->physicsInstances[v11 + 3];
    if ( v20 != -1 )
    {
      InstanceAsset = Physics_GetInstanceAsset(v17, v20);
      if ( !InstanceAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 576, ASSERT_TYPE_ASSERT, "(physAsset)", (const char *)&queryFormat, "physAsset") )
        __debugbreak();
      --InstanceAsset->usageCounter.clientEnt;
      Physics_DestroyInstance(v17, v5->physicsInstances[v11 + 3], v16);
      v5->physicsInstances[v11 + 3] = -1;
    }
    v22 = v5->physicsInstances[v11 + 2];
    if ( v22 != -1 )
    {
      Physics_DestroyInstance((Physics_WorldId)v12, v22, 0);
      v5->physicsInstances[v11 + 2] = -1;
    }
    CG_EntityWorkers_ReleaseWriteLock_Physics(BASE);
    Sys_ProfEndNamedEvent();
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_Entity_DestroyStowedCloth
==============
*/
void CG_Entity_DestroyStowedCloth(const LocalClientNum_t localClientNum, const int entNum)
{
  __int64 v4; 
  LocalClientNum_t v5; 
  __int64 v6; 
  int v7; 

  Sys_ProfBeginNamedEvent(0xFFFA8072, "CG_Entity_DestroyStowedCloth");
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v7 = 2;
    v5 = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 663, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  if ( (unsigned int)entNum > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 664, ASSERT_TYPE_ASSERT, "(entNum >= 0 && entNum < (( 2048 ) + 0))", (const char *)&queryFormat, "entNum >= 0 && entNum < MAX_LOCAL_CENTITIES") )
    __debugbreak();
  if ( Cloth_IsInitialized() && Cloth_HasGlobalWorld(localClientNum) )
  {
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v6) = 2;
      LODWORD(v4) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2051, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, v6) )
        __debugbreak();
    }
    if ( (unsigned int)entNum > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2052, ASSERT_TYPE_ASSERT, "(entNum >= 0 && entNum < (( 2048 ) + 0))", (const char *)&queryFormat, "entNum >= 0 && entNum < MAX_LOCAL_CENTITIES") )
      __debugbreak();
    if ( CG_Cloth_Entity_HasStowedClothBinding(localClientNum, entNum) )
    {
      CG_EntityWorkers_AcquireWriteLock_Physics(BASE);
      CG_Cloth_Entity_Destroy(localClientNum, entNum);
      CG_EntityWorkers_ReleaseWriteLock_Physics(BASE);
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_Entity_GetAnimationLodDistance
==============
*/
float CG_Entity_GetAnimationLodDistance(LocalClientNum_t localClientNum, int entnum)
{
  const cpose_t *PoseExtended; 
  const dvar_t *v3; 
  float v4; 
  vec3_t outOrigin; 

  PoseExtended = CG_GetPoseExtended(localClientNum, entnum, 0);
  CG_GetPoseOrigin(PoseExtended, &outOrigin);
  v3 = DVARFLT_cg_animLODScale;
  v4 = fsqrt((float)((float)((float)(rg.correctedLodParms.origin.v[1] - outOrigin.v[1]) * (float)(rg.correctedLodParms.origin.v[1] - outOrigin.v[1])) + (float)((float)(rg.correctedLodParms.origin.v[0] - outOrigin.v[0]) * (float)(rg.correctedLodParms.origin.v[0] - outOrigin.v[0]))) + (float)((float)(rg.correctedLodParms.origin.v[2] - outOrigin.v[2]) * (float)(rg.correctedLodParms.origin.v[2] - outOrigin.v[2])));
  if ( !DVARFLT_cg_animLODScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_animLODScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  return (float)(v4 * rg.correctedLodParms.invFovScale) * v3->current.value;
}

/*
==============
CG_Entity_GetAnimationLodScaledDistance
==============
*/
float CG_Entity_GetAnimationLodScaledDistance(const float distance)
{
  const dvar_t *v1; 

  v1 = DVARFLT_cg_animLODScale;
  if ( !DVARFLT_cg_animLODScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_animLODScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  return (float)(distance * rg.correctedLodParms.invFovScale) * v1->current.value;
}

/*
==============
CG_Entity_GetAnimations
==============
*/
XAnim_s *CG_Entity_GetAnimations(LocalClientNum_t localClientNum, int entIndex, int entType)
{
  centity_t *Entity; 
  CgWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 

  if ( entType != 11 )
    return 0i64;
  Entity = CG_GetEntity(localClientNum, entIndex);
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2968, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  Instance = CgWeaponMap::GetInstance(localClientNum);
  WeaponForEntity = BG_GetWeaponForEntity(Instance, &Entity->nextState);
  if ( !WeaponForEntity->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2971, ASSERT_TYPE_ASSERT, "(entityWeapon.weaponIdx)", (const char *)&queryFormat, "entityWeapon.weaponIdx") )
    __debugbreak();
  CG_GetLocalClientGlobals(localClientNum);
  return BG_Turret_GetAnimsForTurretWeap(WeaponForEntity, 0);
}

/*
==============
CG_Entity_GetBoneOrientation
==============
*/
char CG_Entity_GetBoneOrientation(LocalClientNum_t localClientNum, int dobjHandle, int boneIndex, orientation_t *orient)
{
  __int64 v4; 
  const char *v8; 
  int v9; 
  const char *v10; 
  const DObj *ClientDObj; 
  const DObj *v12; 
  const cpose_t *PoseExtended; 
  __int64 v15; 
  __int64 v16; 

  v4 = dobjHandle;
  if ( (unsigned int)dobjHandle >= 0x9E5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2093, ASSERT_TYPE_ASSERT, "(unsigned)( dobjHandle ) < (unsigned)( ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", "dobjHandle doesn't index CLIENT_DOBJ_HANDLE_MAX\n\t%i not in [0, %i)", dobjHandle, 2533) )
    __debugbreak();
  if ( !orient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2094, ASSERT_TYPE_ASSERT, "(orient)", (const char *)&queryFormat, "orient") )
    __debugbreak();
  if ( (unsigned int)v4 < 0x7FE )
  {
    if ( (CgEntitySystem::GetEntitySystem(localClientNum)->m_entities[v4].flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2100, ASSERT_TYPE_ASSERT, "(CENextValid( CG_GetEntity( localClientNum, dobjHandle ) ))", (const char *)&queryFormat, "CENextValid( CG_GetEntity( localClientNum, dobjHandle ) )") )
      __debugbreak();
    if ( !CG_Entity_CanUseDObj(localClientNum, v4) )
      return 0;
  }
  if ( boneIndex >= 0 )
  {
    ClientDObj = Com_GetClientDObj(v4, localClientNum);
    v12 = ClientDObj;
    if ( ClientDObj )
    {
      if ( DObjVerifyNumBones(ClientDObj) )
      {
        if ( DObjIsValidBoneIndex(v12, boneIndex) )
        {
          PoseExtended = CG_GetPoseExtended(localClientNum, v4, 0);
          if ( !PoseExtended && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2149, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
            __debugbreak();
          if ( CG_DObjGetWorldBoneMatrix(PoseExtended, v12, boneIndex, &orient->axis, &orient->origin) )
          {
            if ( ((LODWORD(orient->origin.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orient->origin.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orient->origin.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2158, ASSERT_TYPE_SANITY, "( !IS_NAN( ( orient->origin )[0] ) && !IS_NAN( ( orient->origin )[1] ) && !IS_NAN( ( orient->origin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( orient->origin )[0] ) && !IS_NAN( ( orient->origin )[1] ) && !IS_NAN( ( orient->origin )[2] )") )
              __debugbreak();
            if ( ((LODWORD(orient->axis.m[0].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orient->axis.m[0].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orient->axis.m[0].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2159, ASSERT_TYPE_SANITY, "( !IS_NAN( ( orient->axis[0] )[0] ) && !IS_NAN( ( orient->axis[0] )[1] ) && !IS_NAN( ( orient->axis[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( orient->axis[0] )[0] ) && !IS_NAN( ( orient->axis[0] )[1] ) && !IS_NAN( ( orient->axis[0] )[2] )") )
              __debugbreak();
            if ( ((LODWORD(orient->axis.m[1].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orient->axis.m[1].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orient->axis.m[1].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2160, ASSERT_TYPE_SANITY, "( !IS_NAN( ( orient->axis[1] )[0] ) && !IS_NAN( ( orient->axis[1] )[1] ) && !IS_NAN( ( orient->axis[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( orient->axis[1] )[0] ) && !IS_NAN( ( orient->axis[1] )[1] ) && !IS_NAN( ( orient->axis[1] )[2] )") )
              __debugbreak();
            if ( (LODWORD(orient->axis.m[2].v[0]) & 0x7F800000) != 2139095040 && (LODWORD(orient->axis.m[2].v[1]) & 0x7F800000) != 2139095040 && (LODWORD(orient->axis.m[2].v[2]) & 0x7F800000) != 2139095040 )
              return 1;
            v8 = "!IS_NAN( ( orient->axis[2] )[0] ) && !IS_NAN( ( orient->axis[2] )[1] ) && !IS_NAN( ( orient->axis[2] )[2] )";
            v9 = 2161;
            v10 = "( !IS_NAN( ( orient->axis[2] )[0] ) && !IS_NAN( ( orient->axis[2] )[1] ) && !IS_NAN( ( orient->axis[2] )[2] ) )";
            goto LABEL_63;
          }
        }
      }
      else
      {
        DObjDumpInfo(v12);
        LODWORD(v15) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2134, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid dobj at entity %i (dobj->numBones does not match models). Copy log above.", v15) )
          __debugbreak();
        LODWORD(v16) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2136, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid dobj at entity %i (dobj->numBones does not match models).", v16) )
          __debugbreak();
      }
    }
    return 0;
  }
  CG_Utils_GetDObjOrientation(localClientNum, v4, &orient->axis, &orient->origin);
  if ( ((LODWORD(orient->axis.m[0].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orient->axis.m[0].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orient->axis.m[0].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2115, ASSERT_TYPE_SANITY, "( !IS_NAN( ( orient->axis[0] )[0] ) && !IS_NAN( ( orient->axis[0] )[1] ) && !IS_NAN( ( orient->axis[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( orient->axis[0] )[0] ) && !IS_NAN( ( orient->axis[0] )[1] ) && !IS_NAN( ( orient->axis[0] )[2] )") )
    __debugbreak();
  if ( ((LODWORD(orient->axis.m[1].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orient->axis.m[1].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orient->axis.m[1].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2116, ASSERT_TYPE_SANITY, "( !IS_NAN( ( orient->axis[1] )[0] ) && !IS_NAN( ( orient->axis[1] )[1] ) && !IS_NAN( ( orient->axis[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( orient->axis[1] )[0] ) && !IS_NAN( ( orient->axis[1] )[1] ) && !IS_NAN( ( orient->axis[1] )[2] )") )
    __debugbreak();
  if ( ((LODWORD(orient->axis.m[2].v[0]) & 0x7F800000) == 2139095040 || (LODWORD(orient->axis.m[2].v[1]) & 0x7F800000) == 2139095040 || (LODWORD(orient->axis.m[2].v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2117, ASSERT_TYPE_SANITY, "( !IS_NAN( ( orient->axis[2] )[0] ) && !IS_NAN( ( orient->axis[2] )[1] ) && !IS_NAN( ( orient->axis[2] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( orient->axis[2] )[0] ) && !IS_NAN( ( orient->axis[2] )[1] ) && !IS_NAN( ( orient->axis[2] )[2] )") )
    __debugbreak();
  if ( (LODWORD(orient->origin.v[0]) & 0x7F800000) != 2139095040 && (LODWORD(orient->origin.v[1]) & 0x7F800000) != 2139095040 && (LODWORD(orient->origin.v[2]) & 0x7F800000) != 2139095040 )
    return 1;
  v8 = "!IS_NAN( ( orient->origin )[0] ) && !IS_NAN( ( orient->origin )[1] ) && !IS_NAN( ( orient->origin )[2] )";
  v9 = 2118;
  v10 = "( !IS_NAN( ( orient->origin )[0] ) && !IS_NAN( ( orient->origin )[1] ) && !IS_NAN( ( orient->origin )[2] ) )";
LABEL_63:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", v9, ASSERT_TYPE_SANITY, v10, (const char *)&queryFormat, v8) )
    __debugbreak();
  return 1;
}

/*
==============
CG_Entity_GetEntityLoopSoundAlias
==============
*/
SndAliasList *CG_Entity_GetEntityLoopSoundAlias(LocalClientNum_t localClientNum, const centity_t *cent)
{
  CgSoundSystem *SoundSystem; 
  const char **v5; 
  cg_t *LocalClientGlobals; 
  CgHandler *Handler; 
  const entityState_t *v8; 
  const entityState_t *v9; 
  CgWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v12; 
  WeaponSFXPackage *sfxPackage; 
  WeaponSFXPackageSounds *sounds; 
  SndAliasList *Alias; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 736, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 || cent->nextState.loopSound <= 0 )
    return 0i64;
  SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
  if ( !SoundSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 749, ASSERT_TYPE_ASSERT, "(soundSystem)", (const char *)&queryFormat, "soundSystem") )
    __debugbreak();
  v5 = (const char **)SoundSystem->GetSoundAliasListByName(SoundSystem, cent->nextState.loopSound);
  if ( cent->nextState.eType == ET_TURRET )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    Handler = CgHandler::getHandler(localClientNum);
    v8 = Handler->PlayerTurretEnt(Handler, &LocalClientGlobals->predictedPlayerState);
    v9 = v8;
    if ( v8 )
    {
      if ( v8->number == cent->nextState.number )
      {
        Instance = CgWeaponMap::GetInstance(localClientNum);
        WeaponForEntity = BG_GetWeaponForEntity(Instance, v9);
        v12 = BG_WeaponDef(WeaponForEntity, 0);
        sfxPackage = v12->sfxPackage;
        if ( sfxPackage )
        {
          sounds = sfxPackage->sounds;
          if ( sounds->fireLoopSoundPlayer.name )
          {
            Alias = SND_FindAlias(sounds->fireLoopSound.name);
            if ( Alias != (SndAliasList *)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 771, ASSERT_TYPE_ASSERT, "(npcFireSoundAlias == soundAlias)", "%s\n\tCG_Entity_GetEntityLoopSoundAlias: turret entity playing unexpected loop sound.  (Playing '%s', expected '%s')", "npcFireSoundAlias == soundAlias", *v5, Alias->aliasName) )
              __debugbreak();
            return SND_FindAlias(v12->sfxPackage->sounds->fireLoopSoundPlayer.name);
          }
        }
      }
    }
  }
  return (SndAliasList *)v5;
}

/*
==============
CG_Entity_GetHudOutlineInfo
==============
*/
GfxSceneHudOutlineInfo *CG_Entity_GetHudOutlineInfo(GfxSceneHudOutlineInfo *result, const cg_t *cgameGlob, centity_t *cent)
{
  HudData v4; 
  int pm_type; 
  bool v8; 
  int v9; 
  int v10; 
  const HudOutlineDef *HudOutlineDefFromPlayerState; 
  CgHandler *Handler; 
  bool drawInStencil; 
  float v14; 
  int hudOutlineStartTime; 
  unsigned int Color; 
  int outlineWidth; 
  vec3_t playerViewOrigin; 
  vec3_t outOrigin; 

  v4.0 = ($D69577AC11C1636F320D0973E2FBC7CA)cent->nextState.hudData;
  pm_type = cgameGlob->predictedPlayerState.pm_type;
  *result = NULL_HUDOUTLINE_INFO_2;
  v8 = CG_Utils_StencilScriptControlled((const LocalClientNum_t)cgameGlob->localClientNum);
  v9 = *(_BYTE *)&v4.0 & 0x3F;
  if ( v9 )
  {
    if ( !cgameGlob->scopeForceEnemyOutlines && pm_type != 5 )
    {
      v10 = cgameGlob->time - cgameGlob->predictedPlayerState.deltaTime;
      if ( cent->currentHudOutlineIndex != v9 )
      {
        cent->hudOutlineStartTime = v10;
        cent->currentHudOutlineIndex = v9;
      }
      HudOutlineDefFromPlayerState = BG_GetHudOutlineDefFromPlayerState(&cgameGlob->predictedPlayerState, v9);
      if ( HudOutlineDefFromPlayerState )
      {
        Handler = CgHandler::getHandler(cgameGlob->localClientNum);
        if ( BG_HudOutline_ShouldDrawOnEnt(HudOutlineDefFromPlayerState, Handler, &cgameGlob->predictedPlayerState, &cent->nextState) )
        {
          drawInStencil = HudOutlineDefFromPlayerState->drawInStencil;
          if ( v8 )
          {
            if ( drawInStencil && CG_Utils_ShouldHighlightInScope((const LocalClientNum_t)cgameGlob->localClientNum) )
              result->scopeStencil = (float)HudOutlineDefFromPlayerState->drawInStencil;
          }
          else if ( !drawInStencil )
          {
            CG_GetPoseOrigin(&cent->pose, &outOrigin);
            v14 = cgameGlob->predictedPlayerState.origin.v[1];
            hudOutlineStartTime = cent->hudOutlineStartTime;
            playerViewOrigin.v[0] = cgameGlob->predictedPlayerState.origin.v[0];
            playerViewOrigin.v[2] = cgameGlob->predictedPlayerState.origin.v[2] + cgameGlob->predictedPlayerState.viewHeightCurrent;
            playerViewOrigin.v[1] = v14;
            Color = BG_HudOutline_GetColor(HudOutlineDefFromPlayerState, hudOutlineStartTime, v10, &playerViewOrigin, &outOrigin);
            outlineWidth = HudOutlineDefFromPlayerState->outlineWidth;
            result->color = Color;
            result->drawOccludedPixels = HudOutlineDefFromPlayerState->drawOccludedPixels;
            result->drawNonOccludedPixels = HudOutlineDefFromPlayerState->drawNonOccludedPixels;
            result->lineWidth = truncate_cast<unsigned char,int>(outlineWidth);
            result->renderMode = HudOutlineDefFromPlayerState->outlineType;
            result->fill = HudOutlineDefFromPlayerState->drawFill;
          }
        }
      }
    }
  }
  else
  {
    cent->currentHudOutlineIndex = 0;
  }
  return result;
}

/*
==============
CG_Entity_GetLinkToParent
==============
*/
centity_t *CG_Entity_GetLinkToParent(LocalClientNum_t localClientNum, const centity_t *cent)
{
  int v4; 
  centity_t *result; 
  int v6; 
  char *fmt; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2812, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  v4 = *(_DWORD *)&cent->nextState.clientLinkInfo & 0x7FF;
  if ( !v4 )
    return 0i64;
  v6 = v4 - 1;
  result = CG_GetEntity(localClientNum, v4 - 1);
  if ( (result->flags & 1) == 0 )
  {
    LODWORD(fmt) = v6;
    Com_PrintWarning(14, "Entity #%i of type %i: parent ent #%i not in snapshot.\n", (unsigned int)cent->nextState.number, (unsigned int)cent->nextState.eType, fmt);
    return 0i64;
  }
  return result;
}

/*
==============
CG_Entity_GetLocalClientNumForDobj
==============
*/
__int64 CG_Entity_GetLocalClientNumForDobj(const int entnum, const DObj *const dobj)
{
  __int64 v2; 
  unsigned int v4; 
  unsigned int v5; 
  __int16 *i; 
  unsigned int v7; 
  const DObj *v8; 
  __int64 v10; 
  __int64 v11; 

  v2 = entnum;
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2833, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  v4 = 0;
  if ( cg_maxLocalClients <= 0 )
    return 0xFFFFFFFFi64;
  v5 = v2;
  for ( i = &clientObjMap[v2]; ; i += 2533 )
  {
    if ( (unsigned int)v2 > 0x9E4 )
    {
      LODWORD(v11) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v11) )
        __debugbreak();
    }
    if ( v4 >= 2 )
    {
      LODWORD(v11) = 2;
      LODWORD(v10) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    if ( v5 >= 0x13CA )
    {
      LODWORD(v11) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v11) )
        __debugbreak();
    }
    v7 = *i;
    if ( *i )
    {
      if ( v7 >= (unsigned int)s_objCount )
      {
        LODWORD(v11) = *i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v11) )
          __debugbreak();
      }
      v8 = (const DObj *)s_objBuf[v7];
    }
    else
    {
      v8 = NULL;
    }
    if ( v8 == dobj )
      break;
    ++v4;
    v5 += 2533;
    if ( (int)v4 >= cg_maxLocalClients )
      return 0xFFFFFFFFi64;
  }
  return v4;
}

/*
==============
CG_Entity_GetMutableShaderData
==============
*/
GfxSceneEntityMutableShaderData *CG_Entity_GetMutableShaderData(GfxSceneEntityMutableShaderData *result, const LocalClientNum_t localClientNum, const DObj *obj, unsigned int genericMaterialData, GfxSceneHudOutlineInfo *hudOutlineInfo, shaderOverride_t *shaderOverride, float eyeSensorPupilSize)
{
  GfxSceneEntityMutableShaderData *v7; 
  __m256i v8; 
  unsigned int v9; 
  unsigned __int8 v12; 
  float characterEVOffset; 
  cg_t *LocalClientGlobals; 
  unsigned __int16 entnum; 
  DObj *ClientDObj; 
  DObjMaterialData *materialData; 
  int v18; 
  __int64 v19; 
  unsigned __int8 v20; 
  unsigned __int8 v21; 

  v7 = result;
  v8 = *(__m256i *)&NULL_SCENE_ENTITY_MUTABLE_SHADER_DATA_0.modelShaderData[7].transitionFactor;
  *(__m256i *)&result->dataCount = *(__m256i *)&NULL_SCENE_ENTITY_MUTABLE_SHADER_DATA_0.dataCount;
  *(__m256i *)&result->modelShaderData[1].transitionFactor = *(__m256i *)&NULL_SCENE_ENTITY_MUTABLE_SHADER_DATA_0.modelShaderData[1].transitionFactor;
  *(__m256i *)&result->modelShaderData[3].transitionFactor = *(__m256i *)&NULL_SCENE_ENTITY_MUTABLE_SHADER_DATA_0.modelShaderData[3].transitionFactor;
  *(__m256i *)&result->modelShaderData[5].transitionFactor = *(__m256i *)&NULL_SCENE_ENTITY_MUTABLE_SHADER_DATA_0.modelShaderData[5].transitionFactor;
  *(__m256i *)&result->modelShaderData[7].transitionFactor = v8;
  v9 = genericMaterialData;
  *(_OWORD *)&result->hudOutlineInfo.temperatureBase = *(_OWORD *)&NULL_SCENE_ENTITY_MUTABLE_SHADER_DATA_0.hudOutlineInfo.temperatureBase;
  result->dataCount = 0;
  v12 = 0;
  characterEVOffset = hudOutlineInfo->characterEVOffset;
  *(__m256i *)&result->hudOutlineInfo.color = *(__m256i *)&hudOutlineInfo->color;
  result->eyeSensorPupilSize = eyeSensorPupilSize;
  result->hudOutlineInfo.characterEVOffset = characterEVOffset;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  entnum = obj->entnum;
  if ( (unsigned __int16)(entnum - 2049) <= 1u || entnum == 2115 )
  {
    ClientDObj = Com_GetClientDObj(LocalClientGlobals->predictedPlayerState.clientNum, localClientNum);
    if ( ClientDObj )
      entnum = ClientDObj->entnum;
  }
  materialData = obj->materialData;
  if ( materialData )
  {
    if ( materialData->modelEntityDataOffset )
    {
      v18 = 0;
      if ( obj->numModels )
      {
        v19 = 0i64;
        do
        {
          v20 = v12;
          if ( obj->materialData->modelEntityDataOffset[v19] > v12 )
            v20 = obj->materialData->modelEntityDataOffset[v19];
          v12 = v20;
          if ( v20 >= 8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2314, ASSERT_TYPE_ASSERT, "(maxIndex < GFX_MAX_MODEL_MUTABLE_SHADER_DATA)", (const char *)&queryFormat, "maxIndex < GFX_MAX_MODEL_MUTABLE_SHADER_DATA") )
            __debugbreak();
          ++v18;
          ++v19;
        }
        while ( v18 < obj->numModels );
        v7 = result;
        v9 = genericMaterialData;
      }
    }
  }
  v21 = 0;
  do
  {
    R_PackEntityShaderData(localClientNum, obj->entnum, entnum, v7, v21, v9, obj->materialData);
    ++v7->dataCount;
    ++v21;
  }
  while ( v21 <= v12 );
  CG_Entity_DebugOverrideGetMutableShaderData(obj, v7);
  return v7;
}

/*
==============
CG_Entity_GetParentAxis
==============
*/
DObjAnimMat *CG_Entity_GetParentAxis(LocalClientNum_t localClientNum, int entnum, const clientLinkInfo_t *li, const centity_t *parent, tmat43_t<vec3_t> *parentAxis)
{
  const DObj *ClientDObj; 
  const DObj *v10; 
  DObjAnimMat *result; 
  int v12; 
  int number; 
  const char *Name; 
  scr_string_t tag_origin; 
  float *v16; 
  refdef_t *v17; 
  char *fmt; 
  __int64 v19; 
  __int64 v20; 

  if ( !parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2563, ASSERT_TYPE_ASSERT, "(parent)", (const char *)&queryFormat, "parent") )
    __debugbreak();
  if ( !CG_Entity_CanUseDObj(localClientNum, parent->nextState.number) || (ClientDObj = Com_GetClientDObj(parent->nextState.number, localClientNum), (v10 = ClientDObj) == NULL) )
  {
    Com_PrintWarning(14, "Ent #%i, couldn't get client DObj for parent ent #%i.\n", (unsigned int)entnum, (unsigned int)parent->nextState.number);
    return 0i64;
  }
  if ( !DObjVerifyNumBones(ClientDObj) )
  {
    DObjDumpInfo(v10);
    LODWORD(v19) = entnum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2578, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Ent #%i, invalid parent dobj (dobj->numBones does not match models). Copy log above.", v19) )
      __debugbreak();
    LODWORD(v20) = entnum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2580, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Ent #%i, Invalid parent dobj (dobj->numBones does not match models) #%i.", v20, parent->nextState.number) )
      __debugbreak();
    Com_PrintWarning(14, "Ent #%i, parent ent dobj has invalid dobj num bones #%i.\n", (unsigned int)entnum, (unsigned int)parent->nextState.number);
    return 0i64;
  }
  v12 = (unsigned __int8)(*(unsigned int *)li >> 11);
  if ( v12 >= DObjNumBones(v10) )
  {
    LODWORD(fmt) = DObjNumBones(v10);
    Com_PrintWarning(14, "Ent #%i, bone index %i is not within the num bones %i.\n", (unsigned int)entnum, (unsigned __int8)(*(unsigned int *)li >> 11), fmt);
    return 0i64;
  }
  if ( CG_DObjGetWorldBoneMatrix(&parent->pose, v10, v12, (tmat33_t<vec3_t> *)parentAxis, &parentAxis->m[3]) )
    return (DObjAnimMat *)1;
  number = parent->nextState.number;
  Name = DObjGetName(v10);
  LODWORD(v19) = number;
  Com_PrintWarning(14, "Couldn't get world matrix for bone %i in dobj for ent #%i ( model %s ), parent of ent #%i.\n", (unsigned __int8)(*(unsigned int *)li >> 11), (unsigned int)entnum, Name, v19);
  tag_origin = scr_const.tag_origin;
  if ( !g_activeRefDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 133, ASSERT_TYPE_ASSERT, "(g_activeRefDef)", (const char *)&queryFormat, "g_activeRefDef") )
    __debugbreak();
  result = CG_DObjGetLocalTagMatrix(&parent->pose, v10, tag_origin);
  v16 = (float *)result;
  if ( result )
  {
    LocalConvertQuatToMat(result, (tmat33_t<vec3_t> *)parentAxis);
    v17 = g_activeRefDef;
    parentAxis->m[3].v[0] = v16[4] + g_activeRefDef->viewOffset.v[0];
    parentAxis->m[3].v[1] = v16[5] + v17->viewOffset.v[1];
    parentAxis->m[3].v[2] = v16[6] + v17->viewOffset.v[2];
    return (DObjAnimMat *)1;
  }
  return result;
}

/*
==============
CG_Entity_GetPlayerViewOriginEntityWorkerHack
==============
*/
void CG_Entity_GetPlayerViewOriginEntityWorkerHack(const playerState_s *ps, vec3_t *outOrigin)
{
  float v2; 

  *(_QWORD *)outOrigin->v = *(_QWORD *)ps->origin.v;
  v2 = ps->origin.v[2];
  outOrigin->v[2] = v2;
  outOrigin->v[2] = v2 + ps->viewHeightCurrent;
}

/*
==============
CG_Entity_GetRootParent
==============
*/
centity_t *CG_Entity_GetRootParent(LocalClientNum_t localClientNum, centity_t *cent)
{
  int v4; 
  int v5; 
  centity_t *Entity; 
  char *fmt; 

  while ( 1 )
  {
    if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2812, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    v4 = *(_DWORD *)&cent->nextState.clientLinkInfo & 0x7FF;
    if ( !v4 )
      break;
    v5 = v4 - 1;
    Entity = CG_GetEntity(localClientNum, v4 - 1);
    if ( (Entity->flags & 1) == 0 )
    {
      LODWORD(fmt) = v5;
      Com_PrintWarning(14, "Entity #%i of type %i: parent ent #%i not in snapshot.\n", (unsigned int)cent->nextState.number, (unsigned int)cent->nextState.eType, fmt);
      return cent;
    }
    cent = Entity;
  }
  return cent;
}

/*
==============
CG_Entity_HasCloth
==============
*/
bool CG_Entity_HasCloth(const LocalClientNum_t localClientNum, const int entNum)
{
  int v6; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2037, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  if ( (unsigned int)entNum > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2038, ASSERT_TYPE_ASSERT, "(entNum >= 0 && entNum < (( 2048 ) + 0))", (const char *)&queryFormat, "entNum >= 0 && entNum < MAX_LOCAL_CENTITIES") )
    __debugbreak();
  return CG_Cloth_Entity_HasClothBinding(localClientNum, entNum);
}

/*
==============
CG_Entity_HasStowedCloth
==============
*/
bool CG_Entity_HasStowedCloth(const LocalClientNum_t localClientNum, const int entNum)
{
  int v6; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2051, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  if ( (unsigned int)entNum > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2052, ASSERT_TYPE_ASSERT, "(entNum >= 0 && entNum < (( 2048 ) + 0))", (const char *)&queryFormat, "entNum >= 0 && entNum < MAX_LOCAL_CENTITIES") )
    __debugbreak();
  return CG_Cloth_Entity_HasStowedClothBinding(localClientNum, entNum);
}

/*
==============
CG_Entity_InterpolateAdvancedTrajectory
==============
*/
void CG_Entity_InterpolateAdvancedTrajectory(LocalClientNum_t localClientNum, const centity_t *cent, DObj *obj, float lerp, vec3_t *outOrigin, vec3_t *outAngles)
{
  cg_t *LocalClientGlobals; 
  int serverTime; 
  int v11; 
  CgTrajectory *v12; 
  int v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v22; 
  float v24; 
  CgTrajectory v26; 
  CgTrajectory v27; 
  CgTrajectory v28; 
  vec3_t outPos; 
  vec3_t v30; 
  vec3_t outAng; 
  vec3_t v32; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  CgTrajectory::CgTrajectory(&v27, localClientNum, cent, &cent->prevState);
  CgTrajectory::CgTrajectory(&v26, localClientNum, cent, &cent->nextState.lerp);
  if ( cent->nextState.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( cent->nextState.eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 899, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_SCRIPTMOVER)", (const char *)&queryFormat, "cent->nextState.eType == ET_SCRIPTMOVER") )
      __debugbreak();
    serverTime = cent->prevState.u.anonymous.data[5];
    v11 = cent->nextState.lerp.u.anonymous.data[5];
    if ( serverTime <= 0 )
    {
      v12 = &v26;
      serverTime = LocalClientGlobals->snap->serverTime;
    }
    else
    {
      v12 = &v27;
    }
    BgTrajectory::EvaluateTrajectories(v12, serverTime, &outPos, &outAng);
    if ( v11 <= 0 )
      v11 = LocalClientGlobals->nextSnap->serverTime;
    v13 = v11;
  }
  else
  {
    CgTrajectory::CgTrajectory(&v28, localClientNum, cent, &cent->prevState);
    BgTrajectory::EvaluateTrajectories(&v28, LocalClientGlobals->snap->serverTime, &outPos, &outAng);
    v13 = LocalClientGlobals->nextSnap->serverTime;
  }
  BgTrajectory::EvaluateTrajectories(&v26, v13, &v30, &v32);
  v14 = (float)(v30.v[1] - outPos.v[1]) * lerp;
  v15 = v30.v[2] - outPos.v[2];
  v16 = v32.v[0];
  outOrigin->v[0] = (float)((float)(v30.v[0] - outPos.v[0]) * lerp) + outPos.v[0];
  v17 = v14 + outPos.v[1];
  v18 = v15 * lerp;
  v19 = v16 - outAng.v[0];
  outOrigin->v[1] = v17;
  outOrigin->v[2] = v18 + outPos.v[2];
  _XMM9 = 0i64;
  __asm { vroundss xmm2, xmm9, xmm1, 1 }
  v22 = (float)(v32.v[1] - outAng.v[1]) * 0.0027777778;
  outAngles->v[0] = (float)((float)((float)((float)(v19 * 0.0027777778) - *(float *)&_XMM2) * 360.0) * lerp) + outAng.v[0];
  __asm { vroundss xmm3, xmm9, xmm2, 1 }
  v24 = (float)(v32.v[2] - outAng.v[2]) * 0.0027777778;
  outAngles->v[1] = (float)((float)((float)(v22 - *(float *)&_XMM3) * 360.0) * lerp) + outAng.v[1];
  __asm { vroundss xmm3, xmm9, xmm2, 1 }
  outAngles->v[2] = (float)((float)((float)(v24 - *(float *)&_XMM3) * 360.0) * lerp) + outAng.v[2];
}

/*
==============
CG_Entity_IsNoDraw
==============
*/
bool CG_Entity_IsNoDraw(const LocalClientNum_t localClientNum, const entityState_t *es, const playerState_s *ps)
{
  cg_t *LocalClientGlobals; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2512, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2513, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !ps )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    ps = &LocalClientGlobals->predictedPlayerState;
    if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2518, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  return (!GameModeFlagContainer<enum PLinkFlagsCommon,enum PLinkFlagsSP,enum PLinkFlagsMP,32>::TestFlagInternal(&ps->linkFlags, GameModeFlagValues::ms_mpValue, 7u) || es->number != ps->linkEnt) && GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&es->lerp.eFlags, ACTIVE, 0xCu);
}

/*
==============
CG_Entity_IsParentOfChild
==============
*/
char CG_Entity_IsParentOfChild(LocalClientNum_t localClientNum, const centity_t *child, const centity_t *parentToSearch)
{
  const centity_t *v4; 
  int v6; 
  int v7; 
  centity_t *Entity; 
  char *fmt; 

  v4 = child;
  if ( !child && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2784, ASSERT_TYPE_ASSERT, "(child)", (const char *)&queryFormat, "child") )
    __debugbreak();
  if ( !parentToSearch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2785, ASSERT_TYPE_ASSERT, "(parentToSearch)", (const char *)&queryFormat, "parentToSearch") )
    __debugbreak();
  while ( 1 )
  {
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2812, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    v6 = *(_DWORD *)&v4->nextState.clientLinkInfo & 0x7FF;
    if ( !v6 )
      break;
    v7 = v6 - 1;
    Entity = CG_GetEntity(localClientNum, v6 - 1);
    if ( (Entity->flags & 1) == 0 )
    {
      LODWORD(fmt) = v7;
      Com_PrintWarning(14, "Entity #%i of type %i: parent ent #%i not in snapshot.\n", (unsigned int)v4->nextState.number, (unsigned int)v4->nextState.eType, fmt);
      return 0;
    }
    if ( Entity == parentToSearch )
      return 1;
    v4 = Entity;
  }
  return 0;
}

/*
==============
CG_Entity_IsTriggerVolume
==============
*/
bool CG_Entity_IsTriggerVolume(const centity_t *cent)
{
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 973, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  return GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0xFu);
}

/*
==============
CG_Entity_MyChangesInitAndLoad
==============
*/

void CG_Entity_MyChangesInitAndLoad(void)
{
  CG_Cloth_Entity_MyChangesInitAndLoad();
}

/*
==============
CG_Entity_MyChangesSaveAndShutdown
==============
*/

void CG_Entity_MyChangesSaveAndShutdown(void)
{
  CG_Cloth_Entity_MyChangesSaveAndShutdown();
}

/*
==============
CG_Entity_PhysicsCheckPostAssetChangeEmpty
==============
*/
void CG_Entity_PhysicsCheckPostAssetChangeEmpty(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  bool *p_forcePhysicsCreate; 
  __int64 v3; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2023, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  p_forcePhysicsCreate = &s_cgPhysicsEntitiesUndergoingAssetChange[v1][0].forcePhysicsCreate;
  v3 = 2048i64;
  do
  {
    if ( *(p_forcePhysicsCreate - 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2026, ASSERT_TYPE_ASSERT, "(!s_cgPhysicsEntitiesUndergoingAssetChange[localClientNum][entityIdx].assetChanged)", "%s\n\tOne asset is marked as having changed during empty test", "!s_cgPhysicsEntitiesUndergoingAssetChange[localClientNum][entityIdx].assetChanged") )
      __debugbreak();
    if ( *p_forcePhysicsCreate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2027, ASSERT_TYPE_ASSERT, "(!s_cgPhysicsEntitiesUndergoingAssetChange[localClientNum][entityIdx].forcePhysicsCreate)", "%s\n\tOne asset is marked as having changed during empty test", "!s_cgPhysicsEntitiesUndergoingAssetChange[localClientNum][entityIdx].forcePhysicsCreate") )
      __debugbreak();
    p_forcePhysicsCreate += 2;
    --v3;
  }
  while ( v3 );
}

/*
==============
CG_Entity_PhysicsClearPostAssetChange
==============
*/
void CG_Entity_PhysicsClearPostAssetChange(const LocalClientNum_t localClientNum)
{
  memset_0(s_cgPhysicsEntitiesUndergoingAssetChange[(__int64)(int)localClientNum], 0, sizeof(CGEntityAssetChangeData[2048]));
}

/*
==============
CG_Entity_PhysicsPostAssetChange
==============
*/
void CG_Entity_PhysicsPostAssetChange(void)
{
  int v0; 
  bool *p_forcePhysicsCreate; 
  bool v2; 
  int v3; 
  bool *v4; 
  __int64 v5; 
  __int64 v6; 

  v0 = 0;
  p_forcePhysicsCreate = &s_cgPhysicsEntitiesUndergoingAssetChange[0][0].forcePhysicsCreate;
  v2 = 1;
  do
  {
    if ( !v2 )
    {
      LODWORD(v6) = 2;
      LODWORD(v5) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v6) )
        __debugbreak();
    }
    if ( v0 < cg_t::ms_allocatedCount )
    {
      v3 = 0;
      v4 = p_forcePhysicsCreate;
      do
      {
        if ( *(v4 - 1) )
        {
          *(v4 - 1) = 0;
          if ( Physics_AreClientWorldsCreated() )
          {
            if ( !*v4 && !CG_Entity_ShouldCreatePhysicsOnInit((LocalClientNum_t)v0, v3) )
              goto LABEL_13;
            CG_Entity_CreatePhysics((LocalClientNum_t)v0, v3, 1);
          }
          *v4 = 0;
        }
LABEL_13:
        ++v3;
        v4 += 2;
      }
      while ( v3 < 2048 );
    }
    ++v0;
    p_forcePhysicsCreate += 4096;
    v2 = (unsigned int)v0 < 2;
  }
  while ( v0 < 2 );
}

/*
==============
CG_Entity_PhysicsPrepareForPhysicsAssetChange
==============
*/
void CG_Entity_PhysicsPrepareForPhysicsAssetChange(PhysicsAsset *assetToBeChanged)
{
  LocalClientNum_t v2; 
  __int64 v3; 
  __int64 v4; 
  int i; 
  int v6; 
  __int64 v7; 
  CG_PhysicsObject *v8; 
  unsigned int v9; 
  PhysicsAsset *InstanceAsset; 
  __int64 v11; 
  __int64 v12; 

  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "CG_Entity_PhysicsPrepareForPhysicsAssetChange");
  v2 = LOCAL_CLIENT_0;
  v3 = 0i64;
  v4 = 16i64;
  for ( i = 3; i < 9; i += 3 )
  {
    if ( (unsigned int)v2 >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v12) = 2;
      LODWORD(v11) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    if ( v2 < cg_t::ms_allocatedCount )
    {
      v6 = 0;
      v7 = 0i64;
      do
      {
        v8 = CG_PhysicsObject_Get(v6, v2);
        if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1881, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
          __debugbreak();
        v9 = *(PhysicsObject_Mapping *)((char *)&v8->mapping + v4);
        if ( v9 != -1 )
        {
          InstanceAsset = (PhysicsAsset *)Physics_GetInstanceAsset((Physics_WorldId)i, v9);
          if ( InstanceAsset )
          {
            if ( InstanceAsset == assetToBeChanged )
            {
              CG_Entity_DestroyPhysics(v2, v6);
              s_cgPhysicsEntitiesUndergoingAssetChange[v3][v7] = (CGEntityAssetChangeData)257;
            }
          }
        }
        ++v6;
        ++v7;
      }
      while ( v6 < 2048 );
    }
    ++v2;
    v4 += 12i64;
    ++v3;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_Entity_PhysicsPrepareForPhysicsAssetChange
==============
*/
void CG_Entity_PhysicsPrepareForPhysicsAssetChange(XModel *xmodel, PhysicsAsset *assetToBeChanged)
{
  LocalClientNum_t v3; 
  __int64 v4; 
  __int64 v5; 
  int i; 
  int v7; 
  __int64 v8; 
  CG_PhysicsObject *v9; 
  unsigned int v10; 
  XModel *InstanceXModel; 
  PhysicsAsset *InstanceAsset; 
  __int64 v13; 
  __int64 v14; 

  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "CG_Entity_PhysicsPrepareForPhysicsAssetChange - model specific");
  v3 = LOCAL_CLIENT_0;
  v4 = 0i64;
  v5 = 16i64;
  for ( i = 3; i < 9; i += 3 )
  {
    if ( (unsigned int)v3 >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v14) = 2;
      LODWORD(v13) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    if ( v3 < cg_t::ms_allocatedCount )
    {
      v7 = 0;
      v8 = 0i64;
      do
      {
        v9 = CG_PhysicsObject_Get(v7, v3);
        if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1934, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
          __debugbreak();
        v10 = *(PhysicsObject_Mapping *)((char *)&v9->mapping + v5);
        if ( v10 != -1 )
        {
          InstanceXModel = (XModel *)Physics_GetInstanceXModel((Physics_WorldId)i, v10);
          if ( InstanceXModel )
          {
            if ( InstanceXModel == xmodel )
            {
              InstanceAsset = (PhysicsAsset *)Physics_GetInstanceAsset((Physics_WorldId)i, v10);
              if ( InstanceAsset )
              {
                if ( InstanceAsset == assetToBeChanged )
                {
                  CG_Entity_DestroyPhysics(v3, v7);
                  s_cgPhysicsEntitiesUndergoingAssetChange[v4][v8] = (CGEntityAssetChangeData)257;
                }
              }
            }
          }
        }
        ++v7;
        ++v8;
      }
      while ( v7 < 2048 );
    }
    ++v3;
    v5 += 12i64;
    ++v4;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_Entity_PhysicsPrepareForXModelChange
==============
*/
void CG_Entity_PhysicsPrepareForXModelChange(XModel *assetToBeChanged)
{
  LocalClientNum_t v2; 
  __int64 v3; 
  __int64 v4; 
  int i; 
  int v6; 
  __int64 v7; 
  CG_PhysicsObject *v8; 
  unsigned int v9; 
  unsigned int v10; 
  XModel *InstanceXModel; 
  XModel *v12; 
  bool v13; 
  bool v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 

  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "CG_Entity_PhysicsPrepareForXModelChange");
  v2 = LOCAL_CLIENT_0;
  v3 = 0i64;
  v17 = 0i64;
  v4 = 20i64;
  for ( i = 4; i < 10; i += 3 )
  {
    if ( (unsigned int)v2 >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v16) = 2;
      LODWORD(v15) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    if ( v2 < cg_t::ms_allocatedCount )
    {
      v6 = 0;
      v7 = 0i64;
      do
      {
        v8 = CG_PhysicsObject_Get(v6, v2);
        if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1785, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
          __debugbreak();
        v9 = *(_DWORD *)((char *)v8 + v4 - 4);
        v10 = *(PhysicsObject_Mapping *)((char *)&v8->mapping + v4);
        if ( v9 != -1 || v10 != -1 )
        {
          InstanceXModel = (XModel *)Physics_GetInstanceXModel((Physics_WorldId)(i - 1), v9);
          v12 = (XModel *)Physics_GetInstanceXModel((Physics_WorldId)i, v10);
          v13 = InstanceXModel && InstanceXModel == assetToBeChanged;
          v14 = v12 && v12 == assetToBeChanged;
          if ( v13 || v14 )
          {
            CG_Entity_DestroyPhysics(v2, v6);
            v3 = v17;
            s_cgPhysicsEntitiesUndergoingAssetChange[0][v17 + v7] = (CGEntityAssetChangeData)257;
          }
          else
          {
            v3 = v17;
          }
        }
        ++v6;
        ++v7;
      }
      while ( v6 < 2048 );
    }
    v3 += 2048i64;
    ++v2;
    v17 = v3;
    v4 += 12i64;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_Entity_PhysicsPrepareForXModelDetailCollisionChange
==============
*/
void CG_Entity_PhysicsPrepareForXModelDetailCollisionChange(XModelDetailCollision *assetToBeChanged)
{
  LocalClientNum_t v2; 
  __int64 v3; 
  __int64 v4; 
  int i; 
  int v6; 
  __int64 v7; 
  CG_PhysicsObject *v8; 
  unsigned int v9; 
  const XModel *InstanceDetailModel; 
  XModelDetailCollision *detailCollision; 
  __int64 v12; 
  __int64 v13; 

  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "CG_Entity_PhysicsPrepareForXModelDetailCollisionChange");
  v2 = LOCAL_CLIENT_0;
  v3 = 0i64;
  v4 = 20i64;
  for ( i = 4; i < 10; i += 3 )
  {
    if ( (unsigned int)v2 >= LOCAL_CLIENT_COUNT )
    {
      LODWORD(v13) = 2;
      LODWORD(v12) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    if ( v2 < cg_t::ms_allocatedCount )
    {
      v6 = 0;
      v7 = 0i64;
      do
      {
        v8 = CG_PhysicsObject_Get(v6, v2);
        if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1835, ASSERT_TYPE_ASSERT, "(physObj)", (const char *)&queryFormat, "physObj") )
          __debugbreak();
        v9 = *(PhysicsObject_Mapping *)((char *)&v8->mapping + v4);
        if ( v9 != -1 )
        {
          InstanceDetailModel = Physics_GetInstanceDetailModel((Physics_WorldId)i, v9);
          if ( InstanceDetailModel )
          {
            detailCollision = InstanceDetailModel->detailCollision;
            if ( detailCollision )
            {
              if ( detailCollision == assetToBeChanged )
              {
                CG_Entity_DestroyPhysics(v2, v6);
                s_cgPhysicsEntitiesUndergoingAssetChange[v3][v7] = (CGEntityAssetChangeData)257;
              }
            }
          }
        }
        ++v6;
        ++v7;
      }
      while ( v6 < 2048 );
    }
    ++v2;
    v4 += 12i64;
    ++v3;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_Entity_PlayEntityLoopSound
==============
*/
void CG_Entity_PlayEntityLoopSound(const LocalClientNum_t localClientNum, const centity_t *cent, const SndAliasList *soundAlias)
{
  CgSoundSystem *SoundSystem; 
  GfxBrushModel *BrushModel; 
  float v8; 
  float v9; 
  vec3_t *p_outOrigin; 
  vec3_t outOrigin; 
  __int64 v12; 
  int v13[4]; 

  v12 = -2i64;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 713, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !soundAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 714, ASSERT_TYPE_ASSERT, "(soundAlias != nullptr)", (const char *)&queryFormat, "soundAlias != nullptr") )
    __debugbreak();
  SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 1u) || BG_IsVehicleEntity(&cent->nextState) )
  {
    p_outOrigin = &outOrigin;
  }
  else
  {
    BrushModel = R_GetBrushModel(cent->nextState.index.brushModel);
    v8 = BrushModel->bounds.midPoint.v[1];
    v9 = BrushModel->bounds.midPoint.v[2];
    *(float *)v13 = BrushModel->bounds.midPoint.v[0] + outOrigin.v[0];
    *(float *)&v13[1] = v8 + outOrigin.v[1];
    *(float *)&v13[2] = v9 + outOrigin.v[2];
    p_outOrigin = (vec3_t *)v13;
  }
  CgSoundSystem::PlaySoundAlias(SoundSystem, cent->nextState.number, p_outOrigin, soundAlias);
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
CG_Entity_PlayTurretAnims
==============
*/
void CG_Entity_PlayTurretAnims(LocalClientNum_t localClientNum, DObj *obj, centity_t *cent, int *turretAnimIndexArray)
{
  __int128 v4; 
  __int128 v5; 
  playerState_s *v6; 
  cg_t *LocalClientGlobals; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  char v14; 
  bool IsRemoteTurretActiveFlags; 
  LocalClientNum_t v16; 
  cg_t *v17; 
  bool v18; 
  playerState_s *v19; 
  Weapon *v20; 
  float v21; 
  float v22; 
  DObj *viewModelDObj; 
  unsigned int v24; 
  int *v25; 
  CgHandler *pmoveHandler; 
  unsigned int v27; 
  double Time; 
  float v29; 
  double Weight; 
  unsigned int v31; 
  cg_t *v32; 
  Weapon *v33; 
  float v34; 
  float v35; 
  DObj *v36; 
  int *v37; 
  CgHandler *Handler; 
  unsigned int v39; 
  double v40; 
  float v41; 
  double v42; 
  cg_t *v43; 
  CgWeaponMap *v44; 
  Weapon *v45; 
  float v46; 
  float v47; 
  DObj *v48; 
  int *v49; 
  CgHandler *v50; 
  unsigned int v51; 
  double v52; 
  float v53; 
  double v54; 
  unsigned int v55; 
  const XAnim_s *Anims; 
  int LengthMsec; 
  int turretFireTime; 
  float v59; 
  int turretLastFireTime; 
  unsigned __int8 v61; 
  double v62; 
  float v63; 
  double v64; 
  bool v65; 
  double GoalWeight; 
  float v67; 
  char v68; 
  unsigned int *v69; 
  unsigned int *v70; 
  __int64 v71; 
  cg_t *v72; 
  Weapon *r_weapon; 
  unsigned int animIndex; 
  LocalClientNum_t v75; 
  BgWeaponMap *weaponMap; 
  int *v77; 
  BgWeaponMap *v78[2]; 
  playerState_s *ps[2]; 
  int v80[4]; 
  __int128 v81; 
  __int128 v82; 

  v6 = (playerState_s *)(int)localClientNum;
  v75 = localClientNum;
  v77 = turretAnimIndexArray;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3028, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( cent->nextState.eType != ET_TURRET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3029, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_TURRET)", (const char *)&queryFormat, "cent->nextState.eType == ET_TURRET") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3030, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  ps[0] = v6;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v6);
  if ( !CgWeaponMap::ms_instance[(_QWORD)v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  weaponMap = CgWeaponMap::ms_instance[(_QWORD)v6];
  r_weapon = (Weapon *)BG_GetWeaponForEntity(weaponMap, &cent->nextState);
  v78[0] = (BgWeaponMap *)BG_WeaponDef(r_weapon, 0);
  if ( !v78[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3039, ASSERT_TYPE_SANITY, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( DObjGetTree(obj) )
  {
    v11 = turretAnimIndexArray[1];
    v12 = turretAnimIndexArray[2];
    v13 = turretAnimIndexArray[3];
    v14 = 1;
    v80[0] = v12;
    v80[1] = v13;
    animIndex = v11;
    v80[2] = v11;
    if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v82 = v4;
    if ( BG_IsTurretActiveFlags(&LocalClientGlobals->predictedPlayerState.eFlags) && LocalClientGlobals->predictedPlayerState.viewlocked_entNum == cent->nextState.number )
    {
      LODWORD(v72) = LocalClientGlobals->time;
      IsRemoteTurretActiveFlags = BG_IsRemoteTurretActiveFlags(&LocalClientGlobals->predictedPlayerState.eFlags);
      if ( LocalClientGlobals->playerWeaponInfo.turretFireEnt != cent->nextState.number )
      {
        LocalClientGlobals->playerWeaponInfo.turretFireTime = LocalClientGlobals->predictedPlayerState.turretLastFireTime;
        LocalClientGlobals->playerWeaponInfo.turretFireEnt = cent->nextState.number;
      }
      if ( !IsRemoteTurretActiveFlags && BG_IsUsingTurretViewarms(weaponMap, &LocalClientGlobals->predictedPlayerState) && v78[0][9].__vftable )
      {
        v81 = v5;
        if ( animIndex == -1 )
        {
          v16 = v75;
          v31 = 0;
          v19 = ps[0];
        }
        else
        {
          v16 = v75;
          *(_OWORD *)ps = _xmm;
          v17 = CG_GetLocalClientGlobals(v75);
          v72 = v17;
          v18 = CgWeaponMap::ms_instance[v75] == NULL;
          v19 = (playerState_s *)(int)v75;
          weaponMap = (BgWeaponMap *)&v17->predictedPlayerState;
          if ( v18 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
              __debugbreak();
            v17 = v72;
          }
          v20 = r_weapon;
          v78[0] = CgWeaponMap::ms_instance[v75];
          v21 = 0.0;
          v22 = 0.0;
          if ( r_weapon->weaponIdx )
          {
            viewModelDObj = v17->m_weaponHand[0].viewModelDObj;
            if ( viewModelDObj )
            {
              if ( viewModelDObj->tree )
              {
                v24 = 0;
                v25 = (int *)ps;
                while ( 1 )
                {
                  pmoveHandler = CgHandler::getHandler(v75);
                  v27 = BG_MapWeaponAnimStateToAnimIndex(v78[0], (const playerState_s *)weaponMap, *v25, 0, v20, 0, WEAPON_HAND_DEFAULT, pmoveHandler);
                  Time = XAnimGetTime(v72->m_weaponHand[0].viewModelDObj->tree, 0, XANIM_SUBTREE_DEFAULT, v27);
                  v29 = *(float *)&Time;
                  Weight = XAnimGetWeight(v72->m_weaponHand[0].viewModelDObj->tree, 0, XANIM_SUBTREE_DEFAULT, v27);
                  if ( *(float *)&Weight != 0.0 )
                    break;
                  v20 = r_weapon;
                  ++v24;
                  ++v25;
                  if ( v24 >= 4 )
                    goto LABEL_40;
                }
                v21 = *(float *)&Weight;
                v22 = v29;
              }
            }
          }
LABEL_40:
          v31 = 0;
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, animIndex, v21, 0.0, 0.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
          XAnimSetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, animIndex, v22);
        }
        if ( v13 != -1 )
        {
          *(_OWORD *)v78 = _xmm;
          v32 = CG_GetLocalClientGlobals(v16);
          v72 = v32;
          v18 = CgWeaponMap::ms_instance[(_QWORD)v19] == NULL;
          ps[0] = &v32->predictedPlayerState;
          if ( v18 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
              __debugbreak();
            v32 = v72;
          }
          v33 = r_weapon;
          weaponMap = CgWeaponMap::ms_instance[(_QWORD)v19];
          v34 = 0.0;
          v35 = 0.0;
          if ( r_weapon->weaponIdx )
          {
            v36 = v32->m_weaponHand[0].viewModelDObj;
            if ( v36 )
            {
              if ( v36->tree )
              {
                v37 = (int *)v78;
                while ( 1 )
                {
                  Handler = CgHandler::getHandler(v16);
                  v39 = BG_MapWeaponAnimStateToAnimIndex(weaponMap, ps[0], *v37, 0, v33, 0, WEAPON_HAND_DEFAULT, Handler);
                  v40 = XAnimGetTime(v72->m_weaponHand[0].viewModelDObj->tree, 0, XANIM_SUBTREE_DEFAULT, v39);
                  v41 = *(float *)&v40;
                  v42 = XAnimGetWeight(v72->m_weaponHand[0].viewModelDObj->tree, 0, XANIM_SUBTREE_DEFAULT, v39);
                  if ( *(float *)&v42 != 0.0 )
                    break;
                  v33 = r_weapon;
                  ++v31;
                  ++v37;
                  if ( v31 >= 4 )
                    goto LABEL_55;
                }
                v34 = *(float *)&v42;
                v35 = v41;
LABEL_55:
                v31 = 0;
              }
            }
          }
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v13, v34, 0.0, 0.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
          XAnimSetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v13, v35);
        }
        if ( v12 != -1 )
        {
          v72 = (cg_t *)0x100000000i64;
          v43 = CG_GetLocalClientGlobals(v16);
          if ( !CgWeaponMap::ms_instance[(_QWORD)v19] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
            __debugbreak();
          v44 = CgWeaponMap::ms_instance[(_QWORD)v19];
          v45 = r_weapon;
          v46 = 0.0;
          v47 = 0.0;
          if ( r_weapon->weaponIdx )
          {
            v48 = v43->m_weaponHand[0].viewModelDObj;
            if ( v48 )
            {
              if ( v48->tree )
              {
                v49 = (int *)&v72;
                while ( 1 )
                {
                  v50 = CgHandler::getHandler(v16);
                  v51 = BG_MapWeaponAnimStateToAnimIndex(v44, &v43->predictedPlayerState, *v49, 0, v45, 0, WEAPON_HAND_DEFAULT, v50);
                  v52 = XAnimGetTime(v43->m_weaponHand[0].viewModelDObj->tree, 0, XANIM_SUBTREE_DEFAULT, v51);
                  v53 = *(float *)&v52;
                  v54 = XAnimGetWeight(v43->m_weaponHand[0].viewModelDObj->tree, 0, XANIM_SUBTREE_DEFAULT, v51);
                  if ( *(float *)&v54 != 0.0 )
                    break;
                  v45 = r_weapon;
                  ++v31;
                  ++v49;
                  if ( v31 >= 2 )
                    goto LABEL_69;
                }
                v46 = *(float *)&v54;
                v47 = v53;
              }
            }
          }
LABEL_69:
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v12, v46, 0.0, 0.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
          XAnimSetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v12, v47);
        }
        v55 = v12;
        goto LABEL_87;
      }
      v55 = v12;
      if ( v13 != -1 )
      {
        Anims = XAnimGetAnims(obj->tree);
        LengthMsec = XAnimGetLengthMsec(Anims, v13);
        turretFireTime = LocalClientGlobals->playerWeaponInfo.turretFireTime;
        v59 = (float)LengthMsec - 10.0;
        turretLastFireTime = LocalClientGlobals->predictedPlayerState.turretLastFireTime;
        if ( turretFireTime != turretLastFireTime && (*((_BYTE *)&cent->nextState.lerp.u.infoVolumeGrapple + 20) & 2) == 0 )
        {
          LocalClientGlobals->playerWeaponInfo.turretFireTime = turretLastFireTime;
          v55 = v13;
          v61 = 1;
          goto LABEL_89;
        }
        if ( (int)v72 - turretFireTime < (int)v59 )
LABEL_87:
          v14 = 0;
      }
    }
    else
    {
      v55 = v12;
      if ( v13 != -1 )
      {
        v62 = XAnimGetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v13);
        v63 = *(float *)&v62;
        v64 = XAnimGetWeight(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v13);
        v65 = *(float *)&v64 != 0.0;
        GoalWeight = XAnimGetGoalWeight(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v12);
        v67 = *(float *)&v78[0][38].__vftable;
        if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0xAu) )
        {
          v55 = v13;
          if ( HIDWORD(v78[0][26].__vftable) == 1 || v65 && v63 < v67 )
            goto LABEL_88;
          v61 = 1;
LABEL_89:
          v68 = 0;
          if ( v55 != -1 )
            v68 = v14;
          if ( v68 )
          {
            v69 = (unsigned int *)v77;
            if ( *v77 > 0 )
            {
              if ( BG_TurretAnim_IsAnimTreeCreatedFromCode(obj->tree) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3216, ASSERT_TYPE_ASSERT, "(!BG_TurretAnim_IsAnimTreeCreatedFromCode( obj->tree ))", (const char *)&queryFormat, "!BG_TurretAnim_IsAnimTreeCreatedFromCode( obj->tree )") )
                __debugbreak();
              XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, *v69, 1.0, 0.0099999998, 1.0, (scr_string_t)0, 0, v61, LINEAR, NULL);
            }
            v70 = (unsigned int *)v80;
            v71 = 3i64;
            do
            {
              if ( v55 != *v70 )
                XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, *v70, 0.0, 0.0099999998, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
              ++v70;
              --v71;
            }
            while ( v71 );
            XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v55, 1.0, 0.0099999998, 1.0, (scr_string_t)0, 0, v61, LINEAR, NULL);
          }
          return;
        }
        if ( v65 && v63 >= v67 )
        {
          v55 = v12;
        }
        else
        {
          v55 = v12;
          if ( *(float *)&GoalWeight == 1.0 )
            goto LABEL_87;
        }
      }
    }
LABEL_88:
    v61 = 0;
    goto LABEL_89;
  }
}

/*
==============
CG_Entity_PredictiveSkinCEntity
==============
*/
void CG_Entity_PredictiveSkinCEntity(GfxSceneEntity *sceneEnt, int forceUpdateBounds)
{
  const cpose_t *pose; 
  ClActiveClient *Client; 

  if ( !sceneEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2534, ASSERT_TYPE_ASSERT, "(sceneEnt)", (const char *)&queryFormat, "sceneEnt") )
    __debugbreak();
  pose = sceneEnt->info.pose;
  R_MDAO_ResetEntityOcclusionState(pose);
  if ( forceUpdateBounds || pose->cullIn )
  {
    pose->cullIn = 0;
    if ( forceUpdateBounds || (Client = ClActiveClient::GetClient(LOCAL_CLIENT_0), Client->GetFreeMoveType(Client) == FREEMOVE_NONE) )
      R_UpdateXModelBoundsDelayed(sceneEnt);
  }
}

/*
==============
CG_Entity_ProcessQueuedViewModelDObj
==============
*/
void CG_Entity_ProcessQueuedViewModelDObj(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  PlayerHandIndex i; 
  __int64 v4; 
  const cpose_t *ViewModelPoseForHand; 
  __m256i v6; 
  const DObj *viewModelDObj; 
  float v8; 
  __m256i v9; 
  unsigned int v10; 
  int v11; 
  GfxSceneHudOutlineInfo v12; 
  shaderOverride_t v13; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2478, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  for ( i = WEAPON_HAND_DEFAULT; (unsigned int)i < NUM_WEAPON_HANDS; ++i )
  {
    v4 = (__int64)&LocalClientGlobals->viewModelQueuedRenderInfo.m_handInfo[i];
    if ( *(_BYTE *)(v4 + 100) )
    {
      if ( !LocalClientGlobals->m_weaponHand[i].viewModelDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2489, ASSERT_TYPE_ASSERT, "(weapHand->viewModelDObj)", (const char *)&queryFormat, "weapHand->viewModelDObj") )
        __debugbreak();
      ViewModelPoseForHand = CG_GetViewModelPoseForHand(localClientNum, i);
      v6 = *(__m256i *)v4;
      viewModelDObj = LocalClientGlobals->m_weaponHand[i].viewModelDObj;
      v11 = *(_DWORD *)(v4 + 96);
      v10 = *(_DWORD *)(v4 + 92);
      v12.characterEVOffset = *(float *)(v4 + 32);
      v8 = *(float *)(v4 + 68);
      *(__m256i *)&v12.color = v6;
      v9 = *(__m256i *)(v4 + 36);
      v13.atlasTime = v8;
      *(__m256i *)&v13.scrollRateX = v9;
      CG_Entity_AddViewmodelDObjToScene_Internal(localClientNum, viewModelDObj, ViewModelPoseForHand, (i != WEAPON_HAND_DEFAULT) + 2048, *(_DWORD *)(v4 + 88), &v13, &v12, (const vec3_t *)(v4 + 72), *(float *)(v4 + 84), v10, v11);
    }
  }
}

/*
==============
CG_Entity_ProcessRagdollAnimNotify
==============
*/
void CG_Entity_ProcessRagdollAnimNotify(LocalClientNum_t localClientNum, int entNum, const XAnimNotify *animNotify)
{
  centity_t *Entity; 
  cg_t *LocalClientGlobals; 
  scr_string_t noteName; 
  const char *name; 
  const char *v10; 
  scr_string_t v11; 

  Entity = CG_GetEntity(localClientNum, entNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3493, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( CG_Pose_IsRagdoll(&Entity->pose) )
    goto LABEL_9;
  if ( Entity == (centity_t *)-416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2263, ASSERT_TYPE_ASSERT, "(trajectory)", (const char *)&queryFormat, "trajectory") )
    __debugbreak();
  if ( (unsigned int)(Entity->nextState.lerp.pos.trType - 23) <= 5 )
  {
LABEL_9:
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals->inKillCam || CG_Pose_IsKillcamRagdoll(&Entity->pose) )
    {
      if ( (LocalClientGlobals->inKillCam == 1) != CG_Pose_IsKillcamRagdoll(&Entity->pose) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3509, ASSERT_TYPE_ASSERT, "((cgameGlob->inKillCam == qtrue) == CG_Pose_IsKillcamRagdoll( &cent->pose ))", (const char *)&queryFormat, "(cgameGlob->inKillCam == qtrue) == CG_Pose_IsKillcamRagdoll( &cent->pose )") )
        __debugbreak();
      if ( ragdoll_printAnimNotifies->current.enabled )
      {
        noteName = animNotify->noteName;
        if ( noteName == scr_const.start_ragdoll || noteName == scr_const.stop_ragdoll_anim || noteName == scr_const.disable_ragdoll_anim_root )
        {
          name = animNotify->animParts->name;
          v10 = SL_ConvertToStringSafe(noteName);
          Com_PrintWarning(19, "entity %d: %s sent from anim '%s'\n", (unsigned int)entNum, v10, name);
        }
      }
      v11 = animNotify->noteName;
      if ( v11 == scr_const.stop_ragdoll_anim )
      {
        CG_Pose_StopAnimatedRagdoll(&Entity->pose);
      }
      else if ( v11 == scr_const.disable_ragdoll_anim_root )
      {
        CG_Pose_DisableAnimatedRagdollRootControl(&Entity->pose);
      }
    }
  }
}

/*
==============
CG_Entity_ResetSkeleton
==============
*/
void CG_Entity_ResetSkeleton(LocalClientNum_t localClientNum, int entNum)
{
  const DObj *ClientDObj; 
  const DObj *v3; 

  ClientDObj = Com_GetClientDObj(entNum, localClientNum);
  v3 = ClientDObj;
  if ( ClientDObj )
  {
    DObjLock(ClientDObj);
    DObjSkelReset(v3);
    DObjUnlock(v3);
  }
}

/*
==============
CG_Entity_SetFrameInterpolation
==============
*/
void CG_Entity_SetFrameInterpolation(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  int serverTime; 
  int v3; 
  float v4; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 861, ASSERT_TYPE_ASSERT, "(cgameGlob->snap)", (const char *)&queryFormat, "cgameGlob->snap") )
    __debugbreak();
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 862, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  serverTime = LocalClientGlobals->snap->serverTime;
  v3 = LocalClientGlobals->nextSnap->serverTime - serverTime;
  if ( !v3 || (v4 = (float)(LocalClientGlobals->time - serverTime) / (float)v3, LocalClientGlobals->frameInterpolation = v4, v4 < 0.0) )
    LocalClientGlobals->frameInterpolation = 0.0;
}

/*
==============
CG_Entity_SetUpdateFlagEnabled
==============
*/
void CG_Entity_SetUpdateFlagEnabled(bool contextKey, centity_t *cent)
{
  int flags; 
  int v3; 
  int v4; 
  unsigned int v5; 

  flags = cent->flags;
  v3 = flags | 0x80;
  v4 = flags | 0x180;
  v5 = v3 & 0xFFFFFEFF;
  if ( !contextKey )
    v4 = v5;
  cent->flags = v4;
}

/*
==============
CG_Entity_ShouldCreateClothOnInit
==============
*/
bool CG_Entity_ShouldCreateClothOnInit(const LocalClientNum_t localClientNum, const int entNum)
{
  centity_t *Entity; 
  DObj *ClientDObj; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1542, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( (unsigned int)entNum > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1551, ASSERT_TYPE_ASSERT, "(entNum >= 0 && entNum < (( 2048 ) + 0))", (const char *)&queryFormat, "entNum >= 0 && entNum < MAX_LOCAL_CENTITIES") )
    __debugbreak();
  if ( !Cloth_IsInitialized() || !Cloth_HasGlobalWorld(localClientNum) || CG_Entity_HasCloth(localClientNum, entNum) )
    return 0;
  Entity = CG_GetEntity(localClientNum, entNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1574, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  return (Entity->flags & 1) != 0 && Entity->nextState.eType < ET_EVENTS && (ClientDObj = Com_GetClientDObj(entNum, localClientNum)) != NULL && ClientDObj->tree;
}

/*
==============
CG_Entity_ShouldCreatePhysicsOnInit
==============
*/
bool CG_Entity_ShouldCreatePhysicsOnInit(LocalClientNum_t localClientNum, int entNum)
{
  centity_t *Entity; 
  CG_PhysicsObject *v5; 
  bool result; 
  const XModel *Model; 
  const PhysicsAsset *physicsAsset; 
  DObj *ClientDObj; 
  const DObj *v10; 
  cmodel_t *v11; 
  unsigned __int16 physicsShapeOverrideIdx; 
  unsigned int brushModel; 
  CgHandler *Handler; 
  const TriggerModel *TriggerModel; 
  const dvar_t *v16; 
  unsigned int scriptableIndex; 

  if ( !Physics_AreClientWorldsCreated() )
    return 0;
  Entity = CG_GetEntity(localClientNum, entNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1165, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( (Entity->flags & 1) == 0 || Entity->nextState.eType >= ET_EVENTS )
    return 0;
  v5 = CG_PhysicsObject_Get(entNum, localClientNum);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1177, ASSERT_TYPE_ASSERT, "(physicsObj)", (const char *)&queryFormat, "physicsObj") )
    __debugbreak();
  if ( v5->physicsInstances[3 * localClientNum + 2] != -1 || v5->physicsInstances[3 * localClientNum + 3] != -1 )
    return 0;
  switch ( Entity->nextState.eType )
  {
    case ET_PLAYER:
    case ET_PLAYER_CORPSE:
    case ET_SOUND:
    case ET_FX:
    case ET_LOOP_FX:
    case ET_VEHICLE_SPAWNER:
    case ET_AGENT:
    case ET_AGENT_CORPSE:
    case ET_ACTOR:
    case ET_ACTOR_CORPSE:
      return 0;
    case ET_SCRIPTMOVER:
      switch ( Entity->nextState.un.scriptMoverType )
      {
        case 0:
        case 0xB:
          goto $LN10_144;
        case 2:
          if ( !ScriptableCl_GetIndexForEntity(localClientNum, Entity, &scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1221, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetIndexForEntity( localClientNum, entity, &scriptableIndex ) == qtrue)", (const char *)&queryFormat, "ScriptableCl_GetIndexForEntity( localClientNum, entity, &scriptableIndex ) == qtrue") )
            __debugbreak();
          if ( ScriptableCl_HasCollisionSupport(localClientNum, scriptableIndex) )
            goto $LN10_144;
          return 0;
        default:
          return 0;
      }
    case ET_PHYSICS_VOLUME:
      return CG_PhysicsVolume_IsEnabled(Entity);
    default:
$LN10_144:
      if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 990, ASSERT_TYPE_ASSERT, "(CENextValid( ent ))", (const char *)&queryFormat, "CENextValid( ent )") )
        __debugbreak();
      Model = NULL;
      physicsAsset = NULL;
      ClientDObj = Com_GetClientDObj(Entity->nextState.number, localClientNum);
      v10 = ClientDObj;
      if ( ClientDObj && ClientDObj->numModels )
      {
        Model = DObjGetModel(ClientDObj, 0);
        if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1021, ASSERT_TYPE_ASSERT, "((*baseModel))", (const char *)&queryFormat, "(*baseModel)") )
          __debugbreak();
        physicsAsset = Model->physicsAsset;
        GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 1u);
      }
      else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 1u) )
      {
        v11 = &cm.mapEnts->cmodels[Entity->nextState.index.brushModel];
        physicsShapeOverrideIdx = v11->physicsShapeOverrideIdx;
        if ( physicsShapeOverrideIdx == 0xFFFF || !WorldCollision_GetMapEntsShape(physicsShapeOverrideIdx) )
        {
          if ( Entity->nextState.eType == ET_SCRIPTMOVER && (Entity->nextState.lerp.u.anonymous.data[2] & 0x100) != 0 )
          {
            Handler = CgHandler::getHandler(localClientNum);
            physicsAsset = BG_GetEdgePhysicsProxyAsset(Handler, &Entity->nextState);
            if ( physicsAsset )
              scriptableIndex = 0x80000000;
          }
        }
        else
        {
          brushModel = Entity->nextState.index.brushModel;
          physicsAsset = v11->physicsAsset;
          LOBYTE(scriptableIndex) = 1;
          CM_ContentsOfBrushModel(brushModel);
        }
      }
      else if ( CG_Entity_IsTriggerVolume(Entity) )
      {
        TriggerModel = CM_GetTriggerModel(Entity->nextState.index.brushModel);
        scriptableIndex = 1078198280;
        physicsAsset = TriggerModel->physicsAsset;
      }
      if ( Entity->nextState.eType != ET_ITEM )
        goto LABEL_63;
      v16 = DCONST_DVARBOOL_skipItemDetailModelPhysics;
      if ( !DCONST_DVARBOOL_skipItemDetailModelPhysics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skipItemDetailModelPhysics") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      if ( !v16->current.enabled || Entity->prevState.pos.trType != TR_PHYSICS_SERVER_AUTH )
      {
LABEL_63:
        if ( v10 && v10->numModels )
          DObjGetModel(v10, 0);
      }
      if ( physicsAsset && Physics_IsAssetRagdoll(physicsAsset) )
        return 0;
      if ( !Model )
        goto LABEL_59;
      if ( (Model->flags & 0x8000) == 0 )
        goto LABEL_55;
      if ( !Com_GameMode_SupportsFeature(WEAPON_PRE_FIRING|0x80) )
        return 0;
      if ( DB_IsXAssetTransient(ASSET_TYPE_XMODEL, Model->name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1290, ASSERT_TYPE_ASSERT, "( ( !DB_IsXAssetTransient( ASSET_TYPE_XMODEL, baseModel->name ) ) )", "( baseModel->name ) = %s", Model->name) )
        __debugbreak();
LABEL_55:
      if ( physicsAsset && DB_IsXAssetTransient(ASSET_TYPE_PHYSICSASSET, physicsAsset->name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1301, ASSERT_TYPE_ASSERT, "( ( !DB_IsXAssetTransient( ASSET_TYPE_PHYSICSASSET, physAsset->name ) ) )", "( physAsset->name ) = %s", physicsAsset->name) )
        __debugbreak();
LABEL_59:
      result = 1;
      break;
  }
  return result;
}

/*
==============
CG_Entity_StowClothForDObjRebuild
==============
*/
void CG_Entity_StowClothForDObjRebuild(const LocalClientNum_t localClientNum, const int entNum)
{
  LocalClientNum_t v4; 
  int v5; 

  Sys_ProfBeginNamedEvent(0xFFFA8072, "CG_Entity_StowClothForDObjRebuild");
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v5 = 2;
    v4 = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 636, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  if ( (unsigned int)entNum > 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 637, ASSERT_TYPE_ASSERT, "(entNum >= 0 && entNum < (( 2048 ) + 0))", (const char *)&queryFormat, "entNum >= 0 && entNum < MAX_LOCAL_CENTITIES") )
    __debugbreak();
  if ( Cloth_IsInitialized() && Cloth_HasGlobalWorld(localClientNum) && CG_Entity_HasCloth(localClientNum, entNum) )
  {
    CG_EntityWorkers_AcquireWriteLock_Physics(BASE);
    CG_Cloth_Entity_StowForDObjRebuild(localClientNum, entNum);
    CG_EntityWorkers_ReleaseWriteLock_Physics(BASE);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_Entity_TurretPreControllers
==============
*/
void CG_Entity_TurretPreControllers(LocalClientNum_t localClientNum, DObj *obj, centity_t *cent)
{
  __int128 v3; 
  __int64 v6; 
  cg_t *LocalClientGlobals; 
  entityState_t *p_nextState; 
  const WeaponDef *v9; 
  bool v10; 
  BgWeaponMap *v11; 
  bool IsRemoteTurretActiveFlags; 
  bool v13; 
  float v14; 
  float v17; 
  double v20; 
  double v21; 
  unsigned __int8 tagIdx_barrel; 
  bool v23; 
  const char *Name; 
  Weapon *v25; 
  const WeaponDef *v26; 
  const char **p_name; 
  const char **v28; 
  const char **v29; 
  BgWeaponMap *weaponMap; 
  Weapon *entityWeapon; 
  int turretAnimIndexArrayOut[8]; 
  char output[1024]; 
  __int128 v34; 

  v6 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3368, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( cent->nextState.eType != ET_TURRET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3369, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_TURRET)", (const char *)&queryFormat, "cent->nextState.eType == ET_TURRET") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3370, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v6);
  p_nextState = &cent->nextState;
  if ( !CgWeaponMap::ms_instance[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  weaponMap = CgWeaponMap::ms_instance[v6];
  entityWeapon = (Weapon *)BG_GetWeaponForEntity(weaponMap, &cent->nextState);
  v9 = BG_WeaponDef(entityWeapon, 0);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3381, ASSERT_TYPE_SANITY, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3384, ASSERT_TYPE_SANITY, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2088, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  v10 = BG_IsTurretActiveFlags(&cent->nextState.lerp.eFlags) && LocalClientGlobals->predictedPlayerState.viewlocked_entNum == p_nextState->number;
  v11 = weaponMap;
  cent->pose.turret.playerUsing = v10;
  cent->pose.turret.useOnVehicleAngles = 0;
  cent->pose.turret.visualPitchLimitTop = v9->visualPitchLimitTop;
  cent->pose.turret.visualPitchLimitBottom = v9->visualPitchLimitBottom;
  cent->pose.turret.visualYawLimitLeft = v9->dlcFloat[0];
  cent->pose.turret.visualYawLimitRight = v9->dlcFloat[1];
  cent->pose.turret.playerViewArms = BG_IsUsingTurretViewarms(v11, &LocalClientGlobals->predictedPlayerState);
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3395, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
    __debugbreak();
  if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2102, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  IsRemoteTurretActiveFlags = BG_IsRemoteTurretActiveFlags(&cent->nextState.lerp.eFlags);
  v13 = !cent->pose.turret.playerUsing;
  cent->pose.turret.remoteTurret = IsRemoteTurretActiveFlags;
  if ( v13 )
  {
    v14 = cent->prevState.u.turret.gunAngles.v[0];
    v34 = v3;
    _XMM7 = 0i64;
    __asm { vroundss xmm2, xmm7, xmm1, 1 }
    cent->pose.actor.pitch = (float)((float)((float)((float)((float)(cent->nextState.lerp.u.turret.gunAngles.v[0] - v14) * 0.0027777778) - *(float *)&_XMM2) * 360.0) * LocalClientGlobals->frameInterpolation) + v14;
    if ( !v9->keepOrientationOnExit || cent->prevState.u.anonymous.data[6] == cent->nextState.lerp.u.anonymous.data[6] )
    {
      __asm { vroundss xmm3, xmm7, xmm2, 1 }
      v17 = (float)((float)((float)((float)((float)(cent->nextState.lerp.u.turret.gunAngles.v[1] - cent->prevState.u.turret.gunAngles.v[1]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * LocalClientGlobals->frameInterpolation) + cent->prevState.u.turret.gunAngles.v[1];
    }
    else
    {
      v17 = cent->nextState.lerp.u.turret.gunAngles.v[1];
    }
    cent->pose.actor.roll = v17;
    __asm { vroundss xmm3, xmm7, xmm2, 1 }
    cent->pose.turret.barrelPitch = (float)((float)((float)((float)((float)(cent->nextState.lerp.u.turret.gunAngles.v[2] - cent->prevState.u.turret.gunAngles.v[2]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * LocalClientGlobals->frameInterpolation) + cent->prevState.u.turret.gunAngles.v[2];
    if ( v9->turretBarrelSpinEnabled )
    {
      v20 = BG_Turret_ComputeBarrelSpinRate(v9, (const LerpEntityStateTurret *)&cent->nextState.lerp.u, LocalClientGlobals->time);
      v21 = AngleNormalize360((float)((float)((float)((float)LocalClientGlobals->frametime * *(float *)&v20) * 0.36000001) * v9->turretBarrelSpinSpeed) + cent->pose.turret.barrelRoll);
      cent->pose.turret.barrelRoll = *(float *)&v21;
    }
  }
  else
  {
    cent->pose.player.control = (clientControllers_t *)&LocalClientGlobals->predictedPlayerState.viewangles;
    CG_Entity_AdjustVehicleTurretAngles((const LocalClientNum_t)v6, cent);
  }
  DObjGetBoneIndexInternal_48(obj, scr_const.tag_aim, &cent->pose.turret.tagIdx_aim, (int *)&weaponMap);
  DObjGetBoneIndexInternal_48(obj, scr_const.tag_aim_animated, &cent->pose.turret.tagIdx_aim_animated, (int *)&weaponMap);
  DObjGetBoneIndexInternal_48(obj, scr_const.tag_aim_pivot, &cent->pose.turret.tagIdx_aim_pivot, (int *)&weaponMap);
  DObjGetBoneIndexInternal_48(obj, scr_const.tag_flash, &cent->pose.turret.tagIdx_flash, (int *)&weaponMap);
  tagIdx_barrel = cent->pose.turret.tagIdx_barrel;
  v23 = DObjGetBoneIndexInternal_48(obj, scr_const.tag_barrel, &cent->pose.turret.tagIdx_barrel, (int *)&weaponMap) == 1;
  if ( tagIdx_barrel == 0xFE && !v23 && v9->turretBarrelSpinEnabled )
  {
    Name = DObjGetName(obj);
    Com_PrintWarning(17, "WARNING: Missing 'TAG_BARREL' for '%s' with barrel spin enabled.\n", Name);
  }
  v25 = entityWeapon;
  BG_TurretAnim_GetAnimIndices(obj, entityWeapon, turretAnimIndexArrayOut);
  v26 = BG_WeaponDef(v25, 0);
  BG_GetWeaponName(v25, output, 0x400u);
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_IsTurretActiveFlags(&LocalClientGlobals->predictedPlayerState.eFlags) && LocalClientGlobals->predictedPlayerState.viewlocked_entNum == p_nextState->number )
  {
    if ( turretAnimIndexArrayOut[1] == -1 )
    {
      p_name = &v26->turretRaiseAnim->name;
      if ( p_name )
        Com_PrintWarning(17, "WARNING: Turret '%s' has gdt field turretRaiseAnim '%s', but anim missing from csv or animtree.\n", output, *p_name);
    }
    if ( turretAnimIndexArrayOut[2] == -1 )
    {
      v28 = &v26->turretIdleAnim->name;
      if ( v28 )
        Com_PrintWarning(17, "WARNING: Turret '%s' has gdt field turretIdleAnim '%s', but anim missing from csv or animtree.\n", output, *v28);
    }
    if ( turretAnimIndexArrayOut[3] == -1 )
    {
      v29 = &v26->turretFireAnim->name;
      if ( v29 )
        Com_PrintWarning(17, "WARNING: Turret '%s' has gdt field turretFireAnim '%s', but anim missing from csv or animtree.\n", output, *v29);
    }
  }
  CG_Entity_PlayTurretAnims((LocalClientNum_t)v6, obj, cent, turretAnimIndexArrayOut);
}

/*
==============
CG_Entity_UpdateAnimationLod
==============
*/
void CG_Entity_UpdateAnimationLod(LocalClientNum_t localClientNum, int entnum)
{
  const DObj *ClientDObj; 
  const DObj *v5; 
  const XAnimTree *Tree; 
  const cpose_t *PoseExtended; 
  const dvar_t *v8; 
  float v9; 
  vec3_t outOrigin; 

  if ( !rg.lodParms.valid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3549, ASSERT_TYPE_ASSERT, "(rg.lodParms.valid)", (const char *)&queryFormat, "rg.lodParms.valid") )
    __debugbreak();
  ClientDObj = Com_GetClientDObj(entnum, localClientNum);
  v5 = ClientDObj;
  if ( ClientDObj )
  {
    Tree = DObjGetTree(ClientDObj);
    if ( Tree )
    {
      if ( XAnimTreeHasLods(Tree) )
      {
        PoseExtended = CG_GetPoseExtended(localClientNum, entnum, 0);
        CG_GetPoseOrigin(PoseExtended, &outOrigin);
        v8 = DVARFLT_cg_animLODScale;
        v9 = fsqrt((float)((float)((float)(rg.correctedLodParms.origin.v[1] - outOrigin.v[1]) * (float)(rg.correctedLodParms.origin.v[1] - outOrigin.v[1])) + (float)((float)(rg.correctedLodParms.origin.v[0] - outOrigin.v[0]) * (float)(rg.correctedLodParms.origin.v[0] - outOrigin.v[0]))) + (float)((float)(rg.correctedLodParms.origin.v[2] - outOrigin.v[2]) * (float)(rg.correctedLodParms.origin.v[2] - outOrigin.v[2])));
        if ( !DVARFLT_cg_animLODScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_animLODScale") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v8);
        XAnimSetClientLodByDistance(v5, (float)(v9 * rg.correctedLodParms.invFovScale) * v8->current.value);
      }
    }
  }
}

/*
==============
CG_Entity_UpdateBModelWorldBounds
==============
*/
void CG_Entity_UpdateBModelWorldBounds(LocalClientNum_t localClientNum, centity_t *cent, int forceFilter)
{
  entityState_t *p_nextState; 
  GfxBrushModel *BrushModel; 
  float v8; 
  __m128 v10; 
  float v13; 
  __m128 v15; 
  float4 v18; 
  float v19; 
  float v20; 
  float4 v21; 
  float v23; 
  __m128 v24; 
  bool v26; 
  unsigned int v27; 
  float v28; 
  __int64 number; 
  volatile int *v30; 
  unsigned int v31; 
  char *fmt; 
  vec3_t outOrigin; 
  __int64 v34; 
  Float4Bounds baseBounds; 
  Float4Bounds rotatedBounds; 
  __int128 v37; 
  __int64 v38; 
  __m128 v; 
  __m128 v40; 
  tmat33_t<vec3_t> axis; 

  v34 = -2i64;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 790, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( ScriptableCl_IsScriptableEntity(localClientNum, cent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 792, ASSERT_TYPE_ASSERT, "(!ScriptableCl_IsScriptableEntity( localClientNum, cent ))", "%s\n\tScriptables can have a brush set, but they should link and behave like a dobj", "!ScriptableCl_IsScriptableEntity( localClientNum, cent )") )
    __debugbreak();
  p_nextState = &cent->nextState;
  if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((cent->nextState.eType - 12) & 0xFFFD) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 794, ASSERT_TYPE_ASSERT, "(!BG_IsVehicleEntity( &cent->nextState ))", "%s\n\tVehicles can have brush set, but they should link and behave like a dobj", "!BG_IsVehicleEntity( &cent->nextState )") )
    __debugbreak();
  if ( com_errorEnteredCount <= 0 )
  {
    BrushModel = R_GetBrushModel(cent->nextState.index.brushModel);
    v8 = BrushModel->bounds.midPoint.v[0];
    v.m128_i32[3] = 0;
    v10 = v;
    v10.m128_f32[0] = v8;
    _XMM3 = v10;
    __asm
    {
      vinsertps xmm3, xmm3, dword ptr [rbx+3Ch], 10h
      vinsertps xmm3, xmm3, dword ptr [rbx+40h], 20h ; ' '
    }
    v = _XMM3.v;
    baseBounds.midPoint = (float4)_XMM3.v;
    v13 = BrushModel->bounds.halfSize.v[0];
    v40.m128_i32[3] = 0;
    v15 = v40;
    v15.m128_f32[0] = v13;
    _XMM3 = v15;
    __asm
    {
      vinsertps xmm3, xmm3, dword ptr [rbx+48h], 10h
      vinsertps xmm3, xmm3, dword ptr [rbx+4Ch], 20h ; ' '
    }
    v40 = _XMM3.v;
    baseBounds.halfSize = (float4)_XMM3.v;
    AnglesToAxis(&cent->pose.angles, &axis);
    CG_GetPoseOrigin(&cent->pose, &outOrigin);
    Float4Bounds_Transform(&baseBounds, &outOrigin, &axis, &rotatedBounds);
    v18.v = (__m128)rotatedBounds.midPoint;
    *(float *)&v37 = rotatedBounds.midPoint.v.m128_f32[0];
    v19 = _mm_shuffle_ps(v18.v, v18.v, 85).m128_f32[0];
    *((float *)&v37 + 1) = v19;
    v20 = _mm_shuffle_ps(v18.v, v18.v, 170).m128_f32[0];
    *((float *)&v37 + 2) = v20;
    v21.v = (__m128)rotatedBounds.halfSize;
    *((float *)&v37 + 3) = rotatedBounds.halfSize.v.m128_f32[0];
    _XMM8 = _mm_shuffle_ps(v21.v, v21.v, 85);
    LODWORD(v23) = _mm_shuffle_ps(v21.v, v21.v, 170).m128_u32[0];
    CG_GetPoseOrigin(&cent->pose, &BrushModel->writable.origin);
    AnglesToQuat(&cent->pose.angles, &BrushModel->writable.quat);
    if ( !forceFilter )
    {
      if ( !BrushModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 645, ASSERT_TYPE_ASSERT, "(outer)", (const char *)&queryFormat, "outer") )
        __debugbreak();
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(BrushModel->writable.bounds.midPoint.v[0] - v18.v.m128_f32[0]) & _xmm) <= (float)(BrushModel->writable.bounds.halfSize.v[0] - v21.v.m128_f32[0]) && COERCE_FLOAT(COERCE_UNSIGNED_INT(BrushModel->writable.bounds.midPoint.v[1] - v19) & _xmm) <= (float)(BrushModel->writable.bounds.halfSize.v[1] - _XMM8.m128_f32[0]) && COERCE_FLOAT(COERCE_UNSIGNED_INT(BrushModel->writable.bounds.midPoint.v[2] - v20) & _xmm) <= (float)(BrushModel->writable.bounds.halfSize.v[2] - v23) )
        goto LABEL_41;
      v21.v.m128_f32[0] = v21.v.m128_f32[0] + 16.0;
      *((float *)&v37 + 3) = v21.v.m128_f32[0];
      v24 = _XMM8;
      v24.m128_f32[0] = _XMM8.m128_f32[0] + 16.0;
      _XMM8 = v24;
      v23 = v23 + 16.0;
    }
    *(_OWORD *)BrushModel->writable.bounds.midPoint.v = v37;
    __asm { vunpcklps xmm1, xmm8, xmm7 }
    v38 = *(__int64 *)&_XMM1;
    *(double *)&BrushModel->writable.bounds.halfSize.y = *(double *)&_XMM1;
    if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF )
    {
      if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
        __debugbreak();
      v26 = !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0x17u);
    }
    else
    {
      v26 = 1;
    }
    if ( v26 && ((cent->flags & 0x1000) != 0 || (cent->flags & 0x80000) == 0) )
    {
      v27 = R_LinkBModelEntity(localClientNum, p_nextState->number, BrushModel);
      cent->flags |= 0x80000u;
      v28 = fsqrt((float)((float)(v21.v.m128_f32[0] * v21.v.m128_f32[0]) + (float)(_XMM8.m128_f32[0] * _XMM8.m128_f32[0])) + (float)(v23 * v23));
      if ( v28 > rg.primaryLightMotionDetectSizeMin && v28 < rg.primaryLightMotionDetectSizeMax )
        R_EntityMoved(localClientNum, p_nextState->number);
      number = (unsigned int)p_nextState->number;
      if ( (unsigned int)number < 0x2800 )
      {
        v30 = &s_msgBits[(unsigned __int64)(unsigned int)number >> 5];
        v31 = 1 << (p_nextState->number & 0x1F);
        if ( v27 > r_linkLightWarningThreshold->current.integer && (*v30 & v31) == 0 )
        {
          LODWORD(fmt) = v27;
          Com_PrintWarning(8, "WARNING: Entity(%d) %s is casting shadow for %d spot lights.\n", number, "BSP brushmodel", fmt);
          Com_PrintWarning(8, "  Pos=(%3.0f,%3.0f,%3.0f) Radius=%3.0f.\n", *(float *)&v37, *((float *)&v37 + 1), *((float *)&v37 + 2), v28);
          Com_PrintWarning(8, "  Please call CastSpotShadows(0) on the entity if we don't need spot shadow for this model.\n");
          if ( ((unsigned __int8)v30 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)v30) )
            __debugbreak();
          _InterlockedOr(v30, v31);
        }
      }
    }
LABEL_41:
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
}

/*
==============
CG_Entity_UpdateCharacterEvOffset
==============
*/
void CG_Entity_UpdateCharacterEvOffset(const LocalClientNum_t localClientNum, unsigned int entnum, GfxSceneHudOutlineInfo *hudOutlineInfo)
{
  __int64 v3; 
  centity_t *Entity; 
  CgStatic *v6; 
  __int64 v7; 
  const char *ModelNameForCustomization; 
  __int64 v9; 
  unsigned __int64 v10; 
  unsigned int v11; 
  cg_t *LocalClientGlobals; 
  unsigned __int64 v13; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,float> > *v14; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,float> > *mp_next; 
  __int64 v16; 
  __int64 v17; 

  if ( entnum < 0x800 )
  {
    v3 = localClientNum;
    Entity = CG_GetEntity(localClientNum, entnum);
    if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2367, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
      __debugbreak();
    if ( BG_IsCharacterEntity(&Entity->nextState) )
    {
      if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1976, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      if ( Entity->nextState.eType != ET_AGENT )
      {
        if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", v3) )
          __debugbreak();
        if ( (unsigned int)v3 >= LODWORD(CgStatic::ms_allocatedCount) )
        {
          *(float *)&v17 = CgStatic::ms_allocatedCount;
          LODWORD(v16) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v16, v17) )
            __debugbreak();
        }
        if ( !CgStatic::ms_cgameStaticsArray[v3] )
        {
          LODWORD(v17) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v17) )
            __debugbreak();
        }
        v6 = CgStatic::ms_cgameStaticsArray[v3];
        if ( v6 )
        {
          v7 = (__int64)v6->GetClientInfo(v6, Entity->nextState.clientNum);
          if ( v7 )
          {
            ModelNameForCustomization = BG_Customization_GetModelNameForCustomization(CUSTOMIZATION_TYPE_BODY, (const ClientCustomizationInfo *)(v7 + 164));
            v9 = -1i64;
            do
              ++v9;
            while ( ModelNameForCustomization[v9] );
            v10 = j_CoD_XXH64(ModelNameForCustomization, (unsigned int)v9, 0i64);
            v11 = HIDWORD(v10) + 37 * (v10 + 629);
            LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
            v13 = v11 % 0x607ui64;
            if ( v13 >= 0x607 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            v14 = &LocalClientGlobals->operatorSkinEvOffsetMap.m_buckets.m_data[v13];
            mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,float> > *)v14->m_listHead.m_sentinel.mp_next;
            if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,float> > *)v14->m_listHead.m_sentinel.mp_next == v14 )
            {
LABEL_32:
              mp_next = NULL;
            }
            else
            {
              while ( 1 )
              {
                if ( !mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                  __debugbreak();
                if ( LODWORD(mp_next[1].m_listHead.m_sentinel.mp_next) == v11 )
                  break;
                mp_next = (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned int,float> > *)mp_next->m_listHead.m_sentinel.mp_next;
                if ( mp_next == v14 )
                  goto LABEL_32;
              }
            }
            if ( mp_next )
              hudOutlineInfo->characterEVOffset = *((float *)&mp_next[1].m_listHead.m_sentinel.mp_next + 1);
          }
        }
      }
    }
  }
}

/*
==============
CG_Entity_UpdatePreviousPosition
==============
*/
void CG_Entity_UpdatePreviousPosition(centity_t *cent)
{
  vec3_t outOrigin; 

  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  CG_SetPrevPoseOrigin(&cent->pose, &outOrigin);
  cent->pose.prevAngles = cent->pose.angles;
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
CG_Entity_UpdateScriptableDObjBinding
==============
*/
void CG_Entity_UpdateScriptableDObjBinding(LocalClientNum_t localClientNum, const int entNum, const bool forceUpdateDef)
{
  DObj *ClientDObj; 
  CgEntitySystem *EntitySystem; 
  centity_t *Entity; 
  const char *EntityTypeName; 
  unsigned __int8 numModels; 
  const XModel *v11; 
  const char *Name; 
  char *fmt; 
  __int64 v14; 
  ScriptableDef *outScriptableDef; 
  unsigned int outInstanceIndex; 

  if ( ScriptableCl_GetReservedIndexForEntity(localClientNum, entNum, &outInstanceIndex) )
  {
    if ( !ScriptableCl_GetLinkEquals(localClientNum, outInstanceIndex, SCRIPTABLE_LINK_ENTITY, entNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1702, ASSERT_TYPE_ASSERT, "( ( ScriptableCl_GetLinkEquals( localClientNum, scriptableIndex, SCRIPTABLE_LINK_ENTITY, entNum ) ) )", "( entNum ) = %i", entNum) )
      __debugbreak();
    if ( forceUpdateDef || !ScriptableCl_GetInstanceInUse(localClientNum, outInstanceIndex) )
    {
      ClientDObj = Com_GetClientDObj(entNum, localClientNum);
      if ( !ScriptableCommon_GetScriptableDefFromDObj(ClientDObj, (const ScriptableDef **)&outScriptableDef) )
      {
        outScriptableDef = NULL;
        EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
        if ( !EntitySystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1720, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
          __debugbreak();
        Entity = CgEntitySystem::GetEntity(EntitySystem, entNum);
        if ( Entity )
          EntityTypeName = BG_GetEntityTypeName((const entityType_s)Entity->nextState.eType);
        else
          EntityTypeName = "<Unknown>";
        if ( ClientDObj )
        {
          numModels = ClientDObj->numModels;
          if ( numModels && (v11 = *ClientDObj->models) != NULL )
          {
            LODWORD(v14) = outInstanceIndex;
            Com_PrintError(29, "CG_Entity_UpdateScriptableDObjBinding: Entity %d type '%s' has model '%s', which does not specify a scriptableMoverDef, so we cannot bind scriptable %4d\n", (unsigned int)entNum, EntityTypeName, v11->name, v14);
          }
          else
          {
            LODWORD(v14) = numModels;
            LODWORD(fmt) = outInstanceIndex;
            Com_PrintError(29, "CG_Entity_UpdateScriptableDObjBinding: Entity %d type '%s' has a dobj with no models, cannot bind scriptable %4d. numModels %d\n", (unsigned int)entNum, EntityTypeName, fmt, v14);
          }
        }
        else
        {
          LODWORD(fmt) = outInstanceIndex;
          Com_PrintError(29, "CG_Entity_UpdateScriptableDObjBinding: Entity %d type '%s' has no obj, cannot bind scriptable %4d\n", (unsigned int)entNum, EntityTypeName, fmt);
        }
      }
      if ( ScriptableCl_UpdateReservedScriptableEntityBinding(localClientNum, entNum, outScriptableDef) == Started )
      {
        ScriptableCl_PrintReservedEntityScriptables(localClientNum);
        Name = DObjGetName(ClientDObj);
        Com_PrintError(14, "CG_Entity_UpdateScriptableDObjBinding: Failed to create scriptable %s for ent %i (%s).\n", outScriptableDef->name, (unsigned int)entNum, Name);
      }
    }
  }
}

/*
==============
CG_Ents_TouchModelFrontEndScene
==============
*/
bool CG_Ents_TouchModelFrontEndScene(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  const DObj *ClientDObj; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2874, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2875, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2876, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  return CG_GetLocalClientGlobals(localClientNum)->m_frontEndScene && (ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum)) != NULL && CL_UIStreaming_TouchFrontendDObj(ClientDObj);
}

/*
==============
CG_GetPose
==============
*/
const cpose_t *CG_GetPose(LocalClientNum_t localClientNum, int handle)
{
  return CG_GetPoseExtended(localClientNum, handle, 0);
}

/*
==============
CG_GetPoseExtended
==============
*/
centity_t *CG_GetPoseExtended(LocalClientNum_t localClientNum, int handle, int returnNullOnInvalid)
{
  centity_t *result; 
  cg_t *LocalClientGlobals; 
  CgPredictedEntitySystem *System; 
  __int64 v9; 

  if ( (unsigned int)handle > 0x9E4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 90, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "( handle ) = %i", handle) )
    __debugbreak();
  if ( handle < 2048 )
  {
    result = CG_GetEntity(localClientNum, handle);
    if ( !returnNullOnInvalid || (result->flags & 1) != 0 )
      return result;
    return 0i64;
  }
  if ( handle > 2532 )
  {
    LODWORD(v9) = handle;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 103, ASSERT_TYPE_ASSERT, "( ((( 2048 ) + 0)) ) <= ( handle ) && ( handle ) <= ( ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) - 1 )", "handle not in [DOBJ_HANDLE_FIRST_WEAPON, CLIENT_DOBJ_HANDLE_MAX - 1]\n\t%i not in [%i, %i]", v9, 2048, 2532) )
      __debugbreak();
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( handle == 2048 )
    return (centity_t *)&LocalClientGlobals->viewModelPose;
  if ( handle == 2049 )
    return (centity_t *)&LocalClientGlobals->viewModelPoseLeftHand;
  if ( (unsigned int)(handle - 2050) <= 0x3F )
    return (centity_t *)Mayhem_GetPose(localClientNum, handle);
  if ( (unsigned int)(handle - 2117) <= 0x17F )
    return (centity_t *)CG_ClientModel_GetPoseForDObjHandle(localClientNum, handle);
  if ( handle == 2114 )
    return (centity_t *)&LocalClientGlobals->firstPersonLegsPose;
  if ( handle == 2115 )
    return (centity_t *)&LocalClientGlobals->firstPersonHelmetPose;
  if ( (unsigned int)(handle - 2501) > 0x1F )
  {
    LODWORD(v9) = handle;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 143, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected client dobj handle (%d) in CG_GetPoseExtended()", v9) )
      __debugbreak();
    return 0i64;
  }
  System = CgPredictedEntitySystem::GetSystem(localClientNum);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 138, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
    __debugbreak();
  return (centity_t *)CgPredictedEntitySystem::GetPoseForDObjHandle(System, handle);
}

/*
==============
CG_GetSkinCacheEntry
==============
*/
GfxSkinCacheEntry *CG_GetSkinCacheEntry(const cpose_t *pose)
{
  return &pose->skinCacheEntry;
}

/*
==============
CG_GetViewModelAnimWeightAndTime
==============
*/
char CG_GetViewModelAnimWeightAndTime(const LocalClientNum_t localClientIndex, const Weapon *weapon, const PlayerHandIndex hand, const WeaponAnimNumber *const animStates, const unsigned int numAnimStates, float *weight, float *time)
{
  __int64 v7; 
  cg_t *LocalClientGlobals; 
  LocalClientNum_t v13; 
  __int64 v14; 
  CgWeaponMap *v15; 
  unsigned int v16; 
  DObj *viewModelDObj; 
  int v18; 
  CgHandler *pmoveHandler; 
  unsigned int v20; 
  double v21; 
  float v22; 
  double v23; 
  __int64 bIsAlternate; 
  __int64 handIndex; 
  float *timea; 

  v7 = hand;
  if ( !weight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2983, ASSERT_TYPE_ASSERT, "(weight)", (const char *)&queryFormat, "weight") )
    __debugbreak();
  if ( !time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2984, ASSERT_TYPE_ASSERT, "(time)", (const char *)&queryFormat, "time") )
    __debugbreak();
  if ( !animStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2985, ASSERT_TYPE_ASSERT, "(animStates)", (const char *)&queryFormat, "animStates") )
    __debugbreak();
  if ( (unsigned int)v7 >= 2 )
  {
    LODWORD(bIsAlternate) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2986, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", bIsAlternate, 2) )
      __debugbreak();
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientIndex);
  if ( (unsigned int)v7 >= 2 )
  {
    LODWORD(handIndex) = 2;
    LODWORD(bIsAlternate) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1207, ASSERT_TYPE_ASSERT, "(unsigned)( handIndex ) < (unsigned)( NUM_WEAPON_HANDS )", "handIndex doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", bIsAlternate, handIndex) )
      __debugbreak();
  }
  v13 = localClientIndex;
  v14 = v7;
  if ( !CgWeaponMap::ms_instance[localClientIndex] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    v13 = localClientIndex;
    v14 = v7;
  }
  v15 = CgWeaponMap::ms_instance[localClientIndex];
  v16 = 0;
  *weight = 0.0;
  *time = 0.0;
  timea = (float *)v15;
  if ( !weapon->weaponIdx )
    return 0;
  viewModelDObj = LocalClientGlobals->m_weaponHand[v14].viewModelDObj;
  if ( !viewModelDObj || !viewModelDObj->tree || !numAnimStates )
    return 0;
  while ( 1 )
  {
    v18 = *animStates;
    pmoveHandler = CgHandler::getHandler(v13);
    v20 = BG_MapWeaponAnimStateToAnimIndex((const BgWeaponMap *)timea, &LocalClientGlobals->predictedPlayerState, v18, 0, weapon, 0, (PlayerHandIndex)v7, pmoveHandler);
    v21 = XAnimGetTime(LocalClientGlobals->m_weaponHand[v7].viewModelDObj->tree, 0, XANIM_SUBTREE_DEFAULT, v20);
    v22 = *(float *)&v21;
    v23 = XAnimGetWeight(LocalClientGlobals->m_weaponHand[v7].viewModelDObj->tree, 0, XANIM_SUBTREE_DEFAULT, v20);
    if ( *(float *)&v23 != 0.0 )
      break;
    v13 = localClientIndex;
    ++v16;
    ++animStates;
    if ( v16 >= numAnimStates )
      return 0;
  }
  *weight = *(float *)&v23;
  *time = v22;
  return 1;
}

/*
==============
CG_IsEntityInterpolationValid
==============
*/
bool CG_IsEntityInterpolationValid(const centity_t *cent)
{
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2862, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2863, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  return (cent->flags & 0x10000) == 0;
}

/*
==============
CG_Utils_GetPhysicsAsset
==============
*/
void CG_Utils_GetPhysicsAsset(LocalClientNum_t localClientNum, const centity_t *ent, const DObj **dobj, const XModel **baseModel, const PhysicsAsset **physAsset, int *physShapeOverrideIdx, const PhysicsAsset **physAssetAddendum, int *physShapeAddendumIdx, const XModel **detailModel, bool *overrideContents, int *contentsOverride)
{
  int physicsShapeOverrideIdx; 
  DObj *ClientDObj; 
  const XModel *Model; 
  cmodel_t *v17; 
  cmodel_t *v18; 
  unsigned __int16 v19; 
  CgHandler *Handler; 
  const PhysicsAsset *EdgePhysicsProxyAsset; 
  const TriggerModel *TriggerModel; 
  const dvar_t *v23; 
  const DObj *v24; 
  const XModel *v25; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 989, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (ent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 990, ASSERT_TYPE_ASSERT, "(CENextValid( ent ))", (const char *)&queryFormat, "CENextValid( ent )") )
    __debugbreak();
  if ( !dobj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 991, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
    __debugbreak();
  if ( !baseModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 992, ASSERT_TYPE_ASSERT, "(baseModel)", (const char *)&queryFormat, "baseModel") )
    __debugbreak();
  if ( !physAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 993, ASSERT_TYPE_ASSERT, "(physAsset)", (const char *)&queryFormat, "physAsset") )
    __debugbreak();
  if ( !physShapeOverrideIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 994, ASSERT_TYPE_ASSERT, "(physShapeOverrideIdx)", (const char *)&queryFormat, "physShapeOverrideIdx") )
    __debugbreak();
  if ( !physAssetAddendum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 995, ASSERT_TYPE_ASSERT, "(physAssetAddendum)", (const char *)&queryFormat, "physAssetAddendum") )
    __debugbreak();
  if ( !physShapeAddendumIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 996, ASSERT_TYPE_ASSERT, "(physShapeAddendumIdx)", (const char *)&queryFormat, "physShapeAddendumIdx") )
    __debugbreak();
  if ( !detailModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 997, ASSERT_TYPE_ASSERT, "(detailModel)", (const char *)&queryFormat, "detailModel") )
    __debugbreak();
  if ( !overrideContents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 998, ASSERT_TYPE_ASSERT, "(overrideContents)", (const char *)&queryFormat, "overrideContents") )
    __debugbreak();
  if ( !contentsOverride && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 999, ASSERT_TYPE_ASSERT, "(contentsOverride)", (const char *)&queryFormat, "contentsOverride") )
    __debugbreak();
  *dobj = NULL;
  *baseModel = NULL;
  physicsShapeOverrideIdx = -1;
  *physAsset = NULL;
  *physShapeOverrideIdx = -1;
  *physAssetAddendum = NULL;
  *physShapeAddendumIdx = -1;
  *detailModel = NULL;
  *overrideContents = 0;
  *contentsOverride = 0;
  ClientDObj = Com_GetClientDObj(ent->nextState.number, localClientNum);
  *dobj = ClientDObj;
  if ( ClientDObj && ClientDObj->numModels )
  {
    Model = DObjGetModel(ClientDObj, 0);
    *baseModel = Model;
    if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1021, ASSERT_TYPE_ASSERT, "((*baseModel))", (const char *)&queryFormat, "(*baseModel)") )
      __debugbreak();
    *physAsset = (*baseModel)->physicsAsset;
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ent->nextState.lerp.eFlags, ACTIVE, 1u) )
    {
      v17 = &cm.mapEnts->cmodels[ent->nextState.index.brushModel];
      *physAssetAddendum = v17->physicsAsset;
      if ( v17->physicsAsset )
        physicsShapeOverrideIdx = v17->physicsShapeOverrideIdx;
      *physShapeAddendumIdx = physicsShapeOverrideIdx;
    }
  }
  else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ent->nextState.lerp.eFlags, ACTIVE, 1u) )
  {
    v18 = &cm.mapEnts->cmodels[ent->nextState.index.brushModel];
    v19 = v18->physicsShapeOverrideIdx;
    if ( v19 == 0xFFFF || !WorldCollision_GetMapEntsShape(v19) )
    {
      if ( ent->nextState.eType == ET_SCRIPTMOVER && (ent->nextState.lerp.u.anonymous.data[2] & 0x100) != 0 )
      {
        Handler = CgHandler::getHandler(localClientNum);
        EdgePhysicsProxyAsset = BG_GetEdgePhysicsProxyAsset(Handler, &ent->nextState);
        *physAsset = EdgePhysicsProxyAsset;
        if ( EdgePhysicsProxyAsset )
        {
          *overrideContents = 1;
          *contentsOverride = 0x80000000;
        }
      }
    }
    else
    {
      *physAsset = v18->physicsAsset;
      *physShapeOverrideIdx = v18->physicsShapeOverrideIdx;
      *overrideContents = 1;
      *contentsOverride = CM_ContentsOfBrushModel(ent->nextState.index.brushModel);
    }
  }
  else if ( CG_Entity_IsTriggerVolume(ent) )
  {
    TriggerModel = CM_GetTriggerModel(ent->nextState.index.brushModel);
    *physAsset = TriggerModel->physicsAsset;
    *physShapeOverrideIdx = TriggerModel->physicsShapeOverrideIdx;
    *overrideContents = 1;
    *contentsOverride = 1078198280;
  }
  if ( ent->nextState.eType != ET_ITEM )
    goto LABEL_59;
  v23 = DCONST_DVARBOOL_skipItemDetailModelPhysics;
  if ( !DCONST_DVARBOOL_skipItemDetailModelPhysics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skipItemDetailModelPhysics") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  if ( !v23->current.enabled || ent->prevState.pos.trType != TR_PHYSICS_SERVER_AUTH )
  {
LABEL_59:
    *detailModel = NULL;
    v24 = *dobj;
    if ( *dobj && v24->numModels )
    {
      v25 = DObjGetModel(v24, 0);
      if ( v25->detailCollision )
        *detailModel = v25;
    }
  }
}

