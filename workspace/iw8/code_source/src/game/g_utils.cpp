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
  const vec3_t *v7; 
  int v12; 
  int v13; 
  int v14; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  [rsp+48h+arg_10], xmm0
  }
  v7 = origin;
  if ( (v12 & 0x7F800000) == 2139095040 )
    goto LABEL_17;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+4]
    vmovss  [rsp+48h+arg_10], xmm0
  }
  if ( (v13 & 0x7F800000) == 2139095040 )
    goto LABEL_17;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+8]
    vmovss  [rsp+48h+arg_10], xmm0
  }
  if ( (v14 & 0x7F800000) == 2139095040 )
  {
LABEL_17:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1621, ASSERT_TYPE_SANITY, "( !IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] )") )
      __debugbreak();
  }
  if ( ent->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1623, ASSERT_TYPE_ASSERT, "( !BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.pos ) )", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.pos )") )
      __debugbreak();
  }
  Trajectory_SetTrBase(&ent->s.lerp.pos, v7);
  *(_QWORD *)&ent->s.lerp.pos.trType = 0i64;
  ent->s.lerp.pos.trDuration = 0;
  *(_QWORD *)ent->s.lerp.pos.trDelta.v = 0i64;
  ent->s.lerp.pos.trDelta.v[2] = 0.0;
  ent->r.currentOrigin.v[0] = v7->v[0];
  ent->r.currentOrigin.v[1] = v7->v[1];
  ent->r.currentOrigin.v[2] = v7->v[2];
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
  const vec3_t *v9; 
  int v14; 
  int v15; 
  int v16; 

  __asm
  {
    vmovss  xmm0, dword ptr [rdx]
    vmovss  [rsp+58h+arg_18], xmm0
  }
  v9 = origin;
  if ( (v14 & 0x7F800000) == 2139095040 )
    goto LABEL_23;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+4]
    vmovss  [rsp+58h+arg_18], xmm0
  }
  if ( (v15 & 0x7F800000) == 2139095040 )
    goto LABEL_23;
  __asm
  {
    vmovss  xmm0, dword ptr [rdx+8]
    vmovss  [rsp+58h+arg_18], xmm0
  }
  if ( (v16 & 0x7F800000) == 2139095040 )
  {
LABEL_23:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1675, ASSERT_TYPE_SANITY, "( !IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] )") )
      __debugbreak();
  }
  if ( ent->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1677, ASSERT_TYPE_ASSERT, "( !BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.pos ) )", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.pos )") )
      __debugbreak();
  }
  Trajectory_SetTrBase(&ent->s.lerp.pos, v9);
  *(_QWORD *)&ent->s.lerp.pos.trTime = 0i64;
  ent->s.lerp.pos.trType = trType;
  *(_QWORD *)ent->s.lerp.pos.trDelta.v = 0i64;
  ent->s.lerp.pos.trDelta.v[2] = 0.0;
  ent->r.currentOrigin.v[0] = v9->v[0];
  ent->r.currentOrigin.v[1] = v9->v[1];
  ent->r.currentOrigin.v[2] = v9->v[2];
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
  vec3_t vec; 
  WorldUpReferenceFrame v21; 

  _RBX = outPos;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3452, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  _RBX->v[0] = pos->v[0];
  _RBX->v[1] = pos->v[1];
  _RBX->v[2] = pos->v[2];
  if ( G_Utils_EntNeedsWorldUpFixUp(ent) )
  {
    EntityPlayerStateConst = G_GetEntityPlayerStateConst(ent);
    if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3462, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    Handler = GHandler::getHandler();
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v21, EntityPlayerStateConst, Handler);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx]
      vsubss  xmm1, xmm0, dword ptr [rdi+30h]
      vmovss  xmm2, dword ptr [rbx+4]
      vmovss  dword ptr [rsp+88h+vec], xmm1
      vsubss  xmm0, xmm2, dword ptr [rdi+34h]
      vmovss  xmm1, dword ptr [rbx+8]
      vmovss  dword ptr [rsp+88h+vec+4], xmm0
      vsubss  xmm2, xmm1, dword ptr [rdi+38h]
      vmovss  dword ptr [rsp+88h+vec+8], xmm2
    }
    WorldUpReferenceFrame::ApplyReferenceFrameToVector(&v21, &vec);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+88h+vec]
      vaddss  xmm1, xmm0, dword ptr [rdi+30h]
      vmovss  xmm2, dword ptr [rsp+88h+vec+4]
      vmovss  dword ptr [rbx], xmm1
      vaddss  xmm0, xmm2, dword ptr [rdi+34h]
      vmovss  xmm1, dword ptr [rsp+88h+vec+8]
      vmovss  dword ptr [rbx+4], xmm0
      vaddss  xmm2, xmm1, dword ptr [rdi+38h]
      vmovss  dword ptr [rbx+8], xmm2
    }
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
  int v45; 
  bool v46; 
  XModel *v47; 
  int v48; 
  unsigned int v49; 
  hknpBodyId *RigidBodyID; 
  Vehicle *vehicle; 
  GVehicles *VehicleSystem; 
  bool v53; 
  entityType_s v54; 
  char v55; 
  int v56; 
  int *physShapeAddendumIdx; 
  int *physShapeAddendumIdxa; 
  XModel **detailModel; 
  XModel **detailModela; 
  bool detailModelc; 
  XModel **detailModelb; 
  bool v63; 
  bool v64; 
  bool overrideContents; 
  int ref; 
  int contentsOverride; 
  int physShapeOverrideIdx; 
  int v69; 
  int contents; 
  PhysicsAsset *physAsset; 
  XModel *v72; 
  XModel *baseModel; 
  int v74; 
  PhysicsAsset *physicsAsset; 
  PhysicsAsset *physAssetAddendum; 
  Physics_InstantiateShapeOverride shapeOverride; 
  Physics_InstantiateShapeOverride v78; 
  __int64 v79; 
  XModel *v80; 
  PhysicsAsset *v81; 
  XModel *v82; 
  vec4_t quat; 

  v79 = -2i64;
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
  G_Utils_GetPhysicsAsset(ent, (const XModel **)&baseModel, (const PhysicsAsset **)&physAsset, &physShapeOverrideIdx, (const PhysicsAsset **)&physAssetAddendum, &v69, (const XModel **)&v72, &overrideContents, &contents);
  v7 = physAsset;
  if ( physAsset )
  {
    IsXAssetDefaultNonLocking = DB_IsXAssetDefaultNonLocking(ASSET_TYPE_PHYSICSASSET, physAsset->name);
    if ( v72 && (detailCollision = v72->detailCollision) != NULL )
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
      _RDI = G_PhysicsObject_Get(ent);
      if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 985, ASSERT_TYPE_ASSERT, "(physicsObj)", (const char *)&queryFormat, "physicsObj") )
        __debugbreak();
      if ( _RDI->physicsInstances[0] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 986, ASSERT_TYPE_ASSERT, "(physicsObj->physicsInstances[ PHYSICS_WORLD_ID_SERVER_MAIN ] == 0xFFFFFFFF)", (const char *)&queryFormat, "physicsObj->physicsInstances[ PHYSICS_WORLD_ID_SERVER_MAIN ] == PHYSICSINSTANCEID_INVALID") )
        __debugbreak();
      if ( _RDI->physicsInstances[1] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 987, ASSERT_TYPE_ASSERT, "(physicsObj->physicsInstances[ PHYSICS_WORLD_ID_SERVER_DETAIL ] == 0xFFFFFFFF)", (const char *)&queryFormat, "physicsObj->physicsInstances[ PHYSICS_WORLD_ID_SERVER_DETAIL ] == PHYSICSINSTANCEID_INVALID") )
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
      v63 = !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ent->s.lerp.eFlags, ACTIVE, 0xCu);
      v31 = ent->s.eType;
      if ( v31 == ET_ITEM )
      {
        v32 = 0;
      }
      else
      {
        if ( v31 != ET_SCRIPTMOVER )
          goto LABEL_91;
        G_Utils_GetPhysicsAsset(ent, (const XModel **)&v82, (const PhysicsAsset **)&physicsAsset, (int *)&physAsset, (const PhysicsAsset **)&v81, &v74, (const XModel **)&v80, &v64, &contentsOverride);
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
      v64 = forQueryOnly;
      shapeOverride.customShape = NULL;
      shapeOverride.massProperties = NULL;
      *(_WORD *)&shapeOverride.overrideMass = 0;
      shapeOverride.overrideTensor = 0;
      shapeOverride.shapeOverride = physShapeOverrideIdx;
      shapeOverride.physicsAssetAddendum = physAssetAddendum;
      shapeOverride.shapeAddendum = v69;
      v78.customShape = NULL;
      v78.physicsAssetAddendum = NULL;
      v78.shapeAddendum = -1;
      v78.massProperties = NULL;
      *(_WORD *)&v78.overrideMass = 0;
      v78.overrideTensor = 0;
      v78.shapeOverride = physShapeOverrideIdx;
      _R13 = &ent->r.currentOrigin;
      _RDI->detailCache.position.v[0] = ent->r.currentOrigin.v[0];
      __asm
      {
        vmovss  xmm0, dword ptr [r13+4]
        vmovss  dword ptr [rdi+8Ch], xmm0
        vmovss  xmm1, dword ptr [r13+8]
        vmovss  dword ptr [rdi+90h], xmm1
        vmovss  xmm0, dword ptr [rbp+80h+quat]
        vmovss  dword ptr [rdi+94h], xmm0
        vmovss  xmm1, dword ptr [rbp+80h+quat+4]
        vmovss  dword ptr [rdi+98h], xmm1
        vmovss  xmm0, dword ptr [rbp+80h+quat+8]
        vmovss  dword ptr [rdi+9Ch], xmm0
        vmovss  xmm1, dword ptr [rbp+80h+quat+0Ch]
        vmovss  dword ptr [rdi+0A0h], xmm1
      }
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
      _RDI->physicsInstances[0] = Physics_InstantiateAsset(PHYSICS_WORLD_ID_FIRST, baseModel, v7, ref, &ent->r.currentOrigin, &quat, v63, 1, v32, &shapeOverride, forceType, Physics_InstantiationFilterTypeServer, forQueryOnly);
      ++v7->usageCounter.serverEnt;
      v45 = contents;
      v46 = overrideContents;
      if ( overrideContents )
        Physics_SetInstanceContents(PHYSICS_WORLD_ID_FIRST, _RDI->physicsInstances[0], contents);
      if ( v72 )
      {
        detailModelc = v32;
        v47 = v72;
        _RDI->physicsInstances[1] = Physics_InstantiateDetailModel(PHYSICS_WORLD_ID_SERVER_DETAIL, v72, ref, &ent->r.currentOrigin, &quat, v63, detailModelc, v64, 0);
        ++v47->physicsUsageCounter.serverEnt;
      }
      else
      {
        _RDI->physicsInstances[1] = Physics_InstantiateAsset(PHYSICS_WORLD_ID_SERVER_DETAIL, baseModel, v7, ref, &ent->r.currentOrigin, &quat, v63, 1, v32, &v78, Physics_InstantiationForceTypeStatic, Physics_InstantiationFilterTypeServer, v64);
      }
      if ( v46 )
        Physics_SetInstanceContents(PHYSICS_WORLD_ID_SERVER_DETAIL, _RDI->physicsInstances[1], v45);
      if ( ent->s.lerp.pos.trType == TR_PHYSICS_SERVER_AUTH )
      {
        _RDI->mapping = PHYSICSOBJECT_MAPPING_PHYSICS_AUTH;
        v48 = 0;
      }
      else
      {
        v49 = _RDI->physicsInstances[0];
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        v48 = 0;
        if ( v49 == -1 )
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
        RigidBodyID = HavokPhysics_GetRigidBodyID((hknpBodyId *)&physAsset, PHYSICS_WORLD_ID_FIRST, v49, 0);
        if ( Physics_IsRigidBodyDynamic(PHYSICS_WORLD_ID_FIRST, RigidBodyID->m_serialAndIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1062, ASSERT_TYPE_ASSERT, "(!Physics_IsRigidBodyDynamic( PHYSICS_WORLD_ID_SERVER_MAIN, bodyId ))", "%s\n\tTrying to create an entity driven physics object for a dynamic body - asset %s", "!Physics_IsRigidBodyDynamic( PHYSICS_WORLD_ID_SERVER_MAIN, bodyId )", v7->name) )
          __debugbreak();
        _RDI->mapping = PHYSICSOBJECT_MAPPING_ENTITY_AUTH;
      }
      G_PhysicsObject_MarkPhysicsObjectAsUsed(ent->s.number, 1);
      G_PhysicsObject_MarkPhysicsObjectAsShown(ent->s.number, v63, 1);
      G_PhysicsObject_MarkPhysicsObjectDetailAsShown(ent->s.number, v63, 1);
      G_PhysicsObject_CachePrimaryBodies(ent->s.number);
      G_PhysicsObject_CreateChildEntities(PHYSICS_WORLD_ID_FIRST, ent, _RDI);
      G_PhysicsObject_CreateKeyframedBoneMapping(PHYSICS_WORLD_ID_FIRST, ent, _RDI, v7);
      G_PhysicsObject_CreateDetailBoneMapping(PHYSICS_WORLD_ID_SERVER_DETAIL, ent, _RDI);
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
      v53 = ent->classname == scr_const.script_item && (ent->spawnflags & 8) == 0;
      v54 = ent->s.eType;
      v55 = v53;
      if ( v54 == ET_ITEM )
        v55 = 1;
      if ( v54 == ET_ITEM )
        v48 = 1078198280;
      v56 = v48 | (v53 << 30);
      if ( v55 )
      {
        Physics_AddInstanceContents(PHYSICS_WORLD_ID_FIRST, _RDI->physicsInstances[0], v56);
        Physics_AddInstanceContents(PHYSICS_WORLD_ID_SERVER_DETAIL, _RDI->physicsInstances[1], v56);
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
  SvAntilagArchiveInfo *v6; 
  DObj *ServerDObjForEnt; 
  const dvar_t *v8; 
  int integer; 
  const dvar_t *v10; 
  SvAntilagArchiveFrame *toFrame; 
  int v12; 
  unsigned int v13; 
  gentity_s *v17; 
  SvAntilagArchiveFrame *fromFrame; 
  unsigned int animData; 
  AnimationController ControllerByIndex; 
  int v21; 
  CEntPlayerInfo info; 
  clientControllers_t control; 

  v6 = antilagInfo;
  info.control = (clientControllers_t *)antilagInfo;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2602, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2603, ASSERT_TYPE_ASSERT, "( antilagInfo )", (const char *)&queryFormat, "antilagInfo") )
    __debugbreak();
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2604, ASSERT_TYPE_ASSERT, "( partBits )", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  ServerDObjForEnt = Com_GetServerDObjForEnt(ent);
  if ( !ServerDObjForEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2607, ASSERT_TYPE_ASSERT, "( obj )", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !ServerDObjForEnt->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2608, ASSERT_TYPE_ASSERT, "( obj->tree )", (const char *)&queryFormat, "obj->tree") )
    __debugbreak();
  v8 = DVARINT_bg_debugRewindCharacter;
  if ( !DVARINT_bg_debugRewindCharacter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugRewindCharacter") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  integer = v8->current.integer;
  v10 = DVARINT_bg_debugRewindPositions;
  v21 = integer;
  if ( !DVARINT_bg_debugRewindPositions && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_debugRewindPositions") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  toFrame = NULL;
  v12 = v10->current.integer;
  if ( (integer == ent->s.number || integer < 0) && (v12 == 2 || v12 == 5) )
  {
    v13 = 0;
    __asm { vmovaps [rsp+138h+var_48], xmm6 }
    _RBP = partBits;
    __asm { vmovdqu xmm6, cs:__xmm@ffffffffffffffffffffffffffffffff }
    do
    {
      __asm { vmovdqu xmmword ptr [rbp+0], xmm6 }
      _RBP = (DObjPartBits *)((char *)_RBP + 16);
      ++v13;
    }
    while ( v13 < 2 );
    partBits->array[7] &= ~2u;
    v6 = (SvAntilagArchiveInfo *)info.control;
    integer = v21;
    __asm { vmovaps xmm6, [rsp+138h+var_48] }
  }
  v17 = ent;
  if ( ((ent->s.eType - 1) & 0xFFEF) != 0 )
    goto LABEL_38;
  if ( G_Utils_IsValidAntilagPoseFrame(ent, v6->fromFrame) )
    fromFrame = v6->fromFrame;
  else
    fromFrame = NULL;
  if ( G_Utils_IsValidAntilagPoseFrame(ent, v6->toFrame) )
    toFrame = v6->toFrame;
  if ( !fromFrame && !toFrame )
  {
    v17 = ent;
LABEL_38:
    G_Utils_DObjCalcPose(v17, partBits);
    goto LABEL_39;
  }
  DObjLock(ServerDObjForEnt);
  if ( !G_Utils_DObjCreateAntilagSkel(ServerDObjForEnt, ent, v6, partBits, fromFrame, toFrame, &control) )
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
  if ( (integer == ent->s.number || integer < 0) && (v12 == 2 || v12 == 5) )
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
  const char *Name; 
  unsigned int v27; 
  unsigned __int64 v30; 
  void (__fastcall *controller)(const gentity_s *, DObjPartBits *); 
  char *fmt; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  DObjPartBits partBits; 

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
        goto LABEL_34;
    }
    v12 = 0i64;
    __asm
    {
      vmovaps [rsp+0F8h+var_48], xmm6
      vmovaps [rsp+0F8h+var_58], xmm7
      vmovaps [rsp+0F8h+var_68], xmm8
    }
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
        _RDI = ent;
        __asm
        {
          vmovss  xmm6, dword ptr [rdi+138h]
          vmovss  xmm7, dword ptr [rdi+134h]
          vmovss  xmm8, dword ptr [rdi+130h]
          vcvtss2sd xmm6, xmm6, xmm6
          vcvtss2sd xmm7, xmm7, xmm7
          vcvtss2sd xmm8, xmm8, xmm8
        }
        Name = DObjGetName(ServerDObjForEnt);
        __asm
        {
          vmovsd  [rsp+0F8h+var_B0], xmm6
          vmovsd  [rsp+0F8h+var_B8], xmm7
          vmovsd  [rsp+0F8h+var_C0], xmm8
        }
        LODWORD(v33) = ent->s.number;
        LODWORD(fmt) = ServerDObjForEnt->numBones;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E33540, 750i64, (unsigned int)v13, fmt, v33, Name, v35, v37, v38);
      }
      ++v12;
    }
    while ( v12 < v9 );
    __asm { vmovaps xmm8, [rsp+0F8h+var_68] }
    _RDI = &partBits;
    __asm { vmovaps xmm7, [rsp+0F8h+var_58] }
    v27 = 0;
    __asm { vpxor   xmm6, xmm6, xmm6 }
    do
    {
      __asm { vmovdqu xmmword ptr [rdi], xmm6 }
      _RDI = (DObjPartBits *)((char *)_RDI + 16);
      ++v27;
    }
    while ( v27 < 2 );
    __asm { vmovaps xmm6, [rsp+0F8h+var_48] }
    do
    {
      v30 = (unsigned int)v6[v10];
      if ( (unsigned int)v30 >= 0x100 )
      {
        LODWORD(v36) = 256;
        LODWORD(v34) = v6[v10];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v34, v36) )
          __debugbreak();
      }
      ++v10;
      partBits.array[v30 >> 5] |= 0x80000000 >> (v30 & 0x1F);
    }
    while ( v10 < v9 );
    DObjCompleteHierarchyBits(ServerDObjForEnt, &partBits);
    controller = G_Main_GetEntHandlerList(ent)->controller;
    if ( controller )
      controller(ent, &partBits);
    DObjCalcSkel(ServerDObjForEnt, &partBits);
  }
