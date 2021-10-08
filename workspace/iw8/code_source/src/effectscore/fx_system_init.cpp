/*
==============
FX_GetGlassVisInfo
==============
*/

FxGlassVisInfo *__fastcall FX_GetGlassVisInfo()
{
  return ?FX_GetGlassVisInfo@@YAPEAUFxGlassVisInfo@@XZ();
}

/*
==============
FX_GetSystemConst
==============
*/

const FxSystem *__fastcall FX_GetSystemConst(int clientIndex)
{
  return ?FX_GetSystemConst@@YAPEBUFxSystem@@H@Z(clientIndex);
}

/*
==============
FX_InitSystem
==============
*/

void __fastcall FX_InitSystem(LocalClientNum_t localClientNum, bool isHighPlayerCount)
{
  ?FX_InitSystem@@YAXW4LocalClientNum_t@@_N@Z(localClientNum, isHighPlayerCount);
}

/*
==============
FX_LinkSystemBuffers
==============
*/

void __fastcall FX_LinkSystemBuffers(FxSystem *system, FxSystemBuffers *systemBuffers, FxSystemCommand *systemCommand)
{
  ?FX_LinkSystemBuffers@@YAXPEAUFxSystem@@PEAUFxSystemBuffers@@PEAUFxSystemCommand@@@Z(system, systemBuffers, systemCommand);
}

/*
==============
FX_GetSystemCommand
==============
*/

FxSystemCommand *__fastcall FX_GetSystemCommand(int clientIndex)
{
  return ?FX_GetSystemCommand@@YAPEAUFxSystemCommand@@H@Z(clientIndex);
}

/*
==============
FX_ShutdownSystem
==============
*/

