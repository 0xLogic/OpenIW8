/*
==============
G_Spawn_DuplicateEntityFields
==============
*/

void __fastcall G_Spawn_DuplicateEntityFields(gentity_s *dest, const gentity_s *spawner)
{
  ?G_Spawn_DuplicateEntityFields@@YAXPEAUgentity_s@@PEBU1@@Z(dest, spawner);
}

/*
==============
G_Spawn_EntitiesFromString
==============
*/

void __fastcall G_Spawn_EntitiesFromString(bool updateDobjs)
{
  ?G_Spawn_EntitiesFromString@@YAX_N@Z(updateDobjs);
}

/*
==============
Scr_GetGenericEnt
==============
*/

bool __fastcall Scr_GetGenericEnt(scrContext_t *scrContext, int offset, const char *key, scr_string_t name, int eType, const char *source)
{
  return ?Scr_GetGenericEnt@@YA_NAEAUscrContext_t@@HPEBDW4scr_string_t@@H1@Z(scrContext, offset, key, name, eType, source);
}

/*
==============
Scr_GetMaxClassEntities
==============
*/

unsigned int __fastcall Scr_GetMaxClassEntities(EntityClass classnum)
{
  return ?Scr_GetMaxClassEntities@@YAIW4EntityClass@@@Z(classnum);
}

/*
==============
GScr_GetObjectField
==============
*/

void __fastcall GScr_GetObjectField(EntityClass classnum, int entnum, int offset)
{
  ?GScr_GetObjectField@@YAXW4EntityClass@@HH@Z(classnum, entnum, offset);
}

/*
==============
GScr_AddFieldsForEntity
==============
*/

void __fastcall GScr_AddFieldsForEntity(scrContext_t *scrContext)
{
  ?GScr_AddFieldsForEntity@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_GetGenericEntArray
==============
*/

void __fastcall Scr_GetGenericEntArray(scrContext_t *scrContext, int qbOnlyScriptables, const vec3_t *fromOrigin, float radius)
{
  ?Scr_GetGenericEntArray@@YAXAEAUscrContext_t@@HPEBTvec3_t@@M@Z(scrContext, qbOnlyScriptables, fromOrigin, radius);
}

/*
==============
Scr_GetGenericField
==============
*/

void __fastcall Scr_GetGenericField(scrContext_t *scrContext, unsigned __int8 *b, fieldtype_t type, __int64 ofs)
{
  ?Scr_GetGenericField@@YAXAEAUscrContext_t@@PEAEW4fieldtype_t@@_J@Z(scrContext, b, type, ofs);
}

/*
==============
G_Spawn_LoadStructs
==============
*/

void G_Spawn_LoadStructs(void)
{
  ?G_Spawn_LoadStructs@@YAXXZ();
}

/*
==============
GScr_SetObjectField
==============
*/

int __fastcall GScr_SetObjectField(EntityClass classnum, int entnum, int offset)
{
  return ?GScr_SetObjectField@@YAHW4EntityClass@@HH@Z(classnum, entnum, offset);
}

/*
==============
Scr_GetGenericEntArray
==============
*/

void __fastcall Scr_GetGenericEntArray(scrContext_t *scrContext, int qbOnlyScriptables)
{
  ?Scr_GetGenericEntArray@@YAXAEAUscrContext_t@@H@Z(scrContext, qbOnlyScriptables);
}

/*
==============
G_Spawn_DuplicateScriptFields
==============
*/

void __fastcall G_Spawn_DuplicateScriptFields(gentity_s *dest, const gentity_s *source)
{
  ?G_Spawn_DuplicateScriptFields@@YAXPEAUgentity_s@@PEBU1@@Z(dest, source);
}

/*
==============
Scr_AcquireObject
==============
*/

void __fastcall Scr_AcquireObject(scrContext_t *scrContext, EntityClass classnum, int entnum)
{
  ?Scr_AcquireObject@@YAXAEAUscrContext_t@@W4EntityClass@@H@Z(scrContext, classnum, entnum);
}

/*
==============
Scr_ReleaseObject
==============
*/

void __fastcall Scr_ReleaseObject(scrContext_t *scrContext, EntityClass classnum, int entnum)
{
  ?Scr_ReleaseObject@@YAXAEAUscrContext_t@@W4EntityClass@@H@Z(scrContext, classnum, entnum);
}

/*
==============
Scr_SetObjectFieldByValue
==============
*/

int __fastcall Scr_SetObjectFieldByValue(scrContext_t *scrContext, EntityClass classnum, int entnum, int offset, VariableValue *value)
{
  return ?Scr_SetObjectFieldByValue@@YAHAEAUscrContext_t@@W4EntityClass@@HHPEAUVariableValue@@@Z(scrContext, classnum, entnum, offset, value);
}

/*
==============
G_SpawnVector
==============
*/

int __fastcall G_SpawnVector(unsigned int key, const char *defaultString, vec3_t *out)
{
  return ?G_SpawnVector@@YAHIPEBDAEATvec3_t@@@Z(key, defaultString, out);
}

/*
==============
G_Spawn_InitGameMode
==============
*/

void __fastcall G_Spawn_InitGameMode(const SpawnGameModeSettings *settings)
{
  ?G_Spawn_InitGameMode@@YAXPEBUSpawnGameModeSettings@@@Z(settings);
}

/*
==============
Scr_GetGenericEntArray
==============
*/

void __fastcall Scr_GetGenericEntArray(scrContext_t *scrContext, int offset, scr_string_t name, int qbOnlyScriptables, const vec3_t *fromOrigin, float radius)
{
  ?Scr_GetGenericEntArray@@YAXAEAUscrContext_t@@HW4scr_string_t@@HPEBTvec3_t@@M@Z(scrContext, offset, name, qbOnlyScriptables, fromOrigin, radius);
}

/*
==============
G_Spawn_ShutdownGameMode
==============
*/

void G_Spawn_ShutdownGameMode(void)
{
  ?G_Spawn_ShutdownGameMode@@YAXXZ();
}

/*
==============
Scr_GetGenericEntArray
==============
*/

void __fastcall Scr_GetGenericEntArray(scrContext_t *scrContext, int offset, scr_string_t name, int qbOnlyScriptables)
{
  ?Scr_GetGenericEntArray@@YAXAEAUscrContext_t@@HW4scr_string_t@@H@Z(scrContext, offset, name, qbOnlyScriptables);
}

/*
==============
G_LevelSpawnString
==============
*/

int __fastcall G_LevelSpawnString(unsigned int key, const char *defaultString, const char **out)
{
  return ?G_LevelSpawnString@@YAHIPEBDPEAPEBD@Z(key, defaultString, out);
}

/*
==============
G_Spawn_ParseEntityFieldString
==============
*/

void __fastcall G_Spawn_ParseEntityFieldString(const char *key, const char *value, gentity_s *ent, int ignoreModel)
{
  ?G_Spawn_ParseEntityFieldString@@YAXPEBD0PEAUgentity_s@@H@Z(key, value, ent, ignoreModel);
}

/*
==============
Scr_SetGenericField
==============
*/

void __fastcall Scr_SetGenericField(scrContext_t *scrContext, unsigned __int8 *b, fieldtype_t type, __int64 ofs)
{
  ?Scr_SetGenericField@@YAXAEAUscrContext_t@@PEAEW4fieldtype_t@@_J@Z(scrContext, b, type, ofs);
}

/*
==============
Scr_SetGenericFieldByValue
==============
*/

void __fastcall Scr_SetGenericFieldByValue(scrContext_t *scrContext, unsigned __int8 *b, fieldtype_t type, __int64 ofs, VariableValue *val)
{
  ?Scr_SetGenericFieldByValue@@YAXAEAUscrContext_t@@PEAEW4fieldtype_t@@_JPEAUVariableValue@@@Z(scrContext, b, type, ofs, val);
}

/*
==============
G_SpawnInt
==============
*/

int __fastcall G_SpawnInt(unsigned int key, const char *defaultString, int *out)
{
  return ?G_SpawnInt@@YAHIPEBDPEAH@Z(key, defaultString, out);
}

/*
==============
Scr_SetEntityFieldBinary
==============
*/

void __fastcall Scr_SetEntityFieldBinary(scrContext_t *scrContext, int entnum, int offset)
{
  ?Scr_SetEntityFieldBinary@@YAXAEAUscrContext_t@@HH@Z(scrContext, entnum, offset);
}

/*
==============
G_SpawnFloat
==============
*/

int __fastcall G_SpawnFloat(unsigned int key, const char *defaultString, float *out)
{
  return ?G_SpawnFloat@@YAHIPEBDPEAM@Z(key, defaultString, out);
}

/*
==============
G_Spawn_CallForEntity
==============
*/

int __fastcall G_Spawn_CallForEntity(gentity_s *ent)
{
  return ?G_Spawn_CallForEntity@@YAHPEAUgentity_s@@@Z(ent);
}

/*
==============
GScr_AddFieldsForEntity
==============
*/
void GScr_AddFieldsForEntity(scrContext_t *scrContext)
{
  const ent_field_t *i; 

  if ( !s_gameModeSettings.entFields && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1235, ASSERT_TYPE_ASSERT, "( s_gameModeSettings.entFields )", (const char *)&queryFormat, "s_gameModeSettings.entFields") )
    __debugbreak();
  for ( i = s_gameModeSettings.entFields; i->name; ++i )
  {
    if ( ((i - s_gameModeSettings.entFields) & 0xE000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1238, ASSERT_TYPE_ASSERT, "(((f - s_gameModeSettings.entFields) & ENTFIELD_MASK) == ENTFIELD_ENTITY)", (const char *)&queryFormat, "((f - s_gameModeSettings.entFields) & ENTFIELD_MASK) == ENTFIELD_ENTITY") )
      __debugbreak();
    if ( i - s_gameModeSettings.entFields != (unsigned __int16)(i - s_gameModeSettings.entFields) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1239, ASSERT_TYPE_ASSERT, "((f - s_gameModeSettings.entFields) == (unsigned short)( f - s_gameModeSettings.entFields ))", (const char *)&queryFormat, "(f - s_gameModeSettings.entFields) == (unsigned short)( f - s_gameModeSettings.entFields )") )
      __debugbreak();
    Scr_AddClassField(scrContext, ENTITY_CLASS_GENTITY, *i->name, i->canonicalString, (unsigned __int16)((__int16)((_WORD)i - LOWORD(s_gameModeSettings.entFields)) / 48));
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_READY) )
  {
    GScr_AddFieldsForActor(scrContext);
    GScr_AddFieldsForAIScripted(scrContext);
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) )
  {
    GScr_AddFieldsForAgent(scrContext);
    GScr_AddFieldsForAIScripted(scrContext);
  }
  GScr_AddFieldsForClient(scrContext);
  GScr_AddFieldsForSentient(scrContext);
  GScr_AddFieldsForScriptable();
  G_VehicleScript_AddFields(scrContext);
}

/*
==============
GScr_GetObjectField
==============
*/
void GScr_GetObjectField(EntityClass classnum, int entnum, int offset)
{
  __int64 v3; 
  int v5; 
  scrContext_t *v6; 
  scrContext_t *v7; 
  bool v8; 
  GUtils *Utils; 
  int v10; 

  v3 = offset;
  v5 = (unsigned __int8)classnum;
  v6 = ScriptContext_Server();
  v7 = v6;
  switch ( v5 )
  {
    case 0:
      Scr_GetEntityField(v6, entnum, v3);
      return;
    case 1:
      G_HudElem_ScrGetHudElemField(v6, entnum, v3);
      return;
    case 2:
      Scr_GetPathnodeField(v6, entnum, v3);
      return;
    case 3:
      G_VehiclePathScr_GetNodeField(entnum, v3);
      return;
    case 4:
      v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1909, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Didn't expect this function to handle FXEntities.");
      goto LABEL_15;
    case 5:
      Utils = GUtils::GetUtils();
      if ( !Utils->GetPIPElemField(Utils, v7, entnum, v3) )
        Scr_Error(COM_ERR_3616, v7, "PIP is not supported in this game mode");
      return;
    case 6:
      G_Spawner_GetField(entnum, v3);
      return;
    case 7:
      Scr_GetBlackboardField(entnum, v3);
      return;
    case 8:
      GScr_Scriptable_GetField(entnum, v3);
      return;
    case 9:
      v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1913, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Didn't expect this function to handle SoundEntities.");
      goto LABEL_15;
    case 10:
      GScr_Weapon_GetField(v6, (const scr_weapon_t)entnum, v3);
      return;
    default:
      v10 = v5;
      v8 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1941, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "bad class num %u", v10);
LABEL_15:
      if ( v8 )
        __debugbreak();
      return;
  }
}