LABEL_34:
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
  __int64 v16; 
  const char *v17; 
  bool v20; 
  bool v21; 
  bool v22; 
  const dvar_t *v25; 
  char *fmt; 
  float fmta; 
  __int64 v49; 
  __int64 v50; 
  double v51; 

  _RBP = antilagInfo;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2566, ASSERT_TYPE_ASSERT, "( obj )", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2567, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2568, ASSERT_TYPE_ASSERT, "( antilagInfo )", (const char *)&queryFormat, "antilagInfo") )
    __debugbreak();
  if ( !partBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2569, ASSERT_TYPE_ASSERT, "( partBits )", (const char *)&queryFormat, "partBits") )
    __debugbreak();
  number = ent->s.number;
  if ( (unsigned int)number >= 0xF8 )
  {
    LODWORD(v49) = ent->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2572, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( ( sizeof( *array_counter( antilagInfo->hasAntilagPose ) ) + 0 ) )", "characterIndex doesn't index ARRAY_COUNT( antilagInfo->hasAntilagPose )\n\t%i not in [0, %i)", v49, 248) )
      __debugbreak();
  }
  _RBX = toFrame;
  _RDI = fromFrame;
  v16 = number;
  LODWORD(fmt) = toFrame != NULL;
  v17 = j_va("ci:%d hp:%d f:%d t:%d", (unsigned int)number, _RBP->hasAntilagPose[number], fromFrame != NULL, fmt);
  Sys_ProfSetMarker(0xFF0F0F0F, v17);
  if ( _RBP->hasAntilagPose[number] )
  {
    if ( !_RBP->savedTree[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2579, ASSERT_TYPE_ASSERT, "( antilagInfo->savedTree[characterIndex] != nullptr )", (const char *)&queryFormat, "antilagInfo->savedTree[characterIndex] != nullptr") )
      __debugbreak();
    if ( SV_Game_DObjCreateSkelForBones(obj, partBits) )
      return 1;
  }
  __asm { vmovaps [rsp+78h+var_38], xmm6 }
  if ( !_RBP->hasAntilagPose[number] )
  {
    G_Utils_DObjSaveCurrentAnimTree(obj, ent, _RBP, partBits);
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+10h]
      vmovss  dword ptr [rsp+78h+fmt], xmm0
    }
    G_Utils_DObjReadAntilagAnimTree(obj, number, fromFrame, toFrame, fmta);
  }
  __asm { vmovss  xmm6, dword ptr [rbp+10h] }
  v20 = (unsigned int)number < 0xF8;
  v21 = (unsigned int)number <= 0xF8;
  if ( (unsigned int)number >= 0xF8 )
  {
    LODWORD(v50) = 248;
    LODWORD(v49) = number;
    v22 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2528, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( (((1) >= (200 + 48)) ? (1) : (200 + 48)) )", "characterIndex doesn't index MAX_ANTILAG_CLIENT_AGENTS\n\t%i not in [0, %i)", v49, v50);
    v20 = 0;
    v21 = !v22;
    if ( v22 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v20 )
    goto LABEL_48;
  __asm { vcomiss xmm6, cs:__real@3f800000 }
  if ( !v21 )
  {
LABEL_48:
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+78h+var_48], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2529, ASSERT_TYPE_ASSERT, "( ( (lerp >= 0.0f) && (lerp <= 1.0f) ) )", "%s\n\t( lerp ) = %g", "( (lerp >= 0.0f) && (lerp <= 1.0f) )", v51) )
      __debugbreak();
  }
  if ( fromFrame )
  {
    if ( toFrame )
    {
      v25 = DCONST_DVARBOOL_g_antilagPoseBlend;
      if ( !DCONST_DVARBOOL_g_antilagPoseBlend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_antilagPoseBlend") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v25);
      _RCX = v16;
      if ( v25->current.enabled )
      {
        __asm { vmovaps xmm2, xmm6; progress }
        G_Utils_DObjLerpAntilagControllers(&fromFrame->ctrlInfo.controllers[_RCX], &toFrame->ctrlInfo.controllers[_RCX], *(float *)&_XMM2, outCtrl);
      }
      else
      {
        __asm { vcomiss xmm6, cs:__real@3f000000 }
        _RAX = outCtrl;
        __asm
        {
          vmovups ymm0, ymmword ptr [rcx+rbx+1F0h]
          vmovups ymmword ptr [rax], ymm0
          vmovups ymm1, ymmword ptr [rcx+rbx+210h]
          vmovups ymmword ptr [rax+20h], ymm1
          vmovups ymm0, ymmword ptr [rcx+rbx+230h]
          vmovups ymmword ptr [rax+40h], ymm0
          vmovups xmm1, xmmword ptr [rcx+rbx+250h]
          vmovups xmmword ptr [rax+60h], xmm1
          vmovsd  xmm0, qword ptr [rcx+rbx+260h]
          vmovsd  qword ptr [rax+70h], xmm0
        }
      }
      goto LABEL_45;
    }
    goto LABEL_43;
  }
  if ( !toFrame )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2556, ASSERT_TYPE_ASSERT, "( fromFrame )", (const char *)&queryFormat, "fromFrame") )
      __debugbreak();
