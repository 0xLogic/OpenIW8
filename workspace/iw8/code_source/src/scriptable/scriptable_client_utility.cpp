/*
==============
ScriptableCl_GetReplicatedInstanceLimit
==============
*/

unsigned int __fastcall ScriptableCl_GetReplicatedInstanceLimit()
{
  return ?ScriptableCl_GetReplicatedInstanceLimit@@YAIXZ();
}

/*
==============
ScriptableCl_GetPartUseHintIcon
==============
*/

const char *__fastcall ScriptableCl_GetPartUseHintIcon(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const unsigned int serverFlatPartId)
{
  return ?ScriptableCl_GetPartUseHintIcon@@YAPEBDW4LocalClientNum_t@@II@Z(localClientNum, scriptableIndex, serverFlatPartId);
}

/*
==============
ScriptableCl_GetBoneTransform
==============
*/

bool __fastcall ScriptableCl_GetBoneTransform(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const scr_string_t tagName, tmat43_t<vec3_t> *outTransform, bool allowMissingTag)
{
  return ?ScriptableCl_GetBoneTransform@@YA_NW4LocalClientNum_t@@IW4scr_string_t@@AEAT?$tmat43_t@Tvec3_t@@@@_N@Z(localClientNum, scriptableIndex, tagName, outTransform, allowMissingTag);
}

/*
==============
ScriptableCl_GetPartIsUsable
==============
*/

bool __fastcall ScriptableCl_GetPartIsUsable(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const unsigned int serverFlatPartId)
{
  return ?ScriptableCl_GetPartIsUsable@@YA_NW4LocalClientNum_t@@II@Z(localClientNum, scriptableIndex, serverFlatPartId);
}

/*
==============
ScriptableCl_GetPartRuntime
==============
*/

ScriptablePartRuntime *__fastcall ScriptableCl_GetPartRuntime(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptablePartDef *partDef)
{
  return ?ScriptableCl_GetPartRuntime@@YAPEAUScriptablePartRuntime@@W4LocalClientNum_t@@IPEBUScriptablePartDef@@@Z(localClientNum, scriptableIndex, partDef);
}

/*
==============
ScriptableCl_DoesTeamMatch
==============
*/

bool __fastcall ScriptableCl_DoesTeamMatch(const LocalClientNum_t localClientNum, unsigned int entityNumIn, Scriptable_TeamFilter filter)
{
  return ?ScriptableCl_DoesTeamMatch@@YA_NW4LocalClientNum_t@@IW4Scriptable_TeamFilter@@@Z(localClientNum, entityNumIn, filter);
}

/*
==============
ScriptableCl_GetLinkType
==============
*/

