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
  unsigned __int16 v10; 
  DObjAnimMat outMat; 

  _RSI = outOrigin;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 443, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 444, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !g_activeRefDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 445, ASSERT_TYPE_ASSERT, "(g_activeRefDef)", (const char *)&queryFormat, "g_activeRefDef") )
    __debugbreak();
  v10 = truncate_cast<unsigned short,int>(boneIndex);
  DObjGetBasePoseMatrix(obj, v10, &outMat);
  LocalConvertQuatToMat(&outMat, outTagMat);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+88h+outMat.trans]
    vmovss  xmm2, dword ptr [rsp+88h+outMat.trans+4]
    vaddss  xmm1, xmm0, dword ptr [rax+7Ch]
    vmovss  dword ptr [rsi], xmm1
    vaddss  xmm0, xmm2, dword ptr [rax+80h]
    vmovss  xmm1, dword ptr [rsp+88h+outMat.trans+8]
    vmovss  dword ptr [rsi+4], xmm0
    vaddss  xmm2, xmm1, dword ptr [rax+84h]
    vmovss  dword ptr [rsi+8], xmm2
  }
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
  tmat43_t<vec3_t> v17; 
  tmat43_t<vec3_t> axis; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 458, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 459, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  v8 = truncate_cast<unsigned short,int>(boneIndex);
  DObjGetBasePoseMatrix(obj, v8, &outMat);
  LocalConvertQuatToMat(&outMat, (tmat33_t<vec3_t> *)&axis);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0F8h+outMat.trans]
    vmovss  xmm1, dword ptr [rsp+0F8h+outMat.trans+4]
    vmovss  [rsp+0F8h+var_44], xmm0
    vmovss  xmm0, dword ptr [rsp+0F8h+outMat.trans+8]
    vmovss  [rsp+0F8h+var_3C], xmm0
    vmovss  [rsp+0F8h+var_40], xmm1
  }
  CG_GetPoseOrigin(pose, &outOrigin);
  AnglesToAxis(&pose->angles, (tmat33_t<vec3_t> *)&v17);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0F8h+outOrigin]
    vmovss  xmm1, dword ptr [rsp+0F8h+outOrigin+4]
    vmovss  [rsp+0F8h+var_74], xmm0
    vmovss  xmm0, dword ptr [rsp+0F8h+outOrigin+8]
    vmovss  [rsp+0F8h+var_6C], xmm0
    vmovss  [rsp+0F8h+var_70], xmm1
  }
  MatrixMultiply43(&axis, &v17, outWorldTransform);
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
  const char *BoneName; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
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
    for ( _RSI = &outOrigins->v[2]; ; _RSI += 3 )
    {
      _RBX = outResults[v12];
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vmovss  [rsp+8088h+var_8058], xmm0
      }
      if ( (v26 & 0x7F800000) == 2139095040 )
        break;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+4]
        vmovss  [rsp+8088h+var_8058], xmm0
      }
      if ( (v27 & 0x7F800000) == 2139095040 )
        break;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+8]
        vmovss  [rsp+8088h+var_8058], xmm0
      }
      if ( (v28 & 0x7F800000) == 2139095040 )
        break;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+0Ch]
        vmovss  [rsp+8088h+var_8058], xmm0
      }
      if ( (v29 & 0x7F800000) == 2139095040 )
        break;
      LocalConvertQuatToMat(_RBX, &outTagMatrices[v10++]);
      __asm { vmovss  xmm0, dword ptr [rbx+10h] }
      ++v12;
      __asm
      {
        vaddss  xmm1, xmm0, dword ptr [rax+7Ch]
        vmovss  dword ptr [rsi-8], xmm1
        vmovss  xmm2, dword ptr [rbx+14h]
        vaddss  xmm0, xmm2, dword ptr [rax+80h]
        vmovss  dword ptr [rsi-4], xmm0
        vmovss  xmm1, dword ptr [rbx+18h]
        vaddss  xmm2, xmm1, dword ptr [rax+84h]
        vmovss  dword ptr [rsi], xmm2
      }
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
  const char *BoneName; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 399, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 400, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !g_activeRefDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 401, ASSERT_TYPE_ASSERT, "(g_activeRefDef)", (const char *)&queryFormat, "g_activeRefDef") )
    __debugbreak();
  _RAX = CG_DObjGetLocalBoneMatrix(pose, obj, boneIndex);
  _RBX = _RAX;
  if ( _RAX )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax]
      vmovss  [rsp+48h+arg_0], xmm0
    }
    if ( (v24 & 0x7F800000) != 2139095040 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rax+4]
        vmovss  [rsp+48h+arg_0], xmm0
      }
      if ( (v25 & 0x7F800000) != 2139095040 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rax+8]
          vmovss  [rsp+48h+arg_0], xmm0
        }
        if ( (v26 & 0x7F800000) != 2139095040 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+0Ch]
            vmovss  [rsp+48h+arg_0], xmm0
          }
          if ( (v27 & 0x7F800000) != 2139095040 )
          {
            LocalConvertQuatToMat(_RAX, outTagMat);
            __asm { vmovss  xmm0, dword ptr [rbx+10h] }
            _RAX = outOrigin;
            __asm
            {
              vaddss  xmm1, xmm0, dword ptr [rcx+7Ch]
              vmovss  dword ptr [rax], xmm1
              vmovss  xmm0, dword ptr [rbx+14h]
              vaddss  xmm1, xmm0, dword ptr [rcx+80h]
              vmovss  dword ptr [rax+4], xmm1
              vmovss  xmm2, dword ptr [rbx+18h]
              vaddss  xmm0, xmm2, dword ptr [rcx+84h]
              vmovss  dword ptr [rax+8], xmm0
            }
            return 1i64;
          }
        }
      }
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

  _RDI = outOrigin;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 427, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 428, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !g_activeRefDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 429, ASSERT_TYPE_ASSERT, "(g_activeRefDef)", (const char *)&queryFormat, "g_activeRefDef") )
    __debugbreak();
  result = CG_DObjGetLocalBoneMatrix(pose, obj, boneIndex);
  _RCX = result;
  if ( result )
  {
    _RAX = g_activeRefDef;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+7Ch]
      vaddss  xmm1, xmm0, dword ptr [rcx+10h]
      vmovss  dword ptr [rdi], xmm1
      vmovss  xmm2, dword ptr [rcx+14h]
      vaddss  xmm0, xmm2, dword ptr [rax+80h]
      vmovss  dword ptr [rdi+4], xmm0
      vmovss  xmm1, dword ptr [rcx+18h]
      vaddss  xmm2, xmm1, dword ptr [rax+84h]
      vmovss  dword ptr [rdi+8], xmm2
    }
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
    _RDX = (char *)&outOrigins[1].z;
    do
    {
      _RAX = outResults[v9];
      _RDX += 48;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+10h]
        vaddss  xmm1, xmm0, dword ptr [r8+7Ch]
        vmovss  dword ptr [rdx-44h], xmm1
        vmovss  xmm2, dword ptr [rax+14h]
        vaddss  xmm0, xmm2, dword ptr [r8+80h]
        vmovss  dword ptr [rdx-40h], xmm0
        vmovss  xmm1, dword ptr [rax+18h]
        vaddss  xmm2, xmm1, dword ptr [r8+84h]
      }
      _RAX = outResults[v9 + 1];
      __asm
      {
        vmovss  dword ptr [rdx-3Ch], xmm2
        vmovss  xmm0, dword ptr [rax+10h]
        vaddss  xmm1, xmm0, dword ptr [r8+7Ch]
        vmovss  dword ptr [rdx-38h], xmm1
        vmovss  xmm2, dword ptr [rax+14h]
        vaddss  xmm0, xmm2, dword ptr [r8+80h]
        vmovss  dword ptr [rdx-34h], xmm0
        vmovss  xmm1, dword ptr [rax+18h]
        vaddss  xmm2, xmm1, dword ptr [r8+84h]
      }
      _RAX = outResults[v9 + 2];
      __asm
      {
        vmovss  dword ptr [rdx-30h], xmm2
        vmovss  xmm0, dword ptr [rax+10h]
        vaddss  xmm1, xmm0, dword ptr [r8+7Ch]
        vmovss  dword ptr [rdx-2Ch], xmm1
        vmovss  xmm2, dword ptr [rax+14h]
        vaddss  xmm0, xmm2, dword ptr [r8+80h]
        vmovss  dword ptr [rdx-28h], xmm0
        vmovss  xmm1, dword ptr [rax+18h]
        vaddss  xmm2, xmm1, dword ptr [r8+84h]
      }
      _RAX = outResults[v9 + 3];
      v9 += 4i64;
      __asm
      {
        vmovss  dword ptr [rdx-24h], xmm2
        vmovss  xmm0, dword ptr [rax+10h]
        vaddss  xmm1, xmm0, dword ptr [r8+7Ch]
        vmovss  dword ptr [rdx-20h], xmm1
        vmovss  xmm2, dword ptr [rax+14h]
        vaddss  xmm0, xmm2, dword ptr [r8+80h]
        vmovss  dword ptr [rdx-1Ch], xmm0
        vmovss  xmm1, dword ptr [rax+18h]
        vaddss  xmm2, xmm1, dword ptr [r8+84h]
        vmovss  dword ptr [rdx-18h], xmm2
      }
    }
    while ( v9 < v6 - 3 );
  }
  if ( v9 < v6 )
  {
    _RDX = &outOrigins[v9].v[2];
    do
    {
      _RAX = outResults[v9];
      _RDX += 3;
      ++v9;
      __asm
      {
        vmovss  xmm0, dword ptr [rax+10h]
        vaddss  xmm1, xmm0, dword ptr [r8+7Ch]
        vmovss  dword ptr [rdx-14h], xmm1
        vmovss  xmm2, dword ptr [rax+14h]
        vaddss  xmm0, xmm2, dword ptr [r8+80h]
        vmovss  dword ptr [rdx-10h], xmm0
        vmovss  xmm1, dword ptr [rax+18h]
        vaddss  xmm2, xmm1, dword ptr [r8+84h]
        vmovss  dword ptr [rdx-0Ch], xmm2
      }
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
  CgEntitySystem *v19; 
  __int64 v20; 
  __int64 v21; 
  unsigned int v22; 
  GfxSceneHudOutlineInfo *hudOutlineInfoa; 
  float shaderOverridea; 
  float shaderOverrideb; 
  shaderOverride_t v48; 
  GfxSceneHudOutlineInfo v49; 
  GfxSceneEntityMutableShaderData v50; 
  GfxSceneEntityMutableShaderData entityMutableShaderData; 

  __asm { vmovaps [rsp+288h+var_68], xmm7 }
  _R13 = shaderOverride;
  _R15 = hudOutlineInfo;
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
      v22 = renderFlags | 0x100;
      goto LABEL_25;
    }
    if ( obj->entnum < 0x801u )
    {
      v19 = CgEntitySystem::GetEntitySystem(localClientNum);
      if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2352, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
        __debugbreak();
      v20 = obj->entnum;
      if ( (unsigned int)(v20 - 1) >= 0x800 )
      {
        LODWORD(hudOutlineInfoa) = v20 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 534, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", hudOutlineInfoa, 2048) )
          __debugbreak();
      }
      v21 = (__int64)v19 + 760 * v20 - 744;
      if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2354, ASSERT_TYPE_ASSERT, "(cEntity)", (const char *)&queryFormat, "cEntity") )
        __debugbreak();
      if ( BG_IsCharacterEntity((const entityState_t *)(v21 + 400)) && (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
      {
        v22 = renderFlags | 0x40;
        goto LABEL_25;
      }
    }
  }
  v22 = renderFlags;
LABEL_25:
  __asm
  {
    vmovss  xmm7, [rsp+288h+arg_40]
    vmovaps xmm3, xmm7; materialTime
  }
  if ( !CG_EntityWorkers_TryAddDObjDrawRequest(entnum, v22, genericMaterialData, *(float *)&_XMM3, lightingOrigin, hudOutlineInfo, shaderOverride) )
  {
    __asm { vmovaps [rsp+288h+var_58], xmm6 }
    CG_LocalEntity_PreAddDObjUpdate(localClientNum, entnum);
    if ( entnum >= 0x800 )
    {
      __asm { vxorps  xmm6, xmm6, xmm6 }
    }
    else
    {
      _RAX = CG_GetEntity(localClientNum, entnum);
      __asm { vmovss  xmm6, dword ptr [rax+2E8h] }
    }
    CG_Entity_UpdateCharacterEvOffset(localClientNum, entnum, hudOutlineInfo);
    __asm { vmovups ymm0, ymmword ptr [r13+0] }
    v48.atlasTime = shaderOverride->atlasTime;
    v49.characterEVOffset = hudOutlineInfo->characterEVOffset;
    __asm
    {
      vmovss  [rsp+288h+shaderOverride], xmm6
      vmovups [rsp+288h+var_238], ymm0
      vmovups ymm0, ymmword ptr [r15]
      vmovups [rsp+288h+var_208], ymm0
    }
    _RAX = CG_Entity_GetMutableShaderData(&v50, localClientNum, obj, genericMaterialData, &v49, &v48, shaderOverridea);
    _RCX = &entityMutableShaderData;
    __asm
    {
      vmovss  [rsp+288h+shaderOverride], xmm7
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rcx], xmm0
      vmovups xmm1, xmmword ptr [rax+10h]
      vmovups xmmword ptr [rcx+10h], xmm1
      vmovups xmm0, xmmword ptr [rax+20h]
      vmovups xmmword ptr [rcx+20h], xmm0
      vmovups xmm1, xmmword ptr [rax+30h]
      vmovups xmmword ptr [rcx+30h], xmm1
      vmovups xmm0, xmmword ptr [rax+40h]
      vmovups xmmword ptr [rcx+40h], xmm0
      vmovups xmm1, xmmword ptr [rax+50h]
      vmovups xmmword ptr [rcx+50h], xmm1
      vmovups xmm0, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
      vmovups xmm0, xmmword ptr [rax+70h]
      vmovups xmmword ptr [rcx+70h], xmm0
      vmovups xmm1, xmmword ptr [rax+80h]
      vmovups xmmword ptr [rcx+80h], xmm1
      vmovups xmm0, xmmword ptr [rax+90h]
      vmovups xmmword ptr [rcx+90h], xmm0
      vmovups xmm1, xmmword ptr [rax+0A0h]
      vmovups xmmword ptr [rcx+0A0h], xmm1
    }
    R_AddDObjToScene(obj, pose, entnum, v22, &entityMutableShaderData, lightingOrigin, shaderOverrideb);
    __asm { vmovaps xmm6, [rsp+288h+var_58] }
    if ( (obj->flags & 4) != 0 )
      R_EntityHasSkinningAnimation(localClientNum, entnum);
  }
  __asm { vmovaps xmm7, [rsp+288h+var_68] }
}

