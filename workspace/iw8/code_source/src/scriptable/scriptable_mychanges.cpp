/*
==============
Scriptable_MyChangesFinishInitAndLoad
==============
*/

void __fastcall Scriptable_MyChangesFinishInitAndLoad(ScriptableMyChangesSaveState *const savedState)
{
  ?Scriptable_MyChangesFinishInitAndLoad@@YAXQEAUScriptableMyChangesSaveState@@@Z(savedState);
}

/*
==============
Scriptable_MyChangesStartInit
==============
*/

void Scriptable_MyChangesStartInit(void)
{
  ?Scriptable_MyChangesStartInit@@YAXXZ();
}

/*
==============
Scriptable_MyChangesShutdown
==============
*/

void Scriptable_MyChangesShutdown(void)
{
  ?Scriptable_MyChangesShutdown@@YAXXZ();
}

/*
==============
Scriptable_MyChangesSave
==============
*/

void __fastcall Scriptable_MyChangesSave(ScriptableMyChangesSaveState *const savedState)
{
  ?Scriptable_MyChangesSave@@YAXQEAUScriptableMyChangesSaveState@@@Z(savedState);
}

/*
==============
Scriptable_MyChangesFinishInitAndLoad
==============
*/
void Scriptable_MyChangesFinishInitAndLoad(ScriptableMyChangesSaveState *const savedState)
{
  if ( Com_IsAnyLocalServerRunning() && s_scriptable_pendingMyChanges )
  {
    ScriptableSv_InitServerInstancesMyChanges(savedState);
    Scriptable_MyChangesRestoreState(savedState);
  }
}

/*
==============
Scriptable_MyChangesRestoreState
==============
*/
void Scriptable_MyChangesRestoreState(const ScriptableMyChangesSaveState *const scriptableSaveState)
{
  LocalClientNum_t v1; 
  const ScriptableMyChangesSaveState *v2; 
  unsigned __int64 v3; 
  __int64 v4; 
  ntl::fixed_vector<ScriptableDef *,1024,0> *v5; 
  ScriptableSavedReservedInstance *v6; 
  ntl::fixed_vector<ScriptableDef *,1024,0> *v7; 
  const ScriptableDef *v8; 
  __int64 v9; 
  ScriptableSavedReservedInstance *v10; 
  __int64 v11; 
  __int64 v12; 
  char v13; 
  __int64 v14; 
  char v15; 
  unsigned __int8 linkedObjectType; 
  unsigned __int8 v17; 
  __int64 linkedObjectIndex; 
  unsigned int scriptableIndex; 
  const ScriptableReplicatedInstance *ReplicatedInstances; 
  unsigned int ReplicatedInstanceLimit; 
  const ScriptablePartWorldState *PartWorldState; 
  const ScriptableReplicatedLimits *ReplicatedLimits; 
  unsigned int v24; 
  unsigned int v25; 
  char *fmt; 
  __int64 extraPayload; 
  __int64 v28; 
  int v30; 

  v1 = LOCAL_CLIENT_0;
  v2 = scriptableSaveState;
  v3 = 0i64;
  if ( !scriptableSaveState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_mychanges.cpp", 228, ASSERT_TYPE_ASSERT, "( scriptableSaveState )", (const char *)&queryFormat, "scriptableSaveState") )
    __debugbreak();
  Com_Printf(29, "[mychanges] Restoring %u reserved scriptables.\n", v2->svReservedCount);
  v4 = 0i64;
  v30 = 0;
  if ( v2->svReservedCount )
  {
    while ( 1 )
    {
      v5 = &g_scriptableDefVector;
      v6 = &v2->svReserves[v4];
      v7 = (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)&g_scriptableDefVector + 8 * g_scriptableDefVector.m_size);
      if ( &g_scriptableDefVector == v7 )
      {
LABEL_18:
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144040DA0, 6110i64, v6);
        v8 = NULL;
      }
      else
      {
LABEL_6:
        v8 = *(const ScriptableDef **)v5->m_data.m_buffer;
        v9 = 0x7FFFFFFFi64;
        v10 = v6;
        v11 = **(_QWORD **)v5->m_data.m_buffer;
        if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
          __debugbreak();
        v12 = v11 - (_QWORD)v6;
        do
        {
          v13 = v10->defName[v12];
          v14 = v9;
          v15 = v10->defName[0];
          v10 = (ScriptableSavedReservedInstance *)((char *)v10 + 1);
          --v9;
          if ( !v14 )
            break;
          if ( v13 != v15 )
          {
            v5 = (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)v5 + 8);
            if ( v5 != v7 )
              goto LABEL_6;
            goto LABEL_18;
          }
        }
        while ( v13 );
      }
      linkedObjectType = v6->linkedObjectType;
      if ( linkedObjectType >= 4u )
      {
        LODWORD(v28) = 4;
        LODWORD(extraPayload) = linkedObjectType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_mychanges.cpp", 237, ASSERT_TYPE_ASSERT, "(unsigned)( savedInstance.linkedObjectType ) < (unsigned)( SCRIPTABLE_LINK_MAX )", "savedInstance.linkedObjectType doesn't index SCRIPTABLE_LINK_MAX\n\t%i not in [0, %i)", extraPayload, v28) )
          __debugbreak();
      }
      LODWORD(fmt) = v6->linkedObjectIndex;
      Com_Printf(29, "[mychanges] Restoring reserved scriptable instance: %u link: %d->%d def: %s\n", v6->scriptableIndex, (unsigned __int8)v6->linkedObjectType, fmt, v6->defName);
      v17 = v6->linkedObjectType;
      if ( !v17 )
        goto LABEL_34;
      if ( v17 == 1 )
      {
        linkedObjectIndex = (int)v6->linkedObjectIndex;
        scriptableIndex = v6->scriptableIndex;
        if ( (unsigned int)linkedObjectIndex >= 0x800 )
        {
          LODWORD(v28) = 2048;
          LODWORD(extraPayload) = v6->linkedObjectIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", extraPayload, v28) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        ScriptableSv_LinkReservedScriptableEntity(&g_entities[linkedObjectIndex], v8, scriptableIndex);
        goto LABEL_35;
      }
      if ( (unsigned __int8)(v17 - 2) > 1u )
      {
        LODWORD(extraPayload) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_mychanges.cpp", 257, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Invalid linked object type %i", extraPayload) )
          __debugbreak();
      }
      else
      {
LABEL_34:
        ScriptableSv_MyChangesRestoreStandaloneInstance(v6->scriptableIndex, v6->defName, &v6->origin, &v6->angles, v6->payload, v6->extraPayload);
      }