ScriptableLinkType __fastcall ScriptableCl_GetLinkType(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_GetLinkType@@YA?AW4ScriptableLinkType@@W4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_SetOriginAndAngles
==============
*/

void __fastcall ScriptableCl_SetOriginAndAngles(const LocalClientNum_t localClientNum, unsigned int scriptableIndex, const vec3_t *origin, const vec3_t *angles)
{
  ?ScriptableCl_SetOriginAndAngles@@YAXW4LocalClientNum_t@@IAEBTvec3_t@@1@Z(localClientNum, scriptableIndex, origin, angles);
}

/*
==============
ScriptableCl_SetLink
==============
*/

void __fastcall ScriptableCl_SetLink(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptableLinkType linkedObjectType, const unsigned int linkedObjectIndex)
{
  ?ScriptableCl_SetLink@@YAXW4LocalClientNum_t@@IW4ScriptableLinkType@@I@Z(localClientNum, scriptableIndex, linkedObjectType, linkedObjectIndex);
}

/*
==============
ScriptableCl_GetBoneIndexForDobj
==============
*/

unsigned int __fastcall ScriptableCl_GetBoneIndexForDobj(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const scr_string_t tagName, bool allowMissingTag)
{
  return ?ScriptableCl_GetBoneIndexForDobj@@YAIW4LocalClientNum_t@@IW4scr_string_t@@_N@Z(localClientNum, scriptableIndex, tagName, allowMissingTag);
}

/*
==============
ScriptableCl_ClearError
==============
*/

void ScriptableCl_ClearError(void)
{
  ?ScriptableCl_ClearError@@YAXXZ();
}

/*
==============
ScriptableCl_IsScriptableEntity
==============
*/

int __fastcall ScriptableCl_IsScriptableEntity(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  return ?ScriptableCl_IsScriptableEntity@@YAHW4LocalClientNum_t@@PEBUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
ScriptableCl_IsLinked
==============
*/

int __fastcall ScriptableCl_IsLinked(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_IsLinked@@YAHW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_IsScriptableUsable
==============
*/

bool __fastcall ScriptableCl_IsScriptableUsable(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, unsigned int *const outFirstUsablePartIndex)
{
  return ?ScriptableCl_IsScriptableUsable@@YA_NW4LocalClientNum_t@@IQEAI@Z(localClientNum, scriptableIndex, outFirstUsablePartIndex);
}

/*
==============
ScriptableCl_GetDObj
==============
*/

DObj *__fastcall ScriptableCl_GetDObj(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_GetDObj@@YAPEAUDObj@@W4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_GetInstanceInUse
==============
*/

bool __fastcall ScriptableCl_GetInstanceInUse(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_GetInstanceInUse@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_GetInstanceShouldHaveEntity
==============
*/

bool __fastcall ScriptableCl_GetInstanceShouldHaveEntity(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_GetInstanceShouldHaveEntity@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_HasCollisionSupport
==============
*/

int __fastcall ScriptableCl_HasCollisionSupport(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_HasCollisionSupport@@YAHW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_IsScriptableMoverEntityState
==============
*/

int __fastcall ScriptableCl_IsScriptableMoverEntityState(const entityState_t *es)
{
  return ?ScriptableCl_IsScriptableMoverEntityState@@YAHPEBUentityState_t@@@Z(es);
}

/*
==============
ScriptableCl_GetInstanceAngles
==============
*/

const vec3_t *__fastcall ScriptableCl_GetInstanceAngles(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_GetInstanceAngles@@YAAEBTvec3_t@@W4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_GetInstanceOrigin
==============
*/

void __fastcall ScriptableCl_GetInstanceOrigin(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, vec3_t *outOrigin)
{
  ?ScriptableCl_GetInstanceOrigin@@YAXW4LocalClientNum_t@@IAEATvec3_t@@@Z(localClientNum, scriptableIndex, outOrigin);
}

/*
==============
ScriptableCl_GetCurrentCompositeModel
==============
*/

const XCompositeModelDef *__fastcall ScriptableCl_GetCurrentCompositeModel(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_GetCurrentCompositeModel@@YAPEBUXCompositeModelDef@@W4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_ClearLink
==============
*/

void __fastcall ScriptableCl_ClearLink(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  ?ScriptableCl_ClearLink@@YAXW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_GetPartUseHintString
==============
*/

const char *__fastcall ScriptableCl_GetPartUseHintString(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const unsigned int serverFlatPartId)
{
  return ?ScriptableCl_GetPartUseHintString@@YAPEBDW4LocalClientNum_t@@II@Z(localClientNum, scriptableIndex, serverFlatPartId);
}

/*
==============
ScriptableCl_GetLinkEquals
==============
*/

int __fastcall ScriptableCl_GetLinkEquals(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptableLinkType linkedObjectType, const unsigned int linkedObjectIndex)
{
  return ?ScriptableCl_GetLinkEquals@@YAHW4LocalClientNum_t@@IW4ScriptableLinkType@@I@Z(localClientNum, scriptableIndex, linkedObjectType, linkedObjectIndex);
}

/*
==============
ScriptableCl_ContextToLocalClient
==============
*/

LocalClientNum_t __fastcall ScriptableCl_ContextToLocalClient(const ScriptableContext context)
{
  return ?ScriptableCl_ContextToLocalClient@@YA?AW4LocalClientNum_t@@W4ScriptableContext@@@Z(context);
}

/*
==============
ScriptableCl_IsServerInstance
==============
*/

int __fastcall ScriptableCl_IsServerInstance(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_IsServerInstance@@YAHW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_AssertLinkEquals
==============
*/

void __fastcall ScriptableCl_AssertLinkEquals(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptableLinkType linkedObjectType, const unsigned int linkedObjectIndex)
{
  ?ScriptableCl_AssertLinkEquals@@YAXW4LocalClientNum_t@@IW4ScriptableLinkType@@I@Z(localClientNum, scriptableIndex, linkedObjectType, linkedObjectIndex);
}

/*
==============
ScriptableCl_GetMaxReplicatedPartsCount
==============
*/

unsigned int __fastcall ScriptableCl_GetMaxReplicatedPartsCount()
{
  return ?ScriptableCl_GetMaxReplicatedPartsCount@@YAIXZ();
}

/*
==============
ScriptableCl_IsReservedScriptableEntity
==============
*/

int __fastcall ScriptableCl_IsReservedScriptableEntity(const LocalClientNum_t localClientNum, const unsigned int entityIndex)
{
  return ?ScriptableCl_IsReservedScriptableEntity@@YAHW4LocalClientNum_t@@I@Z(localClientNum, entityIndex);
}

/*
==============
ScriptableCl_GetLinkTypeEquals
==============
*/

int __fastcall ScriptableCl_GetLinkTypeEquals(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptableLinkType linkedObjectType)
{
  return ?ScriptableCl_GetLinkTypeEquals@@YAHW4LocalClientNum_t@@IW4ScriptableLinkType@@@Z(localClientNum, scriptableIndex, linkedObjectType);
}

/*
==============
ScriptableCl_HasShadow
==============
*/

int __fastcall ScriptableCl_HasShadow(const unsigned int scriptableIndex)
{
  return ?ScriptableCl_HasShadow@@YAHI@Z(scriptableIndex);
}

/*
==============
ScriptableCl_IsScriptableMoverEntity
==============
*/

int __fastcall ScriptableCl_IsScriptableMoverEntity(const LocalClientNum_t localClientNum, const unsigned int entityIndex)
{
  return ?ScriptableCl_IsScriptableMoverEntity@@YAHW4LocalClientNum_t@@I@Z(localClientNum, entityIndex);
}

/*
==============
ScriptableCl_GetDObjSafe
==============
*/

bool __fastcall ScriptableCl_GetDObjSafe(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_GetDObjSafe@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_GetCurrentModel
==============
*/

const XModel *__fastcall ScriptableCl_GetCurrentModel(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_GetCurrentModel@@YAPEBUXModel@@W4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_EnterError
==============
*/

void ScriptableCl_EnterError(void)
{
  ?ScriptableCl_EnterError@@YAXXZ();
}

/*
==============
ScriptableCl_GetEntityFromObjectId
==============
*/

centity_t *__fastcall ScriptableCl_GetEntityFromObjectId(const LocalClientNum_t localClientNum, const unsigned int objectId)
{
  return ?ScriptableCl_GetEntityFromObjectId@@YAPEAUcentity_t@@W4LocalClientNum_t@@I@Z(localClientNum, objectId);
}

/*
==============
ScriptableCl_IsCharacterThirdPerson
==============
*/

bool __fastcall ScriptableCl_IsCharacterThirdPerson(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_IsCharacterThirdPerson@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_AssertReservedIndexForEntity
==============
*/

void __fastcall ScriptableCl_AssertReservedIndexForEntity(const LocalClientNum_t localClientNum, const unsigned int entityIndex, const unsigned int expectedInstanceIndex)
{
  ?ScriptableCl_AssertReservedIndexForEntity@@YAXW4LocalClientNum_t@@II@Z(localClientNum, entityIndex, expectedInstanceIndex);
}

/*
==============
ScriptableCl_GetPartUsePosition
==============
*/

void __fastcall ScriptableCl_GetPartUsePosition(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const unsigned int serverFlatPartId, vec3_t *out_usePosition)
{
  ?ScriptableCl_GetPartUsePosition@@YAXW4LocalClientNum_t@@IIAEATvec3_t@@@Z(localClientNum, scriptableIndex, serverFlatPartId, out_usePosition);
}

/*
==============
ScriptableCl_GetBoneIndexForDobj
==============
*/

unsigned int __fastcall ScriptableCl_GetBoneIndexForDobj(const LocalClientNum_t localClientNum, const DObj *obj, const unsigned int scriptableIndex, const scr_string_t tagName, bool allowMissingTag)
{
  return ?ScriptableCl_GetBoneIndexForDobj@@YAIW4LocalClientNum_t@@PEBUDObj@@IW4scr_string_t@@_N@Z(localClientNum, obj, scriptableIndex, tagName, allowMissingTag);
}

/*
==============
ScriptableCl_CanCurrentModelMove
==============
*/

int __fastcall ScriptableCl_CanCurrentModelMove(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_CanCurrentModelMove@@YAHW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_GetInstanceOrientation
==============
*/

void __fastcall ScriptableCl_GetInstanceOrientation(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, vec3_t *outPos, tmat33_t<vec3_t> *outAxis)
{
  ?ScriptableCl_GetInstanceOrientation@@YAXW4LocalClientNum_t@@IAEATvec3_t@@AEAT?$tmat33_t@Tvec3_t@@@@@Z(localClientNum, scriptableIndex, outPos, outAxis);
}

/*
==============
ScriptableCl_GetEntity
==============
*/

centity_t *__fastcall ScriptableCl_GetEntity(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_GetEntity@@YAPEAUcentity_t@@W4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_GetLinkObject
==============
*/

unsigned int __fastcall ScriptableCl_GetLinkObject(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_GetLinkObject@@YAIW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_UpdateTransformParentEntity
==============
*/

void __fastcall ScriptableCl_UpdateTransformParentEntity(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const centity_t *parent, vec3_t *inOutOrigin, vec3_t *inOutAngles)
{
  ?ScriptableCl_UpdateTransformParentEntity@@YAXW4LocalClientNum_t@@IPEBUcentity_t@@AEATvec3_t@@2@Z(localClientNum, scriptableIndex, parent, inOutOrigin, inOutAngles);
}

/*
==============
ScriptableCl_GetTeam
==============
*/

void __fastcall ScriptableCl_GetTeam(const LocalClientNum_t localClientNum, unsigned int entityNumIn, team_t *teamOut, unsigned int *entityNumOut)
{
  ?ScriptableCl_GetTeam@@YAXW4LocalClientNum_t@@IPEAW4team_t@@PEAI@Z(localClientNum, entityNumIn, teamOut, entityNumOut);
}

/*
==============
ScriptableCl_ProcessErrors
==============
*/

void ScriptableCl_ProcessErrors(void)
{
  ?ScriptableCl_ProcessErrors@@YAXXZ();
}

/*
==============
ScriptableCl_GetReservedIndexForEntity
==============
*/

bool __fastcall ScriptableCl_GetReservedIndexForEntity(const LocalClientNum_t localClientNum, const unsigned int entityIndex, unsigned int *outInstanceIndex)
{
  return ?ScriptableCl_GetReservedIndexForEntity@@YA_NW4LocalClientNum_t@@IAEAI@Z(localClientNum, entityIndex, outInstanceIndex);
}

/*
==============
ScriptableCl_IsScriptableEntityByNum
==============
*/

int __fastcall ScriptableCl_IsScriptableEntityByNum(const LocalClientNum_t localClientNum, int entityIndex)
{
  return ?ScriptableCl_IsScriptableEntityByNum@@YAHW4LocalClientNum_t@@H@Z(localClientNum, entityIndex);
}

/*
==============
ScriptableCl_SetInitialOriginAndAngles
==============
*/

void __fastcall ScriptableCl_SetInitialOriginAndAngles(const LocalClientNum_t localClientNum, unsigned int scriptableIndex, const vec3_t *origin, const vec3_t *angles)
{
  ?ScriptableCl_SetInitialOriginAndAngles@@YAXW4LocalClientNum_t@@IAEBTvec3_t@@1@Z(localClientNum, scriptableIndex, origin, angles);
}

/*
==============
ScriptableCl_GetReplicatedLimits
==============
*/

const ScriptableReplicatedLimits *__fastcall ScriptableCl_GetReplicatedLimits()
{
  return ?ScriptableCl_GetReplicatedLimits@@YAAEBUScriptableReplicatedLimits@@XZ();
}

/*
==============
ScriptableCl_CanCurrentModelDynamicallySimulate
==============
*/

int __fastcall ScriptableCl_CanCurrentModelDynamicallySimulate(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_CanCurrentModelDynamicallySimulate@@YAHW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_AllowVehicleCollisionFilter
==============
*/

bool __fastcall ScriptableCl_AllowVehicleCollisionFilter(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_AllowVehicleCollisionFilter@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_GetIndexForEntity
==============
*/

bool __fastcall ScriptableCl_GetIndexForEntity(const LocalClientNum_t localClientNum, const centity_t *cent, unsigned int *scriptableIndex)
{
  return ?ScriptableCl_GetIndexForEntity@@YA_NW4LocalClientNum_t@@PEBUcentity_t@@PEAI@Z(localClientNum, cent, scriptableIndex);
}

/*
==============
ScriptableCl_GetBonePosition
==============
*/

bool __fastcall ScriptableCl_GetBonePosition(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const scr_string_t tagName, vec3_t *outPosition, bool allowMissingTag)
{
  return ?ScriptableCl_GetBonePosition@@YA_NW4LocalClientNum_t@@IW4scr_string_t@@AEATvec3_t@@_N@Z(localClientNum, scriptableIndex, tagName, outPosition, allowMissingTag);
}

/*
==============
ScriptableCL_GetViewmodelDObjHandle
==============
*/

unsigned int __fastcall ScriptableCL_GetViewmodelDObjHandle(const PlayerHandIndex hand)
{
  return ?ScriptableCL_GetViewmodelDObjHandle@@YAIW4PlayerHandIndex@@@Z(hand);
}

/*
==============
ScriptableCl_GetInstanceIsInitialized
==============
*/

bool __fastcall ScriptableCl_GetInstanceIsInitialized(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ?ScriptableCl_GetInstanceIsInitialized@@YA_NW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_LocalClientToContext
==============
*/

ScriptableContext __fastcall ScriptableCl_LocalClientToContext(const LocalClientNum_t localClientNum)
{
  return ?ScriptableCl_LocalClientToContext@@YA?AW4ScriptableContext@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCL_GetViewmodelDObjHandle
==============
*/
__int64 ScriptableCL_GetViewmodelDObjHandle(const PlayerHandIndex hand)
{
  return (unsigned int)(hand + 2048);
}

/*
==============
ScriptableCl_AllowVehicleCollisionFilter
==============
*/
bool ScriptableCl_AllowVehicleCollisionFilter(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  const ScriptableDef *def; 

  def = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 415, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  return (def->flags & 0x400000) != 0;
}

/*
==============
ScriptableCl_AssertLinkEquals
==============
*/
void ScriptableCl_AssertLinkEquals(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptableLinkType linkedObjectType, const unsigned int linkedObjectIndex)
{
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  ScriptableLinkType v9; 
  __int64 v10; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  __int64 v16; 
  int v17; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v13 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 249, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v13) )
      __debugbreak();
  }
  if ( (unsigned __int8)linkedObjectType >= SCRIPTABLE_LINK_MAX )
  {
    LODWORD(v12) = 4;
    LODWORD(v10) = (unsigned __int8)linkedObjectType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 250, ASSERT_TYPE_ASSERT, "(unsigned)( linkedObjectType ) < (unsigned)( SCRIPTABLE_LINK_MAX )", "linkedObjectType doesn't index SCRIPTABLE_LINK_MAX\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  v9 = InstanceCommonContext->linkedObjectType;
  if ( v9 != linkedObjectType )
  {
    v17 = (unsigned __int8)linkedObjectType;
    v15 = (unsigned __int8)v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 253, ASSERT_TYPE_ASSERT, "( context.linkedObjectType ) == ( linkedObjectType )", "%s == %s\n\t%i, %i", "context.linkedObjectType", "linkedObjectType", v15, v17) )
      __debugbreak();
  }
  if ( InstanceCommonContext->linkedObjectIndex != linkedObjectIndex )
  {
    LODWORD(v16) = linkedObjectIndex;
    LODWORD(v14) = InstanceCommonContext->linkedObjectIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 254, ASSERT_TYPE_ASSERT, "( context.linkedObjectIndex ) == ( linkedObjectIndex )", "%s == %s\n\t%i, %i", "context.linkedObjectIndex", "linkedObjectIndex", v14, v16) )
      __debugbreak();
  }
  if ( !ScriptableCl_GetLinkEquals(localClientNum, scriptableIndex, linkedObjectType, linkedObjectIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 255, ASSERT_TYPE_ASSERT, "( ScriptableCl_GetLinkEquals( localClientNum, scriptableIndex, linkedObjectType, linkedObjectIndex ) )", "The internals succeeded, the actual function should succeed too") )
    __debugbreak();
}

/*
==============
ScriptableCl_AssertReservedIndexForEntity
==============
*/
void ScriptableCl_AssertReservedIndexForEntity(const LocalClientNum_t localClientNum, const unsigned int entityIndex, const unsigned int expectedInstanceIndex)
{
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  unsigned int v7; 
  unsigned int *v8; 
  unsigned int v9; 
  bool v10; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  unsigned int v16; 

  v3 = entityIndex;
  v5 = localClientNum;
  if ( entityIndex >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 384, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entityIndex, 2048) )
    __debugbreak();
  v6 = v3 + (v5 << 11);
  v7 = g_scriptableClEntityLinkMap[0][v6];
  v8 = &g_scriptableClEntityLinkMap[0][v6];
  if ( v7 )
  {
    v9 = v7 - 1;
    ScriptableCommon_AssertCountsInitialized();
    if ( v9 < g_scriptableWorldCounts.runtimeInstanceCount )
    {
      if ( v9 != expectedInstanceIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 394, ASSERT_TYPE_ASSERT, "( scriptableIdx ) == ( expectedInstanceIndex )", "%s == %s\n\t%i, %i", "scriptableIdx", "expectedInstanceIndex", v9, expectedInstanceIndex) )
        __debugbreak();
      ScriptableCl_AssertLinkEquals((const LocalClientNum_t)v5, v9, SCRIPTABLE_LINK_ENTITY, v3);
      goto LABEL_14;
    }
    LODWORD(v12) = v9;
    v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 399, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Entity has invalid scriptable index %u", v12);
  }
  else
  {
    v10 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 404, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Entity not linked to a scriptable");
  }
  if ( v10 )
    __debugbreak();
LABEL_14:
  if ( (unsigned int)v3 >= 0x800 )
  {
    LODWORD(v13) = 2048;
    LODWORD(v12) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 358, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  if ( *v8 && (v11 = *v8 - 1, ScriptableCommon_AssertCountsInitialized(), v11 < g_scriptableWorldCounts.runtimeInstanceCount) )
  {
    ScriptableCl_AssertLinkEquals((const LocalClientNum_t)v5, v11, SCRIPTABLE_LINK_ENTITY, v3);
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 408, ASSERT_TYPE_ASSERT, "( ScriptableCl_GetReservedIndexForEntity( localClientNum, entityIndex, outInstanceIndex ) )", "The internals succeeded, the actual function should succeed too") )
      __debugbreak();
    v11 = v16;
  }
  if ( v11 != expectedInstanceIndex )
  {
    LODWORD(v15) = expectedInstanceIndex;
    LODWORD(v14) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 409, ASSERT_TYPE_ASSERT, "( outInstanceIndex ) == ( expectedInstanceIndex )", "%s == %s\n\t%i, %i", "outInstanceIndex", "expectedInstanceIndex", v14, v15) )
      __debugbreak();
  }
}

/*
==============
ScriptableCl_CanCurrentModelDynamicallySimulate
==============
*/
__int64 ScriptableCl_CanCurrentModelDynamicallySimulate(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return *((unsigned __int8 *)ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex) + 60) >> 7;
}

/*
==============
ScriptableCl_CanCurrentModelMove
==============
*/
_BOOL8 ScriptableCl_CanCurrentModelMove(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return (*((_BYTE *)ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex) + 60) & 0x40) == 0;
}

/*
==============
ScriptableCl_ClearError
==============
*/
void ScriptableCl_ClearError(void)
{
  s_scriptableClErrorEntered = 0;
}

/*
==============
ScriptableCl_ClearLink
==============
*/
void ScriptableCl_ClearLink(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  __int64 v2; 
  const ScriptableDef *def; 
  const char *v5; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  ScriptableInstanceContextSecure *v7; 
  unsigned int linkedObjectIndex; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 333, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS )", "localClientNum doesn't index SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( *(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1664i64) )
  {
    def = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v2, scriptableIndex)->def;
    v5 = def ? def->name : "<unknown>";
    LODWORD(v11) = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 335, ASSERT_TYPE_ASSERT, "( !CG_EntityWorkers_IsProcessingEntityWorker() )", "ScriptableCl_ClearLink: Scriptable (%i %s) should not be updating links on entity workers", v11, v5) )
      __debugbreak();
  }
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v2, scriptableIndex);
  v7 = InstanceCommonContext;
  if ( InstanceCommonContext->linkedObjectType == SCRIPTABLE_LINK_ENTITY )
  {
    linkedObjectIndex = InstanceCommonContext->linkedObjectIndex;
    if ( linkedObjectIndex >= 0x800 )
    {
      LODWORD(v12) = 2048;
      LODWORD(v11) = linkedObjectIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 343, ASSERT_TYPE_ASSERT, "(unsigned)( r_context.linkedObjectIndex ) < (unsigned)( ( sizeof( *array_counter( g_scriptableClEntityLinkMap[localClientNum] ) ) + 0 ) )", "r_context.linkedObjectIndex doesn't index g_scriptableClEntityLinkMap[localClientNum]\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    v9 = v2 << 11;
    v10 = scriptableIndex + 1;
    if ( g_scriptableClEntityLinkMap[0][v9 + v7->linkedObjectIndex] != v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 344, ASSERT_TYPE_ASSERT, "( g_scriptableClEntityLinkMap[localClientNum][r_context.linkedObjectIndex] ) == ( ENTITY_LINK_MAP_SCRIPTABLE_OFFSET + scriptableIndex )", "%s == %s\n\t%i, %i", "g_scriptableClEntityLinkMap[localClientNum][r_context.linkedObjectIndex]", "ENTITY_LINK_MAP_SCRIPTABLE_OFFSET + scriptableIndex", g_scriptableClEntityLinkMap[0][v9 + v7->linkedObjectIndex], v10) )
      __debugbreak();
    g_scriptableClEntityLinkMap[0][v9 + v7->linkedObjectIndex] = 0;
    v7->linkedObjectType = SCRIPTABLE_LINK_NONE;
    v7->linkedObjectIndex = 0;
  }
  else
  {
    InstanceCommonContext->linkedObjectIndex = 0;
    InstanceCommonContext->linkedObjectType = SCRIPTABLE_LINK_NONE;
  }
}

/*
==============
ScriptableCl_ContextToLocalClient
==============
*/
__int64 ScriptableCl_ContextToLocalClient(const ScriptableContext context)
{
  if ( context >= SBL_CONTEXT_CLIENT_0 )
    return (unsigned int)(context - 1);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 107, ASSERT_TYPE_ASSERT, "(context >= SBL_CONTEXT_CLIENT_0)", (const char *)&queryFormat, "context >= SBL_CONTEXT_CLIENT_0") )
    __debugbreak();
  return (unsigned int)(context - 1);
}

/*
==============
ScriptableCl_DoesTeamMatch
==============
*/
char ScriptableCl_DoesTeamMatch(const LocalClientNum_t localClientNum, unsigned int entityNumIn, Scriptable_TeamFilter filter)
{
  cg_t *LocalClientGlobals; 
  CgHandler *Handler; 
  CgHandler *v8; 
  int clientNum; 
  bool v10; 
  team_t outTeam[14]; 
  int v14; 
  int v15; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 1243, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  Handler = CgHandler::getHandler(localClientNum);
  if ( !Handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 1233, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  Handler->GetEntityTeam(Handler, (team_t *)&v14, entityNumIn, (unsigned int *)&v15);
  v8 = CgHandler::getHandler(localClientNum);
  CgHandler::GetPlayerTeam(v8, LocalClientGlobals->predictedPlayerState.clientNum, outTeam);
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  v10 = outTeam[0] == TEAM_ZERO || !v14;
  switch ( filter )
  {
    case Scriptable_Team_Filter_Bad:
      return v14 == 0;
    case Scriptable_Team_Filter_Axis:
      return v14 == 1;
    case Scriptable_Team_Filter_Allies:
      return v14 == 2;
    case Scriptable_Team_Filter_Three:
      return v14 == 3;
    case Scriptable_Team_Filter_Neutral:
      return v14 == (Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? 4 : 0);
    case Scriptable_Team_Filter_Dead:
      return v14 == (Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? 5 : 0);
    case Scriptable_Team_Filter_My_Team:
      if ( v10 )
        return v15 == clientNum;
      return v14 == outTeam[0];
    case Scriptable_Team_Filter_Enemy_Team:
      if ( v10 )
        return v15 != clientNum && v14 != (Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? 4 : 0);
      return v14 != outTeam[0] && v14 != (Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? 4 : 0);
    case Scriptable_Team_Filter_All_But_My_Team:
      if ( v10 )
        return v15 != clientNum;
      else
        return v14 != outTeam[0];
    case Scriptable_Team_Filter_All_But_Enemy_Team:
      if ( v10 )
      {
        if ( v15 == clientNum )
          return 1;
        return v14 == (Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? 4 : 0);
      }
      if ( v14 != outTeam[0] )
        return v14 == (Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? 4 : 0);
      return 1;
    case Scriptable_Team_Filter_Enemy_Team_And_Me:
      if ( v10 )
        return v14 != (Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? 4 : 0);
      if ( v14 != outTeam[0] && v14 != (Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) ? 4 : 0) )
        return 1;
      return v15 == clientNum;
    case Scriptable_Team_Filter_Just_Me:
      return v15 == clientNum;
    default:
      return 0;
  }
}

/*
==============
ScriptableCl_EnterError
==============
*/
void ScriptableCl_EnterError(void)
{
  s_scriptableClErrorEntered = 1;
}

/*
==============
ScriptableCl_GetBoneIndexForDobj
==============
*/
unsigned int ScriptableCl_GetBoneIndexForDobj(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const scr_string_t tagName, bool allowMissingTag)
{
  const DObj *DObj; 

  if ( !ScriptableCl_GetDObjSafe(localClientNum, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 706, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex )") )
    __debugbreak();
  DObj = ScriptableCl_GetDObj(localClientNum, scriptableIndex);
  return ScriptableCl_GetBoneIndexForDobj(localClientNum, DObj, scriptableIndex, tagName, allowMissingTag);
}

/*
==============
ScriptableCl_GetBoneIndexForDobj
==============
*/
__int64 ScriptableCl_GetBoneIndexForDobj(const LocalClientNum_t localClientNum, const DObj *obj, const unsigned int scriptableIndex, const scr_string_t tagName, bool allowMissingTag)
{
  const char *v9; 
  const char *v10; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const char *name; 
  const char *v14; 
  ScriptableInstanceContextSecure *v15; 
  const char *v16; 
  int modelIndex[6]; 
  unsigned __int8 inOutIndex; 

  if ( obj && obj->numModels && *obj->models )
  {
    inOutIndex = -2;
    if ( DObjGetBoneIndexInternal_23(obj, tagName, &inOutIndex, modelIndex) || allowMissingTag )
      return inOutIndex;
    v9 = **(const char ***)obj->models;
    v10 = SL_ConvertToString(tagName);
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    if ( InstanceCommonContext->def )
      name = InstanceCommonContext->def->name;
    else
      name = "<unknown>";
    Com_PrintWarning(14, "Scriptable %s tried to find bone %s in model %s and failed\n", name, v10, v9);
  }
  else
  {
    v14 = SL_ConvertToString(tagName);
    v15 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    if ( v15->def )
      v16 = v15->def->name;
    else
      v16 = "<unknown>";
    Com_PrintWarning(14, "Scriptable %s tried to find bone %s but failed because there was no model\n", v16, v14);
  }
  return 255i64;
}

/*
==============
ScriptableCl_GetBonePosition
==============
*/
bool ScriptableCl_GetBonePosition(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const scr_string_t tagName, vec3_t *outPosition, bool allowMissingTag)
{
  ScriptableLinkType LinkType; 
  unsigned int linkedObjectIndex; 
  const cpose_t *Pose; 
  ScriptableInstanceContextSecure *v13; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const char *name; 
  unsigned __int8 BoneIdx; 
  const char *v17; 
  centity_t *EntityFromObjectId; 
  vec4_t outOrientationAsQuat; 

  LinkType = ScriptableCl_GetLinkType(localClientNum, scriptableIndex);
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 228, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  linkedObjectIndex = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->linkedObjectIndex;
  if ( LinkType == SCRIPTABLE_LINK_ENTITY )
  {
    EntityFromObjectId = ScriptableCl_GetEntityFromObjectId(localClientNum, linkedObjectIndex);
    return ScriptableCl_GetBonePositionFromDobj(localClientNum, scriptableIndex, tagName, allowMissingTag, &EntityFromObjectId->pose, outPosition);
  }
  if ( LinkType == SCRIPTABLE_LINK_DYNENT )
  {
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    if ( InstanceCommonContext->def )
      name = InstanceCommonContext->def->name;
    else
      name = "<unknown>";
    BoneIdx = DynEnt_GetBoneIdx(localClientNum, linkedObjectIndex, tagName, name);
    if ( BoneIdx != 0xFF )
    {
      DynEnt_GetBoneTransform(localClientNum, linkedObjectIndex, BoneIdx, outPosition, &outOrientationAsQuat);
      return 1;
    }
    if ( !allowMissingTag )
    {
      v17 = SL_ConvertToString(tagName);
      Com_PrintWarning(14, "Scriptable %s tried to find bone %s in a dynent and failed.  Should you turn on allowMissingTag?\n", name, v17);
    }
    return 0;
  }
  if ( LinkType != SCRIPTABLE_LINK_CLIENTMODEL )
    return 0;
  if ( !CG_ClientModel_IsInitialized(localClientNum, linkedObjectIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 793, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsInitialized( localClientNum, linkedObject ))", (const char *)&queryFormat, "CG_ClientModel_IsInitialized( localClientNum, linkedObject )") )
    __debugbreak();
  Pose = CG_ClientModel_GetPose(localClientNum, linkedObjectIndex);
  if ( !ScriptableCl_GetDObjSafe(localClientNum, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 797, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex )") )
    __debugbreak();
  if ( ScriptableCl_GetDObj(localClientNum, scriptableIndex) )
    return ScriptableCl_GetBonePositionFromDobj(localClientNum, scriptableIndex, tagName, allowMissingTag, Pose, outPosition);
  v13 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  ScriptableInstanceContextSecure::GetOrigin(v13, scriptableIndex, outPosition);
  return 1;
}

/*
==============
ScriptableCl_GetBonePositionFromDobj
==============
*/
char ScriptableCl_GetBonePositionFromDobj(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const scr_string_t tagName, bool allowMissingTag, const cpose_t *objPose, vec3_t *outPosition)
{
  DObj *DObj; 
  unsigned __int8 BoneIndexForDobj; 
  const char **v12; 
  const char *v13; 
  const char *v14; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const char *name; 
  const char *v18; 
  ScriptableInstanceContextSecure *v19; 
  const char *v20; 
  tmat33_t<vec3_t> outTagMat; 

  if ( !ScriptableCl_GetDObjSafe(localClientNum, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 715, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex )") )
    __debugbreak();
  DObj = ScriptableCl_GetDObj(localClientNum, scriptableIndex);
  BoneIndexForDobj = ScriptableCl_GetBoneIndexForDobj(localClientNum, DObj, scriptableIndex, tagName, allowMissingTag);
  if ( BoneIndexForDobj == 0xFE )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 720, ASSERT_TYPE_ASSERT, "(boneIndex != 254)", (const char *)&queryFormat, "boneIndex != UNDEFINED_BONEINDEX") )
      __debugbreak();
  }
  else if ( BoneIndexForDobj == 0xFF )
  {
    if ( !allowMissingTag )
    {
      if ( DObj )
      {
        if ( DObj->numModels )
        {
          v12 = (const char **)*DObj->models;
          if ( v12 )
          {
            v13 = *v12;
            v14 = SL_ConvertToString(tagName);
            InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
            if ( InstanceCommonContext->def )
              name = InstanceCommonContext->def->name;
            else
              name = "<unknown>";
            Com_PrintWarning(14, "Scriptable %s tried to find bone %s in a dobj using model %s and failed.  Should you turn on allowMissingTag?\n", name, v14, v13);
            return 0;
          }
        }
      }
      v18 = SL_ConvertToString(tagName);
      v19 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
      if ( v19->def )
        v20 = v19->def->name;
      else
        v20 = "<unknown>";
      Com_PrintWarning(14, "Scriptable %s tried to find bone %s in a dobj with no models and failed.  Should you turn on allowMissingTag?\n", v20, v18);
    }
    return 0;
  }
  if ( !CG_DObjGetWorldBoneMatrix(objPose, DObj, BoneIndexForDobj, &outTagMat, outPosition) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 743, ASSERT_TYPE_ASSERT, "(CG_DObjGetWorldBoneMatrix( objPose, obj, boneIndex, worldBoneMat, outPosition ))", (const char *)&queryFormat, "CG_DObjGetWorldBoneMatrix( objPose, obj, boneIndex, worldBoneMat, outPosition )") )
    __debugbreak();
  return 1;
}

/*
==============
ScriptableCl_GetBoneTransform
==============
*/
char ScriptableCl_GetBoneTransform(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const scr_string_t tagName, tmat43_t<vec3_t> *outTransform, bool allowMissingTag)
{
  ScriptableLinkType LinkType; 
  unsigned int linkedObjectIndex; 
  centity_t *Pose; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const char *name; 
  unsigned __int8 BoneIdx; 
  const char *v15; 
  vec4_t outOrientationAsQuat; 

  LinkType = ScriptableCl_GetLinkType(localClientNum, scriptableIndex);
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 228, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  linkedObjectIndex = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->linkedObjectIndex;
  if ( LinkType != SCRIPTABLE_LINK_ENTITY )
  {
    if ( LinkType == SCRIPTABLE_LINK_DYNENT )
    {
      InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
      if ( InstanceCommonContext->def )
        name = InstanceCommonContext->def->name;
      else
        name = "<unknown>";
      BoneIdx = DynEnt_GetBoneIdx(localClientNum, linkedObjectIndex, tagName, name);
      if ( BoneIdx != 0xFF )
      {
        DynEnt_GetBoneTransform(localClientNum, linkedObjectIndex, BoneIdx, &outTransform->m[3], &outOrientationAsQuat);
        QuatToAxis(&outOrientationAsQuat, (tmat33_t<vec3_t> *)outTransform);
        return 1;
      }
      if ( !allowMissingTag )
      {
        v15 = SL_ConvertToString(tagName);
        Com_PrintWarning(14, "Scriptable %s tried to find bone %s in a dynent and failed.  Should you turn on allowMissingTag?\n", name, v15);
      }
    }
    else if ( LinkType == SCRIPTABLE_LINK_CLIENTMODEL )
    {
      if ( !CG_ClientModel_IsInitialized(localClientNum, linkedObjectIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 893, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsInitialized( localClientNum, linkedObject ))", (const char *)&queryFormat, "CG_ClientModel_IsInitialized( localClientNum, linkedObject )") )
        __debugbreak();
      Pose = (centity_t *)CG_ClientModel_GetPose(localClientNum, linkedObjectIndex);
      return ScriptableCl_GetBoneTransformFromDobj(localClientNum, scriptableIndex, tagName, &Pose->pose, allowMissingTag, outTransform);
    }
    return 0;
  }
  Pose = ScriptableCl_GetEntityFromObjectId(localClientNum, linkedObjectIndex);
  return ScriptableCl_GetBoneTransformFromDobj(localClientNum, scriptableIndex, tagName, &Pose->pose, allowMissingTag, outTransform);
}

/*
==============
ScriptableCl_GetBoneTransformFromDobj
==============
*/
char ScriptableCl_GetBoneTransformFromDobj(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const scr_string_t tagName, const cpose_t *pose, bool allowMissingTag, tmat43_t<vec3_t> *outTransform)
{
  DObj *DObj; 
  unsigned __int8 BoneIndexForDobj; 
  const char ***models; 
  const char *v14; 
  const char *v15; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const char *name; 
  const char *v18; 
  ScriptableInstanceContextSecure *v19; 
  const char *v20; 

  if ( !ScriptableCl_GetDObjSafe(localClientNum, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 819, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetDObjSafe( localClientNum, scriptableIndex )") )
    __debugbreak();
  DObj = ScriptableCl_GetDObj(localClientNum, scriptableIndex);
  BoneIndexForDobj = ScriptableCl_GetBoneIndexForDobj(localClientNum, DObj, scriptableIndex, tagName, allowMissingTag);
  if ( BoneIndexForDobj == 0xFE )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 824, ASSERT_TYPE_ASSERT, "(boneIndex != 254)", (const char *)&queryFormat, "boneIndex != UNDEFINED_BONEINDEX") )
      __debugbreak();
  }
  else if ( BoneIndexForDobj == 0xFF )
  {
    if ( !allowMissingTag )
    {
      if ( DObj )
      {
        if ( DObj->numModels )
        {
          models = (const char ***)DObj->models;
          if ( *models )
          {
            v14 = **models;
            v15 = SL_ConvertToString(tagName);
            InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
            if ( InstanceCommonContext->def )
              name = InstanceCommonContext->def->name;
            else
              name = "<unknown>";
            Com_PrintWarning(14, "Scriptable %s tried to find bone %s in a dobj using model %s and failed.  Should you turn on allowMissingTag?\n", name, v15, v14);
            return 0;
          }
        }
      }
      v18 = SL_ConvertToString(tagName);
      v19 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
      if ( v19->def )
        v20 = v19->def->name;
      else
        v20 = "<unknown>";
      Com_PrintWarning(14, "Scriptable %s tried to find bone %s in a dobj with no models and failed.  Should you turn on allowMissingTag?\n", v20, v18);
    }
    return 0;
  }
  if ( !CG_DObjGetWorldBoneMatrix(pose, DObj, BoneIndexForDobj, (tmat33_t<vec3_t> *)outTransform, &outTransform->m[3]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 844, ASSERT_TYPE_ASSERT, "(CG_DObjGetWorldBoneMatrix( pose, obj, boneIndex, leading_submatrix<mat33_t>( outTransform ), outTransform[3] ))", (const char *)&queryFormat, "CG_DObjGetWorldBoneMatrix( pose, obj, boneIndex, leading_submatrix<mat33_t>( outTransform ), outTransform[3] )") )
    __debugbreak();
  return 1;
}

/*
==============
ScriptableCl_GetCurrentCompositeModel
==============
*/
const XCompositeModelDef *ScriptableCl_GetCurrentCompositeModel(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  ScriptableInstanceContextSecure *InstanceCommonContext; 

  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  if ( InstanceCommonContext->dataType == SCRIPTABLE_DATA_TYPE_XMODEL )
    return 0i64;
  else
    return InstanceCommonContext->data.compositeModel;
}

/*
==============
ScriptableCl_GetCurrentModel
==============
*/
const XModel *ScriptableCl_GetCurrentModel(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  ScriptableInstanceContextSecure *InstanceCommonContext; 

  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  if ( InstanceCommonContext->dataType == SCRIPTABLE_DATA_TYPE_XCOMPOSITEMODEL )
    return 0i64;
  else
    return InstanceCommonContext->data.model;
}

/*
==============
ScriptableCl_GetDObj
==============
*/
DObj *ScriptableCl_GetDObj(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  ScriptableLinkType LinkType; 
  unsigned int linkedObjectIndex; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 v9; 
  LocalClientNum_t v10; 
  __int64 v11; 
  int v12; 

  LinkType = ScriptableCl_GetLinkType(localClientNum, scriptableIndex);
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v12 = 2;
    v10 = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 228, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  linkedObjectIndex = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->linkedObjectIndex;
  if ( LinkType != SCRIPTABLE_LINK_ENTITY )
  {
    if ( LinkType != SCRIPTABLE_LINK_DYNENT && LinkType == SCRIPTABLE_LINK_CLIENTMODEL )
    {
      if ( !CG_ClientModel_IsInitialized(localClientNum, linkedObjectIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 521, ASSERT_TYPE_ASSERT, "(CG_ClientModel_IsInitialized( localClientNum, objectId ))", (const char *)&queryFormat, "CG_ClientModel_IsInitialized( localClientNum, objectId )") )
        __debugbreak();
      return CG_ClientModel_GetDObj(localClientNum, linkedObjectIndex);
    }
    return 0i64;
  }
  if ( linkedObjectIndex >= 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 517, ASSERT_TYPE_ASSERT, "(objectId < ( 2048 ) && objectId != ENTITYNUM_NONE)", (const char *)&queryFormat, "objectId < MAX_GENTITIES && objectId != ENTITYNUM_NONE") )
    __debugbreak();
  if ( linkedObjectIndex > 0x9E4 )
  {
    LODWORD(v11) = linkedObjectIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v11) )
      __debugbreak();
  }
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v11) = 2;
    LODWORD(v9) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v9, v11) )
      __debugbreak();
  }
  v7 = linkedObjectIndex + 2533 * localClientNum;
  if ( v7 >= 0x13CA )
  {
    LODWORD(v11) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v11) )
      __debugbreak();
  }
  v8 = clientObjMap[v7];
  if ( !v8 )
    return 0i64;
  if ( v8 >= (unsigned int)s_objCount )
  {
    LODWORD(v11) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v11) )
      __debugbreak();
  }
  return (DObj *)s_objBuf[v8];
}

