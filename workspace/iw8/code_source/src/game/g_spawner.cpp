/*
==============
G_Spawner_Read
==============
*/

void __fastcall G_Spawner_Read(SaveGame *save)
{
  ?G_Spawner_Read@@YAXPEAUSaveGame@@@Z(save);
}

/*
==============
G_GetSpawner
==============
*/

spawner_t *__fastcall G_GetSpawner(scr_entref_t entref)
{
  return ?G_GetSpawner@@YAPEAUspawner_t@@Uscr_entref_t@@@Z(entref);
}

/*
==============
G_Spawner_DuplicateScriptFields
==============
*/

void __fastcall G_Spawner_DuplicateScriptFields(gentity_s *dest, const spawner_t *source)
{
  ?G_Spawner_DuplicateScriptFields@@YAXPEAUgentity_s@@PEBUspawner_t@@@Z(dest, source);
}

/*
==============
G_Spawner_GetSpawnerIndex
==============
*/

int __fastcall G_Spawner_GetSpawnerIndex(scr_string_t key, scr_string_t value)
{
  return ?G_Spawner_GetSpawnerIndex@@YAHW4scr_string_t@@0@Z(key, value);
}

/*
==============
G_Spawner_GetField
==============
*/

void __fastcall G_Spawner_GetField(int entnum, int offset)
{
  ?G_Spawner_GetField@@YAXHH@Z(entnum, offset);
}

/*
==============
G_Spawner_Init
==============
*/

void __fastcall G_Spawner_Init(bool useLoadedScripts)
{
  ?G_Spawner_Init@@YAX_N@Z(useLoadedScripts);
}

/*
==============
G_Spawner_GetSpawnerTargetname
==============
*/

scr_string_t __fastcall G_Spawner_GetSpawnerTargetname(unsigned int index)
{
  return ?G_Spawner_GetSpawnerTargetname@@YA?AW4scr_string_t@@I@Z(index);
}

/*
==============
G_GetSpawnerTeam
==============
*/

team_t __fastcall G_GetSpawnerTeam(const unsigned int index)
{
  return ?G_GetSpawnerTeam@@YA?AW4team_t@@I@Z(index);
}

/*
==============
G_Spawner_SetField
==============
*/

void __fastcall G_Spawner_SetField(int entnum, int offset)
{
  ?G_Spawner_SetField@@YAXHH@Z(entnum, offset);
}

/*
==============
G_Spawner_Free
==============
*/

void G_Spawner_Free(void)
{
  ?G_Spawner_Free@@YAXXZ();
}

/*
==============
G_Spawner_SetFieldByValue
==============
*/

void __fastcall G_Spawner_SetFieldByValue(scrContext_t *scrContext, int entnum, int offset, VariableValue *value)
{
  ?G_Spawner_SetFieldByValue@@YAXAEAUscrContext_t@@HHPEAUVariableValue@@@Z(scrContext, entnum, offset, value);
}

/*
==============
G_Spawner_Write
==============
*/

