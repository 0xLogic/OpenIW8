/*
==============
FX_Save
==============
*/

void __fastcall FX_Save(int clientIndex, MemoryFile *memFile)
{
  ?FX_Save@@YAXHPEAUMemoryFile@@@Z(clientIndex, memFile);
}

/*
==============
FX_Restore
==============
*/

void __fastcall FX_Restore(int clientIndex, MemoryFile *memFile)
{
  ?FX_Restore@@YAXHPEAUMemoryFile@@@Z(clientIndex, memFile);
}

/*
==============
FX_Archive
==============
*/

void __fastcall FX_Archive(int clientIndex, MemoryFile *memFile)
{
  ?FX_Archive@@YAXHPEAUMemoryFile@@@Z(clientIndex, memFile);
}

/*
==============
FX_Archive
==============
*/
void FX_Archive(int clientIndex, MemoryFile *memFile)
{
  __int64 v3; 
  int v4; 
  FxSystem *System; 
  ParticleManager *v6; 
  int v7; 
  __int64 v8; 

  v3 = clientIndex;
  if ( MemFile_IsWriting(memFile) )
  {
    if ( (unsigned int)v3 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, 2) )
      __debugbreak();
    ParticleManager::Save(&g_particleManager[v3], memFile);
    if ( Com_GameMode_SupportsFeature((Com_GameMode_Feature)257) )
      FX_Dismemberment_Save((LocalClientNum_t)v3, memFile);
  }
  else
  {
    Sys_ProfBeginNamedEvent(0xFFFF0000, "FX_Restore");
    v4 = Sys_Milliseconds();
    Com_Printf(21, "FX_Restore: start\n");
    System = FX_GetSystem(v3);
    if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_archive.cpp", 29, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
      __debugbreak();
    if ( (unsigned int)v3 >= 2 )
    {
      LODWORD(v8) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v8, 2) )
        __debugbreak();
    }
    v6 = &g_particleManager[v3];
    v6->m_pFxSystem = System;
    ParticleManager::Restore(v6, memFile);
    if ( Com_GameMode_SupportsFeature((Com_GameMode_Feature)257) )
      FX_Dismemberment_Restore((LocalClientNum_t)v3, memFile);
    v7 = Sys_Milliseconds();
    Com_Printf(21, "FX_Restore: end (%d ms)\n", (unsigned int)(v7 - v4));
    Sys_ProfEndNamedEvent();
  }
  if ( Com_GameMode_SupportsFeature((Com_GameMode_Feature)257) )
    FX_Dismemberment_Archive((LocalClientNum_t)v3, memFile);
}

/*
==============
FX_Restore
==============
*/
void FX_Restore(int clientIndex, MemoryFile *memFile)
{
  __int64 v3; 
  int v4; 
  FxSystem *System; 
  ParticleManager *v6; 
  int v7; 
  __int64 v8; 

  v3 = clientIndex;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "FX_Restore");
  v4 = Sys_Milliseconds();
  Com_Printf(21, "FX_Restore: start\n");
  System = FX_GetSystem(v3);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\effectscore\\fx_archive.cpp", 29, ASSERT_TYPE_ASSERT, "(system)", (const char *)&queryFormat, "system") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v8, 2) )
      __debugbreak();
  }
  v6 = &g_particleManager[v3];
  v6->m_pFxSystem = System;
  ParticleManager::Restore(v6, memFile);
  if ( Com_GameMode_SupportsFeature((Com_GameMode_Feature)257) )
    FX_Dismemberment_Restore((LocalClientNum_t)v3, memFile);
  v7 = Sys_Milliseconds();
  Com_Printf(21, "FX_Restore: end (%d ms)\n", (unsigned int)(v7 - v4));
  Sys_ProfEndNamedEvent();
}

/*
==============
FX_Save
==============
*/
void FX_Save(int clientIndex, MemoryFile *memFile)
{
  __int64 v2; 
  int v5; 

  v2 = clientIndex;
  if ( (unsigned int)clientIndex >= 2 )
  {
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", clientIndex, v5) )
      __debugbreak();
  }
  ParticleManager::Save(&g_particleManager[v2], memFile);
  if ( Com_GameMode_SupportsFeature((Com_GameMode_Feature)257) )
    FX_Dismemberment_Save((LocalClientNum_t)v2, memFile);
}