/*
==============
ScriptableCl_GetDObjSafe
==============
*/
bool ScriptableCl_GetDObjSafe(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  ScriptableLinkType LinkType; 
  unsigned int linkedObjectIndex; 
  LocalClientNum_t v7; 
  int v8; 

  LinkType = ScriptableCl_GetLinkType(localClientNum, scriptableIndex);
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    v7 = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 228, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  linkedObjectIndex = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->linkedObjectIndex;
  if ( LinkType == SCRIPTABLE_LINK_ENTITY )
    return linkedObjectIndex <= 0x7FE;
  if ( LinkType == SCRIPTABLE_LINK_DYNENT || LinkType != SCRIPTABLE_LINK_CLIENTMODEL )
    return 0;
  return CG_ClientModel_IsInitialized(localClientNum, linkedObjectIndex);
}

/*
==============
ScriptableCl_GetEntity
==============
*/
centity_t *ScriptableCl_GetEntity(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  unsigned int LinkObject; 
  int v7; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v7 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 262, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v7) )
      __debugbreak();
  }
  if ( ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->linkedObjectType != SCRIPTABLE_LINK_ENTITY )
    return 0i64;
  LinkObject = ScriptableCl_GetLinkObject(localClientNum, scriptableIndex);
  return ScriptableCl_GetEntityFromObjectId(localClientNum, LinkObject);
}

