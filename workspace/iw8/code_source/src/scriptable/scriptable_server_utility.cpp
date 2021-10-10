/*
==============
ScriptableSv_GetInstanceAngles
==============
*/

const vec3_t *__fastcall ScriptableSv_GetInstanceAngles(const unsigned int scriptableIndex)
{
  return ?ScriptableSv_GetInstanceAngles@@YAAEBTvec3_t@@I@Z(scriptableIndex);
}

/*
==============
ScriptableSv_HasParentEntity
==============
*/

bool __fastcall ScriptableSv_HasParentEntity(const unsigned int scriptableIndex)
{
  return ?ScriptableSv_HasParentEntity@@YA_NI@Z(scriptableIndex);
}

/*
==============
ScriptableSv_GetPartIsUsable
==============
*/

bool __fastcall ScriptableSv_GetPartIsUsable(const unsigned int scriptableIndex, const unsigned int flatPartId)
{
  return ?ScriptableSv_GetPartIsUsable@@YA_NII@Z(scriptableIndex, flatPartId);
}

/*
==============
ScriptableSv_GetInstanceInUse
==============
*/

bool __fastcall ScriptableSv_GetInstanceInUse(const unsigned int scriptableIndex)
{
  return ?ScriptableSv_GetInstanceInUse@@YA_NI@Z(scriptableIndex);
}

/*
==============
ScriptableSv_GetReplicatedPartLimitForWorld
==============
*/

unsigned int __fastcall ScriptableSv_GetReplicatedPartLimitForWorld(const unsigned int worldTypeIndex)
{
  return ?ScriptableSv_GetReplicatedPartLimitForWorld@@YAII@Z(worldTypeIndex);
}

/*
==============
ScriptableSv_CanCurrentModelDynamicallySimulate
==============
*/

int __fastcall ScriptableSv_CanCurrentModelDynamicallySimulate(const unsigned int scriptableIndex)
{
  return ?ScriptableSv_CanCurrentModelDynamicallySimulate@@YAHI@Z(scriptableIndex);
}

/*
==============
ScriptableSv_TryGetNonReservedIndexForEntity
==============
*/

bool __fastcall ScriptableSv_TryGetNonReservedIndexForEntity(const gentity_s *const ent, unsigned int *const scriptableIndex)
{
  return ?ScriptableSv_TryGetNonReservedIndexForEntity@@YA_NQEBUgentity_s@@QEAI@Z(ent, scriptableIndex);
}

/*
==============
ScriptableSv_GetPartRuntime
==============
*/

ScriptablePartRuntime *__fastcall ScriptableSv_GetPartRuntime(const unsigned int scriptableIndex, const ScriptablePartDef *const partDef)
{
  return ?ScriptableSv_GetPartRuntime@@YAPEAUScriptablePartRuntime@@IQEBUScriptablePartDef@@@Z(scriptableIndex, partDef);
}

/*
==============
ScriptableSv_IsUpdateRequiredForInstance
==============
*/

bool __fastcall ScriptableSv_IsUpdateRequiredForInstance(const unsigned int scriptableIndex, const ScriptableDef *def)
{
  return ?ScriptableSv_IsUpdateRequiredForInstance@@YA_NIAEBUScriptableDef@@@Z(scriptableIndex, def);
}

/*
==============
ScriptableSv_CanCurrentModelMove
==============
*/

int __fastcall ScriptableSv_CanCurrentModelMove(const unsigned int scriptableIndex)
{
  return ?ScriptableSv_CanCurrentModelMove@@YAHI@Z(scriptableIndex);
}

/*
==============
ScriptableSv_AdvanceToNextState
==============
*/

void __fastcall ScriptableSv_AdvanceToNextState(const unsigned int scriptableIndex, const unsigned int flatPartId)
{
  ?ScriptableSv_AdvanceToNextState@@YAXII@Z(scriptableIndex, flatPartId);
}

/*
==============
ScriptableSv_IsServerInstance
==============
*/

int __fastcall ScriptableSv_IsServerInstance(const unsigned int scriptableIndex)
{
  return ?ScriptableSv_IsServerInstance@@YAHI@Z(scriptableIndex);
}

/*
==============
ScriptableSv_AllowVehicleCollisionFilter
==============
*/

bool __fastcall ScriptableSv_AllowVehicleCollisionFilter(const unsigned int scriptableIndex)
{
  return ?ScriptableSv_AllowVehicleCollisionFilter@@YA_NI@Z(scriptableIndex);
}

/*
==============
ScriptableSv_GetReplicatedInstanceLimit
==============
*/

unsigned int __fastcall ScriptableSv_GetReplicatedInstanceLimit()
{
  return ?ScriptableSv_GetReplicatedInstanceLimit@@YAIXZ();
}

/*
==============
ScriptableSv_GetPartUseHintTag
==============
*/

unsigned __int16 __fastcall ScriptableSv_GetPartUseHintTag(const unsigned int scriptableIndex, const unsigned int flatPartId)
{
  return ?ScriptableSv_GetPartUseHintTag@@YAGII@Z(scriptableIndex, flatPartId);
}

/*
==============
ScriptableSv_GetPartUsePositionAndAngles
==============
*/

void __fastcall ScriptableSv_GetPartUsePositionAndAngles(const unsigned int scriptableIndex, const unsigned int flatPartId, vec3_t *out_usePosition, vec3_t *out_useAnglesOptional)
{
  ?ScriptableSv_GetPartUsePositionAndAngles@@YAXIIAEATvec3_t@@PEAT1@@Z(scriptableIndex, flatPartId, out_usePosition, out_useAnglesOptional);
}

/*
==============
ScriptableSv_GetInstanceUseCount
==============
*/

unsigned int __fastcall ScriptableSv_GetInstanceUseCount(const unsigned int scriptableIndex)
{
  return ?ScriptableSv_GetInstanceUseCount@@YAII@Z(scriptableIndex);
}

/*
==============
ScriptableSv_GetPartName
==============
*/

scr_string_t __fastcall ScriptableSv_GetPartName(const unsigned int scriptableIndex, const unsigned int flatPartId)
{
  return ?ScriptableSv_GetPartName@@YA?AW4scr_string_t@@II@Z(scriptableIndex, flatPartId);
}

/*
==============
ScriptableSv_GetPartStateType
==============
*/

Scriptable_StateType __fastcall ScriptableSv_GetPartStateType(const unsigned int scriptableIndex, const unsigned int flatPartId)
{
  return ?ScriptableSv_GetPartStateType@@YA?AW4Scriptable_StateType@@II@Z(scriptableIndex, flatPartId);
}

/*
==============
ScriptableSv_GetEntity
==============
*/

gentity_s *__fastcall ScriptableSv_GetEntity(const unsigned int scriptableIndex)
{
  return ?ScriptableSv_GetEntity@@YAPEAUgentity_s@@I@Z(scriptableIndex);
}

/*
==============
ScriptableSv_GetPartUsePosition
==============
*/

void __fastcall ScriptableSv_GetPartUsePosition(const unsigned int scriptableIndex, const unsigned int flatPartId, vec3_t *out_usePosition)
{
  ?ScriptableSv_GetPartUsePosition@@YAXIIAEATvec3_t@@@Z(scriptableIndex, flatPartId, out_usePosition);
}

