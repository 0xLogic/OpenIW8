/*
==============
ScriptableBg_ReleaseScriptableAsset
==============
*/

void __fastcall ScriptableBg_ReleaseScriptableAsset(ScriptableDef *scriptableDef, bool unloadPackFileData)
{
  ?ScriptableBg_ReleaseScriptableAsset@@YAXPEAUScriptableDef@@_N@Z(scriptableDef, unloadPackFileData);
}

/*
==============
ScriptableBg_GetNetConstStringDefAtIndex
==============
*/

const ScriptableDef *__fastcall ScriptableBg_GetNetConstStringDefAtIndex(const unsigned int index)
{
  return ?ScriptableBg_GetNetConstStringDefAtIndex@@YAPEBUScriptableDef@@I@Z(index);
}

/*
==============
ScriptableBg_AllowTransientScriptable
==============
*/

bool __fastcall ScriptableBg_AllowTransientScriptable(const entityState_t *const es)
{
  return ?ScriptableBg_AllowTransientScriptable@@YA_NQEBUentityState_t@@@Z(es);
}

/*
==============
ScriptableBg_InitNetConstStringDefs
==============
*/

void __fastcall ScriptableBg_InitNetConstStringDefs(const bool isFullInit)
{
  ?ScriptableBg_InitNetConstStringDefs@@YAX_N@Z(isFullInit);
}

/*
==============
ScriptableBg_EnumerateAssets
==============
*/

void __fastcall ScriptableBg_EnumerateAssets(const ScriptableContext context, void (__fastcall *callback)(const ScriptableContext, const ScriptableDef *, const ScriptableEventDef *))
{
  ?ScriptableBg_EnumerateAssets@@YAXW4ScriptableContext@@P6AX0PEBUScriptableDef@@PEBUScriptableEventDef@@@Z@Z(context, callback);
}

/*
==============
ScriptableBg_CopyScriptableAsset
==============
*/

void __fastcall ScriptableBg_CopyScriptableAsset(ScriptableDef *from, ScriptableDef *to)
{
  ?ScriptableBg_CopyScriptableAsset@@YAXPEAUScriptableDef@@0@Z(from, to);
}

/*
==============
ScriptableBg_SwapScriptableAsset
==============
*/

void __fastcall ScriptableBg_SwapScriptableAsset(ScriptableDef *from, ScriptableDef *to)
{
  ?ScriptableBg_SwapScriptableAsset@@YAXPEAUScriptableDef@@0@Z(from, to);
}

/*
==============
ScriptableBg_AddScriptableAsset
==============
*/

void __fastcall ScriptableBg_AddScriptableAsset(ScriptableDef *scriptableDef)
{
  ?ScriptableBg_AddScriptableAsset@@YAXPEAUScriptableDef@@@Z(scriptableDef);
}

/*
==============
ScriptableBg_MoveScriptableAsset
==============
*/

void __fastcall ScriptableBg_MoveScriptableAsset(ScriptableDef *from, ScriptableDef *to)
{
  ?ScriptableBg_MoveScriptableAsset@@YAXPEAUScriptableDef@@0@Z(from, to);
}

/*
==============
ScriptableBg_AddScriptableAsset
==============
*/
void ScriptableBg_AddScriptableAsset(ScriptableDef *scriptableDef)
{
  int v2; 

  if ( g_scriptableDefVector.m_size >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
    __debugbreak();
  v2 = 0;
  *(_QWORD *)&g_scriptableDefVector.m_data.m_buffer[8 * g_scriptableDefVector.m_size++] = scriptableDef;
  if ( scriptableDef->numParts )
  {
    while ( ScriptableBg_FixupPartRefs(scriptableDef, NULL, &scriptableDef->parts[v2]) )
    {
      if ( ++v2 >= scriptableDef->numParts )
        return;
    }
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144077230, 188i64, scriptableDef->name);
  }
}

/*
==============
ScriptableBg_AllowTransientScriptable
==============
*/
bool ScriptableBg_AllowTransientScriptable(const entityState_t *const es)
{
  return ((es->eType - 19) & 0xFFFD) == 0;
}