void __fastcall G_Spawner_Write(MemoryFile *memFile)
{
  ?G_Spawner_Write@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
G_GetSpawnerByIndex
==============
*/

spawner_t *__fastcall G_GetSpawnerByIndex(unsigned int index)
{
  return ?G_GetSpawnerByIndex@@YAPEAUspawner_t@@I@Z(index);
}

/*
==============
G_Spawner_Delete
==============
*/

void __fastcall G_Spawner_Delete(int index)
{
  ?G_Spawner_Delete@@YAXH@Z(index);
}

/*
==============
G_Spawner_GetFieldValue
==============
*/

scr_string_t __fastcall G_Spawner_GetFieldValue(unsigned int index, scr_string_t key)
{
  return ?G_Spawner_GetFieldValue@@YA?AW4scr_string_t@@IW41@@Z(index, key);
}

/*
==============
G_Spawner_AddSpawner
==============
*/

bool __fastcall G_Spawner_AddSpawner(unsigned int index)
{
  return ?G_Spawner_AddSpawner@@YA_NI@Z(index);
}

/*
==============
G_GetSpawner
==============
*/
spawner_t *G_GetSpawner(scr_entref_t entref)
{
  unsigned int entnum; 
  scrContext_t *v3; 
  unsigned int v4; 
  unsigned int spawnerCount; 
  EntityClass entclass; 

  entclass = entref.entclass;
  entnum = entref.entnum;
  if ( entref.entnum >= cm.mapEnts->spawners.spawnerCount )
  {
    spawnerCount = cm.mapEnts->spawners.spawnerCount;
    v4 = entref.entnum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawner.cpp", 413, ASSERT_TYPE_ASSERT, "(unsigned)( entref.entnum ) < (unsigned)( cm.mapEnts->spawners.spawnerCount )", "entref.entnum doesn't index cm.mapEnts->spawners.spawnerCount\n\t%i not in [0, %i)", v4, spawnerCount) )
      __debugbreak();
  }
  if ( entclass == ENTITY_CLASS_SPAWNER )
    return &s_spawnerData[entnum];
  v3 = ScriptContext_Server();
  Scr_ObjectError(COM_ERR_1778, v3, "not an spawner");
  return 0i64;
}

/*
==============
G_GetSpawnerByIndex
==============
*/
spawner_t *G_GetSpawnerByIndex(unsigned int index)
{
  __int64 v1; 

  v1 = index;
  if ( index >= cm.mapEnts->spawners.spawnerCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawner.cpp", 427, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( cm.mapEnts->spawners.spawnerCount )", "index doesn't index cm.mapEnts->spawners.spawnerCount\n\t%i not in [0, %i)", index, cm.mapEnts->spawners.spawnerCount) )
    __debugbreak();
  return &s_spawnerData[v1];
}

/*
==============
G_GetSpawnerTeam
==============
*/
__int64 G_GetSpawnerTeam(const unsigned int index)
{
  __int64 v1; 

  v1 = index;
  if ( index >= cm.mapEnts->spawners.spawnerCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawner.cpp", 434, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( cm.mapEnts->spawners.spawnerCount )", "index doesn't index cm.mapEnts->spawners.spawnerCount\n\t%i not in [0, %i)", index, cm.mapEnts->spawners.spawnerCount) )
    __debugbreak();
  return (unsigned int)s_spawnerData[v1].team;
}

/*
==============
G_Spawner_AddSpawner
==============
*/
bool G_Spawner_AddSpawner(unsigned int index)
{
  __int64 v1; 
  __int64 v2; 
  bool result; 
  scrContext_t *v4; 
  unsigned int EntityId; 
  unsigned int v6; 
  Spawner *v7; 
  __int64 v8; 
  const char *v9; 
  unsigned int CanonicalString; 
  VariableType v11; 
  const char *v12; 

  v1 = index;
  if ( index >= cm.mapEnts->spawners.spawnerCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawner.cpp", 378, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( cm.mapEnts->spawners.spawnerCount )", "index doesn't index cm.mapEnts->spawners.spawnerCount\n\t%i not in [0, %i)", index, cm.mapEnts->spawners.spawnerCount) )
    __debugbreak();
  v2 = v1;
  if ( s_spawnerData[v1].count == -1 )
    return 0;
  v4 = ScriptContext_Server();
  EntityId = Scr_FindEntityId(v4, v1, ENTITY_CLASS_SPAWNER, LOCAL_CLIENT_0);
  Scr_AddEntityNum(v4, v1, ENTITY_CLASS_SPAWNER);
  if ( !EntityId )
  {
    v6 = 0;
    v7 = &cm.mapEnts->spawners.spanwerList[v2];
    if ( v7->numFields )
    {
      do
      {
        v8 = (__int64)&v7->fields[v6];
        v9 = SL_ConvertToString((scr_string_t)*(_DWORD *)v8);
        CanonicalString = SL_GetCanonicalString(v9);
        v11 = *(_BYTE *)(v8 + 12);
        v12 = SL_ConvertToString((scr_string_t)*(_DWORD *)(v8 + 8));
        G_Spawner_SetSpawnerScriptVariable(CanonicalString, v12, v11, v1);
        ++v6;
        v7 = &cm.mapEnts->spawners.spanwerList[v2];
      }
      while ( v6 < v7->numFields );
    }
  }
  result = 1;
  s_spawnerData[v2].added = 1;
  return result;
}

