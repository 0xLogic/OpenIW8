/*
==============
ScriptableCl_DisassociateDynEntInstance
==============
*/

void __fastcall ScriptableCl_DisassociateDynEntInstance(const LocalClientNum_t localClientNum, const unsigned int dynEntId, const unsigned int scriptableMapIndex)
{
  ?ScriptableCl_DisassociateDynEntInstance@@YAXW4LocalClientNum_t@@II@Z(localClientNum, dynEntId, scriptableMapIndex);
}

/*
==============
ScriptableCl_TryRequestDynEntCollisionActivationChange
==============
*/

bool __fastcall ScriptableCl_TryRequestDynEntCollisionActivationChange(const LocalClientNum_t localClientNum, const unsigned int scriptableMapIndex, const bool activate)
{
  return ?ScriptableCl_TryRequestDynEntCollisionActivationChange@@YA_NW4LocalClientNum_t@@I_N@Z(localClientNum, scriptableMapIndex, activate);
}

/*
==============
ScriptableCl_GetReservedDynent
==============
*/

unsigned int __fastcall ScriptableCl_GetReservedDynent(const LocalClientNum_t localClientNum)
{
  return ?ScriptableCl_GetReservedDynent@@YAIW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
ScriptableCl_AssociateDynEntInstance
==============
*/

void __fastcall ScriptableCl_AssociateDynEntInstance(const LocalClientNum_t localClientNum, const unsigned int dynEntId, const unsigned int scriptableMapIndex)
{
  ?ScriptableCl_AssociateDynEntInstance@@YAXW4LocalClientNum_t@@II@Z(localClientNum, dynEntId, scriptableMapIndex);
}

/*
==============
ScriptableCl_AssociateDynEntPhysics
==============
*/

void __fastcall ScriptableCl_AssociateDynEntPhysics(const LocalClientNum_t localClientNum, const unsigned int dynEntId, const unsigned int scriptableMapIndex, const unsigned int scriptableSubIndex)
{
  ?ScriptableCl_AssociateDynEntPhysics@@YAXW4LocalClientNum_t@@III@Z(localClientNum, dynEntId, scriptableMapIndex, scriptableSubIndex);
}

/*
==============
ScriptableCl_AssociateDynEntInstance
==============
*/
void ScriptableCl_AssociateDynEntInstance(const LocalClientNum_t localClientNum, const unsigned int dynEntId, const unsigned int scriptableMapIndex)
{
  unsigned int v6; 
  const ScriptableDef *def; 
  int flags; 
  __int64 v9; 
  __int64 v10; 

  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 113, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
    __debugbreak();
  if ( scriptableMapIndex >= cm.mapEnts->scriptableMapEnts.mapInstanceCount )
  {
    LODWORD(v9) = scriptableMapIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_dynent.cpp", 50, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableMapIndex ) < (unsigned)( ScriptableCommon_GetMapInstanceCount() )", "scriptableMapIndex doesn't index ScriptableCommon_GetMapInstanceCount()\n\t%i not in [0, %i)", v9, cm.mapEnts->scriptableMapEnts.mapInstanceCount) )
      __debugbreak();
  }
  v6 = scriptableMapIndex + ScriptableCommon_GetMapInstanceStartOffset();
  ScriptableCommon_AssertCountsInitialized();
  if ( v6 >= g_scriptableWorldCounts.totalInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    LODWORD(v10) = g_scriptableWorldCounts.totalInstanceCount;
    LODWORD(v9) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_dynent.cpp", 53, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  if ( ScriptableCl_GetInstanceInUse(localClientNum, v6) )
  {
    def = ScriptableCl_GetInstanceCommonContext(localClientNum, v6)->def;
    if ( !def )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_dynent.cpp", 64, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 276, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
        __debugbreak();
    }
    flags = def->flags;
    if ( (flags & 2) != 0 && (flags & 0x2000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_dynent.cpp", 65, ASSERT_TYPE_ASSERT, "(!ScriptableDef_HasServerInstance( def ) || !ScriptableDef_HasEntitySupport( def ))", "%s\n\t%s is a server scriptable being used by the dynent system - in all likelyhood, this def is in a patch and a change to the def has changed its fundamental type, which is not permitted", "!ScriptableDef_HasServerInstance( def ) || !ScriptableDef_HasEntitySupport( def )", def->name) )
      __debugbreak();
    ScriptableCl_SetLink(localClientNum, v6, SCRIPTABLE_LINK_DYNENT, dynEntId);
    ScriptableCl_MarkClientUpdateRequired(localClientNum, v6, SCRIPTABLE_UPDATE_INIT);
  }
}

/*
==============
ScriptableCl_AssociateDynEntPhysics
==============
*/
void ScriptableCl_AssociateDynEntPhysics(const LocalClientNum_t localClientNum, const unsigned int dynEntId, const unsigned int scriptableMapIndex, const unsigned int scriptableSubIndex)
{
  __int64 v4; 
  __int64 v7; 
  MapEnts *mapEnts; 
  unsigned int v9; 
  __int16 v10; 
  unsigned int v11; 
  bool v12; 
  int v13; 
  const ScriptableDef *def; 
  unsigned int *foundCount; 
  __int64 v16; 
  unsigned int v17; 

  v4 = scriptableSubIndex;
  v7 = localClientNum;
  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableMapIndex >= g_scriptableWorldCounts.totalInstanceCount )
  {
    cm.mapEnts->scriptableMapEnts.reservedDynents[v7].reservedDynents[v4].dynentId = dynEntId;
    mapEnts = cm.mapEnts;
    v9 = (unsigned int)(v4 + 1) % cm.mapEnts->scriptableMapEnts.reservedDynents[v7].numReservedDynents;
    v10 = v9;
    if ( v9 > 0x7FFFFFFF || v9 + 0x8000 > 0xFFFF )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,unsigned int>(unsigned int)", "signed", (__int16)v9, "unsigned", v9) )
        __debugbreak();
      mapEnts = cm.mapEnts;
    }
    mapEnts->scriptableMapEnts.reservedDynents[v7].reservedDynents[v4].next = v10;
    return;
  }
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 113, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
    __debugbreak();
  if ( scriptableMapIndex >= cm.mapEnts->scriptableMapEnts.mapInstanceCount )
  {
    LODWORD(foundCount) = scriptableMapIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_dynent.cpp", 296, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableMapIndex ) < (unsigned)( ScriptableCommon_GetMapInstanceCount() )", "scriptableMapIndex doesn't index ScriptableCommon_GetMapInstanceCount()\n\t%i not in [0, %i)", foundCount, cm.mapEnts->scriptableMapEnts.mapInstanceCount) )
      __debugbreak();
  }
  v11 = scriptableMapIndex + ScriptableCommon_GetMapInstanceStartOffset();
  ScriptableCommon_AssertCountsInitialized();
  if ( v11 >= g_scriptableWorldCounts.totalInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    LODWORD(v16) = g_scriptableWorldCounts.totalInstanceCount;
    LODWORD(foundCount) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_dynent.cpp", 299, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", foundCount, v16) )
      __debugbreak();
  }
  if ( !ScriptableCl_GetInstanceInUse((const LocalClientNum_t)v7, v11) )
  {
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_dynent.cpp", 303, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled case of inactive scriptable with DynEntPhysics");
    goto LABEL_23;
  }
  v13 = 0;
  def = ScriptableCl_GetInstanceCommonContext((const LocalClientNum_t)v7, v11)->def;
  v17 = 0;
  if ( !def->numParts )
  {
LABEL_22:
    v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_dynent.cpp", 321, ASSERT_TYPE_ASSERT, "(found)", (const char *)&queryFormat, "found");
LABEL_23:
    if ( v12 )
      __debugbreak();
    return;
  }
  while ( !ScriptableCl_AssociateDynEntPhysics_Part((const LocalClientNum_t)v7, dynEntId, v11, &def->parts[v13], v4, &v17) )
  {
    if ( ++v13 >= def->numParts )
      goto LABEL_22;
  }
}

