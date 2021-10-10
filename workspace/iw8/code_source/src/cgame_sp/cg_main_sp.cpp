/*
==============
CG_MainSP_FreeClientMemory
==============
*/

void CG_MainSP_FreeClientMemory(void)
{
  ?CG_MainSP_FreeClientMemory@@YAXXZ();
}

/*
==============
CG_MainSP_Init
==============
*/

void __fastcall CG_MainSP_Init(const bool savegame)
{
  ?CG_MainSP_Init@@YAX_N@Z(savegame);
}

/*
==============
CG_MainSP_LoadScriptsAndAnims
==============
*/

void __fastcall CG_MainSP_LoadScriptsAndAnims(LocalClientNum_t localClientNum, HunkUser *hunkUser)
{
  ?CG_MainSP_LoadScriptsAndAnims@@YAXW4LocalClientNum_t@@PEAUHunkUser@@@Z(localClientNum, hunkUser);
}

/*
==============
CG_MainSP_AllocateClientMemory
==============
*/

void __fastcall CG_MainSP_AllocateClientMemory(HunkUser *hunkUser, const int maxLocalClients, const int maxClients, const int maxAgents)
{
  ?CG_MainSP_AllocateClientMemory@@YAXPEAUHunkUser@@HHH@Z(hunkUser, maxLocalClients, maxClients, maxAgents);
}

/*
==============
CG_MainSP_FreePlayerAnimTreeInstances
==============
*/