void __fastcall FX_ShutdownSystem(LocalClientNum_t localClientNum)
{
  ?FX_ShutdownSystem@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
FX_FreeClientMemory
==============
*/

void FX_FreeClientMemory(void)
{
  ?FX_FreeClientMemory@@YAXXZ();
}

/*
==============
FX_GetSystemBuffers
==============
*/

FxSystemBuffers *__fastcall FX_GetSystemBuffers(int clientIndex)
{
  return ?FX_GetSystemBuffers@@YAPEAUFxSystemBuffers@@H@Z(clientIndex);
}

/*
==============
FX_AllocateClientMemory
==============
*/

void __fastcall FX_AllocateClientMemory(HunkUser *hunkUser, int maxLocalClients)
{
  ?FX_AllocateClientMemory@@YAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
FX_ErrorCleanup
==============
*/

void FX_ErrorCleanup(void)
{
  ?FX_ErrorCleanup@@YAXXZ();
}

/*
==============
FX_GetSystem
==============
*/

FxSystem *__fastcall FX_GetSystem(int clientIndex)
{
  return ?FX_GetSystem@@YAPEAUFxSystem@@H@Z(clientIndex);
}

/*
==============
FX_IsSystemInit
==============
*/

int __fastcall FX_IsSystemInit(LocalClientNum_t clientIndex)
{
  return ?FX_IsSystemInit@@YAHW4LocalClientNum_t@@@Z(clientIndex);
}

/*
==============
FX_AllocateClientMemory
==============
*/
void FX_AllocateClientMemory(HunkUser *hunkUser, int maxLocalClients)
{
  __int64 v2; 
  unsigned __int64 FreeReserveAmount; 
  int v6; 

  v2 = maxLocalClients;
  if ( maxLocalClients > 2 )
  {
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_init.cpp", 223, ASSERT_TYPE_ASSERT, "( maxLocalClients ) <= ( (2) )", "%s <= %s\n\t%i, %i", "maxLocalClients", "FX_SYSTEM_MAX_COUNT", maxLocalClients, v6) )
      __debugbreak();
  }
  fx_maxLocalClients = v2;
  fx_systemPool = (FxSystem *)Mem_HunkUser_AllocInternal(hunkUser, 576 * v2, 0x80ui64, "FX_AllocateClientMemory");
  fx_systemBufferPool = (FxSystemBuffers *)Mem_HunkUser_AllocInternal(hunkUser, 8320 * v2, 0x80ui64, "FX_AllocateClientMemory");
  fx_systemCommandPool = (FxSystemCommand *)Mem_HunkUser_AllocInternal(hunkUser, 640 * v2, 0x80ui64, "FX_AllocateClientMemory");
  memset_0(fx_systemPool, 0, 576 * v2);
  memset_0(fx_systemBufferPool, 0, 8320 * v2);
  memset_0(fx_systemCommandPool, 0, 640 * v2);
  ParticleManager::AllocateMemory(hunkUser, v2);
  FreeReserveAmount = Mem_HunkUser_GetFreeReserveAmount(hunkUser);
  Com_Printf(10, "GameAllocate: Free client hunk memory (Post-FX): %zu kb\n", FreeReserveAmount >> 10);
}

/*
==============
FX_ClearAllMarks
==============
*/
void FX_ClearAllMarks()
{
  LocalClientNum_t i; 

  for ( i = LOCAL_CLIENT_0; (unsigned int)i < LOCAL_CLIENT_COUNT; ++i )
    FX_ClearMarks(i);
  R_DecalVolumesMarks_DebugClear();
}

/*
==============
FX_ErrorCleanup
==============
*/
void FX_ErrorCleanup(void)
{
  int v0; 
  unsigned int v1; 
  bool v2; 
  __int64 v3; 
  FxSystem *v4; 
  __int64 v5; 
  __int64 v6; 

  if ( fx_systemPool )
  {
    v0 = fx_maxLocalClients;
    v1 = 0;
    if ( fx_maxLocalClients > 0 )
    {
      v2 = fx_maxLocalClients != 0;
      v3 = 0i64;
      do
      {
        if ( !v2 )
        {
          LODWORD(v6) = v0;
          LODWORD(v5) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_init.cpp", 291, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( (fx_maxLocalClients) )", "clientIndex doesn't index FX_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v6) )
            __debugbreak();
        }
        v4 = &fx_systemPool[v3];
        if ( !&fx_systemPool[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_init.cpp", 213, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
          __debugbreak();
        v4->systemFlags &= ~0x20u;
        ++v1;
        v0 = fx_maxLocalClients;
        ++v3;
        v2 = v1 < fx_maxLocalClients;
      }
      while ( (int)v1 < fx_maxLocalClients );
    }
  }
}

/*
==============
FX_FreeClientMemory
==============
*/
void FX_FreeClientMemory(void)
{
  fx_maxLocalClients = 0;
  fx_systemPool = NULL;
  fx_systemBufferPool = NULL;
  fx_systemCommandPool = NULL;
  ParticleManager::FreeMemory();
}

/*
==============
FX_GetGlassVisInfo
==============
*/
FxGlassVisInfo *FX_GetGlassVisInfo()
{
  return &fx_glassVisInfo;
}

/*
==============
FX_GetSystem
==============
*/
FxSystem *FX_GetSystem(int clientIndex)
{
  __int64 v1; 
  int v4; 

  v1 = clientIndex;
  if ( clientIndex >= (unsigned int)fx_maxLocalClients )
  {
    v4 = fx_maxLocalClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_init.cpp", 291, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( (fx_maxLocalClients) )", "clientIndex doesn't index FX_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", clientIndex, v4) )
      __debugbreak();
  }
  return &fx_systemPool[v1];
}

/*
==============
FX_GetSystemBuffers
==============
*/
FxSystemBuffers *FX_GetSystemBuffers(int clientIndex)
{
  __int64 v1; 
  int v4; 

  v1 = clientIndex;
  if ( clientIndex >= (unsigned int)fx_maxLocalClients )
  {
    v4 = fx_maxLocalClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_init.cpp", 298, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( (fx_maxLocalClients) )", "clientIndex doesn't index FX_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", clientIndex, v4) )
      __debugbreak();
  }
  return &fx_systemBufferPool[v1];
}