/*
==============
ScriptableSv_GetInstanceShouldHaveEntity
==============
*/

bool __fastcall ScriptableSv_GetInstanceShouldHaveEntity(const unsigned int scriptableIndex)
{
  return ?ScriptableSv_GetInstanceShouldHaveEntity@@YA_NI@Z(scriptableIndex);
}

/*
==============
ScriptableSv_GetCurrentModel
==============
*/

const XModel *__fastcall ScriptableSv_GetCurrentModel(const unsigned int scriptableIndex)
{
  return ?ScriptableSv_GetCurrentModel@@YAPEBUXModel@@I@Z(scriptableIndex);
}

/*
==============
ScriptableSv_GetInstancePartCount
==============
*/

unsigned int __fastcall ScriptableSv_GetInstancePartCount(const unsigned int scriptableIndex)
{
  return ?ScriptableSv_GetInstancePartCount@@YAII@Z(scriptableIndex);
}

/*
==============
ScriptableSv_GetInstanceOrigin
==============
*/

const vec3_t *__fastcall ScriptableSv_GetInstanceOrigin(const unsigned int scriptableIndex)
{
  return ?ScriptableSv_GetInstanceOrigin@@YAAEBTvec3_t@@I@Z(scriptableIndex);
}

/*
==============
ScriptableSv_TryGetIndexForEntity
==============
*/

bool __fastcall ScriptableSv_TryGetIndexForEntity(const gentity_s *const ent, unsigned int *const scriptableIndex)
{
  return ?ScriptableSv_TryGetIndexForEntity@@YA_NQEBUgentity_s@@QEAI@Z(ent, scriptableIndex);
}

/*
==============
ScriptableSv_GetPartUsePriority
==============
*/

int __fastcall ScriptableSv_GetPartUsePriority(const unsigned int scriptableIndex, const unsigned int flatPartId)
{
  return ?ScriptableSv_GetPartUsePriority@@YAHII@Z(scriptableIndex, flatPartId);
}

/*
==============
ScriptableSv_GetCurrentCompositeModel
==============
*/

const XCompositeModelDef *__fastcall ScriptableSv_GetCurrentCompositeModel(const unsigned int scriptableIndex)
{
  return ?ScriptableSv_GetCurrentCompositeModel@@YAPEBUXCompositeModelDef@@I@Z(scriptableIndex);
}

/*
==============
ScriptableSv_GetTotalReplicatedPartsLimit
==============
*/

unsigned int __fastcall ScriptableSv_GetTotalReplicatedPartsLimit()
{
  return ?ScriptableSv_GetTotalReplicatedPartsLimit@@YAIXZ();
}

/*
==============
ScriptableSv_GetReplicatedLimits
==============
*/

const ScriptableReplicatedLimits *__fastcall ScriptableSv_GetReplicatedLimits()
{
  return ?ScriptableSv_GetReplicatedLimits@@YAAEBUScriptableReplicatedLimits@@XZ();
}

/*
==============
ScriptableSv_GetInstanceHasEntity
==============
*/

bool __fastcall ScriptableSv_GetInstanceHasEntity(const unsigned int scriptableIndex)
{
  return ?ScriptableSv_GetInstanceHasEntity@@YA_NI@Z(scriptableIndex);
}

/*
==============
ScriptableSv_SetLink
==============
*/

void __fastcall ScriptableSv_SetLink(const unsigned int scriptableIndex, const ScriptableLinkType linkedObjectType, const unsigned int linkedObjectIndex)
{
  ?ScriptableSv_SetLink@@YAXIW4ScriptableLinkType@@I@Z(scriptableIndex, linkedObjectType, linkedObjectIndex);
}

/*
==============
ScriptableSv_HasCollisionSupport
==============
*/

int __fastcall ScriptableSv_HasCollisionSupport(const unsigned int scriptableIndex)
{
  return ?ScriptableSv_HasCollisionSupport@@YAHI@Z(scriptableIndex);
}

/*
==============
ScriptableSv_GetInstanceType
==============
*/

scr_string_t __fastcall ScriptableSv_GetInstanceType(const unsigned int scriptableIndex)
{
  return ?ScriptableSv_GetInstanceType@@YA?AW4scr_string_t@@I@Z(scriptableIndex);
}

/*
==============
ScriptableSv_ClearLink
==============
*/

void __fastcall ScriptableSv_ClearLink(const unsigned int scriptableIndex)
{
  ?ScriptableSv_ClearLink@@YAXI@Z(scriptableIndex);
}

/*
==============
ScriptableSv_GenerateRandSeed
==============
*/

unsigned int __fastcall ScriptableSv_GenerateRandSeed(const unsigned int scriptableIndex)
{
  return ?ScriptableSv_GenerateRandSeed@@YAII@Z(scriptableIndex);
}

/*
==============
ScriptableSv_GetTeam
==============
*/

void __fastcall ScriptableSv_GetTeam(unsigned int entityNumIn, team_t *teamOut, unsigned int *entityNumOut)
{
  ?ScriptableSv_GetTeam@@YAXIPEAW4team_t@@PEAI@Z(entityNumIn, teamOut, entityNumOut);
}

/*
==============
ScriptableSv_GetPartStateUsableDef
==============
*/

const ScriptableStateUsableDef *__fastcall ScriptableSv_GetPartStateUsableDef(const unsigned int scriptableIndex, const unsigned int flatPartId)
{
  return ?ScriptableSv_GetPartStateUsableDef@@YAPEBUScriptableStateUsableDef@@II@Z(scriptableIndex, flatPartId);
}

/*
==============
ScriptableSv_AdvanceToNextState
==============
*/
void ScriptableSv_AdvanceToNextState(const unsigned int scriptableIndex, const unsigned int flatPartId)
{
  const ScriptablePartDef *PartDef; 
  ScriptablePartRuntime *PartRuntime; 
  unsigned int v5; 
  __int64 v6; 
  ScriptableEventParams outParams; 

  PartDef = ScriptableSv_GetPartDef(scriptableIndex, flatPartId);
  PartRuntime = ScriptableSv_GetPartRuntime(scriptableIndex, PartDef);
  if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 625, ASSERT_TYPE_ASSERT, "( partRuntime )", (const char *)&queryFormat, "partRuntime") )
    __debugbreak();
  if ( PartRuntime->stateId >= PartDef->numStates )
  {
    LODWORD(v6) = PartRuntime->stateId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 626, ASSERT_TYPE_ASSERT, "(unsigned)( partRuntime->stateId ) < (unsigned)( partDef.numStates )", "partRuntime->stateId doesn't index partDef.numStates\n\t%i not in [0, %i)", v6, PartDef->numStates) )
      __debugbreak();
  }
  v5 = PartRuntime->stateId + 1;
  if ( v5 < PartDef->numStates )
  {
    ScriptableSv_InitEventParams(&outParams, scriptableIndex, PartDef);
    ScriptableBg_ChangePartState(&outParams, v5, 1);
  }
}

