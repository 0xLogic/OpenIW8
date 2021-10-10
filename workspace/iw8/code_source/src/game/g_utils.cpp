/*
==============
G_Utils_SetModel
==============
*/

void __fastcall G_Utils_SetModel(gentity_s *ent, const char *modelName)
{
  ?G_Utils_SetModel@@YAXPEAUgentity_s@@PEBD@Z(ent, modelName);
}

/*
==============
GUtils::GetRootParent
==============
*/

const gentity_s *__fastcall GUtils::GetRootParent(const gentity_s *ent)
{
  return ?GetRootParent@GUtils@@SAPEBUgentity_s@@PEBU2@@Z(ent);
}

/*
==============
G_Utils_UpdateOriginTrajectory
==============
*/

bool __fastcall G_Utils_UpdateOriginTrajectory(gentity_s *ent, const vec3_t *origin, const bool warpPhysics, const bool updateBroadphase)
{
  return ?G_Utils_UpdateOriginTrajectory@@YA_NPEAUgentity_s@@AEBTvec3_t@@_N2@Z(ent, origin, warpPhysics, updateBroadphase);
}

/*
==============
G_Utils_HasCachedCompositeModel
==============
*/

int __fastcall G_Utils_HasCachedCompositeModel(const unsigned int compositeModelIndex)
{
  return ?G_Utils_HasCachedCompositeModel@@YAHI@Z(compositeModelIndex);
}

/*
==============
G_Utils_SpawnEventEntity
==============
*/

gentity_s *__fastcall G_Utils_SpawnEventEntity(const vec3_t *origin, int event)
{
  return ?G_Utils_SpawnEventEntity@@YAPEAUgentity_s@@AEBTvec3_t@@H@Z(origin, event);
}

/*
==============
G_Utils_AddEvent
==============
*/

void __fastcall G_Utils_AddEvent(gentity_s *ent, unsigned int event, unsigned int eventParm)
{
  ?G_Utils_AddEvent@@YAXPEAUgentity_s@@II@Z(ent, event, eventParm);
}

/*
==============
G_Utils_UpdateAnglesTrajectory
==============
*/

bool __fastcall G_Utils_UpdateAnglesTrajectory(gentity_s *ent, const vec3_t *angles, const bool warpPhysics, const bool updateBroadphase)
{
  return ?G_Utils_UpdateAnglesTrajectory@@YA_NPEAUgentity_s@@AEBTvec3_t@@_N2@Z(ent, angles, warpPhysics, updateBroadphase);
}

/*
==============
G_Utils_GetAnglesWithWorldUp
==============
*/

void __fastcall G_Utils_GetAnglesWithWorldUp(const gentity_s *ent, vec3_t *outAngles)
{
  ?G_Utils_GetAnglesWithWorldUp@@YAXPEBUgentity_s@@AEATvec3_t@@@Z(ent, outAngles);
}

/*
==============
GUtils::GetPlayersInRadius
==============
*/

void __fastcall GUtils::GetPlayersInRadius(GUtils *this, const vec3_t *pos, float radius, unsigned int maxPlayersWanted, unsigned int *outNumPlayers, unsigned __int16 *outPlayerEntIds)
{
  ?GetPlayersInRadius@GUtils@@QEBAXAEBTvec3_t@@MIPEAIPEAG@Z(this, pos, radius, maxPlayersWanted, outNumPlayers, outPlayerEntIds);
}

/*
==============
G_Utils_DObjCalcBones
==============
*/

void __fastcall G_Utils_DObjCalcBones(const gentity_s *ent, const int boneCount, const int *boneIndices)
{
  ?G_Utils_DObjCalcBones@@YAXPEBUgentity_s@@HPEBH@Z(ent, boneCount, boneIndices);
}

/*
==============
G_Utils_DObjGetWorldTagMatrix
==============
*/

int __fastcall G_Utils_DObjGetWorldTagMatrix(const gentity_s *ent, scr_string_t tagName, tmat43_t<vec3_t> *outTagMat)
{
  return ?G_Utils_DObjGetWorldTagMatrix@@YAHPEBUgentity_s@@W4scr_string_t@@AEAT?$tmat43_t@Tvec3_t@@@@@Z(ent, tagName, outTagMat);
}

/*
==============
GUtils::WorldBoundsWouldTelefrag
==============
*/

bool __fastcall GUtils::WorldBoundsWouldTelefrag(GUtils *this, const Bounds *worldBounds)
{
  return ?WorldBoundsWouldTelefrag@GUtils@@QEBA_NPEBUBounds@@@Z(this, worldBounds);
}

/*
==============
G_SetOriginAndAngleTrajectory
==============
*/

bool __fastcall G_SetOriginAndAngleTrajectory(gentity_s *ent, const vec3_t *origin, const vec3_t *angle, const bool warpPhysics, const bool updateBroadphase, trType_t trType)
{
  return ?G_SetOriginAndAngleTrajectory@@YA_NPEAUgentity_s@@AEBTvec3_t@@1_N2W4trType_t@@@Z(ent, origin, angle, warpPhysics, updateBroadphase, trType);
}

/*
==============
G_Utils_PhysicsPrepareForXModelChange
==============
*/

void __fastcall G_Utils_PhysicsPrepareForXModelChange(XModel *assetToBeChanged)
{
  ?G_Utils_PhysicsPrepareForXModelChange@@YAXPEAUXModel@@@Z(assetToBeChanged);
}

/*
==============
G_random
==============
*/

double __fastcall G_random()
{
  double result; 

  *(float *)&result = ?G_random@@YAMXZ();
  return result;
}

/*
==============
G_Utils_SetCachedModel
==============
*/

void __fastcall G_Utils_SetCachedModel(const char *modelName, const unsigned int modelIndex)
{
  ?G_Utils_SetCachedModel@@YAXPEBDI@Z(modelName, modelIndex);
}

/*
==============
G_Utils_ApplyWorldUpToPos
==============
*/

void __fastcall G_Utils_ApplyWorldUpToPos(const gentity_s *ent, const vec3_t *pos, vec3_t *outPos)
{
  ?G_Utils_ApplyWorldUpToPos@@YAXPEBUgentity_s@@AEBTvec3_t@@AEAT2@@Z(ent, pos, outPos);
}

/*
==============
G_GetEntityUserCmdConst
==============
*/

const usercmd_s *__fastcall G_GetEntityUserCmdConst(const gentity_s *entity)
{
  return ?G_GetEntityUserCmdConst@@YAPEBUusercmd_s@@PEBUgentity_s@@@Z(entity);
}

/*
==============
G_Utils_DObjCalcPose
==============
*/

void __fastcall G_Utils_DObjCalcPose(gentity_s *ent, DObjPartBits *partBits)
{
  ?G_Utils_DObjCalcPose@@YAXPEAUgentity_s@@PEAUDObjPartBits@@@Z(ent, partBits);
}

/*
==============
G_GetRandomSeed
==============
*/

unsigned int *__fastcall G_GetRandomSeed()
{
  return ?G_GetRandomSeed@@YAPEAIXZ();
}

/*
==============
G_Utils_GetCompositeModel
==============
*/

XCompositeModelDef *__fastcall G_Utils_GetCompositeModel(int compositeModelIndex)
{
  return ?G_Utils_GetCompositeModel@@YAPEAUXCompositeModelDef@@H@Z(compositeModelIndex);
}

/*
==============
G_Utils_GetParent
==============
*/

const gentity_s *__fastcall G_Utils_GetParent(const gentity_s *ent)
{
  return ?G_Utils_GetParent@@YAPEBUgentity_s@@PEBU1@@Z(ent);
}

/*
==============
G_Utils_DObjBoneSpacePosToWorld
==============
*/

int __fastcall G_Utils_DObjBoneSpacePosToWorld(const gentity_s *ent, scr_string_t tagName, const vec3_t *boneSpacePos, vec3_t *outWorldPos)
{
  return ?G_Utils_DObjBoneSpacePosToWorld@@YAHPEBUgentity_s@@W4scr_string_t@@AEBTvec3_t@@AEAT3@@Z(ent, tagName, boneSpacePos, outWorldPos);
}

/*
==============
G_Utils_GetClientCommonUserCommand
==============
*/

void __fastcall G_Utils_GetClientCommonUserCommand(const gclient_s *client, usercmd_s *outUserCmd)
{
  ?G_Utils_GetClientCommonUserCommand@@YAXPEBUgclient_s@@PEAUusercmd_s@@@Z(client, outUserCmd);
}

/*
==============
G_Utils_DObjGetLocalBoneIndexMatrices
==============
*/

void __fastcall G_Utils_DObjGetLocalBoneIndexMatrices(const gentity_s *ent, const int boneCount, const int *boneIndices, DObjAnimMat **outMatrices)
{
  ?G_Utils_DObjGetLocalBoneIndexMatrices@@YAXPEBUgentity_s@@HPEBHPEAPEAUDObjAnimMat@@@Z(ent, boneCount, boneIndices, outMatrices);
}

/*
==============
G_Utils_GetEntAnimTree
==============
*/

XAnimTree *__fastcall G_Utils_GetEntAnimTree(gentity_s *ent)
{
  return ?G_Utils_GetEntAnimTree@@YAPEAUXAnimTree@@PEAUgentity_s@@@Z(ent);
}

/*
==============
G_Utils_PhysicsPostAssetChange
==============
*/

void G_Utils_PhysicsPostAssetChange(void)
{
  ?G_Utils_PhysicsPostAssetChange@@YAXXZ();
}

/*
==============
G_Utils_IsActor
==============
*/

bool __fastcall G_Utils_IsActor(const gentity_s *entity)
{
  return ?G_Utils_IsActor@@YA_NPEBUgentity_s@@@Z(entity);
}

/*
==============
G_Utils_ValidatePhysicsAsset
==============
*/

void __fastcall G_Utils_ValidatePhysicsAsset(const PhysicsAsset *physAsset)
{
  ?G_Utils_ValidatePhysicsAsset@@YAXPEBUPhysicsAsset@@@Z(physAsset);
}

/*
==============
G_GetEntityUserCmd
==============
*/

usercmd_s *__fastcall G_GetEntityUserCmd(gentity_s *entity)
{
  return ?G_GetEntityUserCmd@@YAPEAUusercmd_s@@PEAUgentity_s@@@Z(entity);
}

/*
==============
G_crandom
==============
*/

double __fastcall G_crandom()
{
  double result; 

  *(float *)&result = ?G_crandom@@YAMXZ();
  return result;
}

/*
==============
G_Utils_EntChangeAttachTag
==============
*/

int __fastcall G_Utils_EntChangeAttachTag(gentity_s *ent, const char *modelName, scr_string_t tagNameFrom, scr_string_t tagNameTo, unsigned int *outModelIndex)
{
  return ?G_Utils_EntChangeAttachTag@@YAHPEAUgentity_s@@PEBDW4scr_string_t@@2PEAI@Z(ent, modelName, tagNameFrom, tagNameTo, outModelIndex);
}

/*
==============
G_Utils_DObjCalcBone
==============
*/

void __fastcall G_Utils_DObjCalcBone(const gentity_s *ent, int boneIndex)
{
  ?G_Utils_DObjCalcBone@@YAXPEBUgentity_s@@H@Z(ent, boneIndex);
}

/*
==============
G_Utils_DObjClearBoneSetBit
==============
*/

void __fastcall G_Utils_DObjClearBoneSetBit(DObj *obj, unsigned __int8 boneIndex)
{
  ?G_Utils_DObjClearBoneSetBit@@YAXPEAUDObj@@E@Z(obj, boneIndex);
}

/*
==============
G_GetEntityPlayerStateConst
==============
*/

const playerState_s *__fastcall G_GetEntityPlayerStateConst(const gentity_s *entity)
{
  return ?G_GetEntityPlayerStateConst@@YAPEBUplayerState_s@@PEBUgentity_s@@@Z(entity);
}

/*
==============
GUtils::ShouldCreateEntityPhysicsOnInit_Internal
==============
*/

bool __fastcall GUtils::ShouldCreateEntityPhysicsOnInit_Internal(GUtils *this, const gentity_s *ent)
{
  return ?ShouldCreateEntityPhysicsOnInit_Internal@GUtils@@QEBA_NPEBUgentity_s@@@Z(this, ent);
}

/*
==============
G_Utils_FindEntity
==============
*/

gentity_s *__fastcall G_Utils_FindEntity(gentity_s *from, int fieldofs, scr_string_t match)
{
  return ?G_Utils_FindEntity@@YAPEAUgentity_s@@PEAU1@HW4scr_string_t@@@Z(from, fieldofs, match);
}

/*
==============
G_Utils_GetActiveEntityCount
==============
*/

unsigned int __fastcall G_Utils_GetActiveEntityCount()
{
  return ?G_Utils_GetActiveEntityCount@@YAIXZ();
}

/*
==============
G_Utils_ShouldCreateEntityScriptableFromDObj
==============
*/

bool __fastcall G_Utils_ShouldCreateEntityScriptableFromDObj(const gentity_s *ent)
{
  return ?G_Utils_ShouldCreateEntityScriptableFromDObj@@YA_NPEBUgentity_s@@@Z(ent);
}

/*
==============
G_Utils_DisplayEntityInfo
==============
*/

void __fastcall G_Utils_DisplayEntityInfo(const gentity_s *ent, const vec4_t *color, bool isLeakDisplay, vec3_t *inOutOrigin)
{
  ?G_Utils_DisplayEntityInfo@@YAXPEBUgentity_s@@AEBTvec4_t@@_NAEATvec3_t@@@Z(ent, color, isLeakDisplay, inOutOrigin);
}

/*
==============
G_Utils_IsClientOrAgent
==============
*/

bool __fastcall G_Utils_IsClientOrAgent(const gentity_s *entity)
{
  return ?G_Utils_IsClientOrAgent@@YA_NPEBUgentity_s@@@Z(entity);
}

/*
==============
G_Utils_ApplyWorldUpToAxis
==============
*/

void __fastcall G_Utils_ApplyWorldUpToAxis(const gentity_s *ent, const tmat33_t<vec3_t> *axis, tmat33_t<vec3_t> *outAxis)
{
  ?G_Utils_ApplyWorldUpToAxis@@YAXPEBUgentity_s@@AEBT?$tmat33_t@Tvec3_t@@@@AEAT2@@Z(ent, axis, outAxis);
}

/*
==============
G_Utils_DObjGetLocalTagMatrix
==============
*/

DObjAnimMat *__fastcall G_Utils_DObjGetLocalTagMatrix(const gentity_s *ent, scr_string_t tagName)
{
  return ?G_Utils_DObjGetLocalTagMatrix@@YAPEAUDObjAnimMat@@PEBUgentity_s@@W4scr_string_t@@@Z(ent, tagName);
}

/*
==============
G_Utils_DestroyAllEntityPhysics
==============
*/

void G_Utils_DestroyAllEntityPhysics(void)
{
  ?G_Utils_DestroyAllEntityPhysics@@YAXXZ();
}

/*
==============
G_Utils_DObjGetWorldBoneIndexMatrices
==============
*/

void __fastcall G_Utils_DObjGetWorldBoneIndexMatrices(const gentity_s *ent, const int boneCount, const int *boneIndices, tmat43_t<vec3_t> *outMatrices)
{
  ?G_Utils_DObjGetWorldBoneIndexMatrices@@YAXPEBUgentity_s@@HPEBHPEAT?$tmat43_t@Tvec3_t@@@@@Z(ent, boneCount, boneIndices, outMatrices);
}

/*
==============
GUtils::AreEntsInSameLinkTree
==============
*/

bool __fastcall GUtils::AreEntsInSameLinkTree(const gentity_s *ent, const gentity_s *otherEnt)
{
  return ?AreEntsInSameLinkTree@GUtils@@SA_NPEBUgentity_s@@0@Z(ent, otherEnt);
}

/*
==============
G_Utils_OverrideModel
==============
*/

void __fastcall G_Utils_OverrideModel(int modelindex, const char *defaultModelName)
{
  ?G_Utils_OverrideModel@@YAXHPEBD@Z(modelindex, defaultModelName);
}

/*
==============
G_Utils_UpdateEntityEvents
==============
*/

void G_Utils_UpdateEntityEvents(void)
{
  ?G_Utils_UpdateEntityEvents@@YAXXZ();
}

/*
==============
G_irand
==============
*/

int __fastcall G_irand(int min, int max)
{
  return ?G_irand@@YAHHH@Z(min, max);
}

/*
==============
G_Utils_PrintEntities
==============
*/

void G_Utils_PrintEntities(void)
{
  ?G_Utils_PrintEntities@@YAXXZ();
}

/*
==============
G_Utils_DObjScriptableSafeFree
==============
*/

void __fastcall G_Utils_DObjScriptableSafeFree(const gentity_s *ent)
{
  ?G_Utils_DObjScriptableSafeFree@@YAXPEBUgentity_s@@@Z(ent);
}

/*
==============
G_Utils_PhysicsPrepareForPhysicsAssetChange
==============
*/

void __fastcall G_Utils_PhysicsPrepareForPhysicsAssetChange(PhysicsAsset *assetToBeChanged)
{
  ?G_Utils_PhysicsPrepareForPhysicsAssetChange@@YAXPEAUPhysicsAsset@@@Z(assetToBeChanged);
}

/*
==============
G_flrand
==============
*/

double __fastcall G_flrand(float min, float max)
{
  double result; 

  *(float *)&result = ?G_flrand@@YAMMM@Z(min, max);
  return result;
}

/*
==============
G_Utils_PrintEntityDebugInfoToCSV
==============
*/

void G_Utils_PrintEntityDebugInfoToCSV(void)
{
  ?G_Utils_PrintEntityDebugInfoToCSV@@YAXXZ();
}

/*
==============
G_Utils_PrintLeakedEntities
==============
*/

void G_Utils_PrintLeakedEntities(void)
{
  ?G_Utils_PrintLeakedEntities@@YAXXZ();
}

/*
==============
G_Utils_IsAgent
==============
*/

bool __fastcall G_Utils_IsAgent(const gentity_s *entity)
{
  return ?G_Utils_IsAgent@@YA_NPEBUgentity_s@@@Z(entity);
}

/*
==============
G_Utils_DObjCalcAntilagPose
==============
*/

void __fastcall G_Utils_DObjCalcAntilagPose(gentity_s *ent, SvAntilagArchiveInfo *antilagInfo, DObjPartBits *partBits)
{
  ?G_Utils_DObjCalcAntilagPose@@YAXPEAUgentity_s@@PEAUSvAntilagArchiveInfo@@PEAUDObjPartBits@@@Z(ent, antilagInfo, partBits);
}

/*
==============
G_Utils_SetCachedCompositeModel
==============
*/

void __fastcall G_Utils_SetCachedCompositeModel(const char *compositeModelName, const unsigned int compositeModelIndex)
{
  ?G_Utils_SetCachedCompositeModel@@YAXPEBDI@Z(compositeModelName, compositeModelIndex);
}

/*
==============
GUtils::EntTagInfoChanged
==============
*/

void __fastcall GUtils::EntTagInfoChanged(GUtils *this, gentity_s *ent)
{
  ?EntTagInfoChanged@GUtils@@UEBAXPEAUgentity_s@@@Z(this, ent);
}

/*
==============
G_Utils_ClearEntity
==============
*/