LABEL_43:
    _RCX = outCtrl;
    _RAX = 120 * number;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+rdi+1F0h]
      vmovups ymmword ptr [rcx], ymm0
      vmovups ymm1, ymmword ptr [rax+rdi+210h]
      vmovups ymmword ptr [rcx+20h], ymm1
      vmovups ymm0, ymmword ptr [rax+rdi+230h]
      vmovups ymmword ptr [rcx+40h], ymm0
      vmovups xmm1, xmmword ptr [rax+rdi+250h]
      vmovups xmmword ptr [rcx+60h], xmm1
      vmovsd  xmm0, qword ptr [rax+rdi+260h]
    }
    goto LABEL_44;
  }
  _RCX = outCtrl;
  _RAX = 120 * number;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+rbx+1F0h]
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm1, ymmword ptr [rax+rbx+210h]
    vmovups ymmword ptr [rcx+20h], ymm1
    vmovups ymm0, ymmword ptr [rax+rbx+230h]
    vmovups ymmword ptr [rcx+40h], ymm0
    vmovups xmm1, xmmword ptr [rax+rbx+250h]
    vmovups xmmword ptr [rcx+60h], xmm1
    vmovsd  xmm0, qword ptr [rax+rbx+260h]
  }
LABEL_44:
  __asm { vmovsd  qword ptr [rcx+70h], xmm0 }
