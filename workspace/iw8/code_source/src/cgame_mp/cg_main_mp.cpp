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
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  ViewJostleState *linkedToPlayerView; 
  __int64 v5; 
  char *fmt; 
  __int64 v7; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v2 = v1;
  if ( clientUIActives[v1].migrationPers.weaponSelectInAlt && !BG_HasUnderbarrelAmmo(&clientUIActives[v2].migrationPers.weaponSelect) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 2523, ASSERT_TYPE_ASSERT, "(!clM->weaponSelectInAlt || BG_HasUnderbarrelAmmo( clM->weaponSelect ))", (const char *)&queryFormat, "!clM->weaponSelectInAlt || BG_HasUnderbarrelAmmo( clM->weaponSelect )") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
  LODWORD(v7) = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v1)->serverTimeDelta;
  LODWORD(fmt) = cls.realtime;
  Com_Printf(25, "CG_LoadMigrationPers: cgameGlob->time(%d), cgameGlob->oldTime(%d), cls.realtime(%d), serverTimeDelta(%d)\n", (unsigned int)LocalClientGlobals->time, (unsigned int)LocalClientGlobals->oldTime, fmt, v7);
  LocalClientGlobals->weaponSelect = clientUIActives[v2].migrationPers.weaponSelect;
  LocalClientGlobals->weaponSelectTime = clientUIActives[v2].migrationPers.weaponSelectTime;
  LocalClientGlobals->weaponForcedSelectTime = clientUIActives[v2].migrationPers.weaponForcedSelectTime;
  LocalClientGlobals->weaponLatestPrimary = clientUIActives[v2].migrationPers.weaponLatestPrimary;
  LocalClientGlobals->weaponPrevPrimary = clientUIActives[v2].migrationPers.weaponPrevPrimary;
  LocalClientGlobals->holdBreathTime = clientUIActives[v2].migrationPers.holdBreathTime;
  LocalClientGlobals->holdBreathDelay = clientUIActives[v2].migrationPers.holdBreathDelay;
  LocalClientGlobals->holdBreathFrac = clientUIActives[v2].migrationPers.holdBreathFrac;
  CG_Blur_LoadMigrationPers((LocalClientNum_t)v1, &clientUIActives[v2].migrationPers.blurPers);
  linkedToPlayerView = LocalClientGlobals->linkedToPlayerView;
  v5 = 4i64;
  do
  {
    ViewJostleState::Reset(linkedToPlayerView++);
    --v5;
  }
  while ( v5 );
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
void CG_MainMP_RegisterDvars(void)
{
  DCONST_DVARFLT_cg_distanceCache_ringRadius0 = Dvar_RegisterFloat("cg_distanceCache_ringRadius0", 1024.0, 0.0, 256000.0, 0x40004u, "CG_DistanceCacheMP ring 0 radius");
  DCONST_DVARFLT_cg_distanceCache_ringRadius1 = Dvar_RegisterFloat("cg_distanceCache_ringRadius1", 8192.0, 0.0, 256000.0, 0x40004u, "CG_DistanceCacheMP ring 1 radius");
  DCONST_DVARFLT_cg_distanceCache_ringRadius2 = Dvar_RegisterFloat("cg_distanceCache_ringRadius2", 16384.0, 0.0, 256000.0, 0x40004u, "CG_DistanceCacheMP ring 2 radius");
  DCONST_DVARFLT_cg_distanceCache_ringRadius3 = Dvar_RegisterFloat("cg_distanceCache_ringRadius3", 32768.0, 0.0, 256000.0, 0x40004u, "CG_DistanceCacheMP ring 3 radius");
  DCONST_DVARFLT_cg_distanceCache_ringRadius4 = Dvar_RegisterFloat("cg_distanceCache_ringRadius4", 65536.0, 0.0, 256000.0, 0x40004u, "CG_DistanceCacheMP ring 4 radius");
  DCONST_DVARFLT_no_kick_velocity_dampen = Dvar_RegisterFloat("no_kick_velocity_dampen", 0.34999999, 0.0, 1.0, 0x40004u, "On weapons without kick return, the angular velocity needs to decay to 0. This controls the rate at which the weapon decellerates.");
  DVARFLT_cg_frontEndSceneZnear = Dvar_RegisterFloat("LQQQTTTMMO", 0.0, 0.0, 10000.0, 0, "Things closer than this aren't drawn. Reducing this increases z-fighting in the distance. This is active during the front-end scene only");
  DCONST_DVARFLT_cg_deathCamMaxCutThreshold = Dvar_RegisterFloat("cg_deathCamMaxCutThreshold", 24.0, 0.0, 3.4028235e38, 0x40004u, "Maximum distance (inches) that the third-person death camera can cut toward the victim due to an obstruction without falling back to the fixed death camera.");
  DVARINT_cg_fixedDeathCamInterpTimeMs = Dvar_RegisterInt("LRPNPLOORM", 0, 0, 5000, 0, "The time it takes for the camera to catch up to the death body look at orientation.");
  DVARINT_cg_fixedDeathCamTraceFailedInterpTimeMs = Dvar_RegisterInt("MKRPTLLKKM", 300, 0, 5000, 0, "Similar to cg_FixedDeathCamInterpTimeMs, but only used using fixed camera due to death camera shapecasts failing.");
  DCONST_DVARBOOL_cg_thirdPersonCamDebug = Dvar_RegisterBool("cg_thirdPersonCamDebug", 0, 0x40004u, "Debug third-person camera");
  DCONST_DVARFLT_cg_debugCamPivot = Dvar_RegisterFloat("cg_debugCamPivot", 0.0, 0.0, 1000.0, 0x40004u, "Any value >0 (radius) to render debug sphere on the camera pivot used for streaming (orbit pivot or first person view origin)");
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
  DVARBOOL_cg_mlg_enable_cameras = Dvar_RegisterBool("MOMRRMTMN", 1, 0x40000u, "enable or disable the CoDCaster cameras (free, aerial) capabilities");
  DVARFLT_cg_mlg_freecam_speed_base = Dvar_RegisterFloat("NRKNMTPMTO", 0.64999998, 0.0, 100.0, 0, "CoDCaster free camera base speed.");
  DVARBOOL_cg_mlg_freecam_speed_toggle = Dvar_RegisterBool("OMQMPLPOLR", 1, 0, "enable or disable the speed toggling of CoDCaster cameras.");
  DVARFLT_cg_mlg_freecam_speed_slow_factor = Dvar_RegisterFloat("PPQPQLPKQ", 0.40000001, 0.0, 1.0, 0, "CoDCaster free camera minimal speed.");
  DVARFLT_cg_mlg_freecam_speed_fast_factor = Dvar_RegisterFloat("NLSLSQLQP", 1.9, 0.0, 100.0, 0, "CoDCaster free camera maximal speed.");
  DVARFLT_cg_mlg_freecam_sensitivity = Dvar_RegisterFloat("LMRLKTKKRK", 0.0020000001, 0.0, 100000.0, 0x40000u, "CoDCaster free camera sensitivity.");
  DVARFLT_cg_mlg_aerialcam_pitch = Dvar_RegisterFloat("MPNKKLQRLL", 70.0, 0.0, 90.0, 0x40000u, "CoDCaster aerial camera pitch");
  DVARFLT_cg_mlg_aerialcam_horizontal_distance_factor = Dvar_RegisterFloat("QTRLNNRTR", 3.0, 1.0, 10.0, 0x40000u, "CoDCaster aerial camera horizontal distance factor");
  DVARFLT_cg_mlg_aerialcam_base_vertical_distance = Dvar_RegisterFloat("NSMLPKLRLR", 1200.0, 10.0, 10000.0, 0x40000u, "CoDCaster aerial camera base distance");
  DVARFLT_cg_mlg_aerialcam_minimal_vertical_distance = Dvar_RegisterFloat("OKPQONTRRP", 500.0, 0.0, 1000000.0, 0x40000u, "CoDCaster aerial camera min distance");
  DVARFLT_cg_mlg_aerialcam_maximal_vertical_distance = Dvar_RegisterFloat("MRRMNNKQMP", 4000.0, 0.0, 1000000.0, 0x40000u, "CoDCaster aerial camera max distance");
  DVARFLT_cg_mlg_aerialcam_maximal_tether_radius = Dvar_RegisterFloat("NOKQLPKNTK", 600.0, 0.0, 10000.0, 0x40000u, "CoDCaster aerial camera max radius around tethered player");
  DVARFLT_cg_mlg_cam_animation_distance_max_time = Dvar_RegisterFloat("MTLOLRRLQ", 4000.0, 0.0, 1000000.0, 0x40000u, "CoDCaster camera distance for the max animation duration");
  DVARFLT_cg_mlg_cam_animation_min_duration = Dvar_RegisterFloat("NNTQNOQKQT", 0.5, 0.0, 60.0, 0x40000u, "CoDCaster camera minimun animation duration in seconds");
  DVARFLT_cg_mlg_cam_animation_max_duration = Dvar_RegisterFloat("LLNLQPSOTL", 1.6, 0.0, 60.0, 0x40000u, "CoDCaster maximum camera animation duration in seconds");
  DVARFLT_cg_mlg_cam_smooth_factor = Dvar_RegisterFloat("NKOLKNSQNP", 0.0070000002, 0.0, 1.0, 0, "CoDCaster camera smooth factor.");
  DVARBOOL_cg_enableLaserWorkers = Dvar_RegisterBool("LTKKRTQSPP", 1, 0, "Enable laser draw workers.");
  DCONST_DVARBOOL_cg_killcamdebug = Dvar_RegisterBool("cg_killcamdebug", 0, 0x40004u, "Enables debugging visualization of the killcam entity system");
  DVARFLT_cg_heliKillCamFov = Dvar_RegisterFloat("LRMTKKLPOS", 15.0, 0.1, 160.0, 4u, "Helicopter kill camera field of view.");
  DVARFLT_cg_airstrikeKillCamFov = Dvar_RegisterFloat("LNPLOROPQ", 50.0, 0.1, 160.0, 4u, "Airstrike kill camera field of view.");
  DCONST_DVARBOOL_cg_explosiveKillCamUseLegacy = Dvar_RegisterBool("cg_explosiveKillCamUseLegacy", 0, 0x40004u, "Use legacy explosive killcam.  (emergency fallback)");
  DCONST_DVARFLT_cg_explosiveKillCamUpDist = Dvar_RegisterFloat("cg_explosiveKillCamUpDist", 20.0, -3.4028235e38, 3.4028235e38, 0x40004u, "Explosive kill camera: distance of camera vertically from explosive.");
  DCONST_DVARFLT_cg_explosiveKillCamBackDist = Dvar_RegisterFloat("cg_explosiveKillCamBackDist", 120.0, -3.4028235e38, 3.4028235e38, 0x40004u, "Explosive kill camera: distance of camera backwards from explosive.");
  DCONST_DVARFLT_cg_explosiveKillCamGroundUpDist = Dvar_RegisterFloat("cg_explosiveKillCamGroundUpDist", 20.0, -3.4028235e38, 3.4028235e38, 0x40004u, "Explosive kill camera when stuck to ground: distance of camera vertically from explosive.");
  DCONST_DVARFLT_cg_explosiveKillCamGroundBackDist = Dvar_RegisterFloat("cg_explosiveKillCamGroundBackDist", 120.0, -3.4028235e38, 3.4028235e38, 0x40004u, "Explosive kill camera when stuck to ground: distance of camera backwards from explosive.");
  DCONST_DVARFLT_cg_rocketKillCamUpDist = Dvar_RegisterFloat("cg_rocketKillCamUpDist", 10.0, -3.4028235e38, 3.4028235e38, 0x40004u, "Rocket kill camera: distance of camera vertically from rocket.");
  DCONST_DVARFLT_cg_rocketKillCamBackDist = Dvar_RegisterFloat("cg_rocketKillCamBackDist", 120.0, -3.4028235e38, 3.4028235e38, 0x40004u, "Rocket kill camera: distance of camera backwards from rocket.");
  DCONST_DVARFLT_cg_remoteMissileKillCamUpDist = Dvar_RegisterFloat("cg_remoteMissileKillCamUpDist", 60.0, -3.4028235e38, 3.4028235e38, 0x40004u, "Remote missile kill camera: distance of camera vertically from rocket.");
  DCONST_DVARFLT_cg_remoteMissileKillCamBackDist = Dvar_RegisterFloat("cg_remoteMissileKillCamBackDist", 300.0, -3.4028235e38, 3.4028235e38, 0x40004u, "Remote missile kill camera: distance of camera backwards from rocket.");
  DCONST_DVARFLT_cg_explosiveKillCamStopDist = Dvar_RegisterFloat("cg_explosiveKillCamStopDist", 120.0, 0.0, 3.4028235e38, 0x40004u, "Rocket and Grenade Launcher kill camera: distance from player to begin coming to rest");
  DCONST_DVARFLT_cg_explosiveKillCamStopDecelDist = Dvar_RegisterFloat("cg_explosiveKillCamStopDecelDist", 1000.0, 0.0, 3.4028235e38, 0x40004u, "Rocket and Grenade Launcher kill camera: distance over which to decelerate when coming to rest");
  DCONST_DVARFLT_cg_explosiveKillCamStopSpeedThreshold = Dvar_RegisterFloat("cg_explosiveKillCamStopSpeedThreshold", 200.0, 0.0, 3.4028235e38, 0x40004u, "Rocket and grenade launcher kill camera: minimum speed of projectile for deceleration algorithm to kick in (inches per second)");
  DCONST_DVARFLT_cg_explosiveKillCamPredictStickDist = Dvar_RegisterFloat("cg_explosiveKillCamPredictStickDist", 24.0, 0.0, 3.4028235e38, 0x40004u, "Distance between killCamEntity and killCamLookAtEntity where the client can predict that the projectile is stuck.");
  DVARFLT_cg_turretKillCamUpDist = Dvar_RegisterFloat("MPSSNLOSSK", 10.0, -3.4028235e38, 3.4028235e38, 4u, "Turret kill camera: distance of camera vertically from Turret.");
  DVARFLT_cg_turretKillCamBackDist = Dvar_RegisterFloat("NSMKSMPPTS", 10.0, -3.4028235e38, 3.4028235e38, 4u, "Turret kill camera: distance of camera backwards from Turret.");
  DVARFLT_cg_turretKillCamFov = Dvar_RegisterFloat("NMQTRORTPM", 50.0, 0.1, 160.0, 4u, "Turret kill camera field of view.");
  DVARFLT_cg_turretRemoteKillCamUpDist = Dvar_RegisterFloat("TOSKRRNMK", 40.0, -3.4028235e38, 3.4028235e38, 4u, "Remote Turret kill camera: distance of camera vertically from Turret.");
  DVARFLT_cg_turretRemoteKillCamBackDist = Dvar_RegisterFloat("LTTMLTOQLO", 100.0, -3.4028235e38, 3.4028235e38, 4u, "Remote Turret kill camera: distance of camera backwards from Turret.");
  DVARFLT_cg_turretRemoteKillCamFov = Dvar_RegisterFloat("NNRKTRSLNQ", 50.0, 0.1, 160.0, 4u, "Remote Turret kill camera field of view.");
  DVARFLT_cg_javelinKillCamCloseZDist = Dvar_RegisterFloat("LTMQPOOPRO", 500.0, 0.0, 3.4028235e38, 4u, "Javelin kill camera: closest distance above the target.");
  DVARFLT_cg_javelinKillCamPassTime = Dvar_RegisterFloat("MRNQSMPPKK", 5.0, 0.0, 3.4028235e38, 4u, "Javelin kill camera: time in seconds to pass javelin on the way up");
  DVARFLT_cg_javelinKillCamFov = Dvar_RegisterFloat("NTRSNPPPQN", 60.0, 0.0, 180.0, 4u, "Javelin kill camera: fov");
  DVARFLT_cg_javelinKillCamPassDist = Dvar_RegisterFloat("LSRRROPSLT", 50.0, 0.0, 180.0, 4u, "Javelin kill camera: distance away when passing.");
  DVARFLT_cg_javelinKillCamUpDist = Dvar_RegisterFloat("NRLNSNOLKN", 200.0, 0.0, 3.4028235e38, 4u, "Javelin kill camera: distance to follow during ascent.");
  DVARFLT_cg_javelinKillCamDownDist = Dvar_RegisterFloat("NNLTLOLTNQ", 150.0, 0.0, 3.4028235e38, 4u, "Javelin kill camera: distance to follow during descent.");
  DVARFLT_cg_javelinKillCamLookLerpDist = Dvar_RegisterFloat("NLTLKKKTPS", 3000.0, 0.0, 3.4028235e38, 4u, "Javelin kill camera: distance over which to lerp to look at player during descent.  A value of zero means don't lerp at all.");
  DVARFLT_cg_javelinKillCamPitchDownBlendFinish = Dvar_RegisterFloat("MOSNPPMQOQ", 45.0, -80.0, 90.0, 4u, "Javelin kill camera: missile pitch angle where 'down' camera behavior is completely blended in.");
  DVARFLT_cg_killcamOffsetBlendSpeed = Dvar_RegisterFloat("NSKRQNKKOK", 5.0, 0.0, 3.4028235e38, 4u, "Killcam blend speed to gdt offset killcamOffset.");
  DVARFLT_cg_killcamOffsetBlendDelayTime = Dvar_RegisterFloat("MTRLKQPRQR", 0.5, 0.0, 3.4028235e38, 4u, "Time before offset blend will start once the conditions are met.");
  DVARFLT_cg_killcamEntityLookAtOffset = Dvar_RegisterFloat("LLNKPKTSTL", 50.0, 0.0, 3.4028235e38, 4u, "The look at offset from the base position of the entity alongside their up vector.");
  DVARINT_cg_throwingAxeKillCamEntIgnoreTime = Dvar_RegisterInt("MPPPQPPQNP", 100, 0, 1000, 4u, "The amount of time to ignore the kill cam entity since the launch of the projectile (makes the kill cam not follow the throwing axe within the first x milliseconds.");
  DVARBOOL_compassPrototypeElevation = Dvar_RegisterBool("QOTRQLLKK", 1, 0, "Should the compass display relative elevation indicators");
  DVARBOOL_compassPrototypeFiring = Dvar_RegisterBool("MMRMSQKQRS", 1, 0, "Should the compass display enemy firing status indicators");
  DVARFLT_compassTacmapMiniIconZoomPOI = Dvar_RegisterFloat("NLTRRSLOKQ", 0.60000002, 0.0099999998, 1.0, 0, "zoom level at which point to switch to the mini-icons POI (kiosks)");
  DVARFLT_compassTacmapMiniIconZoomMission = Dvar_RegisterFloat("RLKOPMNRM", 0.60000002, 0.0099999998, 1.0, 0, "zoom level at which point to switch to the mini-icons mission tablets");
  DVARFLT_compassTacmapMiniIconZoomVehicle = Dvar_RegisterFloat("TTRLOKSMS", 0.60000002, 0.0099999998, 1.0, 0, "zoom level at which point to switch to the mini-icons for vehicles");
  DVARFLT_compassTacmapFilterZoomPOI = Dvar_RegisterFloat("NONSRTQORS", 0.80000001, 0.0099999998, 1.0, 0, "Filter out POIs (kiosks) if zoom is higher than this, 1.0 would never filter, 0.0 would always filter");
  DVARFLT_compassTacmapFilterZoomMission = Dvar_RegisterFloat("LTRMRRONMO", 0.89999998, 0.0099999998, 1.0, 0, "Filter out mission tablets if zoom is higher than this, 1.0 would never filter, 0.0 would always filter");
  DVARFLT_compassTacmapFilterZoomVehicle = Dvar_RegisterFloat("NRLNMKTPQ", 0.69999999, 0.0099999998, 1.0, 0, "Filter out vehicles if zoom is higher than this, 1.0 would never filter, 0.0 would always filter");
  DVARBOOL_compassTacmapFilterVehicle = Dvar_RegisterBool("OKLSLRLLOR", 0, 0, "Never draw vehicles on the tacmap");
  DVARBOOL_compassTacmapFilterObjective = Dvar_RegisterBool("LLSLRPKOMO", 0, 0, "Never draw tablets on the tacmap");
  DVARBOOL_compassTacmapFilterPOI = Dvar_RegisterBool("PQRNNSNSP", 0, 0, "Never draw POIs on the tacmap");
  DVARBOOL_compassTacmapFilterObjectiveIfActive = Dvar_RegisterBool("LTLLKQNKSN", 0, 0, "Filter all objectives if one is active");
  DVARBOOL_compassScramblerDrawSquadColor = Dvar_RegisterBool("NSSPKSPTSL", 0, 0, "Draw friendly scramblers with the color of the squadmate that called it in. If false, will default to team blue.");
  DVARBOOL_compassScramblerDrawDottedBorder = Dvar_RegisterBool("TTMTRQOKO", 1, 0, "Draw scramblers with a dotted border. If false, will default to solid border.");
  DVARBOOL_compassScramblerDrawEnemyBorder = Dvar_RegisterBool("LRRSSPTSRQ", 0, 0, "If true, will draw a border around the scrambler effect on the map.");
  DVARFLT_compassEnemyFootstepMaxRange = Dvar_RegisterFloat("LNTLSNKQOK", 500.0, 0.0, 3.4028235e38, 4u, "The maximum distance at which an enemy may appear on the compass due to 'footsteps'");
  DVARFLT_compassEnemyFootstepMaxZ = Dvar_RegisterFloat("LLQORTSSP", 100.0, 0.0, 3.4028235e38, 4u, "The maximum vertical distance enemy may be from the player and appear on the compass due to 'footsteps'");
  DVARFLT_compassEnemyFootstepMinSpeed = Dvar_RegisterFloat("NNOQLTMQPS", 140.0, 0.0, 3.4028235e38, 4u, "The minimum speed an enemy must be moving to appear on the compass due to 'footsteps'");
  DVARFLT_cg_hudMapRadarLineThickness = Dvar_RegisterFloat("MMTNTRMSLL", 0.15000001, 0.0099999998, 10.0, 4u, "Thickness, relative to the map width, of the radar texture that sweeps across the full screen map");
  DCONST_DVARFLT_compassPlayerGhostFade = Dvar_RegisterFloat("compassPlayerGhostFade", 0.69999999, 0.0, 1.0, 0x40004u, "The amount of fade when radar jamming is active from the ghost ability");
  DVARFLT_compassObjectiveIconBackgroundScalar = Dvar_RegisterFloat("MKSQKQRNKT", 0.80000001, 0.0, 3.4028235e38, 0, "The size multiplier of the background icon relative to the objective");
  DCONST_DVARINT_compassObjectivePopTime = Dvar_RegisterInt("compassObjectivePopTime", 125, 0, 0x7FFFFFFF, 0x40004u, "The duration in ms the objective icon will pop when changing state");
  DCONST_DVARFLT_compassObjectiveIconHeightAdjust = Dvar_RegisterFloat("compassObjectiveIconHeightAdjust", -0.55000001, -30.0, 30.0, 0x40004u, "The height adjustment of the background icon relative to the main objective icon");
  DVARBOOL_compassUAVDrawOuterCircle = Dvar_RegisterBool("MTPNNRQLOK", 0, 0, "Should the compass draw the outerCircle for the UAV in large map");
  DCONST_DVARFLT_compassCUAVRadius = Dvar_RegisterFloat("compassCUAVRadius", 12000.0, 0.0, 3.4028235e38, 0x40004u, "The radius of the CUAV for large maps");
  DCONST_DVARFLT_compassCUAVGlitchAmount = Dvar_RegisterFloat("compassCUAVGlitchAmount", 0.94999999, 0.0, 1.0, 0x40004u, "The glitch amount applied to the compass during the CUAV in small maps and the max amount applied in large maps");
  DVARBOOL_compassCUAVDrawOuterCircle = Dvar_RegisterBool("NQTTMLPRNL", 0, 0, "Should the compass draw the outerCircle for the CUAV in large map");
  DCONST_DVARFLT_compassScramblerRadius = Dvar_RegisterFloat("compassScramblerRadius", 1000.0, 0.0, 3.4028235e38, 0x40004u, "The maximum range from the scrambler in world space that glitch effect would affect");
  DCONST_DVARFLT_compassEMPDroneRadius = Dvar_RegisterFloat("compassEMPDroneRadius", 800.0, 0.0, 3.4028235e38, 0x40004u, "The maximum range from the EMP Drone in world space");
  DVARFLT_brCompassCUAVScramblerRadius = Dvar_RegisterFloat("PNMPSQNON", 12000.0, 0.0, 3.4028235e38, 0, "The radius of scrambler glitch FX for the CUAV in BR");
  DVARFLT_brCompassCUAVScramblerLocSelectSizeMultiplier = Dvar_RegisterFloat("LQSMQPLTRN", 1.0, 0.0, 3.4028235e38, 0, "The multiplier for the glitch FX for the CUAV in BR");
  DVARFLT_compassSelectorSizeBase = Dvar_RegisterFloat("NTPPKLNKNM", 1150.0, 0.0, 3.4028235e38, 4u, "The baseline size for the location selector arrow");
  DVARBOOL_compassDynamicSelectorSizeEnabled = Dvar_RegisterBool("MKOSKLNLOL", 1, 0, "Killswitch for the dynamic location selector which resizes based on the map");
  DVARINT_minimapPlayerCirclePingDuration = Dvar_RegisterInt("MPPKMQPPOT", 500, 0, 0x7FFFFFFF, 0, "The duration of player ping animation ( millisecond )");
  DCONST_DVARINT_minimapPlayerCirclePinRepeatCount = Dvar_RegisterInt("minimapPlayerCirclePinRepeatCount", 2, -1, 0x7FFFFFFF, 0x40004u, "How many times the circle blips after open the pause menu. -1 for always repeat");
  DVARFLT_minimapPlayerCirclePingRadius = Dvar_RegisterFloat("MNTSSMTOMR", 0.0, -10000.0, 10000.0, 0, "Circle Radius of player ping animation");
  DCONST_DVARFLT_compassObjectiveIconActiveMissionRGB = Dvar_RegisterFloat("compassObjectiveIconActiveMissionRGB", 0.5, 0.0, 1.0, 0x40004u, "rgb override color for for mission tablet icons when a mission is active");
  DCONST_DVARFLT_compassObjectiveIconActiveMissionAlpha = Dvar_RegisterFloat("compassObjectiveIconActiveMissionAlpha", 0.85000002, 0.0, 1.0, 0x40004u, "fade out alpha level for mission tablet icons when a mission is active");
  DVARINT_cg_drawCrosshairNamesPosX = Dvar_RegisterInt("NQNKLTTNQM", 300, 0, 640, 0, "Virtual screen space position of the crosshair name");
  DVARINT_cg_drawCrosshairNamesPosY = Dvar_RegisterInt("LOKRSPLOTT", 180, 0, 480, 0, "Virtual screen space position of the crosshair name");
  DVARVEC2_cg_hudChatPosition = Dvar_RegisterVec2("OLMTSNOLQO", 5.0, 250.0, 0.0, 640.0, 0, "Position of the HUD chat box");
  DVARVEC2_cg_hudChatIntermissionPosition = Dvar_RegisterVec2("TSSNPNMNQ", 5.0, 110.0, 0.0, 640.0, 0, "Position of the HUD chat box during intermission");
  DVARVEC2_cg_hudSayPosition = Dvar_RegisterVec2("MSLTKKOKST", 5.0, 225.0, 0.0, 640.0, 0, "Position of the HUD say box");
  DVARVEC2_cg_hudVotePosition = Dvar_RegisterVec2("MKKPSOONLO", 5.0, 220.0, 0.0, 640.0, 0, "Position of the HUD vote box");
  DVARBOOL_cg_drawDisconnectPercentage = Dvar_RegisterBool("OLNSKNLPPS", 0, 0, "Enable the disconnect visualizer");
  DVARBOOL_drawEntityCount = Dvar_RegisterBool("NRQTKKNSNN", 0, 0, "Enable entity count drawing");
  DVARVEC2_drawEntityCountPos = Dvar_RegisterVec2("LPTOQPNN", 515.0, 10.0, -3.4028235e38, 3.4028235e38, 0, "Where to draw the entity count graph");
  DVARINT_drawEntityCountSize = Dvar_RegisterInt("MLQLKQMTTM", 32, 0, 0x7FFFFFFF, 0, "How big to draw the entity count graph");
  DVARBOOL_drawServerBandwidth = Dvar_RegisterBool("MTKKTORKNP", 0, 0, "Enable drawing server bandwidth");
  DVARVEC2_drawServerBandwidthPos = Dvar_RegisterVec2("LROMRNROKR", 585.0, 220.0, -3.4028235e38, 3.4028235e38, 0, "Where to draw the server bandwidth graph");
  DVARBOOL_drawKillcamData = Dvar_RegisterBool("MKSRKOLPNQ", 0, 0, "Enable drawing server killcam data");
  DVARVEC2_drawKillcamDataPos = Dvar_RegisterVec2("MMPQSMMONM", 585.0, 140.0, -3.4028235e38, 3.4028235e38, 0, "Where to draw the server killcam graph");
  DVARINT_drawKillcamDataSize = Dvar_RegisterInt("MLRRRKQLQL", 32, 0, 0x7FFFFFFF, 0, "How big to draw the killcam data graph");
  DVARFLT_cg_packetAnalysisTextSize = Dvar_RegisterFloat("NKTLKOMOSK", 11.0, 0.0, 100.0, 0, "The text size of the packet analysis debug prints");
  DVARFLT_cg_packetAnalysisEntTextSize = Dvar_RegisterFloat("LSSRRSMRLL", 11.0, 0.0, 100.0, 0, "The text size of the packet analysis entity debug prints");
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
  DVARFLT_cg_overheadNamesMaxDist = Dvar_RegisterFloat("NNPTKPSPPK", 10000.0, 0.0, 3.4028235e38, 4u, "The maximum distance for showing friendly player names");
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
  DVARINT_cg_weaponVisInterval = Dvar_RegisterInt("LNTSPPQLMR", 4, 1, 20, 4u, "Do weapon vis checks once per this many frames, per centity");
  DVARCLR_cg_TeamColor_Allies = Dvar_RegisterColor("NPTQOLNNNP", 0.60000002, 0.63999999, 0.69, 1.0, 0, "Allies team color");
  DVARCLR_cg_TeamColor_Axis = Dvar_RegisterColor("NSMQONORSQ", 0.64999998, 0.56999999, 0.41, 1.0, 0, "Axis team color");
  DVARCLR_cg_TeamColor_MyTeam = Dvar_RegisterColor("TKKTLQNPM", 0.68599999, 0.87800002, 0.70899999, 1.0, 0, "Player team color");
  DVARCLR_cg_TeamColor_MyParty = Dvar_RegisterColor("LRQONROMRL", 1.0, 0.80000001, 0.40000001, 1.0, 0, "Player team color when in the same party");
  DVARCLR_cg_TeamColor_EnemyTeam = Dvar_RegisterColor("PNTRSSKPS", 1.0, 0.44999999, 0.5, 1.0, 0, "Enemy team color");
  DVARCLR_cg_TeamColor_Spectator = Dvar_RegisterColor("LNTKMKNOKS", 0.25, 0.25, 0.25, 1.0, 0, "Spectator team color");
  DVARCLR_cg_TeamColor_Free = Dvar_RegisterColor("OLNNTQKPNR", 0.75, 0.25, 0.25, 1.0, 0, "Free Team color");
  DVARCLR_cg_TeamColor_Team_Three = Dvar_RegisterColor("LNPQSTLRTN", 1.0, 1.0, 0.0, 1.0, 0, "Team_Three team color");
  DVARCLR_cg_TeamColor_Team_Four = Dvar_RegisterColor("MPLTTKMPNN", 0.0, 1.0, 1.0, 1.0, 0, "Team_Four team color");
  DVARCLR_cg_TeamColor_Team_Five = Dvar_RegisterColor("MNKRSNOPT", 1.0, 0.0, 1.0, 1.0, 0, "Team_Five team color");
  DVARCLR_cg_TeamColor_Team_Six = Dvar_RegisterColor("LRMSRLSLKT", 0.69999999, 0.69999999, 0.69999999, 1.0, 0, "Team_Six team color");
  DVARINT_cg_drawDebugRootMotion = Dvar_RegisterInt("QOLOLKTPT", 0, 0, 60000, 4u, "Time (seconds) to draw debug lines for the path taken by root motion anim");
  DVARBOOL_cg_mlg_static_cameras = Dvar_RegisterBool("OLNMMRPTTS", 0, 0, "If the MLG/CodCaster static cameras are present or not");
  DCONST_DVARBOOL_cg_debugFireAnimStabilizer = Dvar_RegisterBool("cg_debugFireAnimStabilizer", 0, 0x40004u, "Enables the logging for the fire animation stabilizer used during the spectator cam or kill cam");
  DCONST_DVARFLT_deltaTimeMaxCorrectionDisplacement = Dvar_RegisterFloat("deltaTimeMaxCorrectionDisplacement", 100.0, 0.0, 3.4028235e38, 0x40004u, "Max displacement before we use max speed to correct time delta issues.");
  DCONST_DVARFLT_deltaTimeMinCorrectionDisplacement = Dvar_RegisterFloat("deltaTimeMinCorrectionDisplacement", 0.0, 0.0, 3.4028235e38, 0x40004u, "Min displacement before we use min speed to correct time delta issues.");
  DCONST_DVARFLT_deltaTimeMaxCorrectionSpeed = Dvar_RegisterFloat("deltaTimeMaxCorrectionSpeed", 25.0, 0.0, 3.4028235e38, 0x40004u, "Max correction speed to correct time delta issues.");
  DCONST_DVARFLT_deltaTimeMinCorrectionSpeed = Dvar_RegisterFloat("deltaTimeMinCorrectionSpeed", 1.0, 0.0, 3.4028235e38, 0x40004u, "Min correction speed to correct time delta issues.");
  DCONST_DVARBOOL_deltaTimeAlwaysUseNewAlgorithm = Dvar_RegisterBool("deltaTimeAlwaysUseNewAlgorithm", 0, 0x40004u, "When enabled, we always use the new delta time adjustment algorithm.");
  DCONST_DVARBOOL_cg_enablePlayerEntityWorkers = Dvar_RegisterBool("cg_enablePlayerEntityWorkers", 1, 0x40004u, "When enabled, ET_Player entities will be threaded off in entity workers");
  DCONST_DVARSTR_cg_brCircleFX = Dvar_RegisterString("cg_brCircleFX", "vfx/iw8_br/gameplay/vfx_br_circle_mainwall", 0x40004u, "FX to use for the BR Circle (make sure it's precached)");
  DCONST_DVARFLT_cg_brCircleZ = Dvar_RegisterFloat("cg_brCircleZ", 0.0, -3.4028235e38, 3.4028235e38, 0x40004u, "height where the BR Circle FX is rendered at");
  DCONST_DVARFLT_cg_brCircleBaseRadius = Dvar_RegisterFloat("cg_brCircleBaseRadius", 1784.0, 0.001, 3.4028235e38, 0x40004u, "radius in world units of the BR Circle FX at scale 1.0");
  DCONST_DVARFLT_cg_brCircleEmissionCurveMaxRadius = Dvar_RegisterFloat("cg_brCircleEmissionCurveMaxRadius", 100000.0, 0.001, 3.4028235e38, 0x40004u, "The BR Circle FX emission curve X-axis value is determined by the BR circle radius.  At radius 0, emission curve X-axis value is 0.  At radius 'cg_brCircleEmissionCurveMaxRadius', emission curve X-axis value is 1.");
  DCONST_DVARFLT_cg_brCircleEmissionCurveDebugValue = Dvar_RegisterFloat("cg_brCircleEmissionCurveDebugValue", -1.0, -1.0, 1.0, 0x40004u, "Sets the X-axis value for BR Circle FX emission curves to this value (debug only).  Debug is disabled if value is below 0.");
  DCONST_DVARSTR_cg_brCircleLoopSound = Dvar_RegisterString("cg_brCircleLoopSound", "br_circle_proximity_lp", 0x40004u, "Loop sound to play when player is close to or outside of circle.");
  DCONST_DVARSTR_cg_brCircleTickSound = Dvar_RegisterString("cg_brCircleTickSound", "br_circle_proximity_tick", 0x40004u, "A ticking sound to play when player is close to or outside of circle.");
  DCONST_DVARFLT_cg_brCircleProximityDistMin = Dvar_RegisterFloat("cg_brCircleProximityDistMin", 24.0, 0.0, 3.4028235e38, 0x40004u, "When player's distance to circle's edge is closer than this, circle sounds play at full intensity.");
  DCONST_DVARFLT_cg_brCircleProximityDistMax = Dvar_RegisterFloat("cg_brCircleProximityDistMax", 640.0, 0.0, 3.4028235e38, 0x40004u, "When player's distance to circle's edge is further than this, circle sounds stop.");
  DCONST_DVARFLT_cg_brCircleProximityVolumeMin = Dvar_RegisterFloat("cg_brCircleProximityVolumeMin", 0.1, 0.0, 3.4028235e38, 0x40004u, "Min volume that the circle sounds will be played at.");
  DCONST_DVARFLT_cg_brCircleProximityVolumeMax = Dvar_RegisterFloat("cg_brCircleProximityVolumeMax", 0.708, 0.0, 3.4028235e38, 0x40004u, "Max volume that the circle sounds will be played at.");
  DCONST_DVARFLT_cg_brCircleLoopPitchMin = Dvar_RegisterFloat("cg_brCircleLoopPitchMin", 1.414, 0.0, 3.4028235e38, 0x40004u, "Min pitch that the circle loop sound will be played at.");
  DCONST_DVARFLT_cg_brCircleLoopPitchMax = Dvar_RegisterFloat("cg_brCircleLoopPitchMax", 1.0, 0.0, 3.4028235e38, 0x40004u, "Max pitch that the circle loop sound will be played at.");
  DCONST_DVARFLT_cg_brCircleTickIntervalMin = Dvar_RegisterFloat("cg_brCircleTickIntervalMin", 0.016666668, 0.0, 3.4028235e38, 0x40004u, "Min interval that the circle ticking sound will be played at.");
  DCONST_DVARFLT_cg_brCircleTickIntervalMax = Dvar_RegisterFloat("cg_brCircleTickIntervalMax", 0.333, 0.0, 3.4028235e38, 0x40004u, "Max interval that the circle ticking sound will be played at.");
  DCONST_DVARFLT_cg_brCircleTickPitchMin = Dvar_RegisterFloat("cg_brCircleTickPitchMin", 0.70700002, 0.0, 3.4028235e38, 0x40004u, "Min pitch that the circle ticking sound will be played at.");
  DCONST_DVARFLT_cg_brCircleTickPitchMax = Dvar_RegisterFloat("cg_brCircleTickPitchMax", 1.0, 0.0, 3.4028235e38, 0x40004u, "Max pitch that the circle ticking sound will be played at.");
  DCONST_DVARFLT_cg_brCircleFogBlendInTime = Dvar_RegisterFloat("cg_brCircleFogBlendInTime", 6.0, 0.0, 3.4028235e38, 0x40004u, "Duration (in seconds) to blend in volumetric- and distance-based fog for the BR Circle when starting the effect.");
  DCONST_DVARFLT_cg_brCircleFogHeight = Dvar_RegisterFloat("cg_brCircleFogHeight", 5000.0, 0.0, 3.4028235e38, 0x40004u, "Circle fog height");
  DCONST_DVARFLT_cg_brCircleFogInset = Dvar_RegisterFloat("cg_brCircleFogInset", 0.0, -3.4028235e38, 3.4028235e38, 0x40004u, "Circle fog inset");
  DCONST_DVARFLT_cg_brCircleFogOuterColorDistance = Dvar_RegisterFloat("cg_brCircleFogOuterColorDistance", 1000.0, 0.0, 3.4028235e38, 0x40004u, "Circle fog outer color distance");
  DCONST_DVARVEC2_cg_brCircleVolumetricFogParams = Dvar_RegisterVec2("cg_brCircleVolumetricFogParams", 0.001, 1.0, 0.0, 3.4028235e38, 0x40004u, "Circle volumetric fog params: density - x, scale - y");
  DVARVEC3_cg_brCircleVolumetricFogInnerColor = Dvar_RegisterVec3("MTMOOOQKKL", 1.5, 1.5, 1.0, 0.0, 3.4028235e38, 0, "Circle volumetric fog inner color");
  DVARVEC3_cg_brCircleVolumetricFogOuterColor = Dvar_RegisterVec3("OMRQMSLSRK", 1.5, 1.5, 1.0, 0.0, 3.4028235e38, 0, "Circle volumetric fog outer color");
  DCONST_DVARVEC3_cg_brCircleDistanceFogParams = Dvar_RegisterVec3("cg_brCircleDistanceFogParams", 0.029999999, 1.0, 75.0, 0.0, 3.4028235e38, 0x40004u, "Circle distance fog params: density - x, scale - y, half plane - z");
  DVARVEC3_cg_brCircleDistanceFogInnerColor = Dvar_RegisterVec3("LOTQPTKLO", 2.0, 2.0, 0.5, 0.0, 3.4028235e38, 0, "Circle distance fog inner color");
  DVARVEC3_cg_brCircleDistanceFogOuterColor = Dvar_RegisterVec3("LOPRPSKMST", 2.0, 2.0, 0.5, 0.0, 3.4028235e38, 0, "Circle distance fog outer color");
  DVARVEC4_cg_brCirclePerceptualTint = Dvar_RegisterVec4("MSNRKNQPRS", 0.36000001, 0.34, 0.059999999, 1.0, 0.0, 3.4028235e38, 0, "Circle fog scattering bias - rgb and intensity. (HACK)");
  DCONST_DVARVEC2_cg_brCircleHeightFalloff = Dvar_RegisterVec2("cg_brCircleHeightFalloff", 12000.0, 12000.0, 0.0, 3.4028235e38, 0x40004u, "Circle falloffs: distance fog - x, volumetric - y");
  DCONST_DVARFLT_cg_brCircleSkyDistanceMultiplier = Dvar_RegisterFloat("cg_brCircleSkyDistanceMultiplier", 10.0, 0.0099999998, 3.4028235e38, 0x40004u, "Circle sky distance multiplier");
  DCONST_DVARVEC2_cg_brCircleDistanceFogBlend = Dvar_RegisterVec2("cg_brCircleDistanceFogBlend", 0.0, 0.0, 0.0, 1.0, 0x40004u, "Circle blend with distance fog");
  DCONST_DVARFLT_cg_brCircleDistanceHeightBlend = Dvar_RegisterFloat("cg_brCircleDistanceHeightBlend", 1000.0, 0.0099999998, 3.4028235e38, 0x40004u, "Circle distance fog height blend");
  DCONST_DVARFLT_cg_brCircleDistanceHeightViewBlend = Dvar_RegisterFloat("cg_brCircleDistanceHeightViewBlend", 3000.0, 0.0099999998, 3.4028235e38, 0x40004u, "Circle distnace fog height blend by view ray start");
  DCONST_DVARFLT_cg_brCircleDistanceHeightBlendStart = Dvar_RegisterFloat("cg_brCircleDistanceHeightBlendStart", 3000.0, 0.0099999998, 3.4028235e38, 0x40004u, "Circle distance fog start of height blend");
  DCONST_DVARFLT_cg_brCircleFogDensityScale = Dvar_RegisterFloat("cg_brCircleFogDensityScale", 1.0, -3.4028235e38, 3.4028235e38, 0x40004u, "Circle fog density scale");
  DCONST_DVARFLT_cg_brCircleFogDensityBias = Dvar_RegisterFloat("cg_brCircleFogDensityBias", 0.0, -3.4028235e38, 3.4028235e38, 0x40004u, "Circle fog density bias");
  DCONST_DVARFLT_cg_brCircleFogDensityNoiseScale = Dvar_RegisterFloat("cg_brCircleFogDensityNoiseScale", 1.0, -3.4028235e38, 3.4028235e38, 0x40004u, "Circle fog density noise scale");
  DCONST_DVARFLT_cg_brCircleFogDensityNoiseBias = Dvar_RegisterFloat("cg_brCircleFogDensityNoiseBias", 0.0, -3.4028235e38, 3.4028235e38, 0x40004u, "Circle fog density noise bias");
  DCONST_DVARVEC2_cg_brCircleFogDensityTiling = Dvar_RegisterVec2("cg_brCircleFogDensityTiling", 1.0, 1.0, -3.4028235e38, 3.4028235e38, 0x40004u, "Circle fog density noise tiling");
  DCONST_DVARVEC2_cg_brCircleFogDensityScrollingSpeed = Dvar_RegisterVec2("cg_brCircleFogDensityScrollingSpeed", 1.0, 1.0, -3.4028235e38, 3.4028235e38, 0x40004u, "Circle fog density noise scrolling speed");
  DCONST_DVARBOOL_cg_customization_devVerbose = Dvar_RegisterBool("cg_customization_devVerbose", 0, 0x40004u, "Enables debugging spam for CG_CustomizationMP");
  DCONST_DVARBOOL_cg_enableDetachableClientCorpses = Dvar_RegisterBool("cg_enableDetachableClientCorpses", 1, 0x40004u, "When enabled, client corpses will be allowed to be detached and not synchronized with the server");
  DCONST_DVARBOOL_cg_clientCorpse_devVerbose = Dvar_RegisterBool("cg_clientCorpse_devVerbose", 0, 0x40004u, "Enables debugging spam for client corpses");
  DCONST_DVARBOOL_cg_clientCorpse_debugDisplay = Dvar_RegisterBool("cg_clientCorpse_debugDisplay", 0, 0x40004u, "Debug display corpses");
  DCONST_DVARINT_cg_corpseFreshTimeout = Dvar_RegisterInt("cg_corpseFreshTimeout", 3000, 0, 0x7FFFFFFF, 0x40004u, "Defines Freshness timeout in milliseconds");
  DCONST_DVARBOOL_cg_customizationStreamingEnabled = Dvar_RegisterBool("cg_customizationStreamingEnabled", 1, 0x40004u, "Disable to turn off client-side streaming for currently equipped customizations");
  DCONST_DVARBOOL_cg_weaponStreamingEnabled = Dvar_RegisterBool("cg_weaponStreamingEnabled", 1, 0x40004u, "Disable to turn off client-side streaming for currently equipped weapons");
  DCONST_DVARINT_cg_streamingMaxTeamSizeForBoostedTeammatePrioritization = Dvar_RegisterInt("cg_streamingMaxTeamSizeForBoostedTeammatePrioritization", 4, 0, 200, 0x40004u, "The maximum team size (max players / team count) that will trigger boosted teammate streaming priorities to be infinitely closer than other entity types (enemies, items, corpses, etc.).");
  DCONST_DVARFLT_cg_streamingMaxDistanceForNearWorldModelPrioritization = Dvar_RegisterFloat("cg_streamingMaxDistanceForNearWorldModelPrioritization", 1350.0, 1250.0, 3.4028235e38, 0x40004u, "Distance at which we promote world models to a protected priority of \"near\" world models.");
  DCONST_DVARFLT_cg_streamingMinDistanceForFarWorldModelPrioritization = Dvar_RegisterFloat("cg_streamingMinDistanceForFarWorldModelPrioritization", 5600.0, 1250.0, 3.4028235e38, 0x40004u, "Distance at which we demote world models to a far world model priority.");
  DCONST_DVARFLT_cg_streamingMinVelocityDeprioritizeCommonMPTransients = Dvar_RegisterFloat("cg_streamingMinVelocityDeprioritizeCommonMPTransients", 320.0, 0.0, 3.4028235e38, 0x40004u, "The minimum parametric velocity at which we flag common mp transients to be deprioritized and potentially allow more I/O bandwidth to be used by tile-streamed transients.");
  DCONST_DVARBOOL_cg_devLoadWeaponAttachmentIcons = Dvar_RegisterBool("cg_devLoadWeaponAttachmentIcons", 0, 0x40004u, "Enables loading of weapon attachment icons to simulate real game image load");
  DCONST_DVARBOOL_cg_skipStreamedModelValidation = Dvar_RegisterBool("cg_skipStreamedModelValidation", 0, 0x40004u, "Enable to turn off runtime validation of streamed models.");
  DCONST_DVARBOOL_cg_customizationMP_devNoLatch = Dvar_RegisterBool("cg_customizationMP_devNoLatch", 1, 0x40004u, "When set, disables the latching system for character models");
  DCONST_DVARFLT_cg_customizationMP_latchMaxDistance = Dvar_RegisterFloat("cg_customizationMP_latchMaxDistance", 1250.0, 0.0, 3.4028235e38, 0x40004u, "The maximum distance we will latch a character's model.");
  DCONST_DVARFLT_cg_highPriorityCorpseDistanceSqMultiplier = Dvar_RegisterFloat("cg_highPriorityCorpseDistanceSqMultiplier", 0.015625, 0.0, 3.4028235e38, 0x40004u, "The distanceSq multiplier used to elevate high priority corpses in our distance cache for streaming.");
  DCONST_DVARBOOL_cg_prefetchPlayercards = Dvar_RegisterBool("cg_prefetchPlayercards", 1, 0x40004u, "Enables prefetching of all playercard backgrounds and emblems. WARNING: For large player counts, this may cost a significant amount of memory to enable");
  DCONST_DVARFLT_cg_imageHintDistancePlayerCards = Dvar_RegisterFloat("cg_imageHintDistancePlayerCards", 0.25, 0.0, 3.4028235e38, 0x40004u, "Distance used to hint playercard images for preloading");
  DCONST_DVARFLT_cg_imageHintDistancePlayerCardsLow = Dvar_RegisterFloat("cg_imageHintDistancePlayerCardsLow", 1.25, 0.0, 3.4028235e38, 0x40004u, "Distance used to hint playercard images for preloading. This is a lowered priority value to be usedfor high streaming pressure scenarios.");
  DCONST_DVARFLT_cg_imageHintDistanceWeaponAttachmentIcons = Dvar_RegisterFloat("cg_imageHintDistanceWeaponAttachmentIcons", 0.25, 0.0, 3.4028235e38, 0x40004u, "Distance used to hint weapon attachment images for preloading");
  DCONST_DVARFLT_cg_imageHintDistanceWeaponAttachmentIconsLow = Dvar_RegisterFloat("cg_imageHintDistanceWeaponAttachmentIconsLow", 1.25, 0.0, 3.4028235e38, 0x40004u, "Distance used to hint weapon attachment images for preloading. This is a lowered priority value to be usedfor high streaming pressure scenarios.");
  DCONST_DVARINT_cg_forceCustomizationHead = Dvar_RegisterInt("cg_forceCustomizationHead", -1, -1, 0x7FFFFFFF, 0x40004u, "Force customization head model index for all local clients (client-only). Use -1 to turn off.");
  DCONST_DVARINT_cg_forceCustomizationBody = Dvar_RegisterInt("cg_forceCustomizationBody", -1, -1, 0x7FFFFFFF, 0x40004u, "Force customization body model index for all local clients (client-only). Use -1 to turn off.");
  DCONST_DVARINT_cg_forceCustomizationViewhands = Dvar_RegisterInt("cg_forceCustomizationViewhands", -1, -1, 0x7FFFFFFF, 0x40004u, "Force customization viewhands model index for all local clients (client-only). Use -1 to turn off.");
  DVARFLT_cg_enemyNameplateAngle = Dvar_RegisterFloat("OLRKNSKNPS", 0.0, 0.0, 180.0, 4u, "Angle from the view vector where enemy nameplates are visible (degrees).");
  DVARFLT_cg_enemyNameplateDistance = Dvar_RegisterFloat("NPNSLTNQLM", 1100.0, 0.0099999998, 3.4028235e38, 4u, "Distance from the player below which you can see enemy nameplates.  Overridden by weapon's Enemy Crosshair Range property if less.");
  DVARFLT_cg_friendlyNameplateAngle = Dvar_RegisterFloat("MLOSMPPQON", 65.0, 0.0, 180.0, 4u, "Angle from the view vector where friendly nameplates are visible (degrees).");
  DVARFLT_cg_friendlyNameplateDistance = Dvar_RegisterFloat("MMMMPLOOTN", 2200.0, 0.0099999998, 3.4028235e38, 4u, "Distance from the player below which you can see friendly nameplates");
  DVARBOOL_cg_friendlyNameplateSnapToEdge = Dvar_RegisterBool("TKKLKNNNO", 1, 4u, "If true, friendly nameplate chevrons are always visible and snap to the screen edge.");
  DVARBOOL_cg_friendlyReviveNameplateEnabled = Dvar_RegisterBool("LSSKOMTQKK", 1, 4u, "If true, friendly revive nameplates are visible above killed friendly players.");
  DVARBOOL_cg_playerNameplatesFastTrace = Dvar_RegisterBool("RQORKNQOO", 1, 4u, "If true, nameplate trace targets are approximated based on stance rather than pose evaluation.");
  DVARBOOL_cg_playerNameplatesFastPosition = Dvar_RegisterBool("LNQMQMSNSS", 1, 4u, "If true, offscreen nameplate positions are approximated based on stance rather than pose evaluation.");
  DVARFLT_cg_playerNameplatesFastFalloff = Dvar_RegisterFloat("LTRLMOOMPN", 200.0, 0.0, 3.4028235e38, 4u, "The distance off the screen where the nameplate blends out to use approximated position rather than pose");
  DVARFLT_cg_playerNameplatesFastTraceRootXOffset = Dvar_RegisterFloat("NNRRKPKNKR", -10.0, -50.0, 50.0, 4u, "When using fast traces, this value offsets the trace position to the root in the X direction");
  DCONST_DVARFLT_cg_playerNameplatesTextOutlineStrokeWidth = Dvar_RegisterFloat("cg_playerNameplatesTextOutlineStrokeWidth", 0.30000001, 0.0, 1.0, 0x40004u, "The width of the outline on the text displayed in the player nameplate.");
  DVARINT_cg_nameplateSettingOverride = Dvar_RegisterInt("NKMNSKNOQN", -1, -1, 10, 0, "This will override the nameplate setting that is set in the recipe for the gamemode.");
  DVARINT_cg_nameplateEnemyVisibleTimeout = Dvar_RegisterInt("QOPMSOTSM", 1000, 0, 10000, 0, "How long (in ms) after last seeing an enemy do we reset the 'enemyVisible' datamodel. Used for the contextual ping widget.");
  DCONST_DVARVEC4_cg_playerNameplatesFriendlyColor = Dvar_RegisterVec4("cg_playerNameplatesFriendlyColor", 0.4745, 0.85089999, 1.0, 1.0, 0.0, 1.0, 0x40004u, "The color for the friendly player nameplates.");
  DCONST_DVARVEC4_cg_playerNameplatesEnemyColor = Dvar_RegisterVec4("cg_playerNameplatesEnemyColor", 1.0, 0.1058, 0.062700003, 1.0, 0.0, 1.0, 0x40004u, "The color for the enemy player nameplates.");
  DCONST_DVARVEC4_cg_playerNameplatesTextOutlineColor = Dvar_RegisterVec4("cg_playerNameplatesTextOutlineColor", 0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 0x40004u, "The outline color of the text on the player nameplates.");
  DCONST_DVARVEC4_cg_playerNameplatesBountyIconColor = Dvar_RegisterVec4("cg_playerNameplatesBountyIconColor", 1.0, 1.0, 0.030999999, 1.0, 0.0, 1.0, 0x40004u, "The color of the bounty icons.");
  DCONST_DVARVEC4_cg_playerNameplatesDeuteranopiaFriendlyColor = Dvar_RegisterVec4("cg_playerNameplatesDeuteranopiaFriendlyColor", 0.0, 0.26274508, 0.627451, 1.0, 0.0, 1.0, 0x40004u, "The color for the friendly player nameplates.");
  DCONST_DVARVEC4_cg_playerNameplatesDeuteranopiaEnemyColor = Dvar_RegisterVec4("cg_playerNameplatesDeuteranopiaEnemyColor", 0.87843138, 0.81176472, 0.15294117, 1.0, 0.0, 1.0, 0x40004u, "The color for the enemy player nameplates.");
  DCONST_DVARFLT_cg_playerNameplatesNameOffsetX = Dvar_RegisterFloat("cg_playerNameplatesNameOffsetX", 2.0, -1000.0, 1000.0, 0x40004u, "The X offset of the player name relative to the right chevron.");
  DCONST_DVARFLT_cg_playerNameplatesNameOffsetY = Dvar_RegisterFloat("cg_playerNameplatesNameOffsetY", -2.0, -1000.0, 1000.0, 0x40004u, "The Y offset of the player name relative to the center of the chevron.");
  DCONST_DVARFLT_cg_playerNameplatesNameWrapWidth = Dvar_RegisterFloat("cg_playerNameplatesNameWrapWidth", 333.0, -1000.0, 1000.0, 0x40004u, "The wrap width of the player name. A long name will wrap past this width.");
  DCONST_DVARFLT_cg_playerNameplatesNameFontHeight = Dvar_RegisterFloat("cg_playerNameplatesNameFontHeight", 16.0, -1000.0, 1000.0, 0x40004u, "The font height of the player name.");
  DCONST_DVARFLT_cg_playerNameplatesNameTextWidth = Dvar_RegisterFloat("cg_playerNameplatesNameTextWidth", 16.0, -1000.0, 1000.0, 0x40004u, "The text width of the player name.");
  DCONST_DVARFLT_cg_playerNameplatesReviveNameOffsetX = Dvar_RegisterFloat("cg_playerNameplatesReviveNameOffsetX", -40.0, -1000.0, 1000.0, 0x40004u, "The X offset of the revive player name from the origin of the nameplate (top-left).");
  DCONST_DVARFLT_cg_playerNameplatesReviveNameOffsetY = Dvar_RegisterFloat("cg_playerNameplatesReviveNameOffsetY", 30.0, -1000.0, 1000.0, 0x40004u, "The Y offset of the revive player name from the origin of the nameplate (top-left).");
  DCONST_DVARFLT_cg_playerNameplatesReviveNameFontHeight = Dvar_RegisterFloat("cg_playerNameplatesReviveNameFontHeight", 18.0, -1000.0, 1000.0, 0x40004u, "The font height of the revive player name.");
  DCONST_DVARFLT_cg_playerNameplatesReviveNameTextWidth = Dvar_RegisterFloat("cg_playerNameplatesReviveNameTextWidth", 18.0, -1000.0, 1000.0, 0x40004u, "The text width of the revive player name.");
  DCONST_DVARFLT_cg_playerNameplatesRankOffsetX = Dvar_RegisterFloat("cg_playerNameplatesRankOffsetX", 6.0, -1000.0, 1000.0, 0x40004u, "The X offset of the rank number from the origin of the nameplate (top-left).");
  DCONST_DVARFLT_cg_playerNameplatesRankOffsetY = Dvar_RegisterFloat("cg_playerNameplatesRankOffsetY", 26.0, -1000.0, 1000.0, 0x40004u, "The Y offset of the rank number from the origin of the nameplate (top-left).");
  DCONST_DVARFLT_cg_playerNameplatesRankWrapWidth = Dvar_RegisterFloat("cg_playerNameplatesRankWrapWidth", 13.0, -1000.0, 1000.0, 0x40004u, "The wrap width of the rank number. A large number will wrap past this width.");
  DCONST_DVARFLT_cg_playerNameplatesRankFontHeight = Dvar_RegisterFloat("cg_playerNameplatesRankFontHeight", 12.0, -1000.0, 1000.0, 0x40004u, "The font height of the rank number.");
  DCONST_DVARFLT_cg_playerNameplatesPerkOffsetX = Dvar_RegisterFloat("cg_playerNameplatesPerkOffsetX", 1.0, -1000.0, 1000.0, 0x40004u, "The X offset of the perk icon from the origin of the nameplate (top-left).");
  DCONST_DVARFLT_cg_playerNameplatesPerkOffsetY = Dvar_RegisterFloat("cg_playerNameplatesPerkOffsetY", -13.0, -1000.0, 1000.0, 0x40004u, "The Y offset of the perk icon from the origin of the nameplate (top-left).");
  DCONST_DVARFLT_cg_playerNameplatesPerkWidth = Dvar_RegisterFloat("cg_playerNameplatesPerkWidth", 24.0, -1000.0, 1000.0, 0x40004u, "The width of the perk icon.");
  DCONST_DVARFLT_cg_playerNameplatesPerkHeight = Dvar_RegisterFloat("cg_playerNameplatesPerkHeight", 24.0, -1000.0, 1000.0, 0x40004u, "The height of the perk icon.");
  DCONST_DVARFLT_cg_playerNameplatesBountyOffsetX = Dvar_RegisterFloat("cg_playerNameplatesBountyOffsetX", 26.0, -1000.0, 1000.0, 0x40004u, "The X offset of the bounty icons from the origin of the nameplate (top-left).");
  DCONST_DVARFLT_cg_playerNameplatesBountyOffsetY = Dvar_RegisterFloat("cg_playerNameplatesBountyOffsetY", 13.0, -1000.0, 1000.0, 0x40004u, "The Y offset of the bounty icons from the origin of the nameplate (top-left).");
  DCONST_DVARFLT_cg_playerNameplatesBountyWidth = Dvar_RegisterFloat("cg_playerNameplatesBountyWidth", 16.0, -1000.0, 1000.0, 0x40004u, "The width of the bounty icon.");
  DCONST_DVARFLT_cg_playerNameplatesBountyHeight = Dvar_RegisterFloat("cg_playerNameplatesBountyHeight", 16.0, -1000.0, 1000.0, 0x40004u, "The height of the bounty icon.");
  DCONST_DVARFLT_cg_playerNameplatesDistanceOffsetY = Dvar_RegisterFloat("cg_playerNameplatesDistanceOffsetY", 15.0, -1000.0, 1000.0, 0x40004u, "The Y offset of the distance meter from the revive player name.");
  DCONST_DVARFLT_cg_playerNameplatesDistanceOffsetX = Dvar_RegisterFloat("cg_playerNameplatesDistanceOffsetX", 0.0, -1000.0, 1000.0, 0x40004u, "The X offset of the distance meter from the revive player name.");
  DCONST_DVARFLT_cg_playerNameplatesChevronOffsetX = Dvar_RegisterFloat("cg_playerNameplatesChevronOffsetX", 0.0, -1000.0, 1000.0, 0x40004u, "The X offset of the chevron icon from the origin of the nameplate (top-left).");
  DCONST_DVARFLT_cg_playerNameplatesChevronOffsetY = Dvar_RegisterFloat("cg_playerNameplatesChevronOffsetY", -75.0, -1000.0, 1000.0, 0x40004u, "The Y offset of the chevron icon from the origin of the nameplate (top-left).");
  DCONST_DVARFLT_cg_playerNameplatesChevronWidth = Dvar_RegisterFloat("cg_playerNameplatesChevronWidth", 14.0, -1000.0, 1000.0, 0x40004u, "The width of the chevron icon.");
  DCONST_DVARFLT_cg_playerNameplatesChevronHeight = Dvar_RegisterFloat("cg_playerNameplatesChevronHeight", 14.0, -1000.0, 1000.0, 0x40004u, "The height of the chevron icon.");
  DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetLeft = Dvar_RegisterFloat("cg_playerNameplatesRankIconOffsetLeft", 5.5, -1000.0, 1000.0, 0x40004u, "The X offset of the left edge of the rank icon from the origin of the nameplate (top-left).");
  DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetRight = Dvar_RegisterFloat("cg_playerNameplatesRankIconOffsetRight", 21.5, -1000.0, 1000.0, 0x40004u, "The X offset of the right edge of the rank icon from the origin of the nameplate (top-left).");
  DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetTop = Dvar_RegisterFloat("cg_playerNameplatesRankIconOffsetTop", -5.5, -1000.0, 1000.0, 0x40004u, "The Y offset of the top edge of the rank icon from the origin of the nameplate (top-left).");
  DCONST_DVARFLT_cg_playerNameplatesRankIconOffsetBottom = Dvar_RegisterFloat("cg_playerNameplatesRankIconOffsetBottom", 10.5, -1000.0, 1000.0, 0x40004u, "The Y offset of the bottom edge of the rank icon from the origin of the nameplate (top-left).");
  DCONST_DVARINT_cg_playerNameplatesFadeoutTime = Dvar_RegisterInt("cg_playerNameplatesFadeoutTime", 400, 0, 5000, 0x40004u, "How long does it take for the nameplates to fade out (in ms).");
  DVARBOOL_cg_playerNameplateOverlapCullingEnabled = Dvar_RegisterBool("MQKRLTMROM", 1, 4u, "If true, friendly nameplates that overlap other nameplates will be culled, this prevents confusion when trying to detect enemies.");
  DCONST_DVARFLT_cg_playerNameplateOverlapCullingWidth = Dvar_RegisterFloat("cg_playerNameplateOverlapCullingWidth", 60.0, 0.0, 1000.0, 0x40004u, "The approximate width of the nameplate when culling.");
  DCONST_DVARFLT_cg_playerNameplateViewHeightOffset = Dvar_RegisterFloat("cg_playerNameplateViewHeightOffset", 5.0, -1000.0, 1000.0, 0x40004u, "The height offset applied when approximating the screen position for the body/head of the target entity for rendering the nameplate");
  DCONST_DVARINT_cg_playerNameplateStateChangeDuration = Dvar_RegisterInt("cg_playerNameplateStateChangeDuration", 500, 1, 1000, 0x40004u, "The time in ms it takes for the character to change from prone to crounch/standing");
  DCONST_DVARBOOL_collAvoid_debug = Dvar_RegisterBool("collAvoid_debug", 0, 0x40004u, "Turn on collision avoidance debugging");
  DCONST_DVARINT_collAvoid_avoidType = Dvar_RegisterInt("collAvoid_avoidType", 1, 0, 10, 0x40004u, "Avoidance force type 0) off 1) linear 2) cmd correction");
  DCONST_DVARFLT_collAvoid_linearAccel = Dvar_RegisterFloat("collAvoid_linearAccel", 8.0, 0.0, 10000.0, 0x40004u, "Linear acceleration to avoid players");
  DCONST_DVARFLT_collAvoid_linearMinSpeed = Dvar_RegisterFloat("collAvoid_linearMinSpeed", 25.0, 0.0, 1000.0, 0x40004u, "Minimum speed when avoiding players");
  DCONST_DVARFLT_collAvoid_linearNearlyStoppedSpeed = Dvar_RegisterFloat("collAvoid_linearNearlyStoppedSpeed", 10.0, 0.0, 1000.0, 0x40004u, "Speed at which we consider players basically stopped");
  DCONST_DVARFLT_collAvoid_additionalAvoidDistance = Dvar_RegisterFloat("collAvoid_additionalAvoidDistance", 5.0, 0.0, 1000.0, 0x40004u, "Additional space between players before they overlap");
  DVARFLT_heli_barrelRotation = Dvar_RegisterFloat("LMPQKKQLKO", 70.0, -360.0, 360.0, 0, "How much to rotate the turret barrel when a helicopter fires");
  DVARFLT_heli_barrelMaxVelocity = Dvar_RegisterFloat("LOKMPRLNRL", 1250.0, -360.0, 3.4028235e38, 0, (const char *)&queryFormat.fmt + 3);
  DVARFLT_heli_barrelSlowdown = Dvar_RegisterFloat("NPRNKLTQOT", 360.0, -360.0, 3.4028235e38, 0, (const char *)&queryFormat.fmt + 3);
  DCONST_DVARFLT_heli_audioPriorityCullDistance = Dvar_RegisterFloat("heli_audioPriorityCullDistance", 20000.0, 0.0, 3.4028235e38, 0x40004u, "Helicopter audio is prioritized for helicopters within this range");
  DCONST_DVARINT_heli_audioPriorityCount = Dvar_RegisterInt("heli_audioPriorityCount", 2, 0, 32, 0x40004u, "Helicopter audio is prioritized for up to this many helicopters");
  DVARBOOL_cg_anticheat_dataCollectionEnabled = Dvar_RegisterBool("LPMPTNTKTP", 0, 0, "Enable cg anticheat data collection.");
  DCONST_DVARBOOL_cg_anticheat_debugDrawTargetThroughWalls = Dvar_RegisterBool("cg_anticheat_debugDrawTargetThroughWalls", 0, 0x40004u, "Enable debug drawing for target through walls");
  DCONST_DVARBOOL_cg_player_visibility_test_active = Dvar_RegisterBool("cg_player_visibility_test_active", 0, 0x40004u, "Enable cg_player_visibility test");
  DCONST_DVARBOOL_cg_player_visibility_test_getResultWithWait = Dvar_RegisterBool("cg_player_visibility_test_getResultWithWait", 0, 0x40004u, "When accessing results of cg_player_visibility test, call version with wait");
  DCONST_DVARFLT_cg_player_visibility_test_worldspacePadding = Dvar_RegisterFloat("cg_player_visibility_test_worldspacePadding", 0.0, 0.0, 3.4028235e38, 0x40004u, "World space padding for cg_player_visibility test");
  DCONST_DVARFLT_cg_player_visibility_test_extendedPitchAngle = Dvar_RegisterFloat("cg_player_visibility_test_extendedPitchAngle", 0.0, -3.4028235e38, 3.4028235e38, 0x40004u, "Extended pitch angle for cg_player_visibility test. NOTE: value will be clamped between 0 and 90 degrees. Unbounded to test clamping");
  DCONST_DVARFLT_cg_player_visibility_test_extendedYawAngle = Dvar_RegisterFloat("cg_player_visibility_test_extendedYawAngle", 0.0, -3.4028235e38, 3.4028235e38, 0x40004u, "Extended pitch angle for cg_player_visibility test. NOTE: value will be clamped between 0 and 180 degrees. Unbounded to test clamping");
}