void __fastcall G_Utils_ClearEntity(gentity_s *ent)
{
  ?G_Utils_ClearEntity@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Utils_DObjWorldPosToBoneSpace
==============
*/

int __fastcall G_Utils_DObjWorldPosToBoneSpace(const gentity_s *ent, scr_string_t tagName, const vec3_t *worldPos, vec3_t *outBoneSpacePos)
{
  return ?G_Utils_DObjWorldPosToBoneSpace@@YAHPEBUgentity_s@@W4scr_string_t@@AEBTvec3_t@@AEAT3@@Z(ent, tagName, worldPos, outBoneSpacePos);
}

/*
==============
G_Utils_DestroyEntityPhysics
==============
*/

void __fastcall G_Utils_DestroyEntityPhysics(gentity_s *ent)
{
  ?G_Utils_DestroyEntityPhysics@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Utils_IsRoboticIKEnabled
==============
*/

bool __fastcall G_Utils_IsRoboticIKEnabled(const gentity_s *entity)
{
  return ?G_Utils_IsRoboticIKEnabled@@YA_NPEBUgentity_s@@@Z(entity);
}

/*
==============
G_Utils_IsClient
==============
*/

bool __fastcall G_Utils_IsClient(const gentity_s *entity)
{
  return ?G_Utils_IsClient@@YA_NPEBUgentity_s@@@Z(entity);
}

/*
==============
G_Utils_DObjGetWorldBoneIndexPositions
==============
*/

void __fastcall G_Utils_DObjGetWorldBoneIndexPositions(const gentity_s *ent, const int boneCount, const int *boneIndices, vec3_t *outPositions)
{
  ?G_Utils_DObjGetWorldBoneIndexPositions@@YAXPEBUgentity_s@@HPEBHPEATvec3_t@@@Z(ent, boneCount, boneIndices, outPositions);
}

/*
==============
G_srand
==============
*/

void __fastcall G_srand(unsigned int seed)
{
  ?G_srand@@YAXI@Z(seed);
}

/*
==============
G_Utils_GetEntityBoundsPoint
==============
*/

void __fastcall G_Utils_GetEntityBoundsPoint(const gentity_s *ent, float ratioFromCenterX, float ratioFromCenterY, float ratioFromCenterZ, vec3_t *outPoint)
{
  ?G_Utils_GetEntityBoundsPoint@@YAXPEBUgentity_s@@MMMAEATvec3_t@@@Z(ent, ratioFromCenterX, ratioFromCenterY, ratioFromCenterZ, outPoint);
}

/*
==============
G_Utils_CreateEntityDObjScriptable
==============
*/

void __fastcall G_Utils_CreateEntityDObjScriptable(const gentity_s *ent)
{
  ?G_Utils_CreateEntityDObjScriptable@@YAXPEBUgentity_s@@@Z(ent);
}

/*
==============
G_Utils_SetConstString
==============
*/

void __fastcall G_Utils_SetConstString(scr_string_t *to, const char *from)
{
  ?G_Utils_SetConstString@@YAXPEAW4scr_string_t@@PEBD@Z(to, from);
}

/*
==============
G_Utils_ClearCachedModels
==============
*/

void G_Utils_ClearCachedModels(void)
{
  ?G_Utils_ClearCachedModels@@YAXXZ();
}

/*
==============
G_Utils_IsClientOrActorOrAgent
==============
*/

bool __fastcall G_Utils_IsClientOrActorOrAgent(const gentity_s *entity)
{
  return ?G_Utils_IsClientOrActorOrAgent@@YA_NPEBUgentity_s@@@Z(entity);
}

/*
==============
G_Utils_FreeEntityRefsCommon
==============
*/

void __fastcall G_Utils_FreeEntityRefsCommon(gentity_s *ed)
{
  ?G_Utils_FreeEntityRefsCommon@@YAXPEAUgentity_s@@@Z(ed);
}

/*
==============
G_InitFileSystemRandomSeed
==============
*/

unsigned int __fastcall G_InitFileSystemRandomSeed()
{
  return ?G_InitFileSystemRandomSeed@@YAIXZ();
}

/*
==============
G_Utils_SetCompositeModel
==============
*/

void __fastcall G_Utils_SetCompositeModel(gentity_s *const ent, entityType_s entityType, const char *compositeModelName)
{
  ?G_Utils_SetCompositeModel@@YAXQEAUgentity_s@@W4entityType_s@@PEBD@Z(ent, entityType, compositeModelName);
}

/*
==============
G_Utils_FreeEntityAfterEvent
==============
*/

void __fastcall G_Utils_FreeEntityAfterEvent(gentity_s *ent)
{
  ?G_Utils_FreeEntityAfterEvent@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Utils_FreeEntityDelay
==============
*/

void __fastcall G_Utils_FreeEntityDelay(gentity_s *ed)
{
  ?G_Utils_FreeEntityDelay@@YAXPEAUgentity_s@@@Z(ed);
}

/*
==============
G_Utils_DObjGetLocalBoneIndexMatrix
==============
*/

DObjAnimMat *__fastcall G_Utils_DObjGetLocalBoneIndexMatrix(const gentity_s *ent, int boneIndex)
{
  return ?G_Utils_DObjGetLocalBoneIndexMatrix@@YAPEAUDObjAnimMat@@PEBUgentity_s@@H@Z(ent, boneIndex);
}

/*
==============
G_Utils_IsModelBad
==============
*/

int __fastcall G_Utils_IsModelBad(int index)
{
  return ?G_Utils_IsModelBad@@YAHH@Z(index);
}

/*
==============
G_Utils_PhysicsClearPostAssetChange
==============
*/

void G_Utils_PhysicsClearPostAssetChange(void)
{
  ?G_Utils_PhysicsClearPostAssetChange@@YAXXZ();
}

/*
==============
G_Utils_UpdateEntityDObjScriptable
==============
*/

void __fastcall G_Utils_UpdateEntityDObjScriptable(const gentity_s *ent)
{
  ?G_Utils_UpdateEntityDObjScriptable@@YAXPEBUgentity_s@@@Z(ent);
}

/*
==============
G_Utils_GetModel
==============
*/

XModel *__fastcall G_Utils_GetModel(int index)
{
  return ?G_Utils_GetModel@@YAPEAUXModel@@H@Z(index);
}

/*
==============
G_GetEntityTypeName
==============
*/

const char *__fastcall G_GetEntityTypeName(const gentity_s *ent)
{
  return ?G_GetEntityTypeName@@YAPEBDPEBUgentity_s@@@Z(ent);
}

/*
==============
G_Utils_PhysicsPrepareForXModelDetailCollisionChange
==============
*/

void __fastcall G_Utils_PhysicsPrepareForXModelDetailCollisionChange(XModelDetailCollision *assetToBeChanged)
{
  ?G_Utils_PhysicsPrepareForXModelDetailCollisionChange@@YAXPEAUXModelDetailCollision@@@Z(assetToBeChanged);
}

/*
==============
G_Utils_GetModelBounds
==============
*/

bool __fastcall G_Utils_GetModelBounds(const gentity_s *ent, Bounds *outBounds)
{
  return ?G_Utils_GetModelBounds@@YA_NPEBUgentity_s@@PEAUBounds@@@Z(ent, outBounds);
}

/*
==============
G_Utils_CreateEntityPhysics
==============
*/

void __fastcall G_Utils_CreateEntityPhysics(gentity_s *ent)
{
  ?G_Utils_CreateEntityPhysics@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Utils_GetRootParent
==============
*/

const gentity_s *__fastcall G_Utils_GetRootParent(const gentity_s *ent)
{
  return ?G_Utils_GetRootParent@@YAPEBUgentity_s@@PEBU1@@Z(ent);
}

/*
==============
G_SetAngle
==============
*/

bool __fastcall G_SetAngle(gentity_s *ent, const vec3_t *angle, const bool warpPhysics, const bool updateBroadphase)
{
  return ?G_SetAngle@@YA_NPEAUgentity_s@@AEBTvec3_t@@_N2@Z(ent, angle, warpPhysics, updateBroadphase);
}

/*
==============
G_Utils_GetPhysicsAsset
==============
*/

void __fastcall G_Utils_GetPhysicsAsset(const gentity_s *ent, const XModel **baseModel, const PhysicsAsset **physAsset, int *physShapeOverrideIdx, const PhysicsAsset **physAssetAddendum, int *physShapeAddendumIdx, const XModel **detailModel, bool *overrideContents, int *contentsOverride)
{
  ?G_Utils_GetPhysicsAsset@@YAXPEBUgentity_s@@PEAPEBUXModel@@PEAPEBUPhysicsAsset@@PEAH231PEA_N3@Z(ent, baseModel, physAsset, physShapeOverrideIdx, physAssetAddendum, physShapeAddendumIdx, detailModel, overrideContents, contentsOverride);
}

/*
==============
G_Utils_DObjGetWorldTagPos_CheckTagExists
==============
*/

bool __fastcall G_Utils_DObjGetWorldTagPos_CheckTagExists(const gentity_s *ent, const scr_string_t tagName, bool errorMissing, vec3_t *outPos)
{
  return ?G_Utils_DObjGetWorldTagPos_CheckTagExists@@YA_NPEBUgentity_s@@W4scr_string_t@@_NAEATvec3_t@@@Z(ent, tagName, errorMissing, outPos);
}

/*
==============
G_GetEntityPlayerState
==============
*/

playerState_s *__fastcall G_GetEntityPlayerState(gentity_s *entity)
{
  return ?G_GetEntityPlayerState@@YAPEAUplayerState_s@@PEAUgentity_s@@@Z(entity);
}

/*
==============
G_Utils_DisplayInfoLine
==============
*/

void __fastcall G_Utils_DisplayInfoLine(vec3_t *inOutOrigin, const char *text, const vec4_t *color)
{
  ?G_Utils_DisplayInfoLine@@YAXAEATvec3_t@@PEBDAEBTvec4_t@@@Z(inOutOrigin, text, color);
}

/*
==============
G_Utils_IsClientOrActor
==============
*/

bool __fastcall G_Utils_IsClientOrActor(const gentity_s *entity)
{
  return ?G_Utils_IsClientOrActor@@YA_NPEBUgentity_s@@@Z(entity);
}

/*
==============
G_Utils_PhysicsCheckPostAssetChangeEmpty
==============
*/

void G_Utils_PhysicsCheckPostAssetChangeEmpty(void)
{
  ?G_Utils_PhysicsCheckPostAssetChangeEmpty@@YAXXZ();
}

/*
==============
GStepSlideMove::ClipVelocity
==============
*/

void __fastcall GStepSlideMove::ClipVelocity(GStepSlideMove *this, const vec3_t *invel, const vec3_t *normal, vec3_t *outvel)
{
  ?ClipVelocity@GStepSlideMove@@MEAAXAEBTvec3_t@@0AEAT2@@Z(this, invel, normal, outvel);
}

/*
==============
G_Utils_DObjGetWorldTagPos
==============
*/

int __fastcall G_Utils_DObjGetWorldTagPos(const gentity_s *ent, scr_string_t tagName, vec3_t *outPos)
{
  return ?G_Utils_DObjGetWorldTagPos@@YAHPEBUgentity_s@@W4scr_string_t@@AEATvec3_t@@@Z(ent, tagName, outPos);
}

/*
==============
G_Utils_DObjGetImpactEffectType
==============
*/

ImpactEffectType __fastcall G_Utils_DObjGetImpactEffectType(const gentity_s *ent)
{
  return ?G_Utils_DObjGetImpactEffectType@@YA?AW4ImpactEffectType@@PEBUgentity_s@@@Z(ent);
}

/*
==============
G_SetOrigin
==============
*/

bool __fastcall G_SetOrigin(gentity_s *ent, const vec3_t *origin, const bool warpPhysics, const bool updateBroadphase)
{
  return ?G_SetOrigin@@YA_NPEAUgentity_s@@AEBTvec3_t@@_N2@Z(ent, origin, warpPhysics, updateBroadphase);
}

/*
==============
G_Utils_IsIndexCompositeModel
==============
*/

int __fastcall G_Utils_IsIndexCompositeModel(int index)
{
  return ?G_Utils_IsIndexCompositeModel@@YAHH@Z(index);
}

/*
==============
G_Utils_PhysicsPrepareForPhysicsAssetChange
==============
*/

void __fastcall G_Utils_PhysicsPrepareForPhysicsAssetChange(XModel *xmodel, PhysicsAsset *assetToBeChanged)
{
  ?G_Utils_PhysicsPrepareForPhysicsAssetChange@@YAXPEAUXModel@@PEAUPhysicsAsset@@@Z(xmodel, assetToBeChanged);
}

/*
==============
G_Utils_IsNameCompositeModel
==============
*/

bool __fastcall G_Utils_IsNameCompositeModel(const char *modelName)
{
  return ?G_Utils_IsNameCompositeModel@@YA_NPEBD@Z(modelName);
}

/*
==============
G_Utils_HasCachedModel
==============
*/

int __fastcall G_Utils_HasCachedModel(const unsigned int modelIndex)
{
  return ?G_Utils_HasCachedModel@@YAHI@Z(modelIndex);
}

/*
==============
G_Utils_SpawnEntity
==============
*/

gentity_s *__fastcall G_Utils_SpawnEntity()
{
  return ?G_Utils_SpawnEntity@@YAPEAUgentity_s@@XZ();
}

/*
==============
G_Utils_DObjGetWorldBoneIndexPos
==============
*/

void __fastcall G_Utils_DObjGetWorldBoneIndexPos(const gentity_s *ent, int boneIndex, vec3_t *outPos)
{
  ?G_Utils_DObjGetWorldBoneIndexPos@@YAXPEBUgentity_s@@HAEATvec3_t@@@Z(ent, boneIndex, outPos);
}

/*
==============
G_Utils_DObjGetWorldBoneIndexMatrix
==============
*/

void __fastcall G_Utils_DObjGetWorldBoneIndexMatrix(const gentity_s *ent, int boneIndex, tmat43_t<vec3_t> *outTagMat)
{
  ?G_Utils_DObjGetWorldBoneIndexMatrix@@YAXPEBUgentity_s@@HAEAT?$tmat43_t@Tvec3_t@@@@@Z(ent, boneIndex, outTagMat);
}

/*
==============
G_Utils_EntityCentroidWithBounds
==============
*/

void __fastcall G_Utils_EntityCentroidWithBounds(const gentity_s *ent, const Bounds *bounds, vec3_t *outCentroid)
{
  ?G_Utils_EntityCentroidWithBounds@@YAXPEBUgentity_s@@PEBUBounds@@AEATvec3_t@@@Z(ent, bounds, outCentroid);
}

/*
==============
G_SetOriginAndAngle
==============
*/

bool __fastcall G_SetOriginAndAngle(gentity_s *ent, const vec3_t *origin, const vec3_t *angle, const bool warpPhysics, const bool updateBroadphase)
{
  return ?G_SetOriginAndAngle@@YA_NPEAUgentity_s@@AEBTvec3_t@@1_N2@Z(ent, origin, angle, warpPhysics, updateBroadphase);
}

/*
==============
G_Utils_DObjTransformMatToWorldPos
==============
*/

void __fastcall G_Utils_DObjTransformMatToWorldPos(const gentity_s *ent, const DObjAnimMat *mat, vec3_t *outPos)
{
  ?G_Utils_DObjTransformMatToWorldPos@@YAXPEBUgentity_s@@PEBUDObjAnimMat@@AEATvec3_t@@@Z(ent, mat, outPos);
}

/*
==============
G_DebugGetSpawnedEntityList
==============
*/

void __fastcall G_DebugGetSpawnedEntityList(const int maxInfoStrings, char **outInfoStrings, int *outNumInfoStrings)
{
  ?G_DebugGetSpawnedEntityList@@YAXHPEAPEADPEAH@Z(maxInfoStrings, outInfoStrings, outNumInfoStrings);
}

/*
==============
G_rand
==============
*/

int __fastcall G_rand()
{
  return ?G_rand@@YAHXZ();
}

/*
==============
G_Utils_DObjSafeFree
==============
*/

void __fastcall G_Utils_DObjSafeFree(gentity_s *ent)
{
  ?G_Utils_DObjSafeFree@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_Utils_GetTouchSource
==============
*/

const gentity_s *__fastcall G_Utils_GetTouchSource(const gentity_s *ent)
{
  return ?G_Utils_GetTouchSource@@YAPEBUgentity_s@@PEBU1@@Z(ent);
}

/*
==============
GUtils::DisableCreateEntityPhysicsOnInit
==============
*/

void __fastcall GUtils::DisableCreateEntityPhysicsOnInit(GUtils *this, bool disable)
{
  ?DisableCreateEntityPhysicsOnInit@GUtils@@QEAAX_N@Z(this, disable);
}

/*
==============
G_Utils_EntityCentroid
==============
*/

void __fastcall G_Utils_EntityCentroid(const gentity_s *ent, vec3_t *outCentroid)
{
  ?G_Utils_EntityCentroid@@YAXPEBUgentity_s@@AEATvec3_t@@@Z(ent, outCentroid);
}

/*
==============
GStepSlideMove::TraceCapsule
==============
*/

void __fastcall GStepSlideMove::TraceCapsule(GStepSlideMove *this, trace_t *results, const vec3_t *start, const vec3_t *end)
{
  ?TraceCapsule@GStepSlideMove@@MEAAXPEAUtrace_t@@AEBTvec3_t@@1@Z(this, results, start, end);
}

/*
==============
GUtils::AreEntsInSameLinkTree
==============
*/
bool GUtils::AreEntsInSameLinkTree(const gentity_s *ent, const gentity_s *otherEnt)
{
  const gentity_s *RootParent; 
  bool result; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3644, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !otherEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3645, ASSERT_TYPE_ASSERT, "(otherEnt)", (const char *)&queryFormat, "otherEnt") )
    __debugbreak();
  result = 1;
  if ( ent != otherEnt )
  {
    RootParent = GUtils::GetRootParent(ent);
    if ( RootParent != GUtils::GetRootParent(otherEnt) )
      return 0;
  }
  return result;
}

/*
==============
GStepSlideMove::ClipVelocity
==============
*/
void GStepSlideMove::ClipVelocity(GStepSlideMove *this, const vec3_t *invel, const vec3_t *normal, vec3_t *outvel)
{
  GStepSlideMove::VelocityClipType velocityClipType; 
  GStepSlideMove::VelocityClipType v7; 

  velocityClipType = this->velocityClipType;
  if ( velocityClipType )
  {
    switch ( velocityClipType )
    {
      case VELOCITY_CLIP_VEHICLE:
        G_Vehicle_ClipVelocity(invel, normal, outvel);
        break;
      case VELOCITY_CLIP_VEHICLE_UGV:
        G_VehicleUGV_ClipVelocity(invel, normal, outvel);
        break;
      case VELOCITY_CLIP_VEHICLE_SUB:
        G_VehicleSubmarine_ClipVelocity(invel, normal, outvel);
        break;
      default:
        v7 = this->velocityClipType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3688, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown velocity clip type: %d\n", v7) )
          __debugbreak();
        outvel->v[0] = invel->v[0];
        outvel->v[1] = invel->v[1];
        outvel->v[2] = invel->v[2];
        break;
    }
  }
  else
  {
    PM_ClipVelocity(invel, normal, outvel);
  }
}

/*
==============
GUtils::DisableCreateEntityPhysicsOnInit
==============
*/
void GUtils::DisableCreateEntityPhysicsOnInit(GUtils *this, bool disable)
{
  this->m_disableCreateEntityPhysicsOnInit = disable;
}

/*
==============
GUtils::EntTagInfoChanged
==============
*/
void GUtils::EntTagInfoChanged(GUtils *this, gentity_s *ent)
{
  G_UpdateLinkInfoForClients(ent);
}

/*
==============
G_DebugGetSpawnedEntityList
==============
*/
void G_DebugGetSpawnedEntityList(const int maxInfoStrings, char **outInfoStrings, int *outNumInfoStrings)
{
  int v6; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  gentity_s *v10; 
  int eType; 
  BOOL v12; 
  const char *v13; 
  char *fmt; 
  __int64 v15; 
  __int64 v16; 

  if ( maxInfoStrings >= 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2136, ASSERT_TYPE_ASSERT, "(maxInfoStrings < ( 2048 ))", (const char *)&queryFormat, "maxInfoStrings < MAX_DEBUG_SPAWN_TRACKED_ENTITIES") )
    __debugbreak();
  *outNumInfoStrings = 0;
  if ( g_debugSpawnedEntitiesIndex )
    v6 = g_debugSpawnedEntitiesIndex - 1;
  else
    v6 = 2047;
  if ( maxInfoStrings > 0 )
  {
    v7 = v6;
    v8 = 0;
    do
    {
      v9 = g_debugSpawnedEntities[v7];
      if ( !(_DWORD)v9 )
        break;
      outInfoStrings[v8] = (char *)g_debugSpawnedEntityStrings[(__int64)v8];
      v10 = &g_entities[v9];
      eType = v10->s.eType;
      v12 = v10->r.isInUse != 0;
      v13 = SL_ConvertToString(v10->targetname);
      LODWORD(v16) = eType;
      LODWORD(v15) = v12;
      LODWORD(fmt) = v9;
      Com_sprintf(outInfoStrings[*outNumInfoStrings], 0x200ui64, "Name = %s, Ent Index = %d, In Use = %d, Type = %d", v13, fmt, v15, v16);
      v8 = *outNumInfoStrings + 1;
      --v7;
      *outNumInfoStrings = v8;
      if ( v7 < 0 )
        v7 = 2047i64;
    }
    while ( v8 < maxInfoStrings );
  }
}

/*
==============
G_GetEntityPlayerState
==============
*/
gclient_s *G_GetEntityPlayerState(gentity_s *entity)
{
  gclient_s *result; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1875, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  result = entity->client;
  if ( !result )
    return (gclient_s *)entity->agent;
  return result;
}

/*
==============
G_GetEntityPlayerStateConst
==============
*/
gclient_s *G_GetEntityPlayerStateConst(const gentity_s *entity)
{
  gclient_s *result; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1894, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  result = entity->client;
  if ( !result )
    return (gclient_s *)entity->agent;
  return result;
}

/*
==============
G_GetEntityTypeName
==============
*/
const char *G_GetEntityTypeName(const gentity_s *ent)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1952, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->s.eType >= ET_EVENTS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1953, ASSERT_TYPE_ASSERT, "( static_cast<uint>( ent->s.eType ) < ET_EVENTS )", (const char *)&queryFormat, "static_cast<uint>( ent->s.eType ) < ET_EVENTS") )
    __debugbreak();
  return g_gEntityTypeNames[ent->s.eType];
}

/*
==============
G_GetEntityUserCmd
==============
*/
gagent_s *G_GetEntityUserCmd(gentity_s *entity)
{
  gclient_s *client; 
  gagent_s *result; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1913, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  client = entity->client;
  if ( client )
    return (gagent_s *)&client->sess.cmd;
  result = entity->agent;
  if ( result )
    return (gagent_s *)((char *)result + 21664);
  return result;
}

/*
==============
G_GetEntityUserCmdConst
==============
*/
gagent_s *G_GetEntityUserCmdConst(const gentity_s *entity)
{
  gclient_s *client; 
  gagent_s *result; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1932, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  client = entity->client;
  if ( client )
    return (gagent_s *)&client->sess.cmd;
  result = entity->agent;
  if ( result )
    return (gagent_s *)((char *)result + 21664);
  return result;
}

/*
==============
G_GetRandomSeed
==============
*/
unsigned int *G_GetRandomSeed()
{
  return &s_holdRand;
}

/*
==============
G_InitFileSystemRandomSeed
==============
*/
__int64 G_InitFileSystemRandomSeed()
{
  unsigned int v0; 

  v0 = 214013 * (159719620 - 570470319 * Sys_MillisecondsRaw()) + 2531011;
  s_holdRand = 214013 * v0 + 2531011;
  return ((214013 * v0 + 2531011) >> 17) ^ (v0 >> 17 << 16) ^ Sys_Milliseconds();
}

/*
==============
G_SetAngle
==============
*/
bool G_SetAngle(gentity_s *ent, const vec3_t *angle, const bool warpPhysics, const bool updateBroadphase)
{
  if ( ent->s.lerp.apos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1646, ASSERT_TYPE_ASSERT, "( !BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.apos ) )", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.apos )") )
      __debugbreak();
  }
  ent->s.lerp.apos.trBase.v[0] = angle->v[0];
  ent->s.lerp.apos.trBase.v[1] = angle->v[1];
  ent->s.lerp.apos.trBase.v[2] = angle->v[2];
  *(_QWORD *)&ent->s.lerp.apos.trType = 0i64;
  ent->s.lerp.apos.trDuration = 0;
  *(_QWORD *)ent->s.lerp.apos.trDelta.v = 0i64;
  ent->s.lerp.apos.trDelta.v[2] = 0.0;
  ent->r.currentAngles.v[0] = angle->v[0];
  ent->r.currentAngles.v[1] = angle->v[1];
  ent->r.currentAngles.v[2] = angle->v[2];
  return warpPhysics && G_PhysicsObject_WarpToCurrentTransform(ent, updateBroadphase);
}

/*
==============
G_SetOrigin
==============
*/
bool G_SetOrigin(gentity_s *ent, const vec3_t *origin, const bool warpPhysics, const bool updateBroadphase)
{
  if ( ((LODWORD(origin->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(origin->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(origin->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1621, ASSERT_TYPE_SANITY, "( !IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] )") )
    __debugbreak();
  if ( ent->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1623, ASSERT_TYPE_ASSERT, "( !BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.pos ) )", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.pos )") )
      __debugbreak();
  }
  Trajectory_SetTrBase(&ent->s.lerp.pos, origin);
  *(_QWORD *)&ent->s.lerp.pos.trType = 0i64;
  ent->s.lerp.pos.trDuration = 0;
  *(_QWORD *)ent->s.lerp.pos.trDelta.v = 0i64;
  ent->s.lerp.pos.trDelta.v[2] = 0.0;
  ent->r.currentOrigin.v[0] = origin->v[0];
  ent->r.currentOrigin.v[1] = origin->v[1];
  ent->r.currentOrigin.v[2] = origin->v[2];
  return warpPhysics && G_PhysicsObject_WarpToCurrentTransform(ent, updateBroadphase);
}

/*
==============
G_SetOriginAndAngle
==============
*/
bool G_SetOriginAndAngle(gentity_s *ent, const vec3_t *origin, const vec3_t *angle, const bool warpPhysics, const bool updateBroadphase)
{
  return G_SetOriginAndAngleTrajectory(ent, origin, angle, warpPhysics, updateBroadphase, TR_STATIONARY);
}

/*
==============
G_SetOriginAndAngleTrajectory
==============
*/
bool G_SetOriginAndAngleTrajectory(gentity_s *ent, const vec3_t *origin, const vec3_t *angle, const bool warpPhysics, const bool updateBroadphase, trType_t trType)
{
  if ( ((LODWORD(origin->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(origin->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(origin->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1675, ASSERT_TYPE_SANITY, "( !IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] )") )
    __debugbreak();
  if ( ent->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1677, ASSERT_TYPE_ASSERT, "( !BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.pos ) )", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.pos )") )
      __debugbreak();
  }
  Trajectory_SetTrBase(&ent->s.lerp.pos, origin);
  *(_QWORD *)&ent->s.lerp.pos.trTime = 0i64;
  ent->s.lerp.pos.trType = trType;
  *(_QWORD *)ent->s.lerp.pos.trDelta.v = 0i64;
  ent->s.lerp.pos.trDelta.v[2] = 0.0;
  ent->r.currentOrigin.v[0] = origin->v[0];
  ent->r.currentOrigin.v[1] = origin->v[1];
  ent->r.currentOrigin.v[2] = origin->v[2];
  if ( ent->s.lerp.apos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1687, ASSERT_TYPE_ASSERT, "( !BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.apos ) )", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.apos )") )
      __debugbreak();
  }
  ent->s.lerp.apos.trBase.v[0] = angle->v[0];
  ent->s.lerp.apos.trBase.v[1] = angle->v[1];
  ent->s.lerp.apos.trBase.v[2] = angle->v[2];
  ent->s.lerp.apos.trType = trType;
  *(_QWORD *)&ent->s.lerp.apos.trTime = 0i64;
  *(_QWORD *)ent->s.lerp.apos.trDelta.v = 0i64;
  ent->s.lerp.apos.trDelta.v[2] = 0.0;
  ent->r.currentAngles.v[0] = angle->v[0];
  ent->r.currentAngles.v[1] = angle->v[1];
  ent->r.currentAngles.v[2] = angle->v[2];
  return warpPhysics && G_PhysicsObject_WarpToCurrentTransform(ent, updateBroadphase);
}

/*
==============
G_Utils_AddEvent
==============
*/
void G_Utils_AddEvent(gentity_s *ent, unsigned int event, unsigned int eventParm)
{
  bool v6; 
  gclient_s *client; 
  GWeaponMap *Instance; 
  const dvar_t *v9; 
  int time; 
  const char *EntityTypeName; 
  unsigned int number; 
  const char *v13; 
  const char *EventTypeName; 
  const dvar_t *v15; 
  int previousEventSequence; 
  int v17; 
  int v18; 
  const char *v19; 
  unsigned int v20; 
  const char *v21; 
  const char *v22; 
  const char *v23; 
  int v24; 
  GWeaponMap *v25; 
  __int64 usingSharedLowLodEventBuffer; 

  if ( event )
  {
    if ( event < 0xE3 )
      goto LABEL_7;
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2046, ASSERT_TYPE_ASSERT, "(unsigned)( event ) < (unsigned)( EV_MAX_EVENTS )", "event doesn't index EV_MAX_EVENTS\n\t%i not in [0, %i)", event, 227);
  }
  else
  {
    v6 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2045, ASSERT_TYPE_ASSERT, "( event )", (const char *)&queryFormat, "event");
  }
  if ( v6 )
    __debugbreak();
LABEL_7:
  if ( ent->s.eType >= ET_EVENTS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2047, ASSERT_TYPE_ASSERT, "( ent->s.eType < ET_EVENTS )", (const char *)&queryFormat, "ent->s.eType < ET_EVENTS") )
    __debugbreak();
  client = ent->client;
  if ( client )
  {
    Instance = GWeaponMap::GetInstance();
    BG_AddUnPredictableEventToPlayerstate((const entity_event_t)event, eventParm, level.time, Instance, &client->ps);
  }
  else
  {
    v9 = DVARINT_g_eventPrintEntity;
    if ( !DVARINT_g_eventPrintEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_eventPrintEntity") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.integer == ent->s.number )
    {
      time = level.time;
      EntityTypeName = BG_GetEntityTypeName((const entityType_s)ent->s.eType);
      number = ent->s.number;
      v13 = EntityTypeName;
      EventTypeName = BG_GetEventTypeName(event);
      LODWORD(usingSharedLowLodEventBuffer) = time;
      Com_Printf(15, "Adding an event %s to entity %i with type %s at time %i\n", EventTypeName, number, v13, usingSharedLowLodEventBuffer);
    }
    v15 = DVARBOOL_g_eventWarningEnable;
    if ( !DVARBOOL_g_eventWarningEnable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_eventWarningEnable") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.enabled )
    {
      previousEventSequence = ent->previousEventSequence;
      v17 = (unsigned __int8)(ent->s.eventSequence.combined + 1);
      if ( previousEventSequence != (unsigned __int16)previousEventSequence && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1815, ASSERT_TYPE_ASSERT, "( oldEventSeq ) == ( BG_ExtractHighLodEventSeq( oldEventSeq ) )", "%s == %s\n\t%i, %i", "oldEventSeq", "BG_ExtractHighLodEventSeq( oldEventSeq )", ent->previousEventSequence, (unsigned __int16)previousEventSequence) )
        __debugbreak();
      v18 = previousEventSequence - 256;
      if ( previousEventSequence <= v17 + 64 )
        v18 = previousEventSequence;
      if ( v17 - v18 > 4 )
      {
        v19 = BG_GetEntityTypeName((const entityType_s)ent->s.eType);
        v20 = ent->s.number;
        v21 = v19;
        v22 = BG_GetEventTypeName(event);
        Com_PrintWarning(15, "Adding an event %s to entity %i with type %s but the entity's event buffer is full.\n", v22, v20, v21);
        v23 = BG_GetEventTypeName(ent->s.events[ent->s.eventSequence.combined % 4].eventType);
        Com_PrintWarning(15, "Event will be dropped: %s\n", v23);
      }
    }
    v24 = level.time;
    v25 = GWeaponMap::GetInstance();
    BG_AddEventToEntityState((const entity_event_t)event, eventParm, v25, &ent->s, v24, 0);
  }
  ent->r.eventTime = level.time;
}

/*
==============
G_Utils_ApplyWorldUpToAxis
==============
*/
void G_Utils_ApplyWorldUpToAxis(const gentity_s *ent, const tmat33_t<vec3_t> *axis, tmat33_t<vec3_t> *outAxis)
{
  const playerState_s *EntityPlayerStateConst; 
  GHandler *Handler; 
  WorldUpReferenceFrame v8; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3433, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  AxisCopy(axis, outAxis);
  if ( G_Utils_EntNeedsWorldUpFixUp(ent) )
  {
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(ent);
    if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3443, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    Handler = GHandler::getHandler();
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v8, EntityPlayerStateConst, Handler);
    WorldUpReferenceFrame::ApplyReferenceFrameToAxis(&v8, outAxis);
  }
}

/*
==============
G_Utils_ApplyWorldUpToPos
==============
*/
void G_Utils_ApplyWorldUpToPos(const gentity_s *ent, const vec3_t *pos, vec3_t *outPos)
{
  const playerState_s *EntityPlayerStateConst; 
  GHandler *Handler; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  vec3_t vec; 
  WorldUpReferenceFrame v13; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3452, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  outPos->v[0] = pos->v[0];
  outPos->v[1] = pos->v[1];
  outPos->v[2] = pos->v[2];
  if ( G_Utils_EntNeedsWorldUpFixUp(ent) )
  {
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(ent);
    if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3462, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    Handler = GHandler::getHandler();
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v13, EntityPlayerStateConst, Handler);
    v8 = outPos->v[1];
    vec.v[0] = outPos->v[0] - EntityPlayerStateConst->origin.v[0];
    v9 = outPos->v[2];
    vec.v[1] = v8 - EntityPlayerStateConst->origin.v[1];
    vec.v[2] = v9 - EntityPlayerStateConst->origin.v[2];
    WorldUpReferenceFrame::ApplyReferenceFrameToVector(&v13, &vec);
    v10 = vec.v[1];
    outPos->v[0] = vec.v[0] + EntityPlayerStateConst->origin.v[0];
    v11 = vec.v[2];
    outPos->v[1] = v10 + EntityPlayerStateConst->origin.v[1];
    outPos->v[2] = v11 + EntityPlayerStateConst->origin.v[2];
  }
}

/*
==============
G_Utils_ClearCachedModels
==============
*/
void G_Utils_ClearCachedModels(void)
{
  memset_0(s_cachedModels, 0, sizeof(s_cachedModels));
  memset_0(s_cachedModelsSet, 0, 0x100ui64);
  memset_0(s_cachedCompositeModelsSet, 0, 0x100ui64);
}

/*
==============
G_Utils_ClearEntity
==============
*/
void G_Utils_ClearEntity(gentity_s *ent)
{
  entityType_s eType; 
  unsigned int v3; 
  GWeaponMap *Instance; 
  unsigned int i; 
  GWeaponMap *v6; 
  GWeaponMap *v7; 
  entityType_s v8; 
  __int64 v9; 
  __int64 v10; 

  if ( !ent )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3220, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3158, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
  }
  eType = ent->s.eType;
  if ( eType >= ET_EVENTS )
  {
    v3 = eType - 29;
    if ( v3 >= 0xE3 )
    {
      LODWORD(v9) = eType - 29;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3163, ASSERT_TYPE_ASSERT, "(unsigned)( eventType ) < (unsigned)( EV_MAX_EVENTS )", "eventType doesn't index EV_MAX_EVENTS\n\t%i not in [0, %i)", v9, 227) )
        __debugbreak();
    }
    if ( BG_IsWeaponEvent(v3) )
    {
      Instance = GWeaponMap::GetInstance();
      if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 489, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( ent == (gentity_s *)-156i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 490, ASSERT_TYPE_ASSERT, "(eventParm)", (const char *)&queryFormat, "eventParm") )
        __debugbreak();
      if ( NULL_WEAPON.weaponIdx >= BG_GetNumWeapons() )
      {
        LODWORD(v10) = BG_GetNumWeapons();
        LODWORD(v9) = NULL_WEAPON.weaponIdx;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 491, ASSERT_TYPE_ASSERT, "(unsigned)( r_weapon.weaponIdx ) < (unsigned)( BG_GetNumWeapons() )", "r_weapon.weaponIdx doesn't index BG_GetNumWeapons()\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      Instance->SetWeapon(Instance, (BgWeaponHandle *)&ent->s.eventParm, &NULL_WEAPON);
    }
  }
  for ( i = 0; i < 4; ++i )
  {
    v6 = GWeaponMap::GetInstance();
    BG_ClearEventParameter(v6, &ent->s.events[i]);
  }
  v7 = GWeaponMap::GetInstance();
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 447, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  v7->SetWeapon(v7, &ent->s.weaponHandle, &NULL_WEAPON);
  if ( ent->client || ent->agent )
  {
    BG_SetOffHandWeaponForPlayerEntity(v7, &ent->s, &NULL_WEAPON);
    BG_SetStowedWeaponForPlayerEntity(v7, &ent->s, &NULL_WEAPON);
    BG_SetExecutionWeaponForPlayerEntity(v7, &ent->s, &NULL_WEAPON);
    BG_SetAccessoryWeaponForPlayerEntity(v7, &ent->s, &NULL_WEAPON);
  }
  v8 = ent->s.eType;
  if ( v8 == ET_PLAYER_CORPSE )
  {
    BG_SetOffHandWeaponForPlayerEntity(v7, &ent->s, &NULL_WEAPON);
    BG_SetStowedWeaponForPlayerEntity(v7, &ent->s, &NULL_WEAPON);
    BG_SetExecutionWeaponForPlayerEntity(v7, &ent->s, &NULL_WEAPON);
    BG_SetAccessoryWeaponForPlayerEntity(v7, &ent->s, &NULL_WEAPON);
  }
  else if ( v8 == ET_AGENT_CORPSE )
  {
    v7->SetWeapon(v7, (BgWeaponHandle *)&ent->s.staticState, &NULL_WEAPON);
  }
  if ( (ent->r.svFlags & 0x10) != 0 )
  {
    ent->r.isInUse = 0;
    ent->classname = 0;
    ent->s.eType = ET_FIRST;
    *(_QWORD *)ent->s.lerp.u.anonymous.data = 0i64;
    *(_QWORD *)&ent->s.lerp.u.vehicle.bodyPitch = 0i64;
    *((_QWORD *)&ent->s.lerp.u.ragdollConstraint + 2) = 0i64;
    *((_QWORD *)&ent->s.lerp.u.infoVolumeGrapple + 3) = 0i64;
    *((_QWORD *)&ent->s.lerp.u.infoVolumeGrapple + 4) = 0i64;
    ent->s.staticState.player.stowedWeaponHandle.m_mapEntryId = 0;
  }
  else
  {
    memset_0(ent, 0, sizeof(gentity_s));
  }
}

