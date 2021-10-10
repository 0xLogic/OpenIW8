/*
==============
ScriptableCl_BindEntityReservedDef
==============
*/

bool __fastcall ScriptableCl_BindEntityReservedDef(const LocalClientNum_t localClientNum, const unsigned int entityIndex, const ScriptableDef *const scriptableDef)
{
  return ?ScriptableCl_BindEntityReservedDef@@YA_NW4LocalClientNum_t@@IQEBUScriptableDef@@@Z(localClientNum, entityIndex, scriptableDef);
}

/*
==============
ScriptableCl_CheckBoundToReservedDef
==============
*/

void __fastcall ScriptableCl_CheckBoundToReservedDef(const LocalClientNum_t localClientNum, const unsigned int entityIndex, const ScriptableDef *const scriptableDef)
{
  ?ScriptableCl_CheckBoundToReservedDef@@YAXW4LocalClientNum_t@@IQEBUScriptableDef@@@Z(localClientNum, entityIndex, scriptableDef);
}

/*
==============
ScriptableCL_BindStandaloneReservedRpInstance
==============
*/

void __fastcall ScriptableCL_BindStandaloneReservedRpInstance(const LocalClientNum_t localClientNum, const ScriptableReplicatedInstance *rpInstance)
{
  ?ScriptableCL_BindStandaloneReservedRpInstance@@YAXW4LocalClientNum_t@@AEBUScriptableReplicatedInstance@@@Z(localClientNum, rpInstance);
}

/*
==============
ScriptableCL_UnbindStandaloneReservedIndex
==============
*/

void __fastcall ScriptableCL_UnbindStandaloneReservedIndex(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  ?ScriptableCL_UnbindStandaloneReservedIndex@@YAXW4LocalClientNum_t@@I@Z(localClientNum, scriptableIndex);
}

/*
==============
ScriptableCl_UnbindEntityReservedDef
==============
*/

void __fastcall ScriptableCl_UnbindEntityReservedDef(const LocalClientNum_t localClientNum, const unsigned int entityIndex)
{
  ?ScriptableCl_UnbindEntityReservedDef@@YAXW4LocalClientNum_t@@I@Z(localClientNum, entityIndex);
}

/*
==============
ScriptableCl_UpdateReservedScriptableEntityBinding
==============
*/

ScriptableBindResult __fastcall ScriptableCl_UpdateReservedScriptableEntityBinding(const LocalClientNum_t localClientNum, const unsigned int entityIndex, const ScriptableDef *const scriptableDef)
{
  return ?ScriptableCl_UpdateReservedScriptableEntityBinding@@YA?AW4ScriptableBindResult@@W4LocalClientNum_t@@IQEBUScriptableDef@@@Z(localClientNum, entityIndex, scriptableDef);
}

/*
==============
ScriptableCl_PrintReservedEntityScriptables
==============
*/