/*
==============
G_Spawner_Delete
==============
*/
void G_Spawner_Delete(int index)
{
  __int64 v2; 
  scrContext_t *v3; 
  Spawner *spawner; 

  v2 = index;
  if ( s_spawnerData[v2].added )
  {
    v3 = ScriptContext_Server();
    Scr_NotifyNum(v3, index, ENTITY_CLASS_SPAWNER, scr_const.death, 0, LOCAL_CLIENT_0);
    Scr_NotifyNum(v3, index, ENTITY_CLASS_SPAWNER, scr_const.death_or_disconnect, 0, LOCAL_CLIENT_0);
    Scr_ClearEntityNum(v3, index, ENTITY_CLASS_SPAWNER);
    Scr_FreeEntityNum(v3, index, ENTITY_CLASS_SPAWNER);
    spawner = s_spawnerData[v2].spawner;
    *(_QWORD *)&s_spawnerData[v2].timestamp = 0i64;
    s_spawnerData[v2].count = -1;
    if ( spawner )
    {
      s_spawnerData[v2].origin.v[0] = spawner->origin.v[0];
      s_spawnerData[v2].origin.v[1] = spawner->origin.v[1];
      s_spawnerData[v2].origin.v[2] = spawner->origin.v[2];
      s_spawnerData[v2].angles.v[0] = spawner->angles.v[0];
      s_spawnerData[v2].angles.v[1] = spawner->angles.v[1];
      s_spawnerData[v2].angles.v[2] = spawner->angles.v[2];
    }
  }
}

/*
==============
G_Spawner_DuplicateScriptFields
==============
*/
void G_Spawner_DuplicateScriptFields(gentity_s *dest, const spawner_t *source)
{
  signed __int64 v4; 
  scrContext_t *v5; 
  __int64 v6; 
  int v7; 

  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v4 = dest - g_entities;
  if ( (unsigned int)v4 >= 0x800 )
  {
    v7 = 2048;
    LODWORD(v6) = dest - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( dest->s.number != (_WORD)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawner.cpp", 269, ASSERT_TYPE_ASSERT, "(dest->s.number == G_GetEntityIndex( dest ))", (const char *)&queryFormat, "dest->s.number == G_GetEntityIndex( dest )") )
    __debugbreak();
  v5 = ScriptContext_Server();
  Scr_CloneSpawnerIntoEnt(v5, source->number, dest->s.number);
}

/*
==============
G_Spawner_Free
==============
*/
void G_Spawner_Free(void)
{
  unsigned int i; 
  __int64 v1; 
  scrContext_t *v2; 
  Spawner *spawner; 

  for ( i = 0; i < cm.mapEnts->spawners.spawnerCount; ++i )
  {
    v1 = (int)i;
    if ( s_spawnerData[v1].added )
    {
      v2 = ScriptContext_Server();
      Scr_NotifyNum(v2, i, ENTITY_CLASS_SPAWNER, scr_const.death, 0, LOCAL_CLIENT_0);
      Scr_NotifyNum(v2, i, ENTITY_CLASS_SPAWNER, scr_const.death_or_disconnect, 0, LOCAL_CLIENT_0);
      Scr_ClearEntityNum(v2, i, ENTITY_CLASS_SPAWNER);
      Scr_FreeEntityNum(v2, i, ENTITY_CLASS_SPAWNER);
      spawner = s_spawnerData[v1].spawner;
      *(_QWORD *)&s_spawnerData[v1].timestamp = 0i64;
      s_spawnerData[v1].count = -1;
      if ( spawner )
      {
        s_spawnerData[v1].origin.v[0] = spawner->origin.v[0];
        s_spawnerData[v1].origin.v[1] = spawner->origin.v[1];
        s_spawnerData[v1].origin.v[2] = spawner->origin.v[2];
        s_spawnerData[v1].angles.v[0] = spawner->angles.v[0];
        s_spawnerData[v1].angles.v[1] = spawner->angles.v[1];
        s_spawnerData[v1].angles.v[2] = spawner->angles.v[2];
      }
    }
  }
}

/*
==============
G_Spawner_GetField
==============
*/
void G_Spawner_GetField(int entnum, int offset)
{
  __int64 v2; 
  __int64 v3; 
  scrContext_t *v4; 

  v2 = entnum;
  v3 = offset;
  if ( entnum >= cm.mapEnts->spawners.spawnerCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawner.cpp", 238, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( cm.mapEnts->spawners.spawnerCount )", "entnum doesn't index cm.mapEnts->spawners.spawnerCount\n\t%i not in [0, %i)", entnum, cm.mapEnts->spawners.spawnerCount) )
    __debugbreak();
  if ( (unsigned int)v3 < 4 )
  {
    v4 = ScriptContext_Server();
    Scr_GetGenericField(v4, (unsigned __int8 *)&s_spawnerData[v2], s_spawnerFields[v3].type, s_spawnerFields[v3].ofs);
  }
}

/*
==============
G_Spawner_GetFieldValue
==============
*/
__int64 G_Spawner_GetFieldValue(unsigned int index, scr_string_t key)
{
  __int64 v3; 
  int v4; 
  Spawner *v5; 
  unsigned int numFields; 
  SpawnerField *fields; 
  SpawnerField *i; 

  v3 = index;
  if ( index >= cm.mapEnts->spawners.spawnerCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawner.cpp", 223, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( cm.mapEnts->spawners.spawnerCount )", "index doesn't index cm.mapEnts->spawners.spawnerCount\n\t%i not in [0, %i)", index, cm.mapEnts->spawners.spawnerCount) )
    __debugbreak();
  v4 = 0;
  v5 = &cm.mapEnts->spawners.spanwerList[v3];
  numFields = v5->numFields;
  if ( !numFields )
    return 0i64;
  fields = v5->fields;
  for ( i = fields; i->key != key; ++i )
  {
    if ( ++v4 >= numFields )
      return 0i64;
  }
  return (unsigned int)fields[v4].value;
}