/*
==============
ScriptableCl_GetEntityFromObjectId
==============
*/
centity_t *ScriptableCl_GetEntityFromObjectId(const LocalClientNum_t localClientNum, const unsigned int objectId)
{
  __int64 v2; 
  CgEntitySystem *EntitySystem; 
  __int64 v6; 

  v2 = (int)objectId;
  if ( objectId >= 0x7FF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 455, ASSERT_TYPE_ASSERT, "(objectId < ( 2048 ) && objectId != ENTITYNUM_NONE)", (const char *)&queryFormat, "objectId < MAX_GENTITIES && objectId != ENTITYNUM_NONE") )
    __debugbreak();
  EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
  if ( !EntitySystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 459, ASSERT_TYPE_ASSERT, "(cgEntSystem)", (const char *)&queryFormat, "cgEntSystem") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x800 )
  {
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v6, 2048) )
      __debugbreak();
  }
  return &EntitySystem->m_entities[v2];
}

/*
==============
ScriptableCl_GetIndexForEntity
==============
*/
char ScriptableCl_GetIndexForEntity(const LocalClientNum_t localClientNum, const centity_t *cent, unsigned int *scriptableIndex)
{
  int IsReservedScriptableEntity; 
  unsigned int number; 
  bool ReservedIndexForEntity; 
  __int64 v10; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 418, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !scriptableIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 419, ASSERT_TYPE_ASSERT, "(scriptableIndex)", (const char *)&queryFormat, "scriptableIndex") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 )
  {
    Com_PrintWarning(14, "ScriptableCl_GetIndexForEntity: Invalid next state on cent when trying to get index with local client [%d].\n", (unsigned int)localClientNum);
    return 0;
  }
  IsReservedScriptableEntity = ScriptableCl_IsReservedScriptableEntity(localClientNum, cent->nextState.number);
  number = cent->nextState.number;
  if ( IsReservedScriptableEntity )
  {
    ReservedIndexForEntity = ScriptableCl_GetReservedIndexForEntity(localClientNum, number, scriptableIndex);
    if ( !ReservedIndexForEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 432, ASSERT_TYPE_ASSERT, "(success)", "%s\n\tScriptableCl_IsReservedScriptableEntity should have failed if the index is not valid", "success") )
      __debugbreak();
    ScriptableCommon_AssertCountsInitialized();
    if ( *scriptableIndex >= g_scriptableWorldCounts.runtimeInstanceCount )
    {
      ScriptableCommon_AssertCountsInitialized();
      LODWORD(v10) = *scriptableIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 433, ASSERT_TYPE_ASSERT, "(unsigned)( (*scriptableIndex) ) < (unsigned)( ScriptableCommon_GetReservedInstanceCount() )", "(*scriptableIndex) doesn't index ScriptableCommon_GetReservedInstanceCount()\n\t%i not in [0, %i)", v10, g_scriptableWorldCounts.runtimeInstanceCount) )
        __debugbreak();
    }
    return ReservedIndexForEntity;
  }
  else
  {
    if ( !ScriptableCl_IsScriptableMoverEntity(localClientNum, number) )
    {
      *scriptableIndex = 500000;
      return 0;
    }
    *scriptableIndex = cent->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId - 1;
    ScriptableCommon_AssertCountsInitialized();
    if ( *scriptableIndex < g_scriptableWorldCounts.runtimeInstanceCount )
    {
      ScriptableCommon_AssertCountsInitialized();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 440, ASSERT_TYPE_ASSERT, "( ( *scriptableIndex ) ) >= ( ScriptableCommon_GetReservedInstanceCount() )", "%s >= %s\n\t%i, %i", "( *scriptableIndex )", "ScriptableCommon_GetReservedInstanceCount()", *scriptableIndex, g_scriptableWorldCounts.runtimeInstanceCount) )
        __debugbreak();
    }
    return 1;
  }
}