void __fastcall ScriptableCl_PrintReservedEntityScriptables(const LocalClientNum_t localClientNum)
{
  ?ScriptableCl_PrintReservedEntityScriptables@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCL_BindStandaloneReservedRpInstance
==============
*/
void ScriptableCL_BindStandaloneReservedRpInstance(const LocalClientNum_t localClientNum, const ScriptableReplicatedInstance *rpInstance)
{
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const char *v5; 
  const ScriptableDef *NetConstStringDefAtIndex; 
  signed __int64 m_data; 
  float v8; 
  float v9; 
  float v10; 
  unsigned __int16 v11; 
  unsigned __int16 EntityNum; 
  const centity_t *Entity; 
  unsigned __int16 extraPayload; 
  unsigned __int16 payload; 
  unsigned int instanceIndex; 
  ScriptableInstanceContextSecure *v17; 
  unsigned __int16 v18; 
  vec3_t *outWorldOrigin; 
  vec3_t *outWorldAngles; 
  vec3_t origin; 
  unsigned __int8 *outEventStreamBuffer[2]; 
  vec3_t angles; 

  outEventStreamBuffer[1] = (unsigned __int8 *)-2i64;
  ScriptableCommon_AssertCountsInitialized();
  if ( rpInstance->instanceIndex >= g_scriptableWorldCounts.runtimeInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 515, ASSERT_TYPE_ASSERT, "(unsigned)( rpInstance.instanceIndex ) < (unsigned)( ScriptableCommon_GetReservedInstanceCount() )", "rpInstance.instanceIndex doesn't index ScriptableCommon_GetReservedInstanceCount()\n\t%i not in [0, %i)", rpInstance->instanceIndex, g_scriptableWorldCounts.runtimeInstanceCount) )
      __debugbreak();
  }
  if ( !ScriptableCl_IsInitialized(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 516, ASSERT_TYPE_ASSERT, "(ScriptableCl_IsInitialized( localClientNum ))", "%s\n\tWe are trying to bind a scriptable after the system has been shut down", "ScriptableCl_IsInitialized( localClientNum )") )
    __debugbreak();
  if ( ScriptableCl_GetInstanceInUse(localClientNum, rpInstance->instanceIndex) )
  {
    InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, rpInstance->instanceIndex);
    v5 = InstanceCommonContext->def ? InstanceCommonContext->def->name : "<unknown>";
    LODWORD(outWorldAngles) = rpInstance->instanceIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 517, ASSERT_TYPE_ASSERT, "(!ScriptableCl_GetInstanceInUse( localClientNum, rpInstance.instanceIndex ))", "%s\n\tTrying to double-bind instance index %i (%s)", "!ScriptableCl_GetInstanceInUse( localClientNum, rpInstance.instanceIndex )", outWorldAngles, v5) )
      __debugbreak();
  }
  NetConstStringDefAtIndex = ScriptableBg_GetNetConstStringDefAtIndex(rpInstance->defIndex);
  if ( NetConstStringDefAtIndex )
  {
    m_data = rpInstance->origin.m_data;
    v8 = (float)(m_data << 42 >> 42);
    origin.v[0] = v8;
    v9 = (float)(m_data << 20 >> 42);
    origin.v[1] = v9;
    v10 = (float)(m_data >> 44);
    origin.v[2] = v10;
    angles.v[0] = (float)rpInstance->angles.m_pitch * 0.0054931641;
    angles.v[1] = (float)rpInstance->angles.m_yaw * 0.0054931641;
    angles.v[2] = (float)rpInstance->angles.m_roll * 0.0054931641;
    v11 = rpInstance->parent.m_data;
    if ( v11 )
    {
      ScriptableCl_SetInitialOriginAndAngles(localClientNum, rpInstance->instanceIndex, &origin, &angles);
      EntityNum = ScriptableParentInfo::GetEntityNum(&rpInstance->parent);
      Entity = CG_GetEntity(localClientNum, EntityNum);
      ScriptableCl_ConvertStandaloneParentEntityPoseToWorldSpace(localClientNum, rpInstance->instanceIndex, Entity, &origin, &angles, &origin, &angles);
    }
    extraPayload = rpInstance->extraPayload;
    payload = rpInstance->payload;
    instanceIndex = rpInstance->instanceIndex;
    if ( !ScriptableBg_ValidateStandaloneDef(NetConstStringDefAtIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 489, ASSERT_TYPE_ASSERT, "(ScriptableBg_ValidateStandaloneDef( scriptableDef ))", (const char *)&queryFormat, "ScriptableBg_ValidateStandaloneDef( scriptableDef )") )
      __debugbreak();
    if ( ScriptableCl_CheckFreeReservedParts(localClientNum, NetConstStringDefAtIndex) && ScriptableCl_AllocateEventStreamBuffer(localClientNum, NetConstStringDefAtIndex, 0, outEventStreamBuffer) )
    {
      ScriptableCl_BindUpdateCommonContext(localClientNum, instanceIndex, NetConstStringDefAtIndex, outEventStreamBuffer[0], &origin, &angles, payload, extraPayload, v11 != 0);
      if ( !ScriptableCl_GetInstanceInUse(localClientNum, instanceIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 505, ASSERT_TYPE_SANITY, "( ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex ) )", (const char *)&queryFormat, "ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex )") )
        __debugbreak();
      ScriptableCl_Spatial_MarkerAlloc(localClientNum, instanceIndex);
    }
    else
    {
      ScriptableCl_EnterError();
    }
    v17 = ScriptableCl_GetInstanceCommonContext(localClientNum, rpInstance->instanceIndex);
    if ( (*((_BYTE *)v17 + 60) & 0x20) != 0 )
    {
      LODWORD(outWorldOrigin) = rpInstance->instanceIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 547, ASSERT_TYPE_ASSERT, "( ( !commonContext.hasParentEntity ) )", "( rpInstance.instanceIndex ) = %i", outWorldOrigin) )
        __debugbreak();
    }
    if ( v11 )
    {
      v18 = ScriptableParentInfo::GetEntityNum(&rpInstance->parent);
      ScriptableCl_MarkStandaloneEntityParentUpdate(localClientNum, rpInstance->instanceIndex, v18);
      *((_BYTE *)v17 + 60) |= 0x20u;
    }
    memset(&origin, 0, sizeof(origin));
  }
  else
  {
    LODWORD(outWorldOrigin) = rpInstance->defIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 522, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "BindStandaloneInstance: '%i' is not a valid scriptable def index", outWorldOrigin) )
      __debugbreak();
  }
}