/*
==============
G_Spawner_GetSpawnerIndex
==============
*/
__int64 G_Spawner_GetSpawnerIndex(scr_string_t key, scr_string_t value)
{
  unsigned int v2; 
  unsigned int spawnerCount; 
  SpawnerField **i; 
  unsigned int v7; 
  unsigned int v8; 
  SpawnerField *v9; 

  v2 = 0;
  spawnerCount = cm.mapEnts->spawners.spawnerCount;
  if ( !spawnerCount )
    return 0xFFFFFFFFi64;
  for ( i = &cm.mapEnts->spawners.spanwerList->fields; ; i += 7 )
  {
    v7 = *((_DWORD *)i + 4);
    v8 = 0;
    if ( v7 )
      break;
LABEL_8:
    if ( ++v2 >= spawnerCount )
      return 0xFFFFFFFFi64;
  }
  v9 = *i;
  while ( v9->key != key || v9->value != value )
  {
    ++v8;
    ++v9;
    if ( v8 >= v7 )
      goto LABEL_8;
  }
  return v2;
}

/*
==============
G_Spawner_GetSpawnerTargetname
==============
*/
__int64 G_Spawner_GetSpawnerTargetname(unsigned int index)
{
  __int64 v1; 

  v1 = index;
  if ( index >= cm.mapEnts->spawners.spawnerCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawner.cpp", 292, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( cm.mapEnts->spawners.spawnerCount )", "index doesn't index cm.mapEnts->spawners.spawnerCount\n\t%i not in [0, %i)", index, cm.mapEnts->spawners.spawnerCount) )
    __debugbreak();
  return (unsigned int)cm.mapEnts->spawners.spanwerList[v1].targetname;
}