/*
==============
CG_MainMP_RegisterGraphics
==============
*/
void CG_MainMP_RegisterGraphics(LocalClientNum_t localClientNum, const char *mapname, const char *gameType)
{
  __m256i v4; 
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
        __asm { vpxor   xmm0, xmm0, xmm0 }
        *(__m256i *)&cgMedia.objectiveBackgroundMission = v4;
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
  __int64 v2; 
  __int64 v4; 
  int RowCount; 
  __int64 v6; 
  int v7; 
  __int64 v8; 
  __int64 v9; 
  const char *v10; 
  const char *ColumnValueForRow; 
  signed __int64 v12; 
  char v13; 
  __int64 v14; 
  char v15; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  const char *v19; 
  __int64 v20; 
  __int64 v21; 

  v2 = vehDefIndex;
  if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 711, ASSERT_TYPE_ASSERT, (const char *)&stru_143C9A1A4.m_end, (const char *)&queryFormat, &stru_143C9A1A4) )
    __debugbreak();
  if ( !*name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 712, ASSERT_TYPE_ASSERT, "(name[0] != '\\0')", (const char *)&queryFormat, "name[0] != '\\0'") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x80 )
  {
    LODWORD(v20) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 713, ASSERT_TYPE_ASSERT, "(unsigned)( vehDefIndex ) < (unsigned)( 128 )", "vehDefIndex doesn't index MAX_VEHICLE_DEF_GAME_CACHE\n\t%i not in [0, %i)", v20, 128) )
      __debugbreak();
  }
  if ( !s_vehicleTable && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 714, ASSERT_TYPE_ASSERT, "(s_vehicleTable)", (const char *)&queryFormat, "s_vehicleTable") )
    __debugbreak();
  if ( lastVehDefIndex != (_DWORD)v2 )
  {
    lastVehDefIndex = v2;
    v4 = -1i64;
    RowCount = StringTable_GetRowCount(s_vehicleTable);
    v6 = -1i64;
    do
      ++v6;
    while ( name[v6] );
    v7 = 0;
    if ( RowCount > 0 )
    {
      v8 = (int)v6;
      v21 = (int)v6;
LABEL_18:
      v9 = v8;
      v10 = name;
      ColumnValueForRow = StringTable_GetColumnValueForRow(s_vehicleTable, v7, 1);
      if ( !ColumnValueForRow && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v12 = ColumnValueForRow - name;
      do
      {
        v13 = v10[v12];
        v14 = v9;
        v15 = *v10++;
        --v9;
        if ( !v14 )
          break;
        if ( v13 != v15 )
        {
          if ( ++v7 >= RowCount )
            return;
          v8 = v21;
          goto LABEL_18;
        }
      }
      while ( v13 );
      v16 = StringTable_GetColumnValueForRow(s_vehicleTable, v7, 2);
      do
        ++v4;
      while ( v16[v4] );
      if ( (_DWORD)v4 )
        cgMedia.compass.vehicleMediaArray[v2].displayName = v16;
      v17 = StringTable_GetColumnValueForRow(s_vehicleTable, v7, 3);
      if ( *v17 )
        cgMedia.compass.vehicleMediaArray[v2].pingIcon = Material_RegisterHandle(v17, IMAGE_TRACK_HUD);
      v18 = StringTable_GetColumnValueForRow(s_vehicleTable, v7, 6);
      if ( *v18 )
        cgMedia.compass.vehicleMediaArray[v2].miniIcon = Image_Register(v18, IMAGE_TRACK_HUD);
      v19 = StringTable_GetColumnValueForRow(s_vehicleTable, v7, 7);
      if ( *v19 )
        cgMedia.compass.vehicleMediaArray[v2].pingZOffset = (float)atoi(v19);
    }
  }
}