/*
==============
G_Utils_CreateEntityDObjScriptable
==============
*/
void G_Utils_CreateEntityDObjScriptable(const gentity_s *ent)
{
  const DObj *ServerDObjForEnt; 
  ScriptableDef *outScriptableDef; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1228, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  if ( ScriptableCommon_GetScriptableDefFromDObj(ServerDObjForEnt, (const ScriptableDef **)&outScriptableDef) )
    ScriptableSv_LinkReservedScriptableEntity(ent, outScriptableDef, 0xFFFFFFFF);
}

/*
==============
G_Utils_CreateEntityPhysics
==============
*/
void G_Utils_CreateEntityPhysics(gentity_s *ent)
{
  signed __int64 v2; 
  signed __int64 v3; 
  __int64 number; 
  entityType_s eType; 
  Physics_RefSystem v6; 
  PhysicsAsset *v7; 
  int IsXAssetDefaultNonLocking; 
  XModelDetailCollision *detailCollision; 
  int v10; 
  unsigned int useCategory; 
  int v12; 
  __int64 v13; 
  __int64 numRigidBodies; 
  __int64 v15; 
  unsigned int *simulationCategories; 
  int v17; 
  int v18; 
  unsigned __int8 v19; 
  unsigned int v20; 
  G_PhysicsObject *v21; 
  gentity_s *v22; 
  EntityTagInfo *tagInfo; 
  gentity_s *i; 
  gentity_s **p_parent; 
  gentity_s *v26; 
  entityType_s v27; 
  GHandler *Handler; 
  Physics_RelationshipSystem PhysicsRelationshipSystemFlag; 
  __int16 v30; 
  entityType_s v31; 
  bool v32; 
  PhysicsAsset *v33; 
  Physics_InstantiationForceType forceType; 
  bool forQueryOnly; 
  unsigned int ScriptableIndexForEntity; 
  int CanCurrentModelMove; 
  int v38; 
  bool v39; 
  XModel *v40; 
  int v41; 
  unsigned int v42; 
  hknpBodyId *RigidBodyID; 
  Vehicle *vehicle; 
  GVehicles *VehicleSystem; 
  bool v46; 
  entityType_s v47; 
  char v48; 
  int v49; 
  int *physShapeAddendumIdx; 
  int *physShapeAddendumIdxa; 
  XModel **detailModel; 
  XModel **detailModela; 
  bool detailModelc; 
  XModel **detailModelb; 
  bool v56; 
  bool v57; 
  bool overrideContents; 
  int ref; 
  int contentsOverride; 
  int physShapeOverrideIdx; 
  int v62; 
  int contents; 
  PhysicsAsset *physAsset; 
  XModel *v65; 
  XModel *baseModel; 
  int v67; 
  PhysicsAsset *physicsAsset; 
  PhysicsAsset *physAssetAddendum; 
  Physics_InstantiateShapeOverride shapeOverride; 
  Physics_InstantiateShapeOverride v71; 
  __int64 v72; 
  XModel *v73; 
  PhysicsAsset *v74; 
  XModel *v75; 
  vec4_t quat; 

  v72 = -2i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "G_Utils_CreateEntityPhysics");
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v2 = ent - g_entities;
  if ( (unsigned int)v2 >= 0x800 )
  {
    LODWORD(physShapeAddendumIdx) = ent - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", physShapeAddendumIdx, 2048) )
      __debugbreak();
  }
  if ( ent->s.number != (_WORD)v2 )
  {
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v3 = ent - g_entities;
    if ( (unsigned int)v3 >= 0x800 )
    {
      LODWORD(detailModel) = 2048;
      LODWORD(physShapeAddendumIdx) = ((int)ent - (int)g_entities) / 1456;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", physShapeAddendumIdx, detailModel) )
        __debugbreak();
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 928, ASSERT_TYPE_ASSERT, "( ent->s.number ) == ( G_GetEntityIndex( ent ) )", "%s == %s\n\t%i, %i", "ent->s.number", "G_GetEntityIndex( ent )", ent->s.number, (__int16)v3) )
      __debugbreak();
  }
  number = ent->s.number;
  if ( (unsigned int)number >= 0x800 )
  {
    LODWORD(detailModel) = 2048;
    LODWORD(physShapeAddendumIdx) = ent->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", physShapeAddendumIdx, detailModel) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[number].r.isInUse != g_entityIsInUse[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[number] )
  {
    LODWORD(physShapeAddendumIdx) = ent->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 929, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( ent->s.number ) ) )", "( ent->s.number ) = %i", physShapeAddendumIdx) )
      __debugbreak();
  }
  eType = ent->s.eType;
  if ( eType == ET_ITEM )
  {
    v6 = Physics_RefSystem_GItems;
  }
  else
  {
    if ( eType == ET_PHYSICS_VOLUME )
    {
      G_PhysicsVolume_CreatePhysics(ent);
      goto LABEL_137;
    }
    v6 = Physics_RefSystem_GEntities;
  }
  G_Utils_GetPhysicsAsset(ent, (const XModel **)&baseModel, (const PhysicsAsset **)&physAsset, &physShapeOverrideIdx, (const PhysicsAsset **)&physAssetAddendum, &v62, (const XModel **)&v65, &overrideContents, &contents);
  v7 = physAsset;
  if ( physAsset )
  {
    IsXAssetDefaultNonLocking = DB_IsXAssetDefaultNonLocking(ASSET_TYPE_PHYSICSASSET, physAsset->name);
    if ( v65 && (detailCollision = v65->detailCollision) != NULL )
      v10 = DB_IsXAssetDefaultNonLocking(ASSET_TYPE_XMODEL_DETAIL_COLLISION, detailCollision->name);
    else
      v10 = 0;
    if ( !IsXAssetDefaultNonLocking && !v10 )
    {
      useCategory = v7->useCategory;
      if ( useCategory > 7 || (v12 = 150, !_bittest(&v12, useCategory)) )
        Com_PrintWarning(20, "Physics Asset %s used by entity system with unexpected Use Category %s\n", v7->name, s_physicsAssetUseCategoryNames[v7->useCategory]);
      v13 = 0i64;
      numRigidBodies = v7->numRigidBodies;
      if ( numRigidBodies > 0 )
      {
        v15 = 0i64;
        simulationCategories = (unsigned int *)v7->simulationCategories;
        v17 = 573;
        v18 = 563;
        while ( 1 )
        {
          if ( v15 )
          {
            v20 = simulationCategories[v15];
            if ( v20 > 9 )
              goto LABEL_55;
            v19 = _bittest(&v17, v20);
          }
          else
          {
            if ( v7->useCategory == PhysicsAssetUseCategory_Vehicle )
            {
              if ( *simulationCategories - 7 <= 2 || *simulationCategories == 1 )
                goto LABEL_56;
LABEL_55:
              v13 = (unsigned int)(v13 + 1);
              goto LABEL_56;
            }
            if ( *simulationCategories > 9 )
              goto LABEL_55;
            v19 = _bittest(&v18, *simulationCategories);
          }
          if ( !v19 )
            goto LABEL_55;
LABEL_56:
          if ( ++v15 >= numRigidBodies )
          {
            if ( (int)v13 > 0 )
              Com_PrintWarning(20, "Physics Asset %s used by entity system with %i unexpected Simulation Categories\n", v7->name, v13);
            break;
          }
        }
      }
      v21 = G_PhysicsObject_Get(ent);
      if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 985, ASSERT_TYPE_ASSERT, "(physicsObj)", (const char *)&queryFormat, "physicsObj") )
        __debugbreak();
      if ( v21->physicsInstances[0] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 986, ASSERT_TYPE_ASSERT, "(physicsObj->physicsInstances[ PHYSICS_WORLD_ID_SERVER_MAIN ] == 0xFFFFFFFF)", (const char *)&queryFormat, "physicsObj->physicsInstances[ PHYSICS_WORLD_ID_SERVER_MAIN ] == PHYSICSINSTANCEID_INVALID") )
        __debugbreak();
      if ( v21->physicsInstances[1] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 987, ASSERT_TYPE_ASSERT, "(physicsObj->physicsInstances[ PHYSICS_WORLD_ID_SERVER_DETAIL ] == 0xFFFFFFFF)", (const char *)&queryFormat, "physicsObj->physicsInstances[ PHYSICS_WORLD_ID_SERVER_DETAIL ] == PHYSICSINSTANCEID_INVALID") )
        __debugbreak();
      AnglesToQuat(&ent->r.currentAngles, &quat);
      if ( ent->s.number > 0x7FFEu && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 991, ASSERT_TYPE_ASSERT, "(ent->s.number >= 0 && ent->s.number < 32767)", "%s\n\tEntity Number truncated to a short here - but it doesn't fit", "ent->s.number >= 0 && ent->s.number < 32767") )
        __debugbreak();
      v22 = ent;
      tagInfo = ent->tagInfo;
      if ( tagInfo )
      {
        for ( i = tagInfo->parent; i; i = *p_parent )
        {
          v22 = i;
          p_parent = &i->tagInfo->parent;
          if ( !p_parent )
            break;
        }
      }
      v26 = NULL;
      if ( v22 != ent )
        v26 = v22;
      if ( v26 )
        v27 = v26->s.eType;
      else
        v27 = ET_MAX;
      Handler = GHandler::getHandler();
      PhysicsRelationshipSystemFlag = BgHandler::GetPhysicsRelationshipSystemFlag(Handler, v6, ent->s.eType, v27);
      v30 = ent->s.number;
      if ( ent->s.number < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,short>(short)", "unsigned", (unsigned __int16)v30, "signed", v30) )
        __debugbreak();
      ref = Physics_MakeRef(v6, PhysicsRelationshipSystemFlag, ent->r.modelType, v30);
      v56 = !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ent->s.lerp.eFlags, ACTIVE, 0xCu);
      v31 = ent->s.eType;
      if ( v31 == ET_ITEM )
      {
        v32 = 0;
      }
      else
      {
        if ( v31 != ET_SCRIPTMOVER )
          goto LABEL_91;
        G_Utils_GetPhysicsAsset(ent, (const XModel **)&v75, (const PhysicsAsset **)&physicsAsset, (int *)&physAsset, (const PhysicsAsset **)&v74, &v67, (const XModel **)&v73, &v57, &contentsOverride);
        v33 = physicsAsset;
        if ( !physicsAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 620, ASSERT_TYPE_ASSERT, "(asset)", (const char *)&queryFormat, "asset") )
          __debugbreak();
        if ( Physics_IsPhysicsAssetDynamic(v33) )
          v32 = 0;
        else
LABEL_91:
          v32 = 1;
      }
      forceType = Physics_InstantiationForceTypeKeyframedAtMost;
      if ( ent->s.lerp.pos.trType == TR_PHYSICS_SERVER_AUTH )
        forceType = Physics_InstantiationForceTypeNone;
      contentsOverride = forceType;
      forQueryOnly = ent->r.modelType == 4;
      v57 = forQueryOnly;
      shapeOverride.customShape = NULL;
      shapeOverride.massProperties = NULL;
      *(_WORD *)&shapeOverride.overrideMass = 0;
      shapeOverride.overrideTensor = 0;
      shapeOverride.shapeOverride = physShapeOverrideIdx;
      shapeOverride.physicsAssetAddendum = physAssetAddendum;
      shapeOverride.shapeAddendum = v62;
      v71.customShape = NULL;
      v71.physicsAssetAddendum = NULL;
      v71.shapeAddendum = -1;
      v71.massProperties = NULL;
      *(_WORD *)&v71.overrideMass = 0;
      v71.overrideTensor = 0;
      v71.shapeOverride = physShapeOverrideIdx;
      v21->detailCache.position.v[0] = ent->r.currentOrigin.v[0];
      v21->detailCache.position.v[1] = ent->r.currentOrigin.v[1];
      v21->detailCache.position.v[2] = ent->r.currentOrigin.v[2];
      v21->detailCache.orientationAsQuat = quat;
      if ( ent->s.eType == ET_SCRIPTMOVER && ent->s.un.scriptMoverType == 2 )
      {
        ScriptableIndexForEntity = ScriptableSv_GetScriptableIndexForEntity(ent);
        ScriptableCommon_AssertCountsInitialized();
        if ( ScriptableIndexForEntity >= g_scriptableWorldCounts.serverInstanceCount )
        {
          ScriptableCommon_AssertCountsInitialized();
          LODWORD(detailModela) = g_scriptableWorldCounts.serverInstanceCount;
          LODWORD(physShapeAddendumIdxa) = ScriptableIndexForEntity;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1017, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", physShapeAddendumIdxa, detailModela) )
            __debugbreak();
        }
        CanCurrentModelMove = ScriptableSv_CanCurrentModelMove(ScriptableIndexForEntity);
        forceType = contentsOverride;
        if ( !CanCurrentModelMove )
          forceType = Physics_InstantiationForceTypeStatic;
      }
      v21->physicsInstances[0] = Physics_InstantiateAsset(PHYSICS_WORLD_ID_FIRST, baseModel, v7, ref, &ent->r.currentOrigin, &quat, v56, 1, v32, &shapeOverride, forceType, Physics_InstantiationFilterTypeServer, forQueryOnly);
      ++v7->usageCounter.serverEnt;
      v38 = contents;
      v39 = overrideContents;
      if ( overrideContents )
        Physics_SetInstanceContents(PHYSICS_WORLD_ID_FIRST, v21->physicsInstances[0], contents);
      if ( v65 )
      {
        detailModelc = v32;
        v40 = v65;
        v21->physicsInstances[1] = Physics_InstantiateDetailModel(PHYSICS_WORLD_ID_SERVER_DETAIL, v65, ref, &ent->r.currentOrigin, &quat, v56, detailModelc, v57, 0);
        ++v40->physicsUsageCounter.serverEnt;
      }
      else
      {
        v21->physicsInstances[1] = Physics_InstantiateAsset(PHYSICS_WORLD_ID_SERVER_DETAIL, baseModel, v7, ref, &ent->r.currentOrigin, &quat, v56, 1, v32, &v71, Physics_InstantiationForceTypeStatic, Physics_InstantiationFilterTypeServer, v57);
      }
      if ( v39 )
        Physics_SetInstanceContents(PHYSICS_WORLD_ID_SERVER_DETAIL, v21->physicsInstances[1], v38);
      if ( ent->s.lerp.pos.trType == TR_PHYSICS_SERVER_AUTH )
      {
        v21->mapping = PHYSICSOBJECT_MAPPING_PHYSICS_AUTH;
        v41 = 0;
      }
      else
      {
        v42 = v21->physicsInstances[0];
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        v41 = 0;
        if ( v42 == -1 )
        {
          LODWORD(detailModelb) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", detailModelb) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated )
        {
          LODWORD(detailModelb) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", detailModelb) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID((hknpBodyId *)&physAsset, PHYSICS_WORLD_ID_FIRST, v42, 0);
        if ( Physics_IsRigidBodyDynamic(PHYSICS_WORLD_ID_FIRST, RigidBodyID->m_serialAndIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1062, ASSERT_TYPE_ASSERT, "(!Physics_IsRigidBodyDynamic( PHYSICS_WORLD_ID_SERVER_MAIN, bodyId ))", "%s\n\tTrying to create an entity driven physics object for a dynamic body - asset %s", "!Physics_IsRigidBodyDynamic( PHYSICS_WORLD_ID_SERVER_MAIN, bodyId )", v7->name) )
          __debugbreak();
        v21->mapping = PHYSICSOBJECT_MAPPING_ENTITY_AUTH;
      }
      G_PhysicsObject_MarkPhysicsObjectAsUsed(ent->s.number, 1);
      G_PhysicsObject_MarkPhysicsObjectAsShown(ent->s.number, v56, 1);
      G_PhysicsObject_MarkPhysicsObjectDetailAsShown(ent->s.number, v56, 1);
      G_PhysicsObject_CachePrimaryBodies(ent->s.number);
      G_PhysicsObject_CreateChildEntities(PHYSICS_WORLD_ID_FIRST, ent, v21);
      G_PhysicsObject_CreateKeyframedBoneMapping(PHYSICS_WORLD_ID_FIRST, ent, v21, v7);
      G_PhysicsObject_CreateDetailBoneMapping(PHYSICS_WORLD_ID_SERVER_DETAIL, ent, v21);
      G_PhysicsObject_IdentifyRigidBodyType(ent->s.number);
      if ( ent->s.eType == ET_VEHICLE )
      {
        vehicle = ent->vehicle;
        if ( vehicle )
        {
          if ( BGVehicles::PhysicsIsValid(vehicle->physicsVehicle) )
          {
            VehicleSystem = GVehicles::GetVehicleSystem();
            GVehicles::PhysicsCreateRigidBodyResources(VehicleSystem, ent->vehicle->physicsVehicle);
          }
        }
      }
      v46 = ent->classname == scr_const.script_item && (ent->spawnflags & 8) == 0;
      v47 = ent->s.eType;
      v48 = v46;
      if ( v47 == ET_ITEM )
        v48 = 1;
      if ( v47 == ET_ITEM )
        v41 = 1078198280;
      v49 = v41 | (v46 << 30);
      if ( v48 )
      {
        Physics_AddInstanceContents(PHYSICS_WORLD_ID_FIRST, v21->physicsInstances[0], v49);
        Physics_AddInstanceContents(PHYSICS_WORLD_ID_SERVER_DETAIL, v21->physicsInstances[1], v49);
      }
    }
  }
LABEL_137:
  Sys_ProfEndNamedEvent();
}

/*
==============
G_Utils_DObjBoneSpacePosToWorld
==============
*/
__int64 G_Utils_DObjBoneSpacePosToWorld(const gentity_s *ent, scr_string_t tagName, const vec3_t *boneSpacePos, vec3_t *outWorldPos)
{
  __int64 number; 
  const DObj *ServerDObjForEnt; 
  DObjAnimMat *LocalBoneIndexMatrix; 
  __int64 v12; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t out; 
  tmat43_t<vec3_t> result; 
  tmat43_t<vec3_t> in2; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3028, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  number = ent->s.number;
  if ( (unsigned int)number >= 0x800 )
  {
    LODWORD(v12) = ent->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v12, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[number].r.isInUse != g_entityIsInUse[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3029, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( ent->s.number ))", (const char *)&queryFormat, "G_IsEntityInUse( ent->s.number )") )
    __debugbreak();
  if ( !tagName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3030, ASSERT_TYPE_ASSERT, "(tagName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "tagName != NULL_SCR_STRING") )
    __debugbreak();
  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  if ( !ServerDObjForEnt )
    return 0i64;
  inOutIndex[0] = -2;
  if ( !DObjGetBoneIndexInternal_12(ServerDObjForEnt, tagName, inOutIndex, &modelIndex) )
    return 0i64;
  LocalBoneIndexMatrix = G_Utils_DObjGetLocalBoneIndexMatrix(ent, inOutIndex[0]);
  if ( !LocalBoneIndexMatrix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3045, ASSERT_TYPE_ASSERT, "(boneMatrix)", (const char *)&queryFormat, "boneMatrix") )
    __debugbreak();
  QuatAndOriginToMatrix43(&LocalBoneIndexMatrix->quat, &LocalBoneIndexMatrix->trans, &result);
  MatrixTransformVector43(boneSpacePos, &result, &out);
  AnglesAndOriginToMatrix43(&ent->r.currentAngles, &ent->r.currentOrigin, &in2);
  MatrixTransformVector43(&out, &in2, outWorldPos);
  return 1i64;
}

/*
==============
G_Utils_DObjCalcAntilagPose
==============
*/
void G_Utils_DObjCalcAntilagPose(gentity_s *ent, SvAntilagArchiveInfo *antilagInfo, DObjPartBits *partBits)
{
  SvAntilagArchiveInfo *v5; 
  DObj *ServerDObjForEnt; 
  const dvar_t *v7; 
  int integer; 
  const dvar_t *v9; 
  SvAntilagArchiveFrame *toFrame; 
  int v11; 
  unsigned int v12; 
  DObjPartBits *v13; 
  gentity_s *v14; 
  SvAntilagArchiveFrame *fromFrame; 
  unsigned int animData; 
  AnimationController ControllerByIndex; 
  int v18; 
  CEntPlayerInfo info; 
  clientControllers_t control; 

  v5 = antilagInfo;
  info.control = (clientControllers_t *)antilagInfo;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2602, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2603, ASSERT_TYPE_ASSERT, "( antilagInfo )", (const char *)&queryFormat, "antilagInfo") )
    __debugbreak();
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2604, ASSERT_TYPE_ASSERT, "( partBits )", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2607, ASSERT_TYPE_ASSERT, "( obj )", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !ServerDObjForEnt->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2608, ASSERT_TYPE_ASSERT, "( obj->tree )", (const char *)&queryFormat, "obj->tree") )
    __debugbreak();
  v7 = DVARINT_bg_debugRewindCharacter;
  if ( !DVARINT_bg_debugRewindCharacter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugRewindCharacter") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  integer = v7->current.integer;
  v9 = DVARINT_bg_debugRewindPositions;
  v18 = integer;
  if ( !DVARINT_bg_debugRewindPositions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugRewindPositions") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  toFrame = NULL;
  v11 = v9->current.integer;
  if ( (integer == ent->s.number || integer < 0) && (v11 == 2 || v11 == 5) )
  {
    v12 = 0;
    v13 = partBits;
    do
    {
      *(_OWORD *)v13->array = _xmm_ffffffffffffffffffffffffffffffff;
      v13 = (DObjPartBits *)((char *)v13 + 16);
      ++v12;
    }
    while ( v12 < 2 );
    partBits->array[7] &= ~2u;
    v5 = (SvAntilagArchiveInfo *)info.control;
    integer = v18;
  }
  v14 = ent;
  if ( ((ent->s.eType - 1) & 0xFFEF) != 0 )
    goto LABEL_38;
  if ( G_Utils_IsValidAntilagPoseFrame(ent, v5->fromFrame) )
    fromFrame = v5->fromFrame;
  else
    fromFrame = NULL;
  if ( G_Utils_IsValidAntilagPoseFrame(ent, v5->toFrame) )
    toFrame = v5->toFrame;
  if ( !fromFrame && !toFrame )
  {
    v14 = ent;
LABEL_38:
    G_Utils_DObjCalcPose(v14, partBits);
    goto LABEL_39;
  }
  DObjLock(ServerDObjForEnt);
  if ( !G_Utils_DObjCreateAntilagSkel(ServerDObjForEnt, ent, v5, partBits, fromFrame, toFrame, &control) )
  {
    animData = ent->s.animInfo.animData;
    if ( (animData & 1) != 0 )
    {
      ControllerByIndex = BG_AnimationState_GetControllerByIndex((animData >> 18) & 0x3F);
      BG_AnimationState_SetPlayerInfo(ControllerByIndex, ServerDObjForEnt, &control, &info);
      BG_AnimationState_DoControllers(&info, ServerDObjForEnt, partBits);
    }
    else
    {
      BG_Player_SetPlayerInfo(ServerDObjForEnt, &control, &info);
      BG_Pose_DoPlayerControllers(&info, ServerDObjForEnt, partBits);
    }
    Profile_Begin(640);
    G_PhysicsObject_MapPose(ent, partBits, ServerDObjForEnt);
    Profile_EndInternal(NULL);
    Profile_Begin(400);
    DObjCalcSkel(ServerDObjForEnt, partBits);
    Profile_EndInternal(NULL);
  }
  DObjUnlock(ServerDObjForEnt);
LABEL_39:
  if ( (integer == ent->s.number || integer < 0) && (v11 == 2 || v11 == 5) )
    SV_Game_XModelDebugBoxes(ent, &colorYellow, 100);
}

/*
==============
G_Utils_DObjCalcBone
==============
*/
void G_Utils_DObjCalcBone(const gentity_s *ent, int boneIndex)
{
  int boneIndices; 

  boneIndices = boneIndex;
  G_Utils_DObjCalcBones(ent, 1, &boneIndices);
}

/*
==============
G_Utils_DObjCalcBones
==============
*/
void G_Utils_DObjCalcBones(const gentity_s *ent, const int boneCount, const int *boneIndices)
{
  __int128 v4; 
  __int128 v5; 
  const int *v6; 
  __int64 v7; 
  DObj *ServerDObjForEnt; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  int v13; 
  int v14; 
  const XModel *Model; 
  const char **p_name; 
  double v17; 
  double v18; 
  const char *Name; 
  DObjPartBits *p_partBits; 
  unsigned int v21; 
  unsigned __int64 v23; 
  void (__fastcall *controller)(const gentity_s *, DObjPartBits *); 
  char *fmt; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  DObjPartBits partBits; 
  __int128 v32; 
  __int128 v33; 
  __int128 v34; 

  v6 = boneIndices;
  v7 = boneCount;
  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2675, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( DObjNumBones(ServerDObjForEnt) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2676, ASSERT_TYPE_ASSERT, "(DObjNumBones( obj ) > 0)", (const char *)&queryFormat, "DObjNumBones( obj ) > 0") )
    __debugbreak();
  DObjLock(ServerDObjForEnt);
  v9 = v7;
  if ( (int)v7 > 0 )
  {
    v10 = 0i64;
    v11 = 0i64;
    while ( SV_Game_DObjCreateSkelForBone(ServerDObjForEnt, v6[v11]) )
    {
      if ( ++v11 >= v9 )
        goto LABEL_33;
    }
    v12 = 0i64;
    v34 = _XMM6;
    v33 = v4;
    v32 = v5;
    do
    {
      v13 = v6[v12];
      if ( v13 >= ServerDObjForEnt->numBones )
      {
        v14 = 0;
        if ( ServerDObjForEnt->numModels )
        {
          do
          {
            Model = DObjGetModel(ServerDObjForEnt, v14);
            p_name = &Model->name;
            if ( Model && (Model->flags & 0x8000) != 0 && DB_IsXAssetTransient(ASSET_TYPE_XMODEL, Model->name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2718, ASSERT_TYPE_ASSERT, "( ( !DB_IsXAssetTransient( ASSET_TYPE_XMODEL, model->name ) ) )", "( model->name ) = %s", *p_name) )
              __debugbreak();
            ++v14;
          }
          while ( v14 < ServerDObjForEnt->numModels );
          v6 = boneIndices;
        }
        _XMM6 = COERCE_UNSIGNED_INT64(ent->r.currentOrigin.v[2]);
        v17 = ent->r.currentOrigin.v[1];
        v18 = ent->r.currentOrigin.v[0];
        Name = DObjGetName(ServerDObjForEnt);
        LODWORD(v26) = ent->s.number;
        LODWORD(fmt) = ServerDObjForEnt->numBones;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E33540, 750i64, (unsigned int)v13, fmt, v26, Name, v18, v17, (_QWORD)_XMM6);
      }
      ++v12;
    }
    while ( v12 < v9 );
    p_partBits = &partBits;
    v21 = 0;
    __asm { vpxor   xmm6, xmm6, xmm6 }
    do
    {
      *(_OWORD *)p_partBits->array = _XMM6;
      p_partBits = (DObjPartBits *)((char *)p_partBits + 16);
      ++v21;
    }
    while ( v21 < 2 );
    do
    {
      v23 = (unsigned int)v6[v10];
      if ( (unsigned int)v23 >= 0x100 )
      {
        LODWORD(v28) = 256;
        LODWORD(v27) = v6[v10];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v27, v28) )
          __debugbreak();
      }
      ++v10;
      partBits.array[v23 >> 5] |= 0x80000000 >> (v23 & 0x1F);
    }
    while ( v10 < v9 );
    DObjCompleteHierarchyBits(ServerDObjForEnt, &partBits);
    controller = G_Main_GetEntHandlerList(ent)->controller;
    if ( controller )
      controller(ent, &partBits);
    DObjCalcSkel(ServerDObjForEnt, &partBits);
  }