/*
==============
G_Spawner_Init
==============
*/
void G_Spawner_Init(bool useLoadedScripts)
{
  bool v1; 
  scrContext_t *v2; 
  unsigned int v3; 
  unsigned int v4; 
  scr_string_t FieldValue; 
  const char *v6; 
  __int64 v7; 
  Spawner *spanwerList; 
  Spawner *v9; 
  float v10; 
  Spawner *spawner; 
  scr_string_t v12; 
  team_t v13; 
  const scr_string_t **v14; 
  const scr_string_t **v15; 
  const spawner_field_t *v16; 
  ScriptCodePos v18; 
  scrContext_t *v19; 

  v1 = useLoadedScripts;
  if ( cm.mapEnts->spawners.spawnerCount > 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawner.cpp", 98, ASSERT_TYPE_ASSERT, "(cm.mapEnts->spawners.spawnerCount <= ( 512 ))", (const char *)&queryFormat, "cm.mapEnts->spawners.spawnerCount <= MAX_SPAWNERS") )
    __debugbreak();
  v19 = ScriptContext_Server();
  v2 = v19;
  v18.m_scriptPos = ScriptContext_GetVarUsageScriptCodePos(v19).m_scriptPos;
  if ( ScriptCodePos::GetVarUsagePos(&v18) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawner.cpp", 106, ASSERT_TYPE_ASSERT, "( varUsageCodePos.GetVarUsagePos() == nullptr )", (const char *)&queryFormat, "varUsageCodePos.GetVarUsagePos() == nullptr") )
    __debugbreak();
  ScriptContext_SetVarUsagePos(v2, "<script allocate spawners>");
  v3 = 0;
  v4 = 0;
  if ( cm.mapEnts->spawners.spawnerCount )
  {
    while ( 1 )
    {
      FieldValue = G_Spawner_GetFieldValue(v4, scr_const.count);
      if ( FieldValue )
      {
        v6 = SL_ConvertToString(FieldValue);
        atoi(v6);
      }
      v7 = v4;
      spanwerList = cm.mapEnts->spawners.spanwerList;
      s_spawnerData[v7].number = v4;
      v9 = &spanwerList[v7];
      s_spawnerData[v7].spawner = v9;
      s_spawnerData[v7].count = v9->count;
      s_spawnerData[v7].timestamp = 0;
      s_spawnerData[v7].origin.v[0] = v9->origin.v[0];
      s_spawnerData[v7].origin.v[1] = v9->origin.v[1];
      v10 = v9->origin.v[2];
      LODWORD(v9) = scr_const.team;
      s_spawnerData[v7].origin.v[2] = v10;
      spawner = s_spawnerData[v7].spawner;
      s_spawnerData[v7].angles.v[0] = spawner->angles.v[0];
      s_spawnerData[v7].angles.v[1] = spawner->angles.v[1];
      s_spawnerData[v7].angles.v[2] = spawner->angles.v[2];
      v12 = G_Spawner_GetFieldValue(v4, (scr_string_t)v9);
      if ( v12 )
      {
        if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) )
        {
          v13 = TEAM_ONE;
          v14 = &S_TEAMS_SP_SCR_STRINGS_8[1];
          while ( v12 != **v14 )
          {
            ++v13;
            ++v14;
            if ( (unsigned int)v13 >= TEAM_FIVE )
              goto LABEL_27;
          }
        }
        else
        {
          if ( v12 == scr_const.freelook )
          {
            if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_WEAPON_DROP|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 112, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER ))", "%s\n\tFreeLook is MP only", "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::TEAMS_SINGLEPLAYER )") )
              __debugbreak();
            s_spawnerData[v7].team = TEAM_MP_NUM_TEAMS;
            goto LABEL_32;
          }
          v13 = TEAM_ZERO;
          v15 = S_TEAMS_MP_SCR_STRINGS_8;
          while ( v12 != **v15 )
          {
            ++v13;
            ++v15;
            if ( (unsigned int)v13 >= TEAM_MP_NUM_TEAMS )
            {
              if ( v12 == scr_const.none || v12 == scr_const.neutral )
                goto LABEL_11;
LABEL_27:
              if ( v12 == scr_const.only_sky )
              {
                s_spawnerData[v7].team = TEAM_ZERO;
              }
              else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawner.cpp", 138, ASSERT_TYPE_ASSERT, "(Com_Teams_TeamFromString( teamName, s_spawnerData[index].team ))", (const char *)&queryFormat, "Com_Teams_TeamFromString( teamName, s_spawnerData[index].team )") )
              {
                __debugbreak();
              }
              goto LABEL_32;
            }
          }
        }
        s_spawnerData[v7].team = v13;
      }
      else
      {
LABEL_11:
        s_spawnerData[v7].team = TEAM_ZERO;
      }