/*
==============
CG_Entity_AddViewmodelDObjToScene
==============
*/
void CG_Entity_AddViewmodelDObjToScene(const LocalClientNum_t localClientNum, const DObj *obj, const cpose_t *pose, unsigned int entnum, unsigned int renderFlags, shaderOverride_t *shaderOverride, GfxSceneHudOutlineInfo *hudOutlineInfo, const vec3_t *lightingOrigin, float materialTime, unsigned int genericMaterialData, int markableViewmodel)
{
  float v27; 
  GfxSceneHudOutlineInfo v28; 
  shaderOverride_t v29; 

  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2462, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( _RBX->viewModelQueuedRenderInfo.m_enabled )
  {
    if ( entnum - 2048 > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1016, ASSERT_TYPE_ASSERT, "(entNum == ENTITYNUM_VIEWMODEL || entNum == ENTITYNUM_VIEWMODEL_LEFT)", (const char *)&queryFormat, "entNum == ENTITYNUM_VIEWMODEL || entNum == ENTITYNUM_VIEWMODEL_LEFT") )
      __debugbreak();
    __asm { vmovss  xmm0, [rsp+0D8h+arg_40] }
    _RDX = 512124i64;
    if ( entnum != 2049 )
      _RDX = 512020i64;
    *((_BYTE *)&_RBX->predictedPlayerState.movingPlatforms.m_movingPlatformTurnRate + _RDX) = 1;
    *(vec3_t *)((char *)&_RBX->predictedPlayerState.velocity + _RDX + 4) = *lightingOrigin;
    *(int *)((char *)&_RBX->predictedPlayerState.impulseFieldAirborneStartTime + _RDX) = renderFlags;
    _RAX = shaderOverride;
    __asm
    {
      vmovss  dword ptr [rdx+rbx+54h], xmm0
      vmovups ymm0, ymmword ptr [rax]
    }
    *(float *)&_RAX = shaderOverride->atlasTime;
    __asm { vmovups ymmword ptr [rdx+rbx+24h], ymm0 }
    LODWORD(_RBX->predictedPlayerState.velocity.v[(unsigned __int64)_RDX / 4]) = (_DWORD)_RAX;
    _RAX = hudOutlineInfo;
    __asm { vmovups ymm0, ymmword ptr [rax] }
    *(float *)&_RAX = hudOutlineInfo->characterEVOffset;
    __asm { vmovups ymmword ptr [rdx+rbx], ymm0 }
    _RBX->predictedPlayerState.pm_flags.m_flags[(unsigned __int64)_RDX / 4 + 1] = (unsigned int)_RAX;
    *(PlayerCommandInput *)((char *)&_RBX->predictedPlayerState.lastInput + _RDX) = (PlayerCommandInput)genericMaterialData;
    *(int *)((char *)&_RBX->predictedPlayerState.movingPlatforms.m_movingPlatformEntity + _RDX) = markableViewmodel;
  }
  else
  {
    _RAX = hudOutlineInfo;
    __asm { vmovups ymm0, ymmword ptr [rax] }
    v28.characterEVOffset = hudOutlineInfo->characterEVOffset;
    _RAX = shaderOverride;
    __asm
    {
      vmovups [rsp+0D8h+var_78], ymm0
      vmovups ymm0, ymmword ptr [rax]
    }
    v29.atlasTime = shaderOverride->atlasTime;
    __asm
    {
      vmovups [rsp+0D8h+var_48], ymm0
      vmovss  xmm0, [rsp+0D8h+arg_40]
      vmovss  [rsp+0D8h+var_98], xmm0
    }
    CG_Entity_AddViewmodelDObjToScene_Internal(localClientNum, obj, pose, entnum, renderFlags, &v29, &v28, lightingOrigin, v27, genericMaterialData, markableViewmodel);
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
  float v35; 
  float v36; 
  shaderOverride_t v39; 
  GfxSceneHudOutlineInfo v40; 
  GfxSceneEntityMutableShaderData v41; 
  GfxSceneEntityMutableShaderData entityMutableShaderData; 

  _RBX = shaderOverride;
  _RDI = hudOutlineInfo;
  atlasTime = shaderOverride->atlasTime;
  characterEVOffset = hudOutlineInfo->characterEVOffset;
  CG_LocalEntity_PreAddDObjUpdate(localClientNum, entnum);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx]
    vmovups [rsp+268h+var_218], ymm0
    vmovups ymm0, ymmword ptr [rdi]
    vmovups [rsp+268h+var_1E8], ymm0
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+268h+var_238], xmm0
  }
  v39.atlasTime = atlasTime;
  v40.characterEVOffset = characterEVOffset;
  _RAX = CG_Entity_GetMutableShaderData(&v41, localClientNum, obj, genericMaterialData, &v40, &v39, v35);
  _RCX = &entityMutableShaderData;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rcx], xmm0
    vmovups xmm1, xmmword ptr [rax+10h]
    vmovups xmmword ptr [rcx+10h], xmm1
    vmovups xmm0, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rcx+20h], xmm0
    vmovups xmm1, xmmword ptr [rax+30h]
    vmovups xmmword ptr [rcx+30h], xmm1
    vmovups xmm0, xmmword ptr [rax+40h]
    vmovups xmmword ptr [rcx+40h], xmm0
    vmovups xmm1, xmmword ptr [rax+50h]
    vmovups xmmword ptr [rcx+50h], xmm1
    vmovups xmm0, xmmword ptr [rax+60h]
    vmovups xmmword ptr [rcx+60h], xmm0
    vmovups xmm0, xmmword ptr [rax+70h]
    vmovups xmmword ptr [rcx+70h], xmm0
    vmovups xmm1, xmmword ptr [rax+80h]
    vmovups xmmword ptr [rcx+80h], xmm1
    vmovups xmm0, xmmword ptr [rax+90h]
    vmovups xmmword ptr [rcx+90h], xmm0
    vmovups xmm1, xmmword ptr [rax+0A0h]
    vmovss  xmm0, [rsp+268h+arg_40]
    vmovss  [rsp+268h+var_238], xmm0
    vmovups xmmword ptr [rcx+0A0h], xmm1
  }
  R_AddViewmodelDObjToScene(obj, pose, entnum, renderFlags, &entityMutableShaderData, lightingOrigin, v36, markableViewmodel);
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
  CgHandler *Handler; 
  int RemoteControlledVehicleEntityNum; 
  centity_t *Entity; 
  __int64 v13; 
  int v14; 
  bool v15; 
  bool v16; 
  CgHandler *v20; 
  const dvar_t *v40; 
  const char *v41; 
  char v43; 
  bool v44; 
  bool v47; 
  double v66; 
  double v67; 
  double v68; 
  double v69; 
  vec3_t angles; 
  vec3_t inOutViewAngles; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in; 
  tmat33_t<vec3_t> out; 
  WorldUpReferenceFrame v76; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3275, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
  if ( VehicleSystem )
  {
    _R14 = CG_GetLocalClientGlobals(localClientNum);
    if ( _R14 )
    {
      Handler = CgHandler::getHandler(localClientNum);
      RemoteControlledVehicleEntityNum = BG_GetRemoteControlledVehicleEntityNum(&_R14->predictedPlayerState, Handler);
      if ( RemoteControlledVehicleEntityNum != 2047 )
      {
        Entity = CG_GetEntity(localClientNum, RemoteControlledVehicleEntityNum);
        if ( (Entity->flags & 1) != 0 )
        {
          v13 = (__int64)VehicleSystem->GetVehicleDef(VehicleSystem, &Entity->nextState);
          if ( v13 )
          {
            v14 = *(_DWORD *)(v13 + 248);
            v15 = v14 && !*(_BYTE *)(v13 + 256);
            v16 = v14 && *(_DWORD *)(v13 + 260) == 4;
            if ( v15 )
            {
              if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_bradleyGunPitchClamp, "bg_bradleyGunPitchClamp") )
                return;
              if ( !v16 )
              {
LABEL_23:
                __asm
                {
                  vmovss  xmm0, dword ptr [r14+1E0h]
                  vmovss  dword ptr [rsp+1A0h+inOutViewAngles], xmm0
                  vmovss  xmm1, dword ptr [r14+1E4h]
                  vmovss  dword ptr [rsp+1A0h+inOutViewAngles+4], xmm1
                  vmovss  xmm0, dword ptr [r14+1E8h]
                  vmovaps [rsp+1A0h+var_30], xmm6
                  vmovaps [rsp+1A0h+var_40], xmm7
                  vmovss  dword ptr [rsp+1A0h+inOutViewAngles+8], xmm0
                  vmovaps [rsp+1A0h+var_50], xmm8
                }
                BG_CalcLinkedViewValues(&_R14->predictedPlayerState, &inOutViewAngles);
                v20 = CgHandler::getHandler(localClientNum);
                WorldUpReferenceFrame::WorldUpReferenceFrame(&v76, &_R14->predictedPlayerState, v20, 1);
                WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v76, &inOutViewAngles);
                AnglesToAxis(&inOutViewAngles, &axis);
                AnglesToAxis(&turretCent->pose.angles, &in);
                MatrixInverse(&in, &out);
                MatrixMultiply(&axis, &out, &in1);
                AxisToAngles(&in1, &angles);
                __asm
                {
                  vmovss  xmm7, cs:__real@3b360b61
                  vmulss  xmm3, xmm7, dword ptr [rsp+1A0h+angles]
                  vmovss  xmm6, cs:__real@3f000000
                  vmulss  xmm4, xmm7, dword ptr [rsp+1A0h+angles+4]
                  vmovss  xmm5, cs:__real@43b40000
                  vaddss  xmm1, xmm3, xmm6
                  vxorps  xmm8, xmm8, xmm8
                  vroundss xmm2, xmm8, xmm1, 1
                  vsubss  xmm0, xmm3, xmm2
                  vmulss  xmm0, xmm0, xmm5
                  vaddss  xmm2, xmm4, xmm6
                  vroundss xmm3, xmm8, xmm2, 1
                  vmovss  dword ptr [rsp+1A0h+angles], xmm0
                  vsubss  xmm0, xmm4, xmm3
                  vmulss  xmm3, xmm7, dword ptr [rsp+1A0h+angles+8]
                  vmulss  xmm1, xmm0, xmm5
                  vmovss  dword ptr [rsp+1A0h+angles+4], xmm1
                  vaddss  xmm1, xmm3, xmm6
                  vroundss xmm2, xmm8, xmm1, 1
                  vsubss  xmm0, xmm3, xmm2
                  vmulss  xmm1, xmm0, xmm5
                  vmovss  dword ptr [rsp+1A0h+angles+8], xmm1
                }
                if ( v15 )
                {
                  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_bradleyGunPitchClamp_begin, "bg_bradleyGunPitchClamp_begin");
                  v40 = DCONST_DVARFLT_bg_bradleyGunPitchClamp_max;
                  v41 = "bg_bradleyGunPitchClamp_max";
                }
                else
                {
                  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_vindiaGunPitchClamp_begin, "bg_vindiaGunPitchClamp_begin");
                  v40 = DCONST_DVARFLT_bg_vindiaGunPitchClamp_max;
                  v41 = "bg_vindiaGunPitchClamp_max";
                }
                __asm { vmovaps xmm7, xmm0 }
                *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(v40, v41);
                __asm
                {
                  vcomiss xmm7, xmm0
                  vmovaps xmm8, xmm0
                }
                if ( !v43 )
                {
                  __asm
                  {
                    vcvtss2sd xmm0, xmm8, xmm0
                    vmovsd  [rsp+1A0h+var_160], xmm0
                    vcvtss2sd xmm1, xmm7, xmm7
                    vmovsd  [rsp+1A0h+var_168], xmm1
                  }
                  v47 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3344, ASSERT_TYPE_ASSERT, "( downClampBegin ) < ( downClampMax )", "%s < %s\n\t%g, %g", "downClampBegin", "downClampMax", v66, v68);
                  v43 = 0;
                  v44 = !v47;
                  if ( v47 )
                    __debugbreak();
                }
                __asm { vcomiss xmm7, dword ptr [rsp+1A0h+angles] }
                if ( v43 )
                {
                  __asm
                  {
                    vmovss  xmm0, cs:__real@42b40000
                    vmovaps [rsp+1A0h+var_60], xmm9
                    vsubss  xmm6, xmm0, xmm7
                    vxorps  xmm9, xmm9, xmm9
                    vcomiss xmm6, xmm9
                  }
                  if ( v43 | v44 )
                  {
                    __asm
                    {
                      vcvtss2sd xmm0, xmm6, xmm6
                      vmovsd  [rsp+1A0h+var_160], xmm0
                      vxorpd  xmm1, xmm1, xmm1
                      vmovsd  [rsp+1A0h+var_168], xmm1
                    }
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3353, ASSERT_TYPE_ASSERT, "( 0.0f ) < ( clampRange )", "%s < %s\n\t%g, %g", "0.0f", "clampRange", v67, v69) )
                      __debugbreak();
                  }
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rsp+1A0h+angles]
                    vsubss  xmm2, xmm0, xmm7
                    vdivss  xmm0, xmm2, xmm6; val
                    vmovss  xmm6, cs:__real@3f800000
                    vmovaps xmm2, xmm6; max
                    vxorps  xmm1, xmm1, xmm1; min
                  }
                  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                  __asm
                  {
                    vmovaps xmm9, [rsp+1A0h+var_60]
                    vsubss  xmm1, xmm6, xmm0
                    vmulss  xmm2, xmm1, xmm7
                    vmulss  xmm0, xmm0, xmm8
                    vaddss  xmm2, xmm2, xmm0
                    vmovss  dword ptr [rsp+1A0h+angles], xmm2
                  }
                }
                AnglesToAxis(&angles, &in1);
                MatrixMultiply(&in1, &in, &axis);
                AxisToAngles(&axis, (vec3_t *)&turretCent->pose.160);
                __asm
                {
                  vmovaps xmm8, [rsp+1A0h+var_50]
                  vmovaps xmm7, [rsp+1A0h+var_40]
                  vmovaps xmm6, [rsp+1A0h+var_30]
                }
                turretCent->pose.turret.useOnVehicleAngles = 1;
                return;
              }
            }
            else if ( !v16 )
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
  unsigned int v7; 
  centity_t *Entity; 
  int v11; 
  unsigned int prevLinkParent; 
  char v13; 
  unsigned int v39; 
  unsigned int v40; 
  unsigned int v41; 
  vec4_t inOrigin; 
  vec4_t quat; 
  tmat43_t<vec3_t> v49; 
  vec4_t result; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> out; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  _RBX = CG_GetEntity(localClientNum, entnum);
  if ( (*(_DWORD *)&_RBX->nextState.clientLinkInfo & 0x7FF) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2613, ASSERT_TYPE_ASSERT, "(li->parentId)", (const char *)&queryFormat, "li->parentId", -2i64) )
    __debugbreak();
  v7 = (*(_DWORD *)&_RBX->nextState.clientLinkInfo & 0x7FF) - 1;
  Entity = CG_GetEntity(localClientNum, v7);
  _RDI = Entity;
  if ( (Entity->flags & 1) == 0 )
  {
    Com_PrintWarning(14, "Ent #%i's parent, ent #%i, is not in client snapshot.\n", (unsigned int)entnum, v7);
    CG_SetPoseOrigin(&_RBX->pose, &vec3_origin);
    *(_QWORD *)_RBX->pose.angles.v = 0i64;
    _RBX->pose.angles.v[2] = 0.0;
    goto LABEL_40;
  }
  if ( (*(_DWORD *)&_RBX->nextState.clientLinkInfo & 0x100000) != 0 )
  {
    AnglesToAxis(&Entity->pose.angles, (tmat33_t<vec3_t> *)&axis);
    CG_GetPoseOrigin(&_RDI->pose, &axis.m[3]);
  }
  else if ( !CG_Entity_GetParentAxis(localClientNum, entnum, &_RBX->nextState.clientLinkInfo, Entity, &axis) )
  {
    CG_GetPoseOrigin(&_RDI->pose, (vec3_t *)&inOrigin);
    CG_SetPoseOrigin(&_RBX->pose, (const vec3_t *)&inOrigin);
    _RBX->pose.angles.v[0] = _RDI->pose.angles.v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+4Ch]
      vmovss  dword ptr [rbx+4Ch], xmm0
      vmovss  xmm1, dword ptr [rdi+50h]
      vmovss  dword ptr [rbx+50h], xmm1
    }
