/*
==============
CG_MainMP_Shutdown
==============
*/

void __fastcall CG_MainMP_Shutdown(LocalClientNum_t localClientNum)
{
  ?CG_MainMP_Shutdown@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_MainMP_SaveMigrationPers
==============
*/

void __fastcall CG_MainMP_SaveMigrationPers(LocalClientNum_t localClientNum)
{
  ?CG_MainMP_SaveMigrationPers@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_MainMP_Init
==============
*/

void __fastcall CG_MainMP_Init(LocalClientNum_t localClientNum, int serverMessageNum, int serverCommandSequence, int clientNum, HunkUser *hunkUser)
{
  ?CG_MainMP_Init@@YAXW4LocalClientNum_t@@HHHPEAUHunkUser@@@Z(localClientNum, serverMessageNum, serverCommandSequence, clientNum, hunkUser);
}

/*
==============
CG_MainMP_AllocateClientMemory
==============
*/

void __fastcall CG_MainMP_AllocateClientMemory(HunkUser *hunkUser, int maxLocalClients, int maxClients, int maxAgents)
{
  ?CG_MainMP_AllocateClientMemory@@YAXPEAUHunkUser@@HHH@Z(hunkUser, maxLocalClients, maxClients, maxAgents);
}

/*
==============
CG_MainMP_FreeClientMemory
==============
*/

void CG_MainMP_FreeClientMemory(void)
{
  ?CG_MainMP_FreeClientMemory@@YAXXZ();
}

/*
==============
CG_MainMP_GetPostGameState
==============
*/

PostGameState __fastcall CG_MainMP_GetPostGameState(const LocalClientNum_t localClientNum)
{
  return ?CG_MainMP_GetPostGameState@@YA?AW4PostGameState@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_MainMP_RewindKillcamEffects
==============
*/

void __fastcall CG_MainMP_RewindKillcamEffects(LocalClientNum_t localClientNum, int deltaTime)
{
  ?CG_MainMP_RewindKillcamEffects@@YAXW4LocalClientNum_t@@H@Z(localClientNum, deltaTime);
}

/*
==============
CG_MainMP_IsPrematchCountdown
==============
*/

bool __fastcall CG_MainMP_IsPrematchCountdown(const LocalClientNum_t localClientNum)
{
  return ?CG_MainMP_IsPrematchCountdown@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_MainMP_AllocXAnimClient
==============
*/

void *__fastcall CG_MainMP_AllocXAnimClient(unsigned __int64 size)
{
  return ?CG_MainMP_AllocXAnimClient@@YAPEAX_K@Z(size);
}

/*
==============
CG_MainMP_CGameRestart_PostShutdownEntities
==============
*/

void __fastcall CG_MainMP_CGameRestart_PostShutdownEntities(LocalClientNum_t localClientNum)
{
  ?CG_MainMP_CGameRestart_PostShutdownEntities@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_MainMP_RegisterDvars
==============
*/

void CG_MainMP_RegisterDvars(void)
{
  ?CG_MainMP_RegisterDvars@@YAXXZ();
}

/*
==============
CG_MainMP_CGameRestart_PreShutdownEntities
==============
*/

void __fastcall CG_MainMP_CGameRestart_PreShutdownEntities(LocalClientNum_t localClientNum)
{
  ?CG_MainMP_CGameRestart_PreShutdownEntities@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_MainMP_Frame
==============
*/

void __fastcall CG_MainMP_Frame(LocalClientNum_t localClientNum)
{
  ?CG_MainMP_Frame@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_MainMP_DeRegisterDvars
==============
*/

void CG_MainMP_DeRegisterDvars(void)
{
  ?CG_MainMP_DeRegisterDvars@@YAXXZ();
}

/*
==============
CG_MainMP_LoadMigrationPers
==============
*/

void __fastcall CG_MainMP_LoadMigrationPers(LocalClientNum_t localClientNum)
{
  ?CG_MainMP_LoadMigrationPers@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_MainMP_RegisterReplicatedDvars
==============
*/

void CG_MainMP_RegisterReplicatedDvars(void)
{
  ?CG_MainMP_RegisterReplicatedDvars@@YAXXZ();
}

/*
==============
CG_MainMP_DeRegisterReplicatedDvars
==============
*/

void CG_MainMP_DeRegisterReplicatedDvars(void)
{
  ?CG_MainMP_DeRegisterReplicatedDvars@@YAXXZ();
}

/*
==============
CG_MainMP_AllocXAnimClient
==============
*/
void *CG_MainMP_AllocXAnimClient(unsigned __int64 size)
{
  HunkUser *HunkUser; 

  HunkUser = CL_Main_GetHunkUser();
  return Mem_HunkUser_AllocInternal(HunkUser, size, 8ui64, "CG_MainMP_AllocXAnimClient");
}

/*
==============
CG_MainMP_AllocateClientMemory
==============
*/
void CG_MainMP_AllocateClientMemory(HunkUser *hunkUser, int maxLocalClients, int maxClients, int maxAgents)
{
  __int64 v4; 
  HunkUser *v5; 
  int v6; 
  int v7; 
  __int64 v8; 
  CgStaticMP *v9; 
  int v10; 
  CgStatic **v11; 
  CgStatic *v12; 
  __int64 v13; 
  __int64 v14; 
  CgStaticGlobalsMP *v15; 
  CGCorpseInfoMP *corpseinfo; 
  __int64 v17; 
  CGCorpseInfoMP *agentCorpseInfo; 
  __int64 v19; 
  CgWeaponSystem *v20; 
  int v21; 
  CgWeaponSystem **v22; 
  unsigned __int64 v23; 
  CgEventSystem *v24; 
  int v25; 
  CgEventSystem **v26; 
  CgSoundSystem *v27; 
  int v28; 
  CgSoundSystem **v29; 
  CgCompassSystemMP *v30; 
  int v31; 
  CgCompassSystem **v32; 
  CgCompassSystem *v33; 
  _DWORD *v34; 
  int v35; 
  CgEntitySystem **v36; 
  _DWORD *v37; 
  CgEntitySystem *v38; 
  centity_t *v39; 
  __int64 v40; 
  __int64 v41; 
  CgViewSystem *v42; 
  int v43; 
  CgViewSystem **v44; 
  CgVehicleSystemMP *v45; 
  int v46; 
  CgVehicleSystem **v47; 
  CgVehicleSystem *v48; 
  CgTargetAssistMP *v49; 
  int v50; 
  CgTargetAssist **v51; 
  CgTargetAssist *v52; 
  CgPredictedEntitySystem *v53; 
  int v54; 
  CgPredictedEntitySystem **v55; 
  CgPredictedEntity *m_entities; 
  __int64 v57; 
  CgMissileMP *v58; 
  int v59; 
  CgMissile **v60; 
  BgMissile *v61; 
  CgClientSideEffectsSystem *v62; 
  CgClientSideEffectsSystem **v63; 
  int v64; 
  __int64 v65; 
  unsigned __int64 FreeReserveAmount; 
  __int64 v67; 
  __int64 v68; 
  __int64 v69; 
  int maxCharacters; 

  v4 = maxLocalClients;
  v5 = hunkUser;
  v6 = maxClients + maxAgents;
  maxCharacters = maxClients + maxAgents;
  CgDynamicMedia::AllocateMemory<CgDynamicMediaMP>(hunkUser);
  if ( (_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 134, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the game statics but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", (unsigned __int8)CgStatic::ms_allocatedType) )
    __debugbreak();
  v7 = 0;
  if ( (unsigned int)v4 > 2 )
  {
    LODWORD(v67) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 135, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v67, 0i64, 2) )
      __debugbreak();
  }
  v8 = v4;
  v9 = (CgStaticMP *)Mem_HunkUser_AllocInternal(v5, 61168 * v4, 8ui64, "CgStatic::AllocateGameStaticsCommon");
  v10 = 0;
  if ( (int)v4 > 0 )
  {
    v11 = CgStatic::ms_cgameStaticsArray;
    do
    {
      if ( *v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 145, ASSERT_TYPE_ASSERT, "(!ms_cgameStaticsArray[localClientIndex])", (const char *)&queryFormat, "!ms_cgameStaticsArray[localClientIndex]") )
        __debugbreak();
      CgStaticMP::CgStaticMP(v9, (const LocalClientNum_t)v10);
      *v11 = v12;
      ++v10;
      ++v9;
      ++v11;
    }
    while ( v10 < (int)v4 );
    v8 = v4;
    v6 = maxCharacters;
  }
  LODWORD(CgStatic::ms_allocatedCount) = v4;
  LOBYTE(CgStatic::ms_allocatedType) = 2;
  CgGlobalsMP::AllocateLocalClientGlobals(v5, v4, v6);
  if ( (unsigned int)v4 > 2 )
  {
    LODWORD(v69) = 2;
    LODWORD(v67) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_static_mp.h", 24, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v67, 0i64, v69) )
      __debugbreak();
  }
  if ( s_clientStaticGlobalsArrayMP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_static_mp.h", 25, ASSERT_TYPE_ASSERT, "(!s_clientStaticGlobalsArrayMP)", (const char *)&queryFormat, "!s_clientStaticGlobalsArrayMP") )
    __debugbreak();
  s_clientStaticGlobalsArrayMP = (CgStaticGlobalsMP *)Mem_HunkUser_AllocInternal(v5, 464872 * v8, 0x80ui64, "CgStaticGlobalsMP::AllocateLocalClientStaticGlobals");
  memset_0(s_clientStaticGlobalsArrayMP, 0, 464872 * v8);
  if ( v8 > 0 )
  {
    v13 = 0i64;
    v14 = 0i64;
    do
    {
      if ( cgs_t::ms_cgsArray[v13] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_static_mp.h", 32, ASSERT_TYPE_ASSERT, "(!ms_cgsArray[localClientIndex])", (const char *)&queryFormat, "!ms_cgsArray[localClientIndex]") )
        __debugbreak();
      v15 = &s_clientStaticGlobalsArrayMP[v14];
      memset_0(&s_clientStaticGlobalsArrayMP[v14].viewX, 0, 0x717E0ui64);
      v15->__vftable = (CgStaticGlobalsMP_vtbl *)&cgs_t::`vftable';
      corpseinfo = v15->corpseinfo;
      v17 = 8i64;
      do
      {
        CGCorpseInfoMP::CGCorpseInfoMP(corpseinfo++);
        --v17;
      }
      while ( v17 );
      agentCorpseInfo = v15->agentCorpseInfo;
      v19 = 8i64;
      do
      {
        CGCorpseInfoMP::CGCorpseInfoMP(agentCorpseInfo++);
        --v19;
      }
      while ( v19 );
      v15->__vftable = (CgStaticGlobalsMP_vtbl *)&CgStaticGlobalsMP::`vftable';
      cgs_t::ms_cgsArray[v13++] = v15;
      ++v14;
    }
    while ( v13 < v8 );
    LODWORD(v4) = maxLocalClients;
    v7 = 0;
    v5 = hunkUser;
  }
  cgs_t::ms_allocatedCount = v4;
  cgs_t::ms_allocatedType = STATIC_GLOB_TYPE_MP;
  if ( CgWeaponSystem::ms_allocatedType )
  {
    LODWORD(v68) = CgWeaponSystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 554, ASSERT_TYPE_ASSERT, "(ms_allocatedType == CgWeaponsType::WEAPONS_TYPE_NONE)", "%s\n\tTrying to allocate the weapon system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == CgWeaponsType::WEAPONS_TYPE_NONE", v68) )
      __debugbreak();
  }
  if ( (unsigned int)v4 > 2 )
  {
    LODWORD(v69) = 2;
    LODWORD(v67) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 555, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v67, 0i64, v69) )
      __debugbreak();
  }
  v20 = (CgWeaponSystem *)Mem_HunkUser_AllocInternal(v5, 4832 * v8, 8ui64, "CgWeaponSystem::AllocateWeaponSystemCommon");
  memset_0(v20, 0, 4832 * v8);
  v21 = 0;
  if ( (int)v4 > 0 )
  {
    v22 = CgWeaponSystem::ms_weaponSystemArray;
    do
    {
      if ( *v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 565, ASSERT_TYPE_ASSERT, "(!ms_weaponSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_weaponSystemArray[localClientIndex]") )
        __debugbreak();
      v20->__vftable = (CgWeaponSystem_vtbl *)&CgWeaponSystem::`vftable';
      v20->m_localClientNum = v21;
      v20->m_numBulletDebugLines = 0;
      v20->m_nextBulletId = 0;
      v20->__vftable = (CgWeaponSystem_vtbl *)&CgWeaponSystemMP::`vftable';
      *v22 = v20;
      ++v21;
      v20 = (CgWeaponSystem *)((char *)v20 + 4832);
      ++v22;
    }
    while ( v21 < (int)v4 );
    v5 = hunkUser;
    v8 = (int)v4;
  }
  CgWeaponSystem::ms_allocatedCount = v4;
  CgWeaponSystem::ms_allocatedType = WEAPONS_TYPE_MP;
  if ( (_BYTE)CgEventSystem::ms_allocatedType )
  {
    LODWORD(v68) = (unsigned __int8)CgEventSystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 248, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the event system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v68) )
      __debugbreak();
  }
  if ( (unsigned int)v4 > 2 )
  {
    LODWORD(v69) = 2;
    LODWORD(v67) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 249, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v67, 0i64, v69) )
      __debugbreak();
  }
  v23 = 16 * v8;
  v24 = (CgEventSystem *)Mem_HunkUser_AllocInternal(v5, 16 * v8, 8ui64, "CgEventSystem::AllocateEventSystemCommon");
  memset_0(v24, 0, 16 * v8);
  v25 = 0;
  if ( (int)v4 > 0 )
  {
    v26 = CgEventSystem::ms_eventSystemArray;
    do
    {
      if ( *v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 259, ASSERT_TYPE_ASSERT, "(!ms_eventSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_eventSystemArray[localClientIndex]") )
        __debugbreak();
      v24->m_localClientNum = v25;
      v24->__vftable = (CgEventSystem_vtbl *)&CgEventSystemMP::`vftable';
      *v26 = v24;
      ++v25;
      ++v24;
      ++v26;
    }
    while ( v25 < (int)v4 );
    v5 = hunkUser;
    v8 = (int)v4;
  }
  CgEventSystem::ms_allocatedCount = v4;
  LOBYTE(CgEventSystem::ms_allocatedType) = 2;
  if ( (_BYTE)CgSoundSystem::ms_allocatedType )
  {
    LODWORD(v68) = (unsigned __int8)CgSoundSystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 203, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the sound system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v68) )
      __debugbreak();
  }
  if ( (unsigned int)v4 > 2 )
  {
    LODWORD(v69) = 2;
    LODWORD(v67) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 204, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v67, 0i64, v69) )
      __debugbreak();
  }
  v27 = (CgSoundSystem *)Mem_HunkUser_AllocInternal(v5, v23, 8ui64, "CgSoundSystem::AllocateSoundSystemCommon");
  memset_0(v27, 0, v23);
  v28 = 0;
  if ( (int)v4 > 0 )
  {
    v29 = CgSoundSystem::ms_soundSystemArray;
    do
    {
      if ( *v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 214, ASSERT_TYPE_ASSERT, "(!ms_soundSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_soundSystemArray[localClientIndex]") )
        __debugbreak();
      v27->m_localClientNum = v28;
      v27->__vftable = (CgSoundSystem_vtbl *)&CgSoundSystemMP::`vftable';
      *v29 = v27;
      ++v28;
      ++v27;
      ++v29;
    }
    while ( v28 < (int)v4 );
    v5 = hunkUser;
    v8 = (int)v4;
  }
  CgSoundSystem::ms_allocatedCount = v4;
  LOBYTE(CgSoundSystem::ms_allocatedType) = 2;
  CgDrawSystemMP::AllocateDrawSystem(v5, v4, maxCharacters);
  if ( !CG_GameInterface_AllocateCompassSystem(v5, v4) )
  {
    if ( (_BYTE)CgCompassSystem::ms_allocatedType )
    {
      LODWORD(v68) = (unsigned __int8)CgCompassSystem::ms_allocatedType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 599, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the compass system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v68) )
        __debugbreak();
    }
    if ( (unsigned int)v4 > 2 )
    {
      LODWORD(v69) = 2;
      LODWORD(v67) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 600, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v67, 0i64, v69) )
        __debugbreak();
    }
    v30 = (CgCompassSystemMP *)Mem_HunkUser_AllocInternal(v5, 64280 * v8, 8ui64, "CgCompassSystem::AllocateCompassSystemCommon");
    memset_0(v30, 0, 64280 * v8);
    v31 = 0;
    if ( (int)v4 > 0 )
    {
      v32 = CgCompassSystem::ms_compassSystemArray;
      do
      {
        if ( *v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 610, ASSERT_TYPE_ASSERT, "(!ms_compassSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_compassSystemArray[localClientIndex]") )
          __debugbreak();
        CgCompassSystemMP::CgCompassSystemMP(v30, (const LocalClientNum_t)v31);
        *v32 = v33;
        ++v31;
        ++v30;
        ++v32;
      }
      while ( v31 < (int)v4 );
      v5 = hunkUser;
    }
    CgCompassSystem::ms_allocatedCount = v4;
    LOBYTE(CgCompassSystem::ms_allocatedType) = 2;
  }
  if ( (_BYTE)CgEntitySystem::ms_allocatedType )
  {
    LODWORD(v68) = (unsigned __int8)CgEntitySystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 312, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the entity system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v68) )
      __debugbreak();
  }
  if ( (unsigned int)v4 > 2 )
  {
    LODWORD(v69) = 2;
    LODWORD(v67) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 313, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v67, 0i64, v69) )
      __debugbreak();
  }
  v34 = Mem_HunkUser_AllocInternal(v5, 2140000 * v8, 8ui64, "CgEntitySystem::AllocateEntitySystemCommon");
  memset_0(v34, 0, 2140000 * v8);
  v35 = 0;
  if ( (int)v4 > 0 )
  {
    v36 = CgEntitySystem::ms_entitySystemArray;
    v37 = v34 + 395268;
    do
    {
      if ( *v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 323, ASSERT_TYPE_ASSERT, "(!ms_entitySystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_entitySystemArray[localClientIndex]") )
        __debugbreak();
      v38 = (CgEntitySystem *)(v37 - 395268);
      *((_QWORD *)v37 - 197634) = &CgEntitySystem::`vftable';
      *(v37 - 395266) = v35;
      v39 = (centity_t *)(v37 - 395264);
      v40 = 2048i64;
      do
      {
        centity_t::centity_t(v39++);
        --v40;
      }
      while ( v40 );
      v37[24] = 0;
      memset_0(v37, 0, 0x60ui64);
      v38->__vftable = (CgEntitySystem_vtbl *)&CgEntitySystemMP::`vftable';
      *v36 = v38;
      ++v35;
      v37 += 535000;
      ++v36;
    }
    while ( v35 < (int)v4 );
    v5 = hunkUser;
  }
  CgEntitySystem::ms_allocatedCount = v4;
  LOBYTE(CgEntitySystem::ms_allocatedType) = 2;
  CG_EntityWorkers_CreateRWLock_Physics();
  if ( (_BYTE)CgViewSystem::ms_allocatedType )
  {
    LODWORD(v68) = (unsigned __int8)CgViewSystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 291, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the view system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v68) )
      __debugbreak();
  }
  if ( (unsigned int)v4 > 2 )
  {
    LODWORD(v69) = 2;
    LODWORD(v67) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 292, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v67, 0i64, v69) )
      __debugbreak();
  }
  v41 = (int)v4;
  v42 = (CgViewSystem *)Mem_HunkUser_AllocInternal(v5, 104i64 * (int)v4, 8ui64, "CgViewSystem::AllocateViewSystemCommon");
  memset_0(v42, 0, 104i64 * (int)v4);
  v43 = 0;
  if ( (int)v4 > 0 )
  {
    v44 = CgViewSystem::ms_viewSystemArray;
    do
    {
      if ( *v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 302, ASSERT_TYPE_ASSERT, "(!ms_viewSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_viewSystemArray[localClientIndex]") )
        __debugbreak();
      v42->m_localClientNum = v43;
      memset_0(&v42->m_viewKickState, 0, sizeof(v42->m_viewKickState));
      v42->__vftable = (CgViewSystem_vtbl *)&CgViewSystemMP::`vftable';
      *v44 = v42;
      ++v43;
      ++v42;
      ++v44;
    }
    while ( v43 < (int)v4 );
    v5 = hunkUser;
    v41 = (int)v4;
  }
  CgViewSystem::ms_allocatedCount = v4;
  LOBYTE(CgViewSystem::ms_allocatedType) = 2;
  if ( (_BYTE)CgVehicleSystem::ms_allocatedType )
  {
    LODWORD(v68) = (unsigned __int8)CgVehicleSystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 430, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the vehicle system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v68) )
      __debugbreak();
  }
  if ( (unsigned int)v4 > 2 )
  {
    LODWORD(v69) = 2;
    LODWORD(v67) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 431, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v67, 0i64, v69) )
      __debugbreak();
  }
  v45 = (CgVehicleSystemMP *)Mem_HunkUser_AllocInternal(v5, 1157400 * v41, 8ui64, "CgVehicleSystem::AllocateVehicleSystemCommon");
  memset_0(v45, 0, 1157400 * v41);
  v46 = 0;
  if ( (int)v4 > 0 )
  {
    v47 = CgVehicleSystem::ms_vehicleSystemArray;
    do
    {
      if ( *v47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 441, ASSERT_TYPE_ASSERT, "(!ms_vehicleSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_vehicleSystemArray[localClientIndex]") )
        __debugbreak();
      CgVehicleSystemMP::CgVehicleSystemMP(v45, (const LocalClientNum_t)v46);
      *v47 = v48;
      ++v46;
      ++v45;
      ++v47;
    }
    while ( v46 < (int)v4 );
    v41 = (int)v4;
  }
  CgVehicleSystem::ms_allocatedCount = v4;
  LOBYTE(CgVehicleSystem::ms_allocatedType) = 2;
  CGMovingPlatformsMP::AllocateMovingPlatformSystem(v5);
  CgWeaponMap::Allocate(v5, v4);
  CgAntiLagMP::Allocate(v5, v4);
  if ( (_BYTE)CgTargetAssist::ms_allocatedType )
  {
    LODWORD(v68) = (unsigned __int8)CgTargetAssist::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 97, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the target assist system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v68) )
      __debugbreak();
  }
  if ( (unsigned int)v4 > 2 )
  {
    LODWORD(v69) = 2;
    LODWORD(v67) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 98, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v67, 0i64, v69) )
      __debugbreak();
  }
  v49 = (CgTargetAssistMP *)Mem_HunkUser_AllocInternal(v5, 2432 * v41, 8ui64, "CgTargetAssist::AllocateInstanceCommon");
  memset_0(v49, 0, 2432 * v41);
  v50 = 0;
  if ( (int)v4 > 0 )
  {
    v51 = CgTargetAssist::ms_instances;
    do
    {
      if ( *v51 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 108, ASSERT_TYPE_ASSERT, "(!ms_instances[localClientIndex])", (const char *)&queryFormat, "!ms_instances[localClientIndex]") )
        __debugbreak();
      CgTargetAssistMP::CgTargetAssistMP(v49, (const LocalClientNum_t)v50);
      *v51 = v52;
      ++v50;
      ++v49;
      ++v51;
    }
    while ( v50 < (int)v4 );
    v5 = hunkUser;
  }
  CgTargetAssist::ms_allocatedCount = v4;
  LOBYTE(CgTargetAssist::ms_allocatedType) = 2;
  if ( (_BYTE)CgPredictedEntitySystem::ms_allocatedType )
  {
    LODWORD(v68) = (unsigned __int8)CgPredictedEntitySystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 244, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the predicted entity system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v68) )
      __debugbreak();
  }
  if ( (unsigned int)v4 > 2 )
  {
    LODWORD(v69) = 2;
    LODWORD(v67) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 245, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v67, 0i64, v69) )
      __debugbreak();
  }
  v53 = (CgPredictedEntitySystem *)Mem_HunkUser_AllocInternal(v5, 29224 * v41, 8ui64, "CgPredictedEntitySystem::AllocateSystemCommon");
  memset_0(v53, 0, 29224 * v41);
  v54 = 0;
  if ( (int)v4 > 0 )
  {
    v55 = CgPredictedEntitySystem::ms_systemsArray;
    do
    {
      if ( *v55 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 255, ASSERT_TYPE_ASSERT, "(!ms_systemsArray[localClientIndex])", (const char *)&queryFormat, "!ms_systemsArray[localClientIndex]") )
        __debugbreak();
      BgPredictedEntitySystem::BgPredictedEntitySystem(v53);
      v53->__vftable = (CgPredictedEntitySystem_vtbl *)&CgPredictedEntitySystem::`vftable';
      v53->m_localClientNum = v54;
      v53->m_numEntities = 0;
      m_entities = v53->m_entities;
      v57 = 32i64;
      do
      {
        CgPredictedEntity::CgPredictedEntity(m_entities++);
        --v57;
      }
      while ( v57 );
      v53->m_firstFreeEntity = NULL;
      v53->m_lastFreeEntity = NULL;
      v53->__vftable = (CgPredictedEntitySystem_vtbl *)&CgPredictedEntitySystemMP::`vftable';
      *v55 = v53;
      ++v54;
      ++v53;
      ++v55;
    }
    while ( v54 < (int)v4 );
    v5 = hunkUser;
    v41 = (int)v4;
  }
  CgPredictedEntitySystem::ms_allocatedCount = v4;
  LOBYTE(CgPredictedEntitySystem::ms_allocatedType) = 2;
  CgBallistics::AllocateSystemCommon<CgBallisticsMP>(v5, v4);
  if ( (_BYTE)CgMissile::ms_allocatedType )
  {
    LODWORD(v68) = (unsigned __int8)CgMissile::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 297, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the missile system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v68) )
      __debugbreak();
  }
  if ( (unsigned int)v4 > 2 )
  {
    LODWORD(v69) = 2;
    LODWORD(v67) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 298, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v67, 0i64, v69) )
      __debugbreak();
  }
  v58 = (CgMissileMP *)Mem_HunkUser_AllocInternal(v5, 40 * v41, 8ui64, "CgMissile::AllocateSystemCommon");
  memset_0(v58, 0, 40 * v41);
  v59 = 0;
  if ( (int)v4 > 0 )
  {
    v60 = CgMissile::ms_systemsArray;
    do
    {
      if ( *v60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 308, ASSERT_TYPE_ASSERT, "(!ms_systemsArray[localClientIndex])", (const char *)&queryFormat, "!ms_systemsArray[localClientIndex]") )
        __debugbreak();
      CgMissileMP::CgMissileMP(v58, (const LocalClientNum_t)v59);
      *v60 = (CgMissile *)v61;
      BgMissile::SRand(v61, 0x89ABCDEF);
      ++v59;
      ++v58;
      ++v60;
    }
    while ( v59 < (int)v4 );
    v41 = (int)v4;
  }
  CgMissile::ms_allocatedCount = v4;
  LOBYTE(CgMissile::ms_allocatedType) = 2;
  if ( (_BYTE)CgClientSideEffectsSystem::ms_allocatedType )
  {
    LODWORD(v68) = (unsigned __int8)CgClientSideEffectsSystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 334, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the client-side effects system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v68) )
      __debugbreak();
  }
  if ( (unsigned int)v4 > 2 )
  {
    LODWORD(v69) = 2;
    LODWORD(v67) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 335, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v67, 0i64, v69) )
      __debugbreak();
  }
  v62 = (CgClientSideEffectsSystem *)Mem_HunkUser_AllocInternal(v5, 80064 * v41, 8ui64, "CgClientSideEffectsSystem::AllocateClientSideEffectsSystemCommon");
  memset_0(v62, 0, 80064 * v41);
  if ( (int)v4 > 0 )
  {
    v63 = CgClientSideEffectsSystem::ms_cseSystemArray;
    do
    {
      if ( *v63 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 345, ASSERT_TYPE_ASSERT, "(!ms_cseSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_cseSystemArray[localClientIndex]") )
        __debugbreak();
      v62->m_localClientNum = v7;
      v62->__vftable = (CgClientSideEffectsSystem_vtbl *)&CgClientSideEffectsSystemMP::`vftable';
      *v63 = v62;
      CgClientSideEffectsSystem::AllocateMemory(v62, v5);
      ++v7;
      ++v62;
      ++v63;
    }
    while ( v7 < (int)v4 );
    v41 = (int)v4;
  }
  CgClientSideEffectsSystem::ms_allocatedCount = v4;
  LOBYTE(CgClientSideEffectsSystem::ms_allocatedType) = 2;
  v64 = maxCharacters;
  CgPlayer_Asm::AllocateMemory(v5, v4, maxCharacters);
  CG_SnapshotMP_AllocateSnapshots(v5, v4);
  CG_PlayerCards_AllocateMemory(v5, v4, maxCharacters);
  CG_AllocLocalClientEntities(v5, v4);
  aaGlobArray = (AimAssistGlobals *)Mem_HunkUser_AllocInternal(v5, 3616 * v41, 0x10ui64, "AimAssist_AllocateClientMemory");
  if ( ((unsigned __int8)aaGlobArray & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.h", 170, ASSERT_TYPE_SANITY, "( ( ( (uintptr_t)aaGlobArray ) & 15 ) == 0 )", (const char *)&queryFormat, "( ( (uintptr_t)aaGlobArray ) & 15 ) == 0") )
    __debugbreak();
  if ( (int)v4 > 0 )
  {
    v65 = (unsigned int)v4;
    do
    {
      if ( ((unsigned __int8)aaGlobArray & 0xF) != 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.h", 175, ASSERT_TYPE_SANITY, "( ( ( (uintptr_t)&aaGlobArray[localClientIndex].screenMtx ) & 15 ) == 0 )", (const char *)&queryFormat, "( ( (uintptr_t)&aaGlobArray[localClientIndex].screenMtx ) & 15 ) == 0") )
          __debugbreak();
        if ( ((unsigned __int8)aaGlobArray & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.h", 176, ASSERT_TYPE_SANITY, "( ( ( (uintptr_t)&aaGlobArray[localClientIndex].invScreenMtx ) & 15 ) == 0 )", (const char *)&queryFormat, "( ( (uintptr_t)&aaGlobArray[localClientIndex].invScreenMtx ) & 15 ) == 0") )
          __debugbreak();
      }
      --v65;
    }
    while ( v65 );
    v64 = maxCharacters;
  }
  CG_Glass_AllocateMemory(v5);
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 336, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CINEMATIC_CAMERA ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CINEMATIC_CAMERA )") )
    __debugbreak();
  CG_CinematicCamera_AllocateClientMemory(v5, v4);
  CG_GameInterface_OnAllocateGameMemory(v5, v4);
  Scriptable_Bg_InitClientEventStream(v5, v4, v64);
  CG_EditablePlayerData_Init();
  DynEnt_AllocateClientMemory(v5, v4);
  CG_CustomizationStreamingMP_AllocateMemory(v5, v4);
  CG_WeaponStreamingMP_AllocateMemory(v5, v4);
  CG_ClientAntiCheatMP_AllocateClientMemory(v5, v4, maxClients);
  cg_maxLocalClients = v4;
  FreeReserveAmount = Mem_HunkUser_GetFreeReserveAmount(v5);
  Com_Printf(10, "GameAllocate: Free client hunk memory (Post-CG): %zu kb\n", FreeReserveAmount >> 10);
}

/*
==============
CG_MainMP_CGameRestart_PostShutdownEntities
==============
*/
void CG_MainMP_CGameRestart_PostShutdownEntities(LocalClientNum_t localClientNum)
{
  ScriptableCl_Init(localClientNum);
  DynEntCl_InitEntities(localClientNum);
}

/*
==============
CG_MainMP_CGameRestart_PreShutdownEntities
==============
*/
void CG_MainMP_CGameRestart_PreShutdownEntities(LocalClientNum_t localClientNum)
{
  DynEntCl_Shutdown(localClientNum);
  ScriptableCl_Shutdown(localClientNum);
}

/*
==============
CG_MainMP_CheckForLocalClientGamertagMismatch
==============
*/
void CG_MainMP_CheckForLocalClientGamertagMismatch(LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  const dvar_t *v3; 
  int ControllerFromClient; 
  const char *LocalClientName; 
  CgStatic *LocalClientStatics; 
  cg_t *LocalClientGlobals; 
  __int64 v8; 
  const char *v9; 
  StatsSource ActiveStatsSource; 
  bool IsUserSignedInToDemonware; 
  Online_Error_CAT_ANTICHEAT_t v12; 

  v1 = DVARBOOL_xp_dec_dc;
  if ( !DVARBOOL_xp_dec_dc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xp_dec_dc") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    v3 = DVARBOOL_online_is_devmapping;
    if ( !DVARBOOL_online_is_devmapping && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_is_devmapping") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( !v3->current.enabled && !CL_Demo_IsPlayingServer(localClientNum) && !CG_View_IsKillCamView(localClientNum) )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
      LocalClientName = Live_GetLocalClientName(ControllerFromClient);
      LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      v8 = (__int64)LocalClientStatics->GetClientInfo(LocalClientStatics, LocalClientGlobals->clientNum);
      v9 = (const char *)(v8 + 4);
      if ( v8 != -4 && *v9 && I_strncmp(LocalClientName, (const char *)(v8 + 4), 0x7FFFFFFFui64) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 522, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Local gamertag '%s' does not match server gamertag '%s'.\n", LocalClientName, v9) )
          __debugbreak();
        ActiveStatsSource = LiveStorage_GetActiveStatsSource(ControllerFromClient);
        LiveStorage_DiscardStats(ControllerFromClient, ActiveStatsSource);
        IsUserSignedInToDemonware = Live_IsUserSignedInToDemonware(ControllerFromClient);
        v12 = 512;
        if ( IsUserSignedInToDemonware )
          v12 = 256;
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, v12, NULL);
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144009380);
      }
    }
  }
}

/*
==============
CG_MainMP_DeRegisterDvars
==============
*/
void CG_MainMP_DeRegisterDvars(void)
{
  DCONST_DVARFLT_cg_distanceCache_ringRadius0 = Dvar_Deregister(DCONST_DVARFLT_cg_distanceCache_ringRadius0);
  DCONST_DVARFLT_cg_distanceCache_ringRadius1 = Dvar_Deregister(DCONST_DVARFLT_cg_distanceCache_ringRadius1);
  DCONST_DVARFLT_cg_distanceCache_ringRadius2 = Dvar_Deregister(DCONST_DVARFLT_cg_distanceCache_ringRadius2);
  DCONST_DVARFLT_cg_distanceCache_ringRadius3 = Dvar_Deregister(DCONST_DVARFLT_cg_distanceCache_ringRadius3);
  DCONST_DVARFLT_cg_distanceCache_ringRadius4 = Dvar_Deregister(DCONST_DVARFLT_cg_distanceCache_ringRadius4);
  DCONST_DVARFLT_no_kick_velocity_dampen = Dvar_Deregister(DCONST_DVARFLT_no_kick_velocity_dampen);
  DVARFLT_cg_frontEndSceneZnear = Dvar_Deregister(DVARFLT_cg_frontEndSceneZnear);
  DCONST_DVARFLT_cg_deathCamMaxCutThreshold = Dvar_Deregister(DCONST_DVARFLT_cg_deathCamMaxCutThreshold);
  DVARINT_cg_fixedDeathCamInterpTimeMs = Dvar_Deregister(DVARINT_cg_fixedDeathCamInterpTimeMs);
  DVARINT_cg_fixedDeathCamTraceFailedInterpTimeMs = Dvar_Deregister(DVARINT_cg_fixedDeathCamTraceFailedInterpTimeMs);
  DCONST_DVARBOOL_cg_thirdPersonCamDebug = Dvar_Deregister(DCONST_DVARBOOL_cg_thirdPersonCamDebug);
  DCONST_DVARFLT_cg_debugCamPivot = Dvar_Deregister(DCONST_DVARFLT_cg_debugCamPivot);
  DCONST_DVARBOOL_cg_playerCullingPriorities = Dvar_Deregister(DCONST_DVARBOOL_cg_playerCullingPriorities);
  DCONST_DVARBOOL_cg_playerAnimUpdateCulling = Dvar_Deregister(DCONST_DVARBOOL_cg_playerAnimUpdateCulling);
  DCONST_DVARBOOL_cg_playerAnimUpdateDebug = Dvar_Deregister(DCONST_DVARBOOL_cg_playerAnimUpdateDebug);
  DCONST_DVARINT_cg_playerAnimUpdateFrameCount = Dvar_Deregister(DCONST_DVARINT_cg_playerAnimUpdateFrameCount);
  DCONST_DVARINT_cg_playerAnimUpdateFillCount = Dvar_Deregister(DCONST_DVARINT_cg_playerAnimUpdateFillCount);
  DCONST_DVARINT_cg_playerAnimMaxBackgroundUpdateCount = Dvar_Deregister(DCONST_DVARINT_cg_playerAnimMaxBackgroundUpdateCount);
  DCONST_DVARBOOL_cg_playerAnimUpdateInstantBlend = Dvar_Deregister(DCONST_DVARBOOL_cg_playerAnimUpdateInstantBlend);
  DCONST_DVARINT_cg_playerAnimUpdateInstantBlendMinLODLevel = Dvar_Deregister(DCONST_DVARINT_cg_playerAnimUpdateInstantBlendMinLODLevel);
  DCONST_DVARINT_cg_playerAnimUpdateMinAccumTime = Dvar_Deregister(DCONST_DVARINT_cg_playerAnimUpdateMinAccumTime);
  DCONST_DVARINT_cg_playerAnimUpdateMaxAccumTimeSeconds = Dvar_Deregister(DCONST_DVARINT_cg_playerAnimUpdateMaxAccumTimeSeconds);
  DCONST_DVARINT_cg_playerAnimUpdateMaxAccumTimeRangeSeconds = Dvar_Deregister(DCONST_DVARINT_cg_playerAnimUpdateMaxAccumTimeRangeSeconds);
  DCONST_DVARINT_cg_playerFoliageSoundCount = Dvar_Deregister(DCONST_DVARINT_cg_playerFoliageSoundCount);
  DCONST_DVARINT_cg_playerNoteTrackSoundCount = Dvar_Deregister(DCONST_DVARINT_cg_playerNoteTrackSoundCount);
  DCONST_DVARINT_cg_playerAnimMaxLODCount0 = Dvar_Deregister(DCONST_DVARINT_cg_playerAnimMaxLODCount0);
  DCONST_DVARINT_cg_playerAnimMaxLODCount1 = Dvar_Deregister(DCONST_DVARINT_cg_playerAnimMaxLODCount1);
  DCONST_DVARINT_cg_playerAnimMaxLODCount2 = Dvar_Deregister(DCONST_DVARINT_cg_playerAnimMaxLODCount2);
  DVARBOOL_cg_playerAnimReuseSkelPose = Dvar_Deregister(DVARBOOL_cg_playerAnimReuseSkelPose);
  DCONST_DVARINT_cg_prefetchPlayerCardsFrameCount = Dvar_Deregister(DCONST_DVARINT_cg_prefetchPlayerCardsFrameCount);
  DCONST_DVARBOOL_cg_localPlayerDObjFrameOrderFix = Dvar_Deregister(DCONST_DVARBOOL_cg_localPlayerDObjFrameOrderFix);
  DVARBOOL_cg_mlg_enable_cameras = Dvar_Deregister(DVARBOOL_cg_mlg_enable_cameras);
  DVARFLT_cg_mlg_freecam_speed_base = Dvar_Deregister(DVARFLT_cg_mlg_freecam_speed_base);
  DVARBOOL_cg_mlg_freecam_speed_toggle = Dvar_Deregister(DVARBOOL_cg_mlg_freecam_speed_toggle);
  DVARFLT_cg_mlg_freecam_speed_slow_factor = Dvar_Deregister(DVARFLT_cg_mlg_freecam_speed_slow_factor);
  DVARFLT_cg_mlg_freecam_speed_fast_factor = Dvar_Deregister(DVARFLT_cg_mlg_freecam_speed_fast_factor);
  DVARFLT_cg_mlg_freecam_sensitivity = Dvar_Deregister(DVARFLT_cg_mlg_freecam_sensitivity);
  DVARFLT_cg_mlg_aerialcam_pitch = Dvar_Deregister(DVARFLT_cg_mlg_aerialcam_pitch);
  DVARFLT_cg_mlg_aerialcam_horizontal_distance_factor = Dvar_Deregister(DVARFLT_cg_mlg_aerialcam_horizontal_distance_factor);
  DVARFLT_cg_mlg_aerialcam_base_vertical_distance = Dvar_Deregister(DVARFLT_cg_mlg_aerialcam_base_vertical_distance);
  DVARFLT_cg_mlg_aerialcam_minimal_vertical_distance = Dvar_Deregister(DVARFLT_cg_mlg_aerialcam_minimal_vertical_distance);
  DVARFLT_cg_mlg_aerialcam_maximal_vertical_distance = Dvar_Deregister(DVARFLT_cg_mlg_aerialcam_maximal_vertical_distance);
  DVARFLT_cg_mlg_aerialcam_maximal_tether_radius = Dvar_Deregister(DVARFLT_cg_mlg_aerialcam_maximal_tether_radius);
  DVARFLT_cg_mlg_cam_animation_distance_max_time = Dvar_Deregister(DVARFLT_cg_mlg_cam_animation_distance_max_time);
  DVARFLT_cg_mlg_cam_animation_min_duration = Dvar_Deregister(DVARFLT_cg_mlg_cam_animation_min_duration);
  DVARFLT_cg_mlg_cam_animation_max_duration = Dvar_Deregister(DVARFLT_cg_mlg_cam_animation_max_duration);
  DVARFLT_cg_mlg_cam_smooth_factor = Dvar_Deregister(DVARFLT_cg_mlg_cam_smooth_factor);
  DVARBOOL_cg_enableLaserWorkers = Dvar_Deregister(DVARBOOL_cg_enableLaserWorkers);
  DCONST_DVARBOOL_cg_killcamdebug = Dvar_Deregister(DCONST_DVARBOOL_cg_killcamdebug);
  DVARFLT_cg_heliKillCamFov = Dvar_Deregister(DVARFLT_cg_heliKillCamFov);
  DVARFLT_cg_airstrikeKillCamFov = Dvar_Deregister(DVARFLT_cg_airstrikeKillCamFov);
  DCONST_DVARBOOL_cg_explosiveKillCamUseLegacy = Dvar_Deregister(DCONST_DVARBOOL_cg_explosiveKillCamUseLegacy);
  DCONST_DVARFLT_cg_explosiveKillCamUpDist = Dvar_Deregister(DCONST_DVARFLT_cg_explosiveKillCamUpDist);
  DCONST_DVARFLT_cg_explosiveKillCamBackDist = Dvar_Deregister(DCONST_DVARFLT_cg_explosiveKillCamBackDist);
  DCONST_DVARFLT_cg_explosiveKillCamGroundUpDist = Dvar_Deregister(DCONST_DVARFLT_cg_explosiveKillCamGroundUpDist);
  DCONST_DVARFLT_cg_explosiveKillCamGroundBackDist = Dvar_Deregister(DCONST_DVARFLT_cg_explosiveKillCamGroundBackDist);
  DCONST_DVARFLT_cg_rocketKillCamUpDist = Dvar_Deregister(DCONST_DVARFLT_cg_rocketKillCamUpDist);
  DCONST_DVARFLT_cg_rocketKillCamBackDist = Dvar_Deregister(DCONST_DVARFLT_cg_rocketKillCamBackDist);
  DCONST_DVARFLT_cg_remoteMissileKillCamUpDist = Dvar_Deregister(DCONST_DVARFLT_cg_remoteMissileKillCamUpDist);
  DCONST_DVARFLT_cg_remoteMissileKillCamBackDist = Dvar_Deregister(DCONST_DVARFLT_cg_remoteMissileKillCamBackDist);
  DCONST_DVARFLT_cg_explosiveKillCamStopDist = Dvar_Deregister(DCONST_DVARFLT_cg_explosiveKillCamStopDist);
  DCONST_DVARFLT_cg_explosiveKillCamStopDecelDist = Dvar_Deregister(DCONST_DVARFLT_cg_explosiveKillCamStopDecelDist);
  DCONST_DVARFLT_cg_explosiveKillCamStopSpeedThreshold = Dvar_Deregister(DCONST_DVARFLT_cg_explosiveKillCamStopSpeedThreshold);
  DCONST_DVARFLT_cg_explosiveKillCamPredictStickDist = Dvar_Deregister(DCONST_DVARFLT_cg_explosiveKillCamPredictStickDist);
  DVARFLT_cg_turretKillCamUpDist = Dvar_Deregister(DVARFLT_cg_turretKillCamUpDist);
  DVARFLT_cg_turretKillCamBackDist = Dvar_Deregister(DVARFLT_cg_turretKillCamBackDist);
  DVARFLT_cg_turretKillCamFov = Dvar_Deregister(DVARFLT_cg_turretKillCamFov);
  DVARFLT_cg_turretRemoteKillCamUpDist = Dvar_Deregister(DVARFLT_cg_turretRemoteKillCamUpDist);
  DVARFLT_cg_turretRemoteKillCamBackDist = Dvar_Deregister(DVARFLT_cg_turretRemoteKillCamBackDist);
  DVARFLT_cg_turretRemoteKillCamFov = Dvar_Deregister(DVARFLT_cg_turretRemoteKillCamFov);
  DVARFLT_cg_javelinKillCamCloseZDist = Dvar_Deregister(DVARFLT_cg_javelinKillCamCloseZDist);
  DVARFLT_cg_javelinKillCamPassTime = Dvar_Deregister(DVARFLT_cg_javelinKillCamPassTime);
  DVARFLT_cg_javelinKillCamFov = Dvar_Deregister(DVARFLT_cg_javelinKillCamFov);
  DVARFLT_cg_javelinKillCamPassDist = Dvar_Deregister(DVARFLT_cg_javelinKillCamPassDist);
  DVARFLT_cg_javelinKillCamUpDist = Dvar_Deregister(DVARFLT_cg_javelinKillCamUpDist);
  DVARFLT_cg_javelinKillCamDownDist = Dvar_Deregister(DVARFLT_cg_javelinKillCamDownDist);
  DVARFLT_cg_javelinKillCamLookLerpDist = Dvar_Deregister(DVARFLT_cg_javelinKillCamLookLerpDist);
  DVARFLT_cg_javelinKillCamPitchDownBlendFinish = Dvar_Deregister(DVARFLT_cg_javelinKillCamPitchDownBlendFinish);
  DVARFLT_cg_killcamOffsetBlendSpeed = Dvar_Deregister(DVARFLT_cg_killcamOffsetBlendSpeed);
  DVARFLT_cg_killcamOffsetBlendDelayTime = Dvar_Deregister(DVARFLT_cg_killcamOffsetBlendDelayTime);
  DVARFLT_cg_killcamEntityLookAtOffset = Dvar_Deregister(DVARFLT_cg_killcamEntityLookAtOffset);
  DVARINT_cg_throwingAxeKillCamEntIgnoreTime = Dvar_Deregister(DVARINT_cg_throwingAxeKillCamEntIgnoreTime);
  DVARBOOL_compassPrototypeElevation = Dvar_Deregister(DVARBOOL_compassPrototypeElevation);
  DVARBOOL_compassPrototypeFiring = Dvar_Deregister(DVARBOOL_compassPrototypeFiring);
  DVARFLT_compassTacmapMiniIconZoomPOI = Dvar_Deregister(DVARFLT_compassTacmapMiniIconZoomPOI);
  DVARFLT_compassTacmapMiniIconZoomMission = Dvar_Deregister(DVARFLT_compassTacmapMiniIconZoomMission);
  DVARFLT_compassTacmapMiniIconZoomVehicle = Dvar_Deregister(DVARFLT_compassTacmapMiniIconZoomVehicle);
  DVARFLT_compassTacmapFilterZoomPOI = Dvar_Deregister(DVARFLT_compassTacmapFilterZoomPOI);
  DVARFLT_compassTacmapFilterZoomMission = Dvar_Deregister(DVARFLT_compassTacmapFilterZoomMission);
  DVARFLT_compassTacmapFilterZoomVehicle = Dvar_Deregister(DVARFLT_compassTacmapFilterZoomVehicle);
  DVARBOOL_compassTacmapFilterVehicle = Dvar_Deregister(DVARBOOL_compassTacmapFilterVehicle);
  DVARBOOL_compassTacmapFilterObjective = Dvar_Deregister(DVARBOOL_compassTacmapFilterObjective);
  DVARBOOL_compassTacmapFilterPOI = Dvar_Deregister(DVARBOOL_compassTacmapFilterPOI);
  DVARBOOL_compassTacmapFilterObjectiveIfActive = Dvar_Deregister(DVARBOOL_compassTacmapFilterObjectiveIfActive);
  DVARBOOL_compassScramblerDrawSquadColor = Dvar_Deregister(DVARBOOL_compassScramblerDrawSquadColor);
  DVARBOOL_compassScramblerDrawDottedBorder = Dvar_Deregister(DVARBOOL_compassScramblerDrawDottedBorder);
  DVARBOOL_compassScramblerDrawEnemyBorder = Dvar_Deregister(DVARBOOL_compassScramblerDrawEnemyBorder);
  DVARFLT_compassEnemyFootstepMaxRange = Dvar_Deregister(DVARFLT_compassEnemyFootstepMaxRange);
  DVARFLT_compassEnemyFootstepMaxZ = Dvar_Deregister(DVARFLT_compassEnemyFootstepMaxZ);
  DVARFLT_compassEnemyFootstepMinSpeed = Dvar_Deregister(DVARFLT_compassEnemyFootstepMinSpeed);
  DVARFLT_cg_hudMapRadarLineThickness = Dvar_Deregister(DVARFLT_cg_hudMapRadarLineThickness);
  DCONST_DVARFLT_compassPlayerGhostFade = Dvar_Deregister(DCONST_DVARFLT_compassPlayerGhostFade);
  DVARFLT_compassObjectiveIconBackgroundScalar = Dvar_Deregister(DVARFLT_compassObjectiveIconBackgroundScalar);
  DCONST_DVARINT_compassObjectivePopTime = Dvar_Deregister(DCONST_DVARINT_compassObjectivePopTime);
  DCONST_DVARFLT_compassObjectiveIconHeightAdjust = Dvar_Deregister(DCONST_DVARFLT_compassObjectiveIconHeightAdjust);
  DVARBOOL_compassUAVDrawOuterCircle = Dvar_Deregister(DVARBOOL_compassUAVDrawOuterCircle);
  DCONST_DVARFLT_compassCUAVRadius = Dvar_Deregister(DCONST_DVARFLT_compassCUAVRadius);
  DCONST_DVARFLT_compassCUAVGlitchAmount = Dvar_Deregister(DCONST_DVARFLT_compassCUAVGlitchAmount);
  DVARBOOL_compassCUAVDrawOuterCircle = Dvar_Deregister(DVARBOOL_compassCUAVDrawOuterCircle);
  DCONST_DVARFLT_compassScramblerRadius = Dvar_Deregister(DCONST_DVARFLT_compassScramblerRadius);
  DCONST_DVARFLT_compassEMPDroneRadius = Dvar_Deregister(DCONST_DVARFLT_compassEMPDroneRadius);
  DVARFLT_brCompassCUAVScramblerRadius = Dvar_Deregister(DVARFLT_brCompassCUAVScramblerRadius);
  DVARFLT_brCompassCUAVScramblerLocSelectSizeMultiplier = Dvar_Deregister(DVARFLT_brCompassCUAVScramblerLocSelectSizeMultiplier);
  DVARFLT_compassSelectorSizeBase = Dvar_Deregister(DVARFLT_compassSelectorSizeBase);
  DVARBOOL_compassDynamicSelectorSizeEnabled = Dvar_Deregister(DVARBOOL_compassDynamicSelectorSizeEnabled);
  DVARINT_minimapPlayerCirclePingDuration = Dvar_Deregister(DVARINT_minimapPlayerCirclePingDuration);
  DCONST_DVARINT_minimapPlayerCirclePinRepeatCount = Dvar_Deregister(DCONST_DVARINT_minimapPlayerCirclePinRepeatCount);
  DVARFLT_minimapPlayerCirclePingRadius = Dvar_Deregister(DVARFLT_minimapPlayerCirclePingRadius);
  DCONST_DVARFLT_compassObjectiveIconActiveMissionRGB = Dvar_Deregister(DCONST_DVARFLT_compassObjectiveIconActiveMissionRGB);
  DCONST_DVARFLT_compassObjectiveIconActiveMissionAlpha = Dvar_Deregister(DCONST_DVARFLT_compassObjectiveIconActiveMissionAlpha);
  DVARINT_cg_drawCrosshairNamesPosX = Dvar_Deregister(DVARINT_cg_drawCrosshairNamesPosX);
  DVARINT_cg_drawCrosshairNamesPosY = Dvar_Deregister(DVARINT_cg_drawCrosshairNamesPosY);
  DVARVEC2_cg_hudChatPosition = Dvar_Deregister(DVARVEC2_cg_hudChatPosition);
  DVARVEC2_cg_hudChatIntermissionPosition = Dvar_Deregister(DVARVEC2_cg_hudChatIntermissionPosition);
  DVARVEC2_cg_hudSayPosition = Dvar_Deregister(DVARVEC2_cg_hudSayPosition);
  DVARVEC2_cg_hudVotePosition = Dvar_Deregister(DVARVEC2_cg_hudVotePosition);
  DVARBOOL_cg_drawDisconnectPercentage = Dvar_Deregister(DVARBOOL_cg_drawDisconnectPercentage);
  DVARBOOL_drawEntityCount = Dvar_Deregister(DVARBOOL_drawEntityCount);
  DVARVEC2_drawEntityCountPos = Dvar_Deregister(DVARVEC2_drawEntityCountPos);
  DVARINT_drawEntityCountSize = Dvar_Deregister(DVARINT_drawEntityCountSize);
  DVARBOOL_drawServerBandwidth = Dvar_Deregister(DVARBOOL_drawServerBandwidth);
  DVARVEC2_drawServerBandwidthPos = Dvar_Deregister(DVARVEC2_drawServerBandwidthPos);
  DVARBOOL_drawKillcamData = Dvar_Deregister(DVARBOOL_drawKillcamData);
  DVARVEC2_drawKillcamDataPos = Dvar_Deregister(DVARVEC2_drawKillcamDataPos);
  DVARINT_drawKillcamDataSize = Dvar_Deregister(DVARINT_drawKillcamDataSize);
  DVARFLT_cg_packetAnalysisTextSize = Dvar_Deregister(DVARFLT_cg_packetAnalysisTextSize);
  DVARFLT_cg_packetAnalysisEntTextSize = Dvar_Deregister(DVARFLT_cg_packetAnalysisEntTextSize);
  DVARINT_cg_packetAnalysisTextY = Dvar_Deregister(DVARINT_cg_packetAnalysisTextY);
  DVARINT_cg_packetAnalysisEntTextY = Dvar_Deregister(DVARINT_cg_packetAnalysisEntTextY);
  DVARBOOL_cg_packetAnalysisAutoScale = Dvar_Deregister(DVARBOOL_cg_packetAnalysisAutoScale);
  DVARBOOL_cg_debugposition = Dvar_Deregister(DVARBOOL_cg_debugposition);
  DVARINT_cg_drawNetTiming = Dvar_Deregister(DVARINT_cg_drawNetTiming);
  DVARBOOL_cg_debugWeaponStreaming = Dvar_Deregister(DVARBOOL_cg_debugWeaponStreaming);
  DVARINT_cg_latencyTestMode = Dvar_Deregister(DVARINT_cg_latencyTestMode);
  DVARBOOL_cg_drawLatencyTest = Dvar_Deregister(DVARBOOL_cg_drawLatencyTest);
  DVARINT_cg_dropShotTestReactionTime = Dvar_Deregister(DVARINT_cg_dropShotTestReactionTime);
  DVARINT_cg_dropShotTestShootingDuration = Dvar_Deregister(DVARINT_cg_dropShotTestShootingDuration);
  DVARINT_cg_usercmdBursting = Dvar_Deregister(DVARINT_cg_usercmdBursting);
  DVARINT_cg_shootFirstTestReactionTime = Dvar_Deregister(DVARINT_cg_shootFirstTestReactionTime);
  DVARINT_cg_shootFirstTestShootingDuration = Dvar_Deregister(DVARINT_cg_shootFirstTestShootingDuration);
  DVARBOOL_cg_debugAntiLagShowPlayerServerSnap = Dvar_Deregister(DVARBOOL_cg_debugAntiLagShowPlayerServerSnap);
  DVARBOOL_cg_debugAntiLagDrawMetrics = Dvar_Deregister(DVARBOOL_cg_debugAntiLagDrawMetrics);
  DVARINT_cg_chatTime = Dvar_Deregister(DVARINT_cg_chatTime);
  DVARINT_cg_chatHeight = Dvar_Deregister(DVARINT_cg_chatHeight);
  DVARBOOL_cg_teamChatsOnly = Dvar_Deregister(DVARBOOL_cg_teamChatsOnly);
  DVARINT_cg_hearKillerTime = Dvar_Deregister(DVARINT_cg_hearKillerTime);
  DVARBOOL_cg_hearVictimEnabled = Dvar_Deregister(DVARBOOL_cg_hearVictimEnabled);
  DVARINT_cg_hearVictimTime = Dvar_Deregister(DVARINT_cg_hearVictimTime);
  DVARINT_cg_killCamDefaultLerpTime = Dvar_Deregister(DVARINT_cg_killCamDefaultLerpTime);
  DVARINT_cg_killCamTurretLerpTime = Dvar_Deregister(DVARINT_cg_killCamTurretLerpTime);
  DVARFLT_cg_overheadNamesMaxDist = Dvar_Deregister(DVARFLT_cg_overheadNamesMaxDist);
  DVARBOOL_cg_drawFriendlyNames = Dvar_Deregister(DVARBOOL_cg_drawFriendlyNames);
  DVARINT_cg_enemyNameFadeIn = Dvar_Deregister(DVARINT_cg_enemyNameFadeIn);
  DVARINT_cg_enemyNameFadeOut = Dvar_Deregister(DVARINT_cg_enemyNameFadeOut);
  DVARINT_cg_friendlyNameFadeIn = Dvar_Deregister(DVARINT_cg_friendlyNameFadeIn);
  DVARINT_cg_friendlyNameFadeOut = Dvar_Deregister(DVARINT_cg_friendlyNameFadeOut);
  DVARBOOL_cg_drawThroughWalls = Dvar_Deregister(DVARBOOL_cg_drawThroughWalls);
  DVARINT_cg_flashbangNameFadeIn = Dvar_Deregister(DVARINT_cg_flashbangNameFadeIn);
  DVARINT_cg_flashbangNameFadeOut = Dvar_Deregister(DVARINT_cg_flashbangNameFadeOut);
  DVARSTR_thermal_playerModel = Dvar_Deregister(DVARSTR_thermal_playerModel);
  DVARBOOL_useRelativeTeamColors = Dvar_Deregister(DVARBOOL_useRelativeTeamColors);
  DVARINT_cg_weaponVisInterval = Dvar_Deregister(DVARINT_cg_weaponVisInterval);
  DVARCLR_cg_TeamColor_Allies = Dvar_Deregister(DVARCLR_cg_TeamColor_Allies);
  DVARCLR_cg_TeamColor_Axis = Dvar_Deregister(DVARCLR_cg_TeamColor_Axis);
  DVARCLR_cg_TeamColor_MyTeam = Dvar_Deregister(DVARCLR_cg_TeamColor_MyTeam);
  DVARCLR_cg_TeamColor_MyParty = Dvar_Deregister(DVARCLR_cg_TeamColor_MyParty);
  DVARCLR_cg_TeamColor_EnemyTeam = Dvar_Deregister(DVARCLR_cg_TeamColor_EnemyTeam);
  DVARCLR_cg_TeamColor_Spectator = Dvar_Deregister(DVARCLR_cg_TeamColor_Spectator);
  DVARCLR_cg_TeamColor_Free = Dvar_Deregister(DVARCLR_cg_TeamColor_Free);
  DVARCLR_cg_TeamColor_Team_Three = Dvar_Deregister(DVARCLR_cg_TeamColor_Team_Three);
  DVARCLR_cg_TeamColor_Team_Four = Dvar_Deregister(DVARCLR_cg_TeamColor_Team_Four);
  DVARCLR_cg_TeamColor_Team_Five = Dvar_Deregister(DVARCLR_cg_TeamColor_Team_Five);
  DVARCLR_cg_TeamColor_Team_Six = Dvar_Deregister(DVARCLR_cg_TeamColor_Team_Six);
  DVARINT_cg_drawDebugRootMotion = Dvar_Deregister(DVARINT_cg_drawDebugRootMotion);
  DVARBOOL_cg_mlg_static_cameras = Dvar_Deregister(DVARBOOL_cg_mlg_static_cameras);
  DCONST_DVARBOOL_cg_debugFireAnimStabilizer = Dvar_Deregister(DCONST_DVARBOOL_cg_debugFireAnimStabilizer);
  DCONST_DVARFLT_deltaTimeMaxCorrectionDisplacement = Dvar_Deregister(DCONST_DVARFLT_deltaTimeMaxCorrectionDisplacement);
  DCONST_DVARFLT_deltaTimeMinCorrectionDisplacement = Dvar_Deregister(DCONST_DVARFLT_deltaTimeMinCorrectionDisplacement);
  DCONST_DVARFLT_deltaTimeMaxCorrectionSpeed = Dvar_Deregister(DCONST_DVARFLT_deltaTimeMaxCorrectionSpeed);
  DCONST_DVARFLT_deltaTimeMinCorrectionSpeed = Dvar_Deregister(DCONST_DVARFLT_deltaTimeMinCorrectionSpeed);
  DCONST_DVARBOOL_deltaTimeAlwaysUseNewAlgorithm = Dvar_Deregister(DCONST_DVARBOOL_deltaTimeAlwaysUseNewAlgorithm);
  DCONST_DVARBOOL_cg_enablePlayerEntityWorkers = Dvar_Deregister(DCONST_DVARBOOL_cg_enablePlayerEntityWorkers);
  DCONST_DVARSTR_cg_brCircleFX = Dvar_Deregister(DCONST_DVARSTR_cg_brCircleFX);
  DCONST_DVARFLT_cg_brCircleZ = Dvar_Deregister(DCONST_DVARFLT_cg_brCircleZ);
  DCONST_DVARFLT_cg_brCircleBaseRadius = Dvar_Deregister(DCONST_DVARFLT_cg_brCircleBaseRadius);
  DCONST_DVARFLT_cg_brCircleEmissionCurveMaxRadius = Dvar_Deregister(DCONST_DVARFLT_cg_brCircleEmissionCurveMaxRadius);
  DCONST_DVARFLT_cg_brCircleEmissionCurveDebugValue = Dvar_Deregister(DCONST_DVARFLT_cg_brCircleEmissionCurveDebugValue);
  DCONST_DVARSTR_cg_brCircleLoopSound = Dvar_Deregister(DCONST_DVARSTR_cg_brCircleLoopSound);
  DCONST_DVARSTR_cg_brCircleTickSound = Dvar_Deregister(DCONST_DVARSTR_cg_brCircleTickSound);
  DCONST_DVARFLT_cg_brCircleProximityDistMin = Dvar_Deregister(DCONST_DVARFLT_cg_brCircleProximityDistMin);
  DCONST_DVARFLT_cg_brCircleProximityDistMax = Dvar_Deregister(DCONST_DVARFLT_cg_brCircleProximityDistMax);
  DCONST_DVARFLT_cg_brCircleProximityVolumeMin = Dvar_Deregister(DCONST_DVARFLT_cg_brCircleProximityVolumeMin);
  DCONST_DVARFLT_cg_brCircleProximityVolumeMax = Dvar_Deregister(DCONST_DVARFLT_cg_brCircleProximityVolumeMax);
  DCONST_DVARFLT_cg_brCircleLoopPitchMin = Dvar_Deregister(DCONST_DVARFLT_cg_brCircleLoopPitchMin);
  DCONST_DVARFLT_cg_brCircleLoopPitchMax = Dvar_Deregister(DCONST_DVARFLT_cg_brCircleLoopPitchMax);
  DCONST_DVARFLT_cg_brCircleTickIntervalMin = Dvar_Deregister(DCONST_DVARFLT_cg_brCircleTickIntervalMin);
  DCONST_DVARFLT_cg_brCircleTickIntervalMax = Dvar_Deregister(DCONST_DVARFLT_cg_brCircleTickIntervalMax);
  DCONST_DVARFLT_cg_brCircleTickPitchMin = Dvar_Deregister(DCONST_DVARFLT_cg_brCircleTickPitchMin);
  DCONST_DVARFLT_cg_brCircleTickPitchMax = Dvar_Deregister(DCONST_DVARFLT_cg_brCircleTickPitchMax);
  DCONST_DVARFLT_cg_brCircleFogBlendInTime = Dvar_Deregister(DCONST_DVARFLT_cg_brCircleFogBlendInTime);
  DCONST_DVARFLT_cg_brCircleFogHeight = Dvar_Deregister(DCONST_DVARFLT_cg_brCircleFogHeight);
  DCONST_DVARFLT_cg_brCircleFogInset = Dvar_Deregister(DCONST_DVARFLT_cg_brCircleFogInset);
  DCONST_DVARFLT_cg_brCircleFogOuterColorDistance = Dvar_Deregister(DCONST_DVARFLT_cg_brCircleFogOuterColorDistance);
  DCONST_DVARVEC2_cg_brCircleVolumetricFogParams = Dvar_Deregister(DCONST_DVARVEC2_cg_brCircleVolumetricFogParams);
  DVARVEC3_cg_brCircleVolumetricFogInnerColor = Dvar_Deregister(DVARVEC3_cg_brCircleVolumetricFogInnerColor);
  DVARVEC3_cg_brCircleVolumetricFogOuterColor = Dvar_Deregister(DVARVEC3_cg_brCircleVolumetricFogOuterColor);
  DCONST_DVARVEC3_cg_brCircleDistanceFogParams = Dvar_Deregister(DCONST_DVARVEC3_cg_brCircleDistanceFogParams);
  DVARVEC3_cg_brCircleDistanceFogInnerColor = Dvar_Deregister(DVARVEC3_cg_brCircleDistanceFogInnerColor);
  DVARVEC3_cg_brCircleDistanceFogOuterColor = Dvar_Deregister(DVARVEC3_cg_brCircleDistanceFogOuterColor);
  DVARVEC4_cg_brCirclePerceptualTint = Dvar_Deregister(DVARVEC4_cg_brCirclePerceptualTint);
  DCONST_DVARVEC2_cg_brCircleHeightFalloff = Dvar_Deregister(DCONST_DVARVEC2_cg_brCircleHeightFalloff);
  DCONST_DVARFLT_cg_brCircleSkyDistanceMultiplier = Dvar_Deregister(DCONST_DVARFLT_cg_brCircleSkyDistanceMultiplier);
  DCONST_DVARVEC2_cg_brCircleDistanceFogBlend = Dvar_Deregister(DCONST_DVARVEC2_cg_brCircleDistanceFogBlend);
  DCONST_DVARFLT_cg_brCircleDistanceHeightBlend = Dvar_Deregister(DCONST_DVARFLT_cg_brCircleDistanceHeightBlend);
  DCONST_DVARFLT_cg_brCircleDistanceHeightViewBlend = Dvar_Deregister(DCONST_DVARFLT_cg_brCircleDistanceHeightViewBlend);
  DCONST_DVARFLT_cg_brCircleDistanceHeightBlendStart = Dvar_Deregister(DCONST_DVARFLT_cg_brCircleDistanceHeightBlendStart);
  DCONST_DVARFLT_cg_brCircleFogDensityScale = Dvar_Deregister(DCONST_DVARFLT_cg_brCircleFogDensityScale);
  DCONST_DVARFLT_cg_brCircleFogDensityBias = Dvar_Deregister(DCONST_DVARFLT_cg_brCircleFogDensityBias);
  DCONST_DVARFLT_cg_brCircleFogDensityNoiseScale = Dvar_Deregister(DCONST_DVARFLT_cg_brCircleFogDensityNoiseScale);
  DCONST_DVARFLT_cg_brCircleFogDensityNoiseBias = Dvar_Deregister(DCONST_DVARFLT_cg_brCircleFogDensityNoiseBias);
  DCONST_DVARVEC2_cg_brCircleFogDensityTiling = Dvar_Deregister(DCONST_DVARVEC2_cg_brCircleFogDensityTiling);
  DCONST_DVARVEC2_cg_brCircleFogDensityScrollingSpeed = Dvar_Deregister(DCONST_DVARVEC2_cg_brCircleFogDensityScrollingSpeed);
  DCONST_DVARBOOL_cg_customization_devVerbose = Dvar_Deregister(DCONST_DVARBOOL_cg_customization_devVerbose);
  DCONST_DVARBOOL_cg_enableDetachableClientCorpses = Dvar_Deregister(DCONST_DVARBOOL_cg_enableDetachableClientCorpses);
  DCONST_DVARBOOL_cg_clientCorpse_devVerbose = Dvar_Deregister(DCONST_DVARBOOL_cg_clientCorpse_devVerbose);
  DCONST_DVARBOOL_cg_clientCorpse_debugDisplay = Dvar_Deregister(DCONST_DVARBOOL_cg_clientCorpse_debugDisplay);
  DCONST_DVARINT_cg_corpseFreshTimeout = Dvar_Deregister(DCONST_DVARINT_cg_corpseFreshTimeout);
  DCONST_DVARBOOL_cg_customizationStreamingEnabled = Dvar_Deregister(DCONST_DVARBOOL_cg_customizationStreamingEnabled);
  DCONST_DVARBOOL_cg_weaponStreamingEnabled = Dvar_Deregister(DCONST_DVARBOOL_cg_weaponStreamingEnabled);
  DCONST_DVARINT_cg_streamingMaxTeamSizeForBoostedTeammatePrioritization = Dvar_Deregister(DCONST_DVARINT_cg_streamingMaxTeamSizeForBoostedTeammatePrioritization);
  DCONST_DVARFLT_cg_streamingMaxDistanceForNearWorldModelPrioritization = Dvar_Deregister(DCONST_DVARFLT_cg_streamingMaxDistanceForNearWorldModelPrioritization);
  DCONST_DVARFLT_cg_streamingMinDistanceForFarWorldModelPrioritization = Dvar_Deregister(DCONST_DVARFLT_cg_streamingMinDistanceForFarWorldModelPrioritization);
  DCONST_DVARFLT_cg_streamingMinVelocityDeprioritizeCommonMPTransients = Dvar_Deregister(DCONST_DVARFLT_cg_streamingMinVelocityDeprioritizeCommonMPTransients);
  DCONST_DVARBOOL_cg_devLoadWeaponAttachmentIcons = Dvar_Deregister(DCONST_DVARBOOL_cg_devLoadWeaponAttachmentIcons);
  DCONST_DVARBOOL_cg_skipStreamedModelValidation = Dvar_Deregister(DCONST_DVARBOOL_cg_skipStreamedModelValidation);
  DCONST_DVARBOOL_cg_customizationMP_devNoLatch = Dvar_Deregister(DCONST_DVARBOOL_cg_customizationMP_devNoLatch);
  DCONST_DVARFLT_cg_customizationMP_latchMaxDistance = Dvar_Deregister(DCONST_DVARFLT_cg_customizationMP_latchMaxDistance);
  DCONST_DVARFLT_cg_highPriorityCorpseDistanceSqMultiplier = Dvar_Deregister(DCONST_DVARFLT_cg_highPriorityCorpseDistanceSqMultiplier);
  DCONST_DVARBOOL_cg_prefetchPlayercards = Dvar_Deregister(DCONST_DVARBOOL_cg_prefetchPlayercards);
  DCONST_DVARFLT_cg_imageHintDistancePlayerCards = Dvar_Deregister(DCONST_DVARFLT_cg_imageHintDistancePlayerCards);
  DCONST_DVARFLT_cg_imageHintDistancePlayerCardsLow = Dvar_Deregister(DCONST_DVARFLT_cg_imageHintDistancePlayerCardsLow);
  DCONST_DVARFLT_cg_imageHintDistanceWeaponAttachmentIcons = Dvar_Deregister(DCONST_DVARFLT_cg_imageHintDistanceWeaponAttachmentIcons);
  DCONST_DVARFLT_cg_imageHintDistanceWeaponAttachmentIconsLow = Dvar_Deregister(DCONST_DVARFLT_cg_imageHintDistanceWeaponAttachmentIconsLow);
  DCONST_DVARINT_cg_forceCustomizationHead = Dvar_Deregister(DCONST_DVARINT_cg_forceCustomizationHead);
  DCONST_DVARINT_cg_forceCustomizationBody = Dvar_Deregister(DCONST_DVARINT_cg_forceCustomizationBody);
  DCONST_DVARINT_cg_forceCustomizationViewhands = Dvar_Deregister(DCONST_DVARINT_cg_forceCustomizationViewhands);
  DVARFLT_cg_enemyNameplateAngle = Dvar_Deregister(DVARFLT_cg_enemyNameplateAngle);
  DVARFLT_cg_enemyNameplateDistance = Dvar_Deregister(DVARFLT_cg_enemyNameplateDistance);
  DVARFLT_cg_friendlyNameplateAngle = Dvar_Deregister(DVARFLT_cg_friendlyNameplateAngle);
  DVARFLT_cg_friendlyNameplateDistance = Dvar_Deregister(DVARFLT_cg_friendlyNameplateDistance);
  DVARBOOL_cg_friendlyNameplateSnapToEdge = Dvar_Deregister(DVARBOOL_cg_friendlyNameplateSnapToEdge);
  DVARBOOL_cg_friendlyReviveNameplateEnabled = Dvar_Deregister(DVARBOOL_cg_friendlyReviveNameplateEnabled);
  DVARBOOL_cg_playerNameplatesFastTrace = Dvar_Deregister(DVARBOOL_cg_playerNameplatesFastTrace);
  DVARBOOL_cg_playerNameplatesFastPosition = Dvar_Deregister(DVARBOOL_cg_playerNameplatesFastPosition);
  DVARFLT_cg_playerNameplatesFastFalloff = Dvar_Deregister(DVARFLT_cg_playerNameplatesFastFalloff);
  DVARFLT_cg_playerNameplatesFastTraceRootXOffset = Dvar_Deregister(DVARFLT_cg_playerNameplatesFastTraceRootXOffset);
  DCONST_DVARFLT_cg_playerNameplatesTextOutlineStrokeWidth = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesTextOutlineStrokeWidth);
  DVARINT_cg_nameplateSettingOverride = Dvar_Deregister(DVARINT_cg_nameplateSettingOverride);
  DVARINT_cg_nameplateEnemyVisibleTimeout = Dvar_Deregister(DVARINT_cg_nameplateEnemyVisibleTimeout);
  DCONST_DVARVEC4_cg_playerNameplatesFriendlyColor = Dvar_Deregister(DCONST_DVARVEC4_cg_playerNameplatesFriendlyColor);
  DCONST_DVARVEC4_cg_playerNameplatesEnemyColor = Dvar_Deregister(DCONST_DVARVEC4_cg_playerNameplatesEnemyColor);
  DCONST_DVARVEC4_cg_playerNameplatesTextOutlineColor = Dvar_Deregister(DCONST_DVARVEC4_cg_playerNameplatesTextOutlineColor);
  DCONST_DVARVEC4_cg_playerNameplatesBountyIconColor = Dvar_Deregister(DCONST_DVARVEC4_cg_playerNameplatesBountyIconColor);
  DCONST_DVARVEC4_cg_playerNameplatesDeuteranopiaFriendlyColor = Dvar_Deregister(DCONST_DVARVEC4_cg_playerNameplatesDeuteranopiaFriendlyColor);
  DCONST_DVARVEC4_cg_playerNameplatesDeuteranopiaEnemyColor = Dvar_Deregister(DCONST_DVARVEC4_cg_playerNameplatesDeuteranopiaEnemyColor);
  DCONST_DVARFLT_cg_playerNameplatesNameOffsetX = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesNameOffsetX);
  DCONST_DVARFLT_cg_playerNameplatesNameOffsetY = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesNameOffsetY);
  DCONST_DVARFLT_cg_playerNameplatesNameWrapWidth = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesNameWrapWidth);
  DCONST_DVARFLT_cg_playerNameplatesNameFontHeight = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesNameFontHeight);
  DCONST_DVARFLT_cg_playerNameplatesNameTextWidth = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesNameTextWidth);
  DCONST_DVARFLT_cg_playerNameplatesReviveNameOffsetX = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesReviveNameOffsetX);
  DCONST_DVARFLT_cg_playerNameplatesReviveNameOffsetY = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesReviveNameOffsetY);
  DCONST_DVARFLT_cg_playerNameplatesReviveNameFontHeight = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesReviveNameFontHeight);
  DCONST_DVARFLT_cg_playerNameplatesReviveNameTextWidth = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesReviveNameTextWidth);
  DCONST_DVARFLT_cg_playerNameplatesRankOffsetX = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesRankOffsetX);
  DCONST_DVARFLT_cg_playerNameplatesRankOffsetY = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesRankOffsetY);
  DCONST_DVARFLT_cg_playerNameplatesRankWrapWidth = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesRankWrapWidth);
  DCONST_DVARFLT_cg_playerNameplatesRankFontHeight = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesRankFontHeight);
  DCONST_DVARFLT_cg_playerNameplatesPerkOffsetX = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesPerkOffsetX);
  DCONST_DVARFLT_cg_playerNameplatesPerkOffsetY = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesPerkOffsetY);
  DCONST_DVARFLT_cg_playerNameplatesPerkWidth = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesPerkWidth);
  DCONST_DVARFLT_cg_playerNameplatesPerkHeight = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesPerkHeight);
  DCONST_DVARFLT_cg_playerNameplatesBountyOffsetX = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesBountyOffsetX);
  DCONST_DVARFLT_cg_playerNameplatesBountyOffsetY = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesBountyOffsetY);
  DCONST_DVARFLT_cg_playerNameplatesBountyWidth = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesBountyWidth);
  DCONST_DVARFLT_cg_playerNameplatesBountyHeight = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesBountyHeight);
  DCONST_DVARFLT_cg_playerNameplatesDistanceOffsetY = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesDistanceOffsetY);
  DCONST_DVARFLT_cg_playerNameplatesDistanceOffsetX = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesDistanceOffsetX);
  DCONST_DVARFLT_cg_playerNameplatesChevronOffsetX = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesChevronOffsetX);
  DCONST_DVARFLT_cg_playerNameplatesChevronOffsetY = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesChevronOffsetY);
  DCONST_DVARFLT_cg_playerNameplatesChevronWidth = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesChevronWidth);
  DCONST_DVARFLT_cg_playerNameplatesChevronHeight = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesChevronHeight);
  DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetLeft = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetLeft);
  DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetRight = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetRight);
  DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetTop = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetTop);
  DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetBottom = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetBottom);
  DCONST_DVARINT_cg_playerNameplatesFadeoutTime = Dvar_Deregister(DCONST_DVARINT_cg_playerNameplatesFadeoutTime);
  DVARBOOL_cg_playerNameplateOverlapCullingEnabled = Dvar_Deregister(DVARBOOL_cg_playerNameplateOverlapCullingEnabled);
  DCONST_DVARFLT_cg_playerNameplateOverlapCullingWidth = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplateOverlapCullingWidth);
  DCONST_DVARFLT_cg_playerNameplateViewHeightOffset = Dvar_Deregister(DCONST_DVARFLT_cg_playerNameplateViewHeightOffset);
  DCONST_DVARINT_cg_playerNameplateStateChangeDuration = Dvar_Deregister(DCONST_DVARINT_cg_playerNameplateStateChangeDuration);
  DCONST_DVARBOOL_collAvoid_debug = Dvar_Deregister(DCONST_DVARBOOL_collAvoid_debug);
  DCONST_DVARINT_collAvoid_avoidType = Dvar_Deregister(DCONST_DVARINT_collAvoid_avoidType);
  DCONST_DVARFLT_collAvoid_linearAccel = Dvar_Deregister(DCONST_DVARFLT_collAvoid_linearAccel);
  DCONST_DVARFLT_collAvoid_linearMinSpeed = Dvar_Deregister(DCONST_DVARFLT_collAvoid_linearMinSpeed);
  DCONST_DVARFLT_collAvoid_linearNearlyStoppedSpeed = Dvar_Deregister(DCONST_DVARFLT_collAvoid_linearNearlyStoppedSpeed);
  DCONST_DVARFLT_collAvoid_additionalAvoidDistance = Dvar_Deregister(DCONST_DVARFLT_collAvoid_additionalAvoidDistance);
  DVARFLT_heli_barrelRotation = Dvar_Deregister(DVARFLT_heli_barrelRotation);
  DVARFLT_heli_barrelMaxVelocity = Dvar_Deregister(DVARFLT_heli_barrelMaxVelocity);
  DVARFLT_heli_barrelSlowdown = Dvar_Deregister(DVARFLT_heli_barrelSlowdown);
  DCONST_DVARFLT_heli_audioPriorityCullDistance = Dvar_Deregister(DCONST_DVARFLT_heli_audioPriorityCullDistance);
  DCONST_DVARINT_heli_audioPriorityCount = Dvar_Deregister(DCONST_DVARINT_heli_audioPriorityCount);
  DVARBOOL_cg_anticheat_dataCollectionEnabled = Dvar_Deregister(DVARBOOL_cg_anticheat_dataCollectionEnabled);
  DCONST_DVARBOOL_cg_anticheat_debugDrawTargetThroughWalls = Dvar_Deregister(DCONST_DVARBOOL_cg_anticheat_debugDrawTargetThroughWalls);
  DCONST_DVARBOOL_cg_player_visibility_test_active = Dvar_Deregister(DCONST_DVARBOOL_cg_player_visibility_test_active);
  DCONST_DVARBOOL_cg_player_visibility_test_getResultWithWait = Dvar_Deregister(DCONST_DVARBOOL_cg_player_visibility_test_getResultWithWait);
  DCONST_DVARFLT_cg_player_visibility_test_worldspacePadding = Dvar_Deregister(DCONST_DVARFLT_cg_player_visibility_test_worldspacePadding);
  DCONST_DVARFLT_cg_player_visibility_test_extendedPitchAngle = Dvar_Deregister(DCONST_DVARFLT_cg_player_visibility_test_extendedPitchAngle);
  DCONST_DVARFLT_cg_player_visibility_test_extendedYawAngle = Dvar_Deregister(DCONST_DVARFLT_cg_player_visibility_test_extendedYawAngle);
}

/*
==============
CG_MainMP_DeRegisterReplicatedDvars
==============
*/
void CG_MainMP_DeRegisterReplicatedDvars(void)
{
  DVARBOOL_cg_drawFriendlyNamesAlways = Dvar_Deregister(DVARBOOL_cg_drawFriendlyNamesAlways);
  DVARBOOL_cg_drawFriendlyHUDGrenades = Dvar_Deregister(DVARBOOL_cg_drawFriendlyHUDGrenades);
  DVARBOOL_cg_deadChatWithTeam = Dvar_Deregister(DVARBOOL_cg_deadChatWithTeam);
  DVARBOOL_cg_deadHearTeamLiving = Dvar_Deregister(DVARBOOL_cg_deadHearTeamLiving);
  DVARBOOL_cg_deadHearAllLiving = Dvar_Deregister(DVARBOOL_cg_deadHearAllLiving);
  DVARBOOL_cg_deadChatWithDead = Dvar_Deregister(DVARBOOL_cg_deadChatWithDead);
  DVARBOOL_cg_everyoneHearsEveryone = Dvar_Deregister(DVARBOOL_cg_everyoneHearsEveryone);
  DVARSTR_cg_objectiveText = Dvar_Deregister(DVARSTR_cg_objectiveText);
  DVARINT_ui_customGameModeSlot = Dvar_Deregister(DVARINT_ui_customGameModeSlot);
  DVARBOOL_cg_playersmp_CoarseCullSystem_Enable = Dvar_Deregister(DVARBOOL_cg_playersmp_CoarseCullSystem_Enable);
  DVARFLT_cg_playersmp_CoarseCullSystem_SunShadowDist = Dvar_Deregister(DVARFLT_cg_playersmp_CoarseCullSystem_SunShadowDist);
  DVARFLT_playerCullDistHip = Dvar_Deregister(DVARFLT_playerCullDistHip);
  DVARFLT_playerCullDistMaxZoom = Dvar_Deregister(DVARFLT_playerCullDistMaxZoom);
  DVARBOOL_playerCulledDebugOverlay = Dvar_Deregister(DVARBOOL_playerCulledDebugOverlay);
  DVARBOOL_voice_proximity_team = Dvar_Deregister(DVARBOOL_voice_proximity_team);
  DVARBOOL_voice_proximity_enemy = Dvar_Deregister(DVARBOOL_voice_proximity_enemy);
  DVARINT_voice_proximity_radius = Dvar_Deregister(DVARINT_voice_proximity_radius);
  DVARFLT_cg_fov = Dvar_Deregister(DVARFLT_cg_fov);
  DVARFLT_cg_fov1 = Dvar_Deregister(DVARFLT_cg_fov1);
  DVARFLT_cg_fovScale = Dvar_Deregister(DVARFLT_cg_fovScale);
  DVARBOOL_cg_drawCrosshair = Dvar_Deregister(DVARBOOL_cg_drawCrosshair);
  DVARBOOL_cg_drawCrosshairNames = Dvar_Deregister(DVARBOOL_cg_drawCrosshairNames);
  DVARBOOL_cg_drawCrosshairWhileSprinting = Dvar_Deregister(DVARBOOL_cg_drawCrosshairWhileSprinting);
  DVARFLT_compassMaxRange = Dvar_Deregister(DVARFLT_compassMaxRange);
  DVARFLT_compassExpandedMaxRange = Dvar_Deregister(DVARFLT_compassExpandedMaxRange);
  DVARFLT_compassExpandedMaxRangeBR = Dvar_Deregister(DVARFLT_compassExpandedMaxRangeBR);
  DVARVEC3_cg_defaultWindDir = Dvar_Deregister(DVARVEC3_cg_defaultWindDir);
  DVARFLT_cg_defaultWindStrength = Dvar_Deregister(DVARFLT_cg_defaultWindStrength);
  DVARFLT_cg_defaultWindAreaScale = Dvar_Deregister(DVARFLT_cg_defaultWindAreaScale);
  DVARFLT_cg_defaultWindAmplitudeScale = Dvar_Deregister(DVARFLT_cg_defaultWindAmplitudeScale);
  DVARFLT_cg_defaultWindFrequencyScale = Dvar_Deregister(DVARFLT_cg_defaultWindFrequencyScale);
  DVARFLT_cg_defaultWindNoiseScale = Dvar_Deregister(DVARFLT_cg_defaultWindNoiseScale);
  DVARBOOL_ATClient_RemoteDebug = Dvar_Deregister(DVARBOOL_ATClient_RemoteDebug);
}

/*
==============
CG_MainMP_Frame
==============
*/
void CG_MainMP_Frame(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  int splashStartTime; 
  int v4; 
  int v5; 
  int v6; 
  __int64 v7; 
  __int64 v9; 
  int v10; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v10 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v10) )
      __debugbreak();
  }
  if ( clientUIActives[v1].connectionState >= CA_PRIMED )
  {
    if ( !Com_FrontEnd_IsInFrontEnd() )
    {
      CG_MainMP_CheckForLocalClientGamertagMismatch((LocalClientNum_t)v1);
      if ( !CL_Pause_IsGamePaused() && !CL_Demo_IsPlayingServer((LocalClientNum_t)v1) && CG_EditablePlayerData_IsDirty((const LocalClientNum_t)v1) )
        CG_EditablePlayerData_SendPlayerDataDeltas((const LocalClientNum_t)v1);
    }
    if ( (unsigned int)v1 >= 2 )
    {
      LODWORD(v9) = 2;
      LODWORD(v7) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1193, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v9) )
        __debugbreak();
    }
    if ( (int)v1 < cg_t::ms_allocatedCount )
    {
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
      splashStartTime = LocalClientGlobals->splashes[0].splashStartTime;
      if ( splashStartTime && splashStartTime + LocalClientGlobals->splashes[0].splashDuration < LocalClientGlobals->time )
        LocalClientGlobals->splashes[0].splashStartTime = 0;
      v4 = LocalClientGlobals->splashes[1].splashStartTime;
      if ( v4 && LocalClientGlobals->splashes[1].splashDuration + v4 < LocalClientGlobals->time )
        LocalClientGlobals->splashes[1].splashStartTime = 0;
      v5 = LocalClientGlobals->splashes[2].splashStartTime;
      if ( v5 && LocalClientGlobals->splashes[2].splashDuration + v5 < LocalClientGlobals->time )
        LocalClientGlobals->splashes[2].splashStartTime = 0;
      v6 = LocalClientGlobals->splashes[3].splashStartTime;
      if ( v6 )
      {
        if ( LocalClientGlobals->splashes[3].splashDuration + v6 < LocalClientGlobals->time )
          LocalClientGlobals->splashes[3].splashStartTime = 0;
      }
    }
  }
}

/*
==============
CG_MainMP_FreeAnimTreeInstances
==============
*/
void CG_MainMP_FreeAnimTreeInstances(LocalClientNum_t localClientNum)
{
  CgStatic *LocalClientStatics; 
  int maxClients; 
  CgStatic *v3; 
  int i; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *CharacterInfo; 
  XAnimTree *pXAnimTree; 
  cg_t *v8; 
  characterInfo_t *v9; 
  XAnimTree *v10; 
  cgs_t *LocalClientStaticGlobals; 
  int v12; 
  XAnimTree **j; 
  int v14; 
  XAnimTree **k; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 

  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  maxClients = cls.maxClients;
  v3 = LocalClientStatics;
  for ( i = 0; i < cls.maxClients; ++i )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3->m_localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
    {
      if ( i >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
      {
        LODWORD(v17) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
        LODWORD(v16) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      CharacterInfo = (characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * i);
    }
    else
    {
      CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, i);
    }
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1286, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
      __debugbreak();
    pXAnimTree = CharacterInfo->pXAnimTree;
    if ( pXAnimTree )
    {
      XAnimFreeTree(pXAnimTree, NULL);
      CharacterInfo->pXAnimTree = NULL;
    }
    maxClients = cls.maxClients;
  }
  while ( 1 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( maxClients >= (int)ComCharacterLimits::ms_gameData.m_characterCount )
      break;
    v8 = CG_GetLocalClientGlobals((const LocalClientNum_t)v3->m_localClientNum);
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( v8->IsMP(v8) )
    {
      if ( maxClients >= v8[1].predictedPlayerState.rxvOmnvars[64].timeModified )
      {
        LODWORD(v17) = v8[1].predictedPlayerState.rxvOmnvars[64].timeModified;
        LODWORD(v16) = maxClients;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      v9 = (characterInfo_t *)(*(_QWORD *)&v8[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * maxClients);
    }
    else
    {
      v9 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v8, maxClients);
    }
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1299, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
      __debugbreak();
    v10 = v9->pXAnimTree;
    if ( v10 )
    {
      Com_XAnimFreeSmallTree(v10);
      v9->pXAnimTree = NULL;
    }
    ++maxClients;
  }
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(localClientNum);
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_clientCorpseCount > 8 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1311, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetClientCorpseMaxCount() ) <= ( ( sizeof( *array_counter( cgs->corpseinfo ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetClientCorpseMaxCount()", "ARRAY_COUNT( cgs->corpseinfo )", ComCharacterLimits::ms_gameData.m_clientCorpseCount, 8) )
      __debugbreak();
  }
  v12 = 0;
  for ( j = &LocalClientStaticGlobals->corpseinfo[0].ci.pXAnimTree; ; j += 3363 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v12 >= (int)ComCharacterLimits::ms_gameData.m_clientCorpseCount )
      break;
    if ( *j )
    {
      XAnimFreeTree(*j, NULL);
      *j = NULL;
    }
    ++v12;
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_agentCorpseCount > 8 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v19) = 8;
    LODWORD(v18) = ComCharacterLimits::ms_gameData.m_agentCorpseCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1321, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetAgentCorpseMaxCount() ) <= ( ( sizeof( *array_counter( cgs->agentCorpseInfo ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetAgentCorpseMaxCount()", "ARRAY_COUNT( cgs->agentCorpseInfo )", v18, v19) )
      __debugbreak();
  }
  v14 = 0;
  for ( k = &LocalClientStaticGlobals->agentCorpseInfo[0].ci.pXAnimTree; ; k += 3363 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v14 >= (int)ComCharacterLimits::ms_gameData.m_agentCorpseCount )
      break;
    if ( *k )
    {
      Com_XAnimFreeSmallTree(*k);
      *k = NULL;
    }
    ++v14;
  }
}

/*
==============
CG_MainMP_FreeClientMemory
==============
*/
void CG_MainMP_FreeClientMemory(void)
{
  char v0; 
  int v1; 
  CgClientSideEffectsSystem **v2; 
  char v3; 
  int v4; 
  void **v5; 
  char v6; 
  int v7; 
  void **v8; 
  char v9; 
  int v10; 
  CgPredictedEntitySystem **v11; 
  char v12; 
  int v13; 
  void **v14; 
  char v15; 
  int v16; 
  void **v17; 
  char v18; 
  int v19; 
  void **v20; 
  char v21; 
  int v22; 
  void **v23; 
  char v24; 
  int v25; 
  void **v26; 
  char v27; 
  int v28; 
  void **v29; 
  char v30; 
  int v31; 
  void **v32; 
  char v33; 
  int v34; 
  void **v35; 
  CgWeaponsType v36; 
  int v37; 
  void **v38; 
  char v39; 
  bool v40; 
  int v41; 
  void **v42; 
  __int64 v43; 
  int v44; 
  __int64 v45; 
  int v46; 

  cg_maxLocalClients = 0;
  CG_ClientAntiCheatMP_FreeClientMemory();
  DynEnt_FreeClientMemory();
  CG_CustomizationStreamingMP_FreeMemory();
  CG_WeaponStreamingMP_FreeMemory();
  Scriptable_Bg_ShutdownClientEventStream();
  CG_GameInterface_OnShutdownGameMemory();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 394, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CINEMATIC_CAMERA ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_CINEMATIC_CAMERA )") )
    __debugbreak();
  CG_CinematicCamera_FreeClientMemory();
  CG_Glass_FreeMemory();
  AimAssist_FreeClientMemory();
  CG_FreeLocalClientEntities();
  CG_Main_ClearCgMedia();
  CG_PlayerCards_ShutdownMemory();
  CG_SnapshotMP_FreeSnapshots();
  CgPlayer_Asm::FreeMemory();
  v0 = CgClientSideEffectsSystem::ms_allocatedType;
  if ( !(_BYTE)CgClientSideEffectsSystem::ms_allocatedType )
  {
LABEL_9:
    if ( v0 != 2 )
      goto LABEL_16;
    goto LABEL_10;
  }
  if ( (_BYTE)CgClientSideEffectsSystem::ms_allocatedType != HALF_HALF )
  {
    v46 = (unsigned __int8)CgClientSideEffectsSystem::ms_allocatedType;
    v44 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 360, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE)", "%s\n\tTrying to free client-side effects system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE", v44, v46) )
      __debugbreak();
    v0 = CgClientSideEffectsSystem::ms_allocatedType;
    goto LABEL_9;
  }
LABEL_10:
  if ( CgClientSideEffectsSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 364, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgClientSideEffectsSystem::FreeClientSideEffectsSystemCommon: Trying to free single-player client-side effects system but no client-side effects system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v1 = CgClientSideEffectsSystem::ms_allocatedCount - 1;
  if ( CgClientSideEffectsSystem::ms_allocatedCount - 1 >= 0 )
  {
    v2 = &CgClientSideEffectsSystem::ms_cseSystemArray[v1];
    do
    {
      CgClientSideEffectsSystem::FreeMemory(*v2);
      ((void (__fastcall *)(CgClientSideEffectsSystem *, _QWORD))(*v2)->~CgClientSideEffectsSystem)(*v2, 0i64);
      DebugWipe(*v2, 0x138C0ui64);
      --v1;
      *v2-- = NULL;
    }
    while ( v1 >= 0 );
  }
LABEL_16:
  v3 = CgMissile::ms_allocatedType;
  CgClientSideEffectsSystem::ms_allocatedCount = 0;
  LOBYTE(CgClientSideEffectsSystem::ms_allocatedType) = 0;
  if ( !(_BYTE)CgMissile::ms_allocatedType )
    goto LABEL_21;
  if ( (_BYTE)CgMissile::ms_allocatedType != HALF_HALF )
  {
    LODWORD(v45) = (unsigned __int8)CgMissile::ms_allocatedType;
    LODWORD(v43) = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 323, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SYSTEM_TYPE)", "%s\n\tTrying to free missile system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SYSTEM_TYPE", v43, v45) )
      __debugbreak();
    v3 = CgMissile::ms_allocatedType;
LABEL_21:
    if ( v3 != 2 )
      goto LABEL_28;
  }
  if ( CgMissile::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 327, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgMissile::FreeSystemCommon: Trying to free missile system but no missile system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v4 = CgMissile::ms_allocatedCount - 1;
  if ( CgMissile::ms_allocatedCount - 1 >= 0 )
  {
    v5 = (void **)&CgMissile::ms_systemsArray[v4];
    do
    {
      (**(void (__fastcall ***)(void *, _QWORD))*v5)(*v5, 0i64);
      DebugWipe(*v5, 0x28ui64);
      --v4;
      *v5-- = NULL;
    }
    while ( v4 >= 0 );
  }
LABEL_28:
  v6 = CgBallistics::ms_allocatedType;
  CgMissile::ms_allocatedCount = 0;
  LOBYTE(CgMissile::ms_allocatedType) = 0;
  if ( !(_BYTE)CgBallistics::ms_allocatedType )
    goto LABEL_33;
  if ( (_BYTE)CgBallistics::ms_allocatedType != HALF_HALF )
  {
    LODWORD(v45) = (unsigned __int8)CgBallistics::ms_allocatedType;
    LODWORD(v43) = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.h", 215, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SYSTEM_TYPE)", "%s\n\tTrying to free ballistics system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SYSTEM_TYPE", v43, v45) )
      __debugbreak();
    v6 = CgBallistics::ms_allocatedType;
LABEL_33:
    if ( v6 != 2 )
      goto LABEL_40;
  }
  if ( CgBallistics::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.h", 219, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgBallistics::FreeSystemCommon: Trying to free ballistics system but no ballistics system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v7 = CgBallistics::ms_allocatedCount - 1;
  if ( CgBallistics::ms_allocatedCount - 1 >= 0 )
  {
    v8 = (void **)&CgBallistics::ms_systemsArray[v7];
    do
    {
      (**(void (__fastcall ***)(void *, _QWORD))*v8)(*v8, 0i64);
      DebugWipe(*v8, 0x45D68ui64);
      --v7;
      *v8-- = NULL;
    }
    while ( v7 >= 0 );
  }
LABEL_40:
  v9 = CgPredictedEntitySystem::ms_allocatedType;
  CgBallistics::ms_allocatedCount = 0;
  LOBYTE(CgBallistics::ms_allocatedType) = 0;
  if ( !(_BYTE)CgPredictedEntitySystem::ms_allocatedType )
    goto LABEL_45;
  if ( (_BYTE)CgPredictedEntitySystem::ms_allocatedType != HALF_HALF )
  {
    LODWORD(v45) = (unsigned __int8)CgPredictedEntitySystem::ms_allocatedType;
    LODWORD(v43) = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 269, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SYSTEM_TYPE)", "%s\n\tTrying to free predicted entity system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SYSTEM_TYPE", v43, v45) )
      __debugbreak();
    v9 = CgPredictedEntitySystem::ms_allocatedType;
LABEL_45:
    if ( v9 != 2 )
      goto LABEL_52;
  }
  if ( CgPredictedEntitySystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 273, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgPredictedEntitySystem::FreeSystemCommon: Trying to free predicted entity system but no predicted entity system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v10 = CgPredictedEntitySystem::ms_allocatedCount - 1;
  if ( CgPredictedEntitySystem::ms_allocatedCount - 1 >= 0 )
  {
    v11 = &CgPredictedEntitySystem::ms_systemsArray[v10];
    do
    {
      CgPredictedEntitySystem::Shutdown(*v11);
      ((void (__fastcall *)(CgPredictedEntitySystem *, _QWORD))(*v11)->~BgPredictedEntitySystem)(*v11, 0i64);
      DebugWipe(*v11, 0x7228ui64);
      --v10;
      *v11-- = NULL;
    }
    while ( v10 >= 0 );
  }
LABEL_52:
  v12 = CgTargetAssist::ms_allocatedType;
  CgPredictedEntitySystem::ms_allocatedCount = 0;
  LOBYTE(CgPredictedEntitySystem::ms_allocatedType) = 0;
  if ( !(_BYTE)CgTargetAssist::ms_allocatedType )
    goto LABEL_57;
  if ( (_BYTE)CgTargetAssist::ms_allocatedType != HALF_HALF )
  {
    LODWORD(v45) = (unsigned __int8)CgTargetAssist::ms_allocatedType;
    LODWORD(v43) = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 120, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::INSTANCE_TYPE)", "%s\n\tTrying to free target assist system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::INSTANCE_TYPE", v43, v45) )
      __debugbreak();
    v12 = CgTargetAssist::ms_allocatedType;
LABEL_57:
    if ( v12 != 2 )
      goto LABEL_64;
  }
  if ( CgTargetAssist::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 124, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgTargetAssist::FreeInstanceCommon: Trying to free single-player target assist system but no target assist system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v13 = CgTargetAssist::ms_allocatedCount - 1;
  if ( CgTargetAssist::ms_allocatedCount - 1 >= 0 )
  {
    v14 = (void **)&CgTargetAssist::ms_instances[v13];
    do
    {
      (**(void (__fastcall ***)(void *, _QWORD))*v14)(*v14, 0i64);
      DebugWipe(*v14, 0x980ui64);
      --v13;
      *v14-- = NULL;
    }
    while ( v13 >= 0 );
  }
LABEL_64:
  CgTargetAssist::ms_allocatedCount = 0;
  LOBYTE(CgTargetAssist::ms_allocatedType) = 0;
  CgAntiLagMP::Free();
  CgWeaponMap::Free();
  CGMovingPlatformsMP::FreeMovingPlatformSystem();
  v15 = CgVehicleSystem::ms_allocatedType;
  if ( !(_BYTE)CgVehicleSystem::ms_allocatedType )
    goto LABEL_69;
  if ( (_BYTE)CgVehicleSystem::ms_allocatedType != HALF_HALF )
  {
    LODWORD(v45) = (unsigned __int8)CgVehicleSystem::ms_allocatedType;
    LODWORD(v43) = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 455, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE)", "%s\n\tTrying to free vehicle system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE", v43, v45) )
      __debugbreak();
    v15 = CgVehicleSystem::ms_allocatedType;
LABEL_69:
    if ( v15 != 2 )
      goto LABEL_76;
  }
  if ( CgVehicleSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 459, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgVehicleSystem::FreeVehicleSystemCommon: Trying to free single-player vehicle system but no vehicle system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v16 = CgVehicleSystem::ms_allocatedCount - 1;
  if ( CgVehicleSystem::ms_allocatedCount - 1 >= 0 )
  {
    v17 = (void **)&CgVehicleSystem::ms_vehicleSystemArray[v16];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v17 + 536i64))(*v17, 0i64);
      DebugWipe(*v17, 0x11A918ui64);
      --v16;
      *v17-- = NULL;
    }
    while ( v16 >= 0 );
  }
LABEL_76:
  v18 = CgViewSystem::ms_allocatedType;
  CgVehicleSystem::ms_allocatedCount = 0;
  LOBYTE(CgVehicleSystem::ms_allocatedType) = 0;
  if ( !(_BYTE)CgViewSystem::ms_allocatedType )
    goto LABEL_81;
  if ( (_BYTE)CgViewSystem::ms_allocatedType != HALF_HALF )
  {
    LODWORD(v45) = (unsigned __int8)CgViewSystem::ms_allocatedType;
    LODWORD(v43) = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 316, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::VIEW_SYSTEM_TYPE)", "%s\n\tTrying to free view system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::VIEW_SYSTEM_TYPE", v43, v45) )
      __debugbreak();
    v18 = CgViewSystem::ms_allocatedType;
LABEL_81:
    if ( v18 != 2 )
      goto LABEL_88;
  }
  if ( CgViewSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 320, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgViewSystem::FreeViewSystemCommon: Trying to free single-player view system but no view system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v19 = CgViewSystem::ms_allocatedCount - 1;
  if ( CgViewSystem::ms_allocatedCount - 1 >= 0 )
  {
    v20 = (void **)&CgViewSystem::ms_viewSystemArray[v19];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v20 + 32i64))(*v20, 0i64);
      DebugWipe(*v20, 0x68ui64);
      --v19;
      *v20-- = NULL;
    }
    while ( v19 >= 0 );
  }
LABEL_88:
  v21 = CgEntitySystem::ms_allocatedType;
  CgViewSystem::ms_allocatedCount = 0;
  LOBYTE(CgViewSystem::ms_allocatedType) = 0;
  if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    goto LABEL_93;
  if ( (_BYTE)CgEntitySystem::ms_allocatedType != HALF_HALF )
  {
    LODWORD(v45) = (unsigned __int8)CgEntitySystem::ms_allocatedType;
    LODWORD(v43) = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 339, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE)", "%s\n\tTrying to free entity system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE", v43, v45) )
      __debugbreak();
    v21 = CgEntitySystem::ms_allocatedType;
LABEL_93:
    if ( v21 != 2 )
      goto LABEL_100;
  }
  if ( CgEntitySystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 343, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgEntitySystem::FreeEntitySystemCommon: Trying to free single-player entity system but no entity system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v22 = CgEntitySystem::ms_allocatedCount - 1;
  if ( CgEntitySystem::ms_allocatedCount - 1 >= 0 )
  {
    v23 = (void **)&CgEntitySystem::ms_entitySystemArray[v22];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v23 + 72i64))(*v23, 0i64);
      DebugWipe(*v23, 0x20A760ui64);
      --v22;
      *v23-- = NULL;
    }
    while ( v22 >= 0 );
  }
LABEL_100:
  CgEntitySystem::ms_allocatedCount = 0;
  LOBYTE(CgEntitySystem::ms_allocatedType) = 0;
  CG_EntityWorkers_CloseRWLock_Physics();
  if ( CG_GameInterface_FreeCompassSystem() )
    goto LABEL_114;
  v24 = CgCompassSystem::ms_allocatedType;
  if ( (_BYTE)CgCompassSystem::ms_allocatedType )
  {
    if ( (_BYTE)CgCompassSystem::ms_allocatedType == HALF_HALF )
      goto LABEL_107;
    LODWORD(v45) = (unsigned __int8)CgCompassSystem::ms_allocatedType;
    LODWORD(v43) = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 624, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to free compass system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", v43, v45) )
      __debugbreak();
    v24 = CgCompassSystem::ms_allocatedType;
  }
  if ( v24 == 2 )
  {
LABEL_107:
    if ( CgCompassSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 628, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgCompassSystem::FreeCompassSystemCommon: Trying to free single-player compass system but no compass system has been allocated\n", "ms_allocatedCount > 0") )
      __debugbreak();
    v25 = CgCompassSystem::ms_allocatedCount - 1;
    if ( CgCompassSystem::ms_allocatedCount - 1 >= 0 )
    {
      v26 = (void **)&CgCompassSystem::ms_compassSystemArray[v25];
      do
      {
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v26 + 120i64))(*v26, 0i64);
        DebugWipe(*v26, 0xFB18ui64);
        --v25;
        *v26-- = NULL;
      }
      while ( v25 >= 0 );
    }
  }
  CgCompassSystem::ms_allocatedCount = 0;
  LOBYTE(CgCompassSystem::ms_allocatedType) = 0;
LABEL_114:
  v27 = CgDrawSystem::ms_allocatedType;
  if ( !(_BYTE)CgDrawSystem::ms_allocatedType )
    goto LABEL_119;
  if ( (_BYTE)CgDrawSystem::ms_allocatedType != HALF_HALF )
  {
    LODWORD(v45) = (unsigned __int8)CgDrawSystem::ms_allocatedType;
    LODWORD(v43) = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 225, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE)", "%s\n\tTrying to free draw system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE", v43, v45) )
      __debugbreak();
    v27 = CgDrawSystem::ms_allocatedType;
LABEL_119:
    if ( v27 != 2 )
      goto LABEL_126;
  }
  if ( CgDrawSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 229, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgDrawSystem::FreeDrawSystemCommon: Trying to free single-player draw system but no draw system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v28 = CgDrawSystem::ms_allocatedCount - 1;
  if ( CgDrawSystem::ms_allocatedCount - 1 >= 0 )
  {
    v29 = (void **)&CgDrawSystem::ms_drawSystemArray[v28];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v29 + 80i64))(*v29, 0i64);
      DebugWipe(*v29, 0x420ui64);
      --v28;
      *v29-- = NULL;
    }
    while ( v28 >= 0 );
  }
LABEL_126:
  v30 = CgSoundSystem::ms_allocatedType;
  CgDrawSystem::ms_allocatedCount = 0;
  LOBYTE(CgDrawSystem::ms_allocatedType) = 0;
  if ( !(_BYTE)CgSoundSystem::ms_allocatedType )
    goto LABEL_131;
  if ( (_BYTE)CgSoundSystem::ms_allocatedType != HALF_HALF )
  {
    LODWORD(v45) = (unsigned __int8)CgSoundSystem::ms_allocatedType;
    LODWORD(v43) = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 228, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SOUND_SYSTEM_TYPE)", "%s\n\tTrying to free sound system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SOUND_SYSTEM_TYPE", v43, v45) )
      __debugbreak();
    v30 = CgSoundSystem::ms_allocatedType;
LABEL_131:
    if ( v30 != 2 )
      goto LABEL_138;
  }
  if ( CgSoundSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 232, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgSoundSystem::FreeSoundSystemCommon: Trying to free single-player sound system but no sound system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v31 = CgSoundSystem::ms_allocatedCount - 1;
  if ( CgSoundSystem::ms_allocatedCount - 1 >= 0 )
  {
    v32 = (void **)&CgSoundSystem::ms_soundSystemArray[v31];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v32 + 160i64))(*v32, 0i64);
      DebugWipe(*v32, 0x10ui64);
      --v31;
      *v32-- = NULL;
    }
    while ( v31 >= 0 );
  }
LABEL_138:
  v33 = CgEventSystem::ms_allocatedType;
  CgSoundSystem::ms_allocatedCount = 0;
  LOBYTE(CgSoundSystem::ms_allocatedType) = 0;
  if ( !(_BYTE)CgEventSystem::ms_allocatedType )
    goto LABEL_143;
  if ( (_BYTE)CgEventSystem::ms_allocatedType != HALF_HALF )
  {
    LODWORD(v45) = (unsigned __int8)CgEventSystem::ms_allocatedType;
    LODWORD(v43) = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 273, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE)", "%s\n\tTrying to free event system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE", v43, v45) )
      __debugbreak();
    v33 = CgEventSystem::ms_allocatedType;
LABEL_143:
    if ( v33 != 2 )
      goto LABEL_150;
  }
  if ( CgEventSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 277, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgEventSystem::FreeEventSystemCommon: Trying to free single-player event system but no event system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v34 = CgEventSystem::ms_allocatedCount - 1;
  if ( CgEventSystem::ms_allocatedCount - 1 >= 0 )
  {
    v35 = (void **)&CgEventSystem::ms_eventSystemArray[v34];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v35 + 16i64))(*v35, 0i64);
      DebugWipe(*v35, 0x10ui64);
      --v34;
      *v35-- = NULL;
    }
    while ( v34 >= 0 );
  }
LABEL_150:
  v36 = CgWeaponSystem::ms_allocatedType;
  CgEventSystem::ms_allocatedCount = 0;
  LOBYTE(CgEventSystem::ms_allocatedType) = 0;
  if ( CgWeaponSystem::ms_allocatedType == WEAPONS_TYPE_NONE )
    goto LABEL_155;
  if ( CgWeaponSystem::ms_allocatedType != WEAPONS_TYPE_MP )
  {
    LODWORD(v45) = CgWeaponSystem::ms_allocatedType;
    LODWORD(v43) = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 579, ASSERT_TYPE_ASSERT, "(ms_allocatedType == CgWeaponsType::WEAPONS_TYPE_NONE || ms_allocatedType == SubSystem::WEAPON_SYSTEM_TYPE)", "%s\n\tTrying to free weapon system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == CgWeaponsType::WEAPONS_TYPE_NONE || ms_allocatedType == SubSystem::WEAPON_SYSTEM_TYPE", v43, v45) )
      __debugbreak();
    v36 = CgWeaponSystem::ms_allocatedType;
LABEL_155:
    if ( v36 != WEAPONS_TYPE_MP )
      goto LABEL_162;
  }
  if ( CgWeaponSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 583, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgWeaponSystem::FreeWeaponSystemCommon: Trying to free weapon system but no weapon system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v37 = CgWeaponSystem::ms_allocatedCount - 1;
  if ( CgWeaponSystem::ms_allocatedCount - 1 >= 0 )
  {
    v38 = (void **)&CgWeaponSystem::ms_weaponSystemArray[v37];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v38 + 208i64))(*v38, 0i64);
      DebugWipe(*v38, 0x12E0ui64);
      --v37;
      *v38-- = NULL;
    }
    while ( v37 >= 0 );
  }
LABEL_162:
  CgWeaponSystem::ms_allocatedCount = 0;
  CgWeaponSystem::ms_allocatedType = WEAPONS_TYPE_NONE;
  CgStaticGlobalsMP::FreeLocalClientStaticGlobals();
  CgGlobalsMP::FreeLocalClientGlobals();
  v39 = CgStatic::ms_allocatedType;
  if ( !(_BYTE)CgStatic::ms_allocatedType )
    goto LABEL_167;
  if ( (_BYTE)CgStatic::ms_allocatedType != HALF_HALF )
  {
    LODWORD(v45) = (unsigned __int8)CgStatic::ms_allocatedType;
    LODWORD(v43) = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 159, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::GAME_STATICS_TYPE)", "%s\n\tTrying to free game statics but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::GAME_STATICS_TYPE", v43, v45) )
      __debugbreak();
    v39 = CgStatic::ms_allocatedType;
LABEL_167:
    if ( v39 != 2 )
      goto LABEL_174;
  }
  if ( SLODWORD(CgStatic::ms_allocatedCount) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 163, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgStatic::FreeGameStaticsCommon: Trying to free game statics but no game statics has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v40 = LODWORD(CgStatic::ms_allocatedCount) - 1 < 0;
  v41 = LODWORD(CgStatic::ms_allocatedCount) - 1;
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) = 0i64;
  if ( !v40 )
  {
    v42 = (void **)&CgStatic::ms_cgameStaticsArray[v41];
    do
    {
      (**(void (__fastcall ***)(void *, _QWORD))*v42)(*v42, 0i64);
      DebugWipe(*v42, 0xEEF0ui64);
      --v41;
      *v42-- = NULL;
    }
    while ( v41 >= 0 );
  }
LABEL_174:
  CgStatic::ms_allocatedCount = 0.0;
  LOBYTE(CgStatic::ms_allocatedType) = 0;
  CgDynamicMedia::FreeMemory<CgDynamicMediaMP>();
  g_activeRefDef = NULL;
}

/*
==============
CG_MainMP_GetPostGameState
==============
*/
unsigned __int8 CG_MainMP_GetPostGameState(const LocalClientNum_t localClientNum)
{
  CgGlobalsMP *LocalClientGlobals; 
  unsigned int m_omnvarIndexPostGameState; 
  const OmnvarData *Data; 
  const OmnvarDef *Def; 

  if ( !CL_IsLocalClientConnectionActiveForGameServer(localClientNum) )
    return 0;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  m_omnvarIndexPostGameState = LocalClientGlobals->m_omnvarIndexPostGameState;
  if ( m_omnvarIndexPostGameState == -1 )
    return 0;
  Data = CG_Omnvar_GetData(localClientNum, m_omnvarIndexPostGameState);
  Def = BG_Omnvar_GetDef(LocalClientGlobals->m_omnvarIndexPostGameState);
  return Omnvar_GetInteger(Def, Data);
}

/*
==============
CG_MainMP_Init
==============
*/
void CG_MainMP_Init(LocalClientNum_t localClientNum, int serverMessageNum, int serverCommandSequence, int clientNum, HunkUser *hunkUser)
{
  __int64 v6; 
  char v7; 
  LocalClientNum_t v8; 
  bool *p_cgameInitialized; 
  char v10; 
  CgGlobalsMP *LocalClientGlobals; 
  cgs_t *LocalClientStaticGlobals; 
  CgStaticGlobalsMP *v13; 
  __int64 v14; 
  unsigned int i; 
  BOOL IsAnyLocalServerRunning; 
  bool v17; 
  Physics_WorldId v18; 
  Physics_WorldId j; 
  bool v20; 
  bool v21; 
  const dvar_t *v22; 
  StringTable *v23; 
  const char *v24; 
  const dvar_t *v25; 
  bool v26; 
  const dvar_t *v27; 
  bool v28; 
  const dvar_t *v29; 
  bool v30; 
  __int64 v31; 
  const void *v32; 
  CgPlayer_Asm *v33; 
  CgCompassSystemMP *CompassSystemMP; 
  CgClientSideEffectsSystemMP *ClientSideEffectsSystemMP; 
  __int64 v36; 
  ConsumableCardCache *p_m_cachedConsumableCards; 
  int ControllerFromClient; 
  unsigned int k; 
  Material *v40; 
  CgWeaponSystemMP *WeaponSystemMP; 
  CgMLGSpectator *m_mlgSpectatorPtr; 
  CgMLGCameraManager *CameraManager; 
  const dvar_t *v44; 
  char enabled; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  StringTable *tablePtr; 
  bool v50; 
  bool v53; 

  v6 = localClientNum;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1664, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( (unsigned int)v6 >= 2 )
  {
    LODWORD(v46) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1665, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v46, 2) )
      __debugbreak();
  }
  if ( (unsigned int)clientNum >= cls.maxClients )
  {
    LODWORD(v47) = cls.maxClients;
    LODWORD(v46) = clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1666, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( cls.maxClients )", "clientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", v46, v47) )
      __debugbreak();
  }
  if ( !hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1667, ASSERT_TYPE_ASSERT, "(hunkUser)", (const char *)&queryFormat, "hunkUser") )
    __debugbreak();
  Com_Printf(14, "CG_MainMP_Init()\n");
  if ( (unsigned int)v6 >= 2 )
  {
    LODWORD(v47) = 2;
    LODWORD(v46) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v46, v47) )
      __debugbreak();
  }
  v7 = clientUIActives[v6].frontEndSceneState[0];
  v53 = v7 == 0;
  v8 = LOCAL_CLIENT_0;
  if ( SLODWORD(cl_maxLocalClients) <= 0 )
  {
LABEL_24:
    v10 = 1;
  }
  else
  {
    p_cgameInitialized = &clientUIActives[0].cgameInitialized;
    while ( 1 )
    {
      if ( CL_IsLocalClientActive(v8) )
      {
        if ( (unsigned int)v8 >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(v47) = 2;
          LODWORD(v46) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v46, v47) )
            __debugbreak();
        }
        if ( *p_cgameInitialized )
          break;
      }
      ++v8;
      p_cgameInitialized += 440;
      if ( v8 >= SLODWORD(cl_maxLocalClients) )
        goto LABEL_24;
    }
    v10 = 0;
  }
  v50 = v10;
  if ( !v7 )
  {
    DB_SyncLevelLoad();
    if ( CL_Main_IsOnlineGame() && !CL_Demo_IsPlayingServer((LocalClientNum_t)v6) && !CL_Main_IsSystemLinkGame() && (!CL_Main_IsSplitscreenGame() || CL_Main_IsOnlineGame()) && !XSESSION_INFO::IsValidSessionId(&g_serverSession.dyn.sessionInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1358, ASSERT_TYPE_ASSERT, "(g_serverSession.dyn.sessionInfo.IsValidSessionId())", (const char *)&queryFormat, "g_serverSession.dyn.sessionInfo.IsValidSessionId()") )
      __debugbreak();
  }
  CL_StreamViews_ClearAllManualViews((LocalClientNum_t)v6);
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v6);
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v6);
  if ( (unsigned int)v6 >= cg_maxLocalClients )
  {
    LODWORD(v47) = cg_maxLocalClients;
    LODWORD(v46) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1693, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_maxLocalClients )", "localClientNum doesn't index cg_maxLocalClients\n\t%i not in [0, %i)", v46, v47) )
      __debugbreak();
  }
  if ( (unsigned int)v6 >= cgs_t::ms_allocatedCount )
  {
    LODWORD(v47) = cgs_t::ms_allocatedCount;
    LODWORD(v46) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_static_mp.h", 43, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v46, v47) )
      __debugbreak();
  }
  if ( cgs_t::ms_allocatedType != STATIC_GLOB_TYPE_MP )
  {
    LODWORD(v47) = cgs_t::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_static_mp.h", 44, ASSERT_TYPE_ASSERT, "(CG_StaticGlobals_GetType() == CgStaticGlobalsType::STATIC_GLOB_TYPE_MP)", "%s\n\tCgStaticGlobalsMP::ClearLocalClientGlobals: Trying to clear multiplayer globals but the globals were not allocated as multiplayer. Allocated type is:%d\n", "CG_StaticGlobals_GetType() == CgStaticGlobalsType::STATIC_GLOB_TYPE_MP", v47) )
      __debugbreak();
  }
  ((void (__fastcall *)(CgStaticGlobalsMP *, _QWORD))s_clientStaticGlobalsArrayMP[v6].~cgs_t)(&s_clientStaticGlobalsArrayMP[v6], 0i64);
  memset_0(&s_clientStaticGlobalsArrayMP[v6], 0, sizeof(CgStaticGlobalsMP));
  v13 = &s_clientStaticGlobalsArrayMP[v6];
  memset_0(v13, 0, sizeof(CgStaticGlobalsMP));
  CgStaticGlobalsMP::CgStaticGlobalsMP(v13);
  CgGlobalsMP::ClearLocalClientGlobals((const LocalClientNum_t)v6);
  CgWeaponSystemMP::ClearWeaponSystem((const LocalClientNum_t)v6);
  CgEventSystemMP::ClearEventSystem((const LocalClientNum_t)v6);
  CgSoundSystemMP::ClearSoundSystem((const LocalClientNum_t)v6);
  CgDrawSystemMP::ClearDrawSystem((const LocalClientNum_t)v6);
  if ( !CG_GameInterface_ClearCompassSystem((LocalClientNum_t)v6) )
    CgCompassSystemMP::ClearCompassSystem((const LocalClientNum_t)v6);
  v14 = v6;
  *(_QWORD *)&cgDC[v14].localClientNum = 0i64;
  *(_QWORD *)&cgDC[v14].realTime = 0i64;
  *(_QWORD *)&cgDC[v14].cursor.y = 0i64;
  *(_QWORD *)&cgDC[v14].screenHeight = 0i64;
  *(_QWORD *)&cgDC[v14].blurRadiusOut = 0i64;
  cgDC[v14].localClientNum = v6;
  if ( (_BYTE)CgEntitySystem::ms_allocatedType != HALF_HALF )
  {
    LODWORD(v47) = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 368, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE)", "%s\n\tCgEntitySystem::ClearEntitySystemCommon: Trying to clear entity system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE", v47, (unsigned __int8)CgEntitySystem::ms_allocatedType) )
      __debugbreak();
  }
  if ( (unsigned int)v6 >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v47) = CgEntitySystem::ms_allocatedCount;
    LODWORD(v46) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 369, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v46, v47) )
      __debugbreak();
  }
  ((void (__fastcall *)(CgEntitySystem *, _QWORD))CgEntitySystem::ms_entitySystemArray[v6]->~CgEntitySystem)(CgEntitySystem::ms_entitySystemArray[v6], 0i64);
  memset_0(CgEntitySystem::ms_entitySystemArray[v6], 0, sizeof(CgEntitySystem));
  CgEntitySystemMP::CgEntitySystemMP((CgEntitySystemMP *)CgEntitySystem::ms_entitySystemArray[v6], (const LocalClientNum_t)v6);
  CgEntitySystem::ResetEntitySystemObufscation((const LocalClientNum_t)v6);
  CgViewSystemMP::ClearViewSystem((const LocalClientNum_t)v6);
  CgStaticMP::ClearGameStatics((const LocalClientNum_t)v6);
  CgVehicleSystemMP::ClearVehicleSystem((const LocalClientNum_t)v6);
  CgTargetAssistMP::ClearInstance((const LocalClientNum_t)v6);
  CgPredictedEntitySystemMP::ClearSystem((const LocalClientNum_t)v6);
  CgBallisticsMP::ClearSystem((const LocalClientNum_t)v6);
  CgMissileMP::ClearSystem((const LocalClientNum_t)v6);
  CGMovingPlatformsMP::ClearMovingPlatformSystem();
  CgAntiLagMP::Clear((const LocalClientNum_t)v6);
  CG_SnapshotMP_ClearSnapshots((const LocalClientNum_t)v6);
  CG_Main_ClearCgMedia();
  CG_Main_InitDofPhysical((LocalClientNum_t)v6);
  CG_ClearBlur((LocalClientNum_t)v6);
  CG_FrontEndScene_Init();
  CG_DrawTools_SetupTeamColors();
  *(_QWORD *)&LocalClientGlobals->refdef.viewmodelMotionBlurOverride = 0i64;
  CG_Main_InitRadialMotionBlur(&LocalClientGlobals->refdef.radialMotionBlur);
  CL_TransientsWorld_SetVisibility((LocalClientNum_t)v6, 0, 1);
  for ( i = 1; i < 0x600; ++i )
    CL_TransientsWorld_SetVisibility((LocalClientNum_t)v6, i, 0);
  Ragdoll_Register((LocalClientNum_t)v6);
  if ( v7 )
    SND_SoftReset();
  else
    SND_Reset(1);
  IsAnyLocalServerRunning = Com_IsAnyLocalServerRunning();
  LocalClientStaticGlobals->localServer = IsAnyLocalServerRunning;
  v17 = v10 && !IsAnyLocalServerRunning;
  if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
    __debugbreak();
  if ( !cls.m_activeGameTypeName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 309, ASSERT_TYPE_ASSERT, "(m_activeGameTypeName[0])", "%s\n\tRequested gametype before it was set", "m_activeGameTypeName[0]") )
    __debugbreak();
  CG_Omnvar_InitDefaults((LocalClientNum_t)v6);
  CgGlobalsMP::CacheClientOmnvarIndexes(LocalClientGlobals);
  CG_Entity_PhysicsCheckPostAssetChangeEmpty((const LocalClientNum_t)v6);
  Physics_CreateClientWorlds((LocalClientNum_t)v6);
  v18 = 3 * v6 + 4;
  for ( j = 3 * v6 + 2; j <= v18; ++j )
  {
    WorldCollision_InstantiateCollision(j);
    StaticModels_InstantiateCollision(j);
    PatchCollision_InstantiateCollision(j, cls.m_activeGameMapName);
  }
  Cloth_CreateGlobalWorld(v6);
  Cloth_XAnimNode_SetDObjToClothFn(CG_Cloth_DObjToClothInstances, 0);
  LUITraceRunner::Initialize((LocalClientNum_t)v6);
  CG_ClientCharacter_Init((const LocalClientNum_t)v6);
  CL_UIStreaming_Init((const LocalClientNum_t)v6);
  if ( LocalClientGlobals->localClientNum != (_DWORD)v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1817, ASSERT_TYPE_ASSERT, "(cgameGlob->localClientNum == localClientNum)", (const char *)&queryFormat, "cgameGlob->localClientNum == localClientNum") )
    __debugbreak();
  LocalClientGlobals->viewModelPose.eType = 29;
  LocalClientGlobals->prevViewIndex = -1;
  CL_SetStance((LocalClientNum_t)v6, CL_STANCE_STAND, 0);
  CL_SetADS((LocalClientNum_t)v6, 0);
  LocalClientGlobals->objectiveText[0] = 0;
  LocalClientGlobals->m_useMinimap = v53;
  LocalClientGlobals->m_useCinematicCamera = v53;
  LocalClientGlobals->m_useLeaderboards = v53;
  LocalClientGlobals->m_usePlayerAnimation = v53;
  LocalClientGlobals->m_usePlayerCards = v53;
  LocalClientGlobals->m_useSellShock = v53;
  LocalClientGlobals->clientNum = clientNum;
  LocalClientGlobals->showHud = 1;
  v20 = !v7 && Com_GameMode_SupportsFeature(WEAPON_SPRINT_LOOP|0x80);
  LocalClientGlobals->m_useConsumableCards = v20;
  LocalClientGlobals->m_frontEndScene = v7 != 0;
  v21 = !v7 && CL_MainMP_IsMLGSpectator((const LocalClientNum_t)v6);
  LocalClientGlobals->m_isMLGSpectator = v21;
  LocalClientGlobals->lastHealthLerpDelay = 1;
  LocalClientStaticGlobals->processedSnapshotNum = serverMessageNum;
  LocalClientStaticGlobals->serverCommandSequence = serverCommandSequence;
  CG_Camera_Initialize((const LocalClientNum_t)v6);
  StringTable_GetAsset("mp/gameTypesTable.csv", (const StringTable **)&tablePtr);
  v22 = DVARINT_party_maxSquadSize;
  if ( !DVARINT_party_maxSquadSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxSquadSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  v23 = tablePtr;
  LocalClientGlobals->m_useSquads = v22->current.integer > 1;
  v24 = StringTable_Lookup(v23, 0, cls.m_activeGameTypeName, 12);
  LocalClientGlobals->m_useTeams = atoi(v24) != 0;
  CG_Globals_InitOperatorSkinEvMap(&LocalClientGlobals->operatorSkinEvOffsetMap);
  CG_AnimTreeMP_InitializeDObjAnimInfo(LocalClientGlobals);
  CG_ServerCmdMP_ParseServerInfo((LocalClientNum_t)v6);
  CG_ServerCmdMP_ParseCodInfo((LocalClientNum_t)v6);
  if ( v7 )
    goto LABEL_89;
  v25 = DCONST_DVARBOOL_cg_enablePlayerEntityWorkers;
  if ( !DCONST_DVARBOOL_cg_enablePlayerEntityWorkers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_enablePlayerEntityWorkers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  if ( !v25->current.enabled )
LABEL_89:
    v26 = 0;
  else
    v26 = 1;
  CG_EntityWorkers_SetPlayerWorkersEnabled((const LocalClientNum_t)v6, v26);
  if ( v7 )
    goto LABEL_96;
  v27 = DVARBOOL_cg_entityWorkers_missilesEnabled;
  if ( !DVARBOOL_cg_entityWorkers_missilesEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_entityWorkers_missilesEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v27);
  if ( !v27->current.enabled )
LABEL_96:
    v28 = 0;
  else
    v28 = 1;
  CG_EntityWorkers_SetMissileWorkersEnabled((const LocalClientNum_t)v6, v28);
  if ( v7 )
    goto LABEL_103;
  v29 = DVARBOOL_cg_enableAgentEntityWorkers;
  if ( !DVARBOOL_cg_enableAgentEntityWorkers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_enableAgentEntityWorkers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  if ( !v29->current.enabled )
LABEL_103:
    v30 = 0;
  else
    v30 = 1;
  CG_EntityWorkers_SetAgentWorkersEnabled((const LocalClientNum_t)v6, v30);
  if ( !v7 )
    R_BeginRemoteScreenUpdate();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "CG_MainMP_Init Remote Screen");
  CG_MainMP_Init_RegisterCodeMaterials((LocalClientNum_t)v6);
  CG_ConsoleCmds_Register();
  CG_ConsoleCmdsMP_Register();
  CG_Main_InitViewDimensions((LocalClientNum_t)v6);
  if ( !bg_lastParsedWeaponIndex )
  {
    Com_SetWeaponInfoMemory(2);
    BG_WeaponsSetup_InitDefaultsAndAnimations(v53);
  }
  CG_CustomizationMP_Init();
  CG_WeaponsMP_RegisterWeapons();
  CG_WeaponFade_Init((const LocalClientNum_t)v6);
  CG_PlayerFade_Init((const LocalClientNum_t)v6);
  CG_CustomizationStreamingMP_Init((const LocalClientNum_t)v6);
  CG_WeaponStreamingMP_Init((const LocalClientNum_t)v6);
  if ( !v7 )
    CG_ClientAntiCheatMP_Init((const LocalClientNum_t)v6);
  CG_PlayerVisibilityMP_Init((const LocalClientNum_t)v6);
  BG_WorldStreaming_Init(v53);
  CG_WorldStreaming_Init((const LocalClientNum_t)v6);
  CG_AnimTreeMP_LoadAnimTrees();
  v31 = tls_index;
  v32 = *(const void **)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64);
  if ( v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 84, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == 0 ) )", "( ms_activeBgs ) = %p", v32) )
    __debugbreak();
  if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 85, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to set the active bgs to the client game static but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( (unsigned int)v6 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&v47 = CgStatic::ms_allocatedCount;
    LODWORD(v46) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 86, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v46, v47) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 87, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum] != 0)", "%s\n\tTrying to set the active bgs to the client game static but the client game static has not been allocated", "ms_cgameStaticsArray[localClientNum] != NULL") )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v31) + 272i64) = CgStatic::ms_cgameStaticsArray[v6];
  BG_CheckThread();
  CG_Main_InitSuits(v17);
  BG_AnimationMP_RegisterSuitAnimIndexes(v17);
  ScriptableBg_InitNetConstStringDefs(v17);
  Rumble_Init(v17);
  CG_ClientWeapon_Init((LocalClientNum_t)v6);
  CG_MainMP_Init_LoadAnimations((LocalClientNum_t)v6, cls.m_activeGameMapName, v53, hunkUser, v17);
  BG_LookAt_Init();
  if ( PlayerASM_IsEnabled() )
  {
    v33 = CgPlayer_Asm::Singleton((const LocalClientNum_t)v6);
    BgPlayer_Asm::Init(v33, v17, 0);
  }
  CG_Wind_Init();
  CG_ClientModel_InitClient((const LocalClientNum_t)v6);
  if ( LUI_CoD_InFrontend() )
    LUI_CoD_ClientModelsInitialized();
  CG_Cloth_Entity_Init((const LocalClientNum_t)v6);
  CG_Cloth_Legs_Init((const LocalClientNum_t)v6);
  if ( !LocalClientStaticGlobals->localServer )
  {
    if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1985, ASSERT_TYPE_ASSERT, "(isGameServer)", (const char *)&queryFormat, "isGameServer") )
      __debugbreak();
    BG_LoadPenetrationDepthTable();
    BG_InitializeWeaponSetup();
  }
  if ( !v7 )
  {
    CG_ModelPreviewerCreateDevGui((LocalClientNum_t)v6);
    CG_CreateFx_CreateDevGui((LocalClientNum_t)v6);
    if ( !CL_Demo_IsPlayingServer((LocalClientNum_t)v6) )
      CG_EditablePlayerData_Cache((const LocalClientNum_t)v6);
  }
  CG_MainMP_LoadNewMapBsp((LocalClientNum_t)v6, cls.m_activeGameMapName, v53);
  if ( CL_TransientsCollisionMP_GetTransientMode() == CL_TRANSIENTS_COLLISION_MP_TRANSIENTMODE_NONE )
    CL_TransientsCollisionMP_SetTransientMode(CL_TRANSIENTS_COLLISION_MP_TRANSIENTMODE_CLOSEST);
  ProfLoad_Begin("Init effects system");
  FX_InitSystem((LocalClientNum_t)v6, cls.maxClients > 20);
  FX_Dismemberment_Shutdown((LocalClientNum_t)v6);
  FX_Dismemberment_Init((LocalClientNum_t)v6);
  if ( v50 )
    CG_Glass_Init(1);
  ProfLoad_End();
  Mayhem_Shutdown();
  Mayhem_Init();
  CG_MainMP_RegisterGraphics((LocalClientNum_t)v6, cls.m_activeGameMapName, cls.m_activeGameTypeName);
  BG_Camo_InitNCS(v17);
  BG_LoadCodePerksTable();
  if ( !v7 )
    CG_Sound_RegisterMedia();
  BG_Gesture_InitGestures(v17);
  BG_Camera_Init(v17);
  CG_ViewMotion_InitCinematicMotionAssets();
  XAnimCurve_InitCurves(v17);
  BG_BlendSpace2D_InitDefs(v17);
  BG_Execution_InitAssets(v17);
  BG_CarryObject_InitDefs(v17);
  BG_HudOutline_InitDefs(v17);
  BG_Accessory_InitAssets(v17);
  CgVehicleSystemMP::InitGlobals();
  CG_PlayersMP_ResetClientWeaponVisibility((const LocalClientNum_t)v6);
  CG_PlayersMP_ResetPlayerBrCircleEffects();
  if ( (_BYTE)CgVehicleSystem::ms_allocatedType != HALF_HALF )
  {
    LODWORD(v48) = 2;
    LODWORD(v47) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 417, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE", v47, v48, (unsigned __int8)CgVehicleSystem::ms_allocatedType) )
      __debugbreak();
  }
  if ( (unsigned int)v6 >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(v47) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(v46) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 418, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v46, v47) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleSystemArray[v6] )
  {
    LODWORD(v47) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 419, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v47) )
      __debugbreak();
  }
  CgVehicleSystemMP::Init((CgVehicleSystemMP *)CgVehicleSystem::ms_vehicleSystemArray[v6]);
  LUI_CoD_GameMP_PostLevelInit((const LocalClientNum_t)v6);
  if ( !LUI_CoD_InFrontend() && !CG_GameInterface_InitCompassSystem((LocalClientNum_t)v6) )
  {
    CompassSystemMP = CgCompassSystemMP::GetCompassSystemMP((const LocalClientNum_t)v6);
    CgCompassSystemMP::InitCompass(CompassSystemMP);
  }
  CG_InitLocalEntities((const LocalClientNum_t)v6);
  CG_CalloutMarkerPing_Init((LocalClientNum_t)v6);
  CG_CinematicCamera_Init((const LocalClientNum_t)v6);
  ScriptableCl_Init((const LocalClientNum_t)v6);
  DynEntCl_InitEntities((LocalClientNum_t)v6);
  CG_StartClientSideTriggers((LocalClientNum_t)v6);
  SND_PropagationInit();
  CG_VisionSetMapInit((const LocalClientNum_t)v6);
  CG_ServerCmdMP_SetConfigValues((LocalClientNum_t)v6);
  if ( LocalClientGlobals->m_useMinimap )
  {
    CG_DrawTools_MiniMapChanged((LocalClientNum_t)v6);
    CG_DrawToolsMP_MiniMapCPRaidChanged((LocalClientNum_t)v6);
  }
  CG_DrawTools_ThermalBodyMaterialChanged((LocalClientNum_t)v6);
  if ( !g_mapLoaded && SND_Active() )
    SND_StopSounds(SND_STOP_ALL);
  R_InitPrimaryLights();
  CG_InitLightUpdate((LocalClientNum_t)v6);
  CG_ServerCmd_ParseSunLight((const LocalClientNum_t)v6);
  CL_SetADS((LocalClientNum_t)v6, 0);
  CL_Input_SequenceValidate();
  AimTarget_Init(v6);
  AimAssist_Init((LocalClientNum_t)v6);
  ClientSideEffectsSystemMP = CgClientSideEffectsSystemMP::GetClientSideEffectsSystemMP((const LocalClientNum_t)v6);
  CgClientSideEffectsSystemMP::Start(ClientSideEffectsSystemMP, 1);
  if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 96, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to clear the active bgs from the client game statics but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( (unsigned int)v6 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&v47 = CgStatic::ms_allocatedCount;
    LODWORD(v46) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v46, v47) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 98, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum] != 0)", "%s\n\tTrying to clear the active bgs from the client game statics but the client game static has not been allocated", "ms_cgameStaticsArray[localClientNum] != NULL") )
    __debugbreak();
  v36 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v31);
  if ( *(CgStatic **)(v36 + 272) != CgStatic::ms_cgameStaticsArray[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 99, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == ms_cgameStaticsArray[localClientNum] ) )", "( ms_activeBgs ) = %p", *(const void **)(v36 + 272)) )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v31) + 272i64) = 0i64;
  Sys_ProfEndNamedEvent();
  if ( !v7 )
    R_EndRemoteScreenUpdate();
  CG_PlayerCard_InitGame((const LocalClientNum_t)v6);
  p_m_cachedConsumableCards = &LocalClientGlobals->m_cachedConsumableCards;
  if ( LocalClientGlobals->m_useConsumableCards )
  {
    ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v6);
    for ( k = 0; k < 5; ++k )
    {
      if ( CL_PlayerData_GetZombieConsumableImageName(ControllerFromClient, k, (const char **)&hunkUser) )
        v40 = Material_RegisterHandle((const char *)hunkUser, IMAGE_TRACK_HUD);
      else
        v40 = NULL;
      p_m_cachedConsumableCards->cardImages[0] = v40;
      p_m_cachedConsumableCards = (ConsumableCardCache *)((char *)p_m_cachedConsumableCards + 8);
    }
  }
  else
  {
    p_m_cachedConsumableCards->cardImages[0] = NULL;
    LocalClientGlobals->m_cachedConsumableCards.cardImages[1] = NULL;
    LocalClientGlobals->m_cachedConsumableCards.cardImages[2] = NULL;
    LocalClientGlobals->m_cachedConsumableCards.cardImages[3] = NULL;
    LocalClientGlobals->m_cachedConsumableCards.cardImages[4] = NULL;
  }
  BG_RadiantLiveEnable(1);
  WeaponSystemMP = CgWeaponSystemMP::GetWeaponSystemMP((const LocalClientNum_t)v6);
  CgWeaponSystemMP::InitViewModel(WeaponSystemMP);
  CG_Weapons_Init((LocalClientNum_t)v6, v50);
  CgPlayerTraceInfo::Init((LocalClientNum_t)v6);
  CG_CoverWall_InitSystem();
  m_mlgSpectatorPtr = LocalClientGlobals->m_mlgSpectatorPtr;
  CgMLGSpectator::SetTeam(m_mlgSpectatorPtr, TEAM_TWO);
  CameraManager = CgMLGSpectator::GetCameraManager(m_mlgSpectatorPtr);
  CgMLGCameraManager::LoadMLGFreeCamPoses(CameraManager, (const LocalClientNum_t)v6);
  TopDownMapData_Init();
  XAnimIKInit(1);
  if ( CL_TransientsWorldMP_IsActive() )
  {
    v44 = DVARBOOL_r_defaultBigMapFrontendWaitWorkerCmdsOnlyOfType;
    if ( !DVARBOOL_r_defaultBigMapFrontendWaitWorkerCmdsOnlyOfType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_defaultBigMapFrontendWaitWorkerCmdsOnlyOfType") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v44);
    enabled = v44->current.enabled;
  }
  else
  {
    enabled = 1;
  }
  Dvar_SetBool_Internal(DVARBOOL_r_frontendWaitWorkerCmdsOnlyOfType, enabled);
  Dvar_SetInt_Internal(endgame_called, 0);
  Com_MP_SetShouldLocalServerPause(0);
  CG_TrackerPerk_OnInitGame();
  CG_ClientNetPerf_Reset((const LocalClientNum_t)v6);
  CG_InitMinimizedUse();
  CG_Shake_Init();
  CG_PlayerSecondaryCollision_Init();
  CG_ContextMount_UmbraOffsetTrace_Init();
  CG_LatencyTestMP_Init((LocalClientNum_t)v6);
  CG_PlayerCorpseMP_Init((LocalClientNum_t)v6);
  CG_Execution_Init();
  CG_VehicleAudio_ResetDistanceScales();
  CG_Train_Init((const LocalClientNum_t)v6);
}

/*
==============
CG_MainMP_Init_LoadAnimations
==============
*/
void CG_MainMP_Init_LoadAnimations(LocalClientNum_t localClientNum, const char *mapname, bool isGameServer, HunkUser *hunkUser, bool isFullInit)
{
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  XAnimOwner v11; 
  XAnimOwner v12; 
  CgVehicleSystem *VehicleSystem; 
  CgVehicleSystem *v14; 

  if ( !mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1411, ASSERT_TYPE_ASSERT, "(mapname)", (const char *)&queryFormat, "mapname") )
    __debugbreak();
  if ( !*mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1412, ASSERT_TYPE_ASSERT, "(mapname[0])", (const char *)&queryFormat, "mapname[0]") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "CG_MainMP_Init LoadAnimations");
  v8 = tls_index;
  if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.h", 169, ASSERT_TYPE_ASSERT, "(ms_activeBgs)", (const char *)&queryFormat, "ms_activeBgs") )
    __debugbreak();
  v9 = *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v8) + 272i64);
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16i64))(v9);
  Scr_Mem_AcquireScriptLocks();
  LOBYTE(v11) = 1;
  XAnimSubTreeRegistry_Init(v11);
  LOBYTE(v12) = 1;
  Cloth_XAnimNode_Clear(v12);
  if ( isGameServer )
  {
    BG_AnimationMP_FindAnims();
    Animset_InitAnims(0, isFullInit);
    VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
    BG_VehicleAnim_FindAnims(VehicleSystem);
    BG_TurretAnim_FindAnims(0);
    ScriptableBg_FindAnimations(0);
    CG_ClientModel_FindClipmapAnims();
    LUI_CoD_ClientModels_FindAnims(0);
    BG_AnimationMP_LoadWeaponAnims((animScriptData_t *)v10);
    Scr_PrecacheAnimTrees(CG_MainMP_AllocXAnimClient, *(_DWORD *)(v10 + 19544), MAIN);
    BG_AnimationMP_FindAnimTrees(0);
    Animset_FindAnimTrees(0);
    v14 = CgVehicleSystem::GetVehicleSystem(localClientNum);
    BG_VehicleAnim_FindTrees(v14);
    ScriptableBg_FindAnimationTrees(0);
    CG_ClientModel_FindClipmapAnimTrees(0);
    LUI_CoD_ClientModels_FindAnimTrees(0);
    Scr_EndLoadAnimTrees(0);
    BG_AnimationMP_InitializeAnimations();
    PlayerAnimset_ValidateAnimTrees();
    CG_MainMP_LoadAnimTreeInstances(localClientNum);
  }
  else
  {
    memset_0((void *)v10, 0, 0x4530ui64);
    BG_AnimationMP_FrontendInitialization((animScriptData_t *)v10);
    CG_ClientCharacter_FindAnims();
    CG_ClientWeapon_FindAnims();
    ScriptableBg_FindAnimations(0);
    CG_ClientModel_FindClipmapAnims();
    LUI_CoD_ClientModels_FindAnims(0);
    Scr_PrecacheAnimTrees(CG_MainMP_AllocXAnimClient, *(_DWORD *)(v10 + 19544), MAIN);
    CG_ClientCharacter_FindAnimTrees();
    ScriptableBg_FindAnimationTrees(0);
    CG_ClientModel_FindClipmapAnimTrees(0);
    LUI_CoD_ClientModels_FindAnimTrees(0);
    Scr_EndLoadAnimTrees(0);
  }
  Scr_Mem_ReleaseScriptLocks();
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_MainMP_Init_RegisterCodeMaterials
==============
*/
void CG_MainMP_Init_RegisterCodeMaterials(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int RowCount; 
  int v3; 
  int i; 
  const char *ColumnValueForRow; 
  const char *v6; 
  const char *v7; 
  int v8; 
  __int64 v9; 
  int v10; 
  __int64 v11; 
  int v12; 
  StringTable *tablePtr; 

  v1 = localClientNum;
  cgMedia.whiteMaterial = Material_RegisterHandle("white", IMAGE_TRACK_HUD);
  if ( (unsigned int)v1 >= 2 )
  {
    v10 = 2;
    v8 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v8, v10) )
      __debugbreak();
  }
  if ( !clientUIActives[v1].frontEndSceneState[0] )
  {
    Material_RegisterHandle("net_disconnect", IMAGE_TRACK_HUD);
    cgMedia.FOFTargetBox_Hostile = Material_RegisterHandle("hud_fofbox_hostile", IMAGE_TRACK_HUD);
    cgMedia.FOFTargetBox_HostileVehicle = Material_RegisterHandle("hud_fofbox_hostile_vehicle", IMAGE_TRACK_HUD);
    cgMedia.FOFTargetBox_Self = Material_RegisterHandle("hud_fofbox_self", IMAGE_TRACK_HUD);
    cgMedia.objectiveLine = Material_RegisterHandle("objective_line", IMAGE_TRACK_HUD);
    if ( Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_FIRING) )
    {
      StringTable_GetAsset("mp_cp/obituary_mod_icon.csv", (const StringTable **)&tablePtr);
      RowCount = StringTable_GetRowCount(tablePtr);
      v3 = RowCount;
      if ( RowCount != 25 )
      {
        v12 = 25;
        LODWORD(v9) = RowCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1386, ASSERT_TYPE_ASSERT, "(rowCount == MOD_NUM)", "%s\n\tEvery mod should be config in obituary_mod_icon.csv, now rowCount is:[%d], MOD_NUM is:[%d]", "rowCount == MOD_NUM", v9, v12) )
          __debugbreak();
      }
      for ( i = 0; i < v3; ++i )
      {
        ColumnValueForRow = StringTable_GetColumnValueForRow(tablePtr, i, 0);
        if ( i != atoi(ColumnValueForRow) )
        {
          v6 = StringTable_GetColumnValueForRow(tablePtr, i, 0);
          LODWORD(v11) = i;
          LODWORD(v9) = atoi(v6);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1389, ASSERT_TYPE_ASSERT, "(row == atoi( StringTable_GetColumnValueForRow( table, row, 0 ) ))", "%s\n\tMod Id:[%d] does not match the row Id:[%d]", "row == atoi( StringTable_GetColumnValueForRow( table, row, 0 ) )", v9, v11) )
            __debugbreak();
        }
        v7 = StringTable_GetColumnValueForRow(tablePtr, i, 2);
        if ( *v7 )
          Material_RegisterHandle(v7, IMAGE_TRACK_HUD);
      }
      Material_RegisterHandle("killicondied", IMAGE_TRACK_HUD);
    }
  }
  Material_RegisterHandle("statmon_warn", IMAGE_TRACK_DEBUG);
  Material_RegisterHandle("statmon_budget", IMAGE_TRACK_DEBUG);
}

/*
==============
CG_MainMP_IsPrematchCountdown
==============
*/
bool CG_MainMP_IsPrematchCountdown(const LocalClientNum_t localClientNum)
{
  CgGlobalsMP *LocalClientGlobals; 
  unsigned int m_omnvarIndexStartMatchTimer; 
  const OmnvarData *Data; 
  const OmnvarDef *Def; 
  bool result; 

  result = 0;
  if ( CL_IsLocalClientConnectionActiveForGameServer(localClientNum) )
  {
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
    m_omnvarIndexStartMatchTimer = LocalClientGlobals->m_omnvarIndexStartMatchTimer;
    if ( m_omnvarIndexStartMatchTimer != -1 )
    {
      Data = CG_Omnvar_GetData(localClientNum, m_omnvarIndexStartMatchTimer);
      Def = BG_Omnvar_GetDef(LocalClientGlobals->m_omnvarIndexStartMatchTimer);
      if ( Omnvar_GetInteger(Def, Data) > 0 )
        return 1;
    }
  }
  return result;
}

/*
==============
CG_MainMP_LoadAnimTreeInstances
==============
*/
void CG_MainMP_LoadAnimTreeInstances(LocalClientNum_t localClientNum)
{
  LocalClientNum_t v1; 
  CgStatic *LocalClientStatics; 
  __int64 v3; 
  XAnim_s *v4; 
  int v5; 
  int v6; 
  cg_t *LocalClientGlobals; 
  XAnimOwner v8; 
  characterInfo_t *CharacterInfo; 
  cgs_t *LocalClientStaticGlobals; 
  XAnimOwner v11; 
  XAnimTree **i; 
  __int64 v13; 
  __int64 v14; 

  v1 = localClientNum;
  if ( !PlayerASM_IsEnabled() || !PlayerASM_IsConnectingPaths() )
  {
    LocalClientStatics = CgStatic::GetLocalClientStatics(v1);
    v3 = (__int64)LocalClientStatics->GetAnimStatics(LocalClientStatics);
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1253, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
      __debugbreak();
    v4 = *(XAnim_s **)(v3 + 17712);
    v5 = 0;
    v6 = 0;
    if ( cls.maxClients > 0 )
    {
      do
      {
        LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
        if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
          __debugbreak();
        if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
        {
          if ( v6 >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
          {
            LODWORD(v14) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
            LODWORD(v13) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v13, v14) )
              __debugbreak();
          }
          CharacterInfo = (characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * v6);
        }
        else
        {
          CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, v6);
        }
        if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1260, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
          __debugbreak();
        LOBYTE(v8) = 1;
        ++v6;
        CharacterInfo->pXAnimTree = XAnimCreateTree(v4, CG_MainMP_AllocXAnimClient, v8);
      }
      while ( v6 < cls.maxClients );
      v1 = localClientNum;
      v5 = 0;
    }
    LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(v1);
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_clientCorpseCount > 8 )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      LODWORD(v14) = 8;
      LODWORD(v13) = ComCharacterLimits::ms_gameData.m_clientCorpseCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1267, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetClientCorpseMaxCount() ) <= ( ( sizeof( *array_counter( cgs->corpseinfo ) ) + 0 ) )", "ComCharacterLimits::GetClientCorpseMaxCount() <= ARRAY_COUNT( cgs->corpseinfo )\n\t%i, %i", v13, v14) )
        __debugbreak();
    }
    for ( i = &LocalClientStaticGlobals->corpseinfo[0].ci.pXAnimTree; ; i += 3363 )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v5 >= (int)ComCharacterLimits::ms_gameData.m_clientCorpseCount )
        break;
      LOBYTE(v11) = 1;
      ++v5;
      *i = XAnimCreateTree(v4, CG_MainMP_AllocXAnimClient, v11);
    }
  }
}

/*
==============
CG_MainMP_LoadMigrationPers
==============
*/
void CG_MainMP_LoadMigrationPers(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  ViewJostleState *linkedToPlayerView; 
  __int64 v15; 
  char *fmt; 
  __int64 v17; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  _RSI = v1;
  _RBP = clientUIActives;
  if ( clientUIActives[v1].migrationPers.weaponSelectInAlt && !BG_HasUnderbarrelAmmo(&clientUIActives[_RSI].migrationPers.weaponSelect) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 2523, ASSERT_TYPE_ASSERT, "(!clM->weaponSelectInAlt || BG_HasUnderbarrelAmmo( clM->weaponSelect ))", (const char *)&queryFormat, "!clM->weaponSelectInAlt || BG_HasUnderbarrelAmmo( clM->weaponSelect )") )
    __debugbreak();
  _RBX = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
  LODWORD(v17) = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v1)->serverTimeDelta;
  LODWORD(fmt) = cls.realtime;
  Com_Printf(25, "CG_LoadMigrationPers: cgameGlob->time(%d), cgameGlob->oldTime(%d), cls.realtime(%d), serverTimeDelta(%d)\n", (unsigned int)_RBX->time, (unsigned int)_RBX->oldTime, fmt, v17);
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+rbp+0C0h]
    vmovups ymmword ptr [rbx+18114h], ymm0
    vmovups xmm1, xmmword ptr [rsi+rbp+0E0h]
    vmovups xmmword ptr [rbx+18134h], xmm1
    vmovsd  xmm0, qword ptr [rsi+rbp+0F0h]
    vmovsd  qword ptr [rbx+18144h], xmm0
  }
  *(_DWORD *)&_RBX->weaponSelect.weaponCamo = *(_DWORD *)&clientUIActives[_RSI].migrationPers.weaponSelect.weaponCamo;
  _RBX->weaponSelectTime = clientUIActives[_RSI].migrationPers.weaponSelectTime;
  _RBX->weaponForcedSelectTime = clientUIActives[_RSI].migrationPers.weaponForcedSelectTime;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+rbp+108h]
    vmovups ymmword ptr [rbx+1815Ch], ymm0
    vmovups xmm1, xmmword ptr [rsi+rbp+128h]
    vmovups xmmword ptr [rbx+1817Ch], xmm1
    vmovsd  xmm0, qword ptr [rsi+rbp+138h]
    vmovsd  qword ptr [rbx+1818Ch], xmm0
  }
  *(_DWORD *)&_RBX->weaponLatestPrimary.weaponCamo = *(_DWORD *)&clientUIActives[_RSI].migrationPers.weaponLatestPrimary.weaponCamo;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+rbp+144h]
    vmovups ymmword ptr [rbx+18198h], ymm0
    vmovups xmm1, xmmword ptr [rsi+rbp+164h]
    vmovups xmmword ptr [rbx+181B8h], xmm1
    vmovsd  xmm0, qword ptr [rsi+rbp+174h]
    vmovsd  qword ptr [rbx+181C8h], xmm0
  }
  *(_DWORD *)&_RBX->weaponPrevPrimary.weaponCamo = *(_DWORD *)&clientUIActives[_RSI].migrationPers.weaponPrevPrimary.weaponCamo;
  _RBX->holdBreathTime = clientUIActives[_RSI].migrationPers.holdBreathTime;
  _RBX->holdBreathDelay = clientUIActives[_RSI].migrationPers.holdBreathDelay;
  _RBX->holdBreathFrac = clientUIActives[_RSI].migrationPers.holdBreathFrac;
  CG_Blur_LoadMigrationPers((LocalClientNum_t)v1, &clientUIActives[_RSI].migrationPers.blurPers);
  linkedToPlayerView = _RBX->linkedToPlayerView;
  v15 = 4i64;
  do
  {
    ViewJostleState::Reset(linkedToPlayerView++);
    --v15;
  }
  while ( v15 );
}

/*
==============
CG_MainMP_LoadNewMapBsp
==============
*/
void CG_MainMP_LoadNewMapBsp(LocalClientNum_t localClientNum, const char *mapname, bool isGameServer)
{
  int World; 
  unsigned int v7; 
  ClActiveClientMP *ClientMP; 
  cgs_t *LocalClientStaticGlobals; 
  __int64 mapcrc; 
  const char *v11; 
  ConversionArguments arguments; 
  char filename[64]; 
  char dest[32]; 
  char v15[32]; 
  char outputString[512]; 

  if ( !mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1517, ASSERT_TYPE_ASSERT, "(mapname)", (const char *)&queryFormat, "mapname") )
    __debugbreak();
  if ( !*mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1518, ASSERT_TYPE_ASSERT, "(mapname[0])", (const char *)&queryFormat, "mapname[0]") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "CG_MainMP_LoadNewMapBsp");
  Com_GetBspFilename(filename, 64, mapname);
  CL_CGameMP_LoadMap(filename);
  CG_ServerCmdMP_ParsePlayerInfos(localClientNum);
  if ( !g_mapLoaded )
  {
    FX_LoadWorld(filename);
    if ( isGameServer )
      World = CL_CGameMP_LoadWorld(filename);
    else
      World = Com_FrontEndScene_GetWorldChecksum();
    g_mapLoaded = 1;
    v7 = World;
    ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
    LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(localClientNum);
    mapcrc = (unsigned int)ClientMP->mapcrc;
    if ( LocalClientStaticGlobals->localServer )
    {
      if ( v7 != (_DWORD)mapcrc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1550, ASSERT_TYPE_ASSERT, "(checksum == cl->mapcrc)", "%s\n\tchecksum is %d, mapcrc is %d", "checksum == cl->mapcrc", v7, mapcrc) )
        __debugbreak();
    }
    else if ( (_DWORD)mapcrc != v7 )
    {
      Com_sprintf(dest, 0x20ui64, "%d", mapcrc);
      Com_sprintf(v15, 0x20ui64, "%d", v7);
      arguments.argCount = 2;
      arguments.args[0] = dest;
      arguments.args[1] = v15;
      v11 = UI_SafeTranslateString("MP/MAPDIFFERSFROMSERVERDEV");
      UI_ReplaceConversions(v11, &arguments, outputString, 0x200ui64);
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&queryFormat, outputString);
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_MainMP_RegisterDvars
==============
*/

void __fastcall CG_MainMP_RegisterDvars(__int64 a1, __int64 a2, double _XMM2_8)
{
  const dvar_t *v18; 
  const dvar_t *v22; 
  const dvar_t *v26; 
  const dvar_t *v30; 
  const dvar_t *v34; 
  const dvar_t *v43; 
  const dvar_t *v57; 
  const dvar_t *v61; 
  const dvar_t *v68; 
  const dvar_t *v72; 
  const dvar_t *v81; 
  const dvar_t *v85; 
  const dvar_t *v89; 
  const dvar_t *v93; 
  const dvar_t *v97; 
  const dvar_t *v109; 
  const dvar_t *v116; 
  const dvar_t *v121; 
  const dvar_t *v125; 
  const dvar_t *v130; 
  const dvar_t *v134; 
  const dvar_t *v138; 
  const dvar_t *v142; 
  const dvar_t *v146; 
  const dvar_t *v150; 
  const dvar_t *v154; 
  const dvar_t *v158; 
  const dvar_t *v162; 
  const dvar_t *v166; 
  const dvar_t *v170; 
  const dvar_t *v174; 
  const dvar_t *v178; 
  const dvar_t *v186; 
  const dvar_t *v190; 
  const dvar_t *v194; 
  const dvar_t *v198; 
  const dvar_t *v202; 
  const dvar_t *v207; 
  const dvar_t *v211; 
  const dvar_t *v215; 
  const dvar_t *v219; 
  const dvar_t *v223; 
  const dvar_t *v246; 
  const dvar_t *v261; 
  const dvar_t *v265; 
  const dvar_t *v282; 
  const dvar_t *v289; 
  const dvar_t *v299; 
  const dvar_t *v306; 
  const dvar_t *v310; 
  const dvar_t *v319; 
  const dvar_t *v323; 
  const dvar_t *v327; 
  const dvar_t *v348; 
  const dvar_t *v359; 
  const dvar_t *v363; 
  const dvar_t *v367; 
  const dvar_t *v372; 
  const dvar_t *v403; 
  const dvar_t *v414; 
  const dvar_t *v419; 
  const dvar_t *v423; 
  const dvar_t *v433; 
  const dvar_t *v438; 
  const dvar_t *v442; 
  const dvar_t *v449; 
  const dvar_t *v453; 
  const dvar_t *v457; 
  const dvar_t *v464; 
  const dvar_t *v468; 
  const dvar_t *v475; 
  const dvar_t *v489; 
  const dvar_t *v501; 
  const dvar_t *v508; 
  const dvar_t *v516; 
  const dvar_t *v520; 
  const dvar_t *v524; 
  const dvar_t *v550; 
  const dvar_t *v560; 
  const dvar_t *v567; 
  const dvar_t *v581; 
  const dvar_t *v585; 
  const dvar_t *v590; 
  const dvar_t *v597; 
  const dvar_t *v601; 
  const dvar_t *v608; 
  const dvar_t *v615; 
  const dvar_t *v619; 
  const dvar_t *v623; 
  const dvar_t *v627; 
  const dvar_t *v632; 
  const dvar_t *v637; 
  const dvar_t *v648; 
  const dvar_t *v652; 
  const dvar_t *v656; 
  const dvar_t *v660; 
  const dvar_t *v664; 
  const dvar_t *v668; 
  const dvar_t *v672; 
  const dvar_t *v683; 
  const dvar_t *v688; 
  const dvar_t *v692; 
  const dvar_t *v696; 
  const dvar_t *v700; 
  const dvar_t *v719; 
  const dvar_t *v723; 
  const dvar_t *v727; 
  const dvar_t *v731; 
  const dvar_t *v735; 
  const dvar_t *v739; 
  const dvar_t *v749; 
  const dvar_t *v756; 
  const dvar_t *v760; 
  const dvar_t *v764; 
  const dvar_t *v768; 
  const dvar_t *v773; 
  const dvar_t *v778; 
  const dvar_t *v782; 
  const dvar_t *v795; 
  float flags; 
  float flagsa; 
  float flagsb; 
  float flagsc; 
  float flagsd; 
  float flagse; 
  float flagsf; 
  float flagsg; 
  float flagsh; 
  float flagsi; 
  float flagsj; 
  float flagsk; 
  float flagsl; 
  float flagsm; 
  float flagsn; 
  float flagso; 
  float flagsp; 
  float flagsq; 
  float flagsr; 
  float flagss; 
  float flagst; 
  float flagsu; 
  float flagsv; 
  float flagsw; 
  float flagsx; 
  float flagsy; 
  float flagsz; 
  float flagsba; 
  float flagsbb; 
  float flagsbc; 
  float flagsbd; 
  float flagsbe; 
  float flagsbf; 
  float flagsbg; 
  float flagsbh; 
  float description; 
  float descriptiona; 
  float descriptionb; 
  float descriptionc; 
  float descriptiond; 
  float descriptione; 
  float descriptionf; 
  float descriptiong; 
  float descriptionh; 
  float descriptioni; 
  float descriptionj; 
  float descriptionk; 
  float v854; 
  float v855; 
  float v856; 
  float v857; 
  float v858; 
  float v859; 
  float v860; 
  char v864; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovss  xmm1, cs:__real@44800000; value
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovss  xmm6, cs:__real@487a0000
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps [rsp+0F8h+var_88], xmm13
    vmovaps [rsp+0F8h+var_98], xmm14
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps [rsp+0F8h+var_A8], xmm15
  }
  v18 = Dvar_RegisterFloat("cg_distanceCache_ringRadius0", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "CG_DistanceCacheMP ring 0 radius");
  __asm { vmovss  xmm1, cs:__real@46000000; value }
  DCONST_DVARFLT_cg_distanceCache_ringRadius0 = v18;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v22 = Dvar_RegisterFloat("cg_distanceCache_ringRadius1", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "CG_DistanceCacheMP ring 1 radius");
  __asm { vmovss  xmm1, cs:__real@46800000; value }
  DCONST_DVARFLT_cg_distanceCache_ringRadius1 = v22;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v26 = Dvar_RegisterFloat("cg_distanceCache_ringRadius2", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "CG_DistanceCacheMP ring 2 radius");
  __asm { vmovss  xmm1, cs:__real@47000000; value }
  DCONST_DVARFLT_cg_distanceCache_ringRadius2 = v26;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v30 = Dvar_RegisterFloat("cg_distanceCache_ringRadius3", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "CG_DistanceCacheMP ring 3 radius");
  __asm { vmovss  xmm1, cs:__real@47800000; value }
  DCONST_DVARFLT_cg_distanceCache_ringRadius3 = v30;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v34 = Dvar_RegisterFloat("cg_distanceCache_ringRadius4", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "CG_DistanceCacheMP ring 4 radius");
  __asm
  {
    vmovss  xmm8, cs:__real@3f800000
    vmovss  xmm1, cs:__real@3eb33333; value
  }
  DCONST_DVARFLT_cg_distanceCache_ringRadius4 = v34;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm11, cs:__real@461c4000
  }
  DCONST_DVARFLT_no_kick_velocity_dampen = Dvar_RegisterFloat("no_kick_velocity_dampen", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "On weapons without kick return, the angular velocity needs to decay to 0. This controls the rate at which the weapon decellerates.");
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v43 = Dvar_RegisterFloat("LQQQTTTMMO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Things closer than this aren't drawn. Reducing this increases z-fighting in the distance. This is active during the front-end scene only");
  __asm { vmovss  xmm3, cs:__real@7f7fffff; max }
  DVARFLT_cg_frontEndSceneZnear = v43;
  __asm
  {
    vmovss  xmm1, cs:__real@41c00000; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_deathCamMaxCutThreshold = Dvar_RegisterFloat("cg_deathCamMaxCutThreshold", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Maximum distance (inches) that the third-person death camera can cut toward the victim due to an obstruction without falling back to the fixed death camera.");
  DVARINT_cg_fixedDeathCamInterpTimeMs = Dvar_RegisterInt("LRPNPLOORM", 0, 0, 5000, 0, "The time it takes for the camera to catch up to the death body look at orientation.");
  DVARINT_cg_fixedDeathCamTraceFailedInterpTimeMs = Dvar_RegisterInt("MKRPTLLKKM", 300, 0, 5000, 0, "Similar to cg_FixedDeathCamInterpTimeMs, but only used using fixed camera due to death camera shapecasts failing.");
  __asm { vmovss  xmm3, cs:__real@447a0000; max }
  DCONST_DVARBOOL_cg_thirdPersonCamDebug = Dvar_RegisterBool("cg_thirdPersonCamDebug", 0, 0x40004u, "Debug third-person camera");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_cg_debugCamPivot = Dvar_RegisterFloat("cg_debugCamPivot", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Any value >0 (radius) to render debug sphere on the camera pivot used for streaming (orbit pivot or first person view origin)");
  DCONST_DVARBOOL_cg_playerCullingPriorities = Dvar_RegisterBool("cg_playerCullingPriorities", 1, 0x40004u, "Enable player update culling and LOD Controls for large-modes");
  DCONST_DVARBOOL_cg_playerAnimUpdateCulling = Dvar_RegisterBool("cg_playerAnimUpdateCulling", 1, 0x40004u, "Enable player update animation culling");
  DCONST_DVARBOOL_cg_playerAnimUpdateDebug = Dvar_RegisterBool("cg_playerAnimUpdateDebug", 0, 0x40004u, "Enable debugging for the animation culling");
  DCONST_DVARINT_cg_playerAnimUpdateFrameCount = Dvar_RegisterInt("cg_playerAnimUpdateFrameCount", 7, 0, 200, 0x40004u, "Number of characters to always update per frame based on distance");
  DCONST_DVARINT_cg_playerAnimUpdateFillCount = Dvar_RegisterInt("cg_playerAnimUpdateFillCount", 15, 1, 200, 0x40004u, "Number of characters to update per frame based LRU fill");
  DCONST_DVARINT_cg_playerAnimMaxBackgroundUpdateCount = Dvar_RegisterInt("cg_playerAnimMaxBackgroundUpdateCount", 4, 0, 200, 0x40004u, "Maximum number of per frame updates for characters that have exceeded their maximum accumulated animation time.");
  DCONST_DVARBOOL_cg_playerAnimUpdateInstantBlend = Dvar_RegisterBool("cg_playerAnimUpdateInstantBlend", 1, 0x40004u, "Enable zero blend time for LRU characters.");
  DCONST_DVARINT_cg_playerAnimUpdateInstantBlendMinLODLevel = Dvar_RegisterInt("cg_playerAnimUpdateInstantBlendMinLODLevel", 3, 0, 5, 0x40004u, "Min LOD level to activate zero blend for LRU characters.");
  DCONST_DVARINT_cg_playerAnimUpdateMinAccumTime = Dvar_RegisterInt("cg_playerAnimUpdateMinAccumTime", 0, 0, 1000, 0x40004u, "Number of ms to wait until updating animation on the character.");
  DCONST_DVARINT_cg_playerAnimUpdateMaxAccumTimeSeconds = Dvar_RegisterInt("cg_playerAnimUpdateMaxAccumTimeSeconds", 300, 0, 1200, 0x40004u, "Maximum number of seconds between character animation updates.");
  DCONST_DVARINT_cg_playerAnimUpdateMaxAccumTimeRangeSeconds = Dvar_RegisterInt("cg_playerAnimUpdateMaxAccumTimeRangeSeconds", 30, 0, 120, 0x40004u, "Variation in maximum accumulation time to distribute between players.");
  DCONST_DVARINT_cg_playerFoliageSoundCount = Dvar_RegisterInt("cg_playerFoliageSoundCount", 5, 1, 200, 0x40004u, "Number of closest characters who can try to play foliage sounds for each frame");
  DCONST_DVARINT_cg_playerNoteTrackSoundCount = Dvar_RegisterInt("cg_playerNoteTrackSoundCount", 10, 1, 200, 0x40004u, "Number of closest characters who can try to try to play note track (footsteps, equipment) sounds for each frame");
  DCONST_DVARINT_cg_playerAnimMaxLODCount0 = Dvar_RegisterInt("cg_playerAnimMaxLODCount0", 5, 1, 200, 0x40004u, "Maximum number of characters to calculate at LOD 0");
  DCONST_DVARINT_cg_playerAnimMaxLODCount1 = Dvar_RegisterInt("cg_playerAnimMaxLODCount1", 5, 1, 200, 0x40004u, "Maximum number of characters to calculate at LOD 1");
  DCONST_DVARINT_cg_playerAnimMaxLODCount2 = Dvar_RegisterInt("cg_playerAnimMaxLODCount2", 8, 1, 200, 0x40004u, "Maximum number of characters to calculate at LOD 2");
  DVARBOOL_cg_playerAnimReuseSkelPose = Dvar_RegisterBool("LRPLOQQNSM", 1, 0, "Enable optimization that reuses pose calculated for previous frame when skipping player animation updates.");
  DCONST_DVARINT_cg_prefetchPlayerCardsFrameCount = Dvar_RegisterInt("cg_prefetchPlayerCardsFrameCount", 20, 1, 200, 0x40004u, "Number of characters to prefetch playercards for each frame");
  DCONST_DVARBOOL_cg_localPlayerDObjFrameOrderFix = Dvar_RegisterBool("cg_localPlayerDObjFrameOrderFix", 1, 0x40004u, "Moves the processing of the local player dobj to an earlier place in the frame so all systems access the correct pose");
  __asm
  {
    vmovss  xmm13, cs:__real@42c80000
    vmovss  xmm1, cs:__real@3f266666; value
  }
  DVARBOOL_cg_mlg_enable_cameras = Dvar_RegisterBool("MOMRRMTMN", 1, 0x40000u, "enable or disable the CoDCaster cameras (free, aerial) capabilities");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cg_mlg_freecam_speed_base = Dvar_RegisterFloat("NRKNMTPMTO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "CoDCaster free camera base speed.");
  __asm { vmovss  xmm1, cs:__real@3ecccccd; value }
  DVARBOOL_cg_mlg_freecam_speed_toggle = Dvar_RegisterBool("OMQMPLPOLR", 1, 0, "enable or disable the speed toggling of CoDCaster cameras.");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v57 = Dvar_RegisterFloat("PPQPQLPKQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "CoDCaster free camera minimal speed.");
  __asm { vmovss  xmm1, cs:__real@3ff33333; value }
  DVARFLT_cg_mlg_freecam_speed_slow_factor = v57;
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v61 = Dvar_RegisterFloat("NLSLSQLQP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "CoDCaster free camera maximal speed.");
  __asm
  {
    vmovss  xmm3, cs:__real@47c35000; max
    vmovss  xmm1, cs:__real@3b03126f; value
  }
  DVARFLT_cg_mlg_freecam_speed_fast_factor = v61;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DVARFLT_cg_mlg_freecam_sensitivity = Dvar_RegisterFloat("LMRLKTKKRK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40000u, "CoDCaster free camera sensitivity.");
  __asm
  {
    vmovss  xmm3, cs:__real@42b40000; max
    vmovss  xmm1, cs:__real@428c0000; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  v68 = Dvar_RegisterFloat("MPNKKLQRLL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40000u, "CoDCaster aerial camera pitch");
  __asm
  {
    vmovss  xmm3, cs:__real@41200000; max
    vmovss  xmm1, cs:__real@40400000; value
  }
  DVARFLT_cg_mlg_aerialcam_pitch = v68;
  __asm { vmovaps xmm2, xmm8; min }
  v72 = Dvar_RegisterFloat("QTRLNNRTR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40000u, "CoDCaster aerial camera horizontal distance factor");
  __asm
  {
    vmovss  xmm2, cs:__real@41200000; min
    vmovss  xmm1, cs:__real@44960000; value
  }
  DVARFLT_cg_mlg_aerialcam_horizontal_distance_factor = v72;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vmovss  xmm7, cs:__real@49742400
    vmovss  xmm10, cs:__real@43fa0000
  }
  DVARFLT_cg_mlg_aerialcam_base_vertical_distance = Dvar_RegisterFloat("NSMLPKLRLR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40000u, "CoDCaster aerial camera base distance");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm10; value
  }
  v81 = Dvar_RegisterFloat("OKPQONTRRP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40000u, "CoDCaster aerial camera min distance");
  __asm { vmovss  xmm1, cs:__real@457a0000; value }
  DVARFLT_cg_mlg_aerialcam_minimal_vertical_distance = v81;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v85 = Dvar_RegisterFloat("MRRMNNKQMP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40000u, "CoDCaster aerial camera max distance");
  __asm { vmovss  xmm1, cs:__real@44160000; value }
  DVARFLT_cg_mlg_aerialcam_maximal_vertical_distance = v85;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v89 = Dvar_RegisterFloat("NOKQLPKNTK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40000u, "CoDCaster aerial camera max radius around tethered player");
  __asm { vmovss  xmm1, cs:__real@457a0000; value }
  DVARFLT_cg_mlg_aerialcam_maximal_tether_radius = v89;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v93 = Dvar_RegisterFloat("MTLOLRRLQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40000u, "CoDCaster camera distance for the max animation duration");
  __asm
  {
    vmovss  xmm3, cs:__real@42700000; max
    vmovss  xmm1, cs:__real@3f000000; value
  }
  DVARFLT_cg_mlg_cam_animation_distance_max_time = v93;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v97 = Dvar_RegisterFloat("NNTQNOQKQT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40000u, "CoDCaster camera minimun animation duration in seconds");
  __asm
  {
    vmovss  xmm3, cs:__real@42700000; max
    vmovss  xmm1, cs:__real@3fcccccd; value
  }
  DVARFLT_cg_mlg_cam_animation_min_duration = v97;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DVARFLT_cg_mlg_cam_animation_max_duration = Dvar_RegisterFloat("LLNLQPSOTL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40000u, "CoDCaster maximum camera animation duration in seconds");
  __asm
  {
    vmovss  xmm1, cs:__real@3be56042; value
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cg_mlg_cam_smooth_factor = Dvar_RegisterFloat("NKOLKNSQNP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "CoDCaster camera smooth factor.");
  DVARBOOL_cg_enableLaserWorkers = Dvar_RegisterBool("LTKKRTQSPP", 1, 0, "Enable laser draw workers.");
  __asm
  {
    vmovss  xmm8, cs:__real@43200000
    vmovss  xmm11, cs:__real@3dcccccd
    vmovss  xmm1, cs:__real@41700000; value
  }
  DCONST_DVARBOOL_cg_killcamdebug = Dvar_RegisterBool("cg_killcamdebug", 0, 0x40004u, "Enables debugging visualization of the killcam entity system");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vmovaps xmm2, xmm11; min
  }
  v109 = Dvar_RegisterFloat("LRMTKKLPOS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Helicopter kill camera field of view.");
  __asm { vmovss  xmm1, cs:__real@42480000; value }
  DVARFLT_cg_heliKillCamFov = v109;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vmovaps xmm2, xmm11; min
  }
  DVARFLT_cg_airstrikeKillCamFov = Dvar_RegisterFloat("LNPLOROPQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Airstrike kill camera field of view.");
  __asm
  {
    vmovss  xmm3, cs:__real@7f7fffff; max
    vmovss  xmm2, cs:__real@ff7fffff; min
    vmovss  xmm1, cs:__real@41a00000; value
  }
  DCONST_DVARBOOL_cg_explosiveKillCamUseLegacy = Dvar_RegisterBool("cg_explosiveKillCamUseLegacy", 0, 0x40004u, "Use legacy explosive killcam.  (emergency fallback)");
  v116 = Dvar_RegisterFloat("cg_explosiveKillCamUpDist", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Explosive kill camera: distance of camera vertically from explosive.");
  __asm
  {
    vmovss  xmm7, cs:__real@42f00000
    vmovss  xmm3, cs:__real@7f7fffff; max
    vmovss  xmm2, cs:__real@ff7fffff; min
  }
  DCONST_DVARFLT_cg_explosiveKillCamUpDist = v116;
  __asm { vmovaps xmm1, xmm7; value }
  v121 = Dvar_RegisterFloat("cg_explosiveKillCamBackDist", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Explosive kill camera: distance of camera backwards from explosive.");
  __asm
  {
    vmovss  xmm3, cs:__real@7f7fffff; max
    vmovss  xmm2, cs:__real@ff7fffff; min
    vmovss  xmm1, cs:__real@41a00000; value
  }
  DCONST_DVARFLT_cg_explosiveKillCamBackDist = v121;
  v125 = Dvar_RegisterFloat("cg_explosiveKillCamGroundUpDist", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Explosive kill camera when stuck to ground: distance of camera vertically from explosive.");
  __asm
  {
    vmovss  xmm6, cs:__real@ff7fffff
    vmovss  xmm3, cs:__real@7f7fffff; max
  }
  DCONST_DVARFLT_cg_explosiveKillCamGroundUpDist = v125;
  __asm
  {
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm7; value
  }
  v130 = Dvar_RegisterFloat("cg_explosiveKillCamGroundBackDist", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Explosive kill camera when stuck to ground: distance of camera backwards from explosive.");
  __asm
  {
    vmovss  xmm3, cs:__real@7f7fffff; max
    vmovss  xmm1, cs:__real@41200000; value
  }
  DCONST_DVARFLT_cg_explosiveKillCamGroundBackDist = v130;
  __asm { vmovaps xmm2, xmm6; min }
  v134 = Dvar_RegisterFloat("cg_rocketKillCamUpDist", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Rocket kill camera: distance of camera vertically from rocket.");
  __asm { vmovss  xmm3, cs:__real@7f7fffff; max }
  DCONST_DVARFLT_cg_rocketKillCamUpDist = v134;
  __asm
  {
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm7; value
  }
  v138 = Dvar_RegisterFloat("cg_rocketKillCamBackDist", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Rocket kill camera: distance of camera backwards from rocket.");
  __asm
  {
    vmovss  xmm3, cs:__real@7f7fffff; max
    vmovss  xmm1, cs:__real@42700000; value
  }
  DCONST_DVARFLT_cg_rocketKillCamBackDist = v138;
  __asm { vmovaps xmm2, xmm6; min }
  v142 = Dvar_RegisterFloat("cg_remoteMissileKillCamUpDist", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Remote missile kill camera: distance of camera vertically from rocket.");
  __asm
  {
    vmovss  xmm3, cs:__real@7f7fffff; max
    vmovss  xmm1, cs:__real@43960000; value
  }
  DCONST_DVARFLT_cg_remoteMissileKillCamUpDist = v142;
  __asm { vmovaps xmm2, xmm6; min }
  v146 = Dvar_RegisterFloat("cg_remoteMissileKillCamBackDist", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Remote missile kill camera: distance of camera backwards from rocket.");
  __asm { vmovss  xmm3, cs:__real@7f7fffff; max }
  DCONST_DVARFLT_cg_remoteMissileKillCamBackDist = v146;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  v150 = Dvar_RegisterFloat("cg_explosiveKillCamStopDist", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Rocket and Grenade Launcher kill camera: distance from player to begin coming to rest");
  __asm
  {
    vmovss  xmm3, cs:__real@7f7fffff; max
    vmovss  xmm1, cs:__real@447a0000; value
  }
  DCONST_DVARFLT_cg_explosiveKillCamStopDist = v150;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v154 = Dvar_RegisterFloat("cg_explosiveKillCamStopDecelDist", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Rocket and Grenade Launcher kill camera: distance over which to decelerate when coming to rest");
  __asm
  {
    vmovss  xmm3, cs:__real@7f7fffff; max
    vmovss  xmm1, cs:__real@43480000; value
  }
  DCONST_DVARFLT_cg_explosiveKillCamStopDecelDist = v154;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v158 = Dvar_RegisterFloat("cg_explosiveKillCamStopSpeedThreshold", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Rocket and grenade launcher kill camera: minimum speed of projectile for deceleration algorithm to kick in (inches per second)");
  __asm
  {
    vmovss  xmm3, cs:__real@7f7fffff; max
    vmovss  xmm1, cs:__real@41c00000; value
  }
  DCONST_DVARFLT_cg_explosiveKillCamStopSpeedThreshold = v158;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v162 = Dvar_RegisterFloat("cg_explosiveKillCamPredictStickDist", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Distance between killCamEntity and killCamLookAtEntity where the client can predict that the projectile is stuck.");
  __asm
  {
    vmovss  xmm3, cs:__real@7f7fffff; max
    vmovss  xmm1, cs:__real@41200000; value
  }
  DCONST_DVARFLT_cg_explosiveKillCamPredictStickDist = v162;
  __asm { vmovaps xmm2, xmm6; min }
  v166 = Dvar_RegisterFloat("MPSSNLOSSK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Turret kill camera: distance of camera vertically from Turret.");
  __asm
  {
    vmovss  xmm3, cs:__real@7f7fffff; max
    vmovss  xmm1, cs:__real@41200000; value
  }
  DVARFLT_cg_turretKillCamUpDist = v166;
  __asm { vmovaps xmm2, xmm6; min }
  v170 = Dvar_RegisterFloat("NSMKSMPPTS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Turret kill camera: distance of camera backwards from Turret.");
  __asm { vmovss  xmm1, cs:__real@42480000; value }
  DVARFLT_cg_turretKillCamBackDist = v170;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vmovaps xmm2, xmm11; min
  }
  v174 = Dvar_RegisterFloat("NMQTRORTPM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Turret kill camera field of view.");
  __asm
  {
    vmovss  xmm3, cs:__real@7f7fffff; max
    vmovss  xmm1, cs:__real@42200000; value
  }
  DVARFLT_cg_turretKillCamFov = v174;
  __asm { vmovaps xmm2, xmm6; min }
  v178 = Dvar_RegisterFloat("TOSKRRNMK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Remote Turret kill camera: distance of camera vertically from Turret.");
  __asm { vmovss  xmm3, cs:__real@7f7fffff; max }
  DVARFLT_cg_turretRemoteKillCamUpDist = v178;
  __asm
  {
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm13; value
  }
  DVARFLT_cg_turretRemoteKillCamBackDist = Dvar_RegisterFloat("LTTMLTOQLO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Remote Turret kill camera: distance of camera backwards from Turret.");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vmovss  xmm8, cs:__real@42480000
    vmovaps xmm1, xmm8; value
    vmovaps xmm2, xmm11; min
  }
  v186 = Dvar_RegisterFloat("NNRKTRSLNQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Remote Turret kill camera field of view.");
  __asm { vmovss  xmm3, cs:__real@7f7fffff; max }
  DVARFLT_cg_turretRemoteKillCamFov = v186;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm10; value
  }
  v190 = Dvar_RegisterFloat("LTMQPOOPRO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Javelin kill camera: closest distance above the target.");
  __asm
  {
    vmovss  xmm3, cs:__real@7f7fffff; max
    vmovss  xmm1, cs:__real@40a00000; value
  }
  DVARFLT_cg_javelinKillCamCloseZDist = v190;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v194 = Dvar_RegisterFloat("MRNQSMPPKK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Javelin kill camera: time in seconds to pass javelin on the way up");
  __asm
  {
    vmovss  xmm3, cs:__real@43340000; max
    vmovss  xmm1, cs:__real@42700000; value
  }
  DVARFLT_cg_javelinKillCamPassTime = v194;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v198 = Dvar_RegisterFloat("NTRSNPPPQN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Javelin kill camera: fov");
  __asm { vmovss  xmm3, cs:__real@43340000; max }
  DVARFLT_cg_javelinKillCamFov = v198;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  v202 = Dvar_RegisterFloat("LSRRROPSLT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Javelin kill camera: distance away when passing.");
  __asm
  {
    vmovss  xmm6, cs:__real@7f7fffff
    vmovss  xmm1, cs:__real@43480000; value
  }
  DVARFLT_cg_javelinKillCamPassDist = v202;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v207 = Dvar_RegisterFloat("NRLNSNOLKN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Javelin kill camera: distance to follow during ascent.");
  __asm { vmovss  xmm1, cs:__real@43160000; value }
  DVARFLT_cg_javelinKillCamUpDist = v207;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v211 = Dvar_RegisterFloat("NNLTLOLTNQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Javelin kill camera: distance to follow during descent.");
  __asm { vmovss  xmm1, cs:__real@453b8000; value }
  DVARFLT_cg_javelinKillCamDownDist = v211;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v215 = Dvar_RegisterFloat("NLTLKKKTPS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Javelin kill camera: distance over which to lerp to look at player during descent.  A value of zero means don't lerp at all.");
  __asm
  {
    vmovss  xmm3, cs:__real@42b40000; max
    vmovss  xmm2, cs:__real@c2a00000; min
    vmovss  xmm1, cs:__real@42340000; value
  }
  DVARFLT_cg_javelinKillCamLookLerpDist = v215;
  v219 = Dvar_RegisterFloat("MOSNPPMQOQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Javelin kill camera: missile pitch angle where 'down' camera behavior is completely blended in.");
  __asm { vmovss  xmm1, cs:__real@40a00000; value }
  DVARFLT_cg_javelinKillCamPitchDownBlendFinish = v219;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v223 = Dvar_RegisterFloat("NSKRQNKKOK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Killcam blend speed to gdt offset killcamOffset.");
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  DVARFLT_cg_killcamOffsetBlendSpeed = v223;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cg_killcamOffsetBlendDelayTime = Dvar_RegisterFloat("MTRLKQPRQR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Time before offset blend will start once the conditions are met.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  DVARFLT_cg_killcamEntityLookAtOffset = Dvar_RegisterFloat("LLNKPKTSTL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "The look at offset from the base position of the entity alongside their up vector.");
  DVARINT_cg_throwingAxeKillCamEntIgnoreTime = Dvar_RegisterInt("MPPPQPPQNP", 100, 0, 1000, 4u, "The amount of time to ignore the kill cam entity since the launch of the projectile (makes the kill cam not follow the throwing axe within the first x milliseconds.");
  DVARBOOL_compassPrototypeElevation = Dvar_RegisterBool("QOTRQLLKK", 1, 0, "Should the compass display relative elevation indicators");
  __asm
  {
    vmovss  xmm9, cs:__real@3f800000
    vmovss  xmm6, cs:__real@3c23d70a
    vmovss  xmm8, cs:__real@3f19999a
  }
  DVARBOOL_compassPrototypeFiring = Dvar_RegisterBool("MMRMSQKQRS", 1, 0, "Should the compass display enemy firing status indicators");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm8; value
  }
  DVARFLT_compassTacmapMiniIconZoomPOI = Dvar_RegisterFloat("NLTRRSLOKQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "zoom level at which point to switch to the mini-icons POI (kiosks)");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm8; value
  }
  DVARFLT_compassTacmapMiniIconZoomMission = Dvar_RegisterFloat("RLKOPMNRM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "zoom level at which point to switch to the mini-icons mission tablets");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm8; value
    vmovss  xmm11, cs:__real@3f4ccccd
  }
  DVARFLT_compassTacmapMiniIconZoomVehicle = Dvar_RegisterFloat("TTRLOKSMS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "zoom level at which point to switch to the mini-icons for vehicles");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm11; value
  }
  v246 = Dvar_RegisterFloat("NONSRTQORS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Filter out POIs (kiosks) if zoom is higher than this, 1.0 would never filter, 0.0 would always filter");
  __asm { vmovss  xmm1, cs:__real@3f666666; value }
  DVARFLT_compassTacmapFilterZoomPOI = v246;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm6; min
    vmovss  xmm12, cs:__real@3f333333
  }
  DVARFLT_compassTacmapFilterZoomMission = Dvar_RegisterFloat("LTRMRRONMO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Filter out mission tablets if zoom is higher than this, 1.0 would never filter, 0.0 would always filter");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm12; value
  }
  DVARFLT_compassTacmapFilterZoomVehicle = Dvar_RegisterFloat("NRLNMKTPQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Filter out vehicles if zoom is higher than this, 1.0 would never filter, 0.0 would always filter");
  DVARBOOL_compassTacmapFilterVehicle = Dvar_RegisterBool("OKLSLRLLOR", 0, 0, "Never draw vehicles on the tacmap");
  DVARBOOL_compassTacmapFilterObjective = Dvar_RegisterBool("LLSLRPKOMO", 0, 0, "Never draw tablets on the tacmap");
  DVARBOOL_compassTacmapFilterPOI = Dvar_RegisterBool("PQRNNSNSP", 0, 0, "Never draw POIs on the tacmap");
  DVARBOOL_compassTacmapFilterObjectiveIfActive = Dvar_RegisterBool("LTLLKQNKSN", 0, 0, "Filter all objectives if one is active");
  DVARBOOL_compassScramblerDrawSquadColor = Dvar_RegisterBool("NSSPKSPTSL", 0, 0, "Draw friendly scramblers with the color of the squadmate that called it in. If false, will default to team blue.");
  DVARBOOL_compassScramblerDrawDottedBorder = Dvar_RegisterBool("TTMTRQOKO", 1, 0, "Draw scramblers with a dotted border. If false, will default to solid border.");
  __asm { vmovss  xmm3, cs:__real@7f7fffff; max }
  DVARBOOL_compassScramblerDrawEnemyBorder = Dvar_RegisterBool("LRRSSPTSRQ", 0, 0, "If true, will draw a border around the scrambler effect on the map.");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm10; value
    vmovss  xmm10, cs:__real@7f7fffff
  }
  DVARFLT_compassEnemyFootstepMaxRange = Dvar_RegisterFloat("LNTLSNKQOK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "The maximum distance at which an enemy may appear on the compass due to 'footsteps'");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm13; value
  }
  v261 = Dvar_RegisterFloat("LLQORTSSP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "The maximum vertical distance enemy may be from the player and appear on the compass due to 'footsteps'");
  __asm { vmovss  xmm1, cs:__real@430c0000; value }
  DVARFLT_compassEnemyFootstepMaxZ = v261;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v265 = Dvar_RegisterFloat("NNOQLTMQPS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "The minimum speed an enemy must be moving to appear on the compass due to 'footsteps'");
  __asm
  {
    vmovss  xmm3, cs:__real@41200000; max
    vmovss  xmm1, cs:__real@3e19999a; value
  }
  DVARFLT_compassEnemyFootstepMinSpeed = v265;
  __asm { vmovaps xmm2, xmm6; min }
  DVARFLT_cg_hudMapRadarLineThickness = Dvar_RegisterFloat("MMTNTRMSLL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Thickness, relative to the map width, of the radar texture that sweeps across the full screen map");
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm12; value
  }
  DCONST_DVARFLT_compassPlayerGhostFade = Dvar_RegisterFloat("compassPlayerGhostFade", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The amount of fade when radar jamming is active from the ghost ability");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm11; value
  }
  DVARFLT_compassObjectiveIconBackgroundScalar = Dvar_RegisterFloat("MKSQKQRNKT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The size multiplier of the background icon relative to the objective");
  __asm
  {
    vmovss  xmm3, cs:__real@41f00000; max
    vmovss  xmm2, cs:__real@c1f00000; min
    vmovss  xmm1, cs:__real@bf0ccccd; value
  }
  DCONST_DVARINT_compassObjectivePopTime = Dvar_RegisterInt("compassObjectivePopTime", 125, 0, 0x7FFFFFFF, 0x40004u, "The duration in ms the objective icon will pop when changing state");
  DCONST_DVARFLT_compassObjectiveIconHeightAdjust = Dvar_RegisterFloat("compassObjectiveIconHeightAdjust", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The height adjustment of the background icon relative to the main objective icon");
  __asm { vmovss  xmm13, cs:__real@463b8000 }
  DVARBOOL_compassUAVDrawOuterCircle = Dvar_RegisterBool("MTPNNRQLOK", 0, 0, "Should the compass draw the outerCircle for the UAV in large map");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm13; value
  }
  v282 = Dvar_RegisterFloat("compassCUAVRadius", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The radius of the CUAV for large maps");
  __asm { vmovss  xmm1, cs:__real@3f733333; value }
  DCONST_DVARFLT_compassCUAVRadius = v282;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_compassCUAVGlitchAmount = Dvar_RegisterFloat("compassCUAVGlitchAmount", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The glitch amount applied to the compass during the CUAV in small maps and the max amount applied in large maps");
  __asm { vmovss  xmm1, cs:__real@447a0000; value }
  DVARBOOL_compassCUAVDrawOuterCircle = Dvar_RegisterBool("NQTTMLPRNL", 0, 0, "Should the compass draw the outerCircle for the CUAV in large map");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v289 = Dvar_RegisterFloat("compassScramblerRadius", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The maximum range from the scrambler in world space that glitch effect would affect");
  __asm { vmovss  xmm1, cs:__real@44480000; value }
  DCONST_DVARFLT_compassScramblerRadius = v289;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_compassEMPDroneRadius = Dvar_RegisterFloat("compassEMPDroneRadius", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The maximum range from the EMP Drone in world space");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm13; value
  }
  DVARFLT_brCompassCUAVScramblerRadius = Dvar_RegisterFloat("PNMPSQNON", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The radius of scrambler glitch FX for the CUAV in BR");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  v299 = Dvar_RegisterFloat("LQSMQPLTRN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The multiplier for the glitch FX for the CUAV in BR");
  __asm { vmovss  xmm1, cs:__real@448fc000; value }
  DVARFLT_brCompassCUAVScramblerLocSelectSizeMultiplier = v299;
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_compassSelectorSizeBase = Dvar_RegisterFloat("NTPPKLNKNM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "The baseline size for the location selector arrow");
  DVARBOOL_compassDynamicSelectorSizeEnabled = Dvar_RegisterBool("MKOSKLNLOL", 1, 0, "Killswitch for the dynamic location selector which resizes based on the map");
  DVARINT_minimapPlayerCirclePingDuration = Dvar_RegisterInt("MPPKMQPPOT", 500, 0, 0x7FFFFFFF, 0, "The duration of player ping animation ( millisecond )");
  __asm
  {
    vmovss  xmm3, cs:__real@461c4000; max
    vmovss  xmm2, cs:__real@c61c4000; min
  }
  DCONST_DVARINT_minimapPlayerCirclePinRepeatCount = Dvar_RegisterInt("minimapPlayerCirclePinRepeatCount", 2, -1, 0x7FFFFFFF, 0x40004u, "How many times the circle blips after open the pause menu. -1 for always repeat");
  __asm { vxorps  xmm1, xmm1, xmm1; value }
  v306 = Dvar_RegisterFloat("MNTSSMTOMR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "Circle Radius of player ping animation");
  __asm { vmovss  xmm1, cs:__real@3f000000; value }
  DVARFLT_minimapPlayerCirclePingRadius = v306;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v310 = Dvar_RegisterFloat("compassObjectiveIconActiveMissionRGB", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "rgb override color for for mission tablet icons when a mission is active");
  __asm { vmovss  xmm1, cs:__real@3f59999a; value }
  DCONST_DVARFLT_compassObjectiveIconActiveMissionRGB = v310;
  __asm
  {
    vmovaps xmm3, xmm9; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_compassObjectiveIconActiveMissionAlpha = Dvar_RegisterFloat("compassObjectiveIconActiveMissionAlpha", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "fade out alpha level for mission tablet icons when a mission is active");
  DVARINT_cg_drawCrosshairNamesPosX = Dvar_RegisterInt("NQNKLTTNQM", 300, 0, 640, 0, "Virtual screen space position of the crosshair name");
  __asm
  {
    vmovss  xmm10, cs:__real@40a00000
    vmovss  xmm9, cs:__real@44200000
    vmovss  xmm2, cs:__real@437a0000; y
  }
  DVARINT_cg_drawCrosshairNamesPosY = Dvar_RegisterInt("LOKRSPLOTT", 180, 0, 480, 0, "Virtual screen space position of the crosshair name");
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vmovaps xmm1, xmm10; x
    vmovss  [rsp+0F8h+flags], xmm9
  }
  v319 = Dvar_RegisterVec2("OLMTSNOLQO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flags, 0, "Position of the HUD chat box");
  __asm { vmovss  xmm2, cs:__real@42dc0000; y }
  DVARVEC2_cg_hudChatPosition = v319;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vmovaps xmm1, xmm10; x
    vmovss  [rsp+0F8h+flags], xmm9
  }
  v323 = Dvar_RegisterVec2("TSSNPNMNQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsa, 0, "Position of the HUD chat box during intermission");
  __asm { vmovss  xmm2, cs:__real@43610000; y }
  DVARVEC2_cg_hudChatIntermissionPosition = v323;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vmovaps xmm1, xmm10; x
    vmovss  [rsp+0F8h+flags], xmm9
  }
  v327 = Dvar_RegisterVec2("MSLTKKOKST", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsb, 0, "Position of the HUD say box");
  __asm { vmovss  xmm2, cs:__real@435c0000; y }
  DVARVEC2_cg_hudSayPosition = v327;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vmovaps xmm1, xmm10; x
    vmovss  [rsp+0F8h+flags], xmm9
  }
  DVARVEC2_cg_hudVotePosition = Dvar_RegisterVec2("MKKPSOONLO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsc, 0, "Position of the HUD vote box");
  DVARBOOL_cg_drawDisconnectPercentage = Dvar_RegisterBool("OLNSKNLPPS", 0, 0, "Enable the disconnect visualizer");
  __asm
  {
    vmovss  xmm0, cs:__real@7f7fffff
    vmovss  xmm10, cs:__real@ff7fffff
    vmovss  xmm2, cs:__real@41200000; y
    vmovss  xmm1, cs:__real@4400c000; x
  }
  DVARBOOL_drawEntityCount = Dvar_RegisterBool("NRQTKKNSNN", 0, 0, "Enable entity count drawing");
  __asm
  {
    vmovaps xmm3, xmm10; min
    vmovss  [rsp+0F8h+flags], xmm0
  }
  DVARVEC2_drawEntityCountPos = Dvar_RegisterVec2("LPTOQPNN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsd, 0, "Where to draw the entity count graph");
  DVARINT_drawEntityCountSize = Dvar_RegisterInt("MLQLKQMTTM", 32, 0, 0x7FFFFFFF, 0, "How big to draw the entity count graph");
  __asm
  {
    vmovss  xmm0, cs:__real@7f7fffff
    vmovss  xmm2, cs:__real@435c0000; y
    vmovss  xmm1, cs:__real@44124000; x
  }
  DVARBOOL_drawServerBandwidth = Dvar_RegisterBool("MTKKTORKNP", 0, 0, "Enable drawing server bandwidth");
  __asm
  {
    vmovaps xmm3, xmm10; min
    vmovss  [rsp+0F8h+flags], xmm0
  }
  DVARVEC2_drawServerBandwidthPos = Dvar_RegisterVec2("LROMRNROKR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagse, 0, "Where to draw the server bandwidth graph");
  __asm
  {
    vmovss  xmm0, cs:__real@7f7fffff
    vmovss  xmm2, cs:__real@430c0000; y
    vmovss  xmm1, cs:__real@44124000; x
  }
  DVARBOOL_drawKillcamData = Dvar_RegisterBool("MKSRKOLPNQ", 0, 0, "Enable drawing server killcam data");
  __asm
  {
    vmovaps xmm3, xmm10; min
    vmovss  [rsp+0F8h+flags], xmm0
  }
  DVARVEC2_drawKillcamDataPos = Dvar_RegisterVec2("MMPQSMMONM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsf, 0, "Where to draw the server killcam graph");
  __asm
  {
    vmovss  xmm7, cs:__real@42c80000
    vmovss  xmm1, cs:__real@41300000; value
  }
  DVARINT_drawKillcamDataSize = Dvar_RegisterInt("MLRRRKQLQL", 32, 0, 0x7FFFFFFF, 0, "How big to draw the killcam data graph");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v348 = Dvar_RegisterFloat("NKTLKOMOSK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The text size of the packet analysis debug prints");
  __asm { vmovss  xmm1, cs:__real@41300000; value }
  DVARFLT_cg_packetAnalysisTextSize = v348;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cg_packetAnalysisEntTextSize = Dvar_RegisterFloat("LSSRRSMRLL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "The text size of the packet analysis entity debug prints");
  DVARINT_cg_packetAnalysisTextY = Dvar_RegisterInt("MSSSQNMPOS", -10, -20, 1024, 0, "The y coordinate of the packet analysis debug prints");
  DVARINT_cg_packetAnalysisEntTextY = Dvar_RegisterInt("LMPOOORKNL", -5, -20, 1024, 0, "The y coordinate of the packet analysis entity debug prints");
  DVARBOOL_cg_packetAnalysisAutoScale = Dvar_RegisterBool("LKLRQLSQTP", 1, 0, "Whether the graphcs for packet analysis automatically scale based on bandwidth");
  DVARBOOL_cg_debugposition = Dvar_RegisterBool("OLNKTOTNPK", 0, 4u, "Output position debugging information");
  DVARINT_cg_drawNetTiming = Dvar_RegisterInt("MQQPMQTQMT", 0, 0, 3, 4u, "Display frame and snapshot timing info for latency testing. 1=full, 2=brief, 3=not blinking");
  DVARBOOL_cg_debugWeaponStreaming = Dvar_RegisterBool("LMNRRSKSNN", 0, 4u, "Enables debug display of weapons chosen to be streamed per frame.");
  DVARINT_cg_latencyTestMode = Dvar_RegisterInt("MPQKTLRMPP", 0, 0, 1, 0, "0: Using head bone pos, 1: Using entity pos");
  DVARBOOL_cg_drawLatencyTest = Dvar_RegisterBool("TPTTQKMK", 0, 0, "Draw various markers and the results of the currently active latency test");
  DVARINT_cg_dropShotTestReactionTime = Dvar_RegisterInt("MLKNSLLTTN", 0, 0, 400, 0, "Simulated reaction time of a human player in the drop shot test");
  DVARINT_cg_dropShotTestShootingDuration = Dvar_RegisterInt("MSLKPMMLMO", 300, 1, 2000, 0, "How long in ms the player shoots in a drop shot test");
  DVARINT_cg_usercmdBursting = Dvar_RegisterInt("RSTRLLLSN", 0, 0, 60, 0, "Accumulate N cmd packets and send them all at once. For testing the effect of user cmd bursting");
  DVARINT_cg_shootFirstTestReactionTime = Dvar_RegisterInt("LSMRLLLPQT", 100, 0, 2000, 0, "Reaction time of player in a Shoot First Test");
  DVARINT_cg_shootFirstTestShootingDuration = Dvar_RegisterInt("LQOOLPQRMO", 400, 0, 2000, 0, "How long the player shoots in a Shoot First Test");
  DVARBOOL_cg_debugAntiLagShowPlayerServerSnap = Dvar_RegisterBool("NRPTRMKQLS", 0, 4u, "Draw the latest server snapshot for players along with current interp position. Red=Server, Green=Interpolation.");
  DVARBOOL_cg_debugAntiLagDrawMetrics = Dvar_RegisterBool("NRMQSKMLOK", 0, 4u, "Draw anti-lag error metrics.");
  DVARINT_cg_chatTime = Dvar_RegisterInt("LTTSOTPTNR", 12000, 0, 60000, 0, "The amount of time that a chat message is visible");
  DVARINT_cg_chatHeight = Dvar_RegisterInt("STOMSLPPP", 4, 0, 8, 0, "The font height of a chat message");
  DVARBOOL_cg_teamChatsOnly = Dvar_RegisterBool("QMLKKLONS", 0, 0, "Allow chatting only on the same team");
  DVARINT_cg_hearKillerTime = Dvar_RegisterInt("LLSMRRKRMK", 2000, 0, 0x7FFFFFFF, 4u, "Duration (in milliseconds) to hear the person who just killed you");
  DVARBOOL_cg_hearVictimEnabled = Dvar_RegisterBool("MRMLMLLMMP", 1, 4u, "If true, you can hear the person you just killed");
  DVARINT_cg_hearVictimTime = Dvar_RegisterInt("NTTNORKMKT", 2000, 0, 0x7FFFFFFF, 4u, "Duration (in milliseconds) to hear the person you just killed");
  DVARINT_cg_killCamDefaultLerpTime = Dvar_RegisterInt("NRQLSKOPSM", 0, 0, 0x7FFFFFFF, 4u, "Default time used to lerp between killcam entities.");
  DVARINT_cg_killCamTurretLerpTime = Dvar_RegisterInt("LKKMOKOMMT", 900, 0, 0x7FFFFFFF, 4u, "Time used to lerp to a killcam entity of the TURRET type.");
  __asm
  {
    vmovss  xmm3, cs:__real@7f7fffff; max
    vmovss  xmm1, cs:__real@461c4000; value
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cg_overheadNamesMaxDist = Dvar_RegisterFloat("NNPTKPSPPK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "The maximum distance for showing friendly player names");
  DVARBOOL_cg_drawFriendlyNames = Dvar_RegisterBool("MTKNKRMMP", 1, 4u, "Whether to show friendly names in game");
  DVARINT_cg_enemyNameFadeIn = Dvar_RegisterInt("NLLSMTRNMQ", 250, 0, 0x7FFFFFFF, 4u, "Time in milliseconds to fade in enemy names");
  DVARINT_cg_enemyNameFadeOut = Dvar_RegisterInt("OKNMRTLRQN", 250, 0, 0x7FFFFFFF, 4u, "Time in milliseconds to fade out enemy names");
  DVARINT_cg_friendlyNameFadeIn = Dvar_RegisterInt("MONNLNORLP", 0, 0, 0x7FFFFFFF, 4u, "Time in milliseconds to fade in friendly names");
  DVARINT_cg_friendlyNameFadeOut = Dvar_RegisterInt("MMLMLMSSM", 1500, 0, 0x7FFFFFFF, 4u, "Time in milliseconds to fade out friendly names");
  DVARBOOL_cg_drawThroughWalls = Dvar_RegisterBool("LQNKKTMPQO", 0, 4u, "Whether to draw friendly names through walls or not");
  DVARINT_cg_flashbangNameFadeIn = Dvar_RegisterInt("PNKSMRKPO", 1000, 0, 0x7FFFFFFF, 4u, "Time in milliseconds to fade in friendly names after a flashbang");
  DVARINT_cg_flashbangNameFadeOut = Dvar_RegisterInt("NQPLQLSLTP", 50, 0, 0x7FFFFFFF, 4u, "Time in milliseconds to fade out friendly names when flash banged");
  DVARSTR_thermal_playerModel = Dvar_RegisterString("NLKKKQKQPN", (const char *)&queryFormat.fmt + 3, 0, "Model to draw for players when in thermal vision mode");
  DVARBOOL_useRelativeTeamColors = Dvar_RegisterBool("LMNPKTTN", 1, 0, "Whether to use relative team colors.");
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vmovss  xmm3, cs:__real@3f30a3d7; b
    vmovss  xmm2, cs:__real@3f23d70a; g
  }
  DVARINT_cg_weaponVisInterval = Dvar_RegisterInt("LNTSPPQLMR", 4, 1, 20, 4u, "Do weapon vis checks once per this many frames, per centity");
  __asm
  {
    vmovaps xmm1, xmm8; r
    vmovss  [rsp+0F8h+flags], xmm6
  }
  v359 = Dvar_RegisterColor("NPTQOLNNNP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsg, 0, "Allies team color");
  __asm
  {
    vmovss  xmm3, cs:__real@3ed1eb85; b
    vmovss  xmm2, cs:__real@3f11eb85; g
    vmovss  xmm1, cs:__real@3f266666; r
  }
  DVARCLR_cg_TeamColor_Allies = v359;
  __asm { vmovss  [rsp+0F8h+flags], xmm6 }
  v363 = Dvar_RegisterColor("NSMQONORSQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsh, 0, "Axis team color");
  __asm
  {
    vmovss  xmm3, cs:__real@3f358106; b
    vmovss  xmm2, cs:__real@3f60c49c; g
    vmovss  xmm1, cs:__real@3f2f9db2; r
  }
  DVARCLR_cg_TeamColor_Axis = v363;
  __asm { vmovss  [rsp+0F8h+flags], xmm6 }
  v367 = Dvar_RegisterColor("TKKTLQNPM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsi, 0, "Player team color");
  __asm { vmovss  xmm3, cs:__real@3ecccccd; b }
  DVARCLR_cg_TeamColor_MyTeam = v367;
  __asm
  {
    vmovaps xmm15, xmm6
    vmovaps xmm2, xmm11; g
    vmovaps xmm1, xmm15; r
    vmovss  [rsp+0F8h+flags], xmm6
  }
  v372 = Dvar_RegisterColor("LRQONROMRL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsj, 0, "Player team color when in the same party");
  __asm
  {
    vmovss  xmm11, cs:__real@3f000000
    vmovss  xmm2, cs:__real@3ee66666; g
  }
  DVARCLR_cg_TeamColor_MyParty = v372;
  __asm
  {
    vmovaps xmm3, xmm11; b
    vmovaps xmm1, xmm15; r
    vmovss  [rsp+0F8h+flags], xmm15
    vmovss  xmm8, cs:__real@3e800000
  }
  DVARCLR_cg_TeamColor_EnemyTeam = Dvar_RegisterColor("PNTRSSKPS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsk, 0, "Enemy team color");
  __asm
  {
    vmovaps xmm3, xmm8; b
    vmovaps xmm2, xmm8; g
    vmovaps xmm1, xmm8; r
    vmovss  [rsp+0F8h+flags], xmm15
  }
  DVARCLR_cg_TeamColor_Spectator = Dvar_RegisterColor("LNTKMKNOKS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsl, 0, "Spectator team color");
  __asm
  {
    vmovss  xmm1, cs:__real@3f400000; r
    vmovaps xmm3, xmm8; b
    vmovaps xmm2, xmm8; g
    vmovss  [rsp+0F8h+flags], xmm15
  }
  DVARCLR_cg_TeamColor_Free = Dvar_RegisterColor("OLNNTQKPNR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsm, 0, "Free Team color");
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; b
    vmovaps xmm2, xmm15; g
    vmovaps xmm1, xmm15; r
    vmovss  [rsp+0F8h+flags], xmm15
  }
  DVARCLR_cg_TeamColor_Team_Three = Dvar_RegisterColor("LNPQSTLRTN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsn, 0, "Team_Three team color");
  __asm
  {
    vmovaps xmm3, xmm15; b
    vmovaps xmm2, xmm15; g
    vxorps  xmm1, xmm1, xmm1; r
    vmovss  [rsp+0F8h+flags], xmm15
  }
  DVARCLR_cg_TeamColor_Team_Four = Dvar_RegisterColor("MPLTTKMPNN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagso, 0, "Team_Four team color");
  __asm
  {
    vmovaps xmm3, xmm15; b
    vxorps  xmm2, xmm2, xmm2; g
    vmovaps xmm1, xmm15; r
    vmovss  [rsp+0F8h+flags], xmm15
  }
  DVARCLR_cg_TeamColor_Team_Five = Dvar_RegisterColor("MNKRSNOPT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsp, 0, "Team_Five team color");
  __asm
  {
    vmovaps xmm3, xmm12; b
    vmovaps xmm2, xmm12; g
    vmovaps xmm1, xmm12; r
    vmovss  [rsp+0F8h+flags], xmm15
  }
  DVARCLR_cg_TeamColor_Team_Six = Dvar_RegisterColor("LRMSRLSLKT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsq, 0, "Team_Six team color");
  DVARINT_cg_drawDebugRootMotion = Dvar_RegisterInt("QOLOLKTPT", 0, 0, 60000, 4u, "Time (seconds) to draw debug lines for the path taken by root motion anim");
  DVARBOOL_cg_mlg_static_cameras = Dvar_RegisterBool("OLNMMRPTTS", 0, 0, "If the MLG/CodCaster static cameras are present or not");
  __asm { vmovss  xmm3, cs:__real@7f7fffff; max }
  DCONST_DVARBOOL_cg_debugFireAnimStabilizer = Dvar_RegisterBool("cg_debugFireAnimStabilizer", 0, 0x40004u, "Enables the logging for the fire animation stabilizer used during the spectator cam or kill cam");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
    vmovss  xmm7, cs:__real@7f7fffff
  }
  DCONST_DVARFLT_deltaTimeMaxCorrectionDisplacement = Dvar_RegisterFloat("deltaTimeMaxCorrectionDisplacement", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max displacement before we use max speed to correct time delta issues.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v403 = Dvar_RegisterFloat("deltaTimeMinCorrectionDisplacement", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Min displacement before we use min speed to correct time delta issues.");
  __asm { vmovss  xmm1, cs:__real@41c80000; value }
  DCONST_DVARFLT_deltaTimeMinCorrectionDisplacement = v403;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_deltaTimeMaxCorrectionSpeed = Dvar_RegisterFloat("deltaTimeMaxCorrectionSpeed", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max correction speed to correct time delta issues.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm15; value
  }
  DCONST_DVARFLT_deltaTimeMinCorrectionSpeed = Dvar_RegisterFloat("deltaTimeMinCorrectionSpeed", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Min correction speed to correct time delta issues.");
  DCONST_DVARBOOL_deltaTimeAlwaysUseNewAlgorithm = Dvar_RegisterBool("deltaTimeAlwaysUseNewAlgorithm", 0, 0x40004u, "When enabled, we always use the new delta time adjustment algorithm.");
  DCONST_DVARBOOL_cg_enablePlayerEntityWorkers = Dvar_RegisterBool("cg_enablePlayerEntityWorkers", 1, 0x40004u, "When enabled, ET_Player entities will be threaded off in entity workers");
  DCONST_DVARSTR_cg_brCircleFX = Dvar_RegisterString("cg_brCircleFX", "vfx/iw8_br/gameplay/vfx_br_circle_mainwall", 0x40004u, "FX to use for the BR Circle (make sure it's precached)");
  __asm
  {
    vmovaps xmm14, xmm10
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm14; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v414 = Dvar_RegisterFloat("cg_brCircleZ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "height where the BR Circle FX is rendered at");
  __asm
  {
    vmovss  xmm6, cs:__real@3a83126f
    vmovss  xmm1, cs:__real@44df0000; value
  }
  DCONST_DVARFLT_cg_brCircleZ = v414;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
  }
  v419 = Dvar_RegisterFloat("cg_brCircleBaseRadius", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "radius in world units of the BR Circle FX at scale 1.0");
  __asm { vmovss  xmm1, cs:__real@47c35000; value }
  DCONST_DVARFLT_cg_brCircleBaseRadius = v419;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
  }
  v423 = Dvar_RegisterFloat("cg_brCircleEmissionCurveMaxRadius", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The BR Circle FX emission curve X-axis value is determined by the BR circle radius.  At radius 0, emission curve X-axis value is 0.  At radius 'cg_brCircleEmissionCurveMaxRadius', emission curve X-axis value is 1.");
  __asm { vmovss  xmm1, cs:__real@bf800000; value }
  DCONST_DVARFLT_cg_brCircleEmissionCurveMaxRadius = v423;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm1; min
  }
  DCONST_DVARFLT_cg_brCircleEmissionCurveDebugValue = Dvar_RegisterFloat("cg_brCircleEmissionCurveDebugValue", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Sets the X-axis value for BR Circle FX emission curves to this value (debug only).  Debug is disabled if value is below 0.");
  DCONST_DVARSTR_cg_brCircleLoopSound = Dvar_RegisterString("cg_brCircleLoopSound", "br_circle_proximity_lp", 0x40004u, "Loop sound to play when player is close to or outside of circle.");
  __asm { vmovss  xmm1, cs:__real@41c00000; value }
  DCONST_DVARSTR_cg_brCircleTickSound = Dvar_RegisterString("cg_brCircleTickSound", "br_circle_proximity_tick", 0x40004u, "A ticking sound to play when player is close to or outside of circle.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_brCircleProximityDistMin = Dvar_RegisterFloat("cg_brCircleProximityDistMin", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "When player's distance to circle's edge is closer than this, circle sounds play at full intensity.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm9; value
  }
  v433 = Dvar_RegisterFloat("cg_brCircleProximityDistMax", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "When player's distance to circle's edge is further than this, circle sounds stop.");
  __asm { vmovss  xmm1, cs:__real@3dcccccd; value }
  DCONST_DVARFLT_cg_brCircleProximityDistMax = v433;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm9, xmm9, xmm9
  }
  v438 = Dvar_RegisterFloat("cg_brCircleProximityVolumeMin", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Min volume that the circle sounds will be played at.");
  __asm { vmovss  xmm1, cs:__real@3f353f7d; value }
  DCONST_DVARFLT_cg_brCircleProximityVolumeMin = v438;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v442 = Dvar_RegisterFloat("cg_brCircleProximityVolumeMax", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max volume that the circle sounds will be played at.");
  __asm { vmovss  xmm1, cs:__real@3fb4fdf4; value }
  DCONST_DVARFLT_cg_brCircleProximityVolumeMax = v442;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_brCircleLoopPitchMin = Dvar_RegisterFloat("cg_brCircleLoopPitchMin", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Min pitch that the circle loop sound will be played at.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm15; value
  }
  v449 = Dvar_RegisterFloat("cg_brCircleLoopPitchMax", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max pitch that the circle loop sound will be played at.");
  __asm { vmovss  xmm1, cs:__real@3c888889; value }
  DCONST_DVARFLT_cg_brCircleLoopPitchMax = v449;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v453 = Dvar_RegisterFloat("cg_brCircleTickIntervalMin", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Min interval that the circle ticking sound will be played at.");
  __asm { vmovss  xmm1, cs:__real@3eaa7efa; value }
  DCONST_DVARFLT_cg_brCircleTickIntervalMin = v453;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v457 = Dvar_RegisterFloat("cg_brCircleTickIntervalMax", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max interval that the circle ticking sound will be played at.");
  __asm { vmovss  xmm1, cs:__real@3f34fdf4; value }
  DCONST_DVARFLT_cg_brCircleTickIntervalMax = v457;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_brCircleTickPitchMin = Dvar_RegisterFloat("cg_brCircleTickPitchMin", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Min pitch that the circle ticking sound will be played at.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm15; value
  }
  v464 = Dvar_RegisterFloat("cg_brCircleTickPitchMax", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Max pitch that the circle ticking sound will be played at.");
  __asm { vmovss  xmm1, cs:__real@40c00000; value }
  DCONST_DVARFLT_cg_brCircleTickPitchMax = v464;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v468 = Dvar_RegisterFloat("cg_brCircleFogBlendInTime", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Duration (in seconds) to blend in volumetric- and distance-based fog for the BR Circle when starting the effect.");
  __asm { vmovss  xmm1, cs:__real@459c4000; value }
  DCONST_DVARFLT_cg_brCircleFogBlendInTime = v468;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_brCircleFogHeight = Dvar_RegisterFloat("cg_brCircleFogHeight", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Circle fog height");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm14; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v475 = Dvar_RegisterFloat("cg_brCircleFogInset", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Circle fog inset");
  __asm { vmovss  xmm1, cs:__real@447a0000; value }
  DCONST_DVARFLT_cg_brCircleFogInset = v475;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_brCircleFogOuterColorDistance = Dvar_RegisterFloat("cg_brCircleFogOuterColorDistance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Circle fog outer color distance");
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vmovaps xmm2, xmm15; y
    vmovaps xmm1, xmm6; x
    vmovss  [rsp+0F8h+flags], xmm7
    vmovss  xmm6, cs:__real@3fc00000
  }
  DCONST_DVARVEC2_cg_brCircleVolumetricFogParams = Dvar_RegisterVec2("cg_brCircleVolumetricFogParams", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsr, 0x40004u, "Circle volumetric fog params: density - x, scale - y");
  __asm
  {
    vmovss  dword ptr [rsp+0F8h+description], xmm7
    vmovaps xmm3, xmm15; z
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm6; x
    vmovss  [rsp+0F8h+flags], xmm9
  }
  DVARVEC3_cg_brCircleVolumetricFogInnerColor = Dvar_RegisterVec3("MTMOOOQKKL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagss, description, 0, "Circle volumetric fog inner color");
  __asm
  {
    vmovss  dword ptr [rsp+0F8h+description], xmm7
    vmovaps xmm3, xmm15; z
    vmovaps xmm2, xmm6; y
    vmovaps xmm1, xmm6; x
    vmovss  [rsp+0F8h+flags], xmm9
  }
  v489 = Dvar_RegisterVec3("OMRQMSLSRK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagst, descriptiona, 0, "Circle volumetric fog outer color");
  __asm
  {
    vmovss  xmm3, cs:__real@42960000; z
    vmovss  xmm1, cs:__real@3cf5c28f; x
  }
  DVARVEC3_cg_brCircleVolumetricFogOuterColor = v489;
  __asm
  {
    vmovss  dword ptr [rsp+0F8h+description], xmm7
    vmovaps xmm2, xmm15; y
    vmovss  [rsp+0F8h+flags], xmm9
  }
  DCONST_DVARVEC3_cg_brCircleDistanceFogParams = Dvar_RegisterVec3("cg_brCircleDistanceFogParams", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsu, descriptionb, 0x40004u, "Circle distance fog params: density - x, scale - y, half plane - z");
  __asm
  {
    vmovss  dword ptr [rsp+0F8h+description], xmm7
    vmovss  xmm7, cs:__real@40000000
    vmovaps xmm2, xmm7; y
    vmovaps xmm1, xmm7; x
    vmovaps xmm3, xmm11; z
    vmovss  [rsp+0F8h+flags], xmm9
    vmovss  xmm6, cs:__real@7f7fffff
  }
  DVARVEC3_cg_brCircleDistanceFogInnerColor = Dvar_RegisterVec3("LOTQPTKLO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsv, descriptionc, 0, "Circle distance fog inner color");
  __asm
  {
    vmovss  dword ptr [rsp+0F8h+description], xmm6
    vmovaps xmm3, xmm11; z
    vmovaps xmm2, xmm7; y
    vmovaps xmm1, xmm7; x
    vmovss  [rsp+0F8h+flags], xmm9
  }
  v501 = Dvar_RegisterVec3("LOPRPSKMST", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsw, descriptiond, 0, "Circle distance fog outer color");
  __asm
  {
    vmovss  xmm3, cs:__real@3d75c28f; z
    vmovss  xmm2, cs:__real@3eae147b; y
    vmovss  xmm1, cs:__real@3eb851ec; x
  }
  DVARVEC3_cg_brCircleDistanceFogOuterColor = v501;
  __asm
  {
    vmovss  dword ptr [rsp+0F8h+var_C8], xmm6
    vmovss  dword ptr [rsp+0F8h+description], xmm9
    vmovss  [rsp+0F8h+flags], xmm15
  }
  DVARVEC4_cg_brCirclePerceptualTint = Dvar_RegisterVec4("MSNRKNQPRS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsx, descriptione, v854, 0, "Circle fog scattering bias - rgb and intensity. (HACK)");
  __asm
  {
    vxorps  xmm3, xmm3, xmm3; min
    vmovaps xmm2, xmm13; y
    vmovaps xmm1, xmm13; x
    vmovss  [rsp+0F8h+flags], xmm6
  }
  v508 = Dvar_RegisterVec2("cg_brCircleHeightFalloff", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsy, 0x40004u, "Circle falloffs: distance fog - x, volumetric - y");
  __asm
  {
    vmovss  xmm9, cs:__real@3c23d70a
    vmovss  xmm1, cs:__real@41200000; value
  }
  DCONST_DVARVEC2_cg_brCircleHeightFalloff = v508;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm9; min
  }
  DCONST_DVARFLT_cg_brCircleSkyDistanceMultiplier = Dvar_RegisterFloat("cg_brCircleSkyDistanceMultiplier", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Circle sky distance multiplier");
  __asm
  {
    vmovss  [rsp+0F8h+flags], xmm15
    vxorps  xmm3, xmm3, xmm3; min
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
  }
  v516 = Dvar_RegisterVec2("cg_brCircleDistanceFogBlend", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsz, 0x40004u, "Circle blend with distance fog");
  __asm { vmovss  xmm1, cs:__real@447a0000; value }
  DCONST_DVARVEC2_cg_brCircleDistanceFogBlend = v516;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm9; min
  }
  v520 = Dvar_RegisterFloat("cg_brCircleDistanceHeightBlend", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Circle distance fog height blend");
  __asm { vmovss  xmm1, cs:__real@453b8000; value }
  DCONST_DVARFLT_cg_brCircleDistanceHeightBlend = v520;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm9; min
  }
  v524 = Dvar_RegisterFloat("cg_brCircleDistanceHeightViewBlend", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Circle distnace fog height blend by view ray start");
  __asm { vmovss  xmm1, cs:__real@453b8000; value }
  DCONST_DVARFLT_cg_brCircleDistanceHeightViewBlend = v524;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm9; min
  }
  DCONST_DVARFLT_cg_brCircleDistanceHeightBlendStart = Dvar_RegisterFloat("cg_brCircleDistanceHeightBlendStart", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Circle distance fog start of height blend");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm14; min
    vmovaps xmm1, xmm15; value
  }
  DCONST_DVARFLT_cg_brCircleFogDensityScale = Dvar_RegisterFloat("cg_brCircleFogDensityScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Circle fog density scale");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm14; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_cg_brCircleFogDensityBias = Dvar_RegisterFloat("cg_brCircleFogDensityBias", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Circle fog density bias");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm14; min
    vmovaps xmm1, xmm15; value
  }
  DCONST_DVARFLT_cg_brCircleFogDensityNoiseScale = Dvar_RegisterFloat("cg_brCircleFogDensityNoiseScale", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Circle fog density noise scale");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm14; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_cg_brCircleFogDensityNoiseBias = Dvar_RegisterFloat("cg_brCircleFogDensityNoiseBias", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Circle fog density noise bias");
  __asm
  {
    vmovaps xmm3, xmm14; min
    vmovaps xmm2, xmm15; y
    vmovaps xmm1, xmm15; x
    vmovss  [rsp+0F8h+flags], xmm6
  }
  DCONST_DVARVEC2_cg_brCircleFogDensityTiling = Dvar_RegisterVec2("cg_brCircleFogDensityTiling", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsba, 0x40004u, "Circle fog density noise tiling");
  __asm
  {
    vmovaps xmm3, xmm14; min
    vmovaps xmm2, xmm15; y
    vmovaps xmm1, xmm15; x
    vmovss  [rsp+0F8h+flags], xmm6
  }
  DCONST_DVARVEC2_cg_brCircleFogDensityScrollingSpeed = Dvar_RegisterVec2("cg_brCircleFogDensityScrollingSpeed", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbb, 0x40004u, "Circle fog density noise scrolling speed");
  DCONST_DVARBOOL_cg_customization_devVerbose = Dvar_RegisterBool("cg_customization_devVerbose", 0, 0x40004u, "Enables debugging spam for CG_CustomizationMP");
  DCONST_DVARBOOL_cg_enableDetachableClientCorpses = Dvar_RegisterBool("cg_enableDetachableClientCorpses", 1, 0x40004u, "When enabled, client corpses will be allowed to be detached and not synchronized with the server");
  DCONST_DVARBOOL_cg_clientCorpse_devVerbose = Dvar_RegisterBool("cg_clientCorpse_devVerbose", 0, 0x40004u, "Enables debugging spam for client corpses");
  DCONST_DVARBOOL_cg_clientCorpse_debugDisplay = Dvar_RegisterBool("cg_clientCorpse_debugDisplay", 0, 0x40004u, "Debug display corpses");
  DCONST_DVARINT_cg_corpseFreshTimeout = Dvar_RegisterInt("cg_corpseFreshTimeout", 3000, 0, 0x7FFFFFFF, 0x40004u, "Defines Freshness timeout in milliseconds");
  DCONST_DVARBOOL_cg_customizationStreamingEnabled = Dvar_RegisterBool("cg_customizationStreamingEnabled", 1, 0x40004u, "Disable to turn off client-side streaming for currently equipped customizations");
  DCONST_DVARBOOL_cg_weaponStreamingEnabled = Dvar_RegisterBool("cg_weaponStreamingEnabled", 1, 0x40004u, "Disable to turn off client-side streaming for currently equipped weapons");
  __asm
  {
    vmovss  xmm11, cs:__real@449c4000
    vmovss  xmm1, cs:__real@44a8c000; value
  }
  DCONST_DVARINT_cg_streamingMaxTeamSizeForBoostedTeammatePrioritization = Dvar_RegisterInt("cg_streamingMaxTeamSizeForBoostedTeammatePrioritization", 4, 0, 200, 0x40004u, "The maximum team size (max players / team count) that will trigger boosted teammate streaming priorities to be infinitely closer than other entity types (enemies, items, corpses, etc.).");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm11; min
  }
  v550 = Dvar_RegisterFloat("cg_streamingMaxDistanceForNearWorldModelPrioritization", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Distance at which we promote world models to a protected priority of \"near\" world models.");
  __asm { vmovss  xmm1, cs:__real@45af0000; value }
  DCONST_DVARFLT_cg_streamingMaxDistanceForNearWorldModelPrioritization = v550;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vmovaps xmm2, xmm11; min
  }
  DCONST_DVARFLT_cg_streamingMinDistanceForFarWorldModelPrioritization = Dvar_RegisterFloat("cg_streamingMinDistanceForFarWorldModelPrioritization", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Distance at which we demote world models to a far world model priority.");
  __asm
  {
    vmovss  xmm1, cs:__real@43a00000; value
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_streamingMinVelocityDeprioritizeCommonMPTransients = Dvar_RegisterFloat("cg_streamingMinVelocityDeprioritizeCommonMPTransients", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The minimum parametric velocity at which we flag common mp transients to be deprioritized and potentially allow more I/O bandwidth to be used by tile-streamed transients.");
  DCONST_DVARBOOL_cg_devLoadWeaponAttachmentIcons = Dvar_RegisterBool("cg_devLoadWeaponAttachmentIcons", 0, 0x40004u, "Enables loading of weapon attachment icons to simulate real game image load");
  DCONST_DVARBOOL_cg_skipStreamedModelValidation = Dvar_RegisterBool("cg_skipStreamedModelValidation", 0, 0x40004u, "Enable to turn off runtime validation of streamed models.");
  DCONST_DVARBOOL_cg_customizationMP_devNoLatch = Dvar_RegisterBool("cg_customizationMP_devNoLatch", 1, 0x40004u, "When set, disables the latching system for character models");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm11; value
  }
  v560 = Dvar_RegisterFloat("cg_customizationMP_latchMaxDistance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The maximum distance we will latch a character's model.");
  __asm { vmovss  xmm1, cs:__real@3c800000; value }
  DCONST_DVARFLT_cg_customizationMP_latchMaxDistance = v560;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_highPriorityCorpseDistanceSqMultiplier = Dvar_RegisterFloat("cg_highPriorityCorpseDistanceSqMultiplier", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The distanceSq multiplier used to elevate high priority corpses in our distance cache for streaming.");
  DCONST_DVARBOOL_cg_prefetchPlayercards = Dvar_RegisterBool("cg_prefetchPlayercards", 1, 0x40004u, "Enables prefetching of all playercard backgrounds and emblems. WARNING: For large player counts, this may cost a significant amount of memory to enable");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  v567 = Dvar_RegisterFloat("cg_imageHintDistancePlayerCards", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Distance used to hint playercard images for preloading");
  __asm { vmovss  xmm1, cs:__real@3fa00000; value }
  DCONST_DVARFLT_cg_imageHintDistancePlayerCards = v567;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_imageHintDistancePlayerCardsLow = Dvar_RegisterFloat("cg_imageHintDistancePlayerCardsLow", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Distance used to hint playercard images for preloading. This is a lowered priority value to be usedfor high streaming pressure scenarios.");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  DCONST_DVARFLT_cg_imageHintDistanceWeaponAttachmentIcons = Dvar_RegisterFloat("cg_imageHintDistanceWeaponAttachmentIcons", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Distance used to hint weapon attachment images for preloading");
  __asm
  {
    vmovaps xmm8, xmm6
    vmovss  xmm1, cs:__real@3fa00000; value
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_imageHintDistanceWeaponAttachmentIconsLow = Dvar_RegisterFloat("cg_imageHintDistanceWeaponAttachmentIconsLow", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Distance used to hint weapon attachment images for preloading. This is a lowered priority value to be usedfor high streaming pressure scenarios.");
  DCONST_DVARINT_cg_forceCustomizationHead = Dvar_RegisterInt("cg_forceCustomizationHead", -1, -1, 0x7FFFFFFF, 0x40004u, "Force customization head model index for all local clients (client-only). Use -1 to turn off.");
  DCONST_DVARINT_cg_forceCustomizationBody = Dvar_RegisterInt("cg_forceCustomizationBody", -1, -1, 0x7FFFFFFF, 0x40004u, "Force customization body model index for all local clients (client-only). Use -1 to turn off.");
  __asm { vmovss  xmm3, cs:__real@43340000; max }
  DCONST_DVARINT_cg_forceCustomizationViewhands = Dvar_RegisterInt("cg_forceCustomizationViewhands", -1, -1, 0x7FFFFFFF, 0x40004u, "Force customization viewhands model index for all local clients (client-only). Use -1 to turn off.");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v581 = Dvar_RegisterFloat("OLRKNSKNPS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Angle from the view vector where enemy nameplates are visible (degrees).");
  __asm { vmovss  xmm1, cs:__real@44898000; value }
  DVARFLT_cg_enemyNameplateAngle = v581;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vmovaps xmm2, xmm9; min
  }
  v585 = Dvar_RegisterFloat("NPNSLTNQLM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Distance from the player below which you can see enemy nameplates.  Overridden by weapon's Enemy Crosshair Range property if less.");
  __asm
  {
    vmovss  xmm3, cs:__real@43340000; max
    vmovss  xmm1, cs:__real@42820000; value
  }
  DVARFLT_cg_enemyNameplateDistance = v585;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm6, xmm6, xmm6
  }
  v590 = Dvar_RegisterFloat("MLOSMPPQON", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Angle from the view vector where friendly nameplates are visible (degrees).");
  __asm { vmovss  xmm1, cs:__real@45098000; value }
  DVARFLT_cg_friendlyNameplateAngle = v590;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vmovaps xmm2, xmm9; min
  }
  DVARFLT_cg_friendlyNameplateDistance = Dvar_RegisterFloat("MMMMPLOOTN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Distance from the player below which you can see friendly nameplates");
  DVARBOOL_cg_friendlyNameplateSnapToEdge = Dvar_RegisterBool("TKKLKNNNO", 1, 4u, "If true, friendly nameplate chevrons are always visible and snap to the screen edge.");
  DVARBOOL_cg_friendlyReviveNameplateEnabled = Dvar_RegisterBool("LSSKOMTQKK", 1, 4u, "If true, friendly revive nameplates are visible above killed friendly players.");
  DVARBOOL_cg_playerNameplatesFastTrace = Dvar_RegisterBool("RQORKNQOO", 1, 4u, "If true, nameplate trace targets are approximated based on stance rather than pose evaluation.");
  __asm { vmovss  xmm1, cs:__real@43480000; value }
  DVARBOOL_cg_playerNameplatesFastPosition = Dvar_RegisterBool("LNQMQMSNSS", 1, 4u, "If true, offscreen nameplate positions are approximated based on stance rather than pose evaluation.");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v597 = Dvar_RegisterFloat("LTRLMOOMPN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "The distance off the screen where the nameplate blends out to use approximated position rather than pose");
  __asm
  {
    vmovss  xmm3, cs:__real@42480000; max
    vmovss  xmm2, cs:__real@c2480000; min
    vmovss  xmm1, cs:__real@c1200000; value
  }
  DVARFLT_cg_playerNameplatesFastFalloff = v597;
  v601 = Dvar_RegisterFloat("NNRRKPKNKR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "When using fast traces, this value offsets the trace position to the root in the X direction");
  __asm { vmovss  xmm1, cs:__real@3e99999a; value }
  DVARFLT_cg_playerNameplatesFastTraceRootXOffset = v601;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_cg_playerNameplatesTextOutlineStrokeWidth = Dvar_RegisterFloat("cg_playerNameplatesTextOutlineStrokeWidth", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The width of the outline on the text displayed in the player nameplate.");
  DVARINT_cg_nameplateSettingOverride = Dvar_RegisterInt("NKMNSKNOQN", -1, -1, 10, 0, "This will override the nameplate setting that is set in the recipe for the gamemode.");
  __asm
  {
    vmovss  xmm2, cs:__real@3f59d495; y
    vmovss  xmm1, cs:__real@3ef2f1aa; x
  }
  DVARINT_cg_nameplateEnemyVisibleTimeout = Dvar_RegisterInt("QOPMSOTSM", 1000, 0, 10000, 0, "How long (in ms) after last seeing an enemy do we reset the 'enemyVisible' datamodel. Used for the contextual ping widget.");
  __asm
  {
    vmovss  dword ptr [rsp+0F8h+var_C8], xmm15
    vmovss  dword ptr [rsp+0F8h+description], xmm6
    vmovaps xmm3, xmm15; z
    vmovss  [rsp+0F8h+flags], xmm15
  }
  v608 = Dvar_RegisterVec4("cg_playerNameplatesFriendlyColor", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbc, descriptionf, v855, 0x40004u, "The color for the friendly player nameplates.");
  __asm
  {
    vmovss  xmm3, cs:__real@3d8068dc; z
    vmovss  xmm2, cs:__real@3dd8adac; y
  }
  DCONST_DVARVEC4_cg_playerNameplatesFriendlyColor = v608;
  __asm
  {
    vmovss  dword ptr [rsp+0F8h+var_C8], xmm15
    vmovss  dword ptr [rsp+0F8h+description], xmm6
    vmovaps xmm1, xmm15; x
    vmovss  [rsp+0F8h+flags], xmm15
  }
  DCONST_DVARVEC4_cg_playerNameplatesEnemyColor = Dvar_RegisterVec4("cg_playerNameplatesEnemyColor", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbd, descriptiong, v856, 0x40004u, "The color for the enemy player nameplates.");
  __asm
  {
    vmovss  dword ptr [rsp+0F8h+var_C8], xmm15
    vmovss  dword ptr [rsp+0F8h+description], xmm6
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  [rsp+0F8h+flags], xmm15
  }
  v615 = Dvar_RegisterVec4("cg_playerNameplatesTextOutlineColor", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbe, descriptionh, v857, 0x40004u, "The outline color of the text on the player nameplates.");
  __asm { vmovss  xmm3, cs:__real@3cfdf3b6; z }
  DCONST_DVARVEC4_cg_playerNameplatesTextOutlineColor = v615;
  __asm
  {
    vmovss  dword ptr [rsp+0F8h+var_C8], xmm15
    vmovss  dword ptr [rsp+0F8h+description], xmm6
    vmovaps xmm2, xmm15; y
    vmovaps xmm1, xmm15; x
    vmovss  [rsp+0F8h+flags], xmm15
  }
  v619 = Dvar_RegisterVec4("cg_playerNameplatesBountyIconColor", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbf, descriptioni, v858, 0x40004u, "The color of the bounty icons.");
  __asm
  {
    vmovss  xmm3, cs:__real@3f20a0a1; z
    vmovss  xmm2, cs:__real@3e868686; y
    vmovss  dword ptr [rsp+0F8h+var_C8], xmm15
    vmovss  dword ptr [rsp+0F8h+description], xmm6
    vxorps  xmm1, xmm1, xmm1; x
    vmovss  [rsp+0F8h+flags], xmm15
  }
  DCONST_DVARVEC4_cg_playerNameplatesBountyIconColor = v619;
  v623 = Dvar_RegisterVec4("cg_playerNameplatesDeuteranopiaFriendlyColor", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbg, descriptionj, v859, 0x40004u, "The color for the friendly player nameplates.");
  __asm
  {
    vmovss  xmm3, cs:__real@3e1c9c9c; z
    vmovss  xmm2, cs:__real@3f4fcfd0; y
    vmovss  xmm1, cs:__real@3f60e0e1; x
    vmovss  dword ptr [rsp+0F8h+var_C8], xmm15
    vmovss  dword ptr [rsp+0F8h+description], xmm6
    vmovss  [rsp+0F8h+flags], xmm15
  }
  DCONST_DVARVEC4_cg_playerNameplatesDeuteranopiaFriendlyColor = v623;
  v627 = Dvar_RegisterVec4("cg_playerNameplatesDeuteranopiaEnemyColor", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flagsbh, descriptionk, v860, 0x40004u, "The color for the enemy player nameplates.");
  __asm
  {
    vmovss  xmm9, cs:__real@c47a0000
    vmovss  xmm3, cs:__real@447a0000; max
  }
  DCONST_DVARVEC4_cg_playerNameplatesDeuteranopiaEnemyColor = v627;
  __asm
  {
    vmovaps xmm2, xmm9; min
    vmovaps xmm1, xmm7; value
  }
  v632 = Dvar_RegisterFloat("cg_playerNameplatesNameOffsetX", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The X offset of the player name relative to the right chevron.");
  __asm
  {
    vmovss  xmm7, cs:__real@447a0000
    vmovss  xmm1, cs:__real@c0000000; value
  }
  DCONST_DVARFLT_cg_playerNameplatesNameOffsetX = v632;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm9; min
  }
  v637 = Dvar_RegisterFloat("cg_playerNameplatesNameOffsetY", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The Y offset of the player name relative to the center of the chevron.");
  __asm { vmovss  xmm1, cs:__real@43a68000; value }
  DCONST_DVARFLT_cg_playerNameplatesNameOffsetY = v637;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm9; min
  }
  DCONST_DVARFLT_cg_playerNameplatesNameWrapWidth = Dvar_RegisterFloat("cg_playerNameplatesNameWrapWidth", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The wrap width of the player name. A long name will wrap past this width.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm9; min
    vmovss  xmm8, cs:__real@41800000
    vmovaps xmm1, xmm8; value
  }
  DCONST_DVARFLT_cg_playerNameplatesNameFontHeight = Dvar_RegisterFloat("cg_playerNameplatesNameFontHeight", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The font height of the player name.");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm9; min
    vmovaps xmm1, xmm8; value
  }
  v648 = Dvar_RegisterFloat("cg_playerNameplatesNameTextWidth", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The text width of the player name.");
  __asm { vmovss  xmm1, cs:__real@c2200000; value }
  DCONST_DVARFLT_cg_playerNameplatesNameTextWidth = v648;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm9; min
  }
  v652 = Dvar_RegisterFloat("cg_playerNameplatesReviveNameOffsetX", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The X offset of the revive player name from the origin of the nameplate (top-left).");
  __asm { vmovss  xmm1, cs:__real@41f00000; value }
  DCONST_DVARFLT_cg_playerNameplatesReviveNameOffsetX = v652;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm9; min
  }
  v656 = Dvar_RegisterFloat("cg_playerNameplatesReviveNameOffsetY", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The Y offset of the revive player name from the origin of the nameplate (top-left).");
  __asm { vmovss  xmm1, cs:__real@41900000; value }
  DCONST_DVARFLT_cg_playerNameplatesReviveNameOffsetY = v656;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm9; min
  }
  v660 = Dvar_RegisterFloat("cg_playerNameplatesReviveNameFontHeight", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The font height of the revive player name.");
  __asm { vmovss  xmm1, cs:__real@41900000; value }
  DCONST_DVARFLT_cg_playerNameplatesReviveNameFontHeight = v660;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm9; min
  }
  v664 = Dvar_RegisterFloat("cg_playerNameplatesReviveNameTextWidth", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The text width of the revive player name.");
  __asm { vmovss  xmm1, cs:__real@40c00000; value }
  DCONST_DVARFLT_cg_playerNameplatesReviveNameTextWidth = v664;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm9; min
  }
  v668 = Dvar_RegisterFloat("cg_playerNameplatesRankOffsetX", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The X offset of the rank number from the origin of the nameplate (top-left).");
  __asm { vmovss  xmm1, cs:__real@41d00000; value }
  DCONST_DVARFLT_cg_playerNameplatesRankOffsetX = v668;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm9; min
  }
  v672 = Dvar_RegisterFloat("cg_playerNameplatesRankOffsetY", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The Y offset of the rank number from the origin of the nameplate (top-left).");
  __asm { vmovss  xmm1, cs:__real@41500000; value }
  DCONST_DVARFLT_cg_playerNameplatesRankOffsetY = v672;
  __asm
  {
    vmovaps xmm10, xmm7
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm9; min
  }
  DCONST_DVARFLT_cg_playerNameplatesRankWrapWidth = Dvar_RegisterFloat("cg_playerNameplatesRankWrapWidth", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The wrap width of the rank number. A large number will wrap past this width.");
  __asm
  {
    vmovss  xmm1, cs:__real@41400000; value
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm9; min
  }
  DCONST_DVARFLT_cg_playerNameplatesRankFontHeight = Dvar_RegisterFloat("cg_playerNameplatesRankFontHeight", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The font height of the rank number.");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vmovaps xmm2, xmm9; min
    vmovaps xmm1, xmm15; value
  }
  v683 = Dvar_RegisterFloat("cg_playerNameplatesPerkOffsetX", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The X offset of the perk icon from the origin of the nameplate (top-left).");
  __asm { vmovss  xmm1, cs:__real@c1500000; value }
  DCONST_DVARFLT_cg_playerNameplatesPerkOffsetX = v683;
  __asm
  {
    vmovaps xmm15, xmm7
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm9; min
  }
  v688 = Dvar_RegisterFloat("cg_playerNameplatesPerkOffsetY", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The Y offset of the perk icon from the origin of the nameplate (top-left).");
  __asm { vmovss  xmm1, cs:__real@41c00000; value }
  DCONST_DVARFLT_cg_playerNameplatesPerkOffsetY = v688;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm9; min
  }
  v692 = Dvar_RegisterFloat("cg_playerNameplatesPerkWidth", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The width of the perk icon.");
  __asm { vmovss  xmm1, cs:__real@41c00000; value }
  DCONST_DVARFLT_cg_playerNameplatesPerkWidth = v692;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm9; min
  }
  v696 = Dvar_RegisterFloat("cg_playerNameplatesPerkHeight", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The height of the perk icon.");
  __asm { vmovss  xmm1, cs:__real@41d00000; value }
  DCONST_DVARFLT_cg_playerNameplatesPerkHeight = v696;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm9; min
  }
  v700 = Dvar_RegisterFloat("cg_playerNameplatesBountyOffsetX", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The X offset of the bounty icons from the origin of the nameplate (top-left).");
  __asm { vmovss  xmm1, cs:__real@41500000; value }
  DCONST_DVARFLT_cg_playerNameplatesBountyOffsetX = v700;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm9; min
  }
  DCONST_DVARFLT_cg_playerNameplatesBountyOffsetY = Dvar_RegisterFloat("cg_playerNameplatesBountyOffsetY", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The Y offset of the bounty icons from the origin of the nameplate (top-left).");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm9; min
    vmovaps xmm1, xmm8; value
  }
  DCONST_DVARFLT_cg_playerNameplatesBountyWidth = Dvar_RegisterFloat("cg_playerNameplatesBountyWidth", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The width of the bounty icon.");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm9; min
    vmovaps xmm1, xmm8; value
  }
  DCONST_DVARFLT_cg_playerNameplatesBountyHeight = Dvar_RegisterFloat("cg_playerNameplatesBountyHeight", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The height of the bounty icon.");
  __asm
  {
    vmovss  xmm1, cs:__real@41700000; value
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm9; min
  }
  DCONST_DVARFLT_cg_playerNameplatesDistanceOffsetY = Dvar_RegisterFloat("cg_playerNameplatesDistanceOffsetY", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The Y offset of the distance meter from the revive player name.");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm9; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_cg_playerNameplatesDistanceOffsetX = Dvar_RegisterFloat("cg_playerNameplatesDistanceOffsetX", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The X offset of the distance meter from the revive player name.");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm9; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v719 = Dvar_RegisterFloat("cg_playerNameplatesChevronOffsetX", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The X offset of the chevron icon from the origin of the nameplate (top-left).");
  __asm { vmovss  xmm1, cs:__real@c2960000; value }
  DCONST_DVARFLT_cg_playerNameplatesChevronOffsetX = v719;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm9; min
  }
  v723 = Dvar_RegisterFloat("cg_playerNameplatesChevronOffsetY", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The Y offset of the chevron icon from the origin of the nameplate (top-left).");
  __asm { vmovss  xmm1, cs:__real@41600000; value }
  DCONST_DVARFLT_cg_playerNameplatesChevronOffsetY = v723;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm9; min
  }
  v727 = Dvar_RegisterFloat("cg_playerNameplatesChevronWidth", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The width of the chevron icon.");
  __asm { vmovss  xmm1, cs:__real@41600000; value }
  DCONST_DVARFLT_cg_playerNameplatesChevronWidth = v727;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm9; min
  }
  v731 = Dvar_RegisterFloat("cg_playerNameplatesChevronHeight", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The height of the chevron icon.");
  __asm { vmovss  xmm1, cs:__real@40b00000; value }
  DCONST_DVARFLT_cg_playerNameplatesChevronHeight = v731;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm9; min
  }
  v735 = Dvar_RegisterFloat("cg_playerNameplatesRankIconOffsetLeft", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The X offset of the left edge of the rank icon from the origin of the nameplate (top-left).");
  __asm { vmovss  xmm1, cs:__real@41ac0000; value }
  DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetLeft = v735;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm9; min
  }
  v739 = Dvar_RegisterFloat("cg_playerNameplatesRankIconOffsetRight", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The X offset of the right edge of the rank icon from the origin of the nameplate (top-left).");
  __asm { vmovss  xmm1, cs:__real@c0b00000; value }
  DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetRight = v739;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm9; min
  }
  DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetTop = Dvar_RegisterFloat("cg_playerNameplatesRankIconOffsetTop", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The Y offset of the top edge of the rank icon from the origin of the nameplate (top-left).");
  __asm
  {
    vmovss  xmm1, cs:__real@41280000; value
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm9; min
  }
  DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetBottom = Dvar_RegisterFloat("cg_playerNameplatesRankIconOffsetBottom", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The Y offset of the bottom edge of the rank icon from the origin of the nameplate (top-left).");
  DCONST_DVARINT_cg_playerNameplatesFadeoutTime = Dvar_RegisterInt("cg_playerNameplatesFadeoutTime", 400, 0, 5000, 0x40004u, "How long does it take for the nameplates to fade out (in ms).");
  __asm { vmovss  xmm1, cs:__real@42700000; value }
  DVARBOOL_cg_playerNameplateOverlapCullingEnabled = Dvar_RegisterBool("MQKRLTMROM", 1, 4u, "If true, friendly nameplates that overlap other nameplates will be culled, this prevents confusion when trying to detect enemies.");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v749 = Dvar_RegisterFloat("cg_playerNameplateOverlapCullingWidth", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The approximate width of the nameplate when culling.");
  __asm { vmovss  xmm1, cs:__real@40a00000; value }
  DCONST_DVARFLT_cg_playerNameplateOverlapCullingWidth = v749;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm9; min
  }
  DCONST_DVARFLT_cg_playerNameplateViewHeightOffset = Dvar_RegisterFloat("cg_playerNameplateViewHeightOffset", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "The height offset applied when approximating the screen position for the body/head of the target entity for rendering the nameplate");
  DCONST_DVARINT_cg_playerNameplateStateChangeDuration = Dvar_RegisterInt("cg_playerNameplateStateChangeDuration", 500, 1, 1000, 0x40004u, "The time in ms it takes for the character to change from prone to crounch/standing");
  DCONST_DVARBOOL_collAvoid_debug = Dvar_RegisterBool("collAvoid_debug", 0, 0x40004u, "Turn on collision avoidance debugging");
  __asm
  {
    vmovss  xmm3, cs:__real@461c4000; max
    vmovss  xmm1, cs:__real@41000000; value
  }
  DCONST_DVARINT_collAvoid_avoidType = Dvar_RegisterInt("collAvoid_avoidType", 1, 0, 10, 0x40004u, "Avoidance force type 0) off 1) linear 2) cmd correction");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v756 = Dvar_RegisterFloat("collAvoid_linearAccel", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Linear acceleration to avoid players");
  __asm { vmovss  xmm1, cs:__real@41c80000; value }
  DCONST_DVARFLT_collAvoid_linearAccel = v756;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v760 = Dvar_RegisterFloat("collAvoid_linearMinSpeed", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Minimum speed when avoiding players");
  __asm { vmovss  xmm1, cs:__real@41200000; value }
  DCONST_DVARFLT_collAvoid_linearMinSpeed = v760;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v764 = Dvar_RegisterFloat("collAvoid_linearNearlyStoppedSpeed", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Speed at which we consider players basically stopped");
  __asm { vmovss  xmm1, cs:__real@40a00000; value }
  DCONST_DVARFLT_collAvoid_linearNearlyStoppedSpeed = v764;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v768 = Dvar_RegisterFloat("collAvoid_additionalAvoidDistance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Additional space between players before they overlap");
  __asm
  {
    vmovss  xmm6, cs:__real@c3b40000
    vmovss  xmm3, cs:__real@43b40000; max
    vmovss  xmm1, cs:__real@428c0000; value
  }
  DCONST_DVARFLT_collAvoid_additionalAvoidDistance = v768;
  __asm { vmovaps xmm2, xmm6; min }
  v773 = Dvar_RegisterFloat("LMPQKKQLKO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, "How much to rotate the turret barrel when a helicopter fires");
  __asm
  {
    vmovss  xmm8, cs:__real@7f7fffff
    vmovaps xmm3, xmm8; max
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm11; value
  }
  DVARFLT_heli_barrelRotation = v773;
  v778 = Dvar_RegisterFloat("LOKMPRLNRL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, (const char *)&queryFormat.fmt + 3);
  __asm
  {
    vmovss  xmm1, cs:__real@43b40000; value
    vmovaps xmm3, xmm8; max
    vmovaps xmm2, xmm6; min
  }
  DVARFLT_heli_barrelMaxVelocity = v778;
  v782 = Dvar_RegisterFloat("NPRNKLTQOT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0, (const char *)&queryFormat.fmt + 3);
  __asm { vmovss  xmm1, cs:__real@469c4000; value }
  DVARFLT_heli_barrelSlowdown = v782;
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DCONST_DVARFLT_heli_audioPriorityCullDistance = Dvar_RegisterFloat("heli_audioPriorityCullDistance", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Helicopter audio is prioritized for helicopters within this range");
  DCONST_DVARINT_heli_audioPriorityCount = Dvar_RegisterInt("heli_audioPriorityCount", 2, 0, 32, 0x40004u, "Helicopter audio is prioritized for up to this many helicopters");
  DVARBOOL_cg_anticheat_dataCollectionEnabled = Dvar_RegisterBool("LPMPTNTKTP", 0, 0, "Enable cg anticheat data collection.");
  DCONST_DVARBOOL_cg_anticheat_debugDrawTargetThroughWalls = Dvar_RegisterBool("cg_anticheat_debugDrawTargetThroughWalls", 0, 0x40004u, "Enable debug drawing for target through walls");
  DCONST_DVARBOOL_cg_player_visibility_test_active = Dvar_RegisterBool("cg_player_visibility_test_active", 0, 0x40004u, "Enable cg_player_visibility test");
  DCONST_DVARBOOL_cg_player_visibility_test_getResultWithWait = Dvar_RegisterBool("cg_player_visibility_test_getResultWithWait", 0, 0x40004u, "When accessing results of cg_player_visibility test, call version with wait");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_cg_player_visibility_test_worldspacePadding = Dvar_RegisterFloat("cg_player_visibility_test_worldspacePadding", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "World space padding for cg_player_visibility test");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vmovaps xmm2, xmm14; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DCONST_DVARFLT_cg_player_visibility_test_extendedPitchAngle = Dvar_RegisterFloat("cg_player_visibility_test_extendedPitchAngle", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Extended pitch angle for cg_player_visibility test. NOTE: value will be clamped between 0 and 90 degrees. Unbounded to test clamping");
  __asm
  {
    vmovaps xmm3, xmm8; max
    vmovaps xmm2, xmm14; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v795 = Dvar_RegisterFloat("cg_player_visibility_test_extendedYawAngle", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x40004u, "Extended pitch angle for cg_player_visibility test. NOTE: value will be clamped between 0 and 180 degrees. Unbounded to test clamping");
  __asm { vmovaps xmm14, [rsp+0F8h+var_98] }
  _R11 = &v864;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm15, [rsp+0F8h+var_A8]
  }
  DCONST_DVARFLT_cg_player_visibility_test_extendedYawAngle = v795;
}

/*
==============
CG_MainMP_RegisterGraphics
==============
*/
void CG_MainMP_RegisterGraphics(LocalClientNum_t localClientNum, const char *mapname, const char *gameType)
{
  __int64 v6; 
  char v7; 
  const dvar_t *v8; 
  __int64 integer64; 
  const char *v10; 
  __int64 v11; 
  __int64 v12; 
  char v13; 
  __int64 v14; 
  char v15; 
  Material *v16; 
  char ActiveGameMode; 
  const char *v19; 
  CgDynamicMediaMP *CgDynamicMediaMP; 

  v6 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "CG_MainMP_RegisterGraphics");
  if ( (unsigned int)v6 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v6, 2) )
    __debugbreak();
  v7 = clientUIActives[v6].frontEndSceneState[0];
  memset_0(cgMedia.serverMaterialsTouch, 0, sizeof(cgMedia.serverMaterialsTouch));
  cgMedia.tracerDefault = Tracer_Register("defaulttracer");
  cgMedia.laserDefault = Laser_Register("voidlaser");
  if ( v7 )
  {
    cgMedia.lagometerMaterial = Material_RegisterHandle((const char *)&queryFormat.fmt + 3, IMAGE_TRACK_HUD);
  }
  else
  {
    cgMedia.lagometerMaterial = Material_RegisterHandle("lagometer", IMAGE_TRACK_HUD);
    cgMedia.tracerThermalOverrideMat = Material_RegisterHandle("gfx_tracer_thermal", IMAGE_TRACK_FX);
    cgMedia.laserMaterial = Material_RegisterHandle("gfx_laser_hdr", IMAGE_TRACK_FX);
    cgMedia.laserLightMaterial = Material_RegisterHandle("gfx_laser_light", IMAGE_TRACK_FX);
    cgMedia.objectiveMaterials[0] = Material_RegisterHandle("objective", IMAGE_TRACK_HUD);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW|WEAPON_FIRING) )
    {
      cgMedia.compass.locationSelectorCursor = Image_Register("hud_location_selector_target", IMAGE_TRACK_HUD);
      cgMedia.compass.locationSelectorCursorMark1 = Image_Register("hud_location_selector_target_marked_01", IMAGE_TRACK_HUD);
      cgMedia.compass.locationSelectorCursorMark2 = Image_Register("hud_location_selector_target_marked_02", IMAGE_TRACK_HUD);
      cgMedia.mapLocationSelectorArrow = Image_Register("artilleryarea_arrow", IMAGE_TRACK_HUD);
      cgMedia.mapLocationSelectorArrowSingle = Image_Register("artilleryarea_arrow_single", IMAGE_TRACK_HUD);
    }
    cgMedia.streamingPlayerIcon = Material_RegisterHandle("icon_minimap_player", IMAGE_TRACK_HUD);
    if ( Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_FIRING) )
    {
      cgMedia.compass.self_arrow = Image_Register("icon_minimap_player", IMAGE_TRACK_HUD);
      cgMedia.compass.mlg_hl_arrow = Image_Register("compassping_mlg_highlight", IMAGE_TRACK_HUD);
      cgMedia.compass.codcaster_arrow_inner_100 = Image_Register("icon_minimap_player_codcaster_inner_100", IMAGE_TRACK_HUD);
      cgMedia.compass.codcaster_fov_cone = Image_Register("icon_minimap_player_codcaster_fov_cone", IMAGE_TRACK_HUD);
      cgMedia.compass.minimap_codcaster_player_arrow_fullmap_bg = Image_Register("icon_minimap_player_codcaster_fullmap_arrow_bg", IMAGE_TRACK_HUD);
      cgMedia.compass.minimap_codcaster_player_arrow_fullmap_border = Image_Register("icon_minimap_player_codcaster_fullmap_arrow_border", IMAGE_TRACK_HUD);
      cgMedia.compass.minimap_codcaster_player_arrow_fullmap_border_shooting = Image_Register("icon_minimap_player_codcaster_fullmap_arrow_border_shooting", IMAGE_TRACK_HUD);
      cgMedia.compass.minimap_codcaster_player_arrow_fullmap_border_bold = Image_Register("icon_minimap_player_codcaster_fullmap_arrow_border_bold", IMAGE_TRACK_HUD);
      cgMedia.compass.minimap_codcaster_player_arrow_fullmap_border_bold_shooting = Image_Register("icon_minimap_player_codcaster_fullmap_arrow_border_bold_shooting", IMAGE_TRACK_HUD);
      cgMedia.compass.minimap_codcaster_objective_arrow_bg = Image_Register("icon_minimap_player_codcaster_objective_arrow_bg", IMAGE_TRACK_HUD);
      cgMedia.compass.minimap_codcaster_objective_arrow_outline = Image_Register("icon_minimap_player_codcaster_objective_arrow_outline", IMAGE_TRACK_HUD);
      cgMedia.compass.minimap_codcaster_objective_circle_bg = Image_Register("icon_minimap_player_codcaster_objective_circle_bg", IMAGE_TRACK_HUD);
      cgMedia.compass.minimap_codcaster_objective_circle_outline = Image_Register("icon_minimap_player_codcaster_objective_circle_outline", IMAGE_TRACK_HUD);
      cgMedia.compass.codcaster_death_skull = Image_Register("icon_minimap_player_codcaster_skull", IMAGE_TRACK_HUD);
      cgMedia.compass.codcaster_death_skull_outline = Image_Register("icon_minimap_player_codcaster_skull_outline", IMAGE_TRACK_HUD);
      cgMedia.compass.codcaster_objective_flag = Image_Register("codcaster_icon_waypoint_ctf_full_centered", IMAGE_TRACK_HUD);
      cgMedia.compass.codcaster_objective_bomb = Image_Register("icon_minimap_player_codcaster_bomb", IMAGE_TRACK_HUD);
      cgMedia.compass.codcaster_objective_circle_bg = Image_Register("icon_minimap_codcaster_objective_background_circle", IMAGE_TRACK_HUD);
      cgMedia.compass.codcaster_objective_revive_cross = Image_Register("icon_minimap_player_codcaster_revive_cross", IMAGE_TRACK_HUD);
      cgMedia.compass.codcaster_objective_background_left = Image_Register("icon_split_objective_plate_left", IMAGE_TRACK_HUD);
      cgMedia.compass.friendly_arrow = Image_Register("icon_minimap_player", IMAGE_TRACK_HUD);
      cgMedia.compass.friendly_chatting = Image_Register("icon_minimap_player_talking", IMAGE_TRACK_HUD);
      cgMedia.compass.friendly_firing = Image_Register("icon_minimap_player_shooting", IMAGE_TRACK_HUD);
      cgMedia.compass.friendly_yelling = Image_Register("icon_minimap_player_talking", IMAGE_TRACK_HUD);
      cgMedia.compass.party_arrow = Image_Register("icon_minimap_player", IMAGE_TRACK_HUD);
      cgMedia.compass.party_chatting = Image_Register("icon_minimap_player_talking", IMAGE_TRACK_HUD);
      cgMedia.compass.party_firing = Image_Register("icon_minimap_player_shooting", IMAGE_TRACK_HUD);
      cgMedia.compass.party_yelling = Image_Register("icon_minimap_player_talking", IMAGE_TRACK_HUD);
      cgMedia.compass.squad_arrow = Image_Register("icon_minimap_player", IMAGE_TRACK_HUD);
      cgMedia.compass.squad_firing = Image_Register("icon_minimap_player_shooting", IMAGE_TRACK_HUD);
      cgMedia.compass.enemy_blip[1][0] = Image_Register("compassping_enemyfiring", IMAGE_TRACK_HUD);
      cgMedia.compass.enemy_blip[1][1] = Image_Register("compassping_enemyfiring_above", IMAGE_TRACK_HUD);
      cgMedia.compass.enemy_blip[1][2] = Image_Register("compassping_enemyfiring_below", IMAGE_TRACK_HUD);
      cgMedia.compass.enemy_blip[0][0] = Image_Register("compassping_enemynotfiring", IMAGE_TRACK_HUD);
      cgMedia.compass.enemy_blip[0][1] = Image_Register("compassping_enemynotfiring_above", IMAGE_TRACK_HUD);
      cgMedia.compass.enemy_blip[0][2] = Image_Register("compassping_enemynotfiring_below", IMAGE_TRACK_HUD);
      cgMedia.compass.enemy_arrow = Image_Register("icon_minimap_player", IMAGE_TRACK_HUD);
      cgMedia.compass.enemy_arrow_firing = Image_Register("icon_minimap_player_shooting", IMAGE_TRACK_HUD);
      cgMedia.compass.turretMedia[0].friendly = Image_Register("icon_minimap_shock_sentry_friendly", IMAGE_TRACK_HUD);
      cgMedia.compass.turretMedia[0].friendly_firing = Image_Register("icon_minimap_shock_sentry_friendly_firing", IMAGE_TRACK_HUD);
      cgMedia.compass.turretMedia[0].enemy = Image_Register("icon_minimap_shock_sentry_enemy", IMAGE_TRACK_HUD);
      cgMedia.compass.turretMedia[0].enemy_firing = Image_Register("icon_minimap_shock_sentry_enemy_firing", IMAGE_TRACK_HUD);
      cgMedia.compass.turretMedia[1].friendly = Image_Register("compassping_buddy_drone_friendly", IMAGE_TRACK_HUD);
      cgMedia.compass.turretMedia[1].friendly_firing = Image_Register("icon_minimap_vulture_friendly_firing", IMAGE_TRACK_HUD);
      cgMedia.compass.turretMedia[1].enemy = Image_Register("compassping_buddy_drone_enemy", IMAGE_TRACK_HUD);
      cgMedia.compass.turretMedia[1].enemy_firing = Image_Register("icon_minimap_vulture_enemy_firing", IMAGE_TRACK_HUD);
      cgMedia.compass.turretMedia[2].friendly = Image_Register("icon_minimap_micro_turret_friendly", IMAGE_TRACK_HUD);
      cgMedia.compass.turretMedia[2].friendly_firing = Image_Register("icon_minimap_micro_turret_friendly_firing", IMAGE_TRACK_HUD);
      cgMedia.compass.turretMedia[2].enemy = Image_Register("icon_minimap_micro_turret_enemy", IMAGE_TRACK_HUD);
      cgMedia.compass.turretMedia[2].enemy_firing = Image_Register("icon_minimap_micro_turret_enemy_firing", IMAGE_TRACK_HUD);
      cgMedia.compass.missile = Image_Register("icon_minimap_cruisemissile", IMAGE_TRACK_HUD);
      cgMedia.compass.friendly_juggernaut = Image_Register("cb_compassping_jugg_friend_mp", IMAGE_TRACK_HUD);
      cgMedia.compass.enemy_juggernaut = Image_Register("cb_compassping_jugg_enemy_mp", IMAGE_TRACK_HUD);
      cgMedia.compass.last_stand = Image_Register("ui_mp_br_mapmenu_icon_downed", IMAGE_TRACK_HUD);
      cgMedia.compass.calloutMarkerPing_Navigation = Image_Register("ui_mp_br_mapmenu_ping_navigation_player", IMAGE_TRACK_HUD);
      cgMedia.compass.calloutMarkerPing_Navigation_Leader = Image_Register("ui_mp_br_mapmenu_ping_navigation_squadleader", IMAGE_TRACK_HUD);
      cgMedia.compass.calloutMarkerPing_Danger = Image_Register("ui_mp_br_ping_icon_danger_base", IMAGE_TRACK_HUD);
      cgMedia.compass.calloutMarkerPing_Enemy = Image_Register("ui_mp_br_ping_icon_enemy_spot", IMAGE_TRACK_HUD);
      cgMedia.compass.calloutMarkerPing_Plunder = Image_Register("ui_mp_br_mapmenu_legend_poi_plunder", IMAGE_TRACK_HUD);
      cgMedia.compass.calloutMarkerPing_PlunderBuyback = Image_Register("ui_mp_br_mapmenu_icon_poi_plunder_box_buyback", IMAGE_TRACK_HUD);
      cgMedia.compass.calloutMarkerPing_Vehicle = Image_Register("ui_mp_br_ping_icon_vehicle_wheel_sm", IMAGE_TRACK_HUD);
      cgMedia.compass.calloutMarkerPing_Ammo = Image_Register("hud_icon_br_ammo", IMAGE_TRACK_HUD);
      cgMedia.compass.calloutMarkerPing_PropaneJar = Image_Register("hud_icon_equipment_gas_can_flame", IMAGE_TRACK_HUD);
      cgMedia.compass.calloutMarkerPing_NeurotoxinJar = Image_Register("hud_icon_equipment_gas_can_toxic", IMAGE_TRACK_HUD);
      cgMedia.compass.calloutMarkerPing_CUAV = Image_Register("icon_killstreak_scramblerdrone", IMAGE_TRACK_HUD);
      cgMedia.compass.calloutMarkerPing_Loot_Generic = Image_Register("ui_icon_armor_pickup", IMAGE_TRACK_HUD);
      cgMedia.compass.calloutMarkerPing_AllyInLastStand = Image_Register("hud_realism_head_revive", IMAGE_TRACK_HUD);
      cgMedia.compass.calloutMarkerPing_Caution = Image_Register("ui_mp_br_ping_icon_caution", IMAGE_TRACK_HUD);
      cgMedia.compass.calloutMarkerPing_OvalBackground = Image_Register("ui_mp_br_ping_loot_border_1x1_tacmap", IMAGE_TRACK_HUD);
      cgMedia.compass.calloutMarkerPing_OvalBackgroundVertical = Image_Register("ui_mp_br_ping_vertical_base", IMAGE_TRACK_HUD);
      cgMedia.compass.calloutMarkerPing_PipBorder = Image_Register("ui_mp_br_counter_border_circle", IMAGE_TRACK_HUD);
      cgMedia.compass.calloutMarkerPing_PipFill = Image_Register("ui_mp_br_counter_fill_circle", IMAGE_TRACK_HUD);
      cgMedia.compass.calloutMarkerPing_SlotPlunder = Image_Register("ui_mp_br_mapmenu_icon_poi_plunder_extract", IMAGE_TRACK_HUD);
      cgMedia.compass.calloutMarkerPing_SlotRespawnToken = Image_Register("ui_mp_br_loot_icon_respawn_token", IMAGE_TRACK_HUD);
      cgMedia.compass.calloutMarkerPing_SlotSelfRevive = Image_Register("ui_mp_br_player_status_token_self_revive", IMAGE_TRACK_HUD);
      cgMedia.compass.calloutMarkerPing_SlotArmor = Image_Register("ui_mp_br_loot_icon_health_armor_plates", IMAGE_TRACK_HUD);
      cgMedia.compass.calloutMarkerPing_SlotAmmoSmallCal = Image_Register("ui_mp_br_loot_icon_ammo_small", IMAGE_TRACK_HUD);
      cgMedia.compass.calloutMarkerPing_SlotAmmoMidCal = Image_Register("ui_mp_br_loot_icon_ammo_mid", IMAGE_TRACK_HUD);
      cgMedia.compass.calloutMarkerPing_SlotAmmoHighCal = Image_Register("ui_mp_br_loot_icon_ammo_high", IMAGE_TRACK_HUD);
      cgMedia.compass.calloutMarkerPing_SlotAmmoRocket = Image_Register("ui_mp_br_loot_icon_ammo_rocket", IMAGE_TRACK_HUD);
      cgMedia.compass.calloutMarkerPing_SlotAmmoShells = Image_Register("ui_mp_br_loot_icon_ammo_shells", IMAGE_TRACK_HUD);
      cgMedia.compass.calloutMarkerPing_SlotWeapon = Image_Register("ui_mp_br_loot_icon_generic_weapon", IMAGE_TRACK_HUD);
      if ( CG_GameInterface_PlayingBR() )
      {
        v8 = DVARSTR_ui_br_variant;
        if ( !DVARSTR_ui_br_variant && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_br_variant") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v8);
        integer64 = v8->current.integer64;
        v10 = "x1";
        v11 = 0x7FFFFFFFi64;
        if ( !integer64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
          __debugbreak();
        v12 = integer64 - (_QWORD)"x1";
        do
        {
          v13 = v10[v12];
          v14 = v11;
          v15 = *v10++;
          --v11;
          if ( !v14 )
            break;
          if ( v13 != v15 )
            goto LABEL_20;
        }
        while ( v13 );
        cgMedia.compass.x1_markers[0] = Image_Register("ui_mp_br_marker_x1_a", IMAGE_TRACK_HUD);
        cgMedia.compass.x1_markers[1] = Image_Register("ui_mp_br_marker_x1_b", IMAGE_TRACK_HUD);
        cgMedia.compass.x1_markers[2] = Image_Register("ui_mp_br_marker_x1_c", IMAGE_TRACK_HUD);
      }
LABEL_20:
      StringTable_GetAsset("mp_cp/vehicletable.csv", &s_vehicleTable);
      if ( s_vehicleTable )
        NetConstStrings_CallForAllVehicleStrings(CG_MainMP_RegisterMarkerPingMaterialForVehicleDefAtIndex);
      cgMedia.compassping_portable_radar_sweep = Image_Register("compassping_portable_radar_sweep", IMAGE_TRACK_HUD);
      cgMedia.compass_bounding_circle = Image_Register("minimap_bounding_circle", IMAGE_TRACK_HUD);
      cgMedia.compassping_grenade = Material_RegisterHandle("compassping_grenade", IMAGE_TRACK_HUD);
      cgMedia.compassping_explosion = Material_RegisterHandle("compassping_explosion", IMAGE_TRACK_HUD);
      cgMedia.compass_radarline = Image_Register("compass_radarline", IMAGE_TRACK_HUD);
      cgMedia.compassping_scrambler_friendly = Image_Register("minimap_scrambler_mask", IMAGE_TRACK_HUD);
      cgMedia.compass_dogtags = Material_RegisterHandle("waypoint_dogtags", IMAGE_TRACK_HUD);
      if ( CG_GameInterface_PlayingBR() || CG_GameInterface_PlayingBRTDM() )
      {
        cgMedia.objectiveBackgroundDiamond = Material_RegisterHandle("ui_mp_br_mapmenu_backing_poi", IMAGE_TRACK_HUD);
        cgMedia.objectiveBackgroundCircle = Material_RegisterHandle("ui_mp_br_mapmenu_backing_helipad_poi", IMAGE_TRACK_HUD);
        cgMedia.objectiveBackgroundPentagon = Material_RegisterHandle("ui_mp_br_mapmenu_backing_objective", IMAGE_TRACK_HUD);
        cgMedia.objectiveBackgroundMission = Material_RegisterHandle("ui_mp_br_mapmenu_backing_tablet", IMAGE_TRACK_HUD);
        cgMedia.objectiveBackgroundMissionTracked = Material_RegisterHandle("ui_mp_br_mapmenu_backing_tablettracked", IMAGE_TRACK_HUD);
        cgMedia.objectiveMiniIconMission = Material_RegisterHandle("ui_mp_br_mapmenu_distance_icon_tablet", IMAGE_TRACK_HUD);
        cgMedia.objectiveMiniIconPOI = Material_RegisterHandle("ui_mp_br_mapmenu_distance_icon_poi", IMAGE_TRACK_HUD);
        cgMedia.objectiveMiniIconVehicle = Image_Register("ui_mp_br_mapmenu_distance_icon_vehicle", IMAGE_TRACK_HUD);
        cgMedia.objectiveBackgroundDiamondAbove = Material_RegisterHandle("ui_mp_br_mapmenu_backing_poi_90_up", IMAGE_TRACK_HUD);
        cgMedia.objectiveBackgroundDiamondBelow = Material_RegisterHandle("ui_mp_br_mapmenu_backing_poi_90_down", IMAGE_TRACK_HUD);
        cgMedia.objectiveBackgroundCircleAbove = Material_RegisterHandle("ui_mp_br_mapmenu_backing_helipad_poi", IMAGE_TRACK_HUD);
        cgMedia.objectiveBackgroundCircleBelow = Material_RegisterHandle("ui_mp_br_mapmenu_backing_helipad_poi", IMAGE_TRACK_HUD);
        cgMedia.objectiveBackgroundPentagonAbove = Material_RegisterHandle("ui_mp_br_mapmenu_backing_objective_90_up", IMAGE_TRACK_HUD);
        cgMedia.objectiveBackgroundPentagonBelow = Material_RegisterHandle("ui_mp_br_mapmenu_backing_objective_90_down", IMAGE_TRACK_HUD);
        cgMedia.objectiveBackgroundMissionAbove = Material_RegisterHandle("ui_mp_br_mapmenu_backing_tablet_90_up", IMAGE_TRACK_HUD);
        cgMedia.objectiveBackgroundMissionBelow = Material_RegisterHandle("ui_mp_br_mapmenu_backing_tablet_90_down", IMAGE_TRACK_HUD);
        cgMedia.objectiveBackgroundNoneAbove = Material_RegisterHandle("ui_mp_br_mapmenu_backing_none_90_up", IMAGE_TRACK_HUD);
        cgMedia.objectiveBackgroundNoneBelow = Material_RegisterHandle("ui_mp_br_mapmenu_backing_none_90_down", IMAGE_TRACK_HUD);
      }
      else
      {
        cgMedia.objectiveBackgroundDiamond = Material_RegisterHandle("icon_waypoint_backing_poi", IMAGE_TRACK_HUD);
        cgMedia.objectiveBackgroundCircle = Material_RegisterHandle("iw7_waypoint_circle_backing_base", IMAGE_TRACK_HUD);
        v16 = Material_RegisterHandle("icon_waypoint_backing_sm", IMAGE_TRACK_HUD);
        __asm
        {
          vpxor   xmm0, xmm0, xmm0
          vmovdqu ymmword ptr cs:?cgMedia@@3UcgMedia_t@@A.objectiveBackgroundMission, ymm0; cgMedia_t cgMedia
        }
        cgMedia.objectiveBackgroundPentagon = v16;
        cgMedia.objectiveMiniIconVehicle = NULL;
      }
    }
    cgMedia.objectiveBackgroundDiamondNew = Material_RegisterHandle("icon_waypoint_backing_enemy", IMAGE_TRACK_HUD);
    cgMedia.objectiveBackgroundCircleNew = Material_RegisterHandle("icon_waypoint_backing_friendly", IMAGE_TRACK_HUD);
    cgMedia.damageMaterialStun = Material_RegisterHandle("hit_direction_stun", IMAGE_TRACK_HUD);
    cgMedia.damageMaterialArmor = Material_RegisterHandle("hit_direction_armor", IMAGE_TRACK_HUD);
    cgMedia.damageMaterialRicochet = Material_RegisterHandle("hit_direction_ricochet", IMAGE_TRACK_HUD);
    cgMedia.damageMaterialWhizby = Material_RegisterHandle("white", IMAGE_TRACK_HUD);
    cgMedia.spaceshipTargetLock = Material_RegisterHandle("jet_hud_target_locked", IMAGE_TRACK_HUD);
    cgMedia.spaceshipTargetLocking = Material_RegisterHandle("jet_hud_target_locking", IMAGE_TRACK_HUD);
    cgMedia.grenadeIconFrag = Material_RegisterHandle("hud_icon_equipment_frag", IMAGE_TRACK_HUD);
    cgMedia.grenadeIconFlash = Material_RegisterHandle("hud_flashbangicon", IMAGE_TRACK_HUD);
    cgMedia.grenadeIconThrowBack = Material_RegisterHandle("hud_icon_grenade_throwback", IMAGE_TRACK_HUD);
    cgMedia.grenadePointer = Material_RegisterHandle("hud_icon_grenade_direction_indicator", IMAGE_TRACK_HUD);
    cgMedia.offscreenObjectivePointer = Material_RegisterHandle("hud_offscreenobjectivepointer", IMAGE_TRACK_HUD);
    cgMedia.leanReticleHint = Material_RegisterHandle("reticle_lean_hint", IMAGE_TRACK_HUD);
    cgMedia.teamStatusBar = Material_RegisterHandle("hudcolorbar", IMAGE_TRACK_HUD);
    cgMedia.balloonMaterial = Material_RegisterHandle("headicontalkballoon", IMAGE_TRACK_HUD);
    cgMedia.killstreakTriggerModel = R_RegisterModel("c4_clacker_iw7_wm");
    ActiveGameMode = Com_GameMode_GetActiveGameMode();
    v19 = "viewmodel_zmb_hidden";
    if ( ActiveGameMode != 3 )
      v19 = "viewmodel_mp_hidden";
    cgMedia.hiddenViewArms = R_RegisterModel(v19);
    FX_LoadEffect("vfx/code/equipment/thermal_beacon_inverted.vfx", &cgMedia.thermalTeamFx);
    FX_LoadEffect("vfx/iw7/core/impact/railgun/vfx_imp_railgun_spike.vfx", &cgMedia.impalingSpikeFx);
    FX_LoadEffect("vfx/code/impacts/flesh_hit_noblood.vfx", &cgMedia.fxNoBloodFleshHit);
    FX_LoadEffect("vfx/code/impacts/flesh_hit_knife.vfx", &cgMedia.fxKnifeBlood);
    FX_LoadEffect("vfx/code/impacts/flesh_hit_knife_noblood.vfx", &cgMedia.fxKnifeNoBlood);
    FX_LoadEffect("vfx/code/impacts/riotshield_viewmodel_hit.vfx", &cgMedia.fxRiotShieldImpact);
    FX_LoadEffect("vfx/code/impacts/blood_on_riotshield.vfx", &cgMedia.fxBloodOnRiotshield);
    FX_LoadEffect("vfx/iw8/char/blood/vfx_deathfx_bloodpool_01.vfx", &cgMedia.fxBloodPool);
    CG_Main_RegisterSurfaceEffects(mapname);
    FX_LoadEffect("vfx/code/tread/heli_dust_default.vfx", &cgMedia.heliDustEffect);
    FX_LoadEffect("vfx/code/tread/heli_water.vfx", &cgMedia.heliWaterEffect);
    FX_LoadEffect("vfx/iw8_mp/taunts/vfx_gesture_spray_paint.vfx", &cgMedia.fxSprayDecal);
    FX_LoadEffect("vfx/iw7/code/mp/vfx_tracker_print_left.vfx", &cgMedia.fxTrackerProLeftFootNormalDurationOnGround);
    FX_LoadEffect("vfx/iw7/code/mp/vfx_tracker_print_left_quick.vfx", &cgMedia.fxTrackerProLeftFootShortDurationOnGround);
    FX_LoadEffect("vfx/iw7/code/mp/vfx_tracker_print_left.vfx", &cgMedia.fxTrackerProLeftFootNormalDurationInAir);
    FX_LoadEffect("vfx/iw7/code/mp/vfx_tracker_print_left_quick.vfx", &cgMedia.fxTrackerProLeftFootShortDurationInAir);
    FX_LoadEffect("vfx/iw7/code/mp/vfx_tracker_print_right.vfx", &cgMedia.fxTrackerProRightFootNormalDurationOnGround);
    FX_LoadEffect("vfx/iw7/code/mp/vfx_tracker_print_right_quick.vfx", &cgMedia.fxTrackerProRightFootShortDurationOnGround);
    FX_LoadEffect("vfx/iw7/code/mp/vfx_tracker_print_right.vfx", &cgMedia.fxTrackerProRightFootNormalDurationInAir);
    FX_LoadEffect("vfx/iw7/code/mp/vfx_tracker_print_right_quick.vfx", &cgMedia.fxTrackerProRightFootShortDurationInAir);
    FX_LoadEffect("vfx/iw7/code/mp/vfx_tracker_night_print_left.vfx", &cgMedia.fxTrackerProNightLeftFootNormalDurationOnGround);
    FX_LoadEffect("vfx/iw7/code/mp/vfx_tracker_night_print_left_quick.vfx", &cgMedia.fxTrackerProNightLeftFootShortDurationOnGround);
    FX_LoadEffect("vfx/iw7/code/mp/vfx_tracker_night_print_left.vfx", &cgMedia.fxTrackerProNightLeftFootNormalDurationInAir);
    FX_LoadEffect("vfx/iw7/code/mp/vfx_tracker_night_print_left_quick.vfx", &cgMedia.fxTrackerProNightLeftFootShortDurationInAir);
    FX_LoadEffect("vfx/iw7/code/mp/vfx_tracker_night_print_right.vfx", &cgMedia.fxTrackerProNightRightFootNormalDurationOnGround);
    FX_LoadEffect("vfx/iw7/code/mp/vfx_tracker_night_print_right_quick.vfx", &cgMedia.fxTrackerProNightRightFootShortDurationOnGround);
    FX_LoadEffect("vfx/iw7/code/mp/vfx_tracker_night_print_right.vfx", &cgMedia.fxTrackerProNightRightFootNormalDurationInAir);
    FX_LoadEffect("vfx/iw7/code/mp/vfx_tracker_night_print_right_quick.vfx", &cgMedia.fxTrackerProNightRightFootShortDurationInAir);
    FX_LoadEffect("vfx/iw8_mp/executions/vfx_exec_ninja_smoke_entr.vfx", &cgMedia.fxExecutionPropNinjaSmokeEnter);
    FX_LoadEffect("vfx/iw8_mp/executions/vfx_exec_ninja_smoke.vfx", &cgMedia.fxExecutionPropNinjaSmokeExit);
    FX_LoadEffect("vfx/iw8_br/gameplay/circle/vfx_br_circle_cam_radioactive_ash_01.vfx", &cgMedia.fxBrCircleAsh);
    FX_LoadEffect("vfx/misc/vfx_esport_arial_view.vfx", &cgMedia.fxMlgArrow);
    cgMedia.overheadNames.enemy = Material_RegisterHandle("player_name_bg_red", IMAGE_TRACK_HUD);
    cgMedia.overheadNames.friendly = Material_RegisterHandle("player_name_bg_green", IMAGE_TRACK_HUD);
    if ( Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_OFF|WEAPON_FIRING) )
    {
      cgMedia.navBar.enemy[0] = Material_RegisterHandle("icon_navbar_enemy_firing", IMAGE_TRACK_HUD);
      cgMedia.navBar.enemy[1] = Material_RegisterHandle("icon_navbar_enemy_firing_above", IMAGE_TRACK_HUD);
      cgMedia.navBar.enemy[2] = Material_RegisterHandle("icon_navbar_enemy_firing_below", IMAGE_TRACK_HUD);
    }
    CG_GameInterface_ServerMP_RegisterGraphics((LocalClientNum_t)v6);
  }
  CG_Weapons_PrecacheMedia();
  s_modelRegistrationCgs = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v6);
  NetConstStrings_CallForAllModelsOfType(NETCONSTSTRINGTYPE_XMODEL, 1u, CG_MainMP_RegisterServerModel);
  s_modelRegistrationCgs = NULL;
  s_modelRegistrationCgs = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v6);
  NetConstStrings_CallForAllModelsOfType(NETCONSTSTRINGTYPE_XCOMPOSITEMODEL, 1u, CG_MainMP_RegisterServerCompositeModel);
  s_modelRegistrationCgs = NULL;
  CG_Main_PrecacheShellshocks();
  CgDynamicMediaMP = CgDynamicMediaMP::GetCgDynamicMediaMP();
  CgDynamicMediaMP::LoadFx(CgDynamicMediaMP);
  CG_GameInterface_MainMP_RegisterGraphics((LocalClientNum_t)v6, mapname);
  CG_GameInterface_MainMP_RegisterSounds((LocalClientNum_t)v6, mapname);
  ProfLoad_Begin("Register night vision assets");
  cgMedia.nightVisionGoggles = R_RegisterModel("offhand_vm_nvg_on");
  FX_LoadEffect("vfx/iw8/core/nvg/vfx_nvg_light_player.vfx", &cgMedia.fxNightVisionAreaLight);
  FX_LoadEffect("vfx/iw8/core/nvg/vfx_nvg_light_player_alt.vfx", &cgMedia.fxNightVisionAreaLightAlt);
  FX_LoadEffect("vfx/iw8/core/nvg/vfx_killcam_light_player.vfx", &cgMedia.fxKillcamAreaLight);
  ProfLoad_End();
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_MainMP_RegisterMarkerPingMaterialForVehicleDefAtIndex
==============
*/
void CG_MainMP_RegisterMarkerPingMaterialForVehicleDefAtIndex(const unsigned int vehDefIndex, const char *name)
{
  __int64 v3; 
  __int64 v5; 
  int RowCount; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  __int64 v10; 
  const char *v11; 
  const char *ColumnValueForRow; 
  signed __int64 v13; 
  char v14; 
  __int64 v15; 
  char v16; 
  const char *v17; 
  const char *v19; 
  const char *v20; 
  const char *v21; 
  __int64 v25; 
  __int64 v26; 

  v3 = vehDefIndex;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 711, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !*name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 712, ASSERT_TYPE_ASSERT, "(name[0] != '\\0')", (const char *)&queryFormat, "name[0] != '\\0'") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0x80 )
  {
    LODWORD(v25) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 713, ASSERT_TYPE_ASSERT, "(unsigned)( vehDefIndex ) < (unsigned)( 128 )", "vehDefIndex doesn't index MAX_VEHICLE_DEF_GAME_CACHE\n\t%i not in [0, %i)", v25, 128) )
      __debugbreak();
  }
  if ( !s_vehicleTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 714, ASSERT_TYPE_ASSERT, "(s_vehicleTable)", (const char *)&queryFormat, "s_vehicleTable") )
    __debugbreak();
  if ( lastVehDefIndex != (_DWORD)v3 )
  {
    lastVehDefIndex = v3;
    v5 = -1i64;
    RowCount = StringTable_GetRowCount(s_vehicleTable);
    v7 = -1i64;
    do
      ++v7;
    while ( name[v7] );
    v8 = 0;
    if ( RowCount > 0 )
    {
      v9 = (int)v7;
      v26 = (int)v7;
LABEL_18:
      v10 = v9;
      v11 = name;
      ColumnValueForRow = StringTable_GetColumnValueForRow(s_vehicleTable, v8, 1);
      if ( !ColumnValueForRow && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v13 = ColumnValueForRow - name;
      do
      {
        v14 = v11[v13];
        v15 = v10;
        v16 = *v11++;
        --v10;
        if ( !v15 )
          break;
        if ( v14 != v16 )
        {
          if ( ++v8 >= RowCount )
            return;
          v9 = v26;
          goto LABEL_18;
        }
      }
      while ( v14 );
      v17 = StringTable_GetColumnValueForRow(s_vehicleTable, v8, 2);
      do
        ++v5;
      while ( v17[v5] );
      _RDI = &cgMedia;
      if ( (_DWORD)v5 )
        cgMedia.compass.vehicleMediaArray[v3].displayName = v17;
      v19 = StringTable_GetColumnValueForRow(s_vehicleTable, v8, 3);
      if ( *v19 )
        cgMedia.compass.vehicleMediaArray[v3].pingIcon = Material_RegisterHandle(v19, IMAGE_TRACK_HUD);
      v20 = StringTable_GetColumnValueForRow(s_vehicleTable, v8, 6);
      if ( *v20 )
        cgMedia.compass.vehicleMediaArray[v3].miniIcon = Image_Register(v20, IMAGE_TRACK_HUD);
      v21 = StringTable_GetColumnValueForRow(s_vehicleTable, v8, 7);
      if ( *v21 )
      {
        atoi(v21);
        _RBX = 32 * v3;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, eax
          vmovss  dword ptr [rbx+rdi+4450h], xmm0
        }
      }
    }
  }
}

/*
==============
CG_MainMP_RegisterReplicatedDvars
==============
*/

void __fastcall CG_MainMP_RegisterReplicatedDvars(__int64 a1, __int64 a2, double _XMM2_8)
{
  const dvar_t *v17; 
  char ActiveGameMode; 
  unsigned int v22; 
  char v23; 
  unsigned int v24; 
  bool v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v48; 
  unsigned int v65; 
  unsigned int v66; 
  char v68; 
  unsigned int v69; 
  unsigned int v71; 
  unsigned int v77; 
  unsigned int v81; 
  unsigned int v85; 
  unsigned int v90; 
  unsigned int v96; 
  unsigned int v99; 
  unsigned int v103; 
  const dvar_t *v110; 
  float flags; 
  float description; 
  char v120; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
  }
  DVARBOOL_cg_drawFriendlyNamesAlways = Dvar_RegisterBool("NKMOPQSPMO", 0, 0x8Cu, "Whether to always show friendly names in game (for certain gametypes)");
  DVARBOOL_cg_drawFriendlyHUDGrenades = Dvar_RegisterBool("LMQOKPRSML", 0, 0x8Cu, "Draw grenade warning indicators for friendly grenades (should be true if friendly-fire is enabled)");
  DVARBOOL_cg_deadChatWithTeam = Dvar_RegisterBool("SKNSKQTQR", 0, 0x14u, "If true, dead players can talk to living players on their team");
  DVARBOOL_cg_deadHearTeamLiving = Dvar_RegisterBool("OLKRNORMOQ", 0, 0x14u, "If true, dead players can hear living players on their team talk");
  DVARBOOL_cg_deadHearAllLiving = Dvar_RegisterBool("LTLQSKRKQM", 0, 0x14u, "If true, dead players can hear all living players talk");
  DVARBOOL_cg_deadChatWithDead = Dvar_RegisterBool("QKMSSSLPK", 0, 0x14u, "If true, dead players can all chat together, regardless of team");
  DVARBOOL_cg_everyoneHearsEveryone = Dvar_RegisterBool("LQKPQMPRQN", 0, 0x14u, "If true, all players can all chat together, regardless of team or death");
  DVARSTR_cg_objectiveText = Dvar_RegisterString("MSRPQTQOOK", (const char *)&queryFormat.fmt + 3, 0x14u, "Objective text for each client (legacy use of dvars, instead of server commands");
  DVARINT_ui_customGameModeSlot = Dvar_RegisterInt("NPSTLPMPSS", -1, -1, 9, 4u, "Holds the currently selected custom game mode slot. -1 means the current game mode is NOT custom.");
  __asm
  {
    vmovss  xmm6, cs:__real@49742400
    vmovss  xmm1, cs:__real@44fa0000; value
  }
  DVARBOOL_cg_playersmp_CoarseCullSystem_Enable = Dvar_RegisterBool("OMNSNROMPQ", 1, 4u, "Killswitch for Players MP Coards Cull System");
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cg_playersmp_CoarseCullSystem_SunShadowDist = Dvar_RegisterFloat("RLPNQQRPR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Distance beyond which we don't check for sun shadows in the coars cull system");
  __asm
  {
    vmovss  xmm1, cs:__real@463b8000; value
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v17 = Dvar_RegisterFloat("MSPSTOSTTL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Distance beyond which we don't render players at hipfire FOV");
  __asm { vmovss  xmm1, cs:__real@46fa0000; value }
  DVARFLT_playerCullDistHip = v17;
  __asm
  {
    vmovaps xmm3, xmm6; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_playerCullDistMaxZoom = Dvar_RegisterFloat("LRSKLPRNOP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Distance beyond which we don't render players at max zoom FOV");
  DVARBOOL_playerCulledDebugOverlay = Dvar_RegisterBool("NPPONOTRMM", 0, 0, "Enable the player culling debug overlay");
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  v22 = 4;
  if ( ActiveGameMode != 1 )
    v22 = 140;
  DVARBOOL_voice_proximity_team = Dvar_RegisterBool("LKTPRPKPMR", 0, v22, "Uses proximity checks to send voice to players on team but not in squad");
  v23 = Com_GameMode_GetActiveGameMode();
  v24 = 4;
  if ( v23 != 1 )
    v24 = 140;
  DVARBOOL_voice_proximity_enemy = Dvar_RegisterBool("LOSOOOTNMS", 0, v24, "Uses proximity checks to send voice to players on other team");
  v25 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v26 = 4;
  if ( !v25 )
    v26 = 140;
  DVARINT_voice_proximity_radius = Dvar_RegisterInt("NNMLSMNTOQ", 1000, 0, 0x7FFFFFFF, v26, "Radius to check around the player for sending proximity voice, depends on voice_proximity_enabled dvar");
  v27 = 68;
  v28 = 68;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v28 = 20;
  __asm
  {
    vmovss  xmm10, cs:__real@43200000
    vmovss  xmm9, cs:__real@42dc0000
  }
  _EAX = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  _ESI = 1;
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, esi
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm6, xmm9, xmm10, xmm2
    vmovss  xmm11, cs:__real@3f800000
    vmovss  xmm8, cs:__real@3f1745d1
  }
  _EAX = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, esi
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm8, xmm11, xmm2
    vmovaps xmm3, xmm6; max
    vmovss  xmm1, cs:__real@42820000; value
    vmovss  [rsp+0B8h+arg_0], xmm6
    vmovaps xmm2, xmm0; min
    vmovss  [rsp+0B8h+arg_0], xmm0
  }
  DVARFLT_cg_fov = Dvar_RegisterFloat("QTSPTNLOL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v28, "The field of view angle in degrees");
  v48 = 68;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v48 = 20;
  _EAX = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm1, esi
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm6, xmm9, xmm10, xmm2
    vmovss  xmm1, cs:__real@42820000; value
  }
  _EAX = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm
  {
    vmovd   xmm0, eax
    vmovd   xmm2, esi
    vpcmpeqd xmm3, xmm0, xmm2
    vblendvps xmm0, xmm8, xmm11, xmm3
    vmovaps xmm2, xmm0; min
    vmovaps xmm3, xmm6; max
    vmovss  [rsp+0B8h+arg_0], xmm6
    vmovss  [rsp+0B8h+arg_0], xmm0
  }
  DVARFLT_cg_fov1 = Dvar_RegisterFloat("LQSSPMSRQK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v48, "The field of view angle in degrees for the second local client");
  __asm
  {
    vmovss  xmm3, cs:__real@40000000; max
    vmovss  xmm2, cs:__real@3e4ccccd; min
  }
  v25 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v65 = 64;
  v66 = 64;
  if ( !v25 )
    v66 = 20;
  __asm { vmovaps xmm1, xmm11; value }
  DVARFLT_cg_fovScale = Dvar_RegisterFloat("NSSLSNKPN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v66, "Scale applied to the field of view");
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v65 = 140;
  DVARBOOL_cg_drawCrosshair = Dvar_RegisterBool("LOPKSRNTTS", 1, v65, "Turn on weapon crosshair");
  v68 = Com_GameMode_GetActiveGameMode();
  v69 = 4;
  if ( v68 != 1 )
    v69 = 140;
  DVARBOOL_cg_drawCrosshairNames = Dvar_RegisterBool("LROTSRRQMQ", 1, v69, "Draw the name of an enemy under the crosshair");
  DVARBOOL_cg_drawCrosshairWhileSprinting = Dvar_RegisterBool("MKPOPRMKLL", 1, 4u, "Draws the hip crosshairs while sprinting");
  __asm { vmovss  xmm7, cs:__real@7f7fffff }
  v25 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v71 = 68;
  if ( !v25 )
    v71 = 140;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovss  xmm6, cs:__real@38d1b717
    vmovss  xmm1, cs:__real@44bb8000; value
    vmovaps xmm2, xmm6; min
  }
  DVARFLT_compassMaxRange = Dvar_RegisterFloat("MKPRSSNNRO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v71, "The maximum range from the player in world space that objects will be shown on the compass");
  __asm { vmovss  xmm1, cs:__real@451c4000; value }
  v25 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v77 = 68;
  if ( !v25 )
    v77 = 140;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
  }
  DVARFLT_compassExpandedMaxRange = Dvar_RegisterFloat("MROTQQSMP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v77, "The maximum range from the player in world space that objects will be shown on the compass when they have the EXPANDED_MINIMAP perk");
  __asm { vmovss  xmm1, cs:__real@459c4000; value }
  v25 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v81 = 68;
  if ( !v25 )
    v81 = 140;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
  }
  DVARFLT_compassExpandedMaxRangeBR = Dvar_RegisterFloat("NQMONTLKNN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v81, "The maximum range from the player in world space that objects will be shown on the compass when they have the EXPANDED_MINIMAP perk in Battle Royale");
  __asm { vmovss  xmm0, cs:__real@bf800000 }
  v25 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v85 = 68;
  if ( !v25 )
    v85 = 140;
  __asm
  {
    vmovss  dword ptr [rsp+0B8h+description], xmm11
    vxorps  xmm3, xmm3, xmm3; z
    vxorps  xmm2, xmm2, xmm2; y
    vmovaps xmm1, xmm11; x
    vmovss  [rsp+0B8h+flags], xmm0
  }
  DVARVEC3_cg_defaultWindDir = Dvar_RegisterVec3("NTMMTOLQMQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, flags, description, v85, "IMPORTANT: Only applies in levels that do not have global wind.  Will be deprecated shortly.");
  __asm { vmovss  xmm3, cs:__real@44160000; max }
  v25 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v90 = 68;
  if ( !v25 )
    v90 = 140;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm11; value
  }
  DVARFLT_cg_defaultWindStrength = Dvar_RegisterFloat("NQTLPTNSSO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v90, "IMPORTANT: Only applies in levels that do not have global wind.  Will be deprecated shortly. Scale of the global wind direction (inches/sec)");
  __asm
  {
    vmovss  xmm7, cs:__real@42c80000
    vmovss  xmm6, cs:__real@c2c80000
    vmovss  xmm1, cs:__real@42480000; value
  }
  v25 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v96 = 68;
  if ( !v25 )
    v96 = 140;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
  }
  DVARFLT_cg_defaultWindAreaScale = Dvar_RegisterFloat("LQLSPQOPKM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v96, "Scales distribution of wind motion");
  v25 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v99 = 68;
  if ( !v25 )
    v99 = 140;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm11; value
  }
  DVARFLT_cg_defaultWindAmplitudeScale = Dvar_RegisterFloat("MQPQKNPQOK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v99, "Scales amplitude of wind wave motion");
  v25 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v103 = 68;
  if ( !v25 )
    v103 = 140;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vmovaps xmm2, xmm6; min
    vmovaps xmm1, xmm11; value
  }
  DVARFLT_cg_defaultWindFrequencyScale = Dvar_RegisterFloat("MRNRKKOPLN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v103, "Scales frequency of wind wave motion");
  __asm { vmovss  xmm1, cs:__real@3f333333; value }
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v27 = 140;
  __asm
  {
    vmovaps xmm3, xmm11; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_cg_defaultWindNoiseScale = Dvar_RegisterFloat("OLSKLTPPMR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, v27, "Scales conic noise of wind wave motion");
  v110 = Dvar_RegisterBool("NRNQRLQKOR", 0, 0x14u, "Enable remote debug output for the automated client.");
  _R11 = &v120;
  DVARBOOL_ATClient_RemoteDebug = v110;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
CG_MainMP_RegisterServerCompositeModel
==============
*/
void CG_MainMP_RegisterServerCompositeModel(const unsigned int index, const char *compositeModelName)
{
  __int64 v3; 
  bool v4; 
  __int64 v8; 
  __int128 v9; 

  v3 = index;
  if ( !s_modelRegistrationCgs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 634, ASSERT_TYPE_ASSERT, "(s_modelRegistrationCgs != nullptr)", (const char *)&queryFormat, "s_modelRegistrationCgs != nullptr") )
    __debugbreak();
  if ( (_DWORD)v3 )
  {
    if ( (unsigned int)v3 < 0x800 )
      goto LABEL_10;
    LODWORD(v8) = v3;
    v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 636, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_modelRegistrationCgs->gameModels ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_modelRegistrationCgs->gameModels )\n\t%i not in [0, %i)", v8, 2048);
  }
  else
  {
    v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 635, ASSERT_TYPE_ASSERT, "(index != 0)", "%s\n\tShould be skipping the first 'default' model", "index != 0");
  }
  if ( v4 )
    __debugbreak();
LABEL_10:
  LODWORD(v9) = 96;
  *((_QWORD *)&v9 + 1) = R_RegisterCompositeModel(compositeModelName);
  _RAX = s_modelRegistrationCgs;
  _RCX = 2 * v3;
  __asm
  {
    vmovups xmm0, [rsp+58h+var_18]
    vmovups xmmword ptr [rax+rcx*8+691B8h], xmm0
  }
}

/*
==============
CG_MainMP_RegisterServerModel
==============
*/
void CG_MainMP_RegisterServerModel(const unsigned int index, const char *modelName)
{
  __int64 v3; 
  bool v4; 
  __int64 v8; 
  __int128 v9; 

  v3 = index;
  if ( !s_modelRegistrationCgs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 608, ASSERT_TYPE_ASSERT, "(s_modelRegistrationCgs != nullptr)", (const char *)&queryFormat, "s_modelRegistrationCgs != nullptr") )
    __debugbreak();
  if ( (_DWORD)v3 )
  {
    if ( (unsigned int)v3 < 0x800 )
      goto LABEL_10;
    LODWORD(v8) = v3;
    v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 610, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_modelRegistrationCgs->gameModels ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_modelRegistrationCgs->gameModels )\n\t%i not in [0, %i)", v8, 2048);
  }
  else
  {
    v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 609, ASSERT_TYPE_ASSERT, "(index != 0)", "%s\n\tShould be skipping the first 'default' model", "index != 0");
  }
  if ( v4 )
    __debugbreak();
LABEL_10:
  LODWORD(v9) = 9;
  *((_QWORD *)&v9 + 1) = R_RegisterModel(modelName);
  _RAX = s_modelRegistrationCgs;
  _RCX = 2 * v3;
  __asm
  {
    vmovups xmm0, [rsp+58h+var_18]
    vmovups xmmword ptr [rax+rcx*8+691B8h], xmm0
  }
}

/*
==============
CG_MainMP_RewindKillcamEffects
==============
*/
void CG_MainMP_RewindKillcamEffects(LocalClientNum_t localClientNum, int deltaTime)
{
  __int64 v4; 
  cg_t *v6; 
  const CgSnapshotMP *NextSnap; 
  CgWeaponMap *v8; 
  ParticleManager *v9; 
  __int64 m_pFxSystem; 
  int v11; 
  __int64 v12; 
  entityState_t *v13; 
  int time; 
  entityType_s eType; 
  __int64 v16; 
  const Weapon *Weapon; 
  FxCombinedDef v38; 
  const ParticleSystemDef *particleSystemDef; 
  const char *WeaponName; 
  const char *v41; 
  const FxCamera *v45; 
  int v53; 
  ParticleSystemHandle v73; 
  __int64 v74; 
  ParticleSystem *v75; 
  int v76; 
  __int64 spawnTimeMsec; 
  ParticleSystemFlags particleSystemFlags; 
  FxCamera *pCamera; 
  FxMarkSpawnData *pMarkSpawnData; 
  unsigned int *v81; 
  cg_t *LocalClientGlobals; 
  BgWeaponMap *v83; 
  __int64 v84; 
  ParticleManager *v85; 
  vec3_t dir; 
  vec3_t dst; 
  unsigned int v91; 
  unsigned int v92; 
  unsigned int v93; 
  __int128 v94; 
  __int128 v95; 
  __int128 v96; 
  __int128 v97; 
  __int128 v98; 
  float4 emitterPos; 
  vector3 emitterOrientationMat; 
  char output[1024]; 

  v4 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v6 = LocalClientGlobals;
  NextSnap = CG_SnapshotMP_GetNextSnap((const LocalClientNum_t)v4);
  if ( !CgWeaponMap::ms_instance[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v8 = CgWeaponMap::ms_instance[v4];
  v83 = v8;
  if ( (unsigned int)v4 >= 2 )
  {
    LODWORD(spawnTimeMsec) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", spawnTimeMsec, 2) )
      __debugbreak();
  }
  v9 = &g_particleManager[v4];
  v85 = v9;
  m_pFxSystem = (__int64)v9->m_pFxSystem;
  v84 = m_pFxSystem;
  if ( !deltaTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1149, ASSERT_TYPE_ASSERT, "(deltaTime != 0)", (const char *)&queryFormat, "deltaTime != 0") )
    __debugbreak();
  if ( !NextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1150, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1151, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  Physics_WaitForAllCommandsToFinish();
  if ( v9->m_isRunning && m_pFxSystem )
  {
    ParticleManager::OnKillcamTransition(v9, (LocalClientNum_t)v4);
    FX_OnKillcamTransition((LocalClientNum_t)v4);
    if ( !deltaTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1166, ASSERT_TYPE_ASSERT, "(deltaTime != 0)", (const char *)&queryFormat, "deltaTime != 0") )
      __debugbreak();
    FX_RewindTo((LocalClientNum_t)v4, LocalClientGlobals->time, deltaTime);
    v11 = 0;
    if ( NextSnap->numEntities > 0 )
    {
      __asm
      {
        vmovaps [rsp+5B0h+var_40], xmm6
        vmovaps [rsp+5B0h+var_50], xmm7
      }
      v12 = 0i64;
      while ( 1 )
      {
        v13 = &NextSnap->entities[v12];
        if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
          __debugbreak();
        if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&NextSnap->entities[v12].lerp.eFlags, ACTIVE, 0x16u) )
          goto LABEL_58;
        time = v6->time;
        if ( NextSnap->entities[v12].time2 < time || NextSnap->entities[v12].lerp.u.anonymous.data[0] > time )
          goto LABEL_58;
        eType = NextSnap->entities[v12].eType;
        if ( eType )
        {
          LODWORD(spawnTimeMsec) = eType;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1184, ASSERT_TYPE_ASSERT, "( ( es->eType == ET_GENERAL ) )", "( es->eType ) = %i", spawnTimeMsec) )
            __debugbreak();
        }
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( v13->number < (int)ComCharacterLimits::ms_gameData.m_clientCount )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          LODWORD(pMarkSpawnData) = ComCharacterLimits::ms_gameData.m_clientCount;
          LODWORD(pCamera) = v13->number;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1185, ASSERT_TYPE_ASSERT, "( es->number ) >= ( ComCharacterLimits::GetClientMaxCount() )", "%s >= %s\n\t%i, %i", "es->number", "ComCharacterLimits::GetClientMaxCount()", pCamera, pMarkSpawnData) )
            __debugbreak();
        }
        v16 = ((unsigned __int8)NextSnap->entities[v12].eventSequence.combined - 1) & 3;
        if ( (unsigned int)(v13->events[v16].eventType - 109) > 7 )
        {
          LODWORD(pCamera) = 116;
          LODWORD(particleSystemFlags) = 109;
          LODWORD(spawnTimeMsec) = v13->events[v16].eventType;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1187, ASSERT_TYPE_ASSERT, "( EV_GRENADE_EXPLODE ) <= ( es->events[eventIndex].eventType ) && ( es->events[eventIndex].eventType ) <= ( EV_CUSTOM_EXPLODE )", "es->events[eventIndex].eventType not in [EV_GRENADE_EXPLODE, EV_CUSTOM_EXPLODE]\n\t%i not in [%i, %i]", spawnTimeMsec, particleSystemFlags, pCamera) )
            __debugbreak();
        }
        ByteToDir(LOBYTE(v13->events[v16].eventParm), &dir);
        PerpendicularVector(&dir, &dst);
        __asm
        {
          vmovss  xmm2, dword ptr [rbp+4B0h+dst+8]
          vmovss  xmm5, dword ptr [rbp+4B0h+dir+8]
          vmovss  xmm7, dword ptr [rbp+4B0h+dst+4]
          vmovss  xmm6, dword ptr [rsp+5B0h+dir+4]
          vmulss  xmm0, xmm6, xmm2
          vmulss  xmm2, xmm2, dword ptr [rsp+5B0h+dir]
          vmulss  xmm1, xmm5, xmm7
          vsubss  xmm1, xmm1, xmm0
          vmulss  xmm0, xmm5, dword ptr [rbp+4B0h+dst]
          vmovss  [rbp+4B0h+var_52C], xmm1
          vsubss  xmm1, xmm2, xmm0
          vmulss  xmm2, xmm6, dword ptr [rbp+4B0h+dst]
          vmulss  xmm0, xmm7, dword ptr [rsp+5B0h+dir]
          vmovss  [rbp+4B0h+var_528], xmm1
        }
        _RDI = &NextSnap->entities[v12].lerp.pos;
        __asm
        {
          vsubss  xmm1, xmm2, xmm0
          vmovss  [rbp+4B0h+var_524], xmm1
        }
        if ( (const CgSnapshotMP *)((char *)NextSnap + 248 * v12) == (const CgSnapshotMP *)-21468i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 248 * v12 + (_DWORD)NextSnap + 21575, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
          __debugbreak();
        if ( _RDI->trType == TR_LINEAR_STOP_SECURE )
        {
          v81 = &v91;
          v93 = s_trbase_aab_Z ^ LODWORD(NextSnap->entities[v12].lerp.pos.trBase.v[1]) ^ LODWORD(NextSnap->entities[v12].lerp.pos.trBase.v[2]);
          v92 = s_trbase_aab_Y ^ LODWORD(NextSnap->entities[v12].lerp.pos.trBase.v[1]) ^ LODWORD(NextSnap->entities[v12].lerp.pos.trBase.v[0]);
          v91 = LODWORD(NextSnap->entities[v12].lerp.pos.trBase.v[0]) ^ ~s_trbase_aab_X;
          __asm { vmovss  xmm0, [rbp+4B0h+var_514] }
          memset(&v81, 0, sizeof(v81));
          __asm { vmovss  dword ptr [rsp+5B0h+var_560], xmm0 }
          if ( ((unsigned int)v81 & 0x7F800000) == 2139095040 )
            goto LABEL_73;
          __asm
          {
            vmovss  xmm0, [rbp+4B0h+var_510]
            vmovss  dword ptr [rsp+5B0h+var_560], xmm0
          }
          if ( ((unsigned int)v81 & 0x7F800000) == 2139095040 )
            goto LABEL_73;
          __asm
          {
            vmovss  xmm0, [rbp+4B0h+var_50C]
            vmovss  dword ptr [rsp+5B0h+var_560], xmm0
          }
          if ( ((unsigned int)v81 & 0x7F800000) == 2139095040 )
          {
LABEL_73:
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
              __debugbreak();
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+0Ch]
            vmovss  xmm1, dword ptr [rdi+10h]
            vmovss  [rbp+4B0h+var_514], xmm0
            vmovss  xmm0, dword ptr [rdi+14h]
            vmovss  [rbp+4B0h+var_50C], xmm0
            vmovss  [rbp+4B0h+var_510], xmm1
          }
        }
        Weapon = BgWeaponMap::GetWeapon(v83, NextSnap->entities[v12].weaponHandle);
        v38.particleSystemDef = BG_ProjExplosionEffect(Weapon, NextSnap->entities[v12].inAltWeaponMode).particleSystemDef;
        particleSystemDef = v38.particleSystemDef;
        if ( v38.particleSystemDef )
        {
          if ( (v38.particleSystemDef->flags & 0x800) == 0 )
            Com_PrintError(21, "Smoke grenade FX \"%s\" is not marked to be killed on killcam transition.  The effect may appear to stack multiple times in killcam.", v38.particleSystemDef->name);
          __asm { vmovss  xmm4, [rbp+4B0h+var_514] }
          v45 = (const FxCamera *)(v84 + 96);
          HIDWORD(v94) = 0;
          __asm
          {
            vmovups xmm0, xmmword ptr [rbp-50h]
            vmovss  xmm0, xmm0, xmm4
            vinsertps xmm0, xmm0, [rbp+4B0h+var_510], 4B0h+emitterOrientationMat
            vinsertps xmm0, xmm0, [rbp+4B0h+var_50C], 4B0h+emitterOrientationMat.y
          }
          HIDWORD(v95) = 0;
          __asm { vmovups xmm3, xmmword ptr [rbp-40h] }
          HIDWORD(v96) = 0;
          HIDWORD(v98) = 0;
          __asm { vmovups xmm2, xmmword ptr [rbp-10h] }
          HIDWORD(v97) = 0;
          __asm
          {
            vmovups xmmword ptr [rbp-50h], xmm0
            vmovups xmmword ptr [rbp+4B0h+emitterPos.v], xmm0
            vmovss  xmm0, dword ptr [rsp+5B0h+dir]
          }
          v53 = LocalClientGlobals->time;
          __asm
          {
            vmovss  xmm3, xmm3, xmm0
            vinsertps xmm3, xmm3, dword ptr [rsp+5B0h+dir+4], 4B0h+emitterOrientationMat
            vinsertps xmm3, xmm3, dword ptr [rbp+4B0h+dir+8], 4B0h+emitterOrientationMat.y
            vmovss  xmm0, [rbp+4B0h+var_52C]
            vmovups xmmword ptr [rbp-40h], xmm3
            vmovups xmmword ptr [rbp+4B0h+emitterOrientationMat.x.v], xmm3
            vmovups xmm3, xmmword ptr [rbp-30h]
            vmovss  xmm3, xmm3, xmm0
            vinsertps xmm3, xmm3, [rbp+4B0h+var_528], 4B0h+emitterOrientationMat
            vinsertps xmm3, xmm3, [rbp+4B0h+var_524], 4B0h+emitterOrientationMat.y
            vmovss  xmm0, dword ptr [rbp+4B0h+dst]
            vmovups xmmword ptr [rbp-30h], xmm3
            vmovups xmmword ptr [rbp+4B0h+emitterOrientationMat.y.v], xmm3
            vmovups xmm3, xmmword ptr [rbp-20h]
            vmovss  xmm2, xmm2, xmm4
            vinsertps xmm2, xmm2, [rbp+4B0h+var_510], 4B0h+emitterOrientationMat
            vinsertps xmm2, xmm2, [rbp+4B0h+var_50C], 4B0h+emitterOrientationMat.y
            vmovss  xmm3, xmm3, xmm0
            vxorps  xmm0, xmm2, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
            vandps  xmm1, xmm0, xmmword ptr cs:?g_keepW@@3Ufloat4@@B.v; float4 const g_keepW
            vinsertps xmm3, xmm3, dword ptr [rbp+4B0h+dst+4], 4B0h+emitterOrientationMat
            vinsertps xmm3, xmm3, dword ptr [rbp+4B0h+dst+8], 4B0h+emitterOrientationMat.y
            vmovups xmmword ptr [rbp-10h], xmm2
            vxorps  xmm2, xmm1, xmm2
            vmovups [rbp+4B0h+var_470], xmm2
            vmovups xmmword ptr [rbp-20h], xmm3
            vmovups xmmword ptr [rbp+4B0h+emitterOrientationMat.z.v], xmm3
          }
          v73 = ParticleManager::AddSystem(v85, (LocalClientNum_t)v4, particleSystemDef, &emitterPos, &emitterOrientationMat, v53, PARTICLE_SYSTEM_FLAG_AUTO_DELETE, (const FxCamera *)(v84 + 96), NULL);
          v74 = (v4 << 12) + (v73 & 0xFFF);
          if ( g_particleSystemsGeneration[v74].__all32 != v73 && v73 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 933, ASSERT_TYPE_ASSERT, "(g_particleSystemsGeneration[localClientNum][handleImpl._index].__all32 == handleImpl.__all32 || particleSystemHandle == PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "g_particleSystemsGeneration[localClientNum][handleImpl._index].__all32 == handleImpl.__all32 || particleSystemHandle == PARTICLE_SYSTEM_INVALID_HANDLE") )
            __debugbreak();
          v75 = g_particleSystems[0][v74];
          if ( v75 )
          {
            v76 = NextSnap->entities[v12].lerp.u.anonymous.data[0] - LocalClientGlobals->time;
            if ( v76 >= 0 )
            {
              v6 = LocalClientGlobals;
              goto LABEL_58;
            }
            ParticleSystem::PreRoll(v75, v76, v45);
          }
        }
        else
        {
          WeaponName = BG_GetWeaponName(Weapon, output, 0x400u);
          Com_PrintError(21, "Smoke grenade FX entity with no explosion effect (%s)", WeaponName);
          v41 = BG_GetWeaponName(Weapon, output, 0x400u);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1203, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Smoke grenade FX entity with no explosion effect (%s)", v41) )
            __debugbreak();
        }
        v6 = LocalClientGlobals;
LABEL_58:
        ++v11;
        ++v12;
        if ( v11 >= NextSnap->numEntities )
        {
          __asm
          {
            vmovaps xmm7, [rsp+5B0h+var_50]
            vmovaps xmm6, [rsp+5B0h+var_40]
          }
          return;
        }
      }
    }
  }
}

/*
==============
CG_MainMP_SaveMigrationPers
==============
*/
void CG_MainMP_SaveMigrationPers(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int weaponSelectInAlt; 
  char *fmt; 
  __int64 v17; 
  int v19; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v19 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v19) )
      __debugbreak();
  }
  _RBX = v1;
  _RSI = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
  LODWORD(v17) = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v1)->serverTimeDelta;
  LODWORD(fmt) = cls.realtime;
  Com_Printf(25, "CG_SaveMigrationPers: cgameGlob->time(%d), cgameGlob->oldTime(%d), cls.realtime(%d), serverTimeDelta(%d)\n", (unsigned int)_RSI->time, (unsigned int)_RSI->oldTime, fmt, v17);
  __asm { vmovups ymm0, ymmword ptr [rsi+18114h] }
  _RBP = clientUIActives;
  _RCX = &clientUIActives[v1].migrationPers.weaponSelect;
  __asm
  {
    vmovups ymmword ptr [rcx], ymm0
    vmovups xmm1, xmmword ptr [rsi+18134h]
    vmovups xmmword ptr [rcx+20h], xmm1
    vmovsd  xmm0, qword ptr [rsi+18144h]
    vmovsd  qword ptr [rcx+30h], xmm0
  }
  *(_DWORD *)&_RCX->weaponCamo = *(_DWORD *)&_RSI->weaponSelect.weaponCamo;
  weaponSelectInAlt = _RSI->weaponSelectInAlt;
  clientUIActives[_RBX].migrationPers.weaponSelectInAlt = weaponSelectInAlt;
  clientUIActives[_RBX].migrationPers.weaponSelectTime = _RSI->weaponSelectTime;
  clientUIActives[_RBX].migrationPers.weaponForcedSelectTime = _RSI->weaponForcedSelectTime;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+1815Ch]
    vmovups ymmword ptr [rbx+rbp+108h], ymm0
    vmovups xmm1, xmmword ptr [rsi+1817Ch]
    vmovups xmmword ptr [rbx+rbp+128h], xmm1
    vmovsd  xmm0, qword ptr [rsi+1818Ch]
    vmovsd  qword ptr [rbx+rbp+138h], xmm0
  }
  *(_DWORD *)&clientUIActives[_RBX].migrationPers.weaponLatestPrimary.weaponCamo = *(_DWORD *)&_RSI->weaponLatestPrimary.weaponCamo;
  __asm
  {
    vmovups ymm0, ymmword ptr [rsi+18198h]
    vmovups ymmword ptr [rbx+rbp+144h], ymm0
    vmovups xmm1, xmmword ptr [rsi+181B8h]
    vmovups xmmword ptr [rbx+rbp+164h], xmm1
    vmovsd  xmm0, qword ptr [rsi+181C8h]
    vmovsd  qword ptr [rbx+rbp+174h], xmm0
  }
  *(_DWORD *)&clientUIActives[_RBX].migrationPers.weaponPrevPrimary.weaponCamo = *(_DWORD *)&_RSI->weaponPrevPrimary.weaponCamo;
  if ( weaponSelectInAlt && !BG_HasUnderbarrelAmmo(_RCX) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 2504, ASSERT_TYPE_ASSERT, "(!clM->weaponSelectInAlt || BG_HasUnderbarrelAmmo( clM->weaponSelect ))", (const char *)&queryFormat, "!clM->weaponSelectInAlt || BG_HasUnderbarrelAmmo( clM->weaponSelect )") )
    __debugbreak();
  clientUIActives[_RBX].migrationPers.holdBreathTime = _RSI->holdBreathTime;
  clientUIActives[_RBX].migrationPers.holdBreathDelay = _RSI->holdBreathDelay;
  clientUIActives[_RBX].migrationPers.holdBreathFrac = _RSI->holdBreathFrac;
  CG_Blur_SaveMigrationPers((LocalClientNum_t)v1, &clientUIActives[_RBX].migrationPers.blurPers);
}

/*
==============
CG_MainMP_Shutdown
==============
*/

void __fastcall CG_MainMP_Shutdown(LocalClientNum_t localClientNum, double _XMM1_8)
{
  __int64 v2; 
  CgGlobalsMP *LocalClientGlobals; 
  cgs_t *LocalClientStaticGlobals; 
  CgCompassSystemMP *CompassSystemMP; 
  int localServer; 
  CgPlayer_Asm *v8; 
  CgWeaponSystemMP *WeaponSystemMP; 
  CgClientSideEffectsSystemMP *ClientSideEffectsSystemMP; 
  __int64 v12; 
  __int64 v13; 

  v2 = localClientNum;
  __asm { vmovss  xmm0, cs:__real@3f800000; volume }
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  SND_FadeAllSounds(*(float *)&_XMM0, 0);
  if ( !LocalClientGlobals->m_frontEndScene )
    SND_StopSounds(SND_KEEP_MUSIC);
  CG_FrontEndScene_Shutdown();
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v2);
  CG_Rumble_StopAll((LocalClientNum_t)v2);
  if ( !LocalClientStaticGlobals->localServer )
    Rumble_Shutdown();
  CG_Foliage_StartProcessCharacterEntityCmds();
  Sys_WaitWorkerCmdsOfType(WRKCMD_CG_FOLIAGE_PROCESSCHARACTERENTITY);
  Physics_WaitForAllCommandsToFinish();
  CG_Entity_PhysicsCheckPostAssetChangeEmpty((const LocalClientNum_t)v2);
  CG_Main_FreePhysics((LocalClientNum_t)v2);
  CG_Main_FreeRagdolls((LocalClientNum_t)v2);
  CG_PlayersMP_ResetClientWeaponVisibility((const LocalClientNum_t)v2);
  CG_PlayersMP_ResetPlayerBrCircleEffects();
  if ( Ragdoll_IsRegistered((LocalClientNum_t)v2) )
    Ragdoll_Unregister((LocalClientNum_t)v2);
  CG_Main_FreeCloth((LocalClientNum_t)v2);
  g_mapLoaded = 0;
  BG_ShutDownTurretAnims(0);
  cg_t::FreeViewModelHands(LocalClientGlobals);
  cg_t::FreePlayerLegs(LocalClientGlobals);
  CG_AnimTreeMP_FreeEntityDObjInfo((LocalClientNum_t)v2);
  Com_FreeWeaponInfoMemory(2);
  CG_ModelPreviewerDestroyDevGui();
  CG_CreateFx_DestroyDevGui();
  FX_Dismemberment_Shutdown((LocalClientNum_t)v2);
  FX_WaitKillAllEffects((LocalClientNum_t)v2, 1);
  FX_ShutdownSystem((LocalClientNum_t)v2);
  DynEntCl_Shutdown((LocalClientNum_t)v2);
  if ( !LUI_CoD_InFrontend() && !CG_GameInterface_ShutdownCompassSystem((LocalClientNum_t)v2) )
  {
    CompassSystemMP = CgCompassSystemMP::GetCompassSystemMP((const LocalClientNum_t)v2);
    CgCompassSystemMP::ShutdownCompass(CompassSystemMP);
  }
  ScriptableCl_Shutdown((const LocalClientNum_t)v2);
  CG_Particle_ClearParticleDeferredPhysics((LocalClientNum_t)v2, 0);
  CG_MainMP_FreeAnimTreeInstances((LocalClientNum_t)v2);
  CG_ClientCharacter_Shutdown((const LocalClientNum_t)v2);
  CG_ClientWeapon_Shutdown();
  CL_UIStreaming_Shutdown((const LocalClientNum_t)v2);
  CG_WeaponStreamingMP_Shutdown((const LocalClientNum_t)v2);
  CG_CustomizationStreamingMP_Shutdown((const LocalClientNum_t)v2);
  CG_PlayerFade_Shutdown((const LocalClientNum_t)v2);
  CG_WeaponFade_Shutdown((const LocalClientNum_t)v2);
  CG_CustomizationMP_Shutdown();
  CG_WorldStreaming_Shutdown((const LocalClientNum_t)v2);
  BG_WorldStreaming_Shutdown();
  CG_PlayerVisibilityMP_Shutdown((const LocalClientNum_t)v2);
  CG_ClientAntiCheatMP_Shutdown((const LocalClientNum_t)v2);
  localServer = LocalClientStaticGlobals->localServer;
  if ( !localServer )
  {
    Scr_ShutdownGameStrings();
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    {
      BG_AnimationMP_ShutdownAnimations();
      BG_AnimationMP_ShutdownSuitAnimIndexes();
    }
    BG_ClearSuits();
    localServer = LocalClientStaticGlobals->localServer;
  }
  if ( PlayerASM_IsEnabled() )
  {
    v8 = CgPlayer_Asm::Singleton((const LocalClientNum_t)v2);
    BgPlayer_Asm::Shutdown(v8, localServer == 0);
  }
  if ( !LocalClientStaticGlobals->localServer )
    ASM_ReleaseAllHistoryObjects();
  WeaponSystemMP = CgWeaponSystemMP::GetWeaponSystemMP((const LocalClientNum_t)v2);
  CgWeaponSystemMP::ShutdownViewModel(WeaponSystemMP);
  CgGlobalsMP::ClearLocalClientGlobals((const LocalClientNum_t)v2);
  if ( LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 2390, ASSERT_TYPE_ASSERT, "(!cgameGlob->nextSnap)", (const char *)&queryFormat, "!cgameGlob->nextSnap") )
    __debugbreak();
  CgWeaponSystemMP::ClearWeaponSystem((const LocalClientNum_t)v2);
  CgEventSystemMP::ClearEventSystem((const LocalClientNum_t)v2);
  CgSoundSystemMP::ClearSoundSystem((const LocalClientNum_t)v2);
  CgDrawSystemMP::ClearDrawSystem((const LocalClientNum_t)v2);
  if ( !CG_GameInterface_ClearCompassSystem((LocalClientNum_t)v2) )
    CgCompassSystemMP::ClearCompassSystem((const LocalClientNum_t)v2);
  CgViewSystemMP::ClearViewSystem((const LocalClientNum_t)v2);
  CgStaticMP::ClearGameStatics((const LocalClientNum_t)v2);
  CgVehicleSystemMP::ClearVehicleSystem((const LocalClientNum_t)v2);
  CgTargetAssistMP::ClearInstance((const LocalClientNum_t)v2);
  CgPredictedEntitySystemMP::ClearSystem((const LocalClientNum_t)v2);
  CgBallisticsMP::ClearSystem((const LocalClientNum_t)v2);
  CgMissileMP::ClearSystem((const LocalClientNum_t)v2);
  if ( (_BYTE)CgClientSideEffectsSystem::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 388, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE)", "%s\n\tCgClientSideEffectsSystem::ClearClientSideEffectsSystemCommon: Trying to clear client-side effects system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE", 2, (unsigned __int8)CgClientSideEffectsSystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v2 >= CgClientSideEffectsSystem::ms_allocatedCount )
  {
    LODWORD(v13) = CgClientSideEffectsSystem::ms_allocatedCount;
    LODWORD(v12) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 389, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v12, v13) )
      __debugbreak();
  }
  CgClientSideEffectsSystem::ClearMemory(CgClientSideEffectsSystem::ms_cseSystemArray[v2]);
  __asm { vxorps  xmm1, xmm1, xmm1; fadeTimeSec }
  SND_SubmixClearAllFromSource(SND_SUBMIX_TYPE_GAMECODE, *(float *)&_XMM1);
  CG_ConsoleCmds_Unregister();
  CG_ConsoleCmdsMP_Unregister();
  BG_RadiantLiveEnable(0);
  ClientSideEffectsSystemMP = CgClientSideEffectsSystemMP::GetClientSideEffectsSystemMP((const LocalClientNum_t)v2);
  CgClientSideEffectsSystem::Shutdown(ClientSideEffectsSystemMP);
  CG_ShutdownClientSideTriggers((LocalClientNum_t)v2);
  CL_Keys_ClearStates((LocalClientNum_t)v2);
  XAnimIKShutdown();
  if ( !LocalClientStaticGlobals->localServer )
  {
    BG_Gesture_ClearGestures();
    BG_Camera_Clear();
    BG_Execution_ClearAssets();
    XAnimCurve_ClearCurves();
    BG_BlendSpace2D_ClearDefs();
    BG_CarryObject_ClearDefs();
    BG_HudOutline_ClearDefs();
    BG_Accessory_ClearAssets();
    BG_Camo_ClearNCS();
  }
  BG_LookAt_Shutdown();
  CG_ViewMotion_ClearCinematicMotionAssets();
  TopDownMapData_Shutdown();
  Dvar_SetInt_Internal(endgame_called, 0);
  CL_Pause_UnpauseGame();
  Com_MP_SetShouldLocalServerPause(0);
}