/*
==============
ScriptableCL_UnbindStandaloneReservedIndex
==============
*/
void ScriptableCL_UnbindStandaloneReservedIndex(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex)
{
  unsigned int v4; 
  unsigned int runtimeInstanceCount; 

  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.runtimeInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
    v4 = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 559, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetReservedInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetReservedInstanceCount()\n\t%i not in [0, %i)", v4, runtimeInstanceCount) )
      __debugbreak();
  }
  if ( ScriptableCl_GetInstanceInUse(localClientNum, scriptableIndex) )
  {
    ScriptableCl_Spatial_MarkerFree(localClientNum, scriptableIndex);
    ScriptableCl_ClearStandaloneUpdateLists(localClientNum, scriptableIndex);
    ScriptableCl_UnbindReservedInstanceInternal(localClientNum, scriptableIndex, 0);
    ScriptableCl_ObjectiveRemove(localClientNum, scriptableIndex);
    if ( ScriptableCl_GetInstanceInUse(localClientNum, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 577, ASSERT_TYPE_SANITY, "( !ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex ) )", (const char *)&queryFormat, "!ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex )") )
      __debugbreak();
  }
  else
  {
    Com_PrintError(29, "Trying to unbind a standalone reserved scriptable that is not yet in use (index %i)\n", scriptableIndex);
  }
}

/*
==============
ScriptableCl_AllocateEventStreamBuffer
==============
*/
char ScriptableCl_AllocateEventStreamBuffer(const LocalClientNum_t localClientNum, const ScriptableDef *const scriptableDef, const bool isCharacterEntity, unsigned __int8 **outEventStreamBuffer)
{
  unsigned __int16 eventStreamSizeRequiredClient; 
  unsigned __int8 *EventStreamBuffer; 
  unsigned __int16 v10; 

  if ( !scriptableDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 118, ASSERT_TYPE_ASSERT, "(scriptableDef)", (const char *)&queryFormat, "scriptableDef") )
    __debugbreak();
  *outEventStreamBuffer = NULL;
  eventStreamSizeRequiredClient = scriptableDef->eventStreamSizeRequiredClient;
  if ( eventStreamSizeRequiredClient )
  {
    EventStreamBuffer = Scriptable_Bg_AllocateEventStreamBuffer(isCharacterEntity, 0, localClientNum, eventStreamSizeRequiredClient);
    *outEventStreamBuffer = EventStreamBuffer;
    v10 = scriptableDef->eventStreamSizeRequiredClient;
    if ( !EventStreamBuffer )
    {
      Com_PrintError(29, "ERROR: ScriptableCl_LinkReservedScriptable -- Could not allocate Stream Buffer for scriptable %s of %i bytes\n", scriptableDef->name, v10);
      return 0;
    }
    memset_0(EventStreamBuffer, 0, v10);
  }
  return 1;
}