LABEL_45:
  __asm { vmovaps xmm6, [rsp+78h+var_38] }
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
  int v11; 
  __int64 v14; 
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
  _R8 = MatrixArray;
  v11 = 0;
  __asm
  {
    vmovq   xmm4, r8
    vpunpcklqdq xmm4, xmm4, xmm4
  }
  if ( (int)v4 > 0 && (unsigned int)v4 >= 8 )
  {
    v14 = (int)v4 - 1;
    if ( outMatrices > (DObjAnimMat **)&boneIndices[v14] || &outMatrices[v14] < (DObjAnimMat **)boneIndices )
    {
      _RCX = boneIndices + 4;
      _EAX = 5;
      __asm { vmovd   xmm5, eax }
      _RAX = outMatrices + 4;
      do
      {
        __asm
        {
          vmovq   xmm0, qword ptr [rcx-10h]
          vpmovsxdq xmm1, xmm0
          vmovq   xmm0, qword ptr [rcx-8]
          vpsllq  xmm2, xmm1, xmm5
          vpaddq  xmm3, xmm2, xmm4
          vmovdqu xmmword ptr [rax-20h], xmm3
          vpmovsxdq xmm1, xmm0
          vmovq   xmm0, qword ptr [rcx]
          vpsllq  xmm2, xmm1, xmm5
          vpaddq  xmm3, xmm2, xmm4
          vmovdqu xmmword ptr [rax-10h], xmm3
          vpmovsxdq xmm1, xmm0
          vmovq   xmm0, qword ptr [rcx+8]
          vpsllq  xmm2, xmm1, xmm5
          vpaddq  xmm3, xmm2, xmm4
          vmovdqu xmmword ptr [rax], xmm3
          vpmovsxdq xmm1, xmm0
          vpsllq  xmm2, xmm1, xmm5
          vpaddq  xmm3, xmm2, xmm4
        }
        v11 += 8;
        v9 += 8i64;
        __asm { vmovdqu xmmword ptr [rax+10h], xmm3 }
        _RAX += 8;
        _RCX += 8;
      }
      while ( v9 < (int)v4 - (int)v4 % 8 );
    }
  }
  for ( i = v11; i < v4; ++i )
    outMatrices[i] = &_R8[boneIndices[i]];
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
  __int64 v12; 
  int v16; 
  vec3_t *p_currentOrigin; 
  vec3_t *p_currentAngles; 
  __int64 v19; 
  int v63; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 
  tmat33_t<vec3_t> in1; 
  tmat43_t<vec3_t> result; 
  DObjAnimMat *outMatricesa[254]; 

  v12 = boneCount;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2888, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( (int)v12 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2889, ASSERT_TYPE_ASSERT, "(boneCount > 0)", (const char *)&queryFormat, "boneCount > 0") )
    __debugbreak();
  if ( !boneIndices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2890, ASSERT_TYPE_ASSERT, "(boneIndices)", (const char *)&queryFormat, "boneIndices") )
    __debugbreak();
  if ( !outMatrices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2891, ASSERT_TYPE_ASSERT, "(outMatrices)", (const char *)&queryFormat, "outMatrices") )
    __debugbreak();
  memset_0(outMatricesa, 0, sizeof(outMatricesa));
  if ( (unsigned int)v12 > 0xFE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2896, ASSERT_TYPE_ASSERT, "(boneCount <= ( sizeof( *array_counter( matrices ) ) + 0 ))", (const char *)&queryFormat, "boneCount <= ARRAY_COUNT( matrices )") )
    __debugbreak();
  G_Utils_DObjGetLocalBoneIndexMatrices(ent, v12, boneIndices, outMatricesa);
  v16 = 0;
  if ( (int)v12 > 0 )
  {
    p_currentOrigin = &ent->r.currentOrigin;
    __asm { vmovaps [rsp+958h+var_58], xmm6 }
    p_currentAngles = &ent->r.currentAngles;
    __asm
    {
      vmovaps [rsp+958h+var_68], xmm7
      vmovaps [rsp+958h+var_78], xmm8
    }
    v19 = 0i64;
    __asm
    {
      vmovaps [rsp+958h+var_88], xmm9
      vmovaps [rsp+958h+var_98], xmm10
      vmovaps [rsp+958h+var_A8], xmm11
      vmovaps [rsp+958h+var_B8], xmm12
      vmovaps [rsp+958h+var_C8], xmm13
      vmovss  xmm13, cs:__real@3f800000
    }
    do
    {
      _RDI = outMatricesa[v19];
      if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2906, ASSERT_TYPE_ASSERT, "( mat )", (const char *)&queryFormat, "mat") )
        __debugbreak();
      AnglesAndOriginToMatrix43(p_currentAngles, p_currentOrigin, &result);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi]
        vmovss  [rsp+958h+var_928], xmm0
      }
      if ( (v63 & 0x7F800000) == 2139095040 )
        goto LABEL_34;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+4]
        vmovss  [rsp+958h+var_928], xmm0
      }
      if ( (v64 & 0x7F800000) == 2139095040 )
        goto LABEL_34;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+8]
        vmovss  [rsp+958h+var_928], xmm0
      }
      if ( (v65 & 0x7F800000) == 2139095040 )
        goto LABEL_34;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+0Ch]
        vmovss  [rsp+958h+var_928], xmm0
      }
      if ( (v66 & 0x7F800000) == 2139095040 )
      {
LABEL_34:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1178, ASSERT_TYPE_SANITY, "( !IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] ) )", (const char *)&queryFormat, "!IS_NAN( ( mat->quat )[0] ) && !IS_NAN( ( mat->quat )[1] ) && !IS_NAN( ( mat->quat )[2] ) && !IS_NAN( ( mat->quat )[3] )") )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+1Ch]
        vmovss  [rsp+958h+var_928], xmm0
      }
      if ( (v67 & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_public.h", 1179, ASSERT_TYPE_SANITY, "( !IS_NAN( mat->transWeight ) )", (const char *)&queryFormat, "!IS_NAN( mat->transWeight )") )
        __debugbreak();
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+1Ch]
        vmulss  xmm2, xmm0, dword ptr [rdi]
        vmovss  xmm3, dword ptr [rdi+4]
        vmovss  xmm5, dword ptr [rdi+8]
        vmulss  xmm12, xmm2, dword ptr [rdi]
        vmulss  xmm4, xmm3, xmm0
        vmulss  xmm6, xmm5, xmm0
        vmovss  xmm0, dword ptr [rdi+0Ch]
        vmulss  xmm10, xmm2, xmm0
        vmulss  xmm7, xmm2, xmm3
        vmulss  xmm11, xmm4, xmm3
        vmulss  xmm9, xmm2, xmm5
        vmulss  xmm2, xmm6, xmm0
        vmulss  xmm8, xmm4, xmm5
        vmulss  xmm4, xmm4, xmm0
        vmulss  xmm3, xmm6, xmm5
        vaddss  xmm1, xmm2, xmm7
        vmovss  dword ptr [rsp+958h+in1+4], xmm1
        vsubss  xmm1, xmm7, xmm2
        vmovss  dword ptr [rsp+958h+in1+0Ch], xmm1
        vaddss  xmm1, xmm8, xmm10
        vaddss  xmm0, xmm3, xmm11
        vsubss  xmm0, xmm13, xmm0
        vmovss  dword ptr [rsp+958h+in1], xmm0
        vsubss  xmm0, xmm9, xmm4
        vmovss  dword ptr [rsp+958h+in1+8], xmm0
        vaddss  xmm0, xmm3, xmm12
        vsubss  xmm0, xmm13, xmm0
        vmovss  dword ptr [rsp+958h+in1+10h], xmm0
        vaddss  xmm0, xmm4, xmm9
        vmovss  dword ptr [rsp+958h+in1+18h], xmm0
        vaddss  xmm0, xmm11, xmm12
        vmovss  dword ptr [rsp+958h+in1+14h], xmm1
        vsubss  xmm0, xmm13, xmm0
        vsubss  xmm1, xmm8, xmm10
        vmovss  dword ptr [rsp+958h+in1+20h], xmm0
        vmovss  dword ptr [rsp+958h+in1+1Ch], xmm1
      }
      MatrixMultiply(&in1, (const tmat33_t<vec3_t> *)&result, (tmat33_t<vec3_t> *)&outMatrices[v16]);
      MatrixTransformVector43(&_RDI->trans, &result, &outMatrices[v16++].m[3]);
      ++v19;
    }
    while ( v19 < v12 );
    __asm
    {
      vmovaps xmm13, [rsp+958h+var_C8]
      vmovaps xmm12, [rsp+958h+var_B8]
      vmovaps xmm11, [rsp+958h+var_A8]
      vmovaps xmm10, [rsp+958h+var_98]
      vmovaps xmm9, [rsp+958h+var_88]
      vmovaps xmm8, [rsp+958h+var_78]
      vmovaps xmm7, [rsp+958h+var_68]
      vmovaps xmm6, [rsp+958h+var_58]
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

void __fastcall G_Utils_DObjLerpAntilagControllers(const clientControllers_t *from, const clientControllers_t *to, double progress, clientControllers_t *outCtrl)
{
  char v195; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-18h], xmm6 }
  _RBX = outCtrl;
  __asm { vmovaps xmmword ptr [rax-28h], xmm7 }
  _RDI = to;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmm10, xmm2
  }
  if ( !from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2387, ASSERT_TYPE_ASSERT, "( from )", (const char *)&queryFormat, "from") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2388, ASSERT_TYPE_ASSERT, "( to )", (const char *)&queryFormat, "to") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2389, ASSERT_TYPE_ASSERT, "( outCtrl )", (const char *)&queryFormat, "outCtrl") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vsubss  xmm1, xmm0, dword ptr [rsi]
    vmovss  xmm8, cs:__real@3b360b61
    vmovss  xmm7, cs:__real@3f000000
    vmovss  xmm6, cs:__real@43b40000
    vmulss  xmm4, xmm1, xmm8
    vaddss  xmm2, xmm4, xmm7
    vxorps  xmm9, xmm9, xmm9
    vroundss xmm3, xmm9, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm0, xmm0, xmm6
    vmulss  xmm1, xmm0, xmm10
    vaddss  xmm2, xmm1, dword ptr [rsi]
    vmovss  dword ptr [rbx], xmm2
    vmovss  xmm0, dword ptr [rdi+4]
    vsubss  xmm1, xmm0, dword ptr [rsi+4]
    vmulss  xmm4, xmm1, xmm8
    vaddss  xmm2, xmm4, xmm7
    vroundss xmm3, xmm9, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rsi+4]
    vmovss  dword ptr [rbx+4], xmm3
    vmovss  xmm0, dword ptr [rdi+8]
    vsubss  xmm1, xmm0, dword ptr [rsi+8]
    vmulss  xmm4, xmm1, xmm8
    vaddss  xmm2, xmm4, xmm7
    vroundss xmm3, xmm9, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rsi+8]
    vmovss  dword ptr [rbx+8], xmm3
    vmovss  xmm0, dword ptr [rdi+0Ch]
    vsubss  xmm1, xmm0, dword ptr [rsi+0Ch]
    vmulss  xmm4, xmm1, xmm8
    vaddss  xmm2, xmm4, xmm7
    vroundss xmm3, xmm9, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rsi+0Ch]
    vmovss  dword ptr [rbx+0Ch], xmm3
    vmovss  xmm0, dword ptr [rdi+10h]
    vsubss  xmm1, xmm0, dword ptr [rsi+10h]
    vmulss  xmm4, xmm1, xmm8
    vaddss  xmm2, xmm4, xmm7
    vroundss xmm3, xmm9, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rsi+10h]
    vmovss  dword ptr [rbx+10h], xmm3
    vmovss  xmm0, dword ptr [rdi+14h]
    vsubss  xmm1, xmm0, dword ptr [rsi+14h]
    vmulss  xmm4, xmm1, xmm8
    vaddss  xmm2, xmm4, xmm7
    vroundss xmm3, xmm9, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rsi+14h]
    vmovss  dword ptr [rbx+14h], xmm3
    vmovss  xmm0, dword ptr [rdi+18h]
    vsubss  xmm1, xmm0, dword ptr [rsi+18h]
    vmulss  xmm4, xmm1, xmm8
    vaddss  xmm2, xmm4, xmm7
    vroundss xmm3, xmm9, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rsi+18h]
    vmovss  dword ptr [rbx+18h], xmm3
    vmovss  xmm0, dword ptr [rdi+1Ch]
    vsubss  xmm1, xmm0, dword ptr [rsi+1Ch]
    vmulss  xmm4, xmm1, xmm8
    vaddss  xmm2, xmm4, xmm7
    vroundss xmm3, xmm9, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rsi+1Ch]
    vmovss  dword ptr [rbx+1Ch], xmm3
    vmovss  xmm0, dword ptr [rdi+20h]
    vsubss  xmm1, xmm0, dword ptr [rsi+20h]
    vmulss  xmm4, xmm1, xmm8
    vaddss  xmm2, xmm4, xmm7
    vroundss xmm3, xmm9, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rsi+20h]
    vmovss  dword ptr [rbx+20h], xmm3
    vmovss  xmm0, dword ptr [rdi+24h]
    vsubss  xmm1, xmm0, dword ptr [rsi+24h]
    vmulss  xmm4, xmm1, xmm8
    vaddss  xmm2, xmm4, xmm7
    vroundss xmm3, xmm9, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rsi+24h]
    vmovss  dword ptr [rbx+24h], xmm3
    vmovss  xmm0, dword ptr [rdi+28h]
    vsubss  xmm1, xmm0, dword ptr [rsi+28h]
    vmulss  xmm4, xmm1, xmm8
    vaddss  xmm2, xmm4, xmm7
    vroundss xmm3, xmm9, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rsi+28h]
    vmovss  dword ptr [rbx+28h], xmm3
    vmovss  xmm0, dword ptr [rdi+2Ch]
    vsubss  xmm1, xmm0, dword ptr [rsi+2Ch]
    vmulss  xmm4, xmm1, xmm8
    vaddss  xmm2, xmm4, xmm7
    vroundss xmm3, xmm9, xmm2, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, xmm6
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rsi+2Ch]
    vmovaps xmm2, xmm10; frac
    vmovss  dword ptr [rbx+2Ch], xmm3
  }
  LerpAngles(&from->tag_origin_angles, &_RDI->tag_origin_angles, *(const float *)&_XMM2, &_RBX->tag_origin_angles);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+3Ch]
    vsubss  xmm1, xmm0, dword ptr [rsi+3Ch]
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rsi+3Ch]
    vmovss  dword ptr [rbx+3Ch], xmm3
    vmovss  xmm0, dword ptr [rdi+40h]
    vsubss  xmm1, xmm0, dword ptr [rsi+40h]
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rsi+40h]
    vmovss  dword ptr [rbx+40h], xmm3
    vmovss  xmm0, dword ptr [rdi+44h]
    vsubss  xmm1, xmm0, dword ptr [rsi+44h]
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rsi+44h]
    vmovss  dword ptr [rbx+44h], xmm3
    vmovss  xmm0, dword ptr [rdi+48h]
    vsubss  xmm1, xmm0, dword ptr [rsi+48h]
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rsi+48h]
    vmovss  dword ptr [rbx+48h], xmm3
    vmovss  xmm0, dword ptr [rdi+4Ch]
    vsubss  xmm1, xmm0, dword ptr [rsi+4Ch]
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rsi+4Ch]
    vmovss  dword ptr [rbx+4Ch], xmm3
    vmovss  xmm0, dword ptr [rdi+50h]
    vsubss  xmm1, xmm0, dword ptr [rsi+50h]
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rsi+50h]
    vmovss  dword ptr [rbx+50h], xmm3
    vmovss  xmm0, dword ptr [rdi+54h]
    vsubss  xmm1, xmm0, dword ptr [rsi+54h]
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rsi+54h]
    vmovss  dword ptr [rbx+54h], xmm3
    vmovss  xmm0, dword ptr [rdi+58h]
    vsubss  xmm1, xmm0, dword ptr [rsi+58h]
    vmovaps xmm6, [rsp+88h+var_18]
  }
  _R11 = &v195;
  __asm
  {
    vmovaps xmm7, [rsp+88h+var_28]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rsi+58h]
    vmovss  dword ptr [rbx+58h], xmm3
    vmovss  xmm0, dword ptr [rdi+5Ch]
    vsubss  xmm1, xmm0, dword ptr [rsi+5Ch]
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rsi+5Ch]
    vmovss  dword ptr [rbx+5Ch], xmm3
    vmovss  xmm0, dword ptr [rdi+60h]
    vsubss  xmm1, xmm0, dword ptr [rsi+60h]
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rsi+60h]
    vmovss  dword ptr [rbx+60h], xmm3
    vmovss  xmm0, dword ptr [rdi+64h]
    vsubss  xmm1, xmm0, dword ptr [rsi+64h]
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rsi+64h]
    vmovss  dword ptr [rbx+64h], xmm3
    vmovss  xmm0, dword ptr [rdi+68h]
    vsubss  xmm1, xmm0, dword ptr [rsi+68h]
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rsi+68h]
    vmovss  dword ptr [rbx+68h], xmm3
    vmovss  xmm0, dword ptr [rdi+6Ch]
    vsubss  xmm1, xmm0, dword ptr [rsi+6Ch]
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rsi+6Ch]
    vmovss  dword ptr [rbx+6Ch], xmm3
    vmovss  xmm0, dword ptr [rdi+70h]
    vsubss  xmm1, xmm0, dword ptr [rsi+70h]
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rsi+70h]
    vmovss  dword ptr [rbx+70h], xmm3
    vmovss  xmm0, dword ptr [rdi+74h]
    vsubss  xmm1, xmm0, dword ptr [rsi+74h]
    vmulss  xmm2, xmm1, xmm10
    vaddss  xmm3, xmm2, dword ptr [rsi+74h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovss  dword ptr [rbx+74h], xmm3
  }
}