/*
==============
ScriptableBg_CopyScriptableAsset
==============
*/
void ScriptableBg_CopyScriptableAsset(ScriptableDef *from, ScriptableDef *to)
{
  if ( g_scriptableDefVector.m_size >= 0x400 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
    __debugbreak();
  *(_QWORD *)&g_scriptableDefVector.m_data.m_buffer[8 * g_scriptableDefVector.m_size++] = to;
}

/*
==============
ScriptableBg_EnumerateAssets
==============
*/
void ScriptableBg_EnumerateAssets(const ScriptableContext context, void (*callback)(const ScriptableContext, const ScriptableDef *, const ScriptableEventDef *))
{
  ntl::fixed_vector<ScriptableDef *,1024,0> *i; 
  const ScriptableDef *v5; 
  unsigned int j; 
  __int64 v7; 
  __int64 k; 
  unsigned int m; 
  __int64 v10; 

  if ( !callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_assets.cpp", 476, ASSERT_TYPE_ASSERT, "( callback != nullptr )", "There's no value in enumerating assets without a callback") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF0000FF, "ScriptableBg_EnumerateAssets");
  for ( i = &g_scriptableDefVector; i != (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)&g_scriptableDefVector + 8 * g_scriptableDefVector.m_size); i = (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)i + 8) )
  {
    v5 = *(const ScriptableDef **)i->m_data.m_buffer;
    if ( !*(_QWORD *)i->m_data.m_buffer )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_assets.cpp", 484, ASSERT_TYPE_ASSERT, "( def )", (const char *)&queryFormat, "def") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_assets.cpp", 459, ASSERT_TYPE_ASSERT, "( scriptableDef )", (const char *)&queryFormat, "scriptableDef") )
        __debugbreak();
    }
    for ( j = 0; j < v5->numParts; ++j )
    {
      v7 = (__int64)&v5->parts[j];
      if ( context || (*(_BYTE *)(v7 + 12) & 2) != 0 )
      {
        for ( k = 0i64; (unsigned int)k < *(_DWORD *)(v7 + 44); k = (unsigned int)(k + 1) )
          ScriptableBg_EnumerateAssets_State(context, callback, v5, (const ScriptableStateDef *)(*(_QWORD *)(v7 + 48) + 160 * k));
        for ( m = 0; m < *(_DWORD *)(v7 + 64); ++m )
        {
          v10 = *(_QWORD *)(v7 + 72) + 104i64 * m;
          if ( context || (*(_BYTE *)(v10 + 12) & 2) != 0 )
            ScriptableBg_EnumerateAssets_Parts(context, callback, v5, (const ScriptablePartDef *)v10);
        }
      }
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
ScriptableBg_EnumerateAssets_Events
==============
*/
void ScriptableBg_EnumerateAssets_Events(const ScriptableContext context, void (*callback)(const ScriptableContext, const ScriptableDef *, const ScriptableEventDef *), const ScriptableDef *scriptableDef, const ScriptableEventDef *eventDef)
{
  unsigned int v8; 
  unsigned int k; 
  unsigned int v10; 
  ScriptablePartReference v11; 
  ScriptablePartReference v12; 
  unsigned int v13; 
  unsigned __int64 v14; 
  unsigned int j; 
  unsigned int v16; 
  unsigned int i; 

  switch ( eventDef->type )
  {
    case Scriptable_EventType_Random:
      v16 = 0;
      for ( i = 0; i < eventDef->data.stateChange.stateIdx; ++i )
        ScriptableBg_EnumerateAssets_Events(context, callback, scriptableDef, (const ScriptableEventDef *)(eventDef->data.disablePhysicsSubShape.mutableShapeHash + 176i64 * i));
      if ( eventDef->data.random.eventBCount )
      {
        do
          ScriptableBg_EnumerateAssets_Events(context, callback, scriptableDef, &eventDef->data.random.eventsB[v16++]);
        while ( v16 < eventDef->data.random.eventBCount );
      }
      break;
    case Scriptable_EventType_Animation:
      for ( j = 0; j < eventDef->data.animation.eventAtEndCount; ++j )
        ScriptableBg_EnumerateAssets_Events(context, callback, scriptableDef, &eventDef->data.animation.eventsAtEnd[j]);
      break;
    case Scriptable_EventType_NoteTrack:
      for ( v12.flatId = 0; v12.flatId < eventDef->data.stateChange.partReference.flatId; ++v12.flatId )
      {
        v13 = 0;
        v14 = eventDef->data.disablePhysicsSubShape.mutableShapeHash + 32i64 * v12.flatId;
        if ( *(_DWORD *)(v14 + 20) )
        {
          do
            ScriptableBg_EnumerateAssets_Events(context, callback, scriptableDef, (const ScriptableEventDef *)(*(_QWORD *)(v14 + 24) + 176i64 * v13++));
          while ( v13 < *(_DWORD *)(v14 + 20) );
        }
      }
      break;
    case Scriptable_EventType_ClientViewSelector:
      v10 = 0;
      for ( v11.flatId = 0; v11.flatId < eventDef->data.stateChange.partReference.flatId; ++v11.flatId )
        ScriptableBg_EnumerateAssets_Events(context, callback, scriptableDef, (const ScriptableEventDef *)(eventDef->data.disablePhysicsSubShape.mutableShapeHash + 176i64 * v11.flatId));
      if ( eventDef->data.random.eventBCount )
      {
        do
          ScriptableBg_EnumerateAssets_Events(context, callback, scriptableDef, &eventDef->data.random.eventsB[v10++]);
        while ( v10 < eventDef->data.random.eventBCount );
      }
      break;
    case Scriptable_EventType_TeamSelector:
      v8 = 0;
      for ( k = 0; k < eventDef->data.teamSelector.eventPassCount; ++k )
        ScriptableBg_EnumerateAssets_Events(context, callback, scriptableDef, (const ScriptableEventDef *)&eventDef->data.spawnDynent.tagName[176 * k]);
      if ( eventDef->data.teamSelector.eventFailCount )
      {
        do
          ScriptableBg_EnumerateAssets_Events(context, callback, scriptableDef, (const ScriptableEventDef *)eventDef->data.chunkDynent.part + v8++);
        while ( v8 < eventDef->data.teamSelector.eventFailCount );
      }
      break;
  }
  if ( !callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_assets.cpp", 417, ASSERT_TYPE_ASSERT, "( callback != nullptr )", (const char *)&queryFormat, "callback != nullptr") )
    __debugbreak();
  callback(context, scriptableDef, eventDef);
}

/*
==============
ScriptableBg_EnumerateAssets_Parts
==============
*/
void ScriptableBg_EnumerateAssets_Parts(const ScriptableContext context, void (*callback)(const ScriptableContext, const ScriptableDef *, const ScriptableEventDef *), const ScriptableDef *scriptableDef, const ScriptablePartDef *partDef)
{
  unsigned int v4; 
  unsigned int i; 
  ScriptablePartDef *v10; 

  v4 = 0;
  for ( i = 0; i < partDef->numStates; ++i )
    ScriptableBg_EnumerateAssets_State(context, callback, scriptableDef, &partDef->states[i]);
  if ( partDef->numChildParts )
  {
    do
    {
      v10 = &partDef->childParts[v4];
      if ( context || (v10->flags & 2) != 0 )
        ScriptableBg_EnumerateAssets_Parts(context, callback, scriptableDef, v10);
      ++v4;
    }
    while ( v4 < partDef->numChildParts );
  }
}

/*
==============
ScriptableBg_EnumerateAssets_State
==============
*/
void ScriptableBg_EnumerateAssets_State(const ScriptableContext context, void (*callback)(const ScriptableContext, const ScriptableDef *, const ScriptableEventDef *), const ScriptableDef *scriptableDef, const ScriptableStateDef *stateDef)
{
  unsigned int v4; 
  const ScriptableStateDef *v5; 
  __int64 v9; 
  unsigned int m; 
  unsigned int v11; 
  unsigned int k; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  __int64 v16; 
  unsigned int j; 
  unsigned int i; 
  unsigned int v19; 

  v4 = 0;
  v5 = stateDef;
  while ( v4 < v5->base.numEvents )
  {
    v9 = (__int64)&v5->base.events[v4];
    switch ( *(_DWORD *)(v9 + 16) )
    {
      case 2:
        for ( i = 0; i < *(_DWORD *)(v9 + 36); ++i )
          ScriptableBg_EnumerateAssets_Events(context, callback, scriptableDef, (const ScriptableEventDef *)(*(_QWORD *)(v9 + 40) + 176i64 * i));
        v19 = 0;
        if ( !*(_DWORD *)(v9 + 48) )
          goto LABEL_29;
        do
          ScriptableBg_EnumerateAssets_Events(context, callback, scriptableDef, (const ScriptableEventDef *)(*(_QWORD *)(v9 + 56) + 176i64 * v19++));
        while ( v19 < *(_DWORD *)(v9 + 48) );
        v5 = stateDef;
        break;
      case 6:
        for ( j = 0; j < *(_DWORD *)(v9 + 68); ++j )
          ScriptableBg_EnumerateAssets_Events(context, callback, scriptableDef, (const ScriptableEventDef *)(*(_QWORD *)(v9 + 72) + 176i64 * j));
LABEL_29:
        v5 = stateDef;
        break;
      case 9:
        v14 = 0;
        if ( *(_DWORD *)(v9 + 32) )
        {
          do
          {
            v15 = 0;
            v16 = *(_QWORD *)(v9 + 40) + 32i64 * v14;
            if ( *(_DWORD *)(v16 + 20) )
            {
              do
                ScriptableBg_EnumerateAssets_Events(context, callback, scriptableDef, (const ScriptableEventDef *)(*(_QWORD *)(v16 + 24) + 176i64 * v15++));
              while ( v15 < *(_DWORD *)(v16 + 20) );
            }
            ++v14;
          }
          while ( v14 < *(_DWORD *)(v9 + 32) );
          v5 = stateDef;
        }
        break;
      case 0x18:
        for ( k = 0; k < *(_DWORD *)(v9 + 32); ++k )
          ScriptableBg_EnumerateAssets_Events(context, callback, scriptableDef, (const ScriptableEventDef *)(*(_QWORD *)(v9 + 40) + 176i64 * k));
        v13 = 0;
        if ( !*(_DWORD *)(v9 + 48) )
          goto LABEL_29;
        do
          ScriptableBg_EnumerateAssets_Events(context, callback, scriptableDef, (const ScriptableEventDef *)(*(_QWORD *)(v9 + 56) + 176i64 * v13++));
        while ( v13 < *(_DWORD *)(v9 + 48) );
        v5 = stateDef;
        break;
      case 0x19:
        for ( m = 0; m < *(_DWORD *)(v9 + 40); ++m )
          ScriptableBg_EnumerateAssets_Events(context, callback, scriptableDef, (const ScriptableEventDef *)(*(_QWORD *)(v9 + 48) + 176i64 * m));
        v11 = 0;
        if ( !*(_DWORD *)(v9 + 56) )
          goto LABEL_29;
        do
          ScriptableBg_EnumerateAssets_Events(context, callback, scriptableDef, (const ScriptableEventDef *)(*(_QWORD *)(v9 + 64) + 176i64 * v11++));
        while ( v11 < *(_DWORD *)(v9 + 56) );
        v5 = stateDef;
        break;
    }
    if ( !callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_assets.cpp", 417, ASSERT_TYPE_ASSERT, "( callback != nullptr )", (const char *)&queryFormat, "callback != nullptr") )
      __debugbreak();
    callback(context, scriptableDef, (const ScriptableEventDef *)v9);
    ++v4;
  }
}

/*
==============
ScriptableBg_FindPartByFlatId
==============
*/
ScriptablePartDef *ScriptableBg_FindPartByFlatId(ScriptablePartDef *part, const unsigned int flatId)
{
  ScriptablePartDef *result; 
  int v5; 

  if ( !part && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_assets.cpp", 38, ASSERT_TYPE_ASSERT, "(part)", (const char *)&queryFormat, "part") )
    __debugbreak();
  if ( part->flatId == flatId )
    return part;
  v5 = 0;
  if ( !part->numChildParts )
    return 0i64;
  while ( 1 )
  {
    result = ScriptableBg_FindPartByFlatId(&part->childParts[v5], flatId);
    if ( result )
    {
      if ( result->flatId == flatId )
        break;
    }
    if ( ++v5 >= part->numChildParts )
      return 0i64;
  }
  return result;
}

/*
==============
ScriptableBg_FixupPartRef
==============
*/
__int64 ScriptableBg_FixupPartRef(ScriptableDef *scriptableDef, ScriptablePartDef **partDef, const unsigned int flatId)
{
  unsigned __int8 v4; 
  unsigned int v5; 
  ScriptablePartDef *v7; 
  int v8; 
  unsigned int *p_numChildParts; 
  ScriptablePartDef **p_childParts; 
  ScriptablePartDef *PartByFlatId; 

  *partDef = NULL;
  v4 = 0;
  v5 = 0;
  if ( !scriptableDef->numParts )
    goto LABEL_18;
  do
  {
    v7 = &scriptableDef->parts[v5];
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_assets.cpp", 38, ASSERT_TYPE_ASSERT, "(part)", (const char *)&queryFormat, "part") )
      __debugbreak();
    if ( v7->flatId != flatId )
    {
      v8 = 0;
      p_numChildParts = &v7->numChildParts;
      if ( !v7->numChildParts )
        goto LABEL_13;
      p_childParts = &v7->childParts;
      while ( 1 )
      {
        PartByFlatId = ScriptableBg_FindPartByFlatId(&(*p_childParts)[v8], flatId);
        v7 = PartByFlatId;
        if ( PartByFlatId )
        {
          if ( PartByFlatId->flatId == flatId )
            break;
        }
        if ( ++v8 >= *p_numChildParts )
          goto LABEL_13;
      }
    }
    if ( v7 )
    {
      v4 = 1;
      *partDef = v7;
      goto LABEL_17;
    }
LABEL_13:
    ++v5;
  }
  while ( v5 < scriptableDef->numParts );
  v7 = *partDef;
LABEL_17:
  if ( !v7 )
  {
LABEL_18:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_assets.cpp", 76, ASSERT_TYPE_ASSERT, "(*partDef)", (const char *)&queryFormat, "*partDef") )
      __debugbreak();
  }
  return v4;
}

/*
==============
ScriptableBg_FixupPartRefs
==============
*/
__int64 ScriptableBg_FixupPartRefs(ScriptableDef *scriptableDef, ScriptablePartDef *parentPartDef, ScriptablePartDef *partDef)
{
  unsigned int v3; 
  unsigned __int8 v7; 
  unsigned int i; 

  v3 = 0;
  partDef->parentPart = parentPartDef;
  v7 = 1;
  for ( i = 0; i < partDef->numStates; ++i )
    v7 &= ScriptableBg_FixupPartRefs_0(scriptableDef, parentPartDef, partDef, &partDef->states[i]);
  if ( partDef->numChildParts )
  {
    do
      v7 &= ScriptableBg_FixupPartRefs(scriptableDef, partDef, &partDef->childParts[v3++]);
    while ( v3 < partDef->numChildParts );
  }
  return v7;
}

/*
==============
ScriptableBg_GetNetConstStringDefAtIndex
==============
*/
ScriptableDef *ScriptableBg_GetNetConstStringDefAtIndex(const unsigned int index)
{
  __int64 v1; 
  int v4; 

  v1 = index;
  if ( index >= 0x200 )
  {
    v4 = 512;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_assets.cpp", 552, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_scriptableNetConstStringDefs ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_scriptableNetConstStringDefs )\n\t%i not in [0, %i)", index, v4) )
      __debugbreak();
  }
  return s_scriptableNetConstStringDefs[v1];
}

/*
==============
ScriptableBg_InitNetConstStringDefs
==============
*/
void ScriptableBg_InitNetConstStringDefs(const bool isFullInit)
{
  if ( isFullInit )
  {
    memset_0(s_scriptableNetConstStringDefs, 0, sizeof(s_scriptableNetConstStringDefs));
    NetConstStrings_CallForAllScriptableDefs(ScriptableBg_InitNetConstStringDefs_InitCallback);
  }
  else
  {
    NetConstStrings_CallForAllScriptableDefs(ScriptableBg_InitNetConstStringDefs_VerifyCallback);
  }
}

/*
==============
ScriptableBg_InitNetConstStringDefs_InitCallback
==============
*/
void ScriptableBg_InitNetConstStringDefs_InitCallback(const unsigned int index, const char *name)
{
  __int64 v2; 
  int v5; 

  v2 = index;
  if ( index >= 0x200 )
  {
    v5 = 512;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_assets.cpp", 501, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_scriptableNetConstStringDefs ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_scriptableNetConstStringDefs )\n\t%i not in [0, %i)", index, v5) )
      __debugbreak();
  }
  s_scriptableNetConstStringDefs[v2] = DB_FindXAssetHeader(ASSET_TYPE_SCRIPTABLE, name, 0).scriptable;
}