/*
==============
GScr_SetObjectField
==============
*/
__int64 GScr_SetObjectField(EntityClass classnum, int entnum, int offset)
{
  int v4; 
  scrContext_t *v6; 
  scrContext_t *v7; 
  unsigned int v8; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  GUtils *Utils; 
  int v14; 

  v4 = (unsigned __int8)classnum;
  v6 = ScriptContext_Server();
  v7 = v6;
  v8 = 1;
  switch ( v4 )
  {
    case 0:
      v8 = Scr_SetEntityField(v6, entnum, offset, 1);
      break;
    case 1:
      G_HudElem_ScrSetHudElemField(v6, entnum, offset);
      break;
    case 2:
      Scr_SetPathnodeField(v6, entnum, offset);
      break;
    case 3:
      v9 = j_va("vehicle node is read-only");
      Scr_Error(COM_ERR_3604, v7, v9);
      break;
    case 4:
      v10 = j_va("FXEntity node is read-only");
      Scr_Error(COM_ERR_3605, v7, v10);
      break;
    case 5:
      Utils = GUtils::GetUtils();
      if ( !Utils->SetPIPElemField(Utils, v7, entnum, offset) )
        Scr_Error(COM_ERR_3607, v7, "PIP is not supported in this game mode");
      break;
    case 6:
      G_Spawner_SetField(entnum, offset);
      break;
    case 7:
      Scr_SetBlackboardField(entnum, offset);
      break;
    case 8:
      GScr_Scriptable_SetField(entnum, offset);
      break;
    case 9:
      v11 = j_va("SoundEntity node is read-only");
      Scr_Error(COM_ERR_3606, v7, v11);
      break;
    case 10:
      GScr_Weapon_SetField(v6, (const scr_weapon_t)entnum, offset);
      break;
    default:
      v14 = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1751, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "bad class num %u", v14) )
        __debugbreak();
      break;
  }
  return v8;
}

/*
==============
G_LevelSpawnString
==============
*/
int G_LevelSpawnString(unsigned int key, const char *defaultString, const char **out)
{
  return Scr_SpawnString(&level.spawnVar, key, defaultString, out);
}

/*
==============
G_SpawnFloat
==============
*/
__int64 G_SpawnFloat(unsigned int key, const char *defaultString, float *out)
{
  unsigned int v5; 
  __int64 result; 
  char *outa; 

  v5 = Scr_SpawnString(&level.spawnVar, key, defaultString, (const char **)&outa);
  *(double *)&_XMM0 = atof(outa);
  result = v5;
  __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
  *out = *(float *)&_XMM1;
  return result;
}

/*
==============
G_SpawnInt
==============
*/
__int64 G_SpawnInt(unsigned int key, const char *defaultString, int *out)
{
  unsigned int v4; 
  char *outa; 

  v4 = Scr_SpawnString(&level.spawnVar, key, defaultString, (const char **)&outa);
  *out = atoi(outa);
  return v4;
}

/*
==============
G_SpawnVector
==============
*/
__int64 G_SpawnVector(unsigned int key, const char *defaultString, vec3_t *out)
{
  unsigned int v4; 
  char *v5; 
  char *outa; 

  v4 = Scr_SpawnString(&level.spawnVar, key, defaultString, (const char **)&outa);
  out->v[2] = 0.0;
  v5 = outa;
  out->v[0] = 0.0;
  out->v[1] = 0.0;
  j_sscanf(v5, "%f %f %f", out, &out->y, &out->z);
  return v4;
}

/*
==============
G_Spawn_CallForEntity
==============
*/

__int64 __fastcall G_Spawn_CallForEntity(gentity_s *ent, __int64 a2, double a3)
{
  scr_string_t script_classname; 
  const char *v6; 
  int v7; 
  const SpawnFuncEntry *v8; 
  const SpawnFuncEntry *Func; 
  __int16 EntityIndex; 
  Weapon result; 
  Weapon item; 

  if ( level.spawnVar.spawnVarsValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 551, ASSERT_TYPE_SANITY, "( !level.spawnVar.spawnVarsValid )", (const char *)&queryFormat, "!level.spawnVar.spawnVarsValid") )
    __debugbreak();
  if ( ent->classname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 552, ASSERT_TYPE_ASSERT, "(ent->classname == ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "ent->classname == NULL_SCR_STRING") )
    __debugbreak();
  script_classname = ent->script_classname;
  if ( script_classname )
  {
    v6 = SL_ConvertToString(script_classname);
    if ( IsActorClassname(v6) )
    {
      Com_Printf(15, "cannot spawn AI directly; use spawners instead\n");
      return 0i64;
    }
    else
    {
      item = *G_Spawn_GetItemForClassname(&result, v6);
      if ( LOWORD(a3) )
      {
        ent->classname = Scr_NewString(v6);
        G_Items_Spawn(ent, &item);
        return 1i64;
      }
      else
      {
        v7 = 0;
        v8 = s_bspOrDynamicSpawns;
        while ( !IsParentClassname(v6, v8->classname) )
        {
          ++v7;
          if ( (__int64)++v8 >= (__int64)s_bspOnlySpawns )
            goto LABEL_18;
        }
        Func = &s_bspOrDynamicSpawns[v7];
        if ( Func )
          goto LABEL_20;
LABEL_18:
        Func = G_Spawn_FindFunc(v6, s_gameModeSettings.bspOrDynamicSpawns, s_gameModeSettings.bspOrDynamicSpawnCount);
        if ( !Func )
        {
          Com_Printf(15, "%s cannot be spawned dynamically\n", v6);
          return 0i64;
        }
LABEL_20:
        ent->classname = Scr_NewString(Func->classname);
        if ( Func->callback == G_FreeEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 589, ASSERT_TYPE_ASSERT, "(spawnEntry->callback != G_FreeEntity)", (const char *)&queryFormat, "spawnEntry->callback != G_FreeEntity") )
          __debugbreak();
        Func->callback(ent);
        EntityIndex = G_GetEntityIndex(ent);
        if ( !G_IsEntityInUse(EntityIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 591, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( G_GetEntityIndex( ent ) ))", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( ent ) )") )
          __debugbreak();
        return 1i64;
      }
    }
  }
  else
  {
    Com_Printf(15, "G_CallSpawnEntity: NULL classname\n");
    return 0i64;
  }
}

/*
==============
G_Spawn_Callspawn
==============
*/

void __fastcall G_Spawn_Callspawn(bool updateDobjs, __int64 a2, double a3)
{
  __int128 v3; 
  __int128 v4; 
  __int128 v5; 
  char *v7; 
  gentity_s *v8; 
  gentity_s *v9; 
  char *v10; 
  const SpawnFuncEntry *v11; 
  int v12; 
  int v13; 
  const SpawnFuncEntry *Func; 
  char *v15; 
  const SpawnFuncEntry *v16; 
  int v17; 
  gentity_s *v18; 
  int AnchorIndexFromName; 
  unsigned int v20; 
  int entNum; 
  int v22; 
  int v23; 
  const char *classname; 
  unsigned __int16 model; 
  int v26; 
  XModel *v27; 
  const char *ModelName; 
  double v29; 
  double v30; 
  double v31; 
  const char *v32; 
  char *out; 
  char *compositeModelName; 
  char *anchorName; 
  char *v36; 
  Weapon result; 
  Weapon item; 
  __int128 v39; 
  __int128 v40; 
  __int128 v41; 

  if ( !level.spawnVar.spawnVarsValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 689, ASSERT_TYPE_SANITY, "( level.spawnVar.spawnVarsValid )", (const char *)&queryFormat, "level.spawnVar.spawnVarsValid") )
    __debugbreak();
  Scr_SpawnString(&level.spawnVar, 0xD4u, (const char *)&queryFormat.fmt + 3, (const char **)&out);
  if ( !out && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 692, ASSERT_TYPE_ASSERT, "(classname)", (const char *)&queryFormat, "classname") )
    __debugbreak();
  if ( IsDynClassname(out) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 694, ASSERT_TYPE_ASSERT, "(!IsDynClassname( classname ))", "%s\n\tDyn entities should be purged as part of g_purgeableEnts - if this probably happened, search for %s in the .map files", "!IsDynClassname( classname )", out) )
    __debugbreak();
  if ( IsScriptableClassname(out) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 695, ASSERT_TYPE_ASSERT, "(!IsScriptableClassname( classname ))", "%s\n\tScriptable entities should be purged as part of g_purgeableEnts - if this probably happened, search for %s in the .map files", "!IsScriptableClassname( classname )", out) )
    __debugbreak();
  if ( IsNodeClassname(out) )
  {
    G_SpawnPathnodeDynamic();
  }
  else if ( IsParentClassname(out, "info_vehicle_node") )
  {
    G_VehiclePath_SpawnNode(out);
  }
  else if ( IsActorClassname(out) )
  {
    v7 = out;
    if ( Com_GameMode_SupportsFeature(WEAPON_READY) )
    {
      v8 = G_Utils_SpawnEntity();
      G_Spawn_ParseEntityFields(v8, 1, v7);
      AIActorInterface::SpawnActor(v8);
    }
    else
    {
      Com_PrintError(1, "Classname '%s' should not be added to this mode (discarding).\n", v7);
    }
  }
  else
  {
    item = *G_Spawn_GetItemForClassname(&result, out);
    if ( LOWORD(a3) )
    {
      v9 = G_Utils_SpawnEntity();
      G_Spawn_ParseEntityFields(v9, 0, out);
      G_Items_Spawn(v9, &item);
    }
    else
    {
      v10 = out;
      v11 = s_bspOrDynamicSpawns;
      v12 = 0;
      v13 = 0;
      while ( !IsParentClassname(v10, v11->classname) )
      {
        ++v13;
        if ( (__int64)++v11 >= (__int64)s_bspOnlySpawns )
          goto LABEL_28;
      }
      Func = &s_bspOrDynamicSpawns[v13];
      if ( Func )
        goto LABEL_35;
LABEL_28:
      Func = G_Spawn_FindFunc(out, s_gameModeSettings.bspOrDynamicSpawns, s_gameModeSettings.bspOrDynamicSpawnCount);
      if ( !Func )
      {
        v15 = out;
        v16 = s_bspOnlySpawns;
        v17 = 0;
        while ( !IsParentClassname(v15, v16->classname) )
        {
          ++v17;
          if ( (__int64)++v16 >= (__int64)&unk_143E2C650 )
            goto LABEL_34;
        }
        Func = &s_bspOnlySpawns[v17];
        if ( Func )
          goto LABEL_35;
LABEL_34:
        Func = G_Spawn_FindFunc(out, s_gameModeSettings.bspOnlySpawns, s_gameModeSettings.bspOnlySpawnCount);
        if ( !Func )
          goto LABEL_36;
      }
LABEL_35:
      if ( Func->callback == G_FreeEntity )
        return;
LABEL_36:
      v18 = G_Utils_SpawnEntity();
      if ( CM_ClientAnchorCount() )
      {
        Scr_SpawnString(&level.spawnVar, 0x350u, (const char *)&queryFormat.fmt + 3, (const char **)&anchorName);
        if ( anchorName )
        {
          if ( *anchorName )
          {
            AnchorIndexFromName = CM_FindAnchorIndexFromName(anchorName);
            v20 = AnchorIndexFromName;
            if ( AnchorIndexFromName >= 0 )
            {
              entNum = cm.mapEnts->clientEntAnchors[AnchorIndexFromName].entNum;
              if ( entNum && entNum != v18->s.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 750, ASSERT_TYPE_ASSERT, "(cm.mapEnts->clientEntAnchors[anchorIndex].entNum == 0 || cm.mapEnts->clientEntAnchors[anchorIndex].entNum == ent->s.number)", "%s\n\tscript_parentname %s used with more than one entity.", "cm.mapEnts->clientEntAnchors[anchorIndex].entNum == 0 || cm.mapEnts->clientEntAnchors[anchorIndex].entNum == ent->s.number", anchorName) )
                __debugbreak();
              CM_RegisterAnchorEntity(v20, v18->s.number);
            }
          }
        }
      }
      Scr_SpawnString(&level.spawnVar, 0xF7u, "0", (const char **)&v36);
      v22 = atoi(v36);
      v23 = v22;
      if ( Func )
        classname = Func->classname;
      else
        classname = NULL;
      LOBYTE(v12) = v22 != 0;
      G_Spawn_ParseEntityFields(v18, v12, classname);
      if ( v23 )
      {
        Scr_SpawnString(&level.spawnVar, 0x28Cu, NULL, (const char **)&compositeModelName);
        if ( !compositeModelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 765, ASSERT_TYPE_ASSERT, "(compositeModelName)", (const char *)&queryFormat, "compositeModelName") )
          __debugbreak();
        if ( IsParentClassname(out, "script_model") )
        {
          G_Utils_SetCompositeModel(v18, ET_SCRIPTMOVER, compositeModelName);
          G_XCompositeModel_SetPosition(v18, ET_SCRIPTMOVER);
        }
        else if ( IsParentClassname(out, "script_vehicle") )
        {
          G_Utils_SetCompositeModel(v18, ET_VEHICLE, compositeModelName);
          G_XCompositeModel_SetPosition(v18, ET_VEHICLE);
        }
        else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 779, ASSERT_TYPE_ASSERT, "(false)", "%s\n\tAttempted to load compositemodel %s, but classname %s not supported", "false", compositeModelName, out) )
        {
          __debugbreak();
        }
      }
      if ( updateDobjs )
      {
        if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 604, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
          __debugbreak();
        model = v18->model;
        if ( model && G_Utils_IsModelBad(model) )
        {
          v26 = v18->model;
          v41 = v3;
          v40 = v4;
          v39 = v5;
          v27 = G_Utils_GetModel(v26);
          if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 613, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
            __debugbreak();
          if ( DB_IsXAssetTransient(ASSET_TYPE_XMODEL, v27->name) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 615, ASSERT_TYPE_ASSERT, "( ( !DB_IsXAssetTransient( ASSET_TYPE_XMODEL, model->name ) ) )", "( model->name ) = %s", v27->name) )
            __debugbreak();
          ModelName = G_CString_GetModelName(v18->model);
          v29 = v18->r.currentOrigin.v[2];
          v30 = v18->r.currentOrigin.v[1];
          v31 = v18->r.currentOrigin.v[0];
          v32 = SL_ConvertToString(v18->classname);
          Com_PrintError(1, "Error: '%s' at ( %.0f %.0f %.0f ) uses missing model '%s'\n", v32, v31, v30, v29, ModelName);
        }
        if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
          __debugbreak();
        GUtils::ms_gUtils->DObjUpdate(GUtils::ms_gUtils, v18, 0);
      }
      if ( Func )
        Func->callback(v18);
    }
  }
}