/*
==============
G_Utils_DObjReadAntilagAnimTree
==============
*/
void G_Utils_DObjReadAntilagAnimTree(DObj *obj, const int characterIndex, SvAntilagArchiveFrame *fromFrame, SvAntilagArchiveFrame *toFrame, const float lerp)
{
  __int64 v10; 
  bool v12; 
  bool v13; 
  bool v14; 
  const dvar_t *v19; 
  unsigned int v21; 
  unsigned int v22; 
  char *v23; 
  const unsigned __int8 *v24; 
  float weightScale; 
  float weightScalea; 
  double v29; 

  __asm
  {
    vmovaps [rsp+68h+var_18], xmm6
    vmovaps [rsp+68h+var_28], xmm7
  }
  v10 = characterIndex;
  Profile_Begin(399);
  v12 = (unsigned int)v10 < 0xF8;
  v13 = (unsigned int)v10 <= 0xF8;
  if ( (unsigned int)v10 >= 0xF8 )
  {
    v14 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2464, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( (((1) >= (200 + 48)) ? (1) : (200 + 48)) )", "characterIndex doesn't index MAX_ANTILAG_CLIENT_AGENTS\n\t%i not in [0, %i)", v10, 248);
    v12 = 0;
    v13 = !v14;
    if ( v14 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, [rsp+68h+lerp]
    vmovss  xmm7, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm6, xmm0
  }
  if ( v12 )
    goto LABEL_25;
  __asm { vcomiss xmm6, xmm7 }
  if ( !v13 )
  {
LABEL_25:
    __asm
    {
      vcvtss2sd xmm0, xmm6, xmm6
      vmovsd  [rsp+68h+var_38], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2465, ASSERT_TYPE_ASSERT, "( ( (lerp >= 0.0f) && (lerp <= 1.0f) ) )", "%s\n\t( lerp ) = %g", "( (lerp >= 0.0f) && (lerp <= 1.0f) )", v29) )
      __debugbreak();
  }
  if ( fromFrame )
  {
    if ( toFrame )
    {
      v19 = DCONST_DVARBOOL_g_antilagPoseBlend;
      if ( !DCONST_DVARBOOL_g_antilagPoseBlend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_antilagPoseBlend") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      if ( v19->current.enabled )
      {
        XAnimCreateRootNodeForAntilag(obj);
        __asm
        {
          vsubss  xmm0, xmm7, xmm6
          vmovss  [rsp+68h+weightScale], xmm0
        }
        XAnimReadAnimTreeForAntilag(obj, &fromFrame->animInfo.antilagAnimInfo[fromFrame->animInfo.characterInfoStart[v10]], fromFrame->animInfo.characterInfoCount[v10], &fromFrame->animInfo.customNodeData[fromFrame->animInfo.characterCustomNodeDataStart[v10]], fromFrame->animInfo.characterCustomNodeDataSize[v10], weightScale);
      }
      else
      {
        __asm
        {
          vcomiss xmm6, cs:__real@3f000000
          vmovaps xmm6, xmm7
        }
      }
      goto LABEL_18;
    }
LABEL_21:
    __asm { vmovaps xmm6, xmm7 }
    v22 = fromFrame->animInfo.characterCustomNodeDataSize[v10];
    v21 = fromFrame->animInfo.characterInfoCount[v10];
    v23 = (char *)fromFrame + 16 * fromFrame->animInfo.characterInfoStart[v10];
    v24 = (const unsigned __int8 *)fromFrame + fromFrame->animInfo.characterCustomNodeDataStart[v10];
    goto LABEL_22;
  }
  if ( !toFrame )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2514, ASSERT_TYPE_ASSERT, "( fromFrame )", (const char *)&queryFormat, "fromFrame") )
      __debugbreak();
    goto LABEL_21;
  }
  __asm { vmovaps xmm6, xmm7 }
LABEL_18:
  v21 = toFrame->animInfo.characterInfoCount[v10];
  v22 = toFrame->animInfo.characterCustomNodeDataSize[v10];
  v23 = (char *)toFrame + 16 * toFrame->animInfo.characterInfoStart[v10];
  v24 = (const unsigned __int8 *)toFrame + toFrame->animInfo.characterCustomNodeDataStart[v10];
LABEL_22:
  __asm { vmovss  [rsp+68h+weightScale], xmm6 }
  XAnimReadAnimTreeForAntilag(obj, (AntilagAnimInfo *)(v23 + 34228), v21, v24 + 50232, v22, weightScalea);
  __asm
  {
    vmovaps xmm6, [rsp+68h+var_18]
    vmovaps xmm7, [rsp+68h+var_28]
  }
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
  const char *v10; 
  const char *v11; 
  const char *v17; 
  const char *v18; 
  scr_string_t targetname; 
  const char *v22; 
  const char *v23; 
  unsigned __int16 model; 
  const char *ModelName; 
  const char *v28; 
  const char *v36; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  _RBX = inOutOrigin;
  __asm { vmovaps [rsp+58h+var_28], xmm7 }
  v10 = SL_ConvertToString(ent->classname);
  v11 = j_va("code_classname \"%s\"", v10);
  __asm
  {
    vmovss  xmm6, cs:__real@3f000000
    vmovaps xmm2, xmm6; scale
  }
  CL_AddDebugString(_RBX, color, *(float *)&_XMM2, v11, 1, 1);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  xmm7, cs:__real@40b00000
    vsubss  xmm0, xmm0, xmm7
    vmovss  dword ptr [rbx+8], xmm0
  }
  if ( isLeakDisplay )
  {
    v17 = SL_ConvertToString(ent->script_classname);
    v18 = j_va("classname \"%s\"", v17);
    __asm { vmovaps xmm2, xmm6; scale }
    CL_AddDebugString(_RBX, color, *(float *)&_XMM2, v18, 1, 1);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+8]
      vsubss  xmm1, xmm0, xmm7
      vmovss  dword ptr [rbx+8], xmm1
    }
  }
  targetname = ent->targetname;
  if ( targetname )
  {
    v22 = SL_ConvertToString(targetname);
    v23 = j_va("targetname \"%s\"", v22);
    __asm { vmovaps xmm2, xmm6; scale }
    CL_AddDebugString(_RBX, color, *(float *)&_XMM2, v23, 1, 1);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+8]
      vsubss  xmm1, xmm0, xmm7
      vmovss  dword ptr [rbx+8], xmm1
    }
  }
  model = ent->model;
  if ( model )
  {
    ModelName = G_CString_GetModelName(model);
    v28 = j_va("model \"%s\"", ModelName);
    __asm { vmovaps xmm2, xmm6; scale }
    CL_AddDebugString(_RBX, color, *(float *)&_XMM2, v28, 1, 1);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+8]
      vsubss  xmm1, xmm0, xmm7
      vmovss  dword ptr [rbx+8], xmm1
    }
  }
  if ( isLeakDisplay )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, cs:__real@3a83126f
      vcvtss2sd xmm2, xmm1, xmm1
      vmovq   r8, xmm2
    }
    v36 = j_va("birthtime %i (%f.1 ago)", (unsigned int)ent->birthTime, _R8);
    __asm { vmovaps xmm2, xmm6; scale }
    CL_AddDebugString(_RBX, color, *(float *)&_XMM2, v36, 1, 1);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+8]
      vsubss  xmm1, xmm0, xmm7
      vmovss  dword ptr [rbx+8], xmm1
    }
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
}