/*
==============
ScriptableBg_InitNetConstStringDefs_VerifyCallback
==============
*/
void ScriptableBg_InitNetConstStringDefs_VerifyCallback(const unsigned int index, const char *name)
{
  __int64 v2; 
  XAssetHeader v4; 
  ScriptableDef *v5; 
  const char *v6; 
  int v7; 
  const char *v8; 
  const char *v9; 
  const char *v10; 
  __int64 v11; 
  signed __int64 v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  int v16; 
  int v17; 

  v2 = index;
  if ( index >= 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_assets.cpp", 511, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_scriptableNetConstStringDefs ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_scriptableNetConstStringDefs )\n\t%i not in [0, %i)", index, 512) )
    __debugbreak();
  v4.physicsLibrary = DB_FindXAssetHeader(ASSET_TYPE_SCRIPTABLE, name, 0).physicsLibrary;
  v5 = s_scriptableNetConstStringDefs[v2];
  if ( v5 )
  {
    v9 = v5->name;
    v10 = v4.physicsLibrary->name;
    v11 = 0x7FFFFFFFi64;
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    v12 = v9 - v10;
    do
    {
      v13 = (unsigned __int8)v10[v12];
      v14 = v11;
      v15 = *(unsigned __int8 *)v10++;
      --v11;
      if ( !v14 )
        break;
      if ( v13 != v15 )
      {
        v16 = v13 + 32;
        if ( (unsigned int)(v13 - 65) > 0x19 )
          v16 = v13;
        v13 = v16;
        v17 = v15 + 32;
        if ( (unsigned int)(v15 - 65) > 0x19 )
          v17 = v15;
        if ( v13 != v17 )
        {
          v6 = "!I_stricmp( s_scriptableNetConstStringDefs[index]->name, entry.scriptable->name )";
          v7 = 521;
          v8 = "(!I_stricmp( s_scriptableNetConstStringDefs[index]->name, entry.scriptable->name ))";
          goto LABEL_24;
        }
      }
    }
    while ( v13 );
  }
  else if ( v4.physicsLibrary )
  {
    v6 = "entry.scriptable == nullptr";
    v7 = 517;
    v8 = "(entry.scriptable == nullptr)";
LABEL_24:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_game_bg_assets.cpp", v7, ASSERT_TYPE_ASSERT, v8, (const char *)&queryFormat, v6) )
      __debugbreak();
  }
}