/*
==============
G_Spawn_CreateFxStructs
==============
*/
void G_Spawn_CreateFxStructs()
{
  GameScriptData *GameScriptDataCommon; 
  MapEnts *mapEnts; 
  scrContext_t *v2; 
  __int64 v3; 
  ServerExploderDef *exploders; 
  unsigned int Object; 
  const char *v6; 
  unsigned int CanonicalString; 
  scrContext_t *v8; 
  unsigned int v9; 
  const char *v10; 
  unsigned int v11; 
  scrContext_t *v12; 
  unsigned int v13; 
  const char *v14; 
  unsigned int v15; 
  scrContext_t *v16; 
  unsigned int v17; 
  const char *v18; 
  unsigned int v19; 
  scrContext_t *v20; 
  unsigned int v21; 
  const char *v22; 
  unsigned int v23; 
  scrContext_t *v24; 
  unsigned int v25; 
  const char *v26; 
  unsigned int v27; 
  scrContext_t *v28; 
  unsigned int v29; 
  unsigned int v30; 
  scrContext_t *v31; 
  unsigned int v32; 
  scr_string_t name; 
  unsigned int v34; 
  scr_string_t earthquakeName; 
  unsigned int v36; 
  scr_string_t rumbleName; 
  unsigned int v38; 
  int v39; 
  GameScriptData *v40; 

  GameScriptDataCommon = GameScriptData::GetGameScriptDataCommon();
  v40 = GameScriptDataCommon;
  if ( !GameScriptDataCommon->createstruct && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 312, ASSERT_TYPE_ASSERT, "(gScrData->createstruct)", (const char *)&queryFormat, "gScrData->createstruct") )
    __debugbreak();
  mapEnts = cm.mapEnts;
  v2 = ScriptContext_Server();
  ScriptContext_SetVarUsagePos(v2, "<spawn createfx structs>");
  v39 = 0;
  if ( mapEnts->serverSideEffects.exploderCount )
  {
    v3 = 0i64;
    do
    {
      exploders = mapEnts->serverSideEffects.exploders;
      Scr_AddExecThread(v2, GameScriptDataCommon->createstruct, 0);
      Object = Scr_GetObject(v2, 0);
      v6 = j_va("%f %f %f", exploders[v3].origin.v[0], exploders[v3].origin.v[1], exploders[v3].origin.v[2]);
      CanonicalString = SL_GetCanonicalString("origin");
      if ( v6 )
      {
        v8 = ScriptContext_Server();
        v9 = Scr_SetEntityScriptVariableType(v8, CanonicalString, v6);
        if ( v9 )
          Scr_SetStructField(v8, Object, v9);
      }
      v10 = j_va("%f", (float)((float)exploders[v3].delayMsec * 0.001));
      v11 = SL_GetCanonicalString("script_delay");
      if ( v10 )
      {
        v12 = ScriptContext_Server();
        v13 = Scr_SetEntityScriptVariableType(v12, v11, v10);
        if ( v13 )
          Scr_SetStructField(v12, Object, v13);
      }
      v14 = j_va("%f", exploders[v3].damageAmount);
      v15 = SL_GetCanonicalString("script_damage");
      if ( v14 )
      {
        v16 = ScriptContext_Server();
        v17 = Scr_SetEntityScriptVariableType(v16, v15, v14);
        if ( v17 )
          Scr_SetStructField(v16, Object, v17);
      }
      v18 = j_va("%f", exploders[v3].damageRadius);
      v19 = SL_GetCanonicalString("script_radius");
      if ( v18 )
      {
        v20 = ScriptContext_Server();
        v21 = Scr_SetEntityScriptVariableType(v20, v19, v18);
        if ( v21 )
          Scr_SetStructField(v20, Object, v21);
      }
      v22 = j_va("%d", exploders[v3].damageDoOcclusionTraces);
      v23 = SL_GetCanonicalString("script_trace");
      if ( v22 )
      {
        v24 = ScriptContext_Server();
        v25 = Scr_SetEntityScriptVariableType(v24, v23, v22);
        if ( v25 )
          Scr_SetStructField(v24, Object, v25);
      }
      v26 = j_va("%d", exploders[v3].damageEnvironmentOnly);
      v27 = SL_GetCanonicalString("script_envonly");
      if ( v26 )
      {
        v28 = ScriptContext_Server();
        v29 = Scr_SetEntityScriptVariableType(v28, v27, v26);
        if ( v29 )
          Scr_SetStructField(v28, Object, v29);
      }
      v30 = SL_GetCanonicalString("script_delete");
      v31 = ScriptContext_Server();
      v32 = Scr_SetEntityScriptVariableType(v31, v30, "1");
      if ( v32 )
        Scr_SetStructField(v31, Object, v32);
      name = exploders[v3].name;
      v34 = SL_GetCanonicalString("script_exploder");
      G_Spawn_SetStructKeyStringPair(Object, v34, name);
      earthquakeName = exploders[v3].earthquakeName;
      v36 = SL_GetCanonicalString("script_earthquake");
      G_Spawn_SetStructKeyStringPair(Object, v36, earthquakeName);
      rumbleName = exploders[v3].rumbleName;
      v38 = SL_GetCanonicalString("script_rumble");
      G_Spawn_SetStructKeyStringPair(Object, v38, rumbleName);
      ++v3;
      GameScriptDataCommon = v40;
      ++v39;
    }
    while ( v39 < mapEnts->serverSideEffects.exploderCount );
  }
  ScriptContext_SetVarUsagePos(v2, NULL);
}

/*
==============
G_Spawn_DuplicateEntityFields
==============
*/
void G_Spawn_DuplicateEntityFields(gentity_s *dest, const gentity_s *spawner)
{
  scrContext_t *v4; 
  __int64 *p_ofs; 
  __int64 v6; 
  __int64 v7; 

  if ( !s_gameModeSettings.entFields && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 188, ASSERT_TYPE_ASSERT, "( s_gameModeSettings.entFields )", (const char *)&queryFormat, "s_gameModeSettings.entFields") )
    __debugbreak();
  v4 = ScriptContext_Server();
  if ( s_gameModeSettings.entFields->name )
  {
    p_ofs = &s_gameModeSettings.entFields->ofs;
    do
    {
      v6 = *((int *)p_ofs + 2);
      switch ( (int)v6 )
      {
        case 0:
        case 4:
          *(_DWORD *)((char *)&dest->s.number + *p_ofs) = *(_DWORD *)((char *)&spawner->s.number + *p_ofs);
          break;
        case 1:
        case 17:
          *(__int16 *)((char *)&dest->s.number + *p_ofs) = *(__int16 *)((char *)&spawner->s.number + *p_ofs);
          break;
        case 3:
          *((_BYTE *)&dest->s.number + *p_ofs) = *((_BYTE *)&spawner->s.number + *p_ofs);
          break;
        case 5:
          Scr_SetString((scr_string_t *)((char *)dest + *p_ofs), *(scr_string_t *)((char *)&spawner->s.number + *p_ofs));
          break;
        case 7:
          v7 = *p_ofs;
          *(_DWORD *)((char *)&dest->s.number + v7) = *(_DWORD *)((char *)&spawner->s.number + *p_ofs);
          *(_DWORD *)((char *)&dest->s.attackerEntityNum + v7) = *(_DWORD *)((char *)&spawner->s.attackerEntityNum + v7);
          *(_DWORD *)((char *)&dest->s.eType + v7) = *(_DWORD *)((char *)&spawner->s.eType + v7);
          break;
        case 8:
        case 9:
          break;
        case 14:
          GScr_Weapon_Set(v4, (scr_weapon_t *)((char *)dest + *p_ofs), *(const scr_weapon_t *)((char *)&spawner->s.number + *p_ofs));
          break;
        default:
          Com_PrintError(1, "G_DuplicateEntityFieldsForSpawn(): Unhandled type #%i.", v6);
          break;
      }
      p_ofs += 6;
    }
    while ( *(p_ofs - 2) );
  }
}