/*
==============
ScriptableCl_BindEntityReservedDef
==============
*/
bool ScriptableCl_BindEntityReservedDef(const LocalClientNum_t localClientNum, const unsigned int entityIndex, const ScriptableDef *const scriptableDef)
{
  unsigned __int64 v4; 
  __int64 v5; 
  bool result; 
  const dvar_t *v7; 
  centity_t *Entity; 
  ScriptableReadChangeQueue *v9; 
  bool IsCharacterEntityIndex; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v15; 
  unsigned int v25; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  vec3_t *angles; 
  __int64 payload; 
  __int64 extraPayload; 
  __int64 hasParentEntity; 
  vec3_t origin; 
  unsigned int outInstanceIndex; 
  unsigned __int8 *outEventStreamBuffer; 

  v4 = entityIndex;
  v5 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 216, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS )", "localClientNum doesn't index SCRIPTABLE_MAX_NUM_SUPPORTED_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !scriptableDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 217, ASSERT_TYPE_ASSERT, "(scriptableDef)", (const char *)&queryFormat, "scriptableDef") )
    __debugbreak();
  if ( ScriptableCl_IsInitialized((const LocalClientNum_t)v5) )
  {
    if ( !g_scriptableClReservedPartRuntimes[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 227, ASSERT_TYPE_ASSERT, "(g_scriptableClReservedPartRuntimes[localClientNum] != nullptr)", "%s\n\tReserve buffers are not allocated", "g_scriptableClReservedPartRuntimes[localClientNum] != nullptr") )
      __debugbreak();
    if ( !scriptableDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 276, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
      __debugbreak();
    if ( (scriptableDef->flags & 2) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 228, ASSERT_TYPE_ASSERT, "(ScriptableDef_HasServerInstance( scriptableDef ))", "%s\n\t%s is a client-only scriptable being used by the entity system - in all likelyhood, this def is in a patch and a change to the def has changed its fundamental type, which is not permitted", "ScriptableDef_HasServerInstance( scriptableDef )", scriptableDef->name) )
      __debugbreak();
    if ( (scriptableDef->flags & 0x2000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 229, ASSERT_TYPE_ASSERT, "(ScriptableDef_HasEntitySupport( scriptableDef ))", "%s\n\t%s is a standalone scriptable being used by the entity system - in all likelyhood, this def is in a patch and a change to the def has changed its fundamental type, which is not permitted", "ScriptableDef_HasEntitySupport( scriptableDef )", scriptableDef->name) )
      __debugbreak();
    if ( ScriptableCl_IsReservedScriptableEntity((const LocalClientNum_t)v5, v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 230, ASSERT_TYPE_ASSERT, "(!ScriptableCl_IsReservedScriptableEntity( localClientNum, entityIndex ))", "%s\n\tDouble-binding def %s for entity %i", "!ScriptableCl_IsReservedScriptableEntity( localClientNum, entityIndex )", scriptableDef->name, v4) )
      __debugbreak();
    v7 = DVARBOOL_scriptable_debugLinking;
    if ( !DVARBOOL_scriptable_debugLinking && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debugLinking") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( v7->current.enabled )
      Com_Printf(29, "Client Scriptable Link %i %s\n", (unsigned int)v4, scriptableDef->name);
    if ( (scriptableDef->flags & 0x800) == 0 || BG_IsCharacterEntityIndex(v4) )
    {
      Entity = CG_GetEntity((const LocalClientNum_t)v5, v4);
      if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 247, ASSERT_TYPE_ASSERT, "(entity)", (const char *)&queryFormat, "entity") )
        __debugbreak();
      if ( ScriptableCl_GetReservedIndexForEntity((const LocalClientNum_t)v5, v4, &outInstanceIndex) )
      {
        ScriptableCommon_AssertCountsInitialized();
        if ( outInstanceIndex >= g_scriptableWorldCounts.runtimeInstanceCount )
        {
          ScriptableCommon_AssertCountsInitialized();
          LODWORD(payload) = g_scriptableWorldCounts.runtimeInstanceCount;
          LODWORD(angles) = outInstanceIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 259, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetReservedInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetReservedInstanceCount()\n\t%i not in [0, %i)", angles, payload) )
            __debugbreak();
        }
        CG_EntityWorkers_EnterCriticalSection_ScriptableCl(BASE);
        if ( ScriptableCl_CheckFreeReservedParts((const LocalClientNum_t)v5, scriptableDef) && (IsCharacterEntityIndex = BG_IsCharacterEntityIndex(v4), ScriptableCl_AllocateEventStreamBuffer((const LocalClientNum_t)v5, scriptableDef, IsCharacterEntityIndex, &outEventStreamBuffer)) )
        {
          if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
            __debugbreak();
          if ( !Entity->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
            __debugbreak();
          FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(Entity->pose.origin.Get_origin, &Entity->pose);
          FunctionPointer_origin(&Entity->pose.origin.origin.origin, &origin);
          if ( Entity->pose.isPosePrecise )
          {
            _XMM0 = LODWORD(origin.v[0]);
            __asm { vcvtdq2pd xmm0, xmm0 }
            *((_QWORD *)&v15 + 1) = *((_QWORD *)&_XMM0 + 1);
            *(double *)&v15 = *(double *)&_XMM0 * 0.000244140625;
            _XMM0 = v15;
            __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
            origin.v[0] = *(float *)&_XMM1;
            _XMM2 = LODWORD(origin.v[1]);
            __asm { vcvtdq2pd xmm2, xmm2 }
            *((_QWORD *)&v15 + 1) = *((_QWORD *)&_XMM2 + 1);
            *(double *)&v15 = *(double *)&_XMM2 * 0.000244140625;
            _XMM0 = v15;
            __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
            origin.v[1] = *(float *)&_XMM1;
            _XMM2 = LODWORD(origin.v[2]);
            __asm { vcvtdq2pd xmm2, xmm2 }
            *((_QWORD *)&v15 + 1) = *((_QWORD *)&_XMM2 + 1);
            *(double *)&v15 = *(double *)&_XMM2 * 0.000244140625;
            _XMM0 = v15;
            __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
            origin.v[2] = *(float *)&_XMM1;
          }
          ScriptableCl_BindUpdateCommonContext((const LocalClientNum_t)v5, outInstanceIndex, scriptableDef, outEventStreamBuffer, &origin, &Entity->pose.angles, 0, 0, 0);
          v25 = outInstanceIndex;
          if ( (scriptableDef->flags & 0x2000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 204, ASSERT_TYPE_ASSERT, "(( scriptableDef->flags & (1 << 13) ) == 0)", "%s\n\tEntity-scriptables are updated in a unique way, not yet using the update list", "( scriptableDef->flags & SCRIPTABLE_DEFFLAG_NO_ENTITY ) == 0") )
            __debugbreak();
          InstanceCommonContext = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v5, v25);
          *((_BYTE *)InstanceCommonContext + 60) |= 1u;
          if ( (unsigned int)v4 >= 0x800 )
          {
            LODWORD(hasParentEntity) = 2048;
            LODWORD(extraPayload) = v4;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", extraPayload, hasParentEntity) )
              __debugbreak();
          }
          g_scriptableClEntityLinkBound[v5].array[v4 >> 5] |= 0x80000000 >> (v4 & 0x1F);
          CG_EntityWorkers_LeaveCriticalSection_ScriptableCl(BASE);
          if ( !ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v5, outInstanceIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 295, ASSERT_TYPE_SANITY, "( ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex ) )", (const char *)&queryFormat, "ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex )") )
            __debugbreak();
          result = 1;
          memset(&origin, 0, sizeof(origin));
        }
        else
        {
          CG_EntityWorkers_LeaveCriticalSection_ScriptableCl(BASE);
          ScriptableCl_EnterError();
          return 0;
        }
      }
      else
      {
        v9 = ScriptableCl_GetChangeQueue((const LocalClientNum_t)v5);
        Com_PrintError(29, "ERROR: ScriptableCl_LinkReservedScriptable -- Could not find a reserved scriptable (entity %i) (def '%s'). This can happen on a round transition baseline, or could be non-determinisc with the server logic. Read %zu Write %zu Start %zu\n", (unsigned int)v4, scriptableDef->name, v9->readIndex, v9->writeIndex, v9->startIndex);
        return 0;
      }
    }
    else
    {
      Com_PrintError(29, "ERROR: ScriptableCl_LinkReservedScriptable -- Could not associated scriptable %s for entity %i - This scriptable can only be attached to characters.\n", scriptableDef->name, (unsigned int)v4);
      return 0;
    }
  }
  else
  {
    Com_PrintWarning(29, "ScriptableCl_LinkReservedScriptable can't complete association (ent %i, def '%s'). Scriptable system is not initialized.\n", (unsigned int)v4, scriptableDef->name);
    return 0;
  }
  return result;
}

