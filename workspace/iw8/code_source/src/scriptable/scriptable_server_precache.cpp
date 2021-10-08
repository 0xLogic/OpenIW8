/*
==============
ScriptableSv_PrecacheAssets
==============
*/

void ScriptableSv_PrecacheAssets(void)
{
  ?ScriptableSv_PrecacheAssets@@YAXXZ();
}

/*
==============
ScriptableSv_PrecacheAssetEventDef
==============
*/
void ScriptableSv_PrecacheAssetEventDef(const ScriptableDef *scriptableDef, const ScriptableEventDef *eventDef)
{
  unsigned int v4; 
  unsigned int i; 
  const XModel *model; 
  const char *name; 
  int CompositeModelIndex; 
  const XCompositeModelDef *CompositeModel; 
  unsigned int j; 
  ScriptablePartReference v11; 
  unsigned int v12; 
  unsigned __int64 v13; 
  unsigned int v14; 
  ScriptablePartReference v15; 
  unsigned int v16; 
  unsigned int k; 
  const char *v18; 
  unsigned int m; 
  __int64 v20; 

  switch ( eventDef->type )
  {
    case Scriptable_EventType_Random:
      v4 = 0;
      for ( i = 0; i < eventDef->data.stateChange.stateIdx; ++i )
        ScriptableSv_PrecacheAssetEventDef(scriptableDef, (const ScriptableEventDef *)(eventDef->data.disablePhysicsSubShape.mutableShapeHash + 176i64 * i));
      if ( eventDef->data.random.eventBCount )
      {
        do
          ScriptableSv_PrecacheAssetEventDef(scriptableDef, &eventDef->data.random.eventsB[v4++]);
        while ( v4 < eventDef->data.random.eventBCount );
      }
      break;
    case Scriptable_EventType_Model:
      model = eventDef->data.model.data.model;
      if ( model )
      {
        if ( eventDef->data.anonymous.buffer[0] != 2 )
          goto LABEL_35;
        name = model->name;
        if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
          __debugbreak();
        CompositeModelIndex = GConfigStrings::GetCompositeModelIndex(GConfigStrings::ms_gConfigStrings, name);
        CompositeModel = G_Utils_GetCompositeModel(CompositeModelIndex);
        if ( !CompositeModel )
        {
          LODWORD(v20) = CompositeModelIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_precache.cpp", 83, ASSERT_TYPE_ASSERT, "( compositeModel != nullptr )", "Error: CompositeModel with index: %d could not be found.", v20) )
            __debugbreak();
        }
        G_XCompositeModel_PrecacheModels(CompositeModel);
      }
      break;
    case Scriptable_EventType_Collision:
      if ( !CM_BrushModelIsValid(eventDef->data.objective.settings.label) )
        Com_PrintWarning(29, "Scriptable %s references collmap %s, but it wasn't available.  Does this map need a recompile?", scriptableDef->name, eventDef->data.script.notification);
      break;
    case Scriptable_EventType_Animation:
      for ( j = 0; j < eventDef->data.animation.eventAtEndCount; ++j )
        ScriptableSv_PrecacheAssetEventDef(scriptableDef, &eventDef->data.animation.eventsAtEnd[j]);
      break;
    case Scriptable_EventType_NoteTrack:
      for ( v11.flatId = 0; v11.flatId < eventDef->data.stateChange.partReference.flatId; ++v11.flatId )
      {
        v12 = 0;
        v13 = eventDef->data.disablePhysicsSubShape.mutableShapeHash + 32i64 * v11.flatId;
        if ( *(_DWORD *)(v13 + 20) )
        {
          do
            ScriptableSv_PrecacheAssetEventDef(scriptableDef, (const ScriptableEventDef *)(*(_QWORD *)(v13 + 24) + 176i64 * v12++));
          while ( v12 < *(_DWORD *)(v13 + 20) );
        }
      }
      break;
    case Scriptable_EventType_ClientViewSelector:
      v14 = 0;
      for ( v15.flatId = 0; v15.flatId < eventDef->data.stateChange.partReference.flatId; ++v15.flatId )
        ScriptableSv_PrecacheAssetEventDef(scriptableDef, (const ScriptableEventDef *)(eventDef->data.disablePhysicsSubShape.mutableShapeHash + 176i64 * v15.flatId));
      if ( eventDef->data.random.eventBCount )
      {
        do
          ScriptableSv_PrecacheAssetEventDef(scriptableDef, &eventDef->data.random.eventsB[v14++]);
        while ( v14 < eventDef->data.random.eventBCount );
      }
      break;
    case Scriptable_EventType_TeamSelector:
      v16 = 0;
      for ( k = 0; k < eventDef->data.teamSelector.eventPassCount; ++k )
        ScriptableSv_PrecacheAssetEventDef(scriptableDef, (const ScriptableEventDef *)&eventDef->data.spawnDynent.tagName[176 * k]);
      if ( eventDef->data.teamSelector.eventFailCount )
      {
        do
          ScriptableSv_PrecacheAssetEventDef(scriptableDef, (const ScriptableEventDef *)eventDef->data.chunkDynent.part + v16++);
        while ( v16 < eventDef->data.teamSelector.eventFailCount );
      }
      break;
    case Scriptable_EventType_AddModel:
      model = eventDef->data.addModel.model;
      if ( model )
      {
LABEL_35:
        v18 = XModelGetName(model);
        G_CString_GetModelIndex(v18);
      }
      break;
    case Scriptable_EventType_GravityArc:
      for ( m = 0; m < eventDef->data.gravityArc.eventAtEndCount; ++m )
        ScriptableSv_PrecacheAssetEventDef(scriptableDef, (const ScriptableEventDef *)eventDef->data.chunkDynent.part + m);
      break;
    default:
      return;
  }
}