/*
==============
ScriptableSv_AllowVehicleCollisionFilter
==============
*/
bool ScriptableSv_AllowVehicleCollisionFilter(const unsigned int scriptableIndex)
{
  const ScriptableDef *def; 

  if ( !ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 348, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetInstanceInUse( scriptableIndex ) )", (const char *)&queryFormat, "ScriptableSv_GetInstanceInUse( scriptableIndex )") )
    __debugbreak();
  def = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 415, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  return (def->flags & 0x400000) != 0;
}

/*
==============
ScriptableSv_CanCurrentModelDynamicallySimulate
==============
*/
__int64 ScriptableSv_CanCurrentModelDynamicallySimulate(const unsigned int scriptableIndex)
{
  return (unsigned __int8)~*((_BYTE *)&ScriptableSv_GetInstanceCommonContext(scriptableIndex)->ScriptableInstanceContextSecure + 60) >> 7;
}

/*
==============
ScriptableSv_CanCurrentModelMove
==============
*/
_BOOL8 ScriptableSv_CanCurrentModelMove(const unsigned int scriptableIndex)
{
  return (*((_BYTE *)&ScriptableSv_GetInstanceCommonContext(scriptableIndex)->ScriptableInstanceContextSecure + 60) & 0x40) == 0;
}

/*
==============
ScriptableSv_ClearLink
==============
*/
void ScriptableSv_ClearLink(const unsigned int scriptableIndex)
{
  ScriptableInstanceContext *InstanceCommonContext; 

  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  InstanceCommonContext->linkedObjectType = SCRIPTABLE_LINK_NONE;
  InstanceCommonContext->linkedObjectIndex = 0;
}

/*
==============
ScriptableSv_GenerateRandSeed
==============
*/
__int64 ScriptableSv_GenerateRandSeed(const unsigned int scriptableIndex)
{
  unsigned int pHoldrand; 

  pHoldrand = level.time + scriptableIndex;
  BG_srand(&pHoldrand);
  return pHoldrand;
}

/*
==============
ScriptableSv_GetCurrentCompositeModel
==============
*/
const XCompositeModelDef *ScriptableSv_GetCurrentCompositeModel(const unsigned int scriptableIndex)
{
  ScriptableInstanceContext *InstanceCommonContext; 

  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  if ( InstanceCommonContext->dataType == SCRIPTABLE_DATA_TYPE_XMODEL )
    return 0i64;
  else
    return InstanceCommonContext->data.compositeModel;
}

/*
==============
ScriptableSv_GetCurrentModel
==============
*/
const XModel *ScriptableSv_GetCurrentModel(const unsigned int scriptableIndex)
{
  ScriptableInstanceContext *InstanceCommonContext; 

  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  if ( InstanceCommonContext->dataType == SCRIPTABLE_DATA_TYPE_XCOMPOSITEMODEL )
    return 0i64;
  else
    return InstanceCommonContext->data.model;
}

/*
==============
ScriptableSv_GetEntity
==============
*/
gentity_s *ScriptableSv_GetEntity(const unsigned int scriptableIndex)
{
  __int64 linkedObjectIndex; 
  __int64 v4; 
  int v5; 

  if ( ScriptableSv_GetInstanceCommonContext(scriptableIndex)->linkedObjectType != SCRIPTABLE_LINK_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 139, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetLinkTypeEquals( scriptableIndex, SCRIPTABLE_LINK_ENTITY ) )", (const char *)&queryFormat, "ScriptableSv_GetLinkTypeEquals( scriptableIndex, SCRIPTABLE_LINK_ENTITY )") )
    __debugbreak();
  linkedObjectIndex = (int)ScriptableSv_GetInstanceCommonContext(scriptableIndex)->linkedObjectIndex;
  if ( (unsigned int)linkedObjectIndex >= 0x800 )
  {
    v5 = 2048;
    LODWORD(v4) = linkedObjectIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  return &g_entities[linkedObjectIndex];
}

/*
==============
ScriptableSv_GetInstanceAngles
==============
*/
vec3_t *ScriptableSv_GetInstanceAngles(const unsigned int scriptableIndex)
{
  if ( !ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 314, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetInstanceInUse( scriptableIndex ) )", (const char *)&queryFormat, "ScriptableSv_GetInstanceInUse( scriptableIndex )") )
    __debugbreak();
  return &ScriptableSv_GetInstanceCommonContext(scriptableIndex)->angles;
}

/*
==============
ScriptableSv_GetInstanceHasEntity
==============
*/
bool ScriptableSv_GetInstanceHasEntity(const unsigned int scriptableIndex)
{
  return ScriptableSv_GetInstanceCommonContext(scriptableIndex)->linkedObjectType == SCRIPTABLE_LINK_ENTITY;
}

/*
==============
ScriptableSv_GetInstanceInUse
==============
*/
bool ScriptableSv_GetInstanceInUse(const unsigned int scriptableIndex)
{
  return ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def != NULL;
}

/*
==============
ScriptableSv_GetInstanceOrigin
==============
*/
vec3_t *ScriptableSv_GetInstanceOrigin(const unsigned int scriptableIndex)
{
  if ( !ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 305, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetInstanceInUse( scriptableIndex ) )", (const char *)&queryFormat, "ScriptableSv_GetInstanceInUse( scriptableIndex )") )
    __debugbreak();
  return &ScriptableSv_GetInstanceCommonContext(scriptableIndex)->origin;
}

/*
==============
ScriptableSv_GetInstancePartCount
==============
*/
__int64 ScriptableSv_GetInstancePartCount(const unsigned int scriptableIndex)
{
  if ( !ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 323, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetInstanceInUse( scriptableIndex ) )", (const char *)&queryFormat, "ScriptableSv_GetInstanceInUse( scriptableIndex )") )
    __debugbreak();
  return ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def->partCount;
}

/*
==============
ScriptableSv_GetInstanceShouldHaveEntity
==============
*/
bool ScriptableSv_GetInstanceShouldHaveEntity(const unsigned int scriptableIndex)
{
  const ScriptableDef *def; 

  if ( !ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 289, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetInstanceInUse( scriptableIndex ) )", (const char *)&queryFormat, "ScriptableSv_GetInstanceInUse( scriptableIndex )") )
    __debugbreak();
  def = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 363, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  return (def->flags & 0x2000) == 0;
}

/*
==============
ScriptableSv_GetInstanceType
==============
*/
scr_string_t ScriptableSv_GetInstanceType(const unsigned int scriptableIndex)
{
  ScriptableInstanceContext *InstanceCommonContext; 
  scr_string_t result; 

  if ( !ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 331, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetInstanceInUse( scriptableIndex ) )", (const char *)&queryFormat, "ScriptableSv_GetInstanceInUse( scriptableIndex )") )
    __debugbreak();
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  if ( !InstanceCommonContext->def )
    return scr_const.scriptable;
  result = SL_FindString(InstanceCommonContext->def->name);
  if ( !result )
    return scr_const.scriptable;
  return result;
}

/*
==============
ScriptableSv_GetInstanceUseCount
==============
*/
__int64 ScriptableSv_GetInstanceUseCount(const unsigned int scriptableIndex)
{
  return ScriptableSv_GetInstanceCommonContext(scriptableIndex)->initializationCount;
}

/*
==============
ScriptableSv_GetPartDef
==============
*/
const ScriptablePartDef *ScriptableSv_GetPartDef(const unsigned int scriptableIndex, const unsigned int flatPartId)
{
  const ScriptableDef *def; 

  if ( !ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 398, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetInstanceInUse( scriptableIndex ) )", (const char *)&queryFormat, "ScriptableSv_GetInstanceInUse( scriptableIndex )") )
    __debugbreak();
  def = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 401, ASSERT_TYPE_ASSERT, "( ( scriptableDef ) )", "%s\n\t( scriptableIndex ) = %i", "( scriptableDef )", scriptableIndex) )
    __debugbreak();
  return ScriptableCommon_GetPartDefForServerFlatId(def, flatPartId);
}