/*
==============
CG_MainMP_RegisterReplicatedDvars
==============
*/
void CG_MainMP_RegisterReplicatedDvars(void)
{
  char ActiveGameMode; 
  unsigned int v1; 
  char v2; 
  unsigned int v3; 
  bool v4; 
  unsigned int flags; 
  unsigned int v6; 
  unsigned int v7; 
  unsigned int v16; 
  unsigned int v23; 
  unsigned int v24; 
  char v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int v30; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned int v34; 

  DVARBOOL_cg_drawFriendlyNamesAlways = Dvar_RegisterBool("NKMOPQSPMO", 0, 0x8Cu, "Whether to always show friendly names in game (for certain gametypes)");
  DVARBOOL_cg_drawFriendlyHUDGrenades = Dvar_RegisterBool("LMQOKPRSML", 0, 0x8Cu, "Draw grenade warning indicators for friendly grenades (should be true if friendly-fire is enabled)");
  DVARBOOL_cg_deadChatWithTeam = Dvar_RegisterBool("SKNSKQTQR", 0, 0x14u, "If true, dead players can talk to living players on their team");
  DVARBOOL_cg_deadHearTeamLiving = Dvar_RegisterBool("OLKRNORMOQ", 0, 0x14u, "If true, dead players can hear living players on their team talk");
  DVARBOOL_cg_deadHearAllLiving = Dvar_RegisterBool("LTLQSKRKQM", 0, 0x14u, "If true, dead players can hear all living players talk");
  DVARBOOL_cg_deadChatWithDead = Dvar_RegisterBool("QKMSSSLPK", 0, 0x14u, "If true, dead players can all chat together, regardless of team");
  DVARBOOL_cg_everyoneHearsEveryone = Dvar_RegisterBool("LQKPQMPRQN", 0, 0x14u, "If true, all players can all chat together, regardless of team or death");
  DVARSTR_cg_objectiveText = Dvar_RegisterString("MSRPQTQOOK", (const char *)&queryFormat.fmt + 3, 0x14u, "Objective text for each client (legacy use of dvars, instead of server commands");
  DVARINT_ui_customGameModeSlot = Dvar_RegisterInt("NPSTLPMPSS", -1, -1, 9, 4u, "Holds the currently selected custom game mode slot. -1 means the current game mode is NOT custom.");
  DVARBOOL_cg_playersmp_CoarseCullSystem_Enable = Dvar_RegisterBool("OMNSNROMPQ", 1, 4u, "Killswitch for Players MP Coards Cull System");
  DVARFLT_cg_playersmp_CoarseCullSystem_SunShadowDist = Dvar_RegisterFloat("RLPNQQRPR", 2000.0, 0.0, 1000000.0, 4u, "Distance beyond which we don't check for sun shadows in the coars cull system");
  DVARFLT_playerCullDistHip = Dvar_RegisterFloat("MSPSTOSTTL", 12000.0, 0.0, 1000000.0, 4u, "Distance beyond which we don't render players at hipfire FOV");
  DVARFLT_playerCullDistMaxZoom = Dvar_RegisterFloat("LRSKLPRNOP", 32000.0, 0.0, 1000000.0, 4u, "Distance beyond which we don't render players at max zoom FOV");
  DVARBOOL_playerCulledDebugOverlay = Dvar_RegisterBool("NPPONOTRMM", 0, 0, "Enable the player culling debug overlay");
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  v1 = 4;
  if ( ActiveGameMode != 1 )
    v1 = 140;
  DVARBOOL_voice_proximity_team = Dvar_RegisterBool("LKTPRPKPMR", 0, v1, "Uses proximity checks to send voice to players on team but not in squad");
  v2 = Com_GameMode_GetActiveGameMode();
  v3 = 4;
  if ( v2 != 1 )
    v3 = 140;
  DVARBOOL_voice_proximity_enemy = Dvar_RegisterBool("LOSOOOTNMS", 0, v3, "Uses proximity checks to send voice to players on other team");
  v4 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  flags = 4;
  if ( !v4 )
    flags = 140;
  DVARINT_voice_proximity_radius = Dvar_RegisterInt("NNMLSMNTOQ", 1000, 0, 0x7FFFFFFF, flags, "Radius to check around the player for sending proximity voice, depends on voice_proximity_enabled dvar");
  v6 = 68;
  v7 = 68;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v7 = 20;
  _XMM9 = LODWORD(FLOAT_110_0);
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm6, xmm9, xmm10, xmm2
  }
  _XMM8 = LODWORD(FLOAT_0_59090906);
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm0, xmm8, xmm11, xmm2
  }
  DVARFLT_cg_fov = Dvar_RegisterFloat("QTSPTNLOL", 65.0, *(float *)&_XMM0, *(float *)&_XMM6, v7, "The field of view angle in degrees");
  v16 = 68;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v16 = 20;
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm
  {
    vpcmpeqd xmm2, xmm0, xmm1
    vblendvps xmm6, xmm9, xmm10, xmm2
  }
  _XMM0 = (unsigned __int8)Com_GameMode_GetActiveGameMode();
  __asm
  {
    vpcmpeqd xmm3, xmm0, xmm2
    vblendvps xmm0, xmm8, xmm11, xmm3
  }
  DVARFLT_cg_fov1 = Dvar_RegisterFloat("LQSSPMSRQK", 65.0, *(float *)&_XMM0, *(float *)&_XMM6, v16, "The field of view angle in degrees for the second local client");
  v4 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v23 = 64;
  v24 = 64;
  if ( !v4 )
    v24 = 20;
  DVARFLT_cg_fovScale = Dvar_RegisterFloat("NSSLSNKPN", 1.0, 0.2, 2.0, v24, "Scale applied to the field of view");
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v23 = 140;
  DVARBOOL_cg_drawCrosshair = Dvar_RegisterBool("LOPKSRNTTS", 1, v23, "Turn on weapon crosshair");
  v25 = Com_GameMode_GetActiveGameMode();
  v26 = 4;
  if ( v25 != 1 )
    v26 = 140;
  DVARBOOL_cg_drawCrosshairNames = Dvar_RegisterBool("LROTSRRQMQ", 1, v26, "Draw the name of an enemy under the crosshair");
  DVARBOOL_cg_drawCrosshairWhileSprinting = Dvar_RegisterBool("MKPOPRMKLL", 1, 4u, "Draws the hip crosshairs while sprinting");
  v4 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v27 = 68;
  if ( !v4 )
    v27 = 140;
  DVARFLT_compassMaxRange = Dvar_RegisterFloat("MKPRSSNNRO", 1500.0, 0.000099999997, 3.4028235e38, v27, "The maximum range from the player in world space that objects will be shown on the compass");
  v4 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v28 = 68;
  if ( !v4 )
    v28 = 140;
  DVARFLT_compassExpandedMaxRange = Dvar_RegisterFloat("MROTQQSMP", 2500.0, 0.000099999997, 3.4028235e38, v28, "The maximum range from the player in world space that objects will be shown on the compass when they have the EXPANDED_MINIMAP perk");
  v4 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v29 = 68;
  if ( !v4 )
    v29 = 140;
  DVARFLT_compassExpandedMaxRangeBR = Dvar_RegisterFloat("NQMONTLKNN", 5000.0, 0.000099999997, 3.4028235e38, v29, "The maximum range from the player in world space that objects will be shown on the compass when they have the EXPANDED_MINIMAP perk in Battle Royale");
  v4 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v30 = 68;
  if ( !v4 )
    v30 = 140;
  DVARVEC3_cg_defaultWindDir = Dvar_RegisterVec3("NTMMTOLQMQ", 1.0, 0.0, 0.0, -1.0, 1.0, v30, "IMPORTANT: Only applies in levels that do not have global wind.  Will be deprecated shortly.");
  v4 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v31 = 68;
  if ( !v4 )
    v31 = 140;
  DVARFLT_cg_defaultWindStrength = Dvar_RegisterFloat("NQTLPTNSSO", 1.0, 0.0, 600.0, v31, "IMPORTANT: Only applies in levels that do not have global wind.  Will be deprecated shortly. Scale of the global wind direction (inches/sec)");
  v4 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v32 = 68;
  if ( !v4 )
    v32 = 140;
  DVARFLT_cg_defaultWindAreaScale = Dvar_RegisterFloat("LQLSPQOPKM", 50.0, -100.0, 100.0, v32, "Scales distribution of wind motion");
  v4 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v33 = 68;
  if ( !v4 )
    v33 = 140;
  DVARFLT_cg_defaultWindAmplitudeScale = Dvar_RegisterFloat("MQPQKNPQOK", 1.0, -100.0, 100.0, v33, "Scales amplitude of wind wave motion");
  v4 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v34 = 68;
  if ( !v4 )
    v34 = 140;
  DVARFLT_cg_defaultWindFrequencyScale = Dvar_RegisterFloat("MRNRKKOPLN", 1.0, -100.0, 100.0, v34, "Scales frequency of wind wave motion");
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v6 = 140;
  DVARFLT_cg_defaultWindNoiseScale = Dvar_RegisterFloat("OLSKLTPPMR", 0.69999999, 0.0, 1.0, v6, "Scales conic noise of wind wave motion");
  DVARBOOL_ATClient_RemoteDebug = Dvar_RegisterBool("NRNQRLQKOR", 0, 0x14u, "Enable remote debug output for the automated client.");
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
  __int64 v5; 
  BgXModelHandle v6; 

  v3 = index;
  if ( !s_modelRegistrationCgs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 634, ASSERT_TYPE_ASSERT, "(s_modelRegistrationCgs != nullptr)", (const char *)&queryFormat, "s_modelRegistrationCgs != nullptr") )
    __debugbreak();
  if ( (_DWORD)v3 )
  {
    if ( (unsigned int)v3 < 0x800 )
      goto LABEL_10;
    LODWORD(v5) = v3;
    v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 636, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_modelRegistrationCgs->gameModels ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_modelRegistrationCgs->gameModels )\n\t%i not in [0, %i)", v5, 2048);
  }
  else
  {
    v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 635, ASSERT_TYPE_ASSERT, "(index != 0)", "%s\n\tShould be skipping the first 'default' model", "index != 0");
  }
  if ( v4 )
    __debugbreak();