LABEL_39:
    memset(&inOrigin, 0, 0xCui64);
    goto LABEL_40;
  }
  _R13 = CG_GetLocalClientGlobals(localClientNum);
  v11 = *(_DWORD *)&_RBX->nextState.clientLinkInfo & 0x7FF;
  prevLinkParent = _RBX->prevLinkParent;
  v13 = BYTE2(_RBX->flags) & 1;
  if ( !v13 )
    goto LABEL_14;
  if ( prevLinkParent != v11 )
    goto LABEL_14;
  __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
  if ( !VecNCompareCustomEpsilon(_RBX->prevState.pos.trDelta.v, _RBX->nextState.lerp.pos.trDelta.v, *(float *)&_XMM2, 3) )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [r13+65E0h]
      vmovss  xmm0, dword ptr [rbx+1B8h]
      vsubss  xmm1, xmm0, dword ptr [rbx+13Ch]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rbx+13Ch]
      vmovss  dword ptr [rsp+7Ch], xmm3
      vmovss  xmm0, dword ptr [rbx+1BCh]
      vsubss  xmm1, xmm0, dword ptr [rbx+140h]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rbx+140h]
      vmovss  [rbp+40h+var_C0], xmm3
      vmovss  xmm0, dword ptr [rbx+1C0h]
      vsubss  xmm1, xmm0, dword ptr [rbx+144h]
      vmulss  xmm2, xmm1, xmm6
      vaddss  xmm3, xmm2, dword ptr [rbx+144h]
      vmovss  [rbp+40h+var_BC], xmm3
    }
  }
  else
  {
LABEL_14:
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+1B8h]
      vmovss  dword ptr [rsp+7Ch], xmm0
      vmovss  xmm1, dword ptr [rbx+1BCh]
      vmovss  [rbp+40h+var_C0], xmm1
      vmovss  xmm0, dword ptr [rbx+1C0h]
      vmovss  [rbp+40h+var_BC], xmm0
    }
  }
  if ( !v13 )
    goto LABEL_19;
  if ( prevLinkParent != v11 )
    goto LABEL_19;
  __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
  if ( !VecNCompareCustomEpsilon(_RBX->prevState.apos.trDelta.v, _RBX->nextState.lerp.apos.trDelta.v, *(float *)&_XMM2, 3) )
  {
    AnglesToQuat(&_RBX->prevState.apos.trDelta, &quat);
    AnglesToQuat(&_RBX->nextState.lerp.apos.trDelta, &inOrigin);
    __asm { vmovss  xmm2, dword ptr [r13+65E0h]; frac }
    QuatSlerp(&quat, &inOrigin, *(float *)&_XMM2, &result);
    QuatToAxis(&result, (tmat33_t<vec3_t> *)&v49);
  }
  else
  {
LABEL_19:
    AnglesToAxis(&_RBX->nextState.lerp.apos.trDelta, (tmat33_t<vec3_t> *)&v49);
  }
  MatrixMultiply43(&v49, &axis, &out);
  CG_SetPoseOrigin(&_RBX->pose, &out.m[3]);
  AxisToAngles((const tmat33_t<vec3_t> *)&out, &_RBX->pose.angles);
  if ( _RBX->prevState.pos.trType == TR_LINKED )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT_ADS) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2681, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::LINKED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::LINKED_TRAJECTORIES )") )
      __debugbreak();
    if ( _RBX->prevState.apos.trType != TR_LINKED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2682, ASSERT_TYPE_ASSERT, "(cent->prevState.apos.trType == TR_LINKED)", (const char *)&queryFormat, "cent->prevState.apos.trType == TR_LINKED") )
      __debugbreak();
    CG_GetPoseOrigin(&_RBX->pose, (vec3_t *)&inOrigin);
    _RDI = &_RBX->nextState.lerp.pos;
    if ( _RBX == (centity_t *)-416i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 82, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
      __debugbreak();
    __asm { vmovss  xmm0, dword ptr [rsp+140h+inOrigin] }
    if ( _RDI->trType == TR_LINEAR_STOP_SECURE )
    {
      __asm { vmovss  dword ptr [rsp+140h+quat], xmm0 }
      if ( (LODWORD(quat.v[0]) & 0x7F800000) == 2139095040 )
        goto LABEL_43;
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+140h+inOrigin+4]
        vmovss  dword ptr [rsp+140h+quat], xmm0
      }
      if ( (LODWORD(quat.v[0]) & 0x7F800000) == 2139095040 )
        goto LABEL_43;
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+140h+inOrigin+8]
        vmovss  dword ptr [rsp+140h+quat], xmm0
      }
      if ( (LODWORD(quat.v[0]) & 0x7F800000) == 2139095040 )
      {
LABEL_43:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 24, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
          __debugbreak();
      }
      v39 = LODWORD(inOrigin.v[0]) ^ ~s_trbase_aab_X;
      v40 = s_trbase_aab_Y ^ v39 ^ LODWORD(inOrigin.v[1]);
      v41 = s_trbase_aab_Z ^ v40 ^ LODWORD(inOrigin.v[2]);
      LODWORD(_RBX->nextState.lerp.pos.trBase.v[0]) = v39;
      LODWORD(_RBX->nextState.lerp.pos.trBase.v[1]) = v40;
      LODWORD(_RBX->nextState.lerp.pos.trBase.v[2]) = v41;
      memset(&quat, 0, 8ui64);
    }
    else
    {
      __asm
      {
        vmovss  dword ptr [rdi+0Ch], xmm0
        vmovss  xmm1, dword ptr [rsp+140h+inOrigin+4]
        vmovss  dword ptr [rdi+10h], xmm1
        vmovss  xmm0, dword ptr [rsp+140h+inOrigin+8]
        vmovss  dword ptr [rdi+14h], xmm0
      }
    }
    _RBX->nextState.lerp.apos.trBase.v[0] = _RBX->pose.angles.v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+4Ch]
      vmovss  dword ptr [rbx+1D4h], xmm0
      vmovss  xmm1, dword ptr [rbx+50h]
      vmovss  dword ptr [rbx+1D8h], xmm1
    }
    goto LABEL_39;
  }
LABEL_40:
  __asm { vmovaps xmm6, xmmword ptr [rsp+140h+var_48+8] }
}

/*
==============
CG_Entity_CalcPhysicsPositions
==============
*/
void CG_Entity_CalcPhysicsPositions(const LocalClientNum_t localClientNum, const CG_PhysicsObject *entityPhysicsObject, centity_t *cent)
{
  CG_PhysicsObject *v6; 
  __int32 v9; 
  unsigned int v10; 
  vec3_t trBase; 

  _RDI = cent;
  if ( !entityPhysicsObject && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2211, ASSERT_TYPE_ASSERT, "(entityPhysicsObject)", (const char *)&queryFormat, "entityPhysicsObject", -2i64) )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2212, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (_RDI->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2213, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( _RDI->prevState.pos.trType == TR_PHYSICS_CLIENT_AUTH )
  {
    if ( (_RDI->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2067, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
      __debugbreak();
    v6 = CG_PhysicsObject_Get(_RDI->nextState.number, localClientNum);
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2071, ASSERT_TYPE_ASSERT, "(entityPhysicsObject)", (const char *)&queryFormat, "entityPhysicsObject") )
      __debugbreak();
    if ( v6->physicsInstances[3 * localClientNum + 3] == -1 && CG_GetLocalClientGlobals(localClientNum)->time > _RDI->prevState.pos.trTime + 1000 )
    {
      Trajectory_GetTrBase(&_RDI->prevState.pos, &trBase);
      CG_SetPoseOrigin(&_RDI->pose, &trBase);
      _RDI->pose.angles.v[0] = _RDI->prevState.apos.trBase.v[0];
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+158h]
        vmovss  dword ptr [rdi+4Ch], xmm0
        vmovss  xmm1, dword ptr [rdi+15Ch]
        vmovss  dword ptr [rdi+50h], xmm1
      }
      memset(&trBase, 0, sizeof(trBase));
      return;
    }
  }
  v9 = 3 * localClientNum;
  if ( entityPhysicsObject->physicsInstances[3 * localClientNum + 3] == -1 )
  {
    CG_Entity_CreatePhysics(localClientNum, _RDI->nextState.number, 0);
    v10 = entityPhysicsObject->physicsInstances[v9 + 3];
    if ( v10 == -1 )
    {
      Trajectory_GetTrBase(&_RDI->prevState.pos, &trBase);
      CG_SetPoseOrigin(&_RDI->pose, &trBase);
      _RDI->pose.angles.v[0] = _RDI->prevState.apos.trBase.v[0];
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+158h]
        vmovss  dword ptr [rdi+4Ch], xmm0
        vmovss  xmm1, dword ptr [rdi+15Ch]
        vmovss  dword ptr [rdi+50h], xmm1
      }
      memset(&trBase, 0, sizeof(trBase));
      return;
    }
    if ( _RDI->prevState.pos.trType == TR_PHYSICS_CLIENT_AUTH )
    {
      CG_EntityWorkers_AcquireWriteLock_Physics(BASE);
      CG_PhysicsObject_LaunchClient((Physics_WorldId)(v9 + 3), _RDI, localClientNum);
      CG_EntityWorkers_ReleaseWriteLock_Physics(BASE);
      v10 = entityPhysicsObject->physicsInstances[v9 + 3];
    }
    if ( v10 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2253, ASSERT_TYPE_ASSERT, "(entityPhysicsObject->physicsInstances[Physics_GetClientAuthoritativeWorldId( localClientNum )] != 0xFFFFFFFF)", (const char *)&queryFormat, "entityPhysicsObject->physicsInstances[Physics_GetClientAuthoritativeWorldId( localClientNum )] != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
  }
  Profile_Begin(686);
  CG_EntityWorkers_AcquireWriteLock_Physics(BASE);
  CG_PhysicsObject_SetEntityTransforms((Physics_WorldId)(v9 + 3), _RDI->nextState.number, localClientNum);
  CG_PhysicsObject_SetEntityTransforms((Physics_WorldId)(v9 + 2), _RDI->nextState.number, localClientNum);
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
  char *fmta; 
  __int64 v25; 

  if ( entityNum < 0x2800 )
  {
    _R15 = pos;
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
        __asm
        {
          vmovss  xmm0, [rsp+48h+radius]
          vmovss  xmm3, dword ptr [r15+4]
          vmovss  xmm2, dword ptr [r15]
          vmovss  xmm1, dword ptr [r15+8]
          vcvtss2sd xmm0, xmm0, xmm0
          vcvtss2sd xmm3, xmm3, xmm3
          vcvtss2sd xmm2, xmm2, xmm2
          vcvtss2sd xmm1, xmm1, xmm1
          vmovsd  [rsp+48h+var_20], xmm0
          vmovq   r9, xmm3
          vmovq   r8, xmm2
          vmovsd  [rsp+48h+fmt], xmm1
        }
        Com_PrintWarning(8, "  Pos=(%3.0f,%3.0f,%3.0f) Radius=%3.0f.\n", _R8, _R9, fmta, v25);
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
  char v31; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovss  xmm7, dword ptr [rdx+8Ch]
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm8, dword ptr [rdx+2Ch]
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  xmm9, dword ptr [rcx+24h]
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovss  xmm10, dword ptr [rdx+30h]
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovss  xmm11, dword ptr [rcx+20h]
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovss  xmm12, dword ptr [rcx+28h]
    vmulss  xmm1, xmm11, xmm8
    vmovaps [rsp+0D8h+var_88], xmm13
    vmovss  xmm13, dword ptr [rdx+34h]
    vmulss  xmm0, xmm10, xmm9
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm13, xmm12
    vaddss  xmm3, xmm2, xmm1
    vcomiss xmm3, xmm7
  }
  _R11 = &v31;
  __asm
  {
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
  }
}