/*
==============
G_Spawn_DuplicateScriptFields
==============
*/
void G_Spawn_DuplicateScriptFields(gentity_s *dest, const gentity_s *source)
{
  signed __int64 v4; 
  signed __int64 v5; 
  scrContext_t *v6; 
  __int64 v7; 
  __int64 v8; 

  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v4 = dest - g_entities;
  if ( (unsigned int)v4 >= 0x800 )
  {
    LODWORD(v7) = dest - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, 2048) )
      __debugbreak();
  }
  if ( dest->s.number != (_WORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 174, ASSERT_TYPE_ASSERT, "(dest->s.number == G_GetEntityIndex( dest ))", (const char *)&queryFormat, "dest->s.number == G_GetEntityIndex( dest )") )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v5 = source - g_entities;
  if ( (unsigned int)v5 >= 0x800 )
  {
    LODWORD(v8) = 2048;
    LODWORD(v7) = ((int)source - (int)g_entities) / 1456;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( source->s.number != (_WORD)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 175, ASSERT_TYPE_ASSERT, "(source->s.number == G_GetEntityIndex( source ))", (const char *)&queryFormat, "source->s.number == G_GetEntityIndex( source )") )
    __debugbreak();
  v6 = ScriptContext_Server();
  Scr_CopyEntityNum(v6, source->s.number, dest->s.number);
}

/*
==============
G_Spawn_EntitiesFromString
==============
*/
void G_Spawn_EntitiesFromString(bool updateDobjs, __int64 a2, double a3)
{
  __int64 v4; 
  unsigned int i; 
  int AnchorEntNum; 
  __int64 v7; 
  const char *v8; 
  __int64 v9; 
  __int64 v10; 

  if ( !Scr_ParseSpawnVars2(&level.spawnVar) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E2D700, 980i64);
  G_Spawn_WorldSpawn();
  while ( Scr_ParseSpawnVars2(&level.spawnVar) )
    G_Spawn_Callspawn(updateDobjs, v4, a3);
  Scr_ResetEntityParsePoint();
  if ( CM_ClientAnchorCount() )
  {
    for ( i = 0; i < CM_ClientAnchorCount(); ++i )
    {
      AnchorEntNum = CM_GetAnchorEntNum(i);
      v7 = AnchorEntNum;
      if ( (unsigned int)AnchorEntNum >= 0x800 )
      {
        LODWORD(v10) = 2048;
        LODWORD(v9) = AnchorEntNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v7].r.isInUse != g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v7] )
      {
        v8 = CM_ClientAnchorName(i);
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E2D740, 981i64, v8);
      }
    }
  }
}

/*
==============
G_Spawn_FindFunc
==============
*/
const SpawnFuncEntry *G_Spawn_FindFunc(const char *classname, const SpawnFuncEntry *spawnFuncArray, int spawnFuncCount)
{
  int v3; 
  __int64 v4; 
  __int64 v7; 
  const SpawnFuncEntry *i; 

  v3 = 0;
  v4 = spawnFuncCount;
  if ( spawnFuncCount <= 0 )
    return 0i64;
  v7 = 0i64;
  for ( i = spawnFuncArray; !IsParentClassname(classname, i->classname); ++i )
  {
    ++v3;
    if ( ++v7 >= v4 )
      return 0i64;
  }
  return &spawnFuncArray[v3];
}

/*
==============
G_Spawn_GetItemForClassname
==============
*/
Weapon *G_Spawn_GetItemForClassname(Weapon *result, const char *classname)
{
  Weapon *WeaponForName; 
  __int128 v5; 
  double v6; 
  Weapon resulta; 

  *result = NULL_WEAPON;
  if ( !strncmp(classname, "weapon_", 7ui64) )
  {
    WeaponForName = G_Weapon_GetWeaponForName(&resulta, classname + 7);
    v5 = *(_OWORD *)&WeaponForName->attachmentVariationIndices[5];
    *(__m256i *)&result->weaponIdx = *(__m256i *)&WeaponForName->weaponIdx;
    v6 = *(double *)&WeaponForName->attachmentVariationIndices[21];
    LODWORD(WeaponForName) = *(_DWORD *)&WeaponForName->weaponCamo;
    *(_OWORD *)&result->attachmentVariationIndices[5] = v5;
    *(double *)&result->attachmentVariationIndices[21] = v6;
    *(_DWORD *)&result->weaponCamo = (_DWORD)WeaponForName;
  }
  return result;
}

/*
==============
G_Spawn_InitGameMode
==============
*/
void G_Spawn_InitGameMode(const SpawnGameModeSettings *settings)
{
  if ( !settings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 115, ASSERT_TYPE_ASSERT, "( settings )", (const char *)&queryFormat, "settings") )
    __debugbreak();
  if ( !settings->entFieldCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 116, ASSERT_TYPE_ASSERT, "( settings->entFieldCount )", (const char *)&queryFormat, "settings->entFieldCount") )
    __debugbreak();
  if ( !settings->entFields && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 117, ASSERT_TYPE_ASSERT, "( settings->entFields )", (const char *)&queryFormat, "settings->entFields") )
    __debugbreak();
  s_gameModeSettings = *settings;
}

/*
==============
G_Spawn_LoadStructs
==============
*/
void G_Spawn_LoadStructs(void)
{
  GameScriptData *GameScriptDataCommon; 
  scrContext_t *v1; 
  unsigned int v2; 
  scrContext_t *v3; 
  GameScriptData *v4; 
  unsigned int Object; 
  char *out; 

  GameScriptDataCommon = GameScriptData::GetGameScriptDataCommon();
  if ( !GameScriptDataCommon->initstructs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1061, ASSERT_TYPE_ASSERT, "(gScrData->initstructs)", (const char *)&queryFormat, "gScrData->initstructs") )
    __debugbreak();
  v1 = ScriptContext_Server();
  ProfLoad_Begin("Init Structs Thread");
  v2 = Scr_ExecThread(v1, GameScriptDataCommon->initstructs, 0);
  ProfLoad_End();
  ProfLoad_Begin("Free Structs Thread");
  Scr_FreeThread(v1, v2);
  ProfLoad_End();
  ProfLoad_Begin("Scr_ParseSpawnVars2 loop");
  while ( Scr_ParseSpawnVars2(&level.spawnVar) )
  {
    Scr_SpawnString(&level.spawnVar, 0xD4u, (const char *)&queryFormat.fmt + 3, (const char **)&out);
    if ( IsParentClassname(out, "script_struct") )
    {
      ProfLoad_Begin("G_SpawnStruct");
      if ( !level.spawnVar.spawnVarsValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 352, ASSERT_TYPE_ASSERT, "(level.spawnVar.spawnVarsValid)", (const char *)&queryFormat, "level.spawnVar.spawnVarsValid") )
        __debugbreak();
      v3 = ScriptContext_Server();
      v4 = GameScriptData::GetGameScriptDataCommon();
      if ( !v4->createstruct && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 357, ASSERT_TYPE_ASSERT, "(gScrData->createstruct)", (const char *)&queryFormat, "gScrData->createstruct") )
        __debugbreak();
      Scr_AddExecThread(v3, v4->createstruct, 0);
      Object = Scr_GetObject(v3, 0);
      Scr_SetStructFields(v3, Object, &level.spawnVar);
      ProfLoad_End();
    }
  }
  ProfLoad_End();
  ProfLoad_Begin("G_Spawn_CreateFxStructs");
  G_Spawn_CreateFxStructs();
  ProfLoad_End();
  ProfLoad_Begin("Scr_ResetEntityParsePoint");
  Scr_ResetEntityParsePoint();
  ProfLoad_End();
}

/*
==============
G_Spawn_ParseEntityFieldString
==============
*/
void G_Spawn_ParseEntityFieldString(const char *key, const char *value, gentity_s *ent, int ignoreModel)
{
  scr_string_t String; 
  const ent_field_t *entFields; 
  scr_string_t v10; 
  scr_string_t *name; 
  unsigned int CanonicalString; 
  scrContext_t *v13; 
  unsigned int v14; 

  String = SL_FindString(key);
  entFields = s_gameModeSettings.entFields;
  v10 = String;
  if ( !s_gameModeSettings.entFields )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 465, ASSERT_TYPE_ASSERT, "( s_gameModeSettings.entFields )", (const char *)&queryFormat, "s_gameModeSettings.entFields") )
      __debugbreak();
    entFields = s_gameModeSettings.entFields;
  }
  name = entFields->name;
  if ( entFields->name )
  {
    while ( *name != v10 )
    {
      name = entFields[1].name;
      ++entFields;
      if ( !name )
        goto LABEL_8;
    }
    G_Spawn_ParseEntityField_Internal(entFields, value, ent, ignoreModel);
  }
  else
  {
LABEL_8:
    CanonicalString = SL_GetCanonicalString(key);
    v13 = ScriptContext_Server();
    v14 = Scr_SetEntityScriptVariableType(v13, CanonicalString, value);
    if ( v14 )
      Scr_SetDynamicEntityField(v13, LOCAL_CLIENT_0, ent->s.number, ENTITY_CLASS_GENTITY, v14);
  }
}

/*
==============
G_Spawn_ParseEntityField_Internal
==============
*/
void G_Spawn_ParseEntityField_Internal(const ent_field_t *f, const char *value, gentity_s *ent, int ignoreModel)
{
  int v9; 
  int ServerTriggerIndex; 
  unsigned int v11; 
  scrContext_t *v12; 
  bool IsAlternate; 
  Weapon result; 
  float v15; 
  float v16; 
  float v17; 
  Weapon r_weapon; 

  switch ( f->type )
  {
    case F_INT:
      *(_DWORD *)((char *)&ent->s.number + f->ofs) = atoi(value);
      break;
    case F_SHORT:
      *(__int16 *)((char *)&ent->s.number + f->ofs) = atoi(value);
      break;
    case F_BYTE:
      *((_BYTE *)&ent->s.number + f->ofs) = atoi(value);
      break;
    case F_FLOAT:
      *(double *)&_XMM0 = atof(value);
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      *(float *)((char *)&ent->s.number + f->ofs) = *(float *)&_XMM1;
      break;
    case F_STRING:
      if ( *(_DWORD *)((char *)&ent->s.number + f->ofs) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 392, ASSERT_TYPE_ASSERT, "((*(scr_string_t *) (b + f->ofs)) == ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "(*(scr_string_t *) (b + f->ofs)) == NULL_SCR_STRING") )
          __debugbreak();
      }
      Scr_SetString((scr_string_t *)((char *)ent + f->ofs), (scr_string_t)0);
      *(_DWORD *)((char *)&ent->s.number + f->ofs) = Scr_NewString(value);
      break;
    case F_VECTOR:
      v15 = 0.0;
      v16 = 0.0;
      v17 = 0.0;
      j_sscanf(value, "%f %f %f", &v15, &v16, &v17);
      *(float *)((char *)&ent->s.number + f->ofs) = v15;
      *(float *)((char *)&ent->s.attackerEntityNum + f->ofs) = v16;
      *(float *)((char *)&ent->s.eType + f->ofs) = v17;
      break;
    case F_WEAPON:
      if ( *(_DWORD *)((char *)&ent->s.number + f->ofs) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 444, ASSERT_TYPE_ASSERT, "(*reinterpret_cast<scr_weapon_t*>(b + f->ofs) == NULL_SCRIPT_WEAPON)", (const char *)&queryFormat, "*reinterpret_cast<scr_weapon_t*>(b + f->ofs) == NULL_SCRIPT_WEAPON") )
        __debugbreak();
      v12 = ScriptContext_Server();
      r_weapon = *GScr_Main_GetWeaponForName(&result, v12, value);
      IsAlternate = BG_IsAlternate(value);
      GScr_Weapon_SetWeapon(v12, (scr_weapon_t *)((char *)ent + f->ofs), &r_weapon, IsAlternate);
      break;
    case F_MODEL:
      if ( !ignoreModel )
      {
        if ( *value == 42 )
        {
          v9 = atoi(value + 1);
          ent->s.index.brushModel = truncate_cast<unsigned short,int>(v9);
          ent->r.modelType = 5;
        }
        else if ( *value == 63 )
        {
          ServerTriggerIndex = CM_GetServerTriggerIndex(value);
          ent->s.index.brushModel = truncate_cast<unsigned short,int>(ServerTriggerIndex);
          if ( Scr_ParsingAddonEntities() )
          {
            v11 = CM_TriggerModelBaseCount();
            ent->s.index.brushModel = truncate_cast<unsigned short,unsigned int>(ent->s.index.brushModel + v11);
          }
          ent->r.modelType = 4;
        }
        else
        {
          G_Utils_SetModel(ent, value);
        }
      }
      break;
    default:
      return;
  }
}