/*
==============
ScriptableCl_AssociateDynEntPhysics_Event
==============
*/
char ScriptableCl_AssociateDynEntPhysics_Event(const LocalClientNum_t localClientNum, const unsigned int dynEntId, const unsigned int scriptableIndex, const ScriptableEventDef *eventDef, const unsigned int scriptableSubIndex, unsigned int *foundCount)
{
  unsigned int v10; 
  unsigned int i; 
  int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned __int64 v15; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  __int64 eventStreamBufferOffsetClient; 
  ScriptableInstanceContextSecure *v18; 
  int v20; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 

  switch ( eventDef->type )
  {
    case Scriptable_EventType_Random:
      v10 = 0;
      for ( i = 0; i < eventDef->data.stateChange.stateIdx; ++i )
      {
        if ( ScriptableCl_AssociateDynEntPhysics_Event(localClientNum, dynEntId, scriptableIndex, (const ScriptableEventDef *)(eventDef->data.disablePhysicsSubShape.mutableShapeHash + 176i64 * i), scriptableSubIndex, foundCount) )
          return 1;
      }
      if ( !eventDef->data.random.eventBCount )
        return 0;
      do
      {
        if ( ScriptableCl_AssociateDynEntPhysics_Event(localClientNum, dynEntId, scriptableIndex, &eventDef->data.random.eventsB[v10], scriptableSubIndex, foundCount) )
          return 1;
        ++v10;
      }
      while ( v10 < eventDef->data.random.eventBCount );
      return 0;
    case Scriptable_EventType_Animation:
      v12 = 0;
      if ( !eventDef->data.animation.eventAtEndCount )
        return 0;
      while ( !ScriptableCl_AssociateDynEntPhysics_Event(localClientNum, dynEntId, scriptableIndex, &eventDef->data.animation.eventsAtEnd[v12], scriptableSubIndex, foundCount) )
      {
        if ( ++v12 >= eventDef->data.animation.eventAtEndCount )
          return 0;
      }
      return 1;
    case Scriptable_EventType_NoteTrack:
      v13 = 0;
      if ( !eventDef->data.stateChange.partReference.flatId )
        return 0;
      while ( 1 )
      {
        v14 = 0;
        v15 = eventDef->data.disablePhysicsSubShape.mutableShapeHash + 32i64 * v13;
        if ( *(_DWORD *)(v15 + 20) )
          break;
LABEL_17:
        if ( ++v13 >= eventDef->data.stateChange.partReference.flatId )
          return 0;
      }
      while ( !ScriptableCl_AssociateDynEntPhysics_Event(localClientNum, dynEntId, scriptableIndex, (const ScriptableEventDef *)(*(_QWORD *)(v15 + 24) + 176i64 * v14), scriptableSubIndex, foundCount) )
      {
        if ( ++v14 >= *(_DWORD *)(v15 + 20) )
          goto LABEL_17;
      }
      return 1;
    case Scriptable_EventType_SpawnDynent:
      if ( *foundCount != scriptableSubIndex )
      {
        ++*foundCount;
        return 0;
      }
      InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, scriptableIndex);
      eventStreamBufferOffsetClient = eventDef->data.spawnDynent.eventStreamBufferOffsetClient;
      v18 = InstanceCommonContext;
      if ( eventStreamBufferOffsetClient + 4 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_dynent.cpp", 183, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( uint ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( uint ) <= r_context.eventStreamBufferSize") )
        __debugbreak();
      *(_DWORD *)&v18->eventStreamBuffer[eventStreamBufferOffsetClient] = dynEntId;
      return 1;
    case Scriptable_EventType_ClientViewSelector:
      v20 = 0;
      v21 = 0;
      if ( !eventDef->data.stateChange.partReference.flatId )
        goto LABEL_29;
      while ( !ScriptableCl_AssociateDynEntPhysics_Event(localClientNum, dynEntId, scriptableIndex, (const ScriptableEventDef *)(eventDef->data.disablePhysicsSubShape.mutableShapeHash + 176i64 * v21), scriptableSubIndex, foundCount) )
      {
        if ( ++v21 >= eventDef->data.stateChange.partReference.flatId )
        {
LABEL_29:
          if ( !eventDef->data.random.eventBCount )
            return 0;
          while ( !ScriptableCl_AssociateDynEntPhysics_Event(localClientNum, dynEntId, scriptableIndex, &eventDef->data.random.eventsB[v20], scriptableSubIndex, foundCount) )
          {
            if ( ++v20 >= eventDef->data.random.eventBCount )
              return 0;
          }
          return 1;
        }
      }
      return 1;
    case Scriptable_EventType_TeamSelector:
      v22 = 0;
      v23 = 0;
      if ( !eventDef->data.teamSelector.eventPassCount )
        goto LABEL_36;
      break;
    default:
      return 0;
  }
  do
  {
    if ( ScriptableCl_AssociateDynEntPhysics_Event(localClientNum, dynEntId, scriptableIndex, (const ScriptableEventDef *)&eventDef->data.spawnDynent.tagName[176 * v23], scriptableSubIndex, foundCount) )
      return 1;
    ++v23;
  }
  while ( v23 < eventDef->data.teamSelector.eventPassCount );