LABEL_35:
      v2 = scriptableSaveState;
      v4 = (unsigned int)(v30 + 1);
      v30 = v4;
      if ( (unsigned int)v4 >= scriptableSaveState->svReservedCount )
      {
        v3 = 0i64;
        break;
      }
    }
  }
  ReplicatedInstances = ScriptableSv_GetReplicatedInstances();
  ReplicatedInstanceLimit = ScriptableSv_GetReplicatedInstanceLimit();
  PartWorldState = ScriptableSv_GetPartWorldState();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) )
  {
    ReplicatedLimits = ScriptableSv_GetReplicatedLimits();
    ScriptableMsgWrite_UpdateClientBuffersMyChanges(ReplicatedInstances, ReplicatedInstanceLimit, PartWorldState, ReplicatedLimits);
    v24 = SvClient::ms_clientCount;
    v25 = 0;
    if ( (int)SvClient::ms_clientCount > 0 )
    {
      while ( 1 )
      {
        if ( !(_BYTE)SvClient::ms_allocatedType )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 99, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
            __debugbreak();
          v24 = SvClient::ms_clientCount;
        }
        if ( v25 >= v24 )
        {
          LODWORD(v28) = v24;
          LODWORD(extraPayload) = v25;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 100, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ms_clientCount )", "clientNum doesn't index ms_clientCount\n\t%i not in [0, %i)", extraPayload, v28) )
            __debugbreak();
        }
        if ( SvClient::ms_clients[v25]->IsLocalClient(SvClient::ms_clients[v25]) )
          break;
        v24 = SvClient::ms_clientCount;
        if ( (int)++v25 >= (int)SvClient::ms_clientCount )
          goto LABEL_50;
      }
      v3 = ScriptableMsgWrite_GetChangeWriteIndex(v25);
    }
  }
LABEL_50:
  if ( SLODWORD(cl_maxLocalClients) > 0 )
  {
    do
      ScriptableCL_SetWorldStateMyChanges(v1++, ReplicatedInstances, ReplicatedInstanceLimit, PartWorldState, v3);
    while ( v1 < SLODWORD(cl_maxLocalClients) );
  }
}