void __fastcall CG_MainSP_FreePlayerAnimTreeInstances(LocalClientNum_t localClientNum)
{
  ?CG_MainSP_FreePlayerAnimTreeInstances@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_MainSP_RegisterDvars
==============
*/

void CG_MainSP_RegisterDvars(void)
{
  ?CG_MainSP_RegisterDvars@@YAXXZ();
}

/*
==============
CG_MainSP_ReloadSpecificClientSideAnimationSystems
==============
*/

void CG_MainSP_ReloadSpecificClientSideAnimationSystems(void)
{
  ?CG_MainSP_ReloadSpecificClientSideAnimationSystems@@YAXXZ();
}

/*
==============
CG_MainSP_Shutdown
==============
*/

void CG_MainSP_Shutdown(void)
{
  ?CG_MainSP_Shutdown@@YAXXZ();
}

/*
==============
CG_MainSP_AllocXAnimClient
==============
*/

void *__fastcall CG_MainSP_AllocXAnimClient(unsigned __int64 size)
{
  return ?CG_MainSP_AllocXAnimClient@@YAPEAX_K@Z(size);
}

/*
==============
CG_MainSP_DeRegisterDvars
==============
*/

void CG_MainSP_DeRegisterDvars(void)
{
  ?CG_MainSP_DeRegisterDvars@@YAXXZ();
}

/*
==============
CG_MainSP_AllocXAnimClient
==============
*/
void *CG_MainSP_AllocXAnimClient(unsigned __int64 size)
{
  if ( !s_animHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_main_sp.cpp", 689, ASSERT_TYPE_ASSERT, "(s_animHunkUser)", (const char *)&queryFormat, "s_animHunkUser") )
    __debugbreak();
  return Mem_HunkUser_AllocInternal(s_animHunkUser, size, 8ui64, "CG_MainSP_AllocXAnimClient");
}

/*
==============
CG_MainSP_AllocateClientMemory
==============
*/
void CG_MainSP_AllocateClientMemory(HunkUser *hunkUser, const int maxLocalClients, const int maxClients, const int maxAgents)
{
  __int64 v4; 
  HunkUser *v5; 
  int v6; 
  __int64 v7; 
  CgStaticSP *v8; 
  int v9; 
  CgStatic **v10; 
  CgStatic *v11; 
  CgWeaponSystem *v12; 
  int v13; 
  CgWeaponSystem **v14; 
  unsigned __int64 v15; 
  CgEventSystem *v16; 
  int v17; 
  CgEventSystem **v18; 
  CgSoundSystem *v19; 
  int v20; 
  CgSoundSystem **v21; 
  CgDrawSystem *v22; 
  int v23; 
  CgDrawSystem **v24; 
  CgCompassSystemSP *v25; 
  int v26; 
  CgCompassSystem **v27; 
  CgCompassSystem *v28; 
  _DWORD *v29; 
  int v30; 
  CgEntitySystem **v31; 
  _DWORD *v32; 
  CgEntitySystem *v33; 
  centity_t *v34; 
  __int64 v35; 
  __int64 v36; 
  CgViewSystem *v37; 
  int v38; 
  CgViewSystem **v39; 
  CgVehicleSystemSP *v40; 
  int v41; 
  CgVehicleSystem **v42; 
  CgVehicleSystem *v43; 
  CgTargetAssistSP *v44; 
  int v45; 
  CgTargetAssist **v46; 
  CgTargetAssist *v47; 
  CgPredictedEntitySystem *v48; 
  int v49; 
  CgPredictedEntitySystem **v50; 
  CgPredictedEntity *m_entities; 
  __int64 v52; 
  CgMissileSP *v53; 
  int v54; 
  CgMissile **v55; 
  BgMissile *v56; 
  int v57; 
  CgClientSideEffectsSystem *v58; 
  CgClientSideEffectsSystem **v59; 
  __int64 v60; 
  __int64 v61; 
  __int64 v62; 
  __int64 v63; 
  int maxCharacters; 

  v4 = (unsigned int)maxLocalClients;
  v5 = hunkUser;
  maxCharacters = maxClients + maxAgents;
  ClConfigStrings::AllocateMemory<ClConfigStringsSP>(hunkUser);
  CgDynamicMedia::AllocateMemory<CgDynamicMediaSP>(v5);
  if ( (_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 134, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the game statics but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", (unsigned __int8)CgStatic::ms_allocatedType) )
    __debugbreak();
  v6 = 0;
  if ( (unsigned int)v4 > 2 )
  {
    LODWORD(v61) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 135, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v61, 0i64, 2) )
      __debugbreak();
  }
  v7 = (int)v4;
  v8 = (CgStaticSP *)Mem_HunkUser_AllocInternal(v5, 19568i64 * (int)v4, 8ui64, "CgStatic::AllocateGameStaticsCommon");
  v9 = 0;
  if ( (int)v4 > 0 )
  {
    v10 = CgStatic::ms_cgameStaticsArray;
    do
    {
      if ( *v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 145, ASSERT_TYPE_ASSERT, "(!ms_cgameStaticsArray[localClientIndex])", (const char *)&queryFormat, "!ms_cgameStaticsArray[localClientIndex]") )
        __debugbreak();
      CgStaticSP::CgStaticSP(v8, (const LocalClientNum_t)v9);
      *v10 = v11;
      ++v9;
      ++v8;
      ++v10;
    }
    while ( v9 < (int)v4 );
    v7 = (int)v4;
  }
  LODWORD(CgStatic::ms_allocatedCount) = v4;
  LOBYTE(CgStatic::ms_allocatedType) = 1;
  CgGlobalsSP::AllocateLocalClientGlobals(v5, v4);
  CgStaticGlobalsSP::AllocateLocalClientStaticGlobals(v5, v4);
  if ( CgWeaponSystem::ms_allocatedType )
  {
    LODWORD(v62) = CgWeaponSystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 554, ASSERT_TYPE_ASSERT, "(ms_allocatedType == CgWeaponsType::WEAPONS_TYPE_NONE)", "%s\n\tTrying to allocate the weapon system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == CgWeaponsType::WEAPONS_TYPE_NONE", v62) )
      __debugbreak();
  }
  if ( (unsigned int)v4 > 2 )
  {
    LODWORD(v63) = 2;
    LODWORD(v61) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 555, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v61, 0i64, v63) )
      __debugbreak();
  }
  v12 = (CgWeaponSystem *)Mem_HunkUser_AllocInternal(v5, 5600 * v7, 8ui64, "CgWeaponSystem::AllocateWeaponSystemCommon");
  memset_0(v12, 0, 5600 * v7);
  v13 = 0;
  if ( (int)v4 > 0 )
  {
    v14 = CgWeaponSystem::ms_weaponSystemArray;
    do
    {
      if ( *v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 565, ASSERT_TYPE_ASSERT, "(!ms_weaponSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_weaponSystemArray[localClientIndex]") )
        __debugbreak();
      v12->__vftable = (CgWeaponSystem_vtbl *)&CgWeaponSystem::`vftable';
      v12->m_localClientNum = v13;
      v12->m_numBulletDebugLines = 0;
      v12->m_nextBulletId = 0;
      v12->__vftable = (CgWeaponSystem_vtbl *)&CgWeaponSystemSP::`vftable';
      *v14 = v12;
      ++v13;
      v12 = (CgWeaponSystem *)((char *)v12 + 5600);
      ++v14;
    }
    while ( v13 < (int)v4 );
    v5 = hunkUser;
    v7 = (int)v4;
  }
  CgWeaponSystem::ms_allocatedCount = v4;
  CgWeaponSystem::ms_allocatedType = WEAPONS_TYPE_SP;
  if ( (_BYTE)CgEventSystem::ms_allocatedType )
  {
    LODWORD(v62) = (unsigned __int8)CgEventSystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 248, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the event system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v62) )
      __debugbreak();
  }
  if ( (unsigned int)v4 > 2 )
  {
    LODWORD(v63) = 2;
    LODWORD(v61) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 249, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v61, 0i64, v63) )
      __debugbreak();
  }
  v15 = 16 * v7;
  v16 = (CgEventSystem *)Mem_HunkUser_AllocInternal(v5, 16 * v7, 8ui64, "CgEventSystem::AllocateEventSystemCommon");
  memset_0(v16, 0, 16 * v7);
  v17 = 0;
  if ( (int)v4 > 0 )
  {
    v18 = CgEventSystem::ms_eventSystemArray;
    do
    {
      if ( *v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 259, ASSERT_TYPE_ASSERT, "(!ms_eventSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_eventSystemArray[localClientIndex]") )
        __debugbreak();
      v16->m_localClientNum = v17;
      v16->__vftable = (CgEventSystem_vtbl *)&CgEventSystemSP::`vftable';
      *v18 = v16;
      ++v17;
      ++v16;
      ++v18;
    }
    while ( v17 < (int)v4 );
    v5 = hunkUser;
    v7 = (int)v4;
  }
  CgEventSystem::ms_allocatedCount = v4;
  LOBYTE(CgEventSystem::ms_allocatedType) = 1;
  if ( (_BYTE)CgSoundSystem::ms_allocatedType )
  {
    LODWORD(v62) = (unsigned __int8)CgSoundSystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 203, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the sound system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v62) )
      __debugbreak();
  }
  if ( (unsigned int)v4 > 2 )
  {
    LODWORD(v63) = 2;
    LODWORD(v61) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 204, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v61, 0i64, v63) )
      __debugbreak();
  }
  v19 = (CgSoundSystem *)Mem_HunkUser_AllocInternal(v5, v15, 8ui64, "CgSoundSystem::AllocateSoundSystemCommon");
  memset_0(v19, 0, v15);
  v20 = 0;
  if ( (int)v4 > 0 )
  {
    v21 = CgSoundSystem::ms_soundSystemArray;
    do
    {
      if ( *v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 214, ASSERT_TYPE_ASSERT, "(!ms_soundSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_soundSystemArray[localClientIndex]") )
        __debugbreak();
      v19->m_localClientNum = v20;
      v19->__vftable = (CgSoundSystem_vtbl *)&CgSoundSystemSP::`vftable';
      *v21 = v19;
      ++v20;
      ++v19;
      ++v21;
    }
    while ( v20 < (int)v4 );
    v5 = hunkUser;
    v7 = (int)v4;
  }
  CgSoundSystem::ms_allocatedCount = v4;
  LOBYTE(CgSoundSystem::ms_allocatedType) = 1;
  if ( (_BYTE)CgDrawSystem::ms_allocatedType )
  {
    LODWORD(v62) = (unsigned __int8)CgDrawSystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 200, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the draw system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v62) )
      __debugbreak();
  }
  if ( (unsigned int)v4 > 2 )
  {
    LODWORD(v63) = 2;
    LODWORD(v61) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 201, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v61, 0i64, v63) )
      __debugbreak();
  }
  v22 = (CgDrawSystem *)Mem_HunkUser_AllocInternal(v5, 32 * v7, 8ui64, "CgDrawSystem::AllocateDrawSystemCommon");
  memset_0(v22, 0, 32 * v7);
  v23 = 0;
  if ( (int)v4 > 0 )
  {
    v24 = CgDrawSystem::ms_drawSystemArray;
    do
    {
      if ( *v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 211, ASSERT_TYPE_ASSERT, "(!ms_drawSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_drawSystemArray[localClientIndex]") )
        __debugbreak();
      v22->m_localClientNum = v23;
      v22->__vftable = (CgDrawSystem_vtbl *)&CgDrawSystemSP::`vftable';
      *v24 = v22;
      ++v23;
      v22 += 2;
      ++v24;
    }
    while ( v23 < (int)v4 );
    v5 = hunkUser;
    v7 = (int)v4;
  }
  CgDrawSystem::ms_allocatedCount = v4;
  LOBYTE(CgDrawSystem::ms_allocatedType) = 1;
  if ( (_BYTE)CgCompassSystem::ms_allocatedType )
  {
    LODWORD(v62) = (unsigned __int8)CgCompassSystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 599, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the compass system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v62) )
      __debugbreak();
  }
  if ( (unsigned int)v4 > 2 )
  {
    LODWORD(v63) = 2;
    LODWORD(v61) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 600, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v61, 0i64, v63) )
      __debugbreak();
  }
  v25 = (CgCompassSystemSP *)Mem_HunkUser_AllocInternal(v5, 6712 * v7, 8ui64, "CgCompassSystem::AllocateCompassSystemCommon");
  memset_0(v25, 0, 6712 * v7);
  v26 = 0;
  if ( (int)v4 > 0 )
  {
    v27 = CgCompassSystem::ms_compassSystemArray;
    do
    {
      if ( *v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 610, ASSERT_TYPE_ASSERT, "(!ms_compassSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_compassSystemArray[localClientIndex]") )
        __debugbreak();
      CgCompassSystemSP::CgCompassSystemSP(v25, (const LocalClientNum_t)v26);
      *v27 = v28;
      ++v26;
      ++v25;
      ++v27;
    }
    while ( v26 < (int)v4 );
    v5 = hunkUser;
  }
  CgCompassSystem::ms_allocatedCount = v4;
  LOBYTE(CgCompassSystem::ms_allocatedType) = 1;
  if ( (_BYTE)CgEntitySystem::ms_allocatedType )
  {
    LODWORD(v62) = (unsigned __int8)CgEntitySystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 312, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the entity system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v62) )
      __debugbreak();
  }
  if ( (unsigned int)v4 > 2 )
  {
    LODWORD(v63) = 2;
    LODWORD(v61) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 313, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v61, 0i64, v63) )
      __debugbreak();
  }
  v29 = Mem_HunkUser_AllocInternal(v5, 2140000 * v7, 8ui64, "CgEntitySystem::AllocateEntitySystemCommon");
  memset_0(v29, 0, 2140000 * v7);
  v30 = 0;
  if ( (int)v4 > 0 )
  {
    v31 = CgEntitySystem::ms_entitySystemArray;
    v32 = v29 + 395268;
    do
    {
      if ( *v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 323, ASSERT_TYPE_ASSERT, "(!ms_entitySystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_entitySystemArray[localClientIndex]") )
        __debugbreak();
      v33 = (CgEntitySystem *)(v32 - 395268);
      *((_QWORD *)v32 - 197634) = &CgEntitySystem::`vftable';
      *(v32 - 395266) = v30;
      v34 = (centity_t *)(v32 - 395264);
      v35 = 2048i64;
      do
      {
        centity_t::centity_t(v34++);
        --v35;
      }
      while ( v35 );
      v32[24] = 0;
      memset_0(v32, 0, 0x60ui64);
      v33->__vftable = (CgEntitySystem_vtbl *)&CgEntitySystemSP::`vftable';
      *v31 = v33;
      ++v30;
      v32 += 535000;
      ++v31;
    }
    while ( v30 < (int)v4 );
    v5 = hunkUser;
  }
  CgEntitySystem::ms_allocatedCount = v4;
  LOBYTE(CgEntitySystem::ms_allocatedType) = 1;
  CG_EntityWorkers_CreateRWLock_Physics();
  if ( (_BYTE)CgViewSystem::ms_allocatedType )
  {
    LODWORD(v62) = (unsigned __int8)CgViewSystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 291, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the view system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v62) )
      __debugbreak();
  }
  if ( (unsigned int)v4 > 2 )
  {
    LODWORD(v63) = 2;
    LODWORD(v61) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 292, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v61, 0i64, v63) )
      __debugbreak();
  }
  v36 = (int)v4;
  v37 = (CgViewSystem *)Mem_HunkUser_AllocInternal(v5, 104i64 * (int)v4, 8ui64, "CgViewSystem::AllocateViewSystemCommon");
  memset_0(v37, 0, 104i64 * (int)v4);
  v38 = 0;
  if ( (int)v4 > 0 )
  {
    v39 = CgViewSystem::ms_viewSystemArray;
    do
    {
      if ( *v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 302, ASSERT_TYPE_ASSERT, "(!ms_viewSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_viewSystemArray[localClientIndex]") )
        __debugbreak();
      v37->m_localClientNum = v38;
      memset_0(&v37->m_viewKickState, 0, sizeof(v37->m_viewKickState));
      v37->__vftable = (CgViewSystem_vtbl *)&CgViewSystemSP::`vftable';
      *v39 = v37;
      ++v38;
      ++v37;
      ++v39;
    }
    while ( v38 < (int)v4 );
    v5 = hunkUser;
    v36 = (int)v4;
  }
  CgViewSystem::ms_allocatedCount = v4;
  LOBYTE(CgViewSystem::ms_allocatedType) = 1;
  if ( (_BYTE)CgVehicleSystem::ms_allocatedType )
  {
    LODWORD(v62) = (unsigned __int8)CgVehicleSystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 430, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the vehicle system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v62) )
      __debugbreak();
  }
  if ( (unsigned int)v4 > 2 )
  {
    LODWORD(v63) = 2;
    LODWORD(v61) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 431, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v61, 0i64, v63) )
      __debugbreak();
  }
  v40 = (CgVehicleSystemSP *)Mem_HunkUser_AllocInternal(v5, 1152280 * v36, 8ui64, "CgVehicleSystem::AllocateVehicleSystemCommon");
  memset_0(v40, 0, 1152280 * v36);
  v41 = 0;
  if ( (int)v4 > 0 )
  {
    v42 = CgVehicleSystem::ms_vehicleSystemArray;
    do
    {
      if ( *v42 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 441, ASSERT_TYPE_ASSERT, "(!ms_vehicleSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_vehicleSystemArray[localClientIndex]") )
        __debugbreak();
      CgVehicleSystemSP::CgVehicleSystemSP(v40, (const LocalClientNum_t)v41);
      *v42 = v43;
      ++v41;
      ++v40;
      ++v42;
    }
    while ( v41 < (int)v4 );
    v36 = (int)v4;
  }
  CgVehicleSystem::ms_allocatedCount = v4;
  LOBYTE(CgVehicleSystem::ms_allocatedType) = 1;
  CGMovingPlatformsSP::AllocateMovingPlatformSystem(v5);
  CgWeaponMap::Allocate(v5, v4);
  CgAntiLagSP::Allocate(v5, v4);
  if ( (_BYTE)CgTargetAssist::ms_allocatedType )
  {
    LODWORD(v62) = (unsigned __int8)CgTargetAssist::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 97, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the target assist system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v62) )
      __debugbreak();
  }
  if ( (unsigned int)v4 > 2 )
  {
    LODWORD(v63) = 2;
    LODWORD(v61) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 98, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v61, 0i64, v63) )
      __debugbreak();
  }
  v44 = (CgTargetAssistSP *)Mem_HunkUser_AllocInternal(v5, 824 * v36, 8ui64, "CgTargetAssist::AllocateInstanceCommon");
  memset_0(v44, 0, 824 * v36);
  v45 = 0;
  if ( (int)v4 > 0 )
  {
    v46 = CgTargetAssist::ms_instances;
    do
    {
      if ( *v46 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 108, ASSERT_TYPE_ASSERT, "(!ms_instances[localClientIndex])", (const char *)&queryFormat, "!ms_instances[localClientIndex]") )
        __debugbreak();
      CgTargetAssistSP::CgTargetAssistSP(v44, (const LocalClientNum_t)v45);
      *v46 = v47;
      ++v45;
      ++v44;
      ++v46;
    }
    while ( v45 < (int)v4 );
    v5 = hunkUser;
  }
  CgTargetAssist::ms_allocatedCount = v4;
  LOBYTE(CgTargetAssist::ms_allocatedType) = 1;
  if ( (_BYTE)CgPredictedEntitySystem::ms_allocatedType )
  {
    LODWORD(v62) = (unsigned __int8)CgPredictedEntitySystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 244, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the predicted entity system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v62) )
      __debugbreak();
  }
  if ( (unsigned int)v4 > 2 )
  {
    LODWORD(v63) = 2;
    LODWORD(v61) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 245, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v61, 0i64, v63) )
      __debugbreak();
  }
  v48 = (CgPredictedEntitySystem *)Mem_HunkUser_AllocInternal(v5, 29224 * v36, 8ui64, "CgPredictedEntitySystem::AllocateSystemCommon");
  memset_0(v48, 0, 29224 * v36);
  v49 = 0;
  if ( (int)v4 > 0 )
  {
    v50 = CgPredictedEntitySystem::ms_systemsArray;
    do
    {
      if ( *v50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 255, ASSERT_TYPE_ASSERT, "(!ms_systemsArray[localClientIndex])", (const char *)&queryFormat, "!ms_systemsArray[localClientIndex]") )
        __debugbreak();
      BgPredictedEntitySystem::BgPredictedEntitySystem(v48);
      v48->__vftable = (CgPredictedEntitySystem_vtbl *)&CgPredictedEntitySystem::`vftable';
      v48->m_localClientNum = v49;
      v48->m_numEntities = 0;
      m_entities = v48->m_entities;
      v52 = 32i64;
      do
      {
        CgPredictedEntity::CgPredictedEntity(m_entities++);
        --v52;
      }
      while ( v52 );
      v48->m_firstFreeEntity = NULL;
      v48->m_lastFreeEntity = NULL;
      v48->__vftable = (CgPredictedEntitySystem_vtbl *)&CgPredictedEntitySystemSP::`vftable';
      *v50 = v48;
      ++v49;
      ++v48;
      ++v50;
    }
    while ( v49 < (int)v4 );
    v5 = hunkUser;
    v36 = (int)v4;
  }
  CgPredictedEntitySystem::ms_allocatedCount = v4;
  LOBYTE(CgPredictedEntitySystem::ms_allocatedType) = 1;
  CgBallistics::AllocateSystemCommon<CgBallisticsSP>(v5, v4);
  if ( (_BYTE)CgMissile::ms_allocatedType )
  {
    LODWORD(v62) = (unsigned __int8)CgMissile::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 297, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the missile system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v62) )
      __debugbreak();
  }
  if ( (unsigned int)v4 > 2 )
  {
    LODWORD(v63) = 2;
    LODWORD(v61) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 298, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v61, 0i64, v63) )
      __debugbreak();
  }
  v53 = (CgMissileSP *)Mem_HunkUser_AllocInternal(v5, 40 * v36, 8ui64, "CgMissile::AllocateSystemCommon");
  memset_0(v53, 0, 40 * v36);
  v54 = 0;
  if ( (int)v4 > 0 )
  {
    v55 = CgMissile::ms_systemsArray;
    do
    {
      if ( *v55 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 308, ASSERT_TYPE_ASSERT, "(!ms_systemsArray[localClientIndex])", (const char *)&queryFormat, "!ms_systemsArray[localClientIndex]") )
        __debugbreak();
      CgMissileSP::CgMissileSP(v53, (const LocalClientNum_t)v54);
      *v55 = (CgMissile *)v56;
      BgMissile::SRand(v56, 0x89ABCDEF);
      ++v54;
      ++v53;
      ++v55;
    }
    while ( v54 < (int)v4 );
    v36 = (int)v4;
  }
  CgMissile::ms_allocatedCount = v4;
  LOBYTE(CgMissile::ms_allocatedType) = 1;
  v57 = maxCharacters;
  CgPlayer_Asm::AllocateMemory(v5, v4, maxCharacters);
  if ( (_BYTE)CgClientSideEffectsSystem::ms_allocatedType )
  {
    LODWORD(v62) = (unsigned __int8)CgClientSideEffectsSystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 334, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE)", "%s\n\tTrying to allocate the client-side effects system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE", v62) )
      __debugbreak();
  }
  if ( (unsigned int)v4 > 2 )
  {
    LODWORD(v63) = 2;
    LODWORD(v61) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 335, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v61, 0i64, v63) )
      __debugbreak();
  }
  v58 = (CgClientSideEffectsSystem *)Mem_HunkUser_AllocInternal(v5, 80064 * v36, 8ui64, "CgClientSideEffectsSystem::AllocateClientSideEffectsSystemCommon");
  memset_0(v58, 0, 80064 * v36);
  if ( (int)v4 > 0 )
  {
    v59 = CgClientSideEffectsSystem::ms_cseSystemArray;
    do
    {
      if ( *v59 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 345, ASSERT_TYPE_ASSERT, "(!ms_cseSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_cseSystemArray[localClientIndex]") )
        __debugbreak();
      v58->m_localClientNum = v6;
      v58->__vftable = (CgClientSideEffectsSystem_vtbl *)&CgClientSideEffectsSystemSP::`vftable';
      *v59 = v58;
      CgClientSideEffectsSystem::AllocateMemory(v58, v5);
      ++v6;
      ++v58;
      ++v59;
    }
    while ( v6 < (int)v4 );
    v36 = (int)v4;
    v57 = maxCharacters;
  }
  CgClientSideEffectsSystem::ms_allocatedCount = v4;
  LOBYTE(CgClientSideEffectsSystem::ms_allocatedType) = 1;
  CG_SnapshotSP_AllocateSnapshots(v5, v4);
  CG_AllocLocalClientEntities(v5, v4);
  aaGlobArray = (AimAssistGlobals *)Mem_HunkUser_AllocInternal(v5, 3616 * v36, 0x10ui64, "AimAssist_AllocateClientMemory");
  if ( ((unsigned __int8)aaGlobArray & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.h", 170, ASSERT_TYPE_SANITY, "( ( ( (uintptr_t)aaGlobArray ) & 15 ) == 0 )", (const char *)&queryFormat, "( ( (uintptr_t)aaGlobArray ) & 15 ) == 0") )
    __debugbreak();
  if ( (int)v4 > 0 )
  {
    v60 = v4;
    do
    {
      if ( ((unsigned __int8)aaGlobArray & 0xF) != 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.h", 175, ASSERT_TYPE_SANITY, "( ( ( (uintptr_t)&aaGlobArray[localClientIndex].screenMtx ) & 15 ) == 0 )", (const char *)&queryFormat, "( ( (uintptr_t)&aaGlobArray[localClientIndex].screenMtx ) & 15 ) == 0") )
          __debugbreak();
        if ( ((unsigned __int8)aaGlobArray & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\aim_assist\\aim_assist.h", 176, ASSERT_TYPE_SANITY, "( ( ( (uintptr_t)&aaGlobArray[localClientIndex].invScreenMtx ) & 15 ) == 0 )", (const char *)&queryFormat, "( ( (uintptr_t)&aaGlobArray[localClientIndex].invScreenMtx ) & 15 ) == 0") )
          __debugbreak();
      }
      --v60;
    }
    while ( v60 );
  }
  CG_Glass_AllocateMemory(v5);
  CG_GameInterface_OnAllocateGameMemory(v5, v4);
  Scriptable_Bg_InitClientEventStream(v5, v4, v57);
  DynEnt_AllocateClientMemory(v5, v4);
  cg_maxLocalClients = v4;
}

/*
==============
CG_MainSP_CreatePlayerAnimTreeInstances
==============
*/
void CG_MainSP_CreatePlayerAnimTreeInstances(LocalClientNum_t localClientNum)
{
  CgStatic *LocalClientStatics; 
  __int64 v3; 
  XAnim_s *v4; 
  cg_t *LocalClientGlobals; 
  XAnimOwner v6; 
  characterInfo_t *CharacterInfo; 
  XAnimTree *Tree; 
  __int64 v9; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && (!PlayerASM_IsEnabled() || !PlayerASM_IsConnectingPaths()) )
  {
    LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
    v3 = (__int64)LocalClientStatics->GetAnimStatics(LocalClientStatics);
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_main_sp.cpp", 526, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
      __debugbreak();
    v4 = *(XAnim_s **)(v3 + 17712);
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
    {
      if ( !LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
      {
        LODWORD(v9) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v9, 0) )
          __debugbreak();
      }
      CharacterInfo = (characterInfo_t *)LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62];
    }
    else
    {
      CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, 0);
    }
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_main_sp.cpp", 533, ASSERT_TYPE_ASSERT, "(ci != nullptr)", (const char *)&queryFormat, "ci != nullptr") )
      __debugbreak();
    if ( CharacterInfo->pXAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_main_sp.cpp", 534, ASSERT_TYPE_ASSERT, "(ci->pXAnimTree == nullptr)", (const char *)&queryFormat, "ci->pXAnimTree == nullptr") )
      __debugbreak();
    LOBYTE(v6) = 1;
    Tree = XAnimCreateTree(v4, CG_MainSP_AllocXAnimClient, v6);
    CharacterInfo->pXAnimTree = Tree;
    if ( !Tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_main_sp.cpp", 539, ASSERT_TYPE_ASSERT, "(ci->pXAnimTree)", (const char *)&queryFormat, "ci->pXAnimTree") )
      __debugbreak();
    Com_Printf(16, "Allocate client animtree (%p) for character %d\n", CharacterInfo->pXAnimTree, 0i64);
  }
}

/*
==============
CG_MainSP_DeRegisterDvars
==============
*/
void CG_MainSP_DeRegisterDvars(void)
{
  DVARFLT_vehHudReticlePipOnAStickCenterCircle = Dvar_Deregister(DVARFLT_vehHudReticlePipOnAStickCenterCircle);
  DVARFLT_vehHudReticlePipOnAStickMovingCircle = Dvar_Deregister(DVARFLT_vehHudReticlePipOnAStickMovingCircle);
  DVARFLT_vehHudReticlePipOnAStickCenterCircleBuffer = Dvar_Deregister(DVARFLT_vehHudReticlePipOnAStickCenterCircleBuffer);
  DVARFLT_vehHudReticlePipOnAStickMovingCircleBuffer = Dvar_Deregister(DVARFLT_vehHudReticlePipOnAStickMovingCircleBuffer);
  DVARFLT_vehHudLineWidth = Dvar_Deregister(DVARFLT_vehHudLineWidth);
  DVARBOOL_vehHudDrawPipOnStickWhenFreelooking = Dvar_Deregister(DVARBOOL_vehHudDrawPipOnStickWhenFreelooking);
  DVARFLT_vehHudTargetSize = Dvar_Deregister(DVARFLT_vehHudTargetSize);
  DVARFLT_vehHudTargetScreenEdgeClampBufferLeft = Dvar_Deregister(DVARFLT_vehHudTargetScreenEdgeClampBufferLeft);
  DVARFLT_vehHudTargetScreenEdgeClampBufferRight = Dvar_Deregister(DVARFLT_vehHudTargetScreenEdgeClampBufferRight);
  DVARFLT_vehHudTargetScreenEdgeClampBufferTop = Dvar_Deregister(DVARFLT_vehHudTargetScreenEdgeClampBufferTop);
  DVARFLT_vehHudTargetScreenEdgeClampBufferBottom = Dvar_Deregister(DVARFLT_vehHudTargetScreenEdgeClampBufferBottom);
  DVARFLT_vehHudReticleBouncingDiamondSize = Dvar_Deregister(DVARFLT_vehHudReticleBouncingDiamondSize);
  DVARFLT_vehHudReticleBouncingRadius = Dvar_Deregister(DVARFLT_vehHudReticleBouncingRadius);
  DVARFLT_vehHudReticleBouncingSpeed = Dvar_Deregister(DVARFLT_vehHudReticleBouncingSpeed);
  DVARINT_cg_followEnt = Dvar_Deregister(DVARINT_cg_followEnt);
  DVARFLT_cg_helmetViewSwayRate = Dvar_Deregister(DVARFLT_cg_helmetViewSwayRate);
  DVARFLT_cg_helmetAnimSwayRate = Dvar_Deregister(DVARFLT_cg_helmetAnimSwayRate);
  DVARVEC3_cg_helmetMaxOffsetFromView = Dvar_Deregister(DVARVEC3_cg_helmetMaxOffsetFromView);
  DVARFLT_cg_helmetMaxLinearVelocityInfluence = Dvar_Deregister(DVARFLT_cg_helmetMaxLinearVelocityInfluence);
  DVARVEC3_cg_helmetLinearVelocityToAngleRate = Dvar_Deregister(DVARVEC3_cg_helmetLinearVelocityToAngleRate);
  DVARFLT_compassObjectiveNearbyDist = Dvar_Deregister(DVARFLT_compassObjectiveNearbyDist);
  DVARFLT_compassObjectiveMinHeight = Dvar_Deregister(DVARFLT_compassObjectiveMinHeight);
  DVARFLT_compassObjectiveMaxHeight = Dvar_Deregister(DVARFLT_compassObjectiveMaxHeight);
  DVARBOOL_compassObjectiveDrawLines = Dvar_Deregister(DVARBOOL_compassObjectiveDrawLines);
  DVARINT_compassObjectiveNumRings = Dvar_Deregister(DVARINT_compassObjectiveNumRings);
  DVARFLT_compassObjectiveRingSize = Dvar_Deregister(DVARFLT_compassObjectiveRingSize);
  DVARINT_compassObjectiveRingTime = Dvar_Deregister(DVARINT_compassObjectiveRingTime);
  DVARBOOL_compassDebug = Dvar_Deregister(DVARBOOL_compassDebug);
  DVARBOOL_cg_drawHUD = Dvar_Deregister(DVARBOOL_cg_drawHUD);
  DVARBOOL_cg_drawPlayerPosInFreeMove = Dvar_Deregister(DVARBOOL_cg_drawPlayerPosInFreeMove);
  DVARBOOL_cg_debugLookAt = Dvar_Deregister(DVARBOOL_cg_debugLookAt);
  DVARBOOL_cg_drawFriendlyFireCrosshair = Dvar_Deregister(DVARBOOL_cg_drawFriendlyFireCrosshair);
  DVARINT_cg_objectiveListWrapCountStandard = Dvar_Deregister(DVARINT_cg_objectiveListWrapCountStandard);
  DVARINT_cg_objectiveListWrapCountWidescreen = Dvar_Deregister(DVARINT_cg_objectiveListWrapCountWidescreen);
  DVARFLT_objectiveAlpha = Dvar_Deregister(DVARFLT_objectiveAlpha);
  DVARBOOL_objectiveAlphaEnabled = Dvar_Deregister(DVARBOOL_objectiveAlphaEnabled);
  DVARFLT_objectiveArrowWidth = Dvar_Deregister(DVARFLT_objectiveArrowWidth);
  DVARFLT_objectiveArrowHeight = Dvar_Deregister(DVARFLT_objectiveArrowHeight);
  DVARCLR_objectiveColor = Dvar_Deregister(DVARCLR_objectiveColor);
  DVARBOOL_objectiveHideIcon = Dvar_Deregister(DVARBOOL_objectiveHideIcon);
  DVARBOOL_objectiveDebug = Dvar_Deregister(DVARBOOL_objectiveDebug);
  DVARINT_cg_testVar = Dvar_Deregister(DVARINT_cg_testVar);
  DVARBOOL_hud_showStance = Dvar_Deregister(DVARBOOL_hud_showStance);
  DVARBOOL_hud_drawHUD = Dvar_Deregister(DVARBOOL_hud_drawHUD);
  DVARBOOL_hud_missionFailed = Dvar_Deregister(DVARBOOL_hud_missionFailed);
  DVARBOOL_hud_forceMantleHint = Dvar_Deregister(DVARBOOL_hud_forceMantleHint);
  DVARINT_hud_checkpointBlackScreenDuration = Dvar_Deregister(DVARINT_hud_checkpointBlackScreenDuration);
  DVARBOOL_missionSelected = Dvar_Deregister(DVARBOOL_missionSelected);
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
}

/*
==============
CG_MainSP_FreeClientMemory
==============
*/
void CG_MainSP_FreeClientMemory(void)
{
  char v0; 
  int v1; 
  void **v2; 
  char v3; 
  int v4; 
  void **v5; 
  char v6; 
  int v7; 
  CgPredictedEntitySystem **v8; 
  char v9; 
  int v10; 
  void **v11; 
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
  CgWeaponsType v33; 
  int v34; 
  void **v35; 
  char v36; 
  int v37; 
  void **v38; 
  char v39; 
  int v40; 
  CgClientSideEffectsSystem **v41; 
  __int64 v42; 
  int v43; 
  __int64 v44; 
  int v45; 

  cg_maxLocalClients = 0;
  DynEnt_FreeClientMemory();
  Scriptable_Bg_ShutdownClientEventStream();
  CG_GameInterface_OnShutdownGameMemory();
  CG_Glass_FreeMemory();
  AimAssist_FreeClientMemory();
  CG_FreeLocalClientEntities();
  CG_Main_ClearCgMedia();
  CG_SnapshotSP_FreeSnapshots();
  CgPlayer_Asm::FreeMemory();
  v0 = CgMissile::ms_allocatedType;
  if ( !(_BYTE)CgMissile::ms_allocatedType )
    goto LABEL_6;
  if ( (_BYTE)CgMissile::ms_allocatedType != HALF )
  {
    v45 = (unsigned __int8)CgMissile::ms_allocatedType;
    v43 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 323, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SYSTEM_TYPE)", "%s\n\tTrying to free missile system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SYSTEM_TYPE", v43, v45) )
      __debugbreak();
    v0 = CgMissile::ms_allocatedType;
LABEL_6:
    if ( v0 != 1 )
      goto LABEL_13;
  }
  if ( CgMissile::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_missile.h", 327, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgMissile::FreeSystemCommon: Trying to free missile system but no missile system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v1 = CgMissile::ms_allocatedCount - 1;
  if ( CgMissile::ms_allocatedCount - 1 >= 0 )
  {
    v2 = (void **)&CgMissile::ms_systemsArray[v1];
    do
    {
      (**(void (__fastcall ***)(void *, _QWORD))*v2)(*v2, 0i64);
      DebugWipe(*v2, 0x28ui64);
      --v1;
      *v2-- = NULL;
    }
    while ( v1 >= 0 );
  }
LABEL_13:
  v3 = CgBallistics::ms_allocatedType;
  CgMissile::ms_allocatedCount = 0;
  LOBYTE(CgMissile::ms_allocatedType) = 0;
  if ( !(_BYTE)CgBallistics::ms_allocatedType )
    goto LABEL_18;
  if ( (_BYTE)CgBallistics::ms_allocatedType != HALF )
  {
    LODWORD(v44) = (unsigned __int8)CgBallistics::ms_allocatedType;
    LODWORD(v42) = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.h", 215, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SYSTEM_TYPE)", "%s\n\tTrying to free ballistics system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SYSTEM_TYPE", v42, v44) )
      __debugbreak();
    v3 = CgBallistics::ms_allocatedType;
LABEL_18:
    if ( v3 != 1 )
      goto LABEL_25;
  }
  if ( CgBallistics::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_ballistics.h", 219, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgBallistics::FreeSystemCommon: Trying to free ballistics system but no ballistics system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v4 = CgBallistics::ms_allocatedCount - 1;
  if ( CgBallistics::ms_allocatedCount - 1 >= 0 )
  {
    v5 = (void **)&CgBallistics::ms_systemsArray[v4];
    do
    {
      (**(void (__fastcall ***)(void *, _QWORD))*v5)(*v5, 0i64);
      DebugWipe(*v5, 0x45D68ui64);
      --v4;
      *v5-- = NULL;
    }
    while ( v4 >= 0 );
  }
LABEL_25:
  v6 = CgPredictedEntitySystem::ms_allocatedType;
  CgBallistics::ms_allocatedCount = 0;
  LOBYTE(CgBallistics::ms_allocatedType) = 0;
  if ( !(_BYTE)CgPredictedEntitySystem::ms_allocatedType )
    goto LABEL_30;
  if ( (_BYTE)CgPredictedEntitySystem::ms_allocatedType != HALF )
  {
    LODWORD(v44) = (unsigned __int8)CgPredictedEntitySystem::ms_allocatedType;
    LODWORD(v42) = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 269, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SYSTEM_TYPE)", "%s\n\tTrying to free predicted entity system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SYSTEM_TYPE", v42, v44) )
      __debugbreak();
    v6 = CgPredictedEntitySystem::ms_allocatedType;
LABEL_30:
    if ( v6 != 1 )
      goto LABEL_37;
  }
  if ( CgPredictedEntitySystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 273, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgPredictedEntitySystem::FreeSystemCommon: Trying to free predicted entity system but no predicted entity system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v7 = CgPredictedEntitySystem::ms_allocatedCount - 1;
  if ( CgPredictedEntitySystem::ms_allocatedCount - 1 >= 0 )
  {
    v8 = &CgPredictedEntitySystem::ms_systemsArray[v7];
    do
    {
      CgPredictedEntitySystem::Shutdown(*v8);
      ((void (__fastcall *)(CgPredictedEntitySystem *, _QWORD))(*v8)->~BgPredictedEntitySystem)(*v8, 0i64);
      DebugWipe(*v8, 0x7228ui64);
      --v7;
      *v8-- = NULL;
    }
    while ( v7 >= 0 );
  }
LABEL_37:
  v9 = CgTargetAssist::ms_allocatedType;
  CgPredictedEntitySystem::ms_allocatedCount = 0;
  LOBYTE(CgPredictedEntitySystem::ms_allocatedType) = 0;
  if ( !(_BYTE)CgTargetAssist::ms_allocatedType )
    goto LABEL_42;
  if ( (_BYTE)CgTargetAssist::ms_allocatedType != HALF )
  {
    LODWORD(v44) = (unsigned __int8)CgTargetAssist::ms_allocatedType;
    LODWORD(v42) = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 120, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::INSTANCE_TYPE)", "%s\n\tTrying to free target assist system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::INSTANCE_TYPE", v42, v44) )
      __debugbreak();
    v9 = CgTargetAssist::ms_allocatedType;
LABEL_42:
    if ( v9 != 1 )
      goto LABEL_49;
  }
  if ( CgTargetAssist::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_targetassist.h", 124, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgTargetAssist::FreeInstanceCommon: Trying to free single-player target assist system but no target assist system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v10 = CgTargetAssist::ms_allocatedCount - 1;
  if ( CgTargetAssist::ms_allocatedCount - 1 >= 0 )
  {
    v11 = (void **)&CgTargetAssist::ms_instances[v10];
    do
    {
      (**(void (__fastcall ***)(void *, _QWORD))*v11)(*v11, 0i64);
      DebugWipe(*v11, 0x338ui64);
      --v10;
      *v11-- = NULL;
    }
    while ( v10 >= 0 );
  }
LABEL_49:
  CgTargetAssist::ms_allocatedCount = 0;
  LOBYTE(CgTargetAssist::ms_allocatedType) = 0;
  CgAntiLagSP::Free();
  CgWeaponMap::Free();
  CGMovingPlatformsSP::FreeMovingPlatformSystem();
  v12 = CgVehicleSystem::ms_allocatedType;
  if ( !(_BYTE)CgVehicleSystem::ms_allocatedType )
    goto LABEL_54;
  if ( (_BYTE)CgVehicleSystem::ms_allocatedType != HALF )
  {
    LODWORD(v44) = (unsigned __int8)CgVehicleSystem::ms_allocatedType;
    LODWORD(v42) = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 455, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE)", "%s\n\tTrying to free vehicle system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE", v42, v44) )
      __debugbreak();
    v12 = CgVehicleSystem::ms_allocatedType;
LABEL_54:
    if ( v12 != 1 )
      goto LABEL_61;
  }
  if ( CgVehicleSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 459, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgVehicleSystem::FreeVehicleSystemCommon: Trying to free single-player vehicle system but no vehicle system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v13 = CgVehicleSystem::ms_allocatedCount - 1;
  if ( CgVehicleSystem::ms_allocatedCount - 1 >= 0 )
  {
    v14 = (void **)&CgVehicleSystem::ms_vehicleSystemArray[v13];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v14 + 536i64))(*v14, 0i64);
      DebugWipe(*v14, 0x119518ui64);
      --v13;
      *v14-- = NULL;
    }
    while ( v13 >= 0 );
  }
LABEL_61:
  v15 = CgViewSystem::ms_allocatedType;
  CgVehicleSystem::ms_allocatedCount = 0;
  LOBYTE(CgVehicleSystem::ms_allocatedType) = 0;
  if ( !(_BYTE)CgViewSystem::ms_allocatedType )
    goto LABEL_66;
  if ( (_BYTE)CgViewSystem::ms_allocatedType != HALF )
  {
    LODWORD(v44) = (unsigned __int8)CgViewSystem::ms_allocatedType;
    LODWORD(v42) = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 316, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::VIEW_SYSTEM_TYPE)", "%s\n\tTrying to free view system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::VIEW_SYSTEM_TYPE", v42, v44) )
      __debugbreak();
    v15 = CgViewSystem::ms_allocatedType;
LABEL_66:
    if ( v15 != 1 )
      goto LABEL_73;
  }
  if ( CgViewSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 320, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgViewSystem::FreeViewSystemCommon: Trying to free single-player view system but no view system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v16 = CgViewSystem::ms_allocatedCount - 1;
  if ( CgViewSystem::ms_allocatedCount - 1 >= 0 )
  {
    v17 = (void **)&CgViewSystem::ms_viewSystemArray[v16];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v17 + 32i64))(*v17, 0i64);
      DebugWipe(*v17, 0x68ui64);
      --v16;
      *v17-- = NULL;
    }
    while ( v16 >= 0 );
  }
LABEL_73:
  v18 = CgEntitySystem::ms_allocatedType;
  CgViewSystem::ms_allocatedCount = 0;
  LOBYTE(CgViewSystem::ms_allocatedType) = 0;
  if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
    goto LABEL_78;
  if ( (_BYTE)CgEntitySystem::ms_allocatedType != HALF )
  {
    LODWORD(v44) = (unsigned __int8)CgEntitySystem::ms_allocatedType;
    LODWORD(v42) = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 339, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE)", "%s\n\tTrying to free entity system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE", v42, v44) )
      __debugbreak();
    v18 = CgEntitySystem::ms_allocatedType;
LABEL_78:
    if ( v18 != 1 )
      goto LABEL_85;
  }
  if ( CgEntitySystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 343, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgEntitySystem::FreeEntitySystemCommon: Trying to free single-player entity system but no entity system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v19 = CgEntitySystem::ms_allocatedCount - 1;
  if ( CgEntitySystem::ms_allocatedCount - 1 >= 0 )
  {
    v20 = (void **)&CgEntitySystem::ms_entitySystemArray[v19];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v20 + 72i64))(*v20, 0i64);
      DebugWipe(*v20, 0x20A760ui64);
      --v19;
      *v20-- = NULL;
    }
    while ( v19 >= 0 );
  }
LABEL_85:
  CgEntitySystem::ms_allocatedCount = 0;
  LOBYTE(CgEntitySystem::ms_allocatedType) = 0;
  CG_EntityWorkers_CloseRWLock_Physics();
  v21 = CgCompassSystem::ms_allocatedType;
  if ( !(_BYTE)CgCompassSystem::ms_allocatedType )
    goto LABEL_90;
  if ( (_BYTE)CgCompassSystem::ms_allocatedType != HALF )
  {
    LODWORD(v44) = (unsigned __int8)CgCompassSystem::ms_allocatedType;
    LODWORD(v42) = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 624, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE)", "%s\n\tTrying to free compass system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::COMPASS_SYSTEM_TYPE", v42, v44) )
      __debugbreak();
    v21 = CgCompassSystem::ms_allocatedType;
LABEL_90:
    if ( v21 != 1 )
      goto LABEL_97;
  }
  if ( CgCompassSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 628, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgCompassSystem::FreeCompassSystemCommon: Trying to free single-player compass system but no compass system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v22 = CgCompassSystem::ms_allocatedCount - 1;
  if ( CgCompassSystem::ms_allocatedCount - 1 >= 0 )
  {
    v23 = (void **)&CgCompassSystem::ms_compassSystemArray[v22];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v23 + 120i64))(*v23, 0i64);
      DebugWipe(*v23, 0x1A38ui64);
      --v22;
      *v23-- = NULL;
    }
    while ( v22 >= 0 );
  }
LABEL_97:
  v24 = CgDrawSystem::ms_allocatedType;
  CgCompassSystem::ms_allocatedCount = 0;
  LOBYTE(CgCompassSystem::ms_allocatedType) = 0;
  if ( !(_BYTE)CgDrawSystem::ms_allocatedType )
    goto LABEL_102;
  if ( (_BYTE)CgDrawSystem::ms_allocatedType != HALF )
  {
    LODWORD(v44) = (unsigned __int8)CgDrawSystem::ms_allocatedType;
    LODWORD(v42) = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 225, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE)", "%s\n\tTrying to free draw system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::DRAW_SYSTEM_TYPE", v42, v44) )
      __debugbreak();
    v24 = CgDrawSystem::ms_allocatedType;
LABEL_102:
    if ( v24 != 1 )
      goto LABEL_109;
  }
  if ( CgDrawSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 229, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgDrawSystem::FreeDrawSystemCommon: Trying to free single-player draw system but no draw system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v25 = CgDrawSystem::ms_allocatedCount - 1;
  if ( CgDrawSystem::ms_allocatedCount - 1 >= 0 )
  {
    v26 = (void **)&CgDrawSystem::ms_drawSystemArray[v25];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v26 + 80i64))(*v26, 0i64);
      DebugWipe(*v26, 0x20ui64);
      --v25;
      *v26-- = NULL;
    }
    while ( v25 >= 0 );
  }
LABEL_109:
  v27 = CgSoundSystem::ms_allocatedType;
  CgDrawSystem::ms_allocatedCount = 0;
  LOBYTE(CgDrawSystem::ms_allocatedType) = 0;
  if ( !(_BYTE)CgSoundSystem::ms_allocatedType )
    goto LABEL_114;
  if ( (_BYTE)CgSoundSystem::ms_allocatedType != HALF )
  {
    LODWORD(v44) = (unsigned __int8)CgSoundSystem::ms_allocatedType;
    LODWORD(v42) = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 228, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SOUND_SYSTEM_TYPE)", "%s\n\tTrying to free sound system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::SOUND_SYSTEM_TYPE", v42, v44) )
      __debugbreak();
    v27 = CgSoundSystem::ms_allocatedType;
LABEL_114:
    if ( v27 != 1 )
      goto LABEL_121;
  }
  if ( CgSoundSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 232, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgSoundSystem::FreeSoundSystemCommon: Trying to free single-player sound system but no sound system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v28 = CgSoundSystem::ms_allocatedCount - 1;
  if ( CgSoundSystem::ms_allocatedCount - 1 >= 0 )
  {
    v29 = (void **)&CgSoundSystem::ms_soundSystemArray[v28];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v29 + 160i64))(*v29, 0i64);
      DebugWipe(*v29, 0x10ui64);
      --v28;
      *v29-- = NULL;
    }
    while ( v28 >= 0 );
  }
LABEL_121:
  v30 = CgEventSystem::ms_allocatedType;
  CgSoundSystem::ms_allocatedCount = 0;
  LOBYTE(CgSoundSystem::ms_allocatedType) = 0;
  if ( !(_BYTE)CgEventSystem::ms_allocatedType )
    goto LABEL_126;
  if ( (_BYTE)CgEventSystem::ms_allocatedType != HALF )
  {
    LODWORD(v44) = (unsigned __int8)CgEventSystem::ms_allocatedType;
    LODWORD(v42) = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 273, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE)", "%s\n\tTrying to free event system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE", v42, v44) )
      __debugbreak();
    v30 = CgEventSystem::ms_allocatedType;
LABEL_126:
    if ( v30 != 1 )
      goto LABEL_133;
  }
  if ( CgEventSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 277, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgEventSystem::FreeEventSystemCommon: Trying to free single-player event system but no event system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v31 = CgEventSystem::ms_allocatedCount - 1;
  if ( CgEventSystem::ms_allocatedCount - 1 >= 0 )
  {
    v32 = (void **)&CgEventSystem::ms_eventSystemArray[v31];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v32 + 16i64))(*v32, 0i64);
      DebugWipe(*v32, 0x10ui64);
      --v31;
      *v32-- = NULL;
    }
    while ( v31 >= 0 );
  }
LABEL_133:
  v33 = CgWeaponSystem::ms_allocatedType;
  CgEventSystem::ms_allocatedCount = 0;
  LOBYTE(CgEventSystem::ms_allocatedType) = 0;
  if ( CgWeaponSystem::ms_allocatedType == WEAPONS_TYPE_NONE )
    goto LABEL_138;
  if ( CgWeaponSystem::ms_allocatedType != WEAPONS_TYPE_SP )
  {
    LODWORD(v44) = CgWeaponSystem::ms_allocatedType;
    LODWORD(v42) = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 579, ASSERT_TYPE_ASSERT, "(ms_allocatedType == CgWeaponsType::WEAPONS_TYPE_NONE || ms_allocatedType == SubSystem::WEAPON_SYSTEM_TYPE)", "%s\n\tTrying to free weapon system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == CgWeaponsType::WEAPONS_TYPE_NONE || ms_allocatedType == SubSystem::WEAPON_SYSTEM_TYPE", v42, v44) )
      __debugbreak();
    v33 = CgWeaponSystem::ms_allocatedType;
LABEL_138:
    if ( v33 != WEAPONS_TYPE_SP )
      goto LABEL_145;
  }
  if ( CgWeaponSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 583, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgWeaponSystem::FreeWeaponSystemCommon: Trying to free weapon system but no weapon system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v34 = CgWeaponSystem::ms_allocatedCount - 1;
  if ( CgWeaponSystem::ms_allocatedCount - 1 >= 0 )
  {
    v35 = (void **)&CgWeaponSystem::ms_weaponSystemArray[v34];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v35 + 208i64))(*v35, 0i64);
      DebugWipe(*v35, 0x15E0ui64);
      --v34;
      *v35-- = NULL;
    }
    while ( v34 >= 0 );
  }
LABEL_145:
  CgWeaponSystem::ms_allocatedCount = 0;
  CgWeaponSystem::ms_allocatedType = WEAPONS_TYPE_NONE;
  CgStaticGlobalsSP::FreeLocalClientStaticGlobals();
  CgGlobalsSP::FreeLocalClientGlobals();
  v36 = CgStatic::ms_allocatedType;
  if ( !(_BYTE)CgStatic::ms_allocatedType )
    goto LABEL_150;
  if ( (_BYTE)CgStatic::ms_allocatedType != HALF )
  {
    LODWORD(v44) = (unsigned __int8)CgStatic::ms_allocatedType;
    LODWORD(v42) = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 159, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::GAME_STATICS_TYPE)", "%s\n\tTrying to free game statics but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::GAME_STATICS_TYPE", v42, v44) )
      __debugbreak();
    v36 = CgStatic::ms_allocatedType;
LABEL_150:
    if ( v36 != 1 )
      goto LABEL_157;
  }
  if ( SLODWORD(CgStatic::ms_allocatedCount) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 163, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgStatic::FreeGameStaticsCommon: Trying to free game statics but no game statics has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) = 0i64;
  v37 = LODWORD(CgStatic::ms_allocatedCount) - 1;
  if ( LODWORD(CgStatic::ms_allocatedCount) - 1 >= 0 )
  {
    v38 = (void **)&CgStatic::ms_cgameStaticsArray[v37];
    do
    {
      (**(void (__fastcall ***)(void *, _QWORD))*v38)(*v38, 0i64);
      DebugWipe(*v38, 0x4C70ui64);
      --v37;
      *v38-- = NULL;
    }
    while ( v37 >= 0 );
  }
LABEL_157:
  CgStatic::ms_allocatedCount = 0.0;
  LOBYTE(CgStatic::ms_allocatedType) = 0;
  CgDynamicMedia::FreeMemory<CgDynamicMediaSP>();
  ClConfigStrings::FreeMemory<ClConfigStringsSP>();
  v39 = CgClientSideEffectsSystem::ms_allocatedType;
  if ( !(_BYTE)CgClientSideEffectsSystem::ms_allocatedType )
    goto LABEL_162;
  if ( (_BYTE)CgClientSideEffectsSystem::ms_allocatedType != HALF )
  {
    LODWORD(v44) = (unsigned __int8)CgClientSideEffectsSystem::ms_allocatedType;
    LODWORD(v42) = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 360, ASSERT_TYPE_ASSERT, "(ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE)", "%s\n\tTrying to free client-side effects system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE", v42, v44) )
      __debugbreak();
    v39 = CgClientSideEffectsSystem::ms_allocatedType;
LABEL_162:
    if ( v39 != 1 )
      goto LABEL_169;
  }
  if ( CgClientSideEffectsSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 364, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgClientSideEffectsSystem::FreeClientSideEffectsSystemCommon: Trying to free single-player client-side effects system but no client-side effects system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v40 = CgClientSideEffectsSystem::ms_allocatedCount - 1;
  if ( CgClientSideEffectsSystem::ms_allocatedCount - 1 >= 0 )
  {
    v41 = &CgClientSideEffectsSystem::ms_cseSystemArray[v40];
    do
    {
      CgClientSideEffectsSystem::FreeMemory(*v41);
      ((void (__fastcall *)(CgClientSideEffectsSystem *, _QWORD))(*v41)->~CgClientSideEffectsSystem)(*v41, 0i64);
      DebugWipe(*v41, 0x138C0ui64);
      --v40;
      *v41-- = NULL;
    }
    while ( v40 >= 0 );
  }
LABEL_169:
  CgClientSideEffectsSystem::ms_allocatedCount = 0;
  LOBYTE(CgClientSideEffectsSystem::ms_allocatedType) = 0;
  g_activeRefDef = NULL;
}

/*
==============
CG_MainSP_FreePlayerAnimTreeInstances
==============
*/
void CG_MainSP_FreePlayerAnimTreeInstances(LocalClientNum_t localClientNum)
{
  CgStatic *LocalClientStatics; 
  __int32 v3; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *CharacterInfo; 
  XAnimTree *pXAnimTree; 
  int entityNum; 
  unsigned int v8; 
  unsigned int v9; 
  DObj *v10; 
  XAnimTree *v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  char *v15; 
  __int64 v16; 
  __int64 v17; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
    v3 = 2533 * localClientNum;
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
    {
      if ( !LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
      {
        LODWORD(v16) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v16, 0) )
          __debugbreak();
      }
      CharacterInfo = (characterInfo_t *)LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62];
    }
    else
    {
      CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, 0);
    }
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_main_sp.cpp", 560, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
      __debugbreak();
    pXAnimTree = CharacterInfo->pXAnimTree;
    if ( pXAnimTree )
    {
      Com_Printf(16, "Free client animtree (%p) for character %d\n", pXAnimTree, 0i64);
      entityNum = CharacterInfo->entityNum;
      if ( CharacterInfo->entityNum > 0x9E4u )
      {
        LODWORD(v17) = CharacterInfo->entityNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v17) )
          __debugbreak();
      }
      if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v17) = 2;
        LODWORD(v16) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      v8 = v3 + entityNum;
      if ( v8 >= 0x13CA )
      {
        LODWORD(v17) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v17) )
          __debugbreak();
      }
      v9 = clientObjMap[v8];
      if ( v9 )
      {
        if ( v9 >= (unsigned int)s_objCount )
        {
          LODWORD(v17) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v17) )
            __debugbreak();
        }
        v10 = (DObj *)s_objBuf[v9];
        if ( v10 )
        {
          v11 = CharacterInfo->pXAnimTree;
          if ( v11 != v10->tree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_main_sp.cpp", 572, ASSERT_TYPE_ASSERT, "( characterInfo->pXAnimTree ) == ( obj->tree )", "%s == %s\n\t%p, %p", "characterInfo->pXAnimTree", "obj->tree", v11, v10->tree) )
            __debugbreak();
          DObjSetTree(v10, NULL);
        }
      }
      XAnimFreeTree(CharacterInfo->pXAnimTree, NULL);
      CharacterInfo->pXAnimTree = NULL;
    }
    else
    {
      v12 = CharacterInfo->entityNum;
      if ( v12 > 0x9E4 )
      {
        LODWORD(v17) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v17) )
          __debugbreak();
      }
      if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v17) = 2;
        LODWORD(v16) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      v13 = v3 + v12;
      if ( v13 >= 0x13CA )
      {
        LODWORD(v17) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v17) )
          __debugbreak();
      }
      v14 = clientObjMap[v13];
      if ( v14 )
      {
        if ( v14 >= (unsigned int)s_objCount )
        {
          LODWORD(v17) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v17) )
            __debugbreak();
        }
        v15 = s_objBuf[v14];
        if ( v15 && *(_QWORD *)v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_main_sp.cpp", 583, ASSERT_TYPE_ASSERT, "( ( obj == nullptr || obj->tree == nullptr ) )", "( obj ) = %p", v15) )
          __debugbreak();
      }
    }
  }
}

/*
==============
CG_MainSP_Init
==============
*/
void CG_MainSP_Init(const bool savegame)
{
  __int64 OnlyLocalClientNum; 
  float v3; 
  LocalClientNum_t firstActiveIndex; 
  bool v5; 
  Physics_WorldId v6; 
  Physics_WorldId i; 
  unsigned int j; 
  cg_t *v9; 
  cgs_t *v10; 
  CgCompassSystemSP *CompassSystemSP; 
  HunkUser *HunkUser; 
  const char *ConfigString; 
  const char *StringSafe; 
  CgWeaponSystemSP *WeaponSystemSP; 
  __int64 v16; 
  __int64 v17; 
  float v18; 
  int v19; 
  int v20; 
  char filename[64]; 
  char dest[1024]; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_main_sp.cpp", 760, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  v3 = cl_maxLocalClients;
  if ( (unsigned int)OnlyLocalClientNum >= LODWORD(cl_maxLocalClients) )
  {
    v18 = cl_maxLocalClients;
    LODWORD(v16) = OnlyLocalClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 352, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v16, v18) )
      __debugbreak();
    v3 = cl_maxLocalClients;
  }
  if ( v3 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
    __debugbreak();
  if ( cls.m_localClientsActive.activeCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 353, ASSERT_TYPE_ASSERT, "(GetGameLocalClientActiveCount() > 0)", "%s\n\tClient active data has not been setup", "GetGameLocalClientActiveCount() > 0") )
    __debugbreak();
  firstActiveIndex = cls.m_localClientsActive.firstActiveIndex;
  if ( cls.m_localClientsActive.firstActiveIndex == LOCAL_CLIENT_INVALID )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 354, ASSERT_TYPE_ASSERT, "(m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID)", "%s\n\tClient active data has not been setup", "m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID") )
      __debugbreak();
    firstActiveIndex = cls.m_localClientsActive.firstActiveIndex;
  }
  v5 = (_DWORD)OnlyLocalClientNum == firstActiveIndex;
  if ( (_DWORD)OnlyLocalClientNum != firstActiveIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_main_sp.cpp", 765, ASSERT_TYPE_ASSERT, "(isFirstActiveClient)", "%s\n\tSP should only have one active client", "isFirstActiveClient") )
    __debugbreak();
  DB_SyncXAssetsKeepAlive();
  memset_0(cgDC, 0, sizeof(cgDC));
  memset_0(cgMedia.serverMaterialsTouch, 0, sizeof(cgMedia.serverMaterialsTouch));
  CL_StreamViews_ClearAllManualViews((LocalClientNum_t)OnlyLocalClientNum);
  CL_CGameSP_ClearSoundAliasCache();
  cgDC[OnlyLocalClientNum].localClientNum = OnlyLocalClientNum;
  CG_SnapshotSP_ClearSnapshots((const LocalClientNum_t)OnlyLocalClientNum);
  CG_ClearBlur((LocalClientNum_t)OnlyLocalClientNum);
  Ragdoll_Register((LocalClientNum_t)OnlyLocalClientNum);
  CG_Weapons_Init((LocalClientNum_t)OnlyLocalClientNum, v5);
  CgPlayerTraceInfo::Init((LocalClientNum_t)OnlyLocalClientNum);
  CG_CoverWall_InitSystem();
  CG_Main_InitSuits(0);
  ScriptableBg_InitNetConstStringDefs(0);
  Rumble_Init(0);
  BG_Gesture_InitGestures(0);
  XAnimCurve_InitCurves(0);
  BG_BlendSpace2D_InitDefs(0);
  BG_CarryObject_InitDefs(0);
  BG_HudOutline_InitDefs(0);
  BG_Accessory_InitAssets(0);
  CG_Omnvar_InitDefaults((LocalClientNum_t)OnlyLocalClientNum);
  CG_ClientCharacter_Init((const LocalClientNum_t)OnlyLocalClientNum);
  CG_ViewMotion_InitCinematicMotionAssets();
  CG_ClientWeapon_Init((LocalClientNum_t)OnlyLocalClientNum);
  CG_Entity_PhysicsCheckPostAssetChangeEmpty((const LocalClientNum_t)OnlyLocalClientNum);
  Physics_CreateClientWorlds((LocalClientNum_t)OnlyLocalClientNum);
  v6 = 3 * OnlyLocalClientNum + 4;
  for ( i = 3 * OnlyLocalClientNum + 2; i <= v6; ++i )
  {
    WorldCollision_InstantiateCollision(i);
    StaticModels_InstantiateCollision(i);
  }
  CG_Wind_Init();
  Cloth_CreateGlobalWorld(OnlyLocalClientNum);
  Cloth_XAnimNode_SetDObjToClothFn(CG_Cloth_DObjToClothInstances, 0);
  LUITraceRunner::Initialize((LocalClientNum_t)OnlyLocalClientNum);
  cgMedia.whiteMaterial = Material_RegisterHandle("white", IMAGE_TRACK_HUD);
  cgMedia.friendlyFireMaterial = Material_RegisterHandle("hudfriendlyfire", IMAGE_TRACK_HUD);
  cgMedia.FOFTargetBox_Self = Material_RegisterHandle("hud_fofbox_self", IMAGE_TRACK_HUD);
  if ( !Com_GameMode_SupportsFeature(WEAPON_STUNNED_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_main_sp.cpp", 861, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::HUD_NVG_DRAWING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::HUD_NVG_DRAWING )") )
    __debugbreak();
  cgMedia.hudIconNVG = NULL;
  cgMedia.nightVisionGoggles = NULL;
  Material_RegisterHandle("statmon_warn", IMAGE_TRACK_DEBUG);
  Material_RegisterHandle("statmon_budget", IMAGE_TRACK_DEBUG);
  CG_ConsoleCmds_Register();
  CG_ConsoleCmdsSP_Register();
  CG_ModelPreviewerCreateDevGui((LocalClientNum_t)OnlyLocalClientNum);
  CG_CreateFx_CreateDevGui((LocalClientNum_t)OnlyLocalClientNum);
  CG_Main_InitViewDimensions((LocalClientNum_t)OnlyLocalClientNum);
  if ( !cls.m_activeGameMapName[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
    __debugbreak();
  Com_GetBspFilename(filename, 64, cls.m_activeGameMapName);
  ProfLoad_Begin("Load world");
  FX_LoadWorld(filename);
  CL_CGameSP_LoadWorld(filename);
  ProfLoad_End();
  CG_ServerCmd_ParseSunLight((const LocalClientNum_t)OnlyLocalClientNum);
  CG_ServerCmdSP_ParseSunDirection((LocalClientNum_t)OnlyLocalClientNum);
  CG_ServerCmdSP_ParseSunFlarePosition((LocalClientNum_t)OnlyLocalClientNum);
  CG_ServerCmdSP_ParseSkyOverride((LocalClientNum_t)OnlyLocalClientNum);
  CG_MainSP_RegisterGraphics(cls.m_activeGameMapName);
  if ( (_BYTE)CgVehicleSystem::ms_allocatedType != HALF )
  {
    v20 = (unsigned __int8)CgVehicleSystem::ms_allocatedType;
    v19 = 1;
    LODWORD(v17) = OnlyLocalClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 417, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE", v17, v19, v20) )
      __debugbreak();
  }
  if ( (unsigned int)OnlyLocalClientNum >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(v17) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(v16) = OnlyLocalClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 418, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleSystemArray[OnlyLocalClientNum] )
  {
    LODWORD(v17) = OnlyLocalClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 419, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v17) )
      __debugbreak();
  }
  CgVehicleSystemSP::Init((CgVehicleSystemSP *)CgVehicleSystem::ms_vehicleSystemArray[OnlyLocalClientNum]);
  ProfLoad_Begin("Register sound alias map");
  for ( j = 2414; j <= 0xB6D; ++j )
  {
    if ( *CL_GetConfigString(j) )
      CL_CGameSP_RegisterSoundAliasCacheEntry(j - 2414);
  }
  ProfLoad_End();
  ProfLoad_Begin("Map init");
  CG_ServerCmdSP_MapInit(0, 1, savegame);
  ProfLoad_End();
  if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
    __debugbreak();
  if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
    __debugbreak();
  if ( (_DWORD)OnlyLocalClientNum )
  {
    LODWORD(v16) = OnlyLocalClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.h", 69, ASSERT_TYPE_ASSERT, "( ( localClientNum == CL_GetOnlyLocalClientNum() ) )", "( localClientNum ) = %i", v16) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType != GLOB_TYPE_SP )
  {
    LODWORD(v17) = cg_t::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.h", 70, ASSERT_TYPE_ASSERT, "(CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_SP)", "%s\n\tCgGlobalsSP::GetLocalClientGlobals: Trying to get single-player globals but the globals were not allocated as single-player. Allocated type is:%d\n", "CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_SP", v17) )
      __debugbreak();
  }
  v9 = cg_t::ms_cgArray[OnlyLocalClientNum];
  if ( (unsigned int)OnlyLocalClientNum >= cgs_t::ms_allocatedCount )
  {
    LODWORD(v17) = cgs_t::ms_allocatedCount;
    LODWORD(v16) = OnlyLocalClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 112, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cgs_t::ms_allocatedCount )", "localClientNum doesn't index cgs_t::ms_allocatedCount\n\t%i not in [0, %i)", v16, v17) )
      __debugbreak();
  }
  if ( !cgs_t::ms_cgsArray[OnlyLocalClientNum] )
  {
    LODWORD(v17) = OnlyLocalClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 113, ASSERT_TYPE_ASSERT, "(cgs_t::ms_cgsArray[localClientNum])", "%s\n\tTrying to access unallocated client static globals for localClientNum %d\n", "cgs_t::ms_cgsArray[localClientNum]", v17) )
      __debugbreak();
  }
  if ( cgs_t::ms_allocatedType == STATIC_GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v17) = OnlyLocalClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals_static.h", 114, ASSERT_TYPE_ASSERT, "(cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client static globals for localClientNum %d but the client static global type is not known\n", "cgs_t::ms_allocatedType != CgStaticGlobalsType::STATIC_GLOB_TYPE_UNKNOWN", v17) )
      __debugbreak();
  }
  v10 = cgs_t::ms_cgsArray[OnlyLocalClientNum];
  CompassSystemSP = CgCompassSystemSP::GetCompassSystemSP((const LocalClientNum_t)OnlyLocalClientNum);
  CgCompassSystemSP::InitCompass(CompassSystemSP);
  CG_Main_InitDofPhysical((LocalClientNum_t)OnlyLocalClientNum);
  *(_QWORD *)&v9->refdef.viewmodelMotionBlurOverride = 0i64;
  CG_Main_InitRadialMotionBlur(&v9->refdef.radialMotionBlur);
  v9->refdef.digitalDistort.intensity = 0.0;
  v9->refdef.digitalDistort.timeScale = 1.0;
  v10->localServer = 1;
  HunkUser = CL_Main_GetHunkUser();
  CG_MainSP_LoadScriptsAndAnims((LocalClientNum_t)OnlyLocalClientNum, HunkUser);
  CG_ClientModel_InitClient((const LocalClientNum_t)OnlyLocalClientNum);
  CG_PlayerFade_Init((const LocalClientNum_t)OnlyLocalClientNum);
  CG_Cloth_Entity_Init((const LocalClientNum_t)OnlyLocalClientNum);
  CG_Cloth_Legs_Init((const LocalClientNum_t)OnlyLocalClientNum);
  AnimVisualizer_Initialize();
  if ( v5 )
  {
    ConfigString = CL_GetConfigString(13);
    LB_SetWriteLeaderboards(ConfigString);
  }
  CL_SetADS((LocalClientNum_t)OnlyLocalClientNum, 0);
  CL_Input_SequenceValidate();
  CG_SelectWeapon((LocalClientNum_t)OnlyLocalClientNum, &v9->weaponSelect, 0);
  AimAssist_Init((LocalClientNum_t)OnlyLocalClientNum);
  StringSafe = Dvar_GetStringSafe("profile");
  Core_strcpy_truncate(dest, 0x400ui64, StringSafe);
  Dvar_SetFromStringByNameFromSource("profile", (const char *)&queryFormat.fmt + 3, DVAR_SOURCE_INTERNAL);
  Dvar_SetFromStringByNameFromSource("profile", dest, DVAR_SOURCE_INTERNAL);
  Dvar_SetBool_Internal(DVARBOOL_r_frontendWaitWorkerCmdsOnlyOfType, 1);
  CG_InitVehicleReticle((LocalClientNum_t)OnlyLocalClientNum);
  BG_RadiantLiveEnable(1);
  WeaponSystemSP = CgWeaponSystemSP::GetWeaponSystemSP((const LocalClientNum_t)OnlyLocalClientNum);
  CgWeaponSystemSP::InitViewModel(WeaponSystemSP);
  CG_InitMinimizedUse();
  CG_Shake_Init();
  CG_PlayerSecondaryCollision_Init();
  CG_ContextMount_UmbraOffsetTrace_Init();
}

/*
==============
CG_MainSP_LoadScriptsAndAnims
==============
*/
void CG_MainSP_LoadScriptsAndAnims(LocalClientNum_t localClientNum, HunkUser *hunkUser)
{
  __int64 v2; 
  CgStatic *LocalClientStatics; 
  int *v5; 
  __int64 v6; 
  __int64 v7; 
  CgStatic **v8; 
  XAnimOwner v9; 
  XAnimOwner v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  v2 = localClientNum;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    Scr_Mem_AcquireScriptLocks();
    s_animHunkUser = hunkUser;
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v2);
    v5 = (int *)LocalClientStatics->GetAnimStatics(LocalClientStatics);
    memset_0(v5, 0, 0x4530ui64);
    v6 = tls_index;
    v7 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
    if ( *(_QWORD *)(v7 + 272) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 84, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == 0 ) )", "( ms_activeBgs ) = %p", *(const void **)(v7 + 272)) )
      __debugbreak();
    if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 85, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to set the active bgs to the client game static but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    if ( (unsigned int)v2 >= LODWORD(CgStatic::ms_allocatedCount) )
    {
      LODWORD(v12) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 86, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v12, CgStatic::ms_allocatedCount) )
        __debugbreak();
    }
    v8 = &CgStatic::ms_cgameStaticsArray[v2];
    if ( !*v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 87, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum] != 0)", "%s\n\tTrying to set the active bgs to the client game static but the client game static has not been allocated", "ms_cgameStaticsArray[localClientNum] != NULL") )
      __debugbreak();
    *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v6) + 272i64) = *v8;
    if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
      __debugbreak();
    if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
      __debugbreak();
    if ( (_DWORD)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_main_sp.cpp", 626, ASSERT_TYPE_ASSERT, "(localClientNum == CL_GetOnlyLocalClientNum())", (const char *)&queryFormat, "localClientNum == CL_GetOnlyLocalClientNum()") )
      __debugbreak();
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_main_sp.cpp", 627, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
      __debugbreak();
    BG_AnimationMP_RegisterSuitAnimIndexes(0);
    LOBYTE(v9) = 1;
    XAnimSubTreeRegistry_Init(v9);
    LOBYTE(v10) = 1;
    Cloth_XAnimNode_Clear(v10);
    Scr_BeginLoadAnimTrees(0);
    BG_CheckThread();
    BG_AnimationMP_FindAnims();
    CG_ClientModel_FindClipmapAnims();
    Scr_PrecacheAnimTrees(CG_MainSP_AllocXAnimClient, v5[4886], MAIN);
    Cloth_XAnimNode_CloneRegistry();
    Scr_CloneXAnimSubTreeRegistry();
    if ( !PlayerASM_IsEnabled() )
      BG_AnimationMP_FindAnimTrees(0);
    CG_ClientModel_FindClipmapAnimTrees(0);
    Scr_EndLoadAnimTrees(0);
    AnimsetSP_ClonePlayerAnimTreesFromServer();
    BG_AnimationMP_InitializeAnimations();
    CG_MainSP_CreatePlayerAnimTreeInstances((LocalClientNum_t)v2);
    BG_TurretAnim_FindAnims(0);
    s_animHunkUser = NULL;
    Scr_Mem_ReleaseScriptLocks();
    if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 96, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to clear the active bgs from the client game statics but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    if ( (unsigned int)v2 >= LODWORD(CgStatic::ms_allocatedCount) )
    {
      *(float *)&v13 = CgStatic::ms_allocatedCount;
      LODWORD(v12) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    if ( !*v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 98, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum] != 0)", "%s\n\tTrying to clear the active bgs from the client game statics but the client game static has not been allocated", "ms_cgameStaticsArray[localClientNum] != NULL") )
      __debugbreak();
    v11 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v6);
    if ( *(CgStatic **)(v11 + 272) != *v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 99, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == ms_cgameStaticsArray[localClientNum] ) )", "( ms_activeBgs ) = %p", *(const void **)(v11 + 272)) )
      __debugbreak();
    *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v6) + 272i64) = 0i64;
  }
}

/*
==============
CG_MainSP_RegisterDvars
==============
*/
void CG_MainSP_RegisterDvars(void)
{
  unsigned int v0; 
  unsigned int v1; 
  unsigned int flags; 
  unsigned int v11; 
  bool v18; 
  unsigned int v19; 
  char ActiveGameMode; 
  unsigned int v21; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 

  DVARFLT_vehHudReticlePipOnAStickCenterCircle = Dvar_RegisterFloat("LORMOTSKST", 8.0, 0.0099999998, 10000.0, 0, "The diameter of the small, center circle in the pip-on-a-stick reticle");
  DVARFLT_vehHudReticlePipOnAStickMovingCircle = Dvar_RegisterFloat("MLMNLMLS", 32.0, 0.0099999998, 10000.0, 0, "The diameter of the large, moving circle in the pip-on-a-stick reticle");
  DVARFLT_vehHudReticlePipOnAStickCenterCircleBuffer = Dvar_RegisterFloat("LQNMPQRNST", 0.25, -10000.0, 10000.0, 0, "Tweaks how close the stick is drawn to the center circle.  Positive numbers makes the line longer.");
  DVARFLT_vehHudReticlePipOnAStickMovingCircleBuffer = Dvar_RegisterFloat("LMRMSTTOOQ", 1.0, -10000.0, 10000.0, 0, "Tweaks how close the stick is drawn to the moving circle.  Positive numbers makes the line longer.");
  DVARFLT_vehHudLineWidth = Dvar_RegisterFloat("NRTNMNQORP", 8.0, 0.0099999998, 10000.0, 0, "The width of the line used by code to draw elements on the vehicle HUD");
  DVARBOOL_vehHudDrawPipOnStickWhenFreelooking = Dvar_RegisterBool("NSTTRPLOLS", 1, 0, "Set to 0 to not draw the pip-on-a-stick reticle when the player is freelooking");
  v0 = 64;
  DVARFLT_vehHudTargetSize = Dvar_RegisterFloat("RKMOQPKSR", 30.0, 0.0099999998, 10000.0, 0x40u, "The width of the enemy target indicator on the hud.");
  DVARFLT_vehHudTargetScreenEdgeClampBufferLeft = Dvar_RegisterFloat("MTKMSQSRQP", 0.0, -10000.0, 10000.0, 0x40u, "The distance from the edge of the screen at which the enemy targets clamp.");
  DVARFLT_vehHudTargetScreenEdgeClampBufferRight = Dvar_RegisterFloat("MKRMTTNMOM", 0.0, -10000.0, 10000.0, 0x40u, "The distance from the edge of the screen at which the enemy targets clamp.");
  DVARFLT_vehHudTargetScreenEdgeClampBufferTop = Dvar_RegisterFloat("NRKNPNNORN", 0.0, -10000.0, 10000.0, 0x40u, "The distance from the edge of the screen at which the enemy targets clamp.");
  DVARFLT_vehHudTargetScreenEdgeClampBufferBottom = Dvar_RegisterFloat("MQRSSLSOOP", 0.0, -10000.0, 10000.0, 0x40u, "The distance from the edge of the screen at which the enemy targets clamp.");
  DVARFLT_vehHudReticleBouncingDiamondSize = Dvar_RegisterFloat("LKPRKLKMLP", 24.0, 0.0, 1000000.0, 0x40u, "The size of the bouncing diamond quad.");
  DVARFLT_vehHudReticleBouncingRadius = Dvar_RegisterFloat("MTSOQQPQQ", 80.0, 0.0, 1000000.0, 0x40u, "The radius of the circle in which the diamond bounces.");
  DVARFLT_vehHudReticleBouncingSpeed = Dvar_RegisterFloat("QPNMNRMOL", 300.0, 0.0, 1000000.0, 0x40u, "The rate at which the bouncing diamond moves");
  DVARINT_cg_followEnt = Dvar_RegisterInt("MRTMQLSTLM", -1, -1, 2047, 4u, "Entity number to follow when in cg_ufo");
  DVARFLT_cg_helmetViewSwayRate = Dvar_RegisterFloat("NLNPSMOMRM", -0.1, -100.0, 100.0, 0x40u, "Rate that player-driven camera angle movement influences helmet movement.  Low values will lag behind view changes; high values will lead.");
  DVARFLT_cg_helmetAnimSwayRate = Dvar_RegisterFloat("LQKMLQTQOM", -0.2, -100.0, 100.0, 0x40u, "Rate that animation-driven camera angle movement influences helmet movement.  Low values will lag behind view changes; high values will lead.");
  DVARVEC3_cg_helmetMaxOffsetFromView = Dvar_RegisterVec3("MPMNSLPMQL", 4.5, 4.5, 2.0, 0.0, 360.0, 0x40u, "Maximum angle that helmet can be offset from player view.  Degrees in Pitch, Yaw, and Roll.");
  DVARFLT_cg_helmetMaxLinearVelocityInfluence = Dvar_RegisterFloat("MNKOOOPMMO", 40.0, 0.0, 3.4028235e38, 0x40u, "Maximum player view linear velocity that will be converted to angular helmet motion.  Inches per second.");
  DVARVEC3_cg_helmetLinearVelocityToAngleRate = Dvar_RegisterVec3("TSTLRLKQL", 0.30000001, 0.30000001, 0.5, 0.0, 360.0, 0x40u, "Rate that angular motion is applied to the helmet given a linear velocity.  (Degrees rotation) per (Inches per second in player X, Y, and Z).");
  DVARFLT_compassObjectiveNearbyDist = Dvar_RegisterFloat("LNQRKQQMNT", 8.0, 0.0099999998, 3.4028235e38, 0x40u, "When an objective is closer than this distance (in meters), an \"Objective Nearby\" type of indicator is shown.");
  DVARFLT_compassObjectiveMinHeight = Dvar_RegisterFloat("LMPKLRQRSR", -70.0, -3.4028235e38, 0.0, 0x40u, "The minimum height that an objective is considered to be on this level");
  DVARFLT_compassObjectiveMaxHeight = Dvar_RegisterFloat("NNLTKTLORR", 70.0, 0.0, 3.4028235e38, 0x40u, "The maximum height that an objective is considered to be on this level");
  DVARBOOL_compassObjectiveDrawLines = Dvar_RegisterBool("LRRTMKQONT", 1, 0, "Draw horizontal and vertical lines to the active target, if it is within the minimap boundries");
  DVARINT_compassObjectiveNumRings = Dvar_RegisterInt("LQPOKPQKMT", 10, 0, 20, 0, "The number of rings when a new objective appears");
  DVARFLT_compassObjectiveRingSize = Dvar_RegisterFloat("OKSQQKQPKT", 80.0, 0.0, 3.4028235e38, 0, "The maximum objective ring sige when a new objective appears on the compass");
  DVARINT_compassObjectiveRingTime = Dvar_RegisterInt("NMLRTTSTKL", 10000, 0, 0x7FFFFFFF, 0, "The amount of time between each ring when an objective appears");
  DVARBOOL_compassDebug = Dvar_RegisterBool("NTMMPPTSTM", 0, 0, "Compass Debugging Mode");
  DVARBOOL_cg_drawHUD = Dvar_RegisterBool("MLQRQONTLL", 1, 0, "Draw HUD elements");
  DVARBOOL_cg_drawPlayerPosInFreeMove = Dvar_RegisterBool("MQSQPPNQLT", 1, 4u, "Draw an orange box at the player's pos in noclip/ufo.");
  DVARBOOL_cg_debugLookAt = Dvar_RegisterBool("MONSTSRKSP", 0, 4u, "Debug look at information");
  DVARBOOL_cg_drawFriendlyFireCrosshair = Dvar_RegisterBool("NNKSPMPMPR", 0, 4u, "draw the friendly fire crosshair (friendly move)");
  DVARINT_cg_objectiveListWrapCountStandard = Dvar_RegisterInt("MMNNRMPTQR", 260, 100, 640, 0, "The amount of on-screen length to wrap an objective in non wide-screen mode");
  DVARINT_cg_objectiveListWrapCountWidescreen = Dvar_RegisterInt("NRQNQOQKTL", 340, 100, 640, 0, "The amount of on-screen length to wrap an objective in wide-screen mode");
  v1 = 68;
  DVARFLT_objectiveAlpha = Dvar_RegisterFloat("OLMSOMTOTO", 0.60000002, 0.0, 3.4028235e38, 0x44u, "Alpha value for objective waypoints.");
  DVARBOOL_objectiveAlphaEnabled = Dvar_RegisterBool("MSSTMRNSN", 0, 0x40u, "When true, dvar \"objectiveAlpha\" takes effect.");
  DVARFLT_objectiveArrowWidth = Dvar_RegisterFloat("NNQRNQTMT", 32.0, 1.1754944e-38, 3.4028235e38, 0x40u, "Width of the objective pointer.");
  DVARFLT_objectiveArrowHeight = Dvar_RegisterFloat("PQLOTTTOS", 16.0, 1.1754944e-38, 3.4028235e38, 0x40u, "Height of the objective pointer.");
  DVARCLR_objectiveColor = Dvar_RegisterColor("LNTQQRRQTP", 1.0, 1.0, 1.0, 1.0, 0x40u, "Color of the objective pointer and text.");
  DVARBOOL_objectiveHideIcon = Dvar_RegisterBool("LPNQPOTNNR", 0, 0x44u, "When true, hides the objective pointer's icon, but will still show the arrow.");
  DVARBOOL_objectiveDebug = Dvar_RegisterBool("RLPOTTOKN", 0, 4u, (const char *)&queryFormat.fmt + 3);
  DVARINT_cg_testVar = Dvar_RegisterInt("MQNOMKRSKP", 0, 0, 2048, 0, "For random development usage.");
  DVARBOOL_hud_showStance = Dvar_RegisterBool("MPNNTKMQTS", 1, 0x40u, "When true, allow player's stance indicator to draw.");
  DVARBOOL_hud_drawHUD = Dvar_RegisterBool("SLTMRTTOM", 1, 0x40u, "Draw HUD elements. Controlled from non-UI script");
  DVARBOOL_hud_missionFailed = Dvar_RegisterBool("LPROPSMNKS", 0, 0x40u, "Intended to be set by script and referenced by hud.menu elements.");
  DVARBOOL_hud_forceMantleHint = Dvar_RegisterBool("OLSMNOSKPS", 0, 0x40u, "When true, forces the display of the mantle hint.  Can still be overridden by, for example, hud drawing being off.");
  DVARINT_hud_checkpointBlackScreenDuration = Dvar_RegisterInt("OSNLNKRRQ", 1, 0, 10000, 0x40u, "Duration (ms) of the black screen that appears when we reload last checkpoint in SP.");
  DVARBOOL_missionSelected = Dvar_RegisterBool("RTSKLTPOS", 0, 0x40u, (const char *)&queryFormat.fmt + 3);
  flags = 68;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    flags = 20;
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
    vblendvps xmm0, xmm8, xmm7, xmm2
  }
  DVARFLT_cg_fov = Dvar_RegisterFloat("QTSPTNLOL", 65.0, *(float *)&_XMM0, *(float *)&_XMM6, flags, "The field of view angle in degrees");
  v11 = 68;
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v11 = 20;
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
    vblendvps xmm0, xmm8, xmm9, xmm3
  }
  DVARFLT_cg_fov1 = Dvar_RegisterFloat("LQSSPMSRQK", 65.0, *(float *)&_XMM0, *(float *)&_XMM6, v11, "The field of view angle in degrees for the second local client");
  v18 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v19 = 64;
  if ( !v18 )
    v19 = 20;
  DVARFLT_cg_fovScale = Dvar_RegisterFloat("NSSLSNKPN", 1.0, 0.2, 2.0, v19, "Scale applied to the field of view");
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v0 = 140;
  DVARBOOL_cg_drawCrosshair = Dvar_RegisterBool("LOPKSRNTTS", 1, v0, "Turn on weapon crosshair");
  ActiveGameMode = Com_GameMode_GetActiveGameMode();
  v21 = 4;
  if ( ActiveGameMode != 1 )
    v21 = 140;
  DVARBOOL_cg_drawCrosshairNames = Dvar_RegisterBool("LROTSRRQMQ", 1, v21, "Draw the name of an enemy under the crosshair");
  DVARBOOL_cg_drawCrosshairWhileSprinting = Dvar_RegisterBool("MKPOPRMKLL", 1, 4u, "Draws the hip crosshairs while sprinting");
  v18 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v22 = 68;
  if ( !v18 )
    v22 = 140;
  DVARFLT_compassMaxRange = Dvar_RegisterFloat("MKPRSSNNRO", 1500.0, 0.000099999997, 3.4028235e38, v22, "The maximum range from the player in world space that objects will be shown on the compass");
  v18 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v23 = 68;
  if ( !v18 )
    v23 = 140;
  DVARFLT_compassExpandedMaxRange = Dvar_RegisterFloat("MROTQQSMP", 2500.0, 0.000099999997, 3.4028235e38, v23, "The maximum range from the player in world space that objects will be shown on the compass when they have the EXPANDED_MINIMAP perk");
  v18 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v24 = 68;
  if ( !v18 )
    v24 = 140;
  DVARFLT_compassExpandedMaxRangeBR = Dvar_RegisterFloat("NQMONTLKNN", 5000.0, 0.000099999997, 3.4028235e38, v24, "The maximum range from the player in world space that objects will be shown on the compass when they have the EXPANDED_MINIMAP perk in Battle Royale");
  v18 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v25 = 68;
  if ( !v18 )
    v25 = 140;
  DVARVEC3_cg_defaultWindDir = Dvar_RegisterVec3("NTMMTOLQMQ", 1.0, 0.0, 0.0, -1.0, 1.0, v25, "IMPORTANT: Only applies in levels that do not have global wind.  Will be deprecated shortly.");
  v18 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v26 = 68;
  if ( !v18 )
    v26 = 140;
  DVARFLT_cg_defaultWindStrength = Dvar_RegisterFloat("NQTLPTNSSO", 1.0, 0.0, 600.0, v26, "IMPORTANT: Only applies in levels that do not have global wind.  Will be deprecated shortly. Scale of the global wind direction (inches/sec)");
  v18 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v27 = 68;
  if ( !v18 )
    v27 = 140;
  DVARFLT_cg_defaultWindAreaScale = Dvar_RegisterFloat("LQLSPQOPKM", 50.0, -100.0, 100.0, v27, "Scales distribution of wind motion");
  v18 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v28 = 68;
  if ( !v18 )
    v28 = 140;
  DVARFLT_cg_defaultWindAmplitudeScale = Dvar_RegisterFloat("MQPQKNPQOK", 1.0, -100.0, 100.0, v28, "Scales amplitude of wind wave motion");
  v18 = (unsigned __int8)Com_GameMode_GetActiveGameMode() == HALF;
  v29 = 68;
  if ( !v18 )
    v29 = 140;
  DVARFLT_cg_defaultWindFrequencyScale = Dvar_RegisterFloat("MRNRKKOPLN", 1.0, -100.0, 100.0, v29, "Scales frequency of wind wave motion");
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF )
    v1 = 140;
  DVARFLT_cg_defaultWindNoiseScale = Dvar_RegisterFloat("OLSKLTPPMR", 0.69999999, 0.0, 1.0, v1, "Scales conic noise of wind wave motion");
}

/*
==============
CG_MainSP_RegisterGraphics
==============
*/

void __fastcall CG_MainSP_RegisterGraphics(const char *mapname, double _XMM1_8)
{
  __m256i v3; 
  ClConfigStrings *ClConfigStrings; 
  int i; 
  const char *v9; 
  const char *v10; 
  CgDynamicMediaSP *CgDynamicMediaSP; 

  ProfLoad_Begin("Register code assets");
  cgMedia.tracerDefault = Tracer_Register("defaulttracer");
  cgMedia.tracerThermalOverrideMat = Material_RegisterHandle("gfx_tracer_thermal", IMAGE_TRACK_FX);
  cgMedia.laserDefault = Laser_Register("voidlaser");
  cgMedia.objectiveMaterials[0] = Material_RegisterHandle("objective", IMAGE_TRACK_HUD);
  cgMedia.damageMaterialStun = Material_RegisterHandle("hit_direction_stun", IMAGE_TRACK_HUD);
  cgMedia.damageMaterialArmor = Material_RegisterHandle("hit_direction_armor", IMAGE_TRACK_HUD);
  cgMedia.damageMaterialRicochet = Material_RegisterHandle("hit_direction_ricochet", IMAGE_TRACK_HUD);
  cgMedia.spaceshipTargetLock = Material_RegisterHandle("jet_hud_target_locked", IMAGE_TRACK_HUD);
  cgMedia.spaceshipTargetLocking = Material_RegisterHandle("jet_hud_target_locking", IMAGE_TRACK_HUD);
  cgMedia.grenadeIconFrag = Material_RegisterHandle("hud_icon_equipment_frag", IMAGE_TRACK_HUD);
  cgMedia.grenadeIconFlash = Material_RegisterHandle("hud_flashbangicon", IMAGE_TRACK_HUD);
  cgMedia.grenadeIconThrowBack = Material_RegisterHandle("hud_icon_grenade_throwback", IMAGE_TRACK_HUD);
  cgMedia.grenadePointer = Material_RegisterHandle("hud_icon_grenade_direction_indicator", IMAGE_TRACK_HUD);
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vpxor   xmm1, xmm1, xmm1
  }
  cgMedia.offscreenObjectivePointer = Material_RegisterHandle("hud_offscreenobjectivepointer", IMAGE_TRACK_HUD);
  cgMedia.objectiveBackgroundMissionTracked = NULL;
  *(__m256i *)&cgMedia.objectiveBackgroundDiamond = v3;
  *(_OWORD *)&cgMedia.objectiveBackgroundPentagon = _XMM1;
  cgMedia.leanReticleHint = Material_RegisterHandle("reticle_lean_hint", IMAGE_TRACK_HUD);
  cgMedia.vehCenterCircle = Material_RegisterHandle("veh_centercircle", IMAGE_TRACK_HUD);
  cgMedia.vehMovingCircle = Material_RegisterHandle("veh_movingcircle", IMAGE_TRACK_HUD);
  cgMedia.vehHudLine = Material_RegisterHandle("veh_hud_line", IMAGE_TRACK_HUD);
  cgMedia.vehBouncingDiamondReticle = Material_RegisterHandle((const char *)&queryFormat.fmt + 3, IMAGE_TRACK_HUD);
  cgMedia.hud_callsign_bg = Material_RegisterHandle("hud_callsign_bg", IMAGE_TRACK_HUD);
  cgMedia.compass.self_arrow = Image_Register("icon_minimap_player", IMAGE_TRACK_HUD);
  cgMedia.hiddenViewArms = R_RegisterModel("viewmodel_mp_hidden");
  if ( !Com_GameMode_SupportsFeature(WEAPON_STUNNED_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_main_sp.cpp", 385, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::HUD_NVG_DRAWING ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::HUD_NVG_DRAWING )") )
    __debugbreak();
  cgMedia.hudIconNVG = Material_RegisterHandle("icon_equip_goggles", IMAGE_TRACK_HUD);
  ProfLoad_End();
  ProfLoad_Begin("Register items");
  CG_Weapons_PrecacheMedia();
  ProfLoad_End();
  ProfLoad_Begin("Register server models");
  ClConfigStrings = ClConfigStrings::GetClConfigStrings();
  for ( i = 1; i < 2048; ++i )
  {
    v9 = ClConfigStrings->GetModelString(ClConfigStrings, i);
    v10 = v9;
    if ( !*v9 )
      break;
    if ( DB_DoesXModelExist(v9) )
      R_RegisterModel(v10);
    else
      R_RegisterCompositeModel(v10);
  }
  ProfLoad_End();
  ProfLoad_Begin("Register known effects");
  cgMedia.impactFx = NULL;
  cgMedia.surfaceFx = NULL;
  CgDynamicMediaSP = CgDynamicMediaSP::GetCgDynamicMediaSP();
  CgDynamicMediaSP::LoadFx(CgDynamicMediaSP);
  ProfLoad_End();
  ProfLoad_Begin("Register shellshocks");
  CG_Main_PrecacheShellshocks();
  if ( !BG_LoadShellShockDvars("hold_breath") )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1443157E0, 25i64);
  ProfLoad_End();
  ProfLoad_Begin("Register impact effects");
  FX_LoadEffect("vfx/code/impacts/flesh_hit_noblood.vfx", &cgMedia.fxNoBloodFleshHit);
  FX_LoadEffect("vfx/code/impacts/flesh_hit_knife.vfx", &cgMedia.fxKnifeBlood);
  FX_LoadEffect("vfx/code/impacts/flesh_hit_knife_noblood.vfx", &cgMedia.fxKnifeNoBlood);
  CG_Main_RegisterSurfaceEffects(mapname);
  FX_LoadEffect("vfx/code/impacts/riotshield_viewmodel_hit.vfx", &cgMedia.fxRiotShieldImpact);
  FX_LoadEffect("vfx/code/impacts/riotshield_damaged_viewmodel_hit.vfx", &cgMedia.fxRiotShieldDamagedImpact);
  FX_LoadEffect("vfx/code/impacts/blood_on_riotshield.vfx", &cgMedia.fxBloodOnRiotshield);
  FX_LoadEffect("vfx/code/equipment/riot_shield_dmg.vfx", &cgMedia.fxRiotShieldDestroyed);
  FX_LoadEffect("vfx/iw8/char/blood/vfx_deathfx_bloodpool_01.vfx", &cgMedia.fxBloodPool);
  CG_GameInterface_MainSP_RegisterGraphics(mapname);
  CG_GameInterface_MainSP_RegisterSounds(mapname);
  ProfLoad_End();
  if ( *CL_GetConfigString(15) == 49 )
  {
    ProfLoad_Begin("Register night vision assets");
    cgMedia.nightVisionGoggles = R_RegisterModel("offhand_vm_nvg_on");
    FX_LoadEffect("vfx/iw8/core/nvg/vfx_nvg_light_player.vfx", &cgMedia.fxNightVisionAreaLight);
    FX_LoadEffect("vfx/iw8/core/nvg/vfx_nvg_light_player_alt.vfx", &cgMedia.fxNightVisionAreaLightAlt);
    ProfLoad_End();
  }
}

/*
==============
CG_MainSP_ReloadSpecificClientSideAnimationSystems
==============
*/
void CG_MainSP_ReloadSpecificClientSideAnimationSystems(void)
{
  s_animHunkUser = CL_Main_GetHunkUser();
  if ( !s_animHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_main_sp.cpp", 595, ASSERT_TYPE_ASSERT, "(s_animHunkUser)", (const char *)&queryFormat, "s_animHunkUser") )
    __debugbreak();
  BG_TurretAnim_FindAnims(0);
  s_animHunkUser = NULL;
}

/*
==============
CG_MainSP_Shutdown
==============
*/
void CG_MainSP_Shutdown(void)
{
  __int64 OnlyLocalClientNum; 
  cg_t *LocalClientGlobals; 
  CgWeaponSystemSP *WeaponSystemSP; 
  CgCompassSystemSP *CompassSystemSP; 
  CgPlayer_Asm *v4; 
  Physics_WorldId v5; 
  Physics_WorldId i; 
  __int64 v7; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  int v11; 
  int v12; 

  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  SND_FadeAllSounds(1.0, 0);
  CG_Rumble_StopAll((LocalClientNum_t)OnlyLocalClientNum);
  Physics_WaitForAllCommandsToFinish();
  CG_Entity_PhysicsClearPostAssetChange((const LocalClientNum_t)OnlyLocalClientNum);
  CG_Main_FreePhysics((LocalClientNum_t)OnlyLocalClientNum);
  CG_Main_FreeRagdolls((LocalClientNum_t)OnlyLocalClientNum);
  CG_Main_FreeCloth((LocalClientNum_t)OnlyLocalClientNum);
  CgAntiLag::ResetClientHistory((const LocalClientNum_t)OnlyLocalClientNum);
  Ragdoll_Unregister((LocalClientNum_t)OnlyLocalClientNum);
  if ( CG_Cloth_Legs_IsInitialized((const LocalClientNum_t)OnlyLocalClientNum) )
    CG_Cloth_Legs_Shutdown((const LocalClientNum_t)OnlyLocalClientNum);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)OnlyLocalClientNum);
  cg_t::FreeViewModelHands(LocalClientGlobals);
  cg_t::FreePlayerLegs(LocalClientGlobals);
  if ( (_BYTE)CgClientSideEffectsSystem::ms_allocatedType != HALF )
  {
    v11 = (unsigned __int8)CgClientSideEffectsSystem::ms_allocatedType;
    v9 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 388, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE)", "%s\n\tCgClientSideEffectsSystem::ClearClientSideEffectsSystemCommon: Trying to clear client-side effects system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE", v9, v11) )
      __debugbreak();
  }
  if ( (unsigned int)OnlyLocalClientNum >= CgClientSideEffectsSystem::ms_allocatedCount )
  {
    LODWORD(v8) = CgClientSideEffectsSystem::ms_allocatedCount;
    LODWORD(v7) = OnlyLocalClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 389, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  CgClientSideEffectsSystem::ClearMemory(CgClientSideEffectsSystem::ms_cseSystemArray[OnlyLocalClientNum]);
  if ( (_BYTE)CgClientSideEffectsSystem::ms_allocatedType != HALF )
  {
    v12 = (unsigned __int8)CgClientSideEffectsSystem::ms_allocatedType;
    LODWORD(v10) = 1;
    LODWORD(v8) = OnlyLocalClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 321, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE)", "%s\n\tTrying to access the client-side effects system for localClientNum %d but the client-side effects system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE", v8, v10, v12) )
      __debugbreak();
  }
  if ( (unsigned int)OnlyLocalClientNum >= CgClientSideEffectsSystem::ms_allocatedCount )
  {
    LODWORD(v8) = CgClientSideEffectsSystem::ms_allocatedCount;
    LODWORD(v7) = OnlyLocalClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( !CgClientSideEffectsSystem::ms_cseSystemArray[OnlyLocalClientNum] )
  {
    LODWORD(v8) = OnlyLocalClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 323, ASSERT_TYPE_ASSERT, "(ms_cseSystemArray[localClientNum])", "%s\n\tTrying to access unallocated client-side effects system for localClientNum %d\n", "ms_cseSystemArray[localClientNum]", v8) )
      __debugbreak();
  }
  CgClientSideEffectsSystem::Shutdown(CgClientSideEffectsSystem::ms_cseSystemArray[OnlyLocalClientNum]);
  WeaponSystemSP = CgWeaponSystemSP::GetWeaponSystemSP((const LocalClientNum_t)OnlyLocalClientNum);
  CgWeaponSystemSP::ShutdownViewModel(WeaponSystemSP);
  Com_FreeWeaponInfoMemory(2);
  SV_TransientsSP_ShutdownLevel();
  CG_ModelPreviewerDestroyDevGui();
  CG_CreateFx_DestroyDevGui();
  CG_Glass_Shutdown();
  CompassSystemSP = CgCompassSystemSP::GetCompassSystemSP((const LocalClientNum_t)OnlyLocalClientNum);
  CgCompassSystemSP::ShutdownCompass(CompassSystemSP);
  FX_Dismemberment_Shutdown((LocalClientNum_t)OnlyLocalClientNum);
  FX_WaitKillAllEffects((LocalClientNum_t)OnlyLocalClientNum, 1);
  FX_ShutdownSystem((LocalClientNum_t)OnlyLocalClientNum);
  DynEntCl_Shutdown((LocalClientNum_t)OnlyLocalClientNum);
  ScriptableCl_Shutdown((const LocalClientNum_t)OnlyLocalClientNum);
  CG_Particle_ClearParticleDeferredPhysics((LocalClientNum_t)OnlyLocalClientNum, 0);
  CG_ClientCharacter_Shutdown((const LocalClientNum_t)OnlyLocalClientNum);
  CG_ClientWeapon_Shutdown();
  if ( (_BYTE)CgPredictedEntitySystem::ms_allocatedType != HALF )
  {
    LODWORD(v10) = (unsigned __int8)CgPredictedEntitySystem::ms_allocatedType;
    LODWORD(v8) = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 297, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::SYSTEM_TYPE)", "%s\n\tCgPredictedEntitySystem::ClearSystemCommon: Trying to clear predicted entity system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::SYSTEM_TYPE", v8, v10) )
      __debugbreak();
  }
  if ( (unsigned int)OnlyLocalClientNum >= CgPredictedEntitySystem::ms_allocatedCount )
  {
    LODWORD(v8) = CgPredictedEntitySystem::ms_allocatedCount;
    LODWORD(v7) = OnlyLocalClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_predictedentity.h", 298, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  CgPredictedEntitySystem::Shutdown(CgPredictedEntitySystem::ms_systemsArray[OnlyLocalClientNum]);
  ((void (__fastcall *)(CgPredictedEntitySystem *, _QWORD))CgPredictedEntitySystem::ms_systemsArray[OnlyLocalClientNum]->~BgPredictedEntitySystem)(CgPredictedEntitySystem::ms_systemsArray[OnlyLocalClientNum], 0i64);
  memset_0(CgPredictedEntitySystem::ms_systemsArray[OnlyLocalClientNum], 0, sizeof(CgPredictedEntitySystem));
  CgPredictedEntitySystemSP::CgPredictedEntitySystemSP((CgPredictedEntitySystemSP *)CgPredictedEntitySystem::ms_systemsArray[OnlyLocalClientNum], (const LocalClientNum_t)OnlyLocalClientNum);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    BG_AnimationMP_ShutdownAnimations();
  CG_MainSP_FreePlayerAnimTreeInstances((LocalClientNum_t)OnlyLocalClientNum);
  BG_ShutDownTurretAnims(0);
  if ( PlayerASM_IsEnabled() )
  {
    v4 = CgPlayer_Asm::Singleton((const LocalClientNum_t)OnlyLocalClientNum);
    BgPlayer_Asm::Shutdown(v4, 0);
  }
  SND_SubmixClearAllFromSource(SND_SUBMIX_TYPE_GAMECODE, 0.0);
  LUITraceRunner::Shutdown((LocalClientNum_t)OnlyLocalClientNum);
  CG_ViewMotion_ClearCinematicMotionAssets();
  AnimVisualizer_Terminate();
  CG_PlayerFade_Shutdown((const LocalClientNum_t)OnlyLocalClientNum);
  if ( CG_Cloth_Entity_IsInitialized((const LocalClientNum_t)OnlyLocalClientNum) )
    CG_Cloth_Entity_Shutdown((const LocalClientNum_t)OnlyLocalClientNum);
  if ( CG_Cloth_Legs_IsInitialized((const LocalClientNum_t)OnlyLocalClientNum) )
    CG_Cloth_Legs_Shutdown((const LocalClientNum_t)OnlyLocalClientNum);
  if ( CG_ClientModel_IsClientInitialized((const LocalClientNum_t)OnlyLocalClientNum) )
    CG_ClientModel_ShutdownClient((const LocalClientNum_t)OnlyLocalClientNum);
  if ( Cloth_HasGlobalWorld(OnlyLocalClientNum) )
    Cloth_DestroyGlobalWorld(OnlyLocalClientNum);
  if ( Physics_AreClientWorldsCreated() )
  {
    v5 = 3 * OnlyLocalClientNum + 2;
    for ( i = 3 * OnlyLocalClientNum + 4; i >= v5; --i )
    {
      StaticModels_ShutdownCollision(i);
      WorldCollision_ShutdownCollision(i);
    }
    Physics_DestroyClientWorlds();
  }
  CG_ConsoleCmds_Unregister();
  CG_ConsoleCmdsSP_Unregister();
  BG_RadiantLiveEnable(0);
  CG_ShutdownClientSideTriggers((LocalClientNum_t)OnlyLocalClientNum);
}