/*
==============
ScriptableCl_BindUpdateCommonContext
==============
*/
void ScriptableCl_BindUpdateCommonContext(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const ScriptableDef *const scriptableDef, unsigned __int8 *const eventStreamBuffer, const vec3_t *origin, const vec3_t *angles, const unsigned __int16 payload, const unsigned __int16 extraPayload, bool hasParentEntity)
{
  __int64 v9; 
  unsigned __int8 *v10; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  bool v14; 
  unsigned int v15; 
  __int64 v16; 
  ScriptablePartRuntime *v17; 
  unsigned __int16 v18; 
  unsigned __int16 v19; 
  __int64 v20; 
  __int64 v21; 

  v9 = localClientNum;
  v10 = eventStreamBuffer;
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
  if ( (*((_BYTE *)InstanceCommonContext + 60) & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 143, ASSERT_TYPE_ASSERT, "(!r_commonContext.needsInitialization)", (const char *)&queryFormat, "!r_commonContext.needsInitialization") )
    __debugbreak();
  if ( (*((_BYTE *)InstanceCommonContext + 60) & 2) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 144, ASSERT_TYPE_ASSERT, "(!r_commonContext.needsShutdown)", (const char *)&queryFormat, "!r_commonContext.needsShutdown") )
    __debugbreak();
  InstanceCommonContext->def = scriptableDef;
  ScriptableInstanceContextSecure::SetOrigin(InstanceCommonContext, scriptableIndex, origin);
  InstanceCommonContext->angles = *angles;
  if ( !hasParentEntity )
    ScriptableCl_SetInitialOriginAndAngles((const LocalClientNum_t)v9, scriptableIndex, origin, angles);
  v14 = (*((_BYTE *)InstanceCommonContext + 60) & 0x20) == 0;
  InstanceCommonContext->payload = payload;
  InstanceCommonContext->extraPayload = extraPayload;
  InstanceCommonContext->data.compositeModel = NULL;
  InstanceCommonContext->dataType = SCRIPTABLE_DATA_TYPE_INVALID;
  if ( !v14 )
  {
    LODWORD(v20) = scriptableIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 166, ASSERT_TYPE_ASSERT, "( !r_commonContext.hasParentEntity )", "Should not have parent entity when binding (%i - %s)", v20, scriptableDef->name) )
      __debugbreak();
  }
  v15 = 0;
  if ( scriptableDef->partCount )
  {
    do
    {
      v16 = g_scriptableClReservedPartRuntimeFreeHead[v9];
      if ( (unsigned int)v16 >= g_scriptableClReservedPartRuntimeCount[v9] )
      {
        LODWORD(v21) = g_scriptableClReservedPartRuntimeCount[v9];
        LODWORD(v20) = g_scriptableClReservedPartRuntimeFreeHead[v9];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 174, ASSERT_TYPE_ASSERT, "(unsigned)( newPartIndex ) < (unsigned)( g_scriptableClReservedPartRuntimeCount[localClientNum] )", "newPartIndex doesn't index g_scriptableClReservedPartRuntimeCount[localClientNum]\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      v17 = g_scriptableClReservedPartRuntimes[v9];
      ++v15;
      g_scriptableClReservedPartRuntimeFreeHead[v9] = v17[v16].nextRuntime;
      v17[v16].stateId = 0;
      v17[v16].nextRuntime = InstanceCommonContext->reservedStateListHeader;
      InstanceCommonContext->reservedStateListHeader = v16;
    }
    while ( v15 < scriptableDef->partCount );
    LODWORD(v9) = localClientNum;
    v10 = eventStreamBuffer;
  }
  InstanceCommonContext->eventStreamBufferSize = scriptableDef->eventStreamSizeRequiredClient;
  if ( scriptableDef->eventStreamSizeRequiredClient )
  {
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 190, ASSERT_TYPE_ASSERT, "(eventStreamBuffer != nullptr)", (const char *)&queryFormat, "eventStreamBuffer != nullptr") )
      __debugbreak();
    InstanceCommonContext->eventStreamBuffer = v10;
  }
  v18 = g_scriptableClReservedMaxCount[(int)v9];
  v19 = ++g_scriptableClReservedCurrentCount[(int)v9];
  if ( v18 > v19 )
    v19 = v18;
  g_scriptableClReservedMaxCount[(int)v9] = v19;
}