/*
==============
Scriptable_MyChangesSave
==============
*/
void Scriptable_MyChangesSave(ScriptableMyChangesSaveState *const savedState)
{
  const dvar_t *v2; 

  s_scriptable_pendingMyChanges = 0;
  if ( cm.mapEnts )
  {
    v2 = DVARBOOL_scriptable_debug_mychanges;
    if ( DVARBOOL_scriptable_debug_mychanges )
    {
      Dvar_CheckFrontendServerThread(DVARBOOL_scriptable_debug_mychanges);
      if ( v2->current.enabled && Com_IsAnyLocalServerRunning() && ScriptableSv_IsInitialized() )
      {
        s_scriptable_pendingMyChanges = 1;
        Scriptable_SaveLinkedScriptableInfo(savedState);
      }
    }
  }
}

/*
==============
Scriptable_MyChangesShutdown
==============
*/
void Scriptable_MyChangesShutdown(void)
{
  const dvar_t *v0; 
  LocalClientNum_t i; 

  if ( cm.mapEnts )
  {
    v0 = DVARBOOL_scriptable_debug_mychanges;
    if ( DVARBOOL_scriptable_debug_mychanges )
    {
      Dvar_CheckFrontendServerThread(DVARBOOL_scriptable_debug_mychanges);
      if ( v0->current.enabled && Com_IsAnyLocalServerRunning() && ScriptableSv_IsInitialized() )
      {
        if ( !s_scriptable_pendingMyChanges && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_mychanges.cpp", 185, ASSERT_TYPE_ASSERT, "(s_scriptable_pendingMyChanges)", (const char *)&queryFormat, "s_scriptable_pendingMyChanges") )
          __debugbreak();
        Scriptable_ShutdownPhysics();
        ScriptableSv_ShutdownMyChanges();
        for ( i = LOCAL_CLIENT_0; i < SLODWORD(cl_maxLocalClients); ++i )
          ScriptableCl_Shutdown(i);
      }
    }
  }
}

/*
==============
Scriptable_MyChangesStartInit
==============
*/
void Scriptable_MyChangesStartInit(void)
{
  __int64 v0; 
  const void *v1; 
  __int64 v2; 
  __int64 v3; 
  int v4; 
  bool IsActive; 
  LocalClientNum_t i; 
  bool v7; 
  __int64 v8; 

  if ( Com_IsAnyLocalServerRunning() && s_scriptable_pendingMyChanges )
  {
    if ( !(_BYTE)GStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 103, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to set the active bgs to the server game static but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 104, ASSERT_TYPE_ASSERT, "(ms_gameStatics != 0)", "%s\n\tTrying to set the active bgs to the server game static but the server game static has not been allocated", "ms_gameStatics != NULL") )
      __debugbreak();
    v0 = tls_index;
    v1 = *(const void **)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64);
    if ( v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 105, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == 0 ) )", "%s\n\t( ms_activeBgs ) = %p", "( ms_activeBgs == 0 )", v1) )
      __debugbreak();
    v2 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v0);
    v3 = *(_QWORD *)&GStatic::ms_gameStatics;
    v4 = *(_DWORD *)(v2 + 1052);
    *(_DWORD *)(v2 + 1052) = -4609;
    *(_QWORD *)(v2 + 272) = v3;
    ScriptableBg_InitNetConstStringDefs(1);
    IsActive = Com_FrontEndScene_IsActive();
    ScriptableSv_InitMyChanges(IsActive);
    for ( i = LOCAL_CLIENT_0; i < SLODWORD(cl_maxLocalClients); ++i )
      ScriptableCl_InitMyChanges(i);
    v7 = (_BYTE)GStatic::ms_allocatedType == NONE;
    *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v0) + 1052i64) = v4;
    if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 113, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to clear the active bgs from the server game static but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 114, ASSERT_TYPE_ASSERT, "(ms_gameStatics != 0)", "%s\n\tTrying to clear the active bgs from the server game static but the server game static has not been allocated", "ms_gameStatics != NULL") )
      __debugbreak();
    v8 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v0);
    if ( *(_QWORD *)(v8 + 272) != *(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 115, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == ms_gameStatics ) )", "%s\n\t( ms_activeBgs ) = %p", "( ms_activeBgs == ms_gameStatics )", *(const void **)(v8 + 272)) )
      __debugbreak();
    *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v0) + 272i64) = 0i64;
  }
}