/*
==============
ScriptableSv_PrecacheAssetPartDef
==============
*/
void ScriptableSv_PrecacheAssetPartDef(const ScriptableDef *scriptableDef, const ScriptablePartDef *partDef)
{
  unsigned int v2; 
  unsigned int i; 
  unsigned int v6; 
  ScriptableStateDef *v7; 
  ScriptablePartDef *v8; 

  v2 = 0;
  for ( i = 0; i < partDef->numStates; ++i )
  {
    v6 = 0;
    v7 = &partDef->states[i];
    if ( v7->base.numEvents )
    {
      do
        ScriptableSv_PrecacheAssetEventDef(scriptableDef, &v7->base.events[v6++]);
      while ( v6 < v7->base.numEvents );
    }
  }
  if ( partDef->numChildParts )
  {
    do
    {
      v8 = &partDef->childParts[v2];
      if ( (v8->flags & 2) != 0 )
        ScriptableSv_PrecacheAssetPartDef(scriptableDef, v8);
      ++v2;
    }
    while ( v2 < partDef->numChildParts );
  }
}

/*
==============
ScriptableSv_PrecacheAssets
==============
*/
void ScriptableSv_PrecacheAssets(void)
{
  ntl::fixed_vector<ScriptableDef *,1024,0> *i; 
  const ScriptableDef *v1; 
  unsigned int j; 
  __int64 v3; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SPRINT_COMBAT_IN) )
  {
    for ( i = &g_scriptableDefVector; i != (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)&g_scriptableDefVector + 8 * g_scriptableDefVector.m_size); i = (ntl::fixed_vector<ScriptableDef *,1024,0> *)((char *)i + 8) )
    {
      v1 = *(const ScriptableDef **)i->m_data.m_buffer;
      if ( !*(_QWORD *)i->m_data.m_buffer )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_precache.cpp", 253, ASSERT_TYPE_ASSERT, "( def )", (const char *)&queryFormat, "def") )
          __debugbreak();
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_precache.cpp", 228, ASSERT_TYPE_ASSERT, "( scriptableDef )", (const char *)&queryFormat, "scriptableDef") )
          __debugbreak();
      }
      for ( j = 0; j < v1->numParts; ++j )
      {
        v3 = (__int64)&v1->parts[j];
        if ( (*(_BYTE *)(v3 + 12) & 2) != 0 )
          ScriptableSv_PrecacheAssetPartDef(v1, (const ScriptablePartDef *)v3);
      }
    }
  }
}