LABEL_33:
  DObjUnlock(ServerDObjForEnt);
}

/*
==============
G_Utils_DObjCalcPose
==============
*/
void G_Utils_DObjCalcPose(gentity_s *ent, DObjPartBits *partBits)
{
  DObj *ServerDObjForEnt; 
  void (__fastcall *controller)(const gentity_s *, DObjPartBits *); 

  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2342, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( DObjNumBones(ServerDObjForEnt) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2343, ASSERT_TYPE_ASSERT, "(DObjNumBones( obj ) > 0)", (const char *)&queryFormat, "DObjNumBones( obj ) > 0") )
    __debugbreak();
  DObjLock(ServerDObjForEnt);
  if ( !SV_Game_DObjCreateSkelForBones(ServerDObjForEnt, partBits) )
  {
    controller = G_Main_GetEntHandlerList(ent)->controller;
    if ( controller )
      controller(ent, partBits);
    Profile_Begin(640);
    G_PhysicsObject_MapPose(ent, partBits, ServerDObjForEnt);
    Profile_EndInternal(NULL);
    DObjCalcSkel(ServerDObjForEnt, partBits);
  }
  DObjUnlock(ServerDObjForEnt);
}

/*
==============
G_Utils_DObjClearBoneSetBit
==============
*/
void G_Utils_DObjClearBoneSetBit(DObj *obj, unsigned __int8 boneIndex)
{
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2772, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  DObjLock(obj);
  DObjClearBoneSetBit(obj, boneIndex);
  DObjUnlock(obj);
}

/*
==============
G_Utils_DObjCreateAntilagSkel
==============
*/
char G_Utils_DObjCreateAntilagSkel(DObj *obj, const gentity_s *ent, SvAntilagArchiveInfo *antilagInfo, DObjPartBits *partBits, SvAntilagArchiveFrame *fromFrame, SvAntilagArchiveFrame *toFrame, clientControllers_t *outCtrl)
{
  __int64 number; 
  __int64 v12; 
  const char *v13; 
  float progress; 
  const dvar_t *v16; 
  __int64 v17; 
  double v18; 
  clientControllers_t *v19; 
  double v20; 
  char *fmt; 
  __int64 v22; 
  __int64 v23; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2566, ASSERT_TYPE_ASSERT, "( obj )", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2567, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !antilagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2568, ASSERT_TYPE_ASSERT, "( antilagInfo )", (const char *)&queryFormat, "antilagInfo") )
    __debugbreak();
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2569, ASSERT_TYPE_ASSERT, "( partBits )", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  number = ent->s.number;
  if ( (unsigned int)number >= 0xF8 )
  {
    LODWORD(v22) = ent->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2572, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( ( sizeof( *array_counter( antilagInfo->hasAntilagPose ) ) + 0 ) )", "characterIndex doesn't index ARRAY_COUNT( antilagInfo->hasAntilagPose )\n\t%i not in [0, %i)", v22, 248) )
      __debugbreak();
  }
  v12 = number;
  LODWORD(fmt) = toFrame != NULL;
  v13 = j_va("ci:%d hp:%d f:%d t:%d", (unsigned int)number, antilagInfo->hasAntilagPose[number], fromFrame != NULL, fmt);
  Sys_ProfSetMarker(0xFF0F0F0F, v13);
  if ( antilagInfo->hasAntilagPose[number] )
  {
    if ( !antilagInfo->savedTree[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2579, ASSERT_TYPE_ASSERT, "( antilagInfo->savedTree[characterIndex] != nullptr )", (const char *)&queryFormat, "antilagInfo->savedTree[characterIndex] != nullptr") )
      __debugbreak();
    if ( SV_Game_DObjCreateSkelForBones(obj, partBits) )
      return 1;
  }
  if ( !antilagInfo->hasAntilagPose[number] )
  {
    G_Utils_DObjSaveCurrentAnimTree(obj, ent, antilagInfo, partBits);
    G_Utils_DObjReadAntilagAnimTree(obj, number, fromFrame, toFrame, antilagInfo->progress);
  }
  progress = antilagInfo->progress;
  if ( (unsigned int)number >= 0xF8 )
  {
    LODWORD(v23) = 248;
    LODWORD(v22) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2528, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( (((1) >= (200 + 48)) ? (1) : (200 + 48)) )", "characterIndex doesn't index MAX_ANTILAG_CLIENT_AGENTS\n\t%i not in [0, %i)", v22, v23) )
      __debugbreak();
  }
  if ( (progress < 0.0 || progress > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2529, ASSERT_TYPE_ASSERT, "( ( (lerp >= 0.0f) && (lerp <= 1.0f) ) )", "%s\n\t( lerp ) = %g", "( (lerp >= 0.0f) && (lerp <= 1.0f) )", progress) )
    __debugbreak();
  if ( fromFrame )
  {
    if ( toFrame )
    {
      v16 = DCONST_DVARBOOL_g_antilagPoseBlend;
      if ( !DCONST_DVARBOOL_g_antilagPoseBlend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_antilagPoseBlend") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      v17 = v12;
      if ( v16->current.enabled )
      {
        G_Utils_DObjLerpAntilagControllers(&fromFrame->ctrlInfo.controllers[v17], &toFrame->ctrlInfo.controllers[v17], progress, outCtrl);
      }
      else
      {
        if ( progress >= 0.5 )
        {
          *(__m256i *)outCtrl->angles[0].v = *(__m256i *)toFrame->ctrlInfo.controllers[v17].angles[0].v;
          *(__m256i *)&outCtrl->angles[2].z = *(__m256i *)&toFrame->ctrlInfo.controllers[v17].angles[2].z;
          *(__m256i *)&outCtrl->tag_origin_offset.y = *(__m256i *)&toFrame->ctrlInfo.controllers[v17].tag_origin_offset.y;
          *(_OWORD *)outCtrl->hand_ik_local_ang[0].v = *(_OWORD *)toFrame->ctrlInfo.controllers[v17].hand_ik_local_ang[0].v;
          v18 = *(double *)&toFrame->ctrlInfo.controllers[v17].hand_ik_local_ang[1].y;
        }
        else
        {
          *(__m256i *)outCtrl->angles[0].v = *(__m256i *)fromFrame->ctrlInfo.controllers[v17].angles[0].v;
          *(__m256i *)&outCtrl->angles[2].z = *(__m256i *)&fromFrame->ctrlInfo.controllers[v17].angles[2].z;
          *(__m256i *)&outCtrl->tag_origin_offset.y = *(__m256i *)&fromFrame->ctrlInfo.controllers[v17].tag_origin_offset.y;
          *(_OWORD *)outCtrl->hand_ik_local_ang[0].v = *(_OWORD *)fromFrame->ctrlInfo.controllers[v17].hand_ik_local_ang[0].v;
          v18 = *(double *)&fromFrame->ctrlInfo.controllers[v17].hand_ik_local_ang[1].y;
        }
        *(double *)&outCtrl->hand_ik_local_ang[1].y = v18;
      }
      return 0;
    }
    goto LABEL_46;
  }
  if ( !toFrame )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2556, ASSERT_TYPE_ASSERT, "( fromFrame )", (const char *)&queryFormat, "fromFrame") )
      __debugbreak();
LABEL_46:
    v19 = outCtrl;
    *(__m256i *)outCtrl->angles[0].v = *(__m256i *)fromFrame->ctrlInfo.controllers[number].angles[0].v;
    *(__m256i *)&outCtrl->angles[2].z = *(__m256i *)&fromFrame->ctrlInfo.controllers[number].angles[2].z;
    *(__m256i *)&outCtrl->tag_origin_offset.y = *(__m256i *)&fromFrame->ctrlInfo.controllers[number].tag_origin_offset.y;
    *(_OWORD *)outCtrl->hand_ik_local_ang[0].v = *(_OWORD *)fromFrame->ctrlInfo.controllers[number].hand_ik_local_ang[0].v;
    v20 = *(double *)&fromFrame->ctrlInfo.controllers[number].hand_ik_local_ang[1].y;
    goto LABEL_47;
  }
  v19 = outCtrl;
  *(__m256i *)outCtrl->angles[0].v = *(__m256i *)toFrame->ctrlInfo.controllers[number].angles[0].v;
  *(__m256i *)&outCtrl->angles[2].z = *(__m256i *)&toFrame->ctrlInfo.controllers[number].angles[2].z;
  *(__m256i *)&outCtrl->tag_origin_offset.y = *(__m256i *)&toFrame->ctrlInfo.controllers[number].tag_origin_offset.y;
  *(_OWORD *)outCtrl->hand_ik_local_ang[0].v = *(_OWORD *)toFrame->ctrlInfo.controllers[number].hand_ik_local_ang[0].v;
  v20 = *(double *)&toFrame->ctrlInfo.controllers[number].hand_ik_local_ang[1].y;
LABEL_47:
  *(double *)&v19->hand_ik_local_ang[1].y = v20;
  return 0;
}

/*
==============
G_Utils_DObjGetImpactEffectType
==============
*/
const DObj *G_Utils_DObjGetImpactEffectType(const gentity_s *ent)
{
  const DObj *result; 
  const XModel *Model; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3137, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  result = Com_GetServerDObjForEnt(ent);
  if ( result )
  {
    Model = DObjGetModel(result, 0);
    if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3150, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    return (const DObj *)(unsigned __int8)Model->impactType;
  }
  return result;
}

/*
==============
G_Utils_DObjGetLocalBoneIndexMatrices
==============
*/
void G_Utils_DObjGetLocalBoneIndexMatrices(const gentity_s *ent, const int boneCount, const int *boneIndices, DObjAnimMat **outMatrices)
{
  __int64 v4; 
  DObjAnimMat *MatrixArray; 
  __int64 v9; 
  DObjAnimMat *v10; 
  int v11; 
  __int64 v14; 
  const int *v15; 
  DObjAnimMat **v16; 
  __int64 i; 

  v4 = boneCount;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2826, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (int)v4 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2827, ASSERT_TYPE_ASSERT, "(boneCount > 0)", (const char *)&queryFormat, "boneCount > 0") )
    __debugbreak();
  if ( !boneIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2828, ASSERT_TYPE_ASSERT, "(boneIndices)", (const char *)&queryFormat, "boneIndices") )
    __debugbreak();
  if ( !outMatrices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2829, ASSERT_TYPE_ASSERT, "(outMatrices)", (const char *)&queryFormat, "outMatrices") )
    __debugbreak();
  Profile_Begin(803);
  G_Utils_DObjCalcBones(ent, v4, boneIndices);
  Profile_EndInternal(NULL);
  MatrixArray = SV_Game_DObjGetMatrixArray(ent);
  v9 = 0i64;
  v10 = MatrixArray;
  v11 = 0;
  _XMM4 = (unsigned __int64)MatrixArray;
  __asm { vpunpcklqdq xmm4, xmm4, xmm4 }
  if ( (int)v4 > 0 && (unsigned int)v4 >= 8 )
  {
    v14 = (int)v4 - 1;
    if ( outMatrices > (DObjAnimMat **)&boneIndices[v14] || &outMatrices[v14] < (DObjAnimMat **)boneIndices )
    {
      v15 = boneIndices + 4;
      v16 = outMatrices + 4;
      do
      {
        _XMM0 = *((unsigned __int64 *)v15 - 2);
        __asm { vpmovsxdq xmm1, xmm0 }
        _XMM0 = *((unsigned __int64 *)v15 - 1);
        __asm
        {
          vpsllq  xmm2, xmm1, xmm5
          vpaddq  xmm3, xmm2, xmm4
        }
        *((_OWORD *)v16 - 2) = _XMM3;
        __asm { vpmovsxdq xmm1, xmm0 }
        _XMM0 = *(unsigned __int64 *)v15;
        __asm
        {
          vpsllq  xmm2, xmm1, xmm5
          vpaddq  xmm3, xmm2, xmm4
        }
        *((_OWORD *)v16 - 1) = _XMM3;
        __asm { vpmovsxdq xmm1, xmm0 }
        _XMM0 = *((unsigned __int64 *)v15 + 1);
        __asm
        {
          vpsllq  xmm2, xmm1, xmm5
          vpaddq  xmm3, xmm2, xmm4
        }
        *(_OWORD *)v16 = _XMM3;
        __asm
        {
          vpmovsxdq xmm1, xmm0
          vpsllq  xmm2, xmm1, xmm5
          vpaddq  xmm3, xmm2, xmm4
        }
        v11 += 8;
        v9 += 8i64;
        *((_OWORD *)v16 + 1) = _XMM3;
        v16 += 8;
        v15 += 8;
      }
      while ( v9 < (int)v4 - (int)v4 % 8 );
    }
  }
  for ( i = v11; i < v4; ++i )
    outMatrices[i] = &v10[boneIndices[i]];
}

/*
==============
G_Utils_DObjGetLocalBoneIndexMatrix
==============
*/
DObjAnimMat *G_Utils_DObjGetLocalBoneIndexMatrix(const gentity_s *ent, int boneIndex)
{
  __int64 v3; 
  int boneIndices; 

  v3 = boneIndex;
  Profile_Begin(420);
  boneIndices = v3;
  G_Utils_DObjCalcBones(ent, 1, &boneIndices);
  Profile_EndInternal(NULL);
  return &SV_Game_DObjGetMatrixArray(ent)[v3];
}

/*
==============
G_Utils_DObjGetLocalTagMatrix
==============
*/
DObjAnimMat *G_Utils_DObjGetLocalTagMatrix(const gentity_s *ent, scr_string_t tagName)
{
  int BoneIndex; 
  __int64 v4; 
  int boneIndices; 

  BoneIndex = SV_Game_DObjGetBoneIndex(ent, tagName);
  v4 = BoneIndex;
  if ( BoneIndex < 0 )
    return 0i64;
  Profile_Begin(420);
  boneIndices = v4;
  G_Utils_DObjCalcBones(ent, 1, &boneIndices);
  Profile_EndInternal(NULL);
  return &SV_Game_DObjGetMatrixArray(ent)[v4];
}

/*
==============
G_Utils_DObjGetWorldBoneIndexMatrices
==============
*/
void G_Utils_DObjGetWorldBoneIndexMatrices(const gentity_s *ent, const int boneCount, const int *boneIndices, tmat43_t<vec3_t> *outMatrices)
{
  __int64 v4; 
  int v8; 
  vec3_t *p_currentOrigin; 
  vec3_t *p_currentAngles; 
  __int64 i; 
  DObjAnimMat *v12; 
  float transWeight; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  __int64 v24; 
  tmat33_t<vec3_t> in1; 
  tmat43_t<vec3_t> result; 
  DObjAnimMat *outMatricesa[254]; 

  v4 = boneCount;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2888, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (int)v4 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2889, ASSERT_TYPE_ASSERT, "(boneCount > 0)", (const char *)&queryFormat, "boneCount > 0") )
    __debugbreak();
  if ( !boneIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2890, ASSERT_TYPE_ASSERT, "(boneIndices)", (const char *)&queryFormat, "boneIndices") )
    __debugbreak();
  if ( !outMatrices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2891, ASSERT_TYPE_ASSERT, "(outMatrices)", (const char *)&queryFormat, "outMatrices") )
    __debugbreak();
  memset_0(outMatricesa, 0, sizeof(outMatricesa));
  if ( (unsigned int)v4 > 0xFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2896, ASSERT_TYPE_ASSERT, "(boneCount <= ( sizeof( *array_counter( matrices ) ) + 0 ))", (const char *)&queryFormat, "boneCount <= ARRAY_COUNT( matrices )") )
    __debugbreak();
  G_Utils_DObjGetLocalBoneIndexMatrices(ent, v4, boneIndices, outMatricesa);
  v8 = 0;
  if ( (int)v4 > 0 )
  {
    p_currentOrigin = &ent->r.currentOrigin;
    p_currentAngles = &ent->r.currentAngles;
    for ( i = 0i64; i < v4; ++i )
    {
      v12 = outMatricesa[i];
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2906, ASSERT_TYPE_ASSERT, "( mat )", (const char *)&queryFormat, "mat") )
        __debugbreak();
      AnglesAndOriginToMatrix43(p_currentAngles, p_currentOrigin, &result);
      *(float *)&v24 = v12->quat.v[0];
      if ( (LODWORD(v12->quat.v[0]) & 0x7F800000) == 2139095040 || (*(float *)&v24 = v12->quat.v[1], (v24 & 0x7F800000) == 2139095040) || (*(float *)&v24 = v12->quat.v[2], (v24 & 0x7F800000) == 2139095040) || (*(float *)&v24 = v12->quat.v[3], (v24 & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1178, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )", v24) )
          __debugbreak();
      }
      if ( (LODWORD(v12->transWeight) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1179, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
        __debugbreak();
      transWeight = v12->transWeight;
      v14 = transWeight * v12->quat.v[0];
      v15 = v12->quat.v[1];
      v16 = v12->quat.v[2];
      v17 = v14 * v12->quat.v[0];
      v18 = v15 * transWeight;
      v19 = v16 * transWeight;
      v20 = v12->quat.v[3];
      v21 = v18 * v15;
      v22 = v18 * v16;
      v23 = v18 * v20;
      in1.m[0].v[1] = (float)(v19 * v20) + (float)(v14 * v15);
      in1.m[1].v[0] = (float)(v14 * v15) - (float)(v19 * v20);
      in1.m[0].v[0] = 1.0 - (float)((float)(v19 * v16) + v21);
      in1.m[0].v[2] = (float)(v14 * v16) - v23;
      in1.m[1].v[1] = 1.0 - (float)((float)(v19 * v16) + v17);
      in1.m[2].v[0] = v23 + (float)(v14 * v16);
      in1.m[1].v[2] = v22 + (float)(v14 * v20);
      in1.m[2].v[2] = 1.0 - (float)(v21 + v17);
      in1.m[2].v[1] = v22 - (float)(v14 * v20);
      MatrixMultiply(&in1, (const tmat33_t<vec3_t> *)&result, (tmat33_t<vec3_t> *)&outMatrices[v8]);
      MatrixTransformVector43(&v12->trans, &result, &outMatrices[v8++].m[3]);
    }
  }
}

/*
==============
G_Utils_DObjGetWorldBoneIndexMatrix
==============
*/
void G_Utils_DObjGetWorldBoneIndexMatrix(const gentity_s *ent, int boneIndex, tmat43_t<vec3_t> *outTagMat)
{
  __int64 v4; 
  DObjAnimMat *v6; 
  int boneIndices; 
  tmat43_t<vec3_t> result; 
  tmat33_t<vec3_t> axis; 

  v4 = boneIndex;
  Profile_Begin(420);
  boneIndices = v4;
  G_Utils_DObjCalcBones(ent, 1, &boneIndices);
  Profile_EndInternal(NULL);
  v6 = &SV_Game_DObjGetMatrixArray(ent)[v4];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2868, ASSERT_TYPE_ASSERT, "( mat )", (const char *)&queryFormat, "mat") )
    __debugbreak();
  AnglesAndOriginToMatrix43(&ent->r.currentAngles, &ent->r.currentOrigin, &result);
  LocalConvertQuatToMat(v6, &axis);
  MatrixMultiply(&axis, (const tmat33_t<vec3_t> *)&result, (tmat33_t<vec3_t> *)outTagMat);
  MatrixTransformVector43(&v6->trans, &result, &outTagMat->m[3]);
}

/*
==============
G_Utils_DObjGetWorldBoneIndexPos
==============
*/
void G_Utils_DObjGetWorldBoneIndexPos(const gentity_s *ent, int boneIndex, vec3_t *outPos)
{
  __int64 v4; 
  const DObjAnimMat *v6; 
  int boneIndices; 

  v4 = boneIndex;
  Profile_Begin(420);
  boneIndices = v4;
  G_Utils_DObjCalcBones(ent, 1, &boneIndices);
  Profile_EndInternal(NULL);
  v6 = &SV_Game_DObjGetMatrixArray(ent)[v4];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2984, ASSERT_TYPE_ASSERT, "( mat )", (const char *)&queryFormat, "mat") )
    __debugbreak();
  G_Utils_DObjTransformMatToWorldPos(ent, v6, outPos);
}

/*
==============
G_Utils_DObjGetWorldBoneIndexPositions
==============
*/
void G_Utils_DObjGetWorldBoneIndexPositions(const gentity_s *ent, const int boneCount, const int *boneIndices, vec3_t *outPositions)
{
  __int64 v4; 
  int v8; 
  __int64 v9; 
  __int64 i; 
  const DObjAnimMat *v11; 
  DObjAnimMat *outMatrices[254]; 

  v4 = boneCount;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2927, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (int)v4 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2928, ASSERT_TYPE_ASSERT, "(boneCount > 0)", (const char *)&queryFormat, "boneCount > 0") )
    __debugbreak();
  if ( !boneIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2929, ASSERT_TYPE_ASSERT, "(boneIndices)", (const char *)&queryFormat, "boneIndices") )
    __debugbreak();
  if ( !outPositions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2930, ASSERT_TYPE_ASSERT, "(outPositions)", (const char *)&queryFormat, "outPositions") )
    __debugbreak();
  memset_0(outMatrices, 0, sizeof(outMatrices));
  if ( (unsigned int)v4 > 0xFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2935, ASSERT_TYPE_ASSERT, "(boneCount <= ( sizeof( *array_counter( matrices ) ) + 0 ))", (const char *)&queryFormat, "boneCount <= ARRAY_COUNT( matrices )") )
    __debugbreak();
  G_Utils_DObjGetLocalBoneIndexMatrices(ent, v4, boneIndices, outMatrices);
  v8 = 0;
  v9 = v4;
  if ( (int)v4 > 0 )
  {
    for ( i = 0i64; i < v9; ++i )
    {
      v11 = outMatrices[i];
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2942, ASSERT_TYPE_ASSERT, "( mat )", (const char *)&queryFormat, "mat") )
        __debugbreak();
      G_Utils_DObjTransformMatToWorldPos(ent, v11, &outPositions[v8++]);
    }
  }
}

/*
==============
G_Utils_DObjGetWorldTagMatrix
==============
*/
__int64 G_Utils_DObjGetWorldTagMatrix(const gentity_s *ent, scr_string_t tagName, tmat43_t<vec3_t> *outTagMat)
{
  int BoneIndex; 
  __int64 v6; 
  DObjAnimMat *v8; 
  int boneIndices; 
  tmat43_t<vec3_t> result; 
  tmat33_t<vec3_t> axis; 

  BoneIndex = SV_Game_DObjGetBoneIndex(ent, tagName);
  v6 = BoneIndex;
  if ( BoneIndex < 0 )
    return 0i64;
  Profile_Begin(420);
  boneIndices = v6;
  G_Utils_DObjCalcBones(ent, 1, &boneIndices);
  Profile_EndInternal(NULL);
  v8 = &SV_Game_DObjGetMatrixArray(ent)[v6];
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2868, ASSERT_TYPE_ASSERT, "( mat )", (const char *)&queryFormat, "mat") )
    __debugbreak();
  AnglesAndOriginToMatrix43(&ent->r.currentAngles, &ent->r.currentOrigin, &result);
  LocalConvertQuatToMat(v8, &axis);
  MatrixMultiply(&axis, (const tmat33_t<vec3_t> *)&result, (tmat33_t<vec3_t> *)outTagMat);
  MatrixTransformVector43(&v8->trans, &result, &outTagMat->m[3]);
  return 1i64;
}

/*
==============
G_Utils_DObjGetWorldTagPos
==============
*/
__int64 G_Utils_DObjGetWorldTagPos(const gentity_s *ent, scr_string_t tagName, vec3_t *outPos)
{
  int BoneIndex; 
  __int64 v6; 
  const DObjAnimMat *v7; 
  int boneIndices; 

  BoneIndex = SV_Game_DObjGetBoneIndex(ent, tagName);
  v6 = BoneIndex;
  if ( BoneIndex < 0 )
    return 0i64;
  Profile_Begin(420);
  boneIndices = v6;
  G_Utils_DObjCalcBones(ent, 1, &boneIndices);
  Profile_EndInternal(NULL);
  v7 = &SV_Game_DObjGetMatrixArray(ent)[v6];
  if ( !v7 )
    return 0i64;
  G_Utils_DObjTransformMatToWorldPos(ent, v7, outPos);
  return 1i64;
}