/*
==============
ScriptableCl_GetInstanceAngles
==============
*/
vec3_t *ScriptableCl_GetInstanceAngles(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return &ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->angles;
}

/*
==============
ScriptableCl_GetInstanceInUse
==============
*/
bool ScriptableCl_GetInstanceInUse(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def != NULL;
}

/*
==============
ScriptableCl_GetInstanceIsInitialized
==============
*/
bool ScriptableCl_GetInstanceIsInitialized(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return (*((_BYTE *)ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex) + 60) & 4) != 0;
}

/*
==============
ScriptableCl_GetInstanceOrientation
==============
*/
void ScriptableCl_GetInstanceOrientation(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, vec3_t *outPos, tmat33_t<vec3_t> *outAxis)
{
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  vec3_t angles; 

  if ( ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def )
  {
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, outPos);
    _RAX = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    __asm
    {
      vmovsd  xmm0, qword ptr [rax+2Ch]
      vmovsd  qword ptr [rsp+68h+angles], xmm0
    }
    angles.v[2] = _RAX->angles.v[2];
    AnglesToAxis(&angles, outAxis);
  }
  else
  {
    *(_QWORD *)outPos->v = 0i64;
    outPos->v[2] = 0.0;
    MatrixIdentity33(outAxis);
  }
}

/*
==============
ScriptableCl_GetInstanceOrigin
==============
*/
void ScriptableCl_GetInstanceOrigin(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, vec3_t *outOrigin)
{
  ScriptableInstanceContextSecure *InstanceCommonContext; 

  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, outOrigin);
}

/*
==============
ScriptableCl_GetInstanceShouldHaveEntity
==============
*/
bool ScriptableCl_GetInstanceShouldHaveEntity(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  const ScriptableDef *def; 

  def = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 363, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  return (def->flags & 0x2000) == 0;
}

/*
==============
ScriptableCl_GetLinkEquals
==============
*/
_BOOL8 ScriptableCl_GetLinkEquals(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptableLinkType linkedObjectType, const unsigned int linkedObjectIndex)
{
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  __int64 v10; 
  __int64 v12; 
  int v13; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v13 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 237, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v13) )
      __debugbreak();
  }
  if ( (unsigned __int8)linkedObjectType >= SCRIPTABLE_LINK_MAX )
  {
    LODWORD(v12) = 4;
    LODWORD(v10) = (unsigned __int8)linkedObjectType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 238, ASSERT_TYPE_ASSERT, "(unsigned)( linkedObjectType ) < (unsigned)( SCRIPTABLE_LINK_MAX )", "linkedObjectType doesn't index SCRIPTABLE_LINK_MAX\n\t%i not in [0, %i)", v10, v12) )
      __debugbreak();
  }
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  return InstanceCommonContext->linkedObjectType == linkedObjectType && InstanceCommonContext->linkedObjectIndex == linkedObjectIndex;
}

/*
==============
ScriptableCl_GetLinkObject
==============
*/
__int64 ScriptableCl_GetLinkObject(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  int v6; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 228, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v6) )
      __debugbreak();
  }
  return ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->linkedObjectIndex;
}

/*
==============
ScriptableCl_GetLinkType
==============
*/
__int64 ScriptableCl_GetLinkType(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  ScriptableLinkType linkedObjectType; 
  __int64 v7; 
  __int64 v9; 
  int v10; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v10 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 218, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v10) )
      __debugbreak();
  }
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  linkedObjectType = InstanceCommonContext->linkedObjectType;
  if ( (unsigned __int8)linkedObjectType >= SCRIPTABLE_LINK_MAX )
  {
    LODWORD(v9) = 4;
    LODWORD(v7) = (unsigned __int8)linkedObjectType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 221, ASSERT_TYPE_ASSERT, "(unsigned)( context.linkedObjectType ) < (unsigned)( SCRIPTABLE_LINK_MAX )", "context.linkedObjectType doesn't index SCRIPTABLE_LINK_MAX\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  return (unsigned __int8)InstanceCommonContext->linkedObjectType;
}

/*
==============
ScriptableCl_GetLinkTypeEquals
==============
*/
_BOOL8 ScriptableCl_GetLinkTypeEquals(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptableLinkType linkedObjectType)
{
  __int64 v7; 
  __int64 v9; 
  int v10; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v10 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 262, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v10) )
      __debugbreak();
  }
  if ( (unsigned __int8)linkedObjectType >= SCRIPTABLE_LINK_MAX )
  {
    LODWORD(v9) = 4;
    LODWORD(v7) = (unsigned __int8)linkedObjectType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 263, ASSERT_TYPE_ASSERT, "(unsigned)( linkedObjectType ) < (unsigned)( SCRIPTABLE_LINK_MAX )", "linkedObjectType doesn't index SCRIPTABLE_LINK_MAX\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
  }
  return ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->linkedObjectType == (unsigned __int8)linkedObjectType;
}

/*
==============
ScriptableCl_GetMaxReplicatedPartsCount
==============
*/
__int64 ScriptableCl_GetMaxReplicatedPartsCount()
{
  return g_scriptableCl_replicatedLimits.partTotalLimit;
}

/*
==============
ScriptableCl_GetPartDefForServerFlatId
==============
*/
const ScriptablePartDef *ScriptableCl_GetPartDefForServerFlatId(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const unsigned int serverFlatPartId)
{
  const ScriptableDef *def; 

  def = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 1034, ASSERT_TYPE_ASSERT, "( ( scriptableDef ) )", "%s\n\t( scriptableIndex ) = %i", "( scriptableDef )", scriptableIndex) )
    __debugbreak();
  return ScriptableCommon_GetPartDefForServerFlatId(def, serverFlatPartId);
}

/*
==============
ScriptableCl_GetPartIsUsable
==============
*/
bool ScriptableCl_GetPartIsUsable(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const unsigned int serverFlatPartId)
{
  const ScriptableDef *def; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const char *name; 
  const ScriptablePartDef *PartDefForServerFlatId; 
  const ScriptablePartDef *v11; 
  ScriptablePartRuntime *PartRuntime; 
  __int64 v13; 
  __int64 v14; 

  def = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 1043, ASSERT_TYPE_ASSERT, "( ( scriptableDef ) )", "%s\n\t( scriptableIndex ) = %i", "( scriptableDef )", scriptableIndex) )
    __debugbreak();
  if ( serverFlatPartId < def->serverInstancedPartCount )
  {
    PartDefForServerFlatId = ScriptableCl_GetPartDefForServerFlatId(localClientNum, scriptableIndex, serverFlatPartId);
    v11 = PartDefForServerFlatId;
    if ( (PartDefForServerFlatId->flags & 0x40000) != 0 )
    {
      return ScriptableCommon_GetPartHasUsableState(PartDefForServerFlatId);
    }
    else
    {
      PartRuntime = ScriptableCl_GetPartRuntime(localClientNum, scriptableIndex, PartDefForServerFlatId);
      if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 1094, ASSERT_TYPE_ASSERT, "( partRuntime ) != ( nullptr )", "%s != %s\n\t%p, %p", "partRuntime", "nullptr", NULL, NULL) )
        __debugbreak();
      if ( PartRuntime->stateId >= v11->numStates )
      {
        LODWORD(v14) = v11->numStates;
        LODWORD(v13) = PartRuntime->stateId;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 1095, ASSERT_TYPE_ASSERT, "(unsigned)( partRuntime->stateId ) < (unsigned)( partDef.numStates )", "partRuntime->stateId doesn't index partDef.numStates\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      return v11->states[PartRuntime->stateId].type == Scriptable_StateType_Usable;
    }
  }
  else
  {
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
    if ( InstanceCommonContext->def )
      name = InstanceCommonContext->def->name;
    else
      name = "<unknown>";
    Com_PrintError(29, "ScriptableCl_GetPartIsUsable: Called with invalid part Id for %d '%s'. LUI data might be out of date.\n", scriptableIndex, name);
    return 0;
  }
}

