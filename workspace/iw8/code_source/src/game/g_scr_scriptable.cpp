/*
==============
GScr_Scriptable_SetField
==============
*/

void __fastcall GScr_Scriptable_SetField(int entnum, int offset)
{
  ?GScr_Scriptable_SetField@@YAXHH@Z(entnum, offset);
}

/*
==============
GScr_Scriptable_GetEntitylessScriptableArray
==============
*/

void __fastcall GScr_Scriptable_GetEntitylessScriptableArray(scrContext_t *scrContext, const int *offset, const scr_string_t name, const vec3_t *fromOrigin, const float radius, const scr_string_t partName)
{
  ?GScr_Scriptable_GetEntitylessScriptableArray@@YAXAEAUscrContext_t@@PEBHW4scr_string_t@@PEBTvec3_t@@M2@Z(scrContext, offset, name, fromOrigin, radius, partName);
}

/*
==============
GScr_Scriptable_GetField
==============
*/

void __fastcall GScr_Scriptable_GetField(int entnum, int offset)
{
  ?GScr_Scriptable_GetField@@YAXHH@Z(entnum, offset);
}

/*
==============
GScr_Scriptable_SetFieldByValue
==============
*/

void __fastcall GScr_Scriptable_SetFieldByValue(int entnum, int offset, VariableValue *value)
{
  ?GScr_Scriptable_SetFieldByValue@@YAXHHPEAUVariableValue@@@Z(entnum, offset, value);
}

/*
==============
GScr_AddFieldsForScriptable
==============
*/

void GScr_AddFieldsForScriptable(void)
{
  ?GScr_AddFieldsForScriptable@@YAXXZ();
}

/*
==============
GScr_Scriptable_ClearParentEntity
==============
*/

