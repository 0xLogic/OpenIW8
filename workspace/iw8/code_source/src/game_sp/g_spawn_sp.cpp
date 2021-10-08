/*
==============
G_SpawnSP_Init
==============
*/

void G_SpawnSP_Init(void)
{
  ?G_SpawnSP_Init@@YAXXZ();
}

/*
==============
G_SpawnSP_Shutdown
==============
*/

void G_SpawnSP_Shutdown(void)
{
  ?G_SpawnSP_Shutdown@@YAXXZ();
}

/*
==============
Scr_ReadOnlyField
==============
*/
void Scr_ReadOnlyField(scrContext_t *scrContext, gentity_s *ent, int offset)
{
  Scr_Error(COM_ERR_3683, scrContext, "Tried to set a read only entity field");
}

/*
==============
Scr_SetSpawnCount
==============
*/
void Scr_SetSpawnCount(scrContext_t *scrContext, gentity_s *ent, int offset)
{
  if ( ((ent->s.eType - 16) & 0xFFFB) != 0 )
    Scr_Error(COM_ERR_2785, scrContext, "Cannot set count on a non-spawner entity");
  ent->c.spawner.count = Scr_GetInt(scrContext, 0);
}

/*
==============
Scr_GetSpawnCount
==============
*/
void Scr_GetSpawnCount(scrContext_t *scrContext, gentity_s *ent, int offset)
{
  if ( ((ent->s.eType - 16) & 0xFFFB) != 0 )
    Scr_AddInt(scrContext, 0);
  else
    Scr_AddInt(scrContext, ent->c.spawner.count);
}

/*
==============
G_SpawnSP_Init
==============
*/
void G_SpawnSP_Init(void)
{
  SpawnGameModeSettings settings; 

  settings.bspOnlySpawnCount = 1;
  settings.bspOnlySpawns = s_bspOnlySpawnsSP;
  settings.bspOrDynamicSpawnCount = 1;
  settings.bspOrDynamicSpawns = s_bspOrDynamicSpawnsSP;
  settings.entFields = s_entFieldsSP;
  settings.entFieldCount = 20;
  G_Spawn_InitGameMode(&settings);
}

/*
==============
G_SpawnSP_Shutdown
==============
*/

void G_SpawnSP_Shutdown(void)
{
  G_Spawn_ShutdownGameMode();
}