/*
==============
ScriptableCl_GetPartRuntime
==============
*/
ScriptablePartRuntime *ScriptableCl_GetPartRuntime(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptablePartDef *partDef)
{
  __int64 v3; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  unsigned int reservedStateListHeader; 
  __int64 v8; 
  ScriptablePartRuntime *v9; 
  unsigned int i; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  v3 = localClientNum;
  if ( localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 992, ASSERT_TYPE_ASSERT, "(localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS)", (const char *)&queryFormat, "localClientNum < SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS") )
    __debugbreak();
  if ( !partDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 993, ASSERT_TYPE_ASSERT, "(partDef)", (const char *)&queryFormat, "partDef") )
    __debugbreak();
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v3, scriptableIndex);
  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.runtimeInstanceCount )
  {
    v12 = partDef->flatId + InstanceCommonContext->partStateIndex;
    if ( (unsigned int)v12 >= g_ScriptableClRuntimePartStatesCount )
    {
      LODWORD(v13) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 1021, ASSERT_TYPE_ASSERT, "(unsigned)( flattenedPartId ) < (unsigned)( g_ScriptableClRuntimePartStatesCount )", "flattenedPartId doesn't index g_ScriptableClRuntimePartStatesCount\n\t%i not in [0, %i)", v13, g_ScriptableClRuntimePartStatesCount) )
        __debugbreak();
    }
    return &g_ScriptableClRuntimePartStates[v3][v12];
  }
  else
  {
    reservedStateListHeader = InstanceCommonContext->reservedStateListHeader;
    v8 = v3;
    v9 = g_scriptableClReservedPartRuntimes[v3];
    for ( i = 0; i < partDef->flatId; reservedStateListHeader = v9[reservedStateListHeader].nextRuntime )
    {
      if ( reservedStateListHeader >= g_scriptableClReservedPartRuntimeCount[v8] )
      {
        LODWORD(v14) = g_scriptableClReservedPartRuntimeCount[v8];
        LODWORD(v13) = reservedStateListHeader;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 1009, ASSERT_TYPE_ASSERT, "(unsigned)( reservedStateIdx ) < (unsigned)( g_scriptableClReservedPartRuntimeCount[localClientNum] )", "reservedStateIdx doesn't index g_scriptableClReservedPartRuntimeCount[localClientNum]\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      ++i;
    }
    if ( reservedStateListHeader >= g_scriptableClReservedPartRuntimeCount[v8] )
    {
      LODWORD(v14) = g_scriptableClReservedPartRuntimeCount[v8];
      LODWORD(v13) = reservedStateListHeader;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 1013, ASSERT_TYPE_ASSERT, "(unsigned)( reservedStateIdx ) < (unsigned)( g_scriptableClReservedPartRuntimeCount[localClientNum] )", "reservedStateIdx doesn't index g_scriptableClReservedPartRuntimeCount[localClientNum]\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    return &v9[reservedStateListHeader];
  }
}

/*
==============
ScriptableCl_GetPartUseHintIcon
==============
*/
const char *ScriptableCl_GetPartUseHintIcon(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const unsigned int serverFlatPartId)
{
  const ScriptablePartDef *PartDefForServerFlatId; 
  ScriptablePartRuntime *PartRuntime; 
  __int64 v7; 
  __int64 v9; 
  __int64 v10; 

  PartDefForServerFlatId = ScriptableCl_GetPartDefForServerFlatId(localClientNum, scriptableIndex, serverFlatPartId);
  PartRuntime = ScriptableCl_GetPartRuntime(localClientNum, scriptableIndex, PartDefForServerFlatId);
  if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 1176, ASSERT_TYPE_ASSERT, "( partRuntime ) != ( nullptr )", "%s != %s\n\t%p, %p", "partRuntime", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( PartRuntime->stateId >= PartDefForServerFlatId->numStates )
  {
    LODWORD(v10) = PartDefForServerFlatId->numStates;
    LODWORD(v9) = PartRuntime->stateId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 1177, ASSERT_TYPE_ASSERT, "(unsigned)( partRuntime->stateId ) < (unsigned)( partDef.numStates )", "partRuntime->stateId doesn't index partDef.numStates\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  v7 = (__int64)&PartDefForServerFlatId->states[PartRuntime->stateId];
  if ( *(_DWORD *)(v7 + 24) == 3 )
    return *(const char **)(v7 + 128);
  else
    return (char *)&queryFormat.fmt + 3;
}

/*
==============
ScriptableCl_GetPartUseHintString
==============
*/
const char *ScriptableCl_GetPartUseHintString(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const unsigned int serverFlatPartId)
{
  const ScriptablePartDef *PartDefForServerFlatId; 
  ScriptablePartRuntime *PartRuntime; 
  __int64 v7; 
  __int64 v9; 
  __int64 v10; 

  PartDefForServerFlatId = ScriptableCl_GetPartDefForServerFlatId(localClientNum, scriptableIndex, serverFlatPartId);
  PartRuntime = ScriptableCl_GetPartRuntime(localClientNum, scriptableIndex, PartDefForServerFlatId);
  if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 1159, ASSERT_TYPE_ASSERT, "( partRuntime ) != ( nullptr )", "%s != %s\n\t%p, %p", "partRuntime", "nullptr", NULL, NULL) )
    __debugbreak();
  if ( PartRuntime->stateId >= PartDefForServerFlatId->numStates )
  {
    LODWORD(v10) = PartDefForServerFlatId->numStates;
    LODWORD(v9) = PartRuntime->stateId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 1160, ASSERT_TYPE_ASSERT, "(unsigned)( partRuntime->stateId ) < (unsigned)( partDef.numStates )", "partRuntime->stateId doesn't index partDef.numStates\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  v7 = (__int64)&PartDefForServerFlatId->states[PartRuntime->stateId];
  if ( *(_DWORD *)(v7 + 24) == 3 )
    return *(const char **)(v7 + 112);
  else
    return (char *)&queryFormat.fmt + 3;
}

/*
==============
ScriptableCl_GetPartUsePosition
==============
*/
void ScriptableCl_GetPartUsePosition(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const unsigned int serverFlatPartId, vec3_t *out_usePosition)
{
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const ScriptablePartDef *PartDefForServerFlatId; 
  const ScriptablePartDef *v11; 
  ScriptablePartRuntime *PartRuntime; 
  __int64 v13; 
  bool v15; 
  bool v16; 
  char v18; 
  scr_string_t hintTag; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  ScriptableStateUsableDef *outUsableDef[4]; 
  tmat43_t<vec3_t> outTransform; 

  outUsableDef[1] = (ScriptableStateUsableDef *)-2i64;
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  PartDefForServerFlatId = ScriptableCl_GetPartDefForServerFlatId(localClientNum, scriptableIndex, serverFlatPartId);
  v11 = PartDefForServerFlatId;
  if ( (PartDefForServerFlatId->flags & 0x40000) != 0 )
  {
    if ( !ScriptableCommon_GetPartFirstUsableState(PartDefForServerFlatId, (const ScriptableStateUsableDef **)outUsableDef) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 1057, ASSERT_TYPE_ASSERT, "(ScriptableCommon_GetPartFirstUsableState( partDef, usableStateDef ))", (const char *)&queryFormat, "ScriptableCommon_GetPartFirstUsableState( partDef, usableStateDef )") )
      __debugbreak();
  }
  else
  {
    PartRuntime = ScriptableCl_GetPartRuntime(localClientNum, scriptableIndex, PartDefForServerFlatId);
    if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 1062, ASSERT_TYPE_ASSERT, "( partRuntime ) != ( nullptr )", "%s != %s\n\t%p, %p", "partRuntime", "nullptr", NULL, NULL) )
      __debugbreak();
    if ( PartRuntime->stateId >= v11->numStates )
    {
      LODWORD(v21) = v11->numStates;
      LODWORD(v20) = PartRuntime->stateId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 1063, ASSERT_TYPE_ASSERT, "(unsigned)( partRuntime->stateId ) < (unsigned)( partDef.numStates )", "partRuntime->stateId doesn't index partDef.numStates\n\t%i not in [0, %i)", v20, v21) )
        __debugbreak();
    }
    v13 = (__int64)&v11->states[PartRuntime->stateId];
    if ( *(_DWORD *)(v13 + 24) != 3 )
    {
      LODWORD(v23) = 3;
      LODWORD(v22) = *(_DWORD *)(v13 + 24);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 1065, ASSERT_TYPE_ASSERT, "( stateDef.type ) == ( Scriptable_StateType_Usable )", "%s == %s\n\t%i, %i", "stateDef.type", "Scriptable_StateType_Usable", v22, v23) )
        __debugbreak();
    }
    outUsableDef[0] = (ScriptableStateUsableDef *)(v13 + 32);
  }
  _RBX = outUsableDef[0];
  v15 = outUsableDef[0] == NULL;
  if ( !outUsableDef[0] )
  {
    v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 1110, ASSERT_TYPE_ASSERT, "(stateUsableDef != nullptr)", (const char *)&queryFormat, "stateUsableDef != nullptr");
    v15 = !v16;
    if ( v16 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rbx+2Ch]
  }
  if ( !v15 )
    goto LABEL_22;
  __asm { vucomiss xmm0, dword ptr [rbx+30h] }
  if ( !v15 )
    goto LABEL_22;
  __asm { vucomiss xmm0, dword ptr [rbx+34h] }
  if ( v15 )
    v18 = 0;
  else
LABEL_22:
    v18 = 1;
  hintTag = _RBX->hintTag;
  if ( hintTag || (hintTag = v11->scrTagName) != 0 )
  {
    if ( v18 )
    {
      if ( ScriptableCl_GetBoneTransform(localClientNum, scriptableIndex, hintTag, &outTransform, _RBX->allowMissingTag) )
      {
        MatrixTransformVector43(&_RBX->useOffset, &outTransform, out_usePosition);
        return;
      }
    }
    else if ( ScriptableCl_GetBonePosition(localClientNum, scriptableIndex, hintTag, out_usePosition, 0) )
    {
      return;
    }
  }
  ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, out_usePosition);
  if ( v18 )
  {
    AnglesAndOriginToMatrix43(&InstanceCommonContext->angles, out_usePosition, &outTransform);
    MatrixTransformVector43(&_RBX->useOffset, &outTransform, out_usePosition);
  }
  memset(&outUsableDef[2], 0, 0xCui64);
}

/*
==============
ScriptableCl_GetReplicatedInstanceLimit
==============
*/
__int64 ScriptableCl_GetReplicatedInstanceLimit()
{
  return g_scriptableCl_replicatedLimits.instanceLimit;
}

/*
==============
ScriptableCl_GetReplicatedLimits
==============
*/
ScriptableReplicatedLimits *ScriptableCl_GetReplicatedLimits()
{
  return &g_scriptableCl_replicatedLimits;
}

/*
==============
ScriptableCl_GetReservedIndexForEntity
==============
*/
bool ScriptableCl_GetReservedIndexForEntity(const LocalClientNum_t localClientNum, const unsigned int entityIndex, unsigned int *outInstanceIndex)
{
  __int64 v3; 
  __int64 v5; 
  unsigned int v6; 
  unsigned int v7; 
  bool result; 

  v3 = entityIndex;
  v5 = localClientNum;
  if ( entityIndex >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 358, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", entityIndex, 2048) )
    __debugbreak();
  v6 = g_scriptableClEntityLinkMap[v5][v3];
  if ( !v6 )
    return 0;
  v7 = v6 - 1;
  ScriptableCommon_AssertCountsInitialized();
  if ( v7 >= g_scriptableWorldCounts.runtimeInstanceCount )
    return 0;
  ScriptableCl_AssertLinkEquals((const LocalClientNum_t)v5, v7, SCRIPTABLE_LINK_ENTITY, v3);
  result = 1;
  *outInstanceIndex = v7;
  return result;
}

/*
==============
ScriptableCl_GetTeam
==============
*/
void ScriptableCl_GetTeam(const LocalClientNum_t localClientNum, unsigned int entityNumIn, team_t *teamOut, unsigned int *entityNumOut)
{
  CgHandler *Handler; 

  if ( !teamOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 1229, ASSERT_TYPE_ASSERT, "(teamOut)", (const char *)&queryFormat, "teamOut") )
    __debugbreak();
  if ( !entityNumOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 1230, ASSERT_TYPE_ASSERT, "(entityNumOut)", (const char *)&queryFormat, "entityNumOut") )
    __debugbreak();
  Handler = CgHandler::getHandler(localClientNum);
  if ( !Handler && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 1233, ASSERT_TYPE_ASSERT, "(handler)", (const char *)&queryFormat, "handler") )
    __debugbreak();
  Handler->GetEntityTeam(Handler, teamOut, entityNumIn, entityNumOut);
}