/*
==============
G_Utils_DObjGetWorldTagPos_CheckTagExists
==============
*/
char G_Utils_DObjGetWorldTagPos_CheckTagExists(const gentity_s *ent, const scr_string_t tagName, bool errorMissing, vec3_t *outPos)
{
  int BoneIndex; 
  __int64 v8; 
  const DObjAnimMat *v9; 
  DObj *ServerDObjForEnt; 
  int v12; 
  DObj *v13; 
  __int64 v14; 
  int numModels; 
  int number; 
  const char *v17; 
  char *fmt; 
  int boneIndices[4]; 
  char dest[1024]; 

  if ( !ent->r.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3094, ASSERT_TYPE_ASSERT, "(ent->r.isInUse)", (const char *)&queryFormat, "ent->r.isInUse") )
    __debugbreak();
  BoneIndex = SV_Game_DObjGetBoneIndex(ent, tagName);
  v8 = BoneIndex;
  if ( BoneIndex >= 0 && (Profile_Begin(420), boneIndices[0] = v8, G_Utils_DObjCalcBones(ent, 1, boneIndices), Profile_EndInternal(NULL), (v9 = &SV_Game_DObjGetMatrixArray(ent)[v8]) != NULL) )
  {
    G_Utils_DObjTransformMatToWorldPos(ent, v9, outPos);
    return 1;
  }
  else
  {
    ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
    v12 = 0;
    v13 = ServerDObjForEnt;
    boneIndices[0] = 0;
    if ( ServerDObjForEnt && ServerDObjForEnt->numModels )
    {
      v14 = 0i64;
      do
      {
        Com_sprintfPos_truncate(dest, 0x400ui64, boneIndices, "'%s'", v13->models[v14]->name);
        numModels = v13->numModels;
        if ( v12 < numModels - 1 )
        {
          Com_sprintfPos_truncate(dest, 0x400ui64, boneIndices, ",");
          LOBYTE(numModels) = v13->numModels;
        }
        ++v12;
        ++v14;
      }
      while ( v12 < (unsigned __int8)numModels );
    }
    else
    {
      Com_sprintfPos_truncate(dest, 0x400ui64, boneIndices, "<no models>");
    }
    number = ent->s.number;
    v17 = SL_ConvertToString(tagName);
    LODWORD(fmt) = number;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E337D0, 751i64, v17, fmt, dest, *(_QWORD *)boneIndices);
    return 0;
  }
}