/*
==============
FX_GetSystemCommand
==============
*/
FxSystemCommand *FX_GetSystemCommand(int clientIndex)
{
  __int64 v1; 
  int v4; 

  v1 = clientIndex;
  if ( clientIndex >= (unsigned int)fx_maxLocalClients )
  {
    v4 = fx_maxLocalClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_init.cpp", 305, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( (fx_maxLocalClients) )", "clientIndex doesn't index FX_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", clientIndex, v4) )
      __debugbreak();
  }
  return &fx_systemCommandPool[v1];
}

/*
==============
FX_GetSystemConst
==============
*/
FxSystem *FX_GetSystemConst(int clientIndex)
{
  __int64 v1; 
  int v4; 

  v1 = clientIndex;
  if ( clientIndex >= (unsigned int)fx_maxLocalClients )
  {
    v4 = fx_maxLocalClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_init.cpp", 284, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( (fx_maxLocalClients) )", "clientIndex doesn't index FX_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", clientIndex, v4) )
      __debugbreak();
  }
  return &fx_systemPool[v1];
}

/*
==============
FX_InitSystem
==============
*/
void FX_InitSystem(LocalClientNum_t localClientNum, bool isHighPlayerCount)
{
  __int64 v2; 
  FxSystem *v4; 
  FxSystemBuffers *v5; 
  FxSystemCommand *v6; 
  FxVisState *visState; 
  __int64 v8; 
  __int64 v9; 

  v2 = localClientNum;
  if ( localClientNum >= (unsigned int)fx_maxLocalClients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_init.cpp", 291, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( (fx_maxLocalClients) )", "clientIndex doesn't index FX_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, fx_maxLocalClients) )
    __debugbreak();
  v4 = &fx_systemPool[v2];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_init.cpp", 111, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
    __debugbreak();
  memset_0(v4, 0, sizeof(FxSystem));
  if ( (unsigned int)v2 >= fx_maxLocalClients )
  {
    LODWORD(v9) = fx_maxLocalClients;
    LODWORD(v8) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_init.cpp", 298, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( (fx_maxLocalClients) )", "clientIndex doesn't index FX_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  v5 = &fx_systemBufferPool[v2];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_init.cpp", 114, ASSERT_TYPE_ASSERT, "(systemBuffers)", (const char *)&queryFormat, "systemBuffers") )
    __debugbreak();
  memset_0(v5, 0, sizeof(FxSystemBuffers));
  if ( (unsigned int)v2 >= fx_maxLocalClients )
  {
    LODWORD(v9) = fx_maxLocalClients;
    LODWORD(v8) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_init.cpp", 305, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( (fx_maxLocalClients) )", "clientIndex doesn't index FX_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  v6 = &fx_systemCommandPool[v2];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_init.cpp", 117, ASSERT_TYPE_ASSERT, "(systemCommand)", (const char *)&queryFormat, "systemCommand") )
    __debugbreak();
  memset_0(v6, 0, sizeof(FxSystemCommand));
  v4->visState = (FxVisState *)v5;
  v4->spawnCmdWrite = &v6->spawnCmdWrite;
  v4->lock = &v6->accessLock;
  v4->spawnCmdRead = &v6->spawnCmdRead;
  v4->command = v6;
  FX_InitRandom();
  v4->visState->blockerCount = 0;
  visState = v4->visState;
  v4->visStateBufferRead = v4->visState;
  v4->visStateBufferWrite = visState + 1;
  *v4->spawnCmdRead = -1;
  *v4->spawnCmdWrite = 0;
  v4->lock->m = 0;
  v4->command->numStopBoltedEffectsRequest = 0;
  v4->command->numThroughWithEffectIndex = 0;
  v4->command->numKillEffectDefIndex = 0;
  v4->command->requestIndex = 0;
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v9) = 2;
    LODWORD(v8) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  ParticleManager::Release(&g_particleManager[v2]);
  v4->msecNow = 0;
  v4->msecDraw = -1;
  if ( v4->cameraPrevArray[0].frustumPlaneCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_init.cpp", 128, ASSERT_TYPE_ASSERT, "(!system->cameraPrevArray[cameraIndex].frustumPlaneCount)", (const char *)&queryFormat, "!system->cameraPrevArray[cameraIndex].frustumPlaneCount") )
    __debugbreak();
  v4->cameraPrevArray[0].isValid = 0;
  v4->frameCount = 1;
  FX_InitMarksSystem((LocalClientNum_t)v2);
  v4->localClientNum = v2;
  v4->systemFlags = 16;
  v4->singleClientOnly = !Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_OFF|0x80);
  fx_serverVisClient = (int)v2;
  memset_0(&fx_glassVisInfo, 0, sizeof(fx_glassVisInfo));
  v4->threadingCheckExclusiveWrite = 0;
  v4->threadingCheckMultipleReaders = 0;
  v4->threadingCheckUpdate4Pass = 0;
  FX_ResetParticleDeferredState((LocalClientNum_t)v2);
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v9) = 2;
    LODWORD(v8) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  ParticleManager::Init(&g_particleManager[v2], (LocalClientNum_t)v2, isHighPlayerCount);
  Cmd_AddCommandInternal("fx_marks_clear", FX_ClearAllMarks, &FX_ClearAllMarks_VAR);
}