/*
==============
ScriptableSv_GetPartIsUsable
==============
*/
bool ScriptableSv_GetPartIsUsable(const unsigned int scriptableIndex, const unsigned int flatPartId)
{
  const ScriptableStateDef *PartStateDef; 

  if ( !ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def )
    return 0;
  PartStateDef = ScriptableSv_GetPartStateDef(scriptableIndex, flatPartId);
  if ( !PartStateDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 455, ASSERT_TYPE_ASSERT, "( stateDef )", (const char *)&queryFormat, "stateDef") )
    __debugbreak();
  return PartStateDef->type == Scriptable_StateType_Usable;
}

/*
==============
ScriptableSv_GetPartName
==============
*/
__int64 ScriptableSv_GetPartName(const unsigned int scriptableIndex, const unsigned int flatPartId)
{
  return (unsigned int)ScriptableSv_GetPartDef(scriptableIndex, flatPartId)->scrName;
}

/*
==============
ScriptableSv_GetPartRuntime
==============
*/
ScriptablePartRuntime *ScriptableSv_GetPartRuntime(const unsigned int scriptableIndex, const ScriptablePartDef *const partDef)
{
  ScriptableInstanceContext *InstanceCommonContext; 
  unsigned int reservedStateListHeader; 
  unsigned int v6; 
  unsigned int i; 
  __int64 v8; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  if ( !partDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 358, ASSERT_TYPE_ASSERT, "( partDef )", (const char *)&queryFormat, "partDef") )
    __debugbreak();
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.runtimeInstanceCount )
  {
    v10 = partDef->serverInstanceFlatId + InstanceCommonContext->partStateIndex;
    if ( (unsigned int)v10 >= g_svScriptableRuntimePartStatesCount )
    {
      LODWORD(v12) = partDef->serverInstanceFlatId + InstanceCommonContext->partStateIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 386, ASSERT_TYPE_ASSERT, "(unsigned)( flatPartId ) < (unsigned)( g_svScriptableRuntimePartStatesCount )", "flatPartId doesn't index g_svScriptableRuntimePartStatesCount\n\t%i not in [0, %i)", v12, g_svScriptableRuntimePartStatesCount) )
        __debugbreak();
    }
    v11 = v10;
    if ( g_svScriptableRuntimePartStates[v11].stateId >= partDef->numStates )
    {
      LODWORD(v13) = partDef->numStates;
      LODWORD(v12) = g_svScriptableRuntimePartStates[v11].stateId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 389, ASSERT_TYPE_ASSERT, "(unsigned)( g_svScriptableRuntimePartStates[flatPartId].stateId ) < (unsigned)( partDef->numStates )", "g_svScriptableRuntimePartStates[flatPartId].stateId doesn't index partDef->numStates\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    return &g_svScriptableRuntimePartStates[v11];
  }
  else
  {
    reservedStateListHeader = InstanceCommonContext->reservedStateListHeader;
    v6 = 0;
    for ( i = g_scriptableSVReservedPartRuntimeCount; v6 < partDef->serverInstanceFlatId; reservedStateListHeader = g_scriptableSVReservedPartRuntimes[reservedStateListHeader].nextRuntime )
    {
      if ( reservedStateListHeader >= i )
      {
        LODWORD(v13) = i;
        LODWORD(v12) = reservedStateListHeader;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 373, ASSERT_TYPE_ASSERT, "(unsigned)( reservedStateIdx ) < (unsigned)( g_scriptableSVReservedPartRuntimeCount )", "reservedStateIdx doesn't index g_scriptableSVReservedPartRuntimeCount\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
        i = g_scriptableSVReservedPartRuntimeCount;
      }
      ++v6;
    }
    if ( reservedStateListHeader >= i )
    {
      LODWORD(v13) = i;
      LODWORD(v12) = reservedStateListHeader;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 377, ASSERT_TYPE_ASSERT, "(unsigned)( reservedStateIdx ) < (unsigned)( g_scriptableSVReservedPartRuntimeCount )", "reservedStateIdx doesn't index g_scriptableSVReservedPartRuntimeCount\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    v8 = reservedStateListHeader;
    if ( g_scriptableSVReservedPartRuntimes[v8].stateId >= partDef->numStates )
    {
      LODWORD(v13) = partDef->numStates;
      LODWORD(v12) = g_scriptableSVReservedPartRuntimes[v8].stateId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 378, ASSERT_TYPE_ASSERT, "(unsigned)( g_scriptableSVReservedPartRuntimes[reservedStateIdx].stateId ) < (unsigned)( partDef->numStates )", "g_scriptableSVReservedPartRuntimes[reservedStateIdx].stateId doesn't index partDef->numStates\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    return &g_scriptableSVReservedPartRuntimes[v8];
  }
}

/*
==============
ScriptableSv_GetPartStateDef
==============
*/
ScriptableStateDef *ScriptableSv_GetPartStateDef(const unsigned int scriptableIndex, const unsigned int flatPartId)
{
  const ScriptablePartDef *PartDef; 
  ScriptablePartRuntime *PartRuntime; 
  __int64 v6; 

  PartDef = ScriptableSv_GetPartDef(scriptableIndex, flatPartId);
  PartRuntime = ScriptableSv_GetPartRuntime(scriptableIndex, PartDef);
  if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 413, ASSERT_TYPE_ASSERT, "( partRuntime )", (const char *)&queryFormat, "partRuntime") )
    __debugbreak();
  if ( PartRuntime->stateId >= PartDef->numStates )
  {
    LODWORD(v6) = PartRuntime->stateId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 414, ASSERT_TYPE_ASSERT, "(unsigned)( partRuntime->stateId ) < (unsigned)( partDef.numStates )", "partRuntime->stateId doesn't index partDef.numStates\n\t%i not in [0, %i)", v6, PartDef->numStates) )
      __debugbreak();
  }
  return &PartDef->states[PartRuntime->stateId];
}

/*
==============
ScriptableSv_GetPartStateType
==============
*/
__int64 ScriptableSv_GetPartStateType(const unsigned int scriptableIndex, const unsigned int flatPartId)
{
  ScriptableStateDef *PartStateDef; 

  PartStateDef = ScriptableSv_GetPartStateDef(scriptableIndex, flatPartId);
  if ( PartStateDef )
    return (unsigned int)PartStateDef->type;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 423, ASSERT_TYPE_ASSERT, "( stateDef )", (const char *)&queryFormat, "stateDef") )
    __debugbreak();
  return MEMORY[0x18];
}