/*
==============
G_Utils_DObjLerpAntilagControllers
==============
*/
void G_Utils_DObjLerpAntilagControllers(const clientControllers_t *from, const clientControllers_t *to, float progress, clientControllers_t *outCtrl)
{
  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2387, ASSERT_TYPE_ASSERT, "( from )", (const char *)&queryFormat, "from") )
    __debugbreak();
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2388, ASSERT_TYPE_ASSERT, "( to )", (const char *)&queryFormat, "to") )
    __debugbreak();
  if ( !outCtrl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2389, ASSERT_TYPE_ASSERT, "( outCtrl )", (const char *)&queryFormat, "outCtrl") )
    __debugbreak();
  _XMM9 = 0i64;
  __asm { vroundss xmm3, xmm9, xmm2, 1 }
  outCtrl->angles[0].v[0] = (float)((float)((float)((float)((float)(to->angles[0].v[0] - from->angles[0].v[0]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * progress) + from->angles[0].v[0];
  __asm { vroundss xmm3, xmm9, xmm2, 1 }
  outCtrl->angles[0].v[1] = (float)((float)((float)((float)((float)(to->angles[0].v[1] - from->angles[0].v[1]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * progress) + from->angles[0].v[1];
  __asm { vroundss xmm3, xmm9, xmm2, 1 }
  outCtrl->angles[0].v[2] = (float)((float)((float)((float)((float)(to->angles[0].v[2] - from->angles[0].v[2]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * progress) + from->angles[0].v[2];
  __asm { vroundss xmm3, xmm9, xmm2, 1 }
  outCtrl->angles[1].v[0] = (float)((float)((float)((float)((float)(to->angles[1].v[0] - from->angles[1].v[0]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * progress) + from->angles[1].v[0];
  __asm { vroundss xmm3, xmm9, xmm2, 1 }
  outCtrl->angles[1].v[1] = (float)((float)((float)((float)((float)(to->angles[1].v[1] - from->angles[1].v[1]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * progress) + from->angles[1].v[1];
  __asm { vroundss xmm3, xmm9, xmm2, 1 }
  outCtrl->angles[1].v[2] = (float)((float)((float)((float)((float)(to->angles[1].v[2] - from->angles[1].v[2]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * progress) + from->angles[1].v[2];
  __asm { vroundss xmm3, xmm9, xmm2, 1 }
  outCtrl->angles[2].v[0] = (float)((float)((float)((float)((float)(to->angles[2].v[0] - from->angles[2].v[0]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * progress) + from->angles[2].v[0];
  __asm { vroundss xmm3, xmm9, xmm2, 1 }
  outCtrl->angles[2].v[1] = (float)((float)((float)((float)((float)(to->angles[2].v[1] - from->angles[2].v[1]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * progress) + from->angles[2].v[1];
  __asm { vroundss xmm3, xmm9, xmm2, 1 }
  outCtrl->angles[2].v[2] = (float)((float)((float)((float)((float)(to->angles[2].v[2] - from->angles[2].v[2]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * progress) + from->angles[2].v[2];
  __asm { vroundss xmm3, xmm9, xmm2, 1 }
  outCtrl->angles[3].v[0] = (float)((float)((float)((float)((float)(to->angles[3].v[0] - from->angles[3].v[0]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * progress) + from->angles[3].v[0];
  __asm { vroundss xmm3, xmm9, xmm2, 1 }
  outCtrl->angles[3].v[1] = (float)((float)((float)((float)((float)(to->angles[3].v[1] - from->angles[3].v[1]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * progress) + from->angles[3].v[1];
  __asm { vroundss xmm3, xmm9, xmm2, 1 }
  outCtrl->angles[3].v[2] = (float)((float)((float)((float)((float)(to->angles[3].v[2] - from->angles[3].v[2]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * progress) + from->angles[3].v[2];
  LerpAngles(&from->tag_origin_angles, &to->tag_origin_angles, progress, &outCtrl->tag_origin_angles);
  outCtrl->tag_origin_offset.v[0] = (float)((float)(to->tag_origin_offset.v[0] - from->tag_origin_offset.v[0]) * progress) + from->tag_origin_offset.v[0];
  outCtrl->tag_origin_offset.v[1] = (float)((float)(to->tag_origin_offset.v[1] - from->tag_origin_offset.v[1]) * progress) + from->tag_origin_offset.v[1];
  outCtrl->tag_origin_offset.v[2] = (float)((float)(to->tag_origin_offset.v[2] - from->tag_origin_offset.v[2]) * progress) + from->tag_origin_offset.v[2];
  outCtrl->hand_ik_local_pos[0].v[0] = (float)((float)(to->hand_ik_local_pos[0].v[0] - from->hand_ik_local_pos[0].v[0]) * progress) + from->hand_ik_local_pos[0].v[0];
  outCtrl->hand_ik_local_pos[0].v[1] = (float)((float)(to->hand_ik_local_pos[0].v[1] - from->hand_ik_local_pos[0].v[1]) * progress) + from->hand_ik_local_pos[0].v[1];
  outCtrl->hand_ik_local_pos[0].v[2] = (float)((float)(to->hand_ik_local_pos[0].v[2] - from->hand_ik_local_pos[0].v[2]) * progress) + from->hand_ik_local_pos[0].v[2];
  outCtrl->hand_ik_local_pos[1].v[0] = (float)((float)(to->hand_ik_local_pos[1].v[0] - from->hand_ik_local_pos[1].v[0]) * progress) + from->hand_ik_local_pos[1].v[0];
  outCtrl->hand_ik_local_pos[1].v[1] = (float)((float)(to->hand_ik_local_pos[1].v[1] - from->hand_ik_local_pos[1].v[1]) * progress) + from->hand_ik_local_pos[1].v[1];
  outCtrl->hand_ik_local_pos[1].v[2] = (float)((float)(to->hand_ik_local_pos[1].v[2] - from->hand_ik_local_pos[1].v[2]) * progress) + from->hand_ik_local_pos[1].v[2];
  outCtrl->hand_ik_local_ang[0].v[0] = (float)((float)(to->hand_ik_local_ang[0].v[0] - from->hand_ik_local_ang[0].v[0]) * progress) + from->hand_ik_local_ang[0].v[0];
  outCtrl->hand_ik_local_ang[0].v[1] = (float)((float)(to->hand_ik_local_ang[0].v[1] - from->hand_ik_local_ang[0].v[1]) * progress) + from->hand_ik_local_ang[0].v[1];
  outCtrl->hand_ik_local_ang[0].v[2] = (float)((float)(to->hand_ik_local_ang[0].v[2] - from->hand_ik_local_ang[0].v[2]) * progress) + from->hand_ik_local_ang[0].v[2];
  outCtrl->hand_ik_local_ang[1].v[0] = (float)((float)(to->hand_ik_local_ang[1].v[0] - from->hand_ik_local_ang[1].v[0]) * progress) + from->hand_ik_local_ang[1].v[0];
  outCtrl->hand_ik_local_ang[1].v[1] = (float)((float)(to->hand_ik_local_ang[1].v[1] - from->hand_ik_local_ang[1].v[1]) * progress) + from->hand_ik_local_ang[1].v[1];
  outCtrl->hand_ik_local_ang[1].v[2] = (float)((float)(to->hand_ik_local_ang[1].v[2] - from->hand_ik_local_ang[1].v[2]) * progress) + from->hand_ik_local_ang[1].v[2];
}

/*
==============
G_Utils_DObjReadAntilagAnimTree
==============
*/
void G_Utils_DObjReadAntilagAnimTree(DObj *obj, const int characterIndex, SvAntilagArchiveFrame *fromFrame, SvAntilagArchiveFrame *toFrame, const float lerp)
{
  __int64 v7; 
  float weightScale; 
  const dvar_t *v10; 
  unsigned int v11; 
  unsigned int v12; 
  char *v13; 
  const unsigned __int8 *v14; 

  v7 = characterIndex;
  Profile_Begin(399);
  if ( (unsigned int)v7 >= 0xF8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2464, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( (((1) >= (200 + 48)) ? (1) : (200 + 48)) )", "characterIndex doesn't index MAX_ANTILAG_CLIENT_AGENTS\n\t%i not in [0, %i)", v7, 248) )
    __debugbreak();
  weightScale = lerp;
  if ( (lerp < 0.0 || lerp > 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2465, ASSERT_TYPE_ASSERT, "( ( (lerp >= 0.0f) && (lerp <= 1.0f) ) )", "%s\n\t( lerp ) = %g", "( (lerp >= 0.0f) && (lerp <= 1.0f) )", lerp) )
    __debugbreak();
  if ( !fromFrame )
  {
    if ( toFrame )
    {
      weightScale = FLOAT_1_0;
      goto LABEL_19;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2514, ASSERT_TYPE_ASSERT, "( fromFrame )", (const char *)&queryFormat, "fromFrame") )
      __debugbreak();
    goto LABEL_22;
  }
  if ( !toFrame )
  {
LABEL_22:
    weightScale = FLOAT_1_0;
    goto LABEL_23;
  }
  v10 = DCONST_DVARBOOL_g_antilagPoseBlend;
  if ( !DCONST_DVARBOOL_g_antilagPoseBlend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_antilagPoseBlend") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( !v10->current.enabled )
  {
    weightScale = FLOAT_1_0;
    if ( lerp >= 0.5 )
      goto LABEL_19;
LABEL_23:
    v12 = fromFrame->animInfo.characterCustomNodeDataSize[v7];
    v11 = fromFrame->animInfo.characterInfoCount[v7];
    v13 = (char *)fromFrame + 16 * fromFrame->animInfo.characterInfoStart[v7];
    v14 = (const unsigned __int8 *)fromFrame + fromFrame->animInfo.characterCustomNodeDataStart[v7];
    goto LABEL_24;
  }
  XAnimCreateRootNodeForAntilag(obj);
  XAnimReadAnimTreeForAntilag(obj, &fromFrame->animInfo.antilagAnimInfo[fromFrame->animInfo.characterInfoStart[v7]], fromFrame->animInfo.characterInfoCount[v7], &fromFrame->animInfo.customNodeData[fromFrame->animInfo.characterCustomNodeDataStart[v7]], fromFrame->animInfo.characterCustomNodeDataSize[v7], 1.0 - lerp);
LABEL_19:
  v11 = toFrame->animInfo.characterInfoCount[v7];
  v12 = toFrame->animInfo.characterCustomNodeDataSize[v7];
  v13 = (char *)toFrame + 16 * toFrame->animInfo.characterInfoStart[v7];
  v14 = (const unsigned __int8 *)toFrame + toFrame->animInfo.characterCustomNodeDataStart[v7];
LABEL_24:
  XAnimReadAnimTreeForAntilag(obj, (AntilagAnimInfo *)(v13 + 34228), v11, v14 + 50232, v12, weightScale);
  Profile_EndInternal(NULL);
}

/*
==============
G_Utils_DObjSafeFree
==============
*/
void G_Utils_DObjSafeFree(gentity_s *ent)
{
  int number; 
  int entnum; 

  number = ent->s.number;
  if ( number == level.cachedTagMat.entnum )
  {
    level.cachedTagMat.entnum = 2047;
    LOWORD(number) = ent->s.number;
  }
  entnum = level.cachedEntTargetTagMat.entnum;
  if ( (__int16)number == level.cachedEntTargetTagMat.entnum )
    entnum = 2047;
  level.cachedEntTargetTagMat.entnum = entnum;
  G_Utils_DestroyEntityPhysics(ent);
  Com_SafeServerDObjFree(ent->s.number);
}

/*
==============
G_Utils_DObjSaveCurrentAnimTree
==============
*/
void G_Utils_DObjSaveCurrentAnimTree(DObj *obj, const gentity_s *ent, SvAntilagArchiveInfo *antilagInfo, DObjPartBits *partBits)
{
  __int64 number; 
  XAnimTree *SmallTree; 
  __int64 v10; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2433, ASSERT_TYPE_ASSERT, "( obj )", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2434, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !antilagInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2435, ASSERT_TYPE_ASSERT, "( antilagInfo )", (const char *)&queryFormat, "antilagInfo") )
    __debugbreak();
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2436, ASSERT_TYPE_ASSERT, "( partBits )", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  number = ent->s.number;
  if ( (unsigned int)number >= 0xF8 )
  {
    LODWORD(v10) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2439, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( ( sizeof( *array_counter( antilagInfo->hasAntilagPose ) ) + 0 ) )", "characterIndex doesn't index ARRAY_COUNT( antilagInfo->hasAntilagPose )\n\t%i not in [0, %i)", v10, 248) )
      __debugbreak();
  }
  if ( antilagInfo->hasAntilagPose[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2440, ASSERT_TYPE_ASSERT, "( !antilagInfo->hasAntilagPose[characterIndex] )", (const char *)&queryFormat, "!antilagInfo->hasAntilagPose[characterIndex]") )
    __debugbreak();
  if ( antilagInfo->savedTree[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2441, ASSERT_TYPE_ASSERT, "( !antilagInfo->savedTree[characterIndex] )", (const char *)&queryFormat, "!antilagInfo->savedTree[characterIndex]") )
    __debugbreak();
  antilagInfo->hasAntilagPose[number] = 1;
  Profile_Begin(401);
  SmallTree = Com_XAnimCreateSmallTree(obj->tree->anims, MOVEMENT);
  antilagInfo->savedTree[number] = SmallTree;
  XAnimMoveAnimTree(obj->tree, SmallTree);
  Profile_EndInternal(NULL);
  SV_Game_DObjCreateSkelForBones(obj, partBits);
  DObjSkelReset(obj);
}

/*
==============
G_Utils_DObjScriptableSafeFree
==============
*/
void G_Utils_DObjScriptableSafeFree(const gentity_s *ent)
{
  unsigned int runtimeInstanceCount; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2797, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ScriptableSv_IsLinkingEnabled() )
  {
    ScriptableCommon_AssertCountsInitialized();
    runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
    if ( ScriptableSv_GetScriptableIndexForEntity(ent) < runtimeInstanceCount )
      ScriptableSv_UnlinkReservedScriptableEntity(ent);
  }
}

/*
==============
G_Utils_DObjTransformMatToWorldPos
==============
*/
void G_Utils_DObjTransformMatToWorldPos(const gentity_s *ent, const DObjAnimMat *mat, vec3_t *outPos)
{
  tmat43_t<vec3_t> result; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2849, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !mat && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2850, ASSERT_TYPE_ASSERT, "( mat )", (const char *)&queryFormat, "mat") )
    __debugbreak();
  AnglesAndOriginToMatrix43(&ent->r.currentAngles, &ent->r.currentOrigin, &result);
  MatrixTransformVector43(&mat->trans, &result, outPos);
}

/*
==============
G_Utils_DObjWorldPosToBoneSpace
==============
*/
__int64 G_Utils_DObjWorldPosToBoneSpace(const gentity_s *ent, scr_string_t tagName, const vec3_t *worldPos, vec3_t *outBoneSpacePos)
{
  __int64 number; 
  const DObj *ServerDObjForEnt; 
  DObjAnimMat *LocalBoneIndexMatrix; 
  __int64 v12; 
  unsigned __int8 inOutIndex[4]; 
  int modelIndex; 
  vec3_t out; 
  tmat43_t<vec3_t> result; 
  tmat43_t<vec3_t> in2; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2992, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  number = ent->s.number;
  if ( (unsigned int)number >= 0x800 )
  {
    LODWORD(v12) = ent->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v12, 2048) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[number].r.isInUse != g_entityIsInUse[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2993, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( ent->s.number ))", (const char *)&queryFormat, "G_IsEntityInUse( ent->s.number )") )
    __debugbreak();
  if ( !tagName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2994, ASSERT_TYPE_ASSERT, "(tagName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "tagName != NULL_SCR_STRING") )
    __debugbreak();
  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  if ( !ServerDObjForEnt )
    return 0i64;
  inOutIndex[0] = -2;
  if ( !DObjGetBoneIndexInternal_12(ServerDObjForEnt, tagName, inOutIndex, &modelIndex) )
    return 0i64;
  LocalBoneIndexMatrix = G_Utils_DObjGetLocalBoneIndexMatrix(ent, inOutIndex[0]);
  if ( !LocalBoneIndexMatrix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3009, ASSERT_TYPE_ASSERT, "(boneMatrix)", (const char *)&queryFormat, "boneMatrix") )
    __debugbreak();
  AnglesAndOriginToMatrix43(&ent->r.currentAngles, &ent->r.currentOrigin, &result);
  MatrixTransposeTransformVector43(worldPos, &result, &out);
  QuatAndOriginToMatrix43(&LocalBoneIndexMatrix->quat, &LocalBoneIndexMatrix->trans, &in2);
  MatrixTransposeTransformVector43(&out, &in2, outBoneSpacePos);
  return 1i64;
}

/*
==============
G_Utils_DestroyAllEntityPhysics
==============
*/
void G_Utils_DestroyAllEntityPhysics(void)
{
  int v0; 
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  bool v4; 
  __int64 v5; 
  __int64 v6; 

  v0 = 0;
  v1 = 0i64;
  v2 = 0i64;
  v3 = 0i64;
  v4 = 1;
  do
  {
    if ( !v4 )
    {
      LODWORD(v6) = 2048;
      LODWORD(v5) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v5, v6) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v2].r.isInUse != g_entityIsInUse[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[v1] )
      G_Utils_DestroyEntityPhysics(&g_entities[v3]);
    ++v0;
    ++v3;
    ++v1;
    ++v2;
    v4 = (unsigned int)v0 < 0x800;
  }
  while ( v0 < 2048 );
}

/*
==============
G_Utils_DestroyEntityPhysics
==============
*/
void G_Utils_DestroyEntityPhysics(gentity_s *ent)
{
  G_PhysicsObject *v2; 
  __int16 EntityIndex; 
  G_PhysicsObject *v4; 
  __int16 *m_buffer; 
  entityType_s eType; 
  Vehicle *vehicle; 
  GVehicles *VehicleSystem; 
  bool v9; 
  unsigned int v10; 
  const PhysicsAsset *InstanceAsset; 
  unsigned int v12; 
  const XModel *InstanceDetailModel; 

  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_Utils_DestroyEntityPhysics");
  v2 = G_PhysicsObject_Get(ent);
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1108, ASSERT_TYPE_ASSERT, "(physicsObj)", (const char *)&queryFormat, "physicsObj") )
    __debugbreak();
  EntityIndex = G_GetEntityIndex(ent);
  G_Weapon_DestroyRiotShieldPhysics(EntityIndex);
  if ( ent->s.eType == ET_PHYSICS_CHILD )
  {
    v4 = G_PhysicsObject_Get(ent->s.otherEntityNum);
    if ( v4 )
    {
      m_buffer = v4->childEntities.m_data.m_buffer;
      if ( m_buffer != &m_buffer[v4->childEntities.m_data.m_size] )
      {
        do
        {
          if ( *m_buffer == ent->s.number )
            *m_buffer = 2047;
          ++m_buffer;
        }
        while ( m_buffer != &v4->childEntities.m_data.m_buffer[v4->childEntities.m_data.m_size] );
      }
    }
  }
  GMovingPlatforms::UnmarkEntityKeyframedMover(ent);
  if ( v2->physicsInstances[0] != -1 || v2->physicsInstances[1] != -1 )
  {
    eType = ent->s.eType;
    if ( eType == ET_VEHICLE )
    {
      vehicle = ent->vehicle;
      if ( vehicle && BGVehicles::PhysicsIsValid(vehicle->physicsVehicle) )
      {
        VehicleSystem = GVehicles::GetVehicleSystem();
        GVehicles::PhysicsDestroyRigidBodyResources(VehicleSystem, ent->vehicle->physicsVehicle);
      }
    }
    else if ( eType == ET_PHYSICS_VOLUME )
    {
      G_PhysicsVolume_PreDestroyPhysics(ent);
    }
    v9 = ent->s.eType != ET_PHYSICS_VOLUME;
    G_PhysicsObject_UnregisterForCollisionCallback(ent);
    G_PhysicsObject_DestroyDetailBoneMapping(PHYSICS_WORLD_ID_SERVER_DETAIL, ent, v2);
    G_PhysicsObject_DestroyKeyframedBoneMapping(PHYSICS_WORLD_ID_FIRST, ent, v2);
    G_PhysicsObject_DestroyChildEntities(PHYSICS_WORLD_ID_FIRST, ent, v2);
    if ( !G_PhysicsObject_IsPhysicsObjectUsed(ent->s.number) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1179, ASSERT_TYPE_ASSERT, "(G_PhysicsObject_IsPhysicsObjectUsed( ent->s.number ))", "%s\n\tEntity %i physobj is not marked as used", "G_PhysicsObject_IsPhysicsObjectUsed( ent->s.number )", ent->s.number) )
      __debugbreak();
    G_PhysicsObject_MarkPhysicsObjectAsUsed(ent->s.number, 0);
    v10 = v2->physicsInstances[0];
    if ( v10 != -1 )
    {
      InstanceAsset = Physics_GetInstanceAsset(PHYSICS_WORLD_ID_FIRST, v10);
      if ( !InstanceAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1185, ASSERT_TYPE_ASSERT, "(physAsset)", (const char *)&queryFormat, "physAsset") )
        __debugbreak();
      Physics_DestroyInstance(PHYSICS_WORLD_ID_FIRST, v2->physicsInstances[0], v9);
      v2->physicsInstances[0] = -1;
      --InstanceAsset->usageCounter.serverEnt;
    }
    v12 = v2->physicsInstances[1];
    if ( v12 != -1 )
    {
      InstanceDetailModel = Physics_GetInstanceDetailModel(PHYSICS_WORLD_ID_SERVER_DETAIL, v12);
      if ( InstanceDetailModel )
        --InstanceDetailModel->physicsUsageCounter.serverEnt;
      Physics_DestroyInstance(PHYSICS_WORLD_ID_SERVER_DETAIL, v2->physicsInstances[1], 0);
      v2->physicsInstances[1] = -1;
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
G_Utils_DisplayEntityInfo
==============
*/
void G_Utils_DisplayEntityInfo(const gentity_s *ent, const vec4_t *color, bool isLeakDisplay, vec3_t *inOutOrigin)
{
  const char *v8; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  scr_string_t targetname; 
  const char *v13; 
  const char *v14; 
  unsigned __int16 model; 
  const char *ModelName; 
  const char *v17; 
  const char *v18; 

  v8 = SL_ConvertToString(ent->classname);
  v9 = j_va("code_classname \"%s\"", v8);
  CL_AddDebugString(inOutOrigin, color, 0.5, v9, 1, 1);
  inOutOrigin->v[2] = inOutOrigin->v[2] - 5.5;
  if ( isLeakDisplay )
  {
    v10 = SL_ConvertToString(ent->script_classname);
    v11 = j_va("classname \"%s\"", v10);
    CL_AddDebugString(inOutOrigin, color, 0.5, v11, 1, 1);
    inOutOrigin->v[2] = inOutOrigin->v[2] - 5.5;
  }
  targetname = ent->targetname;
  if ( targetname )
  {
    v13 = SL_ConvertToString(targetname);
    v14 = j_va("targetname \"%s\"", v13);
    CL_AddDebugString(inOutOrigin, color, 0.5, v14, 1, 1);
    inOutOrigin->v[2] = inOutOrigin->v[2] - 5.5;
  }
  model = ent->model;
  if ( model )
  {
    ModelName = G_CString_GetModelName(model);
    v17 = j_va("model \"%s\"", ModelName);
    CL_AddDebugString(inOutOrigin, color, 0.5, v17, 1, 1);
    inOutOrigin->v[2] = inOutOrigin->v[2] - 5.5;
  }
  if ( isLeakDisplay )
  {
    v18 = j_va("birthtime %i (%f.1 ago)", (unsigned int)ent->birthTime, (float)((float)(level.time - ent->birthTime) * 0.001));
    CL_AddDebugString(inOutOrigin, color, 0.5, v18, 1, 1);
    inOutOrigin->v[2] = inOutOrigin->v[2] - 5.5;
  }
}

/*
==============
G_Utils_DisplayInfoLine
==============
*/
void G_Utils_DisplayInfoLine(vec3_t *inOutOrigin, const char *text, const vec4_t *color)
{
  CL_AddDebugString(inOutOrigin, color, 0.5, text, 1, 1);
  inOutOrigin->v[2] = inOutOrigin->v[2] - 5.5;
}

/*
==============
G_Utils_EntChangeAttachTag
==============
*/
__int64 G_Utils_EntChangeAttachTag(gentity_s *ent, const char *modelName, scr_string_t tagNameFrom, scr_string_t tagNameTo, unsigned int *outModelIndex)
{
  scr_string_t v6; 
  signed int v9; 
  __int64 v10; 
  unsigned __int16 *attachModelNames; 
  scr_string_t *i; 
  unsigned int v13; 
  __int64 v14; 
  const char *v15; 
  const char *v16; 
  signed __int64 v17; 
  int v18; 
  __int64 v19; 
  int v20; 
  int v21; 
  int v22; 
  int isLinked; 
  __int64 result; 

  v6 = tagNameFrom;
  if ( !modelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1755, ASSERT_TYPE_ASSERT, "( modelName )", (const char *)&queryFormat, "modelName") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1756, ASSERT_TYPE_ASSERT, "( tagNameFrom != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "tagNameFrom != NULL_SCR_STRING") )
    __debugbreak();
  if ( !tagNameTo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1757, ASSERT_TYPE_ASSERT, "( tagNameTo != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "tagNameTo != NULL_SCR_STRING") )
    __debugbreak();
  if ( !outModelIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1758, ASSERT_TYPE_ASSERT, "( outModelIndex )", (const char *)&queryFormat, "outModelIndex") )
    __debugbreak();
  v9 = 0;
  *outModelIndex = 0;
  if ( !*modelName )
    return 0i64;
  v10 = 0i64;
  attachModelNames = ent->attachModelNames;
  for ( i = ent->attachTagNames; *i != v6; ++i )
  {
LABEL_42:
    ++v9;
    ++v10;
    ++attachModelNames;
    if ( v10 >= 28 )
      return 0i64;
  }
  v13 = *attachModelNames;
  if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
    __debugbreak();
  v14 = 0x7FFFFFFFi64;
  v15 = modelName;
  v16 = GConfigStrings::ms_gConfigStrings->GetModelNameString(GConfigStrings::ms_gConfigStrings, v13);
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v17 = v16 - modelName;
  do
  {
    v18 = (unsigned __int8)v15[v17];
    v19 = v14;
    v20 = *(unsigned __int8 *)v15++;
    --v14;
    if ( !v19 )
      break;
    if ( v18 != v20 )
    {
      v21 = v18 + 32;
      if ( (unsigned int)(v18 - 65) > 0x19 )
        v21 = v18;
      v18 = v21;
      v22 = v20 + 32;
      if ( (unsigned int)(v20 - 65) > 0x19 )
        v22 = v20;
      if ( v18 != v22 )
      {
        v6 = tagNameFrom;
        goto LABEL_42;
      }
    }
  }
  while ( v18 );
  if ( !ent->attachModelNames[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1773, ASSERT_TYPE_ASSERT, "(ent->attachModelNames[i])", (const char *)&queryFormat, "ent->attachModelNames[i]") )
    __debugbreak();
  Scr_SetString(&ent->attachTagNames[v9], tagNameTo);
  isLinked = ent->r.isLinked;
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::ms_gUtils->DObjUpdate(GUtils::ms_gUtils, ent, isLinked);
  if ( v9 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,int>(int)", "unsigned", (unsigned int)v9, "signed", v9) )
    __debugbreak();
  result = 1i64;
  *outModelIndex = v9;
  return result;
}

/*
==============
G_Utils_EntNeedsWorldUpFixUp
==============
*/
bool G_Utils_EntNeedsWorldUpFixUp(const gentity_s *ent)
{
  const playerState_s *p_ps; 
  GAntiLag *v3; 

  if ( !ent )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3396, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1894, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
      __debugbreak();
  }
  p_ps = &ent->client->ps;
  if ( !p_ps )
    p_ps = &ent->agent->playerState;
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
    __debugbreak();
  v3 = GAntiLag::ms_gAntiLagData;
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3401, ASSERT_TYPE_ASSERT, "(antilagSystem)", (const char *)&queryFormat, "antilagSystem") )
    __debugbreak();
  return p_ps && !v3->IsWorldUpIncludedOnEntity(v3, p_ps->clientNum) && WorldUpReferenceFrame::HasValidWorldUpInPs(p_ps);
}

/*
==============
G_Utils_EntityCentroid
==============
*/
void G_Utils_EntityCentroid(const gentity_s *ent, vec3_t *outCentroid)
{
  tmat33_t<vec3_t> axis; 

  if ( !ent )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2255, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2244, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
  }
  AnglesToAxis(&ent->r.currentAngles, &axis);
  MatrixTransformVector(&ent->r.box.midPoint, &axis, outCentroid);
  outCentroid->v[0] = outCentroid->v[0] + ent->r.currentOrigin.v[0];
  outCentroid->v[1] = ent->r.currentOrigin.v[1] + outCentroid->v[1];
  outCentroid->v[2] = ent->r.currentOrigin.v[2] + outCentroid->v[2];
}

/*
==============
G_Utils_EntityCentroidWithBounds
==============
*/
void G_Utils_EntityCentroidWithBounds(const gentity_s *ent, const Bounds *bounds, vec3_t *outCentroid)
{
  tmat33_t<vec3_t> axis; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2244, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  AnglesToAxis(&ent->r.currentAngles, &axis);
  MatrixTransformVector(&bounds->midPoint, &axis, outCentroid);
  outCentroid->v[0] = outCentroid->v[0] + ent->r.currentOrigin.v[0];
  outCentroid->v[1] = ent->r.currentOrigin.v[1] + outCentroid->v[1];
  outCentroid->v[2] = ent->r.currentOrigin.v[2] + outCentroid->v[2];
}

/*
==============
G_Utils_FindEntity
==============
*/
gentity_s *G_Utils_FindEntity(gentity_s *from, int fieldofs, scr_string_t match)
{
  __int64 v3; 
  gentity_s *v5; 
  __int64 v6; 
  int v7; 
  __int64 v9; 
  __int64 v10; 

  v3 = fieldofs;
  if ( from )
    v5 = from + 1;
  else
    v5 = g_entities;
  if ( v5 >= &g_entities[level.num_entities] )
    return 0i64;
  while ( 1 )
  {
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v6 = v5 - g_entities;
    if ( (unsigned int)v6 >= 0x800 )
    {
      LODWORD(v10) = 2048;
      LODWORD(v9) = ((int)v5 - (int)g_entities) / 1456;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    v6 = (__int16)v6;
    if ( (unsigned int)(__int16)v6 >= 0x800 )
    {
      LODWORD(v10) = 2048;
      LODWORD(v9) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v6].r.isInUse != g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[v6] )
    {
      v7 = *(_DWORD *)((char *)&v5->s.number + v3);
      if ( v7 )
      {
        if ( v7 == match )
          break;
      }
    }
    if ( ++v5 >= &g_entities[level.num_entities] )
      return 0i64;
  }
  return v5;
}

/*
==============
G_Utils_FreeEntityAfterEvent
==============
*/
void G_Utils_FreeEntityAfterEvent(gentity_s *ent)
{
  if ( ent )
  {
    ent->r.eventTypeFlags |= 1u;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1562, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    MEMORY[0xFB] |= 1u;
  }
}

/*
==============
G_Utils_FreeEntityDelay
==============
*/
void G_Utils_FreeEntityDelay(gentity_s *ed)
{
  GameScriptData *v2; 
  scrContext_t *v3; 
  unsigned int v4; 

  if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 78, ASSERT_TYPE_ASSERT, "(ms_gScriptData)", "%s\n\tAttempting to access game data outside of an active game context", "ms_gScriptData") )
    __debugbreak();
  if ( !(_BYTE)GameScriptData::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 79, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access game data outside of an active game context", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  v2 = GameScriptData::ms_gScriptData;
  if ( !GameScriptData::ms_gScriptData->delete_ && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1552, ASSERT_TYPE_ASSERT, "(gScrData->delete_)", (const char *)&queryFormat, "gScrData->delete_") )
    __debugbreak();
  v3 = ScriptContext_Server();
  v4 = GScr_ExecEntThread(ed, v2->delete_, 0);
  Scr_FreeThread(v3, v4);
}

/*
==============
G_Utils_FreeEntityRefsCommon
==============
*/
void G_Utils_FreeEntityRefsCommon(gentity_s *ed)
{
  unsigned int v1; 
  gentity_s *v2; 
  unsigned int v3; 
  int number; 
  int v5; 
  __int64 v6; 
  __int64 v7; 
  gclient_s *client; 
  __int64 v9; 
  __int64 v10; 

  v1 = ed->flags.m_flags[0];
  v2 = ed;
  v3 = 0;
  number = ed->s.number;
  if ( (v1 & 0x200000) != 0 )
  {
    v5 = 0;
    if ( level.num_entities > 0 )
    {
      v6 = 0i64;
      v7 = 0i64;
      do
      {
        if ( (unsigned int)v5 >= 0x800 )
        {
          LODWORD(v10) = 2048;
          LODWORD(v9) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v9, v10) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[v7].r.isInUse != g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( g_entityIsInUse[v6] && g_entities[v7].s.groundEntityNum == number )
          g_entities[v7].s.groundEntityNum = 2047;
        ++v5;
        ++v6;
        ++v7;
      }
      while ( v5 < level.num_entities );
      v2 = ed;
      v3 = 0;
      v1 = ed->flags.m_flags[0];
    }
  }
  if ( (v1 & 0x1000000) != 0 && level.maxclients )
  {
    do
    {
      if ( v3 >= 0x800 )
      {
        LODWORD(v10) = 2048;
        LODWORD(v9) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v3].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v3] )
      {
        client = g_entities[v3].client;
        if ( !client )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1601, ASSERT_TYPE_ASSERT, "(pClient)", (const char *)&queryFormat, "pClient") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2328, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
            __debugbreak();
        }
        if ( client->ps.cursorHintClass == USE_CLASS_GENTITY && client->ps.cursorHintEntIndex == number )
        {
          *(_WORD *)&client->ps.cursorHintData = 0;
          client->ps.cursorHintEntIndex = 2047;
        }
      }
      ++v3;
    }
    while ( v3 < level.maxclients );
    v2 = ed;
  }
  G_Vehicle_FreeReferences(v2);
  if ( (v2->flags.m_flags[0] & 0x100000) != 0 )
    G_Missile_FreeAttractorRefs(v2);
}

/*
==============
G_Utils_GetActiveEntityCount
==============
*/
__int64 G_Utils_GetActiveEntityCount()
{
  unsigned int v0; 
  int v1; 
  __int64 v2; 
  __int64 v3; 
  unsigned int v4; 
  __int64 v6; 
  __int64 v7; 

  if ( !Com_IsAnyLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3336, ASSERT_TYPE_ASSERT, "( Com_IsAnyLocalServerRunning() )", (const char *)&queryFormat, "Com_IsAnyLocalServerRunning()") )
    __debugbreak();
  v0 = 0;
  v1 = 0;
  if ( level.num_entities <= 0 )
    return 0i64;
  v2 = 0i64;
  v3 = 0i64;
  do
  {
    if ( (unsigned int)v1 >= 0x800 )
    {
      LODWORD(v7) = 2048;
      LODWORD(v6) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v2].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    v4 = v0 + 1;
    if ( !g_entityIsInUse[v3] )
      v4 = v0;
    ++v1;
    ++v3;
    ++v2;
    v0 = v4;
  }
  while ( v1 < level.num_entities );
  return v4;
}

/*
==============
G_Utils_GetAnglesWithWorldUp
==============
*/
void G_Utils_GetAnglesWithWorldUp(const gentity_s *ent, vec3_t *outAngles)
{
  const playerState_s *EntityPlayerStateConst; 
  GHandler *Handler; 
  WorldUpReferenceFrame v6; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3414, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  outAngles->v[0] = ent->r.currentAngles.v[0];
  outAngles->v[1] = ent->r.currentAngles.v[1];
  outAngles->v[2] = ent->r.currentAngles.v[2];
  if ( G_Utils_EntNeedsWorldUpFixUp(ent) )
  {
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(ent);
    if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3424, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    Handler = GHandler::getHandler();
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v6, EntityPlayerStateConst, Handler);
    WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v6, outAngles);
  }
}

/*
==============
G_Utils_GetClientCommonUserCommand
==============
*/
void G_Utils_GetClientCommonUserCommand(const gclient_s *client, usercmd_s *outUserCmd)
{
  usercmd_s *p_cmd; 
  __int64 v5; 
  __int128 v6; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1962, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( !outUserCmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1963, ASSERT_TYPE_ASSERT, "( outUserCmd )", (const char *)&queryFormat, "outUserCmd") )
    __debugbreak();
  p_cmd = &client->sess.cmd;
  v5 = 2i64;
  do
  {
    outUserCmd = (usercmd_s *)((char *)outUserCmd + 128);
    v6 = *(_OWORD *)&p_cmd->buttons;
    p_cmd = (usercmd_s *)((char *)p_cmd + 128);
    *(_OWORD *)&outUserCmd[-1].offHand.attachmentVariationIndices[13] = v6;
    *(_OWORD *)&outUserCmd[-1].offHand.weaponCamo = *(_OWORD *)&p_cmd[-1].offHand.weaponCamo;
    *(_OWORD *)outUserCmd[-1].remoteControlMove = *(_OWORD *)p_cmd[-1].remoteControlMove;
    *(_OWORD *)outUserCmd[-1].vehAngles = *(_OWORD *)p_cmd[-1].vehAngles;
    *(_OWORD *)&outUserCmd[-1].vehOrgZ = *(_OWORD *)&p_cmd[-1].vehOrgZ;
    *(_OWORD *)&outUserCmd[-1].gunYOfs = *(_OWORD *)&p_cmd[-1].gunYOfs;
    *(_OWORD *)outUserCmd[-1].sightedClientsMask.data = *(_OWORD *)p_cmd[-1].sightedClientsMask.data;
    *(_OWORD *)&outUserCmd[-1].sightedClientsMask.data[4] = *(_OWORD *)&p_cmd[-1].sightedClientsMask.data[4];
    --v5;
  }
  while ( v5 );
  outUserCmd->buttons = p_cmd->buttons;
}

/*
==============
G_Utils_GetCompositeModel
==============
*/
XCompositeModelDef *G_Utils_GetCompositeModel(int compositeModelIndex)
{
  unsigned __int64 v1; 
  bool v2; 
  unsigned __int64 v3; 
  __int64 v5; 
  __int64 v6; 

  v1 = compositeModelIndex;
  if ( compositeModelIndex )
  {
    if ( (unsigned int)compositeModelIndex < 0x800 )
      goto LABEL_7;
    v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 285, ASSERT_TYPE_ASSERT, "(unsigned)( compositeModelIndex ) < (unsigned)( ( sizeof( *array_counter( s_cachedModels ) ) + 0 ) )", "compositeModelIndex doesn't index ARRAY_COUNT( s_cachedModels )\n\t%i not in [0, %i)", compositeModelIndex, 2048);
  }
  else
  {
    v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 284, ASSERT_TYPE_ASSERT, "( compositeModelIndex != 0 )", (const char *)&queryFormat, "compositeModelIndex != 0");
  }
  if ( v2 )
    __debugbreak();
LABEL_7:
  if ( v1 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( ((0x8000000000000000ui64 >> (v1 & 0x3F)) & s_cachedCompositeModelsSet[0].m_data[v1 >> 6]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 288, ASSERT_TYPE_ASSERT, "( s_cachedCompositeModelsSet->test( compositeModelIndex ) )", (const char *)&queryFormat, "s_cachedCompositeModelsSet->test( compositeModelIndex )") )
    __debugbreak();
  v3 = v1;
  if ( s_cachedModels[v3].assetType != ASSET_TYPE_XCOMPOSITEMODEL )
  {
    LODWORD(v6) = 96;
    LODWORD(v5) = s_cachedModels[v3].assetType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 291, ASSERT_TYPE_ASSERT, "( s_cachedModels[compositeModelIndex].assetType ) == ( XAssetType::ASSET_TYPE_XCOMPOSITEMODEL )", "s_cachedModels[compositeModelIndex].assetType == XAssetType::ASSET_TYPE_XCOMPOSITEMODEL\n\t%i, %i", v5, v6) )
      __debugbreak();
  }
  return s_cachedModels[v3].un.compositeModel;
}

/*
==============
G_Utils_GetEntAnimTree
==============
*/
XAnimTree *G_Utils_GetEntAnimTree(gentity_s *ent)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) || ent->s.eType != ET_PLAYER )
    return ent->pAnimTree;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  return *(XAnimTree **)((*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 216i64))(*(_QWORD *)&GStatic::ms_gameStatics, (unsigned int)ent->s.number) + 2040);
}

/*
==============
G_Utils_GetEntityBoundsPoint
==============
*/
void G_Utils_GetEntityBoundsPoint(const gentity_s *ent, float ratioFromCenterX, float ratioFromCenterY, float ratioFromCenterZ, vec3_t *outPoint)
{
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
  tmat33_t<vec3_t> axis; 
  char v17; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2265, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  AnglesToAxis(&ent->r.currentAngles, &axis);
  v6 = (float)(ratioFromCenterX * ent->r.box.halfSize.v[0]) + ent->r.box.midPoint.v[0];
  v7 = (float)(ratioFromCenterZ * ent->r.box.halfSize.v[2]) + ent->r.box.midPoint.v[2];
  v9 = (float)(ratioFromCenterY * ent->r.box.halfSize.v[1]) + ent->r.box.midPoint.v[1];
  v8 = v9;
  if ( &v17 == (char *)outPoint && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  v10 = (float)((float)(v6 * axis.m[0].v[0]) + (float)(v9 * axis.m[1].v[0])) + (float)(v7 * axis.m[2].v[0]);
  v11 = v9 * axis.m[1].v[2];
  v12 = v6 * axis.m[0].v[2];
  v13 = (float)((float)(v6 * axis.m[0].v[1]) + (float)(v8 * axis.m[1].v[1])) + (float)(v7 * axis.m[2].v[1]);
  v14 = v7 * axis.m[2].v[2];
  outPoint->v[0] = v10;
  outPoint->v[1] = v13;
  v15 = (float)(v12 + v11) + v14;
  outPoint->v[2] = v15;
  outPoint->v[0] = v10 + ent->r.currentOrigin.v[0];
  outPoint->v[1] = v13 + ent->r.currentOrigin.v[1];
  outPoint->v[2] = v15 + ent->r.currentOrigin.v[2];
}

/*
==============
G_Utils_GetModel
==============
*/
XModel *G_Utils_GetModel(int index)
{
  unsigned __int64 v1; 
  bool v2; 
  unsigned __int64 v3; 
  __int64 v5; 
  __int64 v6; 

  v1 = index;
  if ( index )
  {
    if ( (unsigned int)index < 0x800 )
      goto LABEL_7;
    v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 269, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_cachedModels ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_cachedModels )\n\t%i not in [0, %i)", index, 2048);
  }
  else
  {
    v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 268, ASSERT_TYPE_ASSERT, "( index != 0 )", (const char *)&queryFormat, "index != 0");
  }
  if ( v2 )
    __debugbreak();
LABEL_7:
  if ( v1 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  if ( ((0x8000000000000000ui64 >> (v1 & 0x3F)) & s_cachedModelsSet[0].m_data[v1 >> 6]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 272, ASSERT_TYPE_ASSERT, "( s_cachedModelsSet->test( index ) )", (const char *)&queryFormat, "s_cachedModelsSet->test( index )") )
    __debugbreak();
  v3 = v1;
  if ( s_cachedModels[v3].assetType != ASSET_TYPE_XMODEL )
  {
    LODWORD(v6) = 9;
    LODWORD(v5) = s_cachedModels[v3].assetType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 275, ASSERT_TYPE_ASSERT, "( s_cachedModels[index].assetType ) == ( XAssetType::ASSET_TYPE_XMODEL )", "s_cachedModels[index].assetType == XAssetType::ASSET_TYPE_XMODEL\n\t%i, %i", v5, v6) )
      __debugbreak();
  }
  if ( s_cachedModels[v3].assetType != ASSET_TYPE_XMODEL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 276, ASSERT_TYPE_ASSERT, "( s_cachedModels[index].assetType == XAssetType::ASSET_TYPE_XMODEL )", (const char *)&queryFormat, "s_cachedModels[index].assetType == XAssetType::ASSET_TYPE_XMODEL") )
    __debugbreak();
  return s_cachedModels[v3].un.model;
}

/*
==============
G_Utils_GetModelBounds
==============
*/
bool G_Utils_GetModelBounds(const gentity_s *ent, Bounds *outBounds)
{
  bool result; 
  __int128 v5; 
  __int128 v6; 
  __int128 v7; 
  __int128 v8; 
  __int128 v9; 
  __int128 v10; 
  __int128 v12; 
  __int128 v15; 
  __int128 v17; 
  vec3_t aabbMin; 
  vec3_t aabbMax; 

  if ( !outBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 299, ASSERT_TYPE_ASSERT, "(outBounds)", (const char *)&queryFormat, "outBounds") )
    __debugbreak();
  result = G_PhysicsObject_GetAABB(PHYSICS_WORLD_ID_FIRST, ent, &aabbMin, &aabbMax, 0);
  if ( result )
  {
    v5 = LODWORD(aabbMax.v[0]);
    *(float *)&v5 = (float)(aabbMax.v[0] + aabbMin.v[0]) * 0.5;
    v6 = v5;
    v7 = LODWORD(aabbMax.v[1]);
    *(float *)&v7 = (float)(aabbMax.v[1] + aabbMin.v[1]) * 0.5;
    v8 = v7;
    v9 = LODWORD(aabbMax.v[2]);
    *(float *)&v9 = (float)(aabbMax.v[2] + aabbMin.v[2]) * 0.5;
    v10 = v9;
    v12 = v6;
    *(float *)&v12 = *(float *)&v6 - aabbMin.v[0];
    _XMM1 = v12;
    __asm { vmaxss  xmm1, xmm1, xmm0 }
    outBounds->midPoint.v[0] = *(float *)&v6;
    v15 = v8;
    *(float *)&v15 = *(float *)&v8 - aabbMin.v[1];
    _XMM2 = v15;
    outBounds->midPoint.v[1] = *(float *)&v8;
    v17 = v10;
    *(float *)&v17 = *(float *)&v10 - aabbMin.v[2];
    _XMM3 = v17;
    outBounds->midPoint.v[2] = *(float *)&v10;
    outBounds->halfSize.v[0] = *(float *)&_XMM1;
    __asm { vmaxss  xmm1, xmm2, xmm0 }
    outBounds->halfSize.v[1] = *(float *)&_XMM1;
    __asm { vmaxss  xmm1, xmm3, xmm0 }
    outBounds->halfSize.v[2] = *(float *)&_XMM1;
  }
  return result;
}

/*
==============
G_Utils_GetParent
==============
*/
gentity_s *G_Utils_GetParent(const gentity_s *ent)
{
  EntityTagInfo *tagInfo; 

  if ( ent && (tagInfo = ent->tagInfo) != NULL )
    return tagInfo->parent;
  else
    return 0i64;
}

/*
==============
G_Utils_GetPhysicsAsset
==============
*/
void G_Utils_GetPhysicsAsset(const gentity_s *ent, const XModel **baseModel, const PhysicsAsset **physAsset, int *physShapeOverrideIdx, const PhysicsAsset **physAssetAddendum, int *physShapeAddendumIdx, const XModel **detailModel, bool *overrideContents, int *contentsOverride)
{
  DObj *ServerDObjForEnt; 
  unsigned __int8 modelType; 
  DObj *v14; 
  scr_string_t classname; 
  const TriggerModel *TriggerModel; 
  int v17; 
  int v18; 
  unsigned __int16 model; 
  XModel *v20; 
  cmodel_t *v21; 
  cmodel_t *v22; 
  unsigned __int16 physicsShapeOverrideIdx; 
  GHandler *Handler; 
  const PhysicsAsset *EdgePhysicsProxyAsset; 
  const XModel *v26; 
  const dvar_t *v27; 
  unsigned __int16 v28; 
  XModel *v29; 
  const XModel **models; 

  *baseModel = NULL;
  *physAsset = NULL;
  *physShapeOverrideIdx = -1;
  *physAssetAddendum = NULL;
  *physShapeAddendumIdx = -1;
  *detailModel = NULL;
  *overrideContents = 0;
  *contentsOverride = 0;
  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  modelType = ent->r.modelType;
  v14 = ServerDObjForEnt;
  if ( modelType == 4 )
  {
    classname = ent->classname;
    if ( classname == scr_const.trigger || classname == scr_const.trigger_use || classname == scr_const.trigger_use_touch || classname == scr_const.trigger_damage || classname == scr_const.trigger_multiple || classname == scr_const.trigger_disk || classname == scr_const.trigger_hurt || classname == scr_const.trigger_once || classname == scr_const.info_volume || classname == scr_const.info_volume_grapple )
    {
      TriggerModel = CM_GetTriggerModel(ent->s.index.brushModel);
      *physAsset = TriggerModel->physicsAsset;
      *physShapeOverrideIdx = TriggerModel->physicsShapeOverrideIdx;
      *overrideContents = 1;
      *contentsOverride = 0;
      LODWORD(TriggerModel) = (ent->c.trigger.flags & 2) << 17;
      *contentsOverride = (int)TriggerModel;
      v17 = (unsigned int)TriggerModel | (2 * (ent->c.trigger.flags & 4));
      *contentsOverride = v17;
      v18 = v17 | ((ent->c.trigger.flags & 8) << 19);
      *contentsOverride = v18;
      *contentsOverride = v18 | ((ent->c.trigger.flags & 0x10) << 26);
    }
  }
  else
  {
    model = ent->model;
    if ( model )
    {
      v20 = G_Utils_GetModel(model);
      *baseModel = v20;
      *physAsset = v20->physicsAsset;
      if ( ent->r.modelType == 5 )
      {
        v21 = &cm.mapEnts->cmodels[ent->s.index.brushModel];
        *physAssetAddendum = v21->physicsAsset;
        *physShapeAddendumIdx = v21->physicsShapeOverrideIdx;
      }
    }
    else if ( modelType == 5 )
    {
      v22 = &cm.mapEnts->cmodels[ent->s.index.brushModel];
      physicsShapeOverrideIdx = v22->physicsShapeOverrideIdx;
      if ( physicsShapeOverrideIdx == 0xFFFF || !WorldCollision_GetMapEntsShape(physicsShapeOverrideIdx) )
      {
        if ( ent->s.eType == ET_SCRIPTMOVER && (ent->s.lerp.u.anonymous.data[2] & 0x100) != 0 )
        {
          Handler = GHandler::getHandler();
          EdgePhysicsProxyAsset = BG_GetEdgePhysicsProxyAsset(Handler, &ent->s);
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
        *physAsset = v22->physicsAsset;
        *physShapeOverrideIdx = v22->physicsShapeOverrideIdx;
        *overrideContents = 1;
        *contentsOverride = CM_ContentsOfBrushModel(ent->s.index.brushModel);
      }
    }
    else if ( v14 && v14->numModels )
    {
      v26 = *v14->models;
      *baseModel = v26;
      *physAsset = v26->physicsAsset;
    }
  }
  if ( ent->s.eType != ET_ITEM )
    goto LABEL_33;
  v27 = DCONST_DVARBOOL_skipItemDetailModelPhysics;
  if ( !DCONST_DVARBOOL_skipItemDetailModelPhysics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "skipItemDetailModelPhysics") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  if ( !v27->current.enabled || ent->s.lerp.pos.trType != TR_PHYSICS_SERVER_AUTH )
  {
LABEL_33:
    v28 = ent->model;
    if ( v28 )
    {
      v29 = G_Utils_GetModel(v28);
      if ( v29->detailCollision )
        *detailModel = v29;
    }
    if ( !*detailModel && v14 && v14->numModels )
    {
      models = v14->models;
      if ( (*models)->detailCollision )
        *detailModel = *models;
    }
  }
}

/*
==============
G_Utils_GetRootParent
==============
*/
const gentity_s *G_Utils_GetRootParent(const gentity_s *ent)
{
  const gentity_s *v2; 
  EntityTagInfo *tagInfo; 
  gentity_s *i; 
  gentity_s **p_parent; 
  const gentity_s *result; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 882, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  v2 = ent;
  if ( ent )
  {
    tagInfo = ent->tagInfo;
    if ( tagInfo )
    {
      for ( i = tagInfo->parent; i; i = *p_parent )
      {
        v2 = i;
        p_parent = &i->tagInfo->parent;
        if ( !p_parent )
          break;
      }
    }
  }
  result = NULL;
  if ( v2 != ent )
    return v2;
  return result;
}

/*
==============
G_Utils_GetTouchSource
==============
*/
gentity_s *G_Utils_GetTouchSource(const gentity_s *ent)
{
  int *p_commandTime; 

  if ( !ent )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 577, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1894, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
      __debugbreak();
  }
  p_commandTime = &ent->client->ps.commandTime;
  if ( !p_commandTime )
  {
    p_commandTime = &ent->agent->playerState.commandTime;
    if ( !p_commandTime )
      return (gentity_s *)ent;
  }
  if ( p_commandTime[72] == 2047 || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *)(p_commandTime + 5), ACTIVE, 0x1Cu) )
    return (gentity_s *)ent;
  else
    return &g_entities[p_commandTime[72]];
}

/*
==============
G_Utils_HasCachedCompositeModel
==============
*/
__int64 G_Utils_HasCachedCompositeModel(const unsigned int compositeModelIndex)
{
  unsigned __int64 v1; 
  bool v2; 
  int v3; 
  unsigned __int64 v4; 
  unsigned int v5; 

  v1 = compositeModelIndex;
  if ( compositeModelIndex )
  {
    if ( compositeModelIndex < 0x800 )
      goto LABEL_7;
    v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 210, ASSERT_TYPE_ASSERT, "(unsigned)( compositeModelIndex ) < (unsigned)( ( sizeof( *array_counter( s_cachedModels ) ) + 0 ) )", "compositeModelIndex doesn't index ARRAY_COUNT( s_cachedModels )\n\t%i not in [0, %i)", compositeModelIndex, 2048);
  }
  else
  {
    v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 209, ASSERT_TYPE_ASSERT, "( compositeModelIndex != 0 )", (const char *)&queryFormat, "compositeModelIndex != 0");
  }
  if ( v2 )
    __debugbreak();
LABEL_7:
  v3 = 0;
  v4 = v1;
  v5 = s_cachedModels[v1].assetType == ASSET_TYPE_XCOMPOSITEMODEL;
  if ( v4 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  LOBYTE(v3) = ((0x8000000000000000ui64 >> (v4 & 0x3F)) & s_cachedCompositeModelsSet[0].m_data[v4 >> 6]) != 0;
  if ( v3 != v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 214, ASSERT_TYPE_ASSERT, "( s_cachedCompositeModelsSet->test( compositeModelIndex ) == !!hasCachedModel )", (const char *)&queryFormat, "s_cachedCompositeModelsSet->test( compositeModelIndex ) == !!hasCachedModel") )
    __debugbreak();
  return v5;
}

/*
==============
G_Utils_HasCachedModel
==============
*/
__int64 G_Utils_HasCachedModel(const unsigned int modelIndex)
{
  unsigned __int64 v1; 
  bool v2; 
  int v3; 
  unsigned __int64 v4; 
  unsigned int v5; 

  v1 = modelIndex;
  if ( modelIndex )
  {
    if ( modelIndex < 0x800 )
      goto LABEL_7;
    v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 197, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( ( sizeof( *array_counter( s_cachedModels ) ) + 0 ) )", "modelIndex doesn't index ARRAY_COUNT( s_cachedModels )\n\t%i not in [0, %i)", modelIndex, 2048);
  }
  else
  {
    v2 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 196, ASSERT_TYPE_ASSERT, "( modelIndex != 0 )", (const char *)&queryFormat, "modelIndex != 0");
  }
  if ( v2 )
    __debugbreak();
LABEL_7:
  v3 = 0;
  v4 = v1;
  v5 = s_cachedModels[v1].assetType == ASSET_TYPE_XMODEL;
  if ( v4 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  LOBYTE(v3) = ((0x8000000000000000ui64 >> (v4 & 0x3F)) & s_cachedModelsSet[0].m_data[v4 >> 6]) != 0;
  if ( v3 != v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 201, ASSERT_TYPE_ASSERT, "( s_cachedModelsSet->test( modelIndex ) == !!hasCachedModel )", (const char *)&queryFormat, "s_cachedModelsSet->test( modelIndex ) == !!hasCachedModel") )
    __debugbreak();
  return v5;
}

/*
==============
G_Utils_IsActor
==============
*/
bool G_Utils_IsActor(const gentity_s *entity)
{
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1856, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  return entity->actor != NULL;
}

/*
==============
G_Utils_IsAgent
==============
*/
bool G_Utils_IsAgent(const gentity_s *entity)
{
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1845, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  return entity->agent != NULL;
}

/*
==============
G_Utils_IsClient
==============
*/
bool G_Utils_IsClient(const gentity_s *entity)
{
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1789, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  return entity->client != NULL;
}

/*
==============
G_Utils_IsClientOrActor
==============
*/
bool G_Utils_IsClientOrActor(const gentity_s *entity)
{
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1814, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  return entity->client || entity->actor;
}

/*
==============
G_Utils_IsClientOrActorOrAgent
==============
*/
bool G_Utils_IsClientOrActorOrAgent(const gentity_s *entity)
{
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1828, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  return entity->client || entity->actor || entity->agent;
}

/*
==============
G_Utils_IsClientOrAgent
==============
*/
bool G_Utils_IsClientOrAgent(const gentity_s *entity)
{
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1800, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  return entity->client || entity->agent;
}

/*
==============
G_Utils_IsIndexCompositeModel
==============
*/
_BOOL8 G_Utils_IsIndexCompositeModel(int index)
{
  __int64 v1; 
  BgXModelHandle *v2; 
  int v5; 

  v1 = index;
  if ( (unsigned int)index >= 0x800 )
  {
    v5 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 256, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_cachedModels ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_cachedModels )\n\t%i not in [0, %i)", index, v5) )
      __debugbreak();
  }
  v2 = &s_cachedModels[v1];
  if ( v2->assetType != ASSET_TYPE_XMODEL && v2->assetType != ASSET_TYPE_XCOMPOSITEMODEL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 258, ASSERT_TYPE_ASSERT, "( s_cachedModels[index].assetType == XAssetType::ASSET_TYPE_XMODEL || s_cachedModels[index].assetType == XAssetType::ASSET_TYPE_XCOMPOSITEMODEL )", (const char *)&queryFormat, "s_cachedModels[index].assetType == XAssetType::ASSET_TYPE_XMODEL || s_cachedModels[index].assetType == XAssetType::ASSET_TYPE_XCOMPOSITEMODEL") )
    __debugbreak();
  return v2->assetType == ASSET_TYPE_XCOMPOSITEMODEL;
}

/*
==============
G_Utils_IsModelBad
==============
*/
__int64 G_Utils_IsModelBad(int index)
{
  XModel *Model; 

  if ( !index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 315, ASSERT_TYPE_ASSERT, "(index)", (const char *)&queryFormat, "index") )
    __debugbreak();
  Model = G_Utils_GetModel(index);
  if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 128, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  return Model->flags & 0x8000;
}

/*
==============
G_Utils_IsNameCompositeModel
==============
*/
bool G_Utils_IsNameCompositeModel(const char *modelName)
{
  int v2; 
  bool v3; 
  char destBuffer[256]; 

  if ( !modelName || !*modelName )
    return 0;
  DB_FixAssetNameAllowEmpty(destBuffer, 0x100ui64, modelName);
  if ( !destBuffer[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetnamefix.h", 91, ASSERT_TYPE_ASSERT, "( !I_strempty( destBuffer ) )", "DB_FixAssetName final name ends up an empty string. Probable error here.") )
    __debugbreak();
  v2 = DB_XAssetExists(ASSET_TYPE_XCOMPOSITEMODEL, destBuffer);
  v3 = v2 != 0;
  if ( v2 )
  {
    if ( DB_XAssetExists(ASSET_TYPE_XMODEL, destBuffer) )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E31450, 5861i64, modelName);
  }
  return v3;
}

/*
==============
G_Utils_IsRoboticIKEnabled
==============
*/
bool G_Utils_IsRoboticIKEnabled(const gentity_s *entity)
{
  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1867, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  return 0;
}

/*
==============
G_Utils_IsValidAntilagPoseFrame
==============
*/
bool G_Utils_IsValidAntilagPoseFrame(const gentity_s *ent, const SvAntilagArchiveFrame *frame)
{
  __int64 number; 
  unsigned int animData; 
  __int16 v6; 
  __int16 v7; 
  bool result; 
  __int64 v9; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2410, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->s.number >= 0xF8u )
  {
    LODWORD(v9) = ent->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2411, ASSERT_TYPE_ASSERT, "(unsigned)( ent->s.number ) < (unsigned)( (((1) >= (200 + 48)) ? (1) : (200 + 48)) )", "ent->s.number doesn't index MAX_CHARACTERS_STATIC\n\t%i not in [0, %i)", v9, 248) )
      __debugbreak();
  }
  result = 0;
  if ( frame )
  {
    number = ent->s.number;
    if ( frame->animInfo.characterInfoCount[number] )
    {
      animData = ent->s.animInfo.animData;
      if ( (animData & 1) != 0 )
      {
        v6 = truncate_cast<short,unsigned int>((animData >> 18) & 0x3F);
        LOWORD(number) = ent->s.number;
        v7 = v6;
      }
      else
      {
        v7 = -1;
      }
      if ( v7 == frame->ctrlInfo.animClass[(__int16)number] )
        return 1;
    }
  }
  return result;
}

/*
==============
G_Utils_OverrideModel
==============
*/
void G_Utils_OverrideModel(int modelindex, const char *defaultModelName)
{
  const char *v4; 

  if ( !modelindex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 344, ASSERT_TYPE_ASSERT, "(modelindex)", (const char *)&queryFormat, "modelindex") )
    __debugbreak();
  if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
    __debugbreak();
  v4 = GConfigStrings::ms_gConfigStrings->GetModelNameString(GConfigStrings::ms_gConfigStrings, (unsigned int)modelindex);
  if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 346, ASSERT_TYPE_ASSERT, "(modelName[0])", (const char *)&queryFormat, "modelName[0]") )
    __debugbreak();
  DB_ReplaceModel(defaultModelName, v4);
}

/*
==============
G_Utils_PhysicsCheckPostAssetChangeEmpty
==============
*/
void G_Utils_PhysicsCheckPostAssetChangeEmpty(void)
{
  bool *p_forcePhysicsCreate; 

  p_forcePhysicsCreate = &s_gPhysicsEntitiesUndergoingAssetChange[0].forcePhysicsCreate;
  do
  {
    if ( *(p_forcePhysicsCreate - 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1540, ASSERT_TYPE_ASSERT, "(!s_gPhysicsEntitiesUndergoingAssetChange[entityIdx].assetChanged)", "%s\n\tOne asset is marked as having changed during empty test", "!s_gPhysicsEntitiesUndergoingAssetChange[entityIdx].assetChanged") )
      __debugbreak();
    if ( *p_forcePhysicsCreate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1541, ASSERT_TYPE_ASSERT, "(!s_gPhysicsEntitiesUndergoingAssetChange[entityIdx].forcePhysicsCreate)", "%s\n\tOne asset is marked as having changed during empty test", "!s_gPhysicsEntitiesUndergoingAssetChange[entityIdx].forcePhysicsCreate") )
      __debugbreak();
    p_forcePhysicsCreate += 2;
  }
  while ( (__int64)p_forcePhysicsCreate < (__int64)&unk_14ABC8241 );
}

/*
==============
G_Utils_PhysicsClearPostAssetChange
==============
*/
void G_Utils_PhysicsClearPostAssetChange(void)
{
  memset_0(s_gPhysicsEntitiesUndergoingAssetChange, 0, sizeof(s_gPhysicsEntitiesUndergoingAssetChange));
}

/*
==============
G_Utils_PhysicsPostAssetChange
==============
*/
void G_Utils_PhysicsPostAssetChange(void)
{
  int v0; 
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  const gentity_s *v4; 
  GUtils *v5; 
  __int64 v6; 
  __int64 v7; 

  if ( Com_IsGameLocalServerRunning() )
  {
    v0 = 0;
    v1 = 0i64;
    v2 = 0i64;
    v3 = 0i64;
    do
    {
      if ( s_gPhysicsEntitiesUndergoingAssetChange[v1].assetChanged )
      {
        s_gPhysicsEntitiesUndergoingAssetChange[v1].assetChanged = 0;
        if ( (unsigned int)v0 >= 0x800 )
        {
          LODWORD(v7) = 2048;
          LODWORD(v6) = v0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, v7) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[v3].r.isInUse != g_entityIsInUse[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1513, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( entityIdx ))", "%s\n\tWe flagged an entity for update but it is not in use anymore", "G_IsEntityInUse( entityIdx )") )
          __debugbreak();
        v4 = &g_entities[v2];
        if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
          __debugbreak();
        v5 = GUtils::ms_gUtils;
        if ( s_gPhysicsEntitiesUndergoingAssetChange[v1].forcePhysicsCreate || Com_GetServerDObjForEnt(v4) && v5->ShouldCreateEntityPhysicsOnInit(v5, v4) )
        {
          G_Utils_CreateEntityPhysics(&g_entities[v2]);
          s_gPhysicsEntitiesUndergoingAssetChange[v1].forcePhysicsCreate = 0;
        }
      }
      ++v0;
      ++v2;
      ++v1;
      ++v3;
    }
    while ( v0 < 2048 );
  }
}

/*
==============
G_Utils_PhysicsPrepareForPhysicsAssetChange
==============
*/
void G_Utils_PhysicsPrepareForPhysicsAssetChange(PhysicsAsset *assetToBeChanged)
{
  int v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  bool v6; 
  G_PhysicsObject *v7; 
  unsigned int v8; 
  PhysicsAsset *InstanceAsset; 
  __int64 v10; 
  __int64 v11; 

  if ( Com_IsGameLocalServerRunning() )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_Utils_PhysicsPrepareForPhysicsAssetChange");
    v2 = 0;
    v3 = 0i64;
    v4 = 0i64;
    v5 = 0i64;
    v6 = 1;
    do
    {
      if ( !v6 )
      {
        LODWORD(v11) = 2048;
        LODWORD(v10) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v4].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v3] )
      {
        v7 = G_PhysicsObject_Get(v2);
        if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1391, ASSERT_TYPE_ASSERT, "(physicsObj)", (const char *)&queryFormat, "physicsObj") )
          __debugbreak();
        v8 = v7->physicsInstances[0];
        if ( v8 != -1 )
        {
          InstanceAsset = (PhysicsAsset *)Physics_GetInstanceAsset(PHYSICS_WORLD_ID_FIRST, v8);
          if ( InstanceAsset )
          {
            if ( InstanceAsset == assetToBeChanged )
            {
              G_Utils_DestroyEntityPhysics(&g_entities[v5]);
              s_gPhysicsEntitiesUndergoingAssetChange[v3] = (GEntityAssetChangeData)257;
            }
          }
        }
      }
      ++v2;
      ++v5;
      ++v3;
      ++v4;
      v6 = (unsigned int)v2 < 0x800;
    }
    while ( v2 < 2048 );
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
G_Utils_PhysicsPrepareForPhysicsAssetChange
==============
*/
void G_Utils_PhysicsPrepareForPhysicsAssetChange(XModel *xmodel, PhysicsAsset *assetToBeChanged)
{
  PhysicsAsset *v2; 
  int v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  bool v8; 
  G_PhysicsObject *v9; 
  unsigned int v10; 
  gentity_s *v11; 
  unsigned __int16 model; 
  unsigned __int64 v13; 
  XAssetType assetType; 
  XModel *v15; 
  XModel *InstanceXModel; 
  const PhysicsAsset *InstanceAsset; 
  __int64 v18; 
  __int64 v19; 

  v2 = assetToBeChanged;
  if ( Com_IsGameLocalServerRunning() )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_Utils_PhysicsPrepareForPhysicsAssetChange model specific");
    v4 = 0;
    v5 = 0i64;
    v6 = 0i64;
    v7 = 0i64;
    v8 = 1;
    do
    {
      if ( !v8 )
      {
        LODWORD(v19) = 2048;
        LODWORD(v18) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v6].r.isInUse != g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v5] )
      {
        v9 = G_PhysicsObject_Get(v4);
        if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1440, ASSERT_TYPE_ASSERT, "(physicsObj)", (const char *)&queryFormat, "physicsObj") )
          __debugbreak();
        v10 = v9->physicsInstances[0];
        if ( v10 == -1 )
        {
          v11 = &g_entities[v6];
          model = g_entities[v6].model;
          if ( !model )
            goto LABEL_31;
          v13 = model;
          if ( model >= 0x800u )
          {
            LODWORD(v19) = 2048;
            LODWORD(v18) = model;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 197, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( ( sizeof( *array_counter( s_cachedModels ) ) + 0 ) )", "modelIndex doesn't index ARRAY_COUNT( s_cachedModels )\n\t%i not in [0, %i)", v18, v19) )
              __debugbreak();
          }
          assetType = s_cachedModels[v13].assetType;
          if ( v13 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 238, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
            __debugbreak();
          if ( (((0x8000000000000000ui64 >> (v13 & 0x3F)) & s_cachedModelsSet[0].m_data[v13 >> 6]) != 0) != (assetType == ASSET_TYPE_XMODEL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 201, ASSERT_TYPE_ASSERT, "( s_cachedModelsSet->test( modelIndex ) == !!hasCachedModel )", (const char *)&queryFormat, "s_cachedModelsSet->test( modelIndex ) == !!hasCachedModel") )
            __debugbreak();
          if ( assetType == ASSET_TYPE_XMODEL )
          {
            v15 = G_Utils_GetModel(v11->model);
            v2 = assetToBeChanged;
            if ( v15 )
            {
              if ( v15 == xmodel )
                s_gPhysicsEntitiesUndergoingAssetChange[v5].assetChanged = 1;
            }
          }
          else
          {
LABEL_31:
            v2 = assetToBeChanged;
          }
        }
        else
        {
          InstanceXModel = (XModel *)Physics_GetInstanceXModel(PHYSICS_WORLD_ID_SERVER_DETAIL, v10);
          InstanceAsset = Physics_GetInstanceAsset(PHYSICS_WORLD_ID_SERVER_DETAIL, v10);
          if ( InstanceXModel == xmodel && InstanceAsset && InstanceAsset == v2 )
          {
            G_Utils_DestroyEntityPhysics(&g_entities[v7]);
            s_gPhysicsEntitiesUndergoingAssetChange[v5] = (GEntityAssetChangeData)257;
          }
        }
      }
      ++v4;
      ++v7;
      ++v5;
      ++v6;
      v8 = (unsigned int)v4 < 0x800;
    }
    while ( v4 < 2048 );
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
G_Utils_PhysicsPrepareForXModelChange
==============
*/
void G_Utils_PhysicsPrepareForXModelChange(XModel *assetToBeChanged)
{
  int v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  bool v6; 
  G_PhysicsObject *v7; 
  unsigned int v8; 
  XModel *InstanceDetailModel; 
  __int64 v10; 
  __int64 v11; 

  if ( Com_IsGameLocalServerRunning() )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_Utils_PhysicsPrepareForXModelChange");
    v2 = 0;
    v3 = 0i64;
    v4 = 0i64;
    v5 = 0i64;
    v6 = 1;
    do
    {
      if ( !v6 )
      {
        LODWORD(v11) = 2048;
        LODWORD(v10) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v4].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v3] )
      {
        v7 = G_PhysicsObject_Get(v2);
        if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1287, ASSERT_TYPE_ASSERT, "( physicsObj )", (const char *)&queryFormat, "physicsObj") )
          __debugbreak();
        if ( v7->physicsInstances[0] != -1 )
        {
          v8 = v7->physicsInstances[1];
          if ( v8 != -1 )
          {
            InstanceDetailModel = (XModel *)Physics_GetInstanceDetailModel(PHYSICS_WORLD_ID_SERVER_DETAIL, v8);
            if ( InstanceDetailModel )
            {
              if ( InstanceDetailModel == assetToBeChanged )
              {
                G_Utils_DestroyEntityPhysics(&g_entities[v5]);
                s_gPhysicsEntitiesUndergoingAssetChange[v3] = (GEntityAssetChangeData)257;
              }
            }
          }
        }
      }
      ++v2;
      ++v5;
      ++v3;
      ++v4;
      v6 = (unsigned int)v2 < 0x800;
    }
    while ( v2 < 2048 );
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
G_Utils_PhysicsPrepareForXModelDetailCollisionChange
==============
*/
void G_Utils_PhysicsPrepareForXModelDetailCollisionChange(XModelDetailCollision *assetToBeChanged)
{
  int v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  bool v6; 
  G_PhysicsObject *v7; 
  unsigned int v8; 
  const XModel *InstanceDetailModel; 
  XModelDetailCollision *detailCollision; 
  __int64 v11; 
  __int64 v12; 

  if ( Com_IsGameLocalServerRunning() )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "G_Utils_PhysicsPrepareForXModelDetailCollisionChange");
    v2 = 0;
    v3 = 0i64;
    v4 = 0i64;
    v5 = 0i64;
    v6 = 1;
    do
    {
      if ( !v6 )
      {
        LODWORD(v12) = 2048;
        LODWORD(v11) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v11, v12) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v4].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v3] )
      {
        v7 = G_PhysicsObject_Get(v2);
        if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1343, ASSERT_TYPE_ASSERT, "( physicsObj )", (const char *)&queryFormat, "physicsObj") )
          __debugbreak();
        v8 = v7->physicsInstances[1];
        if ( v8 != -1 )
        {
          InstanceDetailModel = Physics_GetInstanceDetailModel(PHYSICS_WORLD_ID_SERVER_DETAIL, v8);
          if ( InstanceDetailModel )
          {
            detailCollision = InstanceDetailModel->detailCollision;
            if ( detailCollision )
            {
              if ( detailCollision == assetToBeChanged )
              {
                G_Utils_DestroyEntityPhysics(&g_entities[v5]);
                s_gPhysicsEntitiesUndergoingAssetChange[v3] = (GEntityAssetChangeData)257;
              }
            }
          }
        }
      }
      ++v2;
      ++v5;
      ++v3;
      ++v4;
      v6 = (unsigned int)v2 < 0x800;
    }
    while ( v2 < 2048 );
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
G_Utils_PrintEntities
==============
*/
void G_Utils_PrintEntities(void)
{
  G_Utils_PrintEntitiesInternal(0);
}