/*
==============
ScriptableCl_CheckBoundToReservedDef
==============
*/
void ScriptableCl_CheckBoundToReservedDef(const LocalClientNum_t localClientNum, const unsigned int entityIndex, const ScriptableDef *const scriptableDef)
{
  unsigned __int64 v3; 
  __int64 v5; 
  bitarray<2048> *v6; 
  const ScriptableDef *def; 
  bool v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned int outInstanceIndex; 

  v3 = entityIndex;
  v5 = localClientNum;
  if ( !scriptableDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 457, ASSERT_TYPE_ASSERT, "(scriptableDef != nullptr)", (const char *)&queryFormat, "scriptableDef != nullptr") )
    __debugbreak();
  v6 = &g_scriptableClEntityLinkBound[v5];
  if ( !ScriptableCl_GetReservedIndexForEntity((const LocalClientNum_t)v5, v3, &outInstanceIndex) )
  {
    if ( (unsigned int)v3 >= 0x800 )
    {
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v9, 2048) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v3 & 0x1F)) & v6->array[v3 >> 5]) != 0 )
    {
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 461, ASSERT_TYPE_ASSERT, "( ( !g_scriptableClEntityLinkBound[localClientNum].testBit( entityIndex ) ) )", "( entityIndex ) = %i", v9) )
        __debugbreak();
    }
    Com_PrintWarning(29, "Scriptable for entity %i is not bound to any scriptable. Expected %s. Could be delayed by replication limiter.\n", (unsigned int)v3, scriptableDef->name);
    return;
  }
  def = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v5, outInstanceIndex)->def;
  if ( !def )
  {
    if ( (unsigned int)v3 >= 0x800 )
    {
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v9, 2048) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v3 & 0x1F)) & v6->array[v3 >> 5]) != 0 )
    {
      LODWORD(v9) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 469, ASSERT_TYPE_ASSERT, "( ( !g_scriptableClEntityLinkBound[localClientNum].testBit( entityIndex ) ) )", "( entityIndex ) = %i", v9) )
        __debugbreak();
    }
    LODWORD(v10) = v3;
    LODWORD(v9) = outInstanceIndex;
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 470, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Scriptable %i for entity %i is not assigned to any def. Expected %s", v9, v10, scriptableDef->name);
    goto LABEL_28;
  }
  if ( (unsigned int)v3 >= 0x800 )
  {
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v9, 2048) )
      __debugbreak();
  }
  if ( ((0x80000000 >> (v3 & 0x1F)) & v6->array[v3 >> 5]) == 0 )
  {
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 474, ASSERT_TYPE_ASSERT, "( ( g_scriptableClEntityLinkBound[localClientNum].testBit( entityIndex ) ) )", "( entityIndex ) = %i", v9) )
      __debugbreak();
  }
  if ( I_strcmp(def->name, scriptableDef->name) )
  {
    LODWORD(v10) = v3;
    LODWORD(v9) = outInstanceIndex;
    v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 478, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Scriptable %i for entity %i is not assigned to the correct def def. Expected %s, got %s", v9, v10, scriptableDef->name, def->name);
LABEL_28:
    if ( v8 )
      __debugbreak();
  }
}

/*
==============
ScriptableCl_CheckFreeReservedParts
==============
*/
char ScriptableCl_CheckFreeReservedParts(const LocalClientNum_t localClientNum, const ScriptableDef *const scriptableDef)
{
  __int64 v2; 
  unsigned int partCount; 
  unsigned int v5; 
  unsigned int nextRuntime; 

  v2 = localClientNum;
  if ( !scriptableDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 72, ASSERT_TYPE_ASSERT, "(scriptableDef)", (const char *)&queryFormat, "scriptableDef") )
    __debugbreak();
  if ( !g_scriptableClReservedPartRuntimes[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 73, ASSERT_TYPE_ASSERT, "(g_scriptableClReservedPartRuntimes[localClientNum] != nullptr)", "%s\n\tReserve buffers are not allocated", "g_scriptableClReservedPartRuntimes[localClientNum] != nullptr") )
    __debugbreak();
  partCount = scriptableDef->partCount;
  v5 = 0;
  nextRuntime = g_scriptableClReservedPartRuntimeFreeHead[v2];
  if ( !partCount )
    return 1;
  while ( nextRuntime < g_scriptableClReservedPartRuntimeCount[v2] )
  {
    ++v5;
    nextRuntime = g_scriptableClReservedPartRuntimes[v2][nextRuntime].nextRuntime;
    if ( v5 >= partCount )
      return 1;
  }
  Com_PrintError(29, "ERROR: ScriptableCl_FindFreePartReservedIndex -- Too many reserved scriptable parts for %s\n", scriptableDef->name);
  return 0;
}