/*
==============
G_Utils_DisplayInfoLine
==============
*/
void G_Utils_DisplayInfoLine(vec3_t *inOutOrigin, const char *text, const vec4_t *color)
{
  __asm { vmovss  xmm2, cs:__real@3f000000; scale }
  _RBX = inOutOrigin;
  CL_AddDebugString(inOutOrigin, color, *(float *)&_XMM2, text, 1, 1);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vsubss  xmm1, xmm0, cs:__real@40b00000
    vmovss  dword ptr [rbx+8], xmm1
  }
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

  _RDI = outCentroid;
  _RBX = ent;
  if ( !ent )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2255, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2244, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
  }
  AnglesToAxis(&_RBX->r.currentAngles, &axis);
  MatrixTransformVector(&_RBX->r.box.midPoint, &axis, _RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vaddss  xmm1, xmm0, dword ptr [rbx+130h]
    vmovss  dword ptr [rdi], xmm1
    vmovss  xmm0, dword ptr [rbx+134h]
    vaddss  xmm1, xmm0, dword ptr [rdi+4]
    vmovss  dword ptr [rdi+4], xmm1
    vmovss  xmm0, dword ptr [rbx+138h]
    vaddss  xmm1, xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rdi+8], xmm1
  }
}

/*
==============
G_Utils_EntityCentroidWithBounds
==============
*/
void G_Utils_EntityCentroidWithBounds(const gentity_s *ent, const Bounds *bounds, vec3_t *outCentroid)
{
  tmat33_t<vec3_t> axis; 

  _RDI = outCentroid;
  _RBX = ent;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2244, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  AnglesToAxis(&_RBX->r.currentAngles, &axis);
  MatrixTransformVector(&bounds->midPoint, &axis, _RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vaddss  xmm1, xmm0, dword ptr [rbx+130h]
    vmovss  dword ptr [rdi], xmm1
    vmovss  xmm0, dword ptr [rbx+134h]
    vaddss  xmm1, xmm0, dword ptr [rdi+4]
    vmovss  dword ptr [rdi+4], xmm1
    vmovss  xmm0, dword ptr [rbx+138h]
    vaddss  xmm1, xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rdi+8], xmm1
  }
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
  __int64 v5; 

  _RBX = outUserCmd;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1962, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1963, ASSERT_TYPE_ASSERT, "( outUserCmd )", (const char *)&queryFormat, "outUserCmd") )
    __debugbreak();
  _RAX = &client->sess.cmd;
  v5 = 2i64;
  do
  {
    _RBX = (usercmd_s *)((char *)_RBX + 128);
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX = (usercmd_s *)((char *)_RAX + 128);
    __asm
    {
      vmovups xmmword ptr [rbx-80h], xmm0
      vmovups xmm1, xmmword ptr [rax-70h]
      vmovups xmmword ptr [rbx-70h], xmm1
      vmovups xmm0, xmmword ptr [rax-60h]
      vmovups xmmword ptr [rbx-60h], xmm0
      vmovups xmm1, xmmword ptr [rax-50h]
      vmovups xmmword ptr [rbx-50h], xmm1
      vmovups xmm0, xmmword ptr [rax-40h]
      vmovups xmmword ptr [rbx-40h], xmm0
      vmovups xmm1, xmmword ptr [rax-30h]
      vmovups xmmword ptr [rbx-30h], xmm1
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rbx-20h], xmm0
      vmovups xmm1, xmmword ptr [rax-10h]
      vmovups xmmword ptr [rbx-10h], xmm1
    }
    --v5;
  }
  while ( v5 );
  _RBX->buttons = _RAX->buttons;
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