LABEL_32:
      if ( ++v4 >= cm.mapEnts->spawners.spawnerCount )
      {
        v2 = v19;
        v1 = useLoadedScripts;
        break;
      }
    }
  }
  if ( !v1 )
  {
    v16 = s_spawnerFields;
    do
    {
      Scr_AddClassField(v2, ENTITY_CLASS_SPAWNER, *v16->name, v16->canonicalString, v3++);
      ++v16;
    }
    while ( v3 < 4 );
  }
  ScriptContext_SetVarUsagePos(v2, NULL);
}

/*
==============
G_Spawner_Read
==============
*/
void G_Spawner_Read(SaveGame *save)
{
  unsigned int v1; 
  MemoryFile *p_memFile; 
  __int64 v3; 
  double Float; 
  double v5; 
  double v6; 
  double v7; 
  double v8; 
  double v9; 
  team_t v10[4]; 
  int p; 
  int v12; 
  int v13; 

  v1 = 0;
  if ( cm.mapEnts->spawners.spawnerCount )
  {
    p_memFile = &save->memFile;
    do
    {
      MemFile_ReadData(p_memFile, 4ui64, &p);
      v3 = v1;
      s_spawnerData[v3].count = p;
      MemFile_ReadData(p_memFile, 4ui64, &v12);
      s_spawnerData[v3].timestamp = v12;
      MemFile_ReadData(p_memFile, 4ui64, &v13);
      s_spawnerData[v3].added = v13;
      Float = MemFile_ReadFloat(p_memFile);
      s_spawnerData[v3].origin.v[0] = *(float *)&Float;
      v5 = MemFile_ReadFloat(p_memFile);
      s_spawnerData[v3].origin.v[1] = *(float *)&v5;
      v6 = MemFile_ReadFloat(p_memFile);
      s_spawnerData[v3].origin.v[2] = *(float *)&v6;
      v7 = MemFile_ReadFloat(p_memFile);
      s_spawnerData[v3].angles.v[0] = *(float *)&v7;
      v8 = MemFile_ReadFloat(p_memFile);
      s_spawnerData[v3].angles.v[1] = *(float *)&v8;
      v9 = MemFile_ReadFloat(p_memFile);
      s_spawnerData[v3].angles.v[2] = *(float *)&v9;
      MemFile_ReadData(p_memFile, 4ui64, v10);
      ++v1;
      s_spawnerData[v3].team = v10[0];
    }
    while ( v1 < cm.mapEnts->spawners.spawnerCount );
  }
}

/*
==============
G_Spawner_SetField
==============
*/
void G_Spawner_SetField(int entnum, int offset)
{
  __int64 v2; 
  __int64 v3; 
  scrContext_t *v4; 

  v2 = entnum;
  v3 = offset;
  if ( entnum >= cm.mapEnts->spawners.spawnerCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawner.cpp", 257, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( cm.mapEnts->spawners.spawnerCount )", "entnum doesn't index cm.mapEnts->spawners.spawnerCount\n\t%i not in [0, %i)", entnum, cm.mapEnts->spawners.spawnerCount) )
    __debugbreak();
  v4 = ScriptContext_Server();
  Scr_SetGenericField(v4, (unsigned __int8 *)&s_spawnerData[v2], s_spawnerFields[v3].type, s_spawnerFields[v3].ofs);
}

/*
==============
G_Spawner_SetFieldByValue
==============
*/
void G_Spawner_SetFieldByValue(scrContext_t *scrContext, int entnum, int offset, VariableValue *value)
{
  __int64 v5; 
  __int64 v7; 

  v5 = entnum;
  v7 = offset;
  if ( entnum >= cm.mapEnts->spawners.spawnerCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawner.cpp", 299, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( cm.mapEnts->spawners.spawnerCount )", "entnum doesn't index cm.mapEnts->spawners.spawnerCount\n\t%i not in [0, %i)", entnum, cm.mapEnts->spawners.spawnerCount) )
    __debugbreak();
  Scr_SetGenericFieldByValue(scrContext, (unsigned __int8 *)&s_spawnerData[v5], s_spawnerFields[v7].type, s_spawnerFields[v7].ofs, value);
}