/*
==============
G_Utils_PrintEntitiesInternal
==============
*/
void G_Utils_PrintEntitiesInternal(bool onlyPrintLeakedEnts)
{
  __int128 v1; 
  __int128 v2; 
  __int128 v3; 
  bool v4; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  gentity_s *v9; 
  const char *EntityTypeName; 
  const char *v11; 
  const char *v12; 
  unsigned __int16 v13; 
  double v14; 
  double v15; 
  double v16; 
  XModel *Model; 
  int moverFlags; 
  const char *v19; 
  char *fmt; 
  __int64 v21; 
  __int64 v22; 
  char dest[1024]; 
  __int128 v25; 
  __int128 v26; 
  __int128 v27; 

  v4 = onlyPrintLeakedEnts;
  Com_Printf(15, "This function is DEPRECATED - USE dumpEntInfo Instead\n");
  v5 = 0;
  v6 = 0;
  if ( level.num_entities > 0 )
  {
    v7 = 0i64;
    v27 = v1;
    v8 = 0i64;
    v26 = v2;
    v25 = v3;
    do
    {
      if ( v6 >= 0x800 )
      {
        LODWORD(v22) = 2048;
        LODWORD(v21) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v21, v22) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v8].r.isInUse != g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v7] )
      {
        v9 = g_entities;
        if ( !v4 || g_entities[v8].s.eType != ET_PLAYER && (g_entities[v8].flags.m_flags[0] & 0x40000000) == 0 )
        {
          EntityTypeName = BG_GetEntityTypeName((const entityType_s)g_entities[v8].s.eType);
          v11 = SL_ConvertToStringSafe(v9[v8].classname);
          ++v5;
          v12 = SL_ConvertToStringSafe(v9[v8].targetname);
          if ( scr_const.script_model == v9[v8].classname && (v13 = v9[v8].model) != 0 )
          {
            v14 = v9[v8].r.currentOrigin.v[2];
            v15 = v9[v8].r.currentOrigin.v[1];
            v16 = v9[v8].r.currentOrigin.v[0];
            Model = G_Utils_GetModel(v13);
            Com_Printf(15, "%4i: Type: %s, Class: %s, Target: %s, model '%s', origin: %6.1f %6.1f %6.1f\n", v6, EntityTypeName, v11, v12, Model->name, v16, v15, v14);
          }
          else if ( (unsigned __int16)(v9[v8].s.eType - 8) <= 1u )
          {
            Core_strcpy(dest, 0x400ui64, "NULL");
            moverFlags = v9[v8].s.staticState.mover.moverFlags;
            if ( moverFlags > 0 )
            {
              if ( !BgDynamicLimits::IsValidGameMode() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_dynamic_limits.h", 98, ASSERT_TYPE_ASSERT, "(IsValidGameMode())", "%s\n\tAccessing BgDynamicLimits during invalid game mode", "IsValidGameMode()") )
                __debugbreak();
              if ( moverFlags < BgDynamicLimits::ms_data.m_effectNamesCount )
              {
                if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
                  __debugbreak();
                GConfigStrings::ms_gConfigStrings->GetEffectName(GConfigStrings::ms_gConfigStrings, moverFlags, dest, 1024);
              }
            }
            LODWORD(fmt) = moverFlags;
            Com_Printf(15, "%4i: Type: %s, ID:%4i, name: '%s', origin: %6.1f %6.1f %6.1f\n", v6, EntityTypeName, fmt, dest, v9[v8].r.currentOrigin.v[0], v9[v8].r.currentOrigin.v[1], v9[v8].r.currentOrigin.v[2]);
          }
          else
          {
            Com_Printf(15, "%4i: Type: %s, Class: %s, Target: %s, origin: %6.1f %6.1f %6.1f\n", v6, EntityTypeName, v11, v12, v9[v8].r.currentOrigin.v[0], v9[v8].r.currentOrigin.v[1], v9[v8].r.currentOrigin.v[2]);
          }
          v4 = onlyPrintLeakedEnts;
        }
      }
      ++v6;
      ++v7;
      ++v8;
    }
    while ( (int)v6 < level.num_entities );
  }
  v19 = "%i new entities since baseline.\n";
  if ( !v4 )
    v19 = "%i total entities in use.\n";
  Com_Printf(15, v19, v5);
}

/*
==============
G_Utils_PrintEntityDebugInfoToCSV
==============
*/
void G_Utils_PrintEntityDebugInfoToCSV(void)
{
  G_Debug_PrintEntityDebugInfoToCSV((const char *)&queryFormat.fmt + 3, -1);
}

/*
==============
G_Utils_PrintLeakedEntities
==============
*/
void G_Utils_PrintLeakedEntities(void)
{
  G_Utils_PrintEntitiesInternal(1);
}

/*
==============
G_Utils_SetCachedCompositeModel
==============
*/
void G_Utils_SetCachedCompositeModel(const char *compositeModelName, const unsigned int compositeModelIndex)
{
  unsigned __int64 v2; 
  bool v4; 
  BgXModelHandle v5; 

  v2 = compositeModelIndex;
  if ( compositeModelIndex )
  {
    if ( compositeModelIndex < 0x800 )
      goto LABEL_7;
    v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 180, ASSERT_TYPE_ASSERT, "(unsigned)( compositeModelIndex ) < (unsigned)( ( sizeof( *array_counter( s_cachedModels ) ) + 0 ) )", "compositeModelIndex doesn't index ARRAY_COUNT( s_cachedModels )\n\t%i not in [0, %i)", compositeModelIndex, 2048);
  }
  else
  {
    v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 179, ASSERT_TYPE_ASSERT, "( compositeModelIndex != 0 )", (const char *)&queryFormat, "compositeModelIndex != 0");
  }
  if ( v4 )
    __debugbreak();
LABEL_7:
  if ( !compositeModelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 181, ASSERT_TYPE_ASSERT, "( compositeModelName != 0 )", (const char *)&queryFormat, "compositeModelName != NULL") )
    __debugbreak();
  if ( v2 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 181, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v5.assetType = ASSET_TYPE_XCOMPOSITEMODEL;
  s_cachedCompositeModelsSet[0].m_data[v2 >> 6] |= 0x8000000000000000ui64 >> (v2 & 0x3F);
  v5.un.compositeModel = SV_Game_GetXCompositeModel(compositeModelName);
  s_cachedModels[v2] = v5;
}

