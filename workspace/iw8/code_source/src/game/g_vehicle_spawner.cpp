/*
==============
G_VehicleSpawner_Create
==============
*/

void __fastcall G_VehicleSpawner_Create(gentity_s *ent, const char *vehDefName)
{
  ?G_VehicleSpawner_Create@@YAXPEAUgentity_s@@PEBD@Z(ent, vehDefName);
}

/*
==============
G_VehicleSpawner_DoSpawn
==============
*/

gentity_s *__fastcall G_VehicleSpawner_DoSpawn(gentity_s *ent, const scr_string_t targetName, const gentity_s *player)
{
  return ?G_VehicleSpawner_DoSpawn@@YAPEAUgentity_s@@PEAU1@W4scr_string_t@@PEBU1@@Z(ent, targetName, player);
}

/*
==============
G_VehicleSpawner_Create
==============
*/
void G_VehicleSpawner_Create(gentity_s *ent, const char *vehDefName)
{
  unsigned int runtimeInstanceCount; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_spawner.cpp", 15, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !vehDefName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_spawner.cpp", 16, ASSERT_TYPE_ASSERT, "(vehDefName)", (const char *)&queryFormat, "vehDefName") )
    __debugbreak();
  ent->r.svFlags = 1;
  ent->clipmask = 0;
  ent->s.eType = ET_VEHICLE_SPAWNER;
  G_Utils_DestroyEntityPhysics(ent);
  ScriptableCommon_AssertCountsInitialized();
  runtimeInstanceCount = g_scriptableWorldCounts.runtimeInstanceCount;
  if ( ScriptableSv_GetScriptableIndexForEntity(ent) < runtimeInstanceCount )
    ScriptableSv_UnlinkReservedScriptableEntity(ent);
  ent->c.item[0].ammoCount = 0;
  ent->c.item[0].clipAmmoCount[0] = -1;
  if ( !G_Vehicle_GetServerDefIndex(vehDefName, &ent->c.spawner.index) )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E3CDF0, 1208i64, vehDefName);
}

/*
==============
G_VehicleSpawner_DoSpawn
==============
*/
gentity_s *G_VehicleSpawner_DoSpawn(gentity_s *ent, const scr_string_t targetName, const gentity_s *player)
{
  gentity_s *v7; 
  const VehicleDef *ServerDef; 
  int Index; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_spawner.cpp", 42, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( ent->c.item[0].clipAmmoCount[0] >= level.time )
    return 0i64;
  ent->c.item[0].clipAmmoCount[0] = level.time;
  v7 = G_Utils_SpawnEntity();
  ServerDef = G_Vehicle_GetServerDef(ent->c.spawner.index);
  G_Spawn_DuplicateEntityFields(v7, ent);
  G_Spawn_DuplicateScriptFields(v7, ent);
  v7->spawnflags &= ~2u;
  Scr_SetString(&v7->targetname, targetName);
  Index = G_XCompositeModel_GetIndex(ent);
  if ( Index > 0 )
    G_XCompositeModel_SetIndex(Index, ET_VEHICLE, v7);
  G_Vehicle_Create(v7, ServerDef->name, player, 0);
  GScr_AddEntity(v7);
  GScr_Notify(ent, scr_const.spawned, 1u);
  return v7;
}