/*
==============
FX_IsSystemInit
==============
*/
__int64 FX_IsSystemInit(LocalClientNum_t clientIndex)
{
  if ( clientIndex >= LOCAL_CLIENT_0 && clientIndex < fx_maxLocalClients && fx_systemPool )
    return fx_systemPool[clientIndex].systemFlags & 0x10;
  else
    return 0i64;
}

/*
==============
FX_LinkSystemBuffers
==============
*/
void FX_LinkSystemBuffers(FxSystem *system, FxSystemBuffers *systemBuffers, FxSystemCommand *systemCommand)
{
  system->visState = (FxVisState *)systemBuffers;
  system->spawnCmdWrite = &systemCommand->spawnCmdWrite;
  system->lock = &systemCommand->accessLock;
  system->spawnCmdRead = &systemCommand->spawnCmdRead;
  system->command = systemCommand;
}

/*
==============
FX_ShutdownSystem
==============
*/
void FX_ShutdownSystem(LocalClientNum_t localClientNum)
{
  FxSystem *System; 
  FxSystemBuffers *SystemBuffers; 
  ParticleManager *ParticleManager; 

  if ( fx_systemPool )
  {
    System = FX_GetSystem(localClientNum);
    if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_init.cpp", 177, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
      __debugbreak();
    SystemBuffers = FX_GetSystemBuffers(localClientNum);
    if ( !SystemBuffers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_init.cpp", 179, ASSERT_TYPE_ASSERT, "(systemBuffers)", (const char *)&queryFormat, "systemBuffers") )
      __debugbreak();
    if ( (System->systemFlags & 0x10) != 0 )
    {
      if ( !System->lock && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_init.cpp", 183, ASSERT_TYPE_ASSERT, "(system->lock)", (const char *)&queryFormat, "system->lock") )
        __debugbreak();
      if ( System->lock->m.read != System->lock->m.request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_init.cpp", 184, ASSERT_TYPE_ASSERT, "(system->lock->m.read == system->lock->m.request)", (const char *)&queryFormat, "system->lock->m.read == system->lock->m.request") )
        __debugbreak();
      if ( System->lock->m.read != System->lock->m.write && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_system_init.cpp", 185, ASSERT_TYPE_ASSERT, "(system->lock->m.read == system->lock->m.write)", (const char *)&queryFormat, "system->lock->m.read == system->lock->m.write") )
        __debugbreak();
    }
    memset_0(System, 0, sizeof(FxSystem));
    memset_0(SystemBuffers, 0, sizeof(FxSystemBuffers));
    fx_serverVisClient = LOCAL_CLIENT_0;
    ParticleManager = ParticleManager::GetParticleManager(localClientNum);
    ParticleManager::Release(ParticleManager);
  }
}