LABEL_10:
  v6.assetType = ASSET_TYPE_XCOMPOSITEMODEL;
  v6.un.compositeModel = R_RegisterCompositeModel(compositeModelName);
  s_modelRegistrationCgs->gameModels[v3] = v6;
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
  __int64 v5; 
  BgXModelHandle v6; 

  v3 = index;
  if ( !s_modelRegistrationCgs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 608, ASSERT_TYPE_ASSERT, "(s_modelRegistrationCgs != nullptr)", (const char *)&queryFormat, "s_modelRegistrationCgs != nullptr") )
    __debugbreak();
  if ( (_DWORD)v3 )
  {
    if ( (unsigned int)v3 < 0x800 )
      goto LABEL_10;
    LODWORD(v5) = v3;
    v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 610, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( sizeof( *array_counter( s_modelRegistrationCgs->gameModels ) ) + 0 ) )", "index doesn't index ARRAY_COUNT( s_modelRegistrationCgs->gameModels )\n\t%i not in [0, %i)", v5, 2048);
  }
  else
  {
    v4 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 609, ASSERT_TYPE_ASSERT, "(index != 0)", "%s\n\tShould be skipping the first 'default' model", "index != 0");
  }
  if ( v4 )
    __debugbreak();
LABEL_10:
  v6.assetType = ASSET_TYPE_XMODEL;
  v6.un.compositeModel = (XCompositeModelDef *)R_RegisterModel(modelName);
  s_modelRegistrationCgs->gameModels[v3] = v6;
}

