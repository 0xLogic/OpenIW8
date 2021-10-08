/*
==============
ScriptableCl_GetChangeQueue
==============
*/

ScriptableReadChangeQueue *__fastcall ScriptableCl_GetChangeQueue(const LocalClientNum_t localClientNum)
{
  return ?ScriptableCl_GetChangeQueue@@YAAEAUScriptableReadChangeQueue@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCl_ClearStandaloneEntityParentUpdate
==============
*/

void __fastcall ScriptableCl_ClearStandaloneEntityParentUpdate(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  ?ScriptableCl_ClearStandaloneEntityParentUpdate@@YAXW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_InitCounts
==============
*/

void __fastcall ScriptableCl_InitCounts(const unsigned int clientCount, const unsigned int agentCount)
{
  ?ScriptableCl_InitCounts@@YAXII@Z(clientCount, agentCount);
}

/*
==============
ScriptableCl_UpdateNonEntitySharedInstances
==============
*/

void __fastcall ScriptableCl_UpdateNonEntitySharedInstances(const LocalClientNum_t localClientNum)
{
  ?ScriptableCl_UpdateNonEntitySharedInstances@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCl_Spatial_ActiveList_GetAtIndex
==============
*/

unsigned int __fastcall ScriptableCl_Spatial_ActiveList_GetAtIndex(const LocalClientNum_t localClientNum, unsigned int activeIndex)
{
  return ?ScriptableCl_Spatial_ActiveList_GetAtIndex@@YAIW4LocalClientNum_t@@I@Z(localClientNum, activeIndex);
}

/*
==============
ScriptableCl_MarkStandaloneEntityParentUpdate
==============
*/

void __fastcall ScriptableCl_MarkStandaloneEntityParentUpdate(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const unsigned int entityIndex)
{
  ?ScriptableCl_MarkStandaloneEntityParentUpdate@@YAXW4LocalClientNum_t@@II@Z(localClientNum, scriptableIndex, entityIndex);
}

/*
==============
ScriptableCl_Shutdown
==============
*/

void __fastcall ScriptableCl_Shutdown(const LocalClientNum_t localClientNum)
{
  ?ScriptableCl_Shutdown@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCl_SetChangeQueueIndex
==============
*/

void __fastcall ScriptableCl_SetChangeQueueIndex(const LocalClientNum_t localClientNum, unsigned __int64 startIndex)
{
  ?ScriptableCl_SetChangeQueueIndex@@YAXW4LocalClientNum_t@@_K@Z(localClientNum, startIndex);
}

/*
==============
ScriptableCl_Spatial_DrawOverlay
==============
*/

void __fastcall ScriptableCl_Spatial_DrawOverlay(const LocalClientNum_t localClientNum)
{
  ?ScriptableCl_Spatial_DrawOverlay@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCl_GetLootTable
==============
*/

const BG_SpawnGroup_Loot_Table *__fastcall ScriptableCl_GetLootTable(const LocalClientNum_t localClientNum)
{
  return ?ScriptableCl_GetLootTable@@YAPEBUBG_SpawnGroup_Loot_Table@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCl_IsInitialized
==============
*/

bool __fastcall ScriptableCl_IsInitialized(const LocalClientNum_t localClientNum)
{
  return ?ScriptableCl_IsInitialized@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCl_CacheWorldStateSP
==============
*/

void __fastcall ScriptableCl_CacheWorldStateSP(const LocalClientNum_t localClientNum)
{
  ?ScriptableCl_CacheWorldStateSP@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCl_GetPartScriptedDefFromName
==============
*/

ScriptablePartDef *__fastcall ScriptableCl_GetPartScriptedDefFromName(const ScriptableContext context, const unsigned int scriptableIndex, const scr_string_t partName)
{
  return ?ScriptableCl_GetPartScriptedDefFromName@@YAPEAUScriptablePartDef@@W4ScriptableContext@@IW4scr_string_t@@@Z(context, scriptableIndex, partName);
}

/*
==============
ScriptableCl_GetStandaloneParentEntityNum
==============
*/

__int16 __fastcall ScriptableCl_GetStandaloneParentEntityNum(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_GetStandaloneParentEntityNum@@YAFW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_InitMemory
==============
*/

void __fastcall ScriptableCl_InitMemory(HunkUser *clHunkUser, const unsigned int maxLocalClients)
{
  ?ScriptableCl_InitMemory@@YAXPEAUHunkUser@@I@Z(clHunkUser, maxLocalClients);
}

/*
==============
ScriptableCl_Spatial_Update
==============
*/

void __fastcall ScriptableCl_Spatial_Update(const LocalClientNum_t localClientNum)
{
  ?ScriptableCl_Spatial_Update@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCl_IsLootCache
==============
*/

bool __fastcall ScriptableCl_IsLootCache(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_IsLootCache@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_InitEventParams
==============
*/

void __fastcall ScriptableCl_InitEventParams(const LocalClientNum_t localClientNum, ScriptableEventParams *outParams, const unsigned int scriptableIndex, const ScriptablePartDef *partDef)
{
  ?ScriptableCl_InitEventParams@@YAXW4LocalClientNum_t@@PEAUScriptableEventParams@@IPEBUScriptablePartDef@@@Z(localClientNum, outParams, scriptableIndex, partDef);
}

/*
==============
ScriptableCl_IsLootWeapon
==============
*/

bool __fastcall ScriptableCl_IsLootWeapon(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_IsLootWeapon@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_Spatial_ActiveList_GetCount
==============
*/

unsigned int __fastcall ScriptableCl_Spatial_ActiveList_GetCount(const LocalClientNum_t localClientNum)
{
  return ?ScriptableCl_Spatial_ActiveList_GetCount@@YAIW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCl_AssociateScriptMoverInstance
==============
*/

void __fastcall ScriptableCl_AssociateScriptMoverInstance(const LocalClientNum_t localClientNum, const centity_t *const cent)
{
  ?ScriptableCl_AssociateScriptMoverInstance@@YAXW4LocalClientNum_t@@QEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
ScriptableCl_GetLootItemWeaponHandleValidated
==============
*/

unsigned int __fastcall ScriptableCl_GetLootItemWeaponHandleValidated(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, bool warnIfInvalid)
{
  return ?ScriptableCl_GetLootItemWeaponHandleValidated@@YAIW4LocalClientNum_t@@I_N@Z(localClientNum, scriptableIndex, warnIfInvalid);
}

/*
==============
ScriptableCl_Spatial_UpdateOrigin
==============
*/

void __fastcall ScriptableCl_Spatial_UpdateOrigin(const LocalClientNum_t localClientNum, unsigned int scriptableIndex)
{
  ?ScriptableCl_Spatial_UpdateOrigin@@YAXW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_GetCallbackTable
==============
*/

ScriptableEventCallbackTable *__fastcall ScriptableCl_GetCallbackTable()
{
  return ?ScriptableCl_GetCallbackTable@@YAPEAUScriptableEventCallbackTable@@XZ();
}

/*
==============
ScriptableCl_ClearAllClientsAssociation
==============
*/

void __fastcall ScriptableCl_ClearAllClientsAssociation(const unsigned int scriptableIndex)
{
  ?ScriptableCl_ClearAllClientsAssociation@@YAXI@Z(scriptableIndex);
}

/*
==============
ScriptableCl_Spatial_MarkerAlloc
==============
*/

void __fastcall ScriptableCl_Spatial_MarkerAlloc(const LocalClientNum_t localClientNum, unsigned int scriptableIndex)
{
  ?ScriptableCl_Spatial_MarkerAlloc@@YAXW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableInstanceContextSecure::GetOrigin
==============
*/

void __fastcall ScriptableInstanceContextSecure::GetOrigin(ScriptableInstanceContextSecure *this, const unsigned int scriptableIndex, vec3_t *outOrigin)
{
  ?GetOrigin@ScriptableInstanceContextSecure@@QEBAXIAEATvec3_t@@@Z(this, scriptableIndex, outOrigin);
}

/*
==============
ScriptableCl_Spatial_Required
==============
*/

bool __fastcall ScriptableCl_Spatial_Required(const LocalClientNum_t localClientNum, unsigned int scriptableIndex)
{
  return ?ScriptableCl_Spatial_Required@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_Spatial_UpdateMarkerPartition
==============
*/

void __fastcall ScriptableCl_Spatial_UpdateMarkerPartition(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const unsigned int markerIndex, const unsigned int partitionIndex)
{
  ?ScriptableCl_Spatial_UpdateMarkerPartition@@YAXW4LocalClientNum_t@@III@Z(localClientNum, scriptableIndex, markerIndex, partitionIndex);
}

/*
==============
ScriptableCl_GetLootItemActiveAttachmentCount
==============
*/

unsigned int __fastcall ScriptableCl_GetLootItemActiveAttachmentCount(const BG_SpawnGroup_Loot_ItemDef *const lootItemDef)
{
  return ?ScriptableCl_GetLootItemActiveAttachmentCount@@YAIQEBUBG_SpawnGroup_Loot_ItemDef@@@Z(lootItemDef);
}

/*
==============
ScriptableCl_DestroyMemory
==============
*/

void ScriptableCl_DestroyMemory(void)
{
  ?ScriptableCl_DestroyMemory@@YAXXZ();
}

/*
==============
ScriptableCl_Spatial_Marked
==============
*/

bool __fastcall ScriptableCl_Spatial_Marked(const LocalClientNum_t localClientNum, unsigned int scriptableIndex)
{
  return ?ScriptableCl_Spatial_Marked@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_IsLoot
==============
*/

bool __fastcall ScriptableCl_IsLoot(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_IsLoot@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableInstanceContextSecure::SetOrigin
==============
*/

void __fastcall ScriptableInstanceContextSecure::SetOrigin(ScriptableInstanceContextSecure *this, const unsigned int scriptableIndex, const vec3_t *newOrigin)
{
  ?SetOrigin@ScriptableInstanceContextSecure@@QEAAXIAEBTvec3_t@@@Z(this, scriptableIndex, newOrigin);
}

/*
==============
ScriptableCl_IsNearChangeQueueOverflow
==============
*/

bool __fastcall ScriptableCl_IsNearChangeQueueOverflow(const LocalClientNum_t localClientNum)
{
  return ?ScriptableCl_IsNearChangeQueueOverflow@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCl_GetLootItemDefByName
==============
*/

const BG_SpawnGroup_Loot_ItemDef *__fastcall ScriptableCl_GetLootItemDefByName(const LocalClientNum_t localClientNum, const char *scriptableDefName)
{
  return ?ScriptableCl_GetLootItemDefByName@@YAPEBUBG_SpawnGroup_Loot_ItemDef@@W4LocalClientNum_t@@PEBD@Z(localClientNum, scriptableDefName);
}

/*
==============
ScriptableCl_IsLootWeaponWithInvalidHandleIndex
==============
*/

bool __fastcall ScriptableCl_IsLootWeaponWithInvalidHandleIndex(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_IsLootWeaponWithInvalidHandleIndex@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_UpdatePosition
==============
*/

void __fastcall ScriptableCl_UpdatePosition(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const centity_t *const cent)
{
  ?ScriptableCl_UpdatePosition@@YAXW4LocalClientNum_t@@IQEBUcentity_t@@@Z(localClientNum, scriptableIndex, cent);
}

/*
==============
ScriptableCl_ClearStandaloneUpdateLists
==============
*/

void __fastcall ScriptableCl_ClearStandaloneUpdateLists(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  ?ScriptableCl_ClearStandaloneUpdateLists@@YAXW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_RemoveNonSpatialLootInstance
==============
*/

void __fastcall ScriptableCl_RemoveNonSpatialLootInstance(const unsigned int removeIndex)
{
  ?ScriptableCl_RemoveNonSpatialLootInstance@@YAXI@Z(removeIndex);
}

/*
==============
ScriptableCl_ResetChangeQueue
==============
*/

void __fastcall ScriptableCl_ResetChangeQueue(const LocalClientNum_t localClientNum)
{
  ?ScriptableCl_ResetChangeQueue@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCl_ConvertStandaloneParentEntityPoseToWorldSpace
==============
*/

void __fastcall ScriptableCl_ConvertStandaloneParentEntityPoseToWorldSpace(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const centity_t *const parent, const vec3_t *localOrigin, const vec3_t *localAngles, vec3_t *outWorldOrigin, vec3_t *outWorldAngles)
{
  ?ScriptableCl_ConvertStandaloneParentEntityPoseToWorldSpace@@YAXW4LocalClientNum_t@@IQEBUcentity_t@@AEBTvec3_t@@2AEAT3@3@Z(localClientNum, scriptableIndex, parent, localOrigin, localAngles, outWorldOrigin, outWorldAngles);
}

/*
==============
ScriptableCl_GetCacheType
==============
*/

const BG_SpawnGroup_Loot_CacheType *__fastcall ScriptableCl_GetCacheType(const LocalClientNum_t localClientNum, const unsigned __int8 cacheTypeIndex)
{
  return ?ScriptableCl_GetCacheType@@YAPEBUBG_SpawnGroup_Loot_CacheType@@W4LocalClientNum_t@@E@Z(localClientNum, cacheTypeIndex);
}

/*
==============
ScriptableCl_GetLootItemRarityBeamFX
==============
*/

const FXRegisteredDef *__fastcall ScriptableCl_GetLootItemRarityBeamFX(const LocalClientNum_t localClientNum, const unsigned int rarity)
{
  return ?ScriptableCl_GetLootItemRarityBeamFX@@YAPEBVFXRegisteredDef@@W4LocalClientNum_t@@I@Z(localClientNum, rarity);
}

/*
==============
ScriptableCl_BeginFrame
==============
*/

void __fastcall ScriptableCl_BeginFrame(const LocalClientNum_t localClientNum, const int serverTime, bool killCamTransition)
{
  ?ScriptableCl_BeginFrame@@YAXW4LocalClientNum_t@@H_N@Z(localClientNum, serverTime, killCamTransition);
}

/*
==============
ScriptableCl_ValidateChecksum
==============
*/

void __fastcall ScriptableCl_ValidateChecksum(const LocalClientNum_t localClientNum, const unsigned __int64 changeReadIndex, const unsigned int svPartChecksum, const unsigned int svInstanceChecksum, const char *const debugText)
{
  ?ScriptableCl_ValidateChecksum@@YAXW4LocalClientNum_t@@_KIIQEBD@Z(localClientNum, changeReadIndex, svPartChecksum, svInstanceChecksum, debugText);
}

/*
==============
ScriptableCl_GetLootItemRarityTrailFX
==============
*/

const FXRegisteredDef *__fastcall ScriptableCl_GetLootItemRarityTrailFX(const LocalClientNum_t localClientNum, const unsigned int rarity)
{
  return ?ScriptableCl_GetLootItemRarityTrailFX@@YAPEBVFXRegisteredDef@@W4LocalClientNum_t@@I@Z(localClientNum, rarity);
}

/*
==============
ScriptableCl_GetLootItemDef
==============
*/

const BG_SpawnGroup_Loot_ItemDef *__fastcall ScriptableCl_GetLootItemDef(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_GetLootItemDef@@YAPEBUBG_SpawnGroup_Loot_ItemDef@@W4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_ShutdownCounts
==============
*/

void ScriptableCl_ShutdownCounts(void)
{
  ?ScriptableCl_ShutdownCounts@@YAXXZ();
}

/*
==============
ScriptableCl_ShutdownInstance
==============
*/

void __fastcall ScriptableCl_ShutdownInstance(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const bool clearCache)
{
  ?ScriptableCl_ShutdownInstance@@YAXW4LocalClientNum_t@@I_N@Z(localClientNum, scriptableIndex, clearCache);
}

/*
==============
ScriptableCl_AddNonSpatialLootInstance
==============
*/

void __fastcall ScriptableCl_AddNonSpatialLootInstance(const unsigned int scriptableIndex)
{
  ?ScriptableCl_AddNonSpatialLootInstance@@YAXI@Z(scriptableIndex);
}

/*
==============
ScriptableCl_Spatial_MarkerFree
==============
*/

void __fastcall ScriptableCl_Spatial_MarkerFree(const LocalClientNum_t localClientNum, unsigned int scriptableIndex)
{
  ?ScriptableCl_Spatial_MarkerFree@@YAXW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCL_SetWorldStateMyChanges
==============
*/

void __fastcall ScriptableCL_SetWorldStateMyChanges(const LocalClientNum_t localClientNum, const ScriptableReplicatedInstance *instances, const unsigned int instanceCount, const ScriptablePartWorldState *partWorldState, const unsigned __int64 serverWriteIndex)
{
  ?ScriptableCL_SetWorldStateMyChanges@@YAXW4LocalClientNum_t@@PEBUScriptableReplicatedInstance@@IAEBUScriptablePartWorldState@@_K@Z(localClientNum, instances, instanceCount, partWorldState, serverWriteIndex);
}

/*
==============
ScriptableCl_UpdateParentedTransforms
==============
*/

void __fastcall ScriptableCl_UpdateParentedTransforms(const LocalClientNum_t localClientNum, const centity_t *const cent)
{
  ?ScriptableCl_UpdateParentedTransforms@@YAXW4LocalClientNum_t@@QEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
ScriptableCl_Debug_DrawLoot
==============
*/

void __fastcall ScriptableCl_Debug_DrawLoot(const LocalClientNum_t localClientNum)
{
  ?ScriptableCl_Debug_DrawLoot@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCl_GetLootItemRarityColor
==============
*/

unsigned int __fastcall ScriptableCl_GetLootItemRarityColor(const LocalClientNum_t localClientNum, const unsigned int rarity)
{
  return ?ScriptableCl_GetLootItemRarityColor@@YAIW4LocalClientNum_t@@I@Z(localClientNum, rarity);
}

/*
==============
ScriptableCl_InitMyChanges
==============
*/

void __fastcall ScriptableCl_InitMyChanges(const LocalClientNum_t localClientNum)
{
  ?ScriptableCl_InitMyChanges@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCl_ApplyChanges
==============
*/

void __fastcall ScriptableCl_ApplyChanges(const LocalClientNum_t localClientNum, const unsigned __int64 changeStartIndex, const unsigned __int64 changeTargetIndex)
{
  ?ScriptableCl_ApplyChanges@@YAXW4LocalClientNum_t@@_K1@Z(localClientNum, changeStartIndex, changeTargetIndex);
}

/*
==============
ScriptableCl_AnimNotetrackEvent
==============
*/

void __fastcall ScriptableCl_AnimNotetrackEvent(const LocalClientNum_t localClientNum, const int sourceEntityNum, const char *note)
{
  ?ScriptableCl_AnimNotetrackEvent@@YAXW4LocalClientNum_t@@HPEBD@Z(localClientNum, sourceEntityNum, note);
}

/*
==============
ScriptableCl_Init
==============
*/

void __fastcall ScriptableCl_Init(const LocalClientNum_t localClientNum)
{
  ?ScriptableCl_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCl_MarkClientUpdateRequired
==============
*/

void __fastcall ScriptableCl_MarkClientUpdateRequired(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptableUpdateType updateType)
{
  ?ScriptableCl_MarkClientUpdateRequired@@YAXW4LocalClientNum_t@@IW4ScriptableUpdateType@@@Z(localClientNum, scriptableIndex, updateType);
}

/*
==============
ScriptableCl_UpdateClientInstances
==============
*/

void __fastcall ScriptableCl_UpdateClientInstances(const LocalClientNum_t localClientNum, const int frameTime)
{
  ?ScriptableCl_UpdateClientInstances@@YAXW4LocalClientNum_t@@H@Z(localClientNum, frameTime);
}

/*
==============
ScriptableCl_GetCache
==============
*/

const BG_SpawnGroup_Loot_Cache *__fastcall ScriptableCl_GetCache(const LocalClientNum_t localClientNum, const unsigned int scriptableInstanceIndex, const unsigned __int8 setIndex)
{
  return ?ScriptableCl_GetCache@@YAPEBUBG_SpawnGroup_Loot_Cache@@W4LocalClientNum_t@@IE@Z(localClientNum, scriptableInstanceIndex, setIndex);
}

/*
==============
ScriptableCl_SetWorldStateSP
==============
*/

void __fastcall ScriptableCl_SetWorldStateSP(const LocalClientNum_t localClientNum, const ScriptableReplicatedInstance *rpActiveInstances, const unsigned int rpActiveInstanceCount, const ScriptablePartWorldState *partWorldState)
{
  ?ScriptableCl_SetWorldStateSP@@YAXW4LocalClientNum_t@@PEBUScriptableReplicatedInstance@@IPEBUScriptablePartWorldState@@@Z(localClientNum, rpActiveInstances, rpActiveInstanceCount, partWorldState);
}

/*
==============
ScriptableCl_UpdateSharedInstance
==============
*/

void __fastcall ScriptableCl_UpdateSharedInstance(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const unsigned int entityIndex)
{
  ?ScriptableCl_UpdateSharedInstance@@YAXW4LocalClientNum_t@@II@Z(localClientNum, scriptableIndex, entityIndex);
}

/*
==============
ScriptableCl_QueueClientCollisionUpdate
==============
*/

bool __fastcall ScriptableCl_QueueClientCollisionUpdate(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptableCollisionUpdateType updateType)
{
  return ?ScriptableCl_QueueClientCollisionUpdate@@YA_NW4LocalClientNum_t@@IW4ScriptableCollisionUpdateType@@@Z(localClientNum, scriptableIndex, updateType);
}

/*
==============
ScriptableCl_SetLootWeaponMapIndicies
==============
*/

void __fastcall ScriptableCl_SetLootWeaponMapIndicies(const LocalClientNum_t localClientNum)
{
  ?ScriptableCl_SetLootWeaponMapIndicies@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableClSP_ArchiveState
==============
*/

void __fastcall ScriptableClSP_ArchiveState(MemoryFile *memFile)
{
  ?ScriptableClSP_ArchiveState@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
ScriptableCl_GetState
==============
*/
__int64 ScriptableCl_GetState(ScriptableEventParams *eventParams)
{
  LocalClientNum_t v2; 
  ScriptablePartRuntime *PartRuntime; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4727, ASSERT_TYPE_ASSERT, "(eventParams)", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  if ( !eventParams->partDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4728, ASSERT_TYPE_ASSERT, "(eventParams->partDef)", (const char *)&queryFormat, "eventParams->partDef") )
    __debugbreak();
  v2 = ScriptableCl_ContextToLocalClient((const ScriptableContext)eventParams->context);
  PartRuntime = ScriptableCl_GetPartRuntime(v2, eventParams->scriptableIndex, eventParams->partDef);
  if ( PartRuntime )
    return PartRuntime->stateId;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4735, ASSERT_TYPE_ASSERT, "(partRuntime)", (const char *)&queryFormat, "partRuntime") )
    __debugbreak();
  return MEMORY[0];
}

/*
==============
ScriptableCl_SetState
==============
*/
void ScriptableCl_SetState(ScriptableEventParams *eventParams, unsigned int newState)
{
  __int64 v3; 
  LocalClientNum_t v5; 
  unsigned int scriptableIndex; 
  __int64 v7; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  int v9; 
  const char *v10; 
  ScriptablePartRuntime *PartRuntime; 
  const ScriptablePartDef *partDef; 
  __int64 v13; 
  const ScriptableDef *def; 
  unsigned int LinkObject; 
  cg_t *LocalClientGlobals; 
  ScriptableLinkType LinkType; 
  Scriptable_Analytics_Zone v22; 

  v3 = newState;
  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4746, ASSERT_TYPE_ASSERT, "(eventParams)", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  if ( !eventParams->partDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4747, ASSERT_TYPE_ASSERT, "(eventParams->partDef)", (const char *)&queryFormat, "eventParams->partDef") )
    __debugbreak();
  v5 = ScriptableCl_ContextToLocalClient((const ScriptableContext)eventParams->context);
  scriptableIndex = eventParams->scriptableIndex;
  v7 = v5;
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(v5, scriptableIndex);
  if ( (unsigned int)v3 >= eventParams->partDef->numStates )
  {
    v9 = ScriptableCl_GetLinkType((const LocalClientNum_t)v7, scriptableIndex) == SCRIPTABLE_LINK_ENTITY ? ScriptableCl_GetEntity((const LocalClientNum_t)v7, scriptableIndex)->nextState.eType : -1;
    v10 = InstanceCommonContext->def ? InstanceCommonContext->def->name : "Unknown";
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4753, ASSERT_TYPE_ASSERT, "(newState >= 0 && newState < eventParams->partDef->numStates)", "%s\n\tnewState is %i and the range is 0..%i.  Def is %s.  EType is %i.\n", "newState >= 0 && newState < eventParams->partDef->numStates", v3, eventParams->partDef->numStates, v10, v9) )
      __debugbreak();
  }
  PartRuntime = ScriptableCl_GetPartRuntime((const LocalClientNum_t)v7, scriptableIndex, eventParams->partDef);
  if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4757, ASSERT_TYPE_ASSERT, "(partRuntime)", (const char *)&queryFormat, "partRuntime") )
    __debugbreak();
  PartRuntime->stateId = truncate_cast<unsigned short,unsigned int>(v3);
  partDef = eventParams->partDef;
  v13 = (__int64)&partDef->states[v3];
  if ( (*(_DWORD *)(v13 + 8) & 0x80) != 0 )
  {
    if ( *(_DWORD *)(v13 + 24) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4767, ASSERT_TYPE_ASSERT, "(stateDef->type == Scriptable_StateType_Health)", (const char *)&queryFormat, "stateDef->type == Scriptable_StateType_Health") )
      __debugbreak();
    _R14 = eventParams->partDef->eventStreamBufferOffsetClient;
    if ( _R14 + 4 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4771, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
      __debugbreak();
    _RAX = InstanceCommonContext->eventStreamBuffer;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbp+28h]
      vmovss  dword ptr [r14+rax], xmm0
    }
    partDef = eventParams->partDef;
  }
  if ( (partDef->flags & 0x200) != 0 && ScriptableCl_IsLinked((const LocalClientNum_t)v7, scriptableIndex) )
  {
    def = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v7, scriptableIndex)->def;
    if ( !ScriptableDef_HasServerInstance(def) || ScriptableDef_IsStandaloneRequested(def) )
    {
      ScriptableCl_RefreshNonEntityPerFrameUpdateList((const LocalClientNum_t)v7, scriptableIndex, def, (const ScriptableStateDef *)v13);
    }
    else if ( ScriptableCl_GetLinkTypeEquals((const LocalClientNum_t)v7, scriptableIndex, SCRIPTABLE_LINK_ENTITY) )
    {
      LinkObject = ScriptableCl_GetLinkObject((const LocalClientNum_t)v7, scriptableIndex);
      if ( (*(_DWORD *)(v13 + 8) & 0x200) != 0 )
        ScriptableCl_InterlockedBitSetTo(&s_scriptableCl_updateNeededEntitiesBits[v7], LinkObject, 1);
    }
  }
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
  ScriptableBg_DebugTrackStateChange(0, scriptableIndex, eventParams->partDef->flatId, v3, LocalClientGlobals->time);
  LinkType = ScriptableCl_GetLinkType((const LocalClientNum_t)v7, scriptableIndex);
  if ( LinkType == SCRIPTABLE_LINK_ENTITY )
  {
    ScriptableCommon_AssertCountsInitialized();
    v22 = Scriptable_Analytics_Zone_SC_Clipmap_C;
    if ( scriptableIndex < g_scriptableWorldCounts.runtimeInstanceCount )
      v22 = Scriptable_Analytics_Zone_SC_Reserved_C;
  }
  else
  {
    if ( LinkType != SCRIPTABLE_LINK_DYNENT )
      return;
    v22 = Scriptable_Analytics_Zone_C_Clipmap;
  }
  Scriptable_Analytics_AddStateChangeCount(v22, 1);
}

/*
==============
ScriptableCl_ShutdownStateEvents
==============
*/
void ScriptableCl_ShutdownStateEvents(ScriptableEventParams *eventParams)
{
  LocalClientNum_t v2; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4835, ASSERT_TYPE_ASSERT, "(eventParams)", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  v2 = ScriptableCl_ContextToLocalClient((const ScriptableContext)eventParams->context);
  ScriptableCl_ShutdownActiveEvents(v2, eventParams);
}

/*
==============
ScriptableCl_RunStateEvents
==============
*/
void ScriptableCl_RunStateEvents(ScriptableEventParams *eventParams, bool onTime)
{
  LocalClientNum_t v4; 
  unsigned int holdrand; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4851, ASSERT_TYPE_ASSERT, "(eventParams)", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  v4 = ScriptableCl_ContextToLocalClient((const ScriptableContext)eventParams->context);
  holdrand = ScriptableCl_GenerateRandSeed(v4, eventParams->scriptableIndex);
  ScriptableCl_RunStateEvents_All(v4, eventParams, &holdrand, onTime);
}

/*
==============
ScriptableCl_DamagePartCallback
==============
*/
void ScriptableCl_DamagePartCallback(const ScriptableEventParams *eventParams, const ScriptablePartDef *def, const unsigned int damageTypeFlags, const unsigned int damage)
{
  ScriptableCl_DamagePart(eventParams, def, NULL, NULL, damageTypeFlags, damage);
}

/*
==============
ScriptableCl_FindParentDamagePartName
==============
*/
__int64 ScriptableCl_FindParentDamagePartName(const ScriptableEventParams *eventParams, scr_string_t partName)
{
  LocalClientNum_t v4; 
  unsigned int scriptableIndex; 
  LocalClientNum_t v6; 
  const ScriptableInstanceContextSecure *InstanceCommonContext; 
  const XModel *ScriptableModel; 
  centity_t *Entity; 
  DObj *ClientDObj; 
  int v11; 
  __int64 v12; 
  scr_string_t *boneNames; 
  int v14; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4874, ASSERT_TYPE_ASSERT, "(eventParams)", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  v4 = ScriptableCl_ContextToLocalClient((const ScriptableContext)eventParams->context);
  scriptableIndex = eventParams->scriptableIndex;
  v6 = v4;
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(v4, scriptableIndex);
  ScriptableModel = BG_XCompositeModel_GetScriptableModel(InstanceCommonContext);
  if ( ScriptableModel || (Entity = ScriptableCl_GetEntity(v6, scriptableIndex)) != NULL && (ClientDObj = Com_GetClientDObj(Entity->nextState.number, v6)) != NULL && ClientDObj->numModels && (ScriptableModel = *ClientDObj->models) != NULL )
  {
    v11 = 0;
    v12 = 0i64;
    while ( v11 < ScriptableModel->numBones )
    {
      boneNames = ScriptableModel->boneNames;
      if ( partName == boneNames[v12] )
      {
        if ( v11 )
        {
          v14 = v11 - ScriptableModel->parentList[v11 - ScriptableModel->numRootBones];
          if ( v14 != v11 )
            return (unsigned int)boneNames[v14];
        }
        return 0i64;
      }
      ++v11;
      ++v12;
    }
  }
  return 0i64;
}

/*
==============
ScriptableCl_IsPlayerDamage
==============
*/
_BOOL8 ScriptableCl_IsPlayerDamage(const ScriptableContext context, const entityState_t *attackerEntState)
{
  if ( !attackerEntState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4926, ASSERT_TYPE_ASSERT, "(attackerEntState)", (const char *)&queryFormat, "attackerEntState") )
    __debugbreak();
  return attackerEntState->number < cls.maxClients;
}

/*
==============
ScriptableInstanceContextSecure::GetOrigin
==============
*/
void ScriptableInstanceContextSecure::GetOrigin(ScriptableInstanceContextSecure *this, const unsigned int scriptableIndex, vec3_t *outOrigin)
{
  vec3_t *p_origin; 
  float v7; 
  float v8; 
  unsigned int v9; 
  unsigned int v10; 
  int v14; 
  int v15; 
  int v16; 
  __int64 v17; 

  _RSI = outOrigin;
  ScriptableCommon_AssertCountsInitialized();
  p_origin = &this->origin;
  if ( scriptableIndex >= g_scriptableWorldCounts.runtimeInstanceCount )
  {
    _RSI->v[0] = p_origin->v[0];
    _RSI->v[1] = this->origin.v[1];
    _RSI->v[2] = this->origin.v[2];
  }
  else
  {
    v7 = this->origin.v[1];
    v8 = p_origin->v[0];
    v9 = s_scriptable_aab_Y;
    v10 = s_scriptable_aab_X;
    LODWORD(_RSI->v[2]) = LODWORD(v7) ^ s_scriptable_aab_Z ^ (unsigned int)p_origin ^ LODWORD(p_origin->v[2]);
    LODWORD(_RSI->v[1]) = v9 ^ LODWORD(v8) ^ LODWORD(v7) ^ (unsigned int)p_origin;
    memset(&v17, 0, sizeof(v17));
    LODWORD(_RSI->v[0]) = LODWORD(v8) ^ (unsigned int)p_origin ^ ~v10;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi]
      vmovss  [rsp+38h+arg_8], xmm0
    }
    if ( (v14 & 0x7F800000) == 2139095040 )
      goto LABEL_10;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+4]
      vmovss  [rsp+38h+arg_8], xmm0
    }
    if ( (v15 & 0x7F800000) == 2139095040 )
      goto LABEL_10;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+8]
      vmovss  [rsp+38h+arg_8], xmm0
    }
    if ( (v16 & 0x7F800000) == 2139095040 )
    {
LABEL_10:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 448, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
        __debugbreak();
    }
  }
}

/*
==============
ScriptableCL_AllocateWorldBuffers
==============
*/
void ScriptableCL_AllocateWorldBuffers(const LocalClientNum_t localClientNum, HunkUser *hunkUser)
{
  __int64 v3; 
  ScriptablePartWorldState **v4; 
  ScriptablePartWorldState **v5; 
  const ScriptableReplicatedLimits *ReplicatedLimits; 
  unsigned int ReplicatedInstanceLimit; 
  unsigned int partTotalLimit; 
  unsigned int v9; 
  ScriptablePartWorldState *v10; 
  ScriptableReplicatedInstance *v11; 
  ScriptablePartData *v12; 
  ScriptablePartWorldState *v13; 
  ScriptableReplicatedInstance *v14; 
  ScriptablePartData *v15; 

  v3 = localClientNum;
  if ( !g_scriptableCl_replicatedLimits.partTotalLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 715, ASSERT_TYPE_ASSERT, "(g_scriptableCl_replicatedLimits.partTotalLimit > 0)", "%s\n\tMust call initcounts before allocating memory buffers", "g_scriptableCl_replicatedLimits.partTotalLimit > 0") )
    __debugbreak();
  v4 = (ScriptablePartWorldState **)&s_scriptableCl_worldCurrent[v3];
  if ( *v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 716, ASSERT_TYPE_ASSERT, "(s_scriptableCl_worldCurrent[localClientNum] == nullptr)", (const char *)&queryFormat, "s_scriptableCl_worldCurrent[localClientNum] == nullptr") )
    __debugbreak();
  v5 = (ScriptablePartWorldState **)&s_scriptableCl_spWorldCached[v3];
  if ( *v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 717, ASSERT_TYPE_ASSERT, "(s_scriptableCl_spWorldCached[localClientNum] == nullptr)", (const char *)&queryFormat, "s_scriptableCl_spWorldCached[localClientNum] == nullptr") )
    __debugbreak();
  ReplicatedLimits = ScriptableCl_GetReplicatedLimits();
  ReplicatedInstanceLimit = ScriptableCl_GetReplicatedInstanceLimit();
  partTotalLimit = g_scriptableCl_replicatedLimits.partTotalLimit;
  v9 = ReplicatedInstanceLimit;
  v10 = (ScriptablePartWorldState *)Mem_HunkUser_AllocInternal(hunkUser, 0x20ui64, 8ui64, "ScriptableCL_AllocateWorldBuffers");
  *v4 = v10;
  v10->groups[0].partData = NULL;
  v10->groups[1].partData = NULL;
  v10[1].groups[0].partData = NULL;
  v10[1].groups[1].partData = NULL;
  v11 = (ScriptableReplicatedInstance *)Mem_HunkUser_AllocInternal(hunkUser, 32 * v9, 8ui64, "ScriptableCL_AllocateWorldBuffers");
  ScriptableCommon_ClearReplicatedInstances(v11, v9);
  (*v4)->groups[0].partData = (ScriptablePartData *)v11;
  v12 = (ScriptablePartData *)Mem_HunkUser_AllocInternal(hunkUser, partTotalLimit, 0x10ui64, "ScriptableCL_AllocateWorldBuffers");
  memset_0(v12, 0, partTotalLimit);
  ScriptableCommon_SetupPartWorldState(ReplicatedLimits, v12, partTotalLimit, *v4 + 1);
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) )
  {
    v13 = (ScriptablePartWorldState *)Mem_HunkUser_AllocInternal(hunkUser, 0x20ui64, 8ui64, "ScriptableCL_AllocateWorldBuffers");
    *v5 = v13;
    v13->groups[0].partData = NULL;
    v13->groups[1].partData = NULL;
    v13[1].groups[0].partData = NULL;
    v13[1].groups[1].partData = NULL;
    v14 = (ScriptableReplicatedInstance *)Mem_HunkUser_AllocInternal(hunkUser, 32 * v9, 8ui64, "ScriptableCL_AllocateWorldBuffers");
    ScriptableCommon_ClearReplicatedInstances(v14, v9);
    (*v5)->groups[0].partData = (ScriptablePartData *)v14;
    v15 = (ScriptablePartData *)Mem_HunkUser_AllocInternal(hunkUser, partTotalLimit, 0x10ui64, "ScriptableCL_AllocateWorldBuffers");
    memset_0(v15, 0, partTotalLimit);
    ScriptableCommon_SetupPartWorldState(ReplicatedLimits, v15, partTotalLimit, *v5 + 1);
  }
}

/*
==============
ScriptableCL_AssignAllMoverEntitiesMyChanges
==============
*/
void ScriptableCL_AssignAllMoverEntitiesMyChanges(const LocalClientNum_t localClientNum)
{
  signed int v2; 
  CgEntitySystem **v3; 
  const centity_t *v4; 
  __int64 v5; 
  __int64 v6; 
  unsigned int scriptableIndex; 

  v2 = 0;
  v3 = &CgEntitySystem::ms_entitySystemArray[localClientNum];
  do
  {
    if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    {
      LODWORD(v6) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v6) )
        __debugbreak();
    }
    if ( localClientNum >= (unsigned int)CgEntitySystem::ms_allocatedCount )
    {
      LODWORD(v6) = CgEntitySystem::ms_allocatedCount;
      LODWORD(v5) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v5, v6) )
        __debugbreak();
    }
    if ( !*v3 )
    {
      LODWORD(v6) = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v6) )
        __debugbreak();
    }
    v4 = &(*v3)->m_entities[v2];
    if ( ((*v3)->m_entities[v2].flags & 1) != 0 && ScriptableCl_IsScriptableMoverEntityState(&(*v3)->m_entities[v2].nextState) )
    {
      if ( !ScriptableCl_IsScriptableMoverEntityState(&v4->nextState) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4298, ASSERT_TYPE_ASSERT, "(ScriptableCl_IsScriptableMoverEntityState( &cent->nextState ))", (const char *)&queryFormat, "ScriptableCl_IsScriptableMoverEntityState( &cent->nextState )") )
        __debugbreak();
      if ( !ScriptableCl_GetIndexForEntity(localClientNum, v4, &scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4300, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetIndexForEntity( localClientNum, cent, &scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetIndexForEntity( localClientNum, cent, &scriptableIndex )") )
        __debugbreak();
      ScriptableCl_SetLink(localClientNum, scriptableIndex, SCRIPTABLE_LINK_ENTITY, v4->nextState.number);
    }
    ++v2;
  }
  while ( (unsigned int)v2 < 0x7FE );
}

/*
==============
ScriptableCL_CopyPartWorldState
==============
*/
void ScriptableCL_CopyPartWorldState(const ScriptablePartWorldState *r_from, ScriptablePartWorldState *r_dest)
{
  ScriptableReplicatedLimits *v2; 
  signed __int64 v3; 
  const ScriptablePartWorldState *v4; 
  __int64 v5; 

  v2 = &g_scriptableCl_replicatedLimits;
  v3 = (char *)r_dest - (char *)r_from;
  v4 = r_from;
  v5 = 2i64;
  do
  {
    if ( !*(ScriptablePartData **)((char *)&v4->groups[0].partData + v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4404, ASSERT_TYPE_ASSERT, "(r_destGroup.partData)", (const char *)&queryFormat, "r_destGroup.partData") )
      __debugbreak();
    if ( !v4->groups[0].partData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4405, ASSERT_TYPE_ASSERT, "(r_fromGroup.partData)", (const char *)&queryFormat, "r_fromGroup.partData") )
      __debugbreak();
    memcpy_0(*(void **)((char *)&v4->groups[0].partData + v3), v4->groups[0].partData, v2->partWorldLimits[0]);
    v4 = (const ScriptablePartWorldState *)((char *)v4 + 8);
    v2 = (ScriptableReplicatedLimits *)((char *)v2 + 4);
    --v5;
  }
  while ( v5 );
}

/*
==============
ScriptableCL_ModifiedSnapshotInstance
==============
*/
void ScriptableCL_ModifiedSnapshotInstance(const LocalClientNum_t localClientNum, const ScriptableReplicatedInstance *instance)
{
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  unsigned int v23; 
  const centity_t *Entity; 
  __int64 instanceIndex; 
  const dvar_t *v26; 
  ScriptableStandaloneParentData *StandaloneEntityParentData; 
  unsigned __int16 extraPayload; 
  unsigned __int16 payload; 
  unsigned int v30; 
  ScriptableInstanceContextSecure *v31; 
  vec3_t *outWorldOrigin; 
  vec3_t *outWorldAngles; 
  int v34; 
  int v35; 
  vec3_t origin; 
  __int64 v37; 
  vec3_t angles; 

  v37 = -2i64;
  if ( !instance->replicatedType[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3876, ASSERT_TYPE_ASSERT, "(instance.replicatedType != ScriptableReplicatedType::ENTITY)", (const char *)&queryFormat, "instance.replicatedType != ScriptableReplicatedType::ENTITY") )
    __debugbreak();
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, instance->instanceIndex);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
    vmovss  dword ptr [rsp+0A8h+origin], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
    vmovss  dword ptr [rsp+0A8h+origin+4], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rdx
    vmovss  dword ptr [rsp+0A8h+origin+8], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  xmm2, cs:__real@3bb40000
    vmulss  xmm0, xmm0, xmm2
    vmovss  dword ptr [rsp+0A8h+angles], xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmulss  xmm0, xmm1, xmm2
    vmovss  dword ptr [rsp+0A8h+angles+4], xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, eax
    vmulss  xmm0, xmm1, xmm2
    vmovss  dword ptr [rsp+0A8h+angles+8], xmm0
  }
  if ( instance->parent.m_data )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_IN|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3887, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SCRIPTABLE_PARENT_ENTITIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SCRIPTABLE_PARENT_ENTITIES )") )
      __debugbreak();
    if ( !instance->parent.m_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 323, ASSERT_TYPE_ASSERT, "(HasEntity())", (const char *)&queryFormat, "HasEntity()") )
      __debugbreak();
    v23 = (unsigned __int16)(instance->parent.m_data - 1);
    Entity = CG_GetEntity(localClientNum, v23);
    ScriptableCl_SetInitialOriginAndAngles(localClientNum, instance->instanceIndex, &origin, &angles);
    ScriptableCl_ConvertStandaloneParentEntityPoseToWorldSpace(localClientNum, instance->instanceIndex, Entity, &origin, &angles, &origin, &angles);
    if ( (*((_BYTE *)InstanceCommonContext + 60) & 0x20) != 0 )
    {
      instanceIndex = instance->instanceIndex;
      ScriptableCommon_AssertCountsInitialized();
      if ( (unsigned int)instanceIndex >= g_scriptableWorldCounts.runtimeInstanceCount )
      {
        ScriptableCommon_AssertCountsInitialized();
        LODWORD(outWorldAngles) = g_scriptableWorldCounts.runtimeInstanceCount;
        LODWORD(outWorldOrigin) = instanceIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3545, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetReservedInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetReservedInstanceCount()\n\t%i not in [0, %i)", outWorldOrigin, outWorldAngles) )
          __debugbreak();
      }
      if ( !ScriptableCl_IsStandaloneServerInstance(localClientNum, instanceIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3546, ASSERT_TYPE_ASSERT, "(ScriptableCl_IsStandaloneServerInstance( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_IsStandaloneServerInstance( localClientNum, scriptableIndex )") )
        __debugbreak();
      v26 = DVARBOOL_scriptable_entity_parenting;
      if ( !DVARBOOL_scriptable_entity_parenting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_entity_parenting") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v26);
      if ( v26->current.enabled )
      {
        StandaloneEntityParentData = ScriptableCl_GetStandaloneEntityParentData(localClientNum);
        if ( (unsigned int)instanceIndex >= 0x800 )
        {
          LODWORD(outWorldAngles) = 2048;
          LODWORD(outWorldOrigin) = instanceIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3556, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ( sizeof( *array_counter( parentData.m_parentEntity ) ) + 0 ) )", "scriptableIndex doesn't index parentData.m_parentEntity\n\t%i not in [0, %i)", outWorldOrigin, outWorldAngles) )
            __debugbreak();
        }
        if ( StandaloneEntityParentData->m_parentEntity[instanceIndex] == 0xFFFF )
        {
          v35 = 0xFFFF;
          v34 = 0xFFFF;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3557, ASSERT_TYPE_ASSERT, "( parentData.m_parentEntity[scriptableIndex] ) != ( 0xffff )", "%s != %s\n\t%i, %i", "parentData.m_parentEntity[scriptableIndex]", "USHRT_MAX", v34, v35) )
            __debugbreak();
        }
        if ( StandaloneEntityParentData->m_parentEntity[instanceIndex] != v23 )
        {
          ScriptableCl_ClearStandaloneEntityParentUpdate(localClientNum, instanceIndex);
          ScriptableCl_MarkStandaloneEntityParentUpdate(localClientNum, instanceIndex, v23);
        }
      }
    }
    else
    {
      ScriptableCl_MarkStandaloneEntityParentUpdate(localClientNum, instance->instanceIndex, v23);
      *((_BYTE *)InstanceCommonContext + 60) |= 0x20u;
    }
  }
  else if ( (*((_BYTE *)InstanceCommonContext + 60) & 0x20) != 0 )
  {
    ScriptableCl_SetInitialOriginAndAngles(localClientNum, instance->instanceIndex, &origin, &angles);
    ScriptableCl_ClearStandaloneEntityParentUpdate(localClientNum, instance->instanceIndex);
    *((_BYTE *)InstanceCommonContext + 60) &= ~0x20u;
  }
  ScriptableCl_SetOriginAndAngles(localClientNum, instance->instanceIndex, &origin, &angles);
  extraPayload = instance->extraPayload;
  payload = instance->payload;
  v30 = instance->instanceIndex;
  v31 = ScriptableCl_GetInstanceCommonContext(localClientNum, instance->instanceIndex);
  if ( v31->payload != payload || v31->extraPayload != extraPayload )
  {
    v31->payload = payload;
    v31->extraPayload = extraPayload;
    if ( ScriptableCl_GetInstanceInUse(localClientNum, v30) && ScriptableCl_GetLinkType(localClientNum, v30) == SCRIPTABLE_LINK_CLIENTMODEL )
      ScriptableCl_SetClientModelInstanceModels(localClientNum, v30);
  }
  ScriptableCl_Spatial_UpdateOrigin(localClientNum, instance->instanceIndex);
  memset(&origin, 0, sizeof(origin));
}

/*
==============
ScriptableCL_SetWorldStateMyChanges
==============
*/
void ScriptableCL_SetWorldStateMyChanges(const LocalClientNum_t localClientNum, const ScriptableReplicatedInstance *instances, const unsigned int instanceCount, const ScriptablePartWorldState *partWorldState, const unsigned __int64 serverWriteIndex)
{
  ScriptableReadChangeQueue *v6; 
  unsigned __int64 writeIndex; 

  s_scriptableMyChanges = 1;
  ScriptableCL_UpdateWorldState(localClientNum, instances, instanceCount, partWorldState);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) )
  {
    v6 = ScriptableCl_GetChangeQueue(localClientNum);
    writeIndex = serverWriteIndex;
    if ( v6->writeIndex > serverWriteIndex )
      writeIndex = v6->writeIndex;
    v6->writeIndex = writeIndex;
    v6->readIndex = writeIndex;
    v6->startIndex = writeIndex;
  }
}

/*
==============
ScriptableCL_UpdateWorldState
==============
*/
void ScriptableCL_UpdateWorldState(const LocalClientNum_t localClientNum, const ScriptableReplicatedInstance *instances, const unsigned int instanceCount, const ScriptablePartWorldState *partWorldState)
{
  __int64 v4; 
  ScriptableCompleteState *v8; 
  ScriptableReplicatedInstance *replicatedInstances; 
  ScriptablePartWorldGroupState *nextReservedState; 

  v4 = localClientNum;
  if ( !instances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4414, ASSERT_TYPE_ASSERT, "(instances != nullptr)", (const char *)&queryFormat, "instances != nullptr") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(nextReservedState) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4416, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_worldCurrent ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_worldCurrent\n\t%i not in [0, %i)", nextReservedState, 2) )
      __debugbreak();
  }
  if ( !s_scriptableCl_worldCurrent[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4417, ASSERT_TYPE_ASSERT, "(s_scriptableCl_worldCurrent[localClientNum] != nullptr)", (const char *)&queryFormat, "s_scriptableCl_worldCurrent[localClientNum] != nullptr") )
    __debugbreak();
  v8 = s_scriptableCl_worldCurrent[v4];
  Sys_ProfBeginNamedEvent(0xFF0000FF, "ScriptableCL_SetWorldStateDirectly_DetectChanges");
  ScriptableCl_CompareReplicatedInstances((const LocalClientNum_t)v4, v8, instances, instanceCount, &v8->partWorldState.groups[1], &partWorldState->groups[1], g_scriptableCl_replicatedLimits.partWorldLimits[1]);
  ScriptableCommon_UpdatePartsChangeBits(&s_scriptableCl_serverFixedPartsChangedBits[v4], s_scriptableCl_serverFixedPartsChangedArraySize, v8->partWorldState.groups[0].partData, partWorldState->groups[0].partData, g_scriptableCl_replicatedLimits.partWorldLimits[0]);
  Sys_ProfEndNamedEvent();
  replicatedInstances = v8->replicatedInstances;
  v8->replicatedInstanceCount = instanceCount;
  ScriptableCl_CopyReplicatedInstances(instances, instanceCount, replicatedInstances, instanceCount);
  ScriptableCL_CopyPartWorldState(partWorldState, &v8->partWorldState);
}

/*
==============
ScriptableClSP_ArchiveSpWorld
==============
*/
void ScriptableClSP_ArchiveSpWorld(MemoryFile *memFile, ScriptableCompleteState *world)
{
  if ( !world && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1389, ASSERT_TYPE_ASSERT, "(world)", (const char *)&queryFormat, "world") )
    __debugbreak();
  if ( !world->replicatedInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1390, ASSERT_TYPE_ASSERT, "(world->replicatedInstances)", (const char *)&queryFormat, "world->replicatedInstances") )
    __debugbreak();
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.h", 397, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !memFile->archiveProc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\memfile.h", 398, ASSERT_TYPE_ASSERT, "(memFile->archiveProc)", (const char *)&queryFormat, "memFile->archiveProc") )
    __debugbreak();
  memFile->archiveProc(memFile, 4ui64, &world->replicatedInstanceCount);
  ScriptableCommon_ArchiveReplicatedInstances(memFile, &g_scriptableCl_replicatedLimits, world->replicatedInstances);
  ScriptableCommon_ArchivePartWorldstate(memFile, &g_scriptableCl_replicatedLimits, &world->partWorldState);
}

/*
==============
ScriptableClSP_ArchiveState
==============
*/
void ScriptableClSP_ArchiveState(MemoryFile *memFile)
{
  ScriptableStandaloneParentData *StandaloneEntityParentData; 
  unsigned int totalInstanceCount; 
  unsigned int v5; 
  __int64 v6; 
  ScriptableInstanceClientContext *v7; 
  ScriptableInstanceClientContext *v8; 
  const char **p_name; 
  unsigned __int16 eventStreamBufferSize; 
  const char **v11; 
  unsigned __int8 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned int v16; 
  ScriptableStandaloneParentData *v17; 
  unsigned int v18; 
  __int64 v19; 
  const char *CString; 
  XAssetHeader v22; 
  char v23; 
  char v24; 
  int havokData; 
  char v26; 
  const char *v27; 
  XAssetHeader v28; 
  const char *v29; 
  unsigned __int16 v30; 
  const char *name; 
  ScriptableLinkType linkedObjectType; 
  bool IsCharacterEntityIndex; 
  unsigned __int8 *EventStreamBuffer; 
  unsigned __int16 v35; 
  char v36; 
  ScriptableInstanceClientContext *v37; 
  const char *v38; 
  XAssetHeader v39; 
  char *fmt; 
  __int64 v41; 
  __int64 v42; 
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
  bool v53; 
  bool v54; 
  bool v55; 
  char v56[3]; 
  unsigned __int16 v57; 
  vec3_t outOrigin; 
  unsigned int v59; 
  unsigned int v60; 
  unsigned int v61; 
  unsigned int v62; 
  ScriptableInstanceClientContext *v63; 
  __int64 v64; 
  unsigned int p; 
  ScriptableLinkType v66; 
  unsigned __int8 v67; 
  char v68; 

  v64 = -2i64;
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1407, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1410, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::SCRIPTABLES_MULTIPLAYER ))", (const char *)&queryFormat, "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::SCRIPTABLES_MULTIPLAYER )") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
    __debugbreak();
  if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
    __debugbreak();
  if ( !s_scriptableCl_worldCurrent[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1415, ASSERT_TYPE_ASSERT, "(s_scriptableCl_worldCurrent[localClientNum] != nullptr)", (const char *)&queryFormat, "s_scriptableCl_worldCurrent[localClientNum] != nullptr") )
    __debugbreak();
  if ( !s_scriptableCl_spWorldCached[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1416, ASSERT_TYPE_ASSERT, "(s_scriptableCl_spWorldCached[localClientNum] != nullptr)", (const char *)&queryFormat, "s_scriptableCl_spWorldCached[localClientNum] != nullptr") )
    __debugbreak();
  if ( MemFile_IsWriting(memFile) )
  {
    LOBYTE(p) = 2;
    MemFile_WriteData(memFile, 1ui64, &p);
    p = g_scriptableCl_fixedWorldMap.partCount;
    MemFile_WriteData(memFile, 4ui64, &p);
    p = g_scriptableCl_fixedWorldMap.indicesCount;
    MemFile_WriteData(memFile, 4ui64, &p);
    p = s_scriptableCl_reverseFixedWorldMapCount;
    MemFile_WriteData(memFile, 4ui64, &p);
    p = s_scriptableCl_reverseReservedWorldMapCount;
    MemFile_WriteData(memFile, 4ui64, &p);
    MemFile_WriteData(memFile, 4i64 * g_scriptableCl_fixedWorldMap.indicesCount, g_scriptableCl_fixedWorldMap.indices);
    MemFile_WriteData(memFile, 4i64 * s_scriptableCl_reverseFixedWorldMapCount, s_scriptableCl_reverseFixedWorldMap);
    MemFile_WriteData(memFile, 4i64 * s_scriptableCl_reverseReservedWorldMapCount, s_scriptableCl_reverseReservedWorldMap[0]);
    ScriptableCommon_ArchiveReplicatedLimits(memFile, &g_scriptableCl_replicatedLimits);
    ScriptableClSP_ArchiveSpWorld(memFile, s_scriptableCl_worldCurrent[0]);
    ScriptableClSP_ArchiveSpWorld(memFile, s_scriptableCl_spWorldCached[0]);
    p = g_ScriptableClRuntimePartStatesCount;
    MemFile_WriteData(memFile, 4ui64, &p);
    if ( g_ScriptableClRuntimePartStatesCount )
      MemFile_WriteData(memFile, 8i64 * g_ScriptableClRuntimePartStatesCount, g_ScriptableClRuntimePartStates[0]);
    p = g_scriptableClReservedPartRuntimeCount[0];
    MemFile_WriteData(memFile, 4ui64, &p);
    p = g_scriptableClReservedPartRuntimeFreeHead[0];
    MemFile_WriteData(memFile, 4ui64, &p);
    if ( g_scriptableClReservedPartRuntimeCount[0] )
      MemFile_WriteData(memFile, 8i64 * g_scriptableClReservedPartRuntimeCount[0], g_scriptableClReservedPartRuntimes[0]);
    MemFile_WriteData(memFile, 0x2000ui64, g_scriptableClEntityLinkMap);
    MemFile_WriteData(memFile, 0x100ui64, g_scriptableClEntityLinkBound);
    LOWORD(p) = cm.mapEnts->scriptableMapEnts.reservedDynents[0].freeHead;
    MemFile_WriteData(memFile, 2ui64, &p);
    MemFile_WriteData(memFile, 0x100ui64, s_scriptableCl_serverChangedEntitiesBits);
    MemFile_WriteData(memFile, 0x100ui64, s_scriptableCl_updateNeededEntitiesBits);
    if ( Com_GameMode_SupportsFeature(WEAPON_LEAP_IN|0x80) )
    {
      StandaloneEntityParentData = ScriptableCl_GetStandaloneEntityParentData(LOCAL_CLIENT_0);
      MemFile_WriteData(memFile, 0x3000ui64, StandaloneEntityParentData);
    }
    ScriptableCommon_AssertCountsInitialized();
    totalInstanceCount = g_scriptableWorldCounts.totalInstanceCount;
    v5 = 0;
    if ( g_scriptableWorldCounts.totalInstanceCount )
    {
      v6 = 0i64;
      do
      {
        ScriptableCommon_AssertCountsInitialized();
        if ( v5 >= g_scriptableWorldCounts.totalInstanceCount )
        {
          ScriptableCommon_AssertCountsInitialized();
          LODWORD(v42) = g_scriptableWorldCounts.totalInstanceCount;
          LODWORD(v41) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v41, v42) )
            __debugbreak();
        }
        if ( !g_scriptableCl_instanceContexts[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
          __debugbreak();
        v7 = &g_scriptableCl_instanceContexts[0][v6];
        ScriptableCommon_AssertCountsInitialized();
        if ( v5 >= g_scriptableWorldCounts.totalInstanceCount )
        {
          ScriptableCommon_AssertCountsInitialized();
          LODWORD(v42) = g_scriptableWorldCounts.totalInstanceCount;
          LODWORD(v41) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 123, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v41, v42) )
            __debugbreak();
        }
        if ( !g_scriptableCl_instanceContexts[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 125, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
          __debugbreak();
        v8 = g_scriptableCl_instanceContexts[0];
        if ( v7->commonContext.def )
        {
          LOBYTE(p) = 1;
          MemFile_WriteData(memFile, 1ui64, &p);
          MemFile_WriteCString(memFile, v7->commonContext.def->name);
        }
        else
        {
          LOBYTE(p) = 0;
          MemFile_WriteData(memFile, 1ui64, &p);
        }
        ScriptableInstanceContextSecure::GetOrigin(&v7->commonContext, v5, &outOrigin);
        MemFile_WriteData(memFile, 0xCui64, &outOrigin);
        MemFile_WriteData(memFile, 0xCui64, &v7->commonContext.angles);
        p = v7->commonContext.linkedObjectIndex;
        MemFile_WriteData(memFile, 4ui64, &p);
        LOBYTE(p) = v7->commonContext.linkedObjectType;
        MemFile_WriteData(memFile, 1ui64, &p);
        LOBYTE(p) = v7->commonContext.initializationCount;
        MemFile_WriteData(memFile, 1ui64, &p);
        LOBYTE(p) = *((_BYTE *)&v7->commonContext + 60) & 1;
        MemFile_WriteData(memFile, 1ui64, &p);
        LOBYTE(p) = (*((_BYTE *)&v7->commonContext + 60) & 2) != 0;
        MemFile_WriteData(memFile, 1ui64, &p);
        LOBYTE(p) = (*((_BYTE *)&v7->commonContext + 60) & 4) != 0;
        MemFile_WriteData(memFile, 1ui64, &p);
        LOBYTE(p) = v7->commonContext.dataType == SCRIPTABLE_DATA_TYPE_XCOMPOSITEMODEL;
        MemFile_WriteData(memFile, 1ui64, &p);
        p_name = &v7->commonContext.data.compositeModel->name;
        LOBYTE(p) = p_name != NULL;
        MemFile_WriteData(memFile, 1ui64, &p);
        if ( p_name )
          MemFile_WriteCString(memFile, *p_name);
        LOBYTE(p) = (*((_BYTE *)&v7->commonContext + 60) & 0x40) != 0;
        MemFile_WriteData(memFile, 1ui64, &p);
        LOBYTE(p) = *((_BYTE *)&v7->commonContext + 60) >> 7;
        MemFile_WriteData(memFile, 1ui64, &p);
        LOBYTE(p) = *((_BYTE *)&v7->commonContext + 61) & 1;
        MemFile_WriteData(memFile, 1ui64, &p);
        if ( Com_GameMode_SupportsFeature(WEAPON_LEAP_IN|0x80) )
        {
          LOBYTE(p) = (*((_BYTE *)&v7->commonContext + 60) & 0x20) != 0;
          MemFile_WriteData(memFile, 1ui64, &p);
        }
        p = v7->commonContext.reservedStateListHeader;
        MemFile_WriteData(memFile, 4ui64, &p);
        LOWORD(p) = v7->commonContext.eventStreamBufferSize;
        MemFile_WriteData(memFile, 2ui64, &p);
        eventStreamBufferSize = v7->commonContext.eventStreamBufferSize;
        if ( eventStreamBufferSize )
          MemFile_WriteData(memFile, eventStreamBufferSize, v7->commonContext.eventStreamBuffer);
        LOBYTE(p) = v8[v6].collisionContext.collisionActiveFlags;
        MemFile_WriteData(memFile, 1ui64, &p);
        if ( v8[v6].collisionContext.collisionActiveFlags )
        {
          p = v8[v6].collisionContext.clipmapCModelIndex;
          MemFile_WriteData(memFile, 4ui64, &p);
          LOBYTE(p) = v8[v6].collisionContext.neverMoves;
          MemFile_WriteData(memFile, 1ui64, &p);
          LOBYTE(p) = v8[v6].collisionContext.canPush;
          MemFile_WriteData(memFile, 1ui64, &p);
          LOBYTE(p) = v8[v6].collisionContext.canTouch;
          MemFile_WriteData(memFile, 1ui64, &p);
          v11 = &v8[v6].collisionContext.model->name;
          LOBYTE(p) = v11 != NULL;
          MemFile_WriteData(memFile, 1ui64, &p);
          if ( v11 )
            MemFile_WriteCString(memFile, *v11);
        }
        ++v5;
        ++v6;
      }
      while ( v5 < totalInstanceCount );
    }
    goto LABEL_166;
  }
  MemFile_ReadData(memFile, 1ui64, &p);
  v12 = p;
  if ( (_BYTE)p != 2 )
  {
    if ( (_BYTE)p == 1 && (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF )
    {
      Com_Printf(14, "ScriptableClSP_ArchiveState: Loading old VERSION 1 Scriptable Archive under SCRIPTABLE_ARCHIVE_VERSION_1_SP_SUPPORT\n");
    }
    else
    {
      LODWORD(fmt) = 2;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14406A4F0, 6239i64, v12, fmt);
    }
  }
  MemFile_ReadData(memFile, 4ui64, &p);
  g_scriptableCl_fixedWorldMap.partCount = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  v13 = p;
  if ( g_scriptableCl_fixedWorldMap.indicesCount != p )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14406A550, 5821i64);
  MemFile_ReadData(memFile, 4ui64, &p);
  v14 = p;
  if ( p != s_scriptableCl_reverseFixedWorldMapCount )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14406A600, 5822i64);
  MemFile_ReadData(memFile, 4ui64, &p);
  v15 = p;
  if ( p != s_scriptableCl_reverseReservedWorldMapCount )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14406A6B0, 5823i64);
  MemFile_ReadData(memFile, 4 * v13, g_scriptableCl_fixedWorldMap.indices);
  MemFile_ReadData(memFile, 4 * v14, s_scriptableCl_reverseFixedWorldMap);
  MemFile_ReadData(memFile, 4 * v15, s_scriptableCl_reverseReservedWorldMap[0]);
  ScriptableCommon_ArchiveReplicatedLimits(memFile, &g_scriptableCl_replicatedLimits);
  ScriptableClSP_ArchiveSpWorld(memFile, s_scriptableCl_worldCurrent[0]);
  ScriptableClSP_ArchiveSpWorld(memFile, s_scriptableCl_spWorldCached[0]);
  MemFile_ReadData(memFile, 4ui64, &p);
  v16 = g_ScriptableClRuntimePartStatesCount;
  if ( p != g_ScriptableClRuntimePartStatesCount )
  {
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14406A760, 222i64);
    v16 = g_ScriptableClRuntimePartStatesCount;
  }
  if ( v16 )
    MemFile_ReadData(memFile, 8i64 * v16, g_ScriptableClRuntimePartStates[0]);
  MemFile_ReadData(memFile, 4ui64, &p);
  if ( p != g_scriptableClReservedPartRuntimeCount[0] )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14406A800, 223i64);
  MemFile_ReadData(memFile, 4ui64, &p);
  g_scriptableClReservedPartRuntimeFreeHead[0] = p;
  if ( g_scriptableClReservedPartRuntimeCount[0] )
    MemFile_ReadData(memFile, 8i64 * g_scriptableClReservedPartRuntimeCount[0], g_scriptableClReservedPartRuntimes[0]);
  MemFile_ReadData(memFile, 0x2000ui64, g_scriptableClEntityLinkMap);
  MemFile_ReadData(memFile, 0x100ui64, g_scriptableClEntityLinkBound);
  MemFile_ReadData(memFile, 2ui64, &p);
  cm.mapEnts->scriptableMapEnts.reservedDynents[0].freeHead = p;
  MemFile_ReadData(memFile, 0x100ui64, s_scriptableCl_serverChangedEntitiesBits);
  MemFile_ReadData(memFile, 0x100ui64, s_scriptableCl_updateNeededEntitiesBits);
  if ( Com_GameMode_SupportsFeature(WEAPON_LEAP_IN|0x80) )
  {
    v17 = ScriptableCl_GetStandaloneEntityParentData(LOCAL_CLIENT_0);
    MemFile_ReadData(memFile, 0x3000ui64, v17);
  }
  ScriptableCommon_AssertCountsInitialized();
  v62 = g_scriptableWorldCounts.totalInstanceCount;
  v18 = 0;
  if ( g_scriptableWorldCounts.totalInstanceCount )
  {
    v19 = 0i64;
    do
    {
      ScriptableCommon_AssertCountsInitialized();
      if ( v18 >= g_scriptableWorldCounts.totalInstanceCount )
      {
        ScriptableCommon_AssertCountsInitialized();
        LODWORD(v42) = g_scriptableWorldCounts.totalInstanceCount;
        LODWORD(v41) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v41, v42) )
          __debugbreak();
      }
      if ( !g_scriptableCl_instanceContexts[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
        __debugbreak();
      _RDI = &g_scriptableCl_instanceContexts[0][v19];
      ScriptableCommon_AssertCountsInitialized();
      if ( v18 >= g_scriptableWorldCounts.totalInstanceCount )
      {
        ScriptableCommon_AssertCountsInitialized();
        LODWORD(v42) = g_scriptableWorldCounts.totalInstanceCount;
        LODWORD(v41) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 123, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v41, v42) )
          __debugbreak();
      }
      if ( !g_scriptableCl_instanceContexts[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 125, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
        __debugbreak();
      v63 = g_scriptableCl_instanceContexts[0];
      MemFile_ReadData(memFile, 1ui64, &p);
      if ( (_BYTE)p )
      {
        CString = MemFile_ReadCString(memFile);
        v22.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_SCRIPTABLE, CString, 0).physicsLibrary;
        _RDI->commonContext.def = v22.scriptable;
      }
      else
      {
        _RDI->commonContext.def = NULL;
        v22.physicsLibrary = NULL;
      }
      *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
      __asm { vmovss  dword ptr [rbp+57h+outOrigin], xmm0 }
      *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
      __asm { vmovss  dword ptr [rbp+57h+outOrigin+4], xmm0 }
      *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
      __asm { vmovss  dword ptr [rbp+57h+outOrigin+8], xmm0 }
      ScriptableInstanceContextSecure::SetOrigin(&_RDI->commonContext, v18, &outOrigin);
      *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
      __asm { vmovss  dword ptr [rdi+2Ch], xmm0 }
      *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
      __asm { vmovss  dword ptr [rdi+30h], xmm0 }
      *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
      __asm { vmovss  dword ptr [rdi+34h], xmm0 }
      MemFile_ReadData(memFile, 4ui64, &v59);
      _RDI->commonContext.linkedObjectIndex = v59;
      MemFile_ReadData(memFile, 1ui64, &v66);
      _RDI->commonContext.linkedObjectType = v66;
      MemFile_ReadData(memFile, 1ui64, &v67);
      _RDI->commonContext.initializationCount = v67;
      MemFile_ReadData(memFile, 1ui64, &v68);
      *((_BYTE *)&_RDI->commonContext + 60) &= ~1u;
      *((_BYTE *)&_RDI->commonContext + 60) |= v68 & 1;
      MemFile_ReadData(memFile, 1ui64, &v43);
      *((_BYTE *)&_RDI->commonContext + 60) = *((_BYTE *)&_RDI->commonContext + 60) & 0xF9 | (2 * (v43 & 1));
      MemFile_ReadData(memFile, 1ui64, &v44);
      v23 = v44;
      if ( v44 )
      {
        if ( !v22.physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1699, ASSERT_TYPE_ASSERT, "(def != nullptr)", (const char *)&queryFormat, "def != nullptr") )
          __debugbreak();
        if ( !_RDI->commonContext.initializationCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1700, ASSERT_TYPE_ASSERT, "(r_context.initializationCount > 0)", (const char *)&queryFormat, "r_context.initializationCount > 0") )
          __debugbreak();
        if ( !ScriptableCl_IsLinked(LOCAL_CLIENT_0, v18) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1701, ASSERT_TYPE_ASSERT, "(ScriptableCl_IsLinked( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_IsLinked( localClientNum, scriptableIndex )") )
          __debugbreak();
        v24 = *((_BYTE *)&_RDI->commonContext + 60);
        if ( (v24 & 2) == 0 )
          *((_BYTE *)&_RDI->commonContext + 60) = v24 | 1;
      }
      if ( v22.physicsLibrary )
      {
        havokData = (int)v22.physicsLibrary->havokData;
        if ( (havokData & 2) == 0 || (havokData & 0x2000) != 0 )
        {
          v26 = *((_BYTE *)&_RDI->commonContext + 60);
          if ( (v26 & 1) != 0 )
          {
            ScriptableCl_MarkClientUpdateRequired(LOCAL_CLIENT_0, v18, SCRIPTABLE_UPDATE_INIT);
          }
          else if ( (v26 & 2) != 0 )
          {
            ScriptableCl_MarkClientUpdateRequired(LOCAL_CLIENT_0, v18, SCRIPTABLE_UPDATE_SHUTDOWN);
          }
        }
      }
      else
      {
        if ( v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1733, ASSERT_TYPE_ASSERT, "(!wasInitialized)", (const char *)&queryFormat, "!wasInitialized") )
          __debugbreak();
        if ( (*((_BYTE *)&_RDI->commonContext + 60) & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1734, ASSERT_TYPE_ASSERT, "(!r_context.needsInitialization)", (const char *)&queryFormat, "!r_context.needsInitialization") )
          __debugbreak();
        if ( (*((_BYTE *)&_RDI->commonContext + 60) & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1735, ASSERT_TYPE_ASSERT, "(!r_context.needsShutdown)", (const char *)&queryFormat, "!r_context.needsShutdown") )
          __debugbreak();
      }
      _RDI->commonContext.data.compositeModel = NULL;
      _RDI->commonContext.dataType = SCRIPTABLE_DATA_TYPE_INVALID;
      MemFile_ReadData(memFile, 1ui64, &v45);
      if ( v45 )
      {
        MemFile_ReadData(memFile, 1ui64, &v46);
        if ( !v46 )
          goto LABEL_132;
        v27 = MemFile_ReadCString(memFile);
        v28.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_XCOMPOSITEMODEL, v27, 0).physicsLibrary;
        if ( !v28.physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1750, ASSERT_TYPE_ASSERT, "(compositeModel)", (const char *)&queryFormat, "compositeModel") )
          __debugbreak();
        _RDI->commonContext.dataType = SCRIPTABLE_DATA_TYPE_XCOMPOSITEMODEL;
      }
      else
      {
        MemFile_ReadData(memFile, 1ui64, &v47);
        if ( !v47 )
          goto LABEL_132;
        v29 = MemFile_ReadCString(memFile);
        v28.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_XMODEL, v29, 0).physicsLibrary;
        if ( !v28.physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1762, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
          __debugbreak();
        _RDI->commonContext.dataType = SCRIPTABLE_DATA_TYPE_XMODEL;
      }
      _RDI->commonContext.data.compositeModel = v28.compositeModel;
LABEL_132:
      MemFile_ReadData(memFile, 1ui64, &v48);
      *((_BYTE *)&_RDI->commonContext + 60) ^= (*((_BYTE *)&_RDI->commonContext + 60) ^ (v48 << 6)) & 0x40;
      MemFile_ReadData(memFile, 1ui64, &v49);
      *((_BYTE *)&_RDI->commonContext + 60) = *((_BYTE *)&_RDI->commonContext + 60) & 0x7F | (v49 << 7);
      MemFile_ReadData(memFile, 1ui64, &v50);
      *((_BYTE *)&_RDI->commonContext + 61) &= ~1u;
      *((_BYTE *)&_RDI->commonContext + 61) |= v50 & 1;
      if ( Com_GameMode_SupportsFeature(WEAPON_LEAP_IN|0x80) )
      {
        MemFile_ReadData(memFile, 1ui64, &v51);
        *((_BYTE *)&_RDI->commonContext + 60) ^= (*((_BYTE *)&_RDI->commonContext + 60) ^ (32 * v51)) & 0x20;
      }
      else
      {
        *((_BYTE *)&_RDI->commonContext + 60) &= ~0x20u;
      }
      MemFile_ReadData(memFile, 4ui64, &v60);
      _RDI->commonContext.reservedStateListHeader = v60;
      if ( v22.physicsLibrary )
        v30 = *(_WORD *)&v22.physicsLibrary[2].isMotionPropertiesList;
      else
        v30 = 0;
      MemFile_ReadData(memFile, 2ui64, &v57);
      if ( v30 != v57 )
      {
        if ( v22.physicsLibrary )
          name = v22.physicsLibrary->name;
        else
          name = "<none>";
        LODWORD(v41) = v30;
        LODWORD(fmt) = v57;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14406AA80, 6167i64, name, fmt, v41);
      }
      _RDI->commonContext.eventStreamBufferSize = v30;
      if ( v30 )
      {
        ScriptableCommon_AssertCountsInitialized();
        if ( v18 < g_scriptableWorldCounts.runtimeInstanceCount )
        {
          linkedObjectType = _RDI->commonContext.linkedObjectType;
          if ( linkedObjectType == SCRIPTABLE_LINK_ENTITY )
          {
            IsCharacterEntityIndex = BG_IsCharacterEntityIndex(_RDI->commonContext.linkedObjectIndex);
          }
          else
          {
            if ( linkedObjectType == SCRIPTABLE_LINK_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1807, ASSERT_TYPE_ASSERT, "(r_context.linkedObjectType != SCRIPTABLE_LINK_NONE)", (const char *)&queryFormat, "r_context.linkedObjectType != SCRIPTABLE_LINK_NONE") )
              __debugbreak();
            IsCharacterEntityIndex = 0;
          }
          EventStreamBuffer = Scriptable_Bg_AllocateEventStreamBuffer(IsCharacterEntityIndex, 0, LOCAL_CLIENT_0, _RDI->commonContext.eventStreamBufferSize);
          _RDI->commonContext.eventStreamBuffer = EventStreamBuffer;
          if ( !EventStreamBuffer )
            Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14406AB80, 224i64, _RDI->commonContext.eventStreamBufferSize);
        }
      }
      v35 = _RDI->commonContext.eventStreamBufferSize;
      if ( v35 )
        MemFile_ReadData(memFile, v35, _RDI->commonContext.eventStreamBuffer);
      MemFile_ReadData(memFile, 1ui64, &v52);
      v36 = v52;
      v37 = v63;
      v63[v19].collisionContext.collisionActiveFlags = v52;
      *(_QWORD *)&v37[v19].collisionContext.scriptableCollisionPredictive = -1i64;
      v37[v19].collisionContext.scriptableCollisionDetail = -1;
      if ( !v36 )
        goto LABEL_165;
      MemFile_ReadData(memFile, 4ui64, &v61);
      v37[v19].collisionContext.clipmapCModelIndex = v61;
      MemFile_ReadData(memFile, 1ui64, &v53);
      v37[v19].collisionContext.neverMoves = v53;
      MemFile_ReadData(memFile, 1ui64, &v54);
      v37[v19].collisionContext.canPush = v54;
      MemFile_ReadData(memFile, 1ui64, &v55);
      v37[v19].collisionContext.canTouch = v55;
      MemFile_ReadData(memFile, 1ui64, v56);
      if ( v56[0] )
      {
        v38 = MemFile_ReadCString(memFile);
        v39.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_XMODEL, v38, 0).physicsLibrary;
        if ( !v39.physicsLibrary && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1841, ASSERT_TYPE_ASSERT, "(collisionModel)", (const char *)&queryFormat, "collisionModel") )
          __debugbreak();
        v37[v19].collisionContext.model = v39.model;
        if ( v39.physicsLibrary )
        {
LABEL_164:
          ScriptableCl_CreateCollisionFromArchive(LOCAL_CLIENT_0, v18);
          goto LABEL_165;
        }
      }
      else
      {
        v37[v19].collisionContext.model = NULL;
      }
      if ( v37[v19].collisionContext.clipmapCModelIndex <= 0xFFFFFFFD )
        goto LABEL_164;
LABEL_165:
      ++v18;
      ++v19;
    }
    while ( v18 < v62 );
  }
LABEL_166:
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
ScriptableCl_AddNonSpatialLootInstance
==============
*/
void ScriptableCl_AddNonSpatialLootInstance(const unsigned int scriptableIndex)
{
  unsigned int v1; 
  __int64 v3; 

  v1 = s_scriptableCl_nonSpatialLootInstanceCount;
  if ( s_scriptableCl_nonSpatialLootInstanceCount < 0x400 )
  {
    v3 = 0i64;
    if ( s_scriptableCl_nonSpatialLootInstanceCount )
    {
      do
      {
        if ( s_scriptableCl_nonSpatialLootInstances[v3] == scriptableIndex )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5260, ASSERT_TYPE_ASSERT, "(s_scriptableCl_nonSpatialLootInstances[listIndex] != scriptableIndex)", (const char *)&queryFormat, "s_scriptableCl_nonSpatialLootInstances[listIndex] != scriptableIndex") )
            __debugbreak();
          v1 = s_scriptableCl_nonSpatialLootInstanceCount;
        }
        v3 = (unsigned int)(v3 + 1);
      }
      while ( (unsigned int)v3 < v1 );
    }
    s_scriptableCl_nonSpatialLootInstanceCount = v1 + 1;
    s_scriptableCl_nonSpatialLootInstances[v1] = scriptableIndex;
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5253, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Too many non-spatialized loot instances!") )
  {
    __debugbreak();
  }
}

/*
==============
ScriptableCl_AddedSnapshotScriptable
==============
*/
void ScriptableCl_AddedSnapshotScriptable(const LocalClientNum_t localClientNum, const ScriptableReplicatedInstance *rpInstance)
{
  __int64 v3; 
  unsigned __int8 v4; 
  unsigned __int16 payload; 
  unsigned int *v6; 
  unsigned int partIndex; 
  unsigned int *v8; 
  __int64 v9; 
  unsigned int instanceIndex; 
  __int64 v11; 
  unsigned int runtimeInstanceCount; 
  __int64 v13; 
  int v14; 
  __int64 v15; 
  int v16; 

  v3 = localClientNum;
  ScriptableCommon_AssertCountsInitialized();
  if ( rpInstance->instanceIndex >= g_scriptableWorldCounts.runtimeInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
    instanceIndex = rpInstance->instanceIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3783, ASSERT_TYPE_ASSERT, "(unsigned)( rpInstance.instanceIndex ) < (unsigned)( ScriptableCommon_GetReservedInstanceCount() )", "rpInstance.instanceIndex doesn't index ScriptableCommon_GetReservedInstanceCount()\n\t%i not in [0, %i)", instanceIndex, runtimeInstanceCount) )
      __debugbreak();
  }
  v4 = rpInstance->replicatedType[0];
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      v16 = 1;
      v14 = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3798, ASSERT_TYPE_ASSERT, "( replicatedType ) == ( ScriptableReplicatedType::STANDALONE )", "%s == %s\n\t%i, %i", "replicatedType", "ScriptableReplicatedType::STANDALONE", v14, v16) )
        __debugbreak();
    }
    ScriptableCL_BindStandaloneReservedRpInstance((const LocalClientNum_t)v3, rpInstance);
    if ( (unsigned int)v3 >= 2 )
    {
      LODWORD(v11) = 2;
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2018, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_reverseReservedWorldMap ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_reverseReservedWorldMap\n\t%i not in [0, %i)", v9, v11) )
        __debugbreak();
    }
    if ( !s_scriptableCl_reverseReservedWorldMap[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2019, ASSERT_TYPE_ASSERT, "(s_scriptableCl_reverseReservedWorldMap[localClientNum] != nullptr)", (const char *)&queryFormat, "s_scriptableCl_reverseReservedWorldMap[localClientNum] != nullptr") )
      __debugbreak();
    v6 = s_scriptableCl_reverseReservedWorldMap[v3];
    partIndex = rpInstance->partIndex;
    if ( partIndex < partIndex + rpInstance->partCount )
    {
      do
      {
        if ( partIndex >= s_scriptableCl_reverseReservedWorldMapCount )
        {
          LODWORD(v11) = s_scriptableCl_reverseReservedWorldMapCount;
          LODWORD(v9) = partIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2024, ASSERT_TYPE_ASSERT, "(unsigned)( partIndex ) < (unsigned)( s_scriptableCl_reverseReservedWorldMapCount )", "partIndex doesn't index s_scriptableCl_reverseReservedWorldMapCount\n\t%i not in [0, %i)", v9, v11) )
            __debugbreak();
        }
        v8 = &v6[partIndex];
        if ( *v8 != -1 )
        {
          LODWORD(v15) = -1;
          LODWORD(v13) = *v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2025, ASSERT_TYPE_ASSERT, "( reservedInstanceLookup[partIndex] ) == ( SCRIPTABLE_INVALID_INSTANCE_INDEX )", "%s == %s\n\t%i, %i", "reservedInstanceLookup[partIndex]", "SCRIPTABLE_INVALID_INSTANCE_INDEX", v13, v15) )
            __debugbreak();
        }
        ++partIndex;
        *v8 = rpInstance->instanceIndex;
      }
      while ( partIndex < rpInstance->partIndex + rpInstance->partCount );
      LODWORD(v3) = localClientNum;
    }
  }
  else
  {
    payload = rpInstance->payload;
    if ( payload >= 0x800u )
    {
      LODWORD(v11) = 2048;
      LODWORD(v9) = payload;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3789, ASSERT_TYPE_ASSERT, "(unsigned)( rpInstance.payload ) < (unsigned)( ( 2048 ) )", "rpInstance.payload doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v9, v11) )
        __debugbreak();
    }
    ScriptableCl_SetLink((const LocalClientNum_t)v3, rpInstance->instanceIndex, SCRIPTABLE_LINK_ENTITY, rpInstance->payload);
    if ( ScriptableCl_IsInReserveWorldMap((const LocalClientNum_t)v3, rpInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3794, ASSERT_TYPE_ASSERT, "(!ScriptableCl_IsInReserveWorldMap( localClientNum, rpInstance ))", (const char *)&queryFormat, "!ScriptableCl_IsInReserveWorldMap( localClientNum, rpInstance )") )
    {
      __debugbreak();
      ScriptableCl_MarkReservedInstanceChanged((const LocalClientNum_t)v3, rpInstance->instanceIndex);
      return;
    }
  }
  ScriptableCl_MarkReservedInstanceChanged((const LocalClientNum_t)v3, rpInstance->instanceIndex);
}

/*
==============
ScriptableCl_AllocateUpdateBuffers
==============
*/
void ScriptableCl_AllocateUpdateBuffers(const LocalClientNum_t localClientNum, HunkUser *clHunkUser)
{
  __int64 v2; 
  unsigned int *v4; 
  unsigned __int64 v5; 
  unsigned int *v6; 
  unsigned __int64 v7; 
  unsigned int *v8; 
  __int64 v9; 
  __int64 v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v13 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 482, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_serverFixedPartsChangedBits ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_serverFixedPartsChangedBits\n\t%i not in [0, %i)", localClientNum, v13) )
      __debugbreak();
    LODWORD(v14) = 2;
    LODWORD(v11) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 483, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_reservedInstancesChangedBits ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_reservedInstancesChangedBits\n\t%i not in [0, %i)", v11, v14) )
      __debugbreak();
  }
  if ( !s_scriptableCl_serverFixedPartsChangedArraySize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 484, ASSERT_TYPE_ASSERT, "(s_scriptableCl_serverFixedPartsChangedArraySize > 0)", (const char *)&queryFormat, "s_scriptableCl_serverFixedPartsChangedArraySize > 0") )
    __debugbreak();
  if ( !s_scriptableCl_serverReservedInstancesChangedArraySize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 485, ASSERT_TYPE_ASSERT, "(s_scriptableCl_serverReservedInstancesChangedArraySize > 0)", (const char *)&queryFormat, "s_scriptableCl_serverReservedInstancesChangedArraySize > 0") )
    __debugbreak();
  v4 = (unsigned int *)Mem_HunkUser_AllocInternal(clHunkUser, 4i64 * s_scriptableCl_serverFixedPartsChangedArraySize, 0x10ui64, "ScriptableCl_AllocateUpdateBuffers");
  v5 = 4i64 * s_scriptableCl_serverReservedInstancesChangedArraySize;
  s_scriptableCl_serverFixedPartsChangedBits[v2].partBitsArray = v4;
  v6 = (unsigned int *)Mem_HunkUser_AllocInternal(clHunkUser, v5, 0x10ui64, "ScriptableCl_AllocateUpdateBuffers");
  v7 = 4i64 * s_scriptableCl_reverseReservedWorldMapCount;
  s_scriptableCl_reservedInstancesChangedBits[v2] = v6;
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v12) = 2;
    LODWORD(v9) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 501, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_reverseReservedWorldMap ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_reverseReservedWorldMap\n\t%i not in [0, %i)", v9, v12) )
      __debugbreak();
  }
  if ( s_scriptableCl_reverseReservedWorldMap[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 502, ASSERT_TYPE_ASSERT, "(s_scriptableCl_reverseReservedWorldMap[localClientNum] == nullptr)", (const char *)&queryFormat, "s_scriptableCl_reverseReservedWorldMap[localClientNum] == nullptr") )
    __debugbreak();
  v8 = (unsigned int *)Mem_HunkUser_AllocInternal(clHunkUser, v7, 8ui64, "ScriptableCl_AllocateUpdateBuffers");
  s_scriptableCl_reverseReservedWorldMap[v2] = v8;
  memset_0(v8, 255, v7);
}

/*
==============
ScriptableCl_AnimNotetrackEvent
==============
*/
void ScriptableCl_AnimNotetrackEvent(const LocalClientNum_t localClientNum, const int sourceEntityNum, const char *note)
{
  const centity_t *Entity; 
  ScriptableNoteTrackClientContext *InstanceNoteTrackContext; 
  const ScriptableEventNoteTrackDef *currentNoteTracks; 
  int v10; 
  __int64 v11; 
  const char *v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned int v16; 
  __int64 v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  int v21; 
  const ScriptablePartDef *currentNoteTrackPartDef; 
  unsigned int v23; 
  ScriptableEventParams eventParams; 
  unsigned int scriptableIndex; 
  unsigned int holdrand; 

  if ( !note && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4513, ASSERT_TYPE_ASSERT, "(note)", (const char *)&queryFormat, "note") )
    __debugbreak();
  Entity = CG_GetEntity(localClientNum, sourceEntityNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4517, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  ScriptableCl_GetIndexForEntity(localClientNum, Entity, &scriptableIndex);
  InstanceNoteTrackContext = ScriptableCl_GetInstanceNoteTrackContext(localClientNum, scriptableIndex);
  currentNoteTracks = InstanceNoteTrackContext->currentNoteTracks;
  if ( InstanceNoteTrackContext->currentNoteTracks )
  {
    v10 = 0;
    if ( currentNoteTracks->noteTrackCount )
    {
      while ( 1 )
      {
        v11 = 0x7FFFFFFFi64;
        v12 = note;
        v13 = (__int64)&currentNoteTracks->noteTracks[v10];
        v14 = *(_QWORD *)(v13 + 8);
        if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !note && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v15 = v14 - (_QWORD)note;
        while ( 1 )
        {
          v16 = (unsigned __int8)v12[v15];
          v17 = v11;
          v18 = *(unsigned __int8 *)v12++;
          --v11;
          if ( !v17 )
          {
LABEL_24:
            v21 = 0;
            goto LABEL_25;
          }
          if ( v16 != v18 )
          {
            v19 = v16 + 32;
            if ( v16 - 65 > 0x19 )
              v19 = v16;
            v16 = v19;
            v20 = v18 + 32;
            if ( v18 - 65 > 0x19 )
              v20 = v18;
            if ( v16 != v20 )
              break;
          }
          if ( !v16 )
            goto LABEL_24;
        }
        v21 = 1;
        if ( v16 < v20 )
          v21 = -1;
LABEL_25:
        if ( !v21 )
          break;
        currentNoteTracks = InstanceNoteTrackContext->currentNoteTracks;
        if ( ++v10 >= InstanceNoteTrackContext->currentNoteTracks->noteTrackCount )
          return;
      }
      currentNoteTrackPartDef = InstanceNoteTrackContext->currentNoteTrackPartDef;
      v23 = scriptableIndex;
      if ( !currentNoteTrackPartDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1920, ASSERT_TYPE_ASSERT, "(partDef)", (const char *)&queryFormat, "partDef") )
        __debugbreak();
      eventParams.context = ScriptableCl_LocalClientToContext(localClientNum);
      __asm { vpxor   xmm0, xmm0, xmm0 }
      eventParams.callbacks = &s_clCallbackTable;
      eventParams.scriptableIndex = v23;
      eventParams.partDef = currentNoteTrackPartDef;
      __asm { vmovdqu xmmword ptr [rsp+98h+eventParams.damageEvent], xmm0 }
      holdrand = ScriptableCl_GenerateRandSeed(localClientNum, scriptableIndex);
      ScriptableCl_RunStateEvents_Specific(localClientNum, &eventParams, &holdrand, 1, *(ScriptableEventDef **)(v13 + 24), *(_DWORD *)(v13 + 20));
    }
  }
}

/*
==============
ScriptableCl_ApplyChanges
==============
*/
void ScriptableCl_ApplyChanges(const LocalClientNum_t localClientNum, const unsigned __int64 changeStartIndex, const unsigned __int64 changeTargetIndex)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4183, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SCRIPTABLES_MULTIPLAYER ))", "%s\n\tThis function is MP-only, SP uses a direct copy in ScriptableCl_SetWorldStateSP", "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SCRIPTABLES_MULTIPLAYER )") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF0000FF, "ScriptableCl_UpdateSnapshotState");
  ScriptableCl_UpdateSnapshotChanges(localClientNum, changeTargetIndex);
  Sys_ProfEndNamedEvent();
}

/*
==============
ScriptableCl_AssetCheckEvent
==============
*/
void ScriptableCl_AssetCheckEvent(const ScriptableContext context, const ScriptableDef *scriptableDef, const ScriptableEventDef *event)
{
  bool outIsAlwaysLoaded; 
  SndAliasList *outAlias; 

  if ( event->type == Scriptable_EventType_Sound )
  {
    if ( SND_TryFindAliasForCaching(event->data.sound.soundAlias, &outAlias, &outIsAlwaysLoaded) )
    {
      if ( outIsAlwaysLoaded )
      {
        if ( !outAlias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4710, ASSERT_TYPE_ASSERT, "(aliasList != nullptr)", (const char *)&queryFormat, "aliasList != nullptr") )
          __debugbreak();
        event->data.sound.soundAliasCache = outAlias;
      }
      else
      {
        Com_Printf(29, "Scriptable %s reference to sound %s can't be cached (transient bank)\n", scriptableDef->name, outAlias->aliasName);
        event->data.sound.soundAliasCache = NULL;
      }
    }
    else
    {
      Com_PrintWarning(29, "Scriptable %s has a reference to sound %s, but we can't find the alias list at startup - the sound is probably not loaded (though may be transient)\n", scriptableDef->name, event->data.sound.soundAlias);
      event->data.sound.soundAliasCache = NULL;
    }
  }
}

/*
==============
ScriptableCl_AssociateScriptMoverInstance
==============
*/
void ScriptableCl_AssociateScriptMoverInstance(const LocalClientNum_t localClientNum, const centity_t *const cent)
{
  unsigned int scriptableIndex; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4297, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !ScriptableCl_IsScriptableMoverEntityState(&cent->nextState) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4298, ASSERT_TYPE_ASSERT, "(ScriptableCl_IsScriptableMoverEntityState( &cent->nextState ))", (const char *)&queryFormat, "ScriptableCl_IsScriptableMoverEntityState( &cent->nextState )") )
    __debugbreak();
  if ( !ScriptableCl_GetIndexForEntity(localClientNum, cent, &scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4300, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetIndexForEntity( localClientNum, cent, &scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetIndexForEntity( localClientNum, cent, &scriptableIndex )") )
    __debugbreak();
  ScriptableCl_SetLink(localClientNum, scriptableIndex, SCRIPTABLE_LINK_ENTITY, cent->nextState.number);
}

/*
==============
ScriptableCl_BeginFrame
==============
*/
void ScriptableCl_BeginFrame(const LocalClientNum_t localClientNum, const int serverTime, bool killCamTransition)
{
  __int64 v3; 
  __int64 v7; 
  int v8; 
  __int64 v9; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1864, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableFrame_serverTime ) ) + 0 ) )", "localClientNum doesn't index g_scriptableFrame_serverTime\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
    LODWORD(v9) = 2;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1865, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableFrameKillCamTransition ) ) + 0 ) )", "localClientNum doesn't index g_scriptableFrameKillCamTransition\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  g_scriptableFrame_serverTime[v3] = serverTime;
  g_scriptableFrameKillCamTransition[v3] = killCamTransition;
}

/*
==============
ScriptableCl_CacheWorldStateSP
==============
*/
void ScriptableCl_CacheWorldStateSP(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  ScriptableCompleteState *v3; 
  ScriptableCompleteState *v4; 
  unsigned int replicatedInstanceCount; 
  ScriptableReplicatedInstance *replicatedInstances; 
  __int64 v7; 
  __int64 v8; 
  int v9; 

  v1 = localClientNum;
  v2 = localClientNum;
  if ( !s_scriptableCl_worldCurrent[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4467, ASSERT_TYPE_ASSERT, "(s_scriptableCl_worldCurrent[localClientNum])", (const char *)&queryFormat, "s_scriptableCl_worldCurrent[localClientNum]") )
    __debugbreak();
  if ( !s_scriptableCl_spWorldCached[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4468, ASSERT_TYPE_ASSERT, "(s_scriptableCl_spWorldCached[localClientNum])", (const char *)&queryFormat, "s_scriptableCl_spWorldCached[localClientNum]") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4469, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::SCRIPTABLES_MULTIPLAYER ))", "%s\n\tThis function is intended for SP Only", "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::SCRIPTABLES_MULTIPLAYER )") )
    __debugbreak();
  if ( (unsigned int)v1 >= 2 )
  {
    v9 = 2;
    LODWORD(v7) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4473, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_worldCurrent ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_worldCurrent\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  v3 = s_scriptableCl_worldCurrent[v1];
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v8) = 2;
    LODWORD(v7) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4476, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_worldCurrent ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_worldCurrent\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  v4 = s_scriptableCl_spWorldCached[v1];
  replicatedInstanceCount = v3->replicatedInstanceCount;
  replicatedInstances = v4->replicatedInstances;
  v4->replicatedInstanceCount = replicatedInstanceCount;
  ScriptableCl_CopyReplicatedInstances(v3->replicatedInstances, v3->replicatedInstanceCount, replicatedInstances, replicatedInstanceCount);
  ScriptableCL_CopyPartWorldState(&v3->partWorldState, &v4->partWorldState);
  s_scriptableCl_spWorldUseCache[v2] = 1;
}

/*
==============
ScriptableCl_ClearAllClientsAssociation
==============
*/
void ScriptableCl_ClearAllClientsAssociation(const unsigned int scriptableIndex)
{
  LocalClientNum_t i; 

  for ( i = LOCAL_CLIENT_0; i < SLODWORD(cl_maxLocalClients); ++i )
    ScriptableCl_ClearLink(i, scriptableIndex);
}

/*
==============
ScriptableCl_ClearStandaloneEntityParentUpdate
==============
*/
void ScriptableCl_ClearStandaloneEntityParentUpdate(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  __int64 v2; 
  ScriptableStandaloneParentData *StandaloneEntityParentData; 
  const dvar_t *v5; 
  const ScriptableStandaloneParentData *v6; 
  unsigned __int16 v7; 
  unsigned __int16 *v8; 
  unsigned __int16 *v9; 
  unsigned __int16 v10; 
  unsigned __int16 ParentEntityPreviousNode; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 

  v2 = scriptableIndex;
  ScriptableCommon_AssertCountsInitialized();
  if ( (unsigned int)v2 >= g_scriptableWorldCounts.runtimeInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3503, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetReservedInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetReservedInstanceCount()\n\t%i not in [0, %i)", v2, g_scriptableWorldCounts.runtimeInstanceCount) )
      __debugbreak();
  }
  if ( !ScriptableCl_IsStandaloneServerInstance(localClientNum, v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3504, ASSERT_TYPE_ASSERT, "(ScriptableCl_IsStandaloneServerInstance( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_IsStandaloneServerInstance( localClientNum, scriptableIndex )") )
    __debugbreak();
  StandaloneEntityParentData = ScriptableCl_GetStandaloneEntityParentData(localClientNum);
  v5 = DVARBOOL_scriptable_entity_parenting;
  v6 = StandaloneEntityParentData;
  if ( !DVARBOOL_scriptable_entity_parenting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_entity_parenting") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    if ( (unsigned int)v2 >= 0x800 )
    {
      LODWORD(v13) = 2048;
      LODWORD(v12) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3515, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ( sizeof( *array_counter( parentData.m_parentEntity ) ) + 0 ) )", "scriptableIndex doesn't index parentData.m_parentEntity\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    if ( v6->m_parentEntity[v2] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3516, ASSERT_TYPE_ASSERT, "( parentData.m_parentEntity[scriptableIndex] ) != ( 0xffff )", "%s != %s\n\t%i, %i", "parentData.m_parentEntity[scriptableIndex]", "USHRT_MAX", 0xFFFF, 0xFFFF) )
      __debugbreak();
    v7 = v6->m_parentEntity[v2];
    if ( v7 >= 0x800u )
    {
      LODWORD(v13) = 2048;
      LODWORD(v12) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3519, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( sizeof( *array_counter( parentData.m_assignedHead ) ) + 0 ) )", "entityIndex doesn't index parentData.m_assignedHead\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    v8 = &v6->m_assignedHead[v7];
    if ( *v8 == (_DWORD)v2 )
    {
      v9 = &v6->m_next[v2];
      *v8 = *v9;
    }
    else
    {
      v10 = truncate_cast<unsigned short,unsigned int>(v2);
      ParentEntityPreviousNode = ScriptableCl_FindParentEntityPreviousNode(v6, v7, v10);
      if ( ParentEntityPreviousNode == 0xFFFF )
      {
        LODWORD(v15) = 0xFFFF;
        LODWORD(v14) = 0xFFFF;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3531, ASSERT_TYPE_ASSERT, "( prevIndex ) != ( 0xffff )", "%s != %s\n\t%i, %i", "prevIndex", "USHRT_MAX", v14, v15) )
          __debugbreak();
      }
      if ( v6->m_parentEntity[ParentEntityPreviousNode] == 0xFFFF )
      {
        LODWORD(v15) = 0xFFFF;
        LODWORD(v14) = 0xFFFF;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3532, ASSERT_TYPE_ASSERT, "( parentData.m_parentEntity[prevIndex] ) != ( 0xffff )", "%s != %s\n\t%i, %i", "parentData.m_parentEntity[prevIndex]", "USHRT_MAX", v14, v15) )
          __debugbreak();
      }
      if ( v6->m_next[ParentEntityPreviousNode] != (_DWORD)v2 )
      {
        LODWORD(v15) = v2;
        LODWORD(v14) = v6->m_next[ParentEntityPreviousNode];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3533, ASSERT_TYPE_ASSERT, "( parentData.m_next[prevIndex] ) == ( scriptableIndex )", "%s == %s\n\t%i, %i", "parentData.m_next[prevIndex]", "scriptableIndex", v14, v15) )
          __debugbreak();
      }
      v9 = &v6->m_next[v2];
      v6->m_next[ParentEntityPreviousNode] = *v9;
    }
    *v9 = -1;
    v6->m_parentEntity[v2] = -1;
  }
}

/*
==============
ScriptableCl_ClearStandaloneUpdateLists
==============
*/
void ScriptableCl_ClearStandaloneUpdateLists(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  const ScriptableDef *def; 
  __int64 v5; 
  ScriptableUpdateBitset *UpdateListForScriptable; 
  unsigned int v7; 
  ScriptableCollisionClientContext *InstanceCollisionContext; 
  __int64 v9; 
  __int64 v10; 

  def = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 284, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( (def->flags & 4) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3705, ASSERT_TYPE_ASSERT, "( ( ScriptableDef_IsServerControlled( def ) ) )", "( def->name ) = %s", def->name) )
    __debugbreak();
  if ( (def->flags & 0x2000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3706, ASSERT_TYPE_ASSERT, "( ( ScriptableDef_IsStandaloneRequested( def ) ) )", "( def->name ) = %s", def->name) )
    __debugbreak();
  v5 = scriptableIndex >> 5;
  UpdateListForScriptable = ScriptableCl_GetUpdateListForScriptable(localClientNum, scriptableIndex);
  v7 = 0x80000000 >> (scriptableIndex & 0x1F);
  if ( (unsigned int)v5 >= 0x3D09 )
  {
    LODWORD(v9) = scriptableIndex >> 5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3715, ASSERT_TYPE_ASSERT, "(unsigned)( scrIndexHigh ) < (unsigned)( ( sizeof( *array_counter( r_updateList.shutdownList ) ) + 0 ) )", "scrIndexHigh doesn't index ARRAY_COUNT( r_updateList.shutdownList )\n\t%i not in [0, %i)", v9, 15625) )
      __debugbreak();
  }
  if ( (v7 & UpdateListForScriptable->shutdownList[v5]) != 0 )
  {
    if ( !UpdateListForScriptable->shutdownCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3718, ASSERT_TYPE_ASSERT, "(r_updateList.shutdownCount)", (const char *)&queryFormat, "r_updateList.shutdownCount") )
      __debugbreak();
    UpdateListForScriptable->shutdownList[v5] &= ~v7;
    --UpdateListForScriptable->shutdownCount;
  }
  if ( (unsigned int)v5 >= 0x3D09 )
  {
    LODWORD(v10) = 15625;
    LODWORD(v9) = scriptableIndex >> 5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3724, ASSERT_TYPE_ASSERT, "(unsigned)( scrIndexHigh ) < (unsigned)( ( sizeof( *array_counter( r_updateList.initializationList ) ) + 0 ) )", "scrIndexHigh doesn't index ARRAY_COUNT( r_updateList.initializationList )\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  if ( (v7 & UpdateListForScriptable->initializationList[v5]) != 0 )
  {
    if ( !UpdateListForScriptable->initializationCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3727, ASSERT_TYPE_ASSERT, "(r_updateList.initializationCount)", (const char *)&queryFormat, "r_updateList.initializationCount") )
      __debugbreak();
    UpdateListForScriptable->initializationList[v5] &= ~v7;
    --UpdateListForScriptable->initializationCount;
  }
  InstanceCollisionContext = ScriptableCl_GetInstanceCollisionContext(localClientNum, scriptableIndex);
  InstanceCollisionContext->collisionActiveFlags &= 0xF9u;
  ScriptableCl_MarkPerFrameUpdateRequired(UpdateListForScriptable, scriptableIndex, 0);
}

/*
==============
ScriptableCl_CompareReplicatedInstances
==============
*/
void ScriptableCl_CompareReplicatedInstances(const LocalClientNum_t localClientNum, ScriptableCompleteState *curWorld, const ScriptableReplicatedInstance *nextInstances, const unsigned int nextSnapInstCount, const ScriptablePartWorldGroupState *prevReservedState, const ScriptablePartWorldGroupState *nextReservedState, const unsigned int reservedPartCount)
{
  unsigned int v7; 
  LocalClientNum_t v9; 
  unsigned int replicatedInstanceCount; 
  ScriptableReplicatedInstance *replicatedInstances; 
  unsigned __int16 v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  __int64 v16; 
  unsigned __int16 *p_defIndex; 
  __int64 v18; 
  const ScriptableReplicatedInstance *v19; 
  int v20; 
  unsigned __int16 *v21; 
  int v22; 
  __int64 v23; 
  unsigned __int8 v24; 
  unsigned __int8 v25; 
  unsigned __int16 v26; 
  unsigned __int8 v27; 
  unsigned __int8 v28; 
  unsigned __int16 v29; 
  unsigned __int16 v30; 
  unsigned int v31; 
  __int64 v32; 
  int v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  __int64 v38; 
  __int64 v39; 
  __int64 v42; 
  __int64 v43; 
  ScriptableReplicatedInstance *v44; 
  signed __int64 v45; 
  __int64 v46; 
  __int64 v48; 
  char *v49; 
  __int64 v50; 
  __int16 v51[2048]; 
  unsigned int v52; 
  __int16 v53[2048]; 
  int v54; 

  v7 = nextSnapInstCount;
  v9 = localClientNum;
  if ( !nextInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4088, ASSERT_TYPE_ASSERT, "(nextInstances != nullptr)", (const char *)&queryFormat, "nextInstances != nullptr") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ScriptableCl_UpdateSnapshotReplicatedInstances");
  replicatedInstanceCount = curWorld->replicatedInstanceCount;
  replicatedInstances = curWorld->replicatedInstances;
  v44 = curWorld->replicatedInstances;
  v12 = 0;
  v13 = 0;
  v54 = 0;
  v14 = 0;
  v52 = 0;
  if ( v7 != replicatedInstanceCount )
  {
    LODWORD(v35) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4098, ASSERT_TYPE_ASSERT, "( nextSnapInstCount ) == ( prevInstCount )", "nextSnapInstCount == prevInstCount\n\t%i, %i", v35, replicatedInstanceCount) )
      __debugbreak();
    replicatedInstances = v44;
  }
  v15 = 0;
  if ( replicatedInstanceCount )
  {
    v16 = 0i64;
    v39 = 0i64;
    p_defIndex = &nextInstances->defIndex;
    v49 = (char *)((char *)nextInstances - (char *)replicatedInstances);
    v45 = (char *)replicatedInstances - (char *)nextInstances;
    v48 = (char *)replicatedInstances - (char *)nextInstances + 4;
    v42 = (char *)replicatedInstances - (char *)nextInstances - 1;
    v46 = (char *)replicatedInstances - (char *)nextInstances - 2;
    v43 = (char *)replicatedInstances - (char *)nextInstances - 6;
    v18 = (char *)replicatedInstances - (char *)nextInstances - 10;
    v50 = v18;
    while ( 1 )
    {
      v19 = (const ScriptableReplicatedInstance *)((char *)p_defIndex + v18);
      v20 = *(_DWORD *)((char *)p_defIndex + v18);
      v21 = p_defIndex - 5;
      v22 = *(_DWORD *)(p_defIndex - 5);
      if ( v20 != v22 )
        break;
      if ( v20 != -1 )
      {
        if ( v22 != v15 )
        {
          LODWORD(v36) = v15;
          LODWORD(v35) = *(_DWORD *)(p_defIndex - 5);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4121, ASSERT_TYPE_ASSERT, "( newInstance.instanceIndex ) == ( instanceIndex )", "newInstance.instanceIndex == instanceIndex\n\t%i, %i", v35, v36) )
            __debugbreak();
        }
        if ( v19->instanceIndex != v15 )
        {
          LODWORD(v36) = v15;
          LODWORD(v35) = v19->instanceIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4122, ASSERT_TYPE_ASSERT, "( oldInstance.instanceIndex ) == ( instanceIndex )", "oldInstance.instanceIndex == instanceIndex\n\t%i, %i", v35, v36) )
            __debugbreak();
        }
        if ( v19->instanceIndex != *(_DWORD *)v21 )
        {
          LODWORD(v38) = *(_DWORD *)v21;
          LODWORD(v37) = v19->instanceIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 151, ASSERT_TYPE_ASSERT, "( fromInstance.instanceIndex ) == ( toInstance.instanceIndex )", "%s == %s\n\t%i, %i", "fromInstance.instanceIndex", "toInstance.instanceIndex", v37, v38) )
            __debugbreak();
        }
        v23 = v42;
        v24 = *((_BYTE *)p_defIndex + v42);
        v25 = *((_BYTE *)p_defIndex - 1);
        if ( v24 == v25 && *((_BYTE *)p_defIndex + v46) == *((_BYTE *)p_defIndex - 2) && *(_DWORD *)((char *)p_defIndex + v43) == *(_DWORD *)(p_defIndex - 3) )
        {
          if ( v24 )
          {
            if ( *(unsigned __int16 *)((char *)p_defIndex + v45) == *p_defIndex )
              goto LABEL_58;
          }
          else
          {
            v26 = *(unsigned __int16 *)((char *)p_defIndex + v45);
            if ( v26 != *p_defIndex )
            {
              LODWORD(v38) = *p_defIndex;
              LODWORD(v37) = v26;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 171, ASSERT_TYPE_ASSERT, "( fromInstance.defIndex ) == ( toInstance.defIndex )", "%s == %s\n\t%i, %i", "fromInstance.defIndex", "toInstance.defIndex", v37, v38) )
                __debugbreak();
              v23 = v42;
            }
            if ( *(unsigned __int16 *)((char *)p_defIndex + v48) == *(_WORD *)&v49[(_QWORD)p_defIndex + v48] )
            {
              v24 = *((_BYTE *)p_defIndex + v23);
              v25 = *((_BYTE *)p_defIndex - 1);
LABEL_58:
              if ( v24 != v25 )
              {
                LODWORD(v38) = v25;
                LODWORD(v37) = v24;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4136, ASSERT_TYPE_ASSERT, "( oldInstance.replicatedType ) == ( newInstance.replicatedType )", "%s == %s\n\t%i, %i", "oldInstance.replicatedType", "newInstance.replicatedType", v37, v38) )
                  __debugbreak();
              }
              if ( *(_DWORD *)((char *)p_defIndex + v43) != *(_DWORD *)(p_defIndex - 3) )
              {
                LODWORD(v38) = *(_DWORD *)(p_defIndex - 3);
                LODWORD(v37) = *(_DWORD *)((char *)p_defIndex + v43);
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4137, ASSERT_TYPE_ASSERT, "( oldInstance.partIndex ) == ( newInstance.partIndex )", "%s == %s\n\t%i, %i", "oldInstance.partIndex", "newInstance.partIndex", v37, v38) )
                  __debugbreak();
              }
              v27 = *((_BYTE *)p_defIndex + v46);
              v28 = *((_BYTE *)p_defIndex - 2);
              if ( v27 != v28 )
              {
                LODWORD(v38) = v28;
                LODWORD(v37) = v27;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4138, ASSERT_TYPE_ASSERT, "( oldInstance.partCount ) == ( newInstance.partCount )", "%s == %s\n\t%i, %i", "oldInstance.partCount", "newInstance.partCount", v37, v38) )
                  __debugbreak();
              }
              if ( *(_DWORD *)(p_defIndex - 3) + (unsigned int)*((unsigned __int8 *)p_defIndex - 2) > reservedPartCount )
              {
                LODWORD(v38) = reservedPartCount;
                LODWORD(v37) = *(_DWORD *)(p_defIndex - 3) + *((unsigned __int8 *)p_defIndex - 2);
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4139, ASSERT_TYPE_ASSERT, "( newInstance.partIndex + newInstance.partCount ) <= ( reservedPartCount )", "%s <= %s\n\t%i, %i", "newInstance.partIndex + newInstance.partCount", "reservedPartCount", v37, v38) )
                  __debugbreak();
              }
              if ( ScriptableCommon_HaveInstanceFieldsChanged(v19, (const ScriptableReplicatedInstance *)(p_defIndex - 5)) )
                ScriptableCL_ModifiedSnapshotInstance(localClientNum, (const ScriptableReplicatedInstance *)(p_defIndex - 5));
              if ( memcmp_0(&prevReservedState->partData[*(unsigned int *)((char *)p_defIndex + v43)], &nextReservedState->partData[*(unsigned int *)(p_defIndex - 3)], *((unsigned __int8 *)p_defIndex - 2)) )
                ScriptableCl_MarkReservedInstanceChanged(localClientNum, v15);
LABEL_84:
              v16 = v39;
              goto LABEL_85;
            }
          }
        }
        v29 = truncate_cast<unsigned short,unsigned int>(v15);
        if ( v13 >= 0x800 )
        {
          LODWORD(v36) = 2048;
          LODWORD(v35) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( m_count ) < (unsigned)( ARRAY_SIZE )", "m_count doesn't index ARRAY_SIZE\n\t%i not in [0, %i)", v35, v36) )
            __debugbreak();
        }
        v53[v13] = v29;
        v13 = ++v54;
        v30 = truncate_cast<unsigned short,unsigned int>(v15);
        if ( v14 >= 0x800 )
        {
          LODWORD(v36) = 2048;
          LODWORD(v35) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( m_count ) < (unsigned)( ARRAY_SIZE )", "m_count doesn't index ARRAY_SIZE\n\t%i not in [0, %i)", v35, v36) )
            __debugbreak();
        }
        v51[v14] = v30;
LABEL_23:
        v14 = ++v52;
        goto LABEL_84;
      }
      if ( v22 != -1 )
      {
        LODWORD(v36) = -1;
        LODWORD(v35) = *(_DWORD *)(p_defIndex - 5);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4158, ASSERT_TYPE_ASSERT, "( newInstance.instanceIndex ) == ( SCRIPTABLE_INVALID_INSTANCE_INDEX )", "newInstance.instanceIndex == SCRIPTABLE_INVALID_INSTANCE_INDEX\n\t%i, %i", v35, v36) )
          __debugbreak();
        goto LABEL_84;
      }
LABEL_85:
      ++v15;
      v39 = ++v16;
      p_defIndex += 16;
      v18 = v50;
      if ( v15 >= replicatedInstanceCount )
      {
        v12 = 0;
        v9 = localClientNum;
        v7 = nextSnapInstCount;
        goto LABEL_87;
      }
    }
    if ( v20 != -1 )
    {
      if ( v22 != -1 )
      {
        LODWORD(v36) = -1;
        LODWORD(v35) = *(_DWORD *)(p_defIndex - 5);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4114, ASSERT_TYPE_ASSERT, "( newInstance.instanceIndex ) == ( SCRIPTABLE_INVALID_INSTANCE_INDEX )", "newInstance.instanceIndex == SCRIPTABLE_INVALID_INSTANCE_INDEX\n\t%i, %i", v35, v36) )
          __debugbreak();
      }
      if ( v19->instanceIndex != v15 )
      {
        LODWORD(v36) = v15;
        LODWORD(v35) = v19->instanceIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4115, ASSERT_TYPE_ASSERT, "( oldInstance.instanceIndex ) == ( instanceIndex )", "oldInstance.instanceIndex == instanceIndex\n\t%i, %i", v35, v36) )
          __debugbreak();
      }
      if ( v15 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v15, "unsigned", v39) )
        __debugbreak();
      if ( v13 >= 0x800 )
      {
        LODWORD(v36) = 2048;
        LODWORD(v35) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( m_count ) < (unsigned)( ARRAY_SIZE )", "m_count doesn't index ARRAY_SIZE\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      v53[v13] = v15;
      v13 = ++v54;
      goto LABEL_84;
    }
    if ( v22 != v15 )
    {
      LODWORD(v36) = v15;
      LODWORD(v35) = *(_DWORD *)(p_defIndex - 5);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4109, ASSERT_TYPE_ASSERT, "( newInstance.instanceIndex ) == ( instanceIndex )", "newInstance.instanceIndex == instanceIndex\n\t%i, %i", v35, v36) )
        __debugbreak();
      v16 = v39;
    }
    if ( v15 > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)v15, "unsigned", v16) )
      __debugbreak();
    if ( v14 >= 0x800 )
    {
      LODWORD(v36) = 2048;
      LODWORD(v35) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 38, ASSERT_TYPE_ASSERT, "(unsigned)( m_count ) < (unsigned)( ARRAY_SIZE )", "m_count doesn't index ARRAY_SIZE\n\t%i not in [0, %i)", v35, v36) )
        __debugbreak();
    }
    v51[v14] = v15;
    goto LABEL_23;
  }
LABEL_87:
  v31 = 0;
  if ( v13 )
  {
    do
    {
      v32 = (unsigned __int16)v53[v31];
      if ( (unsigned int)v32 >= replicatedInstanceCount )
      {
        LODWORD(v36) = replicatedInstanceCount;
        LODWORD(v35) = (unsigned __int16)v53[v31];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4168, ASSERT_TYPE_ASSERT, "(unsigned)( instanceIndex ) < (unsigned)( prevInstCount )", "instanceIndex doesn't index prevInstCount\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      ScriptableCl_RemovedSnapshotScriptable(v9, &v44[v32]);
      ++v31;
    }
    while ( v31 < v13 );
    v14 = v52;
    v12 = 0;
    v7 = nextSnapInstCount;
  }
  if ( v14 )
  {
    v33 = 0;
    do
    {
      v34 = (unsigned __int16)v51[v33];
      if ( (unsigned int)v34 >= v7 )
      {
        LODWORD(v36) = v7;
        LODWORD(v35) = v34;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4175, ASSERT_TYPE_ASSERT, "(unsigned)( instanceIndex ) < (unsigned)( nextSnapInstCount )", "instanceIndex doesn't index nextSnapInstCount\n\t%i not in [0, %i)", v35, v36) )
          __debugbreak();
      }
      ScriptableCl_AddedSnapshotScriptable(v9, &nextInstances[v34]);
      v33 = ++v12;
    }
    while ( v12 < v14 );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
ScriptableCl_ConvertStandaloneParentEntityPoseToWorldSpace
==============
*/
void ScriptableCl_ConvertStandaloneParentEntityPoseToWorldSpace(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const centity_t *const parent, const vec3_t *localOrigin, const vec3_t *localAngles, vec3_t *outWorldOrigin, vec3_t *outWorldAngles)
{
  tmat43_t<vec3_t> v16; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> axis; 

  _RDI = localOrigin;
  _RSI = outWorldOrigin;
  if ( !parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3444, ASSERT_TYPE_ASSERT, "(parent)", (const char *)&queryFormat, "parent") )
    __debugbreak();
  AnglesToAxis(&parent->pose.angles, (tmat33_t<vec3_t> *)&axis);
  CG_GetPoseOrigin(&parent->pose, &axis.m[3]);
  AnglesToAxis(localAngles, (tmat33_t<vec3_t> *)&v16);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rdi+4]
    vmovss  [rsp+0E8h+var_94], xmm0
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+0E8h+var_8C], xmm0
    vmovss  [rsp+0E8h+var_90], xmm1
  }
  MatrixMultiply43(&v16, &axis, &out);
  AxisToAngles((const tmat33_t<vec3_t> *)&out, outWorldAngles);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0E8h+out+24h]
    vmovss  xmm1, dword ptr [rsp+0E8h+out+28h]
    vmovss  dword ptr [rsi], xmm0
    vmovss  xmm0, dword ptr [rsp+0E8h+out+2Ch]
    vmovss  dword ptr [rsi+8], xmm0
    vmovss  dword ptr [rsi+4], xmm1
  }
}

/*
==============
ScriptableCl_CopyReplicatedInstances
==============
*/
void ScriptableCl_CopyReplicatedInstances(const ScriptableReplicatedInstance *sourceActiveInstances, const unsigned int sourceInstanceCount, ScriptableReplicatedInstance *destInstances, const unsigned int destInstanceCount)
{
  __int64 v4; 

  v4 = sourceInstanceCount;
  if ( !destInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 815, ASSERT_TYPE_ASSERT, "(destInstances)", (const char *)&queryFormat, "destInstances") )
    __debugbreak();
  if ( !sourceActiveInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 816, ASSERT_TYPE_ASSERT, "(sourceActiveInstances)", (const char *)&queryFormat, "sourceActiveInstances") )
    __debugbreak();
  ScriptableCommon_VerifyInstances(sourceActiveInstances, v4);
  ScriptableCommon_ClearReplicatedInstances(destInstances, destInstanceCount);
  memcpy_0(destInstances, sourceActiveInstances, 32 * v4);
}

/*
==============
ScriptableCl_Debug_DrawLoot
==============
*/
void ScriptableCl_Debug_DrawLoot(const LocalClientNum_t localClientNum)
{
  __int64 v7; 
  unsigned int runtimeInstanceCount; 
  unsigned int v9; 
  char v24; 
  char v25; 
  const BG_SpawnGroup_Loot_ItemDef *LootItemDef; 
  __int64 rarity; 
  __int64 v44; 
  __int64 v45; 
  vec3_t outPos; 
  vec3_t end; 
  vec3_t start; 
  vec4_t color; 

  v7 = localClientNum;
  CL_GetViewPos(localClientNum, &outPos);
  ScriptableCommon_AssertCountsInitialized();
  runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
  v9 = g_scriptableWorldCounts.runtimeInstanceCount + s_scriptableClLootCount[v7];
  if ( g_scriptableWorldCounts.runtimeInstanceCount < v9 )
  {
    __asm
    {
      vmovaps [rsp+118h+var_38], xmm6
      vmovss  xmm6, cs:__real@40a00000
      vmovaps [rsp+118h+var_48], xmm7
      vmovss  xmm7, cs:__real@42200000
      vmovaps [rsp+118h+var_58], xmm8
      vmovss  xmm8, dword ptr [rsp+118h+outPos+8]
      vmovaps [rsp+118h+var_68], xmm9
      vmovss  xmm9, dword ptr [rsp+118h+outPos+4]
      vmovaps [rsp+118h+var_78], xmm10
      vmovss  xmm10, dword ptr [rsp+118h+outPos]
      vmovaps [rsp+118h+var_88], xmm11
      vmovss  xmm11, cs:__real@4f1502f9
    }
    do
    {
      ScriptableCl_GetInstanceOrigin((const LocalClientNum_t)v7, runtimeInstanceCount, &outPos);
      __asm
      {
        vsubss  xmm0, xmm9, dword ptr [rsp+118h+outPos+4]
        vsubss  xmm2, xmm10, dword ptr [rsp+118h+outPos]
        vsubss  xmm3, xmm8, dword ptr [rsp+118h+outPos+8]
        vmulss  xmm1, xmm0, xmm0
        vmulss  xmm0, xmm2, xmm2
        vaddss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm2, xmm2, xmm1
        vcomiss xmm2, xmm11
      }
      if ( v24 | v25 )
      {
        LootItemDef = ScriptableCl_GetLootItemDef((const LocalClientNum_t)v7, runtimeInstanceCount);
        if ( !LootItemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 6048, ASSERT_TYPE_ASSERT, "(lootItemDef)", (const char *)&queryFormat, "lootItemDef") )
          __debugbreak();
        __asm
        {
          vaddss  xmm0, xmm6, dword ptr [rsp+118h+outPos+8]
          vmovss  xmm3, dword ptr [rsp+118h+outPos]
          vmovss  xmm2, dword ptr [rsp+118h+outPos+4]
          vmovss  dword ptr [rsp+118h+start+8], xmm0
          vaddss  xmm0, xmm7, dword ptr [rsp+118h+outPos+8]
          vmovss  dword ptr [rsp+118h+end+8], xmm0
          vmovss  dword ptr [rsp+118h+start], xmm3
          vmovss  dword ptr [rsp+118h+start+4], xmm2
          vmovss  dword ptr [rsp+118h+end], xmm3
          vmovss  dword ptr [rsp+118h+end+4], xmm2
        }
        rarity = LootItemDef->rarity;
        if ( (unsigned int)rarity >= 8 )
        {
          LODWORD(v45) = 8;
          LODWORD(v44) = LootItemDef->rarity;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4991, ASSERT_TYPE_ASSERT, "(unsigned)( rarity ) < (unsigned)( 8 )", "rarity doesn't index SPAWNGROUP_LOOT_MAX_RARITIES\n\t%i not in [0, %i)", v44, v45) )
            __debugbreak();
        }
        _RDI = s_scriptableClLootTable[v7];
        if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4994, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
          __debugbreak();
        _RCX = 5 * rarity;
        __asm
        {
          vmovd   xmm0, dword ptr [rdi+rcx*8+2E6C8h]
          vpmovzxbd xmm1, xmm0
          vcvtdq2ps xmm3, xmm1
          vmulps  xmm0, xmm3, cs:__xmm@3b8080813b8080813b8080813b808081
          vmovups xmmword ptr [rsp+118h+color], xmm0
        }
        CG_DebugLine(&start, &end, &color, 0, 0);
      }
      ++runtimeInstanceCount;
    }
    while ( runtimeInstanceCount < v9 );
    __asm
    {
      vmovaps xmm11, [rsp+118h+var_88]
      vmovaps xmm10, [rsp+118h+var_78]
      vmovaps xmm9, [rsp+118h+var_68]
      vmovaps xmm8, [rsp+118h+var_58]
      vmovaps xmm7, [rsp+118h+var_48]
      vmovaps xmm6, [rsp+118h+var_38]
    }
  }
}

/*
==============
ScriptableCl_DestroyMemory
==============
*/
void ScriptableCl_DestroyMemory(void)
{
  ScriptableReadChangeQueue *v0; 
  unsigned int v1; 
  __int64 v2; 
  HunkUser *v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 

  v0 = s_scriptableCl_changeQueue;
  v1 = 0;
  v2 = 0i64;
  do
  {
    s_scriptableCl_worldCurrent[v2] = NULL;
    s_scriptableCl_spWorldCached[v2] = NULL;
    g_scriptableCl_instanceContexts[v2] = NULL;
    if ( v1 >= 2 )
    {
      LODWORD(v6) = 2;
      LODWORD(v4) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 337, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_changeQueue ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_changeQueue\n\t%i not in [0, %i)", v4, v6) )
        __debugbreak();
    }
    v0->buffer = NULL;
    v0->capacity = 0;
    if ( v1 >= 2 )
    {
      LODWORD(v6) = 2;
      LODWORD(v4) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 512, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_serverFixedPartsChangedBits ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_serverFixedPartsChangedBits\n\t%i not in [0, %i)", v4, v6) )
        __debugbreak();
      LODWORD(v7) = 2;
      LODWORD(v5) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 513, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_reservedInstancesChangedBits ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_reservedInstancesChangedBits\n\t%i not in [0, %i)", v5, v7) )
        __debugbreak();
    }
    s_scriptableCl_serverFixedPartsChangedBits[v2].partBitsArray = NULL;
    s_scriptableCl_reservedInstancesChangedBits[v2] = NULL;
    if ( v1 >= 2 )
    {
      LODWORD(v6) = 2;
      LODWORD(v4) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 517, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_reverseReservedWorldMap ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_reverseReservedWorldMap\n\t%i not in [0, %i)", v4, v6) )
        __debugbreak();
    }
    v3 = s_ScriptableClRuntimeHunk[v2];
    s_scriptableCl_reverseReservedWorldMap[v2] = NULL;
    if ( v3 )
    {
      Mem_HunkUser_Destroy(v3);
      s_ScriptableClRuntimeHunk[v2] = NULL;
    }
    ++v1;
    ++v0;
    ++v2;
  }
  while ( (int)v1 < 2 );
  g_scriptableCl_fixedWorldMap.indicesCount = 0;
  g_scriptableCl_fixedWorldMap.indices = NULL;
  s_scriptableCl_reverseFixedWorldMap = NULL;
  s_scriptableCl_reverseFixedWorldMapCount = 0;
  s_scriptableCl_reverseReservedWorldMapCount = 0;
  s_scriptableCl_serverFixedPartsChangedArraySize = 0;
  s_scriptableCl_serverReservedInstancesChangedArraySize = 0;
}

/*
==============
ScriptableCl_ExecuteUpdateListChanges
==============
*/
void ScriptableCl_ExecuteUpdateListChanges(const LocalClientNum_t localClientNum, ScriptableUpdateBitset *r_updateList, const unsigned int updateWordCount)
{
  LocalClientNum_t v5; 
  __int64 v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  __int64 v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  const ScriptableDef *def; 
  int flags; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  unsigned int v17; 
  unsigned int collisionActivationCount; 
  __int64 i; 
  __int64 v20; 
  __int64 v21; 

  v5 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF008008, "ScriptableCl_ExecuteUpdateList");
  if ( r_updateList->initializationCount )
  {
    Sys_ProfBeginNamedEvent(0xFF008008, "ScriptableClUpdateClient_Init");
    if ( updateWordCount > 0x3D09 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3029, ASSERT_TYPE_ASSERT, "( updateWordCount ) <= ( static_cast<uint>( ( sizeof( *array_counter( r_updateList.initializationList ) ) + 0 ) ) )", "%s <= %s\n\t%i, %i", "updateWordCount", "static_cast<uint>( ARRAY_COUNT( r_updateList.initializationList ) )", updateWordCount, 15625) )
      __debugbreak();
    LODWORD(v6) = 0;
    v7 = 0;
    if ( updateWordCount )
      v7 = r_updateList->initializationList[0];
    while ( v7 )
    {
LABEL_10:
      v8 = __lzcnt(v7);
      v9 = v8 + 32 * v6;
      if ( v8 >= 0x20 )
      {
        LODWORD(v21) = 32;
        LODWORD(v20) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      if ( (v7 & (0x80000000 >> v8)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      v7 &= ~(0x80000000 >> v8);
      if ( !r_updateList->initializationCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3033, ASSERT_TYPE_ASSERT, "(r_updateList.initializationCount)", (const char *)&queryFormat, "r_updateList.initializationCount") )
        __debugbreak();
      v5 = localClientNum;
      ScriptableCl_Update_InitInstance(localClientNum, v9);
      --r_updateList->initializationCount;
    }
    while ( 1 )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= updateWordCount )
        break;
      v7 = r_updateList->initializationList[v6];
      if ( v7 )
        goto LABEL_10;
    }
    if ( r_updateList->initializationCount )
    {
      LODWORD(v21) = r_updateList->initializationCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3042, ASSERT_TYPE_ASSERT, "(r_updateList.initializationCount == 0)", "%s\n\tDid not initialize all the scriptables that were queued (%i left)", "r_updateList.initializationCount == 0", v21) )
        __debugbreak();
    }
    r_updateList->initializationCount = 0;
    memset_0(r_updateList->initializationList, 0, sizeof(r_updateList->initializationList));
    Sys_ProfEndNamedEvent();
  }
  if ( r_updateList->shutdownCount )
  {
    Sys_ProfBeginNamedEvent(0xFF008008, "ScriptableClUpdateClient_Shutdown");
    LODWORD(v10) = 0;
    v11 = 0;
    if ( updateWordCount )
      v11 = r_updateList->shutdownList[0];
    while ( v11 )
    {
LABEL_30:
      v12 = __lzcnt(v11);
      v13 = v12 + 32 * v10;
      if ( v12 >= 0x20 )
      {
        LODWORD(v21) = 32;
        LODWORD(v20) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      if ( (v11 & (0x80000000 >> v12)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      v11 &= ~(0x80000000 >> v12);
      if ( !r_updateList->shutdownCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3057, ASSERT_TYPE_ASSERT, "(r_updateList.shutdownCount)", (const char *)&queryFormat, "r_updateList.shutdownCount") )
        __debugbreak();
      def = ScriptableCl_GetInstanceCommonContext(localClientNum, v13)->def;
      if ( !def )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2227, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 276, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
          __debugbreak();
      }
      flags = def->flags;
      if ( (flags & 2) != 0 && (flags & 0x2000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2228, ASSERT_TYPE_ASSERT, "(!ScriptableDef_HasServerInstance( def ) || !ScriptableDef_HasEntitySupport( def ))", (const char *)&queryFormat, "!ScriptableDef_HasServerInstance( def ) || !ScriptableDef_HasEntitySupport( def )") )
        __debugbreak();
      InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, v13);
      if ( (*((_BYTE *)InstanceCommonContext + 60) & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2233, ASSERT_TYPE_ASSERT, "(r_commonContext.needsShutdown)", (const char *)&queryFormat, "r_commonContext.needsShutdown") )
        __debugbreak();
      if ( (*((_BYTE *)InstanceCommonContext + 60) & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2234, ASSERT_TYPE_ASSERT, "(!r_commonContext.needsInitialization)", (const char *)&queryFormat, "!r_commonContext.needsInitialization") )
        __debugbreak();
      v17 = v13;
      v5 = localClientNum;
      ScriptableCl_ShutdownInstance(localClientNum, v17, 0);
      if ( localClientNum == LOCAL_CLIENT_0 )
      {
        Scriptable_Analytics_AddRuntimeMemoryCount(Scriptable_Analytics_Zone_C_Clipmap, -def->eventStreamSizeRequiredClient);
        Scriptable_Analytics_AddPartCount(Scriptable_Analytics_Zone_C_Clipmap, -def->numParts);
        Scriptable_Analytics_AddScriptableCount(Scriptable_Analytics_Zone_C_Clipmap, -1);
      }
      *((_BYTE *)InstanceCommonContext + 60) &= 0xF9u;
      --r_updateList->shutdownCount;
    }
    while ( 1 )
    {
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= updateWordCount )
        break;
      v11 = r_updateList->shutdownList[v10];
      if ( v11 )
        goto LABEL_30;
    }
    if ( r_updateList->shutdownCount )
    {
      LODWORD(v21) = r_updateList->shutdownCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3066, ASSERT_TYPE_ASSERT, "(r_updateList.shutdownCount == 0)", "%s\n\tDid not shutdown all the scriptables that were queued (%i left)", "r_updateList.shutdownCount == 0", v21) )
        __debugbreak();
    }
    r_updateList->shutdownCount = 0;
    memset_0(r_updateList->shutdownList, 0, sizeof(r_updateList->shutdownList));
    Sys_ProfEndNamedEvent();
  }
  if ( r_updateList->collisionActivationCount )
  {
    Sys_ProfBeginNamedEvent(0xFF008008, "ScriptableClUpdateClient_CollisionActivation");
    collisionActivationCount = r_updateList->collisionActivationCount;
    if ( collisionActivationCount - 1 >= 0x80 )
    {
      LODWORD(v21) = 128;
      LODWORD(v20) = collisionActivationCount - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3076, ASSERT_TYPE_ASSERT, "(unsigned)( r_updateList.collisionActivationCount - 1 ) < (unsigned)( ( sizeof( *array_counter( r_updateList.collisionActivationQueue ) ) + 0 ) )", "r_updateList.collisionActivationCount - 1 doesn't index r_updateList.collisionActivationQueue\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
    }
    for ( i = 0i64; (unsigned int)i < r_updateList->collisionActivationCount; i = (unsigned int)(i + 1) )
      ScriptableCl_UpdateCollisionActivation(v5, r_updateList->collisionActivationQueue[i]);
    r_updateList->collisionActivationCount = 0;
    Sys_ProfEndNamedEvent();
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
ScriptableCl_FindParentEntityPreviousNode
==============
*/
__int64 ScriptableCl_FindParentEntityPreviousNode(const ScriptableStandaloneParentData *parentData, const unsigned int entityIndex, const unsigned __int16 lookup)
{
  __int64 v3; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  unsigned __int16 *v9; 
  __int64 v11; 
  __int64 v12; 

  v3 = entityIndex;
  if ( entityIndex >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3399, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( sizeof( *array_counter( parentData.m_assignedHead ) ) + 0 ) )", "entityIndex doesn't index parentData.m_assignedHead\n\t%i not in [0, %i)", entityIndex, 2048) )
    __debugbreak();
  v6 = parentData->m_assignedHead[v3];
  v7 = v6;
  if ( parentData->m_parentEntity[v6] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3401, ASSERT_TYPE_ASSERT, "( parentData.m_parentEntity[headIndex] ) != ( 0xffff )", "%s != %s\n\t%i, %i", "parentData.m_parentEntity[headIndex]", "USHRT_MAX", 0xFFFF, 0xFFFF) )
    __debugbreak();
  if ( (_WORD)v6 == lookup )
  {
    LODWORD(v12) = lookup;
    LODWORD(v11) = (unsigned __int16)v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3403, ASSERT_TYPE_ASSERT, "( headIndex ) != ( lookup )", "%s != %s\n\t%i, %i", "headIndex", "lookup", v11, v12) )
      __debugbreak();
  }
  LOWORD(v8) = v6;
  if ( parentData->m_next[v6] != lookup )
  {
    do
    {
      v8 = parentData->m_next[v7];
      v7 = v8;
      if ( parentData->m_parentEntity[v8] == 0xFFFF )
      {
        LODWORD(v12) = 0xFFFF;
        LODWORD(v11) = 0xFFFF;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3410, ASSERT_TYPE_ASSERT, "( parentData.m_parentEntity[index] ) != ( 0xffff )", "%s != %s\n\t%i, %i", "parentData.m_parentEntity[index]", "USHRT_MAX", v11, v12) )
          __debugbreak();
      }
      if ( (_WORD)v8 == lookup )
      {
        LODWORD(v12) = lookup;
        LODWORD(v11) = (unsigned __int16)v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3411, ASSERT_TYPE_ASSERT, "( index ) != ( lookup )", "%s != %s\n\t%i, %i", "index", "lookup", v11, v12) )
          __debugbreak();
      }
      if ( (_WORD)v8 == (_WORD)v6 )
      {
        LODWORD(v12) = (unsigned __int16)v6;
        LODWORD(v11) = (unsigned __int16)v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3412, ASSERT_TYPE_ASSERT, "( index ) != ( headIndex )", "%s != %s\n\t%i, %i", "index", "headIndex", v11, v12) )
          __debugbreak();
      }
      if ( (_WORD)v8 == 0xFFFF )
      {
        LODWORD(v12) = 0xFFFF;
        LODWORD(v11) = 0xFFFF;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3413, ASSERT_TYPE_ASSERT, "( index ) != ( 0xffff )", "%s != %s\n\t%i, %i", "index", "USHRT_MAX", v11, v12) )
          __debugbreak();
      }
    }
    while ( parentData->m_next[v8] != lookup );
  }
  v9 = &parentData->m_next[(unsigned __int16)v8];
  if ( *v9 != lookup )
  {
    LODWORD(v12) = lookup;
    LODWORD(v11) = *v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3416, ASSERT_TYPE_ASSERT, "( parentData.m_next[index] ) == ( lookup )", "%s == %s\n\t%i, %i", "parentData.m_next[index]", "lookup", v11, v12) )
      __debugbreak();
  }
  if ( *v9 == (_WORD)v6 )
  {
    LODWORD(v12) = (unsigned __int16)v6;
    LODWORD(v11) = *v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3417, ASSERT_TYPE_ASSERT, "( parentData.m_next[index] ) != ( headIndex )", "%s != %s\n\t%i, %i", "parentData.m_next[index]", "headIndex", v11, v12) )
      __debugbreak();
  }
  return (unsigned __int16)v8;
}

/*
==============
ScriptableCl_GetCache
==============
*/
const BG_SpawnGroup_Loot_Cache *ScriptableCl_GetCache(const LocalClientNum_t localClientNum, const unsigned int scriptableInstanceIndex, const unsigned __int8 setIndex)
{
  __int64 v3; 
  BG_SpawnGroup_Loot_Caches **v6; 
  const BG_SpawnGroup_Loot_ItemDef *LootItemDef; 
  unsigned __int8 cacheTypeIndex; 
  unsigned __int8 cacheTypeCount; 
  __int64 v10; 
  unsigned __int16 v11; 
  int v12; 
  __int64 v13; 
  unsigned __int16 cacheCount; 
  __int64 v16; 
  __int64 v17; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2711, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableClLootCaches ) ) + 0 ) )", "localClientNum doesn't index s_scriptableClLootCaches\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v6 = &s_scriptableClLootCaches[v3];
  if ( !*v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2712, ASSERT_TYPE_ASSERT, "( ( s_scriptableClLootCaches[localClientNum] != nullptr ) )", "( s_scriptableClLootCaches[localClientNum] ) = %p", NULL) )
    __debugbreak();
  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableInstanceIndex >= g_scriptableWorldCounts.runtimeInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    v13 = scriptableInstanceIndex - g_scriptableWorldCounts.runtimeInstanceCount;
    if ( (unsigned int)v13 >= 0x4E20 )
    {
      LODWORD(v17) = 20000;
      LODWORD(v16) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2731, ASSERT_TYPE_ASSERT, "(unsigned)( spawnedItemIndex ) < (unsigned)( ( sizeof( *array_counter( s_scriptableClLootCaches[localClientNum]->itemSpawnedIndexToCacheIndex ) ) + 0 ) )", "spawnedItemIndex doesn't index s_scriptableClLootCaches[localClientNum]->itemSpawnedIndexToCacheIndex\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    cacheCount = (*v6)->cacheCount;
    v11 = setIndex + (*v6)->itemSpawnedIndexToCacheIndex[v13];
    if ( v11 > cacheCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2734, ASSERT_TYPE_ASSERT, "( cacheIndex ) <= ( s_scriptableClLootCaches[localClientNum]->cacheCount )", "%s <= %s\n\t%u, %u", "cacheIndex", "s_scriptableClLootCaches[localClientNum]->cacheCount", v11, cacheCount) )
      __debugbreak();
    if ( v11 >= 0x1F40u )
    {
      v12 = 2735;
LABEL_39:
      LODWORD(v17) = 8000;
      LODWORD(v16) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", v12, ASSERT_TYPE_ASSERT, "(unsigned)( cacheIndex ) < (unsigned)( ( sizeof( *array_counter( s_scriptableClLootCaches[localClientNum]->caches ) ) + 0 ) )", "cacheIndex doesn't index s_scriptableClLootCaches[localClientNum]->caches\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
  }
  else
  {
    LootItemDef = ScriptableCl_GetLootItemDef((const LocalClientNum_t)v3, scriptableInstanceIndex);
    if ( !LootItemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2717, ASSERT_TYPE_ASSERT, "(lootItemDef)", (const char *)&queryFormat, "lootItemDef") )
      __debugbreak();
    if ( !LootItemDef->cacheTypeIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2718, ASSERT_TYPE_ASSERT, "(lootItemDef->cacheTypeIndex != 0)", (const char *)&queryFormat, "lootItemDef->cacheTypeIndex != SPAWNGROUP_LOOT_CACHE_TYPE_NONE") )
      __debugbreak();
    cacheTypeIndex = LootItemDef->cacheTypeIndex;
    if ( (unsigned int)v3 >= 2 )
    {
      LODWORD(v17) = 2;
      LODWORD(v16) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2701, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableClLootCaches ) ) + 0 ) )", "localClientNum doesn't index s_scriptableClLootCaches\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    if ( !*v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2702, ASSERT_TYPE_ASSERT, "( ( s_scriptableClLootCaches[localClientNum] != nullptr ) )", "( s_scriptableClLootCaches[localClientNum] ) = %p", NULL) )
      __debugbreak();
    cacheTypeCount = (*v6)->cacheTypeCount;
    if ( cacheTypeIndex > cacheTypeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2703, ASSERT_TYPE_ASSERT, "( cacheTypeIndex ) <= ( s_scriptableClLootCaches[localClientNum]->cacheTypeCount )", "%s <= %s\n\t%u, %u", "cacheTypeIndex", "s_scriptableClLootCaches[localClientNum]->cacheTypeCount", cacheTypeIndex, cacheTypeCount) )
      __debugbreak();
    if ( cacheTypeIndex >= 0x32u )
    {
      LODWORD(v17) = 50;
      LODWORD(v16) = cacheTypeIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2704, ASSERT_TYPE_ASSERT, "(unsigned)( cacheTypeIndex ) < (unsigned)( ( sizeof( *array_counter( s_scriptableClLootCaches[localClientNum]->cacheTypes ) ) + 0 ) )", "cacheTypeIndex doesn't index s_scriptableClLootCaches[localClientNum]->cacheTypes\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    v10 = (__int64)*v6 + 544 * cacheTypeIndex;
    if ( !*(_WORD *)(v10 + 200016) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2721, ASSERT_TYPE_ASSERT, "(cacheType->scriptPoolCount > 0)", (const char *)&queryFormat, "cacheType->scriptPoolCount > 0") )
      __debugbreak();
    v11 = *(_WORD *)(v10 + 200014) + scriptableInstanceIndex % *(unsigned __int16 *)(v10 + 200016);
    if ( v11 >= 0x1F40u )
    {
      v12 = 2725;
      goto LABEL_39;
    }
  }
  return (const BG_SpawnGroup_Loot_Cache *)((char *)*v6 + 25 * v11);
}

/*
==============
ScriptableCl_GetCacheType
==============
*/
BG_SpawnGroup_Loot_CacheType *ScriptableCl_GetCacheType(const LocalClientNum_t localClientNum, const unsigned __int8 cacheTypeIndex)
{
  __int64 v2; 
  bool v4; 
  BG_SpawnGroup_Loot_Caches **v5; 
  unsigned __int8 cacheTypeCount; 
  __int64 v8; 
  __int64 v10; 
  int v11; 
  int v12; 
  int v13; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v11 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2701, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableClLootCaches ) ) + 0 ) )", "localClientNum doesn't index s_scriptableClLootCaches\n\t%i not in [0, %i)", localClientNum, v11) )
      __debugbreak();
  }
  v4 = s_scriptableClLootCaches[v2] == NULL;
  v5 = &s_scriptableClLootCaches[v2];
  if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2702, ASSERT_TYPE_ASSERT, "( ( s_scriptableClLootCaches[localClientNum] != nullptr ) )", "( s_scriptableClLootCaches[localClientNum] ) = %p", NULL) )
    __debugbreak();
  cacheTypeCount = (*v5)->cacheTypeCount;
  if ( cacheTypeIndex > cacheTypeCount )
  {
    v13 = cacheTypeCount;
    v12 = cacheTypeIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2703, ASSERT_TYPE_ASSERT, "( cacheTypeIndex ) <= ( s_scriptableClLootCaches[localClientNum]->cacheTypeCount )", "%s <= %s\n\t%u, %u", "cacheTypeIndex", "s_scriptableClLootCaches[localClientNum]->cacheTypeCount", v12, v13) )
      __debugbreak();
  }
  if ( cacheTypeIndex >= 0x32u )
  {
    LODWORD(v10) = 50;
    LODWORD(v8) = cacheTypeIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2704, ASSERT_TYPE_ASSERT, "(unsigned)( cacheTypeIndex ) < (unsigned)( ( sizeof( *array_counter( s_scriptableClLootCaches[localClientNum]->cacheTypes ) ) + 0 ) )", "cacheTypeIndex doesn't index s_scriptableClLootCaches[localClientNum]->cacheTypes\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  return &(*v5)->cacheTypes[cacheTypeIndex];
}

/*
==============
ScriptableCl_GetCallbackTable
==============
*/
ScriptableEventCallbackTable *ScriptableCl_GetCallbackTable()
{
  return &s_clCallbackTable;
}

/*
==============
ScriptableCl_GetChangeQueue
==============
*/
ScriptableReadChangeQueue *ScriptableCl_GetChangeQueue(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 337, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_changeQueue ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_changeQueue\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return &s_scriptableCl_changeQueue[v1];
}

/*
==============
ScriptableCl_GetLootItemActiveAttachmentCount
==============
*/
__int64 ScriptableCl_GetLootItemActiveAttachmentCount(const BG_SpawnGroup_Loot_ItemDef *const lootItemDef)
{
  if ( lootItemDef )
    return lootItemDef->activeAttachmentCount;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4651, ASSERT_TYPE_ASSERT, "(lootItemDef)", (const char *)&queryFormat, "lootItemDef") )
    __debugbreak();
  return MEMORY[0x30];
}

/*
==============
ScriptableCl_GetLootItemDef
==============
*/
const BG_SpawnGroup_Loot_ItemDef *ScriptableCl_GetLootItemDef(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  const ScriptableDef *def; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4582, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS )", "localClientNum doesn't index SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( ScriptableCl_GetInstanceInUse(localClientNum, scriptableIndex) )
  {
    def = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def;
    if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4591, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
    return ScriptableCl_GetLootItemDefByScriptableDef(localClientNum, def);
  }
  else
  {
    Com_PrintError(29, "%s called with an invalid instance %d (no def)\n", "ScriptableCl_GetLootItemDef", scriptableIndex);
    return 0i64;
  }
}

/*
==============
ScriptableCl_GetLootItemDefByName
==============
*/
const BG_SpawnGroup_Loot_ItemDef *ScriptableCl_GetLootItemDefByName(const LocalClientNum_t localClientNum, const char *scriptableDefName)
{
  const ScriptableDef *NetConstStringDefAtIndex; 
  int v7; 
  unsigned int outIndex; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v7 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4601, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS )", "localClientNum doesn't index SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS\n\t%i not in [0, %i)", localClientNum, v7) )
      __debugbreak();
  }
  if ( NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_SCRIPTABLEDEF, scriptableDefName, &outIndex) )
  {
    NetConstStringDefAtIndex = ScriptableBg_GetNetConstStringDefAtIndex(outIndex);
    if ( NetConstStringDefAtIndex )
    {
      return ScriptableCl_GetLootItemDefByScriptableDef(localClientNum, NetConstStringDefAtIndex);
    }
    else
    {
      Com_Printf(29, "%s: '%s' is not a valid scriptable def. Could not find an asset with that name.\n", "ScriptableCl_GetLootItemDefByName", scriptableDefName);
      return 0i64;
    }
  }
  else
  {
    Com_PrintError(29, "%s: '%s' is not a valid & precached scriptable def.\n", "ScriptableCl_GetLootItemDefByName", scriptableDefName);
    return 0i64;
  }
}

/*
==============
ScriptableCl_GetLootItemDefByScriptableDef
==============
*/
ntl::red_black_tree_node_base *ScriptableCl_GetLootItemDefByScriptableDef(const LocalClientNum_t localClientNum, const ScriptableDef *const def)
{
  BG_SpawnGroup_Loot_Table *v3; 
  ntl::fixed_map<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *,200,ntl::less<ScriptableDef const *,ScriptableDef const *> > *scriptableDefMap; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 

  if ( (def->flags & 0x20000) == 0 )
    return 0i64;
  v3 = s_scriptableClLootTable[localClientNum];
  if ( !v3 )
  {
    Com_PrintError(29, "Missing BR loot table. Ensure you are using the appropriate br_* config file\n");
    return 0i64;
  }
  if ( !v3->itemDefCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4562, ASSERT_TYPE_ASSERT, "(table->itemDefCount)", (const char *)&queryFormat, "table->itemDefCount") )
    __debugbreak();
  if ( !v3->scriptableDefMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4563, ASSERT_TYPE_ASSERT, "(table->scriptableDefMap)", (const char *)&queryFormat, "table->scriptableDefMap") )
    __debugbreak();
  scriptableDefMap = v3->scriptableDefMap;
  mp_parent = scriptableDefMap->m_endNodeBase.mp_parent;
  p_m_endNodeBase = &scriptableDefMap->m_endNodeBase;
  while ( mp_parent )
  {
    if ( *(_QWORD *)&mp_parent[1].m_color < (unsigned __int64)def )
    {
      mp_parent = mp_parent->mp_right;
    }
    else
    {
      p_m_endNodeBase = mp_parent;
      mp_parent = mp_parent->mp_left;
    }
  }
  if ( p_m_endNodeBase != &scriptableDefMap->m_endNodeBase && (unsigned __int64)def < *(_QWORD *)&p_m_endNodeBase[1].m_color )
    p_m_endNodeBase = &scriptableDefMap->m_endNodeBase;
  if ( p_m_endNodeBase == &scriptableDefMap->m_endNodeBase )
    return 0i64;
  if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 87, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
    __debugbreak();
  return p_m_endNodeBase[1].mp_parent;
}

/*
==============
ScriptableCl_GetLootItemRarityBeamFX
==============
*/
FXRegisteredDef *ScriptableCl_GetLootItemRarityBeamFX(const LocalClientNum_t localClientNum, const unsigned int rarity)
{
  __int64 v2; 
  __int64 v3; 
  BG_SpawnGroup_Loot_Table *v4; 

  v2 = rarity;
  v3 = localClientNum;
  if ( rarity >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5002, ASSERT_TYPE_ASSERT, "(unsigned)( rarity ) < (unsigned)( 8 )", "rarity doesn't index SPAWNGROUP_LOOT_MAX_RARITIES\n\t%i not in [0, %i)", rarity, 8) )
    __debugbreak();
  v4 = s_scriptableClLootTable[v3];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5005, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  return &v4->rarities[v2].beamFX;
}

/*
==============
ScriptableCl_GetLootItemRarityColor
==============
*/
__int64 ScriptableCl_GetLootItemRarityColor(const LocalClientNum_t localClientNum, const unsigned int rarity)
{
  __int64 v2; 
  __int64 v3; 
  BG_SpawnGroup_Loot_Table *v4; 

  v2 = rarity;
  v3 = localClientNum;
  if ( rarity >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4991, ASSERT_TYPE_ASSERT, "(unsigned)( rarity ) < (unsigned)( 8 )", "rarity doesn't index SPAWNGROUP_LOOT_MAX_RARITIES\n\t%i not in [0, %i)", rarity, 8) )
    __debugbreak();
  v4 = s_scriptableClLootTable[v3];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4994, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  return v4->rarities[v2].colors;
}

/*
==============
ScriptableCl_GetLootItemRarityTrailFX
==============
*/
FXRegisteredDef *ScriptableCl_GetLootItemRarityTrailFX(const LocalClientNum_t localClientNum, const unsigned int rarity)
{
  __int64 v2; 
  __int64 v3; 
  BG_SpawnGroup_Loot_Table *v4; 

  v2 = rarity;
  v3 = localClientNum;
  if ( rarity >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5013, ASSERT_TYPE_ASSERT, "(unsigned)( rarity ) < (unsigned)( 8 )", "rarity doesn't index SPAWNGROUP_LOOT_MAX_RARITIES\n\t%i not in [0, %i)", rarity, 8) )
    __debugbreak();
  v4 = s_scriptableClLootTable[v3];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5016, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
    __debugbreak();
  return &v4->rarities[v2].trailFX;
}

/*
==============
ScriptableCl_GetLootItemWeaponHandleValidated
==============
*/
unsigned int ScriptableCl_GetLootItemWeaponHandleValidated(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, bool warnIfInvalid)
{
  const BG_SpawnGroup_Loot_ItemDef *LootItemDef; 
  unsigned int weaponIndex; 

  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.totalInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2673, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", scriptableIndex, g_scriptableWorldCounts.totalInstanceCount) )
      __debugbreak();
  }
  if ( ScriptableCl_IsLootWeapon(localClientNum, scriptableIndex) )
  {
    LootItemDef = ScriptableCl_GetLootItemDef(localClientNum, scriptableIndex);
    if ( !LootItemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2680, ASSERT_TYPE_ASSERT, "(lootItemDef)", (const char *)&queryFormat, "lootItemDef") )
      __debugbreak();
    weaponIndex = LootItemDef->weaponIndex;
    if ( weaponIndex )
      return ScriptableCl_ValidateWeaponHandleIndex(localClientNum, scriptableIndex, weaponIndex, warnIfInvalid);
    if ( BG_SpawnGroup_Loot_IsCustomWeaponItemDef(LootItemDef) )
    {
      weaponIndex = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->extraPayload;
      return ScriptableCl_ValidateWeaponHandleIndex(localClientNum, scriptableIndex, weaponIndex, warnIfInvalid);
    }
  }
  return 0;
}

/*
==============
ScriptableCl_GetLootTable
==============
*/
BG_SpawnGroup_Loot_Table *ScriptableCl_GetLootTable(const LocalClientNum_t localClientNum)
{
  return s_scriptableClLootTable[localClientNum];
}

/*
==============
ScriptableCl_GetMoveUpdateRequiedForClientOnlyScriptable
==============
*/
bool ScriptableCl_GetMoveUpdateRequiedForClientOnlyScriptable(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  const ScriptableDef *def; 

  def = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def;
  if ( !def )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2504, ASSERT_TYPE_ASSERT, "( ( def ) )", "( scriptableIndex ) = %i", scriptableIndex) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 276, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
  }
  if ( (def->flags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2505, ASSERT_TYPE_ASSERT, "( ( !ScriptableDef_HasServerInstance( def ) ) )", "( def->name ) = %s", def->name) )
    __debugbreak();
  return def->flags & 1;
}

/*
==============
ScriptableCl_GetPartScriptedDefFromName
==============
*/
ScriptablePartDef *ScriptableCl_GetPartScriptedDefFromName(const ScriptableContext context, const unsigned int scriptableIndex, const scr_string_t partName)
{
  LocalClientNum_t v6; 
  const ScriptableDef *def; 
  ScriptablePartDef *result; 
  const char *name; 
  const char *v10; 
  unsigned int out_partIdx; 
  ScriptablePartDef *out_partDef; 

  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.totalInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4661, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", scriptableIndex, g_scriptableWorldCounts.totalInstanceCount) )
      __debugbreak();
  }
  if ( !partName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4662, ASSERT_TYPE_ASSERT, "(partName != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "partName != NULL_SCR_STRING") )
    __debugbreak();
  v6 = ScriptableCl_ContextToLocalClient(context);
  def = ScriptableCl_GetInstanceCommonContext(v6, scriptableIndex)->def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4667, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  out_partDef = NULL;
  out_partIdx = 0;
  ScriptableBg_GetPartFromName(def, partName, &out_partIdx, &out_partDef);
  result = out_partDef;
  if ( !out_partDef )
  {
    name = def->name;
    v10 = SL_ConvertToString(partName);
    Com_PrintError(29, "ScriptableCl_GetPartScriptedDefFromName: Could not find part %s in def %s\n", v10, name);
    return 0i64;
  }
  return result;
}

/*
==============
ScriptableCl_GetPartWorldState
==============
*/
ScriptablePartWorldState *ScriptableCl_GetPartWorldState(const LocalClientNum_t localClientNum)
{
  __int64 v1; 

  v1 = localClientNum;
  if ( s_scriptableCl_spWorldUseCache[localClientNum] )
  {
    if ( !s_scriptableCl_spWorldCached[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1903, ASSERT_TYPE_ASSERT, "(s_scriptableCl_spWorldCached[localClientNum] != nullptr)", (const char *)&queryFormat, "s_scriptableCl_spWorldCached[localClientNum] != nullptr") )
      __debugbreak();
    return &s_scriptableCl_spWorldCached[v1]->partWorldState;
  }
  else
  {
    if ( !s_scriptableCl_worldCurrent[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1908, ASSERT_TYPE_ASSERT, "(s_scriptableCl_worldCurrent[localClientNum] != nullptr)", (const char *)&queryFormat, "s_scriptableCl_worldCurrent[localClientNum] != nullptr") )
      __debugbreak();
    return &s_scriptableCl_worldCurrent[v1]->partWorldState;
  }
}

/*
==============
ScriptableCl_GetReplicatedInstance
==============
*/
ScriptableReplicatedInstance *ScriptableCl_GetReplicatedInstance(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  __int64 v2; 
  ScriptableCompleteState *v3; 
  ScriptableReplicatedInstance *result; 

  v2 = scriptableIndex;
  if ( s_scriptableCl_spWorldUseCache[localClientNum] )
    v3 = s_scriptableCl_spWorldCached[localClientNum];
  else
    v3 = s_scriptableCl_worldCurrent[localClientNum];
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1892, ASSERT_TYPE_ASSERT, "(curWorld)", (const char *)&queryFormat, "curWorld") )
    __debugbreak();
  if ( (unsigned int)v2 >= v3->replicatedInstanceCount )
    return 0i64;
  result = &v3->replicatedInstances[v2];
  if ( result->instanceIndex == -1 )
    return 0i64;
  return result;
}

/*
==============
ScriptableCl_GetScriptableInstanceFirstPartWorldIndex
==============
*/
__int64 ScriptableCl_GetScriptableInstanceFirstPartWorldIndex(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  __int64 v2; 
  ScriptableReplicatedInstance *ReplicatedInstance; 
  __int64 v6; 
  unsigned int indicesCount; 

  v2 = scriptableIndex;
  ScriptableCommon_AssertCountsInitialized();
  if ( (unsigned int)v2 >= g_scriptableWorldCounts.runtimeInstanceCount )
  {
    if ( !g_scriptableCl_fixedWorldMap.indices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2274, ASSERT_TYPE_ASSERT, "(g_scriptableCl_fixedWorldMap.indices)", (const char *)&queryFormat, "g_scriptableCl_fixedWorldMap.indices") )
      __debugbreak();
    if ( (unsigned int)v2 >= g_scriptableCl_fixedWorldMap.indicesCount )
    {
      indicesCount = g_scriptableCl_fixedWorldMap.indicesCount;
      LODWORD(v6) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2275, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( g_scriptableCl_fixedWorldMap.indicesCount )", "scriptableIndex doesn't index g_scriptableCl_fixedWorldMap.indicesCount\n\t%i not in [0, %i)", v6, indicesCount) )
        __debugbreak();
    }
    return g_scriptableCl_fixedWorldMap.indices[v2];
  }
  else
  {
    ReplicatedInstance = ScriptableCl_GetReplicatedInstance(localClientNum, v2);
    if ( ReplicatedInstance )
      return ReplicatedInstance->partIndex;
    else
      return 0xFFFFFFFFi64;
  }
}

/*
==============
ScriptableCl_GetScriptableInstanceFirstPartWorldState
==============
*/
unsigned __int8 ScriptableCl_GetScriptableInstanceFirstPartWorldState(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, unsigned int scriptableFirstPartIndex)
{
  __int64 v3; 
  ScriptablePartWorldState *PartWorldState; 
  __int64 v6; 
  __int64 v8; 

  v3 = scriptableFirstPartIndex;
  PartWorldState = ScriptableCl_GetPartWorldState(localClientNum);
  if ( !PartWorldState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2283, ASSERT_TYPE_ASSERT, "(partWorldState)", (const char *)&queryFormat, "partWorldState") )
    __debugbreak();
  ScriptableCommon_AssertCountsInitialized();
  v6 = scriptableIndex < g_scriptableWorldCounts.runtimeInstanceCount ? 8 : 0;
  if ( (unsigned int)v3 >= *(unsigned int *)((char *)g_scriptableCl_replicatedLimits.partWorldLimits + (scriptableIndex < g_scriptableWorldCounts.runtimeInstanceCount ? 4 : 0)) )
  {
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2288, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableFirstPartIndex ) < (unsigned)( g_scriptableCl_replicatedLimits.partWorldLimits[worldIndex] )", "scriptableFirstPartIndex doesn't index g_scriptableCl_replicatedLimits.partWorldLimits[worldIndex]\n\t%i not in [0, %i)", v8, *(unsigned int *)((char *)g_scriptableCl_replicatedLimits.partWorldLimits + (scriptableIndex < g_scriptableWorldCounts.runtimeInstanceCount ? 4 : 0))) )
      __debugbreak();
  }
  return (*(ScriptablePartData **)((char *)&PartWorldState->groups[0].partData + v6))[v3].data & 0x7F;
}

/*
==============
ScriptableCl_GetStandaloneEntityParentData
==============
*/
ScriptableStandaloneParentData *ScriptableCl_GetStandaloneEntityParentData(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  int v4; 

  v1 = localClientNum;
  if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_IN|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1066, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SCRIPTABLE_PARENT_ENTITIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SCRIPTABLE_PARENT_ENTITIES )") )
    __debugbreak();
  if ( (unsigned int)v1 >= 2 )
  {
    v4 = 2;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1067, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_reservedParentEntityData ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_reservedParentEntityData\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return &s_scriptableCl_reservedParentEntityData[v1];
}

/*
==============
ScriptableCl_GetStandaloneParentEntityNum
==============
*/
__int16 ScriptableCl_GetStandaloneParentEntityNum(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  __int64 v2; 
  __int64 v3; 
  ScriptableReplicatedInstance *ReplicatedInstance; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  v2 = scriptableIndex;
  v3 = localClientNum;
  ScriptableCommon_AssertCountsInitialized();
  if ( (unsigned int)v2 >= g_scriptableWorldCounts.runtimeInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3424, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetReservedInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetReservedInstanceCount()\n\t%i not in [0, %i)", v2, g_scriptableWorldCounts.runtimeInstanceCount) )
      __debugbreak();
  }
  if ( !ScriptableCl_IsStandaloneServerInstance((const LocalClientNum_t)v3, v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3425, ASSERT_TYPE_ASSERT, "(ScriptableCl_IsStandaloneServerInstance( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_IsStandaloneServerInstance( localClientNum, scriptableIndex )") )
    __debugbreak();
  ScriptableCommon_AssertCountsInitialized();
  if ( (unsigned int)v2 >= g_scriptableWorldCounts.totalInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    LODWORD(v7) = g_scriptableWorldCounts.totalInstanceCount;
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v7) = 2;
    LODWORD(v6) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 114, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( !g_scriptableCl_instanceContexts[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
    __debugbreak();
  if ( (*((_BYTE *)&g_scriptableCl_instanceContexts[v3][v2].commonContext + 60) & 0x20) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3426, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetInstanceCommonContext( localClientNum, scriptableIndex ).hasParentEntity)", (const char *)&queryFormat, "ScriptableCl_GetInstanceCommonContext( localClientNum, scriptableIndex ).hasParentEntity") )
    __debugbreak();
  ReplicatedInstance = ScriptableCl_GetReplicatedInstance((const LocalClientNum_t)v3, v2);
  if ( !ReplicatedInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3429, ASSERT_TYPE_ASSERT, "(replicatedInstance)", (const char *)&queryFormat, "replicatedInstance") )
    __debugbreak();
  if ( !ReplicatedInstance->replicatedType[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3430, ASSERT_TYPE_ASSERT, "( replicatedInstance->replicatedType ) != ( ScriptableReplicatedType::ENTITY )", "%s != %s\n\t%i, %i", "replicatedInstance->replicatedType", "ScriptableReplicatedType::ENTITY", 0, 0i64) )
    __debugbreak();
  if ( ReplicatedInstance->instanceIndex != (_DWORD)v2 )
  {
    LODWORD(v9) = v2;
    LODWORD(v8) = ReplicatedInstance->instanceIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3431, ASSERT_TYPE_ASSERT, "( replicatedInstance->instanceIndex ) == ( scriptableIndex )", "%s == %s\n\t%i, %i", "replicatedInstance->instanceIndex", "scriptableIndex", v8, v9) )
      __debugbreak();
  }
  if ( !ReplicatedInstance->parent.m_data )
  {
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3432, ASSERT_TYPE_ASSERT, "( ( replicatedInstance->parent.HasEntity() ) )", "( scriptableIndex ) = %i", v6) )
      __debugbreak();
    if ( !ReplicatedInstance->parent.m_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 323, ASSERT_TYPE_ASSERT, "(HasEntity())", (const char *)&queryFormat, "HasEntity()") )
      __debugbreak();
  }
  return ReplicatedInstance->parent.m_data - 1;
}

/*
==============
ScriptableCl_GetUpdateListForScriptable
==============
*/
ScriptableUpdateBitset *ScriptableCl_GetUpdateListForScriptable(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  __int64 v2; 
  const ScriptableDef *def; 
  int flags; 
  ScriptableUpdateBitset *v6; 
  __int64 v8; 

  v2 = localClientNum;
  def = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def;
  if ( !def )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2482, ASSERT_TYPE_ASSERT, "( ( def ) )", "( scriptableIndex ) = %i", scriptableIndex) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 276, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
  }
  flags = def->flags;
  if ( (flags & 2) != 0 && (flags & 0x2000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2483, ASSERT_TYPE_ASSERT, "( ( !ScriptableDef_HasServerInstance( def ) || ScriptableDef_IsStandaloneRequested( def ) ) )", "( def->name ) = %s", def->name) )
    __debugbreak();
  if ( ScriptableCl_IsStandaloneServerInstance((const LocalClientNum_t)v2, scriptableIndex) )
  {
    if ( (unsigned int)v2 >= 2 )
    {
      LODWORD(v8) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2490, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableStandaloneServerUpdateLists ) ) + 0 ) )", "localClientNum doesn't index s_scriptableStandaloneServerUpdateLists\n\t%i not in [0, %i)", v8, 2) )
        __debugbreak();
    }
    v6 = s_scriptableStandaloneServerUpdateLists;
  }
  else
  {
    if ( (unsigned int)v2 >= 2 )
    {
      LODWORD(v8) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2495, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableClientOnlyUpdateLists ) ) + 0 ) )", "localClientNum doesn't index s_scriptableClientOnlyUpdateLists\n\t%i not in [0, %i)", v8, 2) )
        __debugbreak();
    }
    v6 = s_scriptableClientOnlyUpdateLists;
  }
  return &v6[v2];
}

/*
==============
ScriptableCl_GetUpdateRequiredForNonEntityScriptable
==============
*/
bool ScriptableCl_GetUpdateRequiredForNonEntityScriptable(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  const ScriptableDef *def; 
  int flags; 

  def = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def;
  if ( !def )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2520, ASSERT_TYPE_ASSERT, "( ( def ) )", "( scriptableIndex ) = %i", scriptableIndex) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 276, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
  }
  flags = def->flags;
  if ( (flags & 2) != 0 && (flags & 0x2000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2521, ASSERT_TYPE_ASSERT, "( ( !ScriptableDef_HasServerInstance( def ) || ScriptableDef_IsStandaloneRequested( def ) ) )", "( def->name ) = %s", def->name) )
    __debugbreak();
  return (def->flags & 0x200) != 0 && ScriptableCl_IsUpdateRequiredForInstance(localClientNum, scriptableIndex, def);
}

/*
==============
ScriptableCl_Init
==============
*/
void ScriptableCl_Init(__int64 localClientNum)
{
  __int64 v1; 
  unsigned __int64 v2; 
  unsigned __int64 v3; 
  int v4; 
  unsigned int v5; 
  ScriptableStandaloneParentData *StandaloneEntityParentData; 
  unsigned int runtimeInstanceCount; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const ScriptableDef *def; 
  unsigned int v10; 
  ScriptablePartRuntime *v11; 
  ScriptablePartRuntime *v12; 
  ScriptablePartRuntime *v13; 
  unsigned int v14; 
  __int64 v15; 
  ScriptableInstanceClientContext *v16; 
  __int64 eventStreamBufferSize; 
  ScriptableContext v18; 
  unsigned int v19; 
  ScriptableCompleteState *v20; 
  unsigned int runtimePartCount; 
  unsigned int v22; 
  ScriptablePartRuntime *v23; 
  ScriptablePartRuntime *v24; 
  unsigned int v25; 
  unsigned int *p_nextRuntime; 
  unsigned __int64 v27; 
  unsigned int v28; 
  ScriptableInstanceContextSecure *v29; 
  const ScriptableDef *v30; 
  __int64 v31; 
  __int64 v32; 
  int v33; 
  ScriptablePartRuntime *v34; 

  v1 = (int)localClientNum;
  v2 = (int)localClientNum;
  v3 = (int)localClientNum;
  if ( v3 >= 2 )
    goto LABEL_54;
  g_scriptableClReservedCurrentCount[v3] = 0;
  g_scriptableClReservedMaxCount[v3] = 0;
  Scriptable_Analytics_InitClient((LocalClientNum_t)localClientNum);
  v4 = 0;
  v5 = 0;
  ScriptableCl_InitnstanceContextForClient((const LocalClientNum_t)v1);
  ScriptableCl_InitLootInstancesForClient((const LocalClientNum_t)v1);
  ScriptableCl_SpatialInitForClient((const LocalClientNum_t)v1);
  ScriptableCl_ObjectiveInitForClient((const LocalClientNum_t)v1);
  if ( Com_GameMode_SupportsFeature(WEAPON_LEAP_IN|0x80) )
  {
    StandaloneEntityParentData = ScriptableCl_GetStandaloneEntityParentData((const LocalClientNum_t)v1);
    memset_0(StandaloneEntityParentData->m_assignedHead, 255, sizeof(StandaloneEntityParentData->m_assignedHead));
    memset_0(StandaloneEntityParentData->m_next, 255, sizeof(StandaloneEntityParentData->m_next));
    memset_0(StandaloneEntityParentData, 255, 0x1000ui64);
  }
  ScriptableCommon_AssertCountsInitialized();
  runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
  ScriptableCommon_AssertCountsInitialized();
  while ( runtimeInstanceCount < g_scriptableWorldCounts.totalInstanceCount )
  {
    if ( ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v1, runtimeInstanceCount) )
    {
      InstanceCommonContext = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v1, runtimeInstanceCount);
      def = InstanceCommonContext->def;
      InstanceCommonContext->eventStreamBufferSize = InstanceCommonContext->def->eventStreamSizeRequiredClient;
      v4 += def->eventStreamSizeRequiredClient;
      InstanceCommonContext->partStateIndex = v5;
      v5 += def->partCount;
    }
    ++runtimeInstanceCount;
    ScriptableCommon_AssertCountsInitialized();
  }
  v10 = 8 * v5;
  *(_QWORD *)g_scriptableFrame_serverTime = -1i64;
  v11 = (ScriptablePartRuntime *)(8 * v5 + v4);
  *(_WORD *)g_scriptableFrameKillCamTransition = 0;
  g_ScriptableClRuntimePartStatesCount = v5;
  v33 = 8 * v5;
  Com_Printf(29, "Client Scriptable - Allocating %u bytes for runtime instances. localClientNum: %u\n", (unsigned int)v11, (unsigned int)v1);
  v34 = (ScriptablePartRuntime *)Mem_HunkUser_AllocInternal(s_ScriptableClRuntimeHunk[v1], (unsigned int)v11, 1ui64, "ScriptableCl_Init");
  v12 = v34;
  memset_0(v34, 0, (unsigned int)v11);
  v13 = v34;
  ScriptableCommon_AssertCountsInitialized();
  v14 = g_scriptableWorldCounts.runtimeInstanceCount;
  ScriptableCommon_AssertCountsInitialized();
  if ( v14 < g_scriptableWorldCounts.totalInstanceCount )
  {
    do
    {
      ScriptableCommon_AssertCountsInitialized();
      if ( v14 >= g_scriptableWorldCounts.totalInstanceCount )
      {
        ScriptableCommon_AssertCountsInitialized();
        LODWORD(v32) = g_scriptableWorldCounts.totalInstanceCount;
        LODWORD(v31) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v31, v32) )
          __debugbreak();
      }
      if ( (unsigned int)v1 >= 2 )
      {
        LODWORD(v32) = 2;
        LODWORD(v31) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 114, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", v31, v32) )
          __debugbreak();
      }
      if ( !g_scriptableCl_instanceContexts[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
        __debugbreak();
      v15 = v14++;
      v16 = &g_scriptableCl_instanceContexts[v1][v15];
      eventStreamBufferSize = v16->commonContext.eventStreamBufferSize;
      v16->commonContext.eventStreamBuffer = (unsigned __int8 *)v13;
      v13 = (ScriptablePartRuntime *)((char *)v13 + eventStreamBufferSize);
      ScriptableCommon_AssertCountsInitialized();
    }
    while ( v14 < g_scriptableWorldCounts.totalInstanceCount );
    v12 = v34;
    v10 = v33;
  }
  g_ScriptableClRuntimePartStates[v1] = v13;
  if ( (ScriptablePartRuntime *)((char *)v13 + v10 - (_QWORD)v12) != v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1165, ASSERT_TYPE_ASSERT, "((eventBufferItr + runtimeClientInstancePartSize) - runtimeBuffer == bufferSize)", (const char *)&queryFormat, "(eventBufferItr + runtimeClientInstancePartSize) - runtimeBuffer == bufferSize") )
    __debugbreak();
  v18 = ScriptableCl_LocalClientToContext((const LocalClientNum_t)v1);
  ScriptableBg_EnumerateAssets(v18, ScriptableCl_AssetCheckEvent);
  if ( !s_scriptableCLInitialized )
  {
    ScriptableCl_InitOnceForAllClients((const LocalClientNum_t)v1);
    v19 = ScriptableCommon_ComputeNetChecksum(&g_scriptableCl_fixedWorldMap, &g_scriptableCl_replicatedLimits);
    if ( v19 != cls.m_scriptableNetChecksum )
    {
      Com_PrintError(29, "Scriptable checksum validation mismatch: %x vs %x\n", v19, cls.m_scriptableNetChecksum);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144069B20, 5820i64);
    }
  }
  s_scriptableCLInitialized |= 1 << v1;
  if ( v2 >= 2 )
  {
LABEL_54:
    j___report_rangecheckfailure(localClientNum);
    JUMPOUT(0x141496231i64);
  }
  v20 = s_scriptableCl_worldCurrent[v1];
  s_scriptableCl_spWorldUseCache[v1] = 0;
  ScriptableCl_ResetFullWorld(v20, &g_scriptableCl_replicatedLimits);
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) )
    ScriptableCl_ResetFullWorld(s_scriptableCl_spWorldCached[v1], &g_scriptableCl_replicatedLimits);
  ScriptableCommon_AssertCountsInitialized();
  runtimePartCount = g_scriptableWorldCounts.runtimePartCount;
  v22 = 8 * g_scriptableWorldCounts.runtimePartCount;
  v23 = (ScriptablePartRuntime *)Mem_HunkUser_AllocInternal(s_ScriptableClRuntimeHunk[v1], 8 * g_scriptableWorldCounts.runtimePartCount, 4ui64, "ScriptableCL_InitRuntimeReservedParts");
  g_scriptableClReservedPartRuntimes[v1] = v23;
  DebugWipe(v23, v22);
  v24 = g_scriptableClReservedPartRuntimes[v1];
  g_scriptableClReservedPartRuntimeCount[v1] = runtimePartCount;
  v25 = 0;
  g_scriptableClReservedPartRuntimeFreeHead[v1] = 0;
  if ( runtimePartCount )
  {
    p_nextRuntime = &v24->nextRuntime;
    do
    {
      *p_nextRuntime = ++v25;
      p_nextRuntime += 2;
    }
    while ( v25 < runtimePartCount );
  }
  ScriptableCL_InitClientModelData((const LocalClientNum_t)v1);
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v32) = 2;
    LODWORD(v31) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1185, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableClientOnlyUpdateLists ) ) + 0 ) )", "localClientNum doesn't index s_scriptableClientOnlyUpdateLists\n\t%i not in [0, %i)", v31, v32) )
      __debugbreak();
  }
  memset_0(&s_scriptableClientOnlyUpdateLists[v2], 0, sizeof(ScriptableUpdateBitset));
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v32) = 2;
    LODWORD(v31) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1189, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableStandaloneServerUpdateLists ) ) + 0 ) )", "localClientNum doesn't index s_scriptableStandaloneServerUpdateLists\n\t%i not in [0, %i)", v31, v32) )
      __debugbreak();
  }
  memset_0(&s_scriptableStandaloneServerUpdateLists[v2], 0, sizeof(ScriptableUpdateBitset));
  memset_0(g_scriptableClEntityLinkMap[v2], 0, sizeof(unsigned int[2048]));
  v27 = v2 << 6;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 2] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 4] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 6] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 8] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 10] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 12] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 14] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 16] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 18] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 20] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 22] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 24] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 26] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 28] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 30] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 32] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 34] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 36] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 38] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 40] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 42] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 44] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 46] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 48] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 50] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 52] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 54] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 56] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 58] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 60] = 0i64;
  *(_QWORD *)&g_scriptableClEntityLinkBound[0].array[v27 + 62] = 0i64;
  ScriptableCl_ResetPartTracking((const LocalClientNum_t)v1);
  v28 = 0;
  ScriptableCommon_AssertCountsInitialized();
  if ( g_scriptableWorldCounts.totalInstanceCount )
  {
    do
    {
      v29 = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v1, v28);
      v30 = v29->def;
      *((_BYTE *)v29 + 60) &= 0xF9u;
      v29->initializationCount = 0;
      v29->data.compositeModel = NULL;
      v29->dataType = SCRIPTABLE_DATA_TYPE_INVALID;
      ScriptableCl_ClearLink((const LocalClientNum_t)v1, v28);
      ScriptableCommon_AssertCountsInitialized();
      if ( v28 >= g_scriptableWorldCounts.runtimeInstanceCount && ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v1, v28) )
      {
        if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 276, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
          __debugbreak();
        if ( (v30->flags & 2) != 0 && ScriptableCl_GetInstanceShouldHaveEntity((const LocalClientNum_t)v1, v28) )
        {
          *((_BYTE *)v29 + 60) &= ~1u;
          *((_BYTE *)v29 + 60) |= 1u;
        }
        else
        {
          *((_BYTE *)v29 + 60) &= ~1u;
          *((_BYTE *)v29 + 60) = *((_BYTE *)v29 + 60);
        }
      }
      else
      {
        if ( v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 649, ASSERT_TYPE_ASSERT, "(def == nullptr)", (const char *)&queryFormat, "def == nullptr") )
          __debugbreak();
        *((_BYTE *)v29 + 60) &= ~1u;
      }
      ScriptableInstanceContextSecure::SetOrigin(v29, v28++, &v29->originInitial);
      v29->angles.v[0] = v29->anglesInitial.v[0];
      v29->angles.v[1] = v29->anglesInitial.v[1];
      v29->angles.v[2] = v29->anglesInitial.v[2];
      ScriptableCommon_AssertCountsInitialized();
    }
    while ( v28 < g_scriptableWorldCounts.totalInstanceCount );
  }
}

/*
==============
ScriptableCl_InitCounts
==============
*/
void ScriptableCl_InitCounts(const unsigned int clientCount, const unsigned int agentCount)
{
  ScriptableCommon_InitWorldCounts(SBL_CONTEXT_CLIENT_0, clientCount, agentCount, &g_scriptableCl_replicatedLimits);
}

/*
==============
ScriptableCl_InitEventParams
==============
*/
void ScriptableCl_InitEventParams(const LocalClientNum_t localClientNum, ScriptableEventParams *outParams, const unsigned int scriptableIndex, const ScriptablePartDef *partDef)
{
  if ( !outParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1919, ASSERT_TYPE_ASSERT, "(outParams)", (const char *)&queryFormat, "outParams") )
    __debugbreak();
  if ( !partDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1920, ASSERT_TYPE_ASSERT, "(partDef)", (const char *)&queryFormat, "partDef") )
    __debugbreak();
  outParams->context = ScriptableCl_LocalClientToContext(localClientNum);
  outParams->callbacks = &s_clCallbackTable;
  outParams->scriptableIndex = scriptableIndex;
  outParams->partDef = partDef;
  outParams->damageEvent = NULL;
  outParams->teamEvent = NULL;
}

/*
==============
ScriptableCl_InitInstancePart
==============
*/
void ScriptableCl_InitInstancePart(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptablePartDef *partDef)
{
  ScriptablePartRuntime *PartRuntime; 
  unsigned int v8; 
  ScriptableStateDef *states; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  ScriptableInstanceContextSecure *v12; 
  ScriptableEventParams eventParams; 

  if ( !partDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 577, ASSERT_TYPE_ASSERT, "(partDef)", (const char *)&queryFormat, "partDef") )
    __debugbreak();
  PartRuntime = ScriptableCl_GetPartRuntime(localClientNum, scriptableIndex, partDef);
  if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 581, ASSERT_TYPE_ASSERT, "(partRuntime)", (const char *)&queryFormat, "partRuntime") )
    __debugbreak();
  v8 = 0;
  PartRuntime->stateId = 0;
  if ( partDef->numStates )
  {
    states = partDef->states;
    if ( SLOBYTE(states->base.flags) < 0 )
    {
      if ( states->type != Scriptable_StateType_Health && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 593, ASSERT_TYPE_ASSERT, "(stateDef->type == Scriptable_StateType_Health)", (const char *)&queryFormat, "stateDef->type == Scriptable_StateType_Health") )
        __debugbreak();
      InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
      _R13 = partDef->eventStreamBufferOffsetClient;
      v12 = InstanceCommonContext;
      if ( _R13 + 4 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 599, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
        __debugbreak();
      _RAX = v12->eventStreamBuffer;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [r14+28h]
        vmovss  dword ptr [rax+r13], xmm0
      }
    }
    eventParams.context = ScriptableCl_LocalClientToContext(localClientNum);
    eventParams.scriptableIndex = scriptableIndex;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    eventParams.callbacks = &s_clCallbackTable;
    eventParams.partDef = partDef;
    __asm { vmovdqu xmmword ptr [rsp+88h+eventParams.damageEvent], xmm0 }
    ScriptableBg_EnterState(&eventParams, 1);
  }
  if ( partDef->numChildParts )
  {
    do
      ScriptableCl_InitInstancePart(localClientNum, scriptableIndex, &partDef->childParts[v8++]);
    while ( v8 < partDef->numChildParts );
  }
}

/*
==============
ScriptableCl_InitLootInstancesForClient
==============
*/
void ScriptableCl_InitLootInstancesForClient(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  unsigned int v2; 
  unsigned int v3; 
  __int64 v4; 
  __int64 v5; 
  BG_SpawnGroup_Loot_Table *v6; 
  _QWORD *v7; 
  _QWORD *v8; 
  char *v9; 
  char *v10; 
  BG_SpawnGroup_Loot_PointMap *m_ptr; 
  BG_SpawnGroup_Loot_Caches *v12; 
  bool IsAnyLocalServerRunning; 
  unsigned __int8 v14; 
  BG_SpawnGroup_Loot_Table *v15; 
  unsigned __int64 v16; 
  ntl::red_black_tree<ScriptableDef const *,ntl::pair<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *> >,200,8>,ntl::return_pair_first<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *>,ntl::less<ScriptableDef const *,ScriptableDef const *> > *scriptableDefMap; 
  const ScriptableDef *v18; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *mp_parent; 
  bool v21; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *i; 
  ntl::red_black_tree_node_base *v24; 
  MapEnts *mapEnts; 
  unsigned __int8 v26; 
  unsigned int v27; 
  SpawnGroupPoint *v28; 
  LocalClientNum_t v29; 
  unsigned __int8 itemDefCount; 
  char *fmt; 
  BG_SpawnGroup_Loot_Table *table; 
  BG_SpawnGroup_Loot_Table *tablea; 
  __int64 printResultsToConsole; 
  StringTable *tablePtr; 
  LocalClientNum_t localClientNuma; 
  StringTable *zoneMapTable; 
  ntl::pair<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *> r_element; 
  __int64 v43; 
  ntl::red_black_tree_iterator<ScriptableDef const *,ntl::red_black_tree_node<ntl::pair<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *> >,ntl::pair<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *> *,ntl::pair<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *> &> v44; 
  ntl::red_black_tree_iterator<ScriptableDef const *,ntl::red_black_tree_node<ntl::pair<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *> >,ntl::pair<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *> *,ntl::pair<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *> &> result; 
  Mem_LargeLocal v46; 
  BG_SpawnGroup_Loot loot; 

  v43 = -2i64;
  v1 = localClientNum;
  localClientNuma = localClientNum;
  ScriptableCl_ClearLootPingFX(localClientNum);
  s_scriptableCl_lootHidden = 1;
  v2 = s_scriptableCl_nonSpatialLootInstanceCount;
  v3 = 0;
  if ( !(_DWORD)v1 )
    v2 = 0;
  s_scriptableCl_nonSpatialLootInstanceCount = v2;
  v4 = v1;
  s_scriptableClLootCount[v1] = 0;
  if ( cls.spawnGroupLootActive && ScriptableCommon_GetLootInstanceCount() )
  {
    StringTable_GetAsset(cls.spawnGroupLootTable, (const StringTable **)&tablePtr);
    if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 897, ASSERT_TYPE_ASSERT, "(table)", (const char *)&queryFormat, "table") )
      __debugbreak();
    zoneMapTable = tablePtr;
    if ( cls.spawnGroupLootTableZones[0] )
    {
      StringTable_GetAsset(cls.spawnGroupLootTableZones, (const StringTable **)&zoneMapTable);
      if ( !zoneMapTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 906, ASSERT_TYPE_ASSERT, "( tableZones )", (const char *)&queryFormat, "tableZones") )
        __debugbreak();
    }
    v5 = StringTable_Checksum(tablePtr, 0);
    Com_Printf(14, "ScriptableCl_InitLootInstancesForClient: Using table '%s' with checksum %x\n", cls.spawnGroupLootTable, v5);
    if ( (_DWORD)v5 != cls.spawnGroupLootTableChecksum )
    {
      LODWORD(table) = cls.spawnGroupLootTableChecksum;
      LODWORD(fmt) = v5;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144069360, 5819i64, cls.spawnGroupLootTable, fmt, table);
    }
    v6 = (BG_SpawnGroup_Loot_Table *)Mem_HunkUser_AllocInternal(s_ScriptableClRuntimeHunk[v1], 0x2E820ui64, 8ui64, "ScriptableCl_InitLootInstancesForClient");
    s_scriptableClLootTable[v1] = v6;
    memset_0(v6, 0, sizeof(BG_SpawnGroup_Loot_Table));
    v7 = Mem_HunkUser_AllocInternal(s_ScriptableClRuntimeHunk[v1], 0x25B8ui64, 8ui64, "ScriptableCl_InitLootInstancesForClient");
    v8 = v7;
    v9 = (char *)(v7 + 1200);
    v10 = (char *)(v7 + 1200);
    do
    {
      v10 -= 48;
      *(_QWORD *)v10 = v9;
      v9 = v10;
    }
    while ( v10 > (char *)v7 );
    v7[1200] = v10;
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
      __debugbreak();
    v8[1205] = 0i64;
    *((_DWORD *)v8 + 2402) = 0;
    v8[1202] = 0i64;
    v8[1203] = v8 + 1201;
    v8[1204] = v8 + 1201;
    s_scriptableClLootTable[v1]->scriptableDefMap = (ntl::fixed_map<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *,200,ntl::less<ScriptableDef const *,ScriptableDef const *> > *)v8;
    Mem_LargeLocal::Mem_LargeLocal(&v46, 0xFFFFui64, "BG_SpawnGroup_Loot_PointMap pointToDefBuffer");
    m_ptr = (BG_SpawnGroup_Loot_PointMap *)v46.m_ptr;
    memset_0(v46.m_ptr, 0, 0xFFFFui64);
    v12 = (BG_SpawnGroup_Loot_Caches *)Mem_HunkUser_AllocInternal(s_ScriptableClRuntimeHunk[v1], 0x413D0ui64, 8ui64, "ScriptableCl_InitLootInstancesForClient");
    s_scriptableClLootCaches[v1] = v12;
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 934, ASSERT_TYPE_ASSERT, "( ( s_scriptableClLootCaches[localClientNum] != nullptr ) )", "( s_scriptableClLootCaches[localClientNum] ) = %p", NULL) )
      __debugbreak();
    memset_0(s_scriptableClLootCaches[v1], 0, sizeof(BG_SpawnGroup_Loot_Caches));
    memset_0(&loot.itemCounts, 0, 0x5670ui64);
    loot.pointToDefBuffer = m_ptr;
    if ( (unsigned int)v1 >= 2 )
    {
      LODWORD(table) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 939, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableClLootCaches ) ) + 0 ) )", "localClientNum doesn't index s_scriptableClLootCaches\n\t%i not in [0, %i)", table, 2) )
        __debugbreak();
    }
    loot.cacheBuffer = s_scriptableClLootCaches[v1];
    IsAnyLocalServerRunning = Com_IsAnyLocalServerRunning();
    BG_SpawnGroup_Loot_Spawn(&loot, cls.spawnGroupLootSeed, tablePtr, zoneMapTable, cls.spawnGroupLootTableFilter, s_scriptableClLootTable[v1], !IsAnyLocalServerRunning);
    v14 = 1;
    v15 = s_scriptableClLootTable[v1];
    if ( v15->itemDefCount > 1u )
    {
      while ( 1 )
      {
        v16 = (unsigned __int64)v14 << 8;
        scriptableDefMap = v15->scriptableDefMap;
        v18 = *(const ScriptableDef **)((char *)&v15->itemDefs[0].scriptableDef + v16);
        r_element.first = v18;
        r_element.second = (BG_SpawnGroup_Loot_ItemDef *)((char *)v15->itemDefs + v16);
        p_m_endNodeBase = &scriptableDefMap->m_endNodeBase;
        mp_parent = scriptableDefMap->m_endNodeBase.mp_parent;
        v21 = 1;
        while ( mp_parent )
        {
          p_m_endNodeBase = mp_parent;
          v21 = (unsigned __int64)v18 < *(_QWORD *)&mp_parent[1].m_color;
          if ( (unsigned __int64)v18 >= *(_QWORD *)&mp_parent[1].m_color )
            mp_parent = mp_parent->mp_right;
          else
            mp_parent = mp_parent->mp_left;
        }
        mp_left = p_m_endNodeBase;
        if ( !v21 )
          goto LABEL_46;
        if ( p_m_endNodeBase != scriptableDefMap->m_endNodeBase.mp_left )
          break;
        ntl::red_black_tree<ScriptableDef const *,ntl::pair<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *>>,200,8>,ntl::return_pair_first<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *>,ntl::less<ScriptableDef const *,ScriptableDef const *>>::insert_node(scriptableDefMap, &v44, p_m_endNodeBase, &r_element, 1, 0);
LABEL_51:
        ++v14;
        v15 = s_scriptableClLootTable[v4];
        if ( v14 >= v15->itemDefCount )
        {
          v3 = 0;
          goto LABEL_53;
        }
      }
      if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( p_m_endNodeBase->m_color || p_m_endNodeBase->mp_parent->mp_parent != p_m_endNodeBase )
      {
        mp_left = p_m_endNodeBase->mp_left;
        if ( mp_left )
        {
          for ( i = mp_left->mp_right; i; i = i->mp_right )
            mp_left = i;
        }
        else
        {
          mp_left = p_m_endNodeBase->mp_parent;
          if ( p_m_endNodeBase == mp_left->mp_left )
          {
            do
            {
              v24 = mp_left;
              mp_left = mp_left->mp_parent;
            }
            while ( v24 == mp_left->mp_left );
          }
        }
      }
      else
      {
        mp_left = p_m_endNodeBase->mp_right;
      }
LABEL_46:
      if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      if ( *(_QWORD *)&mp_left[1].m_color < (unsigned __int64)v18 )
        ntl::red_black_tree<ScriptableDef const *,ntl::pair<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *>>,200,8>,ntl::return_pair_first<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *>,ntl::less<ScriptableDef const *,ScriptableDef const *>>::insert_node(scriptableDefMap, &result, p_m_endNodeBase, &r_element, 0, 0);
      goto LABEL_51;
    }
LABEL_53:
    mapEnts = cm.mapEnts;
    if ( cm.mapEnts->spawnGroupLoot.pointCount )
    {
      do
      {
        v26 = loot.pointToDefBuffer->points[v3];
        if ( v26 )
        {
          if ( s_scriptableClLootCount[v4] >= loot.itemCounts.itemCount )
          {
            LODWORD(printResultsToConsole) = loot.itemCounts.itemCount;
            LODWORD(tablea) = s_scriptableClLootCount[v4];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 959, ASSERT_TYPE_ASSERT, "(unsigned)( s_scriptableClLootCount[localClientNum] ) < (unsigned)( loot.itemCounts.itemCount )", "s_scriptableClLootCount[localClientNum] doesn't index loot.itemCounts.itemCount\n\t%i not in [0, %i)", tablea, printResultsToConsole) )
              __debugbreak();
          }
          ScriptableCommon_AssertCountsInitialized();
          v27 = s_scriptableClLootCount[v4] + g_scriptableWorldCounts.runtimeInstanceCount;
          if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 962, ASSERT_TYPE_ASSERT, "( scriptableIndex > 0 )", "We use 0 as a sentinel value for empty points, so our instance index must be greater") )
            __debugbreak();
          v28 = &cm.mapEnts->spawnGroupLoot.points[v3];
          if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 965, ASSERT_TYPE_ASSERT, "(point)", (const char *)&queryFormat, "point") )
            __debugbreak();
          ScriptableCommon_AssertCountsInitialized();
          if ( v27 >= g_scriptableWorldCounts.totalInstanceCount )
          {
            ScriptableCommon_AssertCountsInitialized();
            LODWORD(printResultsToConsole) = g_scriptableWorldCounts.totalInstanceCount;
            LODWORD(tablea) = v27;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", tablea, printResultsToConsole) )
              __debugbreak();
          }
          v29 = localClientNuma;
          if ( (unsigned int)localClientNuma >= LOCAL_CLIENT_COUNT )
          {
            LODWORD(printResultsToConsole) = 2;
            LODWORD(tablea) = localClientNuma;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 114, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", tablea, printResultsToConsole) )
              __debugbreak();
          }
          if ( !g_scriptableCl_instanceContexts[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
            __debugbreak();
          _RBX = &g_scriptableCl_instanceContexts[v4][v27];
          itemDefCount = s_scriptableClLootTable[v4]->itemDefCount;
          if ( v26 >= itemDefCount )
          {
            LODWORD(printResultsToConsole) = itemDefCount;
            LODWORD(tablea) = v26;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 969, ASSERT_TYPE_ASSERT, "(unsigned)( itemDefIndex ) < (unsigned)( s_scriptableClLootTable[localClientNum]->itemDefCount )", "itemDefIndex doesn't index s_scriptableClLootTable[localClientNum]->itemDefCount\n\t%i not in [0, %i)", tablea, printResultsToConsole) )
              __debugbreak();
          }
          _RBX->commonContext.def = s_scriptableClLootTable[v4]->itemDefs[(unsigned __int64)v26].scriptableDef;
          ScriptableInstanceContextSecure::SetOrigin(&_RBX->commonContext, v27, &v28->origin);
          _R9 = &v28->angles;
          _RBX->commonContext.angles.v[0] = v28->angles.v[0];
          __asm
          {
            vmovss  xmm0, dword ptr [r9+4]
            vmovss  dword ptr [rbx+30h], xmm0
            vmovss  xmm1, dword ptr [r9+8]
            vmovss  dword ptr [rbx+34h], xmm1
          }
          ScriptableCl_SetInitialOriginAndAngles(v29, v27, &v28->origin, &v28->angles);
          ++s_scriptableClLootCount[v4];
          mapEnts = cm.mapEnts;
        }
        ++v3;
      }
      while ( v3 < mapEnts->spawnGroupLoot.pointCount );
    }
    if ( s_scriptableClLootCount[v4] != loot.itemCounts.itemCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 979, ASSERT_TYPE_ASSERT, "(s_scriptableClLootCount[localClientNum] == loot.itemCounts.itemCount)", (const char *)&queryFormat, "s_scriptableClLootCount[localClientNum] == loot.itemCounts.itemCount") )
      __debugbreak();
    Mem_LargeLocal::~Mem_LargeLocal(&v46);
  }
}

/*
==============
ScriptableCl_InitMemory
==============
*/
void ScriptableCl_InitMemory(HunkUser *clHunkUser, const unsigned int maxLocalClients)
{
  unsigned __int64 UsedSize; 
  unsigned int serverInstanceCount; 
  unsigned int runtimeInstanceCount; 
  unsigned int v7; 
  int v8; 
  unsigned int v9; 
  HunkUser **v10; 
  ScriptableReadChangeQueue *v11; 
  CircularEntryBuffer<500,131072,unsigned __int64,1> *v12; 
  CircularEntryBuffer<500,131072,unsigned __int64,1> *v13; 
  unsigned __int64 v14; 
  ScriptableInstanceClientContext *v15; 
  unsigned __int64 v16; 
  char *fmt; 
  __int64 v18; 
  __int64 v19; 

  if ( maxLocalClients > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 761, ASSERT_TYPE_ASSERT, "( maxLocalClients ) <= ( ( sizeof( *array_counter( s_ScriptableClRuntimeHunk ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "maxLocalClients", "ARRAY_COUNT( s_ScriptableClRuntimeHunk )", maxLocalClients, 2) )
    __debugbreak();
  UsedSize = Mem_HunkUser_GetUsedSize(clHunkUser);
  ScriptableCommon_AssertCountsInitialized();
  serverInstanceCount = g_scriptableWorldCounts.serverInstanceCount;
  if ( (int)g_scriptableWorldCounts.serverInstanceCount < 1 )
    serverInstanceCount = 1;
  ScriptableCommon_AssertCountsInitialized();
  runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
  v7 = g_scriptableCl_replicatedLimits.partWorldLimits[0];
  v8 = g_scriptableCl_replicatedLimits.partWorldLimits[1];
  g_scriptableCl_fixedWorldMap.indicesCount = serverInstanceCount;
  if ( (int)g_scriptableWorldCounts.runtimeInstanceCount < 1 )
    runtimeInstanceCount = 1;
  if ( (int)g_scriptableCl_replicatedLimits.partWorldLimits[0] < 1 )
    v7 = 1;
  g_scriptableCl_fixedWorldMap.indices = (unsigned int *)Mem_HunkUser_AllocInternal(clHunkUser, 4 * serverInstanceCount, 4ui64, "ScriptableCl_AllocateForAllPlayers");
  s_scriptableCl_reverseFixedWorldMapCount = v7;
  s_scriptableCl_reverseFixedWorldMap = (unsigned int *)Mem_HunkUser_AllocInternal(clHunkUser, 4i64 * v7, 4ui64, "ScriptableCl_AllocateForAllPlayers");
  if ( v8 < 1 )
    v8 = 1;
  s_scriptableCl_serverFixedPartsChangedArraySize = (v7 + 31) >> 5;
  s_scriptableCl_reverseReservedWorldMapCount = v8;
  v9 = 0;
  s_scriptableCl_serverReservedInstancesChangedArraySize = (runtimeInstanceCount + 31) >> 5;
  if ( maxLocalClients )
  {
    v10 = s_ScriptableClRuntimeHunk;
    do
    {
      ScriptableCl_AllocateUpdateBuffers((const LocalClientNum_t)v9, clHunkUser);
      if ( v9 >= 2 )
      {
        LODWORD(v19) = 2;
        LODWORD(v18) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 337, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_changeQueue ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_changeQueue\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      v11 = &s_scriptableCl_changeQueue[v9];
      if ( v11->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 360, ASSERT_TYPE_ASSERT, "(changeQueue.buffer == nullptr)", (const char *)&queryFormat, "changeQueue.buffer == nullptr") )
        __debugbreak();
      v11->buffer = NULL;
      s_scriptableCl_changeQueue[v9].readIndex = 0i64;
      s_scriptableCl_changeQueue[v9].writeIndex = 0i64;
      s_scriptableCl_changeQueue[v9].startIndex = 0i64;
      *(_QWORD *)&s_scriptableCl_changeQueue[v9].capacity = 0i64;
      v12 = (CircularEntryBuffer<500,131072,unsigned __int64,1> *)Mem_HunkUser_AllocInternal(clHunkUser, 0x20FA8ui64, 8ui64, "ScriptableCl_AllocateChangeQueue");
      v11->buffer = v12;
      v13 = v12;
      v12->m_bufferNextIndex = 0;
      DebugWipe(v12->m_buffer, 0x20000ui64);
      DebugWipe(v13->m_entries, 0xFA0ui64);
      s_scriptableCl_changeQueue[v9].capacity = 500;
      ScriptableCommon_AssertCountsInitialized();
      v14 = 152i64 * g_scriptableWorldCounts.totalInstanceCount;
      Com_Printf(29, "ScriptableCl_AllocateContextBuffers: Allocating %i kb for instance contexts for client %i.\n", v14 >> 10, v9);
      if ( v9 >= 2 )
      {
        LODWORD(v19) = 2;
        LODWORD(v18) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 700, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      if ( g_scriptableCl_instanceContexts[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 701, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum] == nullptr)", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum] == nullptr") )
        __debugbreak();
      v15 = (ScriptableInstanceClientContext *)Mem_HunkUser_AllocInternal(clHunkUser, v14, 8ui64, "ScriptableCl_AllocateContextBuffers");
      g_scriptableCl_instanceContexts[v9] = v15;
      memset_0(v15, 0, v14);
      ScriptableCL_AllocateWorldBuffers((const LocalClientNum_t)v9, clHunkUser);
      if ( *v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 779, ASSERT_TYPE_ASSERT, "(s_ScriptableClRuntimeHunk[localClientNum] == nullptr)", (const char *)&queryFormat, "s_ScriptableClRuntimeHunk[localClientNum] == nullptr") )
        __debugbreak();
      *v10++ = Mem_HunkUser_Create(0xF00000ui64, "scriptableClientRuntimeBuffer", TRACK_MAP_ENTS, MEM_ALLOC_FLAG_NO_MEM_CLEAR);
      ++v9;
    }
    while ( v9 < maxLocalClients );
  }
  v16 = Mem_HunkUser_GetUsedSize(clHunkUser) - UsedSize;
  if ( v16 > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,unsigned __int64>(unsigned __int64)", "unsigned", (unsigned int)v16, "unsigned", v16) )
    __debugbreak();
  LODWORD(fmt) = 15360;
  Com_Printf(29, "ScriptableCl_InitMemory: Used %dkb of client memory and created %d %dkb hunk.\n", (unsigned int)v16 >> 10, maxLocalClients, fmt);
}

/*
==============
ScriptableCl_InitMyChanges
==============
*/
void ScriptableCl_InitMyChanges(const LocalClientNum_t localClientNum)
{
  s_scriptableMyChanges = 1;
  ScriptableCl_Init(localClientNum);
  ScriptableCL_AssignAllMoverEntitiesMyChanges(localClientNum);
}

/*
==============
ScriptableCl_InitOnceForAllClients
==============
*/
void ScriptableCl_InitOnceForAllClients(const LocalClientNum_t localClientNum)
{
  unsigned int v2; 
  LocalClientNum_t i; 
  unsigned int runtimeInstanceCount; 
  LocalClientNum_t j; 
  const ScriptableDef *def; 
  unsigned int serverControlledPartCount; 
  unsigned int k; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  g_scriptableCl_fixedWorldMap.partCount = 0;
  if ( !g_scriptableCl_fixedWorldMap.indices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 548, ASSERT_TYPE_ASSERT, "(g_scriptableCl_fixedWorldMap.indices)", (const char *)&queryFormat, "g_scriptableCl_fixedWorldMap.indices") )
    __debugbreak();
  if ( !s_scriptableCl_reverseFixedWorldMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 549, ASSERT_TYPE_ASSERT, "(s_scriptableCl_reverseFixedWorldMap)", (const char *)&queryFormat, "s_scriptableCl_reverseFixedWorldMap") )
    __debugbreak();
  memset_0(g_scriptableCl_fixedWorldMap.indices, 0, 4i64 * g_scriptableCl_fixedWorldMap.indicesCount);
  memset_0(s_scriptableCl_reverseFixedWorldMap, 255, 4i64 * s_scriptableCl_reverseFixedWorldMapCount);
  v2 = 0;
  ScriptableCommon_AssertCountsInitialized();
  if ( g_scriptableWorldCounts.runtimeInstanceCount )
  {
    do
    {
      for ( i = LOCAL_CLIENT_0; i < SLODWORD(cl_maxLocalClients); ++i )
        ScriptableCl_ClearLink(i, v2);
      ++v2;
      ScriptableCommon_AssertCountsInitialized();
    }
    while ( v2 < g_scriptableWorldCounts.runtimeInstanceCount );
  }
  ScriptableCommon_AssertCountsInitialized();
  runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
  ScriptableCommon_AssertCountsInitialized();
  while ( runtimeInstanceCount < g_scriptableWorldCounts.totalInstanceCount )
  {
    for ( j = LOCAL_CLIENT_0; j < SLODWORD(cl_maxLocalClients); ++j )
      ScriptableCl_ClearLink(j, runtimeInstanceCount);
    if ( ScriptableCl_GetInstanceInUse(localClientNum, runtimeInstanceCount) )
    {
      def = ScriptableCl_GetInstanceCommonContext(localClientNum, runtimeInstanceCount)->def;
      if ( !def )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 419, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 284, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
          __debugbreak();
      }
      if ( (def->flags & 4) != 0 )
      {
        serverControlledPartCount = def->serverControlledPartCount;
        if ( !g_scriptableCl_fixedWorldMap.indices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 385, ASSERT_TYPE_ASSERT, "(g_scriptableCl_fixedWorldMap.indices)", (const char *)&queryFormat, "g_scriptableCl_fixedWorldMap.indices") )
          __debugbreak();
        if ( runtimeInstanceCount >= g_scriptableCl_fixedWorldMap.indicesCount )
        {
          LODWORD(v11) = g_scriptableCl_fixedWorldMap.indicesCount;
          LODWORD(v10) = runtimeInstanceCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 386, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( g_scriptableCl_fixedWorldMap.indicesCount )", "scriptableIndex doesn't index g_scriptableCl_fixedWorldMap.indicesCount\n\t%i not in [0, %i)", v10, v11) )
            __debugbreak();
        }
        if ( !s_scriptableCl_reverseFixedWorldMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 387, ASSERT_TYPE_ASSERT, "(s_scriptableCl_reverseFixedWorldMap != nullptr)", (const char *)&queryFormat, "s_scriptableCl_reverseFixedWorldMap != nullptr") )
          __debugbreak();
        for ( k = 0; k < serverControlledPartCount; s_scriptableCl_reverseFixedWorldMap[v9] = runtimeInstanceCount )
        {
          v9 = k + g_scriptableCl_fixedWorldMap.partCount;
          if ( (unsigned int)v9 >= s_scriptableCl_reverseFixedWorldMapCount )
          {
            LODWORD(v11) = s_scriptableCl_reverseFixedWorldMapCount;
            LODWORD(v10) = k + g_scriptableCl_fixedWorldMap.partCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 393, ASSERT_TYPE_ASSERT, "(unsigned)( partWorldIndex ) < (unsigned)( s_scriptableCl_reverseFixedWorldMapCount )", "partWorldIndex doesn't index s_scriptableCl_reverseFixedWorldMapCount\n\t%i not in [0, %i)", v10, v11) )
              __debugbreak();
          }
          ++k;
        }
        g_scriptableCl_fixedWorldMap.indices[runtimeInstanceCount] = g_scriptableCl_fixedWorldMap.partCount;
        g_scriptableCl_fixedWorldMap.partCount += serverControlledPartCount;
      }
    }
    ++runtimeInstanceCount;
    ScriptableCommon_AssertCountsInitialized();
  }
}

/*
==============
ScriptableCl_InitnstanceContextForClient
==============
*/
void ScriptableCl_InitnstanceContextForClient(const LocalClientNum_t localClientNum)
{
  unsigned int v2; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  ScriptableCollisionClientContext *InstanceCollisionContext; 
  ScriptableNoteTrackClientContext *InstanceNoteTrackContext; 
  unsigned int MapInstanceStartOffset; 
  __int64 v7; 
  ScriptableInstance *v8; 
  __int64 v9; 
  __int64 v10; 

  Sys_ProfBeginNamedEvent(0xFF808080, "ScriptableCl_InitContext");
  v2 = 0;
  ScriptableCommon_AssertCountsInitialized();
  if ( g_scriptableWorldCounts.totalInstanceCount )
  {
    do
    {
      InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, v2);
      InstanceCollisionContext = ScriptableCl_GetInstanceCollisionContext(localClientNum, v2);
      InstanceNoteTrackContext = ScriptableCl_GetInstanceNoteTrackContext(localClientNum, v2);
      memset_0(InstanceCommonContext, 0, sizeof(ScriptableInstanceContextSecure));
      *(_QWORD *)&InstanceCollisionContext->neverMoves = 0i64;
      *(_QWORD *)(&InstanceCollisionContext->clipmapCModelIndex + 1) = 0i64;
      HIDWORD(InstanceCollisionContext->model) = 0;
      InstanceNoteTrackContext->currentNoteTracks = NULL;
      InstanceNoteTrackContext->currentNoteTrackPartDef = NULL;
      *(_QWORD *)&InstanceCollisionContext->scriptableCollisionPredictive = -1i64;
      InstanceCollisionContext->scriptableCollisionDetail = -1;
      ScriptableCommon_AssertCountsInitialized();
      if ( v2 >= g_scriptableWorldCounts.totalInstanceCount )
      {
        ScriptableCommon_AssertCountsInitialized();
        LODWORD(v10) = g_scriptableWorldCounts.totalInstanceCount;
        LODWORD(v9) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 129, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 131, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
        __debugbreak();
      MapInstanceStartOffset = ScriptableCommon_GetMapInstanceStartOffset();
      if ( v2 >= MapInstanceStartOffset )
      {
        v7 = v2 - MapInstanceStartOffset;
        if ( (unsigned int)v7 >= cm.mapEnts->scriptableMapEnts.mapInstanceCount )
        {
          LODWORD(v10) = cm.mapEnts->scriptableMapEnts.mapInstanceCount;
          LODWORD(v9) = v2 - MapInstanceStartOffset;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 142, ASSERT_TYPE_ASSERT, "(unsigned)( mapInstanceIndex ) < (unsigned)( cm.mapEnts->scriptableMapEnts.mapInstanceCount )", "mapInstanceIndex doesn't index cm.mapEnts->scriptableMapEnts.mapInstanceCount\n\t%i not in [0, %i)", v9, v10) )
            __debugbreak();
        }
        v8 = &cm.mapEnts->scriptableMapEnts.mapInstances[v7];
        if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1016, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
          __debugbreak();
        InstanceCommonContext->def = v8->initialDef;
        ScriptableCl_SetInitialOriginAndAngles(localClientNum, v2, &v8->initialOrigin, &v8->initialAngles);
        ScriptableInstanceContextSecure::SetOrigin(InstanceCommonContext, v2, &v8->initialOrigin);
        InstanceCommonContext->angles.v[0] = v8->initialAngles.v[0];
        InstanceCommonContext->angles.v[1] = v8->initialAngles.v[1];
        InstanceCommonContext->angles.v[2] = v8->initialAngles.v[2];
      }
      ++v2;
      ScriptableCommon_AssertCountsInitialized();
    }
    while ( v2 < g_scriptableWorldCounts.totalInstanceCount );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
ScriptableCl_InterlockedBitSetTo
==============
*/
void ScriptableCl_InterlockedBitSetTo(volatile bitarray<2048> *entityBits, const unsigned int entityNum, const bool set)
{
  __int64 v3; 
  unsigned __int64 v4; 
  __int64 v5; 
  unsigned int v22; 
  char *v23; 
  char v24[256]; 

  v3 = 2i64;
  v4 = entityNum;
  v5 = 2i64;
  _R9 = v24;
  _RAX = entityBits;
  do
  {
    _R9 += 128;
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups xmm1, xmmword ptr [rax+70h]
    }
    _RAX = (volatile bitarray<2048> *)((char *)_RAX + 128);
    __asm
    {
      vmovups ymmword ptr [r9-80h], ymm0
      vmovups ymm0, ymmword ptr [rax-60h]
      vmovups ymmword ptr [r9-60h], ymm0
      vmovups ymm0, ymmword ptr [rax-40h]
      vmovups ymmword ptr [r9-40h], ymm0
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [r9-20h], xmm0
      vmovups xmmword ptr [r9-10h], xmm1
    }
    --v5;
  }
  while ( v5 );
  if ( entityNum >> 5 >= 0x40 )
  {
    _RAX = entityBits;
    _RCX = v24;
    do
    {
      _RCX += 128;
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups xmm1, xmmword ptr [rax+70h]
      }
      _RAX = (volatile bitarray<2048> *)((char *)_RAX + 128);
      __asm
      {
        vmovups ymmword ptr [rcx-80h], ymm0
        vmovups ymm0, ymmword ptr [rax-60h]
        vmovups ymmword ptr [rcx-60h], ymm0
        vmovups ymm0, ymmword ptr [rax-40h]
        vmovups ymmword ptr [rcx-40h], ymm0
        vmovups xmm0, xmmword ptr [rax-20h]
        vmovups xmmword ptr [rcx-20h], xmm0
        vmovups xmmword ptr [rcx-10h], xmm1
      }
      --v3;
    }
    while ( v3 );
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2070, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum >> 5 ) < (unsigned)( entityBits.WORD_COUNT )", "entityNum >> 5 doesn't index entityBits.WORD_COUNT\n\t%i not in [0, %i)", entityNum >> 5, 64) )
      __debugbreak();
  }
  v22 = 0x80000000 >> (v4 & 0x1F);
  v23 = (char *)&entityBits->array[v4 >> 5];
  if ( set )
  {
    if ( ((unsigned __int8)v23 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", v23) )
      __debugbreak();
    _InterlockedOr((volatile signed __int32 *)v23, v22);
  }
  else
  {
    if ( ((unsigned __int8)v23 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 51, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", v23) )
      __debugbreak();
    _InterlockedAnd((volatile signed __int32 *)v23, ~v22);
  }
}

/*
==============
ScriptableCl_IsInReserveWorldMap
==============
*/
char ScriptableCl_IsInReserveWorldMap(const LocalClientNum_t localClientNum, const ScriptableReplicatedInstance *rpInstance)
{
  __int64 v2; 
  bool v4; 
  unsigned int **v5; 
  unsigned int *v6; 
  unsigned int partIndex; 
  __int64 v9; 
  __int64 v11; 
  int v12; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v12 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2049, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_reverseReservedWorldMap ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_reverseReservedWorldMap\n\t%i not in [0, %i)", localClientNum, v12) )
      __debugbreak();
  }
  v4 = s_scriptableCl_reverseReservedWorldMap[v2] == NULL;
  v5 = &s_scriptableCl_reverseReservedWorldMap[v2];
  if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2050, ASSERT_TYPE_ASSERT, "(s_scriptableCl_reverseReservedWorldMap[localClientNum] != nullptr)", (const char *)&queryFormat, "s_scriptableCl_reverseReservedWorldMap[localClientNum] != nullptr") )
    __debugbreak();
  v6 = *v5;
  partIndex = rpInstance->partIndex;
  if ( partIndex >= partIndex + rpInstance->partCount )
    return 0;
  while ( 1 )
  {
    if ( partIndex >= s_scriptableCl_reverseReservedWorldMapCount )
    {
      LODWORD(v11) = s_scriptableCl_reverseReservedWorldMapCount;
      LODWORD(v9) = partIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2055, ASSERT_TYPE_ASSERT, "(unsigned)( partIndex ) < (unsigned)( s_scriptableCl_reverseReservedWorldMapCount )", "partIndex doesn't index s_scriptableCl_reverseReservedWorldMapCount\n\t%i not in [0, %i)", v9, v11) )
        __debugbreak();
    }
    if ( v6[partIndex] != -1 )
      break;
    if ( ++partIndex >= rpInstance->partIndex + rpInstance->partCount )
      return 0;
  }
  return 1;
}

/*
==============
ScriptableCl_IsInitialized
==============
*/
unsigned __int8 ScriptableCl_IsInitialized(const LocalClientNum_t localClientNum)
{
  int v1; 

  v1 = s_scriptableCLInitialized;
  return _bittest(&v1, localClientNum);
}

/*
==============
ScriptableCl_IsLoot
==============
*/
bool ScriptableCl_IsLoot(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  const ScriptableDef *def; 

  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.totalInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2547, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", scriptableIndex, g_scriptableWorldCounts.totalInstanceCount) )
      __debugbreak();
  }
  def = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def;
  return def && (def->flags & 0x20000) != 0;
}

/*
==============
ScriptableCl_IsLootCache
==============
*/
bool ScriptableCl_IsLootCache(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  __int64 v3; 
  const ScriptableDef *def; 
  const BG_SpawnGroup_Loot_ItemDef *LootItemDef; 
  BG_SpawnGroup_Loot_Table *v6; 
  unsigned int v8; 
  unsigned int totalInstanceCount; 

  v3 = localClientNum;
  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.totalInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    totalInstanceCount = g_scriptableWorldCounts.totalInstanceCount;
    v8 = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2560, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v8, totalInstanceCount) )
      __debugbreak();
  }
  def = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v3, scriptableIndex)->def;
  if ( !def )
    return 0;
  if ( (def->flags & 0x20000) == 0 )
    return 0;
  LootItemDef = ScriptableCl_GetLootItemDef((const LocalClientNum_t)v3, scriptableIndex);
  if ( !LootItemDef )
    return 0;
  v6 = s_scriptableClLootTable[v3];
  if ( (!v6 || v6->itemTypeIndexCache == 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2579, ASSERT_TYPE_ASSERT, "(lootTable && ( lootTable->itemTypeIndexCache != (0xFF) ))", (const char *)&queryFormat, "lootTable && ( lootTable->itemTypeIndexCache != SPAWNGROUP_LOOT_ITEM_TYPE_INVALID_INDEX )") )
    __debugbreak();
  return v6->itemTypeIndexCache == LootItemDef->type;
}

/*
==============
ScriptableCl_IsLootWeapon
==============
*/
bool ScriptableCl_IsLootWeapon(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  __int64 v3; 
  const ScriptableDef *def; 
  const BG_SpawnGroup_Loot_ItemDef *LootItemDef; 
  BG_SpawnGroup_Loot_Table *v6; 
  unsigned int v8; 
  unsigned int totalInstanceCount; 

  v3 = localClientNum;
  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.totalInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    totalInstanceCount = g_scriptableWorldCounts.totalInstanceCount;
    v8 = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2587, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v8, totalInstanceCount) )
      __debugbreak();
  }
  def = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v3, scriptableIndex)->def;
  if ( !def )
    return 0;
  if ( (def->flags & 0x20000) == 0 )
    return 0;
  LootItemDef = ScriptableCl_GetLootItemDef((const LocalClientNum_t)v3, scriptableIndex);
  if ( !LootItemDef )
    return 0;
  v6 = s_scriptableClLootTable[v3];
  if ( (!v6 || v6->itemTypeIndexCache == 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2606, ASSERT_TYPE_ASSERT, "(lootTable && ( lootTable->itemTypeIndexCache != (0xFF) ))", (const char *)&queryFormat, "lootTable && ( lootTable->itemTypeIndexCache != SPAWNGROUP_LOOT_ITEM_TYPE_INVALID_INDEX )") )
    __debugbreak();
  return v6->itemTypeIndexWeapon == LootItemDef->type;
}

/*
==============
ScriptableCl_IsLootWeaponWithInvalidHandleIndex
==============
*/
char ScriptableCl_IsLootWeaponWithInvalidHandleIndex(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  const BG_SpawnGroup_Loot_ItemDef *LootItemDef; 
  unsigned int weaponIndex; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  CgWeaponMap *Instance; 
  __int64 v9; 
  __int64 v10; 

  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.totalInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2656, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", scriptableIndex, g_scriptableWorldCounts.totalInstanceCount) )
      __debugbreak();
  }
  if ( ScriptableCl_IsLootWeapon(localClientNum, scriptableIndex) )
  {
    ScriptableCommon_AssertCountsInitialized();
    if ( scriptableIndex >= g_scriptableWorldCounts.totalInstanceCount )
    {
      ScriptableCommon_AssertCountsInitialized();
      LODWORD(v10) = g_scriptableWorldCounts.totalInstanceCount;
      LODWORD(v9) = scriptableIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2673, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    if ( !ScriptableCl_IsLootWeapon(localClientNum, scriptableIndex) )
      return 1;
    LootItemDef = ScriptableCl_GetLootItemDef(localClientNum, scriptableIndex);
    if ( !LootItemDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2680, ASSERT_TYPE_ASSERT, "(lootItemDef)", (const char *)&queryFormat, "lootItemDef") )
      __debugbreak();
    weaponIndex = LootItemDef->weaponIndex;
    if ( weaponIndex )
      goto LABEL_16;
    if ( !BG_SpawnGroup_Loot_IsCustomWeaponItemDef(LootItemDef) )
      return 1;
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    weaponIndex = InstanceCommonContext->extraPayload;
    if ( InstanceCommonContext->extraPayload )
    {
LABEL_16:
      Instance = CgWeaponMap::GetInstance(localClientNum);
      if ( !BgWeaponMap::IsEntryValid(Instance, weaponIndex) )
        weaponIndex = 0;
    }
    else
    {
      weaponIndex = 0;
    }
    if ( !weaponIndex )
      return 1;
  }
  return 0;
}

/*
==============
ScriptableCl_IsNearChangeQueueOverflow
==============
*/
char ScriptableCl_IsNearChangeQueueOverflow(const LocalClientNum_t localClientNum)
{
  __int64 v2; 
  __int64 v3; 
  unsigned __int64 writeIndex; 
  unsigned __int64 readIndex; 
  int v14; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v14 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 337, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_changeQueue ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_changeQueue\n\t%i not in [0, %i)", localClientNum, v14) )
      __debugbreak();
  }
  v3 = v2;
  if ( s_scriptableCl_changeQueue[v3].writeIndex == s_scriptableCl_changeQueue[v3].readIndex )
    return 0;
  if ( !s_scriptableCl_changeQueue[v3].buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4266, ASSERT_TYPE_ASSERT, "(changeQueue.buffer)", (const char *)&queryFormat, "changeQueue.buffer") )
    __debugbreak();
  __asm { vmovss  xmm2, cs:__real@5f000000 }
  writeIndex = s_scriptableCl_changeQueue[v3].writeIndex;
  readIndex = s_scriptableCl_changeQueue[v3].readIndex;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, cs:__real@3f666666
    vcomiss xmm1, xmm2
    vsubss  xmm1, xmm1, xmm2
    vcomiss xmm1, xmm2
    vcvttss2si rcx, xmm1
  }
  if ( writeIndex - readIndex >= _RCX )
  {
    Com_PrintError(29, "ScriptableCl_IsNearChangeQueueOverflow: Close to the change index capacity. Write %zu Read %zu Start %zu\n", s_scriptableCl_changeQueue[v3].writeIndex, readIndex, s_scriptableCl_changeQueue[v3].startIndex);
    return 1;
  }
  if ( ScriptableMsgRead_CheckAvailableBufferSpace(s_scriptableCl_changeQueue[v3].readIndex, writeIndex, s_scriptableCl_changeQueue[v3].buffer, 0x6666u) )
    return 0;
  Com_PrintError(29, "ScriptableCl_IsNearChangeQueueOverflow: Close to the change buffer capacity. Write %zu Read %zu Start %zu\n", s_scriptableCl_changeQueue[v3].writeIndex, s_scriptableCl_changeQueue[v3].readIndex, s_scriptableCl_changeQueue[v3].startIndex);
  return 1;
}

/*
==============
ScriptableCl_IsStandaloneServerInstance
==============
*/
bool ScriptableCl_IsStandaloneServerInstance(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  const ScriptableDef *def; 
  int flags; 

  def = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def;
  if ( !def )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2473, ASSERT_TYPE_ASSERT, "( ( def ) )", "( scriptableIndex ) = %i", scriptableIndex) )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 284, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
  }
  flags = def->flags;
  return (flags & 4) != 0 && (flags & 0x2000) != 0;
}

/*
==============
ScriptableCl_MarkClientUpdateRequired
==============
*/
void ScriptableCl_MarkClientUpdateRequired(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptableUpdateType updateType)
{
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  ScriptableCollisionClientContext *InstanceCollisionContext; 
  ScriptableUpdateBitset *UpdateListForScriptable; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  bool UpdateRequiredForNonEntityScriptable; 
  __int64 v14; 
  __int64 v15; 
  bool IsStandaloneServerInstance; 

  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  InstanceCollisionContext = ScriptableCl_GetInstanceCollisionContext(localClientNum, scriptableIndex);
  UpdateListForScriptable = ScriptableCl_GetUpdateListForScriptable(localClientNum, scriptableIndex);
  IsStandaloneServerInstance = ScriptableCl_IsStandaloneServerInstance(localClientNum, scriptableIndex);
  v9 = scriptableIndex >> 5;
  v10 = 0x80000000 >> (scriptableIndex & 0x1F);
  if ( updateType == SCRIPTABLE_UPDATE_INIT )
  {
    if ( !ScriptableCl_IsLinked(localClientNum, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3582, ASSERT_TYPE_ASSERT, "(ScriptableCl_IsActive( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_IsActive( localClientNum, scriptableIndex )") )
      __debugbreak();
    if ( (*((_BYTE *)InstanceCommonContext + 60) & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3584, ASSERT_TYPE_ASSERT, "(!r_context.needsShutdown)", "%s\n\tTrying to initialize a scriptable on the same frame it was marked for shutdown", "!r_context.needsShutdown") )
      __debugbreak();
    if ( (unsigned int)v9 >= 0x3D09 )
    {
      LODWORD(v14) = scriptableIndex >> 5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3587, ASSERT_TYPE_ASSERT, "(unsigned)( scrIndexHigh ) < (unsigned)( ( sizeof( *array_counter( r_updateList.initializationList ) ) + 0 ) )", "scrIndexHigh doesn't index ARRAY_COUNT( r_updateList.initializationList )\n\t%i not in [0, %i)", v14, 15625) )
        __debugbreak();
    }
    v12 = UpdateListForScriptable->initializationList[v9];
    if ( (v12 & v10) == 0 )
    {
      UpdateListForScriptable->initializationList[v9] = v10 | v12;
      ++UpdateListForScriptable->initializationCount;
    }
    UpdateRequiredForNonEntityScriptable = ScriptableCl_GetUpdateRequiredForNonEntityScriptable(localClientNum, scriptableIndex);
    ScriptableCl_MarkPerFrameUpdateRequired(UpdateListForScriptable, scriptableIndex, UpdateRequiredForNonEntityScriptable);
    if ( !IsStandaloneServerInstance && ScriptableCl_GetMoveUpdateRequiedForClientOnlyScriptable(localClientNum, scriptableIndex) )
      ScriptableCl_MarkPerFrameMoveRequired(UpdateListForScriptable, scriptableIndex, 1);
    *((_BYTE *)InstanceCommonContext + 60) |= 1u;
    goto LABEL_40;
  }
  if ( updateType == SCRIPTABLE_UPDATE_SHUTDOWN )
  {
    if ( !ScriptableCl_IsLinked(localClientNum, scriptableIndex) && (*((_BYTE *)InstanceCommonContext + 60) & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3611, ASSERT_TYPE_ASSERT, "(ScriptableCl_IsActive( localClientNum, scriptableIndex ) || r_context.needsShutdown)", (const char *)&queryFormat, "ScriptableCl_IsActive( localClientNum, scriptableIndex ) || r_context.needsShutdown") )
      __debugbreak();
    if ( (unsigned int)v9 >= 0x3D09 )
    {
      LODWORD(v14) = scriptableIndex >> 5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3614, ASSERT_TYPE_ASSERT, "(unsigned)( scrIndexHigh ) < (unsigned)( ( sizeof( *array_counter( r_updateList.shutdownList ) ) + 0 ) )", "scrIndexHigh doesn't index ARRAY_COUNT( r_updateList.shutdownList )\n\t%i not in [0, %i)", v14, 15625) )
        __debugbreak();
    }
    v11 = UpdateListForScriptable->shutdownList[v9];
    if ( (v11 & v10) == 0 )
    {
      UpdateListForScriptable->shutdownList[v9] = v10 | v11;
      ++UpdateListForScriptable->shutdownCount;
    }
    if ( (unsigned int)v9 >= 0x3D09 )
    {
      LODWORD(v15) = 15625;
      LODWORD(v14) = scriptableIndex >> 5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3622, ASSERT_TYPE_ASSERT, "(unsigned)( scrIndexHigh ) < (unsigned)( ( sizeof( *array_counter( r_updateList.initializationList ) ) + 0 ) )", "scrIndexHigh doesn't index ARRAY_COUNT( r_updateList.initializationList )\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    if ( (v10 & UpdateListForScriptable->initializationList[v9]) != 0 )
    {
      if ( !UpdateListForScriptable->initializationCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3625, ASSERT_TYPE_ASSERT, "(r_updateList.initializationCount)", (const char *)&queryFormat, "r_updateList.initializationCount") )
        __debugbreak();
      UpdateListForScriptable->initializationList[v9] &= ~v10;
      --UpdateListForScriptable->initializationCount;
    }
    ScriptableCl_MarkPerFrameUpdateRequired(UpdateListForScriptable, scriptableIndex, 0);
    if ( !IsStandaloneServerInstance )
      ScriptableCl_MarkPerFrameMoveRequired(UpdateListForScriptable, scriptableIndex, 0);
    *((_BYTE *)InstanceCommonContext + 60) &= ~1u;
    *((_BYTE *)InstanceCommonContext + 60) |= 2u;
LABEL_40:
    InstanceCollisionContext->collisionActiveFlags &= 0xF9u;
    return;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3643, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown update type %i", updateType) )
    __debugbreak();
}

/*
==============
ScriptableCl_MarkPerFrameMoveRequired
==============
*/
void ScriptableCl_MarkPerFrameMoveRequired(ScriptableUpdateBitset *r_updateList, const unsigned int scriptableIndex, const bool requiresPerFrameUpdate)
{
  bool v6; 

  if ( ((unsigned __int8)&s_threadCheck_1 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_threadCheck_1) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_threadCheck_1, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2940, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_threadCheck, 1, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_threadCheck, 1, 0 ) == 0") )
    __debugbreak();
  v6 = bitarray_base<bitarray<500000>>::testBit(&r_updateList->perFrameMove, scriptableIndex);
  if ( requiresPerFrameUpdate )
  {
    if ( !v6 )
      ++r_updateList->perFrameMoveCount;
    bitarray_base<bitarray<500000>>::setBit(&r_updateList->perFrameMove, scriptableIndex);
  }
  else
  {
    if ( v6 )
      --r_updateList->perFrameMoveCount;
    bitarray_base<bitarray<500000>>::resetBit(&r_updateList->perFrameMove, scriptableIndex);
  }
  if ( ((unsigned __int64)&s_threadCheck_1 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_threadCheck_1) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_threadCheck_1, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2958, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_threadCheck, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_threadCheck, 0, 1 ) == 1") )
    __debugbreak();
}

/*
==============
ScriptableCl_MarkPerFrameUpdateRequired
==============
*/
void ScriptableCl_MarkPerFrameUpdateRequired(ScriptableUpdateBitset *r_updateList, const unsigned int scriptableIndex, const bool requiresPerFrameUpdate)
{
  bool v6; 
  bitarray_base<bitarray<500000> > *p_perFrameUpdate; 

  if ( ((unsigned __int8)&s_threadCheck_0 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_threadCheck_0) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_threadCheck_0, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2912, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_threadCheck, 1, 0 ) == 0)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_threadCheck, 1, 0 ) == 0") )
    __debugbreak();
  v6 = bitarray_base<bitarray<500000>>::testBit(&r_updateList->perFrameUpdate, scriptableIndex);
  if ( requiresPerFrameUpdate )
  {
    if ( !v6 )
      ++r_updateList->perFrameUpdateCount;
  }
  else if ( v6 )
  {
    --r_updateList->perFrameUpdateCount;
  }
  bitarray_base<bitarray<500000>>::resetBit(&r_updateList->perFrameUpdateCompleted, scriptableIndex);
  p_perFrameUpdate = &r_updateList->perFrameUpdate;
  if ( requiresPerFrameUpdate )
    bitarray_base<bitarray<500000>>::setBit(p_perFrameUpdate, scriptableIndex);
  else
    bitarray_base<bitarray<500000>>::resetBit(p_perFrameUpdate, scriptableIndex);
  if ( ((unsigned __int64)&s_threadCheck_0 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)&s_threadCheck_0) )
    __debugbreak();
  if ( _InterlockedCompareExchange(&s_threadCheck_0, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2932, ASSERT_TYPE_ASSERT, "(Sys_InterlockedCompareExchange( &s_threadCheck, 0, 1 ) == 1)", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_threadCheck, 0, 1 ) == 1") )
    __debugbreak();
}

/*
==============
ScriptableCl_MarkReservedInstanceChanged
==============
*/
void ScriptableCl_MarkReservedInstanceChanged(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  unsigned int **v3; 
  __int64 v4; 
  __int64 v5; 
  unsigned int v6; 

  v3 = &s_scriptableCl_reservedInstancesChangedBits[localClientNum];
  if ( !*v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3746, ASSERT_TYPE_ASSERT, "(s_scriptableCl_reservedInstancesChangedBits[localClientNum])", (const char *)&queryFormat, "s_scriptableCl_reservedInstancesChangedBits[localClientNum]") )
    __debugbreak();
  v4 = scriptableIndex >> 5;
  if ( (unsigned int)v4 >= s_scriptableCl_serverReservedInstancesChangedArraySize )
  {
    v6 = s_scriptableCl_serverReservedInstancesChangedArraySize;
    LODWORD(v5) = scriptableIndex >> 5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3749, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableArrayIndex ) < (unsigned)( s_scriptableCl_serverReservedInstancesChangedArraySize )", "scriptableArrayIndex doesn't index s_scriptableCl_serverReservedInstancesChangedArraySize\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  (*v3)[v4] |= 0x80000000 >> (scriptableIndex & 0x1F);
}

/*
==============
ScriptableCl_MarkStandaloneEntityParentUpdate
==============
*/
void ScriptableCl_MarkStandaloneEntityParentUpdate(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const unsigned int entityIndex)
{
  __int64 v3; 
  __int64 v5; 
  const dvar_t *v6; 
  const ScriptableStandaloneParentData *StandaloneEntityParentData; 
  unsigned __int16 v8; 
  unsigned __int16 v9; 
  unsigned __int16 *v10; 
  __int64 v11; 
  unsigned __int16 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 

  v3 = entityIndex;
  v5 = scriptableIndex;
  ScriptableCommon_AssertCountsInitialized();
  if ( (unsigned int)v5 >= g_scriptableWorldCounts.runtimeInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3464, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetReservedInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetReservedInstanceCount()\n\t%i not in [0, %i)", v5, g_scriptableWorldCounts.runtimeInstanceCount) )
      __debugbreak();
  }
  if ( !ScriptableCl_IsStandaloneServerInstance(localClientNum, v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3465, ASSERT_TYPE_ASSERT, "(ScriptableCl_IsStandaloneServerInstance( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_IsStandaloneServerInstance( localClientNum, scriptableIndex )") )
    __debugbreak();
  v6 = DVARBOOL_scriptable_entity_parenting;
  if ( !DVARBOOL_scriptable_entity_parenting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_entity_parenting") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    StandaloneEntityParentData = ScriptableCl_GetStandaloneEntityParentData(localClientNum);
    if ( (unsigned int)v5 >= 0x800 )
    {
      LODWORD(v15) = 2048;
      LODWORD(v13) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3477, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ( sizeof( *array_counter( parentData.m_next ) ) + 0 ) )", "scriptableIndex doesn't index parentData.m_next\n\t%i not in [0, %i)", v13, v15) )
        __debugbreak();
      LODWORD(v16) = 2048;
      LODWORD(v14) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3478, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ( sizeof( *array_counter( parentData.m_parentEntity ) ) + 0 ) )", "scriptableIndex doesn't index parentData.m_parentEntity\n\t%i not in [0, %i)", v14, v16) )
        __debugbreak();
    }
    v8 = StandaloneEntityParentData->m_next[v5];
    if ( v8 != 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3479, ASSERT_TYPE_ASSERT, "( parentData.m_next[scriptableIndex] ) == ( 0xffff )", "%s == %s\n\t%i, %i", "parentData.m_next[scriptableIndex]", "USHRT_MAX", v8, 0xFFFF) )
      __debugbreak();
    v9 = StandaloneEntityParentData->m_parentEntity[v5];
    if ( v9 != 0xFFFF )
    {
      LODWORD(v18) = 0xFFFF;
      LODWORD(v17) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3480, ASSERT_TYPE_ASSERT, "( parentData.m_parentEntity[scriptableIndex] ) == ( 0xffff )", "%s == %s\n\t%i, %i", "parentData.m_parentEntity[scriptableIndex]", "USHRT_MAX", v17, v18) )
        __debugbreak();
    }
    if ( (unsigned int)v3 >= 0x800 )
    {
      LODWORD(v15) = 2048;
      LODWORD(v13) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3482, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( sizeof( *array_counter( parentData.m_assignedHead ) ) + 0 ) )", "entityIndex doesn't index parentData.m_assignedHead\n\t%i not in [0, %i)", v13, v15) )
        __debugbreak();
    }
    v10 = &StandaloneEntityParentData->m_assignedHead[v3];
    if ( *v10 == 0xFFFF )
    {
      *v10 = truncate_cast<unsigned short,unsigned int>(v5);
    }
    else
    {
      LOWORD(v11) = ScriptableCl_FindParentEntityPreviousNode(StandaloneEntityParentData, v3, 0xFFFFu);
      if ( (_WORD)v11 == 0xFFFF )
      {
        LODWORD(v18) = 0xFFFF;
        LODWORD(v17) = 0xFFFF;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3491, ASSERT_TYPE_ASSERT, "( prevIndex ) != ( 0xffff )", "%s != %s\n\t%i, %i", "prevIndex", "USHRT_MAX", v17, v18) )
          __debugbreak();
      }
      v11 = (unsigned __int16)v11;
      if ( StandaloneEntityParentData->m_parentEntity[(unsigned __int16)v11] == 0xFFFF )
      {
        LODWORD(v18) = 0xFFFF;
        LODWORD(v17) = 0xFFFF;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3492, ASSERT_TYPE_ASSERT, "( parentData.m_parentEntity[prevIndex] ) != ( 0xffff )", "%s != %s\n\t%i, %i", "parentData.m_parentEntity[prevIndex]", "USHRT_MAX", v17, v18) )
          __debugbreak();
      }
      v12 = StandaloneEntityParentData->m_next[v11];
      if ( v12 != 0xFFFF )
      {
        LODWORD(v18) = 0xFFFF;
        LODWORD(v17) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3493, ASSERT_TYPE_ASSERT, "( parentData.m_next[prevIndex] ) == ( 0xffff )", "%s == %s\n\t%i, %i", "parentData.m_next[prevIndex]", "USHRT_MAX", v17, v18) )
          __debugbreak();
      }
      StandaloneEntityParentData->m_next[v11] = truncate_cast<unsigned short,unsigned int>(v5);
    }
    StandaloneEntityParentData->m_parentEntity[v5] = truncate_cast<unsigned short,unsigned int>(v3);
  }
}

/*
==============
ScriptableCl_ProcessChangedServerState
==============
*/
void ScriptableCl_ProcessChangedServerState(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  __int64 v2; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const ScriptableDef *def; 
  ntl::red_black_tree_node_base *LootItemDefByScriptableDef; 
  const BG_SpawnGroup_Loot_ItemDef *v7; 
  unsigned int ScriptableInstanceFirstPartWorldIndex; 
  unsigned __int8 state; 
  unsigned __int64 linkedObjectIndex; 
  bitarray<2048> *v11; 

  v2 = localClientNum;
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  if ( (*((_BYTE *)InstanceCommonContext + 60) & 4) != 0 )
  {
    ScriptableCl_Update_AssertInitializedScriptable((const LocalClientNum_t)v2, scriptableIndex);
    if ( InstanceCommonContext->linkedObjectType == SCRIPTABLE_LINK_ENTITY )
    {
      linkedObjectIndex = InstanceCommonContext->linkedObjectIndex;
      if ( (unsigned int)linkedObjectIndex >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3093, ASSERT_TYPE_ASSERT, "(unsigned)( entityNum ) < (unsigned)( ( 2048 ) )", "entityNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", InstanceCommonContext->linkedObjectIndex, 2048) )
        __debugbreak();
      v11 = &s_scriptableCl_serverChangedEntitiesBits[v2];
      if ( (unsigned int)linkedObjectIndex >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", linkedObjectIndex, 2048) )
        __debugbreak();
      v11->array[linkedObjectIndex >> 5] |= 0x80000000 >> (linkedObjectIndex & 0x1F);
    }
    else if ( !ScriptableCl_Spatial_Marked((const LocalClientNum_t)v2, scriptableIndex) || ScriptableCl_Spatial_IsActive((const LocalClientNum_t)v2, scriptableIndex) )
    {
      ScriptableCl_UpdateSharedInstanceStates((const LocalClientNum_t)v2, scriptableIndex);
    }
  }
  else if ( ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v2, scriptableIndex) && ScriptableCl_Spatial_Marked((const LocalClientNum_t)v2, scriptableIndex) && !ScriptableCl_Spatial_IsActive((const LocalClientNum_t)v2, scriptableIndex) )
  {
    def = InstanceCommonContext->def;
    if ( InstanceCommonContext->def )
    {
      if ( (def->flags & 0x20000) != 0 )
      {
        LootItemDefByScriptableDef = ScriptableCl_GetLootItemDefByScriptableDef((const LocalClientNum_t)v2, def);
        v7 = (const BG_SpawnGroup_Loot_ItemDef *)LootItemDefByScriptableDef;
        if ( LootItemDefByScriptableDef )
        {
          if ( HIDWORD(LootItemDefByScriptableDef[7].mp_left) )
          {
            ScriptableInstanceFirstPartWorldIndex = ScriptableCl_GetScriptableInstanceFirstPartWorldIndex((const LocalClientNum_t)v2, scriptableIndex);
            state = ScriptableCl_GetScriptableInstanceFirstPartWorldState((const LocalClientNum_t)v2, scriptableIndex, ScriptableInstanceFirstPartWorldIndex);
            ScriptableCl_ProcessChangedServerStateLootObjective((const LocalClientNum_t)v2, scriptableIndex, InstanceCommonContext->def, v7, state);
          }
        }
      }
    }
  }
}

/*
==============
ScriptableCl_ProcessChangedServerStateLootObjective
==============
*/
void ScriptableCl_ProcessChangedServerStateLootObjective(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptableDef *const def, const BG_SpawnGroup_Loot_ItemDef *const lootItemDef, const unsigned __int8 state)
{
  bool v9; 

  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5030, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( (def->flags & 0x20000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5031, ASSERT_TYPE_ASSERT, "(Scriptable_HasLootTable( def->flags ))", (const char *)&queryFormat, "Scriptable_HasLootTable( def->flags )") )
    __debugbreak();
  if ( (!lootItemDef || !lootItemDef->objective.icon) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5032, ASSERT_TYPE_ASSERT, "(lootItemDef && lootItemDef->objective.icon)", (const char *)&queryFormat, "lootItemDef && lootItemDef->objective.icon") )
    __debugbreak();
  v9 = ScriptableCl_ObjectiveActiveForInstance(localClientNum, scriptableIndex);
  if ( s_scriptableCl_lootHidden || state < lootItemDef->objectiveState || state > lootItemDef->objectiveStateMax )
  {
    if ( v9 )
      ScriptableCl_ObjectiveRemove(localClientNum, scriptableIndex);
  }
  else if ( v9 || !ScriptableCl_ObjectiveAddSafe(localClientNum) )
  {
    if ( !ScriptableCl_ObjectiveAddSafe(localClientNum) )
      Com_PrintError(29, "Can't add objective because too many active\n");
  }
  else
  {
    ScriptableCl_ObjectiveAdd(localClientNum, scriptableIndex, &lootItemDef->objective);
  }
}

/*
==============
ScriptableCl_QueueClientCollisionUpdate
==============
*/
char ScriptableCl_QueueClientCollisionUpdate(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptableCollisionUpdateType updateType)
{
  ScriptableCollisionClientContext *InstanceCollisionContext; 
  ScriptableUpdateBitset *UpdateListForScriptable; 
  unsigned int collisionActivationCount; 
  unsigned __int8 v10; 
  __int64 v11; 

  if ( (*((_BYTE *)ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex) + 60) & 3) != 0 )
    return 1;
  InstanceCollisionContext = ScriptableCl_GetInstanceCollisionContext(localClientNum, scriptableIndex);
  if ( (InstanceCollisionContext->collisionActiveFlags & 6) == 0 )
  {
    UpdateListForScriptable = ScriptableCl_GetUpdateListForScriptable(localClientNum, scriptableIndex);
    collisionActivationCount = UpdateListForScriptable->collisionActivationCount;
    if ( collisionActivationCount == 128 )
      return 0;
    if ( collisionActivationCount >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3673, ASSERT_TYPE_ASSERT, "(unsigned)( r_updateList.collisionActivationCount ) < (unsigned)( ( sizeof( *array_counter( r_updateList.collisionActivationQueue ) ) + 0 ) )", "r_updateList.collisionActivationCount doesn't index r_updateList.collisionActivationQueue\n\t%i not in [0, %i)", UpdateListForScriptable->collisionActivationCount, 128) )
      __debugbreak();
    UpdateListForScriptable->collisionActivationQueue[UpdateListForScriptable->collisionActivationCount++] = scriptableIndex;
  }
  if ( updateType )
  {
    if ( updateType != SCRIPTABLE_COLLISION_UPDATE_DEACTIVATION )
    {
      LODWORD(v11) = updateType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3692, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unknown update type %i", v11) )
        __debugbreak();
      return 1;
    }
    v10 = InstanceCollisionContext->collisionActiveFlags & 0xF9 | 4;
  }
  else
  {
    v10 = InstanceCollisionContext->collisionActiveFlags & 0xF9 | 2;
  }
  InstanceCollisionContext->collisionActiveFlags = v10;
  return 1;
}

/*
==============
ScriptableCl_ReenterInstancePart
==============
*/
void ScriptableCl_ReenterInstancePart(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptablePartDef *partDef)
{
  unsigned int i; 
  ScriptableEventParams eventParams; 

  if ( !partDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 663, ASSERT_TYPE_ASSERT, "(partDef)", (const char *)&queryFormat, "partDef") )
    __debugbreak();
  if ( partDef->numStates )
  {
    eventParams.context = ScriptableCl_LocalClientToContext(localClientNum);
    eventParams.scriptableIndex = scriptableIndex;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    eventParams.callbacks = &s_clCallbackTable;
    eventParams.partDef = partDef;
    __asm { vmovdqu xmmword ptr [rsp+68h+eventParams.damageEvent], xmm0 }
    ScriptableBg_ExitState(&eventParams);
    ScriptableBg_EnterState(&eventParams, 0);
  }
  for ( i = 0; i < partDef->numChildParts; ++i )
    ScriptableCl_ReenterInstancePart(localClientNum, scriptableIndex, &partDef->childParts[i]);
}

/*
==============
ScriptableCl_RefreshNonEntityPerFrameUpdateList
==============
*/
void ScriptableCl_RefreshNonEntityPerFrameUpdateList(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptableDef *def, const ScriptableStateDef *newStateDef)
{
  int flags; 
  bitarray_base<bitarray<500000> > *UpdateListForScriptable; 
  ScriptableUpdateBitset *v10; 
  unsigned int v11; 
  bool v12; 

  if ( !ScriptableCl_GetInstanceInUse(localClientNum, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2973, ASSERT_TYPE_ASSERT, "( ( ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex ) ) )", "( def.name ) = %s", def->name) )
    __debugbreak();
  if ( !ScriptableCl_IsLinked(localClientNum, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2974, ASSERT_TYPE_ASSERT, "( ( ScriptableCl_IsActive( localClientNum, scriptableIndex ) ) )", "( def.name ) = %s", def->name) )
    __debugbreak();
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 340, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( (def->flags & 0x200) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2975, ASSERT_TYPE_ASSERT, "( ( ScriptableDef_RequiresUpdate( &def ) ) )", "( def.name ) = %s", def->name) )
    __debugbreak();
  flags = def->flags;
  if ( (flags & 2) != 0 && (flags & 0x2000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2976, ASSERT_TYPE_ASSERT, "( ( !ScriptableDef_HasServerInstance( &def ) || ScriptableDef_IsStandaloneRequested( &def ) ) )", "( def.name ) = %s", def->name) )
    __debugbreak();
  UpdateListForScriptable = (bitarray_base<bitarray<500000> > *)ScriptableCl_GetUpdateListForScriptable(localClientNum, scriptableIndex);
  v10 = (ScriptableUpdateBitset *)UpdateListForScriptable;
  v11 = scriptableIndex;
  if ( (newStateDef->base.flags & 0x200) != 0 )
  {
    v12 = 1;
LABEL_22:
    ScriptableCl_MarkPerFrameUpdateRequired(v10, v11, v12);
    return;
  }
  if ( bitarray_base<bitarray<500000>>::testBit(UpdateListForScriptable + 125824, scriptableIndex) && !ScriptableCl_GetUpdateRequiredForNonEntityScriptable(localClientNum, scriptableIndex) )
  {
    v12 = 0;
    v11 = scriptableIndex;
    goto LABEL_22;
  }
}

/*
==============
ScriptableCl_RemoveNonSpatialLootInstance
==============
*/
void ScriptableCl_RemoveNonSpatialLootInstance(const unsigned int removeIndex)
{
  unsigned int v1; 
  int v2; 
  unsigned int *i; 

  v1 = s_scriptableCl_nonSpatialLootInstanceCount;
  v2 = 0;
  if ( s_scriptableCl_nonSpatialLootInstanceCount )
  {
    for ( i = s_scriptableCl_nonSpatialLootInstances; *i != removeIndex; ++i )
    {
      if ( ++v2 >= s_scriptableCl_nonSpatialLootInstanceCount )
        return;
    }
    --s_scriptableCl_nonSpatialLootInstanceCount;
    s_scriptableCl_nonSpatialLootInstances[v2] = s_scriptableCl_nonSpatialLootInstances[v1 - 1];
  }
}

/*
==============
ScriptableCl_RemovedSnapshotScriptable
==============
*/
void ScriptableCl_RemovedSnapshotScriptable(const LocalClientNum_t localClientNum, const ScriptableReplicatedInstance *rpInstance)
{
  __int64 v3; 
  unsigned __int8 v4; 
  unsigned __int16 payload; 
  unsigned int *v6; 
  unsigned int partIndex; 
  unsigned int *v8; 
  __int64 v9; 
  unsigned int instanceIndex; 
  __int64 v11; 
  unsigned int runtimeInstanceCount; 
  __int64 v13; 
  int v14; 
  __int64 v15; 
  int v16; 

  v3 = localClientNum;
  ScriptableCommon_AssertCountsInitialized();
  if ( rpInstance->instanceIndex >= g_scriptableWorldCounts.runtimeInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
    instanceIndex = rpInstance->instanceIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3809, ASSERT_TYPE_ASSERT, "(unsigned)( rpInstance.instanceIndex ) < (unsigned)( ScriptableCommon_GetReservedInstanceCount() )", "rpInstance.instanceIndex doesn't index ScriptableCommon_GetReservedInstanceCount()\n\t%i not in [0, %i)", instanceIndex, runtimeInstanceCount) )
      __debugbreak();
  }
  v4 = rpInstance->replicatedType[0];
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      v16 = 1;
      v14 = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3832, ASSERT_TYPE_ASSERT, "( replicatedType ) == ( ScriptableReplicatedType::STANDALONE )", "%s == %s\n\t%i, %i", "replicatedType", "ScriptableReplicatedType::STANDALONE", v14, v16) )
        __debugbreak();
    }
    ScriptableCL_UnbindStandaloneReservedIndex((const LocalClientNum_t)v3, rpInstance->instanceIndex);
    if ( (unsigned int)v3 >= 2 )
    {
      LODWORD(v11) = 2;
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2033, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_reverseReservedWorldMap ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_reverseReservedWorldMap\n\t%i not in [0, %i)", v9, v11) )
        __debugbreak();
    }
    if ( !s_scriptableCl_reverseReservedWorldMap[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2034, ASSERT_TYPE_ASSERT, "(s_scriptableCl_reverseReservedWorldMap[localClientNum] != nullptr)", (const char *)&queryFormat, "s_scriptableCl_reverseReservedWorldMap[localClientNum] != nullptr") )
      __debugbreak();
    v6 = s_scriptableCl_reverseReservedWorldMap[v3];
    partIndex = rpInstance->partIndex;
    if ( partIndex < partIndex + rpInstance->partCount )
    {
      do
      {
        if ( partIndex >= s_scriptableCl_reverseReservedWorldMapCount )
        {
          LODWORD(v11) = s_scriptableCl_reverseReservedWorldMapCount;
          LODWORD(v9) = partIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2039, ASSERT_TYPE_ASSERT, "(unsigned)( partIndex ) < (unsigned)( s_scriptableCl_reverseReservedWorldMapCount )", "partIndex doesn't index s_scriptableCl_reverseReservedWorldMapCount\n\t%i not in [0, %i)", v9, v11) )
            __debugbreak();
        }
        v8 = &v6[partIndex];
        if ( *v8 != rpInstance->instanceIndex )
        {
          LODWORD(v15) = rpInstance->instanceIndex;
          LODWORD(v13) = *v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2040, ASSERT_TYPE_ASSERT, "( reservedInstanceLookup[partIndex] ) == ( rpInstance.instanceIndex )", "%s == %s\n\t%i, %i", "reservedInstanceLookup[partIndex]", "rpInstance.instanceIndex", v13, v15) )
            __debugbreak();
        }
        *v8 = -1;
        ++partIndex;
      }
      while ( partIndex < rpInstance->partIndex + rpInstance->partCount );
      LODWORD(v3) = localClientNum;
    }
  }
  else
  {
    payload = rpInstance->payload;
    if ( payload >= 0x800u )
    {
      LODWORD(v11) = 2048;
      LODWORD(v9) = payload;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3815, ASSERT_TYPE_ASSERT, "(unsigned)( rpInstance.payload ) < (unsigned)( ( 2048 ) )", "rpInstance.payload doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v9, v11) )
        __debugbreak();
    }
    ScriptableCl_AssertLinkEquals((const LocalClientNum_t)v3, rpInstance->instanceIndex, SCRIPTABLE_LINK_ENTITY, rpInstance->payload);
    ScriptableCl_AssertReservedIndexForEntity((const LocalClientNum_t)v3, rpInstance->payload, rpInstance->instanceIndex);
    if ( ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v3, rpInstance->instanceIndex) )
      ScriptableCl_UnbindEntityReservedDef((const LocalClientNum_t)v3, rpInstance->payload);
    if ( ScriptableCl_IsInReserveWorldMap((const LocalClientNum_t)v3, rpInstance) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3828, ASSERT_TYPE_ASSERT, "(!ScriptableCl_IsInReserveWorldMap( localClientNum, rpInstance ))", (const char *)&queryFormat, "!ScriptableCl_IsInReserveWorldMap( localClientNum, rpInstance )") )
    {
      __debugbreak();
      ScriptableCl_ClearLink((const LocalClientNum_t)v3, rpInstance->instanceIndex);
      return;
    }
  }
  ScriptableCl_ClearLink((const LocalClientNum_t)v3, rpInstance->instanceIndex);
}

/*
==============
ScriptableCl_ResetChangeQueue
==============
*/
void ScriptableCl_ResetChangeQueue(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 337, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_changeQueue ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_changeQueue\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  v2 = v1;
  s_scriptableCl_changeQueue[v2].writeIndex = 0i64;
  s_scriptableCl_changeQueue[v2].readIndex = 0i64;
  s_scriptableCl_changeQueue[v2].startIndex = 0i64;
}

/*
==============
ScriptableCl_ResetFullWorld
==============
*/
void ScriptableCl_ResetFullWorld(ScriptableCompleteState *scriptableWorld, const ScriptableReplicatedLimits *limits)
{
  unsigned int ReplicatedInstanceLimit; 

  if ( !scriptableWorld && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 831, ASSERT_TYPE_ASSERT, "(scriptableWorld)", (const char *)&queryFormat, "scriptableWorld") )
    __debugbreak();
  if ( !scriptableWorld->replicatedInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 832, ASSERT_TYPE_ASSERT, "(scriptableWorld->replicatedInstances != nullptr)", (const char *)&queryFormat, "scriptableWorld->replicatedInstances != nullptr") )
    __debugbreak();
  scriptableWorld->replicatedInstanceCount = ScriptableCl_GetReplicatedInstanceLimit();
  ReplicatedInstanceLimit = ScriptableCl_GetReplicatedInstanceLimit();
  ScriptableCommon_ClearReplicatedInstances(scriptableWorld->replicatedInstances, ReplicatedInstanceLimit);
  ScriptableCommon_ClearPartWorldState(limits, &scriptableWorld->partWorldState);
}

/*
==============
ScriptableCl_ResetPartTracking
==============
*/
void ScriptableCl_ResetPartTracking(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  __int64 v10; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 524, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_serverFixedPartsChangedBits ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_serverFixedPartsChangedBits\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
    LODWORD(v9) = 2;
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 525, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_reservedInstancesChangedBits ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_reservedInstancesChangedBits\n\t%i not in [0, %i)", v5, v9) )
      __debugbreak();
  }
  if ( !s_scriptableCl_serverFixedPartsChangedBits[v1].partBitsArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 526, ASSERT_TYPE_ASSERT, "(s_scriptableCl_serverFixedPartsChangedBits[localClientNum].partBitsArray != nullptr)", (const char *)&queryFormat, "s_scriptableCl_serverFixedPartsChangedBits[localClientNum].partBitsArray != nullptr") )
    __debugbreak();
  if ( !s_scriptableCl_reservedInstancesChangedBits[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 527, ASSERT_TYPE_ASSERT, "(s_scriptableCl_reservedInstancesChangedBits[localClientNum] != nullptr)", (const char *)&queryFormat, "s_scriptableCl_reservedInstancesChangedBits[localClientNum] != nullptr") )
    __debugbreak();
  memset_0(s_scriptableCl_serverFixedPartsChangedBits[v1].partBitsArray, 0, 4i64 * s_scriptableCl_serverFixedPartsChangedArraySize);
  memset_0(s_scriptableCl_reservedInstancesChangedBits[v1], 0, 4i64 * s_scriptableCl_serverReservedInstancesChangedArraySize);
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v7) = 2;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 532, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_reverseReservedWorldMap ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_reverseReservedWorldMap\n\t%i not in [0, %i)", v3, v7) )
      __debugbreak();
  }
  if ( !s_scriptableCl_reverseReservedWorldMap[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 533, ASSERT_TYPE_ASSERT, "(s_scriptableCl_reverseReservedWorldMap[localClientNum] != nullptr)", (const char *)&queryFormat, "s_scriptableCl_reverseReservedWorldMap[localClientNum] != nullptr") )
    __debugbreak();
  memset_0(s_scriptableCl_reverseReservedWorldMap[v1], 255, 4i64 * s_scriptableCl_reverseReservedWorldMapCount);
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v7) = 2;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 536, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_serverChangedEntitiesBits ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_serverChangedEntitiesBits\n\t%i not in [0, %i)", v3, v7) )
      __debugbreak();
    LODWORD(v10) = 2;
    LODWORD(v6) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 537, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_updateNeededEntitiesBits ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_updateNeededEntitiesBits\n\t%i not in [0, %i)", v6, v10) )
      __debugbreak();
  }
  v2 = v1 << 6;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 2] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 2] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 4] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 4] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 6] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 6] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 8] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 8] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 10] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 10] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 12] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 12] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 14] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 14] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 16] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 16] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 18] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 18] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 20] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 20] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 22] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 22] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 24] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 24] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 26] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 26] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 28] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 28] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 30] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 30] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 32] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 32] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 34] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 34] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 36] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 36] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 38] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 38] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 40] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 40] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 42] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 42] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 44] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 44] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 46] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 46] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 48] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 48] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 50] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 50] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 52] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 52] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 54] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 54] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 56] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 56] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 58] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 58] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 60] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 60] = 0i64;
  *(_QWORD *)&s_scriptableCl_serverChangedEntitiesBits[0].array[v2 + 62] = 0i64;
  *(_QWORD *)&s_scriptableCl_updateNeededEntitiesBits[0].array[v2 + 62] = 0i64;
}

/*
==============
ScriptableCl_SetChangeQueueIndex
==============
*/
void ScriptableCl_SetChangeQueueIndex(const LocalClientNum_t localClientNum, unsigned __int64 startIndex)
{
  __int64 v2; 
  __int64 v4; 
  int v6; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 337, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_changeQueue ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_changeQueue\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  v4 = v2;
  s_scriptableCl_changeQueue[v4].writeIndex = startIndex;
  s_scriptableCl_changeQueue[v4].readIndex = startIndex;
  s_scriptableCl_changeQueue[v4].startIndex = startIndex;
}

/*
==============
ScriptableCl_SetLootWeaponMapIndicies
==============
*/
void ScriptableCl_SetLootWeaponMapIndicies(const LocalClientNum_t localClientNum)
{
  BG_SpawnGroup_Loot_Table *v1; 
  unsigned __int8 v2; 
  CgWeaponMap *i; 
  unsigned __int64 v4; 
  _BYTE *v5; 
  BgWeaponHandle handle; 
  Weapon outWeapon; 

  v1 = s_scriptableClLootTable[localClientNum];
  if ( v1 )
  {
    if ( !v1->weaponMapCopied )
    {
      v1->weaponMapCopied = 1;
      v2 = 1;
      for ( i = CgWeaponMap::GetInstance(localClientNum); v2 < v1->itemDefCount; ++v2 )
      {
        v4 = (unsigned __int64)v2 << 8;
        v5 = *(const char **)((char *)&v1->itemDefs[0].weaponFullString + v4);
        if ( v5 && *v5 )
        {
          handle.m_mapEntryId = 0;
          BG_Weapons_GetFullWeaponForName(*(const char **)((char *)&v1->itemDefs[0].weaponFullString + v4), &outWeapon, BG_FindBaseWeaponForName);
          CgWeaponMap::SetWeapon(i, &handle, &outWeapon);
          *(BgWeaponHandle *)((char *)&v1->itemDefs[0].weaponIndex + v4) = handle;
        }
      }
    }
  }
}

/*
==============
ScriptableCl_SetWorldStateSP
==============
*/
void ScriptableCl_SetWorldStateSP(const LocalClientNum_t localClientNum, const ScriptableReplicatedInstance *rpActiveInstances, const unsigned int rpActiveInstanceCount, const ScriptablePartWorldState *partWorldState)
{
  unsigned __int64 v4; 
  int v8; 
  __int64 v9; 

  v4 = localClientNum;
  if ( !partWorldState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4451, ASSERT_TYPE_ASSERT, "(partWorldState)", (const char *)&queryFormat, "partWorldState") )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4452, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::SCRIPTABLES_MULTIPLAYER ))", "%s\n\tThis function is intended for SP Only", "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::SCRIPTABLES_MULTIPLAYER )") )
    __debugbreak();
  if ( s_scriptableCl_worldCurrent[v4] )
  {
    v8 = s_scriptableCLInitialized;
    if ( _bittest(&v8, v4) )
    {
      ScriptableCL_UpdateWorldState((const LocalClientNum_t)v4, rpActiveInstances, rpActiveInstanceCount, partWorldState);
      if ( v4 >= 2 )
      {
        j___report_rangecheckfailure(v9);
        JUMPOUT(0x14149B031i64);
      }
      s_scriptableCl_spWorldUseCache[v4] = 0;
    }
  }
}

/*
==============
ScriptableCl_Shutdown
==============
*/
void ScriptableCl_Shutdown(const LocalClientNum_t localClientNum)
{
  int v1; 
  unsigned __int64 v2; 
  unsigned int runtimeInstanceCount; 
  ScriptableReadChangeQueue *v4; 
  unsigned int i; 
  ScriptableLinkType LinkType; 
  unsigned int LinkObject; 
  __int64 v8; 
  ScriptableCompleteState *v9; 
  HunkUser *v10; 
  __int64 v11; 

  v1 = s_scriptableCLInitialized;
  v2 = localClientNum;
  if ( _bittest(&v1, localClientNum) )
  {
    ScriptableCommon_AssertCountsInitialized();
    runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
    v4 = ScriptableCl_GetChangeQueue((const LocalClientNum_t)v2);
    Com_Printf(29, "ScriptableCl_Shutdown. Reserved: %d. ChangeQueue: Read %zu, Write %zu, Start %zu.\n", runtimeInstanceCount, v4->readIndex, v4->writeIndex, v4->startIndex);
    for ( i = 0; i < runtimeInstanceCount; ++i )
    {
      if ( !ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v2, i) )
        goto LABEL_11;
      LinkType = ScriptableCl_GetLinkType((const LocalClientNum_t)v2, i);
      if ( LinkType )
      {
        if ( LinkType == SCRIPTABLE_LINK_ENTITY )
        {
          LinkObject = ScriptableCl_GetLinkObject((const LocalClientNum_t)v2, i);
          ScriptableCl_UnbindEntityReservedDef((const LocalClientNum_t)v2, LinkObject);
          goto LABEL_11;
        }
        if ( (unsigned __int8)(LinkType - 2) > 1u )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1348, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled link type, shutdown process must be implemented") )
            __debugbreak();
          goto LABEL_11;
        }
      }
      ScriptableCL_UnbindStandaloneReservedIndex((const LocalClientNum_t)v2, i);
LABEL_11:
      ScriptableCl_ClearLink((const LocalClientNum_t)v2, i);
      if ( ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v2, i) )
      {
        LODWORD(v11) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1355, ASSERT_TYPE_ASSERT, "( !ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex ) )", "Scriptable Instance %i was not unbound before it was unlinked", v11) )
          __debugbreak();
      }
    }
    ScriptableCommon_AssertCountsInitialized();
    while ( runtimeInstanceCount < g_scriptableWorldCounts.totalInstanceCount )
    {
      ScriptableCl_ShutdownInstance((const LocalClientNum_t)v2, runtimeInstanceCount, 1);
      ScriptableCl_ClearLink((const LocalClientNum_t)v2, runtimeInstanceCount++);
      ScriptableCommon_AssertCountsInitialized();
    }
    if ( v2 >= 2 )
    {
      j___report_rangecheckfailure(v8);
      JUMPOUT(0x14149B31Bi64);
    }
    v9 = s_scriptableCl_worldCurrent[v2];
    s_scriptableCl_spWorldUseCache[v2] = 0;
    ScriptableCl_ResetFullWorld(v9, &g_scriptableCl_replicatedLimits);
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) )
      ScriptableCl_ResetFullWorld(s_scriptableCl_spWorldCached[v2], &g_scriptableCl_replicatedLimits);
    ScriptableCl_ResetPartTracking((const LocalClientNum_t)v2);
    s_scriptableClLootTable[v2] = NULL;
    v10 = s_ScriptableClRuntimeHunk[v2];
    s_scriptableCLInitialized &= ~(1 << v2);
    s_scriptableClLootCount[v2] = 0;
    g_scriptableClReservedPartRuntimes[v2] = NULL;
    g_scriptableClReservedPartRuntimeCount[v2] = 0;
    Mem_HunkUser_Reset(v10);
  }
}

/*
==============
ScriptableCl_ShutdownCounts
==============
*/
void ScriptableCl_ShutdownCounts(void)
{
  ScriptableCommon_ShutdownWorldCounts(SBL_CONTEXT_CLIENT_0, &g_scriptableCl_replicatedLimits);
}

/*
==============
ScriptableCl_ShutdownInstance
==============
*/
void ScriptableCl_ShutdownInstance(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const bool clearCache)
{
  __int64 v3; 
  const ScriptableDef *def; 
  __int64 v7; 
  centity_t *Entity; 
  __int64 number; 
  DObj *ClientDObj; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *CharacterInfo; 
  unsigned int i; 
  ScriptableCollisionClientContext *InstanceCollisionContext; 
  __int64 v15; 
  __int64 v16; 
  unsigned int v17; 

  v3 = localClientNum;
  def = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def;
  if ( def )
  {
    ScriptableCommon_AssertCountsInitialized();
    if ( scriptableIndex < g_scriptableWorldCounts.runtimeInstanceCount )
    {
      if ( !s_scriptableCl_reservedInstancesChangedBits[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3757, ASSERT_TYPE_ASSERT, "(s_scriptableCl_reservedInstancesChangedBits[localClientNum])", (const char *)&queryFormat, "s_scriptableCl_reservedInstancesChangedBits[localClientNum]") )
        __debugbreak();
      v7 = scriptableIndex >> 5;
      if ( (unsigned int)v7 >= s_scriptableCl_serverReservedInstancesChangedArraySize )
      {
        v17 = s_scriptableCl_serverReservedInstancesChangedArraySize;
        LODWORD(v15) = scriptableIndex >> 5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3760, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableArrayIndex ) < (unsigned)( s_scriptableCl_serverReservedInstancesChangedArraySize )", "scriptableArrayIndex doesn't index s_scriptableCl_serverReservedInstancesChangedArraySize\n\t%i not in [0, %i)", v15, v17) )
          __debugbreak();
      }
      s_scriptableCl_reservedInstancesChangedBits[v3][v7] &= ~(0x80000000 >> (scriptableIndex & 0x1F));
    }
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) )
    {
      if ( ScriptableCl_GetLinkTypeEquals((const LocalClientNum_t)v3, scriptableIndex, SCRIPTABLE_LINK_ENTITY) )
      {
        Entity = ScriptableCl_GetEntity((const LocalClientNum_t)v3, scriptableIndex);
        if ( Entity )
        {
          number = Entity->nextState.number;
          ClientDObj = Com_GetClientDObj(Entity->nextState.number, (LocalClientNum_t)v3);
          if ( ClientDObj )
          {
            bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(&ClientDObj->hidePartBits);
            LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
            if ( LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, number) )
            {
              if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
              {
                if ( (unsigned int)number >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
                {
                  LODWORD(v16) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
                  LODWORD(v15) = number;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v15, v16) )
                    __debugbreak();
                }
                CharacterInfo = (characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * number);
              }
              else
              {
                CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, number);
              }
              if ( CharacterInfo )
                CharacterInfo->dobjDirty = 1;
            }
          }
        }
      }
    }
    for ( i = 0; i < def->numParts; ++i )
      ScriptableCl_ShutdownInstancePart((const LocalClientNum_t)v3, scriptableIndex, &def->parts[i]);
    if ( clearCache )
    {
      InstanceCollisionContext = ScriptableCl_GetInstanceCollisionContext((const LocalClientNum_t)v3, scriptableIndex);
      InstanceCollisionContext->collisionActiveFlags = 0;
      InstanceCollisionContext->clipmapCModelIndex = -1;
      InstanceCollisionContext->model = NULL;
    }
  }
}

/*
==============
ScriptableCl_ShutdownInstancePart
==============
*/
void ScriptableCl_ShutdownInstancePart(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptablePartDef *partDef)
{
  unsigned int i; 
  ScriptableEventParams eventParams; 

  if ( !partDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1235, ASSERT_TYPE_ASSERT, "(partDef)", (const char *)&queryFormat, "partDef") )
    __debugbreak();
  for ( i = 0; i < partDef->numChildParts; ++i )
    ScriptableCl_ShutdownInstancePart(localClientNum, scriptableIndex, &partDef->childParts[i]);
  if ( partDef->numStates )
  {
    eventParams.context = ScriptableCl_LocalClientToContext(localClientNum);
    eventParams.scriptableIndex = scriptableIndex;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    eventParams.callbacks = &s_clCallbackTable;
    eventParams.partDef = partDef;
    __asm { vmovdqu xmmword ptr [rsp+68h+eventParams.damageEvent], xmm0 }
    ScriptableBg_ExitState(&eventParams);
    ScriptableCl_DestroyCollision(localClientNum, scriptableIndex);
  }
}

/*
==============
ScriptableCl_SpatialInitForClient
==============
*/
void ScriptableCl_SpatialInitForClient(const LocalClientNum_t localClientNum)
{
  MapEnts *mapEnts; 
  unsigned int v2; 
  __int64 v3; 
  __int64 v4; 
  SpatialPartition_Population_Tree *spatialPopulationTree; 
  unsigned int v6; 
  unsigned int markerMax; 
  unsigned int partitionCount; 
  unsigned int v9; 
  unsigned int *v10; 
  HunkUser *v11; 
  size_t v12; 
  unsigned int **p_partitionToMarker; 
  unsigned int *v14; 
  HunkUser *v15; 
  __int64 v16; 
  unsigned int v17; 
  __int64 v18; 
  unsigned __int16 v19; 
  unsigned int *v20; 
  unsigned int v21; 
  unsigned __int64 i; 
  __int64 v23; 
  unsigned int v24; 
  ScriptableSpatialMarker *v25; 
  unsigned __int16 partition; 
  __int64 v27; 

  mapEnts = cm.mapEnts;
  v2 = 0;
  v3 = localClientNum;
  v4 = localClientNum;
  s_scriptableSpatial[v4].activeCount = 0;
  *(_QWORD *)&s_scriptableSpatial[v4].markerCount = 0i64;
  s_scriptableSpatial[v4].markerBitFieldWorldCount = 0;
  spatialPopulationTree = mapEnts->scriptableMapEnts.spatialPopulationTree;
  if ( spatialPopulationTree )
  {
    v6 = 0;
    ScriptableCommon_AssertCountsInitialized();
    if ( g_scriptableWorldCounts.totalInstanceCount )
    {
      do
      {
        if ( ScriptableCl_Spatial_Required((const LocalClientNum_t)v3, v6) )
          ++s_scriptableSpatial[v4].markerMax;
        ++v6;
        ScriptableCommon_AssertCountsInitialized();
      }
      while ( v6 < g_scriptableWorldCounts.totalInstanceCount );
    }
    markerMax = s_scriptableSpatial[v4].markerMax;
    if ( markerMax )
    {
      partitionCount = spatialPopulationTree->partitionCount;
      v9 = 12 * markerMax;
      v10 = (unsigned int *)Mem_HunkUser_AllocInternal(s_ScriptableClRuntimeHunk[v3], 4i64 * markerMax, 4ui64, "ScriptableCl_SpatialInitForClient");
      v11 = s_ScriptableClRuntimeHunk[v3];
      s_scriptableSpatial[v4].markerFreeList = v10;
      v12 = v9;
      s_scriptableSpatial[v4].markerList = (ScriptableSpatialMarker *)Mem_HunkUser_AllocInternal(v11, v9, 4ui64, "ScriptableCl_SpatialInitForClient");
      ScriptableCommon_AssertCountsInitialized();
      s_scriptableSpatial[v4].scriptableToMarker = (unsigned int *)Mem_HunkUser_AllocInternal(s_ScriptableClRuntimeHunk[v3], 4i64 * g_scriptableWorldCounts.totalInstanceCount, 4ui64, "ScriptableCl_SpatialInitForClient");
      p_partitionToMarker = &s_scriptableSpatial[v4].partitionToMarker;
      v14 = (unsigned int *)Mem_HunkUser_AllocInternal(s_ScriptableClRuntimeHunk[v3], 4i64 * partitionCount, 4ui64, "ScriptableCl_SpatialInitForClient");
      v15 = s_ScriptableClRuntimeHunk[v3];
      v16 = (s_scriptableSpatial[v4].markerMax + 31) >> 5;
      s_scriptableSpatial[v4].markerBitFieldWorldCount = v16;
      s_scriptableSpatial[v4].partitionToMarker = v14;
      s_scriptableSpatial[v4].markerBitField = (unsigned int *)Mem_HunkUser_AllocInternal(v15, 4 * v16, 8ui64, "ScriptableCl_SpatialInitForClient");
      v17 = 0;
      ScriptableCommon_AssertCountsInitialized();
      if ( g_scriptableWorldCounts.totalInstanceCount )
      {
        do
        {
          v18 = v17++;
          s_scriptableSpatial[v4].scriptableToMarker[v18] = -1;
          ScriptableCommon_AssertCountsInitialized();
        }
        while ( v17 < g_scriptableWorldCounts.totalInstanceCount );
        LODWORD(v3) = localClientNum;
      }
      v19 = 0;
      if ( partitionCount >= 4 )
      {
        v20 = *p_partitionToMarker;
        v19 = 0;
        if ( *p_partitionToMarker > (unsigned int *)p_partitionToMarker || &(*p_partitionToMarker)[(unsigned __int16)(partitionCount - 1)] < (unsigned int *)p_partitionToMarker )
        {
          v21 = partitionCount & 0xFFFFFFFC;
          do
            v19 += 4;
          while ( v19 < v21 );
          for ( i = (16 * ((unsigned __int64)(unsigned __int16)v21 >> 2)) >> 2; i; --i )
            *v20++ = -1;
        }
      }
      for ( ; v19 < partitionCount; (*p_partitionToMarker)[v23] = -1 )
        v23 = v19++;
      memset_0(s_scriptableSpatial[v4].markerList, 0, v12);
      v24 = 0;
      if ( s_scriptableSpatial[v4].markerMax )
      {
        do
        {
          v25 = &s_scriptableSpatial[v4].markerList[v24];
          *(_QWORD *)&v25->scriptableIndex = -1i64;
          partition = v25->partition;
          if ( partition )
          {
            LODWORD(v27) = partition;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5573, ASSERT_TYPE_ASSERT, "( marker.partition ) == ( ( 0 ) )", "%s == %s\n\t%i, %i", "marker.partition", "SCRIPTABLE_SPATIAL_PARTITION_GLOBAL", v27, 0i64) )
              __debugbreak();
          }
          if ( (*((_BYTE *)v25 + 10) & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5574, ASSERT_TYPE_ASSERT, "(!marker.isActive)", (const char *)&queryFormat, "!marker.isActive") )
            __debugbreak();
          if ( (*((_BYTE *)v25 + 10) & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5575, ASSERT_TYPE_ASSERT, "(!marker.isLocal)", (const char *)&queryFormat, "!marker.isLocal") )
            __debugbreak();
          s_scriptableSpatial[v4].markerFreeList[v24] = v24;
          ++v24;
        }
        while ( v24 < s_scriptableSpatial[v4].markerMax );
        LODWORD(v3) = localClientNum;
      }
    }
    else
    {
      s_scriptableSpatial[v4].markerFreeList = NULL;
      s_scriptableSpatial[v4].markerList = NULL;
      s_scriptableSpatial[v4].scriptableToMarker = NULL;
      s_scriptableSpatial[v4].markerBitField = NULL;
    }
    ScriptableCommon_AssertCountsInitialized();
    if ( g_scriptableWorldCounts.totalInstanceCount )
    {
      do
      {
        if ( ScriptableCl_Spatial_Required((const LocalClientNum_t)v3, v2) && ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v3, v2) )
          ScriptableCl_Spatial_MarkerAlloc((const LocalClientNum_t)v3, v2);
        ++v2;
        ScriptableCommon_AssertCountsInitialized();
      }
      while ( v2 < g_scriptableWorldCounts.totalInstanceCount );
    }
  }
}

/*
==============
ScriptableCl_Spatial_ActiveList_GetAtIndex
==============
*/
__int64 ScriptableCl_Spatial_ActiveList_GetAtIndex(const LocalClientNum_t localClientNum, unsigned int activeIndex)
{
  __int64 v2; 
  ScriptableSpatial *v3; 
  __int64 v4; 
  ScriptableSpatialMarker *markerList; 
  __int64 v6; 
  __int64 v8; 
  __int64 v10; 
  unsigned int activeCount; 

  v2 = activeIndex;
  v3 = &s_scriptableSpatial[localClientNum];
  if ( activeIndex >= v3->activeCount )
  {
    activeCount = v3->activeCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5371, ASSERT_TYPE_ASSERT, "(unsigned)( activeIndex ) < (unsigned)( spatial.activeCount )", "activeIndex doesn't index spatial.activeCount\n\t%i not in [0, %i)", activeIndex, activeCount) )
      __debugbreak();
  }
  v4 = v3->activeList[v2];
  if ( (unsigned int)v4 >= v3->markerMax )
  {
    LODWORD(v10) = v3->markerMax;
    LODWORD(v8) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5373, ASSERT_TYPE_ASSERT, "(unsigned)( markerIndex ) < (unsigned)( spatial.markerMax )", "markerIndex doesn't index spatial.markerMax\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  markerList = v3->markerList;
  v6 = v4;
  if ( (*((_BYTE *)&markerList[v6] + 10) & 2) == 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5374, ASSERT_TYPE_ASSERT, "(spatial.markerList[markerIndex].isActive)", (const char *)&queryFormat, "spatial.markerList[markerIndex].isActive") )
      __debugbreak();
    markerList = v3->markerList;
  }
  return markerList[v6].scriptableIndex;
}

/*
==============
ScriptableCl_Spatial_ActiveList_GetCount
==============
*/
__int64 ScriptableCl_Spatial_ActiveList_GetCount(const LocalClientNum_t localClientNum)
{
  return s_scriptableSpatial[localClientNum].activeCount;
}

/*
==============
ScriptableCl_Spatial_ActiveList_Remove
==============
*/
void ScriptableCl_Spatial_ActiveList_Remove(const LocalClientNum_t localClientNum, unsigned int markerIndex)
{
  __int64 v2; 
  __int64 v3; 
  ScriptableSpatial *v4; 
  unsigned int activeCount; 
  __int64 v6; 
  unsigned int *activeList; 
  ScriptableSpatialMarker *markerList; 
  __int64 v9; 
  unsigned int v10; 
  unsigned int v11; 
  int v12; 

  v2 = localClientNum;
  v3 = markerIndex;
  v4 = &s_scriptableSpatial[v2];
  if ( s_scriptableSpatial[v2].activeCount >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5346, ASSERT_TYPE_ASSERT, "(spatial.activeCount < ( 1024 ))", (const char *)&queryFormat, "spatial.activeCount < SCRIPTABLE_SPATIAL_LOCAL_MAX") )
    __debugbreak();
  activeCount = s_scriptableSpatial[v2].activeCount;
  v6 = 0i64;
  if ( activeCount )
  {
    activeList = s_scriptableSpatial[v2].activeList;
    while ( *activeList != (_DWORD)v3 )
    {
      v6 = (unsigned int)(v6 + 1);
      ++activeList;
      if ( (unsigned int)v6 >= activeCount )
        goto LABEL_8;
    }
    if ( (unsigned int)v6 >= activeCount )
    {
      v10 = s_scriptableSpatial[v2].activeCount;
      LODWORD(v9) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5333, ASSERT_TYPE_ASSERT, "(unsigned)( activeIndex ) < (unsigned)( spatial.activeCount )", "activeIndex doesn't index spatial.activeCount\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    if ( !s_scriptableSpatial[v2].activeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5334, ASSERT_TYPE_ASSERT, "(spatial.activeCount > 0)", (const char *)&queryFormat, "spatial.activeCount > 0") )
      __debugbreak();
    if ( v4->activeList[v6] != (_DWORD)v3 )
    {
      v12 = v3;
      v11 = v4->activeList[v6];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5335, ASSERT_TYPE_ASSERT, "( spatial.activeList[activeIndex] ) == ( markerIndex )", "%s == %s\n\t%i, %i", "spatial.activeList[activeIndex]", "markerIndex", v11, v12) )
        __debugbreak();
    }
    v4->activeList[v6] = v4->activeList[s_scriptableSpatial[v2].activeCount - 1];
    markerList = s_scriptableSpatial[v2].markerList;
    --s_scriptableSpatial[v2].activeCount;
    *((_BYTE *)&markerList[v3] + 10) &= ~2u;
  }
  else
  {
LABEL_8:
    if ( (*((_BYTE *)&s_scriptableSpatial[v2].markerList[v3] + 10) & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5357, ASSERT_TYPE_ASSERT, "(!spatial.markerList[markerIndex].isActive)", (const char *)&queryFormat, "!spatial.markerList[markerIndex].isActive") )
      __debugbreak();
  }
}

/*
==============
ScriptableCl_Spatial_ActiveList_RemoveIndex
==============
*/
void ScriptableCl_Spatial_ActiveList_RemoveIndex(const LocalClientNum_t localClientNum, unsigned int markerIndex, unsigned int activeIndex)
{
  __int64 v3; 
  ScriptableSpatial *v4; 
  __int64 v5; 
  ScriptableSpatialMarker *markerList; 

  v3 = activeIndex;
  v4 = &s_scriptableSpatial[localClientNum];
  v5 = markerIndex;
  if ( activeIndex >= v4->activeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5333, ASSERT_TYPE_ASSERT, "(unsigned)( activeIndex ) < (unsigned)( spatial.activeCount )", "activeIndex doesn't index spatial.activeCount\n\t%i not in [0, %i)", activeIndex, v4->activeCount) )
    __debugbreak();
  if ( !v4->activeCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5334, ASSERT_TYPE_ASSERT, "(spatial.activeCount > 0)", (const char *)&queryFormat, "spatial.activeCount > 0") )
    __debugbreak();
  if ( v4->activeList[v3] != (_DWORD)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5335, ASSERT_TYPE_ASSERT, "( spatial.activeList[activeIndex] ) == ( markerIndex )", "%s == %s\n\t%i, %i", "spatial.activeList[activeIndex]", "markerIndex", v4->activeList[v3], v5) )
    __debugbreak();
  v4->activeList[v3] = v4->activeList[v4->activeCount - 1];
  markerList = v4->markerList;
  --v4->activeCount;
  *((_BYTE *)&markerList[v5] + 10) &= ~2u;
}

/*
==============
ScriptableCl_Spatial_DrawOverlay
==============
*/
void ScriptableCl_Spatial_DrawOverlay(const LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 
  __int64 v3; 
  __int64 v4; 
  bool v5; 
  const ScreenPlacement *v6; 
  const vec4_t *v8; 
  const vec4_t *v13; 
  char *fmt; 
  char *fmta; 
  float v19; 
  float v20; 
  float v21; 
  char dest[256]; 

  v2 = DCONST_DVARBOOL_scriptable_debug_spatial_overlay;
  v3 = localClientNum;
  if ( !DCONST_DVARBOOL_scriptable_debug_spatial_overlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_spatial_overlay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled && cm.mapEnts->scriptableMapEnts.spatialPopulationTree )
  {
    v4 = v3;
    __asm { vmovaps [rsp+188h+var_28], xmm7 }
    if ( activeScreenPlacementMode )
    {
      if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
      {
        v6 = &scrPlaceViewDisplay[v3];
        goto LABEL_13;
      }
      if ( activeScreenPlacementMode == SCRMODE_INVALID )
        v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
      else
        v5 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
      if ( v5 )
        __debugbreak();
    }
    v6 = &scrPlaceFull;
LABEL_13:
    Com_sprintf(dest, 0x100ui64, (const char *)&queryFormat, "scriptablesSpatial");
    __asm { vmovss  xmm7, cs:__real@41000000 }
    v8 = &colorWhite;
    __asm
    {
      vmovss  [rsp+188h+var_150], xmm7
      vmovaps xmm2, xmm7; y
      vmovaps xmm1, xmm7; x
    }
    CG_DrawStringExt(v6, *(float *)&_XMM1, *(float *)&_XMM2, dest, &colorWhite, 0, 1, v19, 0);
    LODWORD(fmt) = 1024;
    Com_sprintf(dest, 0x100ui64, "active      = %d / %d", s_scriptableSpatial[v4].activeCount, fmt);
    __asm
    {
      vmovss  xmm2, cs:__real@41800000; y
      vmovss  xmm1, cs:__real@41c00000; x
      vmovss  [rsp+188h+var_150], xmm7
    }
    v13 = &colorWhite;
    if ( s_scriptableSpatial[v4].activeCount >= 0x400 )
      v13 = &colorRed;
    CG_DrawStringExt(v6, *(float *)&_XMM1, *(float *)&_XMM2, dest, v13, 0, 1, v20, 0);
    LODWORD(fmta) = 256;
    Com_sprintf(dest, 0x100ui64, "visable     = %d / %d", s_scriptableSpatial[v4].localCount, fmta);
    __asm { vmovss  xmm2, cs:__real@41c00000; y }
    if ( s_scriptableSpatial[v4].localCount >= 0x100 )
      v8 = &colorRed;
    __asm
    {
      vmovss  [rsp+188h+var_150], xmm7
      vmovaps xmm1, xmm2; x
    }
    CG_DrawStringExt(v6, *(float *)&_XMM1, *(float *)&_XMM2, dest, v8, 0, 1, v21, 0);
    __asm { vmovaps xmm7, [rsp+188h+var_28] }
  }
}

/*
==============
ScriptableCl_Spatial_GetPartitionIndex
==============
*/
__int64 ScriptableCl_Spatial_GetPartitionIndex(const vec3_t *origin)
{
  float v2; 
  unsigned int Partition; 
  unsigned int v4; 
  __int64 v6; 
  unsigned int partitionCount; 
  vec3_t pos; 

  __asm { vmovsd  xmm0, qword ptr [rcx] }
  v2 = origin->v[2];
  __asm { vmovsd  qword ptr [rsp+68h+pos], xmm0 }
  pos.v[2] = v2;
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5106, ASSERT_TYPE_ASSERT, "(cm.mapEnts)", (const char *)&queryFormat, "cm.mapEnts") )
    __debugbreak();
  if ( !cm.mapEnts->scriptableMapEnts.spatialPopulationTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5107, ASSERT_TYPE_ASSERT, "(cm.mapEnts->scriptableMapEnts.spatialPopulationTree)", (const char *)&queryFormat, "cm.mapEnts->scriptableMapEnts.spatialPopulationTree") )
    __debugbreak();
  Partition = SpatialPartition_PopulationTree_FindPartition(cm.mapEnts->scriptableMapEnts.spatialPopulationTree, &pos);
  v4 = truncate_cast<unsigned short,unsigned int>(Partition);
  if ( v4 >= cm.mapEnts->scriptableMapEnts.spatialPopulationTree->partitionCount )
  {
    partitionCount = cm.mapEnts->scriptableMapEnts.spatialPopulationTree->partitionCount;
    LODWORD(v6) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5110, ASSERT_TYPE_SANITY, "(unsigned)( partitionIndex ) < (unsigned)( cm.mapEnts->scriptableMapEnts.spatialPopulationTree->partitionCount )", "partitionIndex doesn't index cm.mapEnts->scriptableMapEnts.spatialPopulationTree->partitionCount\n\t%i not in [0, %i)", v6, partitionCount) )
      __debugbreak();
  }
  return (unsigned __int16)v4;
}

/*
==============
ScriptableCl_Spatial_IsActive
==============
*/
bool ScriptableCl_Spatial_IsActive(const LocalClientNum_t localClientNum, unsigned int scriptableIndex)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  ScriptableSpatialMarker *v6; 

  v2 = localClientNum;
  v3 = scriptableIndex;
  if ( !ScriptableCl_GetInstanceInUse(localClientNum, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5234, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex )") )
    __debugbreak();
  v4 = s_scriptableSpatial[v2].scriptableToMarker[v3];
  if ( (_DWORD)v4 == -1 )
    return 0;
  v6 = &s_scriptableSpatial[v2].markerList[v4];
  if ( v6->scriptableIndex != (_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5244, ASSERT_TYPE_ASSERT, "(marker.scriptableIndex == scriptableIndex)", (const char *)&queryFormat, "marker.scriptableIndex == scriptableIndex") )
    __debugbreak();
  return (*((_BYTE *)v6 + 10) & 2) != 0;
}

/*
==============
ScriptableCl_Spatial_Marked
==============
*/
bool ScriptableCl_Spatial_Marked(const LocalClientNum_t localClientNum, unsigned int scriptableIndex)
{
  __int64 v2; 
  __int64 v3; 

  v2 = localClientNum;
  v3 = scriptableIndex;
  if ( !ScriptableCl_GetInstanceInUse(localClientNum, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5225, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex )") )
    __debugbreak();
  return s_scriptableSpatial[v2].scriptableToMarker[v3] != -1;
}

/*
==============
ScriptableCl_Spatial_MarkerAlloc
==============
*/
void ScriptableCl_Spatial_MarkerAlloc(const LocalClientNum_t localClientNum, unsigned int scriptableIndex)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  unsigned int **p_scriptableToMarker; 
  __int64 v6; 
  ScriptableSpatialMarker *v7; 
  unsigned __int16 PartitionIndex; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  vec3_t outOrigin; 
  vec3_t v15; 

  v2 = scriptableIndex;
  v3 = localClientNum;
  if ( !ScriptableCl_Spatial_Required(localClientNum, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5381, ASSERT_TYPE_ASSERT, "(ScriptableCl_Spatial_Required( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_Spatial_Required( localClientNum, scriptableIndex )") )
    __debugbreak();
  if ( !ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v3, v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5382, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex )") )
    __debugbreak();
  if ( !ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v3, v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5225, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex )") )
    __debugbreak();
  v4 = v3;
  p_scriptableToMarker = &s_scriptableSpatial[v3].scriptableToMarker;
  if ( (*p_scriptableToMarker)[v2] != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5383, ASSERT_TYPE_ASSERT, "(!ScriptableCl_Spatial_Marked( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "!ScriptableCl_Spatial_Marked( localClientNum, scriptableIndex )") )
    __debugbreak();
  if ( s_scriptableSpatial[v4].markerCount >= s_scriptableSpatial[v4].markerMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5387, ASSERT_TYPE_ASSERT, "( spatial.markerCount ) < ( spatial.markerMax )", "%s < %s\n\t%i, %i", "spatial.markerCount", "spatial.markerMax", s_scriptableSpatial[v4].markerCount, s_scriptableSpatial[v4].markerMax) )
    __debugbreak();
  v6 = s_scriptableSpatial[v4].markerFreeList[s_scriptableSpatial[v4].markerCount];
  if ( (unsigned int)v6 >= s_scriptableSpatial[v4].markerMax )
  {
    LODWORD(v11) = s_scriptableSpatial[v4].markerMax;
    LODWORD(v10) = s_scriptableSpatial[v4].markerFreeList[s_scriptableSpatial[v4].markerCount];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5389, ASSERT_TYPE_ASSERT, "(unsigned)( markerIndex ) < (unsigned)( spatial.markerMax )", "markerIndex doesn't index spatial.markerMax\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  if ( s_scriptableSpatial[v4].markerFreeList[s_scriptableSpatial[v4].markerCount] == -1 )
  {
    LODWORD(v13) = -1;
    LODWORD(v12) = -1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5391, ASSERT_TYPE_ASSERT, "( spatial.markerFreeList[spatial.markerCount] ) != ( ( SCRIPTABLE_INVALID_INSTANCE_INDEX ) )", "%s != %s\n\t%i, %i", "spatial.markerFreeList[spatial.markerCount]", "SCRIPTABLE_SPATIAL_MARKER_INVALID", v12, v13) )
      __debugbreak();
  }
  s_scriptableSpatial[v4].markerFreeList[s_scriptableSpatial[v4].markerCount++] = -1;
  v7 = &s_scriptableSpatial[v4].markerList[v6];
  if ( v7->scriptableIndex != -1 )
  {
    LODWORD(v13) = -1;
    LODWORD(v12) = v7->scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5396, ASSERT_TYPE_ASSERT, "( marker.scriptableIndex ) == ( SCRIPTABLE_INVALID_INSTANCE_INDEX )", "%s == %s\n\t%i, %i", "marker.scriptableIndex", "SCRIPTABLE_INVALID_INSTANCE_INDEX", v12, v13) )
      __debugbreak();
  }
  v7->scriptableIndex = v2;
  *((_BYTE *)v7 + 10) &= 0xFCu;
  (*p_scriptableToMarker)[v2] = v6;
  ScriptableCl_Spatial_VerifyMarkerNotLinked((const LocalClientNum_t)v3, v6);
  ScriptableCl_GetInstanceOrigin((const LocalClientNum_t)v3, v2, &outOrigin);
  __asm
  {
    vmovsd  xmm0, qword ptr [rsp+98h+outOrigin]
    vmovsd  [rsp+98h+var_28], xmm0
  }
  v15.v[2] = outOrigin.v[2];
  PartitionIndex = ScriptableCl_Spatial_GetPartitionIndex(&v15);
  ScriptableCl_Spatial_MarkerLinkToTree((const LocalClientNum_t)v3, v6, PartitionIndex);
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
ScriptableCl_Spatial_MarkerFree
==============
*/
void ScriptableCl_Spatial_MarkerFree(const LocalClientNum_t localClientNum, unsigned int scriptableIndex)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  ScriptableSpatialMarker *v6; 
  char v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 

  v2 = localClientNum;
  v3 = scriptableIndex;
  if ( !ScriptableCl_Spatial_Required(localClientNum, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5417, ASSERT_TYPE_ASSERT, "(ScriptableCl_Spatial_Required( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_Spatial_Required( localClientNum, scriptableIndex )") )
    __debugbreak();
  if ( !ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v2, v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5418, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex )") )
    __debugbreak();
  if ( !ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v2, v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5225, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex )") )
    __debugbreak();
  v4 = v2;
  if ( s_scriptableSpatial[v2].scriptableToMarker[v3] == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5419, ASSERT_TYPE_ASSERT, "(ScriptableCl_Spatial_Marked( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_Spatial_Marked( localClientNum, scriptableIndex )") )
    __debugbreak();
  v5 = s_scriptableSpatial[v4].scriptableToMarker[v3];
  if ( (unsigned int)v5 >= s_scriptableSpatial[v4].markerMax )
  {
    LODWORD(v8) = s_scriptableSpatial[v4].scriptableToMarker[v3];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5424, ASSERT_TYPE_ASSERT, "(unsigned)( markerIndex ) < (unsigned)( spatial.markerMax )", "markerIndex doesn't index spatial.markerMax\n\t%i not in [0, %i)", v8, s_scriptableSpatial[v4].markerMax) )
      __debugbreak();
  }
  if ( s_scriptableSpatial[v4].markerList[v5].scriptableIndex != (_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5425, ASSERT_TYPE_ASSERT, "( spatial.markerList[markerIndex].scriptableIndex ) == ( scriptableIndex )", "%s == %s\n\t%i, %i", "spatial.markerList[markerIndex].scriptableIndex", "scriptableIndex", s_scriptableSpatial[v4].markerList[v5].scriptableIndex, v3) )
    __debugbreak();
  if ( !s_scriptableSpatial[v4].markerCount )
  {
    LODWORD(v9) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5427, ASSERT_TYPE_ASSERT, "( spatial.markerCount ) > ( 0 )", "%s > %s\n\t%i, %i", "spatial.markerCount", "0", v9, 0i64) )
      __debugbreak();
  }
  if ( s_scriptableSpatial[v4].markerFreeList[--s_scriptableSpatial[v4].markerCount] != -1 )
  {
    LODWORD(v10) = -1;
    LODWORD(v9) = s_scriptableSpatial[v4].markerFreeList[s_scriptableSpatial[v4].markerCount];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5430, ASSERT_TYPE_ASSERT, "( spatial.markerFreeList[spatial.markerCount] ) == ( ( SCRIPTABLE_INVALID_INSTANCE_INDEX ) )", "%s == %s\n\t%i, %i", "spatial.markerFreeList[spatial.markerCount]", "SCRIPTABLE_SPATIAL_MARKER_INVALID", v9, v10) )
      __debugbreak();
  }
  s_scriptableSpatial[v4].markerFreeList[s_scriptableSpatial[v4].markerCount] = v5;
  v6 = &s_scriptableSpatial[v4].markerList[v5];
  v7 = *((_BYTE *)v6 + 10);
  if ( (v7 & 2) != 0 )
  {
    ScriptableCl_Spatial_ActiveList_Remove((const LocalClientNum_t)v2, v5);
    ScriptableCl_Spatial_Shutdown((const LocalClientNum_t)v2, v3);
    v7 = *((_BYTE *)v6 + 10);
  }
  if ( (v7 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5439, ASSERT_TYPE_ASSERT, "(!marker.isActive && !marker.isLocal)", (const char *)&queryFormat, "!marker.isActive && !marker.isLocal") )
    __debugbreak();
  ScriptableCl_Spatial_MarkerUnLinkFromTree((const LocalClientNum_t)v2, v5);
  ScriptableCl_Spatial_VerifyMarkerNotLinked((const LocalClientNum_t)v2, v5);
  v6->scriptableIndex = -1;
  s_scriptableSpatial[v4].scriptableToMarker[v3] = -1;
}

/*
==============
ScriptableCl_Spatial_MarkerLinkToTree
==============
*/
void ScriptableCl_Spatial_MarkerLinkToTree(const LocalClientNum_t localClientNum, const unsigned int markerIndex, const unsigned __int16 partitionIndex)
{
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  ScriptableSpatialMarker *markerList; 
  __int64 v8; 
  int v9; 
  unsigned int markerMax; 

  v4 = markerIndex;
  v5 = localClientNum;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5118, ASSERT_TYPE_ASSERT, "( Sys_IsMainThread() )", "Updating partitions can't be done from workers") )
    __debugbreak();
  v6 = v5;
  if ( (unsigned int)v4 >= s_scriptableSpatial[v6].markerMax )
  {
    markerMax = s_scriptableSpatial[v6].markerMax;
    v9 = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5122, ASSERT_TYPE_ASSERT, "(unsigned)( markerIndex ) < (unsigned)( spatial.markerMax )", "markerIndex doesn't index spatial.markerMax\n\t%i not in [0, %i)", v9, markerMax) )
      __debugbreak();
  }
  markerList = s_scriptableSpatial[v6].markerList;
  markerList[v4].partition = partitionIndex;
  v8 = partitionIndex;
  markerList[v4].next = s_scriptableSpatial[v6].partitionToMarker[v8];
  s_scriptableSpatial[v6].partitionToMarker[v8] = v4;
}

/*
==============
ScriptableCl_Spatial_MarkerUnLinkFromTree
==============
*/
void ScriptableCl_Spatial_MarkerUnLinkFromTree(const LocalClientNum_t localClientNum, unsigned int markerIndex)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  ScriptableSpatialMarker *v5; 
  unsigned int *partitionToMarker; 
  __int64 partition; 
  unsigned int next; 
  __int64 v9; 
  ScriptableSpatialMarker *markerList; 
  __int64 v11; 
  __int64 v12; 

  v2 = markerIndex;
  v3 = localClientNum;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5134, ASSERT_TYPE_ASSERT, "( Sys_IsMainThread() )", "Updating partitions can't be done from workers") )
    __debugbreak();
  v4 = v3;
  if ( (unsigned int)v2 >= s_scriptableSpatial[v3].markerMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5137, ASSERT_TYPE_ASSERT, "(unsigned)( markerIndex ) < (unsigned)( spatial.markerMax )", "markerIndex doesn't index spatial.markerMax\n\t%i not in [0, %i)", v2, s_scriptableSpatial[v3].markerMax) )
    __debugbreak();
  v5 = &s_scriptableSpatial[v4].markerList[v2];
  partitionToMarker = s_scriptableSpatial[v4].partitionToMarker;
  partition = v5->partition;
  next = partitionToMarker[partition];
  if ( next == (_DWORD)v2 )
  {
    partitionToMarker[partition] = v5->next;
  }
  else if ( next != -1 )
  {
    while ( 1 )
    {
      if ( next >= s_scriptableSpatial[v4].markerMax )
      {
        LODWORD(v12) = s_scriptableSpatial[v4].markerMax;
        LODWORD(v11) = next;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5150, ASSERT_TYPE_ASSERT, "(unsigned)( prevMarkerIndex ) < (unsigned)( spatial.markerMax )", "prevMarkerIndex doesn't index spatial.markerMax\n\t%i not in [0, %i)", v11, v12) )
          __debugbreak();
      }
      v9 = next;
      markerList = s_scriptableSpatial[v4].markerList;
      next = markerList[next].next;
      if ( next == (_DWORD)v2 )
        break;
      if ( next == -1 )
        goto LABEL_17;
    }
    markerList[v9].next = v5->next;
  }
LABEL_17:
  v5->partition = 0;
  v5->next = -1;
}

/*
==============
ScriptableCl_Spatial_Required
==============
*/
bool ScriptableCl_Spatial_Required(const LocalClientNum_t localClientNum, unsigned int scriptableIndex)
{
  const ScriptableDef *def; 

  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex < g_scriptableWorldCounts.runtimeInstanceCount )
    return 1;
  if ( !ScriptableCl_GetInstanceInUse(localClientNum, scriptableIndex) )
    return 0;
  if ( scriptableIndex < ScriptableCommon_GetMapInstanceStartOffset() )
    return 1;
  def = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def;
  if ( !def )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 371, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 363, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
  }
  return (def->flags & 0x12000) == 73728;
}

/*
==============
ScriptableCl_Spatial_Shutdown
==============
*/
void ScriptableCl_Spatial_Shutdown(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  if ( !ScriptableCl_IsLinked(localClientNum, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5299, ASSERT_TYPE_ASSERT, "(ScriptableCl_IsActive( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_IsActive( localClientNum, scriptableIndex )") )
    __debugbreak();
  ScriptableCl_MarkClientUpdateRequired(localClientNum, scriptableIndex, SCRIPTABLE_UPDATE_SHUTDOWN);
  if ( ScriptableCl_GetLinkTypeEquals(localClientNum, scriptableIndex, SCRIPTABLE_LINK_CLIENTMODEL) )
  {
    if ( ScriptableCl_IsLoot(localClientNum, scriptableIndex) )
      ScriptableCl_StopLootFX(localClientNum, scriptableIndex, 0);
    ScriptableCl_DespawnClientModelInstance(localClientNum, scriptableIndex);
  }
}

/*
==============
ScriptableCl_Spatial_Sort
==============
*/
__int64 ScriptableCl_Spatial_Sort(const void *pe0, const void *pe1)
{
  char v2; 
  __int64 result; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+4]
    vcomiss xmm0, dword ptr [rdx+4]
  }
  result = 1i64;
  if ( v2 )
    return 0xFFFFFFFFi64;
  return result;
}

/*
==============
ScriptableCl_Spatial_Update
==============
*/
void ScriptableCl_Spatial_Update(const LocalClientNum_t localClientNum)
{
  __int64 v11; 
  unsigned int v15; 
  cg_t *LocalClientGlobals; 
  cg_t *v17; 
  unsigned int cursorHintEntIndex; 
  __int64 v19; 
  unsigned int IndexByName; 
  unsigned int v21; 
  const OmnvarDef *Def; 
  OmnvarData *Data; 
  bool enabled; 
  unsigned int runtimeInstanceCount; 
  unsigned int v26; 
  __int64 v27; 
  ScriptableInstanceClientContext *v28; 
  ntl::red_black_tree_node_base *LootItemDefByScriptableDef; 
  const BG_SpawnGroup_Loot_ItemDef *v30; 
  unsigned int ScriptableInstanceFirstPartWorldIndex; 
  unsigned __int8 ScriptableInstanceFirstPartWorldState; 
  SpatialPartition_Population_Tree *spatialPopulationTree; 
  unsigned int *markerBitField; 
  unsigned int markerMax; 
  unsigned int *v41; 
  __int64 markerBitFieldWorldCount; 
  __int64 v43; 
  unsigned int *v44; 
  unsigned __int16 m_curPartition; 
  unsigned int next; 
  ScriptableSpatialMarker *markerList; 
  unsigned int v48; 
  unsigned int scriptableIndex; 
  const ScriptableDef *v50; 
  bool v51; 
  __int64 v52; 
  char v60; 
  char v61; 
  unsigned int localCount; 
  unsigned int v64; 
  __int64 markerIndex; 
  ScriptableSpatialMarker *v66; 
  __int64 v67; 
  signed int v68; 
  unsigned int *v69; 
  __int64 v70; 
  ScriptableSpatialMarker *v71; 
  unsigned int v72; 
  __int64 v73; 
  ScriptableSpatialMarker *v74; 
  __int64 v75; 
  char v76; 
  unsigned int v77; 
  unsigned int i; 
  const dvar_t *v79; 
  __int64 v82; 
  unsigned int v83; 
  ScriptableSpatialMarker *v85; 
  unsigned int v86; 
  const vec4_t *v99; 
  const char *v100; 
  const dvar_t *v102; 
  unsigned __int16 v103; 
  unsigned __int16 v104; 
  __int64 v106; 
  __int64 v108; 
  __int64 duration; 
  __int64 v138; 
  __int64 v139; 
  __int64 v140; 
  bool v141; 
  unsigned int v142; 
  SpatialPartition_Population_Tree *v143; 
  int v144; 
  vec3_t outPos; 
  vec3_t outOrigin; 
  vec3_t start; 
  vec4_t color; 
  vec3_t end; 
  Bounds bounds; 
  SpatialPartition_Population_Tree_AABBPartitionIterator v152; 
  char v157; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
  }
  v11 = localClientNum;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5658, ASSERT_TYPE_ASSERT, "( Sys_IsMainThread() )", "Updating partitions can't be done from workers") )
    __debugbreak();
  _RDI = DCONST_DVARFLT_scriptable_spatialViewRadiusMax;
  if ( !DCONST_DVARFLT_scriptable_spatialViewRadiusMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_spatialViewRadiusMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+28h]
    vmulss  xmm11, xmm6, xmm6
  }
  CL_GetViewPos((LocalClientNum_t)v11, &outPos);
  v15 = -1;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v11);
  v17 = LocalClientGlobals;
  if ( LocalClientGlobals->predictedPlayerState.cursorHintClass == USE_CLASS_SCRIPTABLE && ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v11, LocalClientGlobals->predictedPlayerState.cursorHintEntIndex) )
  {
    cursorHintEntIndex = v17->predictedPlayerState.cursorHintEntIndex;
    if ( ScriptableCl_IsLoot((const LocalClientNum_t)v11, cursorHintEntIndex) )
      v15 = cursorHintEntIndex;
  }
  *(_QWORD *)start.v = v11;
  v19 = v11;
  ScriptableCl_UpdateLootPingFX((const LocalClientNum_t)v11, v15, s_scriptableClLootTable[v11]);
  v141 = 0;
  IndexByName = BG_Omnvar_GetIndexByName("scriptable_loot_hide");
  v21 = IndexByName;
  if ( IndexByName != -1 )
  {
    Def = BG_Omnvar_GetDef(IndexByName);
    Data = CG_Omnvar_GetData((LocalClientNum_t)v11, v21);
    if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 224, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
    if ( !Data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 225, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
      __debugbreak();
    if ( Def->type == OMNVAR_TYPE_BOOL )
      goto LABEL_22;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 226, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_BOOL)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_BOOL") )
      __debugbreak();
    if ( Def->type )
      enabled = 0;
    else
LABEL_22:
      enabled = Data->current.enabled;
    v141 = enabled;
    if ( s_scriptableCl_lootHidden != enabled )
    {
      s_scriptableCl_lootHidden = enabled;
      ScriptableCommon_AssertCountsInitialized();
      runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
      v26 = g_scriptableWorldCounts.runtimeInstanceCount + s_scriptableClLootCount[v11];
      if ( g_scriptableWorldCounts.runtimeInstanceCount < v26 )
      {
        v27 = g_scriptableWorldCounts.runtimeInstanceCount;
        do
        {
          if ( !ScriptableCl_ObjectiveAddSafe((const LocalClientNum_t)v11) )
            break;
          ScriptableCommon_AssertCountsInitialized();
          if ( runtimeInstanceCount >= g_scriptableWorldCounts.totalInstanceCount )
          {
            ScriptableCommon_AssertCountsInitialized();
            LODWORD(v138) = g_scriptableWorldCounts.totalInstanceCount;
            LODWORD(duration) = runtimeInstanceCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", duration, v138) )
              __debugbreak();
          }
          if ( (unsigned int)v11 >= 2 )
          {
            LODWORD(v138) = 2;
            LODWORD(duration) = v11;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 114, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", duration, v138) )
              __debugbreak();
          }
          if ( !g_scriptableCl_instanceContexts[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
            __debugbreak();
          v28 = g_scriptableCl_instanceContexts[v11];
          LootItemDefByScriptableDef = ScriptableCl_GetLootItemDefByScriptableDef((const LocalClientNum_t)v11, v28[v27].commonContext.def);
          v30 = (const BG_SpawnGroup_Loot_ItemDef *)LootItemDefByScriptableDef;
          if ( LootItemDefByScriptableDef && HIDWORD(LootItemDefByScriptableDef[7].mp_left) )
          {
            ScriptableInstanceFirstPartWorldIndex = ScriptableCl_GetScriptableInstanceFirstPartWorldIndex((const LocalClientNum_t)v11, runtimeInstanceCount);
            ScriptableInstanceFirstPartWorldState = ScriptableCl_GetScriptableInstanceFirstPartWorldState((const LocalClientNum_t)v11, runtimeInstanceCount, ScriptableInstanceFirstPartWorldIndex);
            ScriptableCl_ProcessChangedServerStateLootObjective((const LocalClientNum_t)v11, runtimeInstanceCount, v28[v27].commonContext.def, v30, ScriptableInstanceFirstPartWorldState);
          }
          ++runtimeInstanceCount;
          ++v27;
        }
        while ( runtimeInstanceCount < v26 );
      }
    }
  }
  Sys_ProfBeginNamedEvent(0xFF008008, "ScriptableCl_Spatial_Update");
  __asm
  {
    vmovss  xmm14, dword ptr [rsp+3C0h+outPos+8]
    vmovss  xmm12, dword ptr [rsp+3C0h+outPos+4]
    vmovss  xmm13, dword ptr [rsp+3C0h+outPos]
  }
  spatialPopulationTree = cm.mapEnts->scriptableMapEnts.spatialPopulationTree;
  v143 = spatialPopulationTree;
  if ( spatialPopulationTree )
  {
    __asm { vunpcklps xmm0, xmm13, xmm12 }
    v152.m_tree = NULL;
    *(_QWORD *)&v152.m_curPartition = 0i64;
    _R12 = &s_scriptableSpatial[v11];
    bounds.midPoint.v[2] = outPos.v[2];
    __asm
    {
      vmovss  dword ptr [rbp+2C0h+bounds.halfSize], xmm6
      vmovss  dword ptr [rbp+2C0h+bounds.halfSize+4], xmm6
      vmovss  dword ptr [rbp+2C0h+bounds.halfSize+8], xmm6
      vmovsd  qword ptr [rsp+3C0h+outPos], xmm0
      vmovsd  qword ptr [rbp+2C0h+bounds.midPoint], xmm0
    }
    SpatialPartition_Population_Tree_AABBPartitionIterator::Init(&v152, spatialPopulationTree, &bounds);
    markerBitField = _R12->markerBitField;
    *(_QWORD *)color.v = 0i64;
    markerMax = 0;
    v142 = 0;
    if ( markerBitField )
    {
      markerMax = _R12->markerMax;
      v41 = markerBitField;
      markerBitFieldWorldCount = _R12->markerBitFieldWorldCount;
      *(_QWORD *)color.v = markerBitField;
      v142 = markerMax;
      if ( (markerMax + 31) >> 5 != (_DWORD)markerBitFieldWorldCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 1220, ASSERT_TYPE_ASSERT, "( calculateWordCount( newBitCount ) ) == ( newWordCount )", "%s == %s\n\t%i, %i", "calculateWordCount( newBitCount )", "newWordCount", (markerMax + 31) >> 5, markerBitFieldWorldCount) )
        __debugbreak();
      if ( (_DWORD)markerBitFieldWorldCount )
      {
        v43 = markerBitFieldWorldCount;
        v44 = v41;
        while ( v43 )
        {
          *v44++ = 0;
          --v43;
        }
      }
    }
    for ( _R12->localCount = 0; SpatialPartition_Population_Tree_AABBPartitionIterator::Advance(&v152); markerMax = v142 )
    {
      if ( _R12->localCount >= 0x400 )
        break;
      m_curPartition = v152.m_curPartition;
      if ( v152.m_curPartition > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", LOWORD(v152.m_curPartition), "unsigned", v152.m_curPartition) )
        __debugbreak();
      v144 = m_curPartition;
      if ( m_curPartition >= spatialPopulationTree->partitionCount )
      {
        LODWORD(v138) = spatialPopulationTree->partitionCount;
        LODWORD(duration) = m_curPartition;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5757, ASSERT_TYPE_ASSERT, "(unsigned)( partitionIndex ) < (unsigned)( spatialTree->partitionCount )", "partitionIndex doesn't index spatialTree->partitionCount\n\t%i not in [0, %i)", duration, v138) )
          __debugbreak();
      }
      next = _R12->partitionToMarker[m_curPartition];
      if ( next != -1 )
      {
        do
        {
          if ( _R12->localCount >= 0x400 )
            break;
          if ( next >= _R12->markerMax )
          {
            LODWORD(v138) = _R12->markerMax;
            LODWORD(duration) = next;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5763, ASSERT_TYPE_ASSERT, "(unsigned)( markerIndex ) < (unsigned)( spatial.markerMax )", "markerIndex doesn't index spatial.markerMax\n\t%i not in [0, %i)", duration, v138) )
              __debugbreak();
          }
          markerList = _R12->markerList;
          if ( markerList[next].scriptableIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5766, ASSERT_TYPE_ASSERT, "(marker.scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX)", (const char *)&queryFormat, "marker.scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX") )
            __debugbreak();
          if ( (*((_BYTE *)&markerList[next] + 10) & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5767, ASSERT_TYPE_ASSERT, "(!marker.isLocal)", (const char *)&queryFormat, "!marker.isLocal") )
            __debugbreak();
          if ( !ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v11, markerList[next].scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5768, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetInstanceInUse( localClientNum, marker.scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetInstanceInUse( localClientNum, marker.scriptableIndex )") )
            __debugbreak();
          if ( next >= markerMax )
          {
            LODWORD(v138) = markerMax;
            LODWORD(duration) = next;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", duration, v138) )
              __debugbreak();
          }
          *(_QWORD *)end.v = (unsigned __int64)next >> 5;
          v48 = 0x80000000 >> (next & 0x1F);
          if ( (v48 & *(_DWORD *)(*(_QWORD *)color.v + 4i64 * *(_QWORD *)end.v)) != 0 )
          {
            LODWORD(v138) = v144;
            LODWORD(duration) = next;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5771, ASSERT_TYPE_ASSERT, "( !localMarkersAdded.testBit( markerIndex ) )", "Found duplicate marker in spatial tree (Marker %d, Partition %d)", duration, v138) )
              __debugbreak();
          }
          scriptableIndex = markerList[next].scriptableIndex;
          ScriptableCommon_AssertCountsInitialized();
          if ( scriptableIndex >= g_scriptableWorldCounts.totalInstanceCount )
          {
            ScriptableCommon_AssertCountsInitialized();
            LODWORD(v138) = g_scriptableWorldCounts.totalInstanceCount;
            LODWORD(duration) = scriptableIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2547, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", duration, v138) )
              __debugbreak();
          }
          v50 = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v11, scriptableIndex)->def;
          if ( v50 )
            v51 = (v50->flags & 0x20000) != 0;
          else
            v51 = 0;
          if ( !v141 || !v51 )
          {
            v52 = markerList[next].scriptableIndex;
            ScriptableCommon_AssertCountsInitialized();
            if ( (unsigned int)v52 >= g_scriptableWorldCounts.totalInstanceCount )
            {
              ScriptableCommon_AssertCountsInitialized();
              LODWORD(v138) = g_scriptableWorldCounts.totalInstanceCount;
              LODWORD(duration) = v52;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", duration, v138) )
                __debugbreak();
            }
            if ( (unsigned int)v11 >= 2 )
            {
              LODWORD(v138) = 2;
              LODWORD(duration) = v11;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 114, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", duration, v138) )
                __debugbreak();
            }
            if ( !g_scriptableCl_instanceContexts[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
              __debugbreak();
            ScriptableInstanceContextSecure::GetOrigin(&g_scriptableCl_instanceContexts[v11][v52].commonContext, markerList[next].scriptableIndex, &outOrigin);
            __asm
            {
              vsubss  xmm0, xmm12, dword ptr [rsp+3C0h+outOrigin+4]
              vsubss  xmm2, xmm13, dword ptr [rsp+3C0h+outOrigin]
              vsubss  xmm3, xmm14, dword ptr [rbp+2C0h+outOrigin+8]
              vmulss  xmm1, xmm0, xmm0
              vmulss  xmm0, xmm2, xmm2
              vaddss  xmm2, xmm1, xmm0
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm6, xmm2, xmm1
              vcomiss xmm6, xmm11
            }
            if ( v60 | v61 )
            {
              if ( _R12->localCount >= 0x400 )
              {
                LODWORD(v138) = 1024;
                LODWORD(duration) = _R12->localCount;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5798, ASSERT_TYPE_ASSERT, "(unsigned)( spatial.localCount ) < (unsigned)( ( 1024 ) )", "spatial.localCount doesn't index SCRIPTABLE_SPATIAL_LOCAL_MAX\n\t%i not in [0, %i)", duration, v138) )
                  __debugbreak();
              }
              _R12->localList[_R12->localCount].markerIndex = next;
              _RAX = _R12->localCount;
              __asm { vmovss  dword ptr [r12+rax*8+4], xmm6 }
              ++_R12->localCount;
              if ( next >= v142 )
              {
                LODWORD(v140) = v142;
                LODWORD(v139) = next;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v139, v140) )
                  __debugbreak();
              }
              *(_DWORD *)(*(_QWORD *)color.v + 4i64 * *(_QWORD *)end.v) |= v48;
            }
          }
          next = markerList[next].next;
          markerMax = v142;
        }
        while ( next != -1 );
        spatialPopulationTree = v143;
      }
    }
    localCount = _R12->localCount;
    if ( localCount > 0x100 )
    {
      qsort(_R12, localCount, 8ui64, (_CoreCrtNonSecureSearchSortCompareFunction)ScriptableCl_Spatial_Sort);
      localCount = 256;
      _R12->localCount = 256;
    }
    v64 = 0;
    if ( localCount )
    {
      do
      {
        markerIndex = _R12->localList[v64].markerIndex;
        if ( (unsigned int)markerIndex >= _R12->markerMax )
        {
          LODWORD(v138) = _R12->markerMax;
          LODWORD(duration) = _R12->localList[v64].markerIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5830, ASSERT_TYPE_ASSERT, "(unsigned)( markerIndex ) < (unsigned)( spatial.markerMax )", "markerIndex doesn't index spatial.markerMax\n\t%i not in [0, %i)", duration, v138) )
            __debugbreak();
        }
        v66 = _R12->markerList;
        v67 = markerIndex;
        if ( (*((_BYTE *)&v66[v67] + 10) & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5832, ASSERT_TYPE_ASSERT, "(!marker.isLocal)", (const char *)&queryFormat, "!marker.isLocal") )
          __debugbreak();
        *((_BYTE *)&v66[v67] + 10) |= 1u;
        ++v64;
        localCount = _R12->localCount;
      }
      while ( v64 < localCount );
      LODWORD(v11) = localClientNum;
    }
    v68 = _R12->activeCount - 1;
    if ( v68 >= 0 )
    {
      v69 = &_R12->activeList[v68];
      do
      {
        v70 = *v69;
        if ( (unsigned int)v70 >= _R12->markerMax )
        {
          LODWORD(v138) = _R12->markerMax;
          LODWORD(duration) = *v69;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5846, ASSERT_TYPE_ASSERT, "(unsigned)( markerIndex ) < (unsigned)( spatial.markerMax )", "markerIndex doesn't index spatial.markerMax\n\t%i not in [0, %i)", duration, v138) )
            __debugbreak();
        }
        v71 = _R12->markerList;
        if ( (*((_BYTE *)&v71[v70] + 10) & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5848, ASSERT_TYPE_ASSERT, "(marker.isActive)", (const char *)&queryFormat, "marker.isActive") )
          __debugbreak();
        if ( !ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v11, v71[v70].scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5849, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetInstanceInUse( localClientNum, marker.scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetInstanceInUse( localClientNum, marker.scriptableIndex )") )
          __debugbreak();
        if ( (*((_BYTE *)&v71[v70] + 10) & 1) == 0 )
        {
          ScriptableCl_Spatial_ActiveList_RemoveIndex((const LocalClientNum_t)v11, v70, v68);
          ScriptableCl_Spatial_Shutdown((const LocalClientNum_t)v11, v71[v70].scriptableIndex);
        }
        --v69;
        --v68;
      }
      while ( v68 >= 0 );
      localCount = _R12->localCount;
    }
    v72 = 0;
    if ( localCount )
    {
      do
      {
        v73 = _R12->localList[v72].markerIndex;
        if ( (unsigned int)v73 >= _R12->markerMax )
        {
          LODWORD(v138) = _R12->markerMax;
          LODWORD(duration) = _R12->localList[v72].markerIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5868, ASSERT_TYPE_ASSERT, "(unsigned)( markerIndex ) < (unsigned)( spatial.markerMax )", "markerIndex doesn't index spatial.markerMax\n\t%i not in [0, %i)", duration, v138) )
            __debugbreak();
        }
        v74 = _R12->markerList;
        v75 = v73;
        if ( (*((_BYTE *)&v74[v73] + 10) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5870, ASSERT_TYPE_ASSERT, "(marker.isLocal)", (const char *)&queryFormat, "marker.isLocal") )
          __debugbreak();
        if ( !ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v11, v74[v73].scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5871, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetInstanceInUse( localClientNum, marker.scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetInstanceInUse( localClientNum, marker.scriptableIndex )") )
          __debugbreak();
        v76 = *((_BYTE *)&v74[v73] + 10);
        if ( (v76 & 2) == 0 )
        {
          if ( _R12->activeCount >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5322, ASSERT_TYPE_ASSERT, "(spatial.activeCount < ( 1024 ))", (const char *)&queryFormat, "spatial.activeCount < SCRIPTABLE_SPATIAL_LOCAL_MAX") )
            __debugbreak();
          _R12->activeList[_R12->activeCount++] = v73;
          *((_BYTE *)&_R12->markerList[v73] + 10) |= 2u;
          v77 = v74[v73].scriptableIndex;
          if ( ScriptableCl_IsLinked((const LocalClientNum_t)v11, v74[v75].scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5287, ASSERT_TYPE_ASSERT, "(!ScriptableCl_IsActive( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "!ScriptableCl_IsActive( localClientNum, scriptableIndex )") )
            __debugbreak();
          ScriptableCl_SpawnClientModelInstance((const LocalClientNum_t)v11, v77);
          ScriptableCl_MarkClientUpdateRequired((const LocalClientNum_t)v11, v77, SCRIPTABLE_UPDATE_INIT);
          v76 = *((_BYTE *)&v74[v75] + 10);
        }
        ++v72;
        *((_BYTE *)&v74[v75] + 10) = v76 & 0xFE;
      }
      while ( v72 < _R12->localCount );
    }
    for ( i = 0; i < _R12->markerCount; ++i )
    {
      if ( (*((_BYTE *)&_R12->markerList[i] + 10) & 1) != 0 )
      {
        LODWORD(duration) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5890, ASSERT_TYPE_ASSERT, "( ( !marker.isLocal ) )", "( markerIndex ) = %i", duration) )
          __debugbreak();
      }
    }
    spatialPopulationTree = v143;
    v19 = (int)v11;
  }
  Sys_ProfEndNamedEvent();
  if ( spatialPopulationTree )
  {
    v79 = DCONST_DVARBOOL_scriptable_debug_spatial_3d;
    __asm
    {
      vmovaps [rsp+3C0h+var_68+8], xmm9
      vmovaps [rsp+3C0h+var_78+8], xmm10
    }
    if ( !DCONST_DVARBOOL_scriptable_debug_spatial_3d && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_spatial_3d") )
      __debugbreak();
    __asm
    {
      vmovaps xmmword ptr [rsp+3C0h+var_48+8], xmm7
      vmovaps [rsp+3C0h+var_58+8], xmm8
    }
    Dvar_CheckFrontendServerThread(v79);
    __asm
    {
      vmovss  xmm10, cs:__real@40000000
      vmovss  xmm9, cs:__real@3e800000
    }
    if ( v79->current.enabled )
    {
      v82 = v19;
      v83 = 0;
      if ( s_scriptableSpatial[v19].markerMax )
      {
        __asm { vmovss  xmm8, cs:__real@41f00000 }
        do
        {
          v85 = s_scriptableSpatial[v82].markerList;
          v86 = v85[v83].scriptableIndex;
          if ( v86 != -1 )
          {
            ScriptableCl_GetInstanceOrigin((const LocalClientNum_t)v11, v86, &outPos);
            __asm
            {
              vmovss  xmm5, dword ptr [rsp+3C0h+outPos+4]
              vmovss  xmm4, dword ptr [rsp+3C0h+outPos]
              vmovss  xmm7, dword ptr [rsp+3C0h+outPos+8]
              vsubss  xmm0, xmm12, xmm5
              vmulss  xmm1, xmm0, xmm0
              vsubss  xmm2, xmm13, xmm4
              vmulss  xmm0, xmm2, xmm2
              vaddss  xmm2, xmm1, xmm0
              vsubss  xmm3, xmm14, xmm7
              vmulss  xmm1, xmm3, xmm3
              vaddss  xmm6, xmm2, xmm1
              vmulss  xmm0, xmm11, xmm10
              vcomiss xmm6, xmm0
            }
            if ( v60 | v61 )
            {
              __asm
              {
                vaddss  xmm0, xmm7, xmm8
                vmovss  dword ptr [rbp+2C0h+outOrigin+8], xmm0
                vmovss  dword ptr [rsp+3C0h+outOrigin], xmm4
                vmovss  dword ptr [rsp+3C0h+outOrigin+4], xmm5
              }
              if ( (*((_BYTE *)&v85[v83] + 10) & 2) != 0 )
              {
                v99 = &colorGreen;
              }
              else
              {
                __asm { vcomiss xmm11, xmm6 }
                v99 = &colorRed;
                if ( (*((_BYTE *)&v85[v83] + 10) & 2) == 0 )
                  v99 = &colorWhite;
              }
              CG_DebugLine(&outPos, &outOrigin, v99, 0, 0);
              __asm { vcomiss xmm6, xmm11 }
              if ( v60 )
              {
                v100 = j_va("%d", v83);
                __asm { vmovaps xmm2, xmm9; scale }
                CL_AddDebugStringCentered(&outPos, &colorWhite, *(float *)&_XMM2, v100, 0, 0);
              }
            }
          }
          ++v83;
        }
        while ( v83 < s_scriptableSpatial[v82].markerMax );
      }
    }
    v102 = DCONST_DVARBOOL_scriptable_debug_spatial_tree;
    if ( !DCONST_DVARBOOL_scriptable_debug_spatial_tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_spatial_tree") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v102);
    if ( v102->current.enabled )
    {
      v103 = truncate_cast<unsigned short,unsigned int>(v143->partitionCount);
      v104 = 0;
      if ( v103 )
      {
        __asm { vmovss  xmm8, cs:__real@3f000000 }
        v106 = 0i64;
        _RDI = 0i64;
        v108 = 0i64;
        __asm { vxorps  xmm6, xmm6, xmm6 }
        do
        {
          if ( (*((_DWORD *)&v143->partitions[v108] + 1) & 0x7FFFFFFC) == 0 )
          {
            _RCX = v143->extents;
            __asm
            {
              vsubss  xmm0, xmm13, dword ptr [rdi+rcx+0Ch]
              vmaxss  xmm2, xmm0, xmm6
              vmovss  xmm0, dword ptr [rdi+rcx]
              vsubss  xmm1, xmm0, xmm13
              vsubss  xmm0, xmm12, dword ptr [rdi+rcx+10h]
              vmaxss  xmm1, xmm1, xmm6
              vaddss  xmm4, xmm2, xmm1
              vmaxss  xmm2, xmm0, xmm6
              vmovss  xmm0, dword ptr [rdi+rcx+4]
              vsubss  xmm1, xmm0, xmm12
              vmaxss  xmm1, xmm1, xmm6
              vaddss  xmm0, xmm2, xmm1
              vmulss  xmm3, xmm0, xmm0
              vmulss  xmm2, xmm4, xmm4
              vaddss  xmm7, xmm3, xmm2
              vmulss  xmm0, xmm11, xmm10
              vcomiss xmm7, xmm0
            }
          }
          ++v104;
          ++v108;
          _RDI += 24i64;
          v106 += 4i64;
        }
        while ( v104 < v103 );
      }
    }
    __asm
    {
      vmovaps xmm8, [rsp+3C0h+var_58+8]
      vmovaps xmm7, xmmword ptr [rsp+3C0h+var_48+8]
      vmovaps xmm9, [rsp+3C0h+var_68+8]
      vmovaps xmm10, [rsp+3C0h+var_78+8]
    }
  }
  _R11 = &v157;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
  }
}

/*
==============
ScriptableCl_Spatial_UpdateMarkerPartition
==============
*/
void ScriptableCl_Spatial_UpdateMarkerPartition(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const unsigned int markerIndex, const unsigned int partitionIndex)
{
  __int64 v5; 
  __int64 v7; 
  ScriptableSpatialMarker *v8; 
  int v10; 
  unsigned __int16 v11; 
  int v12; 
  unsigned int markerMax; 
  __int64 v14; 
  unsigned int v15; 
  __int64 v16; 
  unsigned int v17; 
  vec3_t outOrigin; 
  vec3_t v19; 

  v5 = markerIndex;
  v7 = localClientNum;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5168, ASSERT_TYPE_ASSERT, "( Sys_IsMainThread() )", "Updating partitions can't be done from workers") )
    __debugbreak();
  if ( (unsigned int)v5 >= s_scriptableSpatial[v7].markerMax )
  {
    markerMax = s_scriptableSpatial[v7].markerMax;
    v12 = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5173, ASSERT_TYPE_ASSERT, "(unsigned)( markerIndex ) < (unsigned)( spatial.markerMax )", "markerIndex doesn't index spatial.markerMax\n\t%i not in [0, %i)", v12, markerMax) )
      __debugbreak();
  }
  v8 = &s_scriptableSpatial[v7].markerList[v5];
  if ( v8->scriptableIndex != scriptableIndex )
  {
    v17 = scriptableIndex;
    v15 = v8->scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5176, ASSERT_TYPE_ASSERT, "( marker.scriptableIndex ) == ( truncate_cast<ScriptableInstanceIndex>( scriptableIndex ) )", "%s == %s\n\t%i, %i", "marker.scriptableIndex", "truncate_cast<ScriptableInstanceIndex>( scriptableIndex )", v15, v17) )
      __debugbreak();
  }
  if ( v8->partition == partitionIndex )
  {
    LODWORD(v16) = partitionIndex;
    LODWORD(v14) = v8->partition;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5177, ASSERT_TYPE_ASSERT, "( marker.partition ) != ( partitionIndex )", "%s != %s\n\t%i, %i", "marker.partition", "partitionIndex", v14, v16) )
      __debugbreak();
  }
  ScriptableCl_GetInstanceOrigin((const LocalClientNum_t)v7, v8->scriptableIndex, &outOrigin);
  __asm
  {
    vmovsd  xmm0, qword ptr [rsp+98h+outOrigin]
    vmovsd  [rsp+98h+var_28], xmm0
  }
  v19.v[2] = outOrigin.v[2];
  v10 = (unsigned __int16)ScriptableCl_Spatial_GetPartitionIndex(&v19);
  if ( partitionIndex != v10 )
  {
    LODWORD(v16) = v10;
    LODWORD(v14) = partitionIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5182, ASSERT_TYPE_ASSERT, "( partitionIndex ) == ( verifyPartitionIndex )", "%s == %s\n\t%i, %i", "partitionIndex", "verifyPartitionIndex", v14, v16) )
      __debugbreak();
  }
  memset(&outOrigin, 0, sizeof(outOrigin));
  ScriptableCl_Spatial_MarkerUnLinkFromTree((const LocalClientNum_t)v7, v5);
  ScriptableCl_Spatial_VerifyMarkerNotLinked((const LocalClientNum_t)v7, v5);
  v11 = truncate_cast<unsigned short,unsigned int>(partitionIndex);
  ScriptableCl_Spatial_MarkerLinkToTree((const LocalClientNum_t)v7, v5, v11);
}

/*
==============
ScriptableCl_Spatial_UpdateOrigin
==============
*/
void ScriptableCl_Spatial_UpdateOrigin(const LocalClientNum_t localClientNum, unsigned int scriptableIndex)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  SpatialPartition_Population_Tree *spatialPopulationTree; 
  __int64 v6; 
  ScriptableSpatialMarker *markerList; 
  char v8; 
  char v9; 
  unsigned __int16 PartitionIndex; 
  unsigned int v16; 
  __int64 v17; 
  __int64 v18; 
  vec3_t outOrigin; 
  vec3_t v20; 

  v2 = scriptableIndex;
  v3 = localClientNum;
  if ( !ScriptableCl_GetInstanceInUse(localClientNum, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5452, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex )") )
    __debugbreak();
  if ( !ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v3, v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5225, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex )") )
    __debugbreak();
  v4 = v3;
  if ( s_scriptableSpatial[v3].scriptableToMarker[v2] == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5453, ASSERT_TYPE_ASSERT, "(ScriptableCl_Spatial_Marked( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_Spatial_Marked( localClientNum, scriptableIndex )") )
    __debugbreak();
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5455, ASSERT_TYPE_ASSERT, "(cm.mapEnts)", (const char *)&queryFormat, "cm.mapEnts") )
    __debugbreak();
  spatialPopulationTree = cm.mapEnts->scriptableMapEnts.spatialPopulationTree;
  if ( !spatialPopulationTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5457, ASSERT_TYPE_ASSERT, "(spatialTree)", (const char *)&queryFormat, "spatialTree") )
    __debugbreak();
  v6 = s_scriptableSpatial[v4].scriptableToMarker[v2];
  if ( (unsigned int)v6 >= s_scriptableSpatial[v4].markerMax )
  {
    LODWORD(v17) = s_scriptableSpatial[v4].scriptableToMarker[v2];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5462, ASSERT_TYPE_ASSERT, "(unsigned)( markerIndex ) < (unsigned)( spatial.markerMax )", "markerIndex doesn't index spatial.markerMax\n\t%i not in [0, %i)", v17, s_scriptableSpatial[v4].markerMax) )
      __debugbreak();
  }
  markerList = s_scriptableSpatial[v4].markerList;
  if ( markerList[v6].scriptableIndex != (_DWORD)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5465, ASSERT_TYPE_ASSERT, "(marker.scriptableIndex == scriptableIndex)", (const char *)&queryFormat, "marker.scriptableIndex == scriptableIndex") )
    __debugbreak();
  if ( markerList[v6].partition >= spatialPopulationTree->partitionCount )
  {
    LODWORD(v18) = spatialPopulationTree->partitionCount;
    LODWORD(v17) = markerList[v6].partition;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5466, ASSERT_TYPE_ASSERT, "(unsigned)( marker.partition ) < (unsigned)( spatialTree->partitionCount )", "marker.partition doesn't index spatialTree->partitionCount\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  ScriptableCl_GetInstanceOrigin((const LocalClientNum_t)v3, markerList[v6].scriptableIndex, &outOrigin);
  _RCX = 3i64 * markerList[v6].partition;
  _RAX = spatialPopulationTree->extents;
  __asm
  {
    vmovss  xmm1, dword ptr [rsp+98h+outOrigin]
    vcomiss xmm1, dword ptr [rax+rcx*8]
  }
  if ( v8 )
    goto LABEL_29;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+98h+outOrigin+4]
    vcomiss xmm0, dword ptr [rax+rcx*8+4]
    vcomiss xmm1, dword ptr [rax+rcx*8+0Ch]
  }
  if ( !(v8 | v9) )
    goto LABEL_29;
  __asm { vcomiss xmm0, dword ptr [rax+rcx*8+10h] }
  if ( !(v8 | v9) )
  {
LABEL_29:
    __asm
    {
      vmovsd  xmm0, qword ptr [rsp+98h+outOrigin]
      vmovsd  [rsp+98h+var_38], xmm0
    }
    v20.v[2] = outOrigin.v[2];
    PartitionIndex = ScriptableCl_Spatial_GetPartitionIndex(&v20);
    if ( markerList[v6].partition != PartitionIndex )
    {
      v16 = PartitionIndex;
      if ( !CG_EntityWorkers_TryAddScriptableSpatialUpdate((const LocalClientNum_t)v3, markerList[v6].scriptableIndex, v6, PartitionIndex) )
        ScriptableCl_Spatial_UpdateMarkerPartition((const LocalClientNum_t)v3, markerList[v6].scriptableIndex, v6, v16);
    }
  }
  memset(&outOrigin, 0, sizeof(outOrigin));
}

/*
==============
ScriptableCl_Spatial_VerifyMarkerNotLinked
==============
*/
void ScriptableCl_Spatial_VerifyMarkerNotLinked(const LocalClientNum_t localClientNum, const unsigned int markerIndex)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  unsigned int v5; 
  ScriptableSpatialMarker *v6; 
  unsigned __int16 partition; 
  unsigned int v8; 
  SpatialPartition_Population_Tree *spatialPopulationTree; 
  __int64 v10; 
  __int64 v11; 
  int v12; 
  __int64 v13; 
  int v14; 
  __int64 v15; 

  v2 = markerIndex;
  v3 = localClientNum;
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5078, ASSERT_TYPE_ASSERT, "(cm.mapEnts)", (const char *)&queryFormat, "cm.mapEnts") )
    __debugbreak();
  if ( !cm.mapEnts->scriptableMapEnts.spatialPopulationTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5079, ASSERT_TYPE_ASSERT, "(cm.mapEnts->scriptableMapEnts.spatialPopulationTree)", (const char *)&queryFormat, "cm.mapEnts->scriptableMapEnts.spatialPopulationTree") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    v12 = 2;
    LODWORD(v10) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5080, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableSpatial ) ) + 0 ) )", "localClientNum doesn't index s_scriptableSpatial\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  v4 = v3;
  if ( (unsigned int)v2 >= s_scriptableSpatial[v3].markerMax )
  {
    LODWORD(v11) = s_scriptableSpatial[v3].markerMax;
    LODWORD(v10) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5084, ASSERT_TYPE_ASSERT, "(unsigned)( markerIndex ) < (unsigned)( spatial.markerMax )", "markerIndex doesn't index spatial.markerMax\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  v5 = 0;
  v6 = &s_scriptableSpatial[v4].markerList[v2];
  partition = v6->partition;
  if ( partition )
  {
    v14 = partition;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5086, ASSERT_TYPE_ASSERT, "( marker.partition ) == ( ( 0 ) )", "%s == %s\n\t%i, %i", "marker.partition", "SCRIPTABLE_SPATIAL_PARTITION_GLOBAL", v14, 0i64) )
      __debugbreak();
  }
  if ( v6->next != -1 )
  {
    LODWORD(v15) = -1;
    LODWORD(v13) = v6->next;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5087, ASSERT_TYPE_ASSERT, "( marker.next ) == ( ( SCRIPTABLE_INVALID_INSTANCE_INDEX ) )", "%s == %s\n\t%i, %i", "marker.next", "SCRIPTABLE_SPATIAL_MARKER_INVALID", v13, v15) )
      __debugbreak();
  }
  v8 = 0;
  spatialPopulationTree = cm.mapEnts->scriptableMapEnts.spatialPopulationTree;
  if ( spatialPopulationTree->partitionCount )
  {
    do
    {
      if ( s_scriptableSpatial[v4].partitionToMarker[v8] == (_DWORD)v2 )
      {
        LODWORD(v11) = v8;
        LODWORD(v10) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5092, ASSERT_TYPE_ASSERT, "( spatial.partitionToMarker[partitionIndex] != markerIndex )", "Found Marker %d at head of Paritition %d", v10, v11) )
          __debugbreak();
      }
      ++v8;
    }
    while ( v8 < spatialPopulationTree->partitionCount );
  }
  if ( s_scriptableSpatial[v4].markerMax )
  {
    do
    {
      if ( s_scriptableSpatial[v4].markerList[v5].next == (_DWORD)v2 )
      {
        LODWORD(v11) = v5;
        LODWORD(v10) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5098, ASSERT_TYPE_ASSERT, "( otherMarker.next != markerIndex )", "Found Marker %d as Next Marker %d", v10, v11) )
          __debugbreak();
      }
      ++v5;
    }
    while ( v5 < s_scriptableSpatial[v4].markerMax );
  }
}

/*
==============
ScriptableCl_UpdateClientInstances
==============
*/
void ScriptableCl_UpdateClientInstances(const LocalClientNum_t localClientNum, const int frameTime)
{
  const dvar_t *v2; 
  __int64 v4; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned int v8; 
  int v9; 

  v2 = DCONST_DVARBOOL_scriptable_enable;
  v4 = localClientNum;
  if ( !DCONST_DVARBOOL_scriptable_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    Profile_Begin(776);
    Scriptable_Analytics_FlipClientFrame((LocalClientNum_t)v4);
    if ( (unsigned int)v4 >= 2 )
    {
      LODWORD(v7) = 2;
      LODWORD(v6) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3377, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableClientOnlyUpdateLists ) ) + 0 ) )", "localClientNum doesn't index s_scriptableClientOnlyUpdateLists\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    ScriptableCommon_AssertCountsInitialized();
    v5 = (g_scriptableWorldCounts.totalInstanceCount + 31) >> 5;
    if ( v5 > 0x3D09 )
    {
      v9 = 15625;
      v8 = (g_scriptableWorldCounts.totalInstanceCount + 31) >> 5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3383, ASSERT_TYPE_ASSERT, "( updateWordCount ) <= ( r_clientOnlyUpdateList.perFrameUpdate.WORD_COUNT )", "%s <= %s\n\t%i, %i", "updateWordCount", "r_clientOnlyUpdateList.perFrameUpdate.WORD_COUNT", v8, v9) )
        __debugbreak();
    }
    ScriptableCl_ExecuteUpdateListChanges((const LocalClientNum_t)v4, &s_scriptableClientOnlyUpdateLists[v4], v5);
    ScriptableCl_UpdateClientOnlyEvents((const LocalClientNum_t)v4, &s_scriptableClientOnlyUpdateLists[v4], v5, frameTime);
    Profile_EndInternal(NULL);
    ScriptableCl_UpdateClientOnlyInstances_VerifyUpdateList((const LocalClientNum_t)v4);
  }
}

/*
==============
ScriptableCl_UpdateClientOnlyEvents
==============
*/
void ScriptableCl_UpdateClientOnlyEvents(const LocalClientNum_t localClientNum, ScriptableUpdateBitset *r_updateList, const unsigned int updateWordCount, const int frameTime)
{
  int v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 
  int v14; 
  __int64 v15; 
  unsigned int v16; 
  unsigned int v21; 
  unsigned int v22; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  int v28; 
  __int64 v29; 
  unsigned int v30; 
  void *retaddr; 
  unsigned int perFrameMoveCount; 
  unsigned int perFrameUpdateCount; 
  int v36; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-58h], xmm6 }
  Sys_ProfBeginNamedEvent(0xFFFF0000, "ScriptableCl_UpdateClientOnlyMove");
  v36 = 0;
  v10 = 0;
  perFrameMoveCount = r_updateList->perFrameMoveCount;
  LODWORD(v11) = 0;
  v12 = 0;
  if ( updateWordCount )
    v12 = r_updateList->perFrameMove.array[0];
  while ( v12 )
  {
LABEL_6:
    v13 = __lzcnt(v12);
    if ( v13 >= 0x20 )
    {
      LODWORD(v26) = 32;
      LODWORD(v25) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v25, v26) )
        __debugbreak();
    }
    if ( (v12 & (0x80000000 >> v13)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v12 &= ~(0x80000000 >> v13);
    ScriptableCl_UpdateClientOnlyMovement(localClientNum, v13 + 32 * v11);
    ++v10;
  }
  while ( 1 )
  {
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= updateWordCount )
      break;
    v12 = r_updateList->perFrameMove.array[v11];
    if ( v12 )
      goto LABEL_6;
  }
  if ( v10 != perFrameMoveCount )
  {
    v30 = perFrameMoveCount;
    v28 = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3289, ASSERT_TYPE_ASSERT, "( moveCount ) == ( expectedMovecount )", "%s == %s\n\t%i, %i", "moveCount", "expectedMovecount", v28, v30) )
      __debugbreak();
  }
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFF0000, "ScriptableCl_UpdateClientOnlyEvents");
  perFrameUpdateCount = r_updateList->perFrameUpdateCount;
  *(double *)&_XMM0 = Com_GetTimeScale();
  v14 = 0;
  LODWORD(v15) = 0;
  v16 = 0;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, [rsp+0A8h+arg_18]
    vmulss  xmm2, xmm1, cs:__real@3a83126f
    vmulss  xmm6, xmm0, xmm2
  }
  if ( updateWordCount )
    v16 = r_updateList->perFrameUpdate.array[0];
  while ( v16 )
  {
LABEL_21:
    v21 = __lzcnt(v16);
    v22 = v21 + 32 * v15;
    if ( v21 >= 0x20 )
    {
      LODWORD(v26) = 32;
      LODWORD(v25) = v21;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v25, v26) )
        __debugbreak();
    }
    if ( (v16 & (0x80000000 >> v21)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    __asm { vmovaps xmm2, xmm6; deltaTime }
    v16 &= ~(0x80000000 >> v21);
    if ( !ScriptableCl_UpdateInstanceEvents(localClientNum, v22, *(const float *)&_XMM2) )
    {
      ScriptableCl_MarkPerFrameUpdateRequired(r_updateList, v22, 0);
      bitarray_base<bitarray<500000>>::setBit(&r_updateList->perFrameUpdateCompleted, v22);
    }
    v14 = ++v36;
  }
  while ( 1 )
  {
    v15 = (unsigned int)(v15 + 1);
    if ( (unsigned int)v15 >= updateWordCount )
      break;
    v16 = r_updateList->perFrameUpdate.array[v15];
    if ( v16 )
      goto LABEL_21;
  }
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+0A8h+var_58] }
  if ( v14 != perFrameUpdateCount )
  {
    LODWORD(v29) = perFrameUpdateCount;
    LODWORD(v27) = v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3322, ASSERT_TYPE_ASSERT, "( updateCount ) == ( expectedUpdatecount )", "%s == %s\n\t%i, %i", "updateCount", "expectedUpdatecount", v27, v29) )
      __debugbreak();
  }
}

/*
==============
ScriptableCl_UpdateClientOnlyInstances_VerifyUpdateList
==============
*/
void ScriptableCl_UpdateClientOnlyInstances_VerifyUpdateList(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  unsigned int totalInstanceCount; 
  unsigned int v4; 
  ScriptableInstanceClientContext **v5; 
  bitarray<500000> *p_perFrameUpdate; 
  __int64 v7; 
  ScriptableInstanceClientContext *v8; 
  unsigned int v9; 
  unsigned __int64 v10; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const char *name; 
  bool v13; 
  ScriptableInstanceContextSecure *v14; 
  const char *v15; 
  bitarray<500000> *p_perFrameMove; 
  ScriptableInstanceContextSecure *v17; 
  const char *v18; 
  bool v19; 
  ScriptableInstanceContextSecure *v20; 
  const char *v21; 
  __int64 v22; 
  __int64 v23; 
  bitarray<500000> *v24; 

  v1 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF000000, "Dev_ScriptableCl_UpdateClientOnlyInstances_VerifyUpdateList");
  if ( (unsigned int)v1 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2843, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableClientOnlyUpdateLists ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_scriptableClientOnlyUpdateLists )\n\t%i not in [0, %i)", v1, 2) )
    __debugbreak();
  v2 = v1;
  ScriptableCommon_AssertCountsInitialized();
  totalInstanceCount = g_scriptableWorldCounts.totalInstanceCount;
  ScriptableCommon_AssertCountsInitialized();
  v4 = s_verifyIteratorStart_0 + g_scriptableWorldCounts.serverInstanceCount;
  if ( s_verifyIteratorStart_0 + g_scriptableWorldCounts.serverInstanceCount < totalInstanceCount )
  {
    v5 = &g_scriptableCl_instanceContexts[v1];
    p_perFrameUpdate = &s_scriptableClientOnlyUpdateLists[v2].perFrameUpdate;
    v24 = &s_scriptableClientOnlyUpdateLists[v2].perFrameUpdate;
    v7 = v4;
    do
    {
      ScriptableCommon_AssertCountsInitialized();
      if ( v4 >= g_scriptableWorldCounts.totalInstanceCount )
      {
        ScriptableCommon_AssertCountsInitialized();
        LODWORD(v23) = g_scriptableWorldCounts.totalInstanceCount;
        LODWORD(v22) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v22, v23) )
          __debugbreak();
      }
      if ( (unsigned int)v1 >= 2 )
      {
        LODWORD(v23) = 2;
        LODWORD(v22) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 114, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", v22, v23) )
          __debugbreak();
      }
      if ( !*v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
        __debugbreak();
      v8 = *v5;
      if ( (*((_BYTE *)&v8[v7].commonContext + 60) & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2863, ASSERT_TYPE_ASSERT, "(!commonContext.needsInitialization)", (const char *)&queryFormat, "!commonContext.needsInitialization") )
        __debugbreak();
      if ( (*((_BYTE *)&v8[v7].commonContext + 60) & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2864, ASSERT_TYPE_ASSERT, "(!commonContext.needsShutdown)", (const char *)&queryFormat, "!commonContext.needsShutdown") )
        __debugbreak();
      if ( !ScriptableCl_IsLinked((const LocalClientNum_t)v1, v4) )
      {
        if ( v4 >= 0x7A120 )
        {
          LODWORD(v23) = 500000;
          LODWORD(v22) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v22, v23) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v4 & 0x1F)) & p_perFrameUpdate->array[(unsigned __int64)v4 >> 5]) != 0 )
        {
          LODWORD(v23) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2868, ASSERT_TYPE_ASSERT, "(!r_updateList.perFrameUpdate.testBit( scriptableIndex ))", "%s\n\tClientOnly Scriptable %i should not have been updated (not linked), but was in the update list", "!r_updateList.perFrameUpdate.testBit( scriptableIndex )", v23) )
            __debugbreak();
        }
        goto LABEL_71;
      }
      if ( ScriptableCl_GetUpdateRequiredForNonEntityScriptable((const LocalClientNum_t)v1, v4) )
      {
        if ( v4 >= 0x7A120 )
        {
          LODWORD(v23) = 500000;
          LODWORD(v22) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v22, v23) )
            __debugbreak();
        }
        v9 = 0x80000000 >> (v4 & 0x1F);
        v10 = (unsigned __int64)v4 >> 5;
        if ( (v9 & v24->array[v10]) == 0 )
        {
          if ( v4 >= 0x7A120 )
          {
            LODWORD(v23) = 500000;
            LODWORD(v22) = v4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v22, v23) )
              __debugbreak();
          }
          if ( (v9 & s_scriptableClientOnlyUpdateLists[v2].perFrameUpdateCompleted.array[v10]) == 0 )
          {
            InstanceCommonContext = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v1, v4);
            if ( InstanceCommonContext->def )
              name = InstanceCommonContext->def->name;
            else
              name = "<unknown>";
            LODWORD(v23) = v4;
            v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2875, ASSERT_TYPE_ASSERT, "(r_updateList.perFrameUpdate.testBit( scriptableIndex ) || r_updateList.perFrameUpdateCompleted.testBit( scriptableIndex ))", "%s\n\tClientOnly Scriptable %i (%s) should have been updated, but was not in the update list", "r_updateList.perFrameUpdate.testBit( scriptableIndex ) || r_updateList.perFrameUpdateCompleted.testBit( scriptableIndex )", v23, name);
            goto LABEL_49;
          }
        }
      }
      else
      {
        if ( v4 >= 0x7A120 )
        {
          LODWORD(v23) = 500000;
          LODWORD(v22) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v22, v23) )
            __debugbreak();
        }
        v9 = 0x80000000 >> (v4 & 0x1F);
        v10 = (unsigned __int64)v4 >> 5;
        if ( (v9 & v24->array[v10]) != 0 )
        {
          v14 = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v1, v4);
          if ( v14->def )
            v15 = v14->def->name;
          else
            v15 = "<unknown>";
          LODWORD(v23) = v4;
          v13 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2879, ASSERT_TYPE_ASSERT, "(!r_updateList.perFrameUpdate.testBit( scriptableIndex ))", "%s\n\tClientOnly Scriptable %i (%s) should not have been updated, but was in the update list", "!r_updateList.perFrameUpdate.testBit( scriptableIndex )", v23, v15);
LABEL_49:
          if ( v13 )
            __debugbreak();
        }
      }
      p_perFrameMove = &s_scriptableClientOnlyUpdateLists[v2].perFrameMove;
      if ( ScriptableCl_GetMoveUpdateRequiedForClientOnlyScriptable((const LocalClientNum_t)v1, v4) )
      {
        if ( v4 >= 0x7A120 )
        {
          LODWORD(v23) = 500000;
          LODWORD(v22) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v22, v23) )
            __debugbreak();
        }
        if ( (v9 & p_perFrameMove->array[v10]) != 0 )
          goto LABEL_70;
        v17 = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v1, v4);
        if ( v17->def )
          v18 = v17->def->name;
        else
          v18 = "<unknown>";
        LODWORD(v23) = v4;
        v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2885, ASSERT_TYPE_ASSERT, "(r_updateList.perFrameMove.testBit( scriptableIndex ))", "%s\n\tClientOnly Scriptable %i (%s) requires movement update, but was not in the update list", "r_updateList.perFrameMove.testBit( scriptableIndex )", v23, v18);
      }
      else
      {
        if ( v4 >= 0x7A120 )
        {
          LODWORD(v23) = 500000;
          LODWORD(v22) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v22, v23) )
            __debugbreak();
        }
        if ( (v9 & p_perFrameMove->array[v10]) == 0 )
          goto LABEL_70;
        v20 = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v1, v4);
        if ( v20->def )
          v21 = v20->def->name;
        else
          v21 = "<unknown>";
        LODWORD(v23) = v4;
        v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2889, ASSERT_TYPE_ASSERT, "(!r_updateList.perFrameMove.testBit( scriptableIndex ))", "%s\n\tClientOnly Scriptable %i (%s) does not require movement update, but was in the update list", "!r_updateList.perFrameMove.testBit( scriptableIndex )", v23, v21);
      }
      if ( v19 )
        __debugbreak();
LABEL_70:
      p_perFrameUpdate = &s_scriptableClientOnlyUpdateLists[v2].perFrameUpdate;
LABEL_71:
      ++v4;
      ++v7;
      v5 = &g_scriptableCl_instanceContexts[v1];
    }
    while ( v4 < totalInstanceCount );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
ScriptableCl_UpdateClientOnlyMovement
==============
*/
void ScriptableCl_UpdateClientOnlyMovement(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const ScriptableDef *def; 
  const char **p_name; 
  ScriptableLinkType linkedObjectType; 
  unsigned int linkedObjectIndex; 
  vec3_t outOrigin; 

  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  if ( !InstanceCommonContext->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2449, ASSERT_TYPE_ASSERT, "(context.def != nullptr)", (const char *)&queryFormat, "context.def != nullptr") )
    __debugbreak();
  def = InstanceCommonContext->def;
  if ( !InstanceCommonContext->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 276, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( (def->flags & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2450, ASSERT_TYPE_ASSERT, "( ( !ScriptableDef_HasServerInstance( context.def ) ) )", "( context.def->name ) = %s", InstanceCommonContext->def->name) )
    __debugbreak();
  p_name = &InstanceCommonContext->def->name;
  if ( !InstanceCommonContext->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 260, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( ((_BYTE)p_name[2] & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2451, ASSERT_TYPE_ASSERT, "( ( ScriptableDef_CanMove( context.def ) ) )", "( context.def->name ) = %s", InstanceCommonContext->def->name) )
    __debugbreak();
  linkedObjectType = InstanceCommonContext->linkedObjectType;
  if ( linkedObjectType != SCRIPTABLE_LINK_DYNENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2453, ASSERT_TYPE_ASSERT, "( context.linkedObjectType ) == ( SCRIPTABLE_LINK_DYNENT )", "%s == %s\n\t%i, %i", "context.linkedObjectType", "SCRIPTABLE_LINK_DYNENT", (unsigned __int8)linkedObjectType, 2) )
    __debugbreak();
  linkedObjectIndex = InstanceCommonContext->linkedObjectIndex;
  ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, &outOrigin);
  if ( DynEnt_ScriptableUpdatePosition(localClientNum, linkedObjectIndex, &outOrigin, &InstanceCommonContext->angles) )
    ScriptableInstanceContextSecure::SetOrigin(InstanceCommonContext, scriptableIndex, &outOrigin);
}

/*
==============
ScriptableCl_UpdateNonEntitySharedInstances
==============
*/
void ScriptableCl_UpdateNonEntitySharedInstances(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  __int64 v2; 
  unsigned int v3; 
  __int64 v4; 
  __int64 v5; 
  unsigned int v6; 
  int v7; 

  v1 = DCONST_DVARBOOL_scriptable_enable;
  v2 = localClientNum;
  if ( !DCONST_DVARBOOL_scriptable_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    if ( SND_CanDoPhysicsQuery() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3336, ASSERT_TYPE_ASSERT, "(!SND_CanDoPhysicsQuery())", (const char *)&queryFormat, "!SND_CanDoPhysicsQuery()") )
      __debugbreak();
    Sys_ProfBeginNamedEvent(0xFF008008, "ScriptableCl_UpdateNonEntitySharedInstances");
    if ( (unsigned int)v2 >= 2 )
    {
      LODWORD(v5) = 2;
      LODWORD(v4) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3341, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableClientOnlyUpdateLists ) ) + 0 ) )", "localClientNum doesn't index s_scriptableClientOnlyUpdateLists\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    ScriptableCommon_AssertCountsInitialized();
    v3 = (g_scriptableWorldCounts.serverInstanceCount + 31) >> 5;
    if ( v3 > 0x3D09 )
    {
      v7 = 15625;
      v6 = (g_scriptableWorldCounts.serverInstanceCount + 31) >> 5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3347, ASSERT_TYPE_ASSERT, "( updateWordCount ) <= ( SCRIPTABLE_UPDATE_INSTANCE_LIST_BITSET_SIZE )", "%s <= %s\n\t%i, %i", "updateWordCount", "SCRIPTABLE_UPDATE_INSTANCE_LIST_BITSET_SIZE", v6, v7) )
        __debugbreak();
    }
    ScriptableCl_ExecuteUpdateListChanges((const LocalClientNum_t)v2, &s_scriptableStandaloneServerUpdateLists[v2], v3);
    ScriptableCl_UpdateStandaloneChangedStates((const LocalClientNum_t)v2);
    ScriptableCl_UpdateStandaloneEvents((const LocalClientNum_t)v2, &s_scriptableStandaloneServerUpdateLists[v2], v3);
    Sys_ProfEndNamedEvent();
    ScriptableCl_UpdateStandaloneServerInstances_VerifyUpdateList((const LocalClientNum_t)v2);
  }
}

/*
==============
ScriptableCl_UpdateParentedInstanceTransform
==============
*/
void ScriptableCl_UpdateParentedInstanceTransform(const LocalClientNum_t localClientNum, const centity_t *const parent, const unsigned int scriptableIndex)
{
  ScriptableReplicatedInstance *ReplicatedInstance; 
  unsigned __int16 m_data; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  vec3_t *outWorldOrigin; 
  vec3_t *outWorldAngles; 
  __int64 v29; 
  __int64 v30; 
  vec3_t localOrigin; 
  __int64 v32; 
  char v33[12]; 
  vec3_t localAngles; 

  v32 = -2i64;
  if ( !parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4340, ASSERT_TYPE_ASSERT, "(parent)", (const char *)&queryFormat, "parent") )
    __debugbreak();
  if ( (parent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4341, ASSERT_TYPE_ASSERT, "(CENextValid( parent ))", (const char *)&queryFormat, "CENextValid( parent )") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_IN|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4342, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SCRIPTABLE_PARENT_ENTITIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SCRIPTABLE_PARENT_ENTITIES )") )
    __debugbreak();
  ReplicatedInstance = ScriptableCl_GetReplicatedInstance(localClientNum, scriptableIndex);
  if ( !ReplicatedInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4345, ASSERT_TYPE_ASSERT, "(replicatedInstance)", (const char *)&queryFormat, "replicatedInstance") )
    __debugbreak();
  if ( ReplicatedInstance->instanceIndex != scriptableIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4346, ASSERT_TYPE_ASSERT, "( replicatedInstance->instanceIndex ) == ( scriptableIndex )", "%s == %s\n\t%i, %i", "replicatedInstance->instanceIndex", "scriptableIndex", ReplicatedInstance->instanceIndex, scriptableIndex) )
    __debugbreak();
  if ( !ReplicatedInstance->parent.m_data )
  {
    LODWORD(outWorldOrigin) = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4347, ASSERT_TYPE_ASSERT, "( ( replicatedInstance->parent.HasEntity() ) )", "( scriptableIndex ) = %i", outWorldOrigin) )
      __debugbreak();
  }
  if ( !ReplicatedInstance->parent.m_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 323, ASSERT_TYPE_ASSERT, "(HasEntity())", (const char *)&queryFormat, "HasEntity()") )
    __debugbreak();
  m_data = ReplicatedInstance->parent.m_data;
  if ( parent->nextState.number != (unsigned __int16)(m_data - 1) )
  {
    if ( !m_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 323, ASSERT_TYPE_ASSERT, "(HasEntity())", (const char *)&queryFormat, "HasEntity()") )
      __debugbreak();
    LODWORD(v30) = (unsigned __int16)(ReplicatedInstance->parent.m_data - 1);
    LODWORD(v29) = parent->nextState.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4348, ASSERT_TYPE_ASSERT, "( parent->nextState.number ) == ( replicatedInstance->parent.GetEntityNum() )", "%s == %s\n\t%i, %i", "parent->nextState.number", "replicatedInstance->parent.GetEntityNum()", v29, v30) )
      __debugbreak();
  }
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  if ( (*((_BYTE *)InstanceCommonContext + 60) & 0x20) == 0 )
  {
    LODWORD(outWorldOrigin) = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4351, ASSERT_TYPE_ASSERT, "( ( context.hasParentEntity ) )", "( scriptableIndex ) = %i", outWorldOrigin) )
      __debugbreak();
  }
  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.runtimeInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    LODWORD(outWorldAngles) = g_scriptableWorldCounts.runtimeInstanceCount;
    LODWORD(outWorldOrigin) = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4352, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetReservedInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetReservedInstanceCount()\n\t%i not in [0, %i)", outWorldOrigin, outWorldAngles) )
      __debugbreak();
  }
  if ( (*((_BYTE *)InstanceCommonContext + 61) & 2) == 0 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmovss  dword ptr [rsp+0C8h+localOrigin], xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmovss  dword ptr [rsp+0C8h+localOrigin+4], xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmovss  dword ptr [rsp+0C8h+localOrigin+8], xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmovss  xmm2, cs:__real@3bb40000
      vmulss  xmm0, xmm0, xmm2
      vmovss  dword ptr [rsp+0C8h+localAngles], xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmulss  xmm0, xmm1, xmm2
      vmovss  dword ptr [rsp+0C8h+localAngles+4], xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, eax
      vmulss  xmm0, xmm1, xmm2
      vmovss  dword ptr [rsp+0C8h+localAngles+8], xmm0
    }
    ScriptableCl_ConvertStandaloneParentEntityPoseToWorldSpace(localClientNum, scriptableIndex, parent, &localOrigin, &localAngles, &localOrigin, &localAngles);
    ScriptableCL_SetPose(localClientNum, scriptableIndex, InstanceCommonContext, &localOrigin, &localAngles, 0);
  }
  memset(v33, 0, sizeof(v33));
  memset(&localOrigin, 0, sizeof(localOrigin));
}

/*
==============
ScriptableCl_UpdateParentedTransforms
==============
*/
void ScriptableCl_UpdateParentedTransforms(const LocalClientNum_t localClientNum, const centity_t *const cent)
{
  const dvar_t *v4; 
  ScriptableStandaloneParentData *StandaloneEntityParentData; 
  __int16 number; 
  __int64 i; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4371, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4372, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  v4 = DVARBOOL_scriptable_entity_parenting;
  if ( !DVARBOOL_scriptable_entity_parenting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_entity_parenting") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled )
  {
    StandaloneEntityParentData = ScriptableCl_GetStandaloneEntityParentData(localClientNum);
    number = cent->nextState.number;
    if ( (unsigned __int16)number >= 0x800u )
    {
      LODWORD(v9) = 2048;
      LODWORD(v8) = number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4384, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.number ) < (unsigned)( ( sizeof( *array_counter( parentData.m_assignedHead ) ) + 0 ) )", "cent->nextState.number doesn't index parentData.m_assignedHead\n\t%i not in [0, %i)", v8, v9) )
        __debugbreak();
    }
    for ( i = StandaloneEntityParentData->m_assignedHead[cent->nextState.number]; (_DWORD)i != 0xFFFF; i = StandaloneEntityParentData->m_next[i] )
    {
      if ( (unsigned int)i >= 0x800 )
      {
        LODWORD(v9) = 2048;
        LODWORD(v8) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4389, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( parentData.m_parentEntity ) ) + 0 ) )", "index doesn't index parentData.m_parentEntity\n\t%i not in [0, %i)", v8, v9) )
          __debugbreak();
      }
      if ( cent->nextState.number != StandaloneEntityParentData->m_parentEntity[i] )
      {
        LODWORD(v11) = StandaloneEntityParentData->m_parentEntity[i];
        LODWORD(v10) = cent->nextState.number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4390, ASSERT_TYPE_ASSERT, "( cent->nextState.number ) == ( parentData.m_parentEntity[index] )", "%s == %s\n\t%i, %i", "cent->nextState.number", "parentData.m_parentEntity[index]", v10, v11) )
          __debugbreak();
      }
      ScriptableCl_UpdateParentedInstanceTransform(localClientNum, cent, i);
    }
  }
}

/*
==============
ScriptableCl_UpdatePosition
==============
*/
void ScriptableCl_UpdatePosition(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const centity_t *const cent)
{
  const dvar_t *v6; 
  vec3_t outOrigin; 

  _RBX = cent;
  v6 = DCONST_DVARBOOL_scriptable_enable;
  if ( !DCONST_DVARBOOL_scriptable_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4317, ASSERT_TYPE_ASSERT, "(localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS") )
      __debugbreak();
    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4318, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    if ( (_RBX->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4319, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
      __debugbreak();
    if ( !ScriptableCl_IsScriptableEntity(localClientNum, _RBX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4320, ASSERT_TYPE_ASSERT, "(ScriptableCl_IsScriptableEntity( localClientNum, cent ))", (const char *)&queryFormat, "ScriptableCl_IsScriptableEntity( localClientNum, cent )") )
      __debugbreak();
    ScriptableCl_AssertLinkEquals(localClientNum, scriptableIndex, SCRIPTABLE_LINK_ENTITY, _RBX->nextState.number);
    CG_GetPoseOrigin(&_RBX->pose, &outOrigin);
    _RDI = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    ScriptableInstanceContextSecure::SetOrigin(_RDI, scriptableIndex, &outOrigin);
    _RDI->angles.v[0] = _RBX->pose.angles.v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+4Ch]
      vmovss  dword ptr [rdi+30h], xmm0
      vmovss  xmm1, dword ptr [rbx+50h]
      vmovss  dword ptr [rdi+34h], xmm1
    }
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
}

/*
==============
ScriptableCl_UpdateServerControlledState
==============
*/
void ScriptableCl_UpdateServerControlledState(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptablePartDef *partDef, unsigned int partStateIndex, const ScriptablePartWorldGroupState *partWorldState, const bool forceStateChange)
{
  __int64 v7; 
  ScriptablePartRuntime *PartRuntime; 
  unsigned __int8 data; 
  unsigned int v13; 
  char v14; 
  unsigned int LinkObject; 
  int eType; 
  const ScriptableDef *def; 
  const char *name; 
  __int64 v20; 
  ScriptableEventParams eventParams; 

  v7 = partStateIndex;
  if ( !ScriptableCl_GetInstanceInUse(localClientNum, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1940, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex )") )
    __debugbreak();
  if ( !partWorldState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1941, ASSERT_TYPE_ASSERT, "(partWorldState)", (const char *)&queryFormat, "partWorldState") )
    __debugbreak();
  PartRuntime = ScriptableCl_GetPartRuntime(localClientNum, scriptableIndex, partDef);
  if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1944, ASSERT_TYPE_ASSERT, "(partRuntime)", (const char *)&queryFormat, "partRuntime") )
    __debugbreak();
  data = partWorldState->partData[v7].data;
  v13 = data & 0x7F;
  v14 = data >> 7;
  if ( PartRuntime->stateId != v13 || forceStateChange && v14 )
  {
    if ( v13 < partDef->numStates )
    {
      Sys_ProfBeginNamedEvent(0xFF44CCFF, "ScriptableCl_UpdateServerControlledState");
      CG_EntityWorkers_EnterCriticalSection_LegacyOnly();
      eventParams.context = ScriptableCl_LocalClientToContext(localClientNum);
      eventParams.scriptableIndex = scriptableIndex;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      eventParams.callbacks = &s_clCallbackTable;
      eventParams.partDef = partDef;
      __asm { vmovdqu xmmword ptr [rsp+88h+eventParams.damageEvent], xmm0 }
      ScriptableBg_ExecutePartChange(&eventParams, v13, v14);
      CG_EntityWorkers_LeaveCriticalSection_LegacyOnly();
      Sys_ProfEndNamedEvent();
    }
    else
    {
      LinkObject = ScriptableCl_GetLinkObject(localClientNum, scriptableIndex);
      if ( ScriptableCl_GetLinkType(localClientNum, scriptableIndex) == SCRIPTABLE_LINK_ENTITY )
        eType = ScriptableCl_GetEntity(localClientNum, scriptableIndex)->nextState.eType;
      else
        eType = -1;
      def = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def;
      if ( def )
        name = def->name;
      else
        name = "<unknown>";
      LODWORD(v20) = eType;
      Com_PrintWarning(29, "Scriptable is searching for state %i in a part who's state count is %i. Def is %s.  EType is %i.  LinkedObject is %i\n", v13, partDef->numStates, name, v20, LinkObject);
    }
  }
}

/*
==============
ScriptableCl_UpdateSharedInstance
==============
*/
void ScriptableCl_UpdateSharedInstance(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const unsigned int entityIndex)
{
  __int64 v8; 
  const dvar_t *v9; 
  const ScriptableDef *def; 
  bool updated; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 

  __asm { vmovaps [rsp+78h+var_28], xmm6 }
  v8 = localClientNum;
  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2366, ASSERT_TYPE_ASSERT, "(localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS") )
    __debugbreak();
  if ( entityIndex >= 0x800 )
  {
    LODWORD(v18) = entityIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2367, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, 2048) )
      __debugbreak();
  }
  Sys_ProfBeginNamedEvent(0xFF44CCFF, "ScriptableCl_UpdateSharedInstance");
  ScriptableCl_AssertLinkEquals((const LocalClientNum_t)v8, scriptableIndex, SCRIPTABLE_LINK_ENTITY, entityIndex);
  if ( (unsigned int)v8 >= 2 )
  {
    LODWORD(v20) = 2;
    LODWORD(v18) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2375, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_serverChangedEntitiesBits ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_serverChangedEntitiesBits\n\t%i not in [0, %i)", v18, v20) )
      __debugbreak();
    LODWORD(v21) = 2;
    LODWORD(v19) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2376, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_updateNeededEntitiesBits ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_updateNeededEntitiesBits\n\t%i not in [0, %i)", v19, v21) )
      __debugbreak();
  }
  if ( (*((_BYTE *)ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v8, scriptableIndex) + 60) & 1) != 0 )
  {
    Sys_ProfBeginNamedEvent(0xFF44CCFF, "ScriptableCl_UpdateSharedInstance_Initialize");
    CG_EntityWorkers_EnterCriticalSection_LegacyOnly();
    ScriptableCl_Update_InitInstance((const LocalClientNum_t)v8, scriptableIndex);
    CG_EntityWorkers_LeaveCriticalSection_LegacyOnly();
    ScriptableCl_Update_AssertInitializedScriptable((const LocalClientNum_t)v8, scriptableIndex);
    ScriptableCl_InterlockedBitSetTo(&s_scriptableCl_serverChangedEntitiesBits[v8], entityIndex, 1);
    ScriptableCl_InterlockedBitSetTo(&s_scriptableCl_updateNeededEntitiesBits[v8], entityIndex, 1);
    Sys_ProfEndNamedEvent();
  }
  v9 = DCONST_DVARBOOL_scriptable_enable;
  if ( !DCONST_DVARBOOL_scriptable_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    def = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v8, scriptableIndex)->def;
    if ( !def )
    {
      LODWORD(v18) = scriptableIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2412, ASSERT_TYPE_ASSERT, "( ( def ) )", "( scriptableIndex ) = %i", v18) )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 276, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
        __debugbreak();
    }
    if ( (def->flags & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2413, ASSERT_TYPE_ASSERT, "( ( ScriptableDef_HasServerInstance( def ) ) )", "( def->name ) = %s", def->name) )
      __debugbreak();
    if ( (def->flags & 4) != 0 && bitarray_base<bitarray<2048>>::testBit(&s_scriptableCl_serverChangedEntitiesBits[v8], entityIndex) )
    {
      ScriptableCl_UpdateSharedInstanceStates((const LocalClientNum_t)v8, scriptableIndex);
      ScriptableCl_InterlockedBitSetTo(&s_scriptableCl_serverChangedEntitiesBits[v8], entityIndex, 0);
    }
    if ( (def->flags & 0x200) != 0 && bitarray_base<bitarray<2048>>::testBit(&s_scriptableCl_updateNeededEntitiesBits[v8], entityIndex) )
    {
      CG_GetLocalClientGlobals((const LocalClientNum_t)v8);
      *(double *)&_XMM0 = Com_GetTimeScale();
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, dword ptr [rbx+65E4h]
        vmulss  xmm2, xmm1, cs:__real@3a83126f
        vmulss  xmm6, xmm0, xmm2
      }
      CG_EntityWorkers_EnterCriticalSection_LegacyOnly();
      __asm { vmovaps xmm2, xmm6; deltaTime }
      updated = ScriptableCl_UpdateInstanceEvents((const LocalClientNum_t)v8, scriptableIndex, *(const float *)&_XMM2);
      CG_EntityWorkers_LeaveCriticalSection_LegacyOnly();
      if ( !updated )
        ScriptableCl_InterlockedBitSetTo(&s_scriptableCl_updateNeededEntitiesBits[v8], entityIndex, 0);
    }
  }
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+78h+var_28] }
}

/*
==============
ScriptableCl_UpdateSharedInstanceStates
==============
*/
void ScriptableCl_UpdateSharedInstanceStates(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  __int64 v2; 
  __int64 v3; 
  unsigned int ScriptableInstanceFirstPartWorldIndex; 
  __int64 v5; 
  const ScriptableDef *def; 
  ScriptablePartWorldState *PartWorldState; 
  unsigned int v8; 
  BOOL v9; 
  _BOOL8 v10; 
  const ScriptablePartWorldGroupState *v11; 
  const dvar_t *v12; 
  bool v13; 
  const ScriptablePartDef *v14; 
  int flags; 
  const BG_SpawnGroup_Loot_ItemDef *LootItemDefByScriptableDef; 
  const ScriptableDef *v17; 
  bool IsScriptableUsable; 
  bool HasLootFX; 
  __int64 scriptableFirstPartIndex; 
  __int64 forceStateChange; 

  v2 = localClientNum;
  v3 = scriptableIndex;
  Profile_Begin(775);
  ScriptableCl_Update_AssertInitializedScriptable((const LocalClientNum_t)v2, v3);
  ScriptableInstanceFirstPartWorldIndex = ScriptableCl_GetScriptableInstanceFirstPartWorldIndex((const LocalClientNum_t)v2, v3);
  v5 = ScriptableInstanceFirstPartWorldIndex;
  if ( ScriptableInstanceFirstPartWorldIndex != -1 )
  {
    def = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v2, v3)->def;
    if ( !def )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2308, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 276, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
        __debugbreak();
    }
    if ( (def->flags & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2309, ASSERT_TYPE_ASSERT, "( ( ScriptableDef_HasServerInstance( def ) ) )", "( def->name ) = %s", def->name) )
      __debugbreak();
    if ( (def->flags & 4) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2310, ASSERT_TYPE_ASSERT, "( ( ScriptableDef_IsServerControlled( def ) ) )", "( def->name ) = %s", def->name) )
      __debugbreak();
    PartWorldState = ScriptableCl_GetPartWorldState((const LocalClientNum_t)v2);
    if ( !PartWorldState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2313, ASSERT_TYPE_ASSERT, "(partWorldState)", (const char *)&queryFormat, "partWorldState") )
      __debugbreak();
    ScriptableCommon_AssertCountsInitialized();
    v8 = 0;
    v9 = (unsigned int)v3 < g_scriptableWorldCounts.runtimeInstanceCount;
    v10 = (unsigned int)v3 < g_scriptableWorldCounts.runtimeInstanceCount;
    v11 = &PartWorldState->groups[v10];
    if ( (unsigned int)v5 >= g_scriptableCl_replicatedLimits.partWorldLimits[v10] )
    {
      LODWORD(scriptableFirstPartIndex) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2318, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableFirstPartIndex ) < (unsigned)( g_scriptableCl_replicatedLimits.partWorldLimits[worldIndex] )", "scriptableFirstPartIndex doesn't index g_scriptableCl_replicatedLimits.partWorldLimits[worldIndex]\n\t%i not in [0, %i)", scriptableFirstPartIndex, g_scriptableCl_replicatedLimits.partWorldLimits[v10]) )
        __debugbreak();
    }
    if ( (def->flags & 0x180000) == 0 )
      goto LABEL_25;
    v12 = DVARBOOL_bg_doorEnableEnhanced;
    if ( !DVARBOOL_bg_doorEnableEnhanced && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_doorEnableEnhanced") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( v12->current.enabled )
      v13 = 1;
    else
LABEL_25:
      v13 = 0;
    if ( def->numParts )
    {
      do
      {
        v14 = &def->parts[v8];
        flags = v14->flags;
        if ( (flags & 4) != 0 && (flags & 0x40000) == 0 )
          ScriptableCl_UpdateSharedPart((const LocalClientNum_t)v2, v3, v9, v14, v11, v5, v13);
        ++v8;
      }
      while ( v8 < def->numParts );
    }
    if ( !ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v2, v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 5225, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex )") )
      __debugbreak();
    if ( s_scriptableSpatial[v2].scriptableToMarker[v3] != -1 && (def->flags & 0x20000) != 0 )
    {
      LootItemDefByScriptableDef = (const BG_SpawnGroup_Loot_ItemDef *)ScriptableCl_GetLootItemDefByScriptableDef((const LocalClientNum_t)v2, def);
      if ( LootItemDefByScriptableDef && LootItemDefByScriptableDef->objective.icon )
        ScriptableCl_ProcessChangedServerStateLootObjective((const LocalClientNum_t)v2, v3, def, LootItemDefByScriptableDef, v11->partData[v5].data & 0x7F);
      ScriptableCommon_AssertCountsInitialized();
      if ( (unsigned int)v3 >= g_scriptableWorldCounts.totalInstanceCount )
      {
        ScriptableCommon_AssertCountsInitialized();
        LODWORD(forceStateChange) = g_scriptableWorldCounts.totalInstanceCount;
        LODWORD(scriptableFirstPartIndex) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2547, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", scriptableFirstPartIndex, forceStateChange) )
          __debugbreak();
      }
      v17 = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v2, v3)->def;
      if ( v17 && (v17->flags & 0x20000) != 0 )
      {
        IsScriptableUsable = ScriptableCl_IsScriptableUsable((const LocalClientNum_t)v2, v3, NULL);
        HasLootFX = ScriptableCl_HasLootFX((const LocalClientNum_t)v2, v3);
        if ( IsScriptableUsable )
        {
          if ( !HasLootFX )
            ScriptableCl_PlayLootBeamFX((const LocalClientNum_t)v2, v3);
        }
        else if ( HasLootFX )
        {
          ScriptableCl_StopLootFX((const LocalClientNum_t)v2, v3, 1);
        }
      }
    }
  }
  Profile_EndInternal(NULL);
}

/*
==============
ScriptableCl_UpdateSharedPart
==============
*/
void ScriptableCl_UpdateSharedPart(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const unsigned int worldIndex, const ScriptablePartDef *partDef, const ScriptablePartWorldGroupState *partWorldState, unsigned int scriptableFirstPartIndex, const bool forceStateChange)
{
  __int64 v7; 
  unsigned int v11; 
  unsigned int i; 
  ScriptablePartDef *v13; 
  __int64 v14; 

  v7 = worldIndex;
  if ( !partWorldState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1986, ASSERT_TYPE_ASSERT, "(partWorldState)", (const char *)&queryFormat, "partWorldState") )
    __debugbreak();
  if ( !ScriptableCl_GetInstanceInUse(localClientNum, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1987, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex )") )
    __debugbreak();
  v11 = scriptableFirstPartIndex + partDef->serverControlledFlatId;
  if ( v11 >= g_scriptableCl_replicatedLimits.partWorldLimits[v7] )
  {
    LODWORD(v14) = scriptableFirstPartIndex + partDef->serverControlledFlatId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 1994, ASSERT_TYPE_ASSERT, "(unsigned)( partWorldIndex ) < (unsigned)( g_scriptableCl_replicatedLimits.partWorldLimits[worldIndex] )", "partWorldIndex doesn't index g_scriptableCl_replicatedLimits.partWorldLimits[worldIndex]\n\t%i not in [0, %i)", v14, g_scriptableCl_replicatedLimits.partWorldLimits[v7]) )
      __debugbreak();
  }
  ScriptableCl_UpdateServerControlledState(localClientNum, scriptableIndex, partDef, v11, partWorldState, forceStateChange);
  for ( i = 0; i < partDef->numChildParts; ++i )
  {
    v13 = &partDef->childParts[i];
    if ( (v13->flags & 4) != 0 )
      ScriptableCl_UpdateSharedPart(localClientNum, scriptableIndex, v7, v13, partWorldState, scriptableFirstPartIndex, forceStateChange);
  }
}

/*
==============
ScriptableCl_UpdateSnapshotChanges
==============
*/
void ScriptableCl_UpdateSnapshotChanges(const LocalClientNum_t localClientNum, const unsigned __int64 targetChangeSequence)
{
  __int64 v2; 
  ScriptableCompleteState *v4; 
  ScriptableReadChangeQueue *v5; 
  const ScriptableReplicatedLimits *ReplicatedLimits; 
  unsigned __int64 readIndex; 
  unsigned __int64 capacity; 
  const ScriptableReplicatedLimits *v9; 
  unsigned __int64 v10; 
  unsigned int m_localClientNum; 
  CircularEntryBuffer<500,131072,unsigned __int64,1> *buffer; 
  unsigned __int64 v13; 
  unsigned int offset; 
  unsigned __int16 size; 
  __int64 v16; 
  __int64 v17; 
  unsigned __int8 *v18; 
  ScriptableReplicatedInstance *replicatedInstances; 
  unsigned int replicatedInstanceCount; 
  int MinBitCountForNum; 
  unsigned int v22; 
  unsigned int v23; 
  const unsigned int *p_instanceIndex; 
  int v25; 
  bool v26; 
  const dvar_t *v27; 
  ScriptableReplicatedInstance *v28; 
  unsigned int v29; 
  int v30; 
  unsigned int v31; 
  unsigned int v32; 
  ScriptableReplicatedInstance *v33; 
  const dvar_t *v34; 
  ScriptableReplicatedInstance *v35; 
  unsigned int v36; 
  int v37; 
  unsigned int v38; 
  unsigned int v39; 
  unsigned int *v40; 
  const dvar_t *v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  ScriptableReplicatedLimits *limits; 
  msg_t buf; 
  LocalClientNum_t v49; 
  ScriptableClFixedPartChangedFunctor partChangedFunc; 
  ScriptableCompleteState *curWorld; 
  ScriptableReadChangeQueue *v52; 
  unsigned __int64 v53; 
  unsigned __int8 data[131072]; 

  v2 = localClientNum;
  v53 = targetChangeSequence;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4017, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_worldCurrent ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_worldCurrent\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !s_scriptableCl_worldCurrent[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4018, ASSERT_TYPE_ASSERT, "(s_scriptableCl_worldCurrent[localClientNum] != nullptr)", (const char *)&queryFormat, "s_scriptableCl_worldCurrent[localClientNum] != nullptr") )
    __debugbreak();
  v4 = s_scriptableCl_worldCurrent[v2];
  curWorld = v4;
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v43) = 2;
    LODWORD(v42) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 337, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_changeQueue ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_changeQueue\n\t%i not in [0, %i)", v42, v43) )
      __debugbreak();
  }
  v5 = &s_scriptableCl_changeQueue[v2];
  v52 = v5;
  if ( targetChangeSequence > s_scriptableCl_changeQueue[v2].readIndex )
  {
    Sys_ProfBeginNamedEvent(0xFFFFFFFF, "ScriptableCl_UpdateSnapshotChangedParts");
    ReplicatedLimits = ScriptableCl_GetReplicatedLimits();
    readIndex = s_scriptableCl_changeQueue[v2].readIndex;
    capacity = s_scriptableCl_changeQueue[v2].capacity;
    limits = (ScriptableReplicatedLimits *)ReplicatedLimits;
    v9 = ReplicatedLimits;
    if ( targetChangeSequence - readIndex > capacity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4030, ASSERT_TYPE_ASSERT, "( static_cast<ScriptableChangeIndex>( targetChangeSequence - changeQueue.readIndex ) ) <= ( changeQueue.capacity )", "%s <= %s\n\t%i, %i", "static_cast<ScriptableChangeIndex>( targetChangeSequence - changeQueue.readIndex )", "changeQueue.capacity", targetChangeSequence - readIndex, capacity) )
      __debugbreak();
    v10 = v5->readIndex;
    partChangedFunc.m_localClientNum = (int)v2;
    if ( v10 != targetChangeSequence )
    {
      m_localClientNum = partChangedFunc.m_localClientNum;
      v49 = partChangedFunc.m_localClientNum;
      do
      {
        buffer = v5->buffer;
        v13 = v10 % v5->capacity;
        if ( (unsigned int)v13 >= 0x1F4 )
        {
          LODWORD(v43) = 500;
          LODWORD(v42) = v10 % v5->capacity;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 242, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( m_entries ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( m_entries )\n\t%i not in [0, %i)", v42, v43) )
            __debugbreak();
        }
        if ( (unsigned int)v13 >= 0x1F4 )
        {
          LODWORD(v43) = 500;
          LODWORD(v42) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_circular_buffer.h", 48, ASSERT_TYPE_ASSERT, "(unsigned)( entryIndex ) < (unsigned)( ( sizeof( *array_counter( m_entries ) ) + 0 ) )", "entryIndex doesn't index ARRAY_COUNT( m_entries )\n\t%i not in [0, %i)", v42, v43) )
            __debugbreak();
        }
        offset = buffer->m_entries[(unsigned int)v13].offset;
        if ( buffer->m_bufferNextIndex - offset <= 0x20000 && (size = buffer->m_entries[(unsigned int)v13].size) != 0 )
        {
          v16 = offset & 0x1FFFF;
          m_localClientNum = size;
          v49 = size;
          v17 = (unsigned int)(0x20000 - v16);
          v18 = &buffer->m_buffer[v16];
          if ( (unsigned int)v17 >= size )
          {
            memcpy_0(data, v18, size);
          }
          else
          {
            memcpy_0(data, v18, (unsigned int)v17);
            memcpy_0(&data[v17], buffer->m_buffer, m_localClientNum - (unsigned int)v17);
          }
        }
        else
        {
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14406F5F0, 6014i64, v5->readIndex);
        }
        if ( m_localClientNum > 0x20000 )
        {
          LODWORD(v45) = 0x20000;
          LODWORD(v44) = m_localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4052, ASSERT_TYPE_ASSERT, "( existingSize ) <= ( sizeof( parseBuf ) )", "%s <= %s\n\t%i, %i", "existingSize", "sizeof( parseBuf )", v44, v45) )
            __debugbreak();
        }
        MSG_InitReadOnly(&buf, data, m_localClientNum);
        MSG_BeginReading(&buf);
        replicatedInstances = v4->replicatedInstances;
        replicatedInstanceCount = curWorld->replicatedInstanceCount;
        MinBitCountForNum = GetMinBitCountForNum(v9->instanceLimit - 1);
        v22 = 1;
        v23 = -1;
        if ( MinBitCountForNum > 1 )
          v22 = MinBitCountForNum;
        if ( !buf.overflowed )
        {
          while ( 1 )
          {
            if ( !MSG_ReadBit(&buf) )
              goto LABEL_77;
            if ( MSG_ReadByte(&buf) != 15 && !buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.h", 180, ASSERT_TYPE_ASSERT, "(sentinel == 15 || MSG_IsOverflowed( msg ))", (const char *)&queryFormat, "sentinel == 15 || MSG_IsOverflowed( msg )") )
              __debugbreak();
            if ( v23 != -1 && v23 >= 1 << v22 )
            {
              LODWORD(v42) = v23;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.h", 86, ASSERT_TYPE_ASSERT, "( ( ( inOutLastIndex == -1 ) || ( static_cast<uint>( inOutLastIndex ) < (1u<< instanceBitCount) ) ) )", "( inOutLastIndex ) = %i", v42) )
                __debugbreak();
            }
            if ( MSG_ReadBit(&buf) )
            {
              ++v23;
            }
            else if ( MSG_ReadBit(&buf) )
            {
              v23 += MSG_ReadBits(&buf, v22 >> 1);
            }
            else
            {
              v23 = MSG_ReadBits(&buf, v22);
            }
            if ( v23 >= 1 << v22 )
            {
              if ( buf.overflowed )
                break;
              LODWORD(v42) = v23;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.h", 79, ASSERT_TYPE_ASSERT, "( ( readIndex < ( 1u << fullBits ) || MSG_IsOverflowed( msg ) ) )", "( readIndex ) = %i", v42) )
                __debugbreak();
            }
            if ( buf.overflowed || v23 >= replicatedInstanceCount )
              break;
            p_instanceIndex = &replicatedInstances[v23].instanceIndex;
            if ( *p_instanceIndex == -1 )
            {
              Com_PrintError(29, "ScriptableMsg_ParseInstanceChanges: Received a change for a non-existing scriptable at index %u\n", v23);
              goto LABEL_71;
            }
            if ( *p_instanceIndex != v23 )
            {
              LODWORD(v45) = v23;
              LODWORD(v44) = *p_instanceIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.h", 199, ASSERT_TYPE_ASSERT, "( instance.instanceIndex ) == ( instanceIndex )", "%s == %s\n\t%i, %i", "instance.instanceIndex", "instanceIndex", v44, v45) )
                __debugbreak();
            }
            v25 = MSG_ReadBit(&buf);
            v26 = v25 != 0;
            if ( v25 && !ScriptableMsg_ReadDeltaInstanceFields(&buf, &replicatedInstances[v23]) )
            {
              Com_PrintError(29, "ScriptableMsg_ParseInstanceChanges: Error reading delta-instance fields for instance %u\n", v23);
              goto LABEL_71;
            }
            if ( !ScriptableMsg_ReadDeltaInstancePartChanges(&buf, limits, &replicatedInstances[v23], curWorld) )
            {
              Com_PrintError(29, "ScriptableMsg_ParseInstanceChanges: Error reading delta-parts for instance %u\n", v23);
              goto LABEL_71;
            }
            if ( v26 )
              ScriptableCL_ModifiedSnapshotInstance(localClientNum, &replicatedInstances[v23]);
            if ( ScriptableMsgRead_ShouldPrintMessageDebugInfo() )
              Com_Printf(6, "[Scriptable CL] Changed Instance %i. Payload %d\n", *p_instanceIndex, *((unsigned __int16 *)p_instanceIndex + 7));
            ScriptableCl_MarkReservedInstanceChanged(localClientNum, *p_instanceIndex);
            if ( buf.overflowed )
              goto LABEL_77;
          }
          Com_PrintError(29, "ScriptableMsg_ParseInstanceChanges: Received a change for an invalid index %u > %u\n", v23, replicatedInstanceCount);
LABEL_71:
          v27 = DCONST_DVARBOOL_scriptable_debug_msg_error_dump;
          if ( !DCONST_DVARBOOL_scriptable_debug_msg_error_dump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_msg_error_dump") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v27);
          if ( v27->current.enabled )
            RaiseException(0xC0000005, 0, 0, NULL);
          MSG_Discard(&buf);
        }
LABEL_77:
        v4 = curWorld;
        v28 = curWorld->replicatedInstances;
        v29 = curWorld->replicatedInstanceCount;
        v30 = GetMinBitCountForNum(limits->instanceLimit - 1);
        v31 = 1;
        v32 = -1;
        if ( v30 > 1 )
          v31 = v30;
        if ( !buf.overflowed )
        {
          while ( 1 )
          {
            if ( !MSG_ReadBit(&buf) )
              goto LABEL_113;
            if ( MSG_ReadByte(&buf) != 17 && !buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.h", 246, ASSERT_TYPE_ASSERT, "(sentinel == 17 || MSG_IsOverflowed( msg ))", (const char *)&queryFormat, "sentinel == 17 || MSG_IsOverflowed( msg )") )
              __debugbreak();
            if ( v32 != -1 && v32 >= 1 << v31 )
            {
              LODWORD(v42) = v32;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.h", 86, ASSERT_TYPE_ASSERT, "( ( ( inOutLastIndex == -1 ) || ( static_cast<uint>( inOutLastIndex ) < (1u<< instanceBitCount) ) ) )", "( inOutLastIndex ) = %i", v42) )
                __debugbreak();
            }
            if ( MSG_ReadBit(&buf) )
            {
              ++v32;
            }
            else if ( MSG_ReadBit(&buf) )
            {
              v32 += MSG_ReadBits(&buf, v31 >> 1);
            }
            else
            {
              v32 = MSG_ReadBits(&buf, v31);
            }
            if ( v32 >= 1 << v31 )
            {
              if ( buf.overflowed )
                break;
              LODWORD(v42) = v32;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.h", 79, ASSERT_TYPE_ASSERT, "( ( readIndex < ( 1u << fullBits ) || MSG_IsOverflowed( msg ) ) )", "( readIndex ) = %i", v42) )
                __debugbreak();
            }
            if ( buf.overflowed || v32 >= v29 )
              break;
            v33 = &v28[v32];
            if ( v33->instanceIndex == -1 )
            {
              Com_PrintError(29, "ScriptableMsg_ParseInstanceRemoved: Received Remove for an non-existant scriptable at index %u\n", v32);
              goto LABEL_107;
            }
            if ( ScriptableMsgRead_ShouldPrintMessageDebugInfo() )
              Com_Printf(6, "[Scriptable CL] Remove Instance %i. Payload %d\n", v33->instanceIndex, v33->payload);
            ScriptableCl_RemovedSnapshotScriptable(localClientNum, &v28[v32]);
            ScriptableCommon_ClearReplicatedInstance(&v28[v32]);
            if ( buf.overflowed )
              goto LABEL_113;
          }
          Com_PrintError(29, "ScriptableMsg_ParseInstanceRemoved: Received Remove for an out-of-range scriptable at index %u\n", v32);
LABEL_107:
          v34 = DCONST_DVARBOOL_scriptable_debug_msg_error_dump;
          if ( !DCONST_DVARBOOL_scriptable_debug_msg_error_dump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_msg_error_dump") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v34);
          if ( v34->current.enabled )
            RaiseException(0xC0000005, 0, 0, NULL);
          MSG_Discard(&buf);
        }
LABEL_113:
        v35 = v4->replicatedInstances;
        v36 = v4->replicatedInstanceCount;
        v37 = GetMinBitCountForNum(limits->instanceLimit - 1);
        v38 = 1;
        v39 = -1;
        if ( v37 > 1 )
          v38 = v37;
        if ( !buf.overflowed )
        {
          while ( 1 )
          {
            if ( !MSG_ReadBit(&buf) )
              goto LABEL_152;
            if ( MSG_ReadByte(&buf) != 19 && !buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.h", 289, ASSERT_TYPE_ASSERT, "(sentinel == 19 || MSG_IsOverflowed( msg ))", (const char *)&queryFormat, "sentinel == 19 || MSG_IsOverflowed( msg )") )
              __debugbreak();
            if ( v39 != -1 && v39 >= 1 << v38 )
            {
              LODWORD(v42) = v39;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.h", 86, ASSERT_TYPE_ASSERT, "( ( ( inOutLastIndex == -1 ) || ( static_cast<uint>( inOutLastIndex ) < (1u<< instanceBitCount) ) ) )", "( inOutLastIndex ) = %i", v42) )
                __debugbreak();
            }
            if ( MSG_ReadBit(&buf) )
            {
              ++v39;
            }
            else if ( MSG_ReadBit(&buf) )
            {
              v39 += MSG_ReadBits(&buf, v38 >> 1);
            }
            else
            {
              v39 = MSG_ReadBits(&buf, v38);
            }
            if ( v39 >= 1 << v38 )
            {
              if ( buf.overflowed )
                break;
              LODWORD(v42) = v39;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_msg_read.h", 79, ASSERT_TYPE_ASSERT, "( ( readIndex < ( 1u << fullBits ) || MSG_IsOverflowed( msg ) ) )", "( readIndex ) = %i", v42) )
                __debugbreak();
            }
            if ( buf.overflowed || v39 >= v36 )
              break;
            v40 = &v35[v39].instanceIndex;
            if ( *v40 != -1 )
            {
              Com_PrintError(29, "ScriptableMsg_ParseInstanceAdded: Received Add for an already-existing scriptable at index %u\n", v39);
              goto LABEL_146;
            }
            *v40 = v39;
            if ( !ScriptableMsg_ReadNewInstanceFields(&buf, &v35[v39]) || !ScriptableMsg_ClearInstancePartStates(limits, &v35[v39], v4) || !ScriptableMsg_ReadDeltaInstancePartChanges(&buf, limits, &v35[v39], v4) )
              goto LABEL_146;
            if ( ScriptableMsgRead_ShouldPrintMessageDebugInfo() )
              Com_Printf(6, "[Scriptable CL] Add Instance %i. Payload %d\n", *v40, *((unsigned __int16 *)v40 + 7));
            ScriptableCl_AddedSnapshotScriptable(localClientNum, &v35[v39]);
            if ( buf.overflowed )
              goto LABEL_152;
          }
          Com_PrintError(29, "ScriptableMsg_ParseInstanceAdded: Received Add for an out-of-range scriptable at index %u\n", v39);
LABEL_146:
          v41 = DCONST_DVARBOOL_scriptable_debug_msg_error_dump;
          if ( !DCONST_DVARBOOL_scriptable_debug_msg_error_dump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_msg_error_dump") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v41);
          if ( v41->current.enabled )
            RaiseException(0xC0000005, 0, 0, NULL);
          MSG_Discard(&buf);
        }
LABEL_152:
        v9 = limits;
        ScriptableMsg_ParseFixedPartChanges<ScriptableClFixedPartChangedFunctor>(&buf, limits, 0xAu, v4, &partChangedFunc);
        v5 = v52;
        if ( buf.overflowed )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14406F6A0, 6015i64, v52->readIndex);
        m_localClientNum = v49;
        v10 = v5->readIndex + 1;
        v5->readIndex = v10;
      }
      while ( v10 != v53 );
    }
    Sys_ProfEndNamedEvent();
  }
  ScriptableCommon_VerifyInstances(v4->replicatedInstances, v4->replicatedInstanceCount);
}

/*
==============
ScriptableCl_UpdateStandaloneChangedStates
==============
*/
void ScriptableCl_UpdateStandaloneChangedStates(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  unsigned int *v2; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  int v9; 
  __int64 v10; 
  int *v11; 
  int v13; 
  __int64 v15; 
  unsigned int v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  int v22; 
  void **v23; 
  __int64 v24; 
  __int64 *v25; 

  v1 = 8i64 * (int)localClientNum;
  v23 = (void **)((char *)s_scriptableCl_reservedInstancesChangedBits + v1);
  if ( !*(unsigned int **)((char *)s_scriptableCl_reservedInstancesChangedBits + v1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3150, ASSERT_TYPE_ASSERT, "(s_scriptableCl_reservedInstancesChangedBits[localClientNum])", (const char *)&queryFormat, "s_scriptableCl_reservedInstancesChangedBits[localClientNum]") )
    __debugbreak();
  v25 = (__int64 *)((char *)s_scriptableCl_serverFixedPartsChangedBits + v1);
  if ( !*(unsigned int **)((char *)&s_scriptableCl_serverFixedPartsChangedBits[0].partBitsArray + v1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3151, ASSERT_TYPE_ASSERT, "(s_scriptableCl_serverFixedPartsChangedBits[localClientNum].partBitsArray)", (const char *)&queryFormat, "s_scriptableCl_serverFixedPartsChangedBits[localClientNum].partBitsArray") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF008008, "ScriptableCl_UpdateNonEntityChangedInstances");
  Sys_ProfBeginNamedEvent(0xFFC0C0C0, "Update Reserved Instances");
  v2 = *(unsigned int **)((char *)s_scriptableCl_reservedInstancesChangedBits + v1);
  v3 = s_scriptableCl_serverReservedInstancesChangedArraySize;
  v4 = 0;
  v22 = 0;
  LODWORD(v1) = 0;
  if ( s_scriptableCl_serverReservedInstancesChangedArraySize )
    v4 = *v2;
  while ( v4 )
  {
LABEL_12:
    v5 = __lzcnt(v4);
    v6 = v5 + 32 * v1;
    if ( v5 >= 0x20 )
    {
      LODWORD(v18) = 32;
      LODWORD(v17) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    if ( (v4 & (0x80000000 >> v5)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v4 &= ~(0x80000000 >> v5);
    ScriptableCommon_AssertCountsInitialized();
    if ( v6 >= g_scriptableWorldCounts.runtimeInstanceCount )
    {
      ScriptableCommon_AssertCountsInitialized();
      LODWORD(v20) = g_scriptableWorldCounts.runtimeInstanceCount;
      LODWORD(v19) = v5 + 32 * v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3162, ASSERT_TYPE_ASSERT, "( scriptableIndex ) < ( ScriptableCommon_GetReservedInstanceCount() )", "%s < %s\n\t%i, %i", "scriptableIndex", "ScriptableCommon_GetReservedInstanceCount()", v19, v20) )
        __debugbreak();
    }
    ScriptableCl_ProcessChangedServerState(localClientNum, v6);
  }
  while ( 1 )
  {
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= v3 )
      break;
    v4 = v2[v1];
    if ( v4 )
      goto LABEL_12;
  }
  memset_0(*v23, 0, 4i64 * s_scriptableCl_serverReservedInstancesChangedArraySize);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFC0C0C0, "Update Fixed Parts");
  v7 = *v25;
  v24 = *v25;
  v8 = s_scriptableCl_serverFixedPartsChangedArraySize;
  if ( s_scriptableCl_serverFixedPartsChangedArraySize )
  {
    v9 = -1;
    v10 = 0i64;
    do
    {
      v11 = (int *)(v7 + 4 * v10);
      _EAX = *v11;
      if ( *v11 )
      {
        v13 = 32 * v10;
        do
        {
          __asm { tzcnt   edi, eax }
          if ( (_EAX & (1 << _EDI)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3187, ASSERT_TYPE_ASSERT, "(bits & bit)", (const char *)&queryFormat, "bits & bit") )
            __debugbreak();
          *v11 &= ~(1 << _EDI);
          v15 = (unsigned int)(v13 + _EDI);
          if ( (unsigned int)v15 >= s_scriptableCl_reverseFixedWorldMapCount )
          {
            LODWORD(v18) = s_scriptableCl_reverseFixedWorldMapCount;
            LODWORD(v17) = v13 + _EDI;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3192, ASSERT_TYPE_ASSERT, "(unsigned)( partWorldIndex ) < (unsigned)( s_scriptableCl_reverseFixedWorldMapCount )", "partWorldIndex doesn't index s_scriptableCl_reverseFixedWorldMapCount\n\t%i not in [0, %i)", v17, v18) )
              __debugbreak();
          }
          v16 = s_scriptableCl_reverseFixedWorldMap[v15];
          ScriptableCommon_AssertCountsInitialized();
          if ( v16 >= g_scriptableWorldCounts.serverInstanceCount )
          {
            ScriptableCommon_AssertCountsInitialized();
            LODWORD(v18) = g_scriptableWorldCounts.serverInstanceCount;
            LODWORD(v17) = v16;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3194, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v17, v18) )
              __debugbreak();
          }
          ScriptableCommon_AssertCountsInitialized();
          if ( v16 < g_scriptableWorldCounts.runtimeInstanceCount )
          {
            ScriptableCommon_AssertCountsInitialized();
            LODWORD(v20) = g_scriptableWorldCounts.runtimeInstanceCount;
            LODWORD(v19) = v16;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3197, ASSERT_TYPE_ASSERT, "( scriptableIndex ) >= ( ScriptableCommon_GetReservedInstanceCount() )", "%s >= %s\n\t%i, %i", "scriptableIndex", "ScriptableCommon_GetReservedInstanceCount()", v19, v20) )
              __debugbreak();
          }
          if ( v9 != v16 )
          {
            v9 = v16;
            ScriptableCl_ProcessChangedServerState(localClientNum, v16);
          }
          _EAX = *v11;
        }
        while ( *v11 );
        v8 = s_scriptableCl_serverFixedPartsChangedArraySize;
        LODWORD(v10) = v22;
        v7 = v24;
      }
      v10 = (unsigned int)(v10 + 1);
      v22 = v10;
    }
    while ( (unsigned int)v10 < v8 );
  }
  Sys_ProfEndNamedEvent();
  Sys_ProfEndNamedEvent();
}

/*
==============
ScriptableCl_UpdateStandaloneEvents
==============
*/
void ScriptableCl_UpdateStandaloneEvents(const LocalClientNum_t localClientNum, ScriptableUpdateBitset *r_updateList, const unsigned int updateWordCount)
{
  int v10; 
  __int64 v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  void *retaddr; 
  unsigned int perFrameUpdateCount; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-48h], xmm6 }
  Sys_ProfBeginNamedEvent(0xFFFF0000, "ScriptableCl_UpdateStandaloneEvents");
  v10 = 0;
  perFrameUpdateCount = r_updateList->perFrameUpdateCount;
  CG_GetLocalClientGlobals(localClientNum);
  *(double *)&_XMM0 = Com_GetTimeScale();
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, dword ptr [rbx+65E4h]
    vmulss  xmm2, xmm1, cs:__real@3a83126f
    vmulss  xmm6, xmm0, xmm2
  }
  if ( updateWordCount > 0x3D09 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3234, ASSERT_TYPE_ASSERT, "( updateWordCount ) <= ( r_updateList.perFrameUpdate.WORD_COUNT )", "%s <= %s\n\t%i, %i", "updateWordCount", "r_updateList.perFrameUpdate.WORD_COUNT", updateWordCount, 15625) )
    __debugbreak();
  LODWORD(v15) = 0;
  v16 = 0;
  if ( updateWordCount )
    v16 = r_updateList->perFrameUpdate.array[0];
  while ( v16 )
  {
LABEL_9:
    v17 = __lzcnt(v16);
    v18 = v17 + 32 * v15;
    if ( v17 >= 0x20 )
    {
      LODWORD(v22) = 32;
      LODWORD(v21) = v17;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    if ( (v16 & (0x80000000 >> v17)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v16 &= ~(0x80000000 >> v17);
    if ( !ScriptableCl_GetInstanceInUse(localClientNum, v18) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3240, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex )") )
      __debugbreak();
    if ( ScriptableCl_GetInstanceShouldHaveEntity(localClientNum, v18) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3241, ASSERT_TYPE_ASSERT, "(!ScriptableCl_GetInstanceShouldHaveEntity( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "!ScriptableCl_GetInstanceShouldHaveEntity( localClientNum, scriptableIndex )") )
      __debugbreak();
    __asm { vmovaps xmm2, xmm6; deltaTime }
    if ( !ScriptableCl_UpdateInstanceEvents(localClientNum, v18, *(const float *)&_XMM2) )
    {
      ScriptableCl_MarkPerFrameUpdateRequired(r_updateList, v18, 0);
      bitarray_base<bitarray<500000>>::setBit(&r_updateList->perFrameUpdateCompleted, v18);
    }
    ++v10;
  }
  while ( 1 )
  {
    v15 = (unsigned int)(v15 + 1);
    if ( (unsigned int)v15 >= updateWordCount )
      break;
    v16 = r_updateList->perFrameUpdate.array[v15];
    if ( v16 )
      goto LABEL_9;
  }
  Sys_ProfEndNamedEvent();
  __asm { vmovaps xmm6, [rsp+98h+var_48] }
  if ( v10 != perFrameUpdateCount )
  {
    LODWORD(v24) = perFrameUpdateCount;
    LODWORD(v23) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 3258, ASSERT_TYPE_ASSERT, "( updateCount ) == ( expectedUpdateCount )", "%s == %s\n\t%i, %i", "updateCount", "expectedUpdateCount", v23, v24) )
      __debugbreak();
  }
}

/*
==============
ScriptableCl_UpdateStandaloneServerInstances_VerifyUpdateList
==============
*/
void ScriptableCl_UpdateStandaloneServerInstances_VerifyUpdateList(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  unsigned int serverInstanceCount; 
  unsigned int runtimeInstanceCount; 
  unsigned int v4; 
  bitarray<500000> *p_perFrameUpdate; 
  unsigned __int64 v6; 
  const ScriptableDef *def; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  unsigned int v9; 
  unsigned __int64 v10; 
  bool v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned int v14; 
  __int64 v15; 

  v1 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF000000, "ScriptableCl_UpdateStandaloneServerInstances_VerifyUpdateList");
  if ( (unsigned int)v1 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2755, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableStandaloneServerUpdateLists ) ) + 0 ) )", "localClientNum doesn't index ARRAY_COUNT( s_scriptableStandaloneServerUpdateLists )\n\t%i not in [0, %i)", v1, 2) )
    __debugbreak();
  v15 = v1;
  ScriptableCommon_AssertCountsInitialized();
  serverInstanceCount = g_scriptableWorldCounts.serverInstanceCount;
  v14 = g_scriptableWorldCounts.serverInstanceCount;
  ScriptableCommon_AssertCountsInitialized();
  runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
  if ( s_scriptableStandaloneServerUpdateLists[v1].perFrameMoveCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2761, ASSERT_TYPE_ASSERT, "( r_updateList.perFrameMoveCount ) == ( 0 )", "%s == %s\n\t%i, %i", "r_updateList.perFrameMoveCount", "0", s_scriptableStandaloneServerUpdateLists[v1].perFrameMoveCount, 0i64) )
    __debugbreak();
  v4 = s_verifyIteratorStart + runtimeInstanceCount;
  if ( v4 < serverInstanceCount )
  {
    p_perFrameUpdate = &s_scriptableStandaloneServerUpdateLists[v1].perFrameUpdate;
    v6 = v4;
    while ( ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v1, v4) )
    {
      if ( !ScriptableCl_IsLinked((const LocalClientNum_t)v1, v4) )
      {
        if ( v4 >= 0x7A120 )
        {
          LODWORD(v13) = 500000;
          LODWORD(v12) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v12, v13) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v4 & 0x1F)) & p_perFrameUpdate->array[v6 >> 5]) == 0 )
          goto LABEL_68;
        LODWORD(v13) = v4;
        if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2785, ASSERT_TYPE_ASSERT, "(!r_updateList.perFrameUpdate.testBit( scriptableIndex ))", "%s\n\tStandalone Scriptable %i should not have been updated, (not active) but was in the update list", "!r_updateList.perFrameUpdate.testBit( scriptableIndex )", v13) )
          goto LABEL_68;
LABEL_34:
        __debugbreak();
        goto LABEL_68;
      }
      def = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v1, v4)->def;
      if ( !def )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2790, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 363, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
          __debugbreak();
      }
      if ( (def->flags & 0x2000) != 0 )
      {
        InstanceCommonContext = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v1, v4);
        if ( (*((_BYTE *)InstanceCommonContext + 60) & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2799, ASSERT_TYPE_ASSERT, "(!commonContext.needsInitialization)", (const char *)&queryFormat, "!commonContext.needsInitialization") )
          __debugbreak();
        if ( (*((_BYTE *)InstanceCommonContext + 60) & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2800, ASSERT_TYPE_ASSERT, "(!commonContext.needsShutdown)", (const char *)&queryFormat, "!commonContext.needsShutdown") )
          __debugbreak();
        if ( (def->flags & 2) == 0 )
        {
          LODWORD(v12) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2802, ASSERT_TYPE_ASSERT, "( ScriptableDef_HasServerInstance( def ) )", "Shared instances should have a server instance. Scriptable %i (%s) is meant to be client-only.", v12, def->name) )
            __debugbreak();
        }
        if ( ScriptableCl_GetUpdateRequiredForNonEntityScriptable((const LocalClientNum_t)v1, v4) )
        {
          if ( v4 >= 0x7A120 )
          {
            LODWORD(v13) = 500000;
            LODWORD(v12) = v4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v12, v13) )
              __debugbreak();
          }
          v9 = 0x80000000 >> (v4 & 0x1F);
          v10 = v6 >> 5;
          if ( (v9 & p_perFrameUpdate->array[v6 >> 5]) == 0 )
          {
            if ( v4 >= 0x7A120 )
            {
              LODWORD(v13) = 500000;
              LODWORD(v12) = v4;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v12, v13) )
                __debugbreak();
            }
            if ( (v9 & s_scriptableStandaloneServerUpdateLists[v15].perFrameUpdateCompleted.array[v10]) == 0 )
            {
              LODWORD(v13) = v4;
              v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2807, ASSERT_TYPE_ASSERT, "(r_updateList.perFrameUpdate.testBit( scriptableIndex ) || r_updateList.perFrameUpdateCompleted.testBit( scriptableIndex ))", "%s\n\tStandalone Scriptable %i (%s) should have been updated, but was not in the update list", "r_updateList.perFrameUpdate.testBit( scriptableIndex ) || r_updateList.perFrameUpdateCompleted.testBit( scriptableIndex )", v13, def->name);
LABEL_59:
              if ( v11 )
                __debugbreak();
            }
          }
        }
        else
        {
          if ( v4 >= 0x7A120 )
          {
            LODWORD(v13) = 500000;
            LODWORD(v12) = v4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v12, v13) )
              __debugbreak();
          }
          v9 = 0x80000000 >> (v4 & 0x1F);
          v10 = v6 >> 5;
          if ( (v9 & p_perFrameUpdate->array[v6 >> 5]) != 0 )
          {
            LODWORD(v13) = v4;
            v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2811, ASSERT_TYPE_ASSERT, "(!r_updateList.perFrameUpdate.testBit( scriptableIndex ))", "%s\n\tStandalone Scriptable %i (%s) should not have been updated, but was in the update list", "!r_updateList.perFrameUpdate.testBit( scriptableIndex )", v13, def->name);
            goto LABEL_59;
          }
        }
        if ( v4 >= 0x7A120 )
        {
          LODWORD(v13) = 500000;
          LODWORD(v12) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v12, v13) )
            __debugbreak();
        }
        if ( (v9 & s_scriptableStandaloneServerUpdateLists[v15].perFrameMove.array[v10]) != 0 )
        {
          LODWORD(v13) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2815, ASSERT_TYPE_ASSERT, "(!r_updateList.perFrameMove.testBit( scriptableIndex ))", "%s\n\tStandalone Scriptable %i (%s) should not have been on the move list", "!r_updateList.perFrameMove.testBit( scriptableIndex )", v13, def->name) )
            __debugbreak();
        }
        serverInstanceCount = v14;
        goto LABEL_68;
      }
      if ( v4 >= 0x7A120 )
      {
        LODWORD(v13) = 500000;
        LODWORD(v12) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v12, v13) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (v4 & 0x1F)) & p_perFrameUpdate->array[v6 >> 5]) != 0 )
      {
        LODWORD(v13) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2794, ASSERT_TYPE_ASSERT, "(!r_updateList.perFrameUpdate.testBit( scriptableIndex ))", "%s\n\tStandalone Scriptable %i (%s) should not have been updated, but was in the update list", "!r_updateList.perFrameUpdate.testBit( scriptableIndex )", v13, def->name) )
          goto LABEL_34;
      }
LABEL_68:
      ++v4;
      ++v6;
      if ( v4 >= serverInstanceCount )
        goto LABEL_69;
    }
    if ( v4 >= 0x7A120 )
    {
      LODWORD(v13) = 500000;
      LODWORD(v12) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v12, v13) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v4 & 0x1F)) & p_perFrameUpdate->array[v6 >> 5]) == 0 )
      goto LABEL_68;
    LODWORD(v13) = v4;
    if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2779, ASSERT_TYPE_ASSERT, "(!r_updateList.perFrameUpdate.testBit( scriptableIndex ))", "%s\n\tStandalone Scriptable %i should not have been updated, (not in use) but was in the update list", "!r_updateList.perFrameUpdate.testBit( scriptableIndex )", v13) )
      goto LABEL_68;
    goto LABEL_34;
  }
LABEL_69:
  Sys_ProfEndNamedEvent();
}

/*
==============
ScriptableCl_Update_AssertInitializedScriptable
==============
*/
void ScriptableCl_Update_AssertInitializedScriptable(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  ScriptableInstanceContextSecure *InstanceCommonContext; 

  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  if ( (*((_BYTE *)InstanceCommonContext + 60) & 4) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2110, ASSERT_TYPE_ASSERT, "(context.isInitialized)", (const char *)&queryFormat, "context.isInitialized") )
    __debugbreak();
  if ( !InstanceCommonContext->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2111, ASSERT_TYPE_ASSERT, "(context.def != nullptr)", (const char *)&queryFormat, "context.def != nullptr") )
    __debugbreak();
  if ( (*((_BYTE *)InstanceCommonContext + 60) & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2112, ASSERT_TYPE_ASSERT, "(!context.needsInitialization)", (const char *)&queryFormat, "!context.needsInitialization") )
    __debugbreak();
  if ( !InstanceCommonContext->initializationCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2113, ASSERT_TYPE_ASSERT, "(context.initializationCount != 0)", (const char *)&queryFormat, "context.initializationCount != 0") )
    __debugbreak();
  if ( InstanceCommonContext->linkedObjectType == SCRIPTABLE_LINK_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2114, ASSERT_TYPE_ASSERT, "(context.linkedObjectType != SCRIPTABLE_LINK_NONE)", (const char *)&queryFormat, "context.linkedObjectType != SCRIPTABLE_LINK_NONE") )
    __debugbreak();
}

/*
==============
ScriptableCl_Update_InitInstance
==============
*/
void ScriptableCl_Update_InitInstance(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  const ScriptableDef *def; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  unsigned int j; 
  ScriptableCollisionClientContext *InstanceCollisionContext; 
  unsigned int i; 
  int flags; 

  def = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2175, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  if ( (*((_BYTE *)InstanceCommonContext + 60) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2179, ASSERT_TYPE_ASSERT, "(r_commonContext.needsInitialization)", (const char *)&queryFormat, "r_commonContext.needsInitialization") )
    __debugbreak();
  if ( (*((_BYTE *)InstanceCommonContext + 60) & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2180, ASSERT_TYPE_ASSERT, "(!r_commonContext.needsShutdown)", (const char *)&queryFormat, "!r_commonContext.needsShutdown") )
    __debugbreak();
  if ( InstanceCommonContext->initializationCount )
  {
    if ( ScriptableCl_GetLinkType(localClientNum, scriptableIndex) == SCRIPTABLE_LINK_DYNENT )
      ScriptableCl_Update_RestoreDynEntModel(localClientNum, scriptableIndex, InstanceCommonContext);
    InstanceCollisionContext = ScriptableCl_GetInstanceCollisionContext(localClientNum, scriptableIndex);
    if ( (InstanceCollisionContext->collisionActiveFlags & 0x20) != 0 )
      ScriptableCl_CreateCollision(localClientNum, scriptableIndex, NULL, InstanceCollisionContext->clipmapCModelIndex, InstanceCollisionContext->neverMoves, InstanceCollisionContext->canPush, InstanceCollisionContext->canTouch, InstanceCollisionContext->model);
    for ( i = 0; i < def->numParts; ++i )
      ScriptableCl_ReenterInstancePart(localClientNum, scriptableIndex, &def->parts[i]);
  }
  else
  {
    for ( j = 0; j < def->numParts; ++j )
      ScriptableCl_InitInstancePart(localClientNum, scriptableIndex, &def->parts[j]);
    if ( localClientNum == LOCAL_CLIENT_0 )
    {
      Scriptable_Analytics_AddScriptableCount(Scriptable_Analytics_Zone_C_Clipmap, 1);
      Scriptable_Analytics_AddPartCount(Scriptable_Analytics_Zone_C_Clipmap, def->numParts);
      Scriptable_Analytics_AddRuntimeMemoryCount(Scriptable_Analytics_Zone_C_Clipmap, def->eventStreamSizeRequiredClient);
    }
  }
  *((_BYTE *)InstanceCommonContext + 60) &= ~1u;
  *((_BYTE *)InstanceCommonContext + 60) |= 4u;
  InstanceCommonContext->initializationCount = 1;
  flags = def->flags;
  if ( (flags & 4) != 0 && (flags & 0x2000) != 0 )
    ScriptableCl_UpdateSharedInstanceStates(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_Update_RestoreDynEntModel
==============
*/
void ScriptableCl_Update_RestoreDynEntModel(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, ScriptableInstanceContextSecure *r_context)
{
  __int64 v3; 
  unsigned int LinkObject; 
  const DynEntityDef *Def; 
  unsigned __int16 v8; 
  unsigned __int16 v9; 
  DynEntityClient *v10; 
  ScriptableDataType dataType; 
  const XCompositeModelDef *compositeModel; 
  const char *v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  int LinkType; 
  __int64 v18; 

  v3 = localClientNum;
  if ( ScriptableCl_GetLinkType(localClientNum, scriptableIndex) != SCRIPTABLE_LINK_DYNENT )
  {
    LinkType = (unsigned __int8)ScriptableCl_GetLinkType((const LocalClientNum_t)v3, scriptableIndex);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2124, ASSERT_TYPE_ASSERT, "( ScriptableCl_GetLinkType( localClientNum, scriptableIndex ) ) == ( SCRIPTABLE_LINK_DYNENT )", "%s == %s\n\t%u, %u", "ScriptableCl_GetLinkType( localClientNum, scriptableIndex )", "SCRIPTABLE_LINK_DYNENT", LinkType, 2) )
      __debugbreak();
  }
  LinkObject = ScriptableCl_GetLinkObject((const LocalClientNum_t)v3, scriptableIndex);
  Def = DynEnt_GetDef(LinkObject, DYNENT_BASIS_MODEL);
  if ( !Def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 334, ASSERT_TYPE_ASSERT, "(dynEntDef)", (const char *)&queryFormat, "dynEntDef") )
    __debugbreak();
  if ( Def->clientId[v3] == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 335, ASSERT_TYPE_ASSERT, "(dynEntDef->clientId[localClientNum] != 0xFFFF)", (const char *)&queryFormat, "dynEntDef->clientId[localClientNum] != DYNENT_INVALID_CLIENT_ID") )
    __debugbreak();
  v8 = Def->clientId[v3];
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v15) = 2;
    LODWORD(v14) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  v9 = g_dynEntClientEntsAllocCount[v3][0];
  if ( v8 >= v9 )
  {
    LODWORD(v15) = v9;
    LODWORD(v14) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientId ) < (unsigned)( g_dynEntClientEntsAllocCount[localClientNum][basis] )", "clientId doesn't index g_dynEntClientEntsAllocCount[localClientNum][basis]\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  if ( !g_dynEntClientLists[v3][0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dynentity\\dynentity_client.h", 325, ASSERT_TYPE_ASSERT, "(g_dynEntClientLists[localClientNum][basis])", (const char *)&queryFormat, "g_dynEntClientLists[localClientNum][basis]") )
    __debugbreak();
  v10 = &g_dynEntClientLists[v3][0][v8];
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2128, ASSERT_TYPE_ASSERT, "(dynEntClient)", (const char *)&queryFormat, "dynEntClient") )
    __debugbreak();
  if ( r_context->dataType == SCRIPTABLE_DATA_TYPE_XCOMPOSITEMODEL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2129, ASSERT_TYPE_ASSERT, "(r_context.dataType != SCRIPTABLE_DATA_TYPE_XCOMPOSITEMODEL)", "%s\n\tComposite model not supported for SCRIPTABLE_LINK_DYNENT", "r_context.dataType != SCRIPTABLE_DATA_TYPE_XCOMPOSITEMODEL") )
    __debugbreak();
  dataType = r_context->dataType;
  if ( v10->activeModel )
  {
    if ( dataType != SCRIPTABLE_DATA_TYPE_XMODEL )
    {
      LODWORD(v18) = 1;
      LODWORD(v16) = (unsigned __int8)dataType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2142, ASSERT_TYPE_ASSERT, "( r_context.dataType ) == ( SCRIPTABLE_DATA_TYPE_XMODEL )", "%s == %s\n\t%u, %u", "r_context.dataType", "SCRIPTABLE_DATA_TYPE_XMODEL", v16, v18) )
        __debugbreak();
    }
    compositeModel = r_context->data.compositeModel;
    if ( compositeModel != (const XCompositeModelDef *)v10->activeModel )
    {
      v13 = compositeModel ? compositeModel->name : "null";
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2143, ASSERT_TYPE_ASSERT, "(r_context.data.model == dynEntClient->activeModel)", "%s\n\tMismatch between (non-null) dynEnt activeModel (%s) and scriptable context model (%s) on reinit.", "r_context.data.model == dynEntClient->activeModel", v10->activeModel->name, v13) )
        __debugbreak();
    }
  }
  else if ( dataType == SCRIPTABLE_DATA_TYPE_XMODEL )
  {
    if ( r_context->data.compositeModel )
      ScriptableCl_UpdateModel((const LocalClientNum_t)v3, scriptableIndex, *((_BYTE *)r_context + 61) & 1);
  }
}

/*
==============
ScriptableCl_ValidateChecksum
==============
*/
void ScriptableCl_ValidateChecksum(const LocalClientNum_t localClientNum, const unsigned __int64 changeReadIndex, const unsigned int svPartChecksum, const unsigned int svInstanceChecksum, const char *const debugText)
{
  __int64 v5; 
  __int64 v6; 
  __int64 v10; 
  unsigned __int64 readIndex; 
  ScriptableCompleteState *v12; 
  ScriptableReplicatedLimits *v13; 
  unsigned int v14; 
  ScriptablePartWorldState *p_partWorldState; 
  __int64 v16; 
  unsigned int v17; 
  ScriptablePartData *partData; 
  __int64 data; 
  unsigned int v20; 
  __int64 v21; 
  ScriptableReplicatedInstance *i; 
  __int64 instanceIndex_low; 
  unsigned int v24; 
  char *fmt; 
  __int64 v26; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  int v31; 
  __int64 v32; 
  __int64 v33; 

  v5 = localClientNum;
  v6 = 2i64;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v31 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 337, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_changeQueue ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_changeQueue\n\t%i not in [0, %i)", localClientNum, v31) )
      __debugbreak();
  }
  v10 = v5;
  readIndex = s_scriptableCl_changeQueue[v5].readIndex;
  if ( changeReadIndex == readIndex )
  {
    if ( !s_scriptableMyChanges )
    {
      if ( (unsigned int)v5 >= 2 )
      {
        LODWORD(v30) = 2;
        LODWORD(v26) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4213, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_scriptableCl_worldCurrent ) ) + 0 ) )", "localClientNum doesn't index s_scriptableCl_worldCurrent\n\t%i not in [0, %i)", v26, v30) )
          __debugbreak();
      }
      if ( !s_scriptableCl_worldCurrent[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4214, ASSERT_TYPE_ASSERT, "(s_scriptableCl_worldCurrent[localClientNum] != nullptr)", (const char *)&queryFormat, "s_scriptableCl_worldCurrent[localClientNum] != nullptr") )
        __debugbreak();
      v12 = s_scriptableCl_worldCurrent[v5];
      v13 = &g_scriptableCl_replicatedLimits;
      v14 = 0;
      p_partWorldState = &v12->partWorldState;
      do
      {
        v16 = v13->partWorldLimits[0];
        v17 = ~v14;
        partData = p_partWorldState->groups[0].partData;
        if ( v13->partWorldLimits[0] )
        {
          do
          {
            data = (partData++)->data;
            v17 = (v17 >> 8) ^ g_crc32Table[data ^ (unsigned __int8)v17];
            --v16;
          }
          while ( v16 );
        }
        p_partWorldState = (ScriptablePartWorldState *)((char *)p_partWorldState + 8);
        v13 = (ScriptableReplicatedLimits *)((char *)v13 + 4);
        v14 = ~v17;
        --v6;
      }
      while ( v6 );
      v20 = -1;
      v21 = 32i64 * v12->replicatedInstanceCount;
      for ( i = v12->replicatedInstances; v21; --v21 )
      {
        instanceIndex_low = LOBYTE(i->instanceIndex);
        i = (ScriptableReplicatedInstance *)((char *)i + 1);
        v20 = (v20 >> 8) ^ g_crc32Table[instanceIndex_low ^ (unsigned __int8)v20];
      }
      v24 = ~v20;
      if ( v14 != svPartChecksum )
      {
        LODWORD(fmt) = svPartChecksum;
        Com_PrintError(29, "ScriptableCl_ValidateChecksum (%s): Part state out of sync with server; %x vs %x. Write %zu Read %zu Start %zu\n", debugText, v14, fmt, s_scriptableCl_changeQueue[v10].writeIndex, s_scriptableCl_changeQueue[v10].readIndex, s_scriptableCl_changeQueue[v10].startIndex);
        LODWORD(v32) = svPartChecksum;
        LODWORD(v28) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4249, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Part state out of sync with server; Cl %x vs Sv %x", v28, v32) )
          __debugbreak();
      }
      if ( v24 != svInstanceChecksum )
      {
        LODWORD(fmt) = svInstanceChecksum;
        Com_PrintError(29, "ScriptableCl_ValidateChecksum (%s): Instance state out of sync with server; %x vs %x. Write %zu Read %zu Start %zu\n", debugText, v24, fmt, s_scriptableCl_changeQueue[v10].writeIndex, s_scriptableCl_changeQueue[v10].readIndex, s_scriptableCl_changeQueue[v10].startIndex);
        LODWORD(v33) = svInstanceChecksum;
        LODWORD(v29) = v24;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 4254, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Instance state out of sync with server; Cl %x vs Sv %x\n", v29, v33) )
          __debugbreak();
      }
    }
  }
  else
  {
    Com_Printf(29, "ScriptableCl_ValidateChecksum (%s): Skipping, already read past snapshot; Read Snap %zu vs Queue %zu. Write %zu, Start %zu\n", debugText, changeReadIndex, readIndex, s_scriptableCl_changeQueue[v10].writeIndex, s_scriptableCl_changeQueue[v10].startIndex);
  }
}

/*
==============
ScriptableCl_ValidateWeaponHandleIndex
==============
*/
__int64 ScriptableCl_ValidateWeaponHandleIndex(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const unsigned int weaponHandleIndex, bool warnIfInvalid)
{
  CgWeaponMap *Instance; 

  if ( !weaponHandleIndex )
  {
    if ( warnIfInvalid )
    {
      ScritpableCl_WarnOnInvalidWeaponHandleIndex(localClientNum, scriptableIndex, 0);
      return 0i64;
    }
    return 0i64;
  }
  Instance = CgWeaponMap::GetInstance(localClientNum);
  if ( !BgWeaponMap::IsEntryValid(Instance, weaponHandleIndex) )
  {
    if ( warnIfInvalid )
      ScritpableCl_WarnOnInvalidWeaponHandleIndex(localClientNum, scriptableIndex, weaponHandleIndex);
    return 0i64;
  }
  return weaponHandleIndex;
}

/*
==============
ScritpableCl_WarnOnInvalidWeaponHandleIndex
==============
*/
void ScritpableCl_WarnOnInvalidWeaponHandleIndex(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const unsigned int weaponHandleIndex)
{
  CgWeaponMap **v4; 
  BgWeaponMap *v6; 
  char *fmt; 

  v4 = &CgWeaponMap::ms_instance[localClientNum];
  if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v6 = *v4;
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client.cpp", 2617, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  BgWeaponMap::PrintMap(v6);
  LODWORD(fmt) = weaponHandleIndex;
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14406BD80, 6455i64, scriptableIndex, fmt);
}

/*
==============
ScriptableInstanceContextSecure::SetOrigin
==============
*/
void ScriptableInstanceContextSecure::SetOrigin(ScriptableInstanceContextSecure *this, const unsigned int scriptableIndex, const vec3_t *newOrigin)
{
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  __int64 v19; 

  _RBX = newOrigin;
  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.runtimeInstanceCount )
  {
    this->origin.v[0] = _RBX->v[0];
    this->origin.v[1] = _RBX->v[1];
    this->origin.v[2] = _RBX->v[2];
  }
  else
  {
    __asm { vmovss  xmm0, dword ptr [rbx] }
    v7 = s_scriptable_aab_X;
    v8 = s_scriptable_aab_Z;
    __asm { vmovss  [rsp+48h+arg_8], xmm0 }
    v9 = s_scriptable_aab_Y;
    if ( (v16 & 0x7F800000) == 2139095040 )
      goto LABEL_11;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+4]
      vmovss  [rsp+48h+arg_8], xmm0
    }
    if ( (v17 & 0x7F800000) == 2139095040 )
      goto LABEL_11;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+8]
      vmovss  [rsp+48h+arg_8], xmm0
    }
    if ( (v18 & 0x7F800000) == 2139095040 )
    {
LABEL_11:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 398, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
        __debugbreak();
    }
    v12 = ((_DWORD)this + 32) ^ LODWORD(_RBX->v[2]);
    v13 = LODWORD(_RBX->v[0]) ^ ((_DWORD)this + 32) ^ ~v7;
    v14 = v13 ^ ((_DWORD)this + 32) ^ LODWORD(_RBX->v[1]);
    LODWORD(this->origin.v[0]) = v13;
    v15 = v9 ^ v14;
    LODWORD(this->origin.v[1]) = v15;
    LODWORD(this->origin.v[2]) = v8 ^ v15 ^ v12;
    memset(&v19, 0, sizeof(v19));
  }
}