/*
==============
CG_Entity_ClampPrimaryLightOrigin
==============
*/
void CG_Entity_ClampPrimaryLightOrigin(GfxLight *light, const ComPrimaryLight *refLight)
{
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+38h]
    vsubss  xmm4, xmm0, dword ptr [rdx+44h]
    vmovss  xmm1, dword ptr [rcx+3Ch]
    vsubss  xmm5, xmm1, dword ptr [rdx+48h]
    vmovss  xmm0, dword ptr [rcx+40h]
    vmovss  xmm3, dword ptr [rdx+90h]
    vmulss  xmm1, xmm4, xmm4
    vmovaps [rsp+18h+var_18], xmm6
    vsubss  xmm6, xmm0, dword ptr [rdx+4Ch]
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm1, xmm2, xmm1
    vmulss  xmm0, xmm3, xmm3
    vcomiss xmm1, xmm0
    vsqrtss xmm0, xmm1, xmm1
    vdivss  xmm3, xmm3, xmm0
    vmulss  xmm1, xmm3, xmm4
    vaddss  xmm0, xmm1, dword ptr [rdx+44h]
    vmovss  dword ptr [rcx+38h], xmm0
    vmulss  xmm2, xmm5, xmm3
    vaddss  xmm1, xmm2, dword ptr [rdx+48h]
    vmulss  xmm0, xmm6, xmm3
    vmovss  dword ptr [rcx+3Ch], xmm1
    vaddss  xmm2, xmm0, dword ptr [rdx+4Ch]
    vmovss  dword ptr [rcx+40h], xmm2
    vmovaps xmm6, [rsp+18h+var_18]
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
  __int64 v22; 
  centity_t *v26; 
  const centity_t *i; 
  CgHandler *v28; 
  Physics_RelationshipSystem PhysicsRelationshipSystemFlag; 
  unsigned __int16 v30; 
  bool v31; 
  unsigned __int16 v32; 
  bool v33; 
  Physics_InstantiationForceType v34; 
  Physics_InstantiationForceType v35; 
  const ScriptableDef *def; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  bool forQueryOnly; 
  __int32 v46; 
  unsigned int v47; 
  __int64 v48; 
  Physics_WorldId v49; 
  unsigned int v50; 
  XModel *v51; 
  __int32 v52; 
  unsigned int v53; 
  __int16 v54; 
  __int16 v55; 
  __int16 v56; 
  __int16 v57; 
  char v58; 
  bool v60; 
  bool IsInstanceStatic; 
  unsigned int scriptableIndex; 
  int contents; 
  Physics_InstantiationForceType forceType; 
  int eType; 
  int ref; 
  Physics_InstantiationForceType v68[2]; 
  vec3_t outOrigin; 
  XModel *baseModel; 
  XModel *detailModel; 
  __int64 v72; 
  Physics_InstantiateShapeOverride shapeOverride; 
  Physics_InstantiateShapeOverride v74; 
  __int64 v75; 
  vec4_t quat; 
  vec3_t angles; 

  v75 = -2i64;
  v3 = entNum;
  Sys_ProfBeginNamedEvent(0xFFFF6347, "CG_Entity_CreatePhysics");
  _RSI = CG_GetEntity(localClientNum, v3);
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1342, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( (_RSI->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1343, ASSERT_TYPE_ASSERT, "(CENextValid( entity ))", (const char *)&queryFormat, "CENextValid( entity )") )
    __debugbreak();
  if ( _RSI->nextState.eType == ET_PHYSICS_VOLUME )
  {
    Sys_ProfBeginNamedEvent(0xFFFF6347, "CG_Entity_CreatePhysics PhysicsVolume");
    CG_EntityWorkers_AcquireWriteLock_Physics(BASE);
    CG_PhysicsVolume_CreatePhysics(localClientNum, v3);
    CG_EntityWorkers_ReleaseWriteLock_Physics(BASE);
    Sys_ProfEndNamedEvent();
  }
  else
  {
    if ( (_RSI->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 990, ASSERT_TYPE_ASSERT, "(CENextValid( ent ))", (const char *)&queryFormat, "CENextValid( ent )") )
      __debugbreak();
    baseModel = NULL;
    physicsAsset = NULL;
    forceType = -1;
    *(_QWORD *)v68 = 0i64;
    scriptableIndex = -1;
    v7 = NULL;
    detailModel = NULL;
    v58 = 0;
    contents = 0;
    ClientDObj = Com_GetClientDObj(_RSI->nextState.number, localClientNum);
    v9 = ClientDObj;
    eType = 256;
    if ( ClientDObj && ClientDObj->numModels )
    {
      Model = (XModel *)DObjGetModel(ClientDObj, 0);
      baseModel = Model;
      if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1021, ASSERT_TYPE_ASSERT, "((*baseModel))", (const char *)&queryFormat, "(*baseModel)") )
        __debugbreak();
      physicsAsset = Model->physicsAsset;
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RSI->nextState.lerp.eFlags, ACTIVE, 1u) )
      {
        v11 = &cm.mapEnts->cmodels[_RSI->nextState.index.brushModel];
        *(_QWORD *)v68 = v11->physicsAsset;
        if ( *(_QWORD *)v68 )
          scriptableIndex = v11->physicsShapeOverrideIdx;
        else
          scriptableIndex = -1;
      }
    }
    else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RSI->nextState.lerp.eFlags, ACTIVE, 1u) )
    {
      v12 = &cm.mapEnts->cmodels[_RSI->nextState.index.brushModel];
      physicsShapeOverrideIdx = v12->physicsShapeOverrideIdx;
      if ( physicsShapeOverrideIdx == 0xFFFF || !WorldCollision_GetMapEntsShape(physicsShapeOverrideIdx) )
      {
        if ( _RSI->nextState.eType == ET_SCRIPTMOVER && (_RSI->nextState.lerp.u.anonymous.data[2] & 0x100) != 0 )
        {
          Handler = CgHandler::getHandler(localClientNum);
          physicsAsset = BG_GetEdgePhysicsProxyAsset(Handler, &_RSI->nextState);
          if ( physicsAsset )
          {
            v58 = 1;
            contents = 0x80000000;
          }
        }
      }
      else
      {
        physicsAsset = v12->physicsAsset;
        forceType = v12->physicsShapeOverrideIdx;
        v58 = 1;
        contents = CM_ContentsOfBrushModel(_RSI->nextState.index.brushModel);
      }
      v3 = entNum;
    }
    else if ( CG_Entity_IsTriggerVolume(_RSI) )
    {
      TriggerModel = CM_GetTriggerModel(_RSI->nextState.index.brushModel);
      physicsAsset = TriggerModel->physicsAsset;
      forceType = TriggerModel->physicsShapeOverrideIdx;
      v58 = 1;
      contents = 1078198280;
    }
    if ( _RSI->nextState.eType != ET_ITEM )
      goto LABEL_31;
    v14 = DCONST_DVARBOOL_skipItemDetailModelPhysics;
    if ( !DCONST_DVARBOOL_skipItemDetailModelPhysics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skipItemDetailModelPhysics") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( !v14->current.enabled || _RSI->prevState.pos.trType != TR_PHYSICS_SERVER_AUTH )
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
        _R15 = CG_PhysicsObject_Get(v3, localClientNum);
        if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1404, ASSERT_TYPE_ASSERT, "(physicsObj)", (const char *)&queryFormat, "physicsObj") )
          __debugbreak();
        v22 = 3 * localClientNum;
        v72 = v22;
        if ( _R15->physicsInstances[v22 + 2] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1405, ASSERT_TYPE_ASSERT, "(physicsObj->physicsInstances[ Physics_GetClientPredictiveWorldId( localClientNum ) ] == 0xFFFFFFFF)", (const char *)&queryFormat, "physicsObj->physicsInstances[ Physics_GetClientPredictiveWorldId( localClientNum ) ] == PHYSICSINSTANCEID_INVALID") )
          __debugbreak();
        if ( _R15->physicsInstances[v22 + 3] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1406, ASSERT_TYPE_ASSERT, "(physicsObj->physicsInstances[ Physics_GetClientAuthoritativeWorldId( localClientNum ) ] == 0xFFFFFFFF)", (const char *)&queryFormat, "physicsObj->physicsInstances[ Physics_GetClientAuthoritativeWorldId( localClientNum ) ] == PHYSICSINSTANCEID_INVALID") )
          __debugbreak();
        if ( _R15->physicsInstances[v22 + 4] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1407, ASSERT_TYPE_ASSERT, "(physicsObj->physicsInstances[ Physics_GetClientDetailWorldId( localClientNum ) ] == 0xFFFFFFFF)", (const char *)&queryFormat, "physicsObj->physicsInstances[ Physics_GetClientDetailWorldId( localClientNum ) ] == PHYSICSINSTANCEID_INVALID") )
          __debugbreak();
        CG_GetLocalClientGlobals(localClientNum);
        _R15->mapping = (unsigned int)(_RSI->prevState.pos.trType - 11) <= 1 || _RSI->pose.eType == 14;
        CG_GetPoseOrigin(&_RSI->pose, &outOrigin);
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+48h]
          vmovss  dword ptr [rbp+90h+angles], xmm0
          vmovss  xmm1, dword ptr [rsi+4Ch]
          vmovss  dword ptr [rbp+90h+angles+4], xmm1
          vmovss  xmm0, dword ptr [rsi+50h]
          vmovss  dword ptr [rbp+90h+angles+8], xmm0
        }
        AnglesToQuat(&angles, &quat);
        if ( v3 > 0x7FFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1428, ASSERT_TYPE_ASSERT, "(entNum >= 0 && entNum < 32767)", "%s\n\tEntity Number truncated to a short here - but it doesn't fit", "entNum >= 0 && entNum < 32767") )
          __debugbreak();
        v26 = _RSI;
        for ( i = CG_Entity_GetLinkToParent(localClientNum, _RSI); i; i = CG_Entity_GetLinkToParent(localClientNum, i) )
          v26 = (centity_t *)i;
        if ( v26 && v26 != _RSI )
          eType = (unsigned __int16)v26->nextState.eType;
        v28 = CgHandler::getHandler(localClientNum);
        PhysicsRelationshipSystemFlag = BgHandler::GetPhysicsRelationshipSystemFlag(v28, Physics_RefSystem_CEntities, _RSI->nextState.eType, (entityType_s)eType);
        v30 = truncate_cast<unsigned short,int>(entNum);
        v31 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RSI->nextState.lerp.eFlags, ACTIVE, 1u);
        eType = Physics_MakeRef(Physics_RefSystem_CEntities, Physics_RelationshipSystem_None, !v31, v30);
        v32 = truncate_cast<unsigned short,int>(entNum);
        v33 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RSI->nextState.lerp.eFlags, ACTIVE, 1u);
        ref = Physics_MakeRef(Physics_RefSystem_CEntities, PhysicsRelationshipSystemFlag, !v33, v32);
        shapeOverride.customShape = NULL;
        shapeOverride.massProperties = NULL;
        *(_WORD *)&shapeOverride.overrideMass = 0;
        shapeOverride.overrideTensor = 0;
        shapeOverride.shapeOverride = forceType;
        shapeOverride.physicsAssetAddendum = *(const PhysicsAsset **)v68;
        shapeOverride.shapeAddendum = scriptableIndex;
        v74.customShape = NULL;
        v74.physicsAssetAddendum = NULL;
        v74.shapeAddendum = -1;
        v74.massProperties = NULL;
        *(_WORD *)&v74.overrideMass = 0;
        v74.overrideTensor = 0;
        v74.shapeOverride = forceType;
        v34 = Physics_InstantiationForceTypeKeyframedAtMost;
        if ( _RSI->nextState.eType == ET_VEHICLE )
          v34 = Physics_InstantiationForceTypeNone;
        forceType = v34;
        v35 = Physics_InstantiationForceTypeNone;
        if ( _RSI->prevState.pos.trType != TR_PHYSICS_CLIENT_AUTH )
          v35 = Physics_InstantiationForceTypeKeyframedAtMost;
        v68[0] = v35;
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+90h+outOrigin]
          vmovss  dword ptr [r15+2A0h], xmm0
          vmovss  xmm1, dword ptr [rbp+90h+outOrigin+4]
          vmovss  dword ptr [r15+2A4h], xmm1
          vmovss  xmm0, dword ptr [rbp+90h+outOrigin+8]
          vmovss  dword ptr [r15+2A8h], xmm0
          vmovss  xmm1, dword ptr [rbp+90h+quat]
          vmovss  dword ptr [r15+2ACh], xmm1
          vmovss  xmm0, dword ptr [rbp+90h+quat+4]
          vmovss  dword ptr [r15+2B0h], xmm0
          vmovss  xmm1, dword ptr [rbp+90h+quat+8]
          vmovss  dword ptr [r15+2B4h], xmm1
          vmovss  xmm0, dword ptr [rbp+90h+quat+0Ch]
          vmovss  dword ptr [r15+2B8h], xmm0
        }
        _R15->detailCache.cached = 0;
        if ( _RSI->nextState.eType == ET_SCRIPTMOVER && _RSI->nextState.un.scriptMoverType == 2 )
        {
          if ( !ScriptableCl_GetIndexForEntity(localClientNum, _RSI, &scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1459, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetIndexForEntity( localClientNum, entity, &scriptableIndex ) == qtrue)", (const char *)&queryFormat, "ScriptableCl_GetIndexForEntity( localClientNum, entity, &scriptableIndex ) == qtrue") )
            __debugbreak();
          def = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def;
          InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
          if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 260, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
            __debugbreak();
          if ( (def->flags & 1) == 0 || (*((_BYTE *)InstanceCommonContext + 60) & 0x40) != 0 )
          {
            if ( _RSI->prevState.pos.trType == TR_PHYSICS_CLIENT_AUTH && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 1468, ASSERT_TYPE_ASSERT, "(entity->prevState.pos.trType != TR_PHYSICS_CLIENT_AUTH)", (const char *)&queryFormat, "entity->prevState.pos.trType != TR_PHYSICS_CLIENT_AUTH") )
              __debugbreak();
            forceType = Physics_InstantiationForceTypeStatic;
            v68[0] = Physics_InstantiationForceTypeStatic;
          }
        }
        forQueryOnly = CG_Entity_IsTriggerVolume(_RSI);
        v60 = forQueryOnly;
        v46 = 3 * localClientNum;
        if ( _RSI->prevState.pos.trType == TR_PHYSICS_CLIENT_AUTH )
        {
          v48 = v72;
        }
        else
        {
          scriptableIndex = v46 + 2;
          v47 = Physics_InstantiateAsset((Physics_WorldId)(v46 + 2), baseModel, physicsAsset, ref, &outOrigin, &quat, 1, 0, tryStartDeactivated, &shapeOverride, forceType, Physics_InstantiationFilterTypeClientReplication, forQueryOnly);
          v48 = v72;
          _R15->physicsInstances[v72 + 2] = v47;
          if ( v47 != -1 && v58 )
            Physics_SetInstanceContents((Physics_WorldId)scriptableIndex, v47, contents);
        }
        v49 = v46 + 3;
        _R15->physicsInstances[v48 + 3] = Physics_InstantiateAsset(v49, baseModel, physicsAsset, eType, &outOrigin, &quat, 1, 0, tryStartDeactivated, &shapeOverride, v68[0], Physics_InstantiationFilterTypeClientSimulation, v60);
        ++physicsAsset->usageCounter.clientEnt;
        v50 = _R15->physicsInstances[v48 + 3];
        if ( v50 != -1 )
        {
          IsInstanceStatic = Physics_IsInstanceStatic(v49, v50);
          if ( v58 )
            Physics_SetInstanceContents(v49, _R15->physicsInstances[v48 + 3], contents);
        }
        v51 = detailModel;
        v52 = 3 * localClientNum + 4;
        if ( detailModel )
        {
          ++detailModel->physicsUsageCounter.clientEnt;
          v53 = Physics_InstantiateDetailModel((Physics_WorldId)v52, v51, eType, &outOrigin, &quat, 1, tryStartDeactivated, v60, 0);
        }
        else
        {
          v53 = Physics_InstantiateAsset((Physics_WorldId)v52, baseModel, physicsAsset, eType, &outOrigin, &quat, 1, 0, tryStartDeactivated, &v74, Physics_InstantiationForceTypeStatic, Physics_InstantiationFilterTypeNone, v60);
        }
        _R15->physicsInstances[v52] = v53;
        if ( v58 && v53 != -1 )
          Physics_SetInstanceContents((Physics_WorldId)v52, v53, contents);
        _RSI->pose.physicsId = entNum + 1;
        ref = 3 * localClientNum + 2;
        CG_PhysicsObject_CreatePropagationMapping((Physics_WorldId)ref, v49, _R15);
        if ( v9 && v9->numModels )
        {
          CG_PhysicsObject_CreateDynamicBodyToPoseMapping(v49, _R15, v9, physicsAsset);
          CG_PhysicsObject_CreateKeyframedBodyToPoseMapping((Physics_WorldId)ref, _R15, v9, physicsAsset);
          CG_PhysicsObject_CreateDetailBoneMapping((Physics_WorldId)v52, _R15, v9, physicsAsset);
        }
        if ( _RSI->prevState.pos.trType == TR_PHYSICS_CLIENT_AUTH )
          CG_PhysicsObject_LaunchClient(v49, _RSI, localClientNum);
        v54 = truncate_cast<short,int>(entNum);
        CG_PhysicsObject_MarkPhysicsObjectAsUsed(localClientNum, v54, 1);
        v55 = truncate_cast<short,int>(entNum);
        CG_PhysicsObject_MarkPhysicsObjectAsMovable(localClientNum, v55, !IsInstanceStatic);
        v56 = truncate_cast<short,int>(entNum);
        CG_PhysicsObject_MarkPhysicsObjectAsShown(localClientNum, v56, 1);
        v57 = truncate_cast<short,int>(entNum);
        CG_PhysicsObject_CachePrimaryBodies(localClientNum, v57);
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
  float characterEVOffset; 
  const dvar_t *v9; 
  unsigned int v10; 
  float v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  int integer; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  const dvar_t *v19; 
  GfxSceneHudOutlineInfo result; 

  _RBX = entityMutableShaderData;
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
      _RAX = CG_CustomizationStreamingMP_DebugGetHudOutlineInfo(&result, v5);
      __asm { vmovups ymm0, ymmword ptr [rax] }
      characterEVOffset = _RAX->characterEVOffset;
      __asm { vmovups ymmword ptr [rbx+88h], ymm0 }
      _RBX->hudOutlineInfo.characterEVOffset = characterEVOffset;
    }
  }
  v9 = DCONST_DVARINT_cg_drawWeaponStreaming;
  if ( !DCONST_DVARINT_cg_drawWeaponStreaming && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawWeaponStreaming") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.integer == 2 )
  {
    v10 = obj->entnum - 1;
    if ( v10 <= 0x7FE )
    {
      _RAX = CG_WeaponStreamingMP_DebugGetHudOutlineInfo(&result, v10);
      __asm { vmovups ymm0, ymmword ptr [rax] }
      v13 = _RAX->characterEVOffset;
      __asm { vmovups ymmword ptr [rbx+88h], ymm0 }
      _RBX->hudOutlineInfo.characterEVOffset = v13;
    }
  }
  v14 = DCONST_DVARBOOL_r_hudOutlineDebugTweakForceEnable;
  if ( !DCONST_DVARBOOL_r_hudOutlineDebugTweakForceEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineDebugTweakForceEnable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  if ( v14->current.enabled )
  {
    _RBX->hudOutlineInfo.color = -1;
    v15 = DCONST_DVARINT_r_hudOutlineDebugTweakForceMode;
    if ( !DCONST_DVARINT_r_hudOutlineDebugTweakForceMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineDebugTweakForceMode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    integer = v15->current.integer;
    if ( integer != -1 )
    {
      _RBX->hudOutlineInfo.renderMode = truncate_cast<unsigned char,int>(integer);
      v17 = DCONST_DVARINT_r_hudOutlineDebugTweakLineWidth;
      if ( !DCONST_DVARINT_r_hudOutlineDebugTweakLineWidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineDebugTweakLineWidth") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v17);
      _RBX->hudOutlineInfo.lineWidth = v17->current.color[0];
      v18 = DCONST_DVARBOOL_r_hudOutlineDebugTweakDrawOccluded;
      if ( !DCONST_DVARBOOL_r_hudOutlineDebugTweakDrawOccluded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineDebugTweakDrawOccluded") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      _RBX->hudOutlineInfo.drawOccludedPixels = v18->current.enabled;
      v19 = DCONST_DVARBOOL_r_hudOutlineDebugTweakDrawNonOccluded;
      if ( !DCONST_DVARBOOL_r_hudOutlineDebugTweakDrawNonOccluded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_hudOutlineDebugTweakDrawNonOccluded") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      _RBX->hudOutlineInfo.drawNonOccludedPixels = v19->current.enabled;
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
  const dvar_t *v10; 
  vec3_t outOrigin; 

  __asm { vmovaps [rsp+78h+var_18], xmm6 }
  PoseExtended = CG_GetPoseExtended(localClientNum, entnum, 0);
  CG_GetPoseOrigin(PoseExtended, &outOrigin);
  __asm
  {
    vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin; r_globals_t rg
    vsubss  xmm3, xmm0, dword ptr [rsp+78h+outOrigin]
    vmovss  xmm1, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+4; r_globals_t rg
    vsubss  xmm2, xmm1, dword ptr [rsp+78h+outOrigin+4]
    vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+8; r_globals_t rg
    vsubss  xmm4, xmm0, dword ptr [rsp+78h+outOrigin+8]
  }
  v10 = DVARFLT_cg_animLODScale;
  __asm
  {
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vsqrtss xmm6, xmm2, xmm2
  }
  if ( !DVARFLT_cg_animLODScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_animLODScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  __asm
  {
    vmulss  xmm1, xmm6, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.invFovScale; r_globals_t rg
    vmulss  xmm0, xmm1, dword ptr [rbx+28h]
    vmovaps xmm6, [rsp+78h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_Entity_GetAnimationLodScaledDistance
==============
*/

float __fastcall CG_Entity_GetAnimationLodScaledDistance(double distance)
{
  const dvar_t *v2; 

  v2 = DVARFLT_cg_animLODScale;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps xmm6, xmm0
  }
  if ( !DVARFLT_cg_animLODScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_animLODScale") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  __asm
  {
    vmulss  xmm1, xmm6, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.invFovScale; r_globals_t rg
    vmulss  xmm0, xmm1, dword ptr [rbx+28h]
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return *(float *)&_XMM0;
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
  const char *v20; 
  int v21; 
  const char *v22; 
  const DObj *ClientDObj; 
  const DObj *v24; 
  const cpose_t *PoseExtended; 
  __int64 v39; 
  __int64 v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 

  v4 = dobjHandle;
  _RDI = orient;
  if ( (unsigned int)dobjHandle >= 0x9E5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2093, ASSERT_TYPE_ASSERT, "(unsigned)( dobjHandle ) < (unsigned)( ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", "dobjHandle doesn't index CLIENT_DOBJ_HANDLE_MAX\n\t%i not in [0, %i)", dobjHandle, 2533) )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2094, ASSERT_TYPE_ASSERT, "(orient)", (const char *)&queryFormat, "orient") )
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
    v24 = ClientDObj;
    if ( ClientDObj )
    {
      if ( DObjVerifyNumBones(ClientDObj) )
      {
        if ( DObjIsValidBoneIndex(v24, boneIndex) )
        {
          PoseExtended = CG_GetPoseExtended(localClientNum, v4, 0);
          if ( !PoseExtended && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2149, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
            __debugbreak();
          if ( CG_DObjGetWorldBoneMatrix(PoseExtended, v24, boneIndex, &_RDI->axis, &_RDI->origin) )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rdi]
              vmovss  [rsp+58h+arg_8], xmm0
            }
            if ( (v53 & 0x7F800000) == 2139095040 )
              goto LABEL_68;
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+4]
              vmovss  [rsp+58h+arg_8], xmm0
            }
            if ( (v54 & 0x7F800000) == 2139095040 )
              goto LABEL_68;
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+8]
              vmovss  [rsp+58h+arg_8], xmm0
            }
            if ( (v55 & 0x7F800000) == 2139095040 )
            {
LABEL_68:
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2158, ASSERT_TYPE_SANITY, "( !IS_NAN( ( orient->origin )[0] ) && !IS_NAN( ( orient->origin )[1] ) && !IS_NAN( ( orient->origin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( orient->origin )[0] ) && !IS_NAN( ( orient->origin )[1] ) && !IS_NAN( ( orient->origin )[2] )") )
                __debugbreak();
            }
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+0Ch]
              vmovss  [rsp+58h+arg_8], xmm0
            }
            if ( (v56 & 0x7F800000) == 2139095040 )
              goto LABEL_69;
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+10h]
              vmovss  [rsp+58h+arg_8], xmm0
            }
            if ( (v57 & 0x7F800000) == 2139095040 )
              goto LABEL_69;
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+14h]
              vmovss  [rsp+58h+arg_8], xmm0
            }
            if ( (v58 & 0x7F800000) == 2139095040 )
            {
LABEL_69:
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2159, ASSERT_TYPE_SANITY, "( !IS_NAN( ( orient->axis[0] )[0] ) && !IS_NAN( ( orient->axis[0] )[1] ) && !IS_NAN( ( orient->axis[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( orient->axis[0] )[0] ) && !IS_NAN( ( orient->axis[0] )[1] ) && !IS_NAN( ( orient->axis[0] )[2] )") )
                __debugbreak();
            }
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+18h]
              vmovss  [rsp+58h+arg_8], xmm0
            }
            if ( (v59 & 0x7F800000) == 2139095040 )
              goto LABEL_70;
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+1Ch]
              vmovss  [rsp+58h+arg_8], xmm0
            }
            if ( (v60 & 0x7F800000) == 2139095040 )
              goto LABEL_70;
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+20h]
              vmovss  [rsp+58h+arg_8], xmm0
            }
            if ( (v61 & 0x7F800000) == 2139095040 )
            {
LABEL_70:
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2160, ASSERT_TYPE_SANITY, "( !IS_NAN( ( orient->axis[1] )[0] ) && !IS_NAN( ( orient->axis[1] )[1] ) && !IS_NAN( ( orient->axis[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( orient->axis[1] )[0] ) && !IS_NAN( ( orient->axis[1] )[1] ) && !IS_NAN( ( orient->axis[1] )[2] )") )
                __debugbreak();
            }
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+24h]
              vmovss  [rsp+58h+arg_8], xmm0
            }
            if ( (v62 & 0x7F800000) != 2139095040 )
            {
              __asm
              {
                vmovss  xmm0, dword ptr [rdi+28h]
                vmovss  [rsp+58h+arg_8], xmm0
              }
              if ( (v63 & 0x7F800000) != 2139095040 )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rdi+2Ch]
                  vmovss  [rsp+58h+arg_8], xmm0
                }
                if ( (v64 & 0x7F800000) != 2139095040 )
                  return 1;
              }
            }
            v20 = "!IS_NAN( ( orient->axis[2] )[0] ) && !IS_NAN( ( orient->axis[2] )[1] ) && !IS_NAN( ( orient->axis[2] )[2] )";
            v21 = 2161;
            v22 = "( !IS_NAN( ( orient->axis[2] )[0] ) && !IS_NAN( ( orient->axis[2] )[1] ) && !IS_NAN( ( orient->axis[2] )[2] ) )";
            goto LABEL_63;
          }
        }
      }
      else
      {
        DObjDumpInfo(v24);
        LODWORD(v39) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2134, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid dobj at entity %i (dobj->numBones does not match models). Copy log above.", v39) )
          __debugbreak();
        LODWORD(v40) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2136, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid dobj at entity %i (dobj->numBones does not match models).", v40) )
          __debugbreak();
      }
    }
    return 0;
  }
  CG_Utils_GetDObjOrientation(localClientNum, v4, &_RDI->axis, &_RDI->origin);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+0Ch]
    vmovss  [rsp+58h+arg_8], xmm0
  }
  if ( (v41 & 0x7F800000) == 2139095040 )
    goto LABEL_71;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+10h]
    vmovss  [rsp+58h+arg_8], xmm0
  }
  if ( (v42 & 0x7F800000) == 2139095040 )
    goto LABEL_71;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+14h]
    vmovss  [rsp+58h+arg_8], xmm0
  }
  if ( (v43 & 0x7F800000) == 2139095040 )
  {
LABEL_71:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2115, ASSERT_TYPE_SANITY, "( !IS_NAN( ( orient->axis[0] )[0] ) && !IS_NAN( ( orient->axis[0] )[1] ) && !IS_NAN( ( orient->axis[0] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( orient->axis[0] )[0] ) && !IS_NAN( ( orient->axis[0] )[1] ) && !IS_NAN( ( orient->axis[0] )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+18h]
    vmovss  [rsp+58h+arg_8], xmm0
  }
  if ( (v44 & 0x7F800000) == 2139095040 )
    goto LABEL_72;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+1Ch]
    vmovss  [rsp+58h+arg_8], xmm0
  }
  if ( (v45 & 0x7F800000) == 2139095040 )
    goto LABEL_72;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+20h]
    vmovss  [rsp+58h+arg_8], xmm0
  }
  if ( (v46 & 0x7F800000) == 2139095040 )
  {
LABEL_72:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2116, ASSERT_TYPE_SANITY, "( !IS_NAN( ( orient->axis[1] )[0] ) && !IS_NAN( ( orient->axis[1] )[1] ) && !IS_NAN( ( orient->axis[1] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( orient->axis[1] )[0] ) && !IS_NAN( ( orient->axis[1] )[1] ) && !IS_NAN( ( orient->axis[1] )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+24h]
    vmovss  [rsp+58h+arg_8], xmm0
  }
  if ( (v47 & 0x7F800000) == 2139095040 )
    goto LABEL_73;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  [rsp+58h+arg_8], xmm0
  }
  if ( (v48 & 0x7F800000) == 2139095040 )
    goto LABEL_73;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+2Ch]
    vmovss  [rsp+58h+arg_8], xmm0
  }
  if ( (v49 & 0x7F800000) == 2139095040 )
  {
LABEL_73:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2117, ASSERT_TYPE_SANITY, "( !IS_NAN( ( orient->axis[2] )[0] ) && !IS_NAN( ( orient->axis[2] )[1] ) && !IS_NAN( ( orient->axis[2] )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( orient->axis[2] )[0] ) && !IS_NAN( ( orient->axis[2] )[1] ) && !IS_NAN( ( orient->axis[2] )[2] )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+58h+arg_8], xmm0
  }
  if ( (v50 & 0x7F800000) != 2139095040 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+4]
      vmovss  [rsp+58h+arg_8], xmm0
    }
    if ( (v51 & 0x7F800000) != 2139095040 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+8]
        vmovss  [rsp+58h+arg_8], xmm0
      }
      if ( (v52 & 0x7F800000) != 2139095040 )
        return 1;
    }
  }
  v20 = "!IS_NAN( ( orient->origin )[0] ) && !IS_NAN( ( orient->origin )[1] ) && !IS_NAN( ( orient->origin )[2] )";
  v21 = 2118;
  v22 = "( !IS_NAN( ( orient->origin )[0] ) && !IS_NAN( ( orient->origin )[1] ) && !IS_NAN( ( orient->origin )[2] ) )";