/*
==============
CG_MainMP_RewindKillcamEffects
==============
*/
void CG_MainMP_RewindKillcamEffects(LocalClientNum_t localClientNum, int deltaTime)
{
  __int64 v2; 
  cg_t *v4; 
  const CgSnapshotMP *NextSnap; 
  CgWeaponMap *v6; 
  ParticleManager *v7; 
  __int64 m_pFxSystem; 
  int v9; 
  __int64 v10; 
  entityState_t *v11; 
  int time; 
  entityType_s eType; 
  __int64 v14; 
  float v15; 
  const Weapon *Weapon; 
  FxCombinedDef v17; 
  const ParticleSystemDef *particleSystemDef; 
  const char *WeaponName; 
  const char *v20; 
  const FxCamera *v21; 
  __m128 v23; 
  int v26; 
  __m128 v28; 
  __m128 v32; 
  __int128 v36; 
  __m128 v40; 
  ParticleSystemHandle v43; 
  __int64 v44; 
  ParticleSystem *v45; 
  int v46; 
  __int64 spawnTimeMsec; 
  ParticleSystemFlags particleSystemFlags; 
  FxCamera *pCamera; 
  FxMarkSpawnData *pMarkSpawnData; 
  float *v51; 
  cg_t *LocalClientGlobals; 
  BgWeaponMap *v53; 
  __int64 v54; 
  ParticleManager *v55; 
  vec3_t dir; 
  float v57; 
  float v58; 
  float v59; 
  vec3_t dst; 
  float v61; 
  float v62; 
  float v63; 
  __m128 v64; 
  __m128 v; 
  __m128 v66; 
  __m128 v67; 
  __int128 v68; 
  float4 emitterPos; 
  vector3 emitterOrientationMat; 
  __int128 v71; 
  char output[1024]; 

  v2 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v4 = LocalClientGlobals;
  NextSnap = CG_SnapshotMP_GetNextSnap((const LocalClientNum_t)v2);
  if ( !CgWeaponMap::ms_instance[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v6 = CgWeaponMap::ms_instance[v2];
  v53 = v6;
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(spawnTimeMsec) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", spawnTimeMsec, 2) )
      __debugbreak();
  }
  v7 = &g_particleManager[v2];
  v55 = v7;
  m_pFxSystem = (__int64)v7->m_pFxSystem;
  v54 = m_pFxSystem;
  if ( !deltaTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1149, ASSERT_TYPE_ASSERT, "(deltaTime != 0)", (const char *)&queryFormat, "deltaTime != 0") )
    __debugbreak();
  if ( !NextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1150, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1151, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  Physics_WaitForAllCommandsToFinish();
  if ( v7->m_isRunning && m_pFxSystem )
  {
    ParticleManager::OnKillcamTransition(v7, (LocalClientNum_t)v2);
    FX_OnKillcamTransition((LocalClientNum_t)v2);
    if ( !deltaTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1166, ASSERT_TYPE_ASSERT, "(deltaTime != 0)", (const char *)&queryFormat, "deltaTime != 0") )
      __debugbreak();
    FX_RewindTo((LocalClientNum_t)v2, LocalClientGlobals->time, deltaTime);
    v9 = 0;
    if ( NextSnap->numEntities > 0 )
    {
      v10 = 0i64;
      do
      {
        v11 = &NextSnap->entities[v10];
        if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
          __debugbreak();
        if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&NextSnap->entities[v10].lerp.eFlags, ACTIVE, 0x16u) )
          goto LABEL_58;
        time = v4->time;
        if ( NextSnap->entities[v10].time2 < time || NextSnap->entities[v10].lerp.u.anonymous.data[0] > time )
          goto LABEL_58;
        eType = NextSnap->entities[v10].eType;
        if ( eType )
        {
          LODWORD(spawnTimeMsec) = eType;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1184, ASSERT_TYPE_ASSERT, "( ( es->eType == ET_GENERAL ) )", "( es->eType ) = %i", spawnTimeMsec) )
            __debugbreak();
        }
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( v11->number < (int)ComCharacterLimits::ms_gameData.m_clientCount )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          LODWORD(pMarkSpawnData) = ComCharacterLimits::ms_gameData.m_clientCount;
          LODWORD(pCamera) = v11->number;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1185, ASSERT_TYPE_ASSERT, "( es->number ) >= ( ComCharacterLimits::GetClientMaxCount() )", "%s >= %s\n\t%i, %i", "es->number", "ComCharacterLimits::GetClientMaxCount()", pCamera, pMarkSpawnData) )
            __debugbreak();
        }
        v14 = ((unsigned __int8)NextSnap->entities[v10].eventSequence.combined - 1) & 3;
        if ( (unsigned int)(v11->events[v14].eventType - 109) > 7 )
        {
          LODWORD(pCamera) = 116;
          LODWORD(particleSystemFlags) = 109;
          LODWORD(spawnTimeMsec) = v11->events[v14].eventType;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1187, ASSERT_TYPE_ASSERT, "( EV_GRENADE_EXPLODE ) <= ( es->events[eventIndex].eventType ) && ( es->events[eventIndex].eventType ) <= ( EV_CUSTOM_EXPLODE )", "es->events[eventIndex].eventType not in [EV_GRENADE_EXPLODE, EV_CUSTOM_EXPLODE]\n\t%i not in [%i, %i]", spawnTimeMsec, particleSystemFlags, pCamera) )
            __debugbreak();
        }
        ByteToDir(LOBYTE(v11->events[v14].eventParm), &dir);
        PerpendicularVector(&dir, &dst);
        v57 = (float)(dir.v[2] * dst.v[1]) - (float)(dir.v[1] * dst.v[2]);
        v58 = (float)(dst.v[2] * dir.v[0]) - (float)(dir.v[2] * dst.v[0]);
        v59 = (float)(dir.v[1] * dst.v[0]) - (float)(dst.v[1] * dir.v[0]);
        if ( (const CgSnapshotMP *)((char *)NextSnap + 248 * v10) == (const CgSnapshotMP *)-21468i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 248 * v10 + (_DWORD)NextSnap + 21575, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
          __debugbreak();
        if ( NextSnap->entities[v10].lerp.pos.trType == TR_LINEAR_STOP_SECURE )
        {
          v51 = &v61;
          LODWORD(v63) = s_trbase_aab_Z ^ LODWORD(NextSnap->entities[v10].lerp.pos.trBase.v[1]) ^ LODWORD(NextSnap->entities[v10].lerp.pos.trBase.v[2]);
          LODWORD(v62) = s_trbase_aab_Y ^ LODWORD(NextSnap->entities[v10].lerp.pos.trBase.v[1]) ^ LODWORD(NextSnap->entities[v10].lerp.pos.trBase.v[0]);
          LODWORD(v61) = LODWORD(NextSnap->entities[v10].lerp.pos.trBase.v[0]) ^ ~s_trbase_aab_X;
          memset(&v51, 0, sizeof(v51));
          *(float *)&v51 = v61;
          if ( (LODWORD(v61) & 0x7F800000) == 2139095040 || (*(float *)&v51 = v62, (LODWORD(v62) & 0x7F800000) == 2139095040) || (*(float *)&v51 = v63, (LODWORD(v63) & 0x7F800000) == 2139095040) )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
              __debugbreak();
          }
        }
        else
        {
          v15 = NextSnap->entities[v10].lerp.pos.trBase.v[1];
          v61 = NextSnap->entities[v10].lerp.pos.trBase.v[0];
          v63 = NextSnap->entities[v10].lerp.pos.trBase.v[2];
          v62 = v15;
        }
        Weapon = BgWeaponMap::GetWeapon(v53, NextSnap->entities[v10].weaponHandle);
        v17.particleSystemDef = BG_ProjExplosionEffect(Weapon, NextSnap->entities[v10].inAltWeaponMode).particleSystemDef;
        particleSystemDef = v17.particleSystemDef;
        if ( v17.particleSystemDef )
        {
          if ( (v17.particleSystemDef->flags & 0x800) == 0 )
            Com_PrintError(21, "Smoke grenade FX \"%s\" is not marked to be killed on killcam transition.  The effect may appear to stack multiple times in killcam.", v17.particleSystemDef->name);
          v21 = (const FxCamera *)(v54 + 96);
          v64.m128_i32[3] = 0;
          v23 = v64;
          v23.m128_f32[0] = v61;
          _XMM0 = v23;
          __asm
          {
            vinsertps xmm0, xmm0, [rbp+4B0h+var_510], 4B0h+emitterOrientationMat
            vinsertps xmm0, xmm0, [rbp+4B0h+var_50C], 4B0h+emitterOrientationMat.y
          }
          v.m128_i32[3] = 0;
          v66.m128_i32[3] = 0;
          HIDWORD(v68) = 0;
          v67.m128_i32[3] = 0;
          v64 = _XMM0;
          emitterPos.v = _XMM0;
          v26 = LocalClientGlobals->time;
          v28 = v;
          v28.m128_f32[0] = dir.v[0];
          _XMM3 = v28;
          __asm
          {
            vinsertps xmm3, xmm3, dword ptr [rsp+5B0h+dir+4], 4B0h+emitterOrientationMat
            vinsertps xmm3, xmm3, dword ptr [rbp+4B0h+dir+8], 4B0h+emitterOrientationMat.y
          }
          v = _XMM3.v;
          emitterOrientationMat.x = (float4)_XMM3.v;
          v32 = v66;
          v32.m128_f32[0] = v57;
          _XMM3 = v32;
          __asm
          {
            vinsertps xmm3, xmm3, [rbp+4B0h+var_528], 4B0h+emitterOrientationMat
            vinsertps xmm3, xmm3, [rbp+4B0h+var_524], 4B0h+emitterOrientationMat.y
          }
          v66 = _XMM3.v;
          emitterOrientationMat.y = (float4)_XMM3.v;
          v36 = v68;
          *(float *)&v36 = v61;
          _XMM2 = v36;
          __asm
          {
            vinsertps xmm2, xmm2, [rbp+4B0h+var_510], 4B0h+emitterOrientationMat
            vinsertps xmm2, xmm2, [rbp+4B0h+var_50C], 4B0h+emitterOrientationMat.y
          }
          v40 = v67;
          v40.m128_f32[0] = dst.v[0];
          _XMM3 = v40;
          __asm
          {
            vinsertps xmm3, xmm3, dword ptr [rbp+4B0h+dst+4], 4B0h+emitterOrientationMat
            vinsertps xmm3, xmm3, dword ptr [rbp+4B0h+dst+8], 4B0h+emitterOrientationMat.y
          }
          v68 = _XMM2;
          v71 = (_XMM2 ^ *(_OWORD *)&g_one.v) & *(_OWORD *)&g_keepW.v ^ _XMM2;
          v67 = _XMM3.v;
          emitterOrientationMat.z = (float4)_XMM3.v;
          v43 = ParticleManager::AddSystem(v55, (LocalClientNum_t)v2, particleSystemDef, &emitterPos, &emitterOrientationMat, v26, PARTICLE_SYSTEM_FLAG_AUTO_DELETE, (const FxCamera *)(v54 + 96), NULL);
          v44 = (v2 << 12) + (v43 & 0xFFF);
          if ( g_particleSystemsGeneration[v44].__all32 != v43 && v43 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 933, ASSERT_TYPE_ASSERT, "(g_particleSystemsGeneration[localClientNum][handleImpl._index].__all32 == handleImpl.__all32 || particleSystemHandle == PARTICLE_SYSTEM_INVALID_HANDLE)", (const char *)&queryFormat, "g_particleSystemsGeneration[localClientNum][handleImpl._index].__all32 == handleImpl.__all32 || particleSystemHandle == PARTICLE_SYSTEM_INVALID_HANDLE") )
            __debugbreak();
          v45 = g_particleSystems[0][v44];
          if ( v45 )
          {
            v46 = NextSnap->entities[v10].lerp.u.anonymous.data[0] - LocalClientGlobals->time;
            if ( v46 >= 0 )
            {
              v4 = LocalClientGlobals;
              goto LABEL_58;
            }
            ParticleSystem::PreRoll(v45, v46, v21);
          }
        }
        else
        {
          WeaponName = BG_GetWeaponName(Weapon, output, 0x400u);
          Com_PrintError(21, "Smoke grenade FX entity with no explosion effect (%s)", WeaponName);
          v20 = BG_GetWeaponName(Weapon, output, 0x400u);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 1203, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Smoke grenade FX entity with no explosion effect (%s)", v20) )
            __debugbreak();
        }
        v4 = LocalClientGlobals;