/*
==============
ScriptableSv_GetPartStateUsableDef
==============
*/
ScriptableStateDefUnion *ScriptableSv_GetPartStateUsableDef(const unsigned int scriptableIndex, const unsigned int flatPartId)
{
  ScriptableStateDef *PartStateDef; 
  __int64 v4; 

  PartStateDef = ScriptableSv_GetPartStateDef(scriptableIndex, flatPartId);
  if ( !PartStateDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 440, ASSERT_TYPE_ASSERT, "( stateDef )", (const char *)&queryFormat, "stateDef") )
    __debugbreak();
  if ( PartStateDef->type != Scriptable_StateType_Usable )
  {
    LODWORD(v4) = PartStateDef->type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 441, ASSERT_TYPE_ASSERT, "( stateDef->type ) == ( Scriptable_StateType_Usable )", "stateDef->type == Scriptable_StateType_Usable\n\t%i, %i", v4, 3) )
      __debugbreak();
  }
  return &PartStateDef->data;
}

/*
==============
ScriptableSv_GetPartUseHintTag
==============
*/
__int64 ScriptableSv_GetPartUseHintTag(const unsigned int scriptableIndex, const unsigned int flatPartId)
{
  const ScriptableStateUsableDef *PartStateUsableDef; 
  const gentity_s *Entity; 
  int BoneIndex; 

  PartStateUsableDef = ScriptableSv_GetPartStateUsableDef(scriptableIndex, flatPartId);
  if ( !PartStateUsableDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 567, ASSERT_TYPE_ASSERT, "( ( stateUsableDef != nullptr ) )", "%s\n\t( stateUsableDef ) = %p", "( stateUsableDef != nullptr )", NULL) )
    __debugbreak();
  if ( !PartStateUsableDef->hintTag )
    return 0i64;
  if ( ScriptableSv_GetInstanceCommonContext(scriptableIndex)->linkedObjectType != SCRIPTABLE_LINK_ENTITY )
    return 0i64;
  Sys_ProfBeginNamedEvent(0xFF008008, "ScriptableSv_GetPartUseHintTag");
  Entity = ScriptableSv_GetEntity(scriptableIndex);
  BoneIndex = SV_Game_DObjGetBoneIndex(Entity, PartStateUsableDef->hintTag);
  Sys_ProfEndNamedEvent();
  if ( BoneIndex <= 0 )
    return 0i64;
  if ( (unsigned int)BoneIndex > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)BoneIndex, "signed", BoneIndex) )
    __debugbreak();
  return (unsigned __int16)BoneIndex;
}

/*
==============
ScriptableSv_GetPartUsePosition
==============
*/
void ScriptableSv_GetPartUsePosition(const unsigned int scriptableIndex, const unsigned int flatPartId, vec3_t *out_usePosition)
{
  ScriptableSv_GetPartUsePositionAndAngles(scriptableIndex, flatPartId, out_usePosition, NULL);
}

/*
==============
ScriptableSv_GetPartUsePositionAndAngles
==============
*/
void ScriptableSv_GetPartUsePositionAndAngles(const unsigned int scriptableIndex, const unsigned int flatPartId, vec3_t *out_usePosition, vec3_t *out_useAnglesOptional)
{
  ScriptableInstanceContext *InstanceCommonContext; 
  const ScriptablePartDef *PartDef; 
  ScriptablePartRuntime *PartRuntime; 
  __int64 stateId; 
  ScriptableStateDef *states; 
  __int64 v13; 
  const vec3_t *p_useOffset; 
  scr_string_t hintTag; 
  const gentity_s *Entity; 
  int WorldTagPos; 
  const XModel *ScriptableModel; 
  const char *name; 
  const char *v20; 
  ScriptableInstanceContext *v21; 
  const char *v22; 
  bool v23; 
  const char *v24; 
  ScriptableInstanceContext *v25; 
  const char *v26; 
  const vec3_t *p_origin; 
  __int64 v28; 
  __int64 v29; 
  char v30; 
  char v31; 
  tmat33_t<vec3_t> axis; 
  tmat43_t<vec3_t> outTagMat; 

  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  PartDef = ScriptableSv_GetPartDef(scriptableIndex, flatPartId);
  PartRuntime = ScriptableSv_GetPartRuntime(scriptableIndex, PartDef);
  if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 470, ASSERT_TYPE_ASSERT, "( partRuntime )", (const char *)&queryFormat, "partRuntime") )
    __debugbreak();
  if ( PartRuntime->stateId >= PartDef->numStates )
  {
    LODWORD(v28) = PartRuntime->stateId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 471, ASSERT_TYPE_ASSERT, "(unsigned)( partRuntime->stateId ) < (unsigned)( partDef.numStates )", "partRuntime->stateId doesn't index partDef.numStates\n\t%i not in [0, %i)", v28, PartDef->numStates) )
      __debugbreak();
  }
  if ( PartDef->states[PartRuntime->stateId].type != Scriptable_StateType_Usable )
  {
    LODWORD(v29) = 3;
    LODWORD(v28) = PartDef->states[PartRuntime->stateId].type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 472, ASSERT_TYPE_ASSERT, "( partDef.states[partRuntime->stateId].type ) == ( Scriptable_StateType_Usable )", "partDef.states[partRuntime->stateId].type == Scriptable_StateType_Usable\n\t%i, %i", v28, v29) )
      __debugbreak();
  }
  stateId = PartRuntime->stateId;
  states = PartDef->states;
  v13 = stateId;
  p_useOffset = &states[stateId].data.usable.useOffset;
  if ( p_useOffset->v[0] != 0.0 || states[stateId].data.usable.useOffset.v[1] != 0.0 || (v30 = 0, states[stateId].data.usable.useOffset.v[2] != 0.0) )
    v30 = 1;
  if ( states[v13].data.usable.angleOffset.v[0] != 0.0 || states[v13].data.health.damagePropagationToParent != 0.0 || (v31 = 0, states[v13].data.health.damagePropagationToChild != 0.0) )
    v31 = 1;
  hintTag = states[v13].data.usable.hintTag;
  if ( (hintTag || (hintTag = PartDef->scrTagName) != 0) && ScriptableSv_GetInstanceCommonContext(scriptableIndex)->linkedObjectType == SCRIPTABLE_LINK_ENTITY )
  {
    Entity = ScriptableSv_GetEntity(scriptableIndex);
    if ( v30 )
      WorldTagPos = G_Utils_DObjBoneSpacePosToWorld(Entity, hintTag, p_useOffset, out_usePosition);
    else
      WorldTagPos = G_Utils_DObjGetWorldTagPos(Entity, hintTag, out_usePosition);
    if ( WorldTagPos )
    {
      if ( out_useAnglesOptional )
      {
        G_Utils_DObjGetWorldTagMatrix(Entity, hintTag, &outTagMat);
        *(__m256i *)axis.m[0].v = *(__m256i *)outTagMat.m[0].v;
        axis.m[2].v[2] = outTagMat.m[2].v[2];
        AxisToAngles(&axis, out_useAnglesOptional);
        if ( v31 )
        {
          out_useAnglesOptional->v[0] = out_useAnglesOptional->v[0] + states[v13].data.usable.angleOffset.v[0];
          out_useAnglesOptional->v[1] = states[v13].data.health.damagePropagationToParent + out_useAnglesOptional->v[1];
          out_useAnglesOptional->v[2] = states[v13].data.health.damagePropagationToChild + out_useAnglesOptional->v[2];
        }
      }
      return;
    }
    if ( !states[v13].data.usable.allowMissingTag )
    {
      ScriptableModel = BG_XCompositeModel_GetScriptableModel(InstanceCommonContext);
      if ( ScriptableModel )
      {
        name = ScriptableModel->name;
        v20 = SL_ConvertToString(hintTag);
        v21 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
        v22 = v21->def ? v21->def->name : "<Unknown>";
        v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 519, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Scriptable %s tried to find bone %s in model %s and failed", v22, v20, name);
      }
      else
      {
        v24 = SL_ConvertToString(hintTag);
        v25 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
        v26 = v25->def ? v25->def->name : "<Unknown>";
        v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 523, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Scriptable %s tried to find bone %s but had no model", v26, v24);
      }
      if ( v23 )
        __debugbreak();
    }
  }
  p_origin = &InstanceCommonContext->origin;
  if ( v30 )
  {
    AnglesAndOriginToMatrix43(&InstanceCommonContext->angles, p_origin, &outTagMat);
    MatrixTransformVector43(p_useOffset, &outTagMat, out_usePosition);
  }
  else
  {
    out_usePosition->v[0] = p_origin->v[0];
    out_usePosition->v[1] = InstanceCommonContext->origin.v[1];
    out_usePosition->v[2] = InstanceCommonContext->origin.v[2];
  }
  if ( out_useAnglesOptional )
  {
    if ( v31 )
    {
      out_useAnglesOptional->v[0] = InstanceCommonContext->angles.v[0] + states[v13].data.usable.angleOffset.v[0];
      out_useAnglesOptional->v[1] = states[v13].data.health.damagePropagationToParent + InstanceCommonContext->angles.v[1];
      out_useAnglesOptional->v[2] = states[v13].data.health.damagePropagationToChild + InstanceCommonContext->angles.v[2];
    }
    else
    {
      out_useAnglesOptional->v[0] = InstanceCommonContext->angles.v[0];
      out_useAnglesOptional->v[1] = InstanceCommonContext->angles.v[1];
      out_useAnglesOptional->v[2] = InstanceCommonContext->angles.v[2];
    }
  }
}