LABEL_36:
  if ( eventDef->data.teamSelector.eventFailCount )
  {
    while ( !ScriptableCl_AssociateDynEntPhysics_Event(localClientNum, dynEntId, scriptableIndex, (const ScriptableEventDef *)eventDef->data.chunkDynent.part + v22, scriptableSubIndex, foundCount) )
    {
      if ( ++v22 >= eventDef->data.teamSelector.eventFailCount )
        return 0;
    }
    return 1;
  }
  return 0;
}

/*
==============
ScriptableCl_AssociateDynEntPhysics_Part
==============
*/
char ScriptableCl_AssociateDynEntPhysics_Part(const LocalClientNum_t localClientNum, const unsigned int dynEntId, const unsigned int scriptableIndex, const ScriptablePartDef *partDef, const unsigned int scriptableSubIndex, unsigned int *foundCount)
{
  int v6; 
  int v11; 

  v6 = 0;
  v11 = 0;
  if ( partDef->numStates )
  {
    while ( !ScriptableCl_AssociateDynEntPhysics_State(localClientNum, dynEntId, scriptableIndex, &partDef->states[v11], scriptableSubIndex, foundCount) )
    {
      if ( ++v11 >= partDef->numStates )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    if ( !partDef->numChildParts )
      return 0;
    while ( !ScriptableCl_AssociateDynEntPhysics_Part(localClientNum, dynEntId, scriptableIndex, &partDef->childParts[v6], scriptableSubIndex, foundCount) )
    {
      if ( ++v6 >= partDef->numChildParts )
        return 0;
    }
  }
  return 1;
}

/*
==============
ScriptableCl_AssociateDynEntPhysics_State
==============
*/
char ScriptableCl_AssociateDynEntPhysics_State(const LocalClientNum_t localClientNum, const unsigned int dynEntId, const unsigned int scriptableIndex, const ScriptableStateDef *stateDef, const unsigned int scriptableSubIndex, unsigned int *foundCount)
{
  __int64 v6; 
  LocalClientNum_t v9; 
  ScriptableEventDef *v10; 
  unsigned int v11; 
  unsigned int v12; 
  int v13; 
  unsigned int v14; 
  unsigned int v15; 
  __int64 v16; 
  ScriptablePartReference v17; 
  int v18; 
  unsigned int v19; 
  unsigned int v20; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  __int64 eventStreamBufferOffsetClient; 
  ScriptableInstanceContextSecure *v23; 
  int v25; 
  const ScriptableStateDef *v27; 

  v27 = stateDef;
  v6 = 0i64;
  v9 = localClientNum;
  v25 = 0;
  if ( !stateDef->base.numEvents )
    return 0;
  while ( 2 )
  {
    v10 = &stateDef->base.events[v6];
    switch ( v10->type )
    {
      case Scriptable_EventType_Random:
        v11 = 0;
        if ( v10->data.stateChange.stateIdx )
        {
          do
          {
            if ( ScriptableCl_AssociateDynEntPhysics_Event(v9, dynEntId, scriptableIndex, (const ScriptableEventDef *)(v10->data.disablePhysicsSubShape.mutableShapeHash + 176i64 * v11), scriptableSubIndex, foundCount) )
              return 1;
            v9 = localClientNum;
            ++v11;
          }
          while ( v11 < v10->data.stateChange.stateIdx );
          stateDef = v27;
        }
        v12 = 0;
        if ( !v10->data.random.eventBCount )
          goto LABEL_39;
        do
        {
          if ( ScriptableCl_AssociateDynEntPhysics_Event(v9, dynEntId, scriptableIndex, &v10->data.random.eventsB[v12], scriptableSubIndex, foundCount) )
            return 1;
          v9 = localClientNum;
          ++v12;
        }
        while ( v12 < v10->data.random.eventBCount );
        goto LABEL_38;
      case Scriptable_EventType_Animation:
        v13 = 0;
        if ( !v10->data.animation.eventAtEndCount )
          goto LABEL_39;
        while ( !ScriptableCl_AssociateDynEntPhysics_Event(v9, dynEntId, scriptableIndex, &v10->data.animation.eventsAtEnd[v13], scriptableSubIndex, foundCount) )
        {
          v9 = localClientNum;
          if ( ++v13 >= v10->data.animation.eventAtEndCount )
            goto LABEL_38;
        }
        return 1;
      case Scriptable_EventType_NoteTrack:
        v14 = 0;
        if ( !v10->data.stateChange.partReference.flatId )
          goto LABEL_39;
        while ( 1 )
        {
          v15 = 0;
          v16 = v10->data.disablePhysicsSubShape.mutableShapeHash + 32i64 * v14;
          if ( *(_DWORD *)(v16 + 20) )
            break;
LABEL_19:
          if ( ++v14 >= v10->data.stateChange.partReference.flatId )
            goto LABEL_38;
        }
        while ( !ScriptableCl_AssociateDynEntPhysics_Event(v9, dynEntId, scriptableIndex, (const ScriptableEventDef *)(*(_QWORD *)(v16 + 24) + 176i64 * v15), scriptableSubIndex, foundCount) )
        {
          v9 = localClientNum;
          if ( ++v15 >= *(_DWORD *)(v16 + 20) )
            goto LABEL_19;
        }
        return 1;
      case Scriptable_EventType_SpawnDynent:
        if ( *foundCount != scriptableSubIndex )
        {
          ++*foundCount;
LABEL_39:
          v6 = (unsigned int)(v25 + 1);
          v25 = v6;
          if ( (unsigned int)v6 >= stateDef->base.numEvents )
            return 0;
          v9 = localClientNum;
          continue;
        }
        InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(v9, scriptableIndex);
        eventStreamBufferOffsetClient = v10->data.spawnDynent.eventStreamBufferOffsetClient;
        v23 = InstanceCommonContext;
        if ( eventStreamBufferOffsetClient + 4 > (unsigned __int64)InstanceCommonContext->eventStreamBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_dynent.cpp", 183, ASSERT_TYPE_ASSERT, "(eventBufferOffset + sizeof( uint ) <= r_context.eventStreamBufferSize)", (const char *)&queryFormat, "eventBufferOffset + sizeof( uint ) <= r_context.eventStreamBufferSize") )
          __debugbreak();
        *(_DWORD *)&v23->eventStreamBuffer[eventStreamBufferOffsetClient] = dynEntId;
        return 1;
      case Scriptable_EventType_ClientViewSelector:
        v17.flatId = 0;
        if ( !v10->data.stateChange.partReference.flatId )
          goto LABEL_27;
        do
        {
          if ( ScriptableCl_AssociateDynEntPhysics_Event(v9, dynEntId, scriptableIndex, (const ScriptableEventDef *)(v10->data.disablePhysicsSubShape.mutableShapeHash + 176i64 * v17.flatId), scriptableSubIndex, foundCount) )
            return 1;
          v9 = localClientNum;
          ++v17.flatId;
        }
        while ( v17.flatId < v10->data.stateChange.partReference.flatId );
        stateDef = v27;
LABEL_27:
        v18 = 0;
        if ( !v10->data.random.eventBCount )
          goto LABEL_39;
        while ( !ScriptableCl_AssociateDynEntPhysics_Event(v9, dynEntId, scriptableIndex, &v10->data.random.eventsB[v18], scriptableSubIndex, foundCount) )
        {
          v9 = localClientNum;
          if ( ++v18 >= v10->data.random.eventBCount )
            goto LABEL_38;
        }
        return 1;
      case Scriptable_EventType_TeamSelector:
        v19 = 0;
        if ( !v10->data.teamSelector.eventPassCount )
          goto LABEL_35;
        do
        {
          if ( ScriptableCl_AssociateDynEntPhysics_Event(v9, dynEntId, scriptableIndex, (const ScriptableEventDef *)&v10->data.spawnDynent.tagName[176 * v19], scriptableSubIndex, foundCount) )
            return 1;
          v9 = localClientNum;
          ++v19;
        }
        while ( v19 < v10->data.teamSelector.eventPassCount );
        stateDef = v27;
LABEL_35:
        v20 = 0;
        if ( v10->data.teamSelector.eventFailCount )
        {
          do
          {
            if ( ScriptableCl_AssociateDynEntPhysics_Event(v9, dynEntId, scriptableIndex, (const ScriptableEventDef *)v10->data.chunkDynent.part + v20, scriptableSubIndex, foundCount) )
              return 1;
            v9 = localClientNum;
            ++v20;
          }
          while ( v20 < v10->data.teamSelector.eventFailCount );
LABEL_38:
          stateDef = v27;
        }
        goto LABEL_39;
      default:
        goto LABEL_39;
    }
  }
}

/*
==============
ScriptableCl_DisassociateDynEntInstance
==============
*/
void ScriptableCl_DisassociateDynEntInstance(const LocalClientNum_t localClientNum, const unsigned int dynEntId, const unsigned int scriptableMapIndex)
{
  unsigned int v6; 
  const ScriptableDef *def; 
  int flags; 
  unsigned int LinkObject; 
  ScriptableInstanceContextSecure *InstanceCommonContext; 
  const char *name; 
  __int64 v12; 
  __int64 v13; 

  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 113, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
    __debugbreak();
  if ( scriptableMapIndex >= cm.mapEnts->scriptableMapEnts.mapInstanceCount )
  {
    LODWORD(v12) = scriptableMapIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_dynent.cpp", 79, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableMapIndex ) < (unsigned)( ScriptableCommon_GetMapInstanceCount() )", "scriptableMapIndex doesn't index ScriptableCommon_GetMapInstanceCount()\n\t%i not in [0, %i)", v12, cm.mapEnts->scriptableMapEnts.mapInstanceCount) )
      __debugbreak();
  }
  v6 = scriptableMapIndex + ScriptableCommon_GetMapInstanceStartOffset();
  ScriptableCommon_AssertCountsInitialized();
  if ( v6 >= g_scriptableWorldCounts.totalInstanceCount )
  {
    ScriptableCommon_AssertCountsInitialized();
    LODWORD(v13) = g_scriptableWorldCounts.totalInstanceCount;
    LODWORD(v12) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_dynent.cpp", 82, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetTotalInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetTotalInstanceCount()\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  if ( ScriptableCl_GetInstanceInUse(localClientNum, v6) )
  {
    def = ScriptableCl_GetInstanceCommonContext(localClientNum, v6)->def;
    if ( !def )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_dynent.cpp", 94, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_load_query.h", 276, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
        __debugbreak();
    }
    flags = def->flags;
    if ( (flags & 2) != 0 && (flags & 0x2000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_dynent.cpp", 95, ASSERT_TYPE_ASSERT, "(!ScriptableDef_HasServerInstance( def ) || !ScriptableDef_HasEntitySupport( def ))", (const char *)&queryFormat, "!ScriptableDef_HasServerInstance( def ) || !ScriptableDef_HasEntitySupport( def )") )
      __debugbreak();
    if ( !ScriptableCl_GetLinkEquals(localClientNum, v6, SCRIPTABLE_LINK_DYNENT, dynEntId) )
    {
      LinkObject = ScriptableCl_GetLinkObject(localClientNum, v6);
      InstanceCommonContext = ScriptableCl_GetInstanceCommonContext(localClientNum, v6);
      if ( InstanceCommonContext->def )
        name = InstanceCommonContext->def->name;
      else
        name = "<unknown>";
      LODWORD(v13) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_dynent.cpp", 96, ASSERT_TYPE_ASSERT, "(ScriptableCl_GetLinkEquals( localClientNum, scriptableIndex, SCRIPTABLE_LINK_DYNENT, dynEntId ))", "%s\n\tDisassociating from dynent that we don't match for scriptable (%i %s) that's already linked (%d).", "ScriptableCl_GetLinkEquals( localClientNum, scriptableIndex, SCRIPTABLE_LINK_DYNENT, dynEntId )", v13, name, LinkObject) )
        __debugbreak();
    }
    ScriptableCl_MarkClientUpdateRequired(localClientNum, v6, SCRIPTABLE_UPDATE_SHUTDOWN);
    ScriptableCl_ClearLink(localClientNum, v6);
  }
}

/*
==============
ScriptableCl_GetReservedDynent
==============
*/
__int64 ScriptableCl_GetReservedDynent(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  __int64 freeHead; 

  v1 = localClientNum;
  CG_EntityWorkers_EnterCriticalSection_ScriptableCl(NONE_LEGACY);
  v2 = 2 * (v1 + 42);
  v3 = v1;
  freeHead = cm.mapEnts->scriptableMapEnts.reservedDynents[v1].freeHead;
  *((_WORD *)&cm.mapEnts->name + 4 * v2) = (unsigned int)(freeHead + 1) % cm.mapEnts->scriptableMapEnts.reservedDynents[v3].numReservedDynents;
  CG_EntityWorkers_LeaveCriticalSection_ScriptableCl(NONE_LEGACY);
  return cm.mapEnts->scriptableMapEnts.reservedDynents[v3].reservedDynents[freeHead].dynentId;
}

/*
==============
ScriptableCl_TryRequestDynEntCollisionActivationChange
==============
*/
bool ScriptableCl_TryRequestDynEntCollisionActivationChange(const LocalClientNum_t localClientNum, const unsigned int scriptableMapIndex, const bool activate)
{
  BOOL v3; 
  unsigned int MapInstanceStartOffset; 

  v3 = activate;
  MapInstanceStartOffset = ScriptableCommon_GetMapInstanceStartOffset();
  return ScriptableCl_QueueClientCollisionUpdate(localClientNum, scriptableMapIndex + MapInstanceStartOffset, (const ScriptableCollisionUpdateType)!v3);
}