/*
==============
ScriptableCl_PrintReservedEntityScriptables
==============
*/
void ScriptableCl_PrintReservedEntityScriptables(const LocalClientNum_t localClientNum)
{
  unsigned int v1; 
  __int64 v2; 
  unsigned int v3; 
  ScriptableInstanceClientContext **v4; 
  __int64 v5; 
  const char *v6; 
  __int64 v7; 
  __int64 v8; 

  v1 = 0;
  v2 = localClientNum;
  v3 = 0;
  ScriptableCommon_AssertCountsInitialized();
  if ( g_scriptableWorldCounts.runtimeInstanceCount )
  {
    v4 = &g_scriptableCl_instanceContexts[v2];
    do
    {
      ScriptableCommon_AssertCountsInitialized();
      if ( v3 >= g_scriptableWorldCounts.totalInstanceCount )
      {
        ScriptableCommon_AssertCountsInitialized();
        LODWORD(v8) = g_scriptableWorldCounts.totalInstanceCount;
        LODWORD(v7) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      if ( (unsigned int)v2 >= 2 )
      {
        LODWORD(v8) = 2;
        LODWORD(v7) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 114, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
        __debugbreak();
      v5 = (__int64)&(*v4)[v3];
      if ( *(_BYTE *)(v5 + 95) == 1 )
      {
        if ( *(_QWORD *)v5 )
          v6 = **(const char ***)v5;
        else
          v6 = "<none>";
        Com_Printf(6, "[Scripable Dump] Reserved Entity: ID %d entity %d def '%s'\n", v3, *(unsigned __int16 *)(v5 + 90), v6);
        ++v1;
      }
      ++v3;
      ScriptableCommon_AssertCountsInitialized();
    }
    while ( v3 < g_scriptableWorldCounts.runtimeInstanceCount );
  }
  Com_Printf(14, "ScriptableCl_DumpReservedEntityScriptables: Dumped %d reserved entity scriptables, see log file.\n", v1);
}

/*
==============
ScriptableCl_UnbindEntityReservedDef
==============
*/
void ScriptableCl_UnbindEntityReservedDef(const LocalClientNum_t localClientNum, const unsigned int entityIndex)
{
  __int64 v2; 
  unsigned __int64 v3; 
  const dvar_t *v4; 
  bool IsCharacterEntityIndex; 
  int v6; 
  int v7; 
  unsigned int outInstanceIndex; 

  v2 = localClientNum;
  v3 = entityIndex;
  CG_EntityWorkers_EnterCriticalSection_ScriptableCl(BASE);
  if ( ScriptableCl_GetReservedIndexForEntity((const LocalClientNum_t)v2, v3, &outInstanceIndex) )
  {
    if ( ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v2, outInstanceIndex) )
    {
      v4 = DVARBOOL_scriptable_debugLinking;
      if ( !DVARBOOL_scriptable_debugLinking && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debugLinking") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      if ( v4->current.enabled )
        Com_Printf(29, "[Scriptable] Client Unbind Entity %i\n", (unsigned int)v3);
      IsCharacterEntityIndex = BG_IsCharacterEntityIndex(v3);
      ScriptableCl_UnbindReservedInstanceInternal((const LocalClientNum_t)v2, outInstanceIndex, IsCharacterEntityIndex);
      if ( (unsigned int)v3 >= 0x800 )
      {
        v7 = 2048;
        v6 = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v6, v7) )
          __debugbreak();
      }
      g_scriptableClEntityLinkBound[v2].array[v3 >> 5] &= ~(0x80000000 >> (v3 & 0x1F));
      CG_EntityWorkers_LeaveCriticalSection_ScriptableCl(BASE);
      if ( ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v2, outInstanceIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 405, ASSERT_TYPE_SANITY, "( !ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex ) )", (const char *)&queryFormat, "!ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex )") )
        __debugbreak();
    }
    else
    {
      CG_EntityWorkers_LeaveCriticalSection_ScriptableCl(BASE);
      Com_PrintError(29, "Trying to unlink a reserved scriptable that is not yet in use (entity num %i)\n", (unsigned int)v3);
    }
  }
  else
  {
    CG_EntityWorkers_LeaveCriticalSection_ScriptableCl(BASE);
    Com_PrintError(29, "Trying to unlink a reserved scriptable that has not been allocated (entity num %i)\n", (unsigned int)v3);
  }
}