LABEL_63:
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", v21, ASSERT_TYPE_SANITY, v22, (const char *)&queryFormat, v20) )
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
  HudData v6; 
  int pm_type; 
  bool v10; 
  int v11; 
  int v12; 
  const HudOutlineDef *HudOutlineDefFromPlayerState; 
  CgHandler *Handler; 
  bool drawInStencil; 
  int hudOutlineStartTime; 
  unsigned int Color; 
  int outlineWidth; 
  vec3_t playerViewOrigin; 
  vec3_t outOrigin; 

  __asm { vmovups ymm0, ymmword ptr cs:NULL_HUDOUTLINE_INFO_2.color }
  _R14 = result;
  v6.0 = ($D69577AC11C1636F320D0973E2FBC7CA)cent->nextState.hudData;
  pm_type = cgameGlob->predictedPlayerState.pm_type;
  _RDI = cgameGlob;
  __asm { vmovups ymmword ptr [rcx], ymm0 }
  result->characterEVOffset = NULL_HUDOUTLINE_INFO_2.characterEVOffset;
  v10 = CG_Utils_StencilScriptControlled((const LocalClientNum_t)cgameGlob->localClientNum);
  v11 = *(_BYTE *)&v6.0 & 0x3F;
  if ( v11 )
  {
    if ( !_RDI->scopeForceEnemyOutlines && pm_type != 5 )
    {
      v12 = _RDI->time - _RDI->predictedPlayerState.deltaTime;
      if ( cent->currentHudOutlineIndex != v11 )
      {
        cent->hudOutlineStartTime = v12;
        cent->currentHudOutlineIndex = v11;
      }
      HudOutlineDefFromPlayerState = BG_GetHudOutlineDefFromPlayerState(&_RDI->predictedPlayerState, v11);
      if ( HudOutlineDefFromPlayerState )
      {
        Handler = CgHandler::getHandler(_RDI->localClientNum);
        if ( BG_HudOutline_ShouldDrawOnEnt(HudOutlineDefFromPlayerState, Handler, &_RDI->predictedPlayerState, &cent->nextState) )
        {
          drawInStencil = HudOutlineDefFromPlayerState->drawInStencil;
          if ( v10 )
          {
            if ( drawInStencil && CG_Utils_ShouldHighlightInScope((const LocalClientNum_t)_RDI->localClientNum) )
            {
              __asm
              {
                vxorps  xmm0, xmm0, xmm0
                vcvtsi2ss xmm0, xmm0, eax
                vmovss  dword ptr [r14+4], xmm0
              }
            }
          }
          else if ( !drawInStencil )
          {
            CG_GetPoseOrigin(&cent->pose, &outOrigin);
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+38h]
              vmovss  xmm1, dword ptr [rdi+3Ch]
            }
            hudOutlineStartTime = cent->hudOutlineStartTime;
            __asm
            {
              vmovss  dword ptr [rsp+98h+playerViewOrigin], xmm0
              vmovss  xmm0, dword ptr [rdi+40h]
              vaddss  xmm2, xmm0, dword ptr [rdi+1F0h]
              vmovss  dword ptr [rsp+98h+playerViewOrigin+8], xmm2
              vmovss  dword ptr [rsp+98h+playerViewOrigin+4], xmm1
            }
            Color = BG_HudOutline_GetColor(HudOutlineDefFromPlayerState, hudOutlineStartTime, v12, &playerViewOrigin, &outOrigin);
            outlineWidth = HudOutlineDefFromPlayerState->outlineWidth;
            _R14->color = Color;
            _R14->drawOccludedPixels = HudOutlineDefFromPlayerState->drawOccludedPixels;
            _R14->drawNonOccludedPixels = HudOutlineDefFromPlayerState->drawNonOccludedPixels;
            _R14->lineWidth = truncate_cast<unsigned char,int>(outlineWidth);
            _R14->renderMode = HudOutlineDefFromPlayerState->outlineType;
            _R14->fill = HudOutlineDefFromPlayerState->drawFill;
          }
        }
      }
    }
  }
  else
  {
    cent->currentHudOutlineIndex = 0;
  }
  return _R14;
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
  GfxSceneEntityMutableShaderData *v8; 
  unsigned int v16; 
  unsigned __int8 v19; 
  cg_t *LocalClientGlobals; 
  unsigned __int16 entnum; 
  DObj *ClientDObj; 
  DObjMaterialData *materialData; 
  int v26; 
  __int64 v27; 
  unsigned __int8 v28; 
  unsigned __int8 v29; 
  GfxSceneEntityMutableShaderData *v31; 

  v31 = result;
  _RAX = &NULL_SCENE_ENTITY_MUTABLE_SHADER_DATA_0;
  v8 = result;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymm1, ymmword ptr [rax+80h]
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm0, ymmword ptr [rax+20h]
    vmovups ymmword ptr [rcx+20h], ymm0
    vmovups ymm0, ymmword ptr [rax+40h]
    vmovups ymmword ptr [rcx+40h], ymm0
    vmovups ymm0, ymmword ptr [rax+60h]
    vmovups ymmword ptr [rcx+60h], ymm0
    vmovups ymmword ptr [rcx+80h], ymm1
    vmovups xmm1, xmmword ptr [rax+0A0h]
  }
  _RAX = hudOutlineInfo;
  v16 = genericMaterialData;
  __asm { vmovups xmmword ptr [rcx+0A0h], xmm1 }
  result->dataCount = 0;
  v19 = 0;
  __asm { vmovups ymm0, ymmword ptr [rax] }
  *(float *)&_RAX = hudOutlineInfo->characterEVOffset;
  __asm
  {
    vmovups ymmword ptr [rcx+88h], ymm0
    vmovss  xmm0, [rsp+78h+arg_30]
    vmovss  dword ptr [rcx+0ACh], xmm0
  }
  LODWORD(result->hudOutlineInfo.characterEVOffset) = (_DWORD)_RAX;
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
      v26 = 0;
      if ( obj->numModels )
      {
        v27 = 0i64;
        do
        {
          v28 = v19;
          if ( obj->materialData->modelEntityDataOffset[v27] > v19 )
            v28 = obj->materialData->modelEntityDataOffset[v27];
          v19 = v28;
          if ( v28 >= 8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2314, ASSERT_TYPE_ASSERT, "(maxIndex < GFX_MAX_MODEL_MUTABLE_SHADER_DATA)", (const char *)&queryFormat, "maxIndex < GFX_MAX_MODEL_MUTABLE_SHADER_DATA") )
            __debugbreak();
          ++v26;
          ++v27;
        }
        while ( v26 < obj->numModels );
        v8 = v31;
        v16 = genericMaterialData;
      }
    }
  }
  v29 = 0;
  do
  {
    R_PackEntityShaderData(localClientNum, obj->entnum, entnum, v8, v29, v16, obj->materialData);
    ++v8->dataCount;
    ++v29;
  }
  while ( v29 <= v19 );
  CG_Entity_DebugOverrideGetMutableShaderData(obj, v8);
  return v8;
}