/*
==============
ScriptableSv_GetPartUsePriority
==============
*/
__int64 ScriptableSv_GetPartUsePriority(const unsigned int scriptableIndex, const unsigned int flatPartId)
{
  const ScriptableStateUsableDef *PartStateUsableDef; 

  PartStateUsableDef = ScriptableSv_GetPartStateUsableDef(scriptableIndex, flatPartId);
  if ( PartStateUsableDef )
    return (unsigned int)PartStateUsableDef->priority;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 593, ASSERT_TYPE_ASSERT, "( ( stateUsableDef != nullptr ) )", "%s\n\t( stateUsableDef ) = %p", "( stateUsableDef != nullptr )", NULL) )
    __debugbreak();
  return (unsigned int)MEMORY[0x48];
}

/*
==============
ScriptableSv_GetReplicatedInstanceLimit
==============
*/
__int64 ScriptableSv_GetReplicatedInstanceLimit()
{
  if ( !g_scriptableSv_replicatedLimitsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 57, ASSERT_TYPE_ASSERT, "( g_scriptableSv_replicatedLimitsInitialized )", (const char *)&queryFormat, "g_scriptableSv_replicatedLimitsInitialized") )
    __debugbreak();
  return g_scriptableSv_replicatedLimits.instanceLimit;
}

/*
==============
ScriptableSv_GetReplicatedLimits
==============
*/
ScriptableReplicatedLimits *ScriptableSv_GetReplicatedLimits()
{
  if ( !g_scriptableSv_replicatedLimitsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 50, ASSERT_TYPE_ASSERT, "( g_scriptableSv_replicatedLimitsInitialized )", (const char *)&queryFormat, "g_scriptableSv_replicatedLimitsInitialized") )
    __debugbreak();
  return &g_scriptableSv_replicatedLimits;
}

/*
==============
ScriptableSv_GetReplicatedPartLimitForWorld
==============
*/
__int64 ScriptableSv_GetReplicatedPartLimitForWorld(const unsigned int worldTypeIndex)
{
  __int64 v1; 
  __int64 v3; 
  int v4; 

  v1 = worldTypeIndex;
  if ( !g_scriptableSv_replicatedLimitsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 72, ASSERT_TYPE_ASSERT, "( g_scriptableSv_replicatedLimitsInitialized )", (const char *)&queryFormat, "g_scriptableSv_replicatedLimitsInitialized") )
    __debugbreak();
  if ( (unsigned int)v1 >= 2 )
  {
    v4 = 2;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 73, ASSERT_TYPE_ASSERT, "(unsigned)( worldTypeIndex ) < (unsigned)( ( sizeof( *array_counter( g_scriptableSv_replicatedLimits.partWorldLimits ) ) + 0 ) )", "worldTypeIndex doesn't index ARRAY_COUNT( g_scriptableSv_replicatedLimits.partWorldLimits )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return g_scriptableSv_replicatedLimits.partWorldLimits[v1];
}

/*
==============
ScriptableSv_GetTeam
==============
*/
void ScriptableSv_GetTeam(unsigned int entityNumIn, team_t *teamOut, unsigned int *entityNumOut)
{
  GHandler *Handler; 

  if ( entityNumIn >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 602, ASSERT_TYPE_ASSERT, "( entityNumIn < ( 2048 ) )", (const char *)&queryFormat, "entityNumIn < MAX_GENTITIES") )
    __debugbreak();
  if ( !teamOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 603, ASSERT_TYPE_ASSERT, "( teamOut )", (const char *)&queryFormat, "teamOut") )
    __debugbreak();
  if ( !entityNumOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 604, ASSERT_TYPE_ASSERT, "( entityNumOut )", (const char *)&queryFormat, "entityNumOut") )
    __debugbreak();
  Handler = GHandler::getHandler();
  if ( !Handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 607, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  Handler->GetEntityTeam(Handler, teamOut, entityNumIn, entityNumOut);
}

/*
==============
ScriptableSv_GetTotalReplicatedPartsLimit
==============
*/
__int64 ScriptableSv_GetTotalReplicatedPartsLimit()
{
  if ( !g_scriptableSv_replicatedLimitsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 65, ASSERT_TYPE_ASSERT, "( g_scriptableSv_replicatedLimitsInitialized )", (const char *)&queryFormat, "g_scriptableSv_replicatedLimitsInitialized") )
    __debugbreak();
  return g_scriptableSv_replicatedLimits.partTotalLimit;
}