/*
==============
G_Spawn_ParseEntityFields
==============
*/
void G_Spawn_ParseEntityFields(gentity_s *ent, int ignoreModel, const char *classname)
{
  const char *v4; 
  int v6; 
  char *(*spawnVars)[2]; 
  const char *v8; 
  const char *v9; 
  scr_string_t String; 
  const ent_field_t *entFields; 
  scr_string_t v12; 
  scr_string_t *name; 
  unsigned int CanonicalString; 
  scrContext_t *v15; 
  unsigned int v16; 

  v4 = classname;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "G_Spawn_ParseEntityFields");
  if ( !level.spawnVar.spawnVarsValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 525, ASSERT_TYPE_ASSERT, "(level.spawnVar.spawnVarsValid)", (const char *)&queryFormat, "level.spawnVar.spawnVarsValid") )
    __debugbreak();
  v6 = 0;
  if ( level.spawnVar.numSpawnVars > 0 )
  {
    spawnVars = level.spawnVar.spawnVars;
    do
    {
      v8 = (*spawnVars)[0];
      v9 = (*spawnVars)[1];
      String = SL_FindString((*spawnVars)[0]);
      entFields = s_gameModeSettings.entFields;
      v12 = String;
      if ( !s_gameModeSettings.entFields )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 465, ASSERT_TYPE_ASSERT, "( s_gameModeSettings.entFields )", (const char *)&queryFormat, "s_gameModeSettings.entFields") )
          __debugbreak();
        entFields = s_gameModeSettings.entFields;
      }
      name = entFields->name;
      if ( entFields->name )
      {
        while ( *name != v12 )
        {
          name = entFields[1].name;
          ++entFields;
          if ( !name )
            goto LABEL_13;
        }
        G_Spawn_ParseEntityField_Internal(entFields, v9, ent, ignoreModel);
      }
      else
      {
LABEL_13:
        CanonicalString = SL_GetCanonicalString(v8);
        v15 = ScriptContext_Server();
        v16 = Scr_SetEntityScriptVariableType(v15, CanonicalString, v9);
        if ( v16 )
          Scr_SetDynamicEntityField(v15, LOCAL_CLIENT_0, ent->s.number, ENTITY_CLASS_GENTITY, v16);
      }
      ++v6;
      ++spawnVars;
    }
    while ( v6 < level.spawnVar.numSpawnVars );
    v4 = classname;
  }
  G_SetOriginAndAngle(ent, &ent->r.currentOrigin, &ent->r.currentAngles, 1, 1);
  if ( ent->classname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 537, ASSERT_TYPE_ASSERT, "(ent->classname == ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "ent->classname == NULL_SCR_STRING") )
    __debugbreak();
  if ( v4 )
    ent->classname = Scr_NewString(v4);
  Sys_ProfEndNamedEvent();
}

/*
==============
G_Spawn_SetStructKeyStringPair
==============
*/
void G_Spawn_SetStructKeyStringPair(unsigned int structId, unsigned int key, scr_string_t value)
{
  scrContext_t *v6; 
  unsigned int Field; 
  VariableType type; 

  if ( value )
  {
    v6 = ScriptContext_Server();
    Field = Scr_FindField(v6, key, &type);
    if ( Field )
    {
      if ( type != VAR_STRING && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 303, ASSERT_TYPE_ASSERT, "(type == VAR_STRING)", (const char *)&queryFormat, "type == VAR_STRING") )
        __debugbreak();
      Scr_AddConstString(v6, value);
      Scr_SetStructField(v6, structId, Field);
    }
  }
}

/*
==============
G_Spawn_ShutdownGameMode
==============
*/
void G_Spawn_ShutdownGameMode(void)
{
  s_gameModeSettings.bspOrDynamicSpawns = NULL;
  *(_QWORD *)&s_gameModeSettings.bspOrDynamicSpawnCount = 0i64;
  s_gameModeSettings.bspOnlySpawns = NULL;
  *(_QWORD *)&s_gameModeSettings.bspOnlySpawnCount = 0i64;
  s_gameModeSettings.entFields = NULL;
  *(_QWORD *)&s_gameModeSettings.entFieldCount = 0i64;
}

/*
==============
G_Spawn_WorldSpawn
==============
*/

char __fastcall G_Spawn_WorldSpawn(double _XMM0_8)
{
  char *v1; 
  const char *v2; 
  __int64 v3; 
  signed __int64 v4; 
  int v5; 
  __int64 v6; 
  int v7; 
  int v8; 
  int v9; 
  gentity_s *v12; 
  unsigned __int16 number; 
  __int64 v14; 
  unsigned int v15; 
  __int64 v16; 
  char result; 
  __int64 v18; 
  __int64 v19; 
  char *out; 

  Scr_SpawnString(&level.spawnVar, 0xD4u, (const char *)&queryFormat.fmt + 3, (const char **)&out);
  v1 = out;
  v2 = "worldspawn";
  v3 = 0x7FFFFFFFi64;
  if ( !out && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  v4 = v1 - "worldspawn";
  do
  {
    v5 = (unsigned __int8)v2[v4];
    v6 = v3;
    v7 = *(unsigned __int8 *)v2++;
    --v3;
    if ( !v6 )
      break;
    if ( v5 != v7 )
    {
      v8 = v5 + 32;
      if ( (unsigned int)(v5 - 65) > 0x19 )
        v8 = v5;
      v5 = v8;
      v9 = v7 + 32;
      if ( (unsigned int)(v7 - 65) > 0x19 )
        v9 = v7;
      if ( v5 != v9 )
      {
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E2D620, 979i64);
        break;
      }
    }
  }
  while ( v5 );
  if ( Com_GameMode_SupportsFeature(WEAPON_SPRINT_RAISE) )
  {
    Scr_SpawnString(&level.spawnVar, 0x1D1u, "800", (const char **)&out);
    _XMM0_8 = atof(out);
    __asm { vcvtsd2ss xmm1, xmm0, xmm0; value }
    Dvar_SetFloat_Internal(DVARFLT_bg_gravity, *(float *)&_XMM1);
  }
  Scr_SpawnString(&level.spawnVar, 0x2B4u, (const char *)&queryFormat.fmt + 3, (const char **)&out);
  if ( *out )
  {
    SV_SetConfigstring(9u, out);
    _XMM0_8 = atof(out);
    __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
    FastSinCos(*(float *)&_XMM1 * 0.017453292, (float *)&level.compassNorth + 1, (float *)&level.compassNorth);
  }
  else
  {
    SV_SetConfigstring(9u, "0");
    level.compassNorth.v[0] = FLOAT_1_0;
    level.compassNorth.v[1] = 0.0;
  }
  Scr_SpawnString(&level.spawnVar, 0x39Du, "0", (const char **)&out);
  g_entities[2046].spawnflags = atoi(out);
  g_entities[2046].s.number = 2046;
  Scr_SetString(&g_entities[2046].classname, scr_const.worldspawn);
  Scr_SetString(&g_entities[2046].script_classname, scr_const.worldspawn);
  g_entities[2046].r.isInUse = 1;
  g_entityIsInUse[2046] = 1;
  v12 = g_entities;
  number = g_entities[2046].r.ownerNum.number;
  if ( number )
  {
    v14 = number;
    v15 = number - 1;
    if ( v15 >= 0x800 )
    {
      LODWORD(v18) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, 2048) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v16 = v14 - 1;
    if ( g_entities[v16].r.isInUse != g_entityIsInUse[v16] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v16] )
    {
      LODWORD(v19) = v12[2046].r.ownerNum.number - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 216, ASSERT_TYPE_ASSERT, "( ( !number || G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( !number || G_IsEntityInUse( number - 1 ) )", v19) )
        __debugbreak();
    }
    if ( v12[2046].r.ownerNum.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 959, ASSERT_TYPE_ASSERT, "(!g_entities[ENTITYNUM_WORLD].r.ownerNum.isDefined())", (const char *)&queryFormat, "!g_entities[ENTITYNUM_WORLD].r.ownerNum.isDefined()") )
      __debugbreak();
  }
  result = Com_GameMode_SupportsFeature(WEAPON_CHARGING_IN);
  if ( result )
    return G_Spawn_WorldSunSettings();
  return result;
}

/*
==============
G_Spawn_WorldSunSettings
==============
*/

void __fastcall G_Spawn_WorldSunSettings(double _XMM0_8)
{
  float v2; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  char *out; 
  float v11; 
  float v12; 
  float v13; 
  vec3_t angles; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_CHARGING_IN) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 805, ASSERT_TYPE_ASSERT, "( Com_GameMode_SupportsFeature( Com_GameMode_Feature::MAP_SUN_SETTINGS ) )", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::MAP_SUN_SETTINGS )") )
    __debugbreak();
  Scr_SpawnString(&level.spawnVar, 0x3C9u, "1", (const char **)&out);
  _XMM0_8 = atof(out);
  __asm { vcvtsd2ss xmm13, xmm0, xmm0 }
  level.worldspawnSunLight = *(float *)&_XMM13;
  Scr_SpawnString(&level.spawnVar, 0x3C7u, "1 1 1", (const char **)&out);
  j_sscanf(out, "%g %g %g", &v11, &v12, &v13);
  if ( v11 > 0.039280001 )
  {
    v3 = (float)(v11 * 0.94786733) + 0.052132703;
    powf_0(v3, 2.4000001);
    v2 = v3;
  }
  else
  {
    v2 = v11 * 0.077399381;
  }
  v11 = v2;
  if ( v12 > 0.039280001 )
  {
    v5 = (float)(v12 * 0.94786733) + 0.052132703;
    powf_0(v5, 2.4000001);
    v4 = v5;
  }
  else
  {
    v4 = v12 * 0.077399381;
  }
  v12 = v4;
  if ( v13 > 0.039280001 )
  {
    v7 = (float)(v13 * 0.94786733) + 0.052132703;
    powf_0(v7, 2.4000001);
    v6 = v7;
  }
  else
  {
    v6 = v13 * 0.077399381;
  }
  v8 = (float)((float)(v2 * 0.21259999) + (float)(v4 * 0.71520001)) + (float)(v6 * 0.0722);
  v13 = v6;
  if ( v8 > 0.0 )
  {
    v9 = 1.0 / v8;
    v2 = v9 * v2;
    v4 = v9 * v4;
    v6 = v9 * v6;
    v11 = v2;
    v12 = v4;
    v13 = v6;
  }
  level.mapSunColorAndIntensity.v[3] = *(float *)&_XMM13 * 0.31830987;
  level.overrideSunColorAndIntensity.v[3] = *(float *)&_XMM13 * 0.31830987;
  level.mapSunColorAndIntensity.v[0] = v2;
  level.mapSunColorAndIntensity.v[1] = v4;
  level.mapSunColorAndIntensity.v[2] = v6;
  level.overrideSunColorAndIntensity.v[0] = v2;
  level.overrideSunColorAndIntensity.v[1] = v4;
  level.overrideSunColorAndIntensity.v[2] = v6;
  Scr_SpawnString(&level.spawnVar, 0x3C8u, "0 0 0", (const char **)&out);
  j_sscanf(out, "%g %g %g", &angles, &angles.y, &angles.z);
  AngleVectors(&angles, &level.mapSunDirection, NULL, NULL);
}

/*
==============
Scr_AcquireObject
==============
*/
void Scr_AcquireObject(scrContext_t *scrContext, EntityClass classnum, int entnum)
{
  int v3; 

  if ( (unsigned __int8)classnum > ENTITY_CLASS_SOUNDENTITY )
  {
    if ( classnum == ENTITY_CLASS_SAVED_COUNT )
    {
      GScr_Weapon_AddReference(scrContext, (const scr_weapon_t)entnum);
    }
    else
    {
      v3 = (unsigned __int8)classnum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1970, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "bad class num %u", v3) )
        __debugbreak();
    }
  }
}