/*
==============
ScriptableCl_UnbindReservedInstanceInternal
==============
*/
void ScriptableCl_UnbindReservedInstanceInternal(const LocalClientNum_t localClientNum, const unsigned int scriptableIndex, const bool isCharacterEntity)
{
  __int64 v4; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const ScriptableDef *def; 
  const dvar_t *v8; 
  unsigned __int8 *eventStreamBuffer; 
  unsigned int i; 
  __int64 reservedStateListHeader; 
  ScriptablePartRuntime *v12; 
  __int64 v13; 
  __int64 v14; 

  v4 = localClientNum;
  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.runtimeInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 302, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetReservedInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetReservedInstanceCount()\n\t%i not in [0, %i)", scriptableIndex, g_scriptableWorldCounts.runtimeInstanceCount) )
      __debugbreak();
  }
  if ( !ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v4, scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 303, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex ))", (const char *)&queryFormat, "ScriptableCl_GetInstanceInUse( localClientNum, scriptableIndex )") )
    __debugbreak();
  InstanceCommonContext = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v4, scriptableIndex);
  def = InstanceCommonContext->def;
  if ( !InstanceCommonContext->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 309, ASSERT_TYPE_ASSERT, "(scriptableDef)", (const char *)&queryFormat, "scriptableDef") )
    __debugbreak();
  v8 = DVARBOOL_scriptable_debugLinking;
  if ( !DVARBOOL_scriptable_debugLinking && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debugLinking") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
    Com_Printf(29, "[Scriptable] Client Unbind Def %s Index %i\n", def->name, scriptableIndex);
  if ( (*((_BYTE *)InstanceCommonContext + 60) & 0x20) != 0 )
  {
    ScriptableCl_ClearStandaloneEntityParentUpdate((const LocalClientNum_t)v4, scriptableIndex);
    *((_BYTE *)InstanceCommonContext + 60) &= ~0x20u;
  }
  ScriptableCl_ShutdownInstance((const LocalClientNum_t)v4, scriptableIndex, 1);
  eventStreamBuffer = InstanceCommonContext->eventStreamBuffer;
  if ( eventStreamBuffer )
  {
    Scriptable_Bg_ReleaseEventStreamBuffer(isCharacterEntity, 0, (LocalClientNum_t)v4, eventStreamBuffer);
    InstanceCommonContext->eventStreamBufferSize = 0;
    InstanceCommonContext->eventStreamBuffer = NULL;
  }
  for ( i = 0; i < def->partCount; g_scriptableClReservedPartRuntimeFreeHead[v4] = reservedStateListHeader )
  {
    reservedStateListHeader = InstanceCommonContext->reservedStateListHeader;
    if ( (unsigned int)reservedStateListHeader >= g_scriptableClReservedPartRuntimeCount[v4] )
    {
      LODWORD(v14) = g_scriptableClReservedPartRuntimeCount[v4];
      LODWORD(v13) = InstanceCommonContext->reservedStateListHeader;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.cpp", 342, ASSERT_TYPE_ASSERT, "(unsigned)( newPartIndex ) < (unsigned)( g_scriptableClReservedPartRuntimeCount[localClientNum] )", "newPartIndex doesn't index g_scriptableClReservedPartRuntimeCount[localClientNum]\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    ++i;
    v12 = &g_scriptableClReservedPartRuntimes[v4][reservedStateListHeader];
    InstanceCommonContext->reservedStateListHeader = v12->nextRuntime;
    v12->stateId = 0;
    v12->nextRuntime = g_scriptableClReservedPartRuntimeFreeHead[v4];
  }
  *((_BYTE *)InstanceCommonContext + 60) &= 0xF8u;
  InstanceCommonContext->def = NULL;
  --g_scriptableClReservedCurrentCount[v4];
}

/*
==============
ScriptableCl_UpdateReservedScriptableEntityBinding
==============
*/
__int64 ScriptableCl_UpdateReservedScriptableEntityBinding(const LocalClientNum_t localClientNum, const unsigned int entityIndex, const ScriptableDef *const scriptableDef)
{
  unsigned int v6; 
  const ScriptableDef *def; 
  unsigned int outInstanceIndex; 

  v6 = 0;
  if ( ScriptableCl_GetReservedIndexForEntity(localClientNum, entityIndex, &outInstanceIndex) )
    def = ScriptableCl_GetInstanceCommonContext(localClientNum, outInstanceIndex)->def;
  else
    def = NULL;
  if ( def == scriptableDef )
    return 2i64;
  if ( !def )
    goto LABEL_9;
  if ( scriptableDef && !I_strcmp(def->name, scriptableDef->name) )
    return 2i64;
  ScriptableCl_UnbindEntityReservedDef(localClientNum, entityIndex);
LABEL_9:
  if ( !scriptableDef )
    return 1i64;
  LOBYTE(v6) = ScriptableCl_BindEntityReservedDef(localClientNum, entityIndex, scriptableDef);
  return v6;
}