/*
==============
Scriptable_SaveLinkedScriptableInfo
==============
*/
void Scriptable_SaveLinkedScriptableInfo(ScriptableMyChangesSaveState *const savedState)
{
  unsigned int v2; 
  ScriptableSavedReservedInstance *v3; 
  ScriptableInstanceContext *InstanceCommonContext; 
  unsigned int runtimeInstanceCount; 
  __int64 mapLinkCount; 
  char *fmt; 
  __int64 v8; 
  __int64 v9; 

  if ( !savedState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_mychanges.cpp", 68, ASSERT_TYPE_ASSERT, "( savedState )", (const char *)&queryFormat, "savedState") )
    __debugbreak();
  v2 = 0;
  savedState->svReservedCount = 0;
  savedState->mapLinkCount = 0;
  ScriptableCommon_AssertCountsInitialized();
  if ( g_scriptableWorldCounts.runtimeInstanceCount )
  {
    do
    {
      if ( ScriptableSv_GetInstanceInUse(v2) )
      {
        if ( savedState->svReservedCount >= 0x800 )
        {
          LODWORD(v9) = 2048;
          LODWORD(v8) = savedState->svReservedCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_mychanges.cpp", 78, ASSERT_TYPE_ASSERT, "(unsigned)( savedState->svReservedCount ) < (unsigned)( ( sizeof( *array_counter( savedState->svReserves ) ) + 0 ) )", "savedState->svReservedCount doesn't index ARRAY_COUNT( savedState->svReserves )\n\t%i not in [0, %i)", v8, v9) )
            __debugbreak();
        }
        v3 = &savedState->svReserves[savedState->svReservedCount];
        InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(v2);
        if ( !InstanceCommonContext->def && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_mychanges.cpp", 48, ASSERT_TYPE_ASSERT, "( context.def != nullptr )", (const char *)&queryFormat, "context.def != nullptr") )
          __debugbreak();
        v3->scriptableIndex = v2;
        v3->linkedObjectType = ScriptableSv_GetInstanceCommonContext(v2)->linkedObjectType;
        v3->linkedObjectIndex = ScriptableSv_GetInstanceCommonContext(v2)->linkedObjectIndex;
        v3->origin.v[0] = InstanceCommonContext->origin.v[0];
        v3->origin.v[1] = InstanceCommonContext->origin.v[1];
        v3->origin.v[2] = InstanceCommonContext->origin.v[2];
        v3->angles.v[0] = InstanceCommonContext->angles.v[0];
        v3->angles.v[1] = InstanceCommonContext->angles.v[1];
        v3->angles.v[2] = InstanceCommonContext->angles.v[2];
        v3->payload = InstanceCommonContext->payload;
        v3->extraPayload = InstanceCommonContext->extraPayload;
        Core_strcpy(v3->defName, 0x64ui64, InstanceCommonContext->def->name);
        LODWORD(fmt) = v3->linkedObjectIndex;
        Com_Printf(29, "[mychanges] Saving reserved server scriptable instance: %u link: %d->%d def: %s\n", v2, (unsigned __int8)v3->linkedObjectType, fmt, InstanceCommonContext->def->name);
        ++savedState->svReservedCount;
      }
      ++v2;
      ScriptableCommon_AssertCountsInitialized();
    }
    while ( v2 < g_scriptableWorldCounts.runtimeInstanceCount );
  }
  Com_Printf(29, "[mychanges] Saved %u sv reserved scriptables.\n", savedState->svReservedCount);
  ScriptableCommon_AssertCountsInitialized();
  runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
  ScriptableCommon_AssertCountsInitialized();
  while ( runtimeInstanceCount < g_scriptableWorldCounts.serverInstanceCount )
  {
    if ( ScriptableSv_GetInstanceCommonContext(runtimeInstanceCount)->linkedObjectType == SCRIPTABLE_LINK_ENTITY )
    {
      if ( savedState->mapLinkCount >= 0x800 )
      {
        LODWORD(v9) = 2048;
        LODWORD(v8) = savedState->mapLinkCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_mychanges.cpp", 99, ASSERT_TYPE_ASSERT, "(unsigned)( savedState->mapLinkCount ) < (unsigned)( ( sizeof( *array_counter( savedState->mapLinkObjects ) ) + 0 ) )", "savedState->mapLinkCount doesn't index ARRAY_COUNT( savedState->mapLinkObjects )\n\t%i not in [0, %i)", v8, v9) )
          __debugbreak();
      }
      mapLinkCount = savedState->mapLinkCount;
      savedState->mapLinkObjects[mapLinkCount].scriptableIndex = runtimeInstanceCount;
      savedState->mapLinkObjects[mapLinkCount].linkObjectIndex = ScriptableSv_GetInstanceCommonContext(runtimeInstanceCount)->linkedObjectIndex;
      if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 81, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
        __debugbreak();
      ScriptableCommon_AssertCountsInitialized();
      if ( runtimeInstanceCount >= g_scriptableWorldCounts.serverInstanceCount )
      {
        ScriptableCommon_AssertCountsInitialized();
        LODWORD(v9) = g_scriptableWorldCounts.serverInstanceCount;
        LODWORD(v8) = runtimeInstanceCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 82, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v8, v9) )
          __debugbreak();
      }
      Com_Printf(29, "[mychanges] Saving map-based entity scriptable instance: %u link: %u def: %s\n", savedState->mapLinkObjects[mapLinkCount].scriptableIndex, savedState->mapLinkObjects[mapLinkCount].linkObjectIndex, g_scriptableSv_instanceContexts[runtimeInstanceCount].commonContext.def->name);
      ++savedState->mapLinkCount;
    }
    ++runtimeInstanceCount;
    ScriptableCommon_AssertCountsInitialized();
  }
  Com_Printf(29, "[mychanges] Saved %u map scriptables.\n", savedState->mapLinkCount);
}