/*
==============
ScriptableBg_MoveScriptableAsset
==============
*/
void ScriptableBg_MoveScriptableAsset(ScriptableDef *from, ScriptableDef *to)
{
  ntl::fixed_vector<ScriptableDef *,1024,0> *v7; 
  ntl::fixed_vector<ScriptableDef *,1024,0> *v8; 
  __int64 v9; 
  ntl::fixed_vector<ScriptableDef *,1024,0> *v10; 
  char *v11; 
  ntl::fixed_vector<ScriptableDef *,1024,0> *v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 

  __asm
  {
    vmovups ymm0, ymmword ptr [rcx]
    vmovups ymmword ptr [rdx], ymm0
    vmovups ymm1, ymmword ptr [rcx+20h]
    vmovups ymmword ptr [rdx+20h], ymm1
    vmovups ymm0, ymmword ptr [rcx+40h]
    vmovups ymmword ptr [rdx+40h], ymm0
    vmovups xmm1, xmmword ptr [rcx+60h]
    vmovups xmmword ptr [rdx+60h], xmm1
    vmovsd  xmm0, qword ptr [rcx+70h]
    vmovsd  qword ptr [rdx+70h], xmm0
  }
  v7 = &g_scriptableDefVector;
  v8 = (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)&g_scriptableDefVector + 8 * g_scriptableDefVector.m_size);
  if ( &g_scriptableDefVector != v8 )
  {
    while ( *(ScriptableDef **)v7->m_data.m_buffer != from )
    {
      v7 = (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)v7 + 8);
      if ( v7 == v8 )
        return;
    }
    if ( !g_scriptableDefVector.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
      __debugbreak();
    if ( (v7 < &g_scriptableDefVector || v7 > (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)&g_scriptableDefVector + 8 * g_scriptableDefVector.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
      __debugbreak();
    v9 = (char *)v7 - (char *)&g_scriptableDefVector;
    if ( (((_BYTE)v7 - (unsigned __int8)&g_scriptableDefVector) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
      __debugbreak();
    if ( v7 == (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)&g_scriptableDefVector + 8 * g_scriptableDefVector.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
      __debugbreak();
    v10 = &g_scriptableDefVector;
    if ( g_scriptableDefVector.m_size )
      v10 = (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)&g_scriptableDefVector + 8 * (v9 >> 3));
    v11 = &v10->m_data.m_buffer[8];
    v12 = (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)&g_scriptableDefVector + 8 * g_scriptableDefVector.m_size);
    if ( &v10->m_data.m_buffer[8] == (char *)v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
      __debugbreak();
    if ( v12 == v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
      __debugbreak();
    if ( v12 < (ntl::fixed_vector<ScriptableDef *,1024,0> *)v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
      __debugbreak();
    v13 = 0i64;
    v14 = (unsigned __int64)((char *)v12 - v11 + 7) >> 3;
    if ( v11 > (char *)v12 )
      v14 = 0i64;
    if ( v14 )
    {
      do
      {
        ++v13;
        *(_QWORD *)v10->m_data.m_buffer = *(_QWORD *)v11;
        v10 = (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)v10 + 8);
        v11 += 8;
      }
      while ( v13 < v14 );
    }
    --g_scriptableDefVector.m_size;
  }
}

/*
==============
ScriptableBg_ReleaseScriptableAsset
==============
*/
void ScriptableBg_ReleaseScriptableAsset(ScriptableDef *scriptableDef, bool unloadPackFileData)
{
  ntl::fixed_vector<ScriptableDef *,1024,0> *v2; 
  ntl::fixed_vector<ScriptableDef *,1024,0> *v3; 
  __int64 v4; 
  ntl::fixed_vector<ScriptableDef *,1024,0> *v5; 
  char *v6; 
  ntl::fixed_vector<ScriptableDef *,1024,0> *v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 

  v2 = &g_scriptableDefVector;
  v3 = (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)&g_scriptableDefVector + 8 * g_scriptableDefVector.m_size);
  if ( &g_scriptableDefVector != v3 )
  {
    while ( *(ScriptableDef **)v2->m_data.m_buffer != scriptableDef )
    {
      v2 = (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)v2 + 8);
      if ( v2 == v3 )
        return;
    }
    if ( !g_scriptableDefVector.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 341, ASSERT_TYPE_ASSERT, "( empty() == false )", (const char *)&queryFormat, "empty() == false") )
      __debugbreak();
    if ( (v2 < &g_scriptableDefVector || v2 > (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)&g_scriptableDefVector + 8 * g_scriptableDefVector.m_size)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 494, ASSERT_TYPE_ASSERT, "( ( iter >= begin()) && ( iter <= end()) )", (const char *)&queryFormat, "( iter >= begin()) && ( iter <= end())") )
      __debugbreak();
    v4 = (char *)v2 - (char *)&g_scriptableDefVector;
    if ( (((_BYTE)v2 - (unsigned __int8)&g_scriptableDefVector) & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 495, ASSERT_TYPE_ASSERT, "( (( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0 )", (const char *)&queryFormat, "(( reinterpret_cast< ntl_size_t >( iter ) - reinterpret_cast< ntl_size_t >( begin())) % sizeof( value_type )) == 0") )
      __debugbreak();
    if ( v2 == (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)&g_scriptableDefVector + 8 * g_scriptableDefVector.m_size) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 343, ASSERT_TYPE_ASSERT, "( citer != end() )", (const char *)&queryFormat, "citer != end()") )
      __debugbreak();
    v5 = &g_scriptableDefVector;
    if ( g_scriptableDefVector.m_size )
      v5 = (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)&g_scriptableDefVector + 8 * (v4 >> 3));
    v6 = &v5->m_data.m_buffer[8];
    v7 = (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)&g_scriptableDefVector + 8 * g_scriptableDefVector.m_size);
    if ( &v5->m_data.m_buffer[8] == (char *)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 460, ASSERT_TYPE_ASSERT, "( first != result )", (const char *)&queryFormat, "first != result") )
      __debugbreak();
    if ( v7 == v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 461, ASSERT_TYPE_ASSERT, "( last != result )", (const char *)&queryFormat, "last != result") )
      __debugbreak();
    if ( v7 < (ntl::fixed_vector<ScriptableDef *,1024,0> *)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 463, ASSERT_TYPE_ASSERT, "( last >= first )", (const char *)&queryFormat, "last >= first") )
      __debugbreak();
    v8 = 0i64;
    v9 = (unsigned __int64)((char *)v7 - v6 + 7) >> 3;
    if ( v6 > (char *)v7 )
      v9 = 0i64;
    if ( v9 )
    {
      do
      {
        ++v8;
        *(_QWORD *)v5->m_data.m_buffer = *(_QWORD *)v6;
        v5 = (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)v5 + 8);
        v6 += 8;
      }
      while ( v8 < v9 );
    }
    --g_scriptableDefVector.m_size;
  }
}

