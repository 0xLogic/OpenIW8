/*
==============
G_SpawnMP_Shutdown
==============
*/

void G_SpawnMP_Shutdown(void)
{
  ?G_SpawnMP_Shutdown@@YAXXZ();
}

/*
==============
G_SpawnMP_Init
==============
*/

void G_SpawnMP_Init(void)
{
  ?G_SpawnMP_Init@@YAXXZ();
}

/*
==============
G_SpawnMP_Init
==============
*/
void G_SpawnMP_Init(void)
{
  SpawnGameModeSettings settings; 

  settings.bspOnlySpawnCount = 1;
  settings.bspOnlySpawns = s_bspOnlySpawnsMP;
  settings.entFieldCount = 17;
  settings.bspOrDynamicSpawnCount = 0;
  settings.bspOrDynamicSpawns = NULL;
  settings.entFields = s_entFieldsMP;
  G_Spawn_InitGameMode(&settings);
}

/*
==============
G_SpawnMP_Shutdown
==============
*/

void G_SpawnMP_Shutdown(void)
{
  G_Spawn_ShutdownGameMode();
}