/*
==============
CG_Entity_GetParentAxis
==============
*/
const DObjAnimMat *CG_Entity_GetParentAxis(LocalClientNum_t localClientNum, int entnum, const clientLinkInfo_t *li, const centity_t *parent, tmat43_t<vec3_t> *parentAxis)
{
  const DObj *ClientDObj; 
  const DObj *v10; 
  const DObjAnimMat *result; 
  int v12; 
  int number; 
  const char *Name; 
  scr_string_t tag_origin; 
  char *fmt; 
  __int64 v25; 
  __int64 v26; 

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
    LODWORD(v25) = entnum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2578, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Ent #%i, invalid parent dobj (dobj->numBones does not match models). Copy log above.", v25) )
      __debugbreak();
    LODWORD(v26) = entnum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2580, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Ent #%i, Invalid parent dobj (dobj->numBones does not match models) #%i.", v26, parent->nextState.number) )
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
  _R15 = &parentAxis->m[3];
  if ( CG_DObjGetWorldBoneMatrix(&parent->pose, v10, v12, (tmat33_t<vec3_t> *)parentAxis, &parentAxis->m[3]) )
    return (const DObjAnimMat *)1;
  number = parent->nextState.number;
  Name = DObjGetName(v10);
  LODWORD(v25) = number;
  Com_PrintWarning(14, "Couldn't get world matrix for bone %i in dobj for ent #%i ( model %s ), parent of ent #%i.\n", (unsigned __int8)(*(unsigned int *)li >> 11), (unsigned int)entnum, Name, v25);
  tag_origin = scr_const.tag_origin;
  if ( !g_activeRefDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents_inline.h", 133, ASSERT_TYPE_ASSERT, "(g_activeRefDef)", (const char *)&queryFormat, "g_activeRefDef") )
    __debugbreak();
  result = CG_DObjGetLocalTagMatrix(&parent->pose, v10, tag_origin);
  _RBX = result;
  if ( result )
  {
    LocalConvertQuatToMat(result, (tmat33_t<vec3_t> *)parentAxis);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+10h]
      vaddss  xmm1, xmm0, dword ptr [rax+7Ch]
      vmovss  dword ptr [r15], xmm1
      vmovss  xmm2, dword ptr [rbx+14h]
      vaddss  xmm0, xmm2, dword ptr [rax+80h]
      vmovss  dword ptr [r15+4], xmm0
      vmovss  xmm1, dword ptr [rbx+18h]
      vaddss  xmm2, xmm1, dword ptr [rax+84h]
      vmovss  dword ptr [r15+8], xmm2
    }
    return (const DObjAnimMat *)1;
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
  *(_QWORD *)outOrigin->v = *(_QWORD *)ps->origin.v;
  __asm
  {
    vmovss  xmm0, dword ptr [rcx+38h]
    vmovss  dword ptr [rdx+8], xmm0
    vaddss  xmm0, xmm0, dword ptr [rcx+1E8h]
    vmovss  dword ptr [rdx+8], xmm0
  }
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

void __fastcall CG_Entity_InterpolateAdvancedTrajectory(LocalClientNum_t localClientNum, const centity_t *cent, DObj *obj, double lerp, vec3_t *outOrigin, vec3_t *outAngles)
{
  cg_t *LocalClientGlobals; 
  int serverTime; 
  int v17; 
  CgTrajectory *v18; 
  int v19; 
  CgTrajectory v63; 
  CgTrajectory v64; 
  CgTrajectory v65; 
  vec3_t outPos; 
  vec3_t v67; 
  vec3_t outAng; 
  vec3_t v69; 
  __int64 v70; 
  char v71; 
  void *retaddr; 

  _RAX = &retaddr;
  _RBP = &v70;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm9
    vmovaps xmmword ptr [rax-48h], xmm10
  }
  _R15 = outOrigin;
  _R12 = outAngles;
  __asm { vmovaps xmm10, xmm3 }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  CgTrajectory::CgTrajectory(&v64, localClientNum, cent, &cent->prevState);
  CgTrajectory::CgTrajectory(&v63, localClientNum, cent, &cent->nextState.lerp);
  if ( cent->nextState.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( cent->nextState.eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 899, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_SCRIPTMOVER)", (const char *)&queryFormat, "cent->nextState.eType == ET_SCRIPTMOVER") )
      __debugbreak();
    serverTime = cent->prevState.u.anonymous.data[5];
    v17 = cent->nextState.lerp.u.anonymous.data[5];
    if ( serverTime <= 0 )
    {
      v18 = &v63;
      serverTime = LocalClientGlobals->snap->serverTime;
    }
    else
    {
      v18 = &v64;
    }
    BgTrajectory::EvaluateTrajectories(v18, serverTime, &outPos, &outAng);
    if ( v17 <= 0 )
      v17 = LocalClientGlobals->nextSnap->serverTime;
    v19 = v17;
  }
  else
  {
    CgTrajectory::CgTrajectory(&v65, localClientNum, cent, &cent->prevState);
    BgTrajectory::EvaluateTrajectories(&v65, LocalClientGlobals->snap->serverTime, &outPos, &outAng);
    v19 = LocalClientGlobals->nextSnap->serverTime;
  }
  BgTrajectory::EvaluateTrajectories(&v63, v19, &v67, &v69);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+30h+var_78]
    vsubss  xmm1, xmm0, dword ptr [rbp+30h+outPos]
    vmovss  xmm0, dword ptr [rbp+30h+var_78+4]
    vmulss  xmm2, xmm1, xmm10
    vsubss  xmm1, xmm0, dword ptr [rbp+30h+outPos+4]
    vaddss  xmm3, xmm2, dword ptr [rbp+30h+outPos]
    vmovss  xmm0, dword ptr [rbp+30h+var_78+8]
    vmulss  xmm2, xmm1, xmm10
    vsubss  xmm1, xmm0, dword ptr [rbp+30h+outPos+8]
    vmovss  xmm0, dword ptr [rbp+30h+var_58]
    vmovss  dword ptr [r15], xmm3
    vaddss  xmm3, xmm2, dword ptr [rbp+30h+outPos+4]
    vmulss  xmm2, xmm1, xmm10
    vsubss  xmm1, xmm0, dword ptr [rbp+30h+outAng]
    vmovss  dword ptr [r15+4], xmm3
    vaddss  xmm3, xmm2, dword ptr [rbp+30h+outPos+8]
    vmovss  dword ptr [r15+8], xmm3
    vmulss  xmm3, xmm1, cs:__real@3b360b61
    vaddss  xmm1, xmm3, cs:__real@3f000000
    vxorps  xmm9, xmm9, xmm9
    vroundss xmm2, xmm9, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm0, xmm0, cs:__real@43b40000
    vmulss  xmm1, xmm0, xmm10
    vaddss  xmm2, xmm1, dword ptr [rbp+30h+outAng]
    vmovss  xmm0, dword ptr [rbp+30h+var_58+4]
    vsubss  xmm1, xmm0, dword ptr [rbp+30h+outAng+4]
    vmulss  xmm4, xmm1, cs:__real@3b360b61
    vmovss  dword ptr [r12], xmm2
    vaddss  xmm2, xmm4, cs:__real@3f000000
    vroundss xmm3, xmm9, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vmovss  xmm0, dword ptr [rbp+30h+var_58+8]
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rbp+30h+outAng+4]
    vsubss  xmm1, xmm0, dword ptr [rbp+30h+outAng+8]
    vmulss  xmm4, xmm1, cs:__real@3b360b61
    vaddss  xmm2, xmm4, cs:__real@3f000000
    vmovss  dword ptr [r12+4], xmm3
    vroundss xmm3, xmm9, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rbp+30h+outAng+8]
    vmovss  dword ptr [r12+8], xmm3
  }
  _R11 = &v71;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-10h]
    vmovaps xmm10, xmmword ptr [r11-20h]
  }
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
  vec3_t *p_outOrigin; 
  vec3_t outOrigin; 
  __int64 v16; 
  int v17[4]; 

  v16 = -2i64;
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
    _RAX = R_GetBrushModel(cent->nextState.index.brushModel);
    __asm
    {
      vmovss  xmm0, dword ptr [rax+38h]
      vmovss  xmm1, dword ptr [rax+3Ch]
      vmovss  xmm2, dword ptr [rax+40h]
      vaddss  xmm0, xmm0, dword ptr [rsp+78h+outOrigin]
      vmovss  [rsp+78h+var_30], xmm0
      vaddss  xmm1, xmm1, dword ptr [rsp+78h+outOrigin+4]
      vmovss  [rsp+78h+var_2C], xmm1
      vaddss  xmm0, xmm2, dword ptr [rsp+78h+outOrigin+8]
      vmovss  [rsp+78h+var_28], xmm0
    }
    p_outOrigin = (vec3_t *)v17;
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
  playerState_s *v10; 
  cg_t *LocalClientGlobals; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  char v18; 
  bool IsRemoteTurretActiveFlags; 
  LocalClientNum_t v22; 
  cg_t *v23; 
  bool v24; 
  playerState_s *v25; 
  Weapon *v26; 
  DObj *viewModelDObj; 
  unsigned int v30; 
  int *v31; 
  CgHandler *pmoveHandler; 
  unsigned int v33; 
  unsigned int v35; 
  cg_t *v36; 
  Weapon *v37; 
  DObj *v40; 
  int *v41; 
  CgHandler *Handler; 
  unsigned int v43; 
  cg_t *v45; 
  CgWeaponMap *v46; 
  Weapon *v47; 
  DObj *v50; 
  int *v51; 
  CgHandler *v52; 
  unsigned int v53; 
  unsigned int v56; 
  const XAnim_s *Anims; 
  int turretFireTime; 
  int turretLastFireTime; 
  unsigned __int8 v64; 
  char v66; 
  char v67; 
  char v71; 
  unsigned int *v72; 
  unsigned int *v74; 
  __int64 v75; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  float bIsAlternate; 
  float bIsAlternatea; 
  float bIsAlternateb; 
  float bIsAlternatec; 
  float bIsAlternated; 
  float bIsAlternatee; 
  float handIndex; 
  float handIndexa; 
  float handIndexb; 
  float handIndexc; 
  float handIndexd; 
  float handIndexe; 
  cg_t *v100; 
  Weapon *r_weapon; 
  unsigned int animIndex; 
  LocalClientNum_t v103; 
  BgWeaponMap *weaponMap; 
  int *v105; 
  BgWeaponMap *v106[2]; 
  playerState_s *ps[2]; 
  int v108[4]; 

  v10 = (playerState_s *)(int)localClientNum;
  v103 = localClientNum;
  v105 = turretAnimIndexArray;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3028, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( cent->nextState.eType != ET_TURRET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3029, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_TURRET)", (const char *)&queryFormat, "cent->nextState.eType == ET_TURRET") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3030, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  ps[0] = v10;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v10);
  if ( !CgWeaponMap::ms_instance[(_QWORD)v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  weaponMap = CgWeaponMap::ms_instance[(_QWORD)v10];
  r_weapon = (Weapon *)BG_GetWeaponForEntity(weaponMap, &cent->nextState);
  v106[0] = (BgWeaponMap *)BG_WeaponDef(r_weapon, 0);
  if ( !v106[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3039, ASSERT_TYPE_SANITY, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( DObjGetTree(obj) )
  {
    v15 = turretAnimIndexArray[1];
    v16 = turretAnimIndexArray[2];
    v17 = turretAnimIndexArray[3];
    v18 = 1;
    __asm
    {
      vmovaps [rsp+158h+var_58], xmm6
      vmovaps [rsp+158h+var_88], xmm9
    }
    v108[0] = v16;
    v108[1] = v17;
    animIndex = v15;
    v108[2] = v15;
    if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    __asm
    {
      vmovaps [rsp+158h+var_68], xmm7
      vmovaps [rsp+158h+var_78], xmm8
      vmovss  xmm9, cs:__real@3f800000
      vxorps  xmm6, xmm6, xmm6
    }
    if ( BG_IsTurretActiveFlags(&LocalClientGlobals->predictedPlayerState.eFlags) && LocalClientGlobals->predictedPlayerState.viewlocked_entNum == cent->nextState.number )
    {
      LODWORD(v100) = LocalClientGlobals->time;
      IsRemoteTurretActiveFlags = BG_IsRemoteTurretActiveFlags(&LocalClientGlobals->predictedPlayerState.eFlags);
      if ( LocalClientGlobals->playerWeaponInfo.turretFireEnt != cent->nextState.number )
      {
        LocalClientGlobals->playerWeaponInfo.turretFireTime = LocalClientGlobals->predictedPlayerState.turretLastFireTime;
        LocalClientGlobals->playerWeaponInfo.turretFireEnt = cent->nextState.number;
      }
      if ( !IsRemoteTurretActiveFlags && BG_IsUsingTurretViewarms(weaponMap, &LocalClientGlobals->predictedPlayerState) && v106[0][9].__vftable )
      {
        __asm { vmovaps [rsp+158h+var_98], xmm10 }
        if ( animIndex == -1 )
        {
          v22 = v103;
          v35 = 0;
          v25 = ps[0];
        }
        else
        {
          __asm { vmovdqu xmm0, cs:__xmm@0000001d0000000f0000000e0000001f }
          v22 = v103;
          __asm { vmovdqu xmmword ptr [rsp+158h+ps], xmm0 }
          v23 = CG_GetLocalClientGlobals(v103);
          v100 = v23;
          v24 = CgWeaponMap::ms_instance[v103] == NULL;
          v25 = (playerState_s *)(int)v103;
          weaponMap = (BgWeaponMap *)&v23->predictedPlayerState;
          if ( v24 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
              __debugbreak();
            v23 = v100;
          }
          v26 = r_weapon;
          v106[0] = CgWeaponMap::ms_instance[v103];
          __asm
          {
            vxorps  xmm8, xmm8, xmm8
            vxorps  xmm10, xmm10, xmm10
          }
          if ( r_weapon->weaponIdx )
          {
            viewModelDObj = v23->m_weaponHand[0].viewModelDObj;
            if ( viewModelDObj )
            {
              if ( viewModelDObj->tree )
              {
                v30 = 0;
                v31 = (int *)ps;
                while ( 1 )
                {
                  pmoveHandler = CgHandler::getHandler(v103);
                  v33 = BG_MapWeaponAnimStateToAnimIndex(v106[0], (const playerState_s *)weaponMap, *v31, 0, v26, 0, WEAPON_HAND_DEFAULT, pmoveHandler);
                  *(double *)&_XMM0 = XAnimGetTime(v100->m_weaponHand[0].viewModelDObj->tree, 0, XANIM_SUBTREE_DEFAULT, v33);
                  __asm { vmovaps xmm7, xmm0 }
                  *(double *)&_XMM0 = XAnimGetWeight(v100->m_weaponHand[0].viewModelDObj->tree, 0, XANIM_SUBTREE_DEFAULT, v33);
                  __asm { vucomiss xmm0, xmm6 }
                  if ( !v24 )
                    break;
                  v26 = r_weapon;
                  ++v30;
                  ++v31;
                  if ( v30 >= 4 )
                    goto LABEL_40;
                }
                __asm
                {
                  vmovaps xmm8, xmm0
                  vmovaps xmm10, xmm7
                }
              }
            }
          }
LABEL_40:
          v35 = 0;
          __asm
          {
            vmovss  [rsp+158h+handIndex], xmm6
            vmovss  dword ptr [rsp+158h+bIsAlternate], xmm6
            vmovss  dword ptr [rsp+158h+fmt], xmm8
          }
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, animIndex, fmt, bIsAlternate, handIndex, (scr_string_t)0, 0, 0, LINEAR, NULL);
          __asm { vmovss  dword ptr [rsp+158h+fmt], xmm10 }
          XAnimSetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, animIndex, fmta);
        }
        if ( v17 != -1 )
        {
          __asm
          {
            vmovdqu xmm0, cs:__xmm@00000007000000060000000400000003
            vmovdqu xmmword ptr [rsp+158h+var_D0], xmm0
          }
          v36 = CG_GetLocalClientGlobals(v22);
          v100 = v36;
          v24 = CgWeaponMap::ms_instance[(_QWORD)v25] == NULL;
          ps[0] = &v36->predictedPlayerState;
          if ( v24 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
              __debugbreak();
            v36 = v100;
          }
          v37 = r_weapon;
          weaponMap = CgWeaponMap::ms_instance[(_QWORD)v25];
          __asm
          {
            vmovaps xmm8, xmm6
            vmovaps xmm10, xmm6
          }
          if ( r_weapon->weaponIdx )
          {
            v40 = v36->m_weaponHand[0].viewModelDObj;
            if ( v40 )
            {
              if ( v40->tree )
              {
                v41 = (int *)v106;
                while ( 1 )
                {
                  Handler = CgHandler::getHandler(v22);
                  v43 = BG_MapWeaponAnimStateToAnimIndex(weaponMap, ps[0], *v41, 0, v37, 0, WEAPON_HAND_DEFAULT, Handler);
                  *(double *)&_XMM0 = XAnimGetTime(v100->m_weaponHand[0].viewModelDObj->tree, 0, XANIM_SUBTREE_DEFAULT, v43);
                  __asm { vmovaps xmm7, xmm0 }
                  *(double *)&_XMM0 = XAnimGetWeight(v100->m_weaponHand[0].viewModelDObj->tree, 0, XANIM_SUBTREE_DEFAULT, v43);
                  __asm { vucomiss xmm0, xmm6 }
                  if ( !v24 )
                    break;
                  v37 = r_weapon;
                  ++v35;
                  ++v41;
                  if ( v35 >= 4 )
                    goto LABEL_55;
                }
                __asm
                {
                  vmovaps xmm8, xmm0
                  vmovaps xmm10, xmm7
                }
LABEL_55:
                v35 = 0;
              }
            }
          }
          __asm
          {
            vmovss  [rsp+158h+handIndex], xmm6
            vmovss  dword ptr [rsp+158h+bIsAlternate], xmm6
            vmovss  dword ptr [rsp+158h+fmt], xmm8
          }
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v17, fmtb, bIsAlternatea, handIndexa, (scr_string_t)0, 0, 0, LINEAR, NULL);
          __asm { vmovss  dword ptr [rsp+158h+fmt], xmm10 }
          XAnimSetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v17, fmtc);
        }
        if ( v16 != -1 )
        {
          v100 = (cg_t *)0x100000000i64;
          v45 = CG_GetLocalClientGlobals(v22);
          if ( !CgWeaponMap::ms_instance[(_QWORD)v25] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
            __debugbreak();
          v46 = CgWeaponMap::ms_instance[(_QWORD)v25];
          v47 = r_weapon;
          __asm
          {
            vmovaps xmm8, xmm6
            vmovaps xmm10, xmm6
          }
          if ( r_weapon->weaponIdx )
          {
            v50 = v45->m_weaponHand[0].viewModelDObj;
            if ( v50 )
            {
              if ( v50->tree )
              {
                v51 = (int *)&v100;
                while ( 1 )
                {
                  v52 = CgHandler::getHandler(v22);
                  v53 = BG_MapWeaponAnimStateToAnimIndex(v46, &v45->predictedPlayerState, *v51, 0, v47, 0, WEAPON_HAND_DEFAULT, v52);
                  *(double *)&_XMM0 = XAnimGetTime(v45->m_weaponHand[0].viewModelDObj->tree, 0, XANIM_SUBTREE_DEFAULT, v53);
                  __asm { vmovaps xmm7, xmm0 }
                  *(double *)&_XMM0 = XAnimGetWeight(v45->m_weaponHand[0].viewModelDObj->tree, 0, XANIM_SUBTREE_DEFAULT, v53);
                  __asm { vucomiss xmm0, xmm6 }
                  if ( !v24 )
                    break;
                  v47 = r_weapon;
                  ++v35;
                  ++v51;
                  if ( v35 >= 2 )
                    goto LABEL_69;
                }
                __asm
                {
                  vmovaps xmm8, xmm0
                  vmovaps xmm10, xmm7
                }
              }
            }
          }
LABEL_69:
          __asm
          {
            vmovss  [rsp+158h+handIndex], xmm6
            vmovss  dword ptr [rsp+158h+bIsAlternate], xmm6
            vmovss  dword ptr [rsp+158h+fmt], xmm8
          }
          XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v16, fmtd, bIsAlternateb, handIndexb, (scr_string_t)0, 0, 0, LINEAR, NULL);
          __asm { vmovss  dword ptr [rsp+158h+fmt], xmm10 }
          XAnimSetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v16, fmte);
        }
        __asm { vmovaps xmm10, [rsp+158h+var_98] }
        v56 = v16;
        goto LABEL_92;
      }
      v56 = v16;
      if ( v17 != -1 )
      {
        Anims = XAnimGetAnims(obj->tree);
        XAnimGetLengthMsec(Anims, v17);
        turretFireTime = LocalClientGlobals->playerWeaponInfo.turretFireTime;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vsubss  xmm1, xmm0, cs:__real@41200000
        }
        turretLastFireTime = LocalClientGlobals->predictedPlayerState.turretLastFireTime;
        __asm { vcvttss2si edx, xmm1 }
        if ( turretFireTime != turretLastFireTime && (*((_BYTE *)&cent->nextState.lerp.u.infoVolumeGrapple + 20) & 2) == 0 )
        {
          LocalClientGlobals->playerWeaponInfo.turretFireTime = turretLastFireTime;
          v56 = v17;
          v64 = 1;
LABEL_94:
          __asm { vmovaps xmm8, [rsp+158h+var_78] }
          v71 = 0;
          if ( v56 != -1 )
            v71 = v18;
          if ( v71 )
          {
            v72 = (unsigned int *)v105;
            __asm { vmovss  xmm7, cs:__real@3c23d70a }
            if ( *v105 > 0 )
            {
              if ( BG_TurretAnim_IsAnimTreeCreatedFromCode(obj->tree) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3216, ASSERT_TYPE_ASSERT, "(!BG_TurretAnim_IsAnimTreeCreatedFromCode( obj->tree ))", (const char *)&queryFormat, "!BG_TurretAnim_IsAnimTreeCreatedFromCode( obj->tree )") )
                __debugbreak();
              __asm
              {
                vmovss  [rsp+158h+handIndex], xmm9
                vmovss  dword ptr [rsp+158h+bIsAlternate], xmm7
                vmovss  dword ptr [rsp+158h+fmt], xmm9
              }
              XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, *v72, fmtf, bIsAlternatec, handIndexc, (scr_string_t)0, 0, v64, LINEAR, NULL);
            }
            v74 = (unsigned int *)v108;
            v75 = 3i64;
            do
            {
              if ( v56 != *v74 )
              {
                __asm
                {
                  vmovss  [rsp+158h+handIndex], xmm9
                  vmovss  dword ptr [rsp+158h+bIsAlternate], xmm7
                  vmovss  dword ptr [rsp+158h+fmt], xmm6
                }
                XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, *v74, fmtg, bIsAlternated, handIndexd, (scr_string_t)0, 0, 0, LINEAR, NULL);
              }
              ++v74;
              --v75;
            }
            while ( v75 );
            __asm
            {
              vmovss  [rsp+158h+handIndex], xmm9
              vmovss  dword ptr [rsp+158h+bIsAlternate], xmm7
              vmovss  dword ptr [rsp+158h+fmt], xmm9
            }
            XAnimSetGoalWeight(obj, 0, XANIM_SUBTREE_DEFAULT, v56, fmth, bIsAlternatee, handIndexe, (scr_string_t)0, 0, v64, LINEAR, NULL);
          }
          __asm
          {
            vmovaps xmm7, [rsp+158h+var_68]
            vmovaps xmm6, [rsp+158h+var_58]
            vmovaps xmm9, [rsp+158h+var_88]
          }
          return;
        }
        if ( (int)v100 - turretFireTime < _EDX )
          goto LABEL_92;
      }
    }
    else
    {
      v56 = v16;
      if ( v17 != -1 )
      {
        *(double *)&_XMM0 = XAnimGetTime(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v17);
        __asm { vmovaps xmm8, xmm0 }
        *(double *)&_XMM0 = XAnimGetWeight(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v17);
        __asm { vucomiss xmm0, xmm6 }
        v66 = !v24;
        *(double *)&_XMM0 = XAnimGetGoalWeight(obj->tree, 0, XANIM_SUBTREE_DEFAULT, v16);
        __asm { vucomiss xmm0, xmm9 }
        v67 = v24;
        _RSI = v106[0];
        __asm { vmovss  xmm7, dword ptr [rsi+260h] }
        if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0xAu) )
        {
          v56 = v17;
          if ( HIDWORD(v106[0][26].__vftable) != 1 )
          {
            if ( v66 )
              __asm { vcomiss xmm8, xmm7 }
            v64 = 1;
            goto LABEL_94;
          }
          goto LABEL_93;
        }
        if ( v66 )
        {
          __asm { vcomiss xmm8, xmm7 }
          v56 = v16;
        }
        else
        {
          v24 = v67 == 0;
          v56 = v16;
          if ( !v24 )
LABEL_92:
            v18 = 0;
        }
      }
    }