/*
==============
Scriptable_ShutdownPhysics
==============
*/
void Scriptable_ShutdownPhysics()
{
  unsigned int runtimeInstanceCount; 
  ScriptableInstanceServerContext *v1; 
  LocalClientNum_t v2; 
  ScriptableInstanceClientContext **v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 

  ScriptableCommon_AssertCountsInitialized();
  runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
  ScriptableCommon_AssertCountsInitialized();
  while ( runtimeInstanceCount < g_scriptableWorldCounts.serverInstanceCount )
  {
    if ( ScriptableSv_GetInstanceCommonContext(runtimeInstanceCount)->def )
    {
      if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 81, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
        __debugbreak();
      ScriptableCommon_AssertCountsInitialized();
      if ( runtimeInstanceCount >= g_scriptableWorldCounts.serverInstanceCount )
      {
        ScriptableCommon_AssertCountsInitialized();
        LODWORD(v6) = g_scriptableWorldCounts.serverInstanceCount;
        LODWORD(v5) = runtimeInstanceCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 82, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v5, v6) )
          __debugbreak();
      }
      v1 = &g_scriptableSv_instanceContexts[runtimeInstanceCount];
      v1->commonContext.data.compositeModel = NULL;
      v1->commonContext.dataType = SCRIPTABLE_DATA_TYPE_INVALID;
      if ( ScriptableSv_GetInstanceHasEntity(runtimeInstanceCount) )
        ScriptableSv_UpdateModel(runtimeInstanceCount, 0, 0);
    }
    v2 = LOCAL_CLIENT_0;
    if ( SLODWORD(cl_maxLocalClients) > 0 )
    {
      v3 = g_scriptableCl_instanceContexts;
      do
      {
        if ( ScriptableCl_GetInstanceCommonContext(v2, runtimeInstanceCount)->def )
        {
          ScriptableCommon_AssertCountsInitialized();
          if ( runtimeInstanceCount >= g_scriptableWorldCounts.totalInstanceCount )
          {
            ScriptableCommon_AssertCountsInitialized();
            LODWORD(v6) = g_scriptableWorldCounts.totalInstanceCount;
            LODWORD(v5) = runtimeInstanceCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 113, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableId ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableId doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v5, v6) )
              __debugbreak();
          }
          if ( (unsigned int)v2 >= LOCAL_CLIENT_COUNT )
          {
            LODWORD(v6) = 2;
            LODWORD(v5) = v2;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 114, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableCl_instanceContexts ) ) + 0 ) )", "localClientNum doesn't index g_scriptableCl_instanceContexts\n\t%i not in [0, %i)", v5, v6) )
              __debugbreak();
          }
          if ( !*v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_utility.h", 115, ASSERT_TYPE_ASSERT, "(g_scriptableCl_instanceContexts[localClientNum])", (const char *)&queryFormat, "g_scriptableCl_instanceContexts[localClientNum]") )
            __debugbreak();
          v4 = (__int64)&(*v3)[runtimeInstanceCount];
          *(_QWORD *)(v4 + 80) = 0i64;
          *(_BYTE *)(v4 + 89) = 0;
          ScriptableCl_ClearModel(v2, runtimeInstanceCount);
        }
        ++v2;
        ++v3;
      }
      while ( v2 < SLODWORD(cl_maxLocalClients) );
    }
    ++runtimeInstanceCount;
    ScriptableCommon_AssertCountsInitialized();
  }
}