/*
==============
Scr_GetEntityField
==============
*/
void Scr_GetEntityField(scrContext_t *scrContext, int entnum, __int64 offset)
{
  __int64 v3; 
  gentity_s *v6; 
  unsigned int v7; 
  gclient_s *client; 
  actor_s *actor; 
  sentient_s *sentient; 
  Vehicle *vehicle; 
  const ent_field_t *v12; 
  void (__fastcall *getter)(scrContext_t *, gentity_s *, int); 
  ai_scripted_t *AIScripted; 
  gagent_s *agent; 
  __int64 v16; 
  __int64 v17; 

  v3 = entnum;
  if ( (unsigned int)entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1810, ASSERT_TYPE_ASSERT, "((unsigned)entnum < ( 2048 ))", (const char *)&queryFormat, "(unsigned)entnum < MAX_GENTITIES") )
    __debugbreak();
  v6 = &g_entities[v3];
  if ( (_DWORD)v3 != v6->s.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1813, ASSERT_TYPE_ASSERT, "( entnum ) == ( ent->s.number )", "%s == %s\n\t%i, %i", "entnum", "ent->s.number", v3, v6->s.number) )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x800 )
  {
    LODWORD(v17) = 2048;
    LODWORD(v16) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v3].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v3] )
  {
    LODWORD(v16) = v6->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1814, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( entnum ) ) )", "( ent->s.number ) = %i", v16) )
      __debugbreak();
  }
  v7 = offset & 0xE000;
  if ( v7 > 0x8000 )
  {
    if ( v7 == 40960 )
    {
      agent = v6->agent;
      if ( agent )
        Scr_GetAgentField(scrContext, agent, offset & 0xFFFF1FFF);
    }
    else
    {
      if ( v7 != 49152 )
      {
LABEL_34:
        if ( !s_gameModeSettings.entFields && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1870, ASSERT_TYPE_ASSERT, "( s_gameModeSettings.entFields )", (const char *)&queryFormat, "s_gameModeSettings.entFields") )
          __debugbreak();
        if ( (unsigned int)offset >= s_gameModeSettings.entFieldCount - 1 )
        {
          LODWORD(v17) = s_gameModeSettings.entFieldCount - 1;
          LODWORD(v16) = offset;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1871, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( offset ) ) < (unsigned)( s_gameModeSettings.entFieldCount - 1 )", "static_cast<uint>( offset ) doesn't index s_gameModeSettings.entFieldCount - 1\n\t%i not in [0, %i)", v16, v17) )
            __debugbreak();
        }
        v12 = &s_gameModeSettings.entFields[offset];
        getter = v12->getter;
        if ( getter )
        {
          if ( (unsigned __int64)(offset + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)offset, "signed", offset) )
            __debugbreak();
          getter(scrContext, v6, offset);
        }
        else
        {
          Scr_GetGenericField(scrContext, (unsigned __int8 *)v6, v12->type, v12->ofs);
        }
        return;
      }
      if ( v6->actor || v6->agent )
      {
        AIScripted = AI_GetAIScripted(v6);
        if ( AIScripted )
          Scr_GetAIScriptedField(scrContext, AIScripted, offset & 0xFFFF1FFF);
      }
    }
  }
  else
  {
    switch ( v7 )
    {
      case 0x8000u:
        vehicle = v6->vehicle;
        if ( vehicle )
          G_VehicleScript_GetField(scrContext, vehicle, offset & 0xFFFF1FFF);
        break;
      case 0x2000u:
        sentient = v6->sentient;
        if ( sentient )
          Scr_GetSentientField(scrContext, sentient, offset & 0xFFFF1FFF);
        break;
      case 0x4000u:
        actor = v6->actor;
        if ( actor )
          Scr_GetActorField(scrContext, actor, offset & 0xFFFF1FFF);
        break;
      case 0x6000u:
        client = v6->client;
        if ( client )
          Scr_GetClientField(scrContext, client, offset & 0xFFFF1FFF);
        return;
      default:
        goto LABEL_34;
    }
  }
}

/*
==============
Scr_GetGenericEnt
==============
*/
char Scr_GetGenericEnt(scrContext_t *scrContext, int offset, const char *key, scr_string_t name, int eType, const char *source)
{
  __int64 v6; 
  const ent_field_t *v8; 
  gentity_s *v9; 
  const gentity_s *v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  int v14; 
  const char *v15; 
  const char *v16; 
  __int64 v18; 
  __int64 v19; 
  scrContext_t *scrContexta; 

  scrContexta = scrContext;
  v6 = offset;
  if ( offset >= s_gameModeSettings.entFieldCount - 1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1108, ASSERT_TYPE_ASSERT, "(unsigned)( offset ) < (unsigned)( s_gameModeSettings.entFieldCount - 1 )", "offset doesn't index s_gameModeSettings.entFieldCount - 1\n\t%i not in [0, %i)", offset, s_gameModeSettings.entFieldCount - 1) )
      __debugbreak();
    scrContext = scrContexta;
  }
  v8 = &s_gameModeSettings.entFields[v6];
  if ( v8->type != F_STRING )
    Scr_ParamError(COM_ERR_3588, scrContext, 1u, "getent key is not internally a string");
  v9 = g_entities;
  v10 = NULL;
  v11 = 0;
  if ( level.num_entities <= 0 )
    return 0;
  v12 = 0i64;
  v13 = 0i64;
  do
  {
    if ( (unsigned int)v11 >= 0x800 )
    {
      LODWORD(v19) = 2048;
      LODWORD(v18) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v12].r.isInUse != g_entityIsInUse[v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[v13] && (!eType || level.gentities[v12].s.eType == eType) )
    {
      v14 = *(_DWORD *)((char *)&v9->s.number + v8->ofs);
      if ( v14 )
      {
        if ( v14 == name )
        {
          if ( v10 )
          {
            v15 = SL_ConvertToString(name);
            v16 = j_va("%s used with more than one entity (\"%s\" = \"%s\")", source, key, v15);
            Scr_Error(COM_ERR_3589, scrContexta, v16);
          }
          v10 = v9;
        }
      }
    }
    ++v11;
    ++v13;
    ++v12;
    ++v9;
  }
  while ( v11 < level.num_entities );
  if ( !v10 )
    return 0;
  GScr_AddEntity(v10);
  return 1;
}

/*
==============
Scr_GetGenericEntArray
==============
*/
void Scr_GetGenericEntArray(scrContext_t *scrContext, int qbOnlyScriptables)
{
  Scr_GetGenericEntArray(scrContext, qbOnlyScriptables, NULL, 0.0);
}

/*
==============
Scr_GetGenericEntArray
==============
*/
void Scr_GetGenericEntArray(scrContext_t *scrContext, int qbOnlyScriptables, const vec3_t *fromOrigin, float radius)
{
  float v7; 
  const gentity_s *v8; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  float v12; 
  float v13; 
  float v14; 
  __int64 v15; 
  __int64 v16; 

  v7 = radius * radius;
  if ( fromOrigin )
  {
    if ( ((LODWORD(fromOrigin->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(fromOrigin->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(fromOrigin->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1211, ASSERT_TYPE_SANITY, "( !IS_NAN( ( *fromOrigin )[0] ) && !IS_NAN( ( *fromOrigin )[1] ) && !IS_NAN( ( *fromOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( *fromOrigin )[0] ) && !IS_NAN( ( *fromOrigin )[1] ) && !IS_NAN( ( *fromOrigin )[2] )") )
      __debugbreak();
    if ( (float)(radius * radius) < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1212, ASSERT_TYPE_ASSERT, "(radiusSq >= 0)", (const char *)&queryFormat, "radiusSq >= 0") )
      __debugbreak();
  }
  Scr_MakeArray(scrContext);
  v8 = g_entities;
  v9 = 0;
  if ( level.num_entities > 0 )
  {
    v10 = 0i64;
    v11 = 0i64;
    do
    {
      if ( (unsigned int)v9 >= 0x800 )
      {
        LODWORD(v16) = 2048;
        LODWORD(v15) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v11].r.isInUse != g_entityIsInUse[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v10] && (!qbOnlyScriptables || ScriptableSv_GetScriptableIndexForEntity(v8) != -1) )
      {
        if ( !fromOrigin || (v12 = fromOrigin->v[0] - g_entities[v11].r.currentOrigin.v[0], v13 = fromOrigin->v[1] - g_entities[v11].r.currentOrigin.v[1], v14 = fromOrigin->v[2] - g_entities[v11].r.currentOrigin.v[2], (float)((float)((float)(v13 * v13) + (float)(v12 * v12)) + (float)(v14 * v14)) <= v7) )
        {
          GScr_AddEntity(v8);
          Scr_AddArray(scrContext);
        }
      }
      ++v9;
      ++v10;
      ++v11;
      ++v8;
    }
    while ( v9 < level.num_entities );
  }
}

/*
==============
Scr_GetGenericEntArray
==============
*/
void Scr_GetGenericEntArray(scrContext_t *scrContext, int offset, scr_string_t name, int qbOnlyScriptables)
{
  Scr_GetGenericEntArray(scrContext, offset, name, qbOnlyScriptables, NULL, 0.0);
}

/*
==============
Scr_GetGenericEntArray
==============
*/
void Scr_GetGenericEntArray(scrContext_t *scrContext, int offset, scr_string_t name, int qbOnlyScriptables, const vec3_t *fromOrigin, float radius)
{
  __int64 v8; 
  const ent_field_t *v9; 
  const gentity_s *v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  int v14; 
  float v15; 
  float v16; 
  float v17; 
  __int64 v18; 
  __int64 v19; 
  unsigned int v20; 

  v8 = offset;
  if ( fromOrigin )
  {
    if ( ((LODWORD(fromOrigin->v[0]) & 0x7F800000) == 2139095040 || (LODWORD(fromOrigin->v[1]) & 0x7F800000) == 2139095040 || (LODWORD(fromOrigin->v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1164, ASSERT_TYPE_SANITY, "( !IS_NAN( ( *fromOrigin )[0] ) && !IS_NAN( ( *fromOrigin )[1] ) && !IS_NAN( ( *fromOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( *fromOrigin )[0] ) && !IS_NAN( ( *fromOrigin )[1] ) && !IS_NAN( ( *fromOrigin )[2] )") )
      __debugbreak();
    if ( (float)(radius * radius) < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1165, ASSERT_TYPE_ASSERT, "(radiusSq >= 0)", (const char *)&queryFormat, "radiusSq >= 0") )
      __debugbreak();
  }
  if ( (unsigned int)v8 >= s_gameModeSettings.entFieldCount - 1 )
  {
    v20 = s_gameModeSettings.entFieldCount - 1;
    LODWORD(v18) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1169, ASSERT_TYPE_ASSERT, "(unsigned)( offset ) < (unsigned)( s_gameModeSettings.entFieldCount - 1 )", "offset doesn't index s_gameModeSettings.entFieldCount - 1\n\t%i not in [0, %i)", v18, v20) )
      __debugbreak();
  }
  v9 = &s_gameModeSettings.entFields[v8];
  if ( v9->type != F_STRING )
    Scr_ParamError(COM_ERR_3590, scrContext, 1u, "key is not internally a string");
  Scr_MakeArray(scrContext);
  v10 = g_entities;
  v11 = 0;
  if ( level.num_entities > 0 )
  {
    v12 = 0i64;
    v13 = 0i64;
    do
    {
      if ( (unsigned int)v11 >= 0x800 )
      {
        LODWORD(v19) = 2048;
        LODWORD(v18) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v13].r.isInUse != g_entityIsInUse[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v12] )
      {
        v14 = *(_DWORD *)((char *)&v10->s.number + v9->ofs);
        if ( v14 )
        {
          if ( v14 == name && (!qbOnlyScriptables || ScriptableSv_GetScriptableIndexForEntity(v10) != -1) )
          {
            if ( !fromOrigin || (v15 = fromOrigin->v[0] - g_entities[v13].r.currentOrigin.v[0], v16 = fromOrigin->v[1] - g_entities[v13].r.currentOrigin.v[1], v17 = fromOrigin->v[2] - g_entities[v13].r.currentOrigin.v[2], (float)((float)((float)(v16 * v16) + (float)(v15 * v15)) + (float)(v17 * v17)) <= (float)(radius * radius)) )
            {
              GScr_AddEntity(v10);
              Scr_AddArray(scrContext);
            }
          }
        }
      }
      ++v11;
      ++v12;
      ++v13;
      ++v10;
    }
    while ( v11 < level.num_entities );
  }
}