/*
==============
ScriptableCl_HasCollisionSupport
==============
*/
_BOOL8 ScriptableCl_HasCollisionSupport(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  ScriptableInstance *v2; 
  ScriptableInstance *outInstance; 

  if ( !ScriptableCommon_GetMapInstance(scriptableIndex, (const ScriptableInstance **)&outInstance) )
    return 1i64;
  v2 = outInstance;
  if ( !outInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 93, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  return (v2->flags & 1) == 0;
}

/*
==============
ScriptableCl_HasShadow
==============
*/
_BOOL8 ScriptableCl_HasShadow(const unsigned int scriptableIndex)
{
  ScriptableInstance *v1; 
  ScriptableInstance *outInstance; 

  if ( !ScriptableCommon_GetMapInstance(scriptableIndex, (const ScriptableInstance **)&outInstance) )
    return 1i64;
  v1 = outInstance;
  if ( !outInstance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 101, ASSERT_TYPE_ASSERT, "(instance)", (const char *)&queryFormat, "instance") )
    __debugbreak();
  return (v1->flags & 2) == 0;
}

/*
==============
ScriptableCl_IsCharacterThirdPerson
==============
*/
bool ScriptableCl_IsCharacterThirdPerson(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  int clientNum; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  bool v7; 
  const BgWeaponMap **v8; 
  bool result; 
  __int64 v10; 

  v2 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 1193, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( (unsigned int)(LocalClientGlobals->predictedPlayerState.pm_type - 5) <= 1 )
    return 1;
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v10) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 237, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v10, 2) )
      __debugbreak();
  }
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v2, scriptableIndex);
  if ( InstanceCommonContext->linkedObjectType != SCRIPTABLE_LINK_ENTITY || InstanceCommonContext->linkedObjectIndex != clientNum || LocalClientGlobals->renderingThirdPerson )
    return 1;
  v7 = CgWeaponMap::ms_instance[v2] == NULL;
  v8 = (const BgWeaponMap **)&CgWeaponMap::ms_instance[v2];
  if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  result = BG_IsThirdPersonMode(*v8, &LocalClientGlobals->predictedPlayerState);
  if ( result )
    return 1;
  return result;
}

/*
==============
ScriptableCl_IsLinked
==============
*/
_BOOL8 ScriptableCl_IsLinked(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  return ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->linkedObjectType != SCRIPTABLE_LINK_NONE;
}

/*
==============
ScriptableCl_IsReservedScriptableEntity
==============
*/
_BOOL8 ScriptableCl_IsReservedScriptableEntity(const LocalClientNum_t localClientNum, const unsigned int entityIndex)
{
  unsigned int v4; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  __int64 v7; 
  __int64 v8; 
  unsigned int runtimeInstanceCount; 
  unsigned int outInstanceIndex; 

  if ( entityIndex > 0x7FE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 147, ASSERT_TYPE_ASSERT, "(entityIndex <= ENTITYNUM_ORDINARY_END)", "%s\n\tUnexpected entity num", "entityIndex <= ENTITYNUM_ORDINARY_END") )
    __debugbreak();
  if ( !ScriptableCl_IsInitialized(localClientNum) || !ScriptableCl_GetReservedIndexForEntity(localClientNum, entityIndex, &outInstanceIndex) )
    return 0i64;
  ScriptableCommon_AssertCountsInitialized();
  v4 = outInstanceIndex;
  if ( outInstanceIndex >= g_scriptableWorldCounts.runtimeInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
    LODWORD(v7) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 160, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetReservedInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetReservedInstanceCount()\n\t%i not in [0, %i)", v7, runtimeInstanceCount) )
      __debugbreak();
  }
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v8) = 2;
    LODWORD(v7) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 237, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, v4);
  if ( (InstanceCommonContext->linkedObjectType != SCRIPTABLE_LINK_ENTITY || InstanceCommonContext->linkedObjectIndex != entityIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 163, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetLinkEquals( localClientNum, scriptableId, SCRIPTABLE_LINK_ENTITY, entityIndex ))", (const char *)&queryFormat, "ScriptableCl_GetLinkEquals( localClientNum, scriptableId, SCRIPTABLE_LINK_ENTITY, entityIndex )") )
    __debugbreak();
  return ScriptableCl_GetInstanceCommonContext(localClientNum, v4)->def != NULL;
}

/*
==============
ScriptableCl_IsScriptableEntity
==============
*/
int ScriptableCl_IsScriptableEntity(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  int result; 

  if ( ScriptableCl_IsScriptableMoverEntity(localClientNum, cent->nextState.number) )
    return 1;
  result = ScriptableCl_IsReservedScriptableEntity(localClientNum, cent->nextState.number);
  if ( result )
    return 1;
  return result;
}

/*
==============
ScriptableCl_IsScriptableEntityByNum
==============
*/
int ScriptableCl_IsScriptableEntityByNum(const LocalClientNum_t localClientNum, int entityIndex)
{
  int result; 

  if ( ScriptableCl_IsScriptableMoverEntity(localClientNum, entityIndex) )
    return 1;
  result = ScriptableCl_IsReservedScriptableEntity(localClientNum, entityIndex);
  if ( result )
    return 1;
  return result;
}

/*
==============
ScriptableCl_IsScriptableMoverEntity
==============
*/
__int64 ScriptableCl_IsScriptableMoverEntity(const LocalClientNum_t localClientNum, const unsigned int entityIndex)
{
  __int64 v2; 
  CgEntitySystem *EntitySystem; 
  __int64 v4; 
  __int16 *v5; 
  __int64 v7; 

  v2 = (int)entityIndex;
  EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
  if ( (unsigned int)v2 >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v2, 2048) )
    __debugbreak();
  v4 = (__int64)&EntitySystem->m_entities[v2];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 194, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  v5 = (__int16 *)(v4 + 400);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 203, ASSERT_TYPE_ASSERT, "(es != nullptr)", (const char *)&queryFormat, "es != nullptr") )
    __debugbreak();
  if ( v5[4] != 6 || v5[100] != 2 )
    return 0i64;
  if ( !*((_DWORD *)v5 + 32) )
  {
    LODWORD(v7) = *v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 208, ASSERT_TYPE_ASSERT, "( es->staticState.mover.u.scriptableIndex != 0 )", "We have a script mover scriptable (%d) with no scriptableIndex", v7) )
      __debugbreak();
  }
  return 1i64;
}

/*
==============
ScriptableCl_IsScriptableMoverEntityState
==============
*/
__int64 ScriptableCl_IsScriptableMoverEntityState(const entityState_t *es)
{
  __int64 v3; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 203, ASSERT_TYPE_ASSERT, "(es != nullptr)", (const char *)&queryFormat, "es != nullptr") )
    __debugbreak();
  if ( es->eType != ET_SCRIPTMOVER || es->un.scriptMoverType != 2 )
    return 0i64;
  if ( !es->staticState.player.stowedWeaponHandle.m_mapEntryId )
  {
    LODWORD(v3) = es->number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 208, ASSERT_TYPE_ASSERT, "( es->staticState.mover.u.scriptableIndex != 0 )", "We have a script mover scriptable (%d) with no scriptableIndex", v3) )
      __debugbreak();
  }
  return 1i64;
}

/*
==============
ScriptableCl_IsScriptableUsable
==============
*/
char ScriptableCl_IsScriptableUsable(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, unsigned int *const outFirstUsablePartIndex)
{
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  unsigned int v7; 
  const ScriptableDef *def; 
  unsigned int serverInstancedPartCount; 
  const ScriptableDef *v10; 
  const char *name; 
  const ScriptablePartDef *PartDefForServerFlatId; 
  const ScriptablePartDef *v13; 
  bool HasUsableState; 
  ScriptablePartRuntime *PartRuntime; 
  __int64 v17; 
  __int64 v18; 

  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  v7 = 0;
  if ( !InstanceCommonContext->def->partCount )
    return 0;
  while ( 1 )
  {
    def = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def;
    if ( !def )
    {
      LODWORD(v18) = scriptableIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 1043, ASSERT_TYPE_ASSERT, "( ( scriptableDef ) )", "%s\n\t( scriptableIndex ) = %i", "( scriptableDef )", v18) )
        __debugbreak();
    }
    serverInstancedPartCount = def->serverInstancedPartCount;
    v10 = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def;
    if ( v7 < serverInstancedPartCount )
      break;
    if ( v10 )
      name = v10->name;
    else
      name = "<unknown>";
    Com_PrintError(29, "ScriptableCl_GetPartIsUsable: Called with invalid part Id for %d '%s'. LUI data might be out of date.\n", scriptableIndex, name);
LABEL_23:
    if ( ++v7 >= InstanceCommonContext->def->partCount )
      return 0;
  }
  if ( !v10 )
  {
    LODWORD(v18) = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 1034, ASSERT_TYPE_ASSERT, "( ( scriptableDef ) )", "%s\n\t( scriptableIndex ) = %i", "( scriptableDef )", v18) )
      __debugbreak();
  }
  PartDefForServerFlatId = ScriptableCommon_GetPartDefForServerFlatId(v10, v7);
  v13 = PartDefForServerFlatId;
  if ( (PartDefForServerFlatId->flags & 0x40000) != 0 )
  {
    HasUsableState = ScriptableCommon_GetPartHasUsableState(PartDefForServerFlatId);
  }
  else
  {
    PartRuntime = ScriptableCl_GetPartRuntime(localClientNum, scriptableIndex, PartDefForServerFlatId);
    if ( !PartRuntime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 1094, ASSERT_TYPE_ASSERT, "( partRuntime ) != ( nullptr )", "%s != %s\n\t%p, %p", "partRuntime", "nullptr", NULL, NULL) )
      __debugbreak();
    if ( PartRuntime->stateId >= v13->numStates )
    {
      LODWORD(v18) = v13->numStates;
      LODWORD(v17) = PartRuntime->stateId;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 1095, ASSERT_TYPE_ASSERT, "(unsigned)( partRuntime->stateId ) < (unsigned)( partDef.numStates )", "partRuntime->stateId doesn't index partDef.numStates\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    HasUsableState = v13->states[PartRuntime->stateId].type == Scriptable_StateType_Usable;
  }
  if ( !HasUsableState )
    goto LABEL_23;
  if ( outFirstUsablePartIndex )
    *outFirstUsablePartIndex = v7;
  return 1;
}

/*
==============
ScriptableCl_IsServerInstance
==============
*/
__int64 ScriptableCl_IsServerInstance(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  const ScriptableDef *def; 

  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex < g_scriptableWorldCounts.runtimeInstanceCount )
    return 1i64;
  def = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->def;
  if ( !def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 276, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
    __debugbreak();
  return ((unsigned int)def->flags >> 1) & 1;
}

/*
==============
ScriptableCl_LocalClientToContext
==============
*/
__int64 ScriptableCl_LocalClientToContext(const LocalClientNum_t localClientNum)
{
  int v4; 

  if ( (unsigned int)localClientNum < LOCAL_CLIENT_COUNT )
    return (unsigned int)(localClientNum + 1);
  v4 = 2;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 116, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
    __debugbreak();
  return (unsigned int)(localClientNum + 1);
}

/*
==============
ScriptableCl_ProcessErrors
==============
*/
void ScriptableCl_ProcessErrors(void)
{
  if ( s_scriptableClErrorEntered )
  {
    s_scriptableClErrorEntered = 0;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144077080, 785i64);
  }
}

/*
==============
ScriptableCl_SetInitialOriginAndAngles
==============
*/
void ScriptableCl_SetInitialOriginAndAngles(const LocalClientNum_t localClientNum, unsigned int scriptableIndex, const vec3_t *origin, const vec3_t *angles)
{
  ScriptableInstanceContextSecure *InstanceCommonContext; 

  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  InstanceCommonContext->originInitial = *origin;
  InstanceCommonContext->anglesInitial = *angles;
}