void __fastcall GScr_Scriptable_ClearParentEntity(scrContext_t *scrContext, scr_entref_t entref)
{
  ?GScr_Scriptable_ClearParentEntity@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
GScr_Scriptable_GetLootScriptableArray
==============
*/

void __fastcall GScr_Scriptable_GetLootScriptableArray(scrContext_t *scrContext, const int *offset, const scr_string_t name, const vec3_t *fromOrigin, const float radius, const scr_string_t partName)
{
  ?GScr_Scriptable_GetLootScriptableArray@@YAXAEAUscrContext_t@@PEBHW4scr_string_t@@PEBTvec3_t@@M2@Z(scrContext, offset, name, fromOrigin, radius, partName);
}

/*
==============
GScr_Scriptable_SetParentEntity
==============
*/

void __fastcall GScr_Scriptable_SetParentEntity(scrContext_t *scrContext, scr_entref_t entref)
{
  ?GScr_Scriptable_SetParentEntity@@YAXAEAUscrContext_t@@Uscr_entref_t@@@Z(scrContext, entref);
}

/*
==============
GScr_GetScriptableOrigin
==============
*/
void GScr_GetScriptableOrigin(unsigned int scriptableIndex)
{
  scrContext_t *v2; 
  const vec3_t *InstanceOrigin; 

  v2 = ScriptContext_Server();
  InstanceOrigin = ScriptableSv_GetInstanceOrigin(scriptableIndex);
  Scr_AddVector(v2, InstanceOrigin->v);
}

/*
==============
GScr_SetScriptableOrigin
==============
*/
void GScr_SetScriptableOrigin(unsigned int scriptableIndex)
{
  scrContext_t *v2; 
  const vec3_t *InstanceAngles; 
  vec3_t vectorValue; 

  v2 = ScriptContext_Server();
  if ( !ScriptableSv_GetInstanceInUse(scriptableIndex) )
    Scr_ObjectError(COM_ERR_5858, v2, "This scriptable is no longer in use.");
  ScriptableCommon_AssertCountsInitialized();
  if ( scriptableIndex >= g_scriptableWorldCounts.runtimeInstanceCount )
    Scr_ObjectError(COM_ERR_5859, v2, "Can only set the origin on a reserved scriptable. Scriptable is map-based.");
  if ( ScriptableSv_GetInstanceHasEntity(scriptableIndex) )
    Scr_ObjectError(COM_ERR_5860, v2, "Can only set the origin on standalone scriptables. Scriptable is attached to an entity.");
  if ( ScriptableSv_HasParentEntity(scriptableIndex) )
    Scr_ObjectError(COM_ERR_6251, v2, "Can't set the origin directly when we have a parent entity");
  Scr_GetVector(v2, 0, &vectorValue);
  InstanceAngles = ScriptableSv_GetInstanceAngles(scriptableIndex);
  ScriptableSv_SetOriginAndAngles(scriptableIndex, &vectorValue, InstanceAngles);
}

/*
==============
GScr_GetScriptableCursorHintParm
==============
*/
void GScr_GetScriptableCursorHintParm(unsigned int scriptableIndex)
{
  scrContext_t *v2; 
  ScriptableServerSpecificContext *InstanceServerContext; 

  v2 = ScriptContext_Server();
  InstanceServerContext = ScriptableSv_GetInstanceServerContext(scriptableIndex);
  Scr_AddInt(v2, InstanceServerContext->cursorHintParm);
}

/*
==============
GScr_SetScriptableCursorHintParm
==============
*/
void GScr_SetScriptableCursorHintParm(unsigned int scriptableIndex)
{
  scrContext_t *v2; 
  ScriptableServerSpecificContext *InstanceServerContext; 

  v2 = ScriptContext_Server();
  InstanceServerContext = ScriptableSv_GetInstanceServerContext(scriptableIndex);
  InstanceServerContext->cursorHintParm = Scr_GetInt(v2, 0);
}

/*
==============
GScr_GetScriptableAngles
==============
*/
void GScr_GetScriptableAngles(unsigned int scriptableIndex)
{
  scrContext_t *v2; 
  const vec3_t *InstanceAngles; 

  v2 = ScriptContext_Server();
  InstanceAngles = ScriptableSv_GetInstanceAngles(scriptableIndex);
  Scr_AddVector(v2, InstanceAngles->v);
}

/*
==============
GScr_GetScriptableType
==============
*/
void GScr_GetScriptableType(unsigned int scriptableIndex)
{
  scrContext_t *v2; 
  scr_string_t InstanceType; 

  v2 = ScriptContext_Server();
  InstanceType = ScriptableSv_GetInstanceType(scriptableIndex);
  Scr_AddConstString(v2, InstanceType);
}

/*
==============
GScr_GetScriptableEntityLink
==============
*/
void GScr_GetScriptableEntityLink(unsigned int scriptableIndex)
{
  scrContext_t *v2; 
  ScriptableInstanceContext *InstanceCommonContext; 

  v2 = ScriptContext_Server();
  if ( ScriptableSv_GetInstanceHasEntity(scriptableIndex) )
  {
    InstanceCommonContext = ScriptableSv_GetInstanceCommonContext(scriptableIndex);
    Scr_AddEntityNum(v2, InstanceCommonContext->linkedObjectIndex, ENTITY_CLASS_GENTITY);
  }
}

/*
==============
GScr_GetScriptableLinkName
==============
*/
void GScr_GetScriptableLinkName(unsigned int scriptableIndex)
{
  ScriptableInstance *v1; 
  scrContext_t *v2; 
  ScriptableInstance *outInstance; 

  if ( ScriptableCommon_GetMapInstance(scriptableIndex, (const ScriptableInstance **)&outInstance) )
  {
    v1 = outInstance;
    if ( outInstance->script_linkname )
    {
      v2 = ScriptContext_Server();
      Scr_AddConstString(v2, v1->script_linkname);
    }
  }
}

/*
==============
GScr_GetScriptableLinkTo
==============
*/
void GScr_GetScriptableLinkTo(unsigned int scriptableIndex)
{
  ScriptableInstance *v1; 
  scrContext_t *v2; 
  ScriptableInstance *outInstance; 

  if ( ScriptableCommon_GetMapInstance(scriptableIndex, (const ScriptableInstance **)&outInstance) )
  {
    v1 = outInstance;
    if ( outInstance->script_linkto )
    {
      v2 = ScriptContext_Server();
      Scr_AddConstString(v2, v1->script_linkto);
    }
  }
}

/*
==============
GScr_GetScriptableTarget
==============
*/
void GScr_GetScriptableTarget(unsigned int scriptableIndex)
{
  ScriptableInstance *v1; 
  scrContext_t *v2; 
  ScriptableInstance *outInstance; 

  if ( ScriptableCommon_GetMapInstance(scriptableIndex, (const ScriptableInstance **)&outInstance) )
  {
    v1 = outInstance;
    if ( outInstance->target )
    {
      v2 = ScriptContext_Server();
      Scr_AddConstString(v2, v1->target);
    }
  }
}

/*
==============
GScr_GetScriptableTargetname
==============
*/
void GScr_GetScriptableTargetname(unsigned int scriptableIndex)
{
  ScriptableInstance *v1; 
  scrContext_t *v2; 
  ScriptableInstance *outInstance; 

  if ( ScriptableCommon_GetMapInstance(scriptableIndex, (const ScriptableInstance **)&outInstance) )
  {
    v1 = outInstance;
    if ( outInstance->targetname )
    {
      v2 = ScriptContext_Server();
      Scr_AddConstString(v2, v1->targetname);
    }
  }
}

/*
==============
GScr_GetScriptableNoteworthy
==============
*/
void GScr_GetScriptableNoteworthy(unsigned int scriptableIndex)
{
  ScriptableInstance *v1; 
  scrContext_t *v2; 
  ScriptableInstance *outInstance; 

  if ( ScriptableCommon_GetMapInstance(scriptableIndex, (const ScriptableInstance **)&outInstance) )
  {
    v1 = outInstance;
    if ( outInstance->script_noteworthy )
    {
      v2 = ScriptContext_Server();
      Scr_AddConstString(v2, v1->script_noteworthy);
    }
  }
}

/*
==============
GScr_GetScriptableClassname
==============
*/
void GScr_GetScriptableClassname(unsigned int scriptableIndex)
{
  scrContext_t *v2; 
  ScriptableInstance *outInstance; 

  v2 = ScriptContext_Server();
  if ( ScriptableCommon_GetMapInstance(scriptableIndex, (const ScriptableInstance **)&outInstance) )
    Scr_AddConstString(v2, outInstance->classname);
  else
    Scr_AddConstString(v2, scr_const.scriptable);
}

/*
==============
GScr_GetScriptableIndex
==============
*/
void GScr_GetScriptableIndex(unsigned int scriptableIndex)
{
  scrContext_t *v2; 

  v2 = ScriptContext_Server();
  Scr_AddInt(v2, scriptableIndex);
}

/*
==============
GScr_AddFieldsForScriptable
==============
*/
void GScr_AddFieldsForScriptable(void)
{
  scrContext_t *v0; 
  const scriptable_field_t *v1; 
  unsigned int offset; 

  v0 = ScriptContext_Server();
  v1 = s_scriptableFields;
  for ( offset = 0; offset < 0xC; ++offset )
  {
    Scr_AddClassField(v0, ENTITY_CLASS_SCRIPTABLE, *v1->name, v1->canonicalString, offset);
    ++v1;
  }
}

/*
==============
GScr_Scriptable_ClearParentEntity
==============
*/
void GScr_Scriptable_ClearParentEntity(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int StandaloneScriptableIndex; 
  scr_entref_t entrefa; 

  entrefa = entref;
  if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_IN|0x80) )
    Scr_Error(COM_ERR_6254, scrContext, "ScriptableClearParentEntity not supported in game mode");
  StandaloneScriptableIndex = GScr_GetStandaloneScriptableIndex(scrContext, &entrefa);
  if ( StandaloneScriptableIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_scriptable.cpp", 595, ASSERT_TYPE_ASSERT, "( scriptableIndex ) != ( SCRIPTABLE_INVALID_INSTANCE_INDEX )", "scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX\n\t%i, %i", -1, -1) )
    __debugbreak();
  ScriptableSv_StandaloneClearParentEntity(StandaloneScriptableIndex);
}