/*
==============
G_Utils_SetCachedModel
==============
*/
void G_Utils_SetCachedModel(const char *modelName, const unsigned int modelIndex)
{
  unsigned __int64 v2; 
  bool v4; 
  BgXModelHandle v5; 

  v2 = modelIndex;
  if ( modelIndex )
  {
    if ( modelIndex < 0x800 )
      goto LABEL_7;
    v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 163, ASSERT_TYPE_ASSERT, "(unsigned)( modelIndex ) < (unsigned)( ( sizeof( *array_counter( s_cachedModels ) ) + 0 ) )", "modelIndex doesn't index ARRAY_COUNT( s_cachedModels )\n\t%i not in [0, %i)", modelIndex, 2048);
  }
  else
  {
    v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 162, ASSERT_TYPE_ASSERT, "( modelIndex != 0 )", (const char *)&queryFormat, "modelIndex != 0");
  }
  if ( v4 )
    __debugbreak();
LABEL_7:
  if ( !modelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 164, ASSERT_TYPE_ASSERT, "( modelName != 0 )", (const char *)&queryFormat, "modelName != NULL") )
    __debugbreak();
  if ( v2 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\bitset\\bitset.h", 181, ASSERT_TYPE_ASSERT, "( pos < num_bits )", (const char *)&queryFormat, "pos < num_bits") )
    __debugbreak();
  v5.assetType = ASSET_TYPE_XMODEL;
  s_cachedModelsSet[0].m_data[v2 >> 6] |= 0x8000000000000000ui64 >> (v2 & 0x3F);
  v5.un.compositeModel = (XCompositeModelDef *)SV_Game_GetXModel(modelName);
  s_cachedModels[v2] = v5;
}

/*
==============
G_Utils_SetCompositeModel
==============
*/
void G_Utils_SetCompositeModel(gentity_s *const ent, entityType_s entityType, const char *compositeModelName)
{
  int CompositeModelIndex; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 381, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( *compositeModelName )
  {
    if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
      __debugbreak();
    CompositeModelIndex = GConfigStrings::GetCompositeModelIndex(GConfigStrings::ms_gConfigStrings, compositeModelName);
    G_XCompositeModel_SetIndex(CompositeModelIndex, entityType, ent);
    G_XCompositeModel_SetModel(ent, entityType);
  }
  else
  {
    G_XCompositeModel_SetIndex(0, entityType, ent);
  }
}

/*
==============
G_Utils_SetConstString
==============
*/
void G_Utils_SetConstString(scr_string_t *to, const char *from)
{
  Scr_SetString(to, (scr_string_t)0);
  *to = SL_GetString(from, 0);
}

/*
==============
G_Utils_SetModel
==============
*/
void G_Utils_SetModel(gentity_s *ent, const char *modelName)
{
  GUtils *v4; 
  int ModelIndex; 
  unsigned __int16 v6; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 356, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( *modelName )
  {
    if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
      __debugbreak();
    v4 = GUtils::ms_gUtils;
    if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( ((ent->s.eType - 12) & 0xFFFD) != 0 && v4->IsTransientCustomizationModel(v4, modelName) )
    {
      Com_PrintError(15, "SetModel: Can't set a transient model on the server (%s)\n", modelName);
      ent->model = 0;
    }
    else
    {
      if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
        __debugbreak();
      ModelIndex = GConfigStrings::GetModelIndex(GConfigStrings::ms_gConfigStrings, modelName);
      v6 = ModelIndex;
      if ( (ModelIndex < 0 || (unsigned int)ModelIndex > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)ModelIndex, "signed", ModelIndex) )
        __debugbreak();
      ent->model = v6;
    }
  }
  else
  {
    ent->model = 0;
  }
}

/*
==============
G_Utils_ShouldCreateEntityScriptableFromDObj
==============
*/
char G_Utils_ShouldCreateEntityScriptableFromDObj(const gentity_s *ent)
{
  if ( !ScriptableSv_IsLinkingEnabled() )
    return 0;
  switch ( ent->s.eType )
  {
    case ET_PLAYER:
    case ET_PLAYER_CORPSE:
    case ET_FX:
    case ET_LOOP_FX:
    case ET_VEHICLE_SPAWNER:
    case ET_AGENT:
    case ET_AGENT_CORPSE:
    case ET_ACTOR:
    case ET_ACTOR_CORPSE:
      return 0;
    case ET_SCRIPTMOVER:
      if ( ent->s.un.scriptMoverType == 1 || ent->s.un.scriptMoverType == 2 || ent->s.un.scriptMoverType == 9 || ent->s.un.scriptMoverType == 10 )
        return 0;
      break;
    default:
      return 1;
  }
  return 1;
}

/*
==============
G_Utils_SpawnEntity
==============
*/
gentity_s *G_Utils_SpawnEntity()
{
  gentity_s *firstFreeEnt; 
  gentity_s *lastFreeEnt; 
  scrContext_t *v2; 
  const char *v3; 
  const char *v4; 
  const dvar_t *v5; 
  int v6; 
  int number; 
  __int64 v8; 
  int v9; 
  __int64 v11; 
  int v12; 

  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2180, ASSERT_TYPE_ASSERT, "( !Sys_IsServerUserMoveWorker() )", (const char *)&queryFormat, "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  firstFreeEnt = level.firstFreeEnt;
  if ( !level.firstFreeEnt )
    goto LABEL_42;
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  if ( level.time - firstFreeEnt->r.eventTime >= (signed int)GUtils::ms_gUtils->m_entitySpawnMinFreeTime || level.num_entities >= 0x7FEu )
  {
    lastFreeEnt = level.lastFreeEnt;
    level.firstFreeEnt = level.firstFreeEnt->nextFree;
    if ( !level.firstFreeEnt )
      lastFreeEnt = NULL;
    level.lastFreeEnt = lastFreeEnt;
    firstFreeEnt->nextFree = NULL;
  }
  else
  {
LABEL_42:
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 144, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( ComCharacterLimits::ms_gameData.m_staticEntityCount > 0x7FE )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 144, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      v12 = 2046;
      LODWORD(v11) = ComCharacterLimits::ms_gameData.m_staticEntityCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2186, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetStaticEntitiesMaxCount() ) <= ( ENTITYNUM_ORDINARY_END )", "ComCharacterLimits::GetStaticEntitiesMaxCount() <= ENTITYNUM_ORDINARY_END\n\t%i, %i", v11, v12) )
        __debugbreak();
    }
    if ( level.num_entities == 2046 )
    {
      G_Debug_PrintEntityDebugInfoToConsole(1, -1);
      G_Debug_PrintEntityDebugInfoToCSV("noFreeEnts", -1);
      v2 = ScriptContext_Server();
      v3 = G_DebugBlameForEntCount(0);
      v4 = j_va("G_Spawn: no free entities, probable cause: %s", v3);
      Scr_Error(COM_ERR_2817, v2, v4);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E32DE0, 748i64, v3);
    }
    firstFreeEnt = &level.gentities[level.num_entities++];
    SV_Game_LocateGameData(level.gentities, level.num_entities, &level.clients->ps, 64592);
  }
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::ms_gUtils->InitGentity(GUtils::ms_gUtils, firstFreeEnt);
  v5 = DVARBOOL_entitySpawnDebug;
  if ( !DVARBOOL_entitySpawnDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "entitySpawnDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    v6 = g_debugSpawnedEntitiesIndex;
    if ( g_debugSpawnedEntitiesIndex >= 2048 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2124, ASSERT_TYPE_ASSERT, "( g_debugSpawnedEntitiesIndex < ( 2048 ) )", (const char *)&queryFormat, "g_debugSpawnedEntitiesIndex < MAX_DEBUG_SPAWN_TRACKED_ENTITIES") )
        __debugbreak();
      v6 = g_debugSpawnedEntitiesIndex;
    }
    number = firstFreeEnt->s.number;
    v8 = v6;
    v9 = v6 + 1;
    if ( v9 >= 2048 )
      v9 = 0;
    g_debugSpawnedEntitiesIndex = v9;
    g_debugSpawnedEntities[v8] = number;
  }
  G_DebugLogEntitySpawn(firstFreeEnt);
  return firstFreeEnt;
}

/*
==============
G_Utils_SpawnEventEntity
==============
*/
gentity_s *G_Utils_SpawnEventEntity(const vec3_t *origin, int event)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  float v7; 
  float v8; 
  float v9; 
  double v10; 
  const char *EventTypeName; 
  int v12; 
  gentity_s *v13; 
  float v14; 
  float v15; 
  vec3_t origina; 
  __int128 v18; 
  __int128 v19; 
  __int128 v20; 

  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2286, ASSERT_TYPE_ASSERT, "( !Sys_IsServerUserMoveWorker() )", (const char *)&queryFormat, "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_Utils_SpawnEventEntity");
  v7 = origin->v[1];
  origina.v[0] = origin->v[0];
  origina.v[2] = origin->v[2];
  origina.v[1] = v7;
  if ( !SV_Game_CheckPointInPlayableBounds(&origina) )
  {
    v20 = v2;
    v8 = origin->v[2];
    v19 = v3;
    v9 = origin->v[1];
    v18 = v4;
    v10 = origin->v[0];
    EventTypeName = BG_GetEventTypeName(event);
    Com_PrintWarning(15, "G_TempEntity: Spawning event %s outside of map bounds at %f, %f, %f - we're moving it back into the playable area, so it won't be where you expected it to be\n", EventTypeName, v10, v9, v8);
  }
  SV_Game_KeepPointInPlayableBounds(&origina);
  v12 = event + 29;
  v13 = G_Utils_SpawnEntity();
  if ( (unsigned int)(v12 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum entityType_s __cdecl truncate_cast_impl<enum entityType_s,int>(int)", "signed", (__int16)v12, "signed", v12) )
    __debugbreak();
  v13->s.eType = v12;
  v13->r.eventTime = level.time;
  v13->r.eventTypeFlags = 1;
  v14 = (float)(int)origina.v[1];
  v15 = (float)(int)origina.v[2];
  origina.v[0] = (float)(int)origina.v[0];
  origina.v[1] = v14;
  origina.v[2] = v15;
  if ( ((LODWORD(origina.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(v14) & 0x7F800000) == 2139095040 || (LODWORD(v15) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1621, ASSERT_TYPE_SANITY, "( !IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] )") )
    __debugbreak();
  if ( v13->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1623, ASSERT_TYPE_ASSERT, "( !BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.pos ) )", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.pos )") )
      __debugbreak();
  }
  Trajectory_SetTrBase(&v13->s.lerp.pos, &origina);
  *(_QWORD *)&v13->s.lerp.pos.trType = 0i64;
  v13->s.lerp.pos.trDuration = 0;
  *(_QWORD *)v13->s.lerp.pos.trDelta.v = 0i64;
  v13->s.lerp.pos.trDelta.v[2] = 0.0;
  v13->r.currentOrigin = origina;
  G_PhysicsObject_WarpToCurrentTransform(v13, 1);
  SV_LinkEntity(v13);
  Sys_ProfEndNamedEvent();
  return v13;
}

/*
==============
G_Utils_UpdateAnglesTrajectory
==============
*/
bool G_Utils_UpdateAnglesTrajectory(gentity_s *ent, const vec3_t *angles, const bool warpPhysics, const bool updateBroadphase)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1733, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ((LODWORD(angles->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(angles->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(angles->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1734, ASSERT_TYPE_SANITY, "( !IS_NAN( ( angles )[0] ) && !IS_NAN( ( angles )[1] ) && !IS_NAN( ( angles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( angles )[0] ) && !IS_NAN( ( angles )[1] ) && !IS_NAN( ( angles )[2] )") )
    __debugbreak();
  if ( ent->s.lerp.apos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1736, ASSERT_TYPE_ASSERT, "( !BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.apos ) )", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.apos )") )
      __debugbreak();
  }
  Trajectory_SetTrBase(&ent->s.lerp.apos, angles);
  *(_QWORD *)&ent->s.lerp.apos.trTime = 0i64;
  *(_QWORD *)ent->s.lerp.apos.trDelta.v = 0i64;
  ent->s.lerp.apos.trDelta.v[2] = 0.0;
  ent->r.currentAngles.v[0] = angles->v[0];
  ent->r.currentAngles.v[1] = angles->v[1];
  ent->r.currentAngles.v[2] = angles->v[2];
  return warpPhysics && G_PhysicsObject_WarpToCurrentTransform(ent, updateBroadphase);
}

/*
==============
G_Utils_UpdateEntityDObjScriptable
==============
*/
void G_Utils_UpdateEntityDObjScriptable(const gentity_s *ent)
{
  entityType_s eType; 
  const DObj *ServerDObjForEnt; 
  bool ScriptableDefFromDObj; 
  ScriptableDef *v5; 
  ScriptableDef *outScriptableDef; 

  if ( ScriptableSv_IsLinkingEnabled() )
  {
    if ( ScriptableSv_IsLinkingEnabled() )
    {
      eType = ent->s.eType;
      switch ( eType )
      {
        case ET_PLAYER:
        case ET_PLAYER_CORPSE:
        case ET_FX:
        case ET_LOOP_FX:
        case ET_VEHICLE_SPAWNER:
        case ET_AGENT:
        case ET_AGENT_CORPSE:
        case ET_ACTOR:
        case ET_ACTOR_CORPSE:
          goto LABEL_9;
        case ET_SCRIPTMOVER:
          if ( ent->s.un.scriptMoverType == 1 || ent->s.un.scriptMoverType == 2 || ent->s.un.scriptMoverType == 9 || ent->s.un.scriptMoverType == 10 )
            goto LABEL_9;
          break;
        default:
          break;
      }
    }
    else
    {
      eType = ent->s.eType;
LABEL_9:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1257, ASSERT_TYPE_ASSERT, "( G_Utils_ShouldCreateEntityScriptableFromDObj( ent ) )", "Trying to create DObj-based scriptable from wrong entity %i (type %i)", ent->s.number, eType) )
        __debugbreak();
    }
    ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
    ScriptableDefFromDObj = ScriptableCommon_GetScriptableDefFromDObj(ServerDObjForEnt, (const ScriptableDef **)&outScriptableDef);
    v5 = outScriptableDef;
    if ( !ScriptableDefFromDObj )
      v5 = NULL;
    outScriptableDef = v5;
    ScriptableSv_UpdateReservedScriptableEntityBinding(ent, v5);
  }
}

/*
==============
G_Utils_UpdateEntityEvents
==============
*/
void G_Utils_UpdateEntityEvents(void)
{
  int v0; 
  __int64 v1; 
  __int64 v2; 
  bool v3; 
  __int64 v4; 
  __int64 v5; 

  v0 = 0;
  v1 = 0i64;
  v2 = 0i64;
  v3 = 1;
  do
  {
    if ( !v3 )
    {
      LODWORD(v5) = 2048;
      LODWORD(v4) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v2].r.isInUse != g_entityIsInUse[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[v1] )
      g_entities[v2].previousEventSequence = g_entities[v2].s.eventSequence.combined;
    ++v0;
    ++v1;
    ++v2;
    v3 = (unsigned int)v0 < 0x800;
  }
  while ( v0 < 2048 );
}

/*
==============
G_Utils_UpdateOriginTrajectory
==============
*/
bool G_Utils_UpdateOriginTrajectory(gentity_s *ent, const vec3_t *origin, const bool warpPhysics, const bool updateBroadphase)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1710, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ((LODWORD(origin->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(origin->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(origin->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1711, ASSERT_TYPE_SANITY, "( !IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] )") )
    __debugbreak();
  if ( ent->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1713, ASSERT_TYPE_ASSERT, "( !BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.pos ) )", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.pos )") )
      __debugbreak();
  }
  Trajectory_SetTrBase(&ent->s.lerp.pos, origin);
  *(_QWORD *)&ent->s.lerp.pos.trTime = 0i64;
  *(_QWORD *)ent->s.lerp.pos.trDelta.v = 0i64;
  ent->s.lerp.pos.trDelta.v[2] = 0.0;
  ent->r.currentOrigin.v[0] = origin->v[0];
  ent->r.currentOrigin.v[1] = origin->v[1];
  ent->r.currentOrigin.v[2] = origin->v[2];
  return warpPhysics && G_PhysicsObject_WarpToCurrentTransform(ent, updateBroadphase);
}

/*
==============
G_Utils_ValidatePhysicsAsset
==============
*/
void G_Utils_ValidatePhysicsAsset(const PhysicsAsset *physAsset)
{
  unsigned int useCategory; 
  int v3; 
  __int64 numRigidBodies; 
  int v5; 
  int v6; 
  __int64 v7; 
  int v8; 
  PhysicsAssetSimulationCategory *simulationCategories; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned __int8 v12; 

  if ( !physAsset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 814, ASSERT_TYPE_ASSERT, "(physAsset)", (const char *)&queryFormat, "physAsset") )
    __debugbreak();
  useCategory = physAsset->useCategory;
  if ( useCategory > 7 || (v3 = 150, !_bittest(&v3, useCategory)) )
    Com_PrintWarning(20, "Physics Asset %s used by entity system with unexpected Use Category %s\n", physAsset->name, s_physicsAssetUseCategoryNames[physAsset->useCategory]);
  numRigidBodies = physAsset->numRigidBodies;
  v5 = 0;
  if ( numRigidBodies > 0 )
  {
    v6 = 562;
    v7 = 0i64;
    v8 = 573;
    while ( 1 )
    {
      simulationCategories = physAsset->simulationCategories;
      v10 = simulationCategories[v7];
      if ( v7 )
        break;
      if ( physAsset->useCategory == PhysicsAssetUseCategory_Vehicle )
      {
        if ( v10 == 7 || (unsigned int)(*simulationCategories - 8) <= 1 || *simulationCategories == PhysicsAssetSimulationCategory_KeyframedEntity )
          goto LABEL_22;
LABEL_21:
        ++v5;
        goto LABEL_22;
      }
      if ( v10 )
      {
        v11 = *simulationCategories;
        if ( v11 > 9 )
          goto LABEL_21;
        v12 = _bittest(&v6, v11);
        goto LABEL_20;
      }
LABEL_22:
      if ( ++v7 >= numRigidBodies )
      {
        if ( v5 > 0 )
          Com_PrintWarning(20, "Physics Asset %s used by entity system with %i unexpected Simulation Categories\n", physAsset->name, (unsigned int)v5);
        return;
      }
    }
    if ( v10 > 9 )
      goto LABEL_21;
    v12 = _bittest(&v8, v10);
LABEL_20:
    if ( !v12 )
      goto LABEL_21;
    goto LABEL_22;
  }
}

/*
==============
G_crandom
==============
*/
float G_crandom()
{
  s_holdRand = 214013 * s_holdRand + 2531011;
  return (float)((float)((float)(s_holdRand >> 17) * 0.000030517578) * 2.0) - 1.0;
}

/*
==============
G_flrand
==============
*/
float G_flrand(float min, float max)
{
  s_holdRand = 214013 * s_holdRand + 2531011;
  return (float)((float)((float)(s_holdRand >> 17) * (float)(max - min)) * 0.000030517578) + min;
}

/*
==============
G_irand
==============
*/
__int64 G_irand(int min, int max)
{
  s_holdRand = 214013 * s_holdRand + 2531011;
  return min + (unsigned int)((__int64)(((unsigned __int64)s_holdRand >> 17) * (max - min)) >> 15);
}

/*
==============
G_rand
==============
*/
__int64 G_rand()
{
  s_holdRand = 214013 * s_holdRand + 2531011;
  return s_holdRand >> 17;
}

/*
==============
G_random
==============
*/
float G_random()
{
  s_holdRand = 214013 * s_holdRand + 2531011;
  return (float)(s_holdRand >> 17) * 0.000030517578;
}

/*
==============
G_srand
==============
*/
void G_srand(unsigned int seed)
{
  s_holdRand = 159719620 - 570470319 * seed;
}

/*
==============
GUtils::GetPlayersInRadius
==============
*/
void GUtils::GetPlayersInRadius(GUtils *this, const vec3_t *pos, float radius, unsigned int maxPlayersWanted, unsigned int *outNumPlayers, unsigned __int16 *outPlayerEntIds)
{
  unsigned int v8; 
  unsigned int maxclients; 
  float v10; 
  __int64 v11; 
  float v12; 
  float v13; 
  float v14; 

  if ( radius <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3552, ASSERT_TYPE_ASSERT, "(radius > 0.f)", (const char *)&queryFormat, "radius > 0.f") )
    __debugbreak();
  if ( !maxPlayersWanted && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3553, ASSERT_TYPE_ASSERT, "(maxPlayersWanted > 0)", (const char *)&queryFormat, "maxPlayersWanted > 0") )
    __debugbreak();
  if ( !outNumPlayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3554, ASSERT_TYPE_ASSERT, "(outNumPlayers)", (const char *)&queryFormat, "outNumPlayers") )
    __debugbreak();
  if ( !outPlayerEntIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3555, ASSERT_TYPE_ASSERT, "(outPlayerEntIds)", (const char *)&queryFormat, "outPlayerEntIds") )
    __debugbreak();
  v8 = 0;
  *outNumPlayers = 0;
  maxclients = level.maxclients;
  v10 = radius * radius;
  if ( level.maxclients )
  {
    v11 = 0i64;
    do
    {
      if ( *outNumPlayers >= maxPlayersWanted )
        break;
      if ( g_entities[v11].r.isInUse )
      {
        v12 = g_entities[v11].r.currentOrigin.v[0] - pos->v[0];
        v13 = g_entities[v11].r.currentOrigin.v[1] - pos->v[1];
        v14 = g_entities[v11].r.currentOrigin.v[2] - pos->v[2];
        if ( (float)((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14)) <= v10 )
          outPlayerEntIds[(*outNumPlayers)++] = truncate_cast<unsigned short,unsigned int>(v8);
      }
      ++v8;
      ++v11;
    }
    while ( v8 < maxclients );
  }
}

/*
==============
GUtils::GetRootParent
==============
*/
const gentity_s *GUtils::GetRootParent(const gentity_s *ent)
{
  const gentity_s *v1; 
  EntityTagInfo *i; 
  const gentity_s *parent; 

  v1 = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3630, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  for ( i = v1->tagInfo; i; v1 = parent )
  {
    parent = i->parent;
    if ( !i->parent )
      break;
    i = parent->tagInfo;
  }
  return v1;
}

/*
==============
GUtils::ShouldCreateEntityPhysicsOnInit_Internal
==============
*/
bool GUtils::ShouldCreateEntityPhysicsOnInit_Internal(GUtils *this, const gentity_s *ent)
{
  bool result; 
  bool v4; 
  unsigned int ScriptableIndexForEntity; 
  unsigned int physShapeAddendumIdx; 
  unsigned int detailModel; 
  int physShapeOverrideIdx; 
  PhysicsAsset *physAsset; 
  XModel *v10; 
  PhysicsAsset *physAssetAddendum; 
  XModel *baseModel; 
  bool overrideContents; 
  int contentsOverride; 
  int v15; 

  if ( this->m_disableCreateEntityPhysicsOnInit || ent->s.lerp.pos.trType == TR_PHYSICS_CLIENT_AUTH || (ent->flags.m_flags[1] & 1) != 0 )
    return 0;
  switch ( ent->s.eType )
  {
    case ET_PLAYER:
    case ET_PLAYER_CORPSE:
    case ET_INVISIBLE:
    case ET_FX:
    case ET_LOOP_FX:
    case ET_VEHICLE_SPAWNER:
    case ET_AGENT:
    case ET_AGENT_CORPSE:
    case ET_ACTOR:
    case ET_ACTOR_CORPSE:
      return 0;
    case ET_SCRIPTMOVER:
      switch ( ent->s.un.scriptMoverType )
      {
        case 1:
          return 0;
        case 2:
          ScriptableIndexForEntity = ScriptableSv_GetScriptableIndexForEntity(ent);
          ScriptableCommon_AssertCountsInitialized();
          if ( ScriptableIndexForEntity >= g_scriptableWorldCounts.serverInstanceCount )
          {
            ScriptableCommon_AssertCountsInitialized();
            detailModel = g_scriptableWorldCounts.serverInstanceCount;
            physShapeAddendumIdx = ScriptableIndexForEntity;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 706, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", physShapeAddendumIdx, detailModel) )
              __debugbreak();
          }
          v4 = ScriptableSv_HasCollisionSupport(ScriptableIndexForEntity) == 0;
          break;
        case 9:
          return 0;
        default:
          v4 = ent->s.un.scriptMoverType == 10;
          break;
      }
      if ( v4 )
        return 0;
LABEL_15:
      G_Utils_GetPhysicsAsset(ent, (const XModel **)&baseModel, (const PhysicsAsset **)&physAsset, &physShapeOverrideIdx, (const PhysicsAsset **)&physAssetAddendum, &v15, (const XModel **)&v10, &overrideContents, &contentsOverride);
      if ( physAsset && Physics_IsAssetRagdoll(physAsset) )
        return 0;
      result = 1;
      break;
    case ET_PHYSICS_VOLUME:
      return G_PhysicsVolume_IsEnabled(ent);
    default:
      goto LABEL_15;
  }
  return result;
}

/*
==============
GStepSlideMove::TraceCapsule
==============
*/
void GStepSlideMove::TraceCapsule(GStepSlideMove *this, trace_t *results, const vec3_t *start, const vec3_t *end)
{
  G_Main_TraceCapsule(results, start, end, this->bounds, this->passEntities, this->passEntityCount, this->clipMask);
}

/*
==============
GUtils::WorldBoundsWouldTelefrag
==============
*/
char GUtils::WorldBoundsWouldTelefrag(GUtils *this, const Bounds *worldBounds)
{
  __int128 v2; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  int v9; 
  __int64 v10; 
  gentity_s *v11; 
  gclient_s *client; 
  int *ignoreEnts; 
  PhysicsQuery_Collected<unsigned short> *collectedEnts; 
  PhysicsQuery_Collected<unsigned short> v16; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  __int16 v19[2048]; 
  __int128 v20; 

  v20 = v2;
  if ( !worldBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3588, ASSERT_TYPE_ASSERT, "(worldBounds)", (const char *)&queryFormat, "worldBounds") )
    __debugbreak();
  v4 = worldBounds->midPoint.v[1];
  v5 = worldBounds->midPoint.v[2];
  v6 = worldBounds->midPoint.v[0] + worldBounds->halfSize.v[0];
  aabbMin.v[0] = worldBounds->midPoint.v[0] - worldBounds->halfSize.v[0];
  aabbMin.v[1] = v4 - worldBounds->halfSize.v[1];
  aabbMin.v[2] = v5 - worldBounds->halfSize.v[2];
  v7 = v4 + worldBounds->halfSize.v[1];
  aabbMax.v[0] = v6;
  v8 = v5 + worldBounds->halfSize.v[2];
  v9 = 0;
  v16.ids = (unsigned __int16 *)v19;
  aabbMax.v[1] = v7;
  aabbMax.v[2] = v8;
  v16.count = 0;
  v16.countMax = 2048;
  PhysicsQuery_ImmediateAABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, &aabbMin, &aabbMax, 33570816, 0, NULL, &v16, NULL, 1);
  if ( !v16.count )
    return 0;
  while ( 1 )
  {
    v10 = (unsigned __int16)v19[v9];
    if ( (unsigned int)v10 >= 0x800 )
    {
      LODWORD(collectedEnts) = 2048;
      LODWORD(ignoreEnts) = (unsigned __int16)v19[v9];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", ignoreEnts, collectedEnts) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v11 = &g_entities[v10];
    client = v11->client;
    if ( client )
    {
      if ( client->ps.pm_type < 7 )
        break;
    }
    if ( v11->actor && v11->health > 0 )
      break;
    if ( ++v9 >= v16.count )
      return 0;
  }
  return 1;
}