LABEL_93:
    v64 = 0;
    goto LABEL_94;
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
  const cpose_t *ViewModelPoseForHand; 
  const DObj *viewModelDObj; 
  float v8; 
  float v11; 
  unsigned int v12; 
  int v13; 
  GfxSceneHudOutlineInfo v14; 
  shaderOverride_t v15; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2478, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  for ( i = WEAPON_HAND_DEFAULT; (unsigned int)i < NUM_WEAPON_HANDS; ++i )
  {
    _RDI = (__int64)&LocalClientGlobals->viewModelQueuedRenderInfo.m_handInfo[i];
    if ( *(_BYTE *)(_RDI + 100) )
    {
      if ( !LocalClientGlobals->m_weaponHand[i].viewModelDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2489, ASSERT_TYPE_ASSERT, "(weapHand->viewModelDObj)", (const char *)&queryFormat, "weapHand->viewModelDObj") )
        __debugbreak();
      ViewModelPoseForHand = CG_GetViewModelPoseForHand(localClientNum, i);
      __asm { vmovups ymm0, ymmword ptr [rdi] }
      viewModelDObj = LocalClientGlobals->m_weaponHand[i].viewModelDObj;
      v13 = *(_DWORD *)(_RDI + 96);
      v12 = *(_DWORD *)(_RDI + 92);
      v14.characterEVOffset = *(float *)(_RDI + 32);
      v8 = *(float *)(_RDI + 68);
      __asm
      {
        vmovups [rsp+0E8h+var_88], ymm0
        vmovups ymm0, ymmword ptr [rdi+24h]
      }
      v15.atlasTime = v8;
      __asm
      {
        vmovups [rsp+0E8h+var_58], ymm0
        vmovss  xmm0, dword ptr [rdi+54h]
        vmovss  [rsp+0E8h+var_A8], xmm0
      }
      CG_Entity_AddViewmodelDObjToScene_Internal(localClientNum, viewModelDObj, ViewModelPoseForHand, (i != WEAPON_HAND_DEFAULT) + 2048, *(_DWORD *)(_RDI + 88), &v15, &v14, (const vec3_t *)(_RDI + 72), v11, v12, v13);
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

void __fastcall CG_Entity_SetFrameInterpolation(LocalClientNum_t localClientNum, double _XMM1_8)
{
  unsigned int serverTime; 
  bool v5; 

  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RBX->snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 861, ASSERT_TYPE_ASSERT, "(cgameGlob->snap)", (const char *)&queryFormat, "cgameGlob->snap") )
    __debugbreak();
  if ( !_RBX->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 862, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  serverTime = _RBX->snap->serverTime;
  if ( _RBX->nextSnap->serverTime == serverTime )
    goto LABEL_9;
  v5 = _RBX->time < serverTime;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, ecx
    vdivss  xmm2, xmm1, xmm0
    vxorps  xmm1, xmm1, xmm1
    vcomiss xmm2, xmm1
    vmovss  dword ptr [rbx+65E0h], xmm2
  }
  if ( v5 )