LABEL_58:
        ++v9;
        ++v10;
      }
      while ( v9 < NextSnap->numEntities );
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
  __int64 v2; 
  cg_t *LocalClientGlobals; 
  Weapon *p_weaponSelect; 
  int weaponSelectInAlt; 
  char *fmt; 
  __int64 v7; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v2 = v1;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
  LODWORD(v7) = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v1)->serverTimeDelta;
  LODWORD(fmt) = cls.realtime;
  Com_Printf(25, "CG_SaveMigrationPers: cgameGlob->time(%d), cgameGlob->oldTime(%d), cls.realtime(%d), serverTimeDelta(%d)\n", (unsigned int)LocalClientGlobals->time, (unsigned int)LocalClientGlobals->oldTime, fmt, v7);
  p_weaponSelect = &clientUIActives[v1].migrationPers.weaponSelect;
  *p_weaponSelect = LocalClientGlobals->weaponSelect;
  weaponSelectInAlt = LocalClientGlobals->weaponSelectInAlt;
  clientUIActives[v2].migrationPers.weaponSelectInAlt = weaponSelectInAlt;
  clientUIActives[v2].migrationPers.weaponSelectTime = LocalClientGlobals->weaponSelectTime;
  clientUIActives[v2].migrationPers.weaponForcedSelectTime = LocalClientGlobals->weaponForcedSelectTime;
  clientUIActives[v2].migrationPers.weaponLatestPrimary = LocalClientGlobals->weaponLatestPrimary;
  clientUIActives[v2].migrationPers.weaponPrevPrimary = LocalClientGlobals->weaponPrevPrimary;
  if ( weaponSelectInAlt && !BG_HasUnderbarrelAmmo(p_weaponSelect) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 2504, ASSERT_TYPE_ASSERT, "(!clM->weaponSelectInAlt || BG_HasUnderbarrelAmmo( clM->weaponSelect ))", (const char *)&queryFormat, "!clM->weaponSelectInAlt || BG_HasUnderbarrelAmmo( clM->weaponSelect )") )
    __debugbreak();
  clientUIActives[v2].migrationPers.holdBreathTime = LocalClientGlobals->holdBreathTime;
  clientUIActives[v2].migrationPers.holdBreathDelay = LocalClientGlobals->holdBreathDelay;
  clientUIActives[v2].migrationPers.holdBreathFrac = LocalClientGlobals->holdBreathFrac;
  CG_Blur_SaveMigrationPers((LocalClientNum_t)v1, &clientUIActives[v2].migrationPers.blurPers);
}

