/*
==============
ScriptableSv_IsInitialized
==============
*/

bool __fastcall ScriptableSv_IsInitialized()
{
  return ?ScriptableSv_IsInitialized@@YA_NXZ();
}

/*
==============
ScriptableSv_Init
==============
*/

void __fastcall ScriptableSv_Init(bool isFrontendServer)
{
  ?ScriptableSv_Init@@YAX_N@Z(isFrontendServer);
}

/*
==============
ScriptableSv_GetPartWorldState
==============
*/

const ScriptablePartWorldState *__fastcall ScriptableSv_GetPartWorldState()
{
  return ?ScriptableSv_GetPartWorldState@@YAAEBUScriptablePartWorldState@@XZ();
}

/*
==============
ScriptableSv_GetLootActive
==============
*/

bool __fastcall ScriptableSv_GetLootActive()
{
  return ?ScriptableSv_GetLootActive@@YA_NXZ();
}

/*
==============
ScriptableSv_PickLootItem
==============
*/

const char *__fastcall ScriptableSv_PickLootItem(const char *typeName, int rarityMin, int rarityMax, const char *setName)
{
  return ?ScriptableSv_PickLootItem@@YAPEBDPEBDHH0@Z(typeName, rarityMin, rarityMax, setName);
}

/*
==============
ScriptableSv_InvalidateStatesEventTracking
==============
*/

void __fastcall ScriptableSv_InvalidateStatesEventTracking(const ScriptableWorldType worldType, const unsigned int startIndex, const unsigned int numParts)
{
  ?ScriptableSv_InvalidateStatesEventTracking@@YAXW4ScriptableWorldType@@II@Z(worldType, startIndex, numParts);
}

/*
==============
ScriptableSv_GetQuestPointIndex
==============
*/

unsigned __int16 __fastcall ScriptableSv_GetQuestPointIndex(const unsigned __int16 questPointIndex)
{
  return ?ScriptableSv_GetQuestPointIndex@@YAGG@Z(questPointIndex);
}

/*
==============
ScriptableSv_RunFrame
==============
*/

void ScriptableSv_RunFrame(void)
{
  ?ScriptableSv_RunFrame@@YAXXZ();
}

/*
==============
ScriptableSv_GetLootItemDef
==============
*/

const BG_SpawnGroup_Loot_ItemDef *__fastcall ScriptableSv_GetLootItemDef(const unsigned int scriptableIndex)
{
  return ?ScriptableSv_GetLootItemDef@@YAPEBUBG_SpawnGroup_Loot_ItemDef@@I@Z(scriptableIndex);
}

/*
==============
ScriptableSv_InitServerInstancesMyChanges
==============
*/

void __fastcall ScriptableSv_InitServerInstancesMyChanges(const ScriptableMyChangesSaveState *const savedScriptableState)
{
  ?ScriptableSv_InitServerInstancesMyChanges@@YAXQEBUScriptableMyChangesSaveState@@@Z(savedScriptableState);
}

/*
==============
ScriptableSv_RemoveStandaloneInstance
==============
*/

void __fastcall ScriptableSv_RemoveStandaloneInstance(const unsigned int scriptableIndex)
{
  ?ScriptableSv_RemoveStandaloneInstance@@YAXI@Z(scriptableIndex);
}

/*
==============
ScriptableSv_RemoveFromEventUpdateList
==============
*/

void __fastcall ScriptableSv_RemoveFromEventUpdateList(const unsigned int scriptableIndex)
{
  ?ScriptableSv_RemoveFromEventUpdateList@@YAXI@Z(scriptableIndex);
}

/*
==============
ScriptableSv_GetLootChecksum
==============
*/

unsigned int __fastcall ScriptableSv_GetLootChecksum()
{
  return ?ScriptableSv_GetLootChecksum@@YAIXZ();
}

/*
==============
ScriptableSv_StandaloneSpawnInstance
==============
*/

bool __fastcall ScriptableSv_StandaloneSpawnInstance(const char *defName, const vec3_t *origin, const vec3_t *angles, const unsigned __int16 payload, const unsigned __int16 extraPayload, unsigned int *outInstanceIndex)
{
  return ?ScriptableSv_StandaloneSpawnInstance@@YA_NPEBDAEBTvec3_t@@1GGAEAI@Z(defName, origin, angles, payload, extraPayload, outInstanceIndex);
}

/*
==============
ScriptableSv_GetReplicatedInstances
==============
*/

const ScriptableReplicatedInstance *__fastcall ScriptableSv_GetReplicatedInstances()
{
  return ?ScriptableSv_GetReplicatedInstances@@YAPEBUScriptableReplicatedInstance@@XZ();
}

/*
==============
ScriptableSv_GetLootSeed
==============
*/

unsigned int __fastcall ScriptableSv_GetLootSeed()
{
  return ?ScriptableSv_GetLootSeed@@YAIXZ();
}

/*
==============
ScriptableSv_ArchiveState
==============
*/

void __fastcall ScriptableSv_ArchiveState(MemoryFile *memFile)
{
  ?ScriptableSv_ArchiveState@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
ScriptableSv_GetWeaponHandle
==============
*/

unsigned __int16 __fastcall ScriptableSv_GetWeaponHandle(const unsigned int scriptableIndex, const bool handleNonCustomWeaponItemDef)
{
  return ?ScriptableSv_GetWeaponHandle@@YAGI_N@Z(scriptableIndex, handleNonCustomWeaponItemDef);
}

/*
==============
ScriptableSv_SetSaveLootSeed
==============
*/

void __fastcall ScriptableSv_SetSaveLootSeed(unsigned int lootSeed)
{
  ?ScriptableSv_SetSaveLootSeed@@YAXI@Z(lootSeed);
}

/*
==============
ScriptableSv_PrecommitMemory
==============
*/

void ScriptableSv_PrecommitMemory(void)
{
  ?ScriptableSv_PrecommitMemory@@YAXXZ();
}

/*
==============
ScriptableSv_InitServerInstances
==============
*/

void ScriptableSv_InitServerInstances(void)
{
  ?ScriptableSv_InitServerInstances@@YAXXZ();
}

/*
==============
ScriptableSv_GetLootTableFilter
==============
*/

const char *__fastcall ScriptableSv_GetLootTableFilter()
{
  return ?ScriptableSv_GetLootTableFilter@@YAPEBDXZ();
}

/*
==============
ScriptableSv_DestroyMemory
==============
*/

void ScriptableSv_DestroyMemory(void)
{
  ?ScriptableSv_DestroyMemory@@YAXXZ();
}

/*
==============
ScriptableSv_VerifyScriptableMoverEntity
==============
*/

void __fastcall ScriptableSv_VerifyScriptableMoverEntity(const gentity_s *ent)
{
  ?ScriptableSv_VerifyScriptableMoverEntity@@YAXPEBUgentity_s@@@Z(ent);
}

/*
==============
ScriptableSv_AreScriptablesCreated
==============
*/

bool __fastcall ScriptableSv_AreScriptablesCreated()
{
  return ?ScriptableSv_AreScriptablesCreated@@YA_NXZ();
}

/*
==============
ScriptableSv_GetCallbackTable
==============
*/

ScriptableEventCallbackTable *__fastcall ScriptableSv_GetCallbackTable()
{
  return ?ScriptableSv_GetCallbackTable@@YAPEAUScriptableEventCallbackTable@@XZ();
}

/*
==============
ScriptableSv_SetPartScriptedState
==============
*/

int __fastcall ScriptableSv_SetPartScriptedState(const unsigned int scriptableIndex, const scr_string_t partName, const scr_string_t stateName)
{
  return ?ScriptableSv_SetPartScriptedState@@YAHIW4scr_string_t@@0@Z(scriptableIndex, partName, stateName);
}

/*
==============
ScriptableSv_InitCounts
==============
*/

void __fastcall ScriptableSv_InitCounts(const unsigned int clientCount, const unsigned int agentCount)
{
  ?ScriptableSv_InitCounts@@YAXII@Z(clientCount, agentCount);
}

/*
==============
ScriptableSv_StandaloneSetParentEntity
==============
*/

bool __fastcall ScriptableSv_StandaloneSetParentEntity(const unsigned int instanceIndex, const gentity_s *parent, const vec3_t *offset, const vec3_t *deltaAngles)
{
  return ?ScriptableSv_StandaloneSetParentEntity@@YA_NIPEBUgentity_s@@AEBTvec3_t@@1@Z(instanceIndex, parent, offset, deltaAngles);
}

/*
==============
ScriptableSv_GetTotalQuestPointCount
==============
*/

unsigned __int16 __fastcall ScriptableSv_GetTotalQuestPointCount()
{
  return ?ScriptableSv_GetTotalQuestPointCount@@YAGXZ();
}

/*
==============
ScriptableSv_GetScriptCache
==============
*/

bool __fastcall ScriptableSv_GetScriptCache(const char *scriptPoolName, unsigned __int16 scriptPoolIndex, const char **out_itemNames, int *out_itemCount)
{
  return ?ScriptableSv_GetScriptCache@@YA_NPEBDGPEAPEBDPEAH@Z(scriptPoolName, scriptPoolIndex, out_itemNames, out_itemCount);
}

/*
==============
ScriptableSv_GetPartScriptedState
==============
*/

int __fastcall ScriptableSv_GetPartScriptedState(const unsigned int scriptableIndex, const scr_string_t partName, scr_string_t *out_stateName)
{
  return ?ScriptableSv_GetPartScriptedState@@YAHIW4scr_string_t@@AEAW41@@Z(scriptableIndex, partName, out_stateName);
}

/*
==============
ScriptableSv_UpdateEntityPosition
==============
*/

void __fastcall ScriptableSv_UpdateEntityPosition(const gentity_s *const ent)
{
  ?ScriptableSv_UpdateEntityPosition@@YAXQEBUgentity_s@@@Z(ent);
}

/*
==============
ScriptableSv_GetPartScriptedStateFromName
==============
*/

ScriptableStateDef *__fastcall ScriptableSv_GetPartScriptedStateFromName(const unsigned int scriptableIndex, ScriptablePartDef *const partDef, const scr_string_t stateName, const bool errorOnFailure, unsigned int *out_stateIndex)
{
  return ?ScriptableSv_GetPartScriptedStateFromName@@YAPEAUScriptableStateDef@@IQEAUScriptablePartDef@@W4scr_string_t@@_NAEAI@Z(scriptableIndex, partDef, stateName, errorOnFailure, out_stateIndex);
}

/*
==============
ScriptableSv_RegisterNetworkLODRangeOverrideEntity
==============
*/

void __fastcall ScriptableSv_RegisterNetworkLODRangeOverrideEntity(const gentity_s *const ent)
{
  ?ScriptableSv_RegisterNetworkLODRangeOverrideEntity@@YAXQEBUgentity_s@@@Z(ent);
}

/*
==============
ScriptableSv_InitMemory
==============
*/

void ScriptableSv_InitMemory(void)
{
  ?ScriptableSv_InitMemory@@YAXXZ();
}

/*
==============
ScriptableSv_NetworkStatesMoved
==============
*/

void __fastcall ScriptableSv_NetworkStatesMoved(const ScriptableWorldType worldType, const unsigned int startIndex, const unsigned int numStates, const unsigned int movePartCount)
{
  ?ScriptableSv_NetworkStatesMoved@@YAXW4ScriptableWorldType@@III@Z(worldType, startIndex, numStates, movePartCount);
}

/*
==============
ScriptableSv_GetPartScriptedDefFromName
==============
*/

ScriptablePartDef *__fastcall ScriptableSv_GetPartScriptedDefFromName(const unsigned int scriptableIndex, const scr_string_t partName, const bool errorOnFailure)
{
  return ?ScriptableSv_GetPartScriptedDefFromName@@YAPEAUScriptablePartDef@@IW4scr_string_t@@_N@Z(scriptableIndex, partName, errorOnFailure);
}

/*
==============
ScriptableSv_RemoveFromAllUpdateLists
==============
*/

void __fastcall ScriptableSv_RemoveFromAllUpdateLists(const unsigned int scriptableIndex)
{
  ?ScriptableSv_RemoveFromAllUpdateLists@@YAXI@Z(scriptableIndex);
}

/*
==============
ScriptableSv_IsLootPointInUse
==============
*/

bool __fastcall ScriptableSv_IsLootPointInUse(const unsigned __int16 pointIndex)
{
  return ?ScriptableSv_IsLootPointInUse@@YA_NG@Z(pointIndex);
}

/*
==============
ScriptableSv_StandaloneClearParentEntity
==============
*/

bool __fastcall ScriptableSv_StandaloneClearParentEntity(const unsigned int instanceIndex)
{
  return ?ScriptableSv_StandaloneClearParentEntity@@YA_NI@Z(instanceIndex);
}

/*
==============
ScriptableSv_GetLootTable
==============
*/

const BG_SpawnGroup_Loot_Table *__fastcall ScriptableSv_GetLootTable()
{
  return ?ScriptableSv_GetLootTable@@YAPEBUBG_SpawnGroup_Loot_Table@@XZ();
}

/*
==============
ScriptableSv_SetInitialOriginAndAngles
==============
*/

void __fastcall ScriptableSv_SetInitialOriginAndAngles(unsigned int scriptableIndex, const vec3_t *origin, const vec3_t *angles)
{
  ?ScriptableSv_SetInitialOriginAndAngles@@YAXIAEBTvec3_t@@0@Z(scriptableIndex, origin, angles);
}

/*
==============
ScriptableSv_SetOriginAndAngles
==============
*/

void __fastcall ScriptableSv_SetOriginAndAngles(const unsigned int scriptableIndex, const vec3_t *origin, const vec3_t *angles)
{
  ?ScriptableSv_SetOriginAndAngles@@YAXIAEBTvec3_t@@0@Z(scriptableIndex, origin, angles);
}

/*
==============
ScriptableSv_GetLootTableWeaponHandles
==============
*/

unsigned int *__fastcall ScriptableSv_GetLootTableWeaponHandles(int *weaponHandleCount)
{
  return ?ScriptableSv_GetLootTableWeaponHandles@@YAPEAIPEAH@Z(weaponHandleCount);
}

/*
==============
ScriptableSv_GetLootSpawnedCountForRarity
==============
*/

unsigned __int16 __fastcall ScriptableSv_GetLootSpawnedCountForRarity(int rarityIndex)
{
  return ?ScriptableSv_GetLootSpawnedCountForRarity@@YAGH@Z(rarityIndex);
}

/*
==============
ScriptableSv_AddToUpdateLists
==============
*/

void __fastcall ScriptableSv_AddToUpdateLists(const unsigned int scriptableIndex, const ScriptableDef *def)
{
  ?ScriptableSv_AddToUpdateLists@@YAXIAEBUScriptableDef@@@Z(scriptableIndex, def);
}

/*
==============
ScriptableSv_Shutdown
==============
*/

void ScriptableSv_Shutdown(void)
{
  ?ScriptableSv_Shutdown@@YAXXZ();
}

/*
==============
ScriptableSv_InitMyChanges
==============
*/

void __fastcall ScriptableSv_InitMyChanges(const bool isFrontEndServer)
{
  ?ScriptableSv_InitMyChanges@@YAX_N@Z(isFrontEndServer);
}

/*
==============
ScriptableSv_UnregisterNetworkLODRangeOverrideEntity
==============
*/

void __fastcall ScriptableSv_UnregisterNetworkLODRangeOverrideEntity(const gentity_s *const ent)
{
  ?ScriptableSv_UnregisterNetworkLODRangeOverrideEntity@@YAXQEBUgentity_s@@@Z(ent);
}

/*
==============
ScriptableSv_DestroyCollision
==============
*/

void __fastcall ScriptableSv_DestroyCollision(const unsigned int scriptableIndex)
{
  ?ScriptableSv_DestroyCollision@@YAXI@Z(scriptableIndex);
}

/*
==============
ScriptableSv_SetScriptableIndexForEntity
==============
*/

void __fastcall ScriptableSv_SetScriptableIndexForEntity(const unsigned int scriptableIndex, const gentity_s *const ent)
{
  ?ScriptableSv_SetScriptableIndexForEntity@@YAXIQEBUgentity_s@@@Z(scriptableIndex, ent);
}

/*
==============
ScriptableSv_AnimNotetrackEvent
==============
*/

void __fastcall ScriptableSv_AnimNotetrackEvent(const gentity_s *const ent, scr_string_t note, scr_string_t notifyName)
{
  ?ScriptableSv_AnimNotetrackEvent@@YAXQEBUgentity_s@@W4scr_string_t@@1@Z(ent, note, notifyName);
}

/*
==============
ScriptableSv_MyChangesRestoreStandaloneInstance
==============
*/

void __fastcall ScriptableSv_MyChangesRestoreStandaloneInstance(const unsigned int scriptableIndex, const char *defName, const vec3_t *origin, const vec3_t *angles, const unsigned __int16 payload, const unsigned __int16 extraPayload)
{
  ?ScriptableSv_MyChangesRestoreStandaloneInstance@@YAXIPEBDAEBTvec3_t@@1GG@Z(scriptableIndex, defName, origin, angles, payload, extraPayload);
}

/*
==============
ScriptableSv_ConvertStandaloneParentEntityPoseToWorldSpace
==============
*/

void __fastcall ScriptableSv_ConvertStandaloneParentEntityPoseToWorldSpace(const unsigned int scriptableIndex, const gentity_s *const parent, const vec3_t *localOrigin, const vec3_t *localAngles, vec3_t *outWorldOrigin, vec3_t *outWorldAngles)
{
  ?ScriptableSv_ConvertStandaloneParentEntityPoseToWorldSpace@@YAXIQEBUgentity_s@@AEBTvec3_t@@1AEAT2@2@Z(scriptableIndex, parent, localOrigin, localAngles, outWorldOrigin, outWorldAngles);
}

/*
==============
ScriptableSv_GetLootTableName
==============
*/

const char *__fastcall ScriptableSv_GetLootTableName()
{
  return ?ScriptableSv_GetLootTableName@@YAPEBDXZ();
}

/*
==============
ScriptableSv_GetLootSpawnedCountForType
==============
*/

unsigned __int16 __fastcall ScriptableSv_GetLootSpawnedCountForType(const char *typeName)
{
  return ?ScriptableSv_GetLootSpawnedCountForType@@YAGPEBD@Z(typeName);
}

/*
==============
ScriptableSv_ShutdownMyChanges
==============
*/

void ScriptableSv_ShutdownMyChanges(void)
{
  ?ScriptableSv_ShutdownMyChanges@@YAXXZ();
}

/*
==============
ScriptableSv_StandaloneFreeInstance
==============
*/

bool __fastcall ScriptableSv_StandaloneFreeInstance(const unsigned int instanceIndex)
{
  return ?ScriptableSv_StandaloneFreeInstance@@YA_NI@Z(instanceIndex);
}

/*
==============
ScriptableSv_CanBeGrabbed
==============
*/

bool __fastcall ScriptableSv_CanBeGrabbed(const BgWeaponMap *weaponMap, const playerState_s *ps, const unsigned int scriptableIndex)
{
  return ?ScriptableSv_CanBeGrabbed@@YA_NPEBVBgWeaponMap@@PEBUplayerState_s@@I@Z(weaponMap, ps, scriptableIndex);
}

/*
==============
ScriptableSv_DisableQuestPointIndex
==============
*/

void __fastcall ScriptableSv_DisableQuestPointIndex(const unsigned __int16 pointIndex)
{
  ?ScriptableSv_DisableQuestPointIndex@@YAXG@Z(pointIndex);
}

/*
==============
ScriptableSv_GetLootCache
==============
*/

bool __fastcall ScriptableSv_GetLootCache(const unsigned int scriptableIndex, int setIndex, const char **out_itemNames, int *out_itemCount)
{
  return ?ScriptableSv_GetLootCache@@YA_NIHPEAPEBDPEAH@Z(scriptableIndex, setIndex, out_itemNames, out_itemCount);
}

/*
==============
ScriptableSv_UnitTest
==============
*/

void ScriptableSv_UnitTest(void)
{
  ?ScriptableSv_UnitTest@@YAXXZ();
}

/*
==============
ScriptableSv_GetStandaloneParentEntityNum
==============
*/

__int16 __fastcall ScriptableSv_GetStandaloneParentEntityNum(const unsigned int scriptableIndex)
{
  return ?ScriptableSv_GetStandaloneParentEntityNum@@YAFI@Z(scriptableIndex);
}

/*
==============
ScriptableSv_GetPartScriptedStateFirstEventOfType
==============
*/

ScriptableEventDef *__fastcall ScriptableSv_GetPartScriptedStateFirstEventOfType(const unsigned int scriptableIndex, const ScriptableStateDef *const stateDef, Scriptable_EventType eventType)
{
  return ?ScriptableSv_GetPartScriptedStateFirstEventOfType@@YAPEAUScriptableEventDef@@IQEBUScriptableStateDef@@W4Scriptable_EventType@@@Z(scriptableIndex, stateDef, eventType);
}

/*
==============
ScriptableSv_GetNetChecksum
==============
*/

unsigned int __fastcall ScriptableSv_GetNetChecksum()
{
  return ?ScriptableSv_GetNetChecksum@@YAIXZ();
}

/*
==============
ScriptableSv_IsLootWeapon
==============
*/

bool __fastcall ScriptableSv_IsLootWeapon(const unsigned int scriptableIndex)
{
  return ?ScriptableSv_IsLootWeapon@@YA_NI@Z(scriptableIndex);
}

/*
==============
ScriptableSv_GetScriptableIndexForEntityNum
==============
*/

unsigned int __fastcall ScriptableSv_GetScriptableIndexForEntityNum(const unsigned int entNum)
{
  return ?ScriptableSv_GetScriptableIndexForEntityNum@@YAII@Z(entNum);
}

/*
==============
ScriptableSv_DecommitUnusedMemory
==============
*/

void ScriptableSv_DecommitUnusedMemory(void)
{
  ?ScriptableSv_DecommitUnusedMemory@@YAXXZ();
}

/*
==============
ScriptableSv_GetNetworkLODRangeOverrideEntities
==============
*/

const bitarray<2048> *__fastcall ScriptableSv_GetNetworkLODRangeOverrideEntities()
{
  return ?ScriptableSv_GetNetworkLODRangeOverrideEntities@@YAAEBV?$bitarray@$0IAA@@@XZ();
}

/*
==============
ScriptableSv_ResetLootGlobals
==============
*/

void ScriptableSv_ResetLootGlobals(void)
{
  ?ScriptableSv_ResetLootGlobals@@YAXXZ();
}

/*
==============
ScriptableSv_ClearCounts
==============
*/

void ScriptableSv_ClearCounts(void)
{
  ?ScriptableSv_ClearCounts@@YAXXZ();
}

/*
==============
ScriptableServer_ArchiveWorldEvents
==============
*/

void __fastcall ScriptableServer_ArchiveWorldEvents(MemoryFile *memFile, ScriptableWorldEvents *outWorldEvents)
{
  ?ScriptableServer_ArchiveWorldEvents@@YAXPEAUMemoryFile@@AEAUScriptableWorldEvents@@@Z(memFile, outWorldEvents);
}

/*
==============
ScriptableSv_IsLootCustomWeapon
==============
*/

bool __fastcall ScriptableSv_IsLootCustomWeapon(const char *itemDefName)
{
  return ?ScriptableSv_IsLootCustomWeapon@@YA_NPEBD@Z(itemDefName);
}

/*
==============
ScriptableSv_ShutdownInstance
==============
*/

void __fastcall ScriptableSv_ShutdownInstance(const unsigned int scriptableIndex)
{
  ?ScriptableSv_ShutdownInstance@@YAXI@Z(scriptableIndex);
}

/*
==============
ScriptableSv_ClearScriptableIndexForEntity
==============
*/

void __fastcall ScriptableSv_ClearScriptableIndexForEntity(const unsigned int scriptableIndex, const gentity_s *const ent)
{
  ?ScriptableSv_ClearScriptableIndexForEntity@@YAXIQEBUgentity_s@@@Z(scriptableIndex, ent);
}

/*
==============
ScriptableSv_InitEventParams
==============
*/

void __fastcall ScriptableSv_InitEventParams(ScriptableEventParams *outParams, const unsigned int scriptableIndex, const ScriptablePartDef *partDef)
{
  ?ScriptableSv_InitEventParams@@YAXPEAUScriptableEventParams@@IPEBUScriptablePartDef@@@Z(outParams, scriptableIndex, partDef);
}

/*
==============
ScriptableSv_SetPartStateFirst
==============
*/

void __fastcall ScriptableSv_SetPartStateFirst(const unsigned int scriptableIndex, const ScriptableDef *const def, const ScriptablePartDef *const partDef)
{
  ?ScriptableSv_SetPartStateFirst@@YAXIQEBUScriptableDef@@QEBUScriptablePartDef@@@Z(scriptableIndex, def, partDef);
}

/*
==============
ScriptableSv_GetScriptableIndexForEntity
==============
*/

unsigned int __fastcall ScriptableSv_GetScriptableIndexForEntity(const gentity_s *const ent)
{
  return ?ScriptableSv_GetScriptableIndexForEntity@@YAIQEBUgentity_s@@@Z(ent);
}

/*
==============
ScriptableSv_GetLootSpawnedCountForItem
==============
*/

unsigned __int16 __fastcall ScriptableSv_GetLootSpawnedCountForItem(const char *itemDefName)
{
  return ?ScriptableSv_GetLootSpawnedCountForItem@@YAGPEBD@Z(itemDefName);
}

/*
==============
ScriptableSv_GetLootTableZones
==============
*/

const char *__fastcall ScriptableSv_GetLootTableZones()
{
  return ?ScriptableSv_GetLootTableZones@@YAPEBDXZ();
}

/*
==============
ScriptableSv_RunStateEvents
==============
*/
void ScriptableSv_RunStateEvents(ScriptableEventParams *eventParams, unsigned int *holdrand, ScriptableEventDef *events, unsigned int numEvents)
{
  unsigned int v10; 
  __int64 v11; 
  bool v15; 
  bool v16; 
  ScriptableEventDefUnion *p_data; 
  const ScriptablePartDef *part; 
  unsigned int stateIdx; 
  unsigned int scriptableIndex; 
  unsigned int numStates; 
  unsigned int v23; 
  ScriptableInstanceContext *InstanceCommonContext; 
  const char *name; 
  bool v27; 
  ScriptableInstanceContext *v28; 
  __int64 v29; 
  ScriptableInstanceContext *v30; 
  __int64 v31; 
  unsigned int v32; 
  const gentity_s *Entity; 
  scrContext_t *v34; 
  scrContext_t *v35; 
  unsigned int v36; 
  gentity_s *v37; 
  GameScriptData *GameScriptDataCommon; 
  unsigned int v39; 
  unsigned int v40; 
  const gentity_s *v41; 
  const DObj *ServerDObjForEnt; 
  XAnimTree *Tree; 
  unsigned int v63; 
  ScriptableInstanceContext *v67; 
  __int64 eventStreamBufferOffsetClient; 
  ScriptableInstanceContext *v69; 
  const ScriptableEventGravityArcDef *v72; 
  unsigned int v73; 
  ScriptableCollisionServerContext *InstanceCollisionContext; 
  unsigned int scriptableCollisionMain; 
  unsigned int scriptableCollisionDetail; 
  bool v83; 
  unsigned int v84; 
  gentity_s *v85; 
  Vehicle *vehicle; 
  BgVehiclePhysicsManager *v87; 
  BgVehiclePhysics *ObjectById; 
  ScriptableInstanceContext *v92; 
  __int64 eventStreamBufferOffsetServer; 
  ScriptableInstanceContext *v94; 
  unsigned __int64 eventStreamBufferSize; 
  char *fmt; 
  __int64 v103; 
  __int64 v104; 
  __int64 v106; 
  ScriptableEventDef *v107; 
  vec4_t quat; 
  ScriptableGravityArcRuntimeData outParams; 
  void *retaddr; 

  if ( numEvents )
  {
    _R11 = &retaddr;
    v10 = 0;
    v11 = 0i64;
    __asm
    {
      vmovaps xmmword ptr [r11-78h], xmm9
      vmovss  xmm9, cs:__real@3f800000
      vmovaps xmmword ptr [r11-48h], xmm6
      vmovaps xmmword ptr [r11-58h], xmm7
      vmovaps xmmword ptr [r11-68h], xmm8
    }
    v107 = events;
    v106 = 0i64;
    while ( 1 )
    {
      v15 = __CFADD__(events, 176 * v11);
      v16 = &events[v11] == NULL;
      _RSI = &events[v11];
      switch ( _RSI->type )
      {
        case Scriptable_EventType_StateChange:
          p_data = &_RSI->data;
          if ( !p_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 76, ASSERT_TYPE_ASSERT, "( stateChange )", (const char *)&queryFormat, "stateChange") )
            __debugbreak();
          if ( !p_data->disablePhysicsSubShape.mutableShapeHash && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 77, ASSERT_TYPE_ASSERT, "( stateChange->part )", (const char *)&queryFormat, "stateChange->part") )
            __debugbreak();
          if ( (*(_BYTE *)(p_data->disablePhysicsSubShape.mutableShapeHash + 12) & 2) != 0 )
          {
            if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 84, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
              __debugbreak();
            part = p_data->stateChange.part;
            stateIdx = p_data->stateChange.stateIdx;
            scriptableIndex = eventParams->scriptableIndex;
            numStates = part->numStates;
            if ( stateIdx >= numStates )
            {
              v23 = numStates - 1;
              InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
              if ( InstanceCommonContext->def )
                name = InstanceCommonContext->def->name;
              else
                name = "<Unknown>";
              LODWORD(v103) = v23;
              LODWORD(fmt) = stateIdx;
              Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144081F40, 190i64, name, fmt, v103);
              part = p_data->stateChange.part;
            }
            ScriptableSv_InitEventParams((ScriptableEventParams *)&outParams, scriptableIndex, part);
            ScriptableBg_ChangePartState((ScriptableEventParams *)&outParams, p_data->stateChange.stateIdx, 1);
          }
          goto $LN11_79;
        case Scriptable_EventType_Wait:
          __asm
          {
            vmovss  xmm1, dword ptr [rsi+24h]; jumptable 00000001414E6BBC case 1
            vmovss  xmm6, dword ptr [rsi+20h]
            vcomiss xmm1, xmm6
          }
          if ( !__CFADD__(events, 176 * v11) && &events[v11] != NULL )
          {
            __asm { vmovaps xmm0, xmm6; min }
            *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
            __asm { vmovaps xmm6, xmm0 }
          }
          if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 114, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
            __debugbreak();
          v92 = ScriptableSv_GetInstanceCommonContext(eventParams->scriptableIndex);
          eventStreamBufferOffsetServer = _RSI->data.wait.eventStreamBufferOffsetServer;
          v94 = v92;
          _RDI = eventStreamBufferOffsetServer;
          eventStreamBufferSize = v92->eventStreamBufferSize;
          if ( eventStreamBufferOffsetServer + 4 > eventStreamBufferSize )
          {
            LODWORD(v104) = eventStreamBufferSize;
            LODWORD(v103) = eventStreamBufferOffsetServer + 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 120, ASSERT_TYPE_ASSERT, "( eventBufferOffset + sizeof( float ) ) <= ( context.eventStreamBufferSize )", "eventBufferOffset + sizeof( float ) <= context.eventStreamBufferSize\n\t%i, %i", v103, v104) )
              __debugbreak();
          }
          _RAX = v94->eventStreamBuffer;
          __asm { vmovss  dword ptr [rdi+rax], xmm6 }
          goto LABEL_136;
        case Scriptable_EventType_Random:
          if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 132, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
            __debugbreak();
          __asm
          {
            vmovaps xmm1, xmm9; max
            vxorps  xmm0, xmm0, xmm0; min
          }
          *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
          __asm { vcomiss xmm0, dword ptr [rsi+20h] }
          v27 = v15 || v16;
          if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 140, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
            __debugbreak();
          v28 = ScriptableSv_GetInstanceCommonContext(eventParams->scriptableIndex);
          v29 = _RSI->data.random.eventStreamBufferOffsetServer;
          v30 = v28;
          v31 = v29;
          if ( v29 + 4 > (unsigned __int64)v28->eventStreamBufferSize )
          {
            LODWORD(v104) = v28->eventStreamBufferSize;
            LODWORD(v103) = v29 + 4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 146, ASSERT_TYPE_ASSERT, "( eventBufferOffset + sizeof( float ) ) <= ( context.eventStreamBufferSize )", "eventBufferOffset + sizeof( float ) <= context.eventStreamBufferSize\n\t%i, %i", v103, v104) )
              __debugbreak();
          }
          v30->eventStreamBuffer[v31] = v27;
          if ( v27 )
            ScriptableSv_RunStateEvents(eventParams, holdrand, _RSI->data.random.eventsA, _RSI->data.stateChange.stateIdx);
          else
            ScriptableSv_RunStateEvents(eventParams, holdrand, _RSI->data.random.eventsB, _RSI->data.random.eventBCount);
          goto $LN11_79;
        case Scriptable_EventType_Script:
          if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 168, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
            __debugbreak();
          v32 = eventParams->scriptableIndex;
          if ( ScriptableSv_GetInstanceHasEntity(v32) )
          {
            Entity = ScriptableSv_GetEntity(v32);
            v34 = ScriptContext_Server();
            Scr_AddInt(v34, _RSI->data.script.param);
            Scr_AddConstString(v34, _RSI->data.script.scrNotification);
            GScr_Notify(Entity, scr_const.scriptableNotification, 2u);
          }
          if ( _RSI->data.anonymous.buffer[16] )
          {
            v35 = ScriptContext_Server();
            v36 = 2;
            if ( ScriptableSv_GetInstanceHasEntity(v32) )
            {
              v37 = ScriptableSv_GetEntity(v32);
              Scr_AddEntityNum(v35, v37->s.number, ENTITY_CLASS_GENTITY);
              v36 = 3;
            }
            Scr_AddInt(v35, _RSI->data.script.param);
            Scr_AddConstString(v35, _RSI->data.script.scrNotification);
            GameScriptDataCommon = GameScriptData::GetGameScriptDataCommon();
            if ( !GameScriptDataCommon && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 203, ASSERT_TYPE_ASSERT, "( gScrData )", (const char *)&queryFormat, "gScrData") )
              __debugbreak();
            v39 = Scr_ExecThread(v35, GameScriptDataCommon->scriptable_notify_callback, v36);
            Scr_FreeThread(v35, v39);
          }
          goto $LN11_79;
        case Scriptable_EventType_Model:
          ScriptableSv_RunStateEventModel(eventParams, (const ScriptableEventModelDef *)&_RSI->data);
          goto $LN11_79;
        case Scriptable_EventType_Collision:
          ScriptableSv_RunStateEventCollision(eventParams, (const ScriptableEventCollisionDef *)&_RSI->data);
          goto $LN11_79;
        case Scriptable_EventType_Animation:
          ScriptableSv_RunStateEventAnimation(eventParams, holdrand, (const ScriptableEventAnimationDef *)&_RSI->data);
          goto $LN11_79;
        case Scriptable_EventType_HideShowBone:
          ScriptableSv_RunStateEventHideShowBone(eventParams, (const ScriptableEventHideShowBoneDef *)&_RSI->data);
          goto $LN11_79;
        case Scriptable_EventType_DisablePhysicsSubShape:
          ScriptableSv_RunStateEventDisablePhysicsSubShape(eventParams, (const ScriptableEventDisablePhysicsSubShapeDef *)&_RSI->data);
          goto $LN11_79;
        case Scriptable_EventType_NoteTrack:
          if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 929, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
            __debugbreak();
          v40 = eventParams->scriptableIndex;
          if ( ScriptableSv_GetInstanceHasEntity(v40) )
          {
            v41 = ScriptableSv_GetEntity(v40);
            ServerDObjForEnt = Com_GetServerDObjForEnt(v41);
            if ( ServerDObjForEnt )
            {
              Tree = DObjGetTree(ServerDObjForEnt);
              if ( Tree )
                XAnimSetClientNotifyFlag(Tree, 1);
            }
          }
          goto $LN11_79;
        case Scriptable_EventType_ChunkDynent:
        case Scriptable_EventType_PFX:
        case Scriptable_EventType_Sound:
        case Scriptable_EventType_Rumble:
        case Scriptable_EventType_Screenshake:
        case Scriptable_EventType_SetMayhem:
        case Scriptable_EventType_PlayMayhem:
        case Scriptable_EventType_ViewmodelShaderParam:
        case Scriptable_EventType_ViewmodelChangeImage:
        case Scriptable_EventType_ClientViewSelector:
        case Scriptable_EventType_TeamSelector:
        case Scriptable_EventType_CompassIcon:
        case Scriptable_EventType_MaterialOverride:
        case Scriptable_EventType_DynamicBoneNoiseCurve:
        case Scriptable_EventType_Footstep:
        case Scriptable_EventType_Objective:
        case Scriptable_EventType_SpatialDisable:
        case Scriptable_EventType_Hover:
        case Scriptable_EventType_Dlc1:
          goto $LN11_79;
        case Scriptable_EventType_SpawnDynent:
          if ( _RSI->data.anonymous.buffer[32] )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [rsi+5Ch]; max
              vmovss  xmm0, dword ptr [rsi+44h]; min
            }
            BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
            __asm
            {
              vmovss  xmm1, dword ptr [rsi+60h]; max
              vmovss  xmm0, dword ptr [rsi+48h]; min
            }
            BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
            __asm
            {
              vmovss  xmm1, dword ptr [rsi+64h]; max
              vmovss  xmm0, dword ptr [rsi+4Ch]; min
            }
            *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
          }
          if ( _RSI->data.anonymous.buffer[33] )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [rsi+68h]; max
              vmovss  xmm0, dword ptr [rsi+50h]; min
            }
            BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
            __asm
            {
              vmovss  xmm1, dword ptr [rsi+6Ch]; max
              vmovss  xmm0, dword ptr [rsi+54h]; min
            }
            BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
            __asm
            {
              vmovss  xmm1, dword ptr [rsi+70h]; max
              vmovss  xmm0, dword ptr [rsi+58h]; min
            }
            *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
          }
          goto $LN11_79;
        case Scriptable_EventType_Explosion:
          ScriptableSv_RunStateEventExplosion(eventParams, (const ScriptableEventExplosionDef *)&_RSI->data);
          goto $LN11_79;
        case Scriptable_EventType_Light:
          __asm
          {
            vmovss  xmm1, dword ptr [rsi+4Ch]; jumptable 00000001414E6BBC case 15
            vmovss  xmm0, dword ptr [rsi+48h]; min
            vcomiss xmm1, xmm0
          }
          if ( !__CFADD__(events, 176 * v11) && &events[v11] != NULL )
            BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
          __asm
          {
            vmovss  xmm1, dword ptr [rsi+2Ch]; max
            vmovss  xmm0, dword ptr [rsi+28h]; min
            vcomiss xmm1, xmm0
          }
          if ( !v15 && !v16 )
            BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
          __asm
          {
            vmovss  xmm1, dword ptr [rsi+24h]; max
            vmovss  xmm0, dword ptr [rsi+20h]; min
          }
          goto LABEL_66;
        case Scriptable_EventType_Sun:
          if ( _RSI->data.anonymous.buffer[32] )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [rsi+48h]; max
              vmovss  xmm0, dword ptr [rsi+44h]; min
              vcomiss xmm1, xmm0
            }
            if ( _RSI->data.anonymous.buffer[32] )
              *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
          }
          if ( _RSI->data.anonymous.buffer[0] )
          {
            __asm
            {
              vmovss  xmm1, dword ptr [rsi+28h]; max
              vmovss  xmm0, dword ptr [rsi+24h]; min
              vcomiss xmm1, xmm0
            }
            if ( _RSI->data.anonymous.buffer[0] )
              *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
          }
          v15 = 0;
          v16 = _RSI->data.anonymous.buffer[60] == 0;
          if ( !_RSI->data.anonymous.buffer[60] )
            goto $LN11_79;
          __asm
          {
            vmovss  xmm1, dword ptr [rsi+50h]; max
            vmovss  xmm0, dword ptr [rsi+4Ch]; min
            vcomiss xmm1, xmm0
          }
          if ( _RSI->data.anonymous.buffer[60] )
            BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
          __asm
          {
            vmovss  xmm1, dword ptr [rsi+58h]
            vmovss  xmm0, dword ptr [rsi+54h]
          }
LABEL_66:
          __asm { vcomiss xmm1, xmm0 }
          if ( !v15 && !v16 )
            *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
          goto $LN11_79;
        case Scriptable_EventType_PartDamage:
          ScriptableSv_RunStateEventPartDamage(eventParams, (const ScriptableEventPartDamageDef *)&_RSI->data);
          goto $LN11_79;
        case Scriptable_EventType_AddModel:
          ScriptableSv_RunStateEventAddModel(eventParams, (const ScriptableEventAddModelDef *)&_RSI->data);
          goto $LN11_79;
        case Scriptable_EventType_ApplyForce:
          ScriptableSv_RunStateEventApplyForce(eventParams, holdrand, (const ScriptableEventApplyForceDef *)&_RSI->data);
          goto $LN11_79;
        case Scriptable_EventType_ApplyAngularForce:
          ScriptableSv_RunStateEventApplyAngularForce(eventParams, holdrand, (const ScriptableEventApplyAngularForceDef *)&_RSI->data);
          goto $LN11_79;
        case Scriptable_EventType_ApplyConstantForce:
          ScriptableSv_RunStateEventApplyConstantForce(eventParams, holdrand, (const ScriptableEventApplyConstantForceDef *)&_RSI->data);
          goto $LN11_79;
        case Scriptable_EventType_ApplyConstantAngularForce:
          if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1635, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
            __debugbreak();
          v63 = eventParams->scriptableIndex;
          if ( !_RSI->data.anonymous.buffer[1] )
          {
            __asm { vxorps  xmm8, xmm8, xmm8 }
LABEL_91:
            __asm { vxorps  xmm7, xmm7, xmm7 }
            goto LABEL_92;
          }
          __asm
          {
            vmovaps xmm1, xmm9; max
            vxorps  xmm0, xmm0, xmm0; min
          }
          *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
          __asm { vmovaps xmm8, xmm0 }
          if ( !_RSI->data.anonymous.buffer[1] )
            goto LABEL_91;
          __asm
          {
            vmovaps xmm1, xmm9; max
            vxorps  xmm0, xmm0, xmm0; min
          }
          *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
          __asm { vmovaps xmm7, xmm0 }
          if ( _RSI->data.anonymous.buffer[1] )
          {
            __asm
            {
              vmovaps xmm1, xmm9; max
              vxorps  xmm0, xmm0, xmm0; min
            }
            *(double *)&_XMM0 = BG_flrand(*(float *)&_XMM0, *(float *)&_XMM1, holdrand);
            __asm { vmovaps xmm6, xmm0 }
            goto LABEL_93;
          }
LABEL_92:
          __asm { vxorps  xmm6, xmm6, xmm6 }
LABEL_93:
          v67 = ScriptableSv_GetInstanceCommonContext(v63);
          eventStreamBufferOffsetClient = _RSI->data.viewmodelShaderParam.eventStreamBufferOffsetClient;
          v69 = v67;
          _RBX = eventStreamBufferOffsetClient;
          if ( eventStreamBufferOffsetClient + 12 > (unsigned __int64)v67->eventStreamBufferSize )
          {
            LODWORD(v104) = v67->eventStreamBufferSize;
            LODWORD(v103) = eventStreamBufferOffsetClient + 12;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 1647, ASSERT_TYPE_ASSERT, "( eventBufferOffset + 3 * sizeof( float ) ) <= ( r_context.eventStreamBufferSize )", "eventBufferOffset + 3 * sizeof( float ) <= r_context.eventStreamBufferSize\n\t%i, %i", v103, v104) )
              __debugbreak();
          }
          _RAX = v69->eventStreamBuffer;
          __asm
          {
            vmovss  dword ptr [rbx+rax], xmm8
            vmovss  dword ptr [rbx+rax+4], xmm7
            vmovss  dword ptr [rbx+rax+8], xmm6
          }
$LN11_79:
          ++v10;
          v11 = ++v106;
          if ( v10 >= numEvents )
          {
LABEL_136:
            __asm
            {
              vmovaps xmm8, [rsp+148h+var_68]
              vmovaps xmm7, [rsp+148h+var_58]
              vmovaps xmm6, [rsp+148h+var_48]
              vmovaps xmm9, [rsp+148h+var_78]
            }
            return;
          }
          events = v107;
          break;
        case Scriptable_EventType_Move:
          ScriptableSv_RunStateEventMove(eventParams, (const ScriptableEventMoveDef *)&_RSI->data);
          goto $LN11_79;
        case Scriptable_EventType_GravityArc:
          v72 = (const ScriptableEventGravityArcDef *)&_RSI->data;
          if ( (!eventParams || !v72) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2099, ASSERT_TYPE_ASSERT, "( eventParams && moveDef )", (const char *)&queryFormat, "eventParams && moveDef") )
            __debugbreak();
          v73 = eventParams->scriptableIndex;
          _RBX = ScriptableSv_GetInstanceCommonContext(v73);
          ScriptableSv_GravityArcCalcData(v73, _RBX, v72, &outParams);
          *((_BYTE *)&_RBX->ScriptableInstanceContextSecure + 61) |= 2u;
          *ScriptableSv_StateEventGravityArcGetData(_RBX, v72) = level.time;
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+148h+outParams.partDef+4]
            vmovss  dword ptr [rbx+20h], xmm0
            vmovss  xmm1, dword ptr [rsp+148h+outParams.damageEvent]
            vmovss  dword ptr [rbx+24h], xmm1
            vmovss  xmm0, dword ptr [rsp+148h+outParams.damageEvent+4]
            vmovss  dword ptr [rbx+28h], xmm0
            vmovss  xmm1, dword ptr [rsp+148h+outParams.teamEvent]
            vmovss  dword ptr [rbx+2Ch], xmm1
            vmovss  xmm0, dword ptr [rsp+148h+outParams.teamEvent+4]
            vmovss  dword ptr [rbx+30h], xmm0
            vmovss  xmm1, [rsp+148h+var_B0]
            vmovss  dword ptr [rbx+34h], xmm1
          }
          InstanceCollisionContext = ScriptableSv_GetInstanceCollisionContext(v73);
          scriptableCollisionMain = InstanceCollisionContext->scriptableCollisionMain;
          scriptableCollisionDetail = InstanceCollisionContext->scriptableCollisionDetail;
          if ( InstanceCollisionContext->scriptableCollisionMain != -1 || scriptableCollisionDetail != -1 )
          {
            AnglesToQuat(&outParams.startAngles, &quat);
            if ( scriptableCollisionMain != -1 )
              ScriptableBg_PhysicsSetPose(PHYSICS_WORLD_ID_FIRST, InstanceCollisionContext->scriptableCollisionMain, &outParams.startOrigin, &quat, WARP);
            if ( scriptableCollisionDetail != -1 )
              ScriptableBg_PhysicsSetPose(PHYSICS_WORLD_ID_SERVER_DETAIL, InstanceCollisionContext->scriptableCollisionDetail, &outParams.startOrigin, &quat, WARP);
          }
          goto $LN11_79;
        case Scriptable_EventType_ViewTrigger:
          v83 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2532, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScriptableSv_RunStateEvents: ViewTrigger events are client-only.");
          goto LABEL_123;
        case Scriptable_EventType_VehicleBlowUpTire:
          if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2180, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
            __debugbreak();
          v84 = eventParams->scriptableIndex;
          if ( ScriptableSv_GetInstanceHasEntity(v84) )
          {
            v85 = ScriptableSv_GetEntity(v84);
            if ( !v85 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2191, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
              __debugbreak();
            vehicle = v85->vehicle;
            if ( vehicle )
            {
              if ( BGVehicles::PhysicsIsValid(vehicle->physicsVehicle) )
              {
                if ( GVehicles::ms_gVehiclesSystem )
                {
                  v87 = GVehicles::ms_gVehiclesSystem->PhysicsGetVehiclePhysicsManager(GVehicles::ms_gVehiclesSystem);
                  ObjectById = BgVehiclePhysicsManager::GetObjectById(v87, v85->vehicle->physicsVehicle);
                  if ( ObjectById )
                    ObjectById->ReactToScriptableEvent(ObjectById, eventParams, _RSI);
                }
              }
            }
          }
          goto $LN11_79;
        case Scriptable_EventType_ScriptDamage:
          ScriptableSv_RunStateEventScriptDamage(eventParams, (const ScriptableEventScriptDef *)&_RSI->data);
          goto $LN11_79;
        default:
          LODWORD(v103) = _RSI->type;
          v83 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_sv.cpp", 2561, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScriptableSv_RunStateEvents: Unknown event type %i", v103);
LABEL_123:
          if ( v83 )
            __debugbreak();
          goto $LN11_79;
      }
    }
  }
}

/*
==============
ScriptableSv_GetState
==============
*/
__int64 ScriptableSv_GetState(ScriptableEventParams *eventParams)
{
  ScriptablePartRuntime *PartRuntime; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3603, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  if ( !eventParams->partDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3604, ASSERT_TYPE_ASSERT, "( eventParams->partDef )", (const char *)&queryFormat, "eventParams->partDef") )
    __debugbreak();
  if ( (eventParams->partDef->flags & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3605, ASSERT_TYPE_ASSERT, "( eventParams->partDef->flags & (1 << 1) )", (const char *)&queryFormat, "eventParams->partDef->flags & SCRIPTABLE_DEFFLAG_SERVER_INSTANCE") )
    __debugbreak();
  PartRuntime = ScriptableSv_GetPartRuntime(eventParams->scriptableIndex, eventParams->partDef);
  if ( PartRuntime )
    return PartRuntime->stateId;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3609, ASSERT_TYPE_ASSERT, "( partRuntime )", (const char *)&queryFormat, "partRuntime") )
    __debugbreak();
  return MEMORY[0];
}

/*
==============
ScriptableSv_SetState
==============
*/
void ScriptableSv_SetState(ScriptableEventParams *eventParams, unsigned int newState)
{
  const ScriptablePartDef *partDef; 
  __int64 scriptableIndex; 
  ScriptablePartRuntime *PartRuntime; 
  unsigned int v8; 
  const ScriptablePartDef *v9; 
  __int64 v10; 
  ScriptableInstanceContext *InstanceCommonContext; 
  int flags; 
  int v17; 
  unsigned __int8 v18; 
  unsigned int partIndex; 
  unsigned int v20; 
  ScriptablePartData *v21; 
  unsigned __int8 data; 
  ScriptableInstanceContext *v23; 
  Scriptable_Analytics_Zone v24; 
  __int64 v25; 
  __int64 v26; 

  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3620, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  if ( !eventParams->partDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3621, ASSERT_TYPE_ASSERT, "( eventParams->partDef )", (const char *)&queryFormat, "eventParams->partDef") )
    __debugbreak();
  partDef = eventParams->partDef;
  if ( !partDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 422, ASSERT_TYPE_ASSERT, "(partDef)", (const char *)&queryFormat, "partDef") )
    __debugbreak();
  if ( (partDef->flags & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3622, ASSERT_TYPE_ASSERT, "( ScriptablePartDef_HasServerInstance( eventParams->partDef ) )", (const char *)&queryFormat, "ScriptablePartDef_HasServerInstance( eventParams->partDef )") )
    __debugbreak();
  if ( newState >= eventParams->partDef->numStates )
  {
    LODWORD(v25) = newState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3623, ASSERT_TYPE_ASSERT, "(unsigned)( newState ) < (unsigned)( eventParams->partDef->numStates )", "newState doesn't index eventParams->partDef->numStates\n\t%i not in [0, %i)", v25, eventParams->partDef->numStates) )
      __debugbreak();
  }
  scriptableIndex = eventParams->scriptableIndex;
  ScriptableCommon_AssertCountsInitialized();
  if ( (unsigned int)scriptableIndex >= g_scriptableWorldCounts.serverInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    LODWORD(v26) = g_scriptableWorldCounts.serverInstanceCount;
    LODWORD(v25) = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3626, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v25, v26) )
      __debugbreak();
  }
  PartRuntime = ScriptableSv_GetPartRuntime(scriptableIndex, eventParams->partDef);
  if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3630, ASSERT_TYPE_ASSERT, "( partRuntime )", (const char *)&queryFormat, "partRuntime") )
    __debugbreak();
  if ( newState >= 0x80 )
  {
    LODWORD(v26) = 128;
    LODWORD(v25) = newState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3634, ASSERT_TYPE_ASSERT, "( newState ) < ( 128 )", "newState < 128\n\t%i, %i", v25, v26) )
      __debugbreak();
  }
  v8 = newState & 0x7F;
  PartRuntime->stateId = truncate_cast<unsigned short,unsigned int>(v8);
  if ( !eventParams->partDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3640, ASSERT_TYPE_ASSERT, "( eventParams->partDef )", (const char *)&queryFormat, "eventParams->partDef") )
    __debugbreak();
  v9 = eventParams->partDef;
  v10 = (__int64)&v9->states[v8];
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  if ( (*(_DWORD *)(v10 + 8) & 0x80) != 0 )
  {
    if ( *(_DWORD *)(v10 + 24) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3650, ASSERT_TYPE_ASSERT, "( newStateDef.type == Scriptable_StateType_Health )", (const char *)&queryFormat, "newStateDef.type == Scriptable_StateType_Health") )
      __debugbreak();
    _RBX = v9->eventStreamBufferOffsetServer;
    if ( _RBX + 4 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3654, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize") )
      __debugbreak();
    _RAX = InstanceCommonContext->eventStreamBuffer;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbp+28h]
      vmovss  dword ptr [rbx+rax], xmm0
    }
  }
  flags = v9->flags;
  LOWORD(v17) = flags;
  if ( (flags & 4) != 0 && (flags & 0x40000) == 0 )
  {
    ScriptableCommon_AssertCountsInitialized();
    if ( (unsigned int)scriptableIndex >= g_scriptableWorldCounts.runtimeInstanceCount )
    {
      v18 = 0;
      if ( !g_scriptableSv_fixedWorldMap.indices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3689, ASSERT_TYPE_ASSERT, "( g_scriptableSv_fixedWorldMap.indices )", (const char *)&queryFormat, "g_scriptableSv_fixedWorldMap.indices") )
        __debugbreak();
      if ( (unsigned int)scriptableIndex >= g_scriptableSv_fixedWorldMap.indicesCount )
      {
        LODWORD(v26) = g_scriptableSv_fixedWorldMap.indicesCount;
        LODWORD(v25) = scriptableIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3690, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( g_scriptableSv_fixedWorldMap.indicesCount )", "scriptableIndex doesn't index g_scriptableSv_fixedWorldMap.indicesCount\n\t%i not in [0, %i)", v25, v26) )
          __debugbreak();
      }
      partIndex = g_scriptableSv_fixedWorldMap.indices[scriptableIndex];
    }
    else
    {
      v18 = 1;
      partIndex = ScriptableSv_GetReplicatedInstance(scriptableIndex)->partIndex;
    }
    v20 = partIndex + v9->serverControlledFlatId;
    v21 = &ScriptableSv_GetPartDataGroup((const ScriptableWorldType)v18)->partData[v20];
    data = v21->data;
    v21->data = v8 | 0x80;
    ScriptableSv_SetEventExpiration((const ScriptableWorldType)v18, v20, data >> 7, g_scriptableSv_eventTracking.groups[v18].itemLists.currentIndex);
    v17 = v9->flags;
  }
  if ( (v17 & 0x200) != 0 )
  {
    v23 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
    ScriptableSv_RefreshEventUpdateList(scriptableIndex, v23->def, (const ScriptableStateDef *)v10);
  }
  ScriptableCommon_AssertCountsInitialized();
  v24 = Scriptable_Analytics_Zone_SC_Clipmap_S;
  if ( (unsigned int)scriptableIndex < g_scriptableWorldCounts.runtimeInstanceCount )
    v24 = Scriptable_Analytics_Zone_SC_Reserved_S;
  Scriptable_Analytics_AddStateChangeCount(v24, 1);
  ScriptableBg_DebugTrackStateChange(0, scriptableIndex, v9->flatId, v8, level.time);
}

/*
==============
ScriptableSv_ShutdownStateEvents
==============
*/
void ScriptableSv_ShutdownStateEvents(ScriptableEventParams *eventParams)
{
  if ( !eventParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3742, ASSERT_TYPE_ASSERT, "( eventParams )", (const char *)&queryFormat, "eventParams") )
    __debugbreak();
  ScriptableSv_ShutdownActiveEvents(eventParams);
}

/*
==============
ScriptableSv_DamagePartCallback
==============
*/
void ScriptableSv_DamagePartCallback(const ScriptableEventParams *eventParams, const ScriptablePartDef *def, const unsigned int damageTypeFlags, const unsigned int damage)
{
  ScriptableSv_DamagePart(eventParams, def, NULL, NULL, damageTypeFlags, damage);
}

/*
==============
ScriptableSv_FindParentDamagePartName
==============
*/
__int64 ScriptableSv_FindParentDamagePartName(const ScriptableEventParams *eventParams, scr_string_t partName)
{
  unsigned int scriptableIndex; 
  ScriptableInstanceContext *InstanceCommonContext; 
  const XModel *ScriptableModel; 
  const gentity_s *Entity; 
  DObj *ServerDObjForEnt; 
  int v8; 
  __int64 v9; 
  scr_string_t *boneNames; 
  int v11; 

  scriptableIndex = eventParams->scriptableIndex;
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  ScriptableModel = BG_XCompositeModel_GetScriptableModel(InstanceCommonContext);
  if ( ScriptableModel || ScriptableSv_GetInstanceHasEntity(scriptableIndex) && (Entity = ScriptableSv_GetEntity(scriptableIndex), (ServerDObjForEnt = Com_GetServerDObjForEnt(Entity)) != NULL) && ServerDObjForEnt->numModels && (ScriptableModel = *ServerDObjForEnt->models) != NULL )
  {
    v8 = 0;
    v9 = 0i64;
    while ( v8 < ScriptableModel->numBones )
    {
      boneNames = ScriptableModel->boneNames;
      if ( partName == boneNames[v9] )
      {
        if ( v8 )
        {
          v11 = v8 - ScriptableModel->parentList[v8 - ScriptableModel->numRootBones];
          if ( v11 != v8 )
            return (unsigned int)boneNames[v11];
        }
        return 0i64;
      }
      ++v8;
      ++v9;
    }
  }
  return 0i64;
}

/*
==============
ScriptableSv_IsPlayerDamage
==============
*/
_BOOL8 ScriptableSv_IsPlayerDamage(const ScriptableContext context, const entityState_t *attackerEntState)
{
  __int16 otherEntityNum; 
  int number; 

  if ( !attackerEntState )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3820, ASSERT_TYPE_ASSERT, "(attackerEntState)", (const char *)&queryFormat, "attackerEntState") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
  }
  if ( ((attackerEntState->eType - 12) & 0xFFFD) != 0 || (otherEntityNum = attackerEntState->otherEntityNum, otherEntityNum == 2047) || !G_IsEntityInUse(otherEntityNum) || (number = attackerEntState->otherEntityNum, number == 2047) )
    number = attackerEntState->number;
  return number < level.maxclients;
}

/*
==============
ScriptableServer_ArchiveWorldEvents
==============
*/
void ScriptableServer_ArchiveWorldEvents(MemoryFile *memFile, ScriptableWorldEvents *outWorldEvents)
{
  __int64 v4; 
  unsigned int v5; 
  unsigned int *p_itemDataCount; 
  unsigned int v7; 
  unsigned __int64 v8; 
  void *v9; 
  unsigned int p; 
  unsigned __int64 byteCount; 

  v4 = 2i64;
  if ( MemFile_IsWriting(memFile) )
  {
    do
    {
      if ( !outWorldEvents->groups[0].itemData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2268, ASSERT_TYPE_ASSERT, "(r_eventGroup.itemData)", (const char *)&queryFormat, "r_eventGroup.itemData") )
        __debugbreak();
      p = outWorldEvents->groups[0].itemDataCount;
      v5 = 12 * p;
      MemFile_WriteData(memFile, 4ui64, &p);
      p = v5;
      MemFile_WriteData(memFile, 4ui64, &p);
      MemFile_WriteData(memFile, v5, outWorldEvents->groups[0].itemData);
      MemFile_WriteData(memFile, 0x1Cui64, &outWorldEvents->groups[0].itemLists);
      outWorldEvents = (ScriptableWorldEvents *)((char *)outWorldEvents + 40);
      --v4;
    }
    while ( v4 );
  }
  else
  {
    p_itemDataCount = &outWorldEvents->groups[0].itemDataCount;
    do
    {
      if ( !*((_QWORD *)p_itemDataCount - 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2283, ASSERT_TYPE_ASSERT, "(r_eventGroup.itemData)", (const char *)&queryFormat, "r_eventGroup.itemData") )
        __debugbreak();
      MemFile_ReadData(memFile, 4ui64, &p);
      v7 = p;
      MemFile_ReadData(memFile, 4ui64, &byteCount);
      v8 = (unsigned int)byteCount;
      if ( (unsigned int)byteCount > 12 * *p_itemDataCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2289, ASSERT_TYPE_ASSERT, "(itemsDataSize <= itemsCapacity)", (const char *)&queryFormat, "itemsDataSize <= itemsCapacity") )
        __debugbreak();
      v9 = (void *)*((_QWORD *)p_itemDataCount - 1);
      *p_itemDataCount = v7;
      MemFile_ReadData(memFile, v8, v9);
      MemFile_ReadData(memFile, 0x1Cui64, p_itemDataCount + 1);
      p_itemDataCount += 10;
      --v4;
    }
    while ( v4 );
  }
}

/*
==============
ScriptableSv_AddToUpdateLists
==============
*/
void ScriptableSv_AddToUpdateLists(const unsigned int scriptableIndex, const ScriptableDef *def)
{
  unsigned __int64 v3; 
  const dvar_t *v4; 
  unsigned int v5; 
  unsigned __int64 v6; 
  const dvar_t *v7; 
  __int64 v8; 
  __int64 v9; 

  v3 = scriptableIndex;
  ScriptableCommon_AssertCountsInitialized();
  if ( (unsigned int)v3 >= g_scriptableWorldCounts.serverInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 794, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v3, g_scriptableWorldCounts.serverInstanceCount) )
      __debugbreak();
  }
  if ( !ScriptableSv_GetInstanceInUse(v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 795, ASSERT_TYPE_ASSERT, "( ( ScriptableSv_GetInstanceInUse( scriptableIndex ) ) )", "%s\n\t( def.name ) = %s", "( ScriptableSv_GetInstanceInUse( scriptableIndex ) )", def->name) )
    __debugbreak();
  if ( !ScriptableSv_IsServerInstance(v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 796, ASSERT_TYPE_ASSERT, "( ( ScriptableSv_IsServerInstance( scriptableIndex ) ) )", "%s\n\t( def.name ) = %s", "( ScriptableSv_IsServerInstance( scriptableIndex ) )", def->name) )
    __debugbreak();
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 340, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( (def->flags & 0x200) != 0 && ScriptableSv_IsUpdateRequiredForInstance(v3, def) )
  {
    v4 = DCONST_DVARBOOL_scriptable_sv_debug_updates;
    if ( !DCONST_DVARBOOL_scriptable_sv_debug_updates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_sv_debug_updates") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
      Com_Printf(29, "ScriptableSv_AddToUpdateLists: Event Updates requested for instance %i (%s)\n", (unsigned int)v3, def->name);
    if ( (unsigned int)v3 >= 0x3D0A0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v3, 250016) )
      __debugbreak();
    v5 = 0x80000000 >> (v3 & 0x1F);
    v6 = v3 >> 5;
    s_scriptableSv_eventUpdateBits.array[v6] |= v5;
    if ( (unsigned int)v3 >= 0x3D0A0 )
    {
      LODWORD(v9) = 250016;
      LODWORD(v8) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v8, v9) )
        __debugbreak();
    }
    s_scriptableSv_eventUpdateListCompletedBits.array[v6] &= ~v5;
  }
  if ( ScriptableSv_GetInstanceHasEntity(v3) )
  {
    v7 = DCONST_DVARBOOL_scriptable_sv_debug_updates;
    if ( !DCONST_DVARBOOL_scriptable_sv_debug_updates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_sv_debug_updates") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.enabled )
      Com_Printf(29, "ScriptableSv_AddToUpdateLists: Entity Position Update requested for instance %i (%s)\n", (unsigned int)v3, def->name);
    if ( (unsigned int)v3 >= 0x3D0A0 )
    {
      LODWORD(v9) = 250016;
      LODWORD(v8) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v8, v9) )
        __debugbreak();
    }
    s_scriptableSv_entityPositionUpdateBits.array[v3 >> 5] |= 0x80000000 >> (v3 & 0x1F);
  }
}

/*
==============
ScriptableSv_AnimNotetrackEvent
==============
*/
void ScriptableSv_AnimNotetrackEvent(const gentity_s *const ent, scr_string_t note, scr_string_t notifyName)
{
  unsigned int ScriptableIndexForEntity; 
  const ScriptableDef *def; 
  unsigned int i; 
  __int64 v9; 

  if ( ScriptableSv_GetScriptableIndexForEntity(ent) == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3574, ASSERT_TYPE_ASSERT, "( ScriptableSv_IsScriptableEntity( ent ) )", (const char *)&queryFormat, "ScriptableSv_IsScriptableEntity( ent )") )
    __debugbreak();
  if ( !note && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3575, ASSERT_TYPE_ASSERT, "( note != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "note != NULL_SCR_STRING") )
    __debugbreak();
  if ( notifyName == scr_const.scriptable )
  {
    ScriptableIndexForEntity = ScriptableSv_GetScriptableIndexForEntity(ent);
    ScriptableCommon_AssertCountsInitialized();
    if ( ScriptableIndexForEntity >= g_scriptableWorldCounts.serverInstanceCount )
    {
      ScriptableCommon_AssertCountsInitialized();
      LODWORD(v9) = ScriptableIndexForEntity;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3584, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v9, g_scriptableWorldCounts.serverInstanceCount) )
        __debugbreak();
    }
    def = ScriptableSv_GetInstanceCommonContext(ScriptableIndexForEntity)->def;
    if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3588, ASSERT_TYPE_ASSERT, "( def )", (const char *)&queryFormat, "def") )
      __debugbreak();
    for ( i = 0; i < def->numParts; ++i )
      ScriptableSv_RunNotetrackBehaviors(ScriptableIndexForEntity, &def->parts[i], note);
  }
}

/*
==============
ScriptableSv_ArchiveState
==============
*/
void ScriptableSv_ArchiveState(MemoryFile *memFile)
{
  unsigned int v3; 
  unsigned int v4; 
  __int64 v5; 
  char v6; 
  const ScriptableDef *v7; 
  ScriptableInstanceServerContext *v8; 
  ScriptableInstanceServerContext *v9; 
  unsigned __int16 v10; 
  __int16 v11; 
  const char **p_name; 
  const char *v13; 
  unsigned __int8 v14; 
  bitarray<2048> *v15; 
  __int64 v16; 
  unsigned int v17; 
  __int64 v18; 
  unsigned __int64 v19; 
  unsigned int v20; 
  const char *CString; 
  ScriptableDef *v22; 
  const ScriptableDef *v25; 
  char v26; 
  unsigned __int64 linkedObjectIndex; 
  unsigned __int64 v28; 
  char v29; 
  unsigned __int16 eventStreamSizeRequiredServer; 
  ScriptableLinkType linkedObjectType; 
  ScriptableInstanceContext *InstanceCommonContext; 
  bool IsCharacterEntityIndex; 
  unsigned __int8 *EventStreamBuffer; 
  unsigned __int16 eventStreamBufferSize; 
  ScriptableInstanceServerContext *v36; 
  const char *v37; 
  XAssetHeader v38; 
  const char *v39; 
  int v40; 
  const char *v41; 
  XAssetHeader v42; 
  unsigned __int64 v43; 
  unsigned int v44; 
  char *fmt; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  char v50; 
  char v51; 
  char v52; 
  char v53; 
  unsigned __int16 v54; 
  unsigned __int16 v55[2]; 
  unsigned int v56; 
  unsigned int v57; 
  unsigned int v58; 
  unsigned int v59; 
  int v60; 
  unsigned int v61; 
  unsigned int serverInstanceCount; 
  ScriptableDef *def; 
  __int64 v64; 
  ScriptableInstanceServerContext *v65; 
  unsigned int p; 
  unsigned int outEntNum; 
  unsigned __int8 v68; 
  bool v69; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2303, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !MemFile_IsWriting(memFile) )
  {
    MemFile_ReadData(memFile, 1ui64, &p);
    v14 = p;
    if ( (_BYTE)p != 2 )
    {
      if ( (_BYTE)p == 1 && (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF )
      {
        Com_Printf(15, "ScriptableSv_ArchiveState: Loading old VERSION 1 Scriptable Archive under SCRIPTABLE_ARCHIVE_VERSION_1_SP_SUPPORT\n");
      }
      else
      {
        LODWORD(fmt) = 2;
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14406A4F0, 6194i64, v14, fmt);
      }
    }
    ScriptableCommon_ArchiveReplicatedLimits(memFile, &g_scriptableSv_replicatedLimits);
    ScriptableCommon_ArchiveReplicatedInstances(memFile, &g_scriptableSv_replicatedLimits, g_scriptableSv_reservedInstances);
    ScriptableCommon_ArchivePartWorldstate(memFile, &g_scriptableSv_replicatedLimits, &g_scriptableSv_partWorldState);
    ScriptableCommon_ArchiveWorldMap(memFile, &g_scriptableSv_fixedWorldMap);
    ScriptableServer_ArchiveWorldEvents(memFile, &g_scriptableSv_eventTracking);
    ScriptableSv_ArchiveReservedAllocators(memFile, v14);
    MemFile_ReadData(memFile, 4ui64, &p);
    MemFile_ReadData(memFile, 4ui64, &outEntNum);
    if ( p != g_svScriptableRuntimePartStatesCount )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14408C260, 5863i64);
    if ( outEntNum != g_scriptableSVReservedPartRuntimeCount )
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14408C310, 772i64);
    MemFile_ReadData(memFile, 1ui64, &p);
    s_svScriptablesCreated = p;
    MemFile_ReadData(memFile, 1ui64, &p);
    s_svScriptablesStateEntered = p;
    MemFile_ReadData(memFile, 4ui64, &p);
    s_svScriptablesLastUpdateTime = p;
    MemFile_ReadData(memFile, 4ui64, &p);
    s_svScriptableEventExpirationUpdateTimer = p;
    MemFile_ReadData(memFile, 4ui64, &p);
    s_svScriptableNetChecksum = p;
    if ( g_svScriptableRuntimePartStatesCount )
    {
      if ( !g_svScriptableRuntimePartStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2510, ASSERT_TYPE_ASSERT, "(g_svScriptableRuntimePartStates)", (const char *)&queryFormat, "g_svScriptableRuntimePartStates") )
        __debugbreak();
      MemFile_ReadData(memFile, 8i64 * g_svScriptableRuntimePartStatesCount, g_svScriptableRuntimePartStates);
    }
    MemFile_ReadData(memFile, 4ui64, &p);
    g_scriptableSVReservedPartRuntimeFreeHead = p;
    if ( g_scriptableSVReservedPartRuntimeCount )
      MemFile_ReadData(memFile, 8i64 * g_scriptableSVReservedPartRuntimeCount, g_scriptableSVReservedPartRuntimes);
    MemFile_ReadData(memFile, 0x2000ui64, g_scriptableIndexEntLookup);
    if ( Com_GameMode_SupportsFeature(WEAPON_LEAP_IN|0x80) )
      MemFile_ReadData(memFile, 0x7A14ui64, &s_scriptableSv_standaloneParentUpdateBits);
    v15 = &s_scriptableNetworkLODOverrideEntities;
    v16 = 4i64;
    do
    {
      *(_QWORD *)v15->array = 0i64;
      *(_QWORD *)&v15->array[2] = 0i64;
      *(_QWORD *)&v15->array[4] = 0i64;
      v15 = (bitarray<2048> *)((char *)v15 + 64);
      *(_QWORD *)&v15[-1].array[54] = 0i64;
      *(_QWORD *)&v15[-1].array[56] = 0i64;
      *(_QWORD *)&v15[-1].array[58] = 0i64;
      *(_QWORD *)&v15[-1].array[60] = 0i64;
      *(_QWORD *)&v15[-1].array[62] = 0i64;
      --v16;
    }
    while ( v16 );
    ScriptableCommon_AssertCountsInitialized();
    v17 = 0;
    serverInstanceCount = g_scriptableWorldCounts.serverInstanceCount;
    if ( !g_scriptableWorldCounts.serverInstanceCount )
    {
LABEL_165:
      ScriptableSv_ValidateUpdateLists();
      return;
    }
    v18 = 0i64;
    v64 = 0i64;
    while ( 1 )
    {
      MemFile_ReadData(memFile, 1ui64, &p);
      if ( (_BYTE)p )
        break;
      if ( ScriptableSv_GetInstanceInUse(v17) )
      {
        LODWORD(v47) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2537, ASSERT_TYPE_ASSERT, "( ( !ScriptableSv_GetInstanceInUse( scriptableIndex ) ) )", "%s\n\t( scriptableIndex ) = %i", "( !ScriptableSv_GetInstanceInUse( scriptableIndex ) )", v47) )
          __debugbreak();
      }
      if ( v17 >= 0x3D0A0 )
      {
        LODWORD(v47) = 250016;
        LODWORD(v46) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v46, v47) )
          __debugbreak();
      }
      v19 = (unsigned __int64)v17 >> 5;
      v20 = 0x80000000 >> (v17 & 0x1F);
      if ( (v20 & s_scriptableSv_eventUpdateBits.array[v19]) != 0 )
      {
        LODWORD(v47) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2538, ASSERT_TYPE_ASSERT, "( ( !s_scriptableSv_eventUpdateBits.testBit( scriptableIndex ) ) )", "%s\n\t( scriptableIndex ) = %i", "( !s_scriptableSv_eventUpdateBits.testBit( scriptableIndex ) )", v47) )
          __debugbreak();
      }
      if ( v17 >= 0x3D0A0 )
      {
        LODWORD(v47) = 250016;
        LODWORD(v46) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v46, v47) )
          __debugbreak();
      }
      if ( (v20 & s_scriptableSv_entityPositionUpdateBits.array[v19]) != 0 )
      {
        LODWORD(v47) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2539, ASSERT_TYPE_ASSERT, "( ( !s_scriptableSv_entityPositionUpdateBits.testBit( scriptableIndex ) ) )", "%s\n\t( scriptableIndex ) = %i", "( !s_scriptableSv_entityPositionUpdateBits.testBit( scriptableIndex ) )", v47) )
          __debugbreak();
      }
      if ( v17 >= 0x3D0A0 )
      {
        LODWORD(v47) = 250016;
        LODWORD(v46) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v46, v47) )
          __debugbreak();
      }
      if ( (v20 & s_scriptableSv_standaloneParentUpdateBits.array[v19]) != 0 )
      {
        LODWORD(v47) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2540, ASSERT_TYPE_ASSERT, "( ( !s_scriptableSv_standaloneParentUpdateBits.testBit( scriptableIndex ) ) )", "%s\n\t( scriptableIndex ) = %i", "( !s_scriptableSv_standaloneParentUpdateBits.testBit( scriptableIndex ) )", v47) )
          __debugbreak();
      }
LABEL_164:
      ++v17;
      v18 = ++v64;
      if ( v17 >= serverInstanceCount )
        goto LABEL_165;
    }
    CString = MemFile_ReadCString(memFile);
    def = DB_FindXAssetHeader(ASSET_TYPE_SCRIPTABLE, CString, 0).scriptable;
    v22 = def;
    if ( !def )
    {
      LODWORD(fmt) = v17;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14408C400, 5864i64, CString, fmt);
    }
    if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 81, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
      __debugbreak();
    ScriptableCommon_AssertCountsInitialized();
    if ( v17 >= g_scriptableWorldCounts.serverInstanceCount )
    {
      ScriptableCommon_AssertCountsInitialized();
      LODWORD(v47) = g_scriptableWorldCounts.serverInstanceCount;
      LODWORD(v46) = v17;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 82, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v46, v47) )
        __debugbreak();
    }
    _R12 = g_scriptableSv_instanceContexts;
    _R14 = v18;
    if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 90, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
      __debugbreak();
    ScriptableCommon_AssertCountsInitialized();
    if ( v17 >= g_scriptableWorldCounts.serverInstanceCount )
    {
      ScriptableCommon_AssertCountsInitialized();
      LODWORD(v47) = g_scriptableWorldCounts.serverInstanceCount;
      LODWORD(v46) = v17;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 91, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v46, v47) )
        __debugbreak();
    }
    v65 = g_scriptableSv_instanceContexts;
    _R12[_R14].commonContext.def = v22;
    if ( !ScriptableSv_IsServerInstance(v17) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2564, ASSERT_TYPE_ASSERT, "( ScriptableSv_IsServerInstance( scriptableIndex ) )", (const char *)&queryFormat, "ScriptableSv_IsServerInstance( scriptableIndex )") )
      __debugbreak();
    MemFile_ReadData(memFile, 4ui64, &v56);
    _R12[_R14].commonContext.linkedObjectIndex = v56;
    MemFile_ReadData(memFile, 1ui64, &outEntNum);
    v25 = _R12[_R14].commonContext.def;
    v26 = outEntNum;
    _R12[_R14].commonContext.linkedObjectType = outEntNum;
    if ( v25->networkLODRangeOverride && v26 == 1 )
    {
      linkedObjectIndex = _R12[_R14].commonContext.linkedObjectIndex;
      if ( (unsigned int)linkedObjectIndex >= 0x800 )
      {
        LODWORD(v49) = 2048;
        LODWORD(v48) = _R12[_R14].commonContext.linkedObjectIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v48, v49) )
          __debugbreak();
      }
      v28 = linkedObjectIndex >> 5;
      v29 = linkedObjectIndex & 0x1F;
      v22 = def;
      s_scriptableNetworkLODOverrideEntities.array[v28] |= 0x80000000 >> v29;
    }
    if ( ScriptableSv_GetInstanceHasEntity(v17) )
    {
      if ( ScriptableSv_GetInstanceCommonContext(v17)->linkedObjectIndex >= 0x800 )
      {
        LODWORD(v47) = 2048;
        LODWORD(v46) = ScriptableSv_GetInstanceCommonContext(v17)->linkedObjectIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2578, ASSERT_TYPE_ASSERT, "(unsigned)( ScriptableSv_GetLinkObject( scriptableIndex ) ) < (unsigned)( ( sizeof( *array_counter( g_scriptableIndexEntLookup ) ) + 0 ) )", "ScriptableSv_GetLinkObject( scriptableIndex ) doesn't index ARRAY_COUNT( g_scriptableIndexEntLookup )\n\t%i not in [0, %i)", v46, v47) )
          __debugbreak();
      }
      if ( g_scriptableIndexEntLookup[ScriptableSv_GetInstanceCommonContext(v17)->linkedObjectIndex] != v17 )
      {
        LODWORD(v47) = v17;
        LODWORD(v46) = g_scriptableIndexEntLookup[ScriptableSv_GetInstanceCommonContext(v17)->linkedObjectIndex];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2579, ASSERT_TYPE_ASSERT, "( g_scriptableIndexEntLookup[ ScriptableSv_GetLinkObject( scriptableIndex ) ] ) == ( scriptableIndex )", "g_scriptableIndexEntLookup[ ScriptableSv_GetLinkObject( scriptableIndex ) ] == scriptableIndex\n\t%i, %i", v46, v47) )
          __debugbreak();
      }
    }
    MemFile_ReadData(memFile, 2ui64, &v54);
    eventStreamSizeRequiredServer = v22->eventStreamSizeRequiredServer;
    if ( eventStreamSizeRequiredServer != v54 )
    {
      LODWORD(v46) = eventStreamSizeRequiredServer;
      LODWORD(fmt) = v54;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14408C6C0, 6166i64, CString, fmt, v46);
      eventStreamSizeRequiredServer = v22->eventStreamSizeRequiredServer;
    }
    _R12[_R14].commonContext.eventStreamBufferSize = eventStreamSizeRequiredServer;
    if ( eventStreamSizeRequiredServer )
    {
      ScriptableCommon_AssertCountsInitialized();
      if ( v17 < g_scriptableWorldCounts.runtimeInstanceCount )
      {
        linkedObjectType = ScriptableSv_GetInstanceCommonContext(v17)->linkedObjectType;
        InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(v17);
        if ( linkedObjectType == SCRIPTABLE_LINK_ENTITY )
        {
          IsCharacterEntityIndex = BG_IsCharacterEntityIndex(InstanceCommonContext->linkedObjectIndex);
        }
        else
        {
          if ( InstanceCommonContext->linkedObjectType == SCRIPTABLE_LINK_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2608, ASSERT_TYPE_ASSERT, "(!ScriptableSv_GetLinkTypeEquals( scriptableIndex, SCRIPTABLE_LINK_NONE ))", (const char *)&queryFormat, "!ScriptableSv_GetLinkTypeEquals( scriptableIndex, SCRIPTABLE_LINK_NONE )") )
            __debugbreak();
          IsCharacterEntityIndex = 0;
        }
        EventStreamBuffer = Scriptable_Bg_AllocateEventStreamBuffer(IsCharacterEntityIndex, 1, LOCAL_CLIENT_0, _R12[_R14].commonContext.eventStreamBufferSize);
        _R12[_R14].commonContext.eventStreamBuffer = EventStreamBuffer;
        if ( !EventStreamBuffer )
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14408C800, 773i64, _R12[_R14].commonContext.eventStreamBufferSize);
      }
    }
    eventStreamBufferSize = _R12[_R14].commonContext.eventStreamBufferSize;
    if ( eventStreamBufferSize )
      MemFile_ReadData(memFile, eventStreamBufferSize, _R12[_R14].commonContext.eventStreamBuffer);
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [r12+r14*8+20h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [r12+r14*8+24h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [r12+r14*8+28h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [r12+r14*8+2Ch], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [r12+r14*8+30h], xmm0 }
    *(double *)&_XMM0 = MemFile_ReadFloat(memFile);
    __asm { vmovss  dword ptr [r12+r14*8+34h], xmm0 }
    MemFile_ReadData(memFile, 4ui64, &v57);
    _R12[_R14].commonContext.partStateIndex = v57;
    MemFile_ReadData(memFile, 1ui64, &v68);
    _R12[_R14].commonContext.initializationCount = v68;
    MemFile_ReadData(memFile, 4ui64, &v58);
    v36 = v65;
    v65[_R14].collisionContext.scriptableCollisionMain = v58;
    MemFile_ReadData(memFile, 4ui64, &v59);
    v36[_R14].collisionContext.scriptableCollisionDetail = v59;
    MemFile_ReadData(memFile, 1ui64, &v69);
    v36[_R14].collisionContext.neverMoves = v69;
    MemFile_ReadData(memFile, 4ui64, &v60);
    v36[_R14].collisionContext.navmeshObstacleId = v60;
    if ( Com_GameMode_SupportsFeature(WEAPON_LEAP_IN|0x80) )
    {
      MemFile_ReadData(memFile, 1ui64, &v50);
      *((_BYTE *)&_R12[_R14].commonContext.ScriptableInstanceContextSecure + 60) ^= (*((_BYTE *)&_R12[_R14].commonContext.ScriptableInstanceContextSecure + 60) ^ (32 * v50)) & 0x20;
    }
    else
    {
      *((_BYTE *)&_R12[_R14].commonContext.ScriptableInstanceContextSecure + 60) &= ~0x20u;
    }
    MemFile_ReadData(memFile, 2ui64, v55);
    if ( v55[0] < 0x7FFu )
      ScriptableSv_SetDamageOwner(v17, &g_entities[v55[0]]);
    _R12[_R14].commonContext.data.compositeModel = NULL;
    MemFile_ReadData(memFile, 1ui64, &v51);
    v37 = MemFile_ReadCString(memFile);
    if ( v51 )
    {
      if ( v37 )
      {
        if ( *v37 )
        {
          _R12[_R14].commonContext.dataType = SCRIPTABLE_DATA_TYPE_XCOMPOSITEMODEL;
          v38.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_XCOMPOSITEMODEL, v37, 0).physicsLibrary;
          _R12[_R14].commonContext.data.compositeModel = v38.compositeModel;
          if ( !v38.physicsLibrary )
          {
            v39 = "r_context.data.compositeModel";
            v40 = 2672;
            v41 = "( r_context.data.compositeModel )";
            goto LABEL_149;
          }
        }
      }
    }
    else if ( v37 )
    {
      if ( *v37 )
      {
        _R12[_R14].commonContext.dataType = SCRIPTABLE_DATA_TYPE_XMODEL;
        v42.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_XMODEL, v37, 0).physicsLibrary;
        _R12[_R14].commonContext.data.compositeModel = v42.compositeModel;
        if ( !v42.physicsLibrary )
        {
          v39 = "r_context.data.model";
          v40 = 2682;
          v41 = "( r_context.data.model )";
LABEL_149:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", v40, ASSERT_TYPE_ASSERT, v41, (const char *)&queryFormat, v39) )
            __debugbreak();
        }
      }
    }
    MemFile_ReadData(memFile, 1ui64, &v52);
    *((_BYTE *)&_R12[_R14].commonContext.ScriptableInstanceContextSecure + 60) ^= (*((_BYTE *)&_R12[_R14].commonContext.ScriptableInstanceContextSecure + 60) ^ (v52 << 6)) & 0x40;
    MemFile_ReadData(memFile, 1ui64, &v53);
    *((_BYTE *)&_R12[_R14].commonContext.ScriptableInstanceContextSecure + 60) = *((_BYTE *)&_R12[_R14].commonContext.ScriptableInstanceContextSecure + 60) & 0x7F | (v53 << 7);
    MemFile_ReadData(memFile, 4ui64, &v61);
    _R12[_R14].commonContext.reservedStateListHeader = v61;
    if ( v17 >= 0x3D0A0 )
    {
      LODWORD(v49) = 250016;
      LODWORD(v48) = v17;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v48, v49) )
        __debugbreak();
    }
    v43 = (unsigned __int64)v17 >> 5;
    v44 = ~(0x80000000 >> (v17 & 0x1F));
    s_scriptableSv_eventUpdateBits.array[v43] &= v44;
    if ( v17 >= 0x3D0A0 )
    {
      LODWORD(v49) = 250016;
      LODWORD(v48) = v17;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v48, v49) )
        __debugbreak();
    }
    s_scriptableSv_entityPositionUpdateBits.array[v43] &= v44;
    if ( v17 >= 0x3D0A0 )
    {
      LODWORD(v49) = 250016;
      LODWORD(v48) = v17;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v48, v49) )
        __debugbreak();
    }
    s_scriptableSv_standaloneParentUpdateBits.array[v43] &= v44;
    if ( v17 >= 0x3D0A0 )
    {
      LODWORD(v49) = 250016;
      LODWORD(v48) = v17;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v48, v49) )
        __debugbreak();
    }
    s_scriptableSv_eventUpdateListCompletedBits.array[v43] &= v44;
    ScriptableSv_AddToUpdateLists(v17, def);
    goto LABEL_164;
  }
  LOBYTE(p) = 2;
  MemFile_WriteData(memFile, 1ui64, &p);
  ScriptableCommon_ArchiveReplicatedLimits(memFile, &g_scriptableSv_replicatedLimits);
  ScriptableCommon_ArchiveReplicatedInstances(memFile, &g_scriptableSv_replicatedLimits, g_scriptableSv_reservedInstances);
  ScriptableCommon_ArchivePartWorldstate(memFile, &g_scriptableSv_replicatedLimits, &g_scriptableSv_partWorldState);
  ScriptableCommon_ArchiveWorldMap(memFile, &g_scriptableSv_fixedWorldMap);
  ScriptableServer_ArchiveWorldEvents(memFile, &g_scriptableSv_eventTracking);
  ScriptableSv_ArchiveReservedAllocators(memFile, 2u);
  p = g_svScriptableRuntimePartStatesCount;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = g_scriptableSVReservedPartRuntimeCount;
  MemFile_WriteData(memFile, 4ui64, &p);
  LOBYTE(p) = s_svScriptablesCreated;
  MemFile_WriteData(memFile, 1ui64, &p);
  LOBYTE(p) = s_svScriptablesStateEntered;
  MemFile_WriteData(memFile, 1ui64, &p);
  p = s_svScriptablesLastUpdateTime;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = s_svScriptableEventExpirationUpdateTimer;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = s_svScriptableNetChecksum;
  MemFile_WriteData(memFile, 4ui64, &p);
  if ( g_svScriptableRuntimePartStatesCount )
    MemFile_WriteData(memFile, 8i64 * g_svScriptableRuntimePartStatesCount, g_svScriptableRuntimePartStates);
  p = g_scriptableSVReservedPartRuntimeFreeHead;
  MemFile_WriteData(memFile, 4ui64, &p);
  if ( g_scriptableSVReservedPartRuntimeCount )
    MemFile_WriteData(memFile, 8i64 * g_scriptableSVReservedPartRuntimeCount, g_scriptableSVReservedPartRuntimes);
  MemFile_WriteData(memFile, 0x2000ui64, g_scriptableIndexEntLookup);
  if ( Com_GameMode_SupportsFeature(WEAPON_LEAP_IN|0x80) )
    MemFile_WriteData(memFile, 0x7A14ui64, &s_scriptableSv_standaloneParentUpdateBits);
  ScriptableCommon_AssertCountsInitialized();
  v3 = g_scriptableWorldCounts.serverInstanceCount;
  v4 = 0;
  if ( g_scriptableWorldCounts.serverInstanceCount )
  {
    v5 = 0i64;
    do
    {
      LOBYTE(p) = ScriptableSv_GetInstanceInUse(v4);
      v6 = p;
      MemFile_WriteData(memFile, 1ui64, &p);
      if ( v6 )
      {
        if ( !ScriptableSv_IsServerInstance(v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2365, ASSERT_TYPE_ASSERT, "( ScriptableSv_IsServerInstance( scriptableIdx ) )", (const char *)&queryFormat, "ScriptableSv_IsServerInstance( scriptableIdx )") )
          __debugbreak();
        v7 = ScriptableSv_GetInstanceCommonContext(v4)->def;
        if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2369, ASSERT_TYPE_ASSERT, "( def != nullptr )", (const char *)&queryFormat, "def != nullptr") )
          __debugbreak();
        if ( !v7->name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2370, ASSERT_TYPE_ASSERT, "( def->name != nullptr )", (const char *)&queryFormat, "def->name != nullptr") )
          __debugbreak();
        MemFile_WriteCString(memFile, v7->name);
        if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 81, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
          __debugbreak();
        ScriptableCommon_AssertCountsInitialized();
        if ( v4 >= g_scriptableWorldCounts.serverInstanceCount )
        {
          ScriptableCommon_AssertCountsInitialized();
          LODWORD(v47) = g_scriptableWorldCounts.serverInstanceCount;
          LODWORD(v46) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 82, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v46, v47) )
            __debugbreak();
        }
        v8 = g_scriptableSv_instanceContexts;
        if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 90, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
          __debugbreak();
        ScriptableCommon_AssertCountsInitialized();
        if ( v4 >= g_scriptableWorldCounts.serverInstanceCount )
        {
          ScriptableCommon_AssertCountsInitialized();
          LODWORD(v47) = g_scriptableWorldCounts.serverInstanceCount;
          LODWORD(v46) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 91, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v46, v47) )
            __debugbreak();
        }
        v9 = g_scriptableSv_instanceContexts;
        p = v8[v5].commonContext.linkedObjectIndex;
        MemFile_WriteData(memFile, 4ui64, &p);
        LOBYTE(p) = v8[v5].commonContext.linkedObjectType;
        MemFile_WriteData(memFile, 1ui64, &p);
        LOWORD(p) = v8[v5].commonContext.eventStreamBufferSize;
        MemFile_WriteData(memFile, 2ui64, &p);
        v10 = v8[v5].commonContext.eventStreamBufferSize;
        if ( v10 )
          MemFile_WriteData(memFile, v10, v8[v5].commonContext.eventStreamBuffer);
        MemFile_WriteData(memFile, 0xCui64, &v8[v5].commonContext.origin);
        MemFile_WriteData(memFile, 0xCui64, &v8[v5].commonContext.angles);
        p = v8[v5].commonContext.partStateIndex;
        MemFile_WriteData(memFile, 4ui64, &p);
        LOBYTE(p) = v8[v5].commonContext.initializationCount;
        MemFile_WriteData(memFile, 1ui64, &p);
        p = v9[v5].collisionContext.scriptableCollisionMain;
        MemFile_WriteData(memFile, 4ui64, &p);
        p = v9[v5].collisionContext.scriptableCollisionDetail;
        MemFile_WriteData(memFile, 4ui64, &p);
        LOBYTE(p) = v9[v5].collisionContext.neverMoves;
        MemFile_WriteData(memFile, 1ui64, &p);
        p = v9[v5].collisionContext.navmeshObstacleId;
        MemFile_WriteData(memFile, 4ui64, &p);
        if ( Com_GameMode_SupportsFeature(WEAPON_LEAP_IN|0x80) )
        {
          LOBYTE(p) = (*((_BYTE *)&v8[v5].commonContext.ScriptableInstanceContextSecure + 60) & 0x20) != 0;
          MemFile_WriteData(memFile, 1ui64, &p);
        }
        ScriptableSv_GetDamageOwner(v4, &outEntNum);
        v11 = outEntNum;
        if ( outEntNum > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)outEntNum, "unsigned", outEntNum) )
          __debugbreak();
        LOWORD(p) = v11;
        MemFile_WriteData(memFile, 2ui64, &p);
        LOBYTE(p) = v8[v5].commonContext.dataType == SCRIPTABLE_DATA_TYPE_XCOMPOSITEMODEL;
        MemFile_WriteData(memFile, 1ui64, &p);
        p_name = &v8[v5].commonContext.data.compositeModel->name;
        v13 = (char *)&queryFormat.fmt + 3;
        if ( p_name )
          v13 = *p_name;
        MemFile_WriteCString(memFile, v13);
        LOBYTE(p) = (*((_BYTE *)&v8[v5].commonContext.ScriptableInstanceContextSecure + 60) & 0x40) != 0;
        MemFile_WriteData(memFile, 1ui64, &p);
        LOBYTE(p) = *((_BYTE *)&v8[v5].commonContext.ScriptableInstanceContextSecure + 60) >> 7;
        MemFile_WriteData(memFile, 1ui64, &p);
        p = v8[v5].commonContext.reservedStateListHeader;
        MemFile_WriteData(memFile, 4ui64, &p);
      }
      ++v4;
      ++v5;
    }
    while ( v4 < v3 );
  }
}

/*
==============
ScriptableSv_AreScriptablesCreated
==============
*/
_BOOL8 ScriptableSv_AreScriptablesCreated()
{
  return s_svScriptablesCreated;
}

/*
==============
ScriptableSv_CanBeGrabbed
==============
*/
bool ScriptableSv_CanBeGrabbed(const BgWeaponMap *weaponMap, const playerState_s *ps, const unsigned int scriptableIndex)
{
  const dvar_t *v6; 
  const ScriptableDef *def; 
  const BG_SpawnGroup_Loot_ItemDef *LootItemDef; 
  BG_SpawnGroup_Loot_Table *v9; 
  const BG_SpawnGroup_Loot_ItemDef *v10; 
  const BG_SpawnGroup_Loot_ItemDef *v11; 
  BgWeaponHandle v12; 
  const Weapon *Weapon; 
  __int64 v15; 
  __int64 v16; 

  if ( scriptableIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 4089, ASSERT_TYPE_ASSERT, "( scriptableIndex ) != ( SCRIPTABLE_INVALID_INSTANCE_INDEX )", "%s != %s\n\t%i, %i", "scriptableIndex", "SCRIPTABLE_INVALID_INSTANCE_INDEX", -1, -1) )
    __debugbreak();
  v6 = DVARBOOL_scriptable_sv_weapon_pickup_check_enabled;
  if ( !DVARBOOL_scriptable_sv_weapon_pickup_check_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_sv_weapon_pickup_check_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( !v6->current.enabled )
    return 1;
  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.totalInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    LODWORD(v16) = g_scriptableWorldCounts.totalInstanceCount;
    LODWORD(v15) = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 4061, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  def = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
  if ( !def )
    return 1;
  if ( (def->flags & 0x20000) == 0 )
    return 1;
  LootItemDef = ScriptableSv_GetLootItemDef(scriptableIndex);
  if ( !LootItemDef )
    return 1;
  v9 = s_scriptableSvLootTable;
  if ( (!s_scriptableSvLootTable || s_scriptableSvLootTable->itemTypeIndexCache == 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 4081, ASSERT_TYPE_ASSERT, "(lootTable && ( lootTable->itemTypeIndexCache != (0xFF) ))", (const char *)&queryFormat, "lootTable && ( lootTable->itemTypeIndexCache != SPAWNGROUP_LOOT_ITEM_TYPE_INVALID_INDEX )") )
    __debugbreak();
  if ( v9->itemTypeIndexWeapon != LootItemDef->type )
    return 1;
  v10 = ScriptableSv_GetLootItemDef(scriptableIndex);
  v11 = v10;
  if ( v10 )
  {
    if ( BG_SpawnGroup_Loot_IsCustomWeaponItemDef(v10) )
      LOWORD(v10) = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->extraPayload;
    else
      LODWORD(v10) = v11->weaponIndex;
  }
  v12.m_mapEntryId = (unsigned __int16)v10;
  if ( !(_WORD)v10 )
    return 0;
  if ( !BgWeaponMap::IsEntryValid((BgWeaponMap *)weaponMap, (unsigned __int16)v10) )
    return 0;
  Weapon = BgWeaponMap::GetWeapon((BgWeaponMap *)weaponMap, v12);
  return !BG_DoubleRiotShieldCheck(weaponMap, Weapon, ps);
}

/*
==============
ScriptableSv_CheckIsScriptAccessAllowed
==============
*/
void ScriptableSv_CheckIsScriptAccessAllowed(const unsigned int scriptableIndex, const scr_string_t otherName)
{
  const char *v2; 
  const char *v5; 
  ScriptableInstanceContext *InstanceCommonContext; 
  const char *name; 
  const char *v8; 
  ScriptableInstanceContext *v9; 

  v2 = "<Unknown>";
  if ( !s_svScriptablesCreated )
  {
    v5 = SL_ConvertToString(otherName);
    InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
    if ( InstanceCommonContext->def )
      name = InstanceCommonContext->def->name;
    else
      name = "<Unknown>";
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14408D150, 774i64, scriptableIndex, name, v5);
  }
  if ( !s_svScriptablesStateEntered )
  {
    v8 = SL_ConvertToString(otherName);
    v9 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
    if ( v9->def )
      v2 = v9->def->name;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14408D230, 775i64, scriptableIndex, v2, v8);
  }
}

/*
==============
ScriptableSv_ClearCounts
==============
*/
void ScriptableSv_ClearCounts(void)
{
  g_scriptableSv_replicatedLimitsInitialized = 0;
  ScriptableMsgWrite_ShutdownCounts();
  ScriptableCommon_ShutdownWorldCounts(SBL_CONTEXT_SERVER, &g_scriptableSv_replicatedLimits);
}

/*
==============
ScriptableSv_ClearScriptableIndexForEntity
==============
*/
void ScriptableSv_ClearScriptableIndexForEntity(const unsigned int scriptableIndex, const gentity_s *const ent)
{
  int number; 
  ScriptableInstanceContext *InstanceCommonContext; 
  __int64 v6; 
  __int64 v7; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 433, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->r.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 434, ASSERT_TYPE_ASSERT, "( ent->r.isInUse )", (const char *)&queryFormat, "ent->r.isInUse") )
    __debugbreak();
  if ( ent->s.number >= 0x800u )
  {
    LODWORD(v6) = ent->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 435, ASSERT_TYPE_ASSERT, "(unsigned)( ent->s.number ) < (unsigned)( ( sizeof( *array_counter( g_scriptableIndexEntLookup ) ) + 0 ) )", "ent->s.number doesn't index ARRAY_COUNT( g_scriptableIndexEntLookup )\n\t%i not in [0, %i)", v6, 2048) )
      __debugbreak();
  }
  if ( g_scriptableIndexEntLookup[ent->s.number] == -1 )
  {
    LODWORD(v7) = -1;
    LODWORD(v6) = -1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 436, ASSERT_TYPE_ASSERT, "( g_scriptableIndexEntLookup[ent->s.number] ) != ( SCRIPTABLE_INVALID_INSTANCE_INDEX )", "g_scriptableIndexEntLookup[ent->s.number] != SCRIPTABLE_INVALID_INSTANCE_INDEX\n\t%i, %i", v6, v7) )
      __debugbreak();
  }
  if ( scriptableIndex == -1 )
  {
    LODWORD(v7) = -1;
    LODWORD(v6) = -1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 437, ASSERT_TYPE_ASSERT, "( scriptableIndex ) != ( SCRIPTABLE_INVALID_INSTANCE_INDEX )", "scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX\n\t%i, %i", v6, v7) )
      __debugbreak();
  }
  number = ent->s.number;
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  if ( InstanceCommonContext->linkedObjectType != SCRIPTABLE_LINK_ENTITY || InstanceCommonContext->linkedObjectIndex != number )
  {
    LODWORD(v7) = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 440, ASSERT_TYPE_ASSERT, "( ( ScriptableSv_GetLinkEquals( scriptableIndex, SCRIPTABLE_LINK_ENTITY, ent->s.number ) ) )", "%s\n\t( scriptableIndex ) = %i", "( ScriptableSv_GetLinkEquals( scriptableIndex, SCRIPTABLE_LINK_ENTITY, ent->s.number ) )", v7) )
      __debugbreak();
  }
  ScriptableSv_ClearLink(scriptableIndex);
  g_scriptableIndexEntLookup[ent->s.number] = -1;
}

/*
==============
ScriptableSv_ConvertStandaloneParentEntityPoseToWorldSpace
==============
*/
void ScriptableSv_ConvertStandaloneParentEntityPoseToWorldSpace(const unsigned int scriptableIndex, const gentity_s *const parent, const vec3_t *localOrigin, const vec3_t *localAngles, vec3_t *outWorldOrigin, vec3_t *outWorldAngles)
{
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v20; 
  tmat43_t<vec3_t> out; 

  _RSI = outWorldOrigin;
  _RDI = localOrigin;
  _RBX = parent;
  if ( !parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2160, ASSERT_TYPE_ASSERT, "( parent )", (const char *)&queryFormat, "parent") )
    __debugbreak();
  if ( !_RBX->r.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2161, ASSERT_TYPE_ASSERT, "( parent->r.isInUse )", (const char *)&queryFormat, "parent->r.isInUse") )
    __debugbreak();
  AnglesToAxis(&_RBX->r.currentAngles, (tmat33_t<vec3_t> *)&axis);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+130h]
    vmovss  xmm1, dword ptr [rbx+134h]
    vmovss  [rsp+0F8h+var_A4], xmm0
    vmovss  xmm0, dword ptr [rbx+138h]
    vmovss  [rsp+0F8h+var_9C], xmm0
    vmovss  [rsp+0F8h+var_A0], xmm1
  }
  AnglesToAxis(localAngles, (tmat33_t<vec3_t> *)&v20);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rdi+4]
    vmovss  [rsp+0F8h+var_74], xmm0
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+0F8h+var_6C], xmm0
    vmovss  [rsp+0F8h+var_70], xmm1
  }
  MatrixMultiply43(&v20, &axis, &out);
  AxisToAngles((const tmat33_t<vec3_t> *)&out, outWorldAngles);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0F8h+out+24h]
    vmovss  xmm1, dword ptr [rsp+0F8h+out+28h]
    vmovss  dword ptr [rsi], xmm0
    vmovss  xmm0, dword ptr [rsp+0F8h+out+2Ch]
    vmovss  dword ptr [rsi+8], xmm0
    vmovss  dword ptr [rsi+4], xmm1
  }
}

/*
==============
ScriptableSv_CopyCacheContentsToOutItemsList
==============
*/
void ScriptableSv_CopyCacheContentsToOutItemsList(unsigned __int16 cacheIndex, const char **out_itemNames, int *out_itemCount)
{
  int v6; 
  __int64 v7; 
  unsigned __int8 v8; 
  BG_SpawnGroup_Loot_Cache *v9; 
  unsigned __int8 itemCount; 
  __int64 v11; 
  unsigned __int8 itemDefCount; 
  unsigned __int8 v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 

  if ( !out_itemNames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1157, ASSERT_TYPE_ASSERT, "( out_itemNames )", (const char *)&queryFormat, "out_itemNames") )
    __debugbreak();
  if ( !out_itemCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1158, ASSERT_TYPE_ASSERT, "( out_itemCount )", (const char *)&queryFormat, "out_itemCount") )
    __debugbreak();
  if ( cacheIndex >= s_svScriptableLootCaches.cacheCount )
  {
    LODWORD(v15) = cacheIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1159, ASSERT_TYPE_ASSERT, "(unsigned)( cacheIndex ) < (unsigned)( s_svScriptableLootCaches.cacheCount )", "cacheIndex doesn't index s_svScriptableLootCaches.cacheCount\n\t%i not in [0, %i)", v15, s_svScriptableLootCaches.cacheCount) )
      __debugbreak();
  }
  v6 = *out_itemCount;
  v7 = cacheIndex;
  v8 = 0;
  v9 = &s_svScriptableLootCaches.caches[v7];
  itemCount = v9->itemCount;
  if ( itemCount )
  {
    do
    {
      if ( v8 >= (unsigned int)v6 )
        break;
      v11 = v8;
      itemDefCount = s_scriptableSvLootTable->itemDefCount;
      v13 = v9->items[v8];
      if ( v13 >= itemDefCount )
      {
        LODWORD(v16) = itemDefCount;
        LODWORD(v15) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1167, ASSERT_TYPE_ASSERT, "(unsigned)( itemDefIndex ) < (unsigned)( s_scriptableSvLootTable->itemDefCount )", "itemDefIndex doesn't index s_scriptableSvLootTable->itemDefCount\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      ++v8;
      out_itemNames[v11] = s_scriptableSvLootTable->itemDefs[(unsigned __int64)v13].name;
      itemCount = v9->itemCount;
    }
    while ( v8 < itemCount );
  }
  v14 = itemCount;
  if ( v6 < itemCount )
    v14 = v6;
  *out_itemCount = v14;
}

/*
==============
ScriptableSv_DecommitUnusedMemory
==============
*/
void ScriptableSv_DecommitUnusedMemory(void)
{
  if ( !s_svScriptableRuntimeHunk && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 284, ASSERT_TYPE_ASSERT, "( s_svScriptableRuntimeHunk != nullptr )", (const char *)&queryFormat, "s_svScriptableRuntimeHunk != nullptr") )
    __debugbreak();
  Mem_HunkUser_DecommitUnused(s_svScriptableRuntimeHunk);
}

/*
==============
ScriptableSv_DestroyCollision
==============
*/
void ScriptableSv_DestroyCollision(const unsigned int scriptableIndex)
{
  ScriptableCollisionServerContext *InstanceCollisionContext; 
  unsigned int navmeshObstacleId; 
  Scriptable_Analytics_Zone v4; 

  InstanceCollisionContext = ScriptableSv_GetInstanceCollisionContext(scriptableIndex);
  navmeshObstacleId = InstanceCollisionContext->navmeshObstacleId;
  if ( navmeshObstacleId )
  {
    Nav_DestroyObstacleByID(navmeshObstacleId);
    navmeshObstacleId = 0;
    InstanceCollisionContext->navmeshObstacleId = 0;
  }
  if ( InstanceCollisionContext->scriptableCollisionMain != -1 )
  {
    ScriptableCommon_AssertCountsInitialized();
    v4 = Scriptable_Analytics_Zone_SC_Clipmap_S;
    if ( scriptableIndex < g_scriptableWorldCounts.runtimeInstanceCount )
      v4 = Scriptable_Analytics_Zone_SC_Reserved_S;
    Scriptable_Analytics_AddCollisionInstanceCount(v4, -1);
    if ( InstanceCollisionContext->scriptableCollisionDetail == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3855, ASSERT_TYPE_ASSERT, "( r_collisionContext.scriptableCollisionDetail != 0xFFFFFFFF )", (const char *)&queryFormat, "r_collisionContext.scriptableCollisionDetail != PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    Physics_DestroyInstance(PHYSICS_WORLD_ID_FIRST, InstanceCollisionContext->scriptableCollisionMain, 1);
    Physics_DestroyInstance(PHYSICS_WORLD_ID_SERVER_DETAIL, InstanceCollisionContext->scriptableCollisionDetail, 0);
    navmeshObstacleId = InstanceCollisionContext->navmeshObstacleId;
    *(_QWORD *)&InstanceCollisionContext->scriptableCollisionMain = -1i64;
  }
  if ( navmeshObstacleId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3863, ASSERT_TYPE_ASSERT, "( r_collisionContext.navmeshObstacleId == 0 )", (const char *)&queryFormat, "r_collisionContext.navmeshObstacleId == 0") )
    __debugbreak();
  if ( InstanceCollisionContext->scriptableCollisionMain != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3864, ASSERT_TYPE_ASSERT, "( r_collisionContext.scriptableCollisionMain == 0xFFFFFFFF )", (const char *)&queryFormat, "r_collisionContext.scriptableCollisionMain == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
  if ( InstanceCollisionContext->scriptableCollisionDetail != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3865, ASSERT_TYPE_ASSERT, "( r_collisionContext.scriptableCollisionDetail == 0xFFFFFFFF )", (const char *)&queryFormat, "r_collisionContext.scriptableCollisionDetail == PHYSICSINSTANCEID_INVALID") )
    __debugbreak();
}

/*
==============
ScriptableSv_DestroyMemory
==============
*/
void ScriptableSv_DestroyMemory(void)
{
  if ( s_svScriptableRuntimeHunk )
  {
    Mem_HunkUser_Destroy(s_svScriptableRuntimeHunk);
    s_svScriptableRuntimeHunk = NULL;
  }
}

/*
==============
ScriptableSv_DisableQuestPointIndex
==============
*/
void ScriptableSv_DisableQuestPointIndex(const unsigned __int16 pointIndex)
{
  unsigned __int16 v1; 
  unsigned __int16 v2; 

  v1 = s_scriptableSvLootQuestPointCount;
  v2 = 0;
  if ( s_scriptableSvLootQuestPointCount )
  {
    while ( s_scriptableSvLootQuestPointIndices[v2] != pointIndex )
    {
      if ( ++v2 >= s_scriptableSvLootQuestPointCount )
        return;
    }
    --s_scriptableSvLootQuestPointCount;
    s_scriptableSvLootQuestPointIndices[v2] = s_scriptableSvLootQuestPointIndices[(unsigned __int16)(v1 - 1)];
  }
}

/*
==============
ScriptableSv_GetCallbackTable
==============
*/
ScriptableEventCallbackTable *ScriptableSv_GetCallbackTable()
{
  return &s_svCallbackTable;
}

/*
==============
ScriptableSv_GetLootActive
==============
*/
_BOOL8 ScriptableSv_GetLootActive()
{
  return s_svScriptableLootActive;
}

/*
==============
ScriptableSv_GetLootCache
==============
*/
char ScriptableSv_GetLootCache(const unsigned int scriptableIndex, int setIndex, const char **out_itemNames, int *out_itemCount)
{
  const BG_SpawnGroup_Loot_ItemDef *LootItemDef; 
  const BG_SpawnGroup_Loot_ItemDef *v9; 
  unsigned __int8 cacheTypeIndex; 
  __int64 v11; 
  unsigned __int16 scriptPoolCount; 
  __int64 v14; 

  if ( !out_itemNames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1176, ASSERT_TYPE_ASSERT, "( out_itemNames )", (const char *)&queryFormat, "out_itemNames") )
    __debugbreak();
  if ( !out_itemCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1177, ASSERT_TYPE_ASSERT, "( out_itemCount )", (const char *)&queryFormat, "out_itemCount") )
    __debugbreak();
  if ( s_scriptableSvLootTable )
  {
    LootItemDef = ScriptableSv_GetLootItemDef(scriptableIndex);
    v9 = LootItemDef;
    if ( LootItemDef )
    {
      cacheTypeIndex = LootItemDef->cacheTypeIndex;
      if ( cacheTypeIndex )
      {
        if ( cacheTypeIndex >= s_svScriptableLootCaches.cacheTypeCount )
        {
          LODWORD(v14) = cacheTypeIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1192, ASSERT_TYPE_ASSERT, "(unsigned)( lootItemDef->cacheTypeIndex ) < (unsigned)( s_svScriptableLootCaches.cacheTypeCount )", "lootItemDef->cacheTypeIndex doesn't index s_svScriptableLootCaches.cacheTypeCount\n\t%i not in [0, %i)", v14, s_svScriptableLootCaches.cacheTypeCount) )
            __debugbreak();
        }
        v11 = v9->cacheTypeIndex;
        if ( setIndex >= 0 && setIndex <= s_svScriptableLootCaches.cacheTypes[v11].cacheSetCount )
        {
          ScriptableCommon_AssertCountsInitialized();
          if ( scriptableIndex >= g_scriptableWorldCounts.runtimeInstanceCount )
          {
            ScriptableCommon_AssertCountsInitialized();
            ScriptableSv_CopyCacheContentsToOutItemsList(setIndex + s_svScriptableLootCaches.itemSpawnedIndexToCacheIndex[scriptableIndex - g_scriptableWorldCounts.runtimeInstanceCount], out_itemNames, out_itemCount);
            return 1;
          }
          scriptPoolCount = s_svScriptableLootCaches.cacheTypes[v11].scriptPoolCount;
          if ( scriptPoolCount )
          {
            ScriptableSv_CopyCacheContentsToOutItemsList(s_svScriptableLootCaches.cacheTypes[v11].scriptPoolFirst + scriptableIndex % scriptPoolCount, out_itemNames, out_itemCount);
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

/*
==============
ScriptableSv_GetLootChecksum
==============
*/
__int64 ScriptableSv_GetLootChecksum()
{
  return s_svScriptableLootTableChecksum;
}

/*
==============
ScriptableSv_GetLootItemDef
==============
*/
const BG_SpawnGroup_Loot_ItemDef *ScriptableSv_GetLootItemDef(const unsigned int scriptableIndex)
{
  const ScriptableDef *def; 

  if ( ScriptableSv_GetInstanceInUse(scriptableIndex) )
  {
    def = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
    if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3903, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
    return ScriptableSv_GetLootItemDefByScriptableDef(def);
  }
  else
  {
    Com_PrintError(29, "%s called with an invalid instance %d (no def)\n", "ScriptableSv_GetLootItemDef", scriptableIndex);
    return 0i64;
  }
}

/*
==============
ScriptableSv_GetLootItemDefByScriptableDef
==============
*/
ntl::red_black_tree_node_base *ScriptableSv_GetLootItemDefByScriptableDef(const ScriptableDef *const def)
{
  BG_SpawnGroup_Loot_Table *v2; 
  ntl::fixed_map<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *,200,ntl::less<ScriptableDef const *,ScriptableDef const *> > *scriptableDefMap; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 

  if ( (def->flags & 0x20000) == 0 )
    return 0i64;
  v2 = s_scriptableSvLootTable;
  if ( !s_scriptableSvLootTable )
  {
    Com_PrintError(29, "Missing BR loot table. Ensure you are using the appropriate br_* config file\n");
    return 0i64;
  }
  if ( !s_scriptableSvLootTable->itemDefCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3876, ASSERT_TYPE_ASSERT, "(table->itemDefCount)", (const char *)&queryFormat, "table->itemDefCount") )
    __debugbreak();
  if ( !v2->scriptableDefMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3877, ASSERT_TYPE_ASSERT, "(table->scriptableDefMap)", (const char *)&queryFormat, "table->scriptableDefMap") )
    __debugbreak();
  scriptableDefMap = v2->scriptableDefMap;
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
ScriptableSv_GetLootSeed
==============
*/
__int64 ScriptableSv_GetLootSeed()
{
  return s_svScriptableLootSeed;
}

/*
==============
ScriptableSv_GetLootSpawnedCountForItem
==============
*/
__int64 ScriptableSv_GetLootSpawnedCountForItem(const char *itemDefName)
{
  BG_SpawnGroup_Loot_Table *v2; 
  unsigned __int8 v3; 

  if ( !itemDefName )
    return 0i64;
  if ( !*itemDefName )
    return 0i64;
  v2 = s_scriptableSvLootTable;
  if ( !s_scriptableSvLootTable )
    return 0i64;
  if ( !s_svScriptableLootActive )
    return 0i64;
  v3 = 1;
  if ( s_scriptableSvLootTable->itemDefCount <= 1u )
    return 0i64;
  while ( I_strncmp(itemDefName, v2->itemDefs[(unsigned __int64)v3].name, 0x7FFFFFFFui64) )
  {
    v2 = s_scriptableSvLootTable;
    if ( ++v3 >= s_scriptableSvLootTable->itemDefCount )
      return 0i64;
  }
  return s_svScriptableLootCounts.itemCountByDef[v3];
}

/*
==============
ScriptableSv_GetLootSpawnedCountForRarity
==============
*/
__int64 ScriptableSv_GetLootSpawnedCountForRarity(int rarityIndex)
{
  __int64 v1; 
  int v4; 

  v1 = rarityIndex;
  if ( (unsigned int)rarityIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1040, ASSERT_TYPE_ASSERT, "(unsigned)( rarityIndex ) < (unsigned)( 8 )", "rarityIndex doesn't index SPAWNGROUP_LOOT_MAX_RARITIES\n\t%i not in [0, %i)", rarityIndex, v4) )
      __debugbreak();
  }
  if ( s_svScriptableLootActive )
    return s_svScriptableLootCounts.itemCountByRarity[v1];
  else
    return 0i64;
}

/*
==============
ScriptableSv_GetLootSpawnedCountForType
==============
*/
__int64 ScriptableSv_GetLootSpawnedCountForType(const char *typeName)
{
  BG_SpawnGroup_Loot_Table *v2; 
  int v3; 

  if ( !typeName )
    return 0i64;
  if ( !*typeName )
    return 0i64;
  v2 = s_scriptableSvLootTable;
  if ( !s_scriptableSvLootTable )
    return 0i64;
  if ( !s_svScriptableLootActive )
    return 0i64;
  v3 = 0;
  if ( !s_scriptableSvLootTable->itemTypeCount )
    return 0i64;
  while ( I_strncmp(typeName, v2->itemTypes[v3], 0x7FFFFFFFui64) )
  {
    v2 = s_scriptableSvLootTable;
    if ( ++v3 >= (unsigned int)s_scriptableSvLootTable->itemTypeCount )
      return 0i64;
  }
  return s_svScriptableLootCounts.itemCountByType[v3];
}

/*
==============
ScriptableSv_GetLootTable
==============
*/
BG_SpawnGroup_Loot_Table *ScriptableSv_GetLootTable()
{
  return s_scriptableSvLootTable;
}

/*
==============
ScriptableSv_GetLootTableFilter
==============
*/
const char *ScriptableSv_GetLootTableFilter()
{
  const dvar_t *v0; 

  v0 = DVARSTR_loot_table_filter;
  if ( !DVARSTR_loot_table_filter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "loot_table_filter") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.string;
}

/*
==============
ScriptableSv_GetLootTableName
==============
*/
const char *ScriptableSv_GetLootTableName()
{
  const dvar_t *v0; 

  v0 = DVARSTR_loot_table_name;
  if ( !DVARSTR_loot_table_name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "loot_table_name") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.string;
}

/*
==============
ScriptableSv_GetLootTableWeaponHandles
==============
*/
unsigned int *ScriptableSv_GetLootTableWeaponHandles(int *weaponHandleCount)
{
  *weaponHandleCount = s_lootTableWeaponHandleCount;
  return s_lootTableWeaponHandles;
}

/*
==============
ScriptableSv_GetLootTableZones
==============
*/
char *ScriptableSv_GetLootTableZones()
{
  return s_svScriptableLootTableZone;
}

/*
==============
ScriptableSv_GetNetChecksum
==============
*/
__int64 ScriptableSv_GetNetChecksum()
{
  if ( !g_svScriptablesInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1549, ASSERT_TYPE_ASSERT, "( g_svScriptablesInitialized )", (const char *)&queryFormat, "g_svScriptablesInitialized") )
    __debugbreak();
  return s_svScriptableNetChecksum;
}

/*
==============
ScriptableSv_GetNetworkLODRangeOverrideEntities
==============
*/
bitarray<2048> *ScriptableSv_GetNetworkLODRangeOverrideEntities()
{
  return &s_scriptableNetworkLODOverrideEntities;
}

/*
==============
ScriptableSv_GetPartDataGroup
==============
*/
ScriptablePartWorldGroupState *ScriptableSv_GetPartDataGroup(const ScriptableWorldType partType)
{
  unsigned __int8 v1; 
  int v3; 
  int v4; 

  v1 = partType;
  if ( (unsigned __int8)partType >= (unsigned int)COUNT )
  {
    v4 = 2;
    v3 = (unsigned __int8)partType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 220, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( partType ) ) < (unsigned)( ( sizeof( *array_counter( g_scriptableSv_partWorldState.groups ) ) + 0 ) )", "static_cast<uint>( partType ) doesn't index ARRAY_COUNT( g_scriptableSv_partWorldState.groups )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return (ScriptablePartWorldGroupState *)&g_scriptableSv_partWorldState + v1;
}

/*
==============
ScriptableSv_GetPartEventState
==============
*/
__int64 ScriptableSv_GetPartEventState(const ScriptableWorldType partType, const unsigned int partWorldIndex)
{
  __int64 v2; 
  unsigned __int8 v3; 
  __int64 v5; 
  int v6; 
  __int64 v7; 
  int v8; 

  v2 = partWorldIndex;
  v3 = partType;
  if ( (unsigned __int8)partType >= (unsigned int)COUNT )
  {
    v8 = 2;
    v6 = (unsigned __int8)partType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 220, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( partType ) ) < (unsigned)( ( sizeof( *array_counter( g_scriptableSv_partWorldState.groups ) ) + 0 ) )", "static_cast<uint>( partType ) doesn't index ARRAY_COUNT( g_scriptableSv_partWorldState.groups )\n\t%i not in [0, %i)", v6, v8) )
      __debugbreak();
  }
  if ( v3 >= 2u )
  {
    LODWORD(v7) = 2;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 227, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( partType ) ) < (unsigned)( ( sizeof( *array_counter( g_scriptableSv_replicatedLimits.partWorldLimits ) ) + 0 ) )", "static_cast<uint>( partType ) doesn't index ARRAY_COUNT( g_scriptableSv_replicatedLimits.partWorldLimits )\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= g_scriptableSv_replicatedLimits.partWorldLimits[v3] )
  {
    if ( v3 >= 2u )
    {
      LODWORD(v7) = 2;
      LODWORD(v5) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 227, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( partType ) ) < (unsigned)( ( sizeof( *array_counter( g_scriptableSv_replicatedLimits.partWorldLimits ) ) + 0 ) )", "static_cast<uint>( partType ) doesn't index ARRAY_COUNT( g_scriptableSv_replicatedLimits.partWorldLimits )\n\t%i not in [0, %i)", v5, v7) )
        __debugbreak();
    }
    LODWORD(v7) = g_scriptableSv_replicatedLimits.partWorldLimits[v3];
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2750, ASSERT_TYPE_ASSERT, "(unsigned)( partWorldIndex ) < (unsigned)( ScriptableSv_GetPartTypeLimit( partType ) )", "partWorldIndex doesn't index ScriptableSv_GetPartTypeLimit( partType )\n\t%i not in [0, %i)", v5, v7) )
      __debugbreak();
  }
  return g_scriptableSv_partWorldState.groups[v3].partData[v2].data >> 7;
}

/*
==============
ScriptableSv_GetPartScriptedDefFromName
==============
*/
ScriptablePartDef *ScriptableSv_GetPartScriptedDefFromName(const unsigned int scriptableIndex, const scr_string_t partName, const bool errorOnFailure)
{
  const ScriptableDef *def; 
  ScriptablePartDef *result; 
  const char *v8; 
  const char *v9; 
  ScriptableInstanceContext *v10; 
  const char *v11; 
  const char *name; 
  const char *v13; 
  ScriptableInstanceContext *InstanceCommonContext; 
  const char *v15; 
  unsigned int out_partIdx; 
  ScriptablePartDef *out_partDef; 

  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.serverInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3003, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", scriptableIndex, g_scriptableWorldCounts.serverInstanceCount) )
      __debugbreak();
  }
  if ( !partName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3004, ASSERT_TYPE_ASSERT, "( partName != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "partName != NULL_SCR_STRING") )
    __debugbreak();
  ScriptableSv_CheckIsScriptAccessAllowed(scriptableIndex, partName);
  def = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3009, ASSERT_TYPE_ASSERT, "( def )", (const char *)&queryFormat, "def") )
    __debugbreak();
  out_partDef = NULL;
  out_partIdx = 0;
  ScriptableBg_GetPartFromName(def, partName, &out_partIdx, &out_partDef);
  result = out_partDef;
  if ( out_partDef )
  {
    if ( (out_partDef->flags & 4) != 0 )
      return result;
    if ( errorOnFailure )
    {
      name = def->name;
      v13 = SL_ConvertToString(partName);
      InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      if ( InstanceCommonContext->def )
        v15 = InstanceCommonContext->def->name;
      else
        v15 = "<Unknown>";
      Com_PrintError(15, "ScriptableSv_GetPartDefFromName [%s] Part %s in def %s is not server controlled\n", v15, v13, name);
    }
  }
  else if ( errorOnFailure )
  {
    v8 = def->name;
    v9 = SL_ConvertToString(partName);
    v10 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
    if ( v10->def )
      v11 = v10->def->name;
    else
      v11 = "<Unknown>";
    Com_PrintError(15, "ScriptableSv_GetPartDefFromName [%s] Could not find part %s in def %s\n", v11, v9, v8);
  }
  return 0i64;
}

/*
==============
ScriptableSv_GetPartScriptedState
==============
*/
__int64 ScriptableSv_GetPartScriptedState(const unsigned int scriptableIndex, const scr_string_t partName, scr_string_t *out_stateName)
{
  const ScriptablePartDef *PartScriptedDefFromName; 
  const ScriptablePartDef *v7; 
  ScriptablePartRuntime *PartRuntime; 
  unsigned int stateId; 
  ScriptableStateDef *v11; 
  scr_string_t scrScript_id; 
  __int64 v13; 
  __int64 v14; 

  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.serverInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3128, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", scriptableIndex, g_scriptableWorldCounts.serverInstanceCount) )
      __debugbreak();
  }
  if ( !partName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3129, ASSERT_TYPE_ASSERT, "( partName != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "partName != NULL_SCR_STRING") )
    __debugbreak();
  ScriptableSv_CheckIsScriptAccessAllowed(scriptableIndex, partName);
  PartScriptedDefFromName = ScriptableSv_GetPartScriptedDefFromName(scriptableIndex, partName, 1);
  v7 = PartScriptedDefFromName;
  if ( !PartScriptedDefFromName )
    return 0i64;
  PartRuntime = ScriptableSv_GetPartRuntime(scriptableIndex, PartScriptedDefFromName);
  if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3142, ASSERT_TYPE_ASSERT, "( partRuntime )", (const char *)&queryFormat, "partRuntime") )
    __debugbreak();
  stateId = PartRuntime->stateId;
  if ( stateId >= v7->numStates )
  {
    LODWORD(v14) = v7->numStates;
    LODWORD(v13) = stateId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3146, ASSERT_TYPE_ASSERT, "(unsigned)( stateIdx ) < (unsigned)( partDef->numStates )", "stateIdx doesn't index partDef->numStates\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  v11 = &v7->states[(unsigned __int16)stateId];
  if ( v11->type == Scriptable_StateType_Health )
  {
    scrScript_id = v11->data.health.scrScript_id;
  }
  else
  {
    if ( v11->type != Scriptable_StateType_Scripted && v11->type != Scriptable_StateType_Usable )
      return 0i64;
    scrScript_id = v11->data.scripted.scrScript_id;
  }
  *out_stateName = scrScript_id;
  return 1i64;
}

/*
==============
ScriptableSv_GetPartScriptedStateFirstEventOfType
==============
*/
ScriptableEventDef *ScriptableSv_GetPartScriptedStateFirstEventOfType(const unsigned int scriptableIndex, const ScriptableStateDef *const stateDef, Scriptable_EventType eventType)
{
  unsigned int numEvents; 
  int v7; 
  ScriptableEventDef *result; 

  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.serverInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3074, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", scriptableIndex, g_scriptableWorldCounts.serverInstanceCount) )
      __debugbreak();
  }
  if ( !stateDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3075, ASSERT_TYPE_ASSERT, "( stateDef )", (const char *)&queryFormat, "stateDef") )
    __debugbreak();
  if ( eventType == Scriptable_EventType_Count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3076, ASSERT_TYPE_ASSERT, "( eventType != Scriptable_EventType_Count )", (const char *)&queryFormat, "eventType != Scriptable_EventType_Count") )
    __debugbreak();
  numEvents = stateDef->base.numEvents;
  v7 = 0;
  if ( !numEvents )
    return 0i64;
  while ( 1 )
  {
    result = &stateDef->base.events[v7];
    if ( result->type == eventType )
      break;
    if ( ++v7 >= numEvents )
      return 0i64;
  }
  return result;
}

/*
==============
ScriptableSv_GetPartScriptedStateFromName
==============
*/
ScriptableStateDef *ScriptableSv_GetPartScriptedStateFromName(const unsigned int scriptableIndex, ScriptablePartDef *const partDef, const scr_string_t stateName, const bool errorOnFailure, unsigned int *out_stateIndex)
{
  unsigned int *v9; 
  const char *name; 
  const char *v11; 
  ScriptableInstanceContext *InstanceCommonContext; 
  const char *v13; 
  const char *v14; 
  const char *v15; 
  ScriptableInstanceContext *v16; 
  const char *v17; 
  ScriptableStateDef *stateDef; 

  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.serverInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3040, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", scriptableIndex, g_scriptableWorldCounts.serverInstanceCount) )
      __debugbreak();
  }
  if ( !partDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3041, ASSERT_TYPE_ASSERT, "( partDef )", (const char *)&queryFormat, "partDef") )
    __debugbreak();
  if ( !stateName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3042, ASSERT_TYPE_ASSERT, "( stateName != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "stateName != NULL_SCR_STRING") )
    __debugbreak();
  ScriptableSv_CheckIsScriptAccessAllowed(scriptableIndex, stateName);
  v9 = out_stateIndex;
  stateDef = NULL;
  *out_stateIndex = -1;
  ScriptableBg_GetStateFromName(partDef, stateName, v9, &stateDef);
  if ( !stateDef )
  {
    if ( errorOnFailure )
    {
      name = partDef->name;
      v11 = SL_ConvertToString(stateName);
      InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      if ( InstanceCommonContext->def )
        v13 = InstanceCommonContext->def->name;
      else
        v13 = "<Unknown>";
      Com_PrintError(15, "ScriptableSv_GetPartStateIndexFromName [%s] State %s in part %s does not exist.\n", v13, v11, name);
    }
    return 0i64;
  }
  if ( (unsigned int)(stateDef->type - 1) > 2 )
  {
    if ( errorOnFailure )
    {
      v14 = partDef->name;
      v15 = SL_ConvertToString(stateName);
      v16 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      if ( v16->def )
        v17 = v16->def->name;
      else
        v17 = "<Unknown>";
      Com_PrintError(15, "ScriptableSv_GetPartStateIndexFromName [%s] State %s in part %s is not a scripted state - either make it one, or add a scripted state with a changestate event inside it\n", v17, v15, v14);
    }
    return 0i64;
  }
  return stateDef;
}

/*
==============
ScriptableSv_GetPartWorldState
==============
*/
ScriptablePartWorldState *ScriptableSv_GetPartWorldState()
{
  return &g_scriptableSv_partWorldState;
}

/*
==============
ScriptableSv_GetQuestPointIndex
==============
*/
__int64 ScriptableSv_GetQuestPointIndex(const unsigned __int16 questPointIndex)
{
  unsigned __int16 *v2; 
  int v4; 
  int v5; 

  if ( questPointIndex >= s_scriptableSvLootQuestPointCount )
  {
    v5 = s_scriptableSvLootQuestPointCount;
    v4 = questPointIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 4038, ASSERT_TYPE_ASSERT, "(unsigned)( questPointIndex ) < (unsigned)( s_scriptableSvLootQuestPointCount )", "questPointIndex doesn't index s_scriptableSvLootQuestPointCount\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  v2 = s_scriptableSvLootQuestPointIndices;
  if ( !s_scriptableSvLootQuestPointIndices )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 4039, ASSERT_TYPE_ASSERT, "( s_scriptableSvLootQuestPointIndices )", (const char *)&queryFormat, "s_scriptableSvLootQuestPointIndices") )
      __debugbreak();
    v2 = s_scriptableSvLootQuestPointIndices;
  }
  return v2[questPointIndex];
}

/*
==============
ScriptableSv_GetReplicatedInstance
==============
*/
ScriptableReplicatedInstance *ScriptableSv_GetReplicatedInstance(const int scriptableIndex)
{
  __int64 v1; 
  ScriptableReplicatedInstance *v2; 
  __int64 v4; 
  __int64 v5; 
  unsigned int ReplicatedInstanceLimit; 

  v1 = scriptableIndex;
  if ( !g_scriptableSv_reservedInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 251, ASSERT_TYPE_ASSERT, "( g_scriptableSv_reservedInstances )", (const char *)&queryFormat, "g_scriptableSv_reservedInstances") )
    __debugbreak();
  if ( (unsigned int)v1 >= ScriptableSv_GetReplicatedInstanceLimit() )
  {
    ReplicatedInstanceLimit = ScriptableSv_GetReplicatedInstanceLimit();
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 252, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableSv_GetReplicatedInstanceLimit() )", "scriptableIndex doesn't index ScriptableSv_GetReplicatedInstanceLimit()\n\t%i not in [0, %i)", v4, ReplicatedInstanceLimit) )
      __debugbreak();
  }
  v2 = g_scriptableSv_reservedInstances;
  if ( g_scriptableSv_reservedInstances[v1].instanceIndex != (_DWORD)v1 )
  {
    LODWORD(v5) = v1;
    LODWORD(v4) = g_scriptableSv_reservedInstances[v1].instanceIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 253, ASSERT_TYPE_ASSERT, "( g_scriptableSv_reservedInstances[scriptableIndex].instanceIndex ) == ( static_cast<unsigned int>( scriptableIndex ) )", "g_scriptableSv_reservedInstances[scriptableIndex].instanceIndex == static_cast<unsigned int>( scriptableIndex )\n\t%i, %i", v4, v5) )
      __debugbreak();
    v2 = g_scriptableSv_reservedInstances;
  }
  return &v2[v1];
}

/*
==============
ScriptableSv_GetReplicatedInstances
==============
*/
const ScriptableReplicatedInstance *ScriptableSv_GetReplicatedInstances()
{
  const ScriptableReplicatedInstance *result; 

  result = g_scriptableSv_reservedInstances;
  if ( !g_scriptableSv_reservedInstances )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 242, ASSERT_TYPE_ASSERT, "( g_scriptableSv_reservedInstances )", (const char *)&queryFormat, "g_scriptableSv_reservedInstances") )
      __debugbreak();
    return g_scriptableSv_reservedInstances;
  }
  return result;
}

/*
==============
ScriptableSv_GetScriptCache
==============
*/
char ScriptableSv_GetScriptCache(const char *scriptPoolName, unsigned __int16 scriptPoolIndex, const char **out_itemNames, int *out_itemCount)
{
  __int64 v9; 
  unsigned __int8 v10; 
  __int64 v11; 
  const char *v12; 
  __int64 v13; 
  const char *v14; 
  signed __int64 v15; 
  char v16; 
  __int64 v17; 
  char v18; 
  unsigned __int16 scriptPoolCount; 

  if ( (!scriptPoolName || !*scriptPoolName) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1223, ASSERT_TYPE_ASSERT, "( scriptPoolName != nullptr && scriptPoolName[0] )", (const char *)&queryFormat, "scriptPoolName != nullptr && scriptPoolName[0]") )
    __debugbreak();
  if ( !out_itemNames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1224, ASSERT_TYPE_ASSERT, "( out_itemNames )", (const char *)&queryFormat, "out_itemNames") )
    __debugbreak();
  if ( !out_itemCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1225, ASSERT_TYPE_ASSERT, "( out_itemCount )", (const char *)&queryFormat, "out_itemCount") )
    __debugbreak();
  if ( !s_scriptableSvLootTable )
    return 0;
  v9 = -1i64;
  do
    ++v9;
  while ( scriptPoolName[v9] );
  v10 = 1;
  v11 = (unsigned int)v9;
  if ( s_svScriptableLootCaches.cacheTypeCount <= 1u )
    goto LABEL_28;
  while ( 1 )
  {
    v12 = s_svScriptableLootCaches.cacheTypes[v10].scriptPoolName;
    if ( v12 )
      break;
LABEL_27:
    if ( ++v10 >= s_svScriptableLootCaches.cacheTypeCount )
      goto LABEL_28;
  }
  v13 = v11;
  v14 = scriptPoolName;
  if ( !scriptPoolName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
    __debugbreak();
  v15 = v12 - scriptPoolName;
  do
  {
    v16 = v14[v15];
    v17 = v13;
    v18 = *v14++;
    --v13;
    if ( !v17 )
      break;
    if ( v16 != v18 )
      goto LABEL_27;
  }
  while ( v16 );
  if ( v10 )
  {
    scriptPoolCount = s_svScriptableLootCaches.cacheTypes[v10].scriptPoolCount;
    if ( scriptPoolIndex <= scriptPoolCount )
    {
      ScriptableSv_CopyCacheContentsToOutItemsList(scriptPoolIndex + s_svScriptableLootCaches.cacheTypes[v10].scriptPoolFirst, out_itemNames, out_itemCount);
      return 1;
    }
    Com_PrintWarning(29, "[SPAWNGROUP_LOOT] Warning - loot table specfied a max of %d cache contents, yet GSC asked for index %d\n", scriptPoolCount, scriptPoolIndex);
  }
  else
  {
LABEL_28:
    Com_PrintWarning(29, "[SPAWNGROUP_LOOT] Warning - unable to find any cacheType matching name %s\n", scriptPoolName);
  }
  return 0;
}

/*
==============
ScriptableSv_GetScriptableIndexForEntity
==============
*/
__int64 ScriptableSv_GetScriptableIndexForEntity(const gentity_s *const ent)
{
  __int64 number; 
  unsigned int v3; 
  ScriptableInstanceContext *InstanceCommonContext; 
  __int64 v6; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 467, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->r.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 468, ASSERT_TYPE_ASSERT, "( ent->r.isInUse )", (const char *)&queryFormat, "ent->r.isInUse") )
    __debugbreak();
  number = (unsigned int)ent->s.number;
  if ( (unsigned int)number >= 0x800 )
  {
    LODWORD(v6) = ent->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 450, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableIndexEntLookup ) ) + 0 ) )", "entNum doesn't index ARRAY_COUNT( g_scriptableIndexEntLookup )\n\t%i not in [0, %i)", v6, 2048) )
      __debugbreak();
  }
  v3 = g_scriptableIndexEntLookup[number];
  if ( v3 != -1 )
  {
    InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(v3);
    if ( (InstanceCommonContext->linkedObjectType != SCRIPTABLE_LINK_ENTITY || InstanceCommonContext->linkedObjectIndex != (_DWORD)number) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 457, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetLinkEquals( scriptableIndex, SCRIPTABLE_LINK_ENTITY, entNum ) )", (const char *)&queryFormat, "ScriptableSv_GetLinkEquals( scriptableIndex, SCRIPTABLE_LINK_ENTITY, entNum )") )
      __debugbreak();
  }
  return v3;
}

/*
==============
ScriptableSv_GetScriptableIndexForEntityNum
==============
*/
__int64 ScriptableSv_GetScriptableIndexForEntityNum(const unsigned int entNum)
{
  __int64 v1; 
  unsigned int v2; 
  ScriptableInstanceContext *InstanceCommonContext; 
  int v6; 

  v1 = entNum;
  if ( entNum >= 0x800 )
  {
    v6 = 2048;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 450, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableIndexEntLookup ) ) + 0 ) )", "entNum doesn't index ARRAY_COUNT( g_scriptableIndexEntLookup )\n\t%i not in [0, %i)", entNum, v6) )
      __debugbreak();
  }
  v2 = g_scriptableIndexEntLookup[v1];
  if ( v2 != -1 )
  {
    InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(v2);
    if ( (InstanceCommonContext->linkedObjectType != SCRIPTABLE_LINK_ENTITY || InstanceCommonContext->linkedObjectIndex != (_DWORD)v1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 457, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetLinkEquals( scriptableIndex, SCRIPTABLE_LINK_ENTITY, entNum ) )", (const char *)&queryFormat, "ScriptableSv_GetLinkEquals( scriptableIndex, SCRIPTABLE_LINK_ENTITY, entNum )") )
      __debugbreak();
  }
  return v2;
}

/*
==============
ScriptableSv_GetStandaloneParentEntityNum
==============
*/
__int16 ScriptableSv_GetStandaloneParentEntityNum(const unsigned int scriptableIndex)
{
  __int64 v1; 
  ScriptableReplicatedInstance *ReplicatedInstance; 
  __int64 v4; 
  __int64 v5; 

  v1 = scriptableIndex;
  ScriptableCommon_AssertCountsInitialized();
  if ( (unsigned int)v1 >= g_scriptableWorldCounts.runtimeInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2141, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetReservedInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetReservedInstanceCount()\n\t%i not in [0, %i)", v1, g_scriptableWorldCounts.runtimeInstanceCount) )
      __debugbreak();
  }
  if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 81, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
    __debugbreak();
  ScriptableCommon_AssertCountsInitialized();
  if ( (unsigned int)v1 >= g_scriptableWorldCounts.serverInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    LODWORD(v5) = g_scriptableWorldCounts.serverInstanceCount;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 82, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  if ( (*((_BYTE *)&g_scriptableSv_instanceContexts[v1].commonContext.ScriptableInstanceContextSecure + 60) & 0x20) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2142, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetInstanceCommonContext( scriptableIndex ).hasParentEntity )", (const char *)&queryFormat, "ScriptableSv_GetInstanceCommonContext( scriptableIndex ).hasParentEntity") )
    __debugbreak();
  ReplicatedInstance = ScriptableSv_GetReplicatedInstance(v1);
  if ( !ReplicatedInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2145, ASSERT_TYPE_ASSERT, "( replicatedInstance )", (const char *)&queryFormat, "replicatedInstance") )
    __debugbreak();
  if ( !ReplicatedInstance->replicatedType[0] )
  {
    LODWORD(v4) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2146, ASSERT_TYPE_ASSERT, "( replicatedInstance->replicatedType ) != ( ScriptableReplicatedType::ENTITY )", "replicatedInstance->replicatedType != ScriptableReplicatedType::ENTITY\n\t%i, %i", v4, 0i64) )
      __debugbreak();
  }
  if ( ReplicatedInstance->instanceIndex != (_DWORD)v1 )
  {
    LODWORD(v5) = v1;
    LODWORD(v4) = ReplicatedInstance->instanceIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2147, ASSERT_TYPE_ASSERT, "( replicatedInstance->instanceIndex ) == ( scriptableIndex )", "replicatedInstance->instanceIndex == scriptableIndex\n\t%i, %i", v4, v5) )
      __debugbreak();
  }
  if ( !ReplicatedInstance->parent.m_data )
  {
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2148, ASSERT_TYPE_ASSERT, "( ( replicatedInstance->parent.HasEntity() ) )", "%s\n\t( scriptableIndex ) = %i", "( replicatedInstance->parent.HasEntity() )", v5) )
      __debugbreak();
    if ( !ReplicatedInstance->parent.m_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 323, ASSERT_TYPE_ASSERT, "(HasEntity())", (const char *)&queryFormat, "HasEntity()") )
      __debugbreak();
  }
  return ReplicatedInstance->parent.m_data - 1;
}

/*
==============
ScriptableSv_GetTotalQuestPointCount
==============
*/
__int64 ScriptableSv_GetTotalQuestPointCount()
{
  return s_scriptableSvLootQuestPointCount;
}

/*
==============
ScriptableSv_GetWeaponHandle
==============
*/
__int64 ScriptableSv_GetWeaponHandle(const unsigned int scriptableIndex, const bool handleNonCustomWeaponItemDef)
{
  const BG_SpawnGroup_Loot_ItemDef *LootItemDef; 
  const BG_SpawnGroup_Loot_ItemDef *v5; 
  __int64 result; 

  LootItemDef = ScriptableSv_GetLootItemDef(scriptableIndex);
  v5 = LootItemDef;
  if ( !LootItemDef )
    return 0i64;
  if ( BG_SpawnGroup_Loot_IsCustomWeaponItemDef(LootItemDef) )
    return ScriptableSv_GetInstanceCommonContext(scriptableIndex)->extraPayload;
  if ( !handleNonCustomWeaponItemDef )
    return 0i64;
  result = v5->weaponIndex;
  if ( !(_DWORD)result )
    return 0i64;
  return result;
}

/*
==============
ScriptableSv_Init
==============
*/
void ScriptableSv_Init(bool isFrontendServer)
{
  ScriptableSv_InitInternal(isFrontendServer, 0);
}

/*
==============
ScriptableSv_InitCounts
==============
*/
void ScriptableSv_InitCounts(const unsigned int clientCount, const unsigned int agentCount)
{
  if ( g_scriptableSv_replicatedLimitsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 291, ASSERT_TYPE_ASSERT, "( !g_scriptableSv_replicatedLimitsInitialized )", (const char *)&queryFormat, "!g_scriptableSv_replicatedLimitsInitialized") )
    __debugbreak();
  ScriptableCommon_InitWorldCounts(SBL_CONTEXT_SERVER, clientCount, agentCount, &g_scriptableSv_replicatedLimits);
  ScriptableMsgWrite_InitCounts(clientCount, &g_scriptableSv_replicatedLimits);
  g_scriptableSv_replicatedLimitsInitialized = 1;
}

/*
==============
ScriptableSv_InitEventParams
==============
*/
void ScriptableSv_InitEventParams(ScriptableEventParams *outParams, const unsigned int scriptableIndex, const ScriptablePartDef *partDef)
{
  if ( !outParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2715, ASSERT_TYPE_ASSERT, "( outParams )", (const char *)&queryFormat, "outParams") )
    __debugbreak();
  if ( !partDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2716, ASSERT_TYPE_ASSERT, "( partDef )", (const char *)&queryFormat, "partDef") )
    __debugbreak();
  outParams->scriptableIndex = scriptableIndex;
  outParams->context = SBL_CONTEXT_SERVER;
  outParams->callbacks = &s_svCallbackTable;
  outParams->damageEvent = NULL;
  outParams->teamEvent = NULL;
  outParams->partDef = partDef;
}

/*
==============
ScriptableSv_InitInternal
==============
*/
void ScriptableSv_InitInternal(bool isFrontendServer, const bool isMyChanges)
{
  unsigned __int64 v2; 
  ScriptableWorldEvents *v3; 
  unsigned int v4; 
  __int64 v5; 
  unsigned int v6; 
  ScriptableEventExpireItem *v7; 
  unsigned int v8; 
  unsigned int ReplicatedInstanceLimit; 
  __int64 v10; 
  bitarray<250016> *v11; 
  __int64 v12; 
  __int64 v13; 
  bitarray<250016> *v14; 
  __int64 v15; 
  bitarray<250016> *v16; 
  bitarray<250016> *v17; 
  unsigned int *v18; 
  unsigned int i; 
  __int64 v20; 
  __int64 v21; 
  unsigned int *v22; 
  __int64 v23; 
  unsigned int v24; 
  ScriptableInstanceContext *InstanceCommonContext; 
  ScriptableCollisionServerContext *InstanceCollisionContext; 
  ScriptableServerSpecificContext *InstanceServerContext; 
  ScriptableInstance *v28; 
  ScriptableInstanceContext *v29; 
  bitarray<2048> *v30; 
  __int64 v31; 
  int v32; 
  unsigned int v33; 
  unsigned int runtimeInstanceCount; 
  ScriptableInstanceServerContext *v35; 
  const ScriptableDef *def; 
  unsigned int v37; 
  ScriptablePartRuntime *v38; 
  ScriptablePartRuntime *v39; 
  ScriptablePartRuntime *v40; 
  unsigned int v41; 
  __int64 v42; 
  ScriptableInstanceServerContext *v43; 
  __int64 eventStreamBufferSize; 
  unsigned int runtimePartCount; 
  unsigned int v46; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  ScriptableInstance *outInstance; 

  g_svScriptablesInitialized = 1;
  s_scriptableSvLootTable = NULL;
  s_scriptableSv_myChangesKeepScriptVariables = 0;
  Scriptable_Analytics_InitServer();
  ScriptableSv_DisableLinking(0);
  ScriptableCommon_AssertCountsInitialized();
  v2 = 144i64 * g_scriptableWorldCounts.serverInstanceCount;
  Com_Printf(29, "ScriptableSv_InitServerContextBuffers: Allocating %i kb for instance contexts.\n", v2 >> 10);
  if ( g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 655, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts == nullptr )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts == nullptr") )
    __debugbreak();
  g_scriptableSv_instanceContexts = (ScriptableInstanceServerContext *)Mem_HunkUser_AllocInternal(s_svScriptableRuntimeHunk, v2, 8ui64, "ScriptableSv_InitServerContextBuffers");
  ScriptableSv_InitWorldStorageBuffers();
  v3 = &g_scriptableSv_eventTracking;
  memset_0(&g_scriptableSv_eventTracking, 0, sizeof(g_scriptableSv_eventTracking));
  v4 = 0;
  v5 = 2i64;
  do
  {
    v6 = g_scriptableSv_replicatedLimits.partWorldLimits[(unsigned __int8)v4];
    if ( !v6 )
    {
      LODWORD(v49) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 712, ASSERT_TYPE_ASSERT, "( ( replicatedPartLimit > 0 ) )", "%s\n\t( replicatedPartLimit ) = %i", "( replicatedPartLimit > 0 )", v49) )
        __debugbreak();
    }
    v7 = (ScriptableEventExpireItem *)Mem_HunkUser_AllocInternal(s_svScriptableRuntimeHunk, 12 * v6, 4ui64, "ScriptableSv_InitEventTrackingBuffers");
    v3->groups[0].itemData = v7;
    v3->groups[0].itemDataCount = v6;
    memset_0(v7, 0, 12 * v6);
    ++v4;
    v3 = (ScriptableWorldEvents *)((char *)v3 + 40);
  }
  while ( v4 < 2 );
  v8 = 0;
  if ( !g_scriptableSv_reservedInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 737, ASSERT_TYPE_ASSERT, "( g_scriptableSv_reservedInstances )", (const char *)&queryFormat, "g_scriptableSv_reservedInstances") )
    __debugbreak();
  ReplicatedInstanceLimit = ScriptableSv_GetReplicatedInstanceLimit();
  ScriptableCommon_ClearReplicatedInstances(g_scriptableSv_reservedInstances, ReplicatedInstanceLimit);
  v10 = 488i64;
  v11 = &s_scriptableSv_eventUpdateBits;
  v12 = 488i64;
  do
  {
    *(_QWORD *)v11->array = 0i64;
    *(_QWORD *)&v11->array[2] = 0i64;
    *(_QWORD *)&v11->array[4] = 0i64;
    v11 = (bitarray<250016> *)((char *)v11 + 64);
    *(_QWORD *)&v11[-1].array[7803] = 0i64;
    *(_QWORD *)&v11[-1].array[7805] = 0i64;
    *(_QWORD *)&v11[-1].array[7807] = 0i64;
    *(_QWORD *)&v11[-1].array[7809] = 0i64;
    *(_QWORD *)&v11[-1].array[7811] = 0i64;
    --v12;
  }
  while ( v12 );
  *(_QWORD *)v11->array = 0i64;
  v13 = 488i64;
  *(_QWORD *)&v11->array[2] = 0i64;
  v11->array[4] = 0;
  v14 = &s_scriptableSv_entityPositionUpdateBits;
  do
  {
    *(_QWORD *)v14->array = 0i64;
    *(_QWORD *)&v14->array[2] = 0i64;
    *(_QWORD *)&v14->array[4] = 0i64;
    v14 = (bitarray<250016> *)((char *)v14 + 64);
    *(_QWORD *)&v14[-1].array[7803] = 0i64;
    *(_QWORD *)&v14[-1].array[7805] = 0i64;
    *(_QWORD *)&v14[-1].array[7807] = 0i64;
    *(_QWORD *)&v14[-1].array[7809] = 0i64;
    *(_QWORD *)&v14[-1].array[7811] = 0i64;
    --v13;
  }
  while ( v13 );
  *(_QWORD *)v14->array = 0i64;
  v15 = 488i64;
  *(_QWORD *)&v14->array[2] = 0i64;
  v14->array[4] = 0;
  v16 = &s_scriptableSv_standaloneParentUpdateBits;
  do
  {
    *(_QWORD *)v16->array = 0i64;
    *(_QWORD *)&v16->array[2] = 0i64;
    *(_QWORD *)&v16->array[4] = 0i64;
    v16 = (bitarray<250016> *)((char *)v16 + 64);
    *(_QWORD *)&v16[-1].array[7803] = 0i64;
    *(_QWORD *)&v16[-1].array[7805] = 0i64;
    *(_QWORD *)&v16[-1].array[7807] = 0i64;
    *(_QWORD *)&v16[-1].array[7809] = 0i64;
    *(_QWORD *)&v16[-1].array[7811] = 0i64;
    --v15;
  }
  while ( v15 );
  *(_QWORD *)v16->array = 0i64;
  *(_QWORD *)&v16->array[2] = 0i64;
  v16->array[4] = 0;
  v17 = &s_scriptableSv_eventUpdateListCompletedBits;
  do
  {
    *(_QWORD *)v17->array = 0i64;
    *(_QWORD *)&v17->array[2] = 0i64;
    *(_QWORD *)&v17->array[4] = 0i64;
    v17 = (bitarray<250016> *)((char *)v17 + 64);
    *(_QWORD *)&v17[-1].array[7803] = 0i64;
    *(_QWORD *)&v17[-1].array[7805] = 0i64;
    *(_QWORD *)&v17[-1].array[7807] = 0i64;
    *(_QWORD *)&v17[-1].array[7809] = 0i64;
    *(_QWORD *)&v17[-1].array[7811] = 0i64;
    --v10;
  }
  while ( v10 );
  *(_QWORD *)v17->array = 0i64;
  *(_QWORD *)&v17->array[2] = 0i64;
  v17->array[4] = 0;
  s_lootTableWeaponHandleCount = 0;
  memset_0(s_lootTableWeaponHandles, 0, sizeof(s_lootTableWeaponHandles));
  s_svScriptablesLastUpdateTime = 0;
  v18 = &g_scriptableSv_eventTracking.groups[0].itemLists.headPartIndex[1];
  s_svScriptableEventExpirationUpdateTimer = 0;
  do
  {
    if ( !*((_QWORD *)v18 - 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1588, ASSERT_TYPE_ASSERT, "( r_curEventGroup.itemData )", (const char *)&queryFormat, "r_curEventGroup.itemData") )
      __debugbreak();
    for ( i = 0; i < *(v18 - 2); *(_DWORD *)(*((_QWORD *)v18 - 2) + 4 * v21) = -1 )
    {
      v20 = i++;
      v21 = 3 * v20;
      *(_DWORD *)(*((_QWORD *)v18 - 2) + 4 * v21 + 4) = -1;
    }
    *(_QWORD *)(v18 - 1) = -1i64;
    *(_QWORD *)(v18 + 1) = -1i64;
    *(_QWORD *)(v18 + 3) = -1i64;
    v18 += 10;
    --v5;
  }
  while ( v5 );
  v22 = g_scriptableIndexEntLookup;
  v23 = 128i64;
  do
  {
    *(_QWORD *)v22 = -1i64;
    *((_QWORD *)v22 + 1) = -1i64;
    *((_QWORD *)v22 + 2) = -1i64;
    v22 += 16;
    *((_QWORD *)v22 - 5) = -1i64;
    *((_QWORD *)v22 - 4) = -1i64;
    *((_QWORD *)v22 - 3) = -1i64;
    *((_QWORD *)v22 - 2) = -1i64;
    *((_QWORD *)v22 - 1) = -1i64;
    --v23;
  }
  while ( v23 );
  Sys_ProfBeginNamedEvent(0xFF808080, "ScriptableSv_InitContext");
  v24 = 0;
  ScriptableCommon_AssertCountsInitialized();
  if ( g_scriptableWorldCounts.serverInstanceCount )
  {
    do
    {
      InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(v24);
      InstanceCollisionContext = ScriptableSv_GetInstanceCollisionContext(v24);
      InstanceServerContext = ScriptableSv_GetInstanceServerContext(v24);
      memset_0(InstanceCommonContext, 0, sizeof(ScriptableInstanceContext));
      *InstanceServerContext = 0i64;
      *(_QWORD *)&InstanceCollisionContext->neverMoves = 0i64;
      *(_QWORD *)&InstanceCollisionContext->navmeshObstacleId = 0i64;
      InstanceCollisionContext->model = NULL;
      *(_QWORD *)&InstanceCollisionContext->scriptableCollisionMain = -1i64;
      if ( ScriptableCommon_GetMapInstance(v24, (const ScriptableInstance **)&outInstance) )
      {
        v28 = outInstance;
        if ( !outInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 531, ASSERT_TYPE_ASSERT, "( instance )", (const char *)&queryFormat, "instance") )
          __debugbreak();
        InstanceCommonContext->def = v28->initialDef;
        v29 = ScriptableSv_GetInstanceCommonContext(v24);
        v29->originInitial = v28->initialOrigin;
        v29->anglesInitial = v28->initialAngles;
        InstanceCommonContext->origin.v[0] = v28->initialOrigin.v[0];
        InstanceCommonContext->origin.v[1] = v28->initialOrigin.v[1];
        InstanceCommonContext->origin.v[2] = v28->initialOrigin.v[2];
        InstanceCommonContext->angles.v[0] = v28->initialAngles.v[0];
        InstanceCommonContext->angles.v[1] = v28->initialAngles.v[1];
        InstanceCommonContext->angles.v[2] = v28->initialAngles.v[2];
      }
      ScriptableSv_ClearLink(v24++);
      ScriptableCommon_AssertCountsInitialized();
    }
    while ( v24 < g_scriptableWorldCounts.serverInstanceCount );
  }
  Sys_ProfEndNamedEvent();
  ScriptableSv_InitReservedAllocators();
  v30 = &s_scriptableNetworkLODOverrideEntities;
  v31 = 4i64;
  do
  {
    *(_QWORD *)v30->array = 0i64;
    *(_QWORD *)&v30->array[2] = 0i64;
    *(_QWORD *)&v30->array[4] = 0i64;
    v30 = (bitarray<2048> *)((char *)v30 + 64);
    *(_QWORD *)&v30[-1].array[54] = 0i64;
    *(_QWORD *)&v30[-1].array[56] = 0i64;
    *(_QWORD *)&v30[-1].array[58] = 0i64;
    *(_QWORD *)&v30[-1].array[60] = 0i64;
    *(_QWORD *)&v30[-1].array[62] = 0i64;
    --v31;
  }
  while ( v31 );
  if ( !isFrontendServer )
    ScriptableSv_SpawnLootInstances();
  ScriptableSv_PrecacheAssets();
  v32 = 0;
  v33 = 0;
  ScriptableCommon_AssertCountsInitialized();
  runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
  ScriptableCommon_AssertCountsInitialized();
  while ( runtimeInstanceCount < g_scriptableWorldCounts.serverInstanceCount )
  {
    if ( ScriptableSv_GetInstanceInUse(runtimeInstanceCount) )
    {
      if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 81, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
        __debugbreak();
      ScriptableCommon_AssertCountsInitialized();
      if ( runtimeInstanceCount >= g_scriptableWorldCounts.serverInstanceCount )
      {
        ScriptableCommon_AssertCountsInitialized();
        LODWORD(v49) = g_scriptableWorldCounts.serverInstanceCount;
        LODWORD(v48) = runtimeInstanceCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 82, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v48, v49) )
          __debugbreak();
      }
      v35 = &g_scriptableSv_instanceContexts[runtimeInstanceCount];
      def = v35->commonContext.def;
      v35->commonContext.eventStreamBufferSize = v35->commonContext.def->eventStreamSizeRequiredServer;
      v32 += def->eventStreamSizeRequiredServer;
      v35->commonContext.partStateIndex = v33;
      v33 += def->serverInstancedPartCount;
    }
    ++runtimeInstanceCount;
    ScriptableCommon_AssertCountsInitialized();
  }
  v37 = 8 * v33;
  g_svScriptableRuntimePartStatesCount = v33;
  v38 = (ScriptablePartRuntime *)(8 * v33 + v32);
  Com_Printf(29, "Server Scriptable - Allocating %u bytes for runtime instances.\n", (unsigned int)v38);
  v39 = (ScriptablePartRuntime *)Mem_HunkUser_AllocInternal(s_svScriptableRuntimeHunk, (unsigned int)v38, 1ui64, "ScriptableSv_InitInternal");
  memset_0(v39, 0, (unsigned int)v38);
  v40 = v39;
  ScriptableCommon_AssertCountsInitialized();
  v41 = g_scriptableWorldCounts.runtimeInstanceCount;
  ScriptableCommon_AssertCountsInitialized();
  if ( v41 < g_scriptableWorldCounts.serverInstanceCount )
  {
    do
    {
      if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 81, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
        __debugbreak();
      ScriptableCommon_AssertCountsInitialized();
      if ( v41 >= g_scriptableWorldCounts.serverInstanceCount )
      {
        ScriptableCommon_AssertCountsInitialized();
        LODWORD(v49) = g_scriptableWorldCounts.serverInstanceCount;
        LODWORD(v48) = v41;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 82, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v48, v49) )
          __debugbreak();
      }
      v42 = v41++;
      v43 = &g_scriptableSv_instanceContexts[v42];
      eventStreamBufferSize = v43->commonContext.eventStreamBufferSize;
      v43->commonContext.eventStreamBuffer = (unsigned __int8 *)v40;
      v40 = (ScriptablePartRuntime *)((char *)v40 + eventStreamBufferSize);
      ScriptableCommon_AssertCountsInitialized();
    }
    while ( v41 < g_scriptableWorldCounts.serverInstanceCount );
    v8 = 0;
  }
  g_svScriptableRuntimePartStates = v40;
  if ( (ScriptablePartRuntime *)((char *)v40 + v37 - (_QWORD)v39) != v38 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1679, ASSERT_TYPE_ASSERT, "( ( eventBufferItr + runtimeServerInstancePartSize ) - runtimeBuffer == bufferSize )", (const char *)&queryFormat, "( eventBufferItr + runtimeServerInstancePartSize ) - runtimeBuffer == bufferSize") )
    __debugbreak();
  ScriptableCommon_AssertCountsInitialized();
  runtimePartCount = g_scriptableWorldCounts.runtimePartCount;
  v46 = 8 * g_scriptableWorldCounts.runtimePartCount;
  g_scriptableSVReservedPartRuntimes = (ScriptablePartRuntime *)Mem_HunkUser_AllocInternal(s_svScriptableRuntimeHunk, 8 * g_scriptableWorldCounts.runtimePartCount, 4ui64, "ScriptableSv_InitRuntimeReservedParts");
  DebugWipe(g_scriptableSVReservedPartRuntimes, v46);
  g_scriptableSVReservedPartRuntimeCount = runtimePartCount;
  g_scriptableSVReservedPartRuntimeFreeHead = 0;
  if ( runtimePartCount )
  {
    v47 = 0i64;
    do
      g_scriptableSVReservedPartRuntimes[v47++].nextRuntime = ++v8;
    while ( v8 < runtimePartCount );
  }
}

/*
==============
ScriptableSv_InitMemory
==============
*/
void ScriptableSv_InitMemory(void)
{
  if ( s_svScriptableRuntimeHunk && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 260, ASSERT_TYPE_ASSERT, "(s_svScriptableRuntimeHunk == nullptr)", (const char *)&queryFormat, "s_svScriptableRuntimeHunk == nullptr") )
    __debugbreak();
  s_svScriptableRuntimeHunk = Mem_HunkUser_Create(0x6400000ui64, "scriptableServerRuntimeBuffer", TRACK_MAP_ENTS, MEM_ALLOC_FLAG_NO_MEM_CLEAR);
}

/*
==============
ScriptableSv_InitMyChanges
==============
*/
void ScriptableSv_InitMyChanges(const bool isFrontEndServer)
{
  scrContext_t *v1; 

  ScriptableSv_InitInternal(isFrontEndServer, 1);
  v1 = ScriptContext_Server();
  Scr_NotifyLevel(v1, scr_const.scriptable_restart, 0);
}

/*
==============
ScriptableSv_InitServerInstances
==============
*/
void ScriptableSv_InitServerInstances(void)
{
  ScriptableSv_InitServerInstancesInternal(NULL);
}

/*
==============
ScriptableSv_InitServerInstancesInternal
==============
*/
void ScriptableSv_InitServerInstancesInternal(const ScriptableMyChangesSaveState *const myChangesState)
{
  const dvar_t *v1; 
  unsigned int runtimeInstanceCount; 
  ScriptableInstanceContext *InstanceCommonContext; 
  const char *v5; 
  unsigned int mapLinkCount; 
  unsigned int v7; 
  ScriptableSavedLink *mapLinkObjects; 
  gentity_s *GEntity; 
  GameScriptData *v10; 
  scrContext_t *v11; 
  unsigned int v12; 
  unsigned int v13; 
  const ScriptableDef *def; 
  int scriptable_postinit; 
  unsigned int v16; 
  unsigned int inOutPartIndex; 

  v1 = DCONST_DVARBOOL_scriptable_enable;
  if ( !DCONST_DVARBOOL_scriptable_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    s_svScriptablesCreated = 1;
    inOutPartIndex = 0;
    ScriptableCommon_AssertCountsInitialized();
    runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
    ScriptableCommon_AssertCountsInitialized();
    while ( runtimeInstanceCount < g_scriptableWorldCounts.serverInstanceCount )
    {
      if ( ScriptableSv_GetInstanceInUse(runtimeInstanceCount) )
      {
        if ( !ScriptableSv_IsServerInstance(runtimeInstanceCount) )
        {
          InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(runtimeInstanceCount);
          v5 = InstanceCommonContext->def ? InstanceCommonContext->def->name : "<Unknown>";
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1785, ASSERT_TYPE_ASSERT, "(ScriptableSv_IsServerInstance( scriptableIndex ))", "%s\n\tScriptable %s is in the server bucket but says it isn't a server instance\n", "ScriptableSv_IsServerInstance( scriptableIndex )", v5) )
            __debugbreak();
        }
        ScriptableSv_SpawnInstanceReplicationParts(runtimeInstanceCount, &inOutPartIndex);
        if ( ScriptableSv_GetInstanceShouldHaveEntity(runtimeInstanceCount) )
        {
          if ( !ScriptableSv_GetInstanceShouldHaveEntity(runtimeInstanceCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1714, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetInstanceShouldHaveEntity( scriptableIndex ) )", (const char *)&queryFormat, "ScriptableSv_GetInstanceShouldHaveEntity( scriptableIndex )") )
            __debugbreak();
          if ( !myChangesState )
            goto LABEL_27;
          mapLinkCount = myChangesState->mapLinkCount;
          v7 = 0;
          if ( !mapLinkCount )
            goto LABEL_27;
          mapLinkObjects = myChangesState->mapLinkObjects;
          while ( mapLinkObjects->scriptableIndex != runtimeInstanceCount )
          {
            ++v7;
            ++mapLinkObjects;
            if ( v7 >= mapLinkCount )
              goto LABEL_27;
          }
          Com_Printf(29, "[mychanges] Restore map-based entity scriptable instance: %u link: %u\n", runtimeInstanceCount, mapLinkObjects->linkObjectIndex);
          GEntity = G_GetGEntity(mapLinkObjects->linkObjectIndex);
          if ( !GEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1728, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
            __debugbreak();
          ScriptableSv_InitializeEntity(GEntity);
          if ( !GEntity )
          {
LABEL_27:
            GEntity = G_Utils_SpawnEntity();
            if ( !GEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 407, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
              __debugbreak();
            ScriptableSv_InitializeEntity(GEntity);
          }
          ScriptableSv_SetupInstanceEntity(runtimeInstanceCount, GEntity);
        }
      }
      ++runtimeInstanceCount;
      ScriptableCommon_AssertCountsInitialized();
    }
    if ( !g_svScriptablesInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1541, ASSERT_TYPE_ASSERT, "( g_svScriptablesInitialized )", (const char *)&queryFormat, "g_svScriptablesInitialized") )
      __debugbreak();
    s_svScriptableNetChecksum = ScriptableCommon_ComputeNetChecksum(&g_scriptableSv_fixedWorldMap, &g_scriptableSv_replicatedLimits);
    s_svScriptablesLastUpdateTime = level.time;
    if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 78, ASSERT_TYPE_ASSERT, "(ms_gScriptData)", "%s\n\tAttempting to access game data outside of an active game context", "ms_gScriptData") )
      __debugbreak();
    if ( !(_BYTE)GameScriptData::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 79, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access game data outside of an active game context", "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    v10 = GameScriptData::ms_gScriptData;
    if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1814, ASSERT_TYPE_ASSERT, "( gScrData )", (const char *)&queryFormat, "gScrData") )
      __debugbreak();
    v11 = ScriptContext_Server();
    v12 = Scr_ExecThread(v11, v10->scriptable_init, 0);
    Scr_FreeThread(v11, v12);
    ScriptableCommon_AssertCountsInitialized();
    v13 = g_scriptableWorldCounts.runtimeInstanceCount;
    ScriptableCommon_AssertCountsInitialized();
    while ( v13 < g_scriptableWorldCounts.serverInstanceCount )
    {
      if ( ScriptableSv_GetInstanceInUse(v13) )
      {
        def = ScriptableSv_GetInstanceCommonContext(v13)->def;
        if ( !def )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1828, ASSERT_TYPE_ASSERT, "( def )", (const char *)&queryFormat, "def") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 276, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
            __debugbreak();
        }
        if ( (def->flags & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1829, ASSERT_TYPE_ASSERT, "( ScriptableDef_HasServerInstance( def ) )", (const char *)&queryFormat, "ScriptableDef_HasServerInstance( def )") )
          __debugbreak();
        ScriptableSv_InitializeState(v13, def);
        ScriptableSv_AddToUpdateLists(v13, def);
        Scriptable_Analytics_AddScriptableCount(Scriptable_Analytics_Zone_SC_Clipmap_S, 1);
        Scriptable_Analytics_AddPartCount(Scriptable_Analytics_Zone_SC_Clipmap_S, def->serverControlledPartCount);
        Scriptable_Analytics_AddRuntimeMemoryCount(Scriptable_Analytics_Zone_SC_Clipmap_S, def->eventStreamSizeRequiredServer);
        Scriptable_Analytics_AddScriptableCount(Scriptable_Analytics_Zone_SC_Clipmap_C, 1);
        Scriptable_Analytics_AddPartCount(Scriptable_Analytics_Zone_SC_Clipmap_C, def->numParts);
        Scriptable_Analytics_AddRuntimeMemoryCount(Scriptable_Analytics_Zone_SC_Clipmap_C, def->eventStreamSizeRequiredClient);
      }
      ++v13;
      ScriptableCommon_AssertCountsInitialized();
    }
    ScriptableSv_ValidateUpdateLists();
    scriptable_postinit = v10->scriptable_postinit;
    s_svScriptablesStateEntered = 1;
    v16 = Scr_ExecThread(v11, scriptable_postinit, 0);
    Scr_FreeThread(v11, v16);
  }
}

/*
==============
ScriptableSv_InitServerInstancesMyChanges
==============
*/

void __fastcall ScriptableSv_InitServerInstancesMyChanges(const ScriptableMyChangesSaveState *const savedScriptableState)
{
  ScriptableSv_InitServerInstancesInternal(savedScriptableState);
}

/*
==============
ScriptableSv_InitWorldStorageBuffers
==============
*/
void *ScriptableSv_InitWorldStorageBuffers()
{
  unsigned int v0; 
  ScriptablePartWorldState *v1; 
  unsigned __int64 v2; 
  ScriptablePartData *v3; 
  unsigned int serverInstanceCount; 
  unsigned __int64 v5; 
  unsigned int ReplicatedInstanceLimit; 
  __int64 v8; 

  v0 = 0;
  v1 = &g_scriptableSv_partWorldState;
  do
  {
    v2 = g_scriptableSv_replicatedLimits.partWorldLimits[(unsigned __int8)v0];
    if ( !(_DWORD)v2 )
    {
      LODWORD(v8) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 675, ASSERT_TYPE_ASSERT, "( ( replicatedPartLimit > 0 ) )", "%s\n\t( replicatedPartLimit ) = %i", "( replicatedPartLimit > 0 )", v8) )
        __debugbreak();
    }
    v3 = (ScriptablePartData *)Mem_HunkUser_AllocInternal(s_svScriptableRuntimeHunk, v2, 0x10ui64, "ScriptableSv_InitWorldStorageBuffers");
    v1->groups[0].partData = v3;
    memset_0(v3, 0, v2);
    ++v0;
    v1 = (ScriptablePartWorldState *)((char *)v1 + 8);
  }
  while ( v0 < 2 );
  ScriptableCommon_AssertCountsInitialized();
  serverInstanceCount = g_scriptableWorldCounts.serverInstanceCount;
  if ( (int)g_scriptableWorldCounts.serverInstanceCount < 1 )
    serverInstanceCount = 1;
  g_scriptableSv_fixedWorldMap.indicesCount = serverInstanceCount;
  v5 = 4 * serverInstanceCount;
  g_scriptableSv_fixedWorldMap.indices = (unsigned int *)Mem_HunkUser_AllocInternal(s_svScriptableRuntimeHunk, v5, 0x10ui64, "ScriptableSv_InitWorldStorageBuffers");
  memset_0(g_scriptableSv_fixedWorldMap.indices, 0, (unsigned int)v5);
  ReplicatedInstanceLimit = ScriptableSv_GetReplicatedInstanceLimit();
  g_scriptableSv_reservedInstances = (ScriptableReplicatedInstance *)Mem_HunkUser_AllocInternal(s_svScriptableRuntimeHunk, 32 * ReplicatedInstanceLimit, 0x10ui64, "ScriptableSv_InitWorldStorageBuffers");
  g_scriptableSv_fixedWorldMap.partCount = 0;
  if ( !g_scriptableSv_fixedWorldMap.indices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 696, ASSERT_TYPE_ASSERT, "( g_scriptableSv_fixedWorldMap.indices )", (const char *)&queryFormat, "g_scriptableSv_fixedWorldMap.indices") )
    __debugbreak();
  return memset_0(g_scriptableSv_fixedWorldMap.indices, 0, 4i64 * g_scriptableSv_fixedWorldMap.indicesCount);
}

/*
==============
ScriptableSv_InitializeEntity
==============
*/
void ScriptableSv_InitializeEntity(gentity_s *const ent)
{
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 v9; 

  _RBX = ent;
  Scr_SetString(&ent->classname, scr_const.scriptable);
  Scr_SetString(&_RBX->script_classname, scr_const.scriptable);
  _RBX->handler = 29;
  *(_QWORD *)&_RBX->hint.hintString = 0i64;
  _RBX->s.eType = ET_SCRIPTMOVER;
  _RSI = &_RBX->s.lerp.pos;
  *(_QWORD *)&_RBX->s.lerp.u.scriptMover.animIndex = 0i64;
  _RBX->s.un.scriptMoverType = 2;
  _RBX->s.lerp.u.anonymous.data[0] = 2047;
  _RBX->s.otherEntityNum = 2047;
  _RBX->s.lerp.u.anonymous.data[5] = 0;
  *((_QWORD *)&_RBX->s.lerp.u.infoVolumeGrapple + 3) = 1000i64;
  _RBX->s.lerp.u.anonymous.data[2] = 0;
  if ( _RBX == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 82, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
    __debugbreak();
  __asm { vmovss  xmm0, dword ptr [rbx+130h] }
  if ( _RSI->trType == TR_LINEAR_STOP_SECURE )
  {
    __asm { vmovss  dword ptr [rsp+38h+arg_0], xmm0 }
    if ( (v9 & 0x7F800000) == 2139095040 )
      goto LABEL_15;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+134h]
      vmovss  dword ptr [rsp+38h+arg_0], xmm0
    }
    if ( (v9 & 0x7F800000) == 2139095040 )
      goto LABEL_15;
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+138h]
      vmovss  dword ptr [rsp+38h+arg_0], xmm0
    }
    if ( (v9 & 0x7F800000) == 2139095040 )
    {
LABEL_15:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 24, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
        __debugbreak();
    }
    v6 = LODWORD(_RBX->r.currentOrigin.v[0]) ^ ~s_trbase_aab_X;
    v7 = v6 ^ s_trbase_aab_Y ^ LODWORD(_RBX->r.currentOrigin.v[1]);
    v8 = v7 ^ s_trbase_aab_Z ^ LODWORD(_RBX->r.currentOrigin.v[2]);
    LODWORD(_RBX->s.lerp.pos.trBase.v[1]) = v7;
    LODWORD(_RBX->s.lerp.pos.trBase.v[2]) = v8;
    LODWORD(_RBX->s.lerp.pos.trBase.v[0]) = v6;
    memset(&v9, 0, sizeof(v9));
  }
  else
  {
    __asm { vmovss  dword ptr [rsi+0Ch], xmm0 }
    _RBX->s.lerp.pos.trBase.v[1] = _RBX->r.currentOrigin.v[1];
    _RBX->s.lerp.pos.trBase.v[2] = _RBX->r.currentOrigin.v[2];
  }
  _RSI->trType = TR_STATIONARY;
  _RBX->s.lerp.apos.trBase.v[0] = _RBX->r.currentAngles.v[0];
  _RBX->s.lerp.apos.trBase.v[1] = _RBX->r.currentAngles.v[1];
  _RBX->s.lerp.apos.trBase.v[2] = _RBX->r.currentAngles.v[2];
  _RBX->s.lerp.apos.trType = TR_STATIONARY;
  _RBX->nextthink = 0;
  _RBX->r.svFlags = 4;
}

/*
==============
ScriptableSv_InitializeState
==============
*/
void ScriptableSv_InitializeState(const unsigned int scriptableIndex, const ScriptableDef *def)
{
  unsigned int i; 
  ScriptablePartDef *v6; 
  ScriptablePartRuntime *PartRuntime; 
  ScriptableStateDef *states; 
  ScriptableInstanceContext *InstanceCommonContext; 
  ScriptableInstanceContext *v11; 
  unsigned int j; 
  ScriptableEventParams eventParams; 

  for ( i = 0; i < def->numParts; ++i )
  {
    v6 = &def->parts[i];
    if ( !v6 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2929, ASSERT_TYPE_ASSERT, "( partDef )", (const char *)&queryFormat, "partDef") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 422, ASSERT_TYPE_ASSERT, "(partDef)", (const char *)&queryFormat, "partDef") )
        __debugbreak();
    }
    if ( (v6->flags & 2) != 0 )
    {
      PartRuntime = ScriptableSv_GetPartRuntime(scriptableIndex, v6);
      if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2939, ASSERT_TYPE_ASSERT, "( partRuntime )", (const char *)&queryFormat, "partRuntime") )
        __debugbreak();
      PartRuntime->stateId = 0;
      if ( v6->numStates )
      {
        states = v6->states;
        if ( SLOBYTE(states->base.flags) < 0 )
        {
          if ( states->type != Scriptable_StateType_Health && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2951, ASSERT_TYPE_ASSERT, "( stateDef->type == Scriptable_StateType_Health )", (const char *)&queryFormat, "stateDef->type == Scriptable_StateType_Health") )
            __debugbreak();
          InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
          _RBP = v6->eventStreamBufferOffsetServer;
          v11 = InstanceCommonContext;
          if ( _RBP + 4 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2957, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", "%s\n\tScriptable %s doesn't have enough eventBuffer - this usually implies a patch has changed the definition of the scriptable in a way it shouldn't.\n", "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize", def->name) )
            __debugbreak();
          _RAX = v11->eventStreamBuffer;
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
            vmovss  dword ptr [rax+rbp], xmm0
          }
        }
        eventParams.context = SBL_CONTEXT_SERVER;
        __asm { vpxor   xmm0, xmm0, xmm0 }
        eventParams.callbacks = &s_svCallbackTable;
        eventParams.scriptableIndex = scriptableIndex;
        __asm { vmovdqu xmmword ptr [rsp+98h+eventParams.damageEvent], xmm0 }
        eventParams.partDef = v6;
        ScriptableBg_EnterState(&eventParams, 1);
      }
      for ( j = 0; j < v6->numChildParts; ++j )
        ScriptableSv_SetPartStateFirst(scriptableIndex, def, &v6->childParts[j]);
    }
  }
}

/*
==============
ScriptableSv_InvalidateStatesEventTracking
==============
*/
void ScriptableSv_InvalidateStatesEventTracking(const ScriptableWorldType worldType, const unsigned int startIndex, const unsigned int numParts)
{
  __int64 v3; 
  unsigned __int8 v5; 
  unsigned int v6; 
  ScriptableWorldEventGroup *v7; 
  __int64 v8; 
  ScriptableEventExpireItem *itemData; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  int v13; 

  v3 = startIndex;
  v5 = worldType;
  if ( (unsigned __int8)worldType >= (unsigned int)COUNT )
  {
    v13 = 2;
    v11 = (unsigned __int8)worldType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3326, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>( worldType ) ) < (unsigned)( ( sizeof( *array_counter( g_scriptableSv_eventTracking.groups ) ) + 0 ) )", "static_cast<int>( worldType ) doesn't index ARRAY_COUNT( g_scriptableSv_eventTracking.groups )\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  v6 = v3 + numParts;
  v7 = &g_scriptableSv_eventTracking.groups[v5];
  if ( (unsigned int)v3 < (unsigned int)v3 + numParts )
  {
    v8 = v3;
    do
    {
      if ( (unsigned int)v3 >= v7->itemDataCount )
      {
        LODWORD(v12) = v7->itemDataCount;
        LODWORD(v10) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3333, ASSERT_TYPE_ASSERT, "(unsigned)( partWorldIndex ) < (unsigned)( r_curEventGroup.itemDataCount )", "partWorldIndex doesn't index r_curEventGroup.itemDataCount\n\t%i not in [0, %i)", v10, v12) )
          __debugbreak();
      }
      itemData = v7->itemData;
      if ( v7->itemData[v8].nextItemIndex == -1 )
        ScriptableSv_SetEventExpiration_CheckHeadEntries((const ScriptableWorldType)v5, v3);
      else
        ScriptableSv_SetEventExpiration_RemoveInnerEntry((const ScriptableWorldType)v5, v3);
      *(_QWORD *)&itemData[v8].prevItemIndex = -1i64;
      LODWORD(v3) = v3 + 1;
      ++v8;
    }
    while ( (unsigned int)v3 < v6 );
  }
}

/*
==============
ScriptableSv_IsInitialized
==============
*/
_BOOL8 ScriptableSv_IsInitialized()
{
  return g_svScriptablesInitialized;
}

/*
==============
ScriptableSv_IsLootCustomWeapon
==============
*/
char ScriptableSv_IsLootCustomWeapon(const char *itemDefName)
{
  const ScriptableDef *NetConstStringDefAtIndex; 
  ntl::red_black_tree_node_base *LootItemDefByScriptableDef; 
  unsigned int outIndex; 

  if ( !itemDefName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3911, ASSERT_TYPE_ASSERT, "(itemDefName)", (const char *)&queryFormat, "itemDefName") )
    __debugbreak();
  if ( NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_SCRIPTABLEDEF, itemDefName, &outIndex) )
  {
    NetConstStringDefAtIndex = ScriptableBg_GetNetConstStringDefAtIndex(outIndex);
    if ( NetConstStringDefAtIndex )
    {
      LootItemDefByScriptableDef = ScriptableSv_GetLootItemDefByScriptableDef(NetConstStringDefAtIndex);
      if ( LootItemDefByScriptableDef )
      {
        if ( BG_SpawnGroup_Loot_IsCustomWeaponItemDef((const BG_SpawnGroup_Loot_ItemDef *const)LootItemDefByScriptableDef) )
        {
          return 1;
        }
        else
        {
          Com_PrintWarning(29, "[SPAWNGROUP_LOOT] Warning - item def %s is not a custom weapon.\n", itemDefName);
          return 0;
        }
      }
      else
      {
        Com_PrintWarning(29, "[SPAWNGROUP_LOOT] Warning - item def %s is not in the loot table.\n", itemDefName);
        return 0;
      }
    }
    else
    {
      Com_PrintWarning(29, "[SPAWNGROUP_LOOT] Warning - item def %s has no matching scriptable.\n", itemDefName);
      return 0;
    }
  }
  else
  {
    Com_PrintWarning(29, "[SPAWNGROUP_LOOT] Warning - item def %s is not precached\n", itemDefName);
    return 0;
  }
}

/*
==============
ScriptableSv_IsLootPointInUse
==============
*/
bool ScriptableSv_IsLootPointInUse(const unsigned __int16 pointIndex)
{
  if ( pointIndex == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1150, ASSERT_TYPE_ASSERT, "(unsigned)( pointIndex ) < (unsigned)( 65535 )", "pointIndex doesn't index SPAWNGROUP_LOOT_MAX_POINTS\n\t%i not in [0, %i)", 0xFFFF, 0xFFFF) )
    __debugbreak();
  return s_lootPointToDefBuffer.points[pointIndex] != 0;
}

/*
==============
ScriptableSv_IsLootWeapon
==============
*/
bool ScriptableSv_IsLootWeapon(const unsigned int scriptableIndex)
{
  const ScriptableDef *def; 
  const BG_SpawnGroup_Loot_ItemDef *LootItemDef; 
  BG_SpawnGroup_Loot_Table *v4; 
  unsigned int v6; 
  unsigned int totalInstanceCount; 

  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.totalInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    totalInstanceCount = g_scriptableWorldCounts.totalInstanceCount;
    v6 = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 4061, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v6, totalInstanceCount) )
      __debugbreak();
  }
  def = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
  if ( !def )
    return 0;
  if ( (def->flags & 0x20000) == 0 )
    return 0;
  LootItemDef = ScriptableSv_GetLootItemDef(scriptableIndex);
  if ( !LootItemDef )
    return 0;
  v4 = s_scriptableSvLootTable;
  if ( (!s_scriptableSvLootTable || s_scriptableSvLootTable->itemTypeIndexCache == 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 4081, ASSERT_TYPE_ASSERT, "(lootTable && ( lootTable->itemTypeIndexCache != (0xFF) ))", (const char *)&queryFormat, "lootTable && ( lootTable->itemTypeIndexCache != SPAWNGROUP_LOOT_ITEM_TYPE_INVALID_INDEX )") )
    __debugbreak();
  return v4->itemTypeIndexWeapon == LootItemDef->type;
}

/*
==============
ScriptableSv_MyChangesRestoreStandaloneInstance
==============
*/
void ScriptableSv_MyChangesRestoreStandaloneInstance(const unsigned int scriptableIndex, const char *defName, const vec3_t *origin, const vec3_t *angles, const unsigned __int16 payload, const unsigned __int16 extraPayload)
{
  unsigned int inInstanceIndexa; 
  __int64 inInstanceIndex; 
  unsigned int outInstanceIndexa; 
  unsigned int *outInstanceIndex; 
  unsigned int v14; 

  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.runtimeInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    outInstanceIndexa = g_scriptableWorldCounts.runtimeInstanceCount;
    inInstanceIndexa = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetReservedInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetReservedInstanceCount()\n\t%i not in [0, %i)", inInstanceIndexa, outInstanceIndexa) )
      __debugbreak();
  }
  if ( ScriptableSv_StandaloneSpawnInstance_Internal(defName, origin, angles, payload, extraPayload, scriptableIndex, &v14) )
  {
    if ( v14 != scriptableIndex )
    {
      LODWORD(outInstanceIndex) = scriptableIndex;
      LODWORD(inInstanceIndex) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2122, ASSERT_TYPE_ASSERT, "( outInstanceIndex ) == ( scriptableIndex )", "outInstanceIndex == scriptableIndex\n\t%i, %i", inInstanceIndex, outInstanceIndex) )
        __debugbreak();
    }
  }
  else
  {
    Com_PrintError(29, "ScriptableStandalone [MyChanges] Could not restore scriptable instance properly\n");
  }
}

/*
==============
ScriptableSv_NetworkStatesMoved
==============
*/
void ScriptableSv_NetworkStatesMoved(const ScriptableWorldType worldType, const unsigned int startIndex, const unsigned int numStates, const unsigned int movePartCount)
{
  __int64 v4; 
  unsigned int v6; 
  unsigned __int8 v7; 
  ScriptableWorldEventGroup *v8; 
  __int64 v9; 
  int v10; 
  __int64 v11; 
  unsigned __int8 v12; 
  __int64 v13; 
  int v14; 
  __int64 v15; 
  int v16; 
  unsigned int v17; 

  v4 = startIndex;
  v6 = numStates;
  v7 = worldType;
  if ( (unsigned __int8)worldType >= (unsigned int)COUNT )
  {
    v16 = 2;
    v14 = (unsigned __int8)worldType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3354, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>( worldType ) ) < (unsigned)( ( sizeof( *array_counter( g_scriptableSv_eventTracking.groups ) ) + 0 ) )", "static_cast<int>( worldType ) doesn't index ARRAY_COUNT( g_scriptableSv_eventTracking.groups )\n\t%i not in [0, %i)", v14, v16) )
      __debugbreak();
  }
  v8 = &g_scriptableSv_eventTracking.groups[v7];
  v17 = v4 + movePartCount;
  if ( (unsigned int)v4 < (unsigned int)v4 + movePartCount )
  {
    v9 = v4;
    v10 = -v6;
    do
    {
      if ( (unsigned int)v4 >= v8->itemDataCount )
      {
        LODWORD(v15) = v8->itemDataCount;
        LODWORD(v13) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3360, ASSERT_TYPE_ASSERT, "(unsigned)( partWorldIndex ) < (unsigned)( r_curEventGroup.itemDataCount )", "partWorldIndex doesn't index r_curEventGroup.itemDataCount\n\t%i not in [0, %i)", v13, v15) )
          __debugbreak();
      }
      v11 = (__int64)&v8->itemData[v9];
      if ( v6 > (unsigned int)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3364, ASSERT_TYPE_ASSERT, "( numStates <= partWorldIndex )", (const char *)&queryFormat, "numStates <= partWorldIndex") )
        __debugbreak();
      if ( *(_DWORD *)(v11 + 4) != -1 || v8->itemLists.headPartIndex[*(unsigned __int8 *)(v11 + 8)] == (_DWORD)v4 )
      {
        if ( !(unsigned __int8)ScriptableSv_GetPartEventState((const ScriptableWorldType)v7, v10 + (int)v4) )
        {
          LODWORD(v15) = v10 + v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3373, ASSERT_TYPE_ASSERT, "( ( ScriptableSv_GetPartEventState( worldType, movedPartWorldIndex ) ) )", "%s\n\t( movedPartWorldIndex ) = %i", "( ScriptableSv_GetPartEventState( worldType, movedPartWorldIndex ) )", v15) )
            __debugbreak();
        }
        v12 = *(_BYTE *)(v11 + 8);
        if ( *(_DWORD *)(v11 + 4) == -1 )
          ScriptableSv_SetEventExpiration_CheckHeadEntries((const ScriptableWorldType)v7, v4);
        else
          ScriptableSv_SetEventExpiration_RemoveInnerEntry((const ScriptableWorldType)v7, v4);
        *(_QWORD *)v11 = -1i64;
        ScriptableSv_SetEventExpiration((const ScriptableWorldType)v7, v10 + v4, 1, v12);
        v6 = numStates;
      }
      else if ( (unsigned __int8)ScriptableSv_GetPartEventState((const ScriptableWorldType)v7, v10 + (int)v4) )
      {
        LODWORD(v15) = v10 + v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3370, ASSERT_TYPE_ASSERT, "( ( !ScriptableSv_GetPartEventState( worldType, movedPartWorldIndex ) ) )", "%s\n\t( movedPartWorldIndex ) = %i", "( !ScriptableSv_GetPartEventState( worldType, movedPartWorldIndex ) )", v15) )
          __debugbreak();
      }
      LODWORD(v4) = v4 + 1;
      ++v9;
    }
    while ( (unsigned int)v4 < v17 );
  }
}

/*
==============
ScriptableSv_PickLootItem
==============
*/
const char *ScriptableSv_PickLootItem(const char *typeName, int rarityMin, int rarityMax, const char *setName)
{
  unsigned __int8 v8; 

  if ( !s_scriptableSvLootTable )
    return (char *)&queryFormat.fmt + 3;
  if ( dword_14D92356C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
  {
    j__Init_thread_header(&dword_14D92356C);
    if ( dword_14D92356C == -1 )
    {
      seed = s_svScriptableLootSeed;
      j__Init_thread_footer(&dword_14D92356C);
    }
  }
  v8 = BG_SpawnGroup_Loot_PickSingleItem(s_scriptableSvLootTable, typeName, rarityMin, rarityMax, setName, &seed);
  if ( v8 )
    return s_scriptableSvLootTable->itemDefs[(unsigned __int64)v8].name;
  else
    return (char *)&queryFormat.fmt + 3;
}

/*
==============
ScriptableSv_PrecommitMemory
==============
*/
void ScriptableSv_PrecommitMemory(void)
{
  if ( !s_svScriptableRuntimeHunk && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 277, ASSERT_TYPE_ASSERT, "( s_svScriptableRuntimeHunk != nullptr )", (const char *)&queryFormat, "s_svScriptableRuntimeHunk != nullptr") )
    __debugbreak();
  Mem_HunkUser_CommitReserve(s_svScriptableRuntimeHunk);
}

/*
==============
ScriptableSv_RefreshEventUpdateList
==============
*/
void ScriptableSv_RefreshEventUpdateList(const unsigned int scriptableIndex, const ScriptableDef *def, const ScriptableStateDef *newStateDef)
{
  unsigned __int64 v4; 
  const dvar_t *v6; 
  unsigned int v7; 
  unsigned __int64 v8; 
  const dvar_t *v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  v4 = scriptableIndex;
  if ( !ScriptableSv_GetInstanceInUse(scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 826, ASSERT_TYPE_ASSERT, "( ( ScriptableSv_GetInstanceInUse( scriptableIndex ) ) )", "%s\n\t( def.name ) = %s", "( ScriptableSv_GetInstanceInUse( scriptableIndex ) )", def->name) )
    __debugbreak();
  if ( !ScriptableSv_IsServerInstance(v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 827, ASSERT_TYPE_ASSERT, "( ( ScriptableSv_IsServerInstance( scriptableIndex ) ) )", "%s\n\t( def.name ) = %s", "( ScriptableSv_IsServerInstance( scriptableIndex ) )", def->name) )
    __debugbreak();
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 340, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( (def->flags & 0x200) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 828, ASSERT_TYPE_ASSERT, "( ( ScriptableDef_RequiresUpdate( &def ) ) )", "%s\n\t( def.name ) = %s", "( ScriptableDef_RequiresUpdate( &def ) )", def->name) )
    __debugbreak();
  if ( (newStateDef->base.flags & 0x200) != 0 )
  {
    v6 = DCONST_DVARBOOL_scriptable_sv_debug_updates;
    if ( !DCONST_DVARBOOL_scriptable_sv_debug_updates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_sv_debug_updates") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
    {
      if ( (unsigned int)v4 >= 0x3D0A0 )
      {
        LODWORD(v11) = 250016;
        LODWORD(v10) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v10, v11) )
          __debugbreak();
      }
      if ( ((0x80000000 >> (v4 & 0x1F)) & s_scriptableSv_eventUpdateBits.array[v4 >> 5]) == 0 )
        Com_Printf(29, "ScriptableSv_RefreshEventUpdateList: Event Update required for instance %i (%s)\n", (unsigned int)v4, def->name);
    }
    if ( (unsigned int)v4 >= 0x3D0A0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v4, 250016) )
      __debugbreak();
    v7 = 0x80000000 >> (v4 & 0x1F);
    v8 = v4 >> 5;
    s_scriptableSv_eventUpdateBits.array[v8] |= v7;
    if ( (unsigned int)v4 >= 0x3D0A0 )
    {
      LODWORD(v13) = 250016;
      LODWORD(v12) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v12, v13) )
        __debugbreak();
    }
    s_scriptableSv_eventUpdateListCompletedBits.array[v8] &= ~v7;
  }
  else
  {
    if ( (unsigned int)v4 >= 0x3D0A0 )
    {
      LODWORD(v11) = 250016;
      LODWORD(v10) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v10, v11) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v4 & 0x1F)) & s_scriptableSv_eventUpdateBits.array[v4 >> 5]) != 0 && !ScriptableSv_IsUpdateRequiredForInstance(v4, def) )
    {
      v9 = DCONST_DVARBOOL_scriptable_sv_debug_updates;
      if ( !DCONST_DVARBOOL_scriptable_sv_debug_updates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_sv_debug_updates") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      if ( v9->current.enabled )
        Com_Printf(29, "ScriptableSv_RefreshEventUpdateList: Event Update no longer required for instance %i (%s)\n", (unsigned int)v4, def->name);
      bitarray_base<bitarray<250016>>::resetBit(&s_scriptableSv_eventUpdateBits, v4);
      bitarray_base<bitarray<250016>>::resetBit(&s_scriptableSv_eventUpdateListCompletedBits, v4);
    }
  }
}

/*
==============
ScriptableSv_RegisterNetworkLODRangeOverrideEntity
==============
*/
void ScriptableSv_RegisterNetworkLODRangeOverrideEntity(const gentity_s *const ent)
{
  unsigned int number; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 896, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  number = ent->s.number;
  if ( number >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", number, 2048) )
    __debugbreak();
  s_scriptableNetworkLODOverrideEntities.array[(unsigned __int64)number >> 5] |= 0x80000000 >> (number & 0x1F);
}

/*
==============
ScriptableSv_RemoveFromAllUpdateLists
==============
*/
void ScriptableSv_RemoveFromAllUpdateLists(const unsigned int scriptableIndex)
{
  unsigned __int64 v1; 
  unsigned int v2; 
  unsigned __int64 v3; 
  __int64 v4; 
  __int64 v6; 
  int v7; 

  v1 = scriptableIndex;
  if ( scriptableIndex >= 0x3D0A0 )
  {
    v7 = 250016;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", scriptableIndex, v7) )
      __debugbreak();
  }
  v2 = ~(0x80000000 >> (v1 & 0x1F));
  v3 = v1 >> 5;
  s_scriptableSv_eventUpdateBits.array[v3] &= v2;
  if ( (unsigned int)v1 >= 0x3D0A0 )
  {
    LODWORD(v6) = 250016;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v4, v6) )
      __debugbreak();
  }
  s_scriptableSv_entityPositionUpdateBits.array[v3] &= v2;
  if ( (unsigned int)v1 >= 0x3D0A0 )
  {
    LODWORD(v6) = 250016;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v4, v6) )
      __debugbreak();
  }
  s_scriptableSv_standaloneParentUpdateBits.array[v3] &= v2;
  if ( (unsigned int)v1 >= 0x3D0A0 )
  {
    LODWORD(v6) = 250016;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v4, v6) )
      __debugbreak();
  }
  s_scriptableSv_eventUpdateListCompletedBits.array[v3] &= v2;
}

/*
==============
ScriptableSv_RemoveFromEventUpdateList
==============
*/
void ScriptableSv_RemoveFromEventUpdateList(const unsigned int scriptableIndex)
{
  unsigned __int64 v1; 
  unsigned __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  int v6; 

  v1 = scriptableIndex;
  if ( scriptableIndex >= 0x3D0A0 )
  {
    v6 = 250016;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", scriptableIndex, v6) )
      __debugbreak();
  }
  v2 = v1 >> 5;
  s_scriptableSv_eventUpdateBits.array[v2] &= ~(0x80000000 >> (v1 & 0x1F));
  if ( (unsigned int)v1 >= 0x3D0A0 )
  {
    LODWORD(v5) = 250016;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v3, v5) )
      __debugbreak();
  }
  s_scriptableSv_eventUpdateListCompletedBits.array[v2] |= 0x80000000 >> (v1 & 0x1F);
}

/*
==============
ScriptableSv_RemoveStandaloneInstance
==============
*/
void ScriptableSv_RemoveStandaloneInstance(const unsigned int scriptableIndex)
{
  const BG_SpawnGroup_Loot_ItemDef *LootItemDef; 
  ScriptableInstanceContext *InstanceCommonContext; 
  GWeaponMap *Instance; 
  BgWeaponHandle handle; 

  if ( !s_scriptableSv_myChangesKeepScriptVariables )
  {
    LootItemDef = ScriptableSv_GetLootItemDef(scriptableIndex);
    if ( LootItemDef )
    {
      if ( BG_SpawnGroup_Loot_IsCustomWeaponItemDef(LootItemDef) )
      {
        InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
        Instance = GWeaponMap::GetInstance();
        handle.m_mapEntryId = InstanceCommonContext->extraPayload;
        GWeaponMap::ClearWeapon(Instance, &handle);
      }
    }
  }
}

/*
==============
ScriptableSv_ResetLootGlobals
==============
*/
void ScriptableSv_ResetLootGlobals(void)
{
  s_svScriptableLootSeed = 0;
  s_svScriptableLootTableChecksum = 0;
  s_svScriptableLootActive = 0;
}

/*
==============
ScriptableSv_RunFrame
==============
*/

void __fastcall ScriptableSv_RunFrame(double _XMM0_8)
{
  const dvar_t *v2; 
  char *Value; 
  int *v4; 
  _QWORD *v5; 
  char *v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  ThreadContext CurrentThreadContext; 
  unsigned int i; 
  unsigned int v15; 
  unsigned int v16; 
  __int64 v17; 
  unsigned int v18; 
  unsigned int v19; 
  gentity_s *Entity; 
  const vec3_t *p_currentAngles; 
  const vec3_t *p_currentOrigin; 
  __int64 v23; 
  unsigned int v24; 
  __int64 v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  __int64 v33; 
  __int64 v34; 

  v2 = DCONST_DVARBOOL_scriptable_enable;
  if ( !DCONST_DVARBOOL_scriptable_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled && g_svScriptablesInitialized && s_svScriptablesCreated && s_svScriptablesStateEntered )
  {
    __asm { vmovaps [rsp+78h+var_38], xmm6 }
    Value = (char *)Sys_GetValue(0);
    v4 = (int *)(Value + 33056);
    if ( (unsigned int)(*((_DWORD *)Value + 8264) + 1) >= 3 )
    {
      LODWORD(v34) = 3;
      LODWORD(v33) = *((_DWORD *)Value + 8264) + 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v33, v34) )
        __debugbreak();
    }
    if ( (unsigned int)++*v4 >= 3 )
    {
      LODWORD(v34) = 3;
      LODWORD(v33) = *v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v33, v34) )
        __debugbreak();
    }
    v5 = Value + 2088;
    v6 = Value + 40;
    if ( *v5 < (unsigned __int64)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
      __debugbreak();
    *v5 += 8i64;
    if ( *v5 >= (unsigned __int64)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
      __debugbreak();
    *(_QWORD *)*v5 = v4;
    if ( *v5 <= (unsigned __int64)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
      __debugbreak();
    v7 = *v4;
    v8 = __rdtsc();
    v4[v7 + 2] = v8;
    if ( Sys_HasValidCurrentThreadContext() )
      CurrentThreadContext = Sys_GetCurrentThreadContext();
    else
      CurrentThreadContext = THREAD_CONTEXT_COUNT;
    CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 774, NULL, 0);
    ScriptableSv_ValidateEntityLinks();
    for ( i = 0; i < 2; ++i )
      ScriptableSv_UpdateEventExpiration((const ScriptableWorldType)(unsigned __int8)i);
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vcvtsi2ss xmm6, xmm6, eax
    }
    _XMM0_8 = Com_GetTimeScale();
    __asm
    {
      vmulss  xmm1, xmm6, cs:__real@3a83126f
      vmulss  xmm6, xmm0, xmm1
    }
    s_svScriptablesLastUpdateTime = level.time;
    ScriptableSv_ValidateUpdateLists();
    ScriptableCommon_AssertCountsInitialized();
    v15 = (g_scriptableWorldCounts.serverInstanceCount + 31) >> 5;
    Sys_ProfBeginNamedEvent(0xFF808080, "ScriptableSv_UpdateEntityPosition");
    if ( v15 > 0x1E85 )
    {
      LODWORD(v34) = 7813;
      LODWORD(v33) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2859, ASSERT_TYPE_ASSERT, "( updateWordCount ) <= ( s_scriptableSv_entityPositionUpdateBits.getWordCount() )", "updateWordCount <= s_scriptableSv_entityPositionUpdateBits.getWordCount()\n\t%i, %i", v33, v34) )
        __debugbreak();
    }
    v16 = 0;
    LODWORD(v17) = 0;
    if ( v15 )
      v16 = s_scriptableSv_entityPositionUpdateBits.array[0];
    while ( v16 )
    {
LABEL_36:
      v18 = __lzcnt(v16);
      v19 = v18 + 32 * v17;
      if ( v18 >= 0x20 )
      {
        LODWORD(v34) = 32;
        LODWORD(v33) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v33, v34) )
          __debugbreak();
      }
      if ( (v16 & (0x80000000 >> v18)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      v16 &= ~(0x80000000 >> v18);
      if ( !ScriptableSv_GetInstanceInUse(v19) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2864, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetInstanceInUse( scriptableIndex ) )", (const char *)&queryFormat, "ScriptableSv_GetInstanceInUse( scriptableIndex )") )
        __debugbreak();
      if ( !ScriptableSv_IsServerInstance(v19) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2865, ASSERT_TYPE_ASSERT, "( ScriptableSv_IsServerInstance( scriptableIndex ) )", (const char *)&queryFormat, "ScriptableSv_IsServerInstance( scriptableIndex )") )
        __debugbreak();
      Entity = ScriptableSv_GetEntity(v19);
      p_currentAngles = &Entity->r.currentAngles;
      p_currentOrigin = &Entity->r.currentOrigin;
      if ( ScriptableSv_HasParentEntity(v19) )
      {
        LODWORD(v33) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3484, ASSERT_TYPE_ASSERT, "( !ScriptableSv_HasParentEntity( scriptableIndex ) )", "Can't update origin and angles on standalone parented to an entity [%d] ", v33) )
          __debugbreak();
      }
      ScriptableSv_UpdateReplicatedTransform(v19, p_currentOrigin, p_currentAngles);
      ScriptableSv_UpdateWorldTransform(v19, p_currentOrigin, p_currentAngles);
    }
    while ( 1 )
    {
      v17 = (unsigned int)(v17 + 1);
      if ( (unsigned int)v17 >= v15 )
        break;
      v16 = s_scriptableSv_entityPositionUpdateBits.array[v17];
      if ( v16 )
        goto LABEL_36;
    }
    Sys_ProfEndNamedEvent();
    LODWORD(v23) = 0;
    if ( Com_GameMode_SupportsFeature(WEAPON_LEAP_IN|0x80) )
    {
      Sys_ProfBeginNamedEvent(0xFF808080, "ScriptableSv_UpdateParentPosition");
      if ( v15 > 0x1E85 )
      {
        LODWORD(v34) = 7813;
        LODWORD(v33) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2878, ASSERT_TYPE_ASSERT, "( updateWordCount ) <= ( s_scriptableSv_standaloneParentUpdateBits.getWordCount() )", "updateWordCount <= s_scriptableSv_standaloneParentUpdateBits.getWordCount()\n\t%i, %i", v33, v34) )
          __debugbreak();
      }
      v24 = 0;
      LODWORD(v25) = 0;
      if ( v15 )
        v24 = s_scriptableSv_standaloneParentUpdateBits.array[0];
      while ( v24 )
      {
LABEL_61:
        v26 = __lzcnt(v24);
        v27 = v26 + 32 * v25;
        if ( v26 >= 0x20 )
        {
          LODWORD(v34) = 32;
          LODWORD(v33) = v26;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v33, v34) )
            __debugbreak();
        }
        if ( (v24 & (0x80000000 >> v26)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
          __debugbreak();
        v24 &= ~(0x80000000 >> v26);
        if ( !ScriptableSv_GetInstanceInUse(v27) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2883, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetInstanceInUse( scriptableIndex ) )", (const char *)&queryFormat, "ScriptableSv_GetInstanceInUse( scriptableIndex )") )
          __debugbreak();
        if ( !ScriptableSv_IsServerInstance(v27) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2884, ASSERT_TYPE_ASSERT, "( ScriptableSv_IsServerInstance( scriptableIndex ) )", (const char *)&queryFormat, "ScriptableSv_IsServerInstance( scriptableIndex )") )
          __debugbreak();
        if ( !ScriptableSv_UpdateParentedInstanceTransform(v27) )
        {
          Com_PrintWarning(29, "Scriptable %d parent entity could not be found. Clearing parent entity.\n", v27);
          if ( !ScriptableSv_StandaloneClearParentEntity(v27) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2889, ASSERT_TYPE_ASSERT, "(ScriptableSv_StandaloneClearParentEntity( scriptableIndex ))", (const char *)&queryFormat, "ScriptableSv_StandaloneClearParentEntity( scriptableIndex )") )
            __debugbreak();
        }
      }
      while ( 1 )
      {
        v25 = (unsigned int)(v25 + 1);
        if ( (unsigned int)v25 >= v15 )
          break;
        v24 = s_scriptableSv_standaloneParentUpdateBits.array[v25];
        if ( v24 )
          goto LABEL_61;
      }
      Sys_ProfEndNamedEvent();
      LODWORD(v23) = 0;
    }
    Sys_ProfBeginNamedEvent(0xFF808080, "ScriptableSv_UpdateEvents");
    if ( v15 > 0x1E85 )
    {
      LODWORD(v34) = 7813;
      LODWORD(v33) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2898, ASSERT_TYPE_ASSERT, "( updateWordCount ) <= ( s_scriptableSv_eventUpdateBits.getWordCount() )", "updateWordCount <= s_scriptableSv_eventUpdateBits.getWordCount()\n\t%i, %i", v33, v34) )
        __debugbreak();
    }
    v28 = 0;
    if ( v15 )
      v28 = s_scriptableSv_eventUpdateBits.array[0];
    while ( v28 )
    {
LABEL_86:
      v29 = __lzcnt(v28);
      v30 = v29 + 32 * v23;
      if ( v29 >= 0x20 )
      {
        LODWORD(v34) = 32;
        LODWORD(v33) = v29;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v33, v34) )
          __debugbreak();
      }
      if ( (v28 & (0x80000000 >> v29)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      v28 &= ~(0x80000000 >> v29);
      if ( !ScriptableSv_GetInstanceInUse(v30) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2903, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetInstanceInUse( scriptableIndex ) )", (const char *)&queryFormat, "ScriptableSv_GetInstanceInUse( scriptableIndex )") )
        __debugbreak();
      if ( !ScriptableSv_IsServerInstance(v30) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2904, ASSERT_TYPE_ASSERT, "( ScriptableSv_IsServerInstance( scriptableIndex ) )", (const char *)&queryFormat, "ScriptableSv_IsServerInstance( scriptableIndex )") )
        __debugbreak();
      g_scriptableSv_updatingIndex = v29 + 32 * v23;
      __asm { vmovaps xmm0, xmm6; deltaTime }
      ScriptableSv_UpdateInstanceEvents(*(const float *)&_XMM0, v30);
    }
    while ( 1 )
    {
      v23 = (unsigned int)(v23 + 1);
      if ( (unsigned int)v23 >= v15 )
        break;
      v28 = s_scriptableSv_eventUpdateBits.array[v23];
      if ( v28 )
        goto LABEL_86;
    }
    Sys_ProfEndNamedEvent();
    g_scriptableSv_updatingIndex = -1;
    Scriptable_Analytics_FlipServerFrame();
    Profile_EndInternal(NULL);
    __asm { vmovaps xmm6, [rsp+78h+var_38] }
  }
}

/*
==============
ScriptableSv_SetEventExpiration
==============
*/
void ScriptableSv_SetEventExpiration(const ScriptableWorldType worldType, const unsigned int partWorldIndex, const int expectExistingEntry, unsigned __int8 listIndex)
{
  __int64 v4; 
  unsigned __int8 v7; 
  ScriptableWorldEventGroup *v8; 
  unsigned int v9; 
  char *v10; 
  ScriptableEventExpireItem *v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  v4 = partWorldIndex;
  v7 = worldType;
  if ( (unsigned __int8)worldType >= (unsigned int)COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3268, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>( worldType ) ) < (unsigned)( ( sizeof( *array_counter( g_scriptableSv_eventTracking.groups ) ) + 0 ) )", "static_cast<int>( worldType ) doesn't index ARRAY_COUNT( g_scriptableSv_eventTracking.groups )\n\t%i not in [0, %i)", (unsigned __int8)worldType, 2) )
    __debugbreak();
  v8 = &g_scriptableSv_eventTracking.groups[v7];
  if ( !v8->itemData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3270, ASSERT_TYPE_ASSERT, "( r_curEventGroup.itemData )", (const char *)&queryFormat, "r_curEventGroup.itemData") )
    __debugbreak();
  if ( listIndex >= 6u )
  {
    LODWORD(v14) = 6;
    LODWORD(v13) = listIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3273, ASSERT_TYPE_ASSERT, "(unsigned)( listIndex ) < (unsigned)( ( sizeof( *array_counter( r_curEventGroup.itemLists.headPartIndex ) ) + 0 ) )", "listIndex doesn't index ARRAY_COUNT( r_curEventGroup.itemLists.headPartIndex )\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  v9 = v8->itemLists.headPartIndex[listIndex];
  v10 = (char *)&v8->itemLists.headPartIndex[listIndex];
  if ( v9 != (_DWORD)v4 )
  {
    if ( (unsigned int)v4 >= v8->itemDataCount )
    {
      LODWORD(v14) = v8->itemDataCount;
      LODWORD(v13) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3283, ASSERT_TYPE_ASSERT, "(unsigned)( partWorldIndex ) < (unsigned)( r_curEventGroup.itemDataCount )", "partWorldIndex doesn't index r_curEventGroup.itemDataCount\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    v11 = &v8->itemData[v4];
    if ( expectExistingEntry )
    {
      if ( v11->nextItemIndex == -1 )
        ScriptableSv_SetEventExpiration_CheckHeadEntries((const ScriptableWorldType)v7, v4);
      else
        ScriptableSv_SetEventExpiration_RemoveInnerEntry((const ScriptableWorldType)v7, v4);
    }
    v11->prevItemIndex = v9;
    v11->nextItemIndex = -1;
    v11->listIndex = listIndex;
    if ( v9 != -1 )
    {
      if ( v9 >= v8->itemDataCount )
      {
        LODWORD(v14) = v8->itemDataCount;
        LODWORD(v13) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3310, ASSERT_TYPE_ASSERT, "(unsigned)( partExpireItem->prevItemIndex ) < (unsigned)( r_curEventGroup.itemDataCount )", "partExpireItem->prevItemIndex doesn't index r_curEventGroup.itemDataCount\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      v12 = (__int64)&v8->itemData[v11->prevItemIndex];
      if ( *(_DWORD *)(v12 + 4) != -1 )
      {
        LODWORD(v14) = *(_DWORD *)(v12 + 4);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3314, ASSERT_TYPE_ASSERT, "( ( currentHeadItem->nextItemIndex == (SCRIPTABLE_INVALID_PART_INDEX) ) )", "%s\n\t( currentHeadItem->nextItemIndex ) = %i", "( currentHeadItem->nextItemIndex == (SCRIPTABLE_INVALID_PART_INDEX) )", v14) )
          __debugbreak();
      }
      *(_DWORD *)(v12 + 4) = v4;
    }
    *(_DWORD *)v10 = v4;
  }
}

/*
==============
ScriptableSv_SetEventExpiration_CheckHeadEntries
==============
*/
char ScriptableSv_SetEventExpiration_CheckHeadEntries(const ScriptableWorldType worldType, const unsigned int partWorldIndex)
{
  __int64 v2; 
  unsigned __int8 v3; 
  ScriptableWorldEventGroup *v4; 
  __int64 i; 
  bool v6; 
  unsigned int v7; 
  ScriptableEventExpireItem *v8; 
  __int64 prevItemIndex; 
  __int64 v10; 
  __int64 v12; 
  __int64 v13; 

  v2 = partWorldIndex;
  v3 = worldType;
  if ( (unsigned __int8)worldType >= (unsigned int)COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3223, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>( worldType ) ) < (unsigned)( ( sizeof( *array_counter( g_scriptableSv_eventTracking.groups ) ) + 0 ) )", "static_cast<int>( worldType ) doesn't index ARRAY_COUNT( g_scriptableSv_eventTracking.groups )\n\t%i not in [0, %i)", (unsigned __int8)worldType, 2) )
    __debugbreak();
  v4 = &g_scriptableSv_eventTracking.groups[v3];
  if ( !v4->itemData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3225, ASSERT_TYPE_ASSERT, "( r_curEventGroup.itemData )", (const char *)&queryFormat, "r_curEventGroup.itemData") )
    __debugbreak();
  for ( i = 0i64; ; i = (unsigned int)(i + 1) )
  {
    v6 = Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80);
    v7 = 2;
    if ( v6 )
      v7 = 6;
    if ( (unsigned int)i >= v7 )
      return 0;
    if ( v4->itemLists.headPartIndex[i] == (_DWORD)v2 )
      break;
  }
  if ( (unsigned int)v2 >= v4->itemDataCount )
  {
    LODWORD(v13) = v4->itemDataCount;
    LODWORD(v12) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3237, ASSERT_TYPE_ASSERT, "(unsigned)( partWorldIndex ) < (unsigned)( r_curEventGroup.itemDataCount )", "partWorldIndex doesn't index r_curEventGroup.itemDataCount\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  v8 = &v4->itemData[v2];
  if ( v8->nextItemIndex != -1 )
  {
    LODWORD(v13) = -1;
    LODWORD(v12) = v8->nextItemIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3239, ASSERT_TYPE_ASSERT, "( partExpireItem->nextItemIndex ) == ( (SCRIPTABLE_INVALID_PART_INDEX) )", "partExpireItem->nextItemIndex == SCRIPTABLE_EVENT_TRACKING_PART_CLEAR\n\t%i, %i", v12, v13) )
      __debugbreak();
  }
  prevItemIndex = v8->prevItemIndex;
  if ( (_DWORD)prevItemIndex != -1 )
  {
    if ( (unsigned int)prevItemIndex >= v4->itemDataCount )
    {
      LODWORD(v13) = v4->itemDataCount;
      LODWORD(v12) = prevItemIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3246, ASSERT_TYPE_ASSERT, "(unsigned)( newHeadIndex ) < (unsigned)( r_curEventGroup.itemDataCount )", "newHeadIndex doesn't index r_curEventGroup.itemDataCount\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    v10 = (__int64)&v4->itemData[prevItemIndex];
    if ( *(_DWORD *)(v10 + 4) != (_DWORD)v2 )
    {
      LODWORD(v13) = v2;
      LODWORD(v12) = *(_DWORD *)(v10 + 4);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3250, ASSERT_TYPE_ASSERT, "( newHeadItem->nextItemIndex ) == ( partWorldIndex )", "newHeadItem->nextItemIndex == partWorldIndex\n\t%i, %i", v12, v13) )
        __debugbreak();
    }
    *(_DWORD *)(v10 + 4) = -1;
  }
  if ( (unsigned int)i >= 6 )
  {
    LODWORD(v13) = 6;
    LODWORD(v12) = i;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3255, ASSERT_TYPE_ASSERT, "(unsigned)( headFrameIndex ) < (unsigned)( ( sizeof( *array_counter( r_curEventGroup.itemLists.headPartIndex ) ) + 0 ) )", "headFrameIndex doesn't index ARRAY_COUNT( r_curEventGroup.itemLists.headPartIndex )\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  v4->itemLists.headPartIndex[i] = prevItemIndex;
  return 1;
}

/*
==============
ScriptableSv_SetEventExpiration_RemoveInnerEntry
==============
*/
void ScriptableSv_SetEventExpiration_RemoveInnerEntry(const ScriptableWorldType worldType, const unsigned int partWorldIndex)
{
  __int64 v2; 
  unsigned __int8 v3; 
  bool v4; 
  ScriptableWorldEventGroup *v5; 
  ScriptableEventExpireItem *v6; 
  ScriptableEventExpireItem *v7; 
  unsigned int prevItemIndex; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  v2 = partWorldIndex;
  v3 = worldType;
  if ( (unsigned __int8)worldType >= (unsigned int)COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3185, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>( worldType ) ) < (unsigned)( ( sizeof( *array_counter( g_scriptableSv_eventTracking.groups ) ) + 0 ) )", "static_cast<int>( worldType ) doesn't index ARRAY_COUNT( g_scriptableSv_eventTracking.groups )\n\t%i not in [0, %i)", (unsigned __int8)worldType, 2) )
    __debugbreak();
  v4 = g_scriptableSv_eventTracking.groups[v3].itemData == NULL;
  v5 = &g_scriptableSv_eventTracking.groups[v3];
  if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3187, ASSERT_TYPE_ASSERT, "( r_curEventGroup.itemData )", (const char *)&queryFormat, "r_curEventGroup.itemData") )
    __debugbreak();
  if ( (unsigned int)v2 >= v5->itemDataCount )
  {
    LODWORD(v11) = v5->itemDataCount;
    LODWORD(v10) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3190, ASSERT_TYPE_ASSERT, "(unsigned)( partWorldIndex ) < (unsigned)( r_curEventGroup.itemDataCount )", "partWorldIndex doesn't index r_curEventGroup.itemDataCount\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  v6 = &v5->itemData[v2];
  if ( v6->nextItemIndex == -1 )
  {
    LODWORD(v11) = -1;
    LODWORD(v10) = -1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3194, ASSERT_TYPE_ASSERT, "( partExpireItem->nextItemIndex ) != ( (SCRIPTABLE_INVALID_PART_INDEX) )", "partExpireItem->nextItemIndex != SCRIPTABLE_EVENT_TRACKING_PART_CLEAR\n\t%i, %i", v10, v11) )
      __debugbreak();
  }
  if ( v6->nextItemIndex >= v5->itemDataCount )
  {
    LODWORD(v11) = v5->itemDataCount;
    LODWORD(v10) = v6->nextItemIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3199, ASSERT_TYPE_ASSERT, "(unsigned)( partExpireItem->nextItemIndex ) < (unsigned)( r_curEventGroup.itemDataCount )", "partExpireItem->nextItemIndex doesn't index r_curEventGroup.itemDataCount\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  v7 = &v5->itemData[v6->nextItemIndex];
  if ( v7->prevItemIndex != (_DWORD)v2 )
  {
    LODWORD(v11) = v2;
    LODWORD(v10) = v7->prevItemIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3201, ASSERT_TYPE_ASSERT, "( nextItem->prevItemIndex ) == ( partWorldIndex )", "nextItem->prevItemIndex == partWorldIndex\n\t%i, %i", v10, v11) )
      __debugbreak();
  }
  prevItemIndex = v6->prevItemIndex;
  v7->prevItemIndex = v6->prevItemIndex;
  if ( prevItemIndex != -1 )
  {
    if ( prevItemIndex >= v5->itemDataCount )
    {
      LODWORD(v11) = v5->itemDataCount;
      LODWORD(v10) = prevItemIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3210, ASSERT_TYPE_ASSERT, "(unsigned)( nextItem->prevItemIndex ) < (unsigned)( r_curEventGroup.itemDataCount )", "nextItem->prevItemIndex doesn't index r_curEventGroup.itemDataCount\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    v9 = (__int64)&v5->itemData[v7->prevItemIndex];
    if ( *(_DWORD *)(v9 + 4) != (_DWORD)v2 )
    {
      LODWORD(v11) = v2;
      LODWORD(v10) = *(_DWORD *)(v9 + 4);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3212, ASSERT_TYPE_ASSERT, "( previousItem->nextItemIndex ) == ( partWorldIndex )", "previousItem->nextItemIndex == partWorldIndex\n\t%i, %i", v10, v11) )
        __debugbreak();
    }
    *(_DWORD *)(v9 + 4) = v6->nextItemIndex;
  }
}

/*
==============
ScriptableSv_SetInitialOriginAndAngles
==============
*/
void ScriptableSv_SetInitialOriginAndAngles(unsigned int scriptableIndex, const vec3_t *origin, const vec3_t *angles)
{
  ScriptableInstanceContext *InstanceCommonContext; 

  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  InstanceCommonContext->originInitial = *origin;
  InstanceCommonContext->anglesInitial = *angles;
}

/*
==============
ScriptableSv_SetOriginAndAngles
==============
*/
void ScriptableSv_SetOriginAndAngles(const unsigned int scriptableIndex, const vec3_t *origin, const vec3_t *angles)
{
  unsigned int v6; 

  if ( ScriptableSv_HasParentEntity(scriptableIndex) )
  {
    v6 = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3484, ASSERT_TYPE_ASSERT, "( !ScriptableSv_HasParentEntity( scriptableIndex ) )", "Can't update origin and angles on standalone parented to an entity [%d] ", v6) )
      __debugbreak();
  }
  ScriptableSv_UpdateReplicatedTransform(scriptableIndex, origin, angles);
  ScriptableSv_UpdateWorldTransform(scriptableIndex, origin, angles);
}

/*
==============
ScriptableSv_SetPartScriptedState
==============
*/
__int64 ScriptableSv_SetPartScriptedState(const unsigned int scriptableIndex, const scr_string_t partName, const scr_string_t stateName)
{
  ScriptablePartDef *PartScriptedDefFromName; 
  const char *name; 
  const char *v9; 
  ScriptableInstanceContext *InstanceCommonContext; 
  const char *v11; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  ScriptableInstanceContext *v15; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  ScriptableInstanceContext *v19; 
  __int64 v22; 
  __int64 v23; 
  ScriptableEventParams eventParams; 
  unsigned int stateIdx; 
  ScriptableStateDef *stateDef; 

  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.serverInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3093, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", scriptableIndex, g_scriptableWorldCounts.serverInstanceCount) )
      __debugbreak();
  }
  if ( !partName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3094, ASSERT_TYPE_ASSERT, "( partName != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "partName != NULL_SCR_STRING") )
    __debugbreak();
  if ( !stateName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3095, ASSERT_TYPE_ASSERT, "( stateName != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "stateName != NULL_SCR_STRING") )
    __debugbreak();
  ScriptableSv_CheckIsScriptAccessAllowed(scriptableIndex, partName);
  PartScriptedDefFromName = ScriptableSv_GetPartScriptedDefFromName(scriptableIndex, partName, 1);
  if ( !PartScriptedDefFromName )
    return 0i64;
  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.serverInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    LODWORD(v23) = g_scriptableWorldCounts.serverInstanceCount;
    LODWORD(v22) = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3040, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v22, v23) )
      __debugbreak();
  }
  if ( !stateName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3042, ASSERT_TYPE_ASSERT, "( stateName != ( static_cast< scr_string_t >( 0 ) ) )", (const char *)&queryFormat, "stateName != NULL_SCR_STRING") )
    __debugbreak();
  ScriptableSv_CheckIsScriptAccessAllowed(scriptableIndex, stateName);
  stateIdx = -1;
  stateDef = NULL;
  ScriptableBg_GetStateFromName(PartScriptedDefFromName, stateName, &stateIdx, &stateDef);
  if ( !stateDef )
  {
    name = PartScriptedDefFromName->name;
    v9 = SL_ConvertToString(stateName);
    InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
    v11 = "<Unknown>";
    if ( InstanceCommonContext->def )
      v12 = InstanceCommonContext->def->name;
    else
      v12 = "<Unknown>";
    Com_PrintError(15, "ScriptableSv_GetPartStateIndexFromName [%s] State %s in part %s does not exist.\n", v12, v9, name);
LABEL_27:
    v17 = PartScriptedDefFromName->name;
    v18 = SL_ConvertToString(stateName);
    v19 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
    if ( v19->def )
      v11 = v19->def->name;
    Com_PrintError(15, "ScriptableSv_SetPartScriptedState [%s] Could not find state %s in part %s\n", v11, v18, v17);
    return 0i64;
  }
  if ( (unsigned int)(stateDef->type - 1) > 2 )
  {
    v13 = PartScriptedDefFromName->name;
    v14 = SL_ConvertToString(stateName);
    v15 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
    v11 = "<Unknown>";
    if ( v15->def )
      v16 = v15->def->name;
    else
      v16 = "<Unknown>";
    Com_PrintError(15, "ScriptableSv_GetPartStateIndexFromName [%s] State %s in part %s is not a scripted state - either make it one, or add a scripted state with a changestate event inside it\n", v16, v14, v13);
    goto LABEL_27;
  }
  __asm { vpxor   xmm0, xmm0, xmm0 }
  eventParams.callbacks = &s_svCallbackTable;
  eventParams.context = SBL_CONTEXT_SERVER;
  __asm { vmovdqu xmmword ptr [rsp+98h+eventParams.damageEvent], xmm0 }
  eventParams.scriptableIndex = scriptableIndex;
  eventParams.partDef = PartScriptedDefFromName;
  ScriptableBg_ChangePartState(&eventParams, stateIdx, 1);
  return 1i64;
}

/*
==============
ScriptableSv_SetPartStateFirst
==============
*/
void ScriptableSv_SetPartStateFirst(const unsigned int scriptableIndex, const ScriptableDef *const def, const ScriptablePartDef *const partDef)
{
  ScriptablePartRuntime *PartRuntime; 
  unsigned int v8; 
  ScriptableStateDef *states; 
  ScriptableInstanceContext *InstanceCommonContext; 
  ScriptableInstanceContext *v12; 
  ScriptableEventParams eventParams; 

  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2928, ASSERT_TYPE_ASSERT, "( def )", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( !partDef )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2929, ASSERT_TYPE_ASSERT, "( partDef )", (const char *)&queryFormat, "partDef") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 422, ASSERT_TYPE_ASSERT, "(partDef)", (const char *)&queryFormat, "partDef") )
      __debugbreak();
  }
  if ( (partDef->flags & 2) != 0 )
  {
    PartRuntime = ScriptableSv_GetPartRuntime(scriptableIndex, partDef);
    if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2939, ASSERT_TYPE_ASSERT, "( partRuntime )", (const char *)&queryFormat, "partRuntime") )
      __debugbreak();
    v8 = 0;
    PartRuntime->stateId = 0;
    if ( partDef->numStates )
    {
      states = partDef->states;
      if ( SLOBYTE(states->base.flags) < 0 )
      {
        if ( states->type != Scriptable_StateType_Health && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2951, ASSERT_TYPE_ASSERT, "( stateDef->type == Scriptable_StateType_Health )", (const char *)&queryFormat, "stateDef->type == Scriptable_StateType_Health") )
          __debugbreak();
        InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
        _R13 = partDef->eventStreamBufferOffsetServer;
        v12 = InstanceCommonContext;
        if ( _R13 + 4 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2957, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize)", "%s\n\tScriptable %s doesn't have enough eventBuffer - this usually implies a patch has changed the definition of the scriptable in a way it shouldn't.\n", "eventBufferOffset + sizeof( float ) <= r_context.eventStreamBufferSize", def->name) )
          __debugbreak();
        _RAX = v12->eventStreamBuffer;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rbp+28h]
          vmovss  dword ptr [rax+r13], xmm0
        }
      }
      eventParams.context = SBL_CONTEXT_SERVER;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      eventParams.callbacks = &s_svCallbackTable;
      eventParams.scriptableIndex = scriptableIndex;
      __asm { vmovdqu xmmword ptr [rsp+98h+eventParams.damageEvent], xmm0 }
      eventParams.partDef = partDef;
      ScriptableBg_EnterState(&eventParams, 1);
    }
    if ( partDef->numChildParts )
    {
      do
        ScriptableSv_SetPartStateFirst(scriptableIndex, def, &partDef->childParts[v8++]);
      while ( v8 < partDef->numChildParts );
    }
  }
}

/*
==============
ScriptableSv_SetSaveLootSeed
==============
*/
void ScriptableSv_SetSaveLootSeed(unsigned int lootSeed)
{
  s_svScriptableSaveLootSeedValid = 1;
  s_svScriptableSaveLootSeed = lootSeed;
}

/*
==============
ScriptableSv_SetScriptableIndexForEntity
==============
*/
void ScriptableSv_SetScriptableIndexForEntity(const unsigned int scriptableIndex, const gentity_s *const ent)
{
  __int64 v4; 
  __int64 v5; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 417, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->r.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 418, ASSERT_TYPE_ASSERT, "( ent->r.isInUse )", (const char *)&queryFormat, "ent->r.isInUse") )
    __debugbreak();
  if ( ent->s.number >= 0x800u )
  {
    LODWORD(v4) = ent->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 419, ASSERT_TYPE_ASSERT, "(unsigned)( ent->s.number ) < (unsigned)( ( sizeof( *array_counter( g_scriptableIndexEntLookup ) ) + 0 ) )", "ent->s.number doesn't index ARRAY_COUNT( g_scriptableIndexEntLookup )\n\t%i not in [0, %i)", v4, 2048) )
      __debugbreak();
  }
  if ( g_scriptableIndexEntLookup[ent->s.number] != -1 )
  {
    LODWORD(v5) = -1;
    LODWORD(v4) = g_scriptableIndexEntLookup[ent->s.number];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 420, ASSERT_TYPE_ASSERT, "( g_scriptableIndexEntLookup[ent->s.number] ) == ( SCRIPTABLE_INVALID_INSTANCE_INDEX )", "g_scriptableIndexEntLookup[ent->s.number] == SCRIPTABLE_INVALID_INSTANCE_INDEX\n\t%i, %i", v4, v5) )
      __debugbreak();
  }
  if ( scriptableIndex == -1 )
  {
    LODWORD(v5) = -1;
    LODWORD(v4) = -1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 421, ASSERT_TYPE_ASSERT, "( scriptableIndex ) != ( SCRIPTABLE_INVALID_INSTANCE_INDEX )", "scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX\n\t%i, %i", v4, v5) )
      __debugbreak();
  }
  ScriptableSv_SetLink(scriptableIndex, SCRIPTABLE_LINK_ENTITY, ent->s.number);
  g_scriptableIndexEntLookup[ent->s.number] = scriptableIndex;
}

/*
==============
ScriptableSv_SetupInstanceEntity
==============
*/
void ScriptableSv_SetupInstanceEntity(const unsigned int scriptableIndex, gentity_s *const ent)
{
  const ScriptableDef *def; 
  entityType_s eType; 
  __int16 scriptMoverType; 
  bool v7; 
  ScriptableInstanceContext *InstanceCommonContext; 
  ScriptableInstance *v9; 
  scr_string_t classname; 
  const ScriptableDef *v11; 
  ScriptableInstance *v12; 
  unsigned __int16 mapEntLookup; 
  unsigned int number; 
  __int64 v15; 
  __int64 v16; 
  ScriptableInstance *outInstance; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 589, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ScriptableSv_GetInstanceShouldHaveEntity(scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 590, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetInstanceShouldHaveEntity( scriptableIndex ) )", (const char *)&queryFormat, "ScriptableSv_GetInstanceShouldHaveEntity( scriptableIndex )") )
    __debugbreak();
  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex < g_scriptableWorldCounts.runtimeInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    LODWORD(v15) = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 591, ASSERT_TYPE_ASSERT, "( scriptableIndex ) >= ( ScriptableCommon_GetReservedInstanceCount() )", "scriptableIndex >= ScriptableCommon_GetReservedInstanceCount()\n\t%i, %i", v15, g_scriptableWorldCounts.runtimeInstanceCount) )
      __debugbreak();
  }
  def = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
  if ( !def )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 594, ASSERT_TYPE_ASSERT, "( scriptableDef )", (const char *)&queryFormat, "scriptableDef") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 276, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
  }
  if ( (def->flags & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 595, ASSERT_TYPE_ASSERT, "( ScriptableDef_HasServerInstance( scriptableDef ) )", (const char *)&queryFormat, "ScriptableDef_HasServerInstance( scriptableDef )") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFF0000, "ScriptableSv_SetupInstanceEntity");
  eType = ent->s.eType;
  if ( eType != ET_SCRIPTMOVER )
  {
    LODWORD(v16) = 6;
    LODWORD(v15) = eType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 599, ASSERT_TYPE_ASSERT, "( ent->s.eType ) == ( ET_SCRIPTMOVER )", "ent->s.eType == ET_SCRIPTMOVER\n\t%i, %i", v15, v16) )
      __debugbreak();
  }
  scriptMoverType = ent->s.un.scriptMoverType;
  if ( scriptMoverType != 2 )
  {
    LODWORD(v16) = 2;
    LODWORD(v15) = scriptMoverType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 600, ASSERT_TYPE_ASSERT, "( ent->s.un.scriptMoverType ) == ( ScriptMoverType_Scriptable )", "ent->s.un.scriptMoverType == ScriptMoverType_Scriptable\n\t%i, %i", v15, v16) )
      __debugbreak();
  }
  v7 = ent->r.isInUse == 0;
  ent->s.staticState.player.stowedWeaponHandle.m_mapEntryId = scriptableIndex + 1;
  if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 418, ASSERT_TYPE_ASSERT, "( ent->r.isInUse )", (const char *)&queryFormat, "ent->r.isInUse") )
    __debugbreak();
  if ( ent->s.number >= 0x800u )
  {
    LODWORD(v16) = 2048;
    LODWORD(v15) = ent->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 419, ASSERT_TYPE_ASSERT, "(unsigned)( ent->s.number ) < (unsigned)( ( sizeof( *array_counter( g_scriptableIndexEntLookup ) ) + 0 ) )", "ent->s.number doesn't index ARRAY_COUNT( g_scriptableIndexEntLookup )\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  if ( g_scriptableIndexEntLookup[ent->s.number] != -1 )
  {
    LODWORD(v16) = -1;
    LODWORD(v15) = g_scriptableIndexEntLookup[ent->s.number];
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 420, ASSERT_TYPE_ASSERT, "( g_scriptableIndexEntLookup[ent->s.number] ) == ( SCRIPTABLE_INVALID_INSTANCE_INDEX )", "g_scriptableIndexEntLookup[ent->s.number] == SCRIPTABLE_INVALID_INSTANCE_INDEX\n\t%i, %i", v15, v16) )
      __debugbreak();
  }
  if ( scriptableIndex == -1 )
  {
    LODWORD(v16) = -1;
    LODWORD(v15) = -1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 421, ASSERT_TYPE_ASSERT, "( scriptableIndex ) != ( SCRIPTABLE_INVALID_INSTANCE_INDEX )", "scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX\n\t%i, %i", v15, v16) )
      __debugbreak();
  }
  ScriptableSv_SetLink(scriptableIndex, SCRIPTABLE_LINK_ENTITY, ent->s.number);
  g_scriptableIndexEntLookup[ent->s.number] = scriptableIndex;
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  InstanceCommonContext->origin = InstanceCommonContext->originInitial;
  InstanceCommonContext->angles = InstanceCommonContext->anglesInitial;
  G_SetOriginAndAngle(ent, &InstanceCommonContext->origin, &InstanceCommonContext->angles, 1, 1);
  if ( ScriptableCommon_GetMapInstance(scriptableIndex, (const ScriptableInstance **)&outInstance) )
  {
    v9 = outInstance;
    classname = outInstance->classname;
    if ( classname )
      Scr_SetString(&ent->script_classname, classname);
    Scr_SetString(&ent->targetname, v9->targetname);
    Scr_SetString(&ent->script_linkName, v9->script_linkname);
    Scr_SetString(&ent->script_linkto, v9->script_linkto);
    Scr_SetString(&ent->script_noteworthy, v9->script_noteworthy);
  }
  v11 = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
  if ( !v11 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 335, ASSERT_TYPE_ASSERT, "( def )", (const char *)&queryFormat, "def") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 260, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
  }
  if ( (v11->flags & 1) == 0 )
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&ent->s.lerp.eFlags, GameModeFlagValues::ms_mpValue, 0x1Eu);
  if ( (v11->flags & 0x80) != 0 )
    GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&ent->s.lerp.eFlags, ACTIVE, 0x10u);
  if ( ScriptableCommon_GetMapInstance(scriptableIndex, (const ScriptableInstance **)&outInstance) )
  {
    v12 = outInstance;
    if ( !outInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 101, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
      __debugbreak();
    if ( (v12->flags & 2) != 0 )
      GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::SetFlagInternal(&ent->s.lerp.eFlags, GameModeFlagValues::ms_spValue, 0x14u);
    if ( ent->s.eType == ET_SCRIPTMOVER )
    {
      mapEntLookup = v12->mapEntLookup;
      if ( mapEntLookup )
        ent->s.lerp.u.anonymous.data[7] = mapEntLookup;
    }
  }
  ScriptableSv_SetDamageOwner(scriptableIndex, NULL);
  SV_LinkEntity(ent);
  if ( def->networkLODRangeOverride )
  {
    number = ent->s.number;
    if ( number >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", number, 2048) )
      __debugbreak();
    s_scriptableNetworkLODOverrideEntities.array[(unsigned __int64)number >> 5] |= 0x80000000 >> (number & 0x1F);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
ScriptableSv_Shutdown
==============
*/
void ScriptableSv_Shutdown(void)
{
  ScriptableSv_ShutdownInternal(0);
}

/*
==============
ScriptableSv_ShutdownInstance
==============
*/
void ScriptableSv_ShutdownInstance(const unsigned int scriptableIndex)
{
  const ScriptableDef *def; 
  ScriptableInstanceContext *InstanceCommonContext; 
  scrContext_t *v4; 
  unsigned int v5; 
  const ScriptablePartDef *v6; 

  def = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
  if ( def )
  {
    InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
    ++InstanceCommonContext->initializationCount;
    if ( !s_scriptableSv_myChangesKeepScriptVariables )
    {
      v4 = ScriptContext_Server();
      Scr_FreeEntityNum(v4, scriptableIndex, ENTITY_CLASS_SCRIPTABLE);
    }
    if ( def->usablePartCount && scriptableIndex < 0xFDE8 )
      ScriptableHandleDissociate(scriptableIndex);
    v5 = 0;
    for ( g_scriptableSv_shutdownIndex = scriptableIndex; v5 < def->numParts; ++v5 )
    {
      v6 = &def->parts[v5];
      if ( (v6->flags & 2) != 0 )
        ScriptableSv_ShutdownInstancePart(scriptableIndex, v6);
    }
    ScriptableSv_SetDamageOwner(scriptableIndex, NULL);
    g_scriptableSv_shutdownIndex = -1;
  }
}

/*
==============
ScriptableSv_ShutdownInstancePart
==============
*/
void ScriptableSv_ShutdownInstancePart(const unsigned int scriptableIndex, const ScriptablePartDef *partDef)
{
  unsigned int i; 
  ScriptablePartDef *v6; 
  ScriptableCollisionServerContext *InstanceCollisionContext; 
  unsigned int navmeshObstacleId; 
  Scriptable_Analytics_Zone v10; 
  ScriptableEventParams eventParams; 

  if ( !partDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1880, ASSERT_TYPE_ASSERT, "( partDef )", (const char *)&queryFormat, "partDef") )
    __debugbreak();
  for ( i = 0; i < partDef->numChildParts; ++i )
  {
    v6 = &partDef->childParts[i];
    if ( (v6->flags & 2) != 0 )
      ScriptableSv_ShutdownInstancePart(scriptableIndex, v6);
  }
  if ( partDef->numStates )
  {
    eventParams.context = SBL_CONTEXT_SERVER;
    __asm { vpxor   xmm0, xmm0, xmm0 }
    eventParams.callbacks = &s_svCallbackTable;
    __asm { vmovdqu xmmword ptr [rsp+68h+eventParams.damageEvent], xmm0 }
    eventParams.scriptableIndex = scriptableIndex;
    eventParams.partDef = partDef;
    ScriptableBg_ExitState(&eventParams);
    InstanceCollisionContext = ScriptableSv_GetInstanceCollisionContext(scriptableIndex);
    navmeshObstacleId = InstanceCollisionContext->navmeshObstacleId;
    if ( navmeshObstacleId )
    {
      Nav_DestroyObstacleByID(navmeshObstacleId);
      navmeshObstacleId = 0;
      InstanceCollisionContext->navmeshObstacleId = 0;
    }
    if ( InstanceCollisionContext->scriptableCollisionMain != -1 )
    {
      ScriptableCommon_AssertCountsInitialized();
      v10 = Scriptable_Analytics_Zone_SC_Clipmap_S;
      if ( scriptableIndex < g_scriptableWorldCounts.runtimeInstanceCount )
        v10 = Scriptable_Analytics_Zone_SC_Reserved_S;
      Scriptable_Analytics_AddCollisionInstanceCount(v10, -1);
      if ( InstanceCollisionContext->scriptableCollisionDetail == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3855, ASSERT_TYPE_ASSERT, "( r_collisionContext.scriptableCollisionDetail != 0xFFFFFFFF )", (const char *)&queryFormat, "r_collisionContext.scriptableCollisionDetail != PHYSICSINSTANCEID_INVALID") )
        __debugbreak();
      Physics_DestroyInstance(PHYSICS_WORLD_ID_FIRST, InstanceCollisionContext->scriptableCollisionMain, 1);
      Physics_DestroyInstance(PHYSICS_WORLD_ID_SERVER_DETAIL, InstanceCollisionContext->scriptableCollisionDetail, 0);
      navmeshObstacleId = InstanceCollisionContext->navmeshObstacleId;
      *(_QWORD *)&InstanceCollisionContext->scriptableCollisionMain = -1i64;
    }
    if ( navmeshObstacleId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3863, ASSERT_TYPE_ASSERT, "( r_collisionContext.navmeshObstacleId == 0 )", (const char *)&queryFormat, "r_collisionContext.navmeshObstacleId == 0") )
      __debugbreak();
    if ( InstanceCollisionContext->scriptableCollisionMain != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3864, ASSERT_TYPE_ASSERT, "( r_collisionContext.scriptableCollisionMain == 0xFFFFFFFF )", (const char *)&queryFormat, "r_collisionContext.scriptableCollisionMain == PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
    if ( InstanceCollisionContext->scriptableCollisionDetail != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3865, ASSERT_TYPE_ASSERT, "( r_collisionContext.scriptableCollisionDetail == 0xFFFFFFFF )", (const char *)&queryFormat, "r_collisionContext.scriptableCollisionDetail == PHYSICSINSTANCEID_INVALID") )
      __debugbreak();
  }
}

/*
==============
ScriptableSv_ShutdownInternal
==============
*/
void ScriptableSv_ShutdownInternal(const bool isMyChanges)
{
  GWeaponMap *Instance; 
  unsigned __int16 i; 
  scrContext_t *v4; 
  unsigned int v5; 
  unsigned int v6; 
  const gentity_s *Entity; 
  const ScriptableDef *def; 
  ScriptableInstanceContext *InstanceCommonContext; 
  scrContext_t *v10; 
  unsigned int j; 
  const ScriptablePartDef *v12; 
  bitarray<2048> *v14; 
  __int64 v15; 
  int v16; 
  __int64 v17; 
  int v18; 
  BgWeaponHandle handle; 

  if ( g_svScriptablesInitialized )
  {
    s_svScriptableSaveLootSeedValid = 0;
    s_svScriptableSaveLootSeed = 0;
    if ( isMyChanges )
    {
      if ( (unsigned int)s_lootTableWeaponHandleCount >= 0xC8 )
      {
        v18 = 200;
        v16 = s_lootTableWeaponHandleCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1109, ASSERT_TYPE_ASSERT, "(unsigned)( s_lootTableWeaponHandleCount ) < (unsigned)( ( sizeof( *array_counter( s_lootTableWeaponHandles ) ) + 0 ) )", "s_lootTableWeaponHandleCount doesn't index ARRAY_COUNT( s_lootTableWeaponHandles )\n\t%i not in [0, %i)", v16, v18) )
          __debugbreak();
      }
      Instance = GWeaponMap::GetInstance();
      for ( i = 0; i < s_lootTableWeaponHandleCount; ++i )
      {
        handle.m_mapEntryId = s_lootTableWeaponHandles[i];
        GWeaponMap::ClearWeapon(Instance, &handle);
      }
      s_lootTableWeaponHandleCount = 0;
      memset_0(s_lootTableWeaponHandles, 0, sizeof(s_lootTableWeaponHandles));
    }
    if ( s_svScriptablesCreated )
    {
      if ( !s_scriptableSv_myChangesKeepScriptVariables )
      {
        v4 = ScriptContext_Server();
        v5 = 0;
        ScriptableCommon_AssertCountsInitialized();
        if ( g_scriptableWorldCounts.serverInstanceCount )
        {
          do
          {
            Scr_FreeEntityNum(v4, v5++, ENTITY_CLASS_SCRIPTABLE);
            ScriptableCommon_AssertCountsInitialized();
          }
          while ( v5 < g_scriptableWorldCounts.serverInstanceCount );
        }
      }
      v6 = 0;
      ScriptableCommon_AssertCountsInitialized();
      if ( g_scriptableWorldCounts.runtimeInstanceCount )
      {
        do
        {
          if ( ScriptableSv_GetInstanceHasEntity(v6) )
          {
            Entity = ScriptableSv_GetEntity(v6);
            ScriptableSv_UnlinkReservedScriptableEntity(Entity);
          }
          else if ( ScriptableSv_GetInstanceInUse(v6) )
          {
            ScriptableSv_UnlinkReservedScriptableStandalone(v6);
          }
          if ( ScriptableSv_GetInstanceInUse(v6) )
          {
            LODWORD(v17) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2005, ASSERT_TYPE_ASSERT, "( ( !ScriptableSv_GetInstanceInUse( scriptableIndex ) ) )", "%s\n\t( scriptableIndex ) = %i", "( !ScriptableSv_GetInstanceInUse( scriptableIndex ) )", v17) )
              __debugbreak();
          }
          if ( ScriptableSv_GetInstanceCommonContext(v6)->linkedObjectType )
          {
            LODWORD(v17) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2006, ASSERT_TYPE_ASSERT, "( ( !ScriptableSv_IsLinked( scriptableIndex ) ) )", "%s\n\t( scriptableIndex ) = %i", "( !ScriptableSv_IsLinked( scriptableIndex ) )", v17) )
              __debugbreak();
          }
          ++v6;
          ScriptableCommon_AssertCountsInitialized();
        }
        while ( v6 < g_scriptableWorldCounts.runtimeInstanceCount );
      }
      ScriptableCommon_AssertCountsInitialized();
      while ( v6 < g_scriptableWorldCounts.serverInstanceCount )
      {
        def = ScriptableSv_GetInstanceCommonContext(v6)->def;
        if ( def )
        {
          InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(v6);
          ++InstanceCommonContext->initializationCount;
          if ( !s_scriptableSv_myChangesKeepScriptVariables )
          {
            v10 = ScriptContext_Server();
            Scr_FreeEntityNum(v10, v6, ENTITY_CLASS_SCRIPTABLE);
          }
          if ( def->usablePartCount && v6 < 0xFDE8 )
            ScriptableHandleDissociate(v6);
          g_scriptableSv_shutdownIndex = v6;
          for ( j = 0; j < def->numParts; ++j )
          {
            v12 = &def->parts[j];
            if ( (v12->flags & 2) != 0 )
              ScriptableSv_ShutdownInstancePart(v6, v12);
          }
          ScriptableSv_SetDamageOwner(v6, NULL);
          g_scriptableSv_shutdownIndex = -1;
        }
        ++v6;
        ScriptableCommon_AssertCountsInitialized();
      }
    }
    __asm
    {
      vpxor   xmm0, xmm0, xmm0
      vmovdqu xmmword ptr cs:?g_scriptableSv_partWorldState@@3UScriptablePartWorldState@@A.groups.partData, xmm0; ScriptablePartWorldState g_scriptableSv_partWorldState
    }
    g_scriptableSv_reservedInstances = NULL;
    ScriptableSV_ShutdownReservedAllocators();
    v14 = &s_scriptableNetworkLODOverrideEntities;
    v15 = 4i64;
    g_scriptableSv_instanceContexts = NULL;
    do
    {
      *(_QWORD *)v14->array = 0i64;
      *(_QWORD *)&v14->array[2] = 0i64;
      *(_QWORD *)&v14->array[4] = 0i64;
      v14 = (bitarray<2048> *)((char *)v14 + 64);
      *(_QWORD *)&v14[-1].array[54] = 0i64;
      *(_QWORD *)&v14[-1].array[56] = 0i64;
      *(_QWORD *)&v14[-1].array[58] = 0i64;
      *(_QWORD *)&v14[-1].array[60] = 0i64;
      *(_QWORD *)&v14[-1].array[62] = 0i64;
      --v15;
    }
    while ( v15 );
    g_scriptableSVReservedPartRuntimes = NULL;
    g_scriptableSVReservedPartRuntimeCount = 0;
    s_svScriptablesStateEntered = 0;
    s_svScriptablesCreated = 0;
    g_svScriptablesInitialized = 0;
    s_svScriptableNetChecksum = 0;
    s_scriptableSvLootTable = NULL;
    Mem_HunkUser_Reset(s_svScriptableRuntimeHunk);
  }
}

/*
==============
ScriptableSv_ShutdownMyChanges
==============
*/
void ScriptableSv_ShutdownMyChanges(void)
{
  s_scriptableSv_myChangesKeepScriptVariables = 1;
  ScriptableSv_ShutdownInternal(1);
  s_scriptableSv_myChangesKeepScriptVariables = 0;
}

/*
==============
ScriptableSv_SpawnInstanceReplicationParts
==============
*/
void ScriptableSv_SpawnInstanceReplicationParts(const unsigned int scriptableIndex, unsigned int *inOutPartIndex)
{
  unsigned int v3; 
  const ScriptableDef *def; 
  unsigned int serverControlledPartCount; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int runtimeInstanceCount; 
  const ScriptableDef *v9; 
  char *fmt; 
  __int64 v11; 
  __int64 v12; 

  v3 = scriptableIndex;
  def = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
  if ( !def )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 550, ASSERT_TYPE_ASSERT, "( def )", (const char *)&queryFormat, "def") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 276, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
  }
  if ( (def->flags & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 551, ASSERT_TYPE_ASSERT, "( ScriptableDef_HasServerInstance( def ) )", (const char *)&queryFormat, "ScriptableDef_HasServerInstance( def )") )
    __debugbreak();
  serverControlledPartCount = def->serverControlledPartCount;
  if ( (def->flags & 4) != 0 )
  {
    if ( !serverControlledPartCount )
    {
      LODWORD(v11) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 558, ASSERT_TYPE_ASSERT, "( serverControlledPartCount ) > ( 0 )", "serverControlledPartCount > 0\n\t%i, %i", v11, 0i64) )
        __debugbreak();
    }
    v6 = *inOutPartIndex;
    *inOutPartIndex += serverControlledPartCount;
    v7 = g_scriptableSv_replicatedLimits.partWorldLimits[0];
    if ( v6 + serverControlledPartCount > g_scriptableSv_replicatedLimits.partWorldLimits[0] )
    {
      ScriptableCommon_AssertCountsInitialized();
      runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
      ScriptableCommon_AssertCountsInitialized();
      if ( runtimeInstanceCount < g_scriptableWorldCounts.serverInstanceCount )
      {
        do
        {
          if ( ScriptableSv_GetInstanceInUse(runtimeInstanceCount) )
          {
            v9 = ScriptableSv_GetInstanceCommonContext(runtimeInstanceCount)->def;
            if ( !v9 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 502, ASSERT_TYPE_ASSERT, "( debugDef )", (const char *)&queryFormat, "debugDef") )
                __debugbreak();
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 348, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
                __debugbreak();
            }
            Com_Printf(29, "Scriptable %s has %i server parts\n", v9->name, v9->serverControlledPartCount);
          }
          ++runtimeInstanceCount;
          ScriptableCommon_AssertCountsInitialized();
        }
        while ( runtimeInstanceCount < g_scriptableWorldCounts.serverInstanceCount );
        v3 = scriptableIndex;
      }
      LODWORD(fmt) = v7;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144089C80, 770i64, *inOutPartIndex, fmt);
    }
    if ( !g_scriptableSv_fixedWorldMap.indices && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 320, ASSERT_TYPE_ASSERT, "( g_scriptableSv_fixedWorldMap.indices )", (const char *)&queryFormat, "g_scriptableSv_fixedWorldMap.indices") )
      __debugbreak();
    if ( v3 >= g_scriptableSv_fixedWorldMap.indicesCount )
    {
      LODWORD(v12) = g_scriptableSv_fixedWorldMap.indicesCount;
      LODWORD(v11) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 321, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( g_scriptableSv_fixedWorldMap.indicesCount )", "scriptableIndex doesn't index g_scriptableSv_fixedWorldMap.indicesCount\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    g_scriptableSv_fixedWorldMap.indices[v3] = v6;
  }
  else if ( serverControlledPartCount )
  {
    LODWORD(v11) = def->serverControlledPartCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 579, ASSERT_TYPE_ASSERT, "( serverControlledPartCount ) == ( 0 )", "serverControlledPartCount == 0\n\t%i, %i", v11, 0i64) )
      __debugbreak();
  }
}

/*
==============
ScriptableSv_SpawnLootInstances
==============
*/
void ScriptableSv_SpawnLootInstances()
{
  const dvar_t *v0; 
  const char *string; 
  const dvar_t *v2; 
  const char *v3; 
  const dvar_t *v4; 
  const char *v5; 
  char *v6; 
  unsigned __int16 i; 
  unsigned int v8; 
  int v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  char *v13; 
  char v14; 
  int Int; 
  int v16; 
  const dvar_t *v17; 
  MapEnts *mapEnts; 
  unsigned int v19; 
  __int64 v20; 
  SpawnGroupPoint *points; 
  unsigned __int16 cluster; 
  ntl::fixed_map<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *,200,ntl::less<ScriptableDef const *,ScriptableDef const *> > *v23; 
  ntl::internal::pool_allocator_freelist<48> *p_m_freelist; 
  ntl::internal::pool_allocator_freelist<48> *v25; 
  unsigned int v26; 
  BG_SpawnGroup_Loot_Table *v27; 
  __int64 v29; 
  unsigned __int8 v36; 
  unsigned __int64 v37; 
  const BG_SpawnGroup_Loot_ItemDef *v38; 
  bool v39; 
  const ScriptableDef *scriptableDef; 
  ntl::fixed_map<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *,200,ntl::less<ScriptableDef const *,ScriptableDef const *> > *scriptableDefMap; 
  ntl::red_black_tree_node_base *mp_parent; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *j; 
  ntl::red_black_tree_node_base *v46; 
  GWeaponMap *Instance; 
  BG_SpawnGroup_Loot_Table *v48; 
  unsigned __int8 v49; 
  GWeaponMap *k; 
  unsigned __int64 v51; 
  _BYTE *v52; 
  int v54; 
  bool IsDualWield; 
  int v56; 
  int v57; 
  unsigned int v58; 
  MapEnts *v59; 
  unsigned int v60; 
  unsigned int v61; 
  unsigned int m; 
  __int64 v63; 
  unsigned __int8 v64; 
  unsigned __int8 itemDefCount; 
  BG_SpawnGroup_Loot_Table *v66; 
  unsigned __int64 v67; 
  unsigned __int64 v68; 
  SpawnGroupPoint *v69; 
  const ScriptableDef *v70; 
  ScriptableInstanceServerContext *v71; 
  unsigned __int64 v72; 
  const ScriptableDef *def; 
  const ScriptableDef *v74; 
  ScriptableInstanceContext *InstanceCommonContext; 
  const SpawnGroupPoint *v76; 
  unsigned __int16 v77; 
  MapEnts *v78; 
  const SpawnGroupPoint *v79; 
  unsigned __int16 v80; 
  unsigned __int16 v81; 
  BG_SpawnGroup_Loot_Table *table; 
  BG_SpawnGroup_Loot_Table *tablea; 
  __int64 printResultsToConsole; 
  __int64 printResultsToConsolea; 
  BgWeaponHandle handle; 
  unsigned int v87; 
  char *saveptrctx; 
  StringTable *tablePtr; 
  StringTable *zoneMapTable; 
  ntl::red_black_tree_iterator<ScriptableDef const *,ntl::red_black_tree_node<ntl::pair<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *> >,ntl::pair<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *> *,ntl::pair<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *> &> v91; 
  ntl::pair<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *> r_element; 
  BG_SpawnGroup_Loot loot; 
  Weapon outWeapon; 
  __int64 v95[50]; 
  char dest[272]; 

  s_scriptableSvLootQuestPointIndices = NULL;
  s_scriptableSvLootQuestPointCount = 0;
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 106, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
    __debugbreak();
  if ( !cm.mapEnts->scriptableMapEnts.lootInstanceCount )
  {
    s_svScriptableSaveLootSeedValid = 0;
    s_svScriptableSaveLootSeed = 0;
    return;
  }
  v0 = DVARSTR_loot_table_name;
  if ( !DVARSTR_loot_table_name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "loot_table_name") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  string = v0->current.string;
  if ( !*string )
  {
    s_svScriptableSaveLootSeedValid = 0;
    s_svScriptableSaveLootSeed = 0;
    return;
  }
  s_svScriptableLootActive = 1;
  StringTable_GetAsset(string, (const StringTable **)&tablePtr);
  if ( !tablePtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1318, ASSERT_TYPE_ASSERT, "( table )", (const char *)&queryFormat, "table") )
    __debugbreak();
  v2 = DVARSTR_loot_table_filter;
  if ( !DVARSTR_loot_table_filter && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "loot_table_filter") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  v3 = v2->current.string;
  v4 = DVARSTR_loot_table_zones;
  zoneMapTable = tablePtr;
  if ( !DVARSTR_loot_table_zones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "loot_table_zones") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = v4->current.string;
  if ( v5 && *v5 )
  {
    Core_strcpy_truncate(dest, 0x104ui64, v5);
    saveptrctx = NULL;
    v6 = I_strtok_r(dest, " ", &saveptrctx);
    for ( i = 0; v6; ++i )
    {
      if ( i >= 0x32u )
        break;
      v95[i] = (__int64)v6;
      v6 = I_strtok_r(NULL, " ", &saveptrctx);
    }
    v8 = i;
    v9 = G_rand();
    v10 = v9 % i;
    v11 = v10;
    if ( v9 % (int)v8 >= v8 )
    {
      LODWORD(printResultsToConsole) = v8;
      LODWORD(table) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1351, ASSERT_TYPE_ASSERT, "(unsigned)( tokenIndex ) < (unsigned)( tokenCount )", "tokenIndex doesn't index tokenCount\n\t%i not in [0, %i)", table, printResultsToConsole) )
        __debugbreak();
    }
    v12 = v95[v11];
    v13 = &s_svScriptableLootTableZone[-v12];
    do
    {
      v14 = *(_BYTE *)v12;
      v13[v12] = *(_BYTE *)v12;
      ++v12;
    }
    while ( v14 );
    StringTable_GetAsset(s_svScriptableLootTableZone, (const StringTable **)&zoneMapTable);
    if ( !zoneMapTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1356, ASSERT_TYPE_ASSERT, "( tableZones )", (const char *)&queryFormat, "tableZones") )
      __debugbreak();
  }
  s_svScriptableLootTableChecksum = StringTable_Checksum(tablePtr, 0);
  Com_Printf(29, "ScriptableSv_InitLootInstances: Using table '%s' with checksum %x\n", string, s_svScriptableLootTableChecksum);
  if ( SV_IsDemoPlaying() )
  {
    s_svScriptableSaveLootSeedValid = SV_Demo_GetByte() != 0;
    Int = SV_Demo_GetInt();
    s_svScriptableSaveLootSeed = Int;
  }
  else
  {
    SV_Record_GetByte(s_svScriptableSaveLootSeedValid);
    SV_Record_GetInt(s_svScriptableSaveLootSeed);
    Int = s_svScriptableSaveLootSeed;
  }
  if ( !s_svScriptableSaveLootSeedValid )
  {
    v16 = G_rand();
    if ( s_svScriptableLootSeed )
      goto LABEL_43;
    v17 = DVARINT_loot_seed;
    if ( !DVARINT_loot_seed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "loot_seed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v17);
    s_svScriptableLootSeed = v17->current.unsignedInt;
    if ( s_svScriptableLootSeed )
      goto LABEL_43;
    Int = 1;
    if ( v16 )
      Int = v16;
  }
  s_svScriptableLootSeed = Int;
LABEL_43:
  mapEnts = cm.mapEnts;
  v19 = 0;
  if ( cm.mapEnts->spawnGroupLoot.pointCount )
  {
    while ( 1 )
    {
      v20 = v19;
      points = mapEnts->spawnGroupLoot.points;
      cluster = points[v20].cluster;
      if ( cluster == 0xFFFC )
        break;
      if ( cluster == 0xFFFE )
      {
        points[v20].cluster = -5;
        goto LABEL_48;
      }
LABEL_49:
      if ( ++v19 >= mapEnts->spawnGroupLoot.pointCount )
        goto LABEL_50;
    }
    points[v20].cluster = -3;
LABEL_48:
    mapEnts = cm.mapEnts;
    goto LABEL_49;
  }
LABEL_50:
  memset_0(&s_lootPointToDefBuffer, 0, sizeof(s_lootPointToDefBuffer));
  memset_0(&loot.cacheBuffer, 0, 0x5678ui64);
  loot.pointToDefBuffer = &s_lootPointToDefBuffer;
  s_scriptableSvLootTable = (BG_SpawnGroup_Loot_Table *)Mem_HunkUser_AllocInternal(s_svScriptableRuntimeHunk, 0x2E820ui64, 8ui64, "ScriptableSv_SpawnLootInstances");
  memset_0(s_scriptableSvLootTable, 0, sizeof(BG_SpawnGroup_Loot_Table));
  v23 = (ntl::fixed_map<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *,200,ntl::less<ScriptableDef const *,ScriptableDef const *> > *)Mem_HunkUser_AllocInternal(s_svScriptableRuntimeHunk, 0x25B8ui64, 8ui64, "ScriptableSv_SpawnLootInstances");
  p_m_freelist = &v23->m_freelist;
  v25 = &v23->m_freelist;
  do
  {
    v25 -= 6;
    v25->m_head.mp_next = &p_m_freelist->m_head;
    p_m_freelist = v25;
  }
  while ( v25 > (ntl::internal::pool_allocator_freelist<48> *)v23 );
  v23->m_freelist.m_head.mp_next = &v25->m_head;
  if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  v26 = s_svScriptableLootSeed;
  v23->m_endNodeBase.m_color = RB_NODE_COLOR_RED;
  v23->m_endNodeBase.mp_left = &v23->m_endNodeBase;
  v23->m_endNodeBase.mp_right = &v23->m_endNodeBase;
  v27 = s_scriptableSvLootTable;
  v23->m_size = 0i64;
  v23->m_endNodeBase.mp_parent = NULL;
  v27->scriptableDefMap = v23;
  loot.cacheBuffer = &s_svScriptableLootCaches;
  BG_SpawnGroup_Loot_Spawn(&loot, v26, tablePtr, zoneMapTable, v3, v27, 1);
  _RCX = &s_svScriptableLootCounts;
  v29 = 4i64;
  _RAX = &loot.itemCounts;
  do
  {
    _RCX = (BG_SpawnGroup_Loot_Counts *)((char *)_RCX + 128);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups xmm1, xmmword ptr [rax+70h]
    }
    _RAX = (BG_SpawnGroup_Loot_Counts *)((char *)_RAX + 128);
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
    --v29;
  }
  while ( v29 );
  v36 = 1;
  *(_QWORD *)&_RCX->itemCount = *(_QWORD *)&_RAX->itemCount;
  if ( s_scriptableSvLootTable->itemDefCount > 1u )
  {
    while ( 1 )
    {
      v37 = (unsigned __int64)v36 << 8;
      v38 = (BG_SpawnGroup_Loot_ItemDef *)((char *)s_scriptableSvLootTable->itemDefs + v37);
      if ( ((BG_SpawnGroup_Loot_Table *)((char *)s_scriptableSvLootTable + v37) == (BG_SpawnGroup_Loot_Table *)-472i64 || !v38->scriptableDef) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1427, ASSERT_TYPE_ASSERT, "(itemDef && itemDef->scriptableDef)", (const char *)&queryFormat, "itemDef && itemDef->scriptableDef") )
        __debugbreak();
      v39 = 1;
      scriptableDef = v38->scriptableDef;
      r_element.first = v38->scriptableDef;
      r_element.second = v38;
      scriptableDefMap = s_scriptableSvLootTable->scriptableDefMap;
      mp_parent = scriptableDefMap->m_endNodeBase.mp_parent;
      p_m_endNodeBase = &scriptableDefMap->m_endNodeBase;
      while ( mp_parent )
      {
        p_m_endNodeBase = mp_parent;
        v39 = (unsigned __int64)scriptableDef < *(_QWORD *)&mp_parent[1].m_color;
        if ( (unsigned __int64)scriptableDef >= *(_QWORD *)&mp_parent[1].m_color )
          mp_parent = mp_parent->mp_right;
        else
          mp_parent = mp_parent->mp_left;
      }
      mp_left = p_m_endNodeBase;
      if ( !v39 )
        goto LABEL_82;
      if ( p_m_endNodeBase != scriptableDefMap->m_endNodeBase.mp_left )
        break;
      ntl::red_black_tree<ScriptableDef const *,ntl::pair<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *>>,200,8>,ntl::return_pair_first<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *>,ntl::less<ScriptableDef const *,ScriptableDef const *>>::insert_node(scriptableDefMap, &v91, p_m_endNodeBase, &r_element, 1, 0);
LABEL_87:
      if ( ++v36 >= s_scriptableSvLootTable->itemDefCount )
        goto LABEL_88;
    }
    if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( p_m_endNodeBase->m_color || p_m_endNodeBase->mp_parent->mp_parent != p_m_endNodeBase )
    {
      mp_left = p_m_endNodeBase->mp_left;
      if ( mp_left )
      {
        for ( j = mp_left->mp_right; j; j = j->mp_right )
          mp_left = j;
      }
      else
      {
        mp_left = p_m_endNodeBase->mp_parent;
        if ( p_m_endNodeBase == mp_left->mp_left )
        {
          do
          {
            v46 = mp_left;
            mp_left = mp_left->mp_parent;
          }
          while ( v46 == mp_left->mp_left );
        }
      }
    }
    else
    {
      mp_left = p_m_endNodeBase->mp_right;
    }
LABEL_82:
    if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( *(_QWORD *)&mp_left[1].m_color < (unsigned __int64)scriptableDef )
      ntl::red_black_tree<ScriptableDef const *,ntl::pair<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *>,ntl::fixed_pool_allocator<ntl::red_black_tree_node<ntl::pair<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *>>,200,8>,ntl::return_pair_first<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *>,ntl::less<ScriptableDef const *,ScriptableDef const *>>::insert_node(scriptableDefMap, (ntl::red_black_tree_iterator<ScriptableDef const *,ntl::red_black_tree_node<ntl::pair<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *> >,ntl::pair<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *> *,ntl::pair<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *> &> *)&saveptrctx, p_m_endNodeBase, &r_element, 0, 0);
    goto LABEL_87;
  }
LABEL_88:
  Instance = GWeaponMap::GetInstance();
  v48 = s_scriptableSvLootTable;
  v49 = 1;
  for ( k = Instance; v49 < v48->itemDefCount; ++v49 )
  {
    v51 = (unsigned __int64)v49 << 8;
    v52 = *(const char **)((char *)&v48->itemDefs[0].weaponFullString + v51);
    if ( v52 && *v52 )
    {
      handle.m_mapEntryId = 0;
      BG_Weapons_GetFullWeaponForName(*(const char **)((char *)&v48->itemDefs[0].weaponFullString + v51), &outWeapon, BG_FindBaseWeaponForName);
      GWeaponMap::SetWeapon(k, &handle, &outWeapon);
      *(BgWeaponHandle *)((char *)&v48->itemDefs[0].weaponIndex + v51) = handle;
      if ( !handle.m_mapEntryId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1444, ASSERT_TYPE_ASSERT, "(itemDef.weaponIndex != BgWeaponHandle::INVALID_HANDLE)", (const char *)&queryFormat, "itemDef.weaponIndex != BgWeaponHandle::INVALID_HANDLE") )
        __debugbreak();
      if ( !*(unsigned int *)((char *)&v48->itemDefs[0].scriptableDefParm + v51) )
      {
        v54 = BG_GetClipSize(NULL, &outWeapon, 0) & 0x7FF;
        IsDualWield = BG_WeaponIsDualWield(&outWeapon);
        v56 = v54;
        if ( IsDualWield )
          v56 = v54 | (v54 << 11);
        *(unsigned int *)((char *)&v48->itemDefs[0].scriptableDefParm + v51) = v56;
      }
      v57 = s_lootTableWeaponHandleCount;
      v58 = *(unsigned int *)((char *)&v48->itemDefs[0].weaponIndex + v51);
      if ( (unsigned int)s_lootTableWeaponHandleCount >= 0xC8 )
      {
        LODWORD(printResultsToConsolea) = 200;
        LODWORD(tablea) = s_lootTableWeaponHandleCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1094, ASSERT_TYPE_ASSERT, "(unsigned)( s_lootTableWeaponHandleCount ) < (unsigned)( ( sizeof( *array_counter( s_lootTableWeaponHandles ) ) + 0 ) )", "s_lootTableWeaponHandleCount doesn't index ARRAY_COUNT( s_lootTableWeaponHandles )\n\t%i not in [0, %i)", tablea, printResultsToConsolea) )
          __debugbreak();
        v57 = s_lootTableWeaponHandleCount;
      }
      s_lootTableWeaponHandleCount = v57 + 1;
      s_lootTableWeaponHandles[v57] = v58;
      v48 = s_scriptableSvLootTable;
    }
  }
  BG_BrAmmoOverrideAll((const GameTypeQuick_t)(unsigned __int8)level.gameTypeQuick[0], v48);
  v59 = cm.mapEnts;
  v60 = 0;
  v87 = 0;
  v61 = 0;
  LODWORD(saveptrctx) = 0;
  for ( m = 0; v60 < cm.mapEnts->spawnGroupLoot.pointCount; LODWORD(saveptrctx) = v60 )
  {
    v63 = v60;
    v64 = loot.pointToDefBuffer->points[v60];
    if ( v64 )
    {
      itemDefCount = s_scriptableSvLootTable->itemDefCount;
      if ( v64 >= itemDefCount )
      {
        LODWORD(printResultsToConsolea) = itemDefCount;
        LODWORD(tablea) = v64;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1471, ASSERT_TYPE_ASSERT, "(unsigned)( itemDefIndex ) < (unsigned)( s_scriptableSvLootTable->itemDefCount )", "itemDefIndex doesn't index s_scriptableSvLootTable->itemDefCount\n\t%i not in [0, %i)", tablea, printResultsToConsolea) )
          __debugbreak();
      }
      v66 = s_scriptableSvLootTable;
      v67 = (unsigned __int64)v64 << 8;
      v91.mp_node = (ntl::red_black_tree_node<ntl::pair<ScriptableDef const *,BG_SpawnGroup_Loot_ItemDef const *> > *)s_scriptableSvLootTable;
      if ( m >= loot.itemCounts.itemCount )
      {
        LODWORD(printResultsToConsolea) = loot.itemCounts.itemCount;
        LODWORD(tablea) = m;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1474, ASSERT_TYPE_ASSERT, "(unsigned)( itemIndex ) < (unsigned)( loot.itemCounts.itemCount )", "itemIndex doesn't index loot.itemCounts.itemCount\n\t%i not in [0, %i)", tablea, printResultsToConsolea) )
          __debugbreak();
      }
      ScriptableCommon_AssertCountsInitialized();
      v68 = m + g_scriptableWorldCounts.runtimeInstanceCount;
      v69 = &cm.mapEnts->spawnGroupLoot.points[v63];
      if ( !v69 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1478, ASSERT_TYPE_ASSERT, "( point )", (const char *)&queryFormat, "point") )
        __debugbreak();
      if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 81, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
        __debugbreak();
      ScriptableCommon_AssertCountsInitialized();
      if ( (unsigned int)v68 >= g_scriptableWorldCounts.serverInstanceCount )
      {
        ScriptableCommon_AssertCountsInitialized();
        LODWORD(printResultsToConsolea) = g_scriptableWorldCounts.serverInstanceCount;
        LODWORD(tablea) = v68;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 82, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", tablea, printResultsToConsolea) )
          __debugbreak();
      }
      v70 = *(const ScriptableDef **)((char *)&v66->itemDefs[0].scriptableDef + v67);
      v71 = g_scriptableSv_instanceContexts;
      v72 = v68;
      g_scriptableSv_instanceContexts[v68].commonContext.def = v70;
      if ( !v70 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 276, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
        __debugbreak();
      if ( (v70->flags & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1485, ASSERT_TYPE_ASSERT, "( ( ScriptableDef_HasServerInstance( r_context.def ) ) )", "%s\n\t( r_context.def->name ) = %s", "( ScriptableDef_HasServerInstance( r_context.def ) )", v71[v68].commonContext.def->name) )
        __debugbreak();
      def = v71[v68].commonContext.def;
      if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 284, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
        __debugbreak();
      if ( (def->flags & 4) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1486, ASSERT_TYPE_ASSERT, "( ( ScriptableDef_IsServerControlled( r_context.def ) ) )", "%s\n\t( r_context.def->name ) = %s", "( ScriptableDef_IsServerControlled( r_context.def ) )", v71[v68].commonContext.def->name) )
        __debugbreak();
      v74 = v71[v68].commonContext.def;
      if ( !v74 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 363, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
        __debugbreak();
      if ( (v74->flags & 0x2000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1487, ASSERT_TYPE_ASSERT, "( ( ScriptableDef_IsStandaloneRequested( r_context.def ) ) )", "%s\n\t( r_context.def->name ) = %s", "( ScriptableDef_IsStandaloneRequested( r_context.def ) )", v71[v68].commonContext.def->name) )
        __debugbreak();
      v71[v72].commonContext.origin.v[0] = v69->origin.v[0];
      v71[v72].commonContext.origin.v[1] = v69->origin.v[1];
      v71[v72].commonContext.origin.v[2] = v69->origin.v[2];
      v71[v72].commonContext.angles.v[0] = v69->angles.v[0];
      v71[v72].commonContext.angles.v[1] = v69->angles.v[1];
      v71[v72].commonContext.angles.v[2] = v69->angles.v[2];
      InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(v68);
      InstanceCommonContext->originInitial = v69->origin;
      InstanceCommonContext->anglesInitial = v69->angles;
      if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 99, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
        __debugbreak();
      ScriptableCommon_AssertCountsInitialized();
      if ( (unsigned int)v68 >= g_scriptableWorldCounts.serverInstanceCount )
      {
        ScriptableCommon_AssertCountsInitialized();
        LODWORD(printResultsToConsolea) = g_scriptableWorldCounts.serverInstanceCount;
        LODWORD(tablea) = v68;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 100, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", tablea, printResultsToConsolea) )
          __debugbreak();
      }
      ++m;
      v61 = v87;
      g_scriptableSv_instanceContexts[v72].serverContext.cursorHintParm = *(_DWORD *)((char *)&v91.mp_node[10].mp_parent + v67);
    }
    else
    {
      v76 = &v59->spawnGroupLoot.points[v60];
      if ( BG_SpawnGroup_IsPointLootCacheCluster(v76) || v76->cluster == 0xFFFB )
        v87 = ++v61;
    }
    v59 = cm.mapEnts;
    v60 = (_DWORD)saveptrctx + 1;
  }
  if ( m != loot.itemCounts.itemCount )
  {
    LODWORD(printResultsToConsolea) = loot.itemCounts.itemCount;
    LODWORD(tablea) = m;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1507, ASSERT_TYPE_ASSERT, "( itemIndex ) == ( loot.itemCounts.itemCount )", "itemIndex == loot.itemCounts.itemCount\n\t%i, %i", tablea, printResultsToConsolea) )
      __debugbreak();
  }
  if ( v61 )
  {
    s_scriptableSvLootQuestPointIndices = (unsigned __int16 *)Mem_HunkUser_AllocInternal(s_svScriptableRuntimeHunk, 2i64 * v61, 2ui64, "ScriptableSv_SpawnLootInstances");
    v77 = 0;
    v78 = cm.mapEnts;
    if ( cm.mapEnts->spawnGroupLoot.pointCount )
    {
      do
      {
        v79 = &v78->spawnGroupLoot.points[v77];
        if ( !BG_SpawnGroup_IsPointLootCacheCluster(v79) && v79->cluster != 0xFFFB )
          goto LABEL_165;
        if ( !BG_SpawnGroup_IsPointLootCacheCluster(v79) )
          goto LABEL_166;
        if ( v77 == 0xFFFF )
        {
          LODWORD(printResultsToConsolea) = 0xFFFF;
          LODWORD(tablea) = 0xFFFF;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1150, ASSERT_TYPE_ASSERT, "(unsigned)( pointIndex ) < (unsigned)( 65535 )", "pointIndex doesn't index SPAWNGROUP_LOOT_MAX_POINTS\n\t%i not in [0, %i)", tablea, printResultsToConsolea) )
            __debugbreak();
        }
        if ( !s_lootPointToDefBuffer.points[v77] )
        {
LABEL_166:
          v81 = s_scriptableSvLootQuestPointCount;
          s_scriptableSvLootQuestPointIndices[s_scriptableSvLootQuestPointCount] = v77;
          v80 = v81 + 1;
          s_scriptableSvLootQuestPointCount = v80;
        }
        else
        {
LABEL_165:
          v80 = s_scriptableSvLootQuestPointCount;
        }
        v78 = cm.mapEnts;
        ++v77;
      }
      while ( v77 < cm.mapEnts->spawnGroupLoot.pointCount );
      v61 = v87;
    }
    else
    {
      v80 = s_scriptableSvLootQuestPointCount;
    }
    if ( v80 != v61 )
    {
      LODWORD(printResultsToConsolea) = v61;
      LODWORD(tablea) = v80;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 1530, ASSERT_TYPE_ASSERT, "( s_scriptableSvLootQuestPointCount ) == ( questPointCount )", "s_scriptableSvLootQuestPointCount == questPointCount\n\t%i, %i", tablea, printResultsToConsolea) )
        __debugbreak();
    }
  }
  s_svScriptableSaveLootSeedValid = 0;
  s_svScriptableSaveLootSeed = 0;
}

/*
==============
ScriptableSv_StandaloneClearParentEntity
==============
*/
char ScriptableSv_StandaloneClearParentEntity(const unsigned int instanceIndex)
{
  unsigned __int64 v2; 
  ScriptableReplicatedInstance *ReplicatedInstance; 
  ScriptableInstanceContext *InstanceCommonContext; 
  ScriptableInstanceContext *v5; 
  char v6; 
  ScriptableInstanceContext *v23; 
  __int64 v25; 
  __int64 v26; 

  v2 = instanceIndex;
  ScriptableCommon_AssertCountsInitialized();
  if ( (unsigned int)v2 >= g_scriptableWorldCounts.runtimeInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2223, ASSERT_TYPE_ASSERT, "(unsigned)( instanceIndex ) < (unsigned)( ScriptableCommon_GetReservedInstanceCount() )", "instanceIndex doesn't index ScriptableCommon_GetReservedInstanceCount()\n\t%i not in [0, %i)", v2, g_scriptableWorldCounts.runtimeInstanceCount) )
      __debugbreak();
  }
  ReplicatedInstance = ScriptableSv_GetReplicatedInstance(v2);
  if ( !ReplicatedInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2226, ASSERT_TYPE_ASSERT, "( replicatedInstance )", (const char *)&queryFormat, "replicatedInstance") )
    __debugbreak();
  if ( !ReplicatedInstance->replicatedType[0] )
  {
    LODWORD(v25) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2227, ASSERT_TYPE_ASSERT, "( replicatedInstance->replicatedType ) != ( ScriptableReplicatedType::ENTITY )", "replicatedInstance->replicatedType != ScriptableReplicatedType::ENTITY\n\t%i, %i", v25, 0i64) )
      __debugbreak();
  }
  if ( ReplicatedInstance->instanceIndex != (_DWORD)v2 )
  {
    LODWORD(v26) = v2;
    LODWORD(v25) = ReplicatedInstance->instanceIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2228, ASSERT_TYPE_ASSERT, "( replicatedInstance->instanceIndex ) == ( instanceIndex )", "replicatedInstance->instanceIndex == instanceIndex\n\t%i, %i", v25, v26) )
      __debugbreak();
  }
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(v2);
  v5 = InstanceCommonContext;
  v6 = *((_BYTE *)&InstanceCommonContext->ScriptableInstanceContextSecure + 60);
  if ( (v6 & 0x20) != 0 )
  {
    __asm { vmovaps [rsp+68h+var_18], xmm6 }
    *((_BYTE *)&InstanceCommonContext->ScriptableInstanceContextSecure + 60) = v6 & 0xDF;
    if ( !ReplicatedInstance->parent.m_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2240, ASSERT_TYPE_ASSERT, "( replicatedInstance->parent.HasEntity() )", (const char *)&queryFormat, "replicatedInstance->parent.HasEntity()") )
      __debugbreak();
    ReplicatedInstance->parent.m_data = 0;
    ScriptableReplicatedOrigin::Set(&ReplicatedInstance->origin, &v5->origin);
    __asm
    {
      vmovss  xmm5, cs:__real@43360b61
      vmulss  xmm1, xmm5, dword ptr [rbp+2Ch]
      vmovss  xmm4, cs:__real@3f000000
      vaddss  xmm2, xmm1, xmm4
      vxorps  xmm6, xmm6, xmm6
      vroundss xmm3, xmm6, xmm2, 1
      vcvttss2si eax, xmm3
    }
    ReplicatedInstance->angles.m_pitch = _EAX;
    __asm
    {
      vmulss  xmm1, xmm5, dword ptr [rbp+30h]
      vaddss  xmm3, xmm1, xmm4
      vroundss xmm1, xmm6, xmm3, 1
      vcvttss2si eax, xmm1
    }
    ReplicatedInstance->angles.m_yaw = _EAX;
    __asm
    {
      vmulss  xmm1, xmm5, dword ptr [rbp+34h]
      vaddss  xmm3, xmm1, xmm4
      vroundss xmm1, xmm6, xmm3, 1
      vcvttss2si eax, xmm1
    }
    ReplicatedInstance->angles.m_roll = _EAX;
    v23 = ScriptableSv_GetInstanceCommonContext(v2);
    __asm { vmovaps xmm6, [rsp+68h+var_18] }
    v23->originInitial = v5->origin;
    v23->anglesInitial = v5->angles;
    if ( (unsigned int)v2 >= 0x3D0A0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v2, 250016) )
      __debugbreak();
    s_scriptableSv_standaloneParentUpdateBits.array[v2 >> 5] &= ~(0x80000000 >> (v2 & 0x1F));
    return 1;
  }
  else
  {
    Com_Printf(15, "ScriptableSv_StandaloneClearParentEntity failed, scriptable %d Does not have a parent\n", (unsigned int)v2);
    if ( ReplicatedInstance->parent.m_data )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2234, ASSERT_TYPE_ASSERT, "( !replicatedInstance->parent.HasEntity() )", (const char *)&queryFormat, "!replicatedInstance->parent.HasEntity()") )
        __debugbreak();
    }
    return 0;
  }
}

/*
==============
ScriptableSv_StandaloneFreeInstance
==============
*/
char ScriptableSv_StandaloneFreeInstance(const unsigned int instanceIndex)
{
  unsigned int v3; 
  unsigned int runtimeInstanceCount; 

  ScriptableCommon_AssertCountsInitialized();
  if ( instanceIndex >= g_scriptableWorldCounts.runtimeInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
    v3 = instanceIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2130, ASSERT_TYPE_ASSERT, "(unsigned)( instanceIndex ) < (unsigned)( ScriptableCommon_GetReservedInstanceCount() )", "instanceIndex doesn't index ScriptableCommon_GetReservedInstanceCount()\n\t%i not in [0, %i)", v3, runtimeInstanceCount) )
      __debugbreak();
  }
  ScriptableSv_UnlinkReservedScriptableStandalone(instanceIndex);
  return 1;
}

/*
==============
ScriptableSv_StandaloneSetParentEntity
==============
*/
char ScriptableSv_StandaloneSetParentEntity(const unsigned int instanceIndex, const gentity_s *parent, const vec3_t *offset, const vec3_t *deltaAngles)
{
  unsigned __int64 v5; 
  ScriptableReplicatedInstance *ReplicatedInstance; 
  ScriptableInstanceContext *InstanceCommonContext; 
  char v11; 
  __int16 number; 
  ScriptableInstanceContext *v29; 
  unsigned int v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 

  v5 = instanceIndex;
  if ( !parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2178, ASSERT_TYPE_ASSERT, "( parent )", (const char *)&queryFormat, "parent") )
    __debugbreak();
  if ( !parent->r.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2179, ASSERT_TYPE_ASSERT, "( parent->r.isInUse )", (const char *)&queryFormat, "parent->r.isInUse") )
    __debugbreak();
  ScriptableCommon_AssertCountsInitialized();
  if ( (unsigned int)v5 >= g_scriptableWorldCounts.runtimeInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    LODWORD(v32) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2180, ASSERT_TYPE_ASSERT, "(unsigned)( instanceIndex ) < (unsigned)( ScriptableCommon_GetReservedInstanceCount() )", "instanceIndex doesn't index ScriptableCommon_GetReservedInstanceCount()\n\t%i not in [0, %i)", v32, g_scriptableWorldCounts.runtimeInstanceCount) )
      __debugbreak();
  }
  ReplicatedInstance = ScriptableSv_GetReplicatedInstance(v5);
  if ( !ReplicatedInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2183, ASSERT_TYPE_ASSERT, "( replicatedInstance )", (const char *)&queryFormat, "replicatedInstance") )
    __debugbreak();
  if ( !ReplicatedInstance->replicatedType[0] )
  {
    LODWORD(v32) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2184, ASSERT_TYPE_ASSERT, "( replicatedInstance->replicatedType ) != ( ScriptableReplicatedType::ENTITY )", "replicatedInstance->replicatedType != ScriptableReplicatedType::ENTITY\n\t%i, %i", v32, 0i64) )
      __debugbreak();
  }
  if ( ReplicatedInstance->instanceIndex != (_DWORD)v5 )
  {
    LODWORD(v33) = v5;
    LODWORD(v32) = ReplicatedInstance->instanceIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2185, ASSERT_TYPE_ASSERT, "( replicatedInstance->instanceIndex ) == ( instanceIndex )", "replicatedInstance->instanceIndex == instanceIndex\n\t%i, %i", v32, v33) )
      __debugbreak();
  }
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(v5);
  v11 = *((_BYTE *)&InstanceCommonContext->ScriptableInstanceContextSecure + 60);
  if ( (v11 & 0x20) != 0 )
  {
    if ( !ReplicatedInstance->parent.m_data )
    {
      LODWORD(v33) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2190, ASSERT_TYPE_ASSERT, "( ( replicatedInstance->parent.HasEntity() ) )", "%s\n\t( instanceIndex ) = %i", "( replicatedInstance->parent.HasEntity() )", v33) )
        __debugbreak();
      if ( !ReplicatedInstance->parent.m_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 323, ASSERT_TYPE_ASSERT, "(HasEntity())", (const char *)&queryFormat, "HasEntity()") )
        __debugbreak();
    }
    Com_PrintError(15, "ScriptableSv_StandaloneSetParentEntity: Scriptable %d Already has parent (%d)\n", (unsigned int)v5, (unsigned __int16)(ReplicatedInstance->parent.m_data - 1));
    return 0;
  }
  else
  {
    __asm { vmovaps [rsp+78h+var_28], xmm6 }
    *((_BYTE *)&InstanceCommonContext->ScriptableInstanceContextSecure + 60) = v11 | 0x20;
    if ( ReplicatedInstance->parent.m_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2200, ASSERT_TYPE_ASSERT, "( !replicatedInstance->parent.HasEntity() )", (const char *)&queryFormat, "!replicatedInstance->parent.HasEntity()") )
      __debugbreak();
    number = parent->s.number;
    if ( number < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,short>(short)", "unsigned", (unsigned __int16)number, "signed", number) )
      __debugbreak();
    if ( (unsigned __int16)number >= 0x7FEu )
    {
      LODWORD(v33) = 2046;
      LODWORD(v32) = (unsigned __int16)number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 330, ASSERT_TYPE_ASSERT, "(unsigned)( entNum ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "entNum doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", v32, v33) )
        __debugbreak();
    }
    ReplicatedInstance->parent.m_data = number + 1;
    ScriptableReplicatedOrigin::Set(&ReplicatedInstance->origin, offset);
    __asm
    {
      vmovss  xmm5, cs:__real@43360b61
      vmulss  xmm1, xmm5, dword ptr [r14]
      vmovss  xmm4, cs:__real@3f000000
      vaddss  xmm2, xmm1, xmm4
      vxorps  xmm6, xmm6, xmm6
      vroundss xmm3, xmm6, xmm2, 1
      vcvttss2si eax, xmm3
    }
    ReplicatedInstance->angles.m_pitch = _EAX;
    __asm
    {
      vmulss  xmm1, xmm5, dword ptr [r14+4]
      vaddss  xmm3, xmm1, xmm4
      vroundss xmm1, xmm6, xmm3, 1
      vcvttss2si eax, xmm1
    }
    ReplicatedInstance->angles.m_yaw = _EAX;
    __asm
    {
      vmulss  xmm1, xmm5, dword ptr [r14+8]
      vaddss  xmm3, xmm1, xmm4
      vroundss xmm1, xmm6, xmm3, 1
      vcvttss2si eax, xmm1
    }
    ReplicatedInstance->angles.m_roll = _EAX;
    v29 = ScriptableSv_GetInstanceCommonContext(v5);
    v29->originInitial = *offset;
    v29->anglesInitial = *deltaAngles;
    __asm { vmovaps xmm6, [rsp+78h+var_28] }
    if ( !ScriptableSv_UpdateParentedInstanceTransform(v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2211, ASSERT_TYPE_ASSERT, "(ScriptableSv_UpdateParentedInstanceTransform( instanceIndex ))", (const char *)&queryFormat, "ScriptableSv_UpdateParentedInstanceTransform( instanceIndex )") )
      __debugbreak();
    if ( (unsigned int)v5 >= 0x3D0A0 )
    {
      LODWORD(v33) = 250016;
      LODWORD(v32) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v32, v33) )
        __debugbreak();
    }
    v31 = 0x80000000 >> (v5 & 0x1F);
    if ( (v31 & s_scriptableSv_standaloneParentUpdateBits.array[v5 >> 5]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2214, ASSERT_TYPE_ASSERT, "(!s_scriptableSv_standaloneParentUpdateBits.testBit( instanceIndex ))", (const char *)&queryFormat, "!s_scriptableSv_standaloneParentUpdateBits.testBit( instanceIndex )") )
      __debugbreak();
    if ( (unsigned int)v5 >= 0x3D0A0 )
    {
      LODWORD(v35) = 250016;
      LODWORD(v34) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v34, v35) )
        __debugbreak();
    }
    s_scriptableSv_standaloneParentUpdateBits.array[v5 >> 5] |= v31;
    return 1;
  }
}

/*
==============
ScriptableSv_StandaloneSpawnInstance
==============
*/
bool ScriptableSv_StandaloneSpawnInstance(const char *defName, const vec3_t *origin, const vec3_t *angles, const unsigned __int16 payload, const unsigned __int16 extraPayload, unsigned int *outInstanceIndex)
{
  return ScriptableSv_StandaloneSpawnInstance_Internal(defName, origin, angles, payload, extraPayload, 0xFFFFFFFF, outInstanceIndex);
}

/*
==============
ScriptableSv_StandaloneSpawnInstance_Internal
==============
*/
char ScriptableSv_StandaloneSpawnInstance_Internal(const char *defName, const vec3_t *origin, const vec3_t *angles, const unsigned __int16 payload, const unsigned __int16 extraPayload, const unsigned int inInstanceIndex, unsigned int *outInstanceIndex)
{
  const ScriptableDef *NetConstStringDefAtIndex; 
  const ScriptableDef *v13; 
  unsigned __int16 v14; 
  __int64 defIndex; 
  __int64 inScriptableIndex; 
  unsigned int outIndex[10]; 

  if ( NetConstStrings_GetIndexFromName(NETCONSTSTRINGTYPE_SCRIPTABLEDEF, defName, outIndex) )
  {
    NetConstStringDefAtIndex = ScriptableBg_GetNetConstStringDefAtIndex(outIndex[0]);
    v13 = NetConstStringDefAtIndex;
    if ( NetConstStringDefAtIndex )
    {
      if ( ScriptableBg_ValidateStandaloneDef(NetConstStringDefAtIndex) )
      {
        v14 = truncate_cast<unsigned short,unsigned int>(outIndex[0]);
        if ( ScriptableSv_LinkReservedScriptableStandalone(v13, origin, angles, payload, extraPayload, v14, inInstanceIndex, outInstanceIndex) )
        {
          ScriptableCommon_AssertCountsInitialized();
          if ( *outInstanceIndex >= g_scriptableWorldCounts.runtimeInstanceCount )
          {
            ScriptableCommon_AssertCountsInitialized();
            LODWORD(inScriptableIndex) = g_scriptableWorldCounts.runtimeInstanceCount;
            LODWORD(defIndex) = *outInstanceIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2095, ASSERT_TYPE_ASSERT, "(unsigned)( outInstanceIndex ) < (unsigned)( ScriptableCommon_GetReservedInstanceCount() )", "outInstanceIndex doesn't index ScriptableCommon_GetReservedInstanceCount()\n\t%i not in [0, %i)", defIndex, inScriptableIndex) )
              __debugbreak();
          }
          return 1;
        }
        else
        {
          Com_PrintError(15, "ScriptableStandalone: Could not get a scriptable index assigned for %s.\n", defName);
          return 0;
        }
      }
      else
      {
        Com_PrintError(15, "ScriptableStandalone: '%s' is not a valid scriptable def for standalone scriptables. Must be a server instance that does not require entities.\n", defName);
        return 0;
      }
    }
    else
    {
      Com_PrintError(15, "ScriptableStandalone: '%s' is not a valid scriptable def. Could not find an asset with that name.\n", defName);
      return 0;
    }
  }
  else
  {
    Com_PrintError(15, "ScriptableStandalone: '%s' is not a valid scriptable def. Please make sure it is included as precache_scriptable in zone_source.\n", defName);
    return 0;
  }
}

/*
==============
ScriptableSv_UnitTest
==============
*/
void ScriptableSv_UnitTest()
{
  int time; 
  GAntiLag *v14; 
  int v21; 
  BgAntiLagLerpMoverCmd cmd; 
  void *retaddr; 

  _R11 = &retaddr;
  if ( SCRIPTABLESV_UNIT_TEST_LERP_MOVERS )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-18h], xmm6
      vmovaps xmmword ptr [r11-28h], xmm7
      vmovaps xmmword ptr [r11-38h], xmm8
      vmovaps xmmword ptr [r11-48h], xmm9
      vmovaps xmmword ptr [r11-58h], xmm10
      vmovaps xmmword ptr [r11-68h], xmm11
      vmovaps xmmword ptr [r11-78h], xmm12
      vmovaps xmmword ptr [r11-88h], xmm13
      vmovaps xmmword ptr [r11-98h], xmm14
      vmovaps xmmword ptr [r11-0A8h], xmm15
    }
    Com_Printf(29, "Running SCRIPTABLESV_UNIT_TEST_LERP_MOVERS\n");
    time = level.time;
    if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, cs:__real@42c80000
      vmovss  xmm1, cs:__real@41200000
    }
    v14 = GAntiLag::ms_gAntiLagData;
    __asm
    {
      vmovss  xmm10, cs:__real@3cfa01f4
      vmovss  xmm11, cs:__real@43fa0000
      vmovss  xmm12, cs:__real@3c340168
      vmovss  xmm13, cs:__real@3dcccccd
      vmovss  dword ptr [rsp+180h+var_150+0Ch], xmm0
      vmovss  dword ptr [rsp+180h+var_140], xmm0
      vmovss  dword ptr [rsp+180h+var_140+4], xmm0
      vmovsd  xmm14, [rsp+180h+var_140]
      vmovss  dword ptr [rsp+180h+var_150], xmm1
      vmovss  dword ptr [rsp+180h+var_150+4], xmm1
      vmovss  dword ptr [rsp+180h+var_150+8], xmm1
      vmovups xmm15, [rsp+180h+var_150]
    }
    v21 = 0;
    __asm { vxorps  xmm9, xmm9, xmm9 }
    do
    {
      rand();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm10
        vsubss  xmm8, xmm1, xmm11
      }
      rand();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm10
        vsubss  xmm7, xmm1, xmm11
      }
      rand();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm6, xmm0, xmm12
      }
      rand();
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, xmm12
        vmovss  xmm0, cs:__real@3f000000
        vmovss  [rbp+80h+cmd.seconds], xmm0
        vmovss  xmm0, cs:__real@431b9041
        vmovss  [rbp+80h+cmd.radius], xmm0
        vmovss  xmm0, cs:__real@42dc0000
      }
      cmd.startTime = time;
      cmd.userId = v21 + 500000;
      cmd.endTime = time + 500;
      __asm
      {
        vmovss  [rbp+80h+cmd.height], xmm0
        vmovss  dword ptr [rsp+180h+cmd.startOrigin], xmm7
        vmovss  dword ptr [rsp+180h+cmd.startOrigin+4], xmm8
        vmovss  dword ptr [rsp+180h+cmd.startOrigin+8], xmm9
        vmovss  dword ptr [rsp+180h+cmd.startAngles], xmm9
        vmovss  dword ptr [rbp+80h+cmd.startAngles+4], xmm6
        vmovss  dword ptr [rbp+80h+cmd.startAngles+8], xmm9
        vmovss  dword ptr [rbp+80h+cmd.endOrigin], xmm7
        vmovss  dword ptr [rbp+80h+cmd.endOrigin+4], xmm8
        vmovss  dword ptr [rbp+80h+cmd.endOrigin+8], xmm9
        vmovss  dword ptr [rbp+80h+cmd.endAngles], xmm9
        vmovss  dword ptr [rbp+80h+cmd.endAngles+4], xmm1
        vmovss  dword ptr [rbp+80h+cmd.endAngles+8], xmm9
        vmovss  [rbp+80h+cmd.secondsAccel], xmm13
        vmovss  [rbp+80h+cmd.secondsDecel], xmm13
        vmovss  dword ptr [rbp+80h+cmd.origin], xmm7
        vmovss  dword ptr [rbp+80h+cmd.origin+4], xmm8
        vmovss  dword ptr [rbp+80h+cmd.origin+8], xmm9
        vmovups xmmword ptr [rsp+180h+cmd.bounds.midPoint], xmm15
        vmovsd  qword ptr [rsp+180h+cmd.bounds.halfSize+4], xmm14
      }
      BgAntiLag::AddLerpMoverCommand(v14, &cmd);
      ++v21;
    }
    while ( v21 < 100 );
    __asm
    {
      vmovaps xmm15, [rsp+180h+var_A0]
      vmovaps xmm14, [rsp+180h+var_90]
      vmovaps xmm13, [rsp+180h+var_80]
      vmovaps xmm12, [rsp+180h+var_70]
      vmovaps xmm11, [rsp+180h+var_60]
      vmovaps xmm10, [rsp+180h+var_50]
      vmovaps xmm9, [rsp+180h+var_40]
      vmovaps xmm8, [rsp+180h+var_30]
      vmovaps xmm7, [rsp+180h+var_20]
      vmovaps xmm6, [rsp+180h+var_10]
    }
  }
}

/*
==============
ScriptableSv_UnregisterNetworkLODRangeOverrideEntity
==============
*/
void ScriptableSv_UnregisterNetworkLODRangeOverrideEntity(const gentity_s *const ent)
{
  unsigned int number; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 904, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  number = ent->s.number;
  if ( number >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", number, 2048) )
    __debugbreak();
  s_scriptableNetworkLODOverrideEntities.array[(unsigned __int64)number >> 5] &= ~(0x80000000 >> (number & 0x1F));
}

/*
==============
ScriptableSv_UpdateEntityPosition
==============
*/
void ScriptableSv_UpdateEntityPosition(const gentity_s *const ent)
{
  const dvar_t *v1; 
  unsigned int ScriptableIndexForEntity; 
  int number; 
  ScriptableInstanceContext *InstanceCommonContext; 
  __int64 v6; 
  __int64 v7; 

  v1 = DCONST_DVARBOOL_scriptable_enable;
  if ( !DCONST_DVARBOOL_scriptable_enable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled && g_svScriptablesInitialized && s_svScriptablesCreated && s_svScriptablesStateEntered )
  {
    if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3558, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
      __debugbreak();
    if ( ScriptableSv_GetScriptableIndexForEntity(ent) == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3559, ASSERT_TYPE_ASSERT, "( ScriptableSv_IsScriptableEntity( ent ) )", (const char *)&queryFormat, "ScriptableSv_IsScriptableEntity( ent )") )
      __debugbreak();
    ScriptableIndexForEntity = ScriptableSv_GetScriptableIndexForEntity(ent);
    ScriptableCommon_AssertCountsInitialized();
    if ( ScriptableIndexForEntity >= g_scriptableWorldCounts.serverInstanceCount )
    {
      ScriptableCommon_AssertCountsInitialized();
      LODWORD(v7) = g_scriptableWorldCounts.serverInstanceCount;
      LODWORD(v6) = ScriptableIndexForEntity;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3563, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    number = ent->s.number;
    InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(ScriptableIndexForEntity);
    if ( (InstanceCommonContext->linkedObjectType != SCRIPTABLE_LINK_ENTITY || InstanceCommonContext->linkedObjectIndex != number) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3564, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetLinkEquals( scriptableIndex, SCRIPTABLE_LINK_ENTITY, ent->s.number ) )", (const char *)&queryFormat, "ScriptableSv_GetLinkEquals( scriptableIndex, SCRIPTABLE_LINK_ENTITY, ent->s.number )") )
      __debugbreak();
    ScriptableSv_SetOriginAndAngles(ScriptableIndexForEntity, &ent->r.currentOrigin, &ent->r.currentAngles);
  }
}

/*
==============
ScriptableSv_UpdateEventExpiration
==============
*/
void ScriptableSv_UpdateEventExpiration(const ScriptableWorldType partTypeIndex)
{
  unsigned __int8 v1; 
  ScriptableWorldEventGroup *v2; 
  bool v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int prevItemIndex; 
  unsigned int *v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 

  v1 = partTypeIndex;
  if ( (unsigned __int8)partTypeIndex >= (unsigned int)COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2775, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<int>( partTypeIndex ) ) < (unsigned)( ( sizeof( *array_counter( g_scriptableSv_eventTracking.groups ) ) + 0 ) )", "static_cast<int>( partTypeIndex ) doesn't index ARRAY_COUNT( g_scriptableSv_eventTracking.groups )\n\t%i not in [0, %i)", (unsigned __int8)partTypeIndex, 2) )
    __debugbreak();
  v2 = &g_scriptableSv_eventTracking.groups[v1];
  if ( !v2->itemData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2777, ASSERT_TYPE_ASSERT, "( r_curEventGroup.itemData )", (const char *)&queryFormat, "r_curEventGroup.itemData") )
    __debugbreak();
  if ( s_svScriptableEventExpirationUpdateTimer <= level.time )
  {
    s_svScriptableEventExpirationUpdateTimer = level.time + 50;
    v3 = !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80);
    v4 = 2;
    if ( !v3 )
      v4 = 6;
    v5 = ((unsigned int)v2->itemLists.currentIndex + 1) % v4;
    v2->itemLists.currentIndex = v5;
    prevItemIndex = v2->itemLists.headPartIndex[(unsigned __int8)v5];
    if ( prevItemIndex != -1 )
    {
      v7 = &g_scriptableSv_replicatedLimits.partWorldLimits[v1];
      do
      {
        if ( !(unsigned __int8)ScriptableSv_GetPartEventState((const ScriptableWorldType)v1, prevItemIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2767, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetPartEventState( partType, partWorldIndex ) )", (const char *)&queryFormat, "ScriptableSv_GetPartEventState( partType, partWorldIndex )") )
          __debugbreak();
        if ( v1 >= 2u )
        {
          LODWORD(v11) = 2;
          LODWORD(v9) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 220, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( partType ) ) < (unsigned)( ( sizeof( *array_counter( g_scriptableSv_partWorldState.groups ) ) + 0 ) )", "static_cast<uint>( partType ) doesn't index ARRAY_COUNT( g_scriptableSv_partWorldState.groups )\n\t%i not in [0, %i)", v9, v11) )
            __debugbreak();
          LODWORD(v12) = 2;
          LODWORD(v10) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 227, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( partType ) ) < (unsigned)( ( sizeof( *array_counter( g_scriptableSv_replicatedLimits.partWorldLimits ) ) + 0 ) )", "static_cast<uint>( partType ) doesn't index ARRAY_COUNT( g_scriptableSv_replicatedLimits.partWorldLimits )\n\t%i not in [0, %i)", v10, v12) )
            __debugbreak();
        }
        if ( prevItemIndex >= *v7 )
        {
          if ( v1 >= 2u )
          {
            LODWORD(v11) = 2;
            LODWORD(v9) = v1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 227, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( partType ) ) < (unsigned)( ( sizeof( *array_counter( g_scriptableSv_replicatedLimits.partWorldLimits ) ) + 0 ) )", "static_cast<uint>( partType ) doesn't index ARRAY_COUNT( g_scriptableSv_replicatedLimits.partWorldLimits )\n\t%i not in [0, %i)", v9, v11) )
              __debugbreak();
          }
          LODWORD(v11) = *v7;
          LODWORD(v9) = prevItemIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2759, ASSERT_TYPE_ASSERT, "(unsigned)( partWorldIndex ) < (unsigned)( ScriptableSv_GetPartTypeLimit( partType ) )", "partWorldIndex doesn't index ScriptableSv_GetPartTypeLimit( partType )\n\t%i not in [0, %i)", v9, v11) )
            __debugbreak();
        }
        g_scriptableSv_partWorldState.groups[v1].partData[prevItemIndex].data &= ~0x80u;
        if ( prevItemIndex >= v2->itemDataCount )
        {
          LODWORD(v11) = v2->itemDataCount;
          LODWORD(v9) = prevItemIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2802, ASSERT_TYPE_ASSERT, "(unsigned)( partWorldIndex ) < (unsigned)( r_curEventGroup.itemDataCount )", "partWorldIndex doesn't index r_curEventGroup.itemDataCount\n\t%i not in [0, %i)", v9, v11) )
            __debugbreak();
        }
        v8 = prevItemIndex;
        prevItemIndex = v2->itemData[v8].prevItemIndex;
        v2->itemData[v8].prevItemIndex = -1;
        v2->itemData[v8].nextItemIndex = -1;
      }
      while ( prevItemIndex != -1 );
      LOBYTE(v5) = v2->itemLists.currentIndex;
    }
    v2->itemLists.headPartIndex[(unsigned __int8)v5] = -1;
  }
}

/*
==============
ScriptableSv_UpdateParentedInstanceTransform
==============
*/

bool __fastcall ScriptableSv_UpdateParentedInstanceTransform(const unsigned int scriptableIndex, double _XMM1_8)
{
  int IsEntityInUse; 
  ScriptableReplicatedInstance *ReplicatedInstance; 
  int v6; 
  __int64 v34; 
  __int64 v35; 
  vec3_t origin; 
  vec3_t angles; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v39; 
  tmat43_t<vec3_t> out; 

  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.runtimeInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3503, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetReservedInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetReservedInstanceCount()\n\t%i not in [0, %i)", scriptableIndex, g_scriptableWorldCounts.runtimeInstanceCount) )
      __debugbreak();
  }
  if ( (*((_BYTE *)&ScriptableSv_GetInstanceCommonContext(scriptableIndex)->ScriptableInstanceContextSecure + 61) & 2) != 0 )
  {
    LOBYTE(IsEntityInUse) = 1;
  }
  else
  {
    ReplicatedInstance = ScriptableSv_GetReplicatedInstance(scriptableIndex);
    if ( !ReplicatedInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3511, ASSERT_TYPE_ASSERT, "( replicatedInstance )", (const char *)&queryFormat, "replicatedInstance") )
      __debugbreak();
    if ( !ReplicatedInstance->replicatedType[0] )
    {
      LODWORD(v34) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3512, ASSERT_TYPE_ASSERT, "( replicatedInstance->replicatedType ) != ( ScriptableReplicatedType::ENTITY )", "replicatedInstance->replicatedType != ScriptableReplicatedType::ENTITY\n\t%i, %i", v34, 0i64) )
        __debugbreak();
    }
    if ( ReplicatedInstance->instanceIndex != scriptableIndex )
    {
      LODWORD(v35) = scriptableIndex;
      LODWORD(v34) = ReplicatedInstance->instanceIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3513, ASSERT_TYPE_ASSERT, "( replicatedInstance->instanceIndex ) == ( scriptableIndex )", "replicatedInstance->instanceIndex == scriptableIndex\n\t%i, %i", v34, v35) )
        __debugbreak();
    }
    if ( !ReplicatedInstance->parent.m_data )
    {
      LODWORD(v35) = scriptableIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3514, ASSERT_TYPE_ASSERT, "( ( replicatedInstance->parent.HasEntity() ) )", "%s\n\t( scriptableIndex ) = %i", "( replicatedInstance->parent.HasEntity() )", v35) )
        __debugbreak();
      if ( !ReplicatedInstance->parent.m_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 323, ASSERT_TYPE_ASSERT, "(HasEntity())", (const char *)&queryFormat, "HasEntity()") )
        __debugbreak();
    }
    v6 = (unsigned __int16)(ReplicatedInstance->parent.m_data - 1);
    IsEntityInUse = G_IsEntityInUse(v6);
    if ( IsEntityInUse )
    {
      _RSI = G_GetGEntity(v6);
      if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3524, ASSERT_TYPE_ASSERT, "( parent )", (const char *)&queryFormat, "parent") )
        __debugbreak();
      if ( !_RSI->r.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3525, ASSERT_TYPE_ASSERT, "( parent->r.isInUse )", (const char *)&queryFormat, "parent->r.isInUse") )
        __debugbreak();
      __asm
      {
        vmovss  xmm2, cs:__real@3bb40000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmovss  dword ptr [rsp+110h+origin], xmm0
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmovss  dword ptr [rsp+110h+origin+4], xmm0
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmovss  dword ptr [rsp+110h+origin+8], xmm0
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm0, xmm0, xmm2
        vmovss  dword ptr [rsp+110h+angles], xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm0, xmm1, xmm2
        vmovss  dword ptr [rsp+110h+angles+4], xmm0
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, eax
        vmulss  xmm0, xmm1, xmm2
        vmovss  dword ptr [rsp+110h+angles+8], xmm0
      }
      if ( !_RSI->r.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 2161, ASSERT_TYPE_ASSERT, "( parent->r.isInUse )", (const char *)&queryFormat, "parent->r.isInUse") )
        __debugbreak();
      AnglesToAxis(&_RSI->r.currentAngles, (tmat33_t<vec3_t> *)&axis);
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+130h]
        vmovss  xmm1, dword ptr [rsi+134h]
        vmovss  [rbp+10h+var_8C], xmm0
        vmovss  xmm0, dword ptr [rsi+138h]
        vmovss  [rbp+10h+var_84], xmm0
        vmovss  [rbp+10h+var_88], xmm1
      }
      AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&v39);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+110h+origin]
        vmovss  xmm1, dword ptr [rsp+110h+origin+4]
        vmovss  [rbp+10h+var_5C], xmm0
        vmovss  xmm0, dword ptr [rsp+110h+origin+8]
        vmovss  [rbp+10h+var_54], xmm0
        vmovss  [rbp+10h+var_58], xmm1
      }
      MatrixMultiply43(&v39, &axis, &out);
      AxisToAngles((const tmat33_t<vec3_t> *)&out, &angles);
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+10h+out+24h]
        vmovss  xmm1, dword ptr [rbp+10h+out+28h]
        vmovss  dword ptr [rsp+110h+origin], xmm0
        vmovss  xmm0, dword ptr [rbp+10h+out+2Ch]
        vmovss  dword ptr [rsp+110h+origin+8], xmm0
        vmovss  dword ptr [rsp+110h+origin+4], xmm1
      }
      ScriptableSv_UpdateWorldTransform(scriptableIndex, &origin, &angles);
      LOBYTE(IsEntityInUse) = 1;
    }
  }
  return IsEntityInUse;
}

/*
==============
ScriptableSv_UpdateReplicatedTransform
==============
*/
void ScriptableSv_UpdateReplicatedTransform(const unsigned int scriptableIndex, const vec3_t *origin, const vec3_t *angles)
{
  ScriptableReplicatedInstance *ReplicatedInstance; 
  ScriptableInstanceContext *InstanceCommonContext; 

  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex < g_scriptableWorldCounts.runtimeInstanceCount )
  {
    ReplicatedInstance = ScriptableSv_GetReplicatedInstance(scriptableIndex);
    if ( !ReplicatedInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3438, ASSERT_TYPE_ASSERT, "( replicatedInstance )", (const char *)&queryFormat, "replicatedInstance") )
      __debugbreak();
    if ( ReplicatedInstance->replicatedType[0] && ReplicatedInstance->instanceIndex == scriptableIndex )
    {
      __asm { vmovaps [rsp+58h+var_18], xmm6 }
      if ( ReplicatedInstance->parent.m_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3452, ASSERT_TYPE_ASSERT, "( ( !replicatedInstance->parent.HasEntity() ) )", "%s\n\t( scriptableIndex ) = %i", "( !replicatedInstance->parent.HasEntity() )", scriptableIndex) )
        __debugbreak();
      InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
      if ( !InstanceCommonContext->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3456, ASSERT_TYPE_ASSERT, "( context.def != nullptr )", (const char *)&queryFormat, "context.def != nullptr") )
        __debugbreak();
      if ( !InstanceCommonContext->def->serverControlledPartCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3457, ASSERT_TYPE_ASSERT, "( context.def->serverControlledPartCount > 0 )", (const char *)&queryFormat, "context.def->serverControlledPartCount > 0") )
        __debugbreak();
      ScriptableReplicatedOrigin::Set(&ReplicatedInstance->origin, origin);
      __asm
      {
        vmovss  xmm5, cs:__real@43360b61
        vmulss  xmm1, xmm5, dword ptr [rsi]
        vmovss  xmm4, cs:__real@3f000000
        vaddss  xmm2, xmm1, xmm4
        vxorps  xmm6, xmm6, xmm6
        vroundss xmm3, xmm6, xmm2, 1
        vcvttss2si eax, xmm3
      }
      ReplicatedInstance->angles.m_pitch = _EAX;
      __asm
      {
        vmulss  xmm1, xmm5, dword ptr [rsi+4]
        vaddss  xmm3, xmm1, xmm4
        vroundss xmm1, xmm6, xmm3, 1
        vcvttss2si eax, xmm1
      }
      ReplicatedInstance->angles.m_yaw = _EAX;
      __asm
      {
        vmulss  xmm1, xmm5, dword ptr [rsi+8]
        vaddss  xmm3, xmm1, xmm4
        vroundss xmm1, xmm6, xmm3, 1
        vmovaps xmm6, [rsp+58h+var_18]
        vcvttss2si eax, xmm1
      }
      ReplicatedInstance->angles.m_roll = _EAX;
    }
  }
}

/*
==============
ScriptableSv_UpdateWorldTransform
==============
*/
void ScriptableSv_UpdateWorldTransform(const unsigned int scriptableIndex, const vec3_t *origin, const vec3_t *angles)
{
  ScriptableInstanceContext *InstanceCommonContext; 
  bool v8; 
  ScriptableInstanceContext *v9; 
  const ScriptableDef *def; 
  unsigned int i; 
  __int64 v12; 
  ScriptablePartRuntime *PartRuntime; 
  __int64 v14; 
  __int64 v15; 

  __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  v8 = VecNCompareCustomEpsilon(origin->v, InstanceCommonContext->origin.v, *(float *)&_XMM2, 3);
  ScriptableSv_SetPose(scriptableIndex, InstanceCommonContext, origin, angles, 1);
  if ( !v8 && scriptableIndex <= 0xFDE8 )
  {
    v9 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
    def = v9->def;
    if ( v9->def->usablePartCount )
    {
      for ( i = 0; i < def->numParts; ++i )
      {
        v12 = (__int64)&def->parts[i];
        if ( (*(_DWORD *)(v12 + 12) & 2) != 0 )
        {
          PartRuntime = ScriptableSv_GetPartRuntime(scriptableIndex, &def->parts[i]);
          if ( (unsigned int)PartRuntime->stateId >= *(_DWORD *)(v12 + 44) )
          {
            LODWORD(v15) = *(_DWORD *)(v12 + 44);
            LODWORD(v14) = PartRuntime->stateId;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 3419, ASSERT_TYPE_ASSERT, "(unsigned)( partRuntime->stateId ) < (unsigned)( partDef->numStates )", "partRuntime->stateId doesn't index partDef->numStates\n\t%i not in [0, %i)", v14, v15) )
              __debugbreak();
          }
          if ( *(_DWORD *)(160i64 * PartRuntime->stateId + *(_QWORD *)(v12 + 48) + 24) == 3 )
            G_PlayerUse_SetObjectMoved(scriptableIndex, USE_CLASS_SCRIPTABLE, i, origin);
        }
      }
    }
  }
}

/*
==============
ScriptableSv_ValidateEventUpdateListForScriptable
==============
*/
void ScriptableSv_ValidateEventUpdateListForScriptable(const unsigned int scriptableIndex)
{
  unsigned __int64 v1; 
  const ScriptableDef *def; 
  unsigned int v3; 
  unsigned __int64 v4; 
  __int64 v5; 
  __int64 v6; 

  v1 = scriptableIndex;
  def = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
  if ( !def )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 919, ASSERT_TYPE_ASSERT, "( def )", (const char *)&queryFormat, "def") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 340, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
  }
  if ( (def->flags & 0x200) != 0 && ScriptableSv_IsUpdateRequiredForInstance(v1, def) )
  {
    if ( (unsigned int)v1 >= 0x3D0A0 )
    {
      LODWORD(v5) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v5, 250016) )
        __debugbreak();
    }
    v3 = 0x80000000 >> (v1 & 0x1F);
    v4 = v1 >> 5;
    if ( (v3 & s_scriptableSv_eventUpdateBits.array[v4]) == 0 )
    {
      if ( (unsigned int)v1 >= 0x3D0A0 )
      {
        LODWORD(v6) = 250016;
        LODWORD(v5) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v5, v6) )
          __debugbreak();
      }
      if ( (v3 & s_scriptableSv_eventUpdateListCompletedBits.array[v4]) == 0 )
      {
        LODWORD(v6) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 923, ASSERT_TYPE_ASSERT, "( ( s_scriptableSv_eventUpdateBits.testBit( scriptableIndex ) || s_scriptableSv_eventUpdateListCompletedBits.testBit( scriptableIndex ) ) )", "%s\n\t( scriptableIndex ) = %i", "( s_scriptableSv_eventUpdateBits.testBit( scriptableIndex ) || s_scriptableSv_eventUpdateListCompletedBits.testBit( scriptableIndex ) )", v6) )
          __debugbreak();
      }
    }
  }
  else
  {
    if ( (unsigned int)v1 >= 0x3D0A0 )
    {
      LODWORD(v5) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v5, 250016) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v1 & 0x1F)) & s_scriptableSv_eventUpdateBits.array[v1 >> 5]) != 0 )
    {
      LODWORD(v6) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 927, ASSERT_TYPE_ASSERT, "( ( !s_scriptableSv_eventUpdateBits.testBit( scriptableIndex ) ) )", "%s\n\t( scriptableIndex ) = %i", "( !s_scriptableSv_eventUpdateBits.testBit( scriptableIndex ) )", v6) )
        __debugbreak();
    }
  }
}

/*
==============
ScriptableSv_ValidateUpdateLists
==============
*/
void ScriptableSv_ValidateUpdateLists()
{
  const dvar_t *v0; 
  unsigned int v1; 
  unsigned int v2; 
  unsigned __int64 v3; 
  bool v4; 
  __int64 v5; 
  __int64 v6; 

  v0 = DCONST_DVARBOOL_scriptable_sv_validate_update;
  if ( !DCONST_DVARBOOL_scriptable_sv_validate_update && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_sv_validate_update") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
  {
    v1 = 0;
    ScriptableCommon_AssertCountsInitialized();
    if ( g_scriptableWorldCounts.serverInstanceCount )
    {
      do
      {
        if ( !ScriptableSv_GetInstanceInUse(v1) )
        {
          if ( v1 >= 0x3D0A0 )
          {
            LODWORD(v6) = 250016;
            LODWORD(v5) = v1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v5, v6) )
              __debugbreak();
          }
          v2 = 0x80000000 >> (v1 & 0x1F);
          v3 = (unsigned __int64)v1 >> 5;
          if ( (v2 & s_scriptableSv_eventUpdateBits.array[v3]) != 0 )
          {
            LODWORD(v6) = v1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 948, ASSERT_TYPE_ASSERT, "( ( !s_scriptableSv_eventUpdateBits.testBit( scriptableIndex ) ) )", "%s\n\t( scriptableIndex ) = %i", "( !s_scriptableSv_eventUpdateBits.testBit( scriptableIndex ) )", v6) )
              __debugbreak();
          }
          if ( v1 >= 0x3D0A0 )
          {
            LODWORD(v6) = 250016;
            LODWORD(v5) = v1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v5, v6) )
              __debugbreak();
          }
          if ( (v2 & s_scriptableSv_entityPositionUpdateBits.array[v3]) != 0 )
          {
            LODWORD(v6) = v1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 949, ASSERT_TYPE_ASSERT, "( ( !s_scriptableSv_entityPositionUpdateBits.testBit( scriptableIndex ) ) )", "%s\n\t( scriptableIndex ) = %i", "( !s_scriptableSv_entityPositionUpdateBits.testBit( scriptableIndex ) )", v6) )
              __debugbreak();
          }
          if ( v1 >= 0x3D0A0 )
          {
            LODWORD(v6) = 250016;
            LODWORD(v5) = v1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v5, v6) )
              __debugbreak();
          }
          if ( (v2 & s_scriptableSv_standaloneParentUpdateBits.array[v3]) != 0 )
          {
            LODWORD(v6) = v1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 950, ASSERT_TYPE_ASSERT, "( ( !s_scriptableSv_standaloneParentUpdateBits.testBit( scriptableIndex ) ) )", "%s\n\t( scriptableIndex ) = %i", "( !s_scriptableSv_standaloneParentUpdateBits.testBit( scriptableIndex ) )", v6) )
              __debugbreak();
          }
          goto LABEL_25;
        }
        if ( ScriptableSv_GetInstanceHasEntity(v1) )
        {
          if ( v1 >= 0x3D0A0 )
          {
            LODWORD(v6) = 250016;
            LODWORD(v5) = v1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v5, v6) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v1 & 0x1F)) & s_scriptableSv_entityPositionUpdateBits.array[(unsigned __int64)v1 >> 5]) != 0 )
            goto LABEL_40;
          LODWORD(v6) = v1;
          v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 956, ASSERT_TYPE_ASSERT, "( ( s_scriptableSv_entityPositionUpdateBits.testBit( scriptableIndex ) ) )", "%s\n\t( scriptableIndex ) = %i", "( s_scriptableSv_entityPositionUpdateBits.testBit( scriptableIndex ) )", v6);
        }
        else
        {
          if ( v1 >= 0x3D0A0 )
          {
            LODWORD(v6) = 250016;
            LODWORD(v5) = v1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v5, v6) )
              __debugbreak();
          }
          if ( ((0x80000000 >> (v1 & 0x1F)) & s_scriptableSv_entityPositionUpdateBits.array[(unsigned __int64)v1 >> 5]) == 0 )
            goto LABEL_40;
          LODWORD(v6) = v1;
          v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 960, ASSERT_TYPE_ASSERT, "( ( !s_scriptableSv_entityPositionUpdateBits.testBit( scriptableIndex ) ) )", "%s\n\t( scriptableIndex ) = %i", "( !s_scriptableSv_entityPositionUpdateBits.testBit( scriptableIndex ) )", v6);
        }
        if ( v4 )
          __debugbreak();
LABEL_40:
        ScriptableSv_ValidateEventUpdateListForScriptable(v1);
LABEL_25:
        ++v1;
        ScriptableCommon_AssertCountsInitialized();
      }
      while ( v1 < g_scriptableWorldCounts.serverInstanceCount );
    }
  }
}

/*
==============
ScriptableSv_VerifyScriptableMoverEntity
==============
*/
void ScriptableSv_VerifyScriptableMoverEntity(const gentity_s *ent)
{
  entityType_s eType; 
  __int64 v3; 
  int v4; 
  __int64 v5; 
  int v6; 

  eType = ent->s.eType;
  if ( eType != ET_SCRIPTMOVER )
  {
    v6 = 6;
    v4 = eType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 477, ASSERT_TYPE_ASSERT, "( ent->s.eType ) == ( ET_SCRIPTMOVER )", "ent->s.eType == ET_SCRIPTMOVER\n\t%i, %i", v4, v6) )
      __debugbreak();
  }
  if ( ent->s.un.scriptMoverType == 3 )
  {
    LODWORD(v5) = 3;
    LODWORD(v3) = 3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 478, ASSERT_TYPE_ASSERT, "( ent->s.un.scriptMoverType ) != ( ScriptMoverType_ReflectionProbe )", "ent->s.un.scriptMoverType != ScriptMoverType_ReflectionProbe\n\t%i, %i", v3, v5) )
      __debugbreak();
  }
  if ( ent->s.un.scriptMoverType == 4 )
  {
    LODWORD(v5) = 4;
    LODWORD(v3) = 4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 479, ASSERT_TYPE_ASSERT, "( ent->s.un.scriptMoverType ) != ( ScriptMoverType_ServerArms )", "ent->s.un.scriptMoverType != ScriptMoverType_ServerArms\n\t%i, %i", v3, v5) )
      __debugbreak();
  }
  if ( ent->s.un.scriptMoverType == 5 )
  {
    LODWORD(v5) = 5;
    LODWORD(v3) = 5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 480, ASSERT_TYPE_ASSERT, "( ent->s.un.scriptMoverType ) != ( ScriptMoverType_ClientWeapon )", "ent->s.un.scriptMoverType != ScriptMoverType_ClientWeapon\n\t%i, %i", v3, v5) )
      __debugbreak();
  }
  if ( ent->s.un.scriptMoverType == 6 )
  {
    LODWORD(v5) = 6;
    LODWORD(v3) = 6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 481, ASSERT_TYPE_ASSERT, "( ent->s.un.scriptMoverType ) != ( ScriptMoverType_ServerWeapon )", "ent->s.un.scriptMoverType != ScriptMoverType_ServerWeapon\n\t%i, %i", v3, v5) )
      __debugbreak();
  }
  if ( ent->s.un.scriptMoverType == 8 )
  {
    LODWORD(v5) = 8;
    LODWORD(v3) = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 482, ASSERT_TYPE_ASSERT, "( ent->s.un.scriptMoverType ) != ( ScriptMoverType_Avatar )", "ent->s.un.scriptMoverType != ScriptMoverType_Avatar\n\t%i, %i", v3, v5) )
      __debugbreak();
  }
  if ( ent->s.un.scriptMoverType == 9 )
  {
    LODWORD(v5) = 9;
    LODWORD(v3) = 9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 483, ASSERT_TYPE_ASSERT, "( ent->s.un.scriptMoverType ) != ( ScriptMoverType_BrCircle )", "ent->s.un.scriptMoverType != ScriptMoverType_BrCircle\n\t%i, %i", v3, v5) )
      __debugbreak();
  }
  if ( ent->s.un.scriptMoverType == 10 )
  {
    LODWORD(v5) = 10;
    LODWORD(v3) = 10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 484, ASSERT_TYPE_ASSERT, "( ent->s.un.scriptMoverType ) != ( ScriptMoverType_MapCircle )", "ent->s.un.scriptMoverType != ScriptMoverType_MapCircle\n\t%i, %i", v3, v5) )
      __debugbreak();
  }
  if ( !ent->s.staticState.player.stowedWeaponHandle.m_mapEntryId )
  {
    LODWORD(v3) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server.cpp", 485, ASSERT_TYPE_ASSERT, "( ent->s.staticState.mover.u.scriptableIndex ) != ( 0 )", "ent->s.staticState.mover.u.scriptableIndex != 0\n\t%i, %i", v3, 0i64) )
      __debugbreak();
  }
}