/*
==============
ScriptableBg_SwapScriptableAsset
==============
*/
void ScriptableBg_SwapScriptableAsset(ScriptableDef *from, ScriptableDef *to)
{
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx]
    vmovups ymm3, ymmword ptr [rcx]
    vmovups ymm4, ymmword ptr [rcx+20h]
    vmovups ymm5, ymmword ptr [rcx+40h]
    vmovsd  xmm2, qword ptr [rcx+70h]
    vmovaps [rsp+18h+var_18], xmm6
    vmovups xmm6, xmmword ptr [rcx+60h]
    vmovups ymmword ptr [rcx], ymm0
    vmovups ymm1, ymmword ptr [rdx+20h]
    vmovups ymmword ptr [rcx+20h], ymm1
    vmovups ymm0, ymmword ptr [rdx+40h]
    vmovups ymmword ptr [rcx+40h], ymm0
    vmovups xmm1, xmmword ptr [rdx+60h]
    vmovups xmmword ptr [rcx+60h], xmm1
    vmovsd  xmm0, qword ptr [rdx+70h]
    vmovsd  qword ptr [rcx+70h], xmm0
    vmovups ymmword ptr [rdx], ymm3
    vmovups ymmword ptr [rdx+20h], ymm4
    vmovups ymmword ptr [rdx+40h], ymm5
    vmovups xmmword ptr [rdx+60h], xmm6
    vmovaps xmm6, [rsp+18h+var_18]
    vmovsd  qword ptr [rdx+70h], xmm2
  }
}