/*
==============
G_Spawner_SetSpawnerScriptVariable
==============
*/
void G_Spawner_SetSpawnerScriptVariable(const unsigned int key, const char *value, const VariableType type, const unsigned int number)
{
  scrContext_t *v9; 
  int String; 
  scrContext_t *v11; 
  unsigned int EntityId; 
  unsigned int Variable; 
  VariableValue valuea; 
  float v; 
  float v16; 
  float v17; 

  if ( type )
  {
    valuea.type = type;
    switch ( type )
    {
      case VAR_STRING:
        String = SL_GetString(value, 0);
        if ( (unsigned __int8)(valuea.type - 2) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.h", 66, ASSERT_TYPE_ASSERT, "( variable->type == VAR_STRING || variable->type == VAR_ISTRING )", (const char *)&queryFormat, "variable->type == VAR_STRING || variable->type == VAR_ISTRING") )
          __debugbreak();
        if ( !String && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_variable.h", 67, ASSERT_TYPE_ASSERT, "( stringValue != 0 )", (const char *)&queryFormat, "stringValue != 0") )
          __debugbreak();
        valuea.u.intValue = String;
        break;
      case VAR_VECTOR:
        v = 0.0;
        v16 = 0.0;
        v17 = 0.0;
        if ( j_sscanf(value, "%f %f %f", &v, &v16, &v17) != 3 )
          Com_Error_impl(ERR_SCRIPT_DROP, (const ObfuscateErrorText)&stru_143E59200, 72i64, value);
        v9 = ScriptContext_Server();
        valuea.u.scriptCodePosValue = (unsigned __int64)Scr_AllocVector(v9, &v);
        break;
      case VAR_FLOAT:
        *(double *)&_XMM0 = atof(value);
        __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
        valuea.u.floatValue = *(float *)&_XMM1;
        break;
      case VAR_INTEGER:
        valuea.u.intValue = atoi(value);
        break;
      default:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawner.cpp", 340, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "G_Spawner_SetScriptVariable: unsupported case %d", (unsigned __int8)type) )
          __debugbreak();
        break;
    }
    v11 = ScriptContext_Server();
    EntityId = Scr_GetEntityId(v11, number, ENTITY_CLASS_SPAWNER, LOCAL_CLIENT_0);
    if ( GetObjectType(v11, EntityId) != VAR_ENTITY && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_spawner.cpp", 359, ASSERT_TYPE_ASSERT, "( GetObjectType( scrContext, entId ) == VAR_ENTITY )", (const char *)&queryFormat, "GetObjectType( scrContext, entId ) == VAR_ENTITY") )
      __debugbreak();
    Variable = FindVariable(v11, EntityId, key);
    if ( Variable )
      SetVariableValue(v11, Variable, &valuea);
    else
      SetVariableEntityFieldValueByValue(v11, EntityId, key, &valuea);
    if ( valuea.type == VAR_VECTOR )
      RemoveRefToVector(v11, valuea.u.vectorValue);
  }
}

/*
==============
G_Spawner_Write
==============
*/
void G_Spawner_Write(MemoryFile *memFile)
{
  unsigned int i; 
  __int64 v3; 
  int p; 

  for ( i = 0; i < cm.mapEnts->spawners.spawnerCount; ++i )
  {
    v3 = i;
    p = s_spawnerData[v3].count;
    MemFile_WriteData(memFile, 4ui64, &p);
    p = s_spawnerData[v3].timestamp;
    MemFile_WriteData(memFile, 4ui64, &p);
    p = s_spawnerData[v3].added;
    MemFile_WriteData(memFile, 4ui64, &p);
    MemFile_WriteData(memFile, 0xCui64, &s_spawnerData[v3].origin);
    MemFile_WriteData(memFile, 0xCui64, &s_spawnerData[v3].angles);
    p = s_spawnerData[v3].team;
    MemFile_WriteData(memFile, 4ui64, &p);
  }
}