/*
==============
ScriptableSv_HasCollisionSupport
==============
*/
_BOOL8 ScriptableSv_HasCollisionSupport(const unsigned int scriptableIndex)
{
  unsigned int runtimeInstanceCount; 
  unsigned int v3; 
  __int64 v4; 
  ScriptableInstance *v5; 
  __int64 v7; 
  __int64 v8; 

  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.totalInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 129, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", scriptableIndex, g_scriptableWorldCounts.totalInstanceCount) )
      __debugbreak();
  }
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 131, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
    __debugbreak();
  ScriptableCommon_AssertCountsInitialized();
  runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 106, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
    __debugbreak();
  v3 = runtimeInstanceCount + cm.mapEnts->scriptableMapEnts.lootInstanceCount;
  if ( scriptableIndex < v3 )
    return 1i64;
  v4 = scriptableIndex - v3;
  if ( (unsigned int)v4 >= cm.mapEnts->scriptableMapEnts.mapInstanceCount )
  {
    LODWORD(v8) = cm.mapEnts->scriptableMapEnts.mapInstanceCount;
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 142, ASSERT_TYPE_ASSERT, "(unsigned)( mapInstanceIndex ) < (unsigned)( cm.mapEnts->scriptableMapEnts.mapInstanceCount )", "mapInstanceIndex doesn't index cm.mapEnts->scriptableMapEnts.mapInstanceCount\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  v5 = &cm.mapEnts->scriptableMapEnts.mapInstances[v4];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 93, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  return (v5->flags & 1) == 0;
}

/*
==============
ScriptableSv_HasParentEntity
==============
*/
char ScriptableSv_HasParentEntity(const unsigned int scriptableIndex)
{
  ScriptableInstanceContext *InstanceCommonContext; 
  unsigned int v4; 
  __int64 v5; 
  unsigned int runtimeInstanceCount; 

  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  if ( (*((_BYTE *)&InstanceCommonContext->ScriptableInstanceContextSecure + 60) & 0x20) == 0 )
    return 0;
  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.runtimeInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
    v4 = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 267, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetReservedInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetReservedInstanceCount()\n\t%i not in [0, %i)", v4, runtimeInstanceCount) )
      __debugbreak();
  }
  if ( !InstanceCommonContext->def )
  {
    LODWORD(v5) = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 268, ASSERT_TYPE_ASSERT, "( ( context.def != nullptr ) )", "%s\n\t( scriptableIndex ) = %i", "( context.def != nullptr )", v5) )
      __debugbreak();
  }
  if ( InstanceCommonContext->linkedObjectType == SCRIPTABLE_LINK_ENTITY )
  {
    LODWORD(v5) = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 269, ASSERT_TYPE_ASSERT, "( ( context.linkedObjectType != SCRIPTABLE_LINK_ENTITY ) )", "%s\n\t( scriptableIndex ) = %i", "( context.linkedObjectType != SCRIPTABLE_LINK_ENTITY )", v5) )
      __debugbreak();
  }
  return 1;
}

/*
==============
ScriptableSv_IsServerInstance
==============
*/
__int64 ScriptableSv_IsServerInstance(const unsigned int scriptableIndex)
{
  const ScriptableDef *def; 

  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex < g_scriptableWorldCounts.runtimeInstanceCount )
    return 1i64;
  if ( !ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 87, ASSERT_TYPE_ASSERT, "( ScriptableSv_GetInstanceInUse( scriptableIndex ) )", (const char *)&queryFormat, "ScriptableSv_GetInstanceInUse( scriptableIndex )") )
    __debugbreak();
  def = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 276, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  return ((unsigned int)def->flags >> 1) & 1;
}

/*
==============
ScriptableSv_IsUpdateRequiredForInstance
==============
*/
char ScriptableSv_IsUpdateRequiredForInstance(const unsigned int scriptableIndex, const ScriptableDef *def)
{
  int v4; 

  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 340, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  if ( (def->flags & 0x200) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 674, ASSERT_TYPE_ASSERT, "( ( ScriptableDef_RequiresUpdate( &def ) ) )", "%s\n\t( def.name ) = %s", "( ScriptableDef_RequiresUpdate( &def ) )", def->name) )
    __debugbreak();
  v4 = 0;
  if ( !def->numParts )
    return 0;
  while ( !ScriptableSv_IsUpdateRequiredForPartInCurrentState(scriptableIndex, &def->parts[v4]) )
  {
    if ( ++v4 >= def->numParts )
      return 0;
  }
  return 1;
}

/*
==============
ScriptableSv_IsUpdateRequiredForPartInCurrentState
==============
*/
char ScriptableSv_IsUpdateRequiredForPartInCurrentState(const unsigned int scriptableIndex, const ScriptablePartDef *part)
{
  ScriptablePartRuntime *PartRuntime; 
  int v5; 
  __int64 v7; 

  if ( (part->flags & 0x202) != 514 )
    return 0;
  if ( !part->numStates )
    goto LABEL_10;
  PartRuntime = ScriptableSv_GetPartRuntime(scriptableIndex, part);
  if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 648, ASSERT_TYPE_ASSERT, "( runtime )", (const char *)&queryFormat, "runtime") )
    __debugbreak();
  if ( PartRuntime->stateId >= part->numStates )
  {
    LODWORD(v7) = PartRuntime->stateId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 649, ASSERT_TYPE_ASSERT, "(unsigned)( runtime->stateId ) < (unsigned)( part.numStates )", "runtime->stateId doesn't index part.numStates\n\t%i not in [0, %i)", v7, part->numStates) )
      __debugbreak();
  }
  if ( (part->states[PartRuntime->stateId].base.flags & 0x200) == 0 )
  {
LABEL_10:
    v5 = 0;
    if ( part->numChildParts )
    {
      while ( !ScriptableSv_IsUpdateRequiredForPartInCurrentState(scriptableIndex, &part->childParts[v5]) )
      {
        if ( ++v5 >= part->numChildParts )
          return 0;
      }
      return 1;
    }
    return 0;
  }
  return 1;
}