LABEL_9:
    _RBX->frameInterpolation = 0.0;
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
  __int64 v6; 
  cg_t *LocalClientGlobals; 
  const WeaponDef *v9; 
  bool v10; 
  BgWeaponMap *v11; 
  bool IsRemoteTurretActiveFlags; 
  bool v13; 
  unsigned __int8 tagIdx_barrel; 
  bool v54; 
  const char *Name; 
  Weapon *v56; 
  const WeaponDef *v57; 
  const char **p_name; 
  const char **v59; 
  const char **v60; 
  BgWeaponMap *weaponMap; 
  Weapon *entityWeapon; 
  int turretAnimIndexArrayOut[8]; 
  char output[1024]; 

  _RDI = cent;
  v6 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3368, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( _RDI->nextState.eType != ET_TURRET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3369, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_TURRET)", (const char *)&queryFormat, "cent->nextState.eType == ET_TURRET") )
    __debugbreak();
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3370, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v6);
  _RSI = &_RDI->nextState;
  if ( !CgWeaponMap::ms_instance[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  weaponMap = CgWeaponMap::ms_instance[v6];
  entityWeapon = (Weapon *)BG_GetWeaponForEntity(weaponMap, &_RDI->nextState);
  v9 = BG_WeaponDef(entityWeapon, 0);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3381, ASSERT_TYPE_SANITY, "( weapDef )", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3384, ASSERT_TYPE_SANITY, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( _RDI == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2088, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  v10 = BG_IsTurretActiveFlags(&_RDI->nextState.lerp.eFlags) && LocalClientGlobals->predictedPlayerState.viewlocked_entNum == _RSI->number;
  v11 = weaponMap;
  _RDI->pose.turret.playerUsing = v10;
  _RDI->pose.turret.useOnVehicleAngles = 0;
  _RDI->pose.turret.visualPitchLimitTop = v9->visualPitchLimitTop;
  _RDI->pose.turret.visualPitchLimitBottom = v9->visualPitchLimitBottom;
  _RDI->pose.turret.visualYawLimitLeft = v9->dlcFloat[0];
  _RDI->pose.turret.visualYawLimitRight = v9->dlcFloat[1];
  _RDI->pose.turret.playerViewArms = BG_IsUsingTurretViewarms(v11, &LocalClientGlobals->predictedPlayerState);
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3395, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
    __debugbreak();
  if ( _RDI == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2102, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  IsRemoteTurretActiveFlags = BG_IsRemoteTurretActiveFlags(&_RDI->nextState.lerp.eFlags);
  v13 = !_RDI->pose.turret.playerUsing;
  _RDI->pose.turret.remoteTurret = IsRemoteTurretActiveFlags;
  if ( v13 )
  {
    __asm { vmovss  xmm4, dword ptr [rdi+16Ch] }
    _RDX = (const LerpEntityStateTurret *)&_RDI->nextState.lerp.u;
    __asm
    {
      vmovaps [rsp+4B8h+var_48], xmm7
      vmovss  xmm0, dword ptr [rdx]
      vsubss  xmm1, xmm0, xmm4
      vmulss  xmm3, xmm1, cs:__real@3b360b61
      vaddss  xmm1, xmm3, cs:__real@3f000000
      vxorps  xmm7, xmm7, xmm7
      vroundss xmm2, xmm7, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm0, xmm0, cs:__real@43b40000
      vmulss  xmm1, xmm0, dword ptr [r15+65E0h]
      vaddss  xmm2, xmm1, xmm4
      vmovss  dword ptr [rdi+0A0h], xmm2
    }
    if ( !v9->keepOrientationOnExit || _RDI->prevState.u.anonymous.data[6] == _RDI->nextState.lerp.u.anonymous.data[6] )
    {
      __asm
      {
        vmovss  xmm5, dword ptr [rdi+170h]
        vmovss  xmm0, dword ptr [rsi+5Ch]
        vsubss  xmm1, xmm0, xmm5
        vmulss  xmm4, xmm1, cs:__real@3b360b61
        vaddss  xmm2, xmm4, cs:__real@3f000000
        vroundss xmm3, xmm7, xmm2, 1
        vsubss  xmm0, xmm4, xmm3
        vmulss  xmm1, xmm0, cs:__real@43b40000
        vmulss  xmm2, xmm1, dword ptr [r15+65E0h]
        vaddss  xmm0, xmm2, xmm5
      }
    }
    else
    {
      __asm { vmovss  xmm0, dword ptr [rsi+5Ch] }
    }
    __asm
    {
      vmovss  dword ptr [rdi+0A4h], xmm0
      vmovss  xmm5, dword ptr [rdi+174h]
      vmovss  xmm0, dword ptr [rsi+60h]
      vsubss  xmm1, xmm0, xmm5
      vmulss  xmm4, xmm1, cs:__real@3b360b61
      vaddss  xmm2, xmm4, cs:__real@3f000000
      vroundss xmm3, xmm7, xmm2, 1
      vmovaps xmm7, [rsp+4B8h+var_48]
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, cs:__real@43b40000
      vmulss  xmm2, xmm1, dword ptr [r15+65E0h]
      vaddss  xmm3, xmm2, xmm5
      vmovss  dword ptr [rdi+0B0h], xmm3
    }
    if ( v9->turretBarrelSpinEnabled )
    {
      BG_Turret_ComputeBarrelSpinRate(v9, _RDX, LocalClientGlobals->time);
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, dword ptr [r15+65E4h]
        vmulss  xmm0, xmm1, xmm0
        vmulss  xmm2, xmm0, cs:__real@3eb851ec
        vmulss  xmm3, xmm2, dword ptr [rbp+0DE8h]
        vaddss  xmm0, xmm3, dword ptr [rdi+0B4h]; angle
      }
      *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
      __asm { vmovss  dword ptr [rdi+0B4h], xmm0 }
    }
  }
  else
  {
    _RDI->pose.player.control = (clientControllers_t *)&LocalClientGlobals->predictedPlayerState.viewangles;
    CG_Entity_AdjustVehicleTurretAngles((const LocalClientNum_t)v6, _RDI);
  }
  DObjGetBoneIndexInternal_48(obj, scr_const.tag_aim, &_RDI->pose.turret.tagIdx_aim, (int *)&weaponMap);
  DObjGetBoneIndexInternal_48(obj, scr_const.tag_aim_animated, &_RDI->pose.turret.tagIdx_aim_animated, (int *)&weaponMap);
  DObjGetBoneIndexInternal_48(obj, scr_const.tag_aim_pivot, &_RDI->pose.turret.tagIdx_aim_pivot, (int *)&weaponMap);
  DObjGetBoneIndexInternal_48(obj, scr_const.tag_flash, &_RDI->pose.turret.tagIdx_flash, (int *)&weaponMap);
  tagIdx_barrel = _RDI->pose.turret.tagIdx_barrel;
  v54 = DObjGetBoneIndexInternal_48(obj, scr_const.tag_barrel, &_RDI->pose.turret.tagIdx_barrel, (int *)&weaponMap) == 1;
  if ( tagIdx_barrel == 0xFE && !v54 && v9->turretBarrelSpinEnabled )
  {
    Name = DObjGetName(obj);
    Com_PrintWarning(17, "WARNING: Missing 'TAG_BARREL' for '%s' with barrel spin enabled.\n", Name);
  }
  v56 = entityWeapon;
  BG_TurretAnim_GetAnimIndices(obj, entityWeapon, turretAnimIndexArrayOut);
  v57 = BG_WeaponDef(v56, 0);
  BG_GetWeaponName(v56, output, 0x400u);
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( BG_IsTurretActiveFlags(&LocalClientGlobals->predictedPlayerState.eFlags) && LocalClientGlobals->predictedPlayerState.viewlocked_entNum == _RSI->number )
  {
    if ( turretAnimIndexArrayOut[1] == -1 )
    {
      p_name = &v57->turretRaiseAnim->name;
      if ( p_name )
        Com_PrintWarning(17, "WARNING: Turret '%s' has gdt field turretRaiseAnim '%s', but anim missing from csv or animtree.\n", output, *p_name);
    }
    if ( turretAnimIndexArrayOut[2] == -1 )
    {
      v59 = &v57->turretIdleAnim->name;
      if ( v59 )
        Com_PrintWarning(17, "WARNING: Turret '%s' has gdt field turretIdleAnim '%s', but anim missing from csv or animtree.\n", output, *v59);
    }
    if ( turretAnimIndexArrayOut[3] == -1 )
    {
      v60 = &v57->turretFireAnim->name;
      if ( v60 )
        Com_PrintWarning(17, "WARNING: Turret '%s' has gdt field turretFireAnim '%s', but anim missing from csv or animtree.\n", output, *v60);
    }
  }
  CG_Entity_PlayTurretAnims((LocalClientNum_t)v6, obj, _RDI, turretAnimIndexArrayOut);
}

/*
==============
CG_Entity_UpdateAnimationLod
==============
*/
void CG_Entity_UpdateAnimationLod(LocalClientNum_t localClientNum, int entnum)
{
  const DObj *ClientDObj; 
  const DObj *v6; 
  const XAnimTree *Tree; 
  const cpose_t *PoseExtended; 
  const dvar_t *v15; 
  vec3_t outOrigin; 

  if ( !rg.lodParms.valid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 3549, ASSERT_TYPE_ASSERT, "(rg.lodParms.valid)", (const char *)&queryFormat, "rg.lodParms.valid") )
    __debugbreak();
  ClientDObj = Com_GetClientDObj(entnum, localClientNum);
  v6 = ClientDObj;
  if ( ClientDObj )
  {
    Tree = DObjGetTree(ClientDObj);
    if ( Tree )
    {
      if ( XAnimTreeHasLods(Tree) )
      {
        __asm { vmovaps [rsp+78h+var_18], xmm6 }
        PoseExtended = CG_GetPoseExtended(localClientNum, entnum, 0);
        CG_GetPoseOrigin(PoseExtended, &outOrigin);
        __asm
        {
          vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin; r_globals_t rg
          vsubss  xmm3, xmm0, dword ptr [rsp+78h+outOrigin]
          vmovss  xmm1, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+4; r_globals_t rg
          vsubss  xmm2, xmm1, dword ptr [rsp+78h+outOrigin+4]
          vmovss  xmm0, dword ptr cs:?rg@@3Ur_globals_t@@A.correctedLodParms.origin+8; r_globals_t rg
          vsubss  xmm4, xmm0, dword ptr [rsp+78h+outOrigin+8]
        }
        v15 = DVARFLT_cg_animLODScale;
        __asm
        {
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vsqrtss xmm6, xmm2, xmm2
        }
        if ( !DVARFLT_cg_animLODScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_animLODScale") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v15);
        __asm
        {
          vmulss  xmm1, xmm6, cs:?rg@@3Ur_globals_t@@A.correctedLodParms.invFovScale; r_globals_t rg
          vmulss  xmm1, xmm1, dword ptr [rdi+28h]; distance
        }
        XAnimSetClientLodByDistance(v6, *(float *)&_XMM1);
        __asm { vmovaps xmm6, [rsp+78h+var_18] }
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
  bool v31; 
  bool v32; 
  bool v52; 
  unsigned int v53; 
  __int64 number; 
  volatile int *v61; 
  unsigned int v62; 
  char *fmt; 
  char *fmta; 
  __int64 v81; 
  vec3_t outOrigin; 
  __int64 v83; 
  Float4Bounds baseBounds; 
  Float4Bounds rotatedBounds; 
  __int128 v88; 
  __int128 v89; 
  tmat33_t<vec3_t> axis; 
  char v91; 
  void *retaddr; 

  _RAX = &retaddr;
  v83 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
  }
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
    _RBX = R_GetBrushModel(cent->nextState.index.brushModel);
    __asm { vmovss  xmm0, dword ptr [rax+38h] }
    HIDWORD(v88) = 0;
    __asm
    {
      vmovups xmm3, xmmword ptr [rbp-50h]
      vmovss  xmm3, xmm3, xmm0
      vinsertps xmm3, xmm3, dword ptr [rbx+3Ch], 10h
      vinsertps xmm3, xmm3, dword ptr [rbx+40h], 20h ; ' '
      vmovups xmmword ptr [rbp-50h], xmm3
      vmovups xmmword ptr [rsp+190h+baseBounds.midPoint.v], xmm3
      vmovss  xmm0, dword ptr [rbx+44h]
    }
    HIDWORD(v89) = 0;
    __asm
    {
      vmovups xmm3, xmmword ptr [rbp-40h]
      vmovss  xmm3, xmm3, xmm0
      vinsertps xmm3, xmm3, dword ptr [rbx+48h], 10h
      vinsertps xmm3, xmm3, dword ptr [rbx+4Ch], 20h ; ' '
      vmovups xmmword ptr [rbp-40h], xmm3
      vmovups xmmword ptr [rsp+190h+baseBounds.halfSize.v], xmm3
    }
    AnglesToAxis(&cent->pose.angles, &axis);
    CG_GetPoseOrigin(&cent->pose, &outOrigin);
    Float4Bounds_Transform(&baseBounds, &outOrigin, &axis, &rotatedBounds);
    __asm
    {
      vmovups xmm9, xmmword ptr [rsp+190h+rotatedBounds.midPoint.v]
      vmovss  dword ptr [rbp+90h+var_100], xmm9
      vshufps xmm10, xmm9, xmm9, 55h ; 'U'
      vmovss  dword ptr [rbp+90h+var_100+4], xmm10
      vshufps xmm11, xmm9, xmm9, 0AAh ; 'ª'
      vmovss  dword ptr [rbp+90h+var_100+8], xmm11
      vmovups xmm6, xmmword ptr [rbp+90h+rotatedBounds.halfSize.v]
      vmovss  dword ptr [rbp+90h+var_100+0Ch], xmm6
      vshufps xmm8, xmm6, xmm6, 55h ; 'U'
      vshufps xmm7, xmm6, xmm6, 0AAh ; 'ª'
    }
    CG_GetPoseOrigin(&cent->pose, &_RBX->writable.origin);
    AnglesToQuat(&cent->pose.angles, &_RBX->writable.quat);
    if ( !forceFilter )
    {
      v31 = _RBX == NULL;
      if ( !_RBX )
      {
        v32 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\bounds_inline.h", 645, ASSERT_TYPE_ASSERT, "(outer)", (const char *)&queryFormat, "outer");
        v31 = !v32;
        if ( v32 )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vsubss  xmm2, xmm0, xmm9
        vmovss  xmm3, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vandps  xmm2, xmm2, xmm3
        vmovss  xmm0, dword ptr [rbx+0Ch]
        vsubss  xmm1, xmm0, xmm6
        vcomiss xmm2, xmm1
      }
      if ( v31 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+4]
          vsubss  xmm2, xmm0, xmm10
          vandps  xmm2, xmm2, xmm3
          vmovss  xmm0, dword ptr [rbx+10h]
          vsubss  xmm1, xmm0, xmm8
          vcomiss xmm2, xmm1
        }
        if ( v31 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+8]
            vsubss  xmm2, xmm0, xmm11
            vandps  xmm2, xmm2, xmm3
            vmovss  xmm0, dword ptr [rbx+14h]
            vsubss  xmm1, xmm0, xmm7
            vcomiss xmm2, xmm1
          }
          if ( v31 )
            goto LABEL_38;
        }
      }
      __asm
      {
        vmovss  xmm0, cs:__real@41800000
        vaddss  xmm6, xmm6, xmm0
        vmovss  dword ptr [rbp+90h+var_100+0Ch], xmm6
        vaddss  xmm8, xmm8, xmm0
        vaddss  xmm7, xmm7, xmm0
      }
    }
    __asm
    {
      vmovups xmm0, [rbp+90h+var_100]
      vmovups xmmword ptr [rbx], xmm0
      vunpcklps xmm1, xmm8, xmm7
      vmovsd  [rbp+90h+var_F0], xmm1
      vmovsd  qword ptr [rbx+10h], xmm1
    }
    if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF )
    {
      if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
        __debugbreak();
      v52 = !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0x17u);
    }
    else
    {
      v52 = 1;
    }
    if ( v52 && ((cent->flags & 0x1000) != 0 || (cent->flags & 0x80000) == 0) )
    {
      v53 = R_LinkBModelEntity(localClientNum, p_nextState->number, _RBX);
      cent->flags |= 0x80000u;
      __asm
      {
        vmulss  xmm1, xmm6, xmm6
        vmulss  xmm0, xmm8, xmm8
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm7, xmm7
        vaddss  xmm2, xmm2, xmm1
        vsqrtss xmm6, xmm2, xmm2
        vcomiss xmm6, cs:?rg@@3Ur_globals_t@@A.primaryLightMotionDetectSizeMin; r_globals_t rg
        vcomiss xmm6, cs:?rg@@3Ur_globals_t@@A.primaryLightMotionDetectSizeMax; r_globals_t rg
      }
      number = (unsigned int)p_nextState->number;
      if ( (unsigned int)number < 0x2800 )
      {
        v61 = &s_msgBits[(unsigned __int64)(unsigned int)number >> 5];
        v62 = 1 << (p_nextState->number & 0x1F);
        if ( v53 > r_linkLightWarningThreshold->current.integer && (*v61 & v62) == 0 )
        {
          LODWORD(fmt) = v53;
          Com_PrintWarning(8, "WARNING: Entity(%d) %s is casting shadow for %d spot lights.\n", number, "BSP brushmodel", fmt);
          __asm
          {
            vmovss  xmm1, dword ptr [rbp+90h+var_100+8]
            vcvtss2sd xmm1, xmm1, xmm1
            vmovss  xmm3, dword ptr [rbp+90h+var_100+4]
            vcvtss2sd xmm3, xmm3, xmm3
            vmovss  xmm2, dword ptr [rbp+90h+var_100]
            vcvtss2sd xmm2, xmm2, xmm2
            vcvtss2sd xmm0, xmm6, xmm6
            vmovsd  [rsp+190h+var_168], xmm0
            vmovsd  [rsp+190h+fmt], xmm1
            vmovq   r9, xmm3
            vmovq   r8, xmm2
          }
          Com_PrintWarning(8, "  Pos=(%3.0f,%3.0f,%3.0f) Radius=%3.0f.\n", _R8, _R9, fmta, v81);
          Com_PrintWarning(8, "  Please call CastSpotShadows(0) on the entity if we don't need spot shadow for this model.\n");
          if ( ((unsigned __int8)v61 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)v61) )
            __debugbreak();
          _InterlockedOr(v61, v62);
        }
      }
    }
LABEL_38:
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  _R11 = &v91;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
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

  _RDI = cent;
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  CG_SetPrevPoseOrigin(&_RDI->pose, &outOrigin);
  _RDI->pose.prevAngles.v[0] = _RDI->pose.angles.v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4Ch]
    vmovss  dword ptr [rdi+7Ch], xmm0
    vmovss  xmm1, dword ptr [rdi+50h]
    vmovss  dword ptr [rdi+80h], xmm1
  }
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
bool CG_GetViewModelAnimWeightAndTime(const LocalClientNum_t localClientIndex, const Weapon *weapon, const PlayerHandIndex hand, const WeaponAnimNumber *const animStates, const unsigned int numAnimStates, float *weight, float *time)
{
  __int64 v11; 
  cg_t *LocalClientGlobals; 
  LocalClientNum_t v17; 
  __int64 v18; 
  CgWeaponMap *v19; 
  unsigned int v20; 
  DObj *viewModelDObj; 
  int v23; 
  CgHandler *pmoveHandler; 
  unsigned int v25; 
  char v27; 
  bool result; 
  __int64 bIsAlternate; 
  __int64 handIndex; 
  float *timea; 

  _R13 = weight;
  v11 = hand;
  if ( !weight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2983, ASSERT_TYPE_ASSERT, "(weight)", (const char *)&queryFormat, "weight") )
    __debugbreak();
  _R12 = time;
  if ( !time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2984, ASSERT_TYPE_ASSERT, "(time)", (const char *)&queryFormat, "time") )
    __debugbreak();
  if ( !animStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2985, ASSERT_TYPE_ASSERT, "(animStates)", (const char *)&queryFormat, "animStates") )
    __debugbreak();
  if ( (unsigned int)v11 >= 2 )
  {
    LODWORD(bIsAlternate) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ents.cpp", 2986, ASSERT_TYPE_ASSERT, "(unsigned)( hand ) < (unsigned)( NUM_WEAPON_HANDS )", "hand doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", bIsAlternate, 2) )
      __debugbreak();
  }
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientIndex);
  if ( (unsigned int)v11 >= 2 )
  {
    LODWORD(handIndex) = 2;
    LODWORD(bIsAlternate) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1207, ASSERT_TYPE_ASSERT, "(unsigned)( handIndex ) < (unsigned)( NUM_WEAPON_HANDS )", "handIndex doesn't index NUM_WEAPON_HANDS\n\t%i not in [0, %i)", bIsAlternate, handIndex) )
      __debugbreak();
  }
  v17 = localClientIndex;
  v18 = v11;
  if ( !CgWeaponMap::ms_instance[localClientIndex] )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
      __debugbreak();
    v17 = localClientIndex;
    v18 = v11;
  }
  v19 = CgWeaponMap::ms_instance[localClientIndex];
  v20 = 0;
  *weight = 0.0;
  *time = 0.0;
  __asm
  {
    vmovaps [rsp+98h+var_48], xmm6
    vmovaps [rsp+98h+var_58], xmm7
  }
  timea = (float *)v19;
  if ( weapon->weaponIdx && (viewModelDObj = LocalClientGlobals->m_weaponHand[v18].viewModelDObj) != NULL && viewModelDObj->tree && numAnimStates )
  {
    __asm { vxorps  xmm7, xmm7, xmm7 }
    while ( 1 )
    {
      v23 = *animStates;
      pmoveHandler = CgHandler::getHandler(v17);
      v25 = BG_MapWeaponAnimStateToAnimIndex((const BgWeaponMap *)timea, &LocalClientGlobals->predictedPlayerState, v23, 0, weapon, 0, (PlayerHandIndex)v11, pmoveHandler);
      *(double *)&_XMM0 = XAnimGetTime(LocalClientGlobals->m_weaponHand[v11].viewModelDObj->tree, 0, XANIM_SUBTREE_DEFAULT, v25);
      __asm { vmovaps xmm6, xmm0 }
      *(double *)&_XMM0 = XAnimGetWeight(LocalClientGlobals->m_weaponHand[v11].viewModelDObj->tree, 0, XANIM_SUBTREE_DEFAULT, v25);
      __asm { vucomiss xmm0, xmm7 }
      if ( !v27 )
        break;
      v17 = localClientIndex;
      ++v20;
      ++animStates;
      if ( v20 >= numAnimStates )
        goto LABEL_27;
    }
    __asm
    {
      vmovss  dword ptr [r13+0], xmm0
      vmovss  dword ptr [r12], xmm6
    }
    result = 1;
  }
  else
  {
LABEL_27:
    result = 0;
  }
  __asm
  {
    vmovaps xmm7, [rsp+98h+var_58]
    vmovaps xmm6, [rsp+98h+var_48]
  }
  return result;
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