/*
==============
ScriptableCl_SetLink
==============
*/
void ScriptableCl_SetLink(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptableLinkType linkedObjectType, const unsigned int linkedObjectIndex)
{
  __int64 v4; 
  __int64 v7; 
  const char *v8; 
  int v9; 
  const char *v10; 
  const char *name; 
  const ScriptableDef *def; 
  const char *v13; 
  unsigned int v14; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  ScriptableInstanceContextSecure *v16; 
  unsigned int v17; 
  unsigned int *v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 

  v4 = localClientNum;
  v7 = linkedObjectIndex;
  if ( !ScriptableCl_IsInitialized(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 292, ASSERT_TYPE_ASSERT, "(ScriptableCl_IsInitialized( localClientNum ))", (const char *)&queryFormat, "ScriptableCl_IsInitialized( localClientNum )") )
    __debugbreak();
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(v19) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 293, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS )", "localClientNum doesn't index SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS\n\t%i not in [0, %i)", v19, 2) )
      __debugbreak();
  }
  if ( (unsigned __int8)linkedObjectType >= SCRIPTABLE_LINK_MAX )
  {
    LODWORD(v20) = 4;
    LODWORD(v19) = (unsigned __int8)linkedObjectType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 294, ASSERT_TYPE_ASSERT, "(unsigned)( linkedObjectType ) < (unsigned)( SCRIPTABLE_LINK_MAX )", "linkedObjectType doesn't index SCRIPTABLE_LINK_MAX\n\t%i not in [0, %i)", v19, v20) )
      __debugbreak();
  }
  if ( linkedObjectType )
  {
    if ( linkedObjectType == SCRIPTABLE_LINK_ENTITY )
    {
      if ( (unsigned int)v7 <= 0x7FE )
        goto LABEL_24;
      v8 = "linkedObjectType != SCRIPTABLE_LINK_ENTITY || linkedObjectIndex <= ENTITYNUM_ORDINARY_END";
      v9 = 297;
      v10 = "(linkedObjectType != SCRIPTABLE_LINK_ENTITY || linkedObjectIndex <= ENTITYNUM_ORDINARY_END)";
    }
    else if ( linkedObjectType == SCRIPTABLE_LINK_CLIENTMODEL )
    {
      if ( (unsigned int)v7 <= 0x180 )
        goto LABEL_24;
      v8 = "linkedObjectType != SCRIPTABLE_LINK_CLIENTMODEL || linkedObjectIndex <= CLIENT_MODEL_MAX_COUNT";
      v9 = 298;
      v10 = "(linkedObjectType != SCRIPTABLE_LINK_CLIENTMODEL || linkedObjectIndex <= CLIENT_MODEL_MAX_COUNT)";
    }
    else
    {
      if ( linkedObjectType != SCRIPTABLE_LINK_DYNENT || (unsigned int)v7 <= 0x7FFFF )
        goto LABEL_24;
      v8 = "linkedObjectType != SCRIPTABLE_LINK_DYNENT || linkedObjectIndex <= DYNENT_MAX_COUNT";
      v9 = 300;
      v10 = "(linkedObjectType != SCRIPTABLE_LINK_DYNENT || linkedObjectIndex <= ((1 << 19) - 1))";
    }
  }
  else
  {
    if ( !(_DWORD)v7 )
      goto LABEL_24;
    v8 = "linkedObjectType != SCRIPTABLE_LINK_NONE || linkedObjectIndex == 0";
    v9 = 296;
    v10 = "(linkedObjectType != SCRIPTABLE_LINK_NONE || linkedObjectIndex == 0)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", v9, ASSERT_TYPE_ASSERT, v10, (const char *)&queryFormat, v8) )
    __debugbreak();
LABEL_24:
  name = "<unknown>";
  if ( *(_BYTE *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1664i64) )
  {
    def = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v4, scriptableIndex)->def;
    v13 = def ? def->name : "<unknown>";
    LODWORD(v19) = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 303, ASSERT_TYPE_ASSERT, "( !CG_EntityWorkers_IsProcessingEntityWorker() )", "ScriptableCl_SetLink: Scriptable (%i %s) should not be updating links on entity workers", v19, v13) )
      __debugbreak();
  }
  if ( ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v4, scriptableIndex)->linkedObjectType && !ScriptableCl_GetLinkEquals((const LocalClientNum_t)v4, scriptableIndex, linkedObjectType, v7) )
  {
    if ( (unsigned int)v4 >= 2 )
    {
      LODWORD(v20) = 2;
      LODWORD(v19) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 228, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    v14 = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v4, scriptableIndex)->linkedObjectIndex;
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v4, scriptableIndex);
    if ( InstanceCommonContext->def )
      name = InstanceCommonContext->def->name;
    LODWORD(v19) = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 305, ASSERT_TYPE_ASSERT, "( ScriptableCl_GetLinkIsSafeToSetTo( localClientNum, scriptableIndex, linkedObjectType, linkedObjectIndex ) )", "ScriptableCl_SetLink: Scriptable (%i %s) is already linked to (%d) when trying to link to (%d).", v19, name, v14, v7) )
      __debugbreak();
  }
  v16 = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v4, scriptableIndex);
  v16->linkedObjectType = linkedObjectType;
  v16->linkedObjectIndex = v7;
  if ( linkedObjectType == SCRIPTABLE_LINK_ENTITY )
  {
    if ( scriptableIndex >= 0x7A120 )
    {
      LODWORD(v20) = 500000;
      LODWORD(v19) = scriptableIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 316, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( SCRIPTABLE_MAX_INSTANCE_COUNT )", "scriptableIndex doesn't index SCRIPTABLE_MAX_INSTANCE_COUNT\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    if ( (unsigned int)v7 >= 0x800 )
    {
      LODWORD(v20) = 2048;
      LODWORD(v19) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 317, ASSERT_TYPE_ASSERT, "(unsigned)( linkedObjectIndex ) < (unsigned)( ( sizeof( *array_counter( g_scriptableClEntityLinkMap[localClientNum] ) ) + 0 ) )", "linkedObjectIndex doesn't index g_scriptableClEntityLinkMap[localClientNum]\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    v17 = scriptableIndex + 1;
    v18 = &g_scriptableClEntityLinkMap[v4][v7];
    if ( *v18 != v17 && *v18 )
    {
      LODWORD(v21) = *v18;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 323, ASSERT_TYPE_ASSERT, "( g_scriptableClEntityLinkMap[localClientNum][linkedObjectIndex] ) == ( 0 )", "%s == %s\n\t%i, %i", "g_scriptableClEntityLinkMap[localClientNum][linkedObjectIndex]", "0", v21, 0i64) )
        __debugbreak();
    }
    *v18 = v17;
  }
}

/*
==============
ScriptableCl_SetOriginAndAngles
==============
*/
void ScriptableCl_SetOriginAndAngles(const LocalClientNum_t localClientNum, unsigned int scriptableIndex, const vec3_t *origin, const vec3_t *angles)
{
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  unsigned int linkedObjectIndex; 
  ScriptableLinkType LinkType; 
  bool v12; 
  __int64 v13; 
  unsigned int v14; 
  int v15; 
  vec3_t outOrigin; 

  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.runtimeInstanceCount )
  {
    v14 = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 918, ASSERT_TYPE_ASSERT, "( ( scriptableIndex < ScriptableCommon_GetReservedInstanceCount() ) )", "( scriptableIndex ) = %i", v14) )
      __debugbreak();
  }
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  if ( !ScriptableCl_ObjectiveChanged(localClientNum) && ScriptableCl_ObjectiveActiveForInstance(localClientNum, scriptableIndex) )
  {
    ScriptableInstanceContextSecure::GetOrigin(InstanceCommonContext, scriptableIndex, &outOrigin);
    __asm { vmovss  xmm2, cs:__real@3a83126f; epsilon }
    if ( !VecNCompareCustomEpsilon(outOrigin.v, origin->v, *(float *)&_XMM2, 3) )
      ScriptableCl_ObjectiveChangedSet(localClientNum);
    memset(&outOrigin, 0, sizeof(outOrigin));
  }
  ScriptableInstanceContextSecure::SetOrigin(InstanceCommonContext, scriptableIndex, origin);
  InstanceCommonContext->angles.v[0] = angles->v[0];
  InstanceCommonContext->angles.v[1] = angles->v[1];
  InstanceCommonContext->angles.v[2] = angles->v[2];
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v15 = 2;
    LODWORD(v13) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 228, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v13, v15) )
      __debugbreak();
  }
  linkedObjectIndex = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex)->linkedObjectIndex;
  LinkType = ScriptableCl_GetLinkType(localClientNum, scriptableIndex);
  if ( LinkType )
  {
    switch ( LinkType )
    {
      case SCRIPTABLE_LINK_ENTITY:
        v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 950, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Should not be updating entity origins directly");
        break;
      case SCRIPTABLE_LINK_DYNENT:
        return;
      case SCRIPTABLE_LINK_CLIENTMODEL:
        CG_ClientModel_SetOrigin(localClientNum, linkedObjectIndex, origin);
        CG_ClientModel_SetAngles(localClientNum, linkedObjectIndex, angles);
        return;
      default:
        LODWORD(v13) = (unsigned __int8)LinkType;
        v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 958, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unexpected link type %i", v13);
        break;
    }
    if ( v12 )
      __debugbreak();
  }
}

/*
==============
ScriptableCl_UpdateTransformParentEntity
==============
*/
void ScriptableCl_UpdateTransformParentEntity(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const centity_t *parent, vec3_t *inOutOrigin, vec3_t *inOutAngles)
{
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v28; 
  tmat43_t<vec3_t> out; 

  _RDI = inOutOrigin;
  if ( !parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.cpp", 970, ASSERT_TYPE_ASSERT, "(parent)", (const char *)&queryFormat, "parent") )
    __debugbreak();
  AnglesToAxis(&parent->pose.angles, (tmat33_t<vec3_t> *)&axis);
  if ( !parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  if ( !parent->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
    __debugbreak();
  FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(parent->pose.origin.Get_origin, &parent->pose);
  FunctionPointer_origin(&parent->pose.origin.origin.origin, &axis.m[3]);
  if ( parent->pose.isPosePrecise )
  {
    __asm
    {
      vmovsd  xmm3, cs:__real@3f30000000000000
      vmovd   xmm0, [rsp+0E8h+var_94]
      vmovd   xmm2, [rsp+0E8h+var_90]
      vcvtdq2pd xmm0, xmm0
      vmulsd  xmm0, xmm0, xmm3
      vcvtsd2ss xmm1, xmm0, xmm0
      vcvtdq2pd xmm2, xmm2
      vmulsd  xmm0, xmm2, xmm3
      vmovd   xmm2, [rsp+0E8h+var_8C]
      vmovss  [rsp+0E8h+var_94], xmm1
      vcvtsd2ss xmm1, xmm0, xmm0
      vcvtdq2pd xmm2, xmm2
      vmulsd  xmm0, xmm2, xmm3
      vmovss  [rsp+0E8h+var_90], xmm1
      vcvtsd2ss xmm1, xmm0, xmm0
      vmovss  [rsp+0E8h+var_8C], xmm1
    }
  }
  AnglesToAxis(inOutAngles, (tmat33_t<vec3_t> *)&v28);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  xmm1, dword ptr [rdi+4]
    vmovss  [rsp+0E8h+var_64], xmm0
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rsp+0E8h+var_5C], xmm0
    vmovss  [rsp+0E8h+var_60], xmm1
  }
  MatrixMultiply43(&v28, &axis, &out);
  AxisToAngles((const tmat33_t<vec3_t> *)&out, inOutAngles);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+0E8h+out+24h]
    vmovss  xmm1, dword ptr [rsp+0E8h+out+28h]
    vmovss  dword ptr [rdi], xmm0
    vmovss  xmm0, dword ptr [rsp+0E8h+out+2Ch]
    vmovss  dword ptr [rdi+8], xmm0
    vmovss  dword ptr [rdi+4], xmm1
  }
}