void __fastcall G_Utils_GetEntityBoundsPoint(const gentity_s *ent, double ratioFromCenterX, double ratioFromCenterY, double ratioFromCenterZ, vec3_t *outPoint)
{
  tmat33_t<vec3_t> axis; 
  char v45; 
  char v46; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
  }
  _RDI = outPoint;
  __asm
  {
    vmovaps xmm6, xmm3
    vmovaps xmm7, xmm2
    vmovaps xmm8, xmm1
  }
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2265, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  AnglesToAxis(&ent->r.currentAngles, &axis);
  __asm
  {
    vmulss  xmm0, xmm8, dword ptr [rbx+10Ch]
    vaddss  xmm8, xmm0, dword ptr [rbx+100h]
    vmulss  xmm0, xmm6, dword ptr [rbx+114h]
    vmulss  xmm1, xmm7, dword ptr [rbx+110h]
    vaddss  xmm9, xmm0, dword ptr [rbx+108h]
    vaddss  xmm7, xmm1, dword ptr [rbx+104h]
  }
  if ( &v45 == (char *)outPoint && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_math.h", 470, ASSERT_TYPE_SANITY, "( &in1 != &out )", (const char *)&queryFormat, "&in1 != &out") )
    __debugbreak();
  __asm
  {
    vmulss  xmm3, xmm8, dword ptr [rsp+0B8h+axis]
    vmulss  xmm2, xmm7, dword ptr [rsp+0B8h+axis+0Ch]
    vmulss  xmm1, xmm9, dword ptr [rsp+0B8h+axis+18h]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm3, xmm8, dword ptr [rsp+0B8h+axis+4]
    vmulss  xmm2, xmm7, dword ptr [rsp+0B8h+axis+10h]
    vaddss  xmm6, xmm4, xmm1
    vmulss  xmm1, xmm9, dword ptr [rsp+0B8h+axis+1Ch]
    vaddss  xmm4, xmm3, xmm2
    vmulss  xmm2, xmm7, dword ptr [rsp+0B8h+axis+14h]
    vmulss  xmm3, xmm8, dword ptr [rsp+0B8h+axis+8]
    vaddss  xmm5, xmm4, xmm1
    vmulss  xmm1, xmm9, dword ptr [rsp+0B8h+axis+20h]
    vmovss  dword ptr [rdi], xmm6
    vmovss  dword ptr [rdi+4], xmm5
    vaddss  xmm4, xmm3, xmm2
    vaddss  xmm2, xmm4, xmm1
    vmovss  dword ptr [rdi+8], xmm2
    vaddss  xmm0, xmm6, dword ptr [rbx+130h]
    vmovss  dword ptr [rdi], xmm0
    vaddss  xmm1, xmm5, dword ptr [rbx+134h]
    vmovss  dword ptr [rdi+4], xmm1
    vaddss  xmm0, xmm2, dword ptr [rbx+138h]
    vmovss  dword ptr [rdi+8], xmm0
  }
  _R11 = &v46;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
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
  vec3_t aabbMin; 
  vec3_t aabbMax; 

  _RBX = outBounds;
  if ( !outBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 299, ASSERT_TYPE_ASSERT, "(outBounds)", (const char *)&queryFormat, "outBounds") )
    __debugbreak();
  result = G_PhysicsObject_GetAABB(PHYSICS_WORLD_ID_FIRST, ent, &aabbMin, &aabbMax, 0);
  if ( result )
  {
    __asm
    {
      vmovss  xmm1, cs:__real@3f000000
      vmovaps [rsp+88h+var_18], xmm7
      vmovss  xmm7, dword ptr [rsp+88h+aabbMax+8]
      vmovaps [rsp+88h+var_28], xmm9
      vmovss  xmm9, dword ptr [rsp+88h+aabbMax+4]
      vmovaps [rsp+88h+var_38], xmm10
      vmovss  xmm10, dword ptr [rsp+88h+aabbMax]
      vaddss  xmm0, xmm10, dword ptr [rsp+88h+aabbMin]
      vmulss  xmm2, xmm0, xmm1
      vaddss  xmm0, xmm9, dword ptr [rsp+88h+aabbMin+4]
      vmulss  xmm3, xmm0, xmm1
      vaddss  xmm0, xmm7, dword ptr [rsp+88h+aabbMin+8]
      vmulss  xmm4, xmm0, xmm1
      vsubss  xmm1, xmm2, dword ptr [rsp+88h+aabbMin]
      vsubss  xmm0, xmm10, xmm2
      vmovaps xmm10, [rsp+88h+var_38]
      vmaxss  xmm1, xmm1, xmm0
      vmovss  dword ptr [rbx], xmm2
      vsubss  xmm2, xmm3, dword ptr [rsp+88h+aabbMin+4]
      vsubss  xmm0, xmm9, xmm3
      vmovaps xmm9, [rsp+88h+var_28]
      vmovss  dword ptr [rbx+4], xmm3
      vsubss  xmm3, xmm4, dword ptr [rsp+88h+aabbMin+8]
      vmovss  dword ptr [rbx+8], xmm4
      vmovss  dword ptr [rbx+0Ch], xmm1
      vmaxss  xmm1, xmm2, xmm0
      vsubss  xmm0, xmm7, xmm4
      vmovaps xmm7, [rsp+88h+var_18]
      vmovss  dword ptr [rbx+10h], xmm1
      vmaxss  xmm1, xmm3, xmm0
      vmovss  dword ptr [rbx+14h], xmm1
    }
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
  bool v4; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 v7; 
  const char *EntityTypeName; 
  const char *v11; 
  const char *v12; 
  unsigned __int16 v13; 
  XModel *Model; 
  int moverFlags; 
  const char *v37; 
  char *fmt; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  __int64 v42; 
  double v43; 
  __int64 v44; 
  __int64 v45; 
  double v46; 
  __int64 v47; 
  __int64 v48; 
  double v49; 
  char dest[1024]; 

  v4 = onlyPrintLeakedEnts;
  Com_Printf(15, "This function is DEPRECATED - USE dumpEntInfo Instead\n");
  v5 = 0;
  v6 = 0;
  if ( level.num_entities > 0 )
  {
    v7 = 0i64;
    __asm { vmovaps [rsp+4C8h+var_38], xmm6 }
    _RDI = 0i64;
    __asm
    {
      vmovaps [rsp+4C8h+var_48], xmm7
      vmovaps [rsp+4C8h+var_58], xmm8
    }
    do
    {
      if ( v6 >= 0x800 )
      {
        LODWORD(v40) = 2048;
        LODWORD(v39) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v39, v40) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[_RDI].r.isInUse != g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v7] )
      {
        _RBX = g_entities;
        if ( !v4 || g_entities[_RDI].s.eType != ET_PLAYER && (g_entities[_RDI].flags.m_flags[0] & 0x40000000) == 0 )
        {
          EntityTypeName = BG_GetEntityTypeName((const entityType_s)g_entities[_RDI].s.eType);
          v11 = SL_ConvertToStringSafe(_RBX[_RDI].classname);
          ++v5;
          v12 = SL_ConvertToStringSafe(_RBX[_RDI].targetname);
          if ( scr_const.script_model == _RBX[_RDI].classname && (v13 = _RBX[_RDI].model) != 0 )
          {
            __asm
            {
              vmovss  xmm6, dword ptr [rdi+rbx+138h]
              vmovss  xmm7, dword ptr [rdi+rbx+134h]
              vmovss  xmm8, dword ptr [rdi+rbx+130h]
              vcvtss2sd xmm6, xmm6, xmm6
              vcvtss2sd xmm7, xmm7, xmm7
              vcvtss2sd xmm8, xmm8, xmm8
            }
            Model = G_Utils_GetModel(v13);
            __asm
            {
              vmovsd  [rsp+4C8h+var_480], xmm6
              vmovsd  [rsp+4C8h+var_488], xmm7
              vmovsd  [rsp+4C8h+var_490], xmm8
            }
            Com_Printf(15, "%4i: Type: %s, Class: %s, Target: %s, model '%s', origin: %6.1f %6.1f %6.1f\n", v6, EntityTypeName, v11, v12, Model->name, v43, v46, v49);
          }
          else if ( (unsigned __int16)(_RBX[_RDI].s.eType - 8) <= 1u )
          {
            Core_strcpy(dest, 0x400ui64, "NULL");
            moverFlags = _RBX[_RDI].s.staticState.mover.moverFlags;
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
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+rbx+138h]
              vmovss  xmm1, dword ptr [rdi+rbx+134h]
              vmovss  xmm2, dword ptr [rdi+rbx+130h]
              vcvtss2sd xmm0, xmm0, xmm0
              vmovsd  [rsp+4C8h+var_488], xmm0
              vcvtss2sd xmm1, xmm1, xmm1
              vmovsd  [rsp+4C8h+var_490], xmm1
              vcvtss2sd xmm2, xmm2, xmm2
              vmovsd  [rsp+4C8h+var_498], xmm2
            }
            LODWORD(fmt) = moverFlags;
            Com_Printf(15, "%4i: Type: %s, ID:%4i, name: '%s', origin: %6.1f %6.1f %6.1f\n", v6, EntityTypeName, fmt, dest, v42, v45, v48);
          }
          else
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+rbx+138h]
              vmovss  xmm1, dword ptr [rdi+rbx+134h]
              vmovss  xmm2, dword ptr [rdi+rbx+130h]
              vcvtss2sd xmm0, xmm0, xmm0
              vmovsd  [rsp+4C8h+var_488], xmm0
              vcvtss2sd xmm1, xmm1, xmm1
              vmovsd  [rsp+4C8h+var_490], xmm1
              vcvtss2sd xmm2, xmm2, xmm2
              vmovsd  [rsp+4C8h+var_498], xmm2
            }
            Com_Printf(15, "%4i: Type: %s, Class: %s, Target: %s, origin: %6.1f %6.1f %6.1f\n", v6, EntityTypeName, v11, v12, v41, v44, v47);
          }
          v4 = onlyPrintLeakedEnts;
        }
      }
      ++v6;
      ++v7;
      ++_RDI;
    }
    while ( (int)v6 < level.num_entities );
    __asm
    {
      vmovaps xmm8, [rsp+4C8h+var_58]
      vmovaps xmm7, [rsp+4C8h+var_48]
      vmovaps xmm6, [rsp+4C8h+var_38]
    }
  }
  v37 = "%i new entities since baseline.\n";
  if ( !v4 )
    v37 = "%i total entities in use.\n";
  Com_Printf(15, v37, v5);
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
  __int128 v8; 

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
  LODWORD(v8) = 96;
  _RSI = 0x140000000ui64;
  s_cachedCompositeModelsSet[0].m_data[v2 >> 6] |= 0x8000000000000000ui64 >> (v2 & 0x3F);
  _RBX = 2 * v2;
  *((_QWORD *)&v8 + 1) = SV_Game_GetXCompositeModel(compositeModelName);
  __asm
  {
    vmovups xmm0, [rsp+58h+var_18]
    vmovups xmmword ptr rva s_cachedModels.assetType[rsi+rbx*8], xmm0
  }
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
  __int128 v8; 

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
  LODWORD(v8) = 9;
  _RSI = 0x140000000ui64;
  s_cachedModelsSet[0].m_data[v2 >> 6] |= 0x8000000000000000ui64 >> (v2 & 0x3F);
  _RBX = 2 * v2;
  *((_QWORD *)&v8 + 1) = SV_Game_GetXModel(modelName);
  __asm
  {
    vmovups xmm0, [rsp+58h+var_18]
    vmovups xmmword ptr rva s_cachedModels.assetType[rsi+rbx*8], xmm0
  }
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

gentity_s *__fastcall G_Utils_SpawnEventEntity(const vec3_t *origin, int event, double _XMM2_8)
{
  const char *EventTypeName; 
  int v23; 
  char *fmt; 
  __int64 v39; 
  int v40; 
  int v41; 
  int v42; 
  vec3_t origina; 

  _RBX = origin;
  if ( Sys_IsServerUserMoveWorker() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 2286, ASSERT_TYPE_ASSERT, "( !Sys_IsServerUserMoveWorker() )", (const char *)&queryFormat, "!Sys_IsServerUserMoveWorker()") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_Utils_SpawnEventEntity");
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  xmm1, dword ptr [rbx+4]
    vmovss  dword ptr [rsp+0A8h+origin], xmm0
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  dword ptr [rsp+0A8h+origin+8], xmm0
    vmovss  dword ptr [rsp+0A8h+origin+4], xmm1
  }
  if ( !SV_Game_CheckPointInPlayableBounds(&origina) )
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_18], xmm6
      vmovss  xmm6, dword ptr [rbx+8]
      vmovaps [rsp+0A8h+var_28], xmm7
      vmovss  xmm7, dword ptr [rbx+4]
      vmovaps [rsp+0A8h+var_38], xmm8
      vmovss  xmm8, dword ptr [rbx]
      vcvtss2sd xmm8, xmm8, xmm8
      vcvtss2sd xmm6, xmm6, xmm6
      vcvtss2sd xmm7, xmm7, xmm7
    }
    EventTypeName = BG_GetEventTypeName(event);
    __asm
    {
      vmovaps xmm3, xmm8
      vmovq   r9, xmm3
      vmovsd  [rsp+0A8h+var_80], xmm6
      vmovsd  [rsp+0A8h+fmt], xmm7
    }
    Com_PrintWarning(15, "G_TempEntity: Spawning event %s outside of map bounds at %f, %f, %f - we're moving it back into the playable area, so it won't be where you expected it to be\n", EventTypeName, _R9, fmt, v39);
    __asm
    {
      vmovaps xmm8, [rsp+0A8h+var_38]
      vmovaps xmm7, [rsp+0A8h+var_28]
      vmovaps xmm6, [rsp+0A8h+var_18]
    }
  }
  SV_Game_KeepPointInPlayableBounds(&origina);
  v23 = event + 29;
  _RBX = G_Utils_SpawnEntity();
  if ( (unsigned int)(v23 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum entityType_s __cdecl truncate_cast_impl<enum entityType_s,int>(int)", "signed", (__int16)v23, "signed", v23) )
    __debugbreak();
  _RBX->s.eType = v23;
  _RBX->r.eventTime = level.time;
  _RBX->r.eventTypeFlags = 1;
  __asm
  {
    vcvttss2si eax, dword ptr [rsp+0A8h+origin]
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vcvttss2si eax, dword ptr [rsp+0A8h+origin+4]
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, eax
    vcvttss2si eax, dword ptr [rsp+0A8h+origin+8]
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmovss  [rsp+0A8h+var_58], xmm0
    vmovss  dword ptr [rsp+0A8h+origin], xmm0
    vmovss  dword ptr [rsp+0A8h+origin+4], xmm2
    vmovss  dword ptr [rsp+0A8h+origin+8], xmm1
  }
  if ( (v40 & 0x7F800000) == 2139095040 )
    goto LABEL_23;
  __asm { vmovss  [rsp+0A8h+var_58], xmm2 }
  if ( (v41 & 0x7F800000) == 2139095040 )
    goto LABEL_23;
  __asm { vmovss  [rsp+0A8h+var_58], xmm1 }
  if ( (v42 & 0x7F800000) == 2139095040 )
  {
LABEL_23:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1621, ASSERT_TYPE_SANITY, "( !IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] )") )
      __debugbreak();
  }
  if ( _RBX->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1623, ASSERT_TYPE_ASSERT, "( !BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.pos ) )", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.pos )") )
      __debugbreak();
  }
  Trajectory_SetTrBase(&_RBX->s.lerp.pos, &origina);
  *(_QWORD *)&_RBX->s.lerp.pos.trType = 0i64;
  _RBX->s.lerp.pos.trDuration = 0;
  *(_QWORD *)_RBX->s.lerp.pos.trDelta.v = 0i64;
  _RBX->s.lerp.pos.trDelta.v[2] = 0.0;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0A8h+origin]
    vmovss  dword ptr [rbx+130h], xmm0
    vmovss  xmm1, dword ptr [rsp+0A8h+origin+4]
    vmovss  dword ptr [rbx+134h], xmm1
    vmovss  xmm0, dword ptr [rsp+0A8h+origin+8]
    vmovss  dword ptr [rbx+138h], xmm0
  }
  G_PhysicsObject_WarpToCurrentTransform(_RBX, 1);
  SV_LinkEntity(_RBX);
  Sys_ProfEndNamedEvent();
  return _RBX;
}