/*
==============
GScr_Scriptable_GetEntitylessScriptableArray
==============
*/
void GScr_Scriptable_GetEntitylessScriptableArray(scrContext_t *scrContext, const int *offset, const scr_string_t name, const vec3_t *fromOrigin, const float radius, const scr_string_t partName)
{
  ScriptableCommon_AssertCountsInitialized();
  GScr_GetScriptableArray(scrContext, 0, g_scriptableWorldCounts.serverInstanceCount, offset, name, fromOrigin, radius, partName);
}

/*
==============
GScr_Scriptable_GetField
==============
*/
void GScr_Scriptable_GetField(int entnum, int offset)
{
  __int64 v2; 
  const scriptable_field_t *v4; 
  void (__fastcall *getter)(unsigned int); 
  scrContext_t *v6; 
  const char *v7; 
  const char *v8; 

  v2 = offset;
  if ( (unsigned int)offset >= 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_scriptable.cpp", 468, ASSERT_TYPE_ASSERT, "(( unsigned ) offset < ( sizeof( *array_counter( s_scriptableFields ) ) + 0 ))", (const char *)&queryFormat, "( unsigned ) offset < ARRAY_COUNT( s_scriptableFields )") )
    __debugbreak();
  v4 = &s_scriptableFields[v2];
  getter = v4->getter;
  if ( getter )
  {
    getter(entnum);
  }
  else
  {
    v6 = ScriptContext_Server();
    v7 = SL_ConvertToString(*v4->name);
    v8 = j_va("Scriptable property '%s' has no getter function - this should never happen", v7);
    Scr_Error(COM_ERR_2781, v6, v8);
  }
}

/*
==============
GScr_Scriptable_GetLootScriptableArray
==============
*/
void GScr_Scriptable_GetLootScriptableArray(scrContext_t *scrContext, const int *offset, const scr_string_t name, const vec3_t *fromOrigin, const float radius, const scr_string_t partName)
{
  unsigned int runtimeInstanceCount; 

  ScriptableCommon_AssertCountsInitialized();
  runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
  if ( !cm.mapEnts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_common_utility.h", 106, ASSERT_TYPE_ASSERT, "( cm.mapEnts != nullptr )", (const char *)&queryFormat, "cm.mapEnts != nullptr") )
    __debugbreak();
  GScr_GetScriptableArray(scrContext, 0, runtimeInstanceCount + cm.mapEnts->scriptableMapEnts.lootInstanceCount, offset, name, fromOrigin, radius, partName);
}

/*
==============
GScr_Scriptable_SetField
==============
*/
void GScr_Scriptable_SetField(int entnum, int offset)
{
  __int64 v2; 
  const scriptable_field_t *v4; 
  void (__fastcall *setter)(unsigned int); 
  scrContext_t *v6; 
  const char *v7; 
  const char *v8; 

  v2 = offset;
  if ( (unsigned int)offset >= 0xC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_scriptable.cpp", 486, ASSERT_TYPE_ASSERT, "(( unsigned ) offset < ( sizeof( *array_counter( s_scriptableFields ) ) + 0 ))", (const char *)&queryFormat, "( unsigned ) offset < ARRAY_COUNT( s_scriptableFields )") )
    __debugbreak();
  v4 = &s_scriptableFields[v2];
  setter = v4->setter;
  if ( setter )
  {
    setter(entnum);
  }
  else
  {
    v6 = ScriptContext_Server();
    v7 = SL_ConvertToString(*v4->name);
    v8 = j_va("Scriptable property '%s' is read-only", v7);
    Scr_Error(COM_ERR_2782, v6, v8);
  }
}

/*
==============
GScr_Scriptable_SetFieldByValue
==============
*/
void GScr_Scriptable_SetFieldByValue(int entnum, int offset, VariableValue *value)
{
  scrContext_t *v3; 
  const char *v4; 

  v3 = ScriptContext_Server();
  v4 = j_va("Scriptable does not support directly being set, implementation needed");
  Scr_Error(COM_ERR_2783, v3, v4);
}

/*
==============
GScr_Scriptable_SetParentEntity
==============
*/
void GScr_Scriptable_SetParentEntity(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int StandaloneScriptableIndex; 
  gentity_s *Entity; 
  scr_entref_t entrefa; 
  vec3_t deltaAngles; 
  vec3_t vectorValue; 

  entrefa = entref;
  if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_IN|0x80) )
    Scr_Error(COM_ERR_6252, scrContext, "ScriptableSetParentEntity not supported in game mode");
  StandaloneScriptableIndex = GScr_GetStandaloneScriptableIndex(scrContext, &entrefa);
  if ( StandaloneScriptableIndex == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_scriptable.cpp", 546, ASSERT_TYPE_ASSERT, "( scriptableIndex ) != ( SCRIPTABLE_INVALID_INSTANCE_INDEX )", "scriptableIndex != SCRIPTABLE_INVALID_INSTANCE_INDEX\n\t%i, %i", -1, -1) )
    __debugbreak();
  Entity = GScr_GetEntity(0);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_scriptable.cpp", 549, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !Entity->r.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_scriptable.cpp", 550, ASSERT_TYPE_ASSERT, "( ent->r.isInUse )", (const char *)&queryFormat, "ent->r.isInUse") )
    __debugbreak();
  if ( Scr_GetNumParam(scrContext) <= 1 )
  {
    vectorValue.v[0] = 0.0;
    vectorValue.v[1] = 0.0;
    vectorValue.v[2] = 0.0;
  }
  else
  {
    Scr_GetVector(scrContext, 1u, &vectorValue);
  }
  if ( Scr_GetNumParam(scrContext) <= 2 )
  {
    deltaAngles.v[0] = 0.0;
    deltaAngles.v[1] = 0.0;
    deltaAngles.v[2] = 0.0;
  }
  else
  {
    Scr_GetVector(scrContext, 2u, &deltaAngles);
  }
  if ( !ScriptableSv_StandaloneSetParentEntity(StandaloneScriptableIndex, Entity, &vectorValue, &deltaAngles) )
    Scr_Error(COM_ERR_6253, scrContext, "Failed to set parent entity. See log for details.");
}