/*
==============
CG_MainMP_Shutdown
==============
*/
void CG_MainMP_Shutdown(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  CgGlobalsMP *LocalClientGlobals; 
  cgs_t *LocalClientStaticGlobals; 
  CgCompassSystemMP *CompassSystemMP; 
  int localServer; 
  CgPlayer_Asm *v6; 
  CgWeaponSystemMP *WeaponSystemMP; 
  CgClientSideEffectsSystemMP *ClientSideEffectsSystemMP; 
  __int64 v9; 
  __int64 v10; 

  v1 = localClientNum;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  SND_FadeAllSounds(1.0, 0);
  if ( !LocalClientGlobals->m_frontEndScene )
    SND_StopSounds(SND_KEEP_MUSIC);
  CG_FrontEndScene_Shutdown();
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v1);
  CG_Rumble_StopAll((LocalClientNum_t)v1);
  if ( !LocalClientStaticGlobals->localServer )
    Rumble_Shutdown();
  CG_Foliage_StartProcessCharacterEntityCmds();
  Sys_WaitWorkerCmdsOfType(WRKCMD_CG_FOLIAGE_PROCESSCHARACTERENTITY);
  Physics_WaitForAllCommandsToFinish();
  CG_Entity_PhysicsCheckPostAssetChangeEmpty((const LocalClientNum_t)v1);
  CG_Main_FreePhysics((LocalClientNum_t)v1);
  CG_Main_FreeRagdolls((LocalClientNum_t)v1);
  CG_PlayersMP_ResetClientWeaponVisibility((const LocalClientNum_t)v1);
  CG_PlayersMP_ResetPlayerBrCircleEffects();
  if ( Ragdoll_IsRegistered((LocalClientNum_t)v1) )
    Ragdoll_Unregister((LocalClientNum_t)v1);
  CG_Main_FreeCloth((LocalClientNum_t)v1);
  g_mapLoaded = 0;
  BG_ShutDownTurretAnims(0);
  cg_t::FreeViewModelHands(LocalClientGlobals);
  cg_t::FreePlayerLegs(LocalClientGlobals);
  CG_AnimTreeMP_FreeEntityDObjInfo((LocalClientNum_t)v1);
  Com_FreeWeaponInfoMemory(2);
  CG_ModelPreviewerDestroyDevGui();
  CG_CreateFx_DestroyDevGui();
  FX_Dismemberment_Shutdown((LocalClientNum_t)v1);
  FX_WaitKillAllEffects((LocalClientNum_t)v1, 1);
  FX_ShutdownSystem((LocalClientNum_t)v1);
  DynEntCl_Shutdown((LocalClientNum_t)v1);
  if ( !LUI_CoD_InFrontend() && !CG_GameInterface_ShutdownCompassSystem((LocalClientNum_t)v1) )
  {
    CompassSystemMP = CgCompassSystemMP::GetCompassSystemMP((const LocalClientNum_t)v1);
    CgCompassSystemMP::ShutdownCompass(CompassSystemMP);
  }
  ScriptableCl_Shutdown((const LocalClientNum_t)v1);
  CG_Particle_ClearParticleDeferredPhysics((LocalClientNum_t)v1, 0);
  CG_MainMP_FreeAnimTreeInstances((LocalClientNum_t)v1);
  CG_ClientCharacter_Shutdown((const LocalClientNum_t)v1);
  CG_ClientWeapon_Shutdown();
  CL_UIStreaming_Shutdown((const LocalClientNum_t)v1);
  CG_WeaponStreamingMP_Shutdown((const LocalClientNum_t)v1);
  CG_CustomizationStreamingMP_Shutdown((const LocalClientNum_t)v1);
  CG_PlayerFade_Shutdown((const LocalClientNum_t)v1);
  CG_WeaponFade_Shutdown((const LocalClientNum_t)v1);
  CG_CustomizationMP_Shutdown();
  CG_WorldStreaming_Shutdown((const LocalClientNum_t)v1);
  BG_WorldStreaming_Shutdown();
  CG_PlayerVisibilityMP_Shutdown((const LocalClientNum_t)v1);
  CG_ClientAntiCheatMP_Shutdown((const LocalClientNum_t)v1);
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
    v6 = CgPlayer_Asm::Singleton((const LocalClientNum_t)v1);
    BgPlayer_Asm::Shutdown(v6, localServer == 0);
  }
  if ( !LocalClientStaticGlobals->localServer )
    ASM_ReleaseAllHistoryObjects();
  WeaponSystemMP = CgWeaponSystemMP::GetWeaponSystemMP((const LocalClientNum_t)v1);
  CgWeaponSystemMP::ShutdownViewModel(WeaponSystemMP);
  CgGlobalsMP::ClearLocalClientGlobals((const LocalClientNum_t)v1);
  if ( LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_main_mp.cpp", 2390, ASSERT_TYPE_ASSERT, "(!cgameGlob->nextSnap)", (const char *)&queryFormat, "!cgameGlob->nextSnap") )
    __debugbreak();
  CgWeaponSystemMP::ClearWeaponSystem((const LocalClientNum_t)v1);
  CgEventSystemMP::ClearEventSystem((const LocalClientNum_t)v1);
  CgSoundSystemMP::ClearSoundSystem((const LocalClientNum_t)v1);
  CgDrawSystemMP::ClearDrawSystem((const LocalClientNum_t)v1);
  if ( !CG_GameInterface_ClearCompassSystem((LocalClientNum_t)v1) )
    CgCompassSystemMP::ClearCompassSystem((const LocalClientNum_t)v1);
  CgViewSystemMP::ClearViewSystem((const LocalClientNum_t)v1);
  CgStaticMP::ClearGameStatics((const LocalClientNum_t)v1);
  CgVehicleSystemMP::ClearVehicleSystem((const LocalClientNum_t)v1);
  CgTargetAssistMP::ClearInstance((const LocalClientNum_t)v1);
  CgPredictedEntitySystemMP::ClearSystem((const LocalClientNum_t)v1);
  CgBallisticsMP::ClearSystem((const LocalClientNum_t)v1);
  CgMissileMP::ClearSystem((const LocalClientNum_t)v1);
  if ( (_BYTE)CgClientSideEffectsSystem::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 388, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE)", "%s\n\tCgClientSideEffectsSystem::ClearClientSideEffectsSystemCommon: Trying to clear client-side effects system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE", 2, (unsigned __int8)CgClientSideEffectsSystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgClientSideEffectsSystem::ms_allocatedCount )
  {
    LODWORD(v10) = CgClientSideEffectsSystem::ms_allocatedCount;
    LODWORD(v9) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 389, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  CgClientSideEffectsSystem::ClearMemory(CgClientSideEffectsSystem::ms_cseSystemArray[v1]);
  SND_SubmixClearAllFromSource(SND_SUBMIX_TYPE_GAMECODE, 0.0);
  CG_ConsoleCmds_Unregister();
  CG_ConsoleCmdsMP_Unregister();
  BG_RadiantLiveEnable(0);
  ClientSideEffectsSystemMP = CgClientSideEffectsSystemMP::GetClientSideEffectsSystemMP((const LocalClientNum_t)v1);
  CgClientSideEffectsSystem::Shutdown(ClientSideEffectsSystemMP);
  CG_ShutdownClientSideTriggers((LocalClientNum_t)v1);
  CL_Keys_ClearStates((LocalClientNum_t)v1);
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