/*
==============
ScriptableSv_SetLink
==============
*/
void ScriptableSv_SetLink(const unsigned int scriptableIndex, const ScriptableLinkType linkedObjectType, const unsigned int linkedObjectIndex)
{
  const char *v6; 
  int v7; 
  const char *v8; 
  ScriptableInstanceContext *InstanceCommonContext; 
  ScriptableInstanceContext *v10; 
  unsigned int v11; 
  const ScriptableDef *def; 
  const char *name; 
  __int64 v14; 
  __int64 v15; 

  if ( (unsigned __int8)linkedObjectType >= SCRIPTABLE_LINK_MAX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 172, ASSERT_TYPE_ASSERT, "(unsigned)( linkedObjectType ) < (unsigned)( SCRIPTABLE_LINK_MAX )", "linkedObjectType doesn't index SCRIPTABLE_LINK_MAX\n\t%i not in [0, %i)", (unsigned __int8)linkedObjectType, 4) )
    __debugbreak();
  if ( linkedObjectType )
  {
    switch ( linkedObjectType )
    {
      case SCRIPTABLE_LINK_ENTITY:
        if ( linkedObjectIndex <= 0x7FE )
          goto LABEL_16;
        v6 = "linkedObjectType != SCRIPTABLE_LINK_ENTITY || linkedObjectIndex <= ENTITYNUM_ORDINARY_END";
        v7 = 175;
        v8 = "( linkedObjectType != SCRIPTABLE_LINK_ENTITY || linkedObjectIndex <= ENTITYNUM_ORDINARY_END )";
        break;
      case SCRIPTABLE_LINK_CLIENTMODEL:
        v6 = "linkedObjectType != SCRIPTABLE_LINK_CLIENTMODEL";
        v7 = 176;
        v8 = "( linkedObjectType != SCRIPTABLE_LINK_CLIENTMODEL )";
        break;
      case SCRIPTABLE_LINK_DYNENT:
        v6 = "linkedObjectType != SCRIPTABLE_LINK_DYNENT";
        v7 = 177;
        v8 = "( linkedObjectType != SCRIPTABLE_LINK_DYNENT )";
        break;
      default:
        goto LABEL_16;
    }
  }
  else
  {
    if ( !linkedObjectIndex )
      goto LABEL_16;
    v6 = "linkedObjectType != SCRIPTABLE_LINK_NONE || linkedObjectIndex == 0";
    v7 = 174;
    v8 = "( linkedObjectType != SCRIPTABLE_LINK_NONE || linkedObjectIndex == 0 )";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", v7, ASSERT_TYPE_ASSERT, v8, (const char *)&queryFormat, v6) )
    __debugbreak();
LABEL_16:
  InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
  if ( ScriptableSv_GetInstanceCommonContext(scriptableIndex)->linkedObjectType )
  {
    if ( (unsigned __int8)linkedObjectType >= SCRIPTABLE_LINK_MAX )
    {
      LODWORD(v15) = 4;
      LODWORD(v14) = (unsigned __int8)linkedObjectType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 142, ASSERT_TYPE_ASSERT, "(unsigned)( linkedObjectType ) < (unsigned)( SCRIPTABLE_LINK_MAX )", "linkedObjectType doesn't index SCRIPTABLE_LINK_MAX\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    v10 = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
    if ( v10->linkedObjectType != linkedObjectType || v10->linkedObjectIndex != linkedObjectIndex )
    {
      v11 = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->linkedObjectIndex;
      def = ScriptableSv_GetInstanceCommonContext(scriptableIndex)->def;
      if ( def )
        name = def->name;
      else
        name = "<Unknown>";
      LODWORD(v15) = scriptableIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 180, ASSERT_TYPE_ASSERT, "(ScriptableSv_GetLinkIsSafeToSetTo( scriptableIndex, linkedObjectType, linkedObjectIndex ))", "%s\n\tScriptableSv_SetLink: Scriptable (%i %s) is already linked to (%d).", "ScriptableSv_GetLinkIsSafeToSetTo( scriptableIndex, linkedObjectType, linkedObjectIndex )", v15, name, v11) )
        __debugbreak();
    }
  }
  InstanceCommonContext->linkedObjectIndex = linkedObjectIndex;
  InstanceCommonContext->linkedObjectType = linkedObjectType;
}

/*
==============
ScriptableSv_TryGetIndexForEntity
==============
*/
char ScriptableSv_TryGetIndexForEntity(const gentity_s *const ent, unsigned int *const scriptableIndex)
{
  unsigned int ScriptableIndexForEntity; 
  unsigned int runtimeInstanceCount; 
  unsigned int v6; 
  __int64 v8; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 97, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !scriptableIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 98, ASSERT_TYPE_ASSERT, "( scriptableIndex )", (const char *)&queryFormat, "scriptableIndex") )
    __debugbreak();
  ScriptableIndexForEntity = ScriptableSv_GetScriptableIndexForEntity(ent);
  *scriptableIndex = ScriptableIndexForEntity;
  if ( ScriptableIndexForEntity == -1 )
  {
    if ( ent->handler == 29 )
    {
      LODWORD(v8) = 29;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 109, ASSERT_TYPE_ASSERT, "( ent->handler ) != ( ENT_HANDLER_SCRIPTABLE )", "ent->handler != ENT_HANDLER_SCRIPTABLE\n\t%i, %i", v8, 29) )
        __debugbreak();
    }
    return 0;
  }
  else
  {
    ScriptableCommon_AssertCountsInitialized();
    runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
    if ( ScriptableSv_GetScriptableIndexForEntity(ent) >= runtimeInstanceCount )
    {
      v6 = ScriptableSv_GetScriptableIndexForEntity(ent);
      if ( v6 == -1 || (ScriptableCommon_AssertCountsInitialized(), v6 < g_scriptableWorldCounts.runtimeInstanceCount) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 103, ASSERT_TYPE_ASSERT, "( ScriptableSv_IsReservedScriptableEntity( ent ) || ScriptableSv_IsScriptableMoverEntity( ent ) )", (const char *)&queryFormat, "ScriptableSv_IsReservedScriptableEntity( ent ) || ScriptableSv_IsScriptableMoverEntity( ent )") )
          __debugbreak();
      }
      else
      {
        ScriptableSv_VerifyScriptableMoverEntity(ent);
      }
    }
    if ( !ScriptableSv_IsServerInstance(*scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 104, ASSERT_TYPE_ASSERT, "( ScriptableSv_IsServerInstance( *scriptableIndex ) )", (const char *)&queryFormat, "ScriptableSv_IsServerInstance( *scriptableIndex )") )
      __debugbreak();
    return 1;
  }
}

/*
==============
ScriptableSv_TryGetNonReservedIndexForEntity
==============
*/
char ScriptableSv_TryGetNonReservedIndexForEntity(const gentity_s *const ent, unsigned int *const scriptableIndex)
{
  unsigned int ScriptableIndexForEntity; 
  unsigned int v5; 
  __int64 v7; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 118, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !scriptableIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 119, ASSERT_TYPE_ASSERT, "( scriptableIndex )", (const char *)&queryFormat, "scriptableIndex") )
    __debugbreak();
  ScriptableIndexForEntity = ScriptableSv_GetScriptableIndexForEntity(ent);
  *scriptableIndex = ScriptableIndexForEntity;
  if ( ScriptableIndexForEntity == -1 || (ScriptableCommon_AssertCountsInitialized(), *scriptableIndex < g_scriptableWorldCounts.runtimeInstanceCount) )
  {
    if ( ent->handler == 29 )
    {
      LODWORD(v7) = 29;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 130, ASSERT_TYPE_ASSERT, "( ent->handler ) != ( ENT_HANDLER_SCRIPTABLE )", "ent->handler != ENT_HANDLER_SCRIPTABLE\n\t%i, %i", v7, 29) )
        __debugbreak();
    }
    return 0;
  }
  else
  {
    v5 = ScriptableSv_GetScriptableIndexForEntity(ent);
    if ( v5 == -1 || (ScriptableCommon_AssertCountsInitialized(), v5 < g_scriptableWorldCounts.runtimeInstanceCount) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 124, ASSERT_TYPE_ASSERT, "( ScriptableSv_IsScriptableMoverEntity( ent ) )", (const char *)&queryFormat, "ScriptableSv_IsScriptableMoverEntity( ent )") )
        __debugbreak();
    }
    else
    {
      ScriptableSv_VerifyScriptableMoverEntity(ent);
    }
    if ( !ScriptableSv_IsServerInstance(*scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.cpp", 125, ASSERT_TYPE_ASSERT, "( ScriptableSv_IsServerInstance( *scriptableIndex ) )", (const char *)&queryFormat, "ScriptableSv_IsServerInstance( *scriptableIndex )") )
      __debugbreak();
    return 1;
  }
}