/*
==============
Scr_GetGenericField
==============
*/
void Scr_GetGenericField(scrContext_t *scrContext, unsigned __int8 *b, fieldtype_t type, __int64 ofs)
{
  scr_string_t v5; 
  const char *v6; 
  float v7; 
  const gentity_s *v8; 
  unsigned __int8 *v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  const gentity_s **v13; 
  SentientHandle *v14; 
  sentient_s *v15; 
  const pathnode_t *v16; 
  const char *ModelName; 
  unsigned int v18; 
  __int64 v19; 
  int v20; 
  __int64 v21; 
  int v22; 
  float value[4]; 

  switch ( type )
  {
    case F_INT:
      Scr_AddInt(scrContext, *(_DWORD *)&b[ofs]);
      break;
    case F_SHORT:
      Scr_AddInt(scrContext, *(__int16 *)&b[ofs]);
      break;
    case F_USHORT:
      Scr_AddInt(scrContext, *(unsigned __int16 *)&b[ofs]);
      break;
    case F_BYTE:
      Scr_AddInt(scrContext, b[ofs]);
      break;
    case F_FLOAT:
      Scr_AddFloat(scrContext, *(float *)&b[ofs]);
      break;
    case F_STRING:
      v5 = *(_DWORD *)&b[ofs];
      if ( v5 )
        Scr_AddConstString(scrContext, v5);
      break;
    case F_CSTRING:
      v6 = *(const char **)&b[ofs];
      if ( v6 && *v6 )
        Scr_AddString(scrContext, v6);
      break;
    case F_VECTOR:
      Scr_AddVector(scrContext, (const float *)&b[ofs]);
      break;
    case F_ENTITY:
      v8 = *(const gentity_s **)&b[ofs];
      if ( v8 )
        GScr_AddEntity(v8);
      break;
    case F_ENTHANDLE:
      v9 = &b[ofs];
      if ( EntHandle::isDefined((EntHandle *)&b[ofs]) )
      {
        v10 = *(unsigned __int16 *)v9;
        if ( (unsigned int)(v10 - 1) >= 0x7FF )
        {
          v22 = 2047;
          v20 = v10 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 223, ASSERT_TYPE_ASSERT, "(unsigned)( number - 1 ) < (unsigned)( ENTITYNUM_NONE )", "number - 1 doesn't index ENTITYNUM_NONE\n\t%i not in [0, %i)", v20, v22) )
            __debugbreak();
        }
        v11 = *(unsigned __int16 *)v9;
        if ( (unsigned int)(v11 - 1) >= 0x800 )
        {
          LODWORD(v21) = 2048;
          LODWORD(v19) = v11 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v19, v21) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        v12 = v11 - 1;
        if ( g_entities[v12].r.isInUse != g_entityIsInUse[v12] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( !g_entityIsInUse[v12] )
        {
          LODWORD(v21) = *(unsigned __int16 *)v9 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 224, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( number - 1 ) ) )", "%s\n\t( number - 1 ) = %i", "( G_IsEntityInUse( number - 1 ) )", v21) )
            __debugbreak();
        }
        GScr_AddEntity(&g_entities[*(unsigned __int16 *)v9 - 1]);
      }
      break;
    case F_SENTIENT:
      v13 = *(const gentity_s ***)&b[ofs];
      if ( v13 )
        GScr_AddEntity(*v13);
      break;
    case F_SENTIENTHANDLE:
      v14 = (SentientHandle *)&b[ofs];
      if ( SentientHandle::isDefined((SentientHandle *)&b[ofs]) )
      {
        v15 = SentientHandle::sentient(v14);
        GScr_AddEntity(v15->ent);
      }
      break;
    case F_PATHNODE:
      v16 = *(const pathnode_t **)&b[ofs];
      if ( v16 )
        Scr_AddPathnode(v16);
      break;
    case F_WEAPON:
      Scr_AddEntityNum(scrContext, *(_DWORD *)&b[ofs], ENTITY_CLASS_SAVED_COUNT);
      break;
    case F_ANGLES_YAW:
      v7 = *(float *)&b[ofs];
      value[0] = 0.0;
      value[1] = v7;
      value[2] = 0.0;
      Scr_AddVector(scrContext, value);
      break;
    case F_OBJECT:
      v18 = *(_DWORD *)&b[ofs];
      if ( v18 )
        Scr_AddObject(scrContext, v18);
      break;
    case F_MODEL:
      ModelName = G_CString_GetModelName(*(unsigned __int16 *)&b[ofs]);
      Scr_AddString(scrContext, ModelName);
      break;
    default:
      return;
  }
}

/*
==============
Scr_GetMaxClassEntities
==============
*/
__int64 Scr_GetMaxClassEntities(EntityClass classnum)
{
  __int64 result; 
  int v2; 

  switch ( classnum )
  {
    case ENTITY_CLASS_GENTITY:
    case ENTITY_CLASS_BLACKBOARD:
      result = 2048i64;
      break;
    case ENTITY_CLASS_HUDELEM:
      result = 1080i64;
      break;
    case ENTITY_CLASS_PATHNODE:
      result = 0xFFFFi64;
      break;
    case ENTITY_CLASS_VEHICLENODE:
      result = 4000i64;
      break;
    case ENTITY_CLASS_FXENTITY:
      result = 1280i64;
      break;
    case ENTITY_CLASS_PIP:
      result = 1i64;
      break;
    case ENTITY_CLASS_SPAWNER:
      result = 512i64;
      break;
    case ENTITY_CLASS_SCRIPTABLE:
      result = 250000i64;
      break;
    case ENTITY_CLASS_SOUNDENTITY:
      result = 128i64;
      break;
    case ENTITY_CLASS_SAVED_COUNT:
      result = 1000i64;
      break;
    default:
      v2 = (unsigned __int8)classnum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1681, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "bad class num %u", v2) )
        __debugbreak();
      result = 0i64;
      break;
  }
  return result;
}

/*
==============
Scr_ReleaseObject
==============
*/
void Scr_ReleaseObject(scrContext_t *scrContext, EntityClass classnum, int entnum)
{
  int v3; 

  if ( (unsigned __int8)classnum > ENTITY_CLASS_SOUNDENTITY )
  {
    if ( classnum == ENTITY_CLASS_SAVED_COUNT )
    {
      GScr_Weapon_RemoveReference(scrContext, (const scr_weapon_t)entnum);
    }
    else
    {
      v3 = (unsigned __int8)classnum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1999, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "bad class num %u", v3) )
        __debugbreak();
    }
  }
}

/*
==============
Scr_SetEntityField
==============
*/
__int64 Scr_SetEntityField(scrContext_t *scrContext, int entnum, int offset, bool useSetter)
{
  __int64 v4; 
  __int64 v5; 
  gentity_s *v8; 
  unsigned int v9; 
  gclient_s *client; 
  actor_s *v11; 
  sentient_s *sentient; 
  Vehicle *vehicle; 
  const ent_field_t *v14; 
  void (__fastcall *setter)(scrContext_t *, gentity_s *, int); 
  ai_scripted_t *actor; 
  ai_agent_t *ScriptedAgentInfo; 
  gagent_s *agent; 
  __int64 v20; 
  __int64 v21; 

  v4 = entnum;
  v5 = offset;
  if ( (unsigned int)entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1517, ASSERT_TYPE_ASSERT, "((unsigned)entnum < ( 2048 ))", (const char *)&queryFormat, "(unsigned)entnum < MAX_GENTITIES") )
    __debugbreak();
  v8 = &g_entities[v4];
  if ( (_DWORD)v4 != v8->s.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1520, ASSERT_TYPE_ASSERT, "( entnum ) == ( ent->s.number )", "%s == %s\n\t%i, %i", "entnum", "ent->s.number", v4, v8->s.number) )
    __debugbreak();
  if ( (unsigned int)v4 >= 0x800 )
  {
    LODWORD(v21) = 2048;
    LODWORD(v20) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v20, v21) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v4].r.isInUse != g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v4] )
  {
    LODWORD(v20) = v8->s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1521, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( entnum ) ) )", "( ent->s.number ) = %i", v20) )
      __debugbreak();
  }
  v9 = v5 & 0xE000;
  if ( v9 > 0x8000 )
  {
    if ( v9 == 40960 )
    {
      agent = v8->agent;
      if ( agent )
      {
        Scr_SetAgentField(scrContext, agent, v5 & 0xFFFF1FFF);
        return 1i64;
      }
    }
    else
    {
      if ( v9 != 49152 )
      {
LABEL_34:
        if ( !s_gameModeSettings.entFields && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1586, ASSERT_TYPE_ASSERT, "( s_gameModeSettings.entFields )", (const char *)&queryFormat, "s_gameModeSettings.entFields") )
          __debugbreak();
        if ( (unsigned int)v5 >= s_gameModeSettings.entFieldCount - 1 )
        {
          LODWORD(v21) = s_gameModeSettings.entFieldCount - 1;
          LODWORD(v20) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1587, ASSERT_TYPE_ASSERT, "(unsigned)( static_cast<uint>( offset ) ) < (unsigned)( s_gameModeSettings.entFieldCount - 1 )", "static_cast<uint>( offset ) doesn't index s_gameModeSettings.entFieldCount - 1\n\t%i not in [0, %i)", v20, v21) )
            __debugbreak();
        }
        v14 = &s_gameModeSettings.entFields[v5];
        setter = v14->setter;
        if ( setter && useSetter )
          setter(scrContext, v8, v5);
        else
          Scr_SetGenericField(scrContext, (unsigned __int8 *)v8, v14->type, v14->ofs);
        return 1i64;
      }
      actor = v8->actor;
      if ( actor )
      {
        Scr_SetAIScriptedField(scrContext, actor, v5 & 0xFFFF1FFF);
        return 1i64;
      }
      if ( v8->agent && SV_IsAgentScripted(v8) )
      {
        ScriptedAgentInfo = AIAgentInterface::GetScriptedAgentInfo(v8);
        if ( !ScriptedAgentInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1556, ASSERT_TYPE_ASSERT, "(pInfo)", (const char *)&queryFormat, "pInfo") )
          __debugbreak();
        Scr_SetAIScriptedField(scrContext, ScriptedAgentInfo, v5 & 0xFFFF1FFF);
        return 1i64;
      }
    }
    return 0i64;
  }
  switch ( v9 )
  {
    case 0x8000u:
      vehicle = v8->vehicle;
      if ( vehicle )
      {
        G_VehicleScript_SetField(scrContext, vehicle, v5 & 0xFFFF1FFF);
        return 1i64;
      }
      return 0i64;
    case 0x2000u:
      sentient = v8->sentient;
      if ( sentient )
      {
        Scr_SetSentientField(scrContext, sentient, v5 & 0xFFFF1FFF);
        return 1i64;
      }
      return 0i64;
    case 0x4000u:
      v11 = v8->actor;
      if ( v11 )
      {
        Scr_SetActorField(scrContext, v11, v5 & 0xFFFF1FFF);
        return 1i64;
      }
      return 0i64;
  }
  if ( v9 != 24576 )
    goto LABEL_34;
  client = v8->client;
  if ( !client )
    return 0i64;
  Scr_SetClientField(scrContext, client, v5 & 0xFFFF1FFF);
  return 1i64;
}