/*
==============
G_Utils_UpdateAnglesTrajectory
==============
*/
bool G_Utils_UpdateAnglesTrajectory(gentity_s *ent, const vec3_t *angles, const bool warpPhysics, const bool updateBroadphase)
{
  int v12; 
  int v13; 
  int v14; 

  _RDI = angles;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1733, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+48h+arg_10], xmm0
  }
  if ( (v12 & 0x7F800000) == 2139095040 )
    goto LABEL_20;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+48h+arg_10], xmm0
  }
  if ( (v13 & 0x7F800000) == 2139095040 )
    goto LABEL_20;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+48h+arg_10], xmm0
  }
  if ( (v14 & 0x7F800000) == 2139095040 )
  {
LABEL_20:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1734, ASSERT_TYPE_SANITY, "( !IS_NAN( ( angles )[0] ) && !IS_NAN( ( angles )[1] ) && !IS_NAN( ( angles )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( angles )[0] ) && !IS_NAN( ( angles )[1] ) && !IS_NAN( ( angles )[2] )") )
      __debugbreak();
  }
  if ( ent->s.lerp.apos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1736, ASSERT_TYPE_ASSERT, "( !BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.apos ) )", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.apos )") )
      __debugbreak();
  }
  Trajectory_SetTrBase(&ent->s.lerp.apos, _RDI);
  *(_QWORD *)&ent->s.lerp.apos.trTime = 0i64;
  *(_QWORD *)ent->s.lerp.apos.trDelta.v = 0i64;
  ent->s.lerp.apos.trDelta.v[2] = 0.0;
  ent->r.currentAngles.v[0] = _RDI->v[0];
  ent->r.currentAngles.v[1] = _RDI->v[1];
  ent->r.currentAngles.v[2] = _RDI->v[2];
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
  int v12; 
  int v13; 
  int v14; 

  _RDI = origin;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1710, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rsp+48h+arg_10], xmm0
  }
  if ( (v12 & 0x7F800000) == 2139095040 )
    goto LABEL_20;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rsp+48h+arg_10], xmm0
  }
  if ( (v13 & 0x7F800000) == 2139095040 )
    goto LABEL_20;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+48h+arg_10], xmm0
  }
  if ( (v14 & 0x7F800000) == 2139095040 )
  {
LABEL_20:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1711, ASSERT_TYPE_SANITY, "( !IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( origin )[0] ) && !IS_NAN( ( origin )[1] ) && !IS_NAN( ( origin )[2] )") )
      __debugbreak();
  }
  if ( ent->s.lerp.pos.trType == TR_ANIMATED_MOVER )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trajectory.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 1713, ASSERT_TYPE_ASSERT, "( !BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.pos ) )", (const char *)&queryFormat, "!BgTrajectory::IsAnimatedTrajectory( &ent->s.lerp.pos )") )
      __debugbreak();
  }
  Trajectory_SetTrBase(&ent->s.lerp.pos, _RDI);
  *(_QWORD *)&ent->s.lerp.pos.trTime = 0i64;
  *(_QWORD *)ent->s.lerp.pos.trDelta.v = 0i64;
  ent->s.lerp.pos.trDelta.v[2] = 0.0;
  ent->r.currentOrigin.v[0] = _RDI->v[0];
  ent->r.currentOrigin.v[1] = _RDI->v[1];
  ent->r.currentOrigin.v[2] = _RDI->v[2];
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

float __fastcall G_crandom(double _XMM0_8)
{
  __asm { vxorps  xmm0, xmm0, xmm0 }
  s_holdRand = 214013 * s_holdRand + 2531011;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm1, xmm0, cs:__real@38000000
    vmulss  xmm2, xmm1, cs:__real@40000000
    vsubss  xmm0, xmm2, cs:__real@3f800000
  }
  return *(float *)&_XMM0;
}

/*
==============
G_flrand
==============
*/

float __fastcall G_flrand(float min, double max, double _XMM2_8)
{
  __asm
  {
    vxorps  xmm2, xmm2, xmm2
    vsubss  xmm1, xmm1, xmm0
  }
  s_holdRand = 214013 * s_holdRand + 2531011;
  __asm
  {
    vcvtsi2ss xmm2, xmm2, eax
    vmulss  xmm2, xmm2, xmm1
    vmulss  xmm3, xmm2, cs:__real@38000000
    vaddss  xmm0, xmm3, xmm0
  }
  return *(float *)&_XMM0;
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

float __fastcall G_random(double _XMM0_8)
{
  __asm { vxorps  xmm0, xmm0, xmm0 }
  s_holdRand = 214013 * s_holdRand + 2531011;
  __asm
  {
    vcvtsi2ss xmm0, xmm0, eax
    vmulss  xmm0, xmm0, cs:__real@38000000
  }
  return *(float *)&_XMM0;
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

void __fastcall GUtils::GetPlayersInRadius(GUtils *this, const vec3_t *pos, double radius, unsigned int maxPlayersWanted, unsigned int *outNumPlayers, unsigned __int16 *outPlayerEntIds)
{
  unsigned int v11; 
  unsigned int maxclients; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm2, xmm0
    vmovaps [rsp+58h+var_28], xmm6
    vmovaps xmm6, xmm2
  }
  if ( !maxPlayersWanted && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3553, ASSERT_TYPE_ASSERT, "(maxPlayersWanted > 0)", (const char *)&queryFormat, "maxPlayersWanted > 0") )
    __debugbreak();
  if ( !outNumPlayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3554, ASSERT_TYPE_ASSERT, "(outNumPlayers)", (const char *)&queryFormat, "outNumPlayers") )
    __debugbreak();
  if ( !outPlayerEntIds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3555, ASSERT_TYPE_ASSERT, "(outPlayerEntIds)", (const char *)&queryFormat, "outPlayerEntIds") )
    __debugbreak();
  v11 = 0;
  *outNumPlayers = 0;
  maxclients = level.maxclients;
  __asm { vmulss  xmm6, xmm6, xmm6 }
  if ( level.maxclients )
  {
    _RDI = 0i64;
    do
    {
      if ( *outNumPlayers >= maxPlayersWanted )
        break;
      _RAX = g_entities;
      if ( g_entities[_RDI].r.isInUse )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+rax+130h]
          vsubss  xmm3, xmm0, dword ptr [r12]
          vmovss  xmm1, dword ptr [rdi+rax+134h]
          vsubss  xmm2, xmm1, dword ptr [r12+4]
          vmovss  xmm0, dword ptr [rdi+rax+138h]
          vsubss  xmm4, xmm0, dword ptr [r12+8]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vcomiss xmm2, xmm6
        }
        if ( !g_entities[_RDI].r.isInUse )
          outPlayerEntIds[(*outNumPlayers)++] = truncate_cast<unsigned short,unsigned int>(v11);
      }
      ++v11;
      ++_RDI;
    }
    while ( v11 < maxclients );
  }
  __asm { vmovaps xmm6, [rsp+58h+var_28] }
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
  int v13; 
  __int64 v15; 
  gentity_s *v16; 
  gclient_s *client; 
  int *ignoreEnts; 
  PhysicsQuery_Collected<unsigned short> *collectedEnts; 
  PhysicsQuery_Collected<unsigned short> v21; 
  vec3_t aabbMax; 
  vec3_t aabbMin; 
  __int16 v24[2048]; 

  __asm { vmovaps [rsp+10A8h+var_18], xmm6 }
  _RBX = worldBounds;
  if ( !worldBounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.cpp", 3588, ASSERT_TYPE_ASSERT, "(worldBounds)", (const char *)&queryFormat, "worldBounds") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, dword ptr [rbx]
    vsubss  xmm0, xmm6, dword ptr [rbx+0Ch]
    vmovss  xmm5, dword ptr [rbx+4]
    vmovss  xmm3, dword ptr [rbx+8]
    vaddss  xmm1, xmm6, dword ptr [rbx+0Ch]
    vmovss  dword ptr [rsp+10A8h+aabbMin], xmm0
    vsubss  xmm0, xmm5, dword ptr [rbx+10h]
    vmovss  dword ptr [rsp+10A8h+aabbMin+4], xmm0
    vsubss  xmm0, xmm3, dword ptr [rbx+14h]
    vmovss  dword ptr [rsp+10A8h+aabbMin+8], xmm0
    vaddss  xmm0, xmm5, dword ptr [rbx+10h]
    vmovss  dword ptr [rsp+10A8h+aabbMax], xmm1
    vaddss  xmm1, xmm3, dword ptr [rbx+14h]
  }
  v13 = 0;
  v21.ids = (unsigned __int16 *)v24;
  __asm
  {
    vmovss  dword ptr [rsp+10A8h+aabbMax+4], xmm0
    vmovss  dword ptr [rsp+10A8h+aabbMax+8], xmm1
  }
  v21.count = 0;
  v21.countMax = 2048;
  PhysicsQuery_ImmediateAABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, &aabbMin, &aabbMax, 33570816, 0, NULL, &v21, NULL, 1);
  __asm { vmovaps xmm6, [rsp+10A8h+var_18] }
  if ( !v21.count )
    return 0;
  while ( 1 )
  {
    v15 = (unsigned __int16)v24[v13];
    if ( (unsigned int)v15 >= 0x800 )
    {
      LODWORD(collectedEnts) = 2048;
      LODWORD(ignoreEnts) = (unsigned __int16)v24[v13];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", ignoreEnts, collectedEnts) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v16 = &g_entities[v15];
    client = v16->client;
    if ( client )
    {
      if ( client->ps.pm_type < 7 )
        break;
    }
    if ( v16->actor && v16->health > 0 )
      break;
    if ( ++v13 >= v21.count )
      return 0;
  }
  return 1;
}