/*
==============
Scr_SetEntityFieldBinary
==============
*/
void Scr_SetEntityFieldBinary(scrContext_t *scrContext, int entnum, int offset)
{
  __int64 v3; 
  gentity_s *v6; 
  __int64 v7; 
  __int64 v8; 
  int v9; 
  int number; 

  v3 = entnum;
  if ( (unsigned int)entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1605, ASSERT_TYPE_ASSERT, "(( unsigned ) entnum < ( 2048 ))", (const char *)&queryFormat, "( unsigned ) entnum < MAX_GENTITIES") )
    __debugbreak();
  v6 = g_entities;
  if ( (_DWORD)v3 != g_entities[v3].s.number )
  {
    number = g_entities[v3].s.number;
    v9 = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1608, ASSERT_TYPE_ASSERT, "( entnum ) == ( ent->s.number )", "%s == %s\n\t%i, %i", "entnum", "ent->s.number", v9, number) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0x800 )
  {
    LODWORD(v8) = 2048;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v3].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v3] )
  {
    LODWORD(v7) = v6[v3].s.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1609, ASSERT_TYPE_ASSERT, "( ( G_IsEntityInUse( entnum ) ) )", "( ent->s.number ) = %i", v7) )
      __debugbreak();
  }
  Scr_SetEntityField(scrContext, v3, offset, 0);
}

/*
==============
Scr_SetGenericField
==============
*/
void Scr_SetGenericField(scrContext_t *scrContext, unsigned __int8 *b, fieldtype_t type, __int64 ofs)
{
  scr_string_t ConstStringIncludeNull; 
  float v8; 
  int Int; 
  unsigned int v10; 
  unsigned int v11; 
  double Float; 
  const gentity_s *EntityAllowNull; 
  gentity_s *v14; 
  gentity_s *v15; 
  SentientHandle *v16; 
  const char *String; 
  bool IsAlternate; 
  scr_entref_t EntityRef; 
  Weapon result; 
  vec3_t vectorValue; 
  Weapon r_weapon; 

  switch ( type )
  {
    case F_INT:
      *(_DWORD *)&b[ofs] = Scr_GetInt(scrContext, 0);
      break;
    case F_SHORT:
      Int = Scr_GetInt(scrContext, 0);
      if ( (unsigned int)(Int + 0x8000) > 0xFFFF )
        Scr_Error(COM_ERR_3591, scrContext, "SetGenericField is attempting to truncate an invalid number into an F_SHORT");
      *(_WORD *)&b[ofs] = truncate_cast<short,int>(Int);
      break;
    case F_USHORT:
      v10 = Scr_GetInt(scrContext, 0);
      if ( v10 > 0xFFFF )
        Scr_Error(COM_ERR_3592, scrContext, "SetGenericField is attempting to truncate an invalid number into an F_USHORT (which is unsigned)");
      *(_WORD *)&b[ofs] = truncate_cast<unsigned short,int>(v10);
      break;
    case F_BYTE:
      v11 = Scr_GetInt(scrContext, 0);
      if ( v11 > 0xFF )
        Scr_Error(COM_ERR_3593, scrContext, "SetGenericField is attempting to truncate an invalid number into an F_BYTE (which is unsigned)");
      b[ofs] = truncate_cast<unsigned char,int>(v11);
      break;
    case F_FLOAT:
      Float = Scr_GetFloat(scrContext, 0);
      *(float *)&b[ofs] = *(float *)&Float;
      break;
    case F_STRING:
      ConstStringIncludeNull = Scr_GetConstStringIncludeNull(scrContext, 0);
      Scr_SetString((scr_string_t *)&b[ofs], ConstStringIncludeNull);
      break;
    case F_VECTOR:
      Scr_GetVector(scrContext, 0, &vectorValue);
      v8 = vectorValue.v[1];
      *(float *)&b[ofs] = vectorValue.v[0];
      *(float *)&b[ofs + 8] = vectorValue.v[2];
      *(float *)&b[ofs + 4] = v8;
      break;
    case F_ENTITY:
      *(_QWORD *)&b[ofs] = GScr_GetEntityAllowNull(0);
      break;
    case F_ENTHANDLE:
      EntityAllowNull = GScr_GetEntityAllowNull(0);
      EntHandle::setEnt((EntHandle *)&b[ofs], EntityAllowNull);
      break;
    case F_SENTIENT:
      v14 = GScr_GetEntityAllowNull(0);
      if ( v14 )
        *(_QWORD *)&b[ofs] = v14->sentient;
      else
        *(_QWORD *)&b[ofs] = 0i64;
      break;
    case F_SENTIENTHANDLE:
      v15 = GScr_GetEntityAllowNull(0);
      v16 = (SentientHandle *)&b[ofs];
      if ( v15 )
        SentientHandle::setSentient(v16, v15->sentient);
      else
        SentientHandle::setSentient(v16, NULL);
      break;
    case F_PATHNODE:
      *(_QWORD *)&b[ofs] = Scr_GetPathnodeAllowNull(scrContext, 0);
      break;
    case F_WEAPON:
      if ( Scr_GetType(scrContext, 0) == VAR_STRING )
      {
        String = Scr_GetString(scrContext, 0);
        r_weapon = *GScr_Main_GetWeaponForName(&result, scrContext, String);
        IsAlternate = BG_IsAlternate(String);
        GScr_Weapon_SetWeapon(scrContext, (scr_weapon_t *)&b[ofs], &r_weapon, IsAlternate);
      }
      else
      {
        EntityRef = Scr_GetEntityRef(scrContext, 0);
        if ( EntityRef.entclass == ENTITY_CLASS_SAVED_COUNT )
          GScr_Weapon_Set(scrContext, (scr_weapon_t *)&b[ofs], (const scr_weapon_t)EntityRef.entnum);
        else
          Scr_ParamError(COM_ERR_3594, scrContext, 0, "Not a weapon object");
      }
      break;
    case F_ANGLES_YAW:
      Scr_GetVector(scrContext, 0, &vectorValue);
      *(float *)&b[ofs] = vectorValue.v[1];
      break;
    default:
      return;
  }
}

/*
==============
Scr_SetGenericFieldByValue
==============
*/
void Scr_SetGenericFieldByValue(scrContext_t *scrContext, unsigned __int8 *b, fieldtype_t type, __int64 ofs, VariableValue *val)
{
  int intValue; 
  int v8; 
  int v9; 
  scrContext_t *v10; 
  const char *v11; 
  ComErrorCode v12; 

  switch ( type )
  {
    case F_INT:
    case F_FLOAT:
    case F_STRING:
      *(_DWORD *)&b[ofs] = val->u.intValue;
      return;
    case F_SHORT:
      intValue = val->u.intValue;
      if ( (unsigned int)(val->u.intValue + 0x8000) > 0xFFFF )
        Scr_Error(COM_ERR_3595, scrContext, "Scr_SetGenericFieldByValue is attempting to truncate an invalid number into an F_SHORT");
      *(_WORD *)&b[ofs] = truncate_cast<short,int>(intValue);
      return;
    case F_USHORT:
      v8 = val->u.intValue;
      if ( val->u.intValue > 0xFFFFu )
        Scr_Error(COM_ERR_3596, scrContext, "Scr_SetGenericFieldByValue is attempting to truncate an invalid number into an F_USHORT (which is unsigned)");
      *(_WORD *)&b[ofs] = truncate_cast<unsigned short,int>(v8);
      return;
    case F_BYTE:
      v9 = val->u.intValue;
      if ( val->u.intValue > 0xFFu )
        Scr_Error(COM_ERR_3597, scrContext, "Scr_SetGenericFieldByValue is attempting to truncate an invalid number into an F_BYTE (which is unsigned)");
      b[ofs] = truncate_cast<unsigned char,int>(v9);
      return;
    case F_VECTOR:
      *(float *)&b[ofs] = *val->u.vectorValue;
      *(_DWORD *)&b[ofs + 4] = *(_DWORD *)(val->u.scriptCodePosValue + 4);
      *(_DWORD *)&b[ofs + 8] = *(_DWORD *)(val->u.scriptCodePosValue + 8);
      return;
    case F_ENTITY:
      v10 = scrContext;
      v11 = "Scr_SetGenericFieldByValue is attempting to set an entity by value which is unsupported.";
      v12 = COM_ERR_3598;
      goto LABEL_20;
    case F_ENTHANDLE:
      v10 = scrContext;
      v11 = "Scr_SetGenericFieldByValue is attempting to set an ent handle by value which is unsupported.";
      v12 = COM_ERR_3599;
      goto LABEL_20;
    case F_SENTIENT:
      v10 = scrContext;
      v11 = "Scr_SetGenericFieldByValue is attempting to set a sentient by value which is unsupported.";
      v12 = COM_ERR_3600;
      goto LABEL_20;
    case F_SENTIENTHANDLE:
      v10 = scrContext;
      v11 = "Scr_SetGenericFieldByValue is attempting to set a sentient handle by value which is unsupported.";
      v12 = COM_ERR_3601;
      goto LABEL_20;
    case F_PATHNODE:
      v10 = scrContext;
      v11 = "Scr_SetGenericFieldByValue is attempting to set a pathnode by value which is unsupported.";
      v12 = COM_ERR_3602;
      goto LABEL_20;
    case F_WEAPON:
      v10 = scrContext;
      v11 = "Scr_SetGenericFieldByValue is attempting to set a weapon by value which is unsupported.";
      v12 = COM_ERR_3603;
LABEL_20:
      Scr_Error(v12, v10, v11);
      break;
    case F_ANGLES_YAW:
      *(_DWORD *)&b[ofs] = *(_DWORD *)(val->u.scriptCodePosValue + 4);
      break;
    default:
      return;
  }
}

/*
==============
Scr_SetObjectFieldByValue
==============
*/
__int64 Scr_SetObjectFieldByValue(scrContext_t *scrContext, EntityClass classnum, int entnum, int offset, VariableValue *value)
{
  const char *v6; 
  __int64 result; 
  const char *v8; 
  const char *v9; 
  const char *v10; 
  const char *v11; 
  const char *v12; 
  const char *v13; 
  const char *v14; 
  int v15; 

  switch ( classnum )
  {
    case ENTITY_CLASS_GENTITY:
      v6 = j_va("entity does not support directly being set, implementation needed");
      Scr_Error(COM_ERR_3608, scrContext, v6);
      result = 1i64;
      break;
    case ENTITY_CLASS_HUDELEM:
      v8 = j_va("hudelem does not support directly being set, implementation needed");
      Scr_Error(COM_ERR_3609, scrContext, v8);
      result = 1i64;
      break;
    case ENTITY_CLASS_PATHNODE:
      v9 = j_va("pathnode does not support directly being set, implementation needed");
      Scr_Error(COM_ERR_3610, scrContext, v9);
      result = 1i64;
      break;
    case ENTITY_CLASS_VEHICLENODE:
      v10 = j_va("vehicle node is read-only");
      Scr_Error(COM_ERR_3611, scrContext, v10);
      result = 1i64;
      break;
    case ENTITY_CLASS_FXENTITY:
      v11 = j_va("FXEntity node is read-only");
      Scr_Error(COM_ERR_3612, scrContext, v11);
      result = 1i64;
      break;
    case ENTITY_CLASS_PIP:
      v13 = j_va("entity does not support directly being set, implementation needed");
      Scr_Error(COM_ERR_3614, scrContext, v13);
      result = 1i64;
      break;
    case ENTITY_CLASS_SPAWNER:
      G_Spawner_SetFieldByValue(scrContext, entnum, offset, value);
      result = 1i64;
      break;
    case ENTITY_CLASS_BLACKBOARD:
      v14 = j_va("entity does not support directly being set, implementation needed");
      Scr_Error(COM_ERR_3615, scrContext, v14);
      result = 1i64;
      break;
    case ENTITY_CLASS_SCRIPTABLE:
      GScr_Scriptable_SetFieldByValue(entnum, offset, value);
      result = 1i64;
      break;
    case ENTITY_CLASS_SOUNDENTITY:
      v12 = j_va("SoundEntity node is read-only");
      Scr_Error(COM_ERR_3613, scrContext, v12);
      result = 1i64;
      break;
    default:
      v15 = (unsigned __int8)classnum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawn.cpp", 1796, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "bad class num %u", v15) )
        __debugbreak();
      result = 1i64;
      break;
  }
  return result;
}

