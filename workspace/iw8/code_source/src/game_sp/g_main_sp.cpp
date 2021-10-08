/*
==============
G_MainSP_GetPreviousTime
==============
*/

int __fastcall G_MainSP_GetPreviousTime()
{
  return ?G_MainSP_GetPreviousTime@@YAHXZ();
}

/*
==============
G_MainSP_ClearLowHunk
==============
*/

void G_MainSP_ClearLowHunk(void)
{
  ?G_MainSP_ClearLowHunk@@YAXXZ();
}

/*
==============
G_MainSP_UpdateLevelStartPlayerStreaming
==============
*/

void G_MainSP_UpdateLevelStartPlayerStreaming(void)
{
  ?G_MainSP_UpdateLevelStartPlayerStreaming@@YAXXZ();
}

/*
==============
G_MainSP_RunFrame
==============
*/

ServerFrameSmoothStatus __fastcall G_MainSP_RunFrame(ServerFrameExtent extent, unsigned int timeCap)
{
  return ?G_MainSP_RunFrame@@YA?AW4ServerFrameSmoothStatus@@W4ServerFrameExtent@@I@Z(extent, timeCap);
}

/*
==============
G_MainSP_RunPreFrame
==============
*/

void G_MainSP_RunPreFrame(void)
{
  ?G_MainSP_RunPreFrame@@YAXXZ();
}

/*
==============
G_MainSP_GetFramePos
==============
*/

int __fastcall G_MainSP_GetFramePos()
{
  return ?G_MainSP_GetFramePos@@YAHXZ();
}

/*
==============
G_MainSP_GetServerSnapTime
==============
*/

int __fastcall G_MainSP_GetServerSnapTime()
{
  return ?G_MainSP_GetServerSnapTime@@YAHXZ();
}

/*
==============
G_MainSP_FreeEntities
==============
*/

void G_MainSP_FreeEntities(void)
{
  ?G_MainSP_FreeEntities@@YAXXZ();
}

/*
==============
G_MainSP_IsDemoSaveGame
==============
*/

int __fastcall G_MainSP_IsDemoSaveGame()
{
  return ?G_MainSP_IsDemoSaveGame@@YAHXZ();
}

/*
==============
G_MainSP_ReadClientMessages
==============
*/

void G_MainSP_ReadClientMessages(void)
{
  ?G_MainSP_ReadClientMessages@@YAXXZ();
}

/*
==============
G_MainSP_SetNextMap
==============
*/

void __fastcall G_MainSP_SetNextMap(const char *mapname)
{
  ?G_MainSP_SetNextMap@@YAXPEBD@Z(mapname);
}

/*
==============
G_MainSP_XAnimUpdateEnt
==============
*/

void __fastcall G_MainSP_XAnimUpdateEnt(gentity_s *ent)
{
  ?G_MainSP_XAnimUpdateEnt@@YAXPEAUgentity_s@@@Z(ent);
}

/*
==============
G_MainSP_GetGameMemoryAllocationSize
==============
*/

unsigned int __fastcall G_MainSP_GetGameMemoryAllocationSize(const unsigned int maxClients)
{
  return ?G_MainSP_GetGameMemoryAllocationSize@@YAII@Z(maxClients);
}

/*
==============
G_MainSP_RunPreFrameForDemo
==============
*/

void G_MainSP_RunPreFrameForDemo(void)
{
  ?G_MainSP_RunPreFrameForDemo@@YAXXZ();
}

/*
==============
G_MainSP_LoadNextMap
==============
*/

void G_MainSP_LoadNextMap(void)
{
  ?G_MainSP_LoadNextMap@@YAXXZ();
}

/*
==============
G_MainSP_LoadLevel
==============
*/

void G_MainSP_LoadLevel(void)
{
  ?G_MainSP_LoadLevel@@YAXXZ();
}

/*
==============
G_MainSP_CheckLoadGame
==============
*/

void __fastcall G_MainSP_CheckLoadGame(int checksum, SaveGame *save)
{
  ?G_MainSP_CheckLoadGame@@YAXHPEAUSaveGame@@@Z(checksum, save);
}

/*
==============
G_MainSP_ShouldLoadScripts
==============
*/

bool __fastcall G_MainSP_ShouldLoadScripts()
{
  return ?G_MainSP_ShouldLoadScripts@@YA_NXZ();
}

/*
==============
G_MainSP_SendClientMessages
==============
*/

void G_MainSP_SendClientMessages(void)
{
  ?G_MainSP_SendClientMessages@@YAXXZ();
}

/*
==============
G_MainSP_CheckSoundsFinish
==============
*/

void G_MainSP_CheckSoundsFinish(void)
{
  ?G_MainSP_CheckSoundsFinish@@YAXXZ();
}

/*
==============
G_MainSP_AllocateGameMemory
==============
*/

void __fastcall G_MainSP_AllocateGameMemory(HunkUser *hunkUser, const unsigned int maxClients)
{
  ?G_MainSP_AllocateGameMemory@@YAXPEAUHunkUser@@I@Z(hunkUser, maxClients);
}

/*
==============
G_MainSP_ShutdownGameMemory
==============
*/

void G_MainSP_ShutdownGameMemory(void)
{
  ?G_MainSP_ShutdownGameMemory@@YAXXZ();
}

/*
==============
G_MainSP_InitGame
==============
*/

int __fastcall G_MainSP_InitGame(unsigned int randomSeed, int restart, int checksum, int loadScripts, int *savegame, SaveGame **save, const int frameDuration)
{
  return ?G_MainSP_InitGame@@YAHIHHHPEAHPEAPEAUSaveGame@@H@Z(randomSeed, restart, checksum, loadScripts, savegame, save, frameDuration);
}

/*
==============
G_MainSP_SetPausedTime
==============
*/

void G_MainSP_SetPausedTime(void)
{
  ?G_MainSP_SetPausedTime@@YAXXZ();
}

/*
==============
G_MainSP_IsNextMapWaiting
==============
*/

bool __fastcall G_MainSP_IsNextMapWaiting()
{
  return ?G_MainSP_IsNextMapWaiting@@YA_NXZ();
}

/*
==============
G_MainSP_SetAnimTimeFromLevel
==============
*/

void G_MainSP_SetAnimTimeFromLevel(void)
{
  ?G_MainSP_SetAnimTimeFromLevel@@YAXXZ();
}

/*
==============
G_MainSP_ShutdownGame
==============
*/

void __fastcall G_MainSP_ShutdownGame(int clearScripts, bool clearDvars)
{
  ?G_MainSP_ShutdownGame@@YAXH_N@Z(clearScripts, clearDvars);
}

/*
==============
G_GameSP_NotifyTriggers
==============
*/
__int64 G_GameSP_NotifyTriggers()
{
  unsigned int v0; 
  int v1; 
  trigger_info_t *currentTriggerList; 
  __int64 entnum; 
  __int64 v6; 
  __int64 v7; 
  gentity_s *v8; 
  __int64 otherEntnum; 
  gentity_s *v10; 
  __int64 v11; 
  __int64 v15; 
  __int64 v16; 

  ++level.triggerIndex;
  v0 = 0;
  v1 = 0;
  if ( level.currentTriggerListSize > 0 )
  {
    currentTriggerList = level.currentTriggerList;
    _RDX = &level;
    while ( 1 )
    {
      entnum = currentTriggerList->entnum;
      _R13 = currentTriggerList;
      v6 = entnum;
      v7 = entnum;
      v8 = &g_entities[entnum];
      if ( v8->useCount != currentTriggerList->useCount )
        goto LABEL_35;
      if ( (unsigned int)entnum >= 0x800 )
      {
        LODWORD(v16) = 2048;
        LODWORD(v15) = entnum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v7].r.isInUse != g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 3011, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( entnum ))", (const char *)&queryFormat, "G_IsEntityInUse( entnum )") )
        __debugbreak();
      otherEntnum = currentTriggerList->otherEntnum;
      v10 = &g_entities[otherEntnum];
      if ( v10->useCount != currentTriggerList->otherUseCount )
        goto LABEL_34;
      v11 = currentTriggerList->otherEntnum;
      if ( (unsigned int)otherEntnum >= 0x800 )
      {
        LODWORD(v16) = 2048;
        LODWORD(v15) = currentTriggerList->otherEntnum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v11].r.isInUse != g_entityIsInUse[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 3017, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( trigger_info->otherEntnum ))", (const char *)&queryFormat, "G_IsEntityInUse( trigger_info->otherEntnum )") )
        __debugbreak();
      _RDX = &level;
      if ( level.entTriggerIndex[v6] != level.triggerIndex )
        break;
      v0 = 1;
LABEL_36:
      ++v1;
      ++currentTriggerList;
      if ( v1 >= level.currentTriggerListSize )
        return v0;
    }
    level.entTriggerIndex[v6] = level.triggerIndex;
    if ( GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::TestFlagInternal(&v8->flags, ACTIVE, 0x11u) )
      G_Utils_FreeEntityDelay(v8);
    GScr_AddEntity(v10);
    GScr_Notify(v8, scr_const.trigger, 1u);
LABEL_34:
    _RDX = &level;
LABEL_35:
    --v1;
    --level.currentTriggerListSize;
    --currentTriggerList;
    _RCX = level.currentTriggerListSize;
    __asm
    {
      vmovsd  xmm0, qword ptr [rdx+rcx*4+3D88h]
      vmovsd  qword ptr [r13+0], xmm0
    }
    _R13->otherUseCount = level.currentTriggerList[_RCX].otherUseCount;
    goto LABEL_36;
  }
  return v0;
}

/*
==============
G_MainSP_AllocateGameMemory
==============
*/
void G_MainSP_AllocateGameMemory(HunkUser *hunkUser, const unsigned int maxClients)
{
  __int64 v2; 
  GStaticSP *v4; 
  __int64 v5; 
  GameScriptData *v6; 
  GAntiLagSP *v7; 
  GAntiLag *v8; 
  char *v9; 
  unsigned int v10; 
  GTurret **v11; 
  GTurret *v12; 
  GMovingPlatforms *v13; 
  GConfigStrings *v14; 
  GBullet *v15; 
  GClientSystem *v16; 
  gclient_s *v17; 
  GCombatSP *v18; 
  GCombat *v19; 
  GItems *v20; 
  GBallistics *v21; 
  GMissileSP *v22; 
  GMissile *v23; 
  GUtilsSP *v24; 
  GUtils *v25; 
  GWeapon *v26; 
  GVehicles *v27; 
  GSave *v28; 
  GSaveMemory *v29; 
  GScript *v30; 
  GTargetAssistSP *v31; 
  GTargetAssist *v32; 
  GPredictedEntitySystem *v33; 
  sentient_info_t *v34; 
  actor_s *v35; 
  __int64 v36; 
  int v37; 

  v2 = maxClients;
  if ( (_BYTE)GStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_static_sp.h", 84, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( *(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_static_sp.h", 85, ASSERT_TYPE_ASSERT, "( ms_gameStatics == 0 )", (const char *)&queryFormat, "ms_gameStatics == NULL") )
    __debugbreak();
  v4 = (GStaticSP *)Mem_HunkUser_AllocInternal(hunkUser, 0x8708ui64, 8ui64, "GStaticSP::AllocateMemorySP");
  GStaticSP::GStaticSP(v4);
  *(_QWORD *)&GStatic::ms_gameStatics = v5;
  LOBYTE(GStatic::ms_allocatedType) = 1;
  if ( (_BYTE)GameScriptData::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 103, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 104, ASSERT_TYPE_ASSERT, "( ms_gScriptData == 0 )", (const char *)&queryFormat, "ms_gScriptData == NULL") )
    __debugbreak();
  v6 = (GameScriptData *)Mem_HunkUser_AllocInternal(hunkUser, 0x3980ui64, 8ui64, "GameScriptData::AllocateGameScriptDataMemoryCommon");
  memset_0(&v6[1], 0, 0x393Cui64);
  *(_QWORD *)&v6->levelscript = 0i64;
  *(_QWORD *)&v6->initstructs = 0i64;
  *(_QWORD *)&v6->bt_getfunction = 0i64;
  *(_QWORD *)&v6->scriptable_postinit = 0i64;
  *(_QWORD *)&v6->riotshield_damaged = 0i64;
  *(_QWORD *)&v6->scriptable_notify_callback = 0i64;
  *(_QWORD *)&v6->ai_asm_getfunction = 0i64;
  *(_QWORD *)&v6->ai_asm_getgenerichandler = 0i64;
  v6->lui_callback = 0;
  GameScriptData::ms_gScriptData = v6;
  LOBYTE(GameScriptData::ms_allocatedType) = 1;
  if ( BYTE1(GameScriptData::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 227, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 228, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData == 0 )", (const char *)&queryFormat, "ms_gAntiLagData == NULL") )
    __debugbreak();
  v7 = (GAntiLagSP *)Mem_HunkUser_AllocInternal(hunkUser, 0x195400ui64, 8ui64, "GAntiLag::AllocateAntiLagMemoryCommon");
  GAntiLagSP::GAntiLagSP(v7);
  GAntiLag::ms_gAntiLagData = v8;
  BYTE1(GameScriptData::ms_allocatedType) = 1;
  if ( (_BYTE)GTurret::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 248, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  v9 = (char *)Mem_HunkUser_AllocInternal(hunkUser, 0xA000ui64, 8ui64, "GTurret::AllocateMemory");
  memset_0(v9, 0, 0xA000ui64);
  v10 = 0;
  v11 = GTurret::ms_turretArray;
  do
  {
    if ( *v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 256, ASSERT_TYPE_ASSERT, "( !ms_turretArray[turretIndex] )", (const char *)&queryFormat, "!ms_turretArray[turretIndex]") )
      __debugbreak();
    v12 = (GTurret *)&v9[v10];
    memset_0(&v12->m_inuse, 0, 0x138ui64);
    v10 += 320;
    v12->__vftable = (GTurret_vtbl *)&GTurretSP::`vftable';
    *v11++ = v12;
  }
  while ( v10 < 0xA000 );
  LOBYTE(GTurret::ms_allocatedType) = 1;
  if ( GMovingPlatforms::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 225, ASSERT_TYPE_ASSERT, "( ms_instance == 0 )", (const char *)&queryFormat, "ms_instance == NULL") )
    __debugbreak();
  v13 = (GMovingPlatforms *)Mem_HunkUser_AllocInternal(hunkUser, 0x5550ui64, 8ui64, "GMovingPlatforms::AllocateMemory");
  memset_0(v13, 0, sizeof(GMovingPlatforms));
  GMovingPlatforms::GMovingPlatforms(v13);
  v13->__vftable = (GMovingPlatforms_vtbl *)&GMovingPlatformsSP::`vftable';
  GMovingPlatforms::ms_instance = v13;
  if ( (unsigned int)v2 > 0xF8 )
  {
    v37 = 248;
    LODWORD(v36) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 231, ASSERT_TYPE_ASSERT, "( moverClientCount ) <= ( ( sizeof( *array_counter( ms_instance->m_moverClientArray ) ) + 0 ) )", "moverClientCount <= ARRAY_COUNT( ms_instance->m_moverClientArray )\n\t%i, %i", v36, v37) )
      __debugbreak();
  }
  GMovingPlatforms::ms_instance->m_moverClientCount = v2;
  LOBYTE(GMovingPlatforms::ms_allocatedType) = 1;
  if ( (_BYTE)GConfigStrings::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 89, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 90, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings == 0 )", (const char *)&queryFormat, "ms_gConfigStrings == NULL") )
    __debugbreak();
  v14 = (GConfigStrings *)Mem_HunkUser_AllocInternal(hunkUser, 8ui64, 8ui64, "GConfigStrings::AllocateConfigStringsMemoryCommon");
  v14->__vftable = (GConfigStrings_vtbl *)&GConfigStringsSP::`vftable';
  GConfigStrings::ms_gConfigStrings = v14;
  LOBYTE(GConfigStrings::ms_allocatedType) = 1;
  if ( (_BYTE)GBullet::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 206, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GBullet::ms_gBulletSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 207, ASSERT_TYPE_ASSERT, "( ms_gBulletSystem == 0 )", (const char *)&queryFormat, "ms_gBulletSystem == NULL") )
    __debugbreak();
  v15 = (GBullet *)Mem_HunkUser_AllocInternal(hunkUser, 0x13C8ui64, 8ui64, "GBullet::AllocateMemory");
  memset_0(v15, 0, sizeof(GBullet));
  GBullet::GBullet(v15);
  v15->m_reduceSpreadShotCount = 1;
  v15->__vftable = (GBullet_vtbl *)&GBulletSP::`vftable';
  GBullet::ms_gBulletSystem = v15;
  LOBYTE(GBullet::ms_allocatedType) = 1;
  if ( (_BYTE)GClientSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 475, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GClientSystem::ms_gClientSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 476, ASSERT_TYPE_ASSERT, "( ms_gClientSystem == 0 )", (const char *)&queryFormat, "ms_gClientSystem == NULL") )
    __debugbreak();
  v16 = (GClientSystem *)Mem_HunkUser_AllocInternal(hunkUser, 0x18ui64, 8ui64, "GClientSystem::AllocateMemory");
  v16->__vftable = NULL;
  v16->m_clientsData = NULL;
  *(_QWORD *)&v16->m_clientsDataCount = 0i64;
  v17 = (gclient_s *)Mem_HunkUser_AllocInternal(hunkUser, 64592 * v2, 8ui64, "GClientSystem::AllocateMemory");
  DebugWipe(v17, 64592 * v2);
  *(_QWORD *)&v16->m_clientsDataCount = 0i64;
  v16->__vftable = (GClientSystem_vtbl *)&GClientSystemSP::`vftable';
  GClientSystem::ms_gClientSystem = v16;
  v16->m_clientsData = v17;
  GClientSystem::ms_gClientSystem->m_clientsDataCount = v2;
  LOBYTE(GClientSystem::ms_allocatedType) = 1;
  if ( (_BYTE)GCombat::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 195, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GCombat::ms_gCombatSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 196, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem == 0 )", (const char *)&queryFormat, "ms_gCombatSystem == NULL") )
    __debugbreak();
  v18 = (GCombatSP *)Mem_HunkUser_AllocInternal(hunkUser, 0x107F8ui64, 8ui64, "GCombat::AllocateMemory");
  memset_0(v18, 0, sizeof(GCombatSP));
  GCombatSP::GCombatSP(v18);
  GCombat::ms_gCombatSystem = v19;
  LOBYTE(GCombat::ms_allocatedType) = 1;
  if ( (_BYTE)GItems::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 100, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GItems::ms_gItemsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 101, ASSERT_TYPE_ASSERT, "( ms_gItemsSystem == 0 )", (const char *)&queryFormat, "ms_gItemsSystem == NULL") )
    __debugbreak();
  v20 = (GItems *)Mem_HunkUser_AllocInternal(hunkUser, 0x10ui64, 8ui64, "GItems::AllocateMemory");
  *(_QWORD *)&v20->m_shouldUpdateDObjOnSpawn = 0i64;
  v20->__vftable = (GItems_vtbl *)&GItemsSP::`vftable';
  v20->m_shouldUpdateDObjOnSpawn = 1;
  GItems::ms_gItemsSystem = v20;
  LOBYTE(GItems::ms_allocatedType) = 1;
  if ( (_BYTE)GBallistics::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.h", 102, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GBallistics::ms_gBallisticsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.h", 103, ASSERT_TYPE_ASSERT, "( ms_gBallisticsSystem == 0 )", (const char *)&queryFormat, "ms_gBallisticsSystem == NULL") )
    __debugbreak();
  v21 = (GBallistics *)Mem_HunkUser_AllocInternal(hunkUser, 0x29060ui64, 8ui64, "GBallistics::AllocateMemory");
  v21->m_firstFree = NULL;
  v21->m_lastFree = NULL;
  *(_QWORD *)&v21->m_numSlotsActive = 0i64;
  memset_0(v21->m_ballisticInstances, 0, sizeof(v21->m_ballisticInstances));
  v21->__vftable = (GBallistics_vtbl *)&GBallisticsSP::`vftable';
  GBallistics::ms_gBallisticsSystem = v21;
  LOBYTE(GBallistics::ms_allocatedType) = 1;
  if ( (_BYTE)GMissile::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 275, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GMissile::ms_gMissileSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 276, ASSERT_TYPE_ASSERT, "( ms_gMissileSystem == 0 )", (const char *)&queryFormat, "ms_gMissileSystem == NULL") )
    __debugbreak();
  v22 = (GMissileSP *)Mem_HunkUser_AllocInternal(hunkUser, 0x18ui64, 8ui64, "GMissile::AllocateMemory");
  v22->__vftable = NULL;
  *(_QWORD *)&v22->m_grenadeLinkToMovingPlatformUsesTag = 0i64;
  *(_QWORD *)&v22->m_javelinOffsetRight = 0i64;
  GMissileSP::GMissileSP(v22);
  GMissile::ms_gMissileSystem = v23;
  LOBYTE(GMissile::ms_allocatedType) = 1;
  BgMissile::SRand(v23, 0x89ABCDEF);
  if ( (_BYTE)GUtils::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 130, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 131, ASSERT_TYPE_ASSERT, "( ms_gUtils == 0 )", (const char *)&queryFormat, "ms_gUtils == NULL") )
    __debugbreak();
  v24 = (GUtilsSP *)Mem_HunkUser_AllocInternal(hunkUser, 0x10ui64, 8ui64, "GUtils::AllocateMemory");
  v24->__vftable = NULL;
  *(_QWORD *)&v24->m_entitySpawnMinFreeTime = 0i64;
  GUtilsSP::GUtilsSP(v24);
  GUtils::ms_gUtils = v25;
  LOBYTE(GUtils::ms_allocatedType) = 1;
  if ( (_BYTE)GWeapon::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 92, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GWeapon::ms_gWeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 93, ASSERT_TYPE_ASSERT, "( ms_gWeaponSystem == 0 )", (const char *)&queryFormat, "ms_gWeaponSystem == NULL") )
    __debugbreak();
  v26 = (GWeapon *)Mem_HunkUser_AllocInternal(hunkUser, 8ui64, 8ui64, "GWeapon::AllocateMemory");
  v26->__vftable = (GWeapon_vtbl *)&GWeaponSP::`vftable';
  GWeapon::ms_gWeaponSystem = v26;
  LOBYTE(GWeapon::ms_allocatedType) = 1;
  GWeaponMap::AllocateMemory(hunkUser);
  if ( (_BYTE)GVehicles::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 592, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 593, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem == 0 )", (const char *)&queryFormat, "ms_gVehiclesSystem == NULL") )
    __debugbreak();
  v27 = (GVehicles *)Mem_HunkUser_AllocInternal(hunkUser, 0x109638ui64, 8ui64, "GVehicles::AllocateMemory");
  memset_0(&v27->m_vehiclePhysicsManager, 0, 0x109630ui64);
  v27->__vftable = (GVehicles_vtbl *)&GVehicles::`vftable';
  BgVehicleEventSystem::BgVehicleEventSystem(&v27->m_vehicleEventSystem);
  v27->m_vehicleEventSystem.__vftable = (GVehicleEventSystem_vtbl *)&GVehicleEventSystem::`vftable';
  GVehicleSuspendManager::GVehicleSuspendManager(&v27->m_suspendManager);
  v27->m_vehicleCollisionSystem.__vftable = (GVehicleCollisionSystem_vtbl *)&GVehicleCollisionSystem::`vftable';
  v27->m_scriptableDamageInfo.m_cursor = 0;
  v27->__vftable = (GVehicles_vtbl *)&GVehiclesSP::`vftable';
  GVehicles::ms_gVehiclesSystem = v27;
  GVehicles::PhysicsInit(v27);
  LOBYTE(GVehicles::ms_allocatedType) = 1;
  if ( BYTE2(GameScriptData::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_save.h", 100, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GSave::ms_gSave && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_save.h", 101, ASSERT_TYPE_ASSERT, "( ms_gSave == 0 )", (const char *)&queryFormat, "ms_gSave == NULL") )
    __debugbreak();
  v28 = (GSave *)Mem_HunkUser_AllocInternal(hunkUser, 8ui64, 8ui64, "GSave::AllocateMemory");
  v28->__vftable = (GSave_vtbl *)&GSaveSP::`vftable';
  GSave::ms_gSave = v28;
  GSave::ms_weaponNameSize = 256;
  BYTE2(GameScriptData::ms_allocatedType) = 1;
  if ( (_BYTE)GSaveMemory::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 231, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GSaveMemory::ms_gSaveMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 232, ASSERT_TYPE_ASSERT, "( ms_gSaveMemory == 0 )", (const char *)&queryFormat, "ms_gSaveMemory == NULL") )
    __debugbreak();
  v29 = (GSaveMemory *)Mem_HunkUser_AllocInternal(hunkUser, 0x17E0B00ui64, 0x80ui64, "GSaveMemory::AllocateMemory");
  memset_0(&v29[1], 0, 0x17E0AF8ui64);
  v29->__vftable = (GSaveMemory_vtbl *)&GSaveMemorySP::`vftable';
  GSaveMemory::ms_gSaveMemory = v29;
  LOBYTE(GSaveMemory::ms_allocatedType) = 1;
  if ( (_BYTE)GScript::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main.h", 201, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GScript::ms_gScriptSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main.h", 202, ASSERT_TYPE_ASSERT, "( ms_gScriptSystem == 0 )", (const char *)&queryFormat, "ms_gScriptSystem == NULL") )
    __debugbreak();
  v30 = (GScript *)Mem_HunkUser_AllocInternal(hunkUser, 8ui64, 8ui64, "GScript::AllocateMemory");
  v30->__vftable = (GScript_vtbl *)&GScriptSP::`vftable';
  GScript::ms_gScriptSystem = v30;
  LOBYTE(GScript::ms_allocatedType) = 1;
  if ( (_BYTE)GTargetAssist::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.h", 79, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GTargetAssist::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.h", 80, ASSERT_TYPE_ASSERT, "( ms_instance == 0 )", (const char *)&queryFormat, "ms_instance == NULL") )
    __debugbreak();
  v31 = (GTargetAssistSP *)Mem_HunkUser_AllocInternal(hunkUser, 0x330ui64, 8ui64, "GTargetAssist::AllocateMemory");
  memset_0(v31, 0, sizeof(GTargetAssistSP));
  GTargetAssistSP::GTargetAssistSP(v31);
  GTargetAssist::ms_instance = v32;
  LOBYTE(GTargetAssist::ms_allocatedType) = 1;
  if ( (_BYTE)GPredictedEntitySystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_predictedentity.h", 57, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( GPredictedEntitySystem::ms_gSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_predictedentity.h", 58, ASSERT_TYPE_ASSERT, "( ms_gSystem == 0 )", (const char *)&queryFormat, "ms_gSystem == NULL") )
    __debugbreak();
  v33 = (GPredictedEntitySystem *)Mem_HunkUser_AllocInternal(hunkUser, 0x10ui64, 8ui64, "GPredictedEntitySystem::AllocateMemory");
  v33->__vftable = NULL;
  *(_QWORD *)&v33->m_currentPredictionIndex = 0i64;
  BgPredictedEntitySystem::BgPredictedEntitySystem(v33);
  v33->__vftable = (GPredictedEntitySystem_vtbl *)&GPredictedEntitySystemSP::`vftable';
  GPredictedEntitySystem::ms_gSystem = v33;
  LOBYTE(GPredictedEntitySystem::ms_allocatedType) = 1;
  Ai_Asm::AllocateMemory(hunkUser);
  GPlayer_Asm::AllocateMemory(hunkUser, v2);
  Nav_AllocNavPower(hunkUser);
  G_GameInterface_OnAllocateGameMemory(hunkUser);
  G_PlayerUse_Allocate(hunkUser);
  G_Main_AllocateEntities(hunkUser);
  if ( s_actors && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 856, ASSERT_TYPE_ASSERT, "( s_actors == nullptr )", (const char *)&queryFormat, "s_actors == nullptr") )
    __debugbreak();
  s_actors = (actor_s *)Mem_HunkUser_AllocInternal(hunkUser, 0x23540ui64, 8ui64, "G_MainSP_AllocateInternalMemory");
  v34 = (sentient_info_t *)Mem_HunkUser_AllocInternal(hunkUser, 0x2A280ui64, 8ui64, "G_MainSP_AllocateInternalMemory");
  v35 = s_actors;
  s_actors->sentientInfo = v34;
  v35[1].sentientInfo = v34 + 71;
  v35[2].sentientInfo = v34 + 142;
  v35[3].sentientInfo = v34 + 213;
  v35[4].sentientInfo = v34 + 284;
  v35[5].sentientInfo = v34 + 355;
  v35[6].sentientInfo = v34 + 426;
  v35[7].sentientInfo = v34 + 497;
  v35[8].sentientInfo = v34 + 568;
  v35[9].sentientInfo = v34 + 639;
  v35[10].sentientInfo = v34 + 710;
  v35[11].sentientInfo = v34 + 781;
  v35[12].sentientInfo = v34 + 852;
  v35[13].sentientInfo = v34 + 923;
  v35[14].sentientInfo = v34 + 994;
  v35[15].sentientInfo = v34 + 1065;
  v35[16].sentientInfo = v34 + 1136;
  v35[17].sentientInfo = v34 + 1207;
  v35[18].sentientInfo = v34 + 1278;
  v35[19].sentientInfo = v34 + 1349;
  v35[20].sentientInfo = v34 + 1420;
  v35[21].sentientInfo = v34 + 1491;
  v35[22].sentientInfo = v34 + 1562;
  v35[23].sentientInfo = v34 + 1633;
  v35[24].sentientInfo = v34 + 1704;
  v35[25].sentientInfo = v34 + 1775;
  v35[26].sentientInfo = v34 + 1846;
  v35[27].sentientInfo = v34 + 1917;
  v35[28].sentientInfo = v34 + 1988;
  v35[29].sentientInfo = v34 + 2059;
  v35[30].sentientInfo = v34 + 2130;
  v35[31].sentientInfo = v34 + 2201;
  v35[32].sentientInfo = v34 + 2272;
  v35[33].sentientInfo = v34 + 2343;
  v35[34].sentientInfo = v34 + 2414;
  v35[35].sentientInfo = v34 + 2485;
  v35[36].sentientInfo = v34 + 2556;
  v35[37].sentientInfo = v34 + 2627;
}

/*
==============
G_MainSP_CheckLoadGame
==============
*/
void G_MainSP_CheckLoadGame(int checksum, SaveGame *save)
{
  loading_t loading; 
  bool v5; 

  loading = level.loading;
  if ( level.loading == LOADING_LEVEL )
    goto LABEL_6;
  if ( level.loading != LOADING_SAVEGAME )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 2462, ASSERT_TYPE_ASSERT, "((level.loading == LOADING_LEVEL) || (level.loading == LOADING_SAVEGAME))", (const char *)&queryFormat, "(level.loading == LOADING_LEVEL) || (level.loading == LOADING_SAVEGAME)") )
      __debugbreak();
    loading = level.loading;
LABEL_6:
    v5 = loading == LOADING_SAVEGAME;
    if ( loading != LOADING_SAVEGAME )
      goto LABEL_11;
  }
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 2466, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  SV_SaveSP_ClearPendingSaves();
  ProfLoad_Begin("G_LoadGame");
  G_SaveSP_LoadGame(checksum, save);
  ProfLoad_End();
  v5 = level.loading == LOADING_SAVEGAME;
LABEL_11:
  CL_MainSP_SetCurrentMapHasSaveGame(v5);
  SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, "snd_fade 1 0");
  SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, "scr_fade 0 0 0");
  SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, "clear_blur");
  SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, "time_slow 0 1 1");
  level.absoluteReloadDelayTime = 0;
  Dvar_SetInt_Internal(DVARINT_reloading, 0);
  level.loading = LOADING_DONE;
}

/*
==============
G_MainSP_CheckReloadStatus
==============
*/
void G_MainSP_CheckReloadStatus()
{
  gentity_s *v0; 
  const dvar_t *v1; 
  const char *v2; 
  const char *v3; 
  const char *v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  const char *v7; 
  const char *v8; 
  const dvar_t *v9; 

  if ( level.changelevel )
  {
    level.changelevel = 0;
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities->r.isInUse != *g_entityIsInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !*g_entityIsInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 1958, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( 0 ) )", (const char *)&queryFormat, "G_IsEntityInUse( 0 )") )
      __debugbreak();
    v0 = g_entities;
    if ( g_entities->classname != scr_const.player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 1960, ASSERT_TYPE_ASSERT, "(player->classname == scr_const.player)", (const char *)&queryFormat, "player->classname == scr_const.player") )
      __debugbreak();
    if ( v0->health > 0 )
    {
      v1 = DVARINT_reloading;
      if ( !DVARINT_reloading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "reloading") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v1);
      if ( !v1->current.integer )
      {
        if ( (DB_Zones_GetInUseFlags() & 0x100) == 0 )
        {
          v2 = j_va("scr_fade 1 %i %i", (unsigned int)level.time, (unsigned int)level.exitTime);
          SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v2);
          v3 = j_va("snd_fade 0 %d", (unsigned int)level.exitTime);
          SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, v3);
        }
        level.reloadDelayTime = level.exitTime + level.time;
        Dvar_SetInt_Internal(DVARINT_reloading, 4);
      }
    }
  }
  v4 = "disconnect";
  if ( level.bMissionForceFailed && level.absoluteReloadDelayTime && level.absoluteReloadDelayTime - Sys_Milliseconds() < 0 )
  {
    v5 = DVARINT_reloading;
    if ( !DVARINT_reloading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "reloading") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( !v5->current.integer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 2039, ASSERT_TYPE_ASSERT, "(Dvar_GetInt_Internal_DebugName( DVARINT_reloading, \"reloading\" ))", (const char *)&queryFormat, "Dvar_GetInt( reloading )") )
      __debugbreak();
    level.absoluteReloadDelayTime = 0;
    level.bMissionForceFailed = 0;
    Cbuf_AddText(LOCAL_CLIENT_0, "disconnect");
  }
  if ( level.reloadDelayTime && level.reloadDelayTime < level.time )
  {
    v6 = DVARINT_reloading;
    if ( !DVARINT_reloading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "reloading") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.integer != 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 2050, ASSERT_TYPE_ASSERT, "(G_MainSP_IsNextMapWaiting())", (const char *)&queryFormat, "G_MainSP_IsNextMapWaiting()") )
      __debugbreak();
    level.reloadDelayTime = 0;
    if ( level.bMissionSuccess )
    {
      level.bMissionSuccess = 0;
      if ( level.cinematic[0] )
        v4 = j_va("cinematic %s 0\n", level.cinematic);
      Cbuf_AddText(LOCAL_CLIENT_0, v4);
      level.cinematic[0] = 0;
    }
    else
    {
      if ( level.bMissionFailed )
      {
        level.bMissionFailed = 0;
        v7 = "loadgame_continue_missionfailed\n";
      }
      else if ( g_nextMap[0] )
      {
        v8 = "spdevmap %s\n";
        if ( !com_cheats->current.enabled )
          v8 = "spmap %s\n";
        v7 = j_va(v8, g_nextMap);
      }
      else
      {
        v7 = "disconnect\n";
      }
      Cbuf_AddText(LOCAL_CLIENT_0, v7);
    }
  }
  if ( level.absoluteReloadDelayTime && level.absoluteReloadDelayTime - Sys_Milliseconds() < 0 )
  {
    v9 = DVARINT_reloading;
    if ( !DVARINT_reloading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "reloading") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( !v9->current.integer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 2079, ASSERT_TYPE_ASSERT, "(Dvar_GetInt_Internal_DebugName( DVARINT_reloading, \"reloading\" ))", (const char *)&queryFormat, "Dvar_GetInt( reloading )") )
      __debugbreak();
    level.absoluteReloadDelayTime = 0;
    Cbuf_AddText(LOCAL_CLIENT_0, "loadgame_continue_missionfailed\n");
  }
}

/*
==============
G_MainSP_CheckSoundsFinish
==============
*/
void G_MainSP_CheckSoundsFinish(void)
{
  level.checkSoundsFinish = 1;
}

/*
==============
G_MainSP_ClearLowHunk
==============
*/
void G_MainSP_ClearLowHunk(void)
{
  __int64 v0; 
  XAnimTree *v1; 

  if ( level.loading == LOADING_SAVEGAME )
    XAnimDisableLeakCheck();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
      __debugbreak();
    v0 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, 0i64);
    v1 = *(XAnimTree **)(v0 + 2040);
    if ( v1 )
    {
      XAnimFreeTree(v1, NULL);
      *(_QWORD *)(v0 + 2040) = 0i64;
    }
  }
  GScrSP_ClearAITypeScriptTable();
  BG_ShutDownTurretAnims(1);
  G_Main_ClearLowHunk();
  AI_ShutdownWeaponAccuracyGraph();
  Com_FreeWeaponInfoMemory(1);
  Mem_HunkDebug_Reset();
}

/*
==============
G_MainSP_ClientDoPerFrameNotifies
==============
*/
void G_MainSP_ClientDoPerFrameNotifies(gentity_s *ent)
{
  gclient_s *client; 
  GWeaponMap *Instance; 
  unsigned int i; 
  const Weapon *Weapon; 
  bool v7; 
  scrContext_t *v9; 
  unsigned int lastStateFlags; 
  unsigned int v14; 
  int weaponState; 
  int v16; 
  scr_string_t end_firing; 
  scr_string_t begin_firing; 
  bool v19; 
  scr_string_t end_firing_left; 
  scr_string_t begin_firing_left; 
  bool v22; 
  scr_string_t sprint_end; 
  scr_string_t sprint_begin; 
  char v25; 
  char IsSprinting; 
  char v27; 
  bool v28; 
  scr_string_t sprint_slide_end; 
  scr_string_t sprint_slide_begin; 
  bool v31; 
  scr_string_t mantle_end; 
  bool v33; 
  scr_string_t mantle_start; 
  scr_string_t v35; 
  gentity_s *v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int v39; 
  unsigned int v40; 
  unsigned int v41; 
  int v42; 
  unsigned int v43; 
  scr_string_t night_vision_on; 
  bool v46; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 2522, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  client = ent->client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 2526, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 886, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  _RSI = BgWeaponMap::GetWeapon(Instance, client->ps.weapCommon.weaponHandle);
  for ( i = 0; i < 0xF; ++i )
  {
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    Weapon = BgWeaponMap::GetWeapon(Instance, client->ps.weaponsEquipped[i]);
    if ( !memcmp_0(_RSI, Weapon, 0x3Cui64) )
      break;
  }
  v7 = _RSI->weaponIdx && i != 15 && BG_HasUnderbarrelAmmo(_RSI) && client->ps.weapEquippedData[i].inAltMode;
  _RBX = &client->ns;
  if ( client == (gclient_s *)-24396i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 942, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  if ( memcmp_0(_RSI, &client->ns, 0x3Cui64) || v7 != (client->ns.lastStateFlags & 1) )
  {
    v9 = ScriptContext_Server();
    GScr_Weapon_AddParam(v9, _RSI, v7);
    GScr_Notify(ent, scr_const.weapon_change, 1u);
    __asm
    {
      vmovups ymm0, ymmword ptr [rsi]
      vmovups ymmword ptr [rbx], ymm0
      vmovups xmm1, xmmword ptr [rsi+20h]
      vmovups xmmword ptr [rbx+20h], xmm1
      vmovsd  xmm0, qword ptr [rsi+30h]
      vmovsd  qword ptr [rbx+30h], xmm0
    }
    *(_DWORD *)&client->ns.lastWeapon.weaponCamo = *(_DWORD *)&_RSI->weaponCamo;
    if ( client == (gclient_s *)-24396i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 951, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
      __debugbreak();
    lastStateFlags = client->ns.lastStateFlags;
    if ( v7 )
      v14 = lastStateFlags | 1;
    else
      v14 = lastStateFlags & 0xFFFFFFFE;
    client->ns.lastStateFlags = v14;
  }
  weaponState = client->ps.weapState[0].weaponState;
  v16 = client->ps.weapState[1].weaponState;
  end_firing = scr_const.end_firing;
  begin_firing = scr_const.begin_firing;
  if ( client == (gclient_s *)-24396i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 942, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  v19 = weaponState == 16 && client->ps.pm_type < 7;
  if ( v19 == ((client->ns.lastStateFlags & 2) != 0) )
  {
    v19 = (client->ns.lastStateFlags & 2) != 0;
  }
  else
  {
    if ( v19 )
      end_firing = begin_firing;
    GScr_Notify(ent, end_firing, 0);
  }
  end_firing_left = scr_const.end_firing_left;
  begin_firing_left = scr_const.begin_firing_left;
  if ( client == (gclient_s *)-24396i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 942, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  v22 = v16 == 16 && client->ps.pm_type < 7;
  if ( v22 == ((client->ns.lastStateFlags & 4) != 0) )
  {
    v22 = (client->ns.lastStateFlags & 4) != 0;
  }
  else
  {
    if ( v22 )
      end_firing_left = begin_firing_left;
    GScr_Notify(ent, end_firing_left, 0);
  }
  sprint_end = scr_const.sprint_end;
  sprint_begin = scr_const.sprint_begin;
  if ( client == (gclient_s *)-24396i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 942, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  v25 = (client->ns.lastStateFlags & 0x10) != 0;
  IsSprinting = PM_IsSprinting(&client->ps);
  v27 = IsSprinting;
  if ( IsSprinting == v25 )
  {
    v27 = v25;
  }
  else
  {
    if ( IsSprinting )
      sprint_end = sprint_begin;
    GScr_Notify(ent, sprint_end, 0);
  }
  v28 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&client->ps.pm_flags, ACTIVE, 0x1Du);
  sprint_slide_end = scr_const.sprint_slide_end;
  sprint_slide_begin = scr_const.sprint_slide_begin;
  v46 = v28;
  if ( client == (gclient_s *)-24396i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 942, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  if ( v46 == ((client->ns.lastStateFlags & 0x20) != 0) )
  {
    v46 = (client->ns.lastStateFlags & 0x20) != 0;
  }
  else
  {
    if ( v46 )
      sprint_slide_end = sprint_slide_begin;
    GScr_Notify(ent, sprint_slide_end, 0);
  }
  v31 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&client->ps.pm_flags, ACTIVE, 5u);
  mantle_end = scr_const.mantle_end;
  v33 = v31;
  mantle_start = scr_const.mantle_start;
  if ( client == (gclient_s *)-24396i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 942, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  if ( v33 == ((client->ns.lastStateFlags & 0x200) != 0) )
  {
    v36 = ent;
    v33 = (client->ns.lastStateFlags & 0x200) != 0;
  }
  else
  {
    if ( v33 )
      mantle_end = mantle_start;
    v35 = mantle_end;
    v36 = ent;
    GScr_Notify(ent, v35, 0);
  }
  if ( client == (gclient_s *)-24396i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 951, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  v37 = client->ns.lastStateFlags | 2;
  if ( !v19 )
    v37 = client->ns.lastStateFlags & 0xFFFFFFFD;
  client->ns.lastStateFlags = v37;
  if ( client == (gclient_s *)-24396i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 951, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  v38 = client->ns.lastStateFlags | 4;
  if ( !v22 )
    v38 = client->ns.lastStateFlags & 0xFFFFFFFB;
  client->ns.lastStateFlags = v38;
  if ( client == (gclient_s *)-24396i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 951, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  v39 = client->ns.lastStateFlags | 0x10;
  if ( !v27 )
    v39 = client->ns.lastStateFlags & 0xFFFFFFEF;
  client->ns.lastStateFlags = v39;
  if ( client == (gclient_s *)-24396i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 951, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  v40 = client->ns.lastStateFlags | 0x20;
  if ( !v46 )
    v40 = client->ns.lastStateFlags & 0xFFFFFFDF;
  client->ns.lastStateFlags = v40;
  if ( client == (gclient_s *)-24396i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 951, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
    __debugbreak();
  v41 = client->ns.lastStateFlags;
  v42 = v41 | 0x200;
  v43 = v41 & 0xFFFFFDFF;
  if ( !v33 )
    v42 = v43;
  client->ns.lastStateFlags = v42;
  if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&client->ps.weapCommon.weapFlags, ACTIVE, 7u) )
  {
    if ( client == (gclient_s *)-24396i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 942, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
      __debugbreak();
    if ( (client->ns.lastStateFlags & 8) == 0 )
    {
      if ( client == (gclient_s *)-24396i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 951, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
        __debugbreak();
      client->ns.lastStateFlags |= 8u;
      night_vision_on = scr_const.night_vision_on;
LABEL_126:
      GScr_Notify(v36, night_vision_on, 0);
    }
  }
  else
  {
    if ( client == (gclient_s *)-24396i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 942, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
      __debugbreak();
    if ( (client->ns.lastStateFlags & 8) != 0 )
    {
      if ( client == (gclient_s *)-24396i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_local.h", 951, ASSERT_TYPE_ASSERT, "( notifyState )", (const char *)&queryFormat, "notifyState") )
        __debugbreak();
      client->ns.lastStateFlags &= ~8u;
      night_vision_on = scr_const.night_vision_off;
      goto LABEL_126;
    }
  }
}

/*
==============
G_MainSP_CopyProneInfoToCGame
==============
*/
void G_MainSP_CopyProneInfoToCGame(int index, actor_prone_info_t *newProneInfo)
{
  __int64 v2; 
  bool bCorpseOrientation; 

  v2 = index;
  _RBX = newProneInfo;
  if ( !newProneInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 4103, ASSERT_TYPE_ASSERT, "(newProneInfo)", (const char *)&queryFormat, "newProneInfo") )
    __debugbreak();
  _R9 = &level;
  bCorpseOrientation = _RBX->bCorpseOrientation;
  if ( level.cgameData.prevActorProneInfo[v2].iProneTime == _RBX->iProneTime )
  {
    if ( bCorpseOrientation )
    {
      level.cgameData.prevActorProneInfo[v2].fBodyHeight = level.cgameData.actorProneInfo[v2].fBodyHeight;
      level.cgameData.prevActorProneInfo[v2].fBodyPitch = level.cgameData.actorProneInfo[v2].fTorsoPitch;
      level.cgameData.prevActorProneInfo[v2].fBodyRoll = level.cgameData.actorProneInfo[v2].fWaistPitch;
    }
    else
    {
      level.cgameData.prevActorProneInfo[v2].iProneTime = -1;
    }
  }
  else if ( bCorpseOrientation )
  {
    level.cgameData.prevActorProneInfo[v2].fBodyHeight = _RBX->fBodyHeight;
    level.cgameData.prevActorProneInfo[v2].fBodyPitch = _RBX->fTorsoPitch;
    level.cgameData.prevActorProneInfo[v2].fBodyRoll = _RBX->fWaistPitch;
    level.cgameData.prevActorProneInfo[v2].iProneTime = _RBX->iProneTime;
  }
  __asm { vmovups xmm0, xmmword ptr [rbx] }
  _RAX = 3 * v2;
  __asm
  {
    vmovups xmmword ptr [r9+rax*8+135C8h], xmm0
    vmovsd  xmm1, qword ptr [rbx+10h]
    vmovsd  qword ptr [r9+rax*8+135D8h], xmm1
  }
}

/*
==============
G_MainSP_DebugDumpAnims
==============
*/
SvGameGlobals *G_MainSP_DebugDumpAnims()
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  char *v2; 
  const dvar_t *v3; 
  const char *v4; 
  gentity_s *gentities; 
  char v6; 
  SvGameGlobals *result; 
  __int64 v8; 

  v0 = DVARINT_g_dumpAnims;
  if ( !DVARINT_g_dumpAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_dumpAnims") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.integer >= 0 )
  {
    v1 = DVARINT_g_dumpAnims;
    if ( !DVARINT_g_dumpAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_dumpAnims") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    if ( v1->current.integer >= 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 2264, ASSERT_TYPE_SANITY, "( Dvar_GetInt_Internal_DebugName( DVARINT_g_dumpAnims, \"g_dumpAnims\" ) < ( 2048 ) )", (const char *)&queryFormat, "Dvar_GetInt( g_dumpAnims ) < MAX_GENTITIES") )
      __debugbreak();
    v2 = j_va("server: (level time:%d)\n", (unsigned int)level.time);
    v3 = DVARINT_g_dumpAnims;
    v4 = v2;
    gentities = level.gentities;
    if ( !DVARINT_g_dumpAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_dumpAnims") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    SV_Game_DObjDisplayAnim(&gentities[v3->current.integer], v4);
  }
  if ( g_animSP_lastDumpCommandTime == level.time )
    Com_Printf(19, "\n");
  v6 = SvGameGlobals::ms_allocatedType;
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF )
  {
    LODWORD(v8) = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_game_globals_sp.h", 102, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%i)", "ms_allocatedType == ALLOCATION_TYPE", v8) )
      __debugbreak();
    v6 = SvGameGlobals::ms_allocatedType;
  }
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 98, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server global data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( SvGameGlobals::ms_svGameGlobals )
  {
    result = (SvGameGlobals *)(unsigned int)g_animSP_commandCounter;
    SvGameGlobals::ms_svGameGlobals->profile.animCalls = g_animSP_commandCounter;
    g_animSP_commandCounter = 0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 99, ASSERT_TYPE_ASSERT, "( ms_svGameGlobals )", (const char *)&queryFormat, "ms_svGameGlobals") )
    {
      __debugbreak();
      result = SvGameGlobals::ms_svGameGlobals;
    }
    else
    {
      result = (SvGameGlobals *)(unsigned int)g_animSP_commandCounter;
    }
    SvGameGlobals::ms_svGameGlobals->profile.animCalls = g_animSP_commandCounter;
    g_animSP_commandCounter = 0;
  }
  return result;
}

/*
==============
G_MainSP_DeregisterDvars
==============
*/
const dvar_t *G_MainSP_DeregisterDvars()
{
  const dvar_t *result; 

  DVARINT_g_player_maxhealth = Dvar_Deregister(DVARINT_g_player_maxhealth);
  DVARFLT_player_damageMultiplier = Dvar_Deregister(DVARFLT_player_damageMultiplier);
  DVARFLT_player_radiusDamageMultiplier = Dvar_Deregister(DVARFLT_player_radiusDamageMultiplier);
  DVARFLT_player_meleeDamageMultiplier = Dvar_Deregister(DVARFLT_player_meleeDamageMultiplier);
  DVARFLT_player_healthArmorRatio = Dvar_Deregister(DVARFLT_player_healthArmorRatio);
  DVARFLT_g_grenadeDamageMaxHeight = Dvar_Deregister(DVARFLT_g_grenadeDamageMaxHeight);
  DVARFLT_g_changelevel_time = Dvar_Deregister(DVARFLT_g_changelevel_time);
  DVARFLT_g_friendlyfireDamageScale = Dvar_Deregister(DVARFLT_g_friendlyfireDamageScale);
  DVARBOOL_player_deathInvulnerableToMelee = Dvar_Deregister(DVARBOOL_player_deathInvulnerableToMelee);
  DVARBOOL_player_deathInvulnerableToProjectile = Dvar_Deregister(DVARBOOL_player_deathInvulnerableToProjectile);
  DVARFLT_turretPlayerAvoidScale = Dvar_Deregister(DVARFLT_turretPlayerAvoidScale);
  DVARBOOL_turretSentryRestrictUsageToOwner = Dvar_Deregister(DVARBOOL_turretSentryRestrictUsageToOwner);
  DVARFLT_shieldPlayerBulletProtectionDegrees = Dvar_Deregister(DVARFLT_shieldPlayerBulletProtectionDegrees);
  DVARBOOL_scr_dof_enable = Dvar_Deregister(DVARBOOL_scr_dof_enable);
  DVARINT_g_entinfo_type = Dvar_Deregister(DVARINT_g_entinfo_type);
  DVARFLT_g_entinfo_scale = Dvar_Deregister(DVARFLT_g_entinfo_scale);
  DVARINT_g_drawEntBBoxes = Dvar_Deregister(DVARINT_g_drawEntBBoxes);
  DCONST_DVARBOOL_g_lookAtEntityDebugTrace = Dvar_Deregister(DCONST_DVARBOOL_g_lookAtEntityDebugTrace);
  DVARINT_g_deathDelay = Dvar_Deregister(DVARINT_g_deathDelay);
  DVARFLT_actorVisibilityMinCheckAngle = Dvar_Deregister(DVARFLT_actorVisibilityMinCheckAngle);
  DVARFLT_actorVisibilityCheckAngleDistMin = Dvar_Deregister(DVARFLT_actorVisibilityCheckAngleDistMin);
  DVARFLT_actorVisibilityCheckAngleDistMax = Dvar_Deregister(DVARFLT_actorVisibilityCheckAngleDistMax);
  DVARFLT_vehSubmarineYawDampening = Dvar_Deregister(DVARFLT_vehSubmarineYawDampening);
  DVARFLT_vehSubmarinePitchDampening = Dvar_Deregister(DVARFLT_vehSubmarinePitchDampening);
  DVARFLT_vehSubmarineRollDampening = Dvar_Deregister(DVARFLT_vehSubmarineRollDampening);
  DVARFLT_vehSubmarinePitchRestore = Dvar_Deregister(DVARFLT_vehSubmarinePitchRestore);
  DVARFLT_vehSubmarineRollRestore = Dvar_Deregister(DVARFLT_vehSubmarineRollRestore);
  DVARFLT_vehSubmarineMinVelNoRestore = Dvar_Deregister(DVARFLT_vehSubmarineMinVelNoRestore);
  DVARFLT_vehSubmarineForwardDampening = Dvar_Deregister(DVARFLT_vehSubmarineForwardDampening);
  DVARFLT_vehSubmarineLateralDampening = Dvar_Deregister(DVARFLT_vehSubmarineLateralDampening);
  DVARFLT_vehSubmarineMaxUpPitch = Dvar_Deregister(DVARFLT_vehSubmarineMaxUpPitch);
  DVARFLT_vehSubmarineMaxDownPitch = Dvar_Deregister(DVARFLT_vehSubmarineMaxDownPitch);
  DVARFLT_vehSubmarineMaxRoll = Dvar_Deregister(DVARFLT_vehSubmarineMaxRoll);
  DVARFLT_vehSubmarineMaxForwardAccel = Dvar_Deregister(DVARFLT_vehSubmarineMaxForwardAccel);
  DVARFLT_vehSubmarineMaxReverseAccel = Dvar_Deregister(DVARFLT_vehSubmarineMaxReverseAccel);
  DVARFLT_vehSubmarineMinForwardVel = Dvar_Deregister(DVARFLT_vehSubmarineMinForwardVel);
  DVARFLT_vehSubmarineMaxForwardVel = Dvar_Deregister(DVARFLT_vehSubmarineMaxForwardVel);
  DVARFLT_vehSubmarineMaxReverseVel = Dvar_Deregister(DVARFLT_vehSubmarineMaxReverseVel);
  DVARFLT_vehSubmarineMaxLateralVel = Dvar_Deregister(DVARFLT_vehSubmarineMaxLateralVel);
  DVARFLT_vehSubmarineMaxPositiveBuoyancy = Dvar_Deregister(DVARFLT_vehSubmarineMaxPositiveBuoyancy);
  DVARFLT_vehSubmarineMaxNegativeBuoyancy = Dvar_Deregister(DVARFLT_vehSubmarineMaxNegativeBuoyancy);
  DVARFLT_vehSubmarineStoppedVel = Dvar_Deregister(DVARFLT_vehSubmarineStoppedVel);
  DVARFLT_vehSubmarineMaxForwardPitchAccel = Dvar_Deregister(DVARFLT_vehSubmarineMaxForwardPitchAccel);
  DVARFLT_vehSubmarineMaxForwardYawAccel = Dvar_Deregister(DVARFLT_vehSubmarineMaxForwardYawAccel);
  DVARFLT_vehSubmarineMaxReversePitchAccel = Dvar_Deregister(DVARFLT_vehSubmarineMaxReversePitchAccel);
  DVARFLT_vehSubmarineMaxReverseYawAccel = Dvar_Deregister(DVARFLT_vehSubmarineMaxReverseYawAccel);
  DVARFLT_vehSubmarineMaxStoppedPitchAccel = Dvar_Deregister(DVARFLT_vehSubmarineMaxStoppedPitchAccel);
  DVARFLT_vehSubmarineMaxStoppedYawAccel = Dvar_Deregister(DVARFLT_vehSubmarineMaxStoppedYawAccel);
  DVARFLT_vehSubmarineMaxRollAccel = Dvar_Deregister(DVARFLT_vehSubmarineMaxRollAccel);
  DVARINT_vehSubmarineControls = Dvar_Deregister(DVARINT_vehSubmarineControls);
  DVARBOOL_vehSubmarineInvertUpDown = Dvar_Deregister(DVARBOOL_vehSubmarineInvertUpDown);
  DVARBOOL_vehSubmarineAllowInSolid = Dvar_Deregister(DVARBOOL_vehSubmarineAllowInSolid);
  DVARFLT_vehSubmarineSideProbeMinDist = Dvar_Deregister(DVARFLT_vehSubmarineSideProbeMinDist);
  DVARFLT_vehSubmarineSideProbeMaxDist = Dvar_Deregister(DVARFLT_vehSubmarineSideProbeMaxDist);
  DVARFLT_vehSubmarineFwdProbeTime = Dvar_Deregister(DVARFLT_vehSubmarineFwdProbeTime);
  DVARFLT_vehSubmarineSideCollMaxAngAccel = Dvar_Deregister(DVARFLT_vehSubmarineSideCollMaxAngAccel);
  DVARFLT_vehSubmarineSideCollMaxAccel = Dvar_Deregister(DVARFLT_vehSubmarineSideCollMaxAccel);
  DVARFLT_vehSubmarineFwdCollMaxAngAccel = Dvar_Deregister(DVARFLT_vehSubmarineFwdCollMaxAngAccel);
  DVARFLT_vehSubmarineFwdCollMaxAccel = Dvar_Deregister(DVARFLT_vehSubmarineFwdCollMaxAccel);
  DVARFLT_vehSubmarineMaxFwdVelRef = Dvar_Deregister(DVARFLT_vehSubmarineMaxFwdVelRef);
  DVARFLT_vehSubmarineHorizControlGamma = Dvar_Deregister(DVARFLT_vehSubmarineHorizControlGamma);
  DVARFLT_vehSubmarineVertControlGamma = Dvar_Deregister(DVARFLT_vehSubmarineVertControlGamma);
  DVARINT_vehSubmarineBodyRelRotation = Dvar_Deregister(DVARINT_vehSubmarineBodyRelRotation);
  DVARFLT_vehSubmarineRollDrivenYaw = Dvar_Deregister(DVARFLT_vehSubmarineRollDrivenYaw);
  DVARFLT_vehBoatRockingScale = Dvar_Deregister(DVARFLT_vehBoatRockingScale);
  DVARINT_ai_corpseCount = Dvar_Deregister(DVARINT_ai_corpseCount);
  DVARBOOL_ai_corpseSynch = Dvar_Deregister(DVARBOOL_ai_corpseSynch);
  DVARFLT_ai_pathMomentum = Dvar_Deregister(DVARFLT_ai_pathMomentum);
  DVARFLT_ai_playerLOSRange = Dvar_Deregister(DVARFLT_ai_playerLOSRange);
  DVARFLT_ai_playerLOSHalfWidth = Dvar_Deregister(DVARFLT_ai_playerLOSHalfWidth);
  DVARINT_ai_playerLOSMinTime = Dvar_Deregister(DVARINT_ai_playerLOSMinTime);
  DVARINT_ai_playerADSTargetTime = Dvar_Deregister(DVARINT_ai_playerADSTargetTime);
  DVARBOOL_ai_friendlySuppression = Dvar_Deregister(DVARBOOL_ai_friendlySuppression);
  DVARINT_ai_dropAkimboChance = Dvar_Deregister(DVARINT_ai_dropAkimboChance);
  DVARBOOL_ai_disableSpawn = Dvar_Deregister(DVARBOOL_ai_disableSpawn);
  DVARINT_ai_moveOrientMode = Dvar_Deregister(DVARINT_ai_moveOrientMode);
  DVARBOOL_ai_debugCorpsePlant = Dvar_Deregister(DVARBOOL_ai_debugCorpsePlant);
  result = Dvar_Deregister(DVARBOOL_g_aiEventListenerDump);
  DVARBOOL_g_aiEventListenerDump = result;
  return result;
}

/*
==============
G_MainSP_DrawEntityBBoxes
==============
*/
void G_MainSP_DrawEntityBBoxes()
{
  const dvar_t *v1; 
  int v3; 
  __int64 v4; 
  const dvar_t *v7; 
  int v9; 
  const dvar_t *v19; 
  const dvar_t *v21; 
  __int64 duration; 
  __int64 v25; 
  int v26; 
  __int64 v27; 
  vec3_t end; 
  vec3_t start; 
  vec4_t color; 

  v1 = DVARINT_g_drawEntBBoxes;
  if ( !DVARINT_g_drawEntBBoxes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_drawEntBBoxes") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.integer )
  {
    __asm { vmovups xmm0, cs:__xmm@3f8000003f8000003f8000003f800000 }
    v3 = 0;
    __asm { vmovups xmmword ptr [rsp+0C8h+color], xmm0 }
    v26 = 0;
    if ( level.num_entities > 0 )
    {
      v4 = 0i64;
      __asm
      {
        vmovaps [rsp+0C8h+var_38], xmm6
        vmovss  xmm6, cs:__real@40800000
      }
      v27 = 0i64;
      _R14 = 0i64;
      do
      {
        if ( (unsigned int)v3 >= 0x800 )
        {
          LODWORD(v25) = 2048;
          LODWORD(duration) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", duration, v25) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[_R14].r.isInUse != g_entityIsInUse[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( g_entityIsInUse[v4] )
        {
          v7 = DVARINT_g_drawEntBBoxes;
          _RBP = g_entities;
          if ( !DVARINT_g_drawEntBBoxes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_drawEntBBoxes") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v7);
          if ( (unsigned int)(v7->current.integer - 3) <= 1 )
          {
            v9 = 0;
            _RSI = 0i64;
            do
            {
              __asm
              {
                vmovss  xmm0, dword ptr [r14+rbp+130h]
                vmovss  dword ptr [rsp+0C8h+start], xmm0
                vmovss  xmm1, dword ptr [r14+rbp+134h]
                vmovss  dword ptr [rsp+0C8h+start+4], xmm1
                vmovss  xmm0, dword ptr [r14+rbp+138h]
                vmovss  dword ptr [rsp+0C8h+start+8], xmm0
              }
              if ( (unsigned int)v9 >= 3 )
              {
                LODWORD(v25) = 3;
                LODWORD(duration) = v9;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", duration, v25) )
                  __debugbreak();
              }
              __asm
              {
                vmovss  xmm0, dword ptr [rsp+rsi+0C8h+start]
                vsubss  xmm1, xmm0, xmm6
                vmovss  dword ptr [rsp+rsi+0C8h+start], xmm1
                vmovss  xmm0, dword ptr [r14+rbp+130h]
                vmovss  dword ptr [rsp+0C8h+end], xmm0
                vmovss  xmm1, dword ptr [r14+rbp+134h]
                vmovss  dword ptr [rsp+0C8h+end+4], xmm1
                vmovss  xmm0, dword ptr [r14+rbp+138h]
                vmovss  dword ptr [rsp+0C8h+end+8], xmm0
              }
              if ( (unsigned int)v9 >= 3 )
              {
                LODWORD(v25) = 3;
                LODWORD(duration) = v9;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", duration, v25) )
                  __debugbreak();
              }
              v19 = DVARINT_g_drawEntBBoxes;
              __asm
              {
                vaddss  xmm1, xmm6, dword ptr [rsp+rsi+0C8h+end]
                vmovss  dword ptr [rsp+rsi+0C8h+end], xmm1
              }
              if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_drawEntBBoxes") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v19);
              G_DebugLine(&start, &end, &color, v19->current.integer & 1);
              ++v9;
              _RSI += 4i64;
            }
            while ( v9 < 3 );
            v3 = v26;
            v4 = v27;
          }
          v21 = DVARINT_g_drawEntBBoxes;
          if ( !DVARINT_g_drawEntBBoxes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_drawEntBBoxes") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v21);
          __asm { vmovss  xmm2, dword ptr [r14+rbp+140h]; yaw }
          G_DebugBox(&_RBP[_R14].r.currentOrigin, &_RBP[_R14].r.box, *(float *)&_XMM2, &color, v21->current.integer & 1, 0);
        }
        ++v3;
        ++v4;
        v26 = v3;
        ++_R14;
        v27 = v4;
      }
      while ( v3 < level.num_entities );
      __asm { vmovaps xmm6, [rsp+0C8h+var_38] }
    }
  }
}

/*
==============
G_MainSP_FreeEntities
==============
*/

void __fastcall G_MainSP_FreeEntities(double _XMM0_8)
{
  unsigned int v1; 
  int v2; 
  __int64 v3; 
  int *v4; 
  __int64 v5; 
  gentity_s *v6; 
  __int64 i; 
  __int64 v8; 
  gentity_s *v9; 
  actor_s *actors; 
  __int64 j; 
  actor_s *v12; 
  EntHandle *droppedWeaponCue; 
  __int64 v14; 
  EntHandle *droppedEquipmentCue; 
  __int64 v16; 
  __int64 v18; 
  __int64 v19; 
  AIActorInterface v20; 
  AIActorInterface *v21; 
  int v22[2048]; 

  v1 = 0;
  v2 = 0;
  if ( level.num_entities > 0 )
  {
    v3 = 0i64;
    v4 = v22;
    v5 = 0i64;
    do
    {
      if ( v1 >= 0x800 )
      {
        LODWORD(v19) = 2048;
        LODWORD(v18) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v5].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v3] )
      {
        if ( Path_EntIsNodeParent(v1) )
        {
          ++v2;
          *v4++ = v1;
        }
        else
        {
          v6 = &g_entities[v1];
          if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
            __debugbreak();
          GUtils::ms_gUtils->FreeEntity(GUtils::ms_gUtils, v6);
        }
      }
      ++v1;
      ++v3;
      ++v5;
    }
    while ( (int)v1 < level.num_entities );
  }
  if ( v2 > 0 )
  {
    for ( i = 0i64; i < v2; ++i )
    {
      v8 = v22[i];
      if ( (unsigned int)v8 >= 0x800 )
      {
        LODWORD(v19) = 2048;
        LODWORD(v18) = v22[i];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v8].r.isInUse != g_entityIsInUse[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v8] )
      {
        v9 = &g_entities[v8];
        if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
          __debugbreak();
        GUtils::ms_gUtils->FreeEntity(GUtils::ms_gUtils, v9);
      }
    }
  }
  if ( G_IsEntityInUse(2046) )
    G_FreeEntity(g_entities + 2046);
  actors = level.actors;
  if ( level.actors )
  {
    for ( j = 0i64; j < 38; ++j )
    {
      v12 = &actors[j];
      if ( actors[j].inuse )
      {
        AIActorInterface::AIActorInterface(&v20);
        v21 = NULL;
        AIActorInterface::SetActor(&v20, v12);
        v21 = &v20;
        v20.ClearPileUp(&v20);
        actors = level.actors;
      }
    }
  }
  droppedWeaponCue = level.droppedWeaponCue;
  v14 = 32i64;
  do
  {
    EntHandle::setEnt(droppedWeaponCue++, NULL);
    --v14;
  }
  while ( v14 );
  droppedEquipmentCue = level.droppedEquipmentCue;
  v16 = 8i64;
  do
  {
    EntHandle::setEnt(droppedEquipmentCue++, NULL);
    --v16;
  }
  while ( v16 );
  G_Targets_RemoveAll();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[2047].r.isInUse != g_entityIsInUse[2047] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( g_entityIsInUse[2047] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 842, ASSERT_TYPE_ASSERT, "(!G_IsEntityInUse( ENTITYNUM_NONE ))", (const char *)&queryFormat, "!G_IsEntityInUse( ENTITYNUM_NONE )") )
    __debugbreak();
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr cs:?level@@3Ulevel_locals_t@@A.firstFreeEnt, xmm0; level_locals_t level
  }
  level.num_entities = 0;
}

/*
==============
G_MainSP_GetFramePos
==============
*/
__int64 G_MainSP_GetFramePos()
{
  return (unsigned int)level.framePos;
}

/*
==============
G_MainSP_GetGameMemoryAllocationSize
==============
*/
__int64 G_MainSP_GetGameMemoryAllocationSize(const unsigned int maxClients)
{
  __int64 v1; 
  unsigned int v2; 
  unsigned int v3; 
  unsigned int size; 

  size = 64592 * maxClients + 2012760;
  v1 = size + GWeaponMap::GetMemorySize() + 1087040;
  size = v1;
  v2 = truncate_cast<unsigned int,unsigned __int64>(((v1 + 127) & 0xFFFFFFFFFFFFFF80ui64) - v1 + 25037568);
  size += v2 + 824;
  size += Ai_Asm::GetMemorySize();
  size += GPlayer_Asm::GetMemorySize();
  size += Nav_GetAllocSize();
  G_GameInterface_OnAllocationSize(&size);
  v3 = truncate_cast<unsigned int,unsigned __int64>(0x4D7C0ui64);
  return size + v3;
}

/*
==============
G_MainSP_GetPreviousTime
==============
*/
__int64 G_MainSP_GetPreviousTime()
{
  return (unsigned int)level.previousTime;
}

/*
==============
G_MainSP_GetServerSnapTime
==============
*/
__int64 G_MainSP_GetServerSnapTime()
{
  return (unsigned int)g_cgameData.snapTime;
}

/*
==============
G_MainSP_InitGame
==============
*/
int G_MainSP_InitGame(unsigned int randomSeed, int restart, int checksum, int loadScripts, int *savegame, SaveGame **save, const int frameDuration)
{
  char v12; 
  GAntiLag *v13; 
  GAntiLag *v14; 
  bool v15; 
  scrContext_t *v16; 
  MapEnts *mapEnts; 
  __int64 i; 
  GSaveMemorySP *v19; 
  scrContext_t *v20; 
  int result; 
  SaveGame *v22; 
  SaveGame *v23; 
  int v24; 
  bool v25; 
  char v26; 
  GameScriptData *v27; 
  GUtils *Utils; 
  int j; 
  const dvar_t *v30; 
  const dvar_t *v31; 
  int integer; 
  char *v33; 
  GStatic *GameStatics; 
  __int64 v35; 
  XAnim_s *v36; 
  int k; 
  __int64 v38; 
  GPlayer_Asm *v39; 
  scrContext_t *v40; 
  const SaveHeader *Header; 
  int useLoadedScripts; 
  unsigned int randomSeeda; 
  scrContext_t *scrContext; 
  char *mapName; 
  __int64 checksuma; 
  int v52; 

  randomSeeda = randomSeed;
  if ( !frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 1354, ASSERT_TYPE_ASSERT, "( frameDuration )", (const char *)&queryFormat, "frameDuration") )
    __debugbreak();
  if ( !savegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 1355, ASSERT_TYPE_ASSERT, "(savegame)", (const char *)&queryFormat, "savegame") )
    __debugbreak();
  G_Main_InitCommon(s_entityHandlersSP, 1);
  v12 = BYTE1(GameScriptData::ms_allocatedType);
  if ( !BYTE1(GameScriptData::ms_allocatedType) )
  {
LABEL_12:
    if ( v12 != 1 )
      goto LABEL_18;
    goto LABEL_13;
  }
  if ( BYTE1(GameScriptData::ms_allocatedType) != 1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 265, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v12 = BYTE1(GameScriptData::ms_allocatedType);
    goto LABEL_12;
  }
LABEL_13:
  v13 = GAntiLag::ms_gAntiLagData;
  if ( !GAntiLag::ms_gAntiLagData )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 269, ASSERT_TYPE_ASSERT, "(ms_gAntiLagData != 0)", "%s\n\tClearAntiLagMemoryCommon: Trying to clear game memory but none have been allocated\n", "ms_gAntiLagData != NULL") )
      __debugbreak();
    v13 = GAntiLag::ms_gAntiLagData;
  }
  ((void (__fastcall *)(GAntiLag *, _QWORD))v13->~BgAntiLag)(v13, 0i64);
  memset_0(GAntiLag::ms_gAntiLagData, 0, 0x195400ui64);
  GAntiLagSP::GAntiLagSP((GAntiLagSP *)GAntiLag::ms_gAntiLagData);
  GAntiLag::ms_gAntiLagData = v14;
LABEL_18:
  level.cachedTagMat.entnum = 2047;
  level.cachedEntTargetTagMat.entnum = 2047;
  v15 = loadScripts != 0;
  level.currentEntityThink = -1;
  level.initializing = 1;
  level.scriptPrintChannel = 24;
  level.frameDuration = frameDuration;
  if ( !loadScripts && !restart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 1376, ASSERT_TYPE_ASSERT, "(isFullInit || restart)", "%s\n\tShould only not be a full init for fast_restart", "isFullInit || restart") )
    __debugbreak();
  scrContext = ScriptContext_Server();
  v16 = scrContext;
  GScr_Weapon_Init(scrContext, v15);
  PIP_InitAll();
  G_Door_Reset();
  G_Vehicle_ClearServerDefs();
  G_FXEntity_ClearSystem();
  G_SoundEntity_ClearSystem();
  memset_0(level.mayhemEnts, 0, sizeof(level.mayhemEnts));
  mapEnts = cm.mapEnts;
  for ( i = 0i64; (unsigned int)i < mapEnts->numMayhemScenes; i = (unsigned int)(i + 1) )
    level.mayhemEnts[i].targetName = mapEnts->mayhemScenes[i].scriptName;
  G_LogDebugEntInfoInit();
  g_nextMap[0] = 0;
  ProfLoad_Begin("init game dvars");
  G_MainSP_RegisterDvars();
  g_canRegisterSavedDvars = 0;
  Dvar_ResetDvars(0x40u, DVAR_SOURCE_INTERNAL);
  ProfLoad_End();
  G_Main_SetupGameTypeQuick("sp");
  G_MinimizedUsePrompts_Init();
  ProfLoad_Begin("clear config strings");
  G_SaveSP_ClearAllConfigstrings();
  ProfLoad_End();
  mapName = (char *)SV_Game_GetMapName();
  Dvar_SetString_Internal(DVARSTR_mapname, mapName);
  Dvar_SetInt_Internal(DVARINT_reloading, 0);
  Path_Init(restart, 1);
  useLoadedScripts = loadScripts == 0;
  Scr_SetUseCodePosMap(v16, 0);
  if ( (_BYTE)GSaveMemory::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_savememory_sp.h", 131, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  if ( !GSaveMemory::ms_gSaveMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 199, ASSERT_TYPE_ASSERT, "( ms_gSaveMemory )", (const char *)&queryFormat, "ms_gSaveMemory") )
    __debugbreak();
  v19 = (GSaveMemorySP *)GSaveMemory::ms_gSaveMemory;
  GSaveMemory::ms_gSaveMemory->CleanupSaveMemory(GSaveMemory::ms_gSaveMemory);
  if ( *savegame )
  {
    v20 = scrContext;
    Scr_ShutdownCodeOffsetMap(scrContext);
    result = G_SaveSP_PreLoadGame(checksum, &useLoadedScripts, restart == 0, save);
    if ( !result )
    {
      level.initializing = 0;
      return result;
    }
    if ( !*save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 1439, ASSERT_TYPE_ASSERT, "(*save)", (const char *)&queryFormat, "*save") )
      __debugbreak();
    v22 = *save;
  }
  else
  {
    v19->ShutdownSaveSystem(v19);
    GSaveMemorySP::InitializeSaveSystem(v19);
    v20 = scrContext;
    *save = NULL;
    v22 = NULL;
  }
  if ( (v22 != NULL) != *savegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 1448, ASSERT_TYPE_ASSERT, "((*save != 0) == *savegame)", (const char *)&queryFormat, "(*save != NULL) == *savegame") )
    __debugbreak();
  SV_DemoSP_InitSavegame(save);
  v23 = *save;
  v24 = *save != NULL;
  *savegame = v24;
  if ( !v23 )
  {
    SV_DemoSP_Init(&randomSeeda);
    v24 = *savegame;
  }
  if ( (*save != NULL) != v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 1458, ASSERT_TYPE_ASSERT, "((*save != 0) == *savegame)", (const char *)&queryFormat, "(*save != NULL) == *savegame") )
    __debugbreak();
  if ( !*savegame )
    Scr_ShutdownCodeOffsetMap(v20);
  G_srand(randomSeeda);
  G_ClientFieldsSP_Init();
  BG_LookAt_Init();
  XAnimIKInit(1);
  CL_Cameraman_Init(v15);
  if ( loadScripts )
    NetConstStrings_CallForCommonShockStrings(G_Main_PrecacheServerShellshock);
  BG_Camo_InitNCS(v15);
  ProfLoad_Begin("G_SetupWeaponDef");
  v25 = G_Weapon_SetupWeaponDef(1);
  ProfLoad_End();
  level.openScriptIOFileHandles[0].handle.handle = -1i64;
  level.openScriptIOFileBuffers[0] = NULL;
  *(_QWORD *)&level.currentScriptIOLineMark[0].lines = 0i64;
  level.currentScriptIOLineMark[0].text = NULL;
  *(_QWORD *)&level.currentScriptIOLineMark[0].ungetToken = 0i64;
  level.currentScriptIOLineMark[0].backup_text = NULL;
  *(_DWORD *)&level.soundAliasFirst = 16777472;
  level.loading = (*savegame != 0) + 1;
  CL_PreloadSP_InitGame(*savegame != 0);
  G_Main_InitSuits(v15);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    BG_AnimationMP_RegisterSuitAnimIndexes(v15);
  Rumble_Init(v15);
  BG_Gesture_InitGestures(v15);
  BG_Camera_Init(v15);
  XAnimCurve_InitCurves(v15);
  BG_BlendSpace2D_InitDefs(v15);
  BG_CarryObject_InitDefs(v15);
  BG_HudOutline_InitDefs(v15);
  BG_Accessory_InitAssets(v15);
  if ( !useLoadedScripts )
  {
    v26 = GameScriptData::ms_allocatedType;
    if ( (_BYTE)GameScriptData::ms_allocatedType )
    {
      if ( (_BYTE)GameScriptData::ms_allocatedType == HALF )
      {
LABEL_59:
        if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 145, ASSERT_TYPE_ASSERT, "(ms_gScriptData != 0)", "%s\n\tClearGameScriptDataMemoryCommon: Trying to clear game memory but none have been allocated\n", "ms_gScriptData != NULL") )
          __debugbreak();
        memset_0(GameScriptData::ms_gScriptData, 0, 0x3980ui64);
        v27 = GameScriptData::ms_gScriptData;
        *(_QWORD *)&GameScriptData::ms_gScriptData->levelscript = 0i64;
        *(_QWORD *)&v27->initstructs = 0i64;
        *(_QWORD *)&v27->bt_getfunction = 0i64;
        *(_QWORD *)&v27->scriptable_postinit = 0i64;
        *(_QWORD *)&v27->riotshield_damaged = 0i64;
        *(_QWORD *)&v27->scriptable_notify_callback = 0i64;
        *(_QWORD *)&v27->ai_asm_getfunction = 0i64;
        *(_QWORD *)&v27->ai_asm_getgenerichandler = 0i64;
        v27->lui_callback = 0;
        GameScriptData::ms_gScriptData = v27;
        goto LABEL_63;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 141, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE") )
        __debugbreak();
      v26 = GameScriptData::ms_allocatedType;
    }
    if ( v26 != 1 )
      goto LABEL_63;
    goto LABEL_59;
  }
LABEL_63:
  if ( level.time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 1525, ASSERT_TYPE_ASSERT, "(!level.time)", (const char *)&queryFormat, "!level.time") )
    __debugbreak();
  Utils = GUtils::GetUtils();
  GUtils::DisableCreateEntityPhysicsOnInit(Utils, 0);
  Physics_CreateServerWorlds(1u);
  G_Utils_PhysicsCheckPostAssetChangeEmpty();
  for ( j = 0; j <= 1; ++j )
  {
    WorldCollision_InstantiateCollision((const Physics_WorldId)j);
    StaticModels_InstantiateCollision((const Physics_WorldId)j);
  }
  G_Vehicle_InitSystem();
  G_CoverWall_InitSystem();
  G_PlayerUse_InitSystem();
  G_Trigger_InitSystem();
  GMissile::ClearMissileRegistry();
  GMissile::ClearMissileEventRegistry();
  v30 = DVARINT_ai_corpseLimit;
  if ( !DVARINT_ai_corpseLimit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_corpseLimit") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  v31 = DVARINT_ai_corpseCount;
  integer = v30->current.integer;
  if ( !DVARINT_ai_corpseCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_corpseCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v31);
  if ( v31->current.integer < integer )
    integer = v31->current.integer;
  level.actorCorpseCount = integer;
  if ( (unsigned int)(integer - 1) > 0x1B && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 1544, ASSERT_TYPE_SANITY, "( level.actorCorpseCount >= 1 && level.actorCorpseCount <= 28 )", (const char *)&queryFormat, "level.actorCorpseCount >= 1 && level.actorCorpseCount <= MAX_ACTOR_CORPSES") )
    __debugbreak();
  GStatic::SetActiveStatics();
  G_Weapon_SetupLevelWeaponDef(v25);
  if ( loadScripts )
    NetConstStrings_CallForLevelShockStrings(G_Main_PrecacheServerShellshock);
  ScriptableBg_InitNetConstStringDefs(v15);
  ProfLoad_Begin("Load scripts and anims");
  v33 = mapName;
  if ( !useLoadedScripts )
  {
    G_MainSP_LoadScriptsAndAnims(mapName, *savegame, v15);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && (!PlayerASM_IsEnabled() || !PlayerASM_IsConnectingPaths()) )
    {
      GameStatics = GStatic::GetGameStatics();
      v35 = (__int64)GameStatics->GetAnimStatics(GameStatics);
      if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 1061, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
        __debugbreak();
      v36 = *(XAnim_s **)(v35 + 17712);
      if ( v36 )
      {
        for ( k = 0; k < level.maxclients; *(_QWORD *)(v38 + 2040) = XAnimCreateTree(v36, G_Main_HunkAllocXAnimServer, MOVEMENT) )
          v38 = (__int64)GameStatics->GetCharacterInfo(GameStatics, k++);
      }
      else if ( !G_Main_ExitAfterToolComplete() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 1076, ASSERT_TYPE_ASSERT, "(!G_MainSP_ShouldLoadScripts())", (const char *)&queryFormat, "!G_MainSP_ShouldLoadScripts()") )
      {
        __debugbreak();
      }
    }
    Ai_Asm::Init(0);
    if ( PlayerASM_IsEnabled() )
    {
      v39 = GPlayer_Asm::Singleton();
      BgPlayer_Asm::Init(v39, v15, 0);
    }
  }
  v40 = scrContext;
  Scr_GetChecksum(scrContext, (int *)&checksuma);
  if ( *savegame )
  {
    ProfLoad_Begin("Savegame");
    Header = G_SaveMemorySP_GetHeader(*save);
    if ( checksuma != *(_QWORD *)Header->scrCheckSum || v52 != Header->scrCheckSum[2] )
    {
      if ( useLoadedScripts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 1575, ASSERT_TYPE_ASSERT, "(!useLoadedScripts)", (const char *)&queryFormat, "!useLoadedScripts") )
        __debugbreak();
      if ( !G_SaveSP_GenerateCodePosMap() )
      {
        Com_Printf(15, "Save game saved with different script files\n");
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144355870, 1184i64);
        G_SaveMemorySP_MoveToSegment(*save, -1);
        GStatic::ClearActiveStatics();
        level.loading = LOADING_DONE;
        level.initializing = 0;
        ProfLoad_End();
        return 0;
      }
    }
    ProfLoad_End();
  }
  ProfLoad_End();
  if ( !level.gentities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 1604, ASSERT_TYPE_ASSERT, "( level.gentities )", (const char *)&queryFormat, "level.gentities") )
    __debugbreak();
  if ( !level.maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 1605, ASSERT_TYPE_ASSERT, "( level.maxclients )", (const char *)&queryFormat, "level.maxclients") )
    __debugbreak();
  if ( !level.gameOmnvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 1606, ASSERT_TYPE_ASSERT, "( level.gameOmnvars )", (const char *)&queryFormat, "level.gameOmnvars") )
    __debugbreak();
  *(_WORD *)&level.damageNotifyQueued = 0;
  level.gentities[2047].flags.m_flags[0] |= 0x100u;
  if ( !*savegame )
    BG_Omnvar_LoadGamescopeDefaults(level.gameOmnvars->omnvars);
  level.actors = s_actors;
  level.agents = NULL;
  level.maxagents = 0;
  G_Sentient_InitSentients(0x47u, 0x20u);
  G_Spawner_Init(useLoadedScripts != 0);
  AIActorInterface::InitActors();
  AIScheduler::Init();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 144, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vmovdqu xmmword ptr cs:?level@@3Ulevel_locals_t@@A.firstFreeEnt, xmm0; level_locals_t level
  }
  level.num_entities = ComCharacterLimits::ms_gameData.m_staticEntityCount;
  SV_Game_LocateGameData(level.gentities, ComCharacterLimits::ms_gameData.m_staticEntityCount, &level.clients->ps, 64592);
  G_Combat_InitHitLocDmgTable();
  BG_LoadPenetrationDepthTable();
  BG_InitializeWeaponSetup();
  BG_LoadCodePerksTable();
  GTurret::InitTurrets();
  ScriptableSv_Init(0);
  Path_PreSpawnInitPaths();
  G_TacGraph_Init();
  G_InitGlass(v33);
  G_LightSampler_Init();
  ProfLoad_Begin("G_Spawn_EntitiesFromString");
  G_Spawn_EntitiesFromString(1);
  Physics_AddPendingBodies(PHYSICS_WORLD_ID_FIRST);
  Physics_AddPendingBodies(PHYSICS_WORLD_ID_SERVER_DETAIL);
  ProfLoad_End();
  G_Spawn_SpawnableNodes();
  Path_ResolveParentIndices();
  Path_PrintAllNodeErrors();
  Path_PostSpawnInitPaths(0, *savegame != 0);
  G_UpdateTrackExtraNodes();
  G_DropActorSpawnersToFloor();
  G_Vehicle_SetupSystem();
  __asm
  {
    vmovss  xmm0, cs:__real@7f7fffff
    vxorps  xmm1, xmm1, xmm1
  }
  level.bDrawCompassFriendlies = 1;
  __asm
  {
    vmovss  cs:?level@@3Ulevel_locals_t@@A.fFogOpaqueDist, xmm0; level_locals_t level
    vmovss  cs:?level@@3Ulevel_locals_t@@A.fFogOpaqueDistSqrd, xmm0; level_locals_t level
    vmovss  dword ptr cs:?level@@3Ulevel_locals_t@@A.pathnodeWorldSize, xmm1; level_locals_t level
    vmovss  dword ptr cs:?level@@3Ulevel_locals_t@@A.pathnodeWorldSize+4, xmm1; level_locals_t level
    vmovss  dword ptr cs:?level@@3Ulevel_locals_t@@A.pathnodeWorldSize+8, xmm1; level_locals_t level
  }
  level.tagIKTargetModelLeft = R_RegisterModel("tag_ik_target_left");
  level.tagIKTargetModelRight = R_RegisterModel("tag_ik_target_right");
  level.teammode = TEAMMODE_AXIS_ALLIES;
  if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 134, ASSERT_TYPE_ASSERT, "(Com_IsWorldLoaded())", (const char *)&queryFormat, "Com_IsWorldLoaded()") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?comWorld@@3UComWorld@@A.umbraGateInitialStates.array; ComWorld comWorld
    vmovups xmm1, xmmword ptr cs:?comWorld@@3UComWorld@@A.umbraGateInitialStates.array+20h; ComWorld comWorld
    vmovups ymmword ptr cs:?level@@3Ulevel_locals_t@@A.umbraGateStates.array, ymm0; level_locals_t level
    vmovups xmmword ptr cs:?level@@3Ulevel_locals_t@@A.umbraGateStates.array+20h, xmm1; level_locals_t level
  }
  G_Objectives_Init();
  G_Targets_Init();
  G_Missile_InitAttractors();
  if ( level.maxclients != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 1724, ASSERT_TYPE_ASSERT, "( level.maxclients == 1 )", (const char *)&queryFormat, "level.maxclients == 1") )
    __debugbreak();
  AimTarget_Init(0);
  if ( (unsigned int)(level.loading - 1) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 1729, ASSERT_TYPE_ASSERT, "((level.loading == LOADING_LEVEL) || (level.loading == LOADING_SAVEGAME))", (const char *)&queryFormat, "(level.loading == LOADING_LEVEL) || (level.loading == LOADING_SAVEGAME)") )
    __debugbreak();
  Scr_FreeEntityList(v40);
  G_MotionWarp_Reset();
  GStatic::ClearActiveStatics();
  result = 1;
  level.initializing = 0;
  return result;
}

/*
==============
G_MainSP_IsDemoSaveGame
==============
*/
__int64 G_MainSP_IsDemoSaveGame()
{
  return (unsigned int)level.demoSaveGame;
}

/*
==============
G_MainSP_IsNextMapWaiting
==============
*/
bool G_MainSP_IsNextMapWaiting()
{
  const dvar_t *v0; 

  v0 = DVARINT_reloading;
  if ( !DVARINT_reloading && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "reloading") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.integer == 4;
}

/*
==============
G_MainSP_LoadLevel
==============
*/
void G_MainSP_LoadLevel(void)
{
  scrContext_t *v0; 
  int frameDuration; 
  int SpClientNum; 
  ServerFrameSmoothStatus v3; 

  if ( (unsigned int)(level.loading - 1) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 2322, ASSERT_TYPE_ASSERT, "((level.loading == LOADING_LEVEL) || (level.loading == LOADING_SAVEGAME))", (const char *)&queryFormat, "(level.loading == LOADING_LEVEL) || (level.loading == LOADING_SAVEGAME)") )
    __debugbreak();
  level.initializing = 1;
  GStatic::SetActiveStatics();
  ProfLoad_Begin("G_PrecacheDefaultModels");
  if ( !GConfigStrings::ms_gConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 71, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings )", (const char *)&queryFormat, "ms_gConfigStrings") )
    __debugbreak();
  GConfigStrings::GetModelIndex(GConfigStrings::ms_gConfigStrings, "defaultactor");
  ProfLoad_End();
  v0 = ScriptContext_Server();
  ProfLoad_Begin("Scr_InitSystem");
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  frameDuration = level.frameDuration;
  if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
    __debugbreak();
  Scr_InitSystem(v0, 1, MAIN, level.frameDuration, frameDuration);
  ProfLoad_End();
  ProfLoad_Begin("Scr_SetLoading 1");
  Scr_SetLoading(v0, 1);
  ProfLoad_End();
  ProfLoad_Begin("Scr_AllocGameVariable");
  Scr_AllocGameVariable(v0);
  ProfLoad_End();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 2348, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL )") )
    __debugbreak();
  SV_ServerCulledSoundsSP_ClearServerCulledSounds();
  ProfLoad_Begin("ClientBegin");
  level.allowRespawn = 0;
  level.bMissionForceFailed = 0;
  Physics_AddPendingBodies(PHYSICS_WORLD_ID_FIRST);
  Physics_AddPendingBodies(PHYSICS_WORLD_ID_SERVER_DETAIL);
  SpClientNum = SvClientSP::GetSpClientNum();
  G_ClientSP_ClientBegin(SpClientNum);
  ProfLoad_End();
  if ( !G_Main_ExitAfterToolComplete() )
  {
    ProfLoad_Begin("G_LoadStructs");
    G_Spawn_LoadStructs();
    ProfLoad_End();
    ProfLoad_Begin("Actor_FinishSpawningAll");
    AIActorInterface::FinishSpawningAll();
    ProfLoad_End();
  }
  ProfLoad_Begin("Path_AutoDisconnectPaths");
  Path_AutoDisconnectPaths();
  ProfLoad_End();
  ProfLoad_Begin("GScr_LoadLevel");
  GScr_LoadLevel();
  ProfLoad_End();
  ProfLoad_Begin("G_RunFrame");
  Profile_Begin(604);
  v3 = G_MainSP_RunFrame_Internal(SV_FRAME_DO_ALL, 0);
  Profile_EndInternal(NULL);
  if ( v3 == SV_FRAME_SMOOTH_DONE )
  {
    Profile_Begin(605);
    if ( BYTE1(GameScriptData::ms_allocatedType) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_antilag_sp.h", 72, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
      __debugbreak();
    GAntiLagSP::ArchiveAntilagFrame((GAntiLagSP *)GAntiLag::ms_gAntiLagData);
    Profile_EndInternal(NULL);
  }
  ProfLoad_End();
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 2390, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_LEVELZONES )") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_AKIMBO|0x80) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 2391, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_SERVERCLIENTSYNC ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TRANSIENT_SERVERCLIENTSYNC )") )
    __debugbreak();
  ProfLoad_Begin("CL_TransientsSP_HardSyncNow");
  CL_TransientsSP_HardSyncNow();
  ProfLoad_End();
  ProfLoad_Begin("CL_TransientsSP_GameSystemsInit");
  CL_TransientsSP_GameSystemsInit();
  ProfLoad_End();
  CL_PreloadSP_LoadLevelDone(level.loading == LOADING_SAVEGAME);
  ScriptableSv_InitServerInstances();
  ProfLoad_Begin("Scr_SetLoading 0");
  Scr_SetLoading(v0, 0);
  ProfLoad_End();
  Scr_InitUsageAnalysis(v0);
  GScr_ResetOpcodeProfile();
  if ( !level.gentities->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 2420, ASSERT_TYPE_ASSERT, "(level.gentities[0].client)", (const char *)&queryFormat, "level.gentities[0].client") )
    __debugbreak();
  GStatic::ClearActiveStatics();
  level.initializing = 0;
}

/*
==============
G_MainSP_LoadNextMap
==============
*/
void G_MainSP_LoadNextMap(void)
{
  const char *v0; 
  const char *v1; 

  if ( g_nextMap[0] )
  {
    v0 = "spdevmap %s\n";
    if ( !com_cheats->current.enabled )
      v0 = "spmap %s\n";
    v1 = j_va(v0, g_nextMap);
    Cbuf_AddText(LOCAL_CLIENT_0, v1);
  }
  else
  {
    Cbuf_AddText(LOCAL_CLIENT_0, "disconnect\n");
  }
}

/*
==============
G_MainSP_LoadScriptsAndAnims
==============
*/
void G_MainSP_LoadScriptsAndAnims(const char *mapName, int savegame, bool isFullInit)
{
  int *m_ptr; 
  __int64 v7; 
  __int64 v8; 
  void *v9; 
  scrContext_t *v10; 
  GameScriptDataSP *GameScriptDataSP; 
  ScriptFunctions functions; 
  __int64 v13; 
  Mem_LargeLocal v14; 
  EntryLoadScriptArray loadscripts; 

  v13 = -2i64;
  Mem_LargeLocal::Mem_LargeLocal(&v14, 0x1000ui64, "scr_funcArray_t address");
  m_ptr = (int *)v14.m_ptr;
  v7 = tls_index;
  if ( !*(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_static.h", 169, ASSERT_TYPE_ASSERT, "(ms_activeBgs)", (const char *)&queryFormat, "ms_activeBgs") )
    __debugbreak();
  v8 = *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v7) + 272i64);
  v9 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16i64))(v8);
  ProfLoad_Begin("GScr_LoadScriptsAndAnims");
  *(_QWORD *)&functions.maxSize = 1024i64;
  functions.address = m_ptr;
  Scr_Mem_AcquireScriptLocks();
  loadscripts.count = 0;
  GScrSP_LoadScripts(mapName, &functions, savegame, &loadscripts);
  functions.maxSize = functions.count;
  functions.count = 0;
  ProfLoad_Begin("GScr_SetScripts");
  GScrSP_SetScripts(&functions, &loadscripts);
  ProfLoad_End();
  if ( functions.maxSize != functions.count )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_144355540, 1183i64);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 1214, ASSERT_TYPE_ASSERT, "( bgameAnim != 0 )", (const char *)&queryFormat, "bgameAnim != NULL") )
      __debugbreak();
    memset_0(v9, 0, 0x4530ui64);
  }
  if ( G_Main_ExitAfterToolComplete() )
  {
    Scr_EndLoadAnimTrees(1);
  }
  else
  {
    XAnimSubTreeRegistry_Init(MOVEMENT);
    Cloth_XAnimNode_Clear(MOVEMENT);
    if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
      __debugbreak();
    BG_VehicleAnim_FindAnims(GVehicles::ms_gVehiclesSystem);
    Animset_InitAnims(1, isFullInit);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
      BG_AnimationMP_FindAnims();
    ScriptableBg_FindAnimations(1);
    BG_TurretAnim_FindAnims(1);
    v10 = ScriptContext_GetFromAnimUser(1);
    Scr_EmitScriptBundlesAnimations(v10);
    Scr_PrecacheAnimTrees(G_Main_HunkAllocXAnimServer, 1, MAIN);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
      BG_AnimationMP_FindAnimTrees(1);
    if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
      __debugbreak();
    BG_VehicleAnim_FindTrees(GVehicles::ms_gVehiclesSystem);
    ScriptableBg_FindAnimationTrees(1);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
      BG_AnimationMP_InitializeAnimations();
    Animset_FindAnimTrees(1);
    Scr_EndLoadAnimTrees(1);
    GameScriptDataSP = GameScriptDataSP::GetGameScriptDataSP();
    GameScriptDataSP->actorCorpseInfo[0].tree = NULL;
    GameScriptDataSP->actorCorpseInfo[0].entnum = -1;
    GameScriptDataSP->actorCorpseInfo[1].tree = NULL;
    GameScriptDataSP->actorCorpseInfo[1].entnum = -1;
    GameScriptDataSP->actorCorpseInfo[2].tree = NULL;
    GameScriptDataSP->actorCorpseInfo[2].entnum = -1;
    GameScriptDataSP->actorCorpseInfo[3].tree = NULL;
    GameScriptDataSP->actorCorpseInfo[3].entnum = -1;
    GameScriptDataSP->actorCorpseInfo[4].tree = NULL;
    GameScriptDataSP->actorCorpseInfo[4].entnum = -1;
    GameScriptDataSP->actorCorpseInfo[5].tree = NULL;
    GameScriptDataSP->actorCorpseInfo[5].entnum = -1;
    GameScriptDataSP->actorCorpseInfo[6].tree = NULL;
    GameScriptDataSP->actorCorpseInfo[6].entnum = -1;
    GameScriptDataSP->actorCorpseInfo[7].tree = NULL;
    GameScriptDataSP->actorCorpseInfo[7].entnum = -1;
    GameScriptDataSP->actorCorpseInfo[8].tree = NULL;
    GameScriptDataSP->actorCorpseInfo[8].entnum = -1;
    GameScriptDataSP->actorCorpseInfo[9].tree = NULL;
    GameScriptDataSP->actorCorpseInfo[9].entnum = -1;
    GameScriptDataSP->actorCorpseInfo[10].tree = NULL;
    GameScriptDataSP->actorCorpseInfo[10].entnum = -1;
    GameScriptDataSP->actorCorpseInfo[11].tree = NULL;
    GameScriptDataSP->actorCorpseInfo[11].entnum = -1;
    GameScriptDataSP->actorCorpseInfo[12].tree = NULL;
    GameScriptDataSP->actorCorpseInfo[12].entnum = -1;
    GameScriptDataSP->actorCorpseInfo[13].tree = NULL;
    GameScriptDataSP->actorCorpseInfo[13].entnum = -1;
    GameScriptDataSP->actorCorpseInfo[14].tree = NULL;
    GameScriptDataSP->actorCorpseInfo[14].entnum = -1;
    GameScriptDataSP->actorCorpseInfo[15].tree = NULL;
    GameScriptDataSP->actorCorpseInfo[15].entnum = -1;
    GameScriptDataSP->actorCorpseInfo[16].tree = NULL;
    GameScriptDataSP->actorCorpseInfo[16].entnum = -1;
    GameScriptDataSP->actorCorpseInfo[17].tree = NULL;
    GameScriptDataSP->actorCorpseInfo[17].entnum = -1;
    GameScriptDataSP->actorCorpseInfo[18].tree = NULL;
    GameScriptDataSP->actorCorpseInfo[18].entnum = -1;
    GameScriptDataSP->actorCorpseInfo[19].tree = NULL;
    GameScriptDataSP->actorCorpseInfo[19].entnum = -1;
    GameScriptDataSP->actorCorpseInfo[20].tree = NULL;
    GameScriptDataSP->actorCorpseInfo[20].entnum = -1;
    GameScriptDataSP->actorCorpseInfo[21].tree = NULL;
    GameScriptDataSP->actorCorpseInfo[21].entnum = -1;
    GameScriptDataSP->actorCorpseInfo[22].tree = NULL;
    GameScriptDataSP->actorCorpseInfo[22].entnum = -1;
    GameScriptDataSP->actorCorpseInfo[23].tree = NULL;
    GameScriptDataSP->actorCorpseInfo[23].entnum = -1;
    GameScriptDataSP->actorCorpseInfo[24].tree = NULL;
    GameScriptDataSP->actorCorpseInfo[24].entnum = -1;
    GameScriptDataSP->actorCorpseInfo[25].tree = NULL;
    GameScriptDataSP->actorCorpseInfo[25].entnum = -1;
    GameScriptDataSP->actorCorpseInfo[26].tree = NULL;
    GameScriptDataSP->actorCorpseInfo[26].entnum = -1;
    GameScriptDataSP->actorCorpseInfo[27].tree = NULL;
    GameScriptDataSP->actorCorpseInfo[27].entnum = -1;
    PlayerAnimset_ValidateAnimTrees();
  }
  Scr_Mem_ReleaseScriptLocks();
  ProfLoad_End();
  Mem_LargeLocal::~Mem_LargeLocal(&v14);
}

/*
==============
G_MainSP_ReadClientMessages
==============
*/
void G_MainSP_ReadClientMessages(void)
{
  AimTargetSP_UpdateClientTargets();
  memcpy_0(&g_cgameData, &level.cgameData, sizeof(g_cgameData));
}

/*
==============
G_MainSP_RegisterDvars
==============
*/

void __fastcall G_MainSP_RegisterDvars(__int64 a1, __int64 a2, double _XMM2_8)
{
  const dvar_t *v25; 
  const dvar_t *v30; 
  const dvar_t *v51; 
  const dvar_t *v55; 
  const dvar_t *v64; 
  const dvar_t *v68; 
  const dvar_t *v72; 
  const dvar_t *v118; 
  const dvar_t *v122; 
  const dvar_t *v126; 
  const dvar_t *v136; 
  const dvar_t *v140; 
  const dvar_t *v173; 
  const dvar_t *v180; 
  const dvar_t *v184; 
  const dvar_t *v191; 
  const dvar_t *v198; 
  const dvar_t *v202; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovaps xmmword ptr [rax-48h], xmm10
    vmovaps xmmword ptr [rax-58h], xmm13
    vmovaps xmmword ptr [rax-68h], xmm14
    vmovaps xmmword ptr [rax-78h], xmm15
  }
  ProfLoad_Begin("register game dvars");
  __asm
  {
    vmovss  xmm13, cs:__real@447a0000
    vmovss  xmm15, cs:__real@3f800000
  }
  DVARINT_g_player_maxhealth = Dvar_RegisterInt("LTNTMKKTPN", 100, 10, 2000, 0x2082u, "Player's maximum health");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm15; value
  }
  DVARFLT_player_damageMultiplier = Dvar_RegisterFloat("NLSMMKNMTN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Player damage is scaled by this amount used by script for setting difficulty level");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm15; value
  }
  DVARFLT_player_radiusDamageMultiplier = Dvar_RegisterFloat("NNMKTTLLLN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Radius damage to the player is scaled by this amount used by script for setting difficulty level");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm15; value
  }
  DVARFLT_player_meleeDamageMultiplier = Dvar_RegisterFloat("MSRSPQNQKP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Melee damage to the player is scaled by this amount used by script for setting difficulty level");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v25 = Dvar_RegisterFloat("LOLTKOLKON", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Ratio of player's maxHealth that should be considered armor for the purpose of drawing on-screen damage indicators.");
  __asm
  {
    vmovss  xmm14, cs:__real@7f7fffff
    vmovss  xmm1, cs:__real@42d00000; value
  }
  DVARFLT_player_healthArmorRatio = v25;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v30 = Dvar_RegisterFloat("MSKKQLOTT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "Maximum vertical distance at which a grenade will do damage when exploding");
  __asm { vmovss  xmm1, cs:__real@40800000; value }
  DVARFLT_g_grenadeDamageMaxHeight = v30;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_g_changelevel_time = Dvar_RegisterFloat("MLNSOLLMTT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x80u, "Time for change level fade out");
  __asm
  {
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm15; value
  }
  DVARFLT_g_friendlyfireDamageScale = Dvar_RegisterFloat("LNTOSQKRNR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Scales player damage from other players");
  DVARBOOL_player_deathInvulnerableToMelee = Dvar_RegisterBool("MRKNTLRQSL", 0, 0xC4u, "The player is invulnerable to melee attacks during death invulnerability");
  __asm { vmovss  xmm1, cs:__real@3fd9999a; value }
  DVARBOOL_player_deathInvulnerableToProjectile = Dvar_RegisterBool("MOONNOPKQS", 1, 0xC4u, "The player is invulnerable to projectile attacks during death invulnerability");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_turretPlayerAvoidScale = Dvar_RegisterFloat("LSMQTPLRRT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "Auto turrets will try to avoid the player.  They will not choose a target that is within a cone around the player.  The diameter of the cone is the player's height, so the cone is smaller, the farther the player is from the turret.  Use this dvar to scale the cone size.");
  __asm
  {
    vmovss  xmm3, cs:__real@43340000; max
    vmovss  xmm1, cs:__real@42700000; value
  }
  DVARBOOL_turretSentryRestrictUsageToOwner = Dvar_RegisterBool("NPLSOOTQOL", 1, 0x44u, "When true, only players that own the sentry turret are allowed to interact with it.");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DVARFLT_shieldPlayerBulletProtectionDegrees = Dvar_RegisterFloat("LNLMORTOPL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "Bullets fired at a riotshield-bearing player will be blocked if they are within this many degrees of the player's forward direction.  Higher value means wider protection.");
  DVARBOOL_scr_dof_enable = Dvar_RegisterBool("scr_dof_enable", 1, 0xC4u, "enable dof");
  __asm { vmovss  xmm10, cs:__real@41200000 }
  DVARINT_g_entinfo_type = Dvar_RegisterEnum("MPKQPPKTRP", g_entinfoSP_typeNames, 1, 4u, "Type of entities to display information");
  __asm
  {
    vmovaps xmm3, xmm10; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm15; value
  }
  DVARFLT_g_entinfo_scale = Dvar_RegisterFloat("NSTNNNRRPL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Scale of the entity information text");
  DVARINT_g_drawEntBBoxes = Dvar_RegisterInt("MPNTPKSLLT", 0, 0, 4, 4u, "Draw entity bounding boxes");
  DCONST_DVARBOOL_g_lookAtEntityDebugTrace = Dvar_RegisterBool("g_lookAtEntityDebugTrace", 0, 0x40004u, "When set, draw the look at entity trace.");
  __asm
  {
    vmovss  xmm8, cs:__real@41f00000
    vmovss  xmm3, cs:__real@42700000; max
  }
  DVARINT_g_deathDelay = Dvar_RegisterInt("MMMSPTOSMK", 3000, 0, 0x7FFFFFFF, 0x40u, "Delay a level restart on death");
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  v51 = Dvar_RegisterFloat("NLOSRPTNLR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Angle outside which we don't check for actor visibility.");
  __asm
  {
    vmovss  xmm3, cs:__real@459c4000; max
    vmovss  xmm1, cs:__real@42f00000; value
  }
  DVARFLT_actorVisibilityMinCheckAngle = v51;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v55 = Dvar_RegisterFloat("LTKTLQRORL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance below which we set angle to 90.");
  __asm
  {
    vmovss  xmm3, cs:__real@459c4000; max
    vmovss  xmm1, cs:__real@43b40000; value
  }
  DVARFLT_actorVisibilityCheckAngleDistMin = v55;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm7, cs:__real@38d1b717
    vmovss  xmm6, cs:__real@3f733333
  }
  DVARFLT_actorVisibilityCheckAngleDistMax = Dvar_RegisterFloat("LQTOSMMPOP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Distance above which we set angle to actorVisibilityMinCheckAngle.");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm7; min
    vmovaps xmm1, xmm6; value
  }
  v64 = Dvar_RegisterFloat("NTKQMSSMNS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The submarine yaw dampening fraction");
  __asm { vmovss  xmm1, cs:__real@3f666666; value }
  DVARFLT_vehSubmarineYawDampening = v64;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm7; min
  }
  v68 = Dvar_RegisterFloat("PKNLPTTQR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The submarine pitch dampening fraction");
  __asm { vmovss  xmm1, cs:__real@3f666666; value }
  DVARFLT_vehSubmarinePitchDampening = v68;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm7; min
  }
  v72 = Dvar_RegisterFloat("LMTSOOOKQO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The submarine roll dampening fraction");
  __asm { vmovss  xmm1, cs:__real@3f7d70a4; value }
  DVARFLT_vehSubmarineRollDampening = v72;
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm7; min
  }
  DVARFLT_vehSubmarinePitchRestore = Dvar_RegisterFloat("MRNLSNRTLQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The submarine pitch restore fraction when not moving");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm7; min
    vmovaps xmm1, xmm6; value
  }
  DVARFLT_vehSubmarineRollRestore = Dvar_RegisterFloat("OMLKOQKTRL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The submarine roll restore fraction when not moving");
  __asm
  {
    vmovss  xmm1, cs:__real@40a00000; value
    vmovaps xmm3, xmm13; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_vehSubmarineMinVelNoRestore = Dvar_RegisterFloat("NOKKSLLNNO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The minimum velocity the submarine has when restore is enabled");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm7; min
    vmovaps xmm1, xmm6; value
  }
  DVARFLT_vehSubmarineForwardDampening = Dvar_RegisterFloat("LSTNKTRSQM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The submarine forward dampening fraction");
  __asm
  {
    vmovaps xmm3, xmm15; max
    vmovaps xmm2, xmm7; min
    vmovaps xmm1, xmm6; value
    vmovss  xmm7, cs:__real@42b40000
  }
  DVARFLT_vehSubmarineLateralDampening = Dvar_RegisterFloat("OLTTKMTNPO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The submarine lateral dampening fraction");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  DVARFLT_vehSubmarineMaxUpPitch = Dvar_RegisterFloat("RRRKQOTTR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The max pitch up allowed for the submarine");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  DVARFLT_vehSubmarineMaxDownPitch = Dvar_RegisterFloat("LSLKLPLQPO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The max pitch down allowed for the submarine");
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm10; value
    vmovss  xmm8, cs:__real@43480000
  }
  DVARFLT_vehSubmarineMaxRoll = Dvar_RegisterFloat("LLRPLSNSQR", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The max roll allowed for the submarine");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
    vmovss  xmm6, cs:__real@41a00000
  }
  DVARFLT_vehSubmarineMaxForwardAccel = Dvar_RegisterFloat("NPQLRNMSSL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The max forward acceleration allowed for the submarine");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  DVARFLT_vehSubmarineMaxReverseAccel = Dvar_RegisterFloat("MONMNPPTQM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The max reverse acceleration allowed for the submarine");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  DVARFLT_vehSubmarineMinForwardVel = Dvar_RegisterFloat("MONQNPLPOS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The min forward velocity allowed for the submarine (only active when non-zero)");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  DVARFLT_vehSubmarineMaxForwardVel = Dvar_RegisterFloat("OMNMMMKLNK", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The max forward velocity allowed for the submarine");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  DVARFLT_vehSubmarineMaxReverseVel = Dvar_RegisterFloat("MNKNOSQLQT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The max reverse velocity allowed for the submarine");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  v118 = Dvar_RegisterFloat("NLOOTQLMRS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The max lateral velocity allowed for the submarine");
  __asm { vmovss  xmm1, cs:__real@42200000; value }
  DVARFLT_vehSubmarineMaxLateralVel = v118;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v122 = Dvar_RegisterFloat("MSRMSSQNML", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The max positive buoyancy allowed for the submarine");
  __asm { vmovss  xmm1, cs:__real@42200000; value }
  DVARFLT_vehSubmarineMaxPositiveBuoyancy = v122;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v126 = Dvar_RegisterFloat("MOOQQMPQKT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The max negative buoyancy allowed for the submarine");
  __asm { vmovss  xmm1, cs:__real@3ecccccd; value }
  DVARFLT_vehSubmarineMaxNegativeBuoyancy = v126;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_vehSubmarineStoppedVel = Dvar_RegisterFloat("OSSMSLRM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The threshold velocity to determine the submarine is stopped");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm10; value
  }
  DVARFLT_vehSubmarineMaxForwardPitchAccel = Dvar_RegisterFloat("LLOONPKNRL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The max pitch acceleration when moving forward for the submarine");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm10; value
  }
  v136 = Dvar_RegisterFloat("MRPQNLKMSM", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The max yaw acceleration when moving forward for the submarine");
  __asm { vmovss  xmm1, cs:__real@40a00000; value }
  DVARFLT_vehSubmarineMaxForwardYawAccel = v136;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v140 = Dvar_RegisterFloat("NLKPSNQPOS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The max pitch acceleration when moving backwards for the submarine");
  __asm { vmovss  xmm1, cs:__real@40a00000; value }
  DVARFLT_vehSubmarineMaxReversePitchAccel = v140;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm6, cs:__real@40400000
  }
  DVARFLT_vehSubmarineMaxReverseYawAccel = Dvar_RegisterFloat("NLPQTPKLN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The max yaw acceleration when moving backwards for the submarine");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  DVARFLT_vehSubmarineMaxStoppedPitchAccel = Dvar_RegisterFloat("TPQTTLRNN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The max pitch acceleration when stopped for the submarine");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  DVARFLT_vehSubmarineMaxStoppedYawAccel = Dvar_RegisterFloat("MLLOKOQTSS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The max yaw acceleration when stopped for the submarine");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm6; value
  }
  DVARFLT_vehSubmarineMaxRollAccel = Dvar_RegisterFloat("NRLPQQPNPT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "The max roll acceleration for the submarine");
  DVARINT_vehSubmarineControls = Dvar_RegisterInt("LPSMMMLPS", 0, 0, 2, 0xC4u, "Submarine controls (0==org, 1=trigger accel, 2=right stick pitch/yaw)");
  DVARBOOL_vehSubmarineInvertUpDown = Dvar_RegisterBool("LSTRPNTKLP", 0, 0xC4u, "Invert the attitude control on the player submarine.");
  __asm { vmovss  xmm1, cs:__real@41c00000; value }
  DVARBOOL_vehSubmarineAllowInSolid = Dvar_RegisterBool("LLKLPLNLPR", 0, 0xC4u, "Allow in solid.  Dangerous! Used to push the submarine with a collision brushmodel.");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_vehSubmarineSideProbeMinDist = Dvar_RegisterFloat("LQNOQSSPMN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "Min distance for the submarine side probe");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  DVARFLT_vehSubmarineSideProbeMaxDist = Dvar_RegisterFloat("NMPOQPSKQL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "Max distance for the submarine side probe");
  __asm
  {
    vmovss  xmm1, cs:__real@3fa00000; value
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovss  xmm7, cs:__real@43fa0000
  }
  DVARFLT_vehSubmarineFwdProbeTime = Dvar_RegisterFloat("NLTQPPPSO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "The time for the submarine forward probe");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  DVARFLT_vehSubmarineSideCollMaxAngAccel = Dvar_RegisterFloat("NNSTQKKKLN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "Submarine side probe max angular accel");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm13; value
  }
  DVARFLT_vehSubmarineSideCollMaxAccel = Dvar_RegisterFloat("OMNTTRKLOP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "Submarine side probe max accel");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm8; value
  }
  v173 = Dvar_RegisterFloat("LTQOKPT", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "Submarine forward probe max angular accel");
  __asm { vmovss  xmm1, cs:__real@42c80000; value }
  DVARFLT_vehSubmarineFwdCollMaxAngAccel = v173;
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  DVARFLT_vehSubmarineFwdCollMaxAccel = Dvar_RegisterFloat("LKOMSQRTTL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "Submarine forward probe max accel");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm7; value
  }
  v180 = Dvar_RegisterFloat("LPLLPQKSOP", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "Submarine max forward velocity reference for coll adjust");
  __asm { vmovss  xmm3, cs:__real@40800000; max }
  DVARFLT_vehSubmarineMaxFwdVelRef = v180;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm15; value
  }
  v184 = Dvar_RegisterFloat("MRKQORPPPQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "Submarine gamma for input on horizontal input");
  __asm { vmovss  xmm3, cs:__real@40800000; max }
  DVARFLT_vehSubmarineHorizControlGamma = v184;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm15; value
  }
  DVARFLT_vehSubmarineVertControlGamma = Dvar_RegisterFloat("PNPLPTSMN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "Submarine gamma for input on vertical input");
  DVARINT_vehSubmarineBodyRelRotation = Dvar_RegisterInt("OMPOPSSLNR", 1, 0, 7, 0xC4u, "Submarine Body Relative Rotation (0 == world, 1 == body coupled, 2 == horz is roll only, 3 == horz is world yaw, add 4 for camera relative)");
  __asm
  {
    vmovaps xmm3, xmm14; max
    vxorps  xmm2, xmm2, xmm2; min
    vxorps  xmm1, xmm1, xmm1; value
  }
  v191 = Dvar_RegisterFloat("MOSRNTSSOQ", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Submarine roll drives applied yaw (0 mean don't scale yaw)");
  __asm { vmovss  xmm3, cs:__real@40000000; max }
  DVARFLT_vehSubmarineRollDrivenYaw = v191;
  __asm
  {
    vxorps  xmm2, xmm2, xmm2; min
    vmovaps xmm1, xmm15; value
  }
  DVARFLT_vehBoatRockingScale = Dvar_RegisterFloat("MNLLRPRONL", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC4u, "Scale of the boat rocking (usually used to turn off rocking during cinematics)");
  DVARINT_ai_corpseCount = Dvar_RegisterInt("NLRRTORQPN", 28, 0, 28, 0xC0u, "Scriptable maximum number of AI corpses");
  __asm
  {
    vmovss  xmm3, cs:__real@3f666666; max
    vmovss  xmm1, cs:__real@3f47ae14; value
  }
  DVARBOOL_ai_corpseSynch = Dvar_RegisterBool("MQSNSOSMPN", 0, 0xC0u, "Synch corpse physics origins to server (SP only)");
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  v198 = Dvar_RegisterFloat("NKLTPKKSKN", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "Momentum factor for continuing motion in previous direction. 0 for no momentum carry over");
  __asm { vmovss  xmm1, cs:__real@43160000; value }
  DVARFLT_ai_pathMomentum = v198;
  __asm
  {
    vmovaps xmm3, xmm7; max
    vxorps  xmm2, xmm2, xmm2; min
  }
  v202 = Dvar_RegisterFloat("LRQMNLTSRO", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0xC0u, "Friendly AI will try not to claim cover nodes in this range of player's line of sight. They will also try not to get in front of player throwing grenade in this range.");
  __asm
  {
    vmovss  xmm3, cs:__real@42c80000; max
    vmovss  xmm1, cs:__real@41c80000; value
  }
  DVARFLT_ai_playerLOSRange = v202;
  __asm { vxorps  xmm2, xmm2, xmm2; min }
  DVARFLT_ai_playerLOSHalfWidth = Dvar_RegisterFloat("TKLPMKOOS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 0x84u, "Friendly AI will try not to claim cover nodes in this width of player's line of sight");
  DVARINT_ai_playerLOSMinTime = Dvar_RegisterInt("NRSMQSSPNK", 750, 0, 0x7FFFFFFF, 0x84u, "Player line of sight effect will take effect after player is almost stationary for this time (millisec)");
  DVARINT_ai_playerADSTargetTime = Dvar_RegisterInt("LNTQNLMLQR", 10000, 0, 0x7FFFFFFF, 0x84u, "Duration which the AI will not step in front of the player ADS'ing at a target (millisec)");
  DVARBOOL_ai_friendlySuppression = Dvar_RegisterBool("LOPPNSOTOS", 1, 0xC4u, "Whether AI fire will suppression teammates or not.");
  DVARINT_ai_dropAkimboChance = Dvar_RegisterInt("MQSSSPOTS", 0, 0, 100, 0xC4u, "Chance that an AI will drop akimbo weapons if available for the weapon");
  DVARBOOL_ai_disableSpawn = Dvar_RegisterBool("NPQSMMRSSL", 0, 0x84u, "Do not spawn AI");
  DVARINT_ai_moveOrientMode = Dvar_RegisterEnum("NSRKROQKPT", s_aiMoveOrientModeStrings, 0, 4u, "Debug AI Orient Mode");
  DVARBOOL_ai_debugCorpsePlant = Dvar_RegisterBool("OKNLKQMKPQ", 0, 4u, "Display debug information for AI corpse planting");
  DVARBOOL_g_aiEventListenerDump = Dvar_RegisterBool("LLKMSNTQLP", 0, 4u, "Dump the AI event listeners once. Automatically reset to false after dump");
  _R11 = &retaddr;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm10, xmmword ptr [r11-48h]
    vmovaps xmm13, xmmword ptr [r11-58h]
    vmovaps xmm14, xmmword ptr [r11-68h]
    vmovaps xmm15, xmmword ptr [r11-78h]
  }
  ProfLoad_End();
}

/*
==============
G_MainSP_RunFrame
==============
*/
__int64 G_MainSP_RunFrame(ServerFrameExtent extent, unsigned int timeCap)
{
  ServerFrameSmoothStatus v4; 

  Profile_Begin(604);
  v4 = G_MainSP_RunFrame_Internal(extent, timeCap);
  Profile_EndInternal(NULL);
  if ( extent == SV_FRAME_DO_ALL && v4 == SV_FRAME_SMOOTH_DONE )
  {
    Profile_Begin(605);
    if ( BYTE1(GameScriptData::ms_allocatedType) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_antilag_sp.h", 72, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
      __debugbreak();
    GAntiLagSP::ArchiveAntilagFrame((GAntiLagSP *)GAntiLag::ms_gAntiLagData);
    Profile_EndInternal(NULL);
  }
  return (unsigned int)v4;
}

/*
==============
G_MainSP_RunFrameForEntity
==============
*/
void G_MainSP_RunFrameForEntity(gentity_s *ent)
{
  __int64 v9; 
  EntityTagInfo *tagInfo; 
  actor_s *actor; 
  unsigned int v12; 
  gentity_s *UpdateDependency; 
  bool v14; 
  bool v15; 
  const char *v17; 
  bool v24; 
  const char *v25; 
  bool v32; 
  const char *v33; 
  Vehicle *vehicle; 
  const char *v41; 
  int v42; 
  const char *v43; 
  const dvar_t *v44; 
  __int64 v48; 
  __int64 v49; 
  double v50; 
  double v51; 
  double v52; 
  double v53; 
  double v54; 
  double v55; 
  double v56; 
  double v57; 
  double v58; 
  vec3_t prevAngles; 
  vec3_t prevOrigin; 
  AIActorInterface v61; 
  AIActorInterface *v62; 

  __asm
  {
    vmovss  xmm0, dword ptr [rcx+130h]
    vmovss  xmm1, dword ptr [rcx+134h]
    vmovss  dword ptr [rsp+0C8h+prevOrigin], xmm0
    vmovss  xmm0, dword ptr [rcx+138h]
    vmovss  dword ptr [rsp+0C8h+prevOrigin+4], xmm1
    vmovss  xmm1, dword ptr [rcx+13Ch]
    vmovss  dword ptr [rsp+0C8h+prevOrigin+8], xmm0
    vmovss  xmm0, dword ptr [rcx+140h]
    vmovss  dword ptr [rsp+0C8h+prevAngles], xmm1
    vmovss  xmm1, dword ptr [rcx+144h]
    vmovss  dword ptr [rsp+0C8h+prevAngles+4], xmm0
    vmovss  dword ptr [rsp+0C8h+prevAngles+8], xmm1
  }
  _RBX = ent;
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v9 = _RBX - g_entities;
  if ( (unsigned int)v9 >= 0x800 )
  {
    LODWORD(v48) = _RBX - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v48, 2048) )
      __debugbreak();
  }
  v9 = (__int16)v9;
  if ( (unsigned int)(__int16)v9 >= 0x800 )
  {
    LODWORD(v49) = 2048;
    LODWORD(v48) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v48, v49) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v9].r.isInUse != g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 2794, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( G_GetEntityIndex( ent ) ))", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( ent ) )") )
    __debugbreak();
  if ( _RBX->processedFrame != level.framenum )
  {
    _RBX->processedFrame = level.framenum;
    tagInfo = _RBX->tagInfo;
    __asm { vmovaps [rsp+0C8h+var_18], xmm6 }
    if ( tagInfo )
    {
      if ( !tagInfo->parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 2859, ASSERT_TYPE_ASSERT, "(ent->tagInfo->parent)", (const char *)&queryFormat, "ent->tagInfo->parent") )
        __debugbreak();
      G_MainSP_RunFrameForEntity(_RBX->tagInfo->parent);
    }
    AIActorInterface::AIActorInterface(&v61);
    actor = _RBX->actor;
    v12 = 0;
    v62 = NULL;
    if ( actor )
    {
      AIActorInterface::SetActor(&v61, actor);
      v62 = &v61;
      UpdateDependency = AIScriptedInterface::GetUpdateDependency(&v61);
      if ( UpdateDependency )
        G_MainSP_RunFrameForEntity(UpdateDependency);
    }
    G_Util_FlushInvalidOtherEnt(_RBX);
    v14 = (_RBX->r.svFlags & 6) != 7;
    if ( (_RBX->r.svFlags & 6) == 6 )
    {
      LODWORD(v48) = _RBX->s.number;
      v15 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 2816, ASSERT_TYPE_ASSERT, "( ( (ent->r.svFlags & ((1 << 1) | (1 << 2))) != ((1 << 1) | (1 << 2)) ) )", "( ent->s.number ) = %i", v48);
      v14 = !v15;
      if ( v15 )
        __debugbreak();
    }
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vcomiss xmm6, dword ptr [rbx+10Ch]
    }
    if ( !v14 )
    {
      v17 = SL_ConvertToString(_RBX->classname);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+138h]
        vmovss  xmm1, dword ptr [rbx+134h]
        vmovss  xmm2, dword ptr [rbx+130h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+0C8h+var_80], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+0C8h+var_88], xmm1
        vcvtss2sd xmm2, xmm2, xmm2
        vmovsd  [rsp+0C8h+var_90], xmm2
      }
      LODWORD(v49) = _RBX->s.number;
      v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 2818, ASSERT_TYPE_ASSERT, "(ent->r.box.halfSize[0] >= 0.0f)", "%s\n\tentnum: %d, origin: %g %g %g, classname: %s", "ent->r.box.halfSize[0] >= 0.0f", v49, v50, v53, v56, v17);
      v14 = !v24;
      if ( v24 )
        __debugbreak();
    }
    __asm { vcomiss xmm6, dword ptr [rbx+110h] }
    if ( !v14 )
    {
      v25 = SL_ConvertToString(_RBX->classname);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+138h]
        vmovss  xmm1, dword ptr [rbx+134h]
        vmovss  xmm2, dword ptr [rbx+130h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+0C8h+var_80], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+0C8h+var_88], xmm1
        vcvtss2sd xmm2, xmm2, xmm2
        vmovsd  [rsp+0C8h+var_90], xmm2
      }
      LODWORD(v49) = _RBX->s.number;
      v32 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 2819, ASSERT_TYPE_ASSERT, "(ent->r.box.halfSize[1] >= 0.0f)", "%s\n\tentnum: %d, origin: %g %g %g, classname: %s", "ent->r.box.halfSize[1] >= 0.0f", v49, v51, v54, v57, v25);
      v14 = !v32;
      if ( v32 )
        __debugbreak();
    }
    __asm { vcomiss xmm6, dword ptr [rbx+114h] }
    if ( !v14 )
    {
      v33 = SL_ConvertToString(_RBX->classname);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+138h]
        vmovss  xmm1, dword ptr [rbx+134h]
        vmovss  xmm2, dword ptr [rbx+130h]
        vcvtss2sd xmm0, xmm0, xmm0
        vmovsd  [rsp+0C8h+var_80], xmm0
        vcvtss2sd xmm1, xmm1, xmm1
        vmovsd  [rsp+0C8h+var_88], xmm1
        vcvtss2sd xmm2, xmm2, xmm2
        vmovsd  [rsp+0C8h+var_90], xmm2
      }
      LODWORD(v49) = _RBX->s.number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 2820, ASSERT_TYPE_ASSERT, "(ent->r.box.halfSize[2] >= 0.0f)", "%s\n\tentnum: %d, origin: %g %g %g, classname: %s", "ent->r.box.halfSize[2] >= 0.0f", v49, v52, v55, v58, v33) )
        __debugbreak();
    }
    vehicle = _RBX->vehicle;
    if ( vehicle )
    {
      if ( (unsigned int)(vehicle - level.vehicles) >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 2826, ASSERT_TYPE_ASSERT, "((unsigned)( ent->vehicle - level.vehicles ) < (1 << 7))", (const char *)&queryFormat, "(unsigned)( ent->vehicle - level.vehicles ) < MAX_VEHICLES") )
        __debugbreak();
      if ( _RBX->vehicle->ent )
        goto LABEL_50;
      v41 = "ent->vehicle->ent";
      v42 = 2827;
      v43 = "(ent->vehicle->ent)";
    }
    else
    {
      if ( _RBX->s.eType != ET_VEHICLE )
      {
LABEL_50:
        G_MainSP_RunFrameForEntityInternal(_RBX);
        GMovingPlatforms::UpdateEntityMoveFlag(_RBX, &prevOrigin, &prevAngles);
        v44 = DVARINT_g_debugLocDamage;
        if ( !DVARINT_g_debugLocDamage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_debugLocDamage") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v44);
        if ( v44->current.integer == _RBX->s.number && SV_Game_DObjExists(_RBX) )
        {
          _RSI = &v61;
          __asm { vmovdqu xmm6, cs:__xmm@ffffffffffffffffffffffffffffffff }
          do
          {
            __asm { vmovdqu xmmword ptr [rsi], xmm6 }
            _RSI = (AIActorInterface *)((char *)_RSI + 16);
            ++v12;
          }
          while ( v12 < 2 );
          G_Utils_DObjCalcPose(_RBX, (DObjPartBits *)&v61);
          SV_Game_XModelDebugBoxes(_RBX, &colorWhite, 0);
        }
        __asm { vmovaps xmm6, [rsp+0C8h+var_18] }
        return;
      }
      v41 = "ent->s.eType != ET_VEHICLE";
      v42 = 2831;
      v43 = "(ent->s.eType != ET_VEHICLE)";
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", v42, ASSERT_TYPE_ASSERT, v43, (const char *)&queryFormat, v41) )
      __debugbreak();
    goto LABEL_50;
  }
}

/*
==============
G_MainSP_RunFrameForEntityInternal
==============
*/
void G_MainSP_RunFrameForEntityInternal(gentity_s *ent)
{
  int eventTime; 
  unsigned __int8 eventTypeFlags; 
  entityType_s eType; 
  entityType_s v5; 

  if ( ent->s.eType >= ET_EVENTS && !G_Main_IsEventValid(ent) )
    goto LABEL_6;
  eventTime = ent->r.eventTime;
  if ( eventTime && level.time - eventTime > 300 )
  {
    eventTypeFlags = ent->r.eventTypeFlags;
    if ( (eventTypeFlags & 1) != 0 )
    {
LABEL_6:
      G_FreeEntity(ent);
      return;
    }
    if ( (eventTypeFlags & 2) != 0 )
    {
      ent->r.eventTypeFlags = eventTypeFlags & 0xFD;
      SV_UnlinkEntity(ent);
    }
    ent->r.eventTime = 0;
  }
  eType = ent->s.eType;
  if ( eType == ET_MISSILE )
  {
    G_Missile_RunMissile(ent);
    return;
  }
  if ( eType == ET_ITEM )
  {
    if ( ent->tagInfo )
      goto LABEL_14;
    goto LABEL_21;
  }
  if ( ent == (gentity_s *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2263, ASSERT_TYPE_ASSERT, "(trajectory)", (const char *)&queryFormat, "trajectory") )
    __debugbreak();
  if ( (unsigned int)(ent->s.lerp.pos.trType - 23) <= 5 )
    goto LABEL_15;
  if ( ent->physicsObject )
  {
LABEL_21:
    G_Items_RunItem(ent);
    return;
  }
  v5 = ent->s.eType;
  if ( ((v5 - 6) & 0xFFFB) != 0 )
  {
    switch ( v5 )
    {
      case ET_PHYSICS_CHILD:
        Profile_Begin(639);
        G_PhysicsObject_UpdatePhysicsChild(PHYSICS_WORLD_ID_FIRST, ent);
        Profile_EndInternal(NULL);
        break;
      case ET_BEAM:
        G_BeamEntity_Update(ent);
        break;
      case ET_RAGDOLL_CONSTRAINT:
        G_RagdollConstraintEntity_Update(ent);
        break;
      case ET_PHYSICS_VOLUME:
        if ( ent->tagInfo )
          G_GeneralLink(ent);
        G_PhysicsVolume_Update(ent);
        break;
      case ET_COVERWALL:
        G_CoverWall_Update(ent);
        break;
      default:
        if ( !ent->client )
        {
          if ( v5 == ET_FIRST )
          {
            if ( !ent->tagInfo )
              goto LABEL_15;
            G_GeneralLink(ent);
            v5 = ent->s.eType;
          }
          if ( v5 != ET_INFO_VOLUME_GRAPPLE || !ent->tagInfo )
            goto LABEL_15;
LABEL_14:
          G_GeneralLink(ent);
LABEL_15:
          G_Main_RunThink(ent);
        }
        break;
    }
  }
  else
  {
    GMovingPlatforms::UpdateMovingPlatformEntity(ent);
  }
}

/*
==============
G_MainSP_RunFrame_Internal
==============
*/
__int64 G_MainSP_RunFrame_Internal(ServerFrameExtent extent, unsigned int timeCap)
{
  ServerFrameExtent v4; 
  unsigned int v5; 
  scrContext_t *v6; 
  gentity_s *v7; 
  __int64 currentIndex; 
  const char *v10; 
  int SpClientNum; 
  const dvar_t *v15; 
  const dvar_t *v16; 
  int v17; 
  const dvar_t *v18; 
  int v19; 
  __int64 v20; 
  __int64 v21; 
  gentity_s *v22; 
  __int64 v23; 
  gentity_s *v24; 
  GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64> *p_flags; 
  __int64 v26; 
  const dvar_t *v27; 
  int v28; 
  gentity_s *PlayerVehicle; 
  __int64 v30; 
  int v31; 
  __int64 v32; 
  __int64 v33; 
  int v34; 
  __int64 v35; 
  __int64 v36; 
  gentity_s *v37; 
  GBallistics *v38; 
  GAntiLag *v39; 
  int v40; 
  __int64 v41; 
  __int64 v42; 
  gentity_s *v43; 
  int v44; 
  __int64 v45; 
  __int64 v46; 
  bool v47; 
  const dvar_t *v48; 
  int v49; 
  bool v50; 
  __int64 v51; 
  __int64 v52; 
  const char *v53; 
  GWeaponMap *Instance; 
  GWeaponMap *v55; 
  const dvar_t *v56; 
  __int64 integer; 
  const DObj *ServerDObjForEnt; 
  const dvar_t *v59; 
  __int64 v61; 
  __int64 v62; 
  __int64 v63; 
  scrContext_t *v67; 

  v4 = extent;
  v5 = timeCap;
  v67 = ScriptContext_Server();
  v6 = v67;
  if ( v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 3576, ASSERT_TYPE_ASSERT, "(extent == SV_FRAME_DO_ALL)", (const char *)&queryFormat, "extent == SV_FRAME_DO_ALL") )
    __debugbreak();
  if ( v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 3577, ASSERT_TYPE_ASSERT, "(!timeCap)", (const char *)&queryFormat, "!timeCap") )
    __debugbreak();
  if ( level.demoSaveGame )
  {
    level.demoSaveGame = 0;
  }
  else
  {
    G_MainSP_CheckReloadStatus();
    Sys_ProfBeginNamedEvent(0xFFCD5C5C, "update anim1");
    level.currentIndex = 0;
    Profile_Begin(427);
    Profile_BeginCSV(13);
    G_LogDebugEntInfoStart();
    v7 = &g_entities[level.currentIndex];
    if ( level.currentIndex < level.num_entities )
    {
      __asm
      {
        vmovaps [rsp+98h+var_48], xmm6
        vmovss  xmm6, cs:__real@3a83126f
      }
      do
      {
        currentIndex = level.currentIndex;
        if ( level.currentIndex >= 0x800u )
        {
          LODWORD(v62) = 2048;
          LODWORD(v61) = level.currentIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v61, v62) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[currentIndex].r.isInUse != g_entityIsInUse[currentIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( g_entityIsInUse[currentIndex] )
        {
          if ( v7->s.number != level.currentIndex )
          {
            v10 = SL_ConvertToString(v7->classname);
            LODWORD(v63) = level.currentIndex;
            LODWORD(v62) = v7->s.number;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 3631, ASSERT_TYPE_ASSERT, "(ent->s.number == level.currentIndex)", "%s\n\ts.number = %i, level.currentIndex = %i, classname = %s", "ent->s.number == level.currentIndex", v62, v63, v10) )
              __debugbreak();
          }
          G_LogDebugEntInfo(v7);
          if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
            __debugbreak();
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, cs:?level@@3Ulevel_locals_t@@A.frameDuration; level_locals_t level
            vmulss  xmm1, xmm0, xmm6; dtime
          }
          SV_Game_DObjInitServerTime(v7, *(float *)&_XMM1);
        }
        ++level.currentIndex;
        ++v7;
      }
      while ( level.currentIndex < level.num_entities );
      v6 = v67;
      v4 = extent;
      __asm { vmovaps xmm6, [rsp+98h+var_48] }
    }
    G_LogDebugEntInfoEnd();
    Profile_EndCSV(13);
    Profile_EndInternal(NULL);
    Sys_ProfEndNamedEvent();
    Sys_ProfBeginNamedEvent(0xFFBA55D3, "script threads1");
    Profile_BeginCSV(14);
    Scr_RunCurrentThreads(v6);
    Profile_EndCSV(14);
    Sys_ProfEndNamedEvent();
    Sys_ProfBeginNamedEvent(0xFFFF1493, "update player1");
    Profile_BeginCSV(15);
    G_ActiveSP_UpdatePlayers();
    GMovingPlatforms::UpdateAllPlatformTraces();
    SpClientNum = SvClientSP::GetSpClientNum();
    G_ActiveSP_UpdatePlayerTriggers(&level.gentities[SpClientNum]);
    Profile_EndCSV(15);
    Sys_ProfEndNamedEvent();
    Sys_ProfBeginNamedEvent(0xFFBA55D3, "script threads2");
    Profile_BeginCSV(16);
    memset_0(level.entTriggerIndex, 0, sizeof(level.entTriggerIndex));
    level.triggerIndex = 0;
    if ( level.currentTriggerListSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 3702, ASSERT_TYPE_ASSERT, "(level.currentTriggerListSize == 0)", (const char *)&queryFormat, "level.currentTriggerListSize == 0") )
      __debugbreak();
    memcpy_0(level.currentTriggerList, level.pendingTriggerList, 12i64 * level.pendingTriggerListSize);
    v15 = DVARINT_trigger_draw;
    level.currentTriggerListSize = level.pendingTriggerListSize;
    level.pendingTriggerListSize = 0;
    if ( !DVARINT_trigger_draw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "trigger_draw") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    if ( v15->current.integer )
    {
      v16 = DVARINT_trigger_draw;
      if ( !DVARINT_trigger_draw && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "trigger_draw") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      G_DrawTriggers((trigger_draw_type_t)v16->current.integer);
    }
    G_LightSampler_ProcessResults();
    Scr_RunCurrentThreads(v6);
    Profile_EndCSV(16);
    Profile_BeginCSV(16);
    do
    {
      v17 = G_GameSP_NotifyTriggers();
      Scr_RunCurrentThreads(v6);
    }
    while ( v17 );
    if ( level.currentTriggerListSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 3751, ASSERT_TYPE_ASSERT, "(level.currentTriggerListSize == 0)", (const char *)&queryFormat, "level.currentTriggerListSize == 0") )
      __debugbreak();
    while ( 1 )
    {
      v18 = DVARINT_ai_count;
      if ( !DVARINT_ai_count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_count") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      if ( level.actorCount <= v18->current.integer )
        break;
      AIActorInterface::FreeExpendable();
    }
    v5 = timeCap;
    v19 = 0;
    if ( level.maxclients > 0 )
    {
      v20 = 0i64;
      v21 = 0i64;
      do
      {
        if ( (unsigned int)v19 >= 0x800 )
        {
          LODWORD(v62) = 2048;
          LODWORD(v61) = v19;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v61, v62) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[v21].r.isInUse != g_entityIsInUse[v20] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( g_entityIsInUse[v20] )
          G_MainSP_ClientDoPerFrameNotifies(&g_entities[v19]);
        ++v19;
        ++v20;
        ++v21;
      }
      while ( v19 < level.maxclients );
      v6 = v67;
      v5 = timeCap;
      v4 = extent;
    }
    Scr_RunCurrentThreads(v6);
    Sys_ProfEndNamedEvent();
    Sys_ProfBeginNamedEvent(0xFFCD5C5C, "update anim2");
    level.currentIndex = 0;
    level.checkAnimChange = 0;
    Profile_EndCSV(16);
    Profile_Begin(427);
    Profile_BeginCSV(17);
    v22 = &g_entities[level.currentIndex];
    if ( level.currentIndex < level.num_entities )
    {
      do
      {
        while ( 1 )
        {
          v23 = level.currentIndex;
          if ( level.currentIndex >= 0x800u )
          {
            LODWORD(v62) = 2048;
            LODWORD(v61) = level.currentIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v61, v62) )
              __debugbreak();
          }
          if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
            __debugbreak();
          if ( g_entities[v23].r.isInUse != g_entityIsInUse[v23] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
            __debugbreak();
          if ( !g_entityIsInUse[v23] || GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::TestFlagInternal(&v22->flags, ACTIVE, 0xBu) || !G_UtilsSP_DObjUpdateServerTime(v22, 1) )
            break;
          Scr_RunCurrentThreads(v6);
          level.checkAnimChange = 1;
        }
        ++v22;
        ++level.currentIndex;
      }
      while ( level.currentIndex < level.num_entities );
      v5 = timeCap;
      v4 = extent;
    }
    if ( level.checkAnimChange )
    {
      do
      {
        v24 = g_entities;
        level.currentIndex = 0;
        level.checkAnimChange = 0;
        if ( level.num_entities <= 0 )
          break;
        p_flags = &g_entities->flags;
        do
        {
          while ( 1 )
          {
            v26 = level.currentIndex;
            if ( level.currentIndex >= 0x800u )
            {
              LODWORD(v62) = 2048;
              LODWORD(v61) = level.currentIndex;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v61, v62) )
                __debugbreak();
            }
            if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
              __debugbreak();
            if ( g_entities[v26].r.isInUse != g_entityIsInUse[v26] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
              __debugbreak();
            if ( !g_entityIsInUse[v26] )
              break;
            if ( GameModeFlagValues::ms_spValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 127, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a SP-only context", "IsFlagActive( index )") )
              __debugbreak();
            if ( !GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::TestFlagInternal(p_flags, ACTIVE, 0x21u) || GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::TestFlagInternal(p_flags, ACTIVE, 0xBu) || !G_UtilsSP_DObjUpdateServerTime(v24, 1) )
              break;
            Scr_RunCurrentThreads(v6);
            level.checkAnimChange = 1;
          }
          ++v24;
          p_flags += 182;
          ++level.currentIndex;
        }
        while ( level.currentIndex < level.num_entities );
      }
      while ( level.checkAnimChange );
      v5 = timeCap;
      v4 = extent;
    }
    Profile_EndCSV(17);
    Profile_EndInternal(NULL);
    Sys_ProfEndNamedEvent();
    Sys_ProfBeginNamedEvent(0xFFBA55D3, "script threads3");
    Profile_BeginCSV(18);
    if ( G_Main_IsScriptPlaceRecorded() )
      goto LABEL_110;
    v27 = DVARINT_g_dumpAnimsCommands;
    if ( !DVARINT_g_dumpAnimsCommands && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_dumpAnimsCommands") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    v28 = 0;
    if ( v27->current.integer > 0 )
LABEL_110:
      v28 = 1;
    Scr_SetRecordScriptPlace(v6, v28);
    Actor_EventListener_NotifyExecute();
    G_ActorCorpse_PhysicsOriginFrameRead();
    Scr_IncTime(v6);
    Sys_ProfEndNamedEvent();
    SV_Game_ResetSkeletonCache();
    XAnimProceduralBonesAllocator_BeginServerFrame();
    Profile_EndCSV(18);
  }
  SV_DemoSP_UpdateDemo();
  if ( SV_DemoSP_CheckAutoSaveHistory() )
  {
    level.demoSaveGame = 1;
    SV_DemoSP_DoAutoSaveHistory();
    level.demoSaveGame = 0;
  }
  Sys_ProfBeginNamedEvent(0xFFDC143C, "path bad places");
  Path_RunBadPlaces();
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFF1493, "update player2");
  Profile_BeginCSV(19);
  AimTargetSP_ClearTargetList();
  GMovingPlatforms::DeferredReset();
  Profile_Begin(279);
  G_Main_RunPreThinkForEntities();
  Profile_EndInternal(NULL);
  PlayerVehicle = G_Vehicle_GetPlayerVehicle(level.gentities);
  if ( PlayerVehicle )
  {
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v30 = PlayerVehicle - g_entities;
    if ( (unsigned int)v30 >= 0x800 )
    {
      LODWORD(v62) = 2048;
      LODWORD(v61) = PlayerVehicle - g_entities;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v61, v62) )
        __debugbreak();
    }
    v30 = (__int16)v30;
    if ( (unsigned int)(__int16)v30 >= 0x800 )
    {
      LODWORD(v62) = 2048;
      LODWORD(v61) = v30;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v61, v62) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v30].r.isInUse != g_entityIsInUse[v30] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v30] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 3919, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( G_GetEntityIndex( vehEnt ) ))", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( vehEnt ) )") )
      __debugbreak();
    G_MainSP_RunFrameForEntity(PlayerVehicle);
  }
  Sys_ProfEndNamedEvent();
  if ( level.currentEntityThink != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 3925, ASSERT_TYPE_ASSERT, "(level.currentEntityThink == -1)", (const char *)&queryFormat, "level.currentEntityThink == -1") )
    __debugbreak();
  level.currentEntityThink = 0;
  Profile_EndCSV(19);
  Sys_ProfBeginNamedEvent(0xFFFFA07A, "update ents");
  Profile_Begin(338);
  Profile_BeginCSV(20);
  G_MainSP_UpdateSortedEntities(v4, v5);
  Sys_ProfEndNamedEvent();
  v31 = 0;
  level.currentEntityThink = -1;
  if ( level.num_entities > 0 )
  {
    v32 = 0i64;
    v33 = 0i64;
    do
    {
      if ( (unsigned int)v31 >= 0x800 )
      {
        LODWORD(v62) = 2048;
        LODWORD(v61) = v31;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v61, v62) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v33].r.isInUse != g_entityIsInUse[v32] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v32] && g_entities[v33].s.eType == ET_ACTOR )
        BG_AnimationState_Update(&g_entities[v33].s, &g_entities[v33].actor->charAnimState, g_entities[v33].pAnimTree, NULL, 0);
      ++v31;
      ++v32;
      ++v33;
    }
    while ( v31 < level.num_entities );
  }
  v34 = 0;
  if ( level.num_entities > 0 )
  {
    v35 = 0i64;
    v36 = 0i64;
    do
    {
      if ( (unsigned int)v34 >= 0x800 )
      {
        LODWORD(v62) = 2048;
        LODWORD(v61) = v34;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v61, v62) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v36].r.isInUse != g_entityIsInUse[v35] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v35] )
      {
        v37 = &g_entities[v36];
        if ( g_entities[v36].s.eType == ET_ACTOR || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v37->s.lerp.eFlags, ACTIVE, 8u) )
          AimTargetSP_ProcessEntity(v37);
      }
      ++v34;
      ++v35;
      ++v36;
    }
    while ( v34 < level.num_entities );
  }
  if ( !GBallistics::ms_gBallisticsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.h", 79, ASSERT_TYPE_ASSERT, "( ms_gBallisticsSystem )", (const char *)&queryFormat, "ms_gBallisticsSystem") )
    __debugbreak();
  v38 = GBallistics::ms_gBallisticsSystem;
  if ( !GBallistics::ms_gBallisticsSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 3964, ASSERT_TYPE_ASSERT, "( ballisticsSystem )", (const char *)&queryFormat, "ballisticsSystem") )
    __debugbreak();
  GBallistics::UpdateBallistics(v38, level.time);
  if ( !GTargetAssist::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.h", 61, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
    __debugbreak();
  GTargetAssist::ProcessAllEntities(GTargetAssist::ms_instance);
  Profile_EndCSV(20);
  Profile_EndInternal(NULL);
  Sys_ProfBeginNamedEvent(0xFF00FA9A, "update scriptables");
  Profile_Begin(584);
  ScriptableSv_RunFrame();
  Profile_EndInternal(NULL);
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
    __debugbreak();
  v39 = GAntiLag::ms_gAntiLagData;
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 3982, ASSERT_TYPE_ASSERT, "(antilag)", (const char *)&queryFormat, "antilag") )
    __debugbreak();
  BgAntiLag::PurgeLerpMoverCommands(v39, level.time);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFE0FFFF, "update client");
  Profile_BeginCSV(21);
  G_PlayerUse_CacheGatherDataForFrame();
  v40 = 0;
  if ( level.maxclients > 0 )
  {
    v41 = 0i64;
    v42 = 0i64;
    do
    {
      if ( (unsigned int)v40 >= 0x800 )
      {
        LODWORD(v62) = 2048;
        LODWORD(v61) = v40;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v61, v62) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v42].r.isInUse != g_entityIsInUse[v41] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v41] )
      {
        v43 = &g_entities[v42];
        G_HudElemSP_UpdateClient(g_entities[v42].s.number);
        G_ActiveSP_ClientEndFrame(v43);
        if ( v43->health <= 0 && CL_StreamViewsSP_IsAutoViewSet(EASE_IN_QUAD, v40) )
          CL_StreamViewsSP_CopyAutoView(EASE_IN_QUAD, LINEAR, v40);
        else
          CL_StreamViewsSP_ClearAutoView(LINEAR, v40);
      }
      ++v40;
      ++v41;
      ++v42;
    }
    while ( v40 < level.maxclients );
  }
  Profile_EndCSV(21);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFEEE8AA, "AI common process");
  AIActorInterface::ActorCommonProcess();
  Sys_ProfEndNamedEvent();
  v44 = 0;
  v45 = 0i64;
  v46 = 0i64;
  v47 = 1;
  do
  {
    if ( !v47 )
    {
      LODWORD(v62) = 2048;
      LODWORD(v61) = v44;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v61, v62) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v46].r.isInUse != g_entityIsInUse[v45] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[v45] )
    {
      if ( (unsigned int)v44 >= 0x800 )
      {
        LODWORD(v62) = 2048;
        LODWORD(v61) = v44;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v61, v62) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v46].s.eType == ET_MISSILE && G_Missile_HasEntityNotify(&g_entities[v46]) )
        G_Main_ProcessEntityNotifies(v44);
    }
    ++v44;
    ++v45;
    ++v46;
    v47 = (unsigned int)v44 < 0x800;
  }
  while ( v44 < 2048 );
  DamageParts_Update();
  G_Glass_Update();
  G_ActorVisSP_Update();
  Path_PostStep();
  G_Utils_UpdateEntityEvents();
  G_ProcessRadiantCmds(RADIANT_GAMEMODE_SP);
  Path_DrawDebug();
  G_DebugInfils();
  G_VehiclePath_DrawDebug();
  G_MainSP_DrawEntityBBoxes();
  G_DrawGrenadeHints();
  v48 = DVARBOOL_g_listEntity;
  v49 = 0;
  if ( !DVARBOOL_g_listEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_listEntity") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v48);
  if ( v48->current.enabled )
  {
    Dvar_SetBool_Internal(DVARBOOL_g_listEntity, 0);
    v50 = 1;
    v51 = 0i64;
    v52 = 0i64;
    do
    {
      if ( !v50 )
      {
        LODWORD(v62) = 2048;
        LODWORD(v61) = v49;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v61, v62) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v52].r.isInUse != g_entityIsInUse[v51] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v51] )
      {
        v53 = SL_ConvertToString(g_entities[v52].classname);
        Com_Printf(15, "%4i: %s\n", (unsigned int)v49, v53);
      }
      ++v49;
      ++v51;
      ++v52;
      v50 = (unsigned int)v49 < 0x800;
    }
    while ( v49 < 2048 );
  }
  G_MainSP_ShowEntityInfo();
  G_DebugDrawTagInfoCount();
  Instance = GWeaponMap::GetInstance();
  GWeaponMap::DrawWeaponMap(Instance);
  v55 = GWeaponMap::GetInstance();
  GWeaponMap::ValidateReferences(v55);
  G_MainSP_DebugDumpAnims();
  v56 = DVARINT_g_dobjdump;
  if ( !DVARINT_g_dobjdump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_dobjdump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v56);
  integer = v56->current.integer;
  if ( (int)integer >= 0 )
  {
    Dvar_SetInt_Internal(DVARINT_g_dobjdump, -1);
    if ( (int)integer >= 2048 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 2288, ASSERT_TYPE_SANITY, "( dumpDObj < ( 2048 ) )", (const char *)&queryFormat, "dumpDObj < MAX_GENTITIES") )
      __debugbreak();
    ServerDObjForEnt = Com_GetServerDObjForEnt(&level.gentities[integer]);
    if ( ServerDObjForEnt )
      DObjDumpInfo(ServerDObjForEnt);
  }
  v59 = DVARBOOL_g_aiEventListenerDump;
  if ( !DVARBOOL_g_aiEventListenerDump && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_aiEventListenerDump") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v59);
  if ( v59->current.enabled )
  {
    Actor_DumpEventListners();
    Dvar_SetBool_Internal(DVARBOOL_g_aiEventListenerDump, 0);
  }
  return 1i64;
}

/*
==============
G_MainSP_RunPreFrame
==============
*/
void G_MainSP_RunPreFrame(void)
{
  _DWORD *v0; 
  int v1; 
  __int64 v2; 
  __int64 v3; 
  bool v4; 
  gentity_s *v5; 
  char *fmt; 
  __int64 v7; 
  __int64 v8; 
  char dest[128]; 

  if ( !level.demoSaveGame )
  {
    ++level.framenum;
    level.previousTime = level.time;
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    level.time += level.frameDuration;
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    {
      if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
        __debugbreak();
      v0 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 16i64))(*(_QWORD *)&GStatic::ms_gameStatics);
      if ( !v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 2910, ASSERT_TYPE_ASSERT, "( bgameAnim )", (const char *)&queryFormat, "bgameAnim") )
        __debugbreak();
      v0[4882] = level.time;
      v0[4884] = level.time;
      if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
        __debugbreak();
      v0[4885] = level.frameDuration;
    }
    if ( level.checkSoundsFinish )
    {
      v1 = 0;
      v2 = 0i64;
      level.checkSoundsFinish = 0;
      v3 = 0i64;
      v4 = 1;
      do
      {
        if ( !v4 )
        {
          LODWORD(v8) = 2048;
          LODWORD(v7) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v8) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( g_entities[v3].r.isInUse != g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( g_entityIsInUse[v2] )
        {
          v5 = &g_entities[v3];
          if ( g_entities[v3].snd_wait.notifyString )
          {
            if ( !v5->snd_wait.index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 2777, ASSERT_TYPE_ASSERT, "(ent->snd_wait.index)", (const char *)&queryFormat, "ent->snd_wait.index") )
              __debugbreak();
            LODWORD(fmt) = v5->snd_wait.index;
            Com_sprintf(dest, 0x80ui64, "checksound %d %d", (unsigned int)v5->s.number, fmt);
            SV_Game_BroadcastServerCommand(SV_CMD_RELIABLE, dest);
          }
        }
        ++v1;
        ++v2;
        ++v3;
        v4 = (unsigned int)v1 < 0x800;
      }
      while ( v1 < 2048 );
    }
  }
}

/*
==============
G_MainSP_RunPreFrameForDemo
==============
*/
void G_MainSP_RunPreFrameForDemo(void)
{
  if ( !level.demoSaveGame )
  {
    if ( SV_IsDemoPlaying() )
      SV_DemoSP_ReadDvarPacket(level.framePos);
    ++level.framePos;
  }
}

/*
==============
G_MainSP_SendClientMessages
==============
*/
void G_MainSP_SendClientMessages(void)
{
  unsigned __int8 *actorTeam; 
  int v1; 
  __int64 v2; 
  actor_s *v3; 
  int eTeam_low; 
  int v5; 
  actor_prone_info_t *p_proneInfo; 
  __int64 fWaistPitch_low; 
  bitarray<2048> *p_entFxMarkClearRequests; 
  __int64 v9; 
  __int64 v20; 
  __int64 v21; 

  level.cgameData.snapTime = level.time;
  memset_0(&level.cgameData, 255, 0x800ui64);
  AimTargetSP_UpdateCachedTargets();
  actorTeam = level.cgameData.actorTeam;
  v1 = 0;
  v2 = 0i64;
  do
  {
    v3 = &level.actors[v2];
    if ( level.actors[v2].inuse )
    {
      level.cgameData.specialIndex[v3->ent->s.number] = v1;
      G_MainSP_CopyProneInfoToCGame(v1, &v3->ProneInfo);
      *(actorTeam - 38) = AIActorInterface::ShouldDrawActorOnCompass(v3->ent->s.number);
      eTeam_low = LOBYTE(v3->sentient->eTeam);
      *actorTeam = eTeam_low;
      if ( eTeam_low != v3->sentient->eTeam )
      {
        LODWORD(v21) = v3->sentient->eTeam;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 4168, ASSERT_TYPE_ASSERT, "( ( level.cgameData.actorTeam[i] == actor->sentient->eTeam ) )", "( actor->sentient->eTeam ) = %i", v21) )
          __debugbreak();
      }
    }
    ++v1;
    ++v2;
    ++actorTeam;
  }
  while ( v1 < 38 );
  v5 = 0;
  p_proneInfo = &GameScriptDataSP::GetGameScriptDataSP()->actorCorpseInfo[0].proneInfo;
  do
  {
    fWaistPitch_low = SLODWORD(p_proneInfo[-1].fWaistPitch);
    if ( (int)fWaistPitch_low >= 0 )
    {
      level.cgameData.specialIndex[fWaistPitch_low] = v5 + 38;
      G_MainSP_CopyProneInfoToCGame(v5 + 38, p_proneInfo);
    }
    ++v5;
    p_proneInfo += 2;
  }
  while ( v5 < 28 );
  p_entFxMarkClearRequests = &level.entFxMarkClearRequests;
  v9 = 2i64;
  _RDX = &level.entFxMarkClearRequests;
  _RCX = &level.cgameData.entFxMarkClearRequests;
  do
  {
    _RCX = (bitarray<2048> *)((char *)_RCX + 128);
    __asm { vmovups xmm0, xmmword ptr [rdx] }
    _RDX = (bitarray<2048> *)((char *)_RDX + 128);
    __asm
    {
      vmovups xmmword ptr [rcx-80h], xmm0
      vmovups xmm1, xmmword ptr [rdx-70h]
      vmovups xmmword ptr [rcx-70h], xmm1
      vmovups xmm0, xmmword ptr [rdx-60h]
      vmovups xmmword ptr [rcx-60h], xmm0
      vmovups xmm1, xmmword ptr [rdx-50h]
      vmovups xmmword ptr [rcx-50h], xmm1
      vmovups xmm0, xmmword ptr [rdx-40h]
      vmovups xmmword ptr [rcx-40h], xmm0
      vmovups xmm1, xmmword ptr [rdx-30h]
      vmovups xmmword ptr [rcx-30h], xmm1
      vmovups xmm0, xmmword ptr [rdx-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmm1, xmmword ptr [rdx-10h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v9;
  }
  while ( v9 );
  v20 = 4i64;
  do
  {
    *(_QWORD *)p_entFxMarkClearRequests->array = 0i64;
    *(_QWORD *)&p_entFxMarkClearRequests->array[2] = 0i64;
    *(_QWORD *)&p_entFxMarkClearRequests->array[4] = 0i64;
    p_entFxMarkClearRequests = (bitarray<2048> *)((char *)p_entFxMarkClearRequests + 64);
    *(_QWORD *)&p_entFxMarkClearRequests[-1].array[54] = 0i64;
    *(_QWORD *)&p_entFxMarkClearRequests[-1].array[56] = 0i64;
    *(_QWORD *)&p_entFxMarkClearRequests[-1].array[58] = 0i64;
    *(_QWORD *)&p_entFxMarkClearRequests[-1].array[60] = 0i64;
    *(_QWORD *)&p_entFxMarkClearRequests[-1].array[62] = 0i64;
    --v20;
  }
  while ( v20 );
}

/*
==============
G_MainSP_SetAnimTimeFromLevel
==============
*/
void G_MainSP_SetAnimTimeFromLevel(void)
{
  _DWORD *v0; 

  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
      __debugbreak();
    v0 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 16i64))(*(_QWORD *)&GStatic::ms_gameStatics);
    if ( !v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 2910, ASSERT_TYPE_ASSERT, "( bgameAnim )", (const char *)&queryFormat, "bgameAnim") )
      __debugbreak();
    v0[4882] = level.time;
    v0[4884] = level.time;
    if ( !level.frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_level_locals.h", 349, ASSERT_TYPE_ASSERT, "(level.frameDuration)", "%s\n\tAccessing frame duration before it's been set", "level.frameDuration") )
      __debugbreak();
    v0[4885] = level.frameDuration;
  }
}

/*
==============
G_MainSP_SetNextMap
==============
*/
void G_MainSP_SetNextMap(const char *mapname)
{
  Core_strcpy(g_nextMap, 0x40ui64, mapname);
}

/*
==============
G_MainSP_SetPausedTime
==============
*/
void G_MainSP_SetPausedTime(void)
{
  level.timeAtLastPause = level.time;
}

/*
==============
G_MainSP_ShouldLoadScripts
==============
*/
bool G_MainSP_ShouldLoadScripts()
{
  return !G_Main_ExitAfterToolComplete();
}

/*
==============
G_MainSP_ShowEntityInfo
==============
*/
void G_MainSP_ShowEntityInfo()
{
  const dvar_t *v1; 
  bool enabled; 
  const dvar_t *v3; 
  cg_t *LocalClientGlobals; 
  RefdefView *p_view; 
  unsigned int refdefViewOrg_aab; 
  _DWORD *v; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  const dvar_t *v12; 
  int v21; 
  unsigned __int16 EntityHitId; 
  const dvar_t *v23; 
  gentity_s *v24; 
  const gentity_s *v25; 
  void (__fastcall *entinfo)(gentity_s *, const vec3_t *); 
  unsigned int v27; 
  __int64 v29; 
  __int64 v30; 
  const char *EntityTypeName; 
  const char *v36; 
  char v48; 
  char v49; 
  const dvar_t *v50; 
  void (__fastcall *v51)(gentity_s *, const vec3_t *); 
  __int64 contentmask; 
  __int64 v54; 
  vec3_t start; 
  vec3_t end; 
  trace_t results; 

  v1 = DVARBOOL_entityLeakDisplay;
  if ( !DVARBOOL_entityLeakDisplay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "entityLeakDisplay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  enabled = v1->current.enabled;
  v3 = DVARINT_bg_entinfo;
  if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.integer || enabled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
    p_view = &LocalClientGlobals->refdef.view;
    if ( LocalClientGlobals == (cg_t *)-26928i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1316, ASSERT_TYPE_ASSERT, "(refdefView)", (const char *)&queryFormat, "refdefView") )
      __debugbreak();
    refdefViewOrg_aab = p_view->refdefViewOrg_aab;
    v = (_DWORD *)p_view->org.org.v;
    if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\renderer\\tr_types.h", 1284, ASSERT_TYPE_ASSERT, "(viewOrg)", (const char *)&queryFormat, "viewOrg") )
      __debugbreak();
    LODWORD(start.v[0]) = *v ^ ((refdefViewOrg_aab ^ (unsigned int)v) * ((refdefViewOrg_aab ^ (unsigned int)v) + 2));
    LODWORD(start.v[1]) = v[1] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 4)) + 2));
    LODWORD(start.v[2]) = v[2] ^ ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) * ((refdefViewOrg_aab ^ ((_DWORD)v + 8)) + 2));
    if ( !enabled )
    {
      v8 = DVARINT_bg_entinfo;
      if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      if ( v8->current.integer == 2 )
        goto LABEL_27;
      v9 = DVARINT_bg_entinfo;
      if ( !DVARINT_bg_entinfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_entinfo") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      if ( v9->current.integer == 3 || Dvar_GetInt_Internal_DebugName(DVARINT_bg_entinfo, "bg_entinfo") == 5 || Dvar_GetInt_Internal_DebugName(DVARINT_bg_entinfo, "bg_entinfo") == 7 || Dvar_GetInt_Internal_DebugName(DVARINT_bg_entinfo, "bg_entinfo") == 8 )
      {
LABEL_27:
        _RAX = CG_GetLocalClientGlobals(LOCAL_CLIENT_0);
        __asm { vmovss  xmm3, cs:__real@467a0000 }
        v12 = DVARINT_g_entinfo_type;
        __asm
        {
          vmulss  xmm0, xmm3, dword ptr [rax+6944h]
          vmovss  xmm2, dword ptr [rax+6948h]
          vmovss  xmm4, dword ptr [rax+694Ch]
          vaddss  xmm1, xmm0, dword ptr [rbp+57h+start]
          vmulss  xmm2, xmm3, xmm2
          vaddss  xmm0, xmm2, dword ptr [rbp+57h+start+4]
          vmovss  dword ptr [rbp+57h+end], xmm1
          vmulss  xmm1, xmm3, xmm4
          vaddss  xmm2, xmm1, dword ptr [rbp+57h+start+8]
          vmovss  dword ptr [rbp+57h+end+8], xmm2
          vmovss  dword ptr [rbp+57h+end+4], xmm0
        }
        if ( !DVARINT_g_entinfo_type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_entinfo_type") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v12);
        if ( v12->current.integer == 1 )
        {
          v21 = 33570816;
        }
        else if ( v12->current.integer == 2 )
        {
          v21 = 0x800000;
        }
        else
        {
          v21 = 41967744;
        }
        G_Main_TraceCapsule(&results, &start, &end, &bounds_origin, 0, v21);
        EntityHitId = Trace_GetEntityHitId(&results);
        if ( G_Main_GetEntHandlerList(&g_entities[EntityHitId])->entinfo )
        {
          Dvar_SetInt_Internal(DVARINT_ai_debugEntIndex, EntityHitId);
          lastEntTime_0 = level.time;
        }
        v23 = DVARINT_ai_debugEntIndex;
        if ( !DVARINT_ai_debugEntIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ai_debugEntIndex") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v23);
        if ( v23->current.integer != -1 && lastEntTime_0 + 30000 > level.time )
        {
          v24 = g_entities;
          v25 = &v24[Dvar_GetInt_Internal_DebugName(DVARINT_ai_debugEntIndex, "ai_debugEntIndex")];
          if ( v25->actor && Dvar_GetInt_Internal_DebugName(DVARINT_ai_debugCoverEntityNum, "ai_debugCoverEntityNum") > 0 )
            Dvar_SetInt_Internal(DVARINT_ai_debugCoverEntityNum, v25->s.number);
          entinfo = G_Main_GetEntHandlerList(v25)->entinfo;
          if ( entinfo )
            entinfo((gentity_s *)v25, &start);
        }
        return;
      }
    }
    v27 = 0;
    if ( level.num_entities <= 0 )
      return;
    __asm
    {
      vmovaps [rsp+110h+var_30], xmm6
      vmovss  xmm6, cs:__real@48800000
    }
    v29 = 0i64;
    v30 = 0i64;
    while ( 1 )
    {
      if ( v27 >= 0x800 )
      {
        LODWORD(v54) = 2048;
        LODWORD(contentmask) = v27;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", contentmask, v54) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v30].r.isInUse != g_entityIsInUse[v29] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( !g_entityIsInUse[v29] )
        goto LABEL_76;
      _RBX = &g_entities[v30];
      if ( !enabled && !_RBX->r.isLinked )
        goto LABEL_76;
      if ( _RBX->s.eType >= ET_EVENTS )
        goto LABEL_76;
      if ( enabled )
      {
        if ( GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::TestFlagInternal(&_RBX->flags, ACTIVE, 0x1Eu) )
          goto LABEL_76;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+130h]
          vmovss  xmm1, dword ptr [rbx+134h]
          vmovss  dword ptr [rbp+57h+end], xmm0
          vmovss  xmm0, dword ptr [rbx+138h]
          vmovss  dword ptr [rbp+57h+end+8], xmm0
          vmovss  dword ptr [rbp+57h+end+4], xmm1
        }
        EntityTypeName = G_GetEntityTypeName(_RBX);
        v36 = j_va("%i %s", v27, EntityTypeName);
        G_Utils_DisplayInfoLine(&end, v36, &colorRed);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+57h+start]
          vsubss  xmm3, xmm0, dword ptr [rbx+130h]
          vmovss  xmm1, dword ptr [rbp+57h+start+4]
          vsubss  xmm2, xmm1, dword ptr [rbx+134h]
          vmovss  xmm0, dword ptr [rbp+57h+start+8]
          vsubss  xmm4, xmm0, dword ptr [rbx+138h]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm3, xmm2, xmm1
          vaddss  xmm2, xmm3, xmm0
          vcomiss xmm2, xmm6
        }
        if ( v48 | v49 )
          G_Utils_DisplayEntityInfo(_RBX, &colorRed, enabled, &end);
      }
      v50 = DVARINT_g_entinfo_type;
      if ( !DVARINT_g_entinfo_type && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_entinfo_type") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v50);
      if ( v50->current.integer == 1 )
      {
        if ( _RBX->actor )
          goto LABEL_74;
      }
      else if ( v50->current.integer != 2 || _RBX->vehicle )
      {
LABEL_74:
        v51 = G_Main_GetEntHandlerList(_RBX)->entinfo;
        if ( v51 )
          v51(_RBX, &start);
      }
LABEL_76:
      ++v27;
      ++v29;
      ++v30;
      if ( (int)v27 >= level.num_entities )
      {
        __asm { vmovaps xmm6, [rsp+110h+var_30] }
        return;
      }
    }
  }
}

/*
==============
G_MainSP_ShutdownGame
==============
*/
void G_MainSP_ShutdownGame(int clearScripts, bool clearDvars)
{
  scrContext_t *v4; 
  int ErrorCleanup; 
  bool v6; 
  Ai_Asm *v7; 
  int i; 
  int v9; 
  bool v10; 
  unsigned int SpClientNum; 
  bool v12; 
  GPlayer_Asm *v13; 
  __int64 v14; 
  XAnimTree *v15; 

  SV_Demo_ResetDemo();
  v4 = ScriptContext_Server();
  Com_DPrintf(15, "ShutdownGame:\n");
  Com_DPrintf(15, "------------------------------------------------------------\n");
  Cmd_UnregisterAllNotifications();
  Path_PreShutdown();
  ErrorCleanup = G_LoadErrorCleanup();
  if ( !ErrorCleanup )
    G_MainSP_FreeEntities();
  G_FXEntitiesFreeAll();
  GScr_SoundEntity_FreeAll(v4);
  G_HudElem_DestroyAll();
  PIP_DestroyAll();
  v6 = ErrorCleanup == 0;
  if ( ErrorCleanup )
  {
    Nav_CleanupNavigators();
    v7 = Ai_Asm::Singleton();
    Ai_Asm::FreeAllInstances(v7);
    v6 = ErrorCleanup == 0;
  }
  Path_Shutdown(!v6);
  Com_BootCheck_Reset();
  AIActorInterface::ShutdownActors();
  G_Spawner_Free();
  G_Vehicle_ShutdownSystem();
  G_CoverWall_ShutdownSystem();
  ScriptableSv_Shutdown();
  GScr_Weapon_Shutdown(v4, clearScripts != 0);
  G_Utils_PhysicsClearPostAssetChange();
  G_MotionWarp_Reset();
  if ( Physics_AreServerWorldsCreated() )
  {
    for ( i = 1; i >= 0; --i )
    {
      StaticModels_ShutdownCollision((const Physics_WorldId)i);
      WorldCollision_ShutdownCollision((const Physics_WorldId)i);
    }
  }
  v9 = G_LoadErrorCleanup();
  v10 = Physics_AreServerWorldsCreated();
  if ( v9 )
  {
    if ( v10 )
    {
      G_Utils_DestroyAllEntityPhysics();
      G_PhysicsCharacterProxy_RemoveAllCharacters();
      Physics_DestroyServerWorlds();
    }
    Scr_Abort(v4);
    Com_Printf(15, "G_ShutdownGame: save game failed to load\n");
  }
  else if ( v10 )
  {
    Physics_DestroyServerWorlds();
  }
  G_ShutdownGlass();
  SpClientNum = SvClientSP::GetSpClientNum();
  G_WorldStreaming_ClientDisconnect(SpClientNum);
  AICommonInterface::ClearThreatBiasGroups();
  Scr_SetString(&level.cachedTagMat.name, (scr_string_t)0);
  Scr_SetString(&level.cachedEntTargetTagMat.name, (scr_string_t)0);
  v12 = !clearScripts || !level.savepersist;
  Scr_ShutdownSystem(v4, 1u, v12, 1);
  CL_MainSP_ClearState();
  if ( clearScripts )
  {
    AI_BT_Shutdown();
    Ai_Asm::Shutdown();
    if ( PlayerASM_IsEnabled() )
    {
      v13 = GPlayer_Asm::Singleton();
      BgPlayer_Asm::Shutdown(v13, 1);
    }
    ASM_ReleaseAllHistoryObjects();
    if ( level.loading == LOADING_SAVEGAME )
      XAnimDisableLeakCheck();
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    {
      if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
        __debugbreak();
      v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&GStatic::ms_gameStatics + 224i64))(*(_QWORD *)&GStatic::ms_gameStatics, 0i64);
      v15 = *(XAnimTree **)(v14 + 2040);
      if ( v15 )
      {
        XAnimFreeTree(v15, NULL);
        *(_QWORD *)(v14 + 2040) = 0i64;
      }
    }
    GScrSP_ClearAITypeScriptTable();
    BG_ShutDownTurretAnims(1);
    G_Main_ClearLowHunk();
    AI_ShutdownWeaponAccuracyGraph();
    Com_FreeWeaponInfoMemory(1);
    Mem_HunkDebug_Reset();
  }
  if ( level.openScriptIOFileBuffers[0] )
    Mem_Virtual_Free(level.openScriptIOFileBuffers[0]);
  level.openScriptIOFileBuffers[0] = NULL;
  if ( level.openScriptIOFileHandles[0].handle.handle != -1 )
    FS_FCloseFile(level.openScriptIOFileHandles[0]);
  level.openScriptIOFileHandles[0].handle.handle = -1i64;
  G_ClientFields_Shutdown();
  g_canRegisterSavedDvars = 1;
  if ( !G_LoadErrorCleanup() )
    EntHandle::Shutdown();
  if ( clearDvars )
  {
    G_MainSP_DeregisterDvars();
    Dvar_ResetDvars(0x40u, DVAR_SOURCE_INTERNAL);
  }
  G_Main_ShutdownCommon(clearScripts != 0, clearDvars);
}

/*
==============
G_MainSP_ShutdownGameMemory
==============
*/
void G_MainSP_ShutdownGameMemory(void)
{
  GPredictedEntitySystem *v0; 
  char v1; 
  GScript *v2; 
  GScript *v3; 
  char v4; 
  GSaveMemory *v5; 
  GSaveMemory *v6; 
  char v7; 
  GSave *v8; 
  GSave *v9; 
  char v10; 
  GVehicles *v11; 
  char v12; 
  GWeapon *v13; 
  GWeapon *v14; 
  char v15; 
  GUtils *v16; 
  GUtils *v17; 
  char v18; 
  GMissile *v19; 
  GMissile *v20; 
  char v21; 
  GBallistics *v22; 
  GBallistics *v23; 
  char v24; 
  GItems *v25; 
  GItems *v26; 
  char v27; 
  GCombat *v28; 
  GCombat *v29; 
  char v30; 
  GClientSystem *v31; 
  char v32; 
  GBullet *v33; 
  GBullet *v34; 
  char v35; 
  GConfigStrings *v36; 
  GConfigStrings *v37; 
  GMovingPlatforms *v38; 
  char v39; 
  int v40; 
  void **v41; 
  char v42; 
  GAntiLag *v43; 
  GAntiLag *v44; 
  char v45; 
  GameScriptData *v46; 
  char v47; 
  void (__fastcall ***v48)(_QWORD, _QWORD); 
  __int64 v49; 
  char v50; 
  GTargetAssist *v51; 
  GTargetAssist *v52; 
  char v53; 
  GPredictedEntitySystem *v54; 

  v0 = NULL;
  s_actors = NULL;
  G_Main_FreeEntities();
  G_PlayerUse_Free();
  G_GameInterface_OnShutdownGameMemory();
  Nav_ClearNavPowerMemory();
  v1 = GScript::ms_allocatedType;
  if ( (_BYTE)GScript::ms_allocatedType )
  {
    if ( (_BYTE)GScript::ms_allocatedType == HALF )
      goto LABEL_7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main.h", 217, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v1 = GScript::ms_allocatedType;
  }
  if ( v1 != 1 )
  {
    v3 = GScript::ms_gScriptSystem;
    goto LABEL_13;
  }
LABEL_7:
  v2 = GScript::ms_gScriptSystem;
  if ( !GScript::ms_gScriptSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main.h", 221, ASSERT_TYPE_ASSERT, "(ms_gScriptSystem != 0)", "%s\n\tGScript::FreeMemoryCommon: Trying to free game memory but none have been allocated\n", "ms_gScriptSystem != NULL") )
      __debugbreak();
    v2 = GScript::ms_gScriptSystem;
  }
  ((void (__fastcall *)(GScript *, _QWORD))v2->~GScript)(v2, 0i64);
  DebugWipe(GScript::ms_gScriptSystem, 8ui64);
  v3 = NULL;
  GScript::ms_gScriptSystem = NULL;
LABEL_13:
  LOBYTE(GScript::ms_allocatedType) = 0;
  if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_main.h", 233, ASSERT_TYPE_ASSERT, "( ms_gScriptSystem == 0 )", (const char *)&queryFormat, "ms_gScriptSystem == NULL") )
    __debugbreak();
  v4 = GSaveMemory::ms_allocatedType;
  if ( (_BYTE)GSaveMemory::ms_allocatedType )
  {
    if ( (_BYTE)GSaveMemory::ms_allocatedType == HALF )
      goto LABEL_22;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 250, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v4 = GSaveMemory::ms_allocatedType;
  }
  if ( v4 != 1 )
  {
    v6 = GSaveMemory::ms_gSaveMemory;
    goto LABEL_28;
  }
LABEL_22:
  v5 = GSaveMemory::ms_gSaveMemory;
  if ( !GSaveMemory::ms_gSaveMemory )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 254, ASSERT_TYPE_ASSERT, "(ms_gSaveMemory != 0)", "%s\n\tGSaveMemory::FreeMemoryCommon: Trying to free game memory but none have been allocated\n", "ms_gSaveMemory != NULL") )
      __debugbreak();
    v5 = GSaveMemory::ms_gSaveMemory;
  }
  ((void (__fastcall *)(GSaveMemory *, _QWORD))v5->~GSaveMemory)(v5, 0i64);
  DebugWipe(GSaveMemory::ms_gSaveMemory, 0x17E0B00ui64);
  v6 = NULL;
  GSaveMemory::ms_gSaveMemory = NULL;
LABEL_28:
  LOBYTE(GSaveMemory::ms_allocatedType) = 0;
  if ( v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\savememory.h", 266, ASSERT_TYPE_ASSERT, "( ms_gSaveMemory == 0 )", (const char *)&queryFormat, "ms_gSaveMemory == NULL") )
    __debugbreak();
  v7 = BYTE2(GameScriptData::ms_allocatedType);
  if ( BYTE2(GameScriptData::ms_allocatedType) )
  {
    if ( BYTE2(GameScriptData::ms_allocatedType) == 1 )
      goto LABEL_37;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_save.h", 120, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v7 = BYTE2(GameScriptData::ms_allocatedType);
  }
  if ( v7 != 1 )
  {
    v9 = GSave::ms_gSave;
    goto LABEL_43;
  }
LABEL_37:
  v8 = GSave::ms_gSave;
  if ( !GSave::ms_gSave )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_save.h", (_DWORD)GSave::ms_gSave + 124, ASSERT_TYPE_ASSERT, "(ms_gSave != 0)", "%s\n\tGSave::FreeMemoryCommon: Trying to free game memory but none have been allocated\n", "ms_gSave != NULL") )
      __debugbreak();
    v8 = GSave::ms_gSave;
  }
  ((void (__fastcall *)(GSave *, _QWORD))v8->~GSave)(v8, 0i64);
  DebugWipe(GSave::ms_gSave, 8ui64);
  v9 = NULL;
  GSave::ms_gSave = NULL;
LABEL_43:
  GSave::ms_weaponNameSize = 0;
  BYTE2(GameScriptData::ms_allocatedType) = 0;
  if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_save.h", 140, ASSERT_TYPE_ASSERT, "( ms_gSave == 0 )", (const char *)&queryFormat, "ms_gSave == NULL") )
    __debugbreak();
  v10 = GVehicles::ms_allocatedType;
  if ( (_BYTE)GVehicles::ms_allocatedType )
  {
    if ( (_BYTE)GVehicles::ms_allocatedType == HALF )
      goto LABEL_52;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 610, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v10 = GVehicles::ms_allocatedType;
  }
  if ( v10 != 1 )
  {
    v11 = GVehicles::ms_gVehiclesSystem;
    goto LABEL_57;
  }
LABEL_52:
  if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 614, ASSERT_TYPE_ASSERT, "(ms_gVehiclesSystem != 0)", "%s\n\tGVehicles::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gVehiclesSystem != NULL") )
    __debugbreak();
  GVehicles::PhysicsShutdown(GVehicles::ms_gVehiclesSystem);
  ((void (__fastcall *)(GVehicles *, _QWORD))GVehicles::ms_gVehiclesSystem->~GVehicles)(GVehicles::ms_gVehiclesSystem, 0i64);
  DebugWipe(GVehicles::ms_gVehiclesSystem, 0x109638ui64);
  v11 = NULL;
  GVehicles::ms_gVehiclesSystem = NULL;
LABEL_57:
  LOBYTE(GVehicles::ms_allocatedType) = 0;
  if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 627, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem == 0 )", (const char *)&queryFormat, "ms_gVehiclesSystem == NULL") )
    __debugbreak();
  GWeaponMap::FreeMemory();
  v12 = GWeapon::ms_allocatedType;
  if ( (_BYTE)GWeapon::ms_allocatedType )
  {
    if ( (_BYTE)GWeapon::ms_allocatedType == HALF )
      goto LABEL_66;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 108, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v12 = GWeapon::ms_allocatedType;
  }
  if ( v12 != 1 )
  {
    v14 = GWeapon::ms_gWeaponSystem;
    goto LABEL_72;
  }
LABEL_66:
  v13 = GWeapon::ms_gWeaponSystem;
  if ( !GWeapon::ms_gWeaponSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", (_DWORD)GWeapon::ms_gWeaponSystem + 112, ASSERT_TYPE_ASSERT, "(ms_gWeaponSystem != 0)", "%s\n\tGWeapon::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gWeaponSystem != NULL") )
      __debugbreak();
    v13 = GWeapon::ms_gWeaponSystem;
  }
  ((void (__fastcall *)(GWeapon *, _QWORD))v13->~GWeapon)(v13, 0i64);
  DebugWipe(GWeapon::ms_gWeaponSystem, 8ui64);
  v14 = NULL;
  GWeapon::ms_gWeaponSystem = NULL;
LABEL_72:
  LOBYTE(GWeapon::ms_allocatedType) = 0;
  if ( v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon.h", 124, ASSERT_TYPE_ASSERT, "( ms_gWeaponSystem == 0 )", (const char *)&queryFormat, "ms_gWeaponSystem == NULL") )
    __debugbreak();
  v15 = GUtils::ms_allocatedType;
  if ( (_BYTE)GUtils::ms_allocatedType )
  {
    if ( (_BYTE)GUtils::ms_allocatedType == HALF )
      goto LABEL_81;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 146, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v15 = GUtils::ms_allocatedType;
  }
  if ( v15 != 1 )
  {
    v17 = GUtils::ms_gUtils;
    goto LABEL_87;
  }
LABEL_81:
  v16 = GUtils::ms_gUtils;
  if ( !GUtils::ms_gUtils )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 150, ASSERT_TYPE_ASSERT, "(ms_gUtils != 0)", "%s\n\tGUtils::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gUtils != NULL") )
      __debugbreak();
    v16 = GUtils::ms_gUtils;
  }
  ((void (__fastcall *)(GUtils *, _QWORD))v16->~GUtils)(v16, 0i64);
  DebugWipe(GUtils::ms_gUtils, 0x10ui64);
  v17 = NULL;
  GUtils::ms_gUtils = NULL;
LABEL_87:
  LOBYTE(GUtils::ms_allocatedType) = 0;
  if ( v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 162, ASSERT_TYPE_ASSERT, "( ms_gUtils == 0 )", (const char *)&queryFormat, "ms_gUtils == NULL") )
    __debugbreak();
  v18 = GMissile::ms_allocatedType;
  if ( (_BYTE)GMissile::ms_allocatedType )
  {
    if ( (_BYTE)GMissile::ms_allocatedType == HALF )
      goto LABEL_96;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 293, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v18 = GMissile::ms_allocatedType;
  }
  if ( v18 != 1 )
  {
    v20 = GMissile::ms_gMissileSystem;
    goto LABEL_102;
  }
LABEL_96:
  v19 = GMissile::ms_gMissileSystem;
  if ( !GMissile::ms_gMissileSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 297, ASSERT_TYPE_ASSERT, "(ms_gMissileSystem != 0)", "%s\n\tGMissile::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gMissileSystem != NULL") )
      __debugbreak();
    v19 = GMissile::ms_gMissileSystem;
  }
  ((void (__fastcall *)(GMissile *, _QWORD))v19->~BgMissile)(v19, 0i64);
  DebugWipe(GMissile::ms_gMissileSystem, 0x18ui64);
  v20 = NULL;
  GMissile::ms_gMissileSystem = NULL;
LABEL_102:
  LOBYTE(GMissile::ms_allocatedType) = 0;
  if ( v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_missile.h", 309, ASSERT_TYPE_ASSERT, "( ms_gMissileSystem == 0 )", (const char *)&queryFormat, "ms_gMissileSystem == NULL") )
    __debugbreak();
  v21 = GBallistics::ms_allocatedType;
  if ( (_BYTE)GBallistics::ms_allocatedType )
  {
    if ( (_BYTE)GBallistics::ms_allocatedType == HALF )
      goto LABEL_111;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.h", 118, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v21 = GBallistics::ms_allocatedType;
  }
  if ( v21 != 1 )
  {
    v23 = GBallistics::ms_gBallisticsSystem;
    goto LABEL_117;
  }
LABEL_111:
  v22 = GBallistics::ms_gBallisticsSystem;
  if ( !GBallistics::ms_gBallisticsSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.h", (_DWORD)GBallistics::ms_gBallisticsSystem + 122, ASSERT_TYPE_ASSERT, "(ms_gBallisticsSystem != 0)", "%s\n\tGBallistics::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gBallisticsSystem != NULL") )
      __debugbreak();
    v22 = GBallistics::ms_gBallisticsSystem;
  }
  ((void (__fastcall *)(GBallistics *, _QWORD))v22->~BgBallistics<GBallisticInstance>)(v22, 0i64);
  DebugWipe(GBallistics::ms_gBallisticsSystem, 0x29060ui64);
  v23 = NULL;
  GBallistics::ms_gBallisticsSystem = NULL;
LABEL_117:
  LOBYTE(GBallistics::ms_allocatedType) = 0;
  if ( v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_ballistics.h", 134, ASSERT_TYPE_ASSERT, "( ms_gBallisticsSystem == 0 )", (const char *)&queryFormat, "ms_gBallisticsSystem == NULL") )
    __debugbreak();
  v24 = GItems::ms_allocatedType;
  if ( (_BYTE)GItems::ms_allocatedType )
  {
    if ( (_BYTE)GItems::ms_allocatedType == HALF )
      goto LABEL_126;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 116, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v24 = GItems::ms_allocatedType;
  }
  if ( v24 != 1 )
  {
    v26 = GItems::ms_gItemsSystem;
    goto LABEL_132;
  }
LABEL_126:
  v25 = GItems::ms_gItemsSystem;
  if ( !GItems::ms_gItemsSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", (_DWORD)GItems::ms_gItemsSystem + 120, ASSERT_TYPE_ASSERT, "(ms_gItemsSystem != 0)", "%s\n\tGItems::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gItemsSystem != NULL") )
      __debugbreak();
    v25 = GItems::ms_gItemsSystem;
  }
  ((void (__fastcall *)(GItems *, _QWORD))v25->~GItems)(v25, 0i64);
  DebugWipe(GItems::ms_gItemsSystem, 0x10ui64);
  v26 = NULL;
  GItems::ms_gItemsSystem = NULL;
LABEL_132:
  LOBYTE(GItems::ms_allocatedType) = 0;
  if ( v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_items.h", 132, ASSERT_TYPE_ASSERT, "( ms_gItemsSystem == 0 )", (const char *)&queryFormat, "ms_gItemsSystem == NULL") )
    __debugbreak();
  v27 = GCombat::ms_allocatedType;
  if ( (_BYTE)GCombat::ms_allocatedType )
  {
    if ( (_BYTE)GCombat::ms_allocatedType == HALF )
      goto LABEL_141;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 211, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v27 = GCombat::ms_allocatedType;
  }
  if ( v27 != 1 )
  {
    v29 = GCombat::ms_gCombatSystem;
    goto LABEL_147;
  }
LABEL_141:
  v28 = GCombat::ms_gCombatSystem;
  if ( !GCombat::ms_gCombatSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 215, ASSERT_TYPE_ASSERT, "(ms_gCombatSystem != 0)", "%s\n\tGCombat::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gCombatSystem != NULL") )
      __debugbreak();
    v28 = GCombat::ms_gCombatSystem;
  }
  ((void (__fastcall *)(GCombat *, _QWORD))v28->~GCombat)(v28, 0i64);
  DebugWipe(GCombat::ms_gCombatSystem, 0x107F8ui64);
  v29 = NULL;
  GCombat::ms_gCombatSystem = NULL;
LABEL_147:
  LOBYTE(GCombat::ms_allocatedType) = 0;
  if ( v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_combat.h", 227, ASSERT_TYPE_ASSERT, "( ms_gCombatSystem == 0 )", (const char *)&queryFormat, "ms_gCombatSystem == NULL") )
    __debugbreak();
  v30 = GClientSystem::ms_allocatedType;
  if ( (_BYTE)GClientSystem::ms_allocatedType )
  {
    if ( (_BYTE)GClientSystem::ms_allocatedType == HALF )
      goto LABEL_156;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 499, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v30 = GClientSystem::ms_allocatedType;
  }
  if ( v30 != 1 )
  {
    v31 = GClientSystem::ms_gClientSystem;
    goto LABEL_167;
  }
LABEL_156:
  if ( !GClientSystem::ms_gClientSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 503, ASSERT_TYPE_ASSERT, "(ms_gClientSystem != nullptr)", "%s\n\tGClientSystem::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gClientSystem != nullptr") )
    __debugbreak();
  if ( !GClientSystem::ms_gClientSystem->m_clientsData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 504, ASSERT_TYPE_ASSERT, "( ms_gClientSystem->m_clientsData != nullptr )", (const char *)&queryFormat, "ms_gClientSystem->m_clientsData != nullptr") )
    __debugbreak();
  if ( !GClientSystem::ms_gClientSystem->m_clientsDataCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 505, ASSERT_TYPE_ASSERT, "( ms_gClientSystem->m_clientsDataCount )", (const char *)&queryFormat, "ms_gClientSystem->m_clientsDataCount") )
    __debugbreak();
  ((void (__fastcall *)(GClientSystem *, _QWORD))GClientSystem::ms_gClientSystem->~GClientSystem)(GClientSystem::ms_gClientSystem, 0i64);
  DebugWipe(GClientSystem::ms_gClientSystem->m_clientsData, 64592i64 * GClientSystem::ms_gClientSystem->m_clientsDataCount);
  DebugWipe(GClientSystem::ms_gClientSystem, 0x18ui64);
  v31 = NULL;
  GClientSystem::ms_gClientSystem = NULL;
LABEL_167:
  LOBYTE(GClientSystem::ms_allocatedType) = 0;
  if ( v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 518, ASSERT_TYPE_ASSERT, "( ms_gClientSystem == 0 )", (const char *)&queryFormat, "ms_gClientSystem == NULL") )
    __debugbreak();
  v32 = GBullet::ms_allocatedType;
  if ( (_BYTE)GBullet::ms_allocatedType )
  {
    if ( (_BYTE)GBullet::ms_allocatedType == HALF )
      goto LABEL_176;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 222, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v32 = GBullet::ms_allocatedType;
  }
  if ( v32 != 1 )
  {
    v34 = GBullet::ms_gBulletSystem;
    goto LABEL_182;
  }
LABEL_176:
  v33 = GBullet::ms_gBulletSystem;
  if ( !GBullet::ms_gBulletSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 226, ASSERT_TYPE_ASSERT, "(ms_gBulletSystem != 0)", "%s\n\tGBullet::FreeMemoryCommon: Trying to free game memory but none have been allocated\n", "ms_gBulletSystem != NULL") )
      __debugbreak();
    v33 = GBullet::ms_gBulletSystem;
  }
  ((void (__fastcall *)(GBullet *, _QWORD))v33->~GBullet)(v33, 0i64);
  DebugWipe(GBullet::ms_gBulletSystem, 0x13C8ui64);
  v34 = NULL;
  GBullet::ms_gBulletSystem = NULL;
LABEL_182:
  LOBYTE(GBullet::ms_allocatedType) = 0;
  if ( v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_bullet.h", 238, ASSERT_TYPE_ASSERT, "( ms_gBulletSystem == 0 )", (const char *)&queryFormat, "ms_gBulletSystem == NULL") )
    __debugbreak();
  v35 = GConfigStrings::ms_allocatedType;
  if ( (_BYTE)GConfigStrings::ms_allocatedType )
  {
    if ( (_BYTE)GConfigStrings::ms_allocatedType == HALF )
      goto LABEL_191;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 104, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v35 = GConfigStrings::ms_allocatedType;
  }
  if ( v35 != 1 )
  {
    v37 = GConfigStrings::ms_gConfigStrings;
    goto LABEL_197;
  }
LABEL_191:
  v36 = GConfigStrings::ms_gConfigStrings;
  if ( !GConfigStrings::ms_gConfigStrings )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", (_DWORD)GConfigStrings::ms_gConfigStrings + 108, ASSERT_TYPE_ASSERT, "(ms_gConfigStrings != 0)", "%s\n\tFreeConfigStringsMemoryCommon: Trying to free game memory but none have been allocated\n", "ms_gConfigStrings != NULL") )
      __debugbreak();
    v36 = GConfigStrings::ms_gConfigStrings;
  }
  ((void (__fastcall *)(GConfigStrings *, _QWORD))v36->~GConfigStrings)(v36, 0i64);
  DebugWipe(GConfigStrings::ms_gConfigStrings, 8ui64);
  v37 = NULL;
  GConfigStrings::ms_gConfigStrings = NULL;
LABEL_197:
  LOBYTE(GConfigStrings::ms_allocatedType) = 0;
  if ( v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_configstrings.h", 120, ASSERT_TYPE_ASSERT, "( ms_gConfigStrings == 0 )", (const char *)&queryFormat, "ms_gConfigStrings == NULL") )
    __debugbreak();
  v38 = GMovingPlatforms::ms_instance;
  if ( GMovingPlatforms::ms_instance )
  {
    if ( (_BYTE)GMovingPlatforms::ms_allocatedType != HALF )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\movingplatforms\\g_moving_platforms.h", 241, ASSERT_TYPE_ASSERT, "( !ms_instance || ms_instance->ms_allocatedType == SubGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "!ms_instance || ms_instance->ms_allocatedType == SubGameType::ALLOCATION_TYPE") )
        __debugbreak();
      v38 = GMovingPlatforms::ms_instance;
    }
    if ( v38 )
    {
      ((void (__fastcall *)(GMovingPlatforms *, _QWORD))v38->~BGMovingPlatforms)(v38, 0i64);
      DebugWipe(GMovingPlatforms::ms_instance, 0x5550ui64);
      GMovingPlatforms::ms_instance = NULL;
    }
  }
  v39 = GTurret::ms_allocatedType;
  if ( !(_BYTE)GTurret::ms_allocatedType )
  {
LABEL_212:
    if ( v39 != 1 )
      goto LABEL_218;
    goto LABEL_213;
  }
  if ( (_BYTE)GTurret::ms_allocatedType != HALF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 268, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v39 = GTurret::ms_allocatedType;
    goto LABEL_212;
  }
LABEL_213:
  if ( !GTurret::ms_turretArray[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 272, ASSERT_TYPE_ASSERT, "(ms_turretArray[0] != 0)", "%s\n\tGTurret::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_turretArray[0] != NULL") )
    __debugbreak();
  v40 = 127;
  v41 = (void **)&GTurret::ms_turretArray[127];
  do
  {
    (**(void (__fastcall ***)(void *, _QWORD))*v41)(*v41, 0i64);
    DebugWipe(*v41, 0x140ui64);
    --v40;
    *v41-- = NULL;
  }
  while ( v40 >= 0 );
LABEL_218:
  LOBYTE(GTurret::ms_allocatedType) = 0;
  if ( GTurret::ms_turretArray[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_turret.h", 288, ASSERT_TYPE_ASSERT, "( ms_turretArray[0] == 0 )", (const char *)&queryFormat, "ms_turretArray[0] == NULL") )
    __debugbreak();
  v42 = BYTE1(GameScriptData::ms_allocatedType);
  if ( BYTE1(GameScriptData::ms_allocatedType) )
  {
    if ( BYTE1(GameScriptData::ms_allocatedType) == 1 )
      goto LABEL_227;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 242, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v42 = BYTE1(GameScriptData::ms_allocatedType);
  }
  if ( v42 != 1 )
  {
    v44 = GAntiLag::ms_gAntiLagData;
    goto LABEL_233;
  }
LABEL_227:
  v43 = GAntiLag::ms_gAntiLagData;
  if ( !GAntiLag::ms_gAntiLagData )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 246, ASSERT_TYPE_ASSERT, "(ms_gAntiLagData != 0)", "%s\n\tFreeAntiLagMemoryCommon: Trying to free game memory but none have been allocated\n", "ms_gAntiLagData != NULL") )
      __debugbreak();
    v43 = GAntiLag::ms_gAntiLagData;
  }
  ((void (__fastcall *)(GAntiLag *, _QWORD))v43->~BgAntiLag)(v43, 0i64);
  DebugWipe(GAntiLag::ms_gAntiLagData, 0x195400ui64);
  v44 = NULL;
  GAntiLag::ms_gAntiLagData = NULL;
LABEL_233:
  BYTE1(GameScriptData::ms_allocatedType) = 0;
  if ( v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 258, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData == 0 )", (const char *)&queryFormat, "ms_gAntiLagData == NULL") )
    __debugbreak();
  v45 = GameScriptData::ms_allocatedType;
  if ( (_BYTE)GameScriptData::ms_allocatedType )
  {
    if ( (_BYTE)GameScriptData::ms_allocatedType == HALF )
      goto LABEL_242;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 118, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v45 = GameScriptData::ms_allocatedType;
  }
  if ( v45 != 1 )
  {
    v46 = GameScriptData::ms_gScriptData;
    goto LABEL_247;
  }
LABEL_242:
  if ( !GameScriptData::ms_gScriptData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 122, ASSERT_TYPE_ASSERT, "(ms_gScriptData != 0)", "%s\n\tFreeGameScriptDataMemoryCommon: Trying to free game memory but none have been allocated\n", "ms_gScriptData != NULL") )
    __debugbreak();
  DebugWipe(GameScriptData::ms_gScriptData, 0x3980ui64);
  v46 = NULL;
  GameScriptData::ms_gScriptData = NULL;
LABEL_247:
  LOBYTE(GameScriptData::ms_allocatedType) = 0;
  if ( v46 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_scr_data.h", 134, ASSERT_TYPE_ASSERT, "( ms_gScriptData == 0 )", (const char *)&queryFormat, "ms_gScriptData == NULL") )
    __debugbreak();
  v47 = GStatic::ms_allocatedType;
  if ( (_BYTE)GStatic::ms_allocatedType )
  {
    if ( (_BYTE)GStatic::ms_allocatedType == HALF )
      goto LABEL_256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 78, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v47 = GStatic::ms_allocatedType;
  }
  if ( v47 != 1 )
  {
    v49 = *(_QWORD *)&GStatic::ms_gameStatics;
    goto LABEL_262;
  }
LABEL_256:
  v48 = *(void (__fastcall ****)(_QWORD, _QWORD))&GStatic::ms_gameStatics;
  if ( !*(_QWORD *)&GStatic::ms_gameStatics )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", GStatic::ms_gameStatics + 82, ASSERT_TYPE_ASSERT, "(ms_gameStatics != 0)", "%s\n\tGStatic::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gameStatics != NULL") )
      __debugbreak();
    v48 = *(void (__fastcall ****)(_QWORD, _QWORD))&GStatic::ms_gameStatics;
  }
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 272i64) = 0i64;
  (**v48)(v48, 0i64);
  DebugWipe(*(void **)&GStatic::ms_gameStatics, 0x8708ui64);
  v49 = 0i64;
  *(_QWORD *)&GStatic::ms_gameStatics = 0i64;
LABEL_262:
  LOBYTE(GStatic::ms_allocatedType) = 0;
  if ( v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 97, ASSERT_TYPE_ASSERT, "( ms_gameStatics == 0 )", (const char *)&queryFormat, "ms_gameStatics == NULL") )
    __debugbreak();
  v50 = GTargetAssist::ms_allocatedType;
  if ( (_BYTE)GTargetAssist::ms_allocatedType )
  {
    if ( (_BYTE)GTargetAssist::ms_allocatedType == HALF )
      goto LABEL_271;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.h", 95, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v50 = GTargetAssist::ms_allocatedType;
  }
  if ( v50 != 1 )
  {
    v52 = GTargetAssist::ms_instance;
    goto LABEL_277;
  }
LABEL_271:
  v51 = GTargetAssist::ms_instance;
  if ( !GTargetAssist::ms_instance )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.h", (_DWORD)GTargetAssist::ms_instance + 99, ASSERT_TYPE_ASSERT, "(ms_instance != 0)", "%s\n\tGTargetAssist::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_instance != NULL") )
      __debugbreak();
    v51 = GTargetAssist::ms_instance;
  }
  ((void (__fastcall *)(GTargetAssist *, _QWORD))v51->~BgTargetAssist)(v51, 0i64);
  DebugWipe(GTargetAssist::ms_instance, 0x330ui64);
  v52 = NULL;
  GTargetAssist::ms_instance = NULL;
LABEL_277:
  LOBYTE(GTargetAssist::ms_allocatedType) = 0;
  if ( v52 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_targetassist.h", 111, ASSERT_TYPE_ASSERT, "( ms_instance == 0 )", (const char *)&queryFormat, "ms_instance == NULL") )
    __debugbreak();
  v53 = GPredictedEntitySystem::ms_allocatedType;
  if ( (_BYTE)GPredictedEntitySystem::ms_allocatedType )
  {
    if ( (_BYTE)GPredictedEntitySystem::ms_allocatedType == HALF )
      goto LABEL_286;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_predictedentity.h", 73, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == DerivedGameType::ALLOCATION_TYPE") )
      __debugbreak();
    v53 = GPredictedEntitySystem::ms_allocatedType;
  }
  if ( v53 != 1 )
  {
    v0 = GPredictedEntitySystem::ms_gSystem;
    goto LABEL_292;
  }
LABEL_286:
  v54 = GPredictedEntitySystem::ms_gSystem;
  if ( !GPredictedEntitySystem::ms_gSystem )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_predictedentity.h", (_DWORD)GPredictedEntitySystem::ms_gSystem + 77, ASSERT_TYPE_ASSERT, "(ms_gSystem != 0)", "%s\n\tGPredictedEntitySystem::FreeMemory: Trying to free game memory but none have been allocated\n", "ms_gSystem != NULL") )
      __debugbreak();
    v54 = GPredictedEntitySystem::ms_gSystem;
  }
  ((void (__fastcall *)(GPredictedEntitySystem *, _QWORD))v54->~BgPredictedEntitySystem)(v54, 0i64);
  DebugWipe(GPredictedEntitySystem::ms_gSystem, 0x10ui64);
  GPredictedEntitySystem::ms_gSystem = NULL;
LABEL_292:
  LOBYTE(GPredictedEntitySystem::ms_allocatedType) = 0;
  if ( v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_predictedentity.h", 89, ASSERT_TYPE_ASSERT, "( ms_gSystem == 0 )", (const char *)&queryFormat, "ms_gSystem == NULL") )
    __debugbreak();
  Ai_Asm::FreeMemory();
  GPlayer_Asm::FreeMemory();
}

/*
==============
G_MainSP_UpdateLevelStartPlayerStreaming
==============
*/
void G_MainSP_UpdateLevelStartPlayerStreaming(void)
{
  int SpClientNum; 
  __int64 v1; 
  const playerState_s *EntityPlayerState; 
  gclient_s *clients; 
  int viewmodelIndex; 
  const XModel *handModel; 
  float fmt; 
  float cosFovLimit; 
  vec3_t angles; 
  vec3_t origin; 

  SpClientNum = SvClientSP::GetSpClientNum();
  v1 = SpClientNum;
  if ( (unsigned int)SpClientNum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", SpClientNum, 2048) )
    __debugbreak();
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  _RDI = v1;
  if ( g_entities[v1].r.isInUse != g_entityIsInUse[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 2433, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( clientNum ))", (const char *)&queryFormat, "G_IsEntityInUse( clientNum )") )
    __debugbreak();
  EntityPlayerState = G_GetEntityPlayerState(&g_entities[_RDI]);
  _RBX = EntityPlayerState;
  if ( !EntityPlayerState )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 2436, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    goto LABEL_16;
  }
  if ( !BGVehicles::IsRemoteDrivingVehicle(EntityPlayerState) )
  {
LABEL_16:
    _RAX = g_entities;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+rax+130h]
      vmovss  dword ptr [rsp+78h+origin], xmm0
      vmovss  xmm1, dword ptr [rdi+rax+134h]
      vmovss  dword ptr [rsp+78h+origin+4], xmm1
      vmovss  xmm0, dword ptr [rdi+rax+138h]
      vmovss  dword ptr [rsp+78h+origin+8], xmm0
      vmovss  xmm1, dword ptr [rdi+rax+13Ch]
      vmovss  dword ptr [rsp+78h+angles], xmm1
      vmovss  xmm0, dword ptr [rdi+rax+140h]
      vmovss  dword ptr [rsp+78h+angles+4], xmm0
      vmovss  xmm1, dword ptr [rdi+rax+144h]
    }
    goto LABEL_17;
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+12Ch]
    vmovss  dword ptr [rsp+78h+origin], xmm0
    vmovss  xmm1, dword ptr [rbx+130h]
    vmovss  dword ptr [rsp+78h+origin+4], xmm1
    vmovss  xmm0, dword ptr [rbx+134h]
    vmovss  dword ptr [rsp+78h+origin+8], xmm0
    vmovss  xmm1, dword ptr [rbx+138h]
    vmovss  dword ptr [rsp+78h+angles], xmm1
    vmovss  xmm0, dword ptr [rbx+13Ch]
    vmovss  dword ptr [rsp+78h+angles+4], xmm0
    vmovss  xmm1, dword ptr [rbx+140h]
  }
LABEL_17:
  clients = level.clients;
  __asm { vmovss  dword ptr [rsp+78h+angles+8], xmm1 }
  viewmodelIndex = level.clients[v1].ps.viewmodelIndex;
  if ( viewmodelIndex )
  {
    handModel = G_Utils_GetModel(viewmodelIndex);
    clients = level.clients;
  }
  else
  {
    handModel = NULL;
  }
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+78h+cosFovLimit], xmm0
    vmovss  dword ptr [rsp+78h+fmt], xmm1
  }
  CL_StreamViewsSP_SetAutoView(LINEAR, v1, &origin, &angles, fmt, cosFovLimit, &clients[v1].streamWeapon, handModel);
}

/*
==============
G_MainSP_UpdateSortedEntities
==============
*/
__int64 G_MainSP_UpdateSortedEntities(ServerFrameExtent extent, unsigned int timeCap)
{
  __int64 v2; 
  int v3; 
  gentity_s *v4; 
  int v5; 
  int v6; 
  int v7; 
  __int64 currentEntityThink; 
  const char *v9; 
  EntityTagInfo *tagInfo; 
  int v11; 
  const char *v12; 
  int updated; 
  const char *v14; 
  actor_s *v15; 
  __int64 v16; 
  __int64 v17; 
  actor_s *v18; 
  const char *v19; 
  int v20; 
  const char *v21; 
  const char *v23; 
  int v24; 
  const char *v25; 
  int v26; 
  const char *v27; 
  int v28; 
  const char *v29; 
  int v30; 
  const char *v31; 
  int v32; 
  const char *v33; 
  int v34; 
  const char *v35; 
  int v36; 
  const char *v37; 
  int v38; 
  __int64 v39; 
  __int64 v40; 
  __int64 v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int *v53; 
  int *v54; 
  int *v55; 
  int *v56; 
  int *v57; 
  int *v58; 
  int *v59; 
  int *v60; 
  int *v61; 
  int *v62; 
  int *v63; 
  int *v64; 
  __int64 v65; 
  AIActorInterface v66; 
  AIActorInterface *v67; 
  int v68[28]; 
  int v69[40]; 
  int thinkList[128]; 
  int v71[512]; 
  int v72[1884]; 
  int v73[1884]; 
  int v74[1884]; 
  int v75[1884]; 
  int v76[1884]; 
  int v77[1884]; 
  int v78[1884]; 
  int v79[1884]; 

  v2 = 38i64;
  v3 = 0;
  v4 = &g_entities[level.currentEntityThink];
  v5 = 0;
  v42 = 0;
  v44 = 0;
  v43 = 0;
  v48 = 0;
  v46 = 0;
  v47 = 0;
  v49 = 0;
  v45 = 0;
  v50 = 0;
  v65 = 38i64;
  if ( level.currentEntityThink < level.num_entities )
  {
    v6 = 0;
    v53 = v71;
    v54 = v75;
    v63 = v74;
    v64 = v79;
    v61 = v77;
    v62 = v78;
    v59 = v68;
    v60 = v76;
    v57 = v72;
    v58 = v69;
    v55 = thinkList;
    v56 = v73;
    v7 = 0;
    do
    {
      currentEntityThink = level.currentEntityThink;
      if ( level.currentEntityThink >= 0x800u )
      {
        LODWORD(v40) = 2048;
        LODWORD(v39) = level.currentEntityThink;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v39, v40) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[currentEntityThink].r.isInUse != g_entityIsInUse[currentEntityThink] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[currentEntityThink] )
      {
        if ( v4->s.number != level.currentEntityThink )
        {
          v9 = SL_ConvertToString(v4->classname);
          LODWORD(v41) = level.currentEntityThink;
          LODWORD(v40) = v4->s.number;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 3225, ASSERT_TYPE_ASSERT, "(ent->s.number == level.currentEntityThink)", "%s\n\ts.number = %i, level.currentEntityThink = %i, classname = %s", "ent->s.number == level.currentEntityThink", v40, v41, v9) )
            __debugbreak();
        }
        ++level.currentEntityThink;
        switch ( v4->s.eType )
        {
          case ET_PLAYER_CORPSE:
          case ET_AGENT_CORPSE:
          case ET_ACTOR_CORPSE:
            if ( v48 >= 28 )
            {
              LODWORD(v40) = 28;
              LODWORD(v39) = v48;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 3261, ASSERT_TYPE_ASSERT, "( corpseCount ) < ( MAX_CORPSES )", "corpseCount < MAX_CORPSES\n\t%i, %i", v39, v40) )
                __debugbreak();
            }
            ++v48;
            *v59++ = v4->s.number;
            break;
          case ET_ITEM:
            if ( v47 >= 1881 )
            {
              LODWORD(v40) = 1881;
              LODWORD(v39) = v47;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 3282, ASSERT_TYPE_ASSERT, "( itemCount ) < ( MAX_ITEMS )", "itemCount < MAX_ITEMS\n\t%i, %i", v39, v40) )
                __debugbreak();
            }
            ++v47;
            *v61++ = v4->s.number;
            break;
          case ET_MISSILE:
            if ( v3 < 1881 )
              goto LABEL_76;
            v11 = 3266;
            goto LABEL_74;
          case ET_SCRIPTMOVER:
            if ( v42 >= 1881 )
            {
              LODWORD(v40) = 1881;
              LODWORD(v39) = v42;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 3236, ASSERT_TYPE_ASSERT, "( moverCount ) < ( MAX_MOVERS )", "moverCount < MAX_MOVERS\n\t%i, %i", v39, v40) )
                __debugbreak();
            }
            tagInfo = v4->tagInfo;
            if ( !tagInfo )
              goto LABEL_31;
            if ( !tagInfo->parent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 3242, ASSERT_TYPE_ASSERT, "(ent->tagInfo->parent)", (const char *)&queryFormat, "ent->tagInfo->parent") )
              __debugbreak();
            if ( v4->tagInfo->parent->sentient )
            {
              ++v44;
              *v56++ = v4->s.number;
            }
            else
            {
LABEL_31:
              ++v42;
              *v57++ = v4->s.number;
            }
            break;
          case ET_PRIMARY_LIGHT:
            if ( v45 >= 1881 )
            {
              LODWORD(v40) = 1881;
              LODWORD(v39) = v45;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 3292, ASSERT_TYPE_ASSERT, "( pLightCount ) < ( MAX_PLIGHTS )", "pLightCount < MAX_PLIGHTS\n\t%i, %i", v39, v40) )
                __debugbreak();
            }
            ++v45;
            *v63++ = v4->s.number;
            break;
          case ET_TURRET:
            if ( v46 >= 1881 )
            {
              LODWORD(v40) = 1881;
              LODWORD(v39) = v46;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 3271, ASSERT_TYPE_ASSERT, "( turretCount ) < ( MAX_TURRETS )", "turretCount < MAX_TURRETS\n\t%i, %i", v39, v40) )
                __debugbreak();
            }
            ++v46;
            *v60++ = v4->s.number;
            break;
          case ET_VEHICLE:
            if ( v7 >= 128 )
            {
              LODWORD(v40) = 128;
              LODWORD(v39) = v7;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 3231, ASSERT_TYPE_ASSERT, "( vehicleCount ) < ( (1 << 7) )", "vehicleCount < MAX_VEHICLES\n\t%i, %i", v39, v40) )
                __debugbreak();
            }
            ++v7;
            *v55++ = v4->s.number;
            break;
          case ET_VEHICLE_SPAWNER:
          case ET_ACTOR_SPAWNER:
            if ( v5 < 512 )
              goto LABEL_71;
            LODWORD(v40) = 512;
            LODWORD(v39) = v5;
            if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 3277, ASSERT_TYPE_ASSERT, "( spawnerCount ) < ( ( 512 ) )", "spawnerCount < MAX_SPAWNERS\n\t%i, %i", v39, v40) )
              goto LABEL_71;
            __debugbreak();
            ++v5;
            *v53++ = v4->s.number;
            break;
          case ET_ACTOR:
            if ( v43 >= 38 )
            {
              LODWORD(v40) = 38;
              LODWORD(v39) = v43;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 3254, ASSERT_TYPE_ASSERT, "( actorCount ) < ( (32 + 6) )", "actorCount < MAX_ACTORS\n\t%i, %i", v39, v40) )
                __debugbreak();
            }
            ++v43;
            *v58++ = v4->s.number;
            break;
          case ET_COVERWALL:
            if ( v49 >= 1881 )
            {
              LODWORD(v40) = 1881;
              LODWORD(v39) = v49;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 3287, ASSERT_TYPE_ASSERT, "( coverWallCount ) < ( MAX_COVERWALLS )", "coverWallCount < MAX_COVERWALLS\n\t%i, %i", v39, v40) )
                __debugbreak();
            }
            ++v49;
            *v62++ = v4->s.number;
            break;
          default:
            if ( v4->handler == 10 || v4->handler == 12 )
            {
              if ( v3 >= 1881 )
              {
                v11 = 3302;
LABEL_74:
                LODWORD(v40) = 1881;
                LODWORD(v39) = v3;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", v11, ASSERT_TYPE_ASSERT, "( missileCount ) < ( MAX_MISSILES )", "missileCount < MAX_MISSILES\n\t%i, %i", v39, v40) )
                  __debugbreak();
              }
LABEL_76:
              ++v3;
              *v54++ = v4->s.number;
            }
            else if ( v4->handler == 13 )
            {
              if ( v5 >= 512 )
              {
                LODWORD(v40) = 512;
                LODWORD(v39) = v5;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 3309, ASSERT_TYPE_ASSERT, "( spawnerCount ) < ( ( 512 ) )", "spawnerCount < MAX_SPAWNERS\n\t%i, %i", v39, v40) )
                  __debugbreak();
              }
LABEL_71:
              ++v5;
              *v53++ = v4->s.number;
            }
            else
            {
              if ( v6 >= 1881 )
              {
                LODWORD(v40) = 1881;
                LODWORD(v39) = v6;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_main_sp.cpp", 3316, ASSERT_TYPE_ASSERT, "( otherCount ) < ( MAX_OTHER )", "otherCount < MAX_OTHER\n\t%i, %i", v39, v40) )
                  __debugbreak();
              }
              ++v6;
              *v64++ = v4->s.number;
            }
            break;
        }
      }
      else
      {
        ++level.currentEntityThink;
      }
      ++v4;
    }
    while ( level.currentEntityThink < level.num_entities );
    v50 = v6;
    if ( v7 > 0 )
    {
      v12 = j_va("Vehicle Think: %d", (unsigned int)v7);
      Sys_ProfBeginNamedEvent(0xFF008008, v12);
      updated = G_MainSP_UpdateSortedEntityGroup(thinkList, v7, extent, timeCap);
      Sys_ProfEndNamedEvent();
      if ( !updated )
        return 0i64;
    }
    if ( v42 > 0 )
    {
      v14 = j_va("Mover Think: %d", (unsigned int)v42);
      Sys_ProfBeginNamedEvent(0xFF008008, v14);
      if ( !G_MainSP_UpdateSortedEntityGroup(v72, v42, extent, timeCap) )
      {
LABEL_94:
        Sys_ProfEndNamedEvent();
        return 0i64;
      }
      Physics_UpdateBroadphase(PHYSICS_WORLD_ID_FIRST, 1);
      Physics_UpdateBroadphase(PHYSICS_WORLD_ID_SERVER_DETAIL, 1);
      Sys_ProfEndNamedEvent();
    }
  }
  Path_PreStep();
  v15 = s_actors;
  v16 = 0i64;
  v17 = 0i64;
  do
  {
    if ( v15[v16].inuse )
    {
      v18 = &v15[v17];
      AIActorInterface::AIActorInterface(&v66);
      v67 = NULL;
      if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\ai\\ai_wrapper.h", 472, ASSERT_TYPE_ASSERT, "(pActor)", (const char *)&queryFormat, "pActor") )
        __debugbreak();
      AIActorInterface::SetActor(&v66, v18);
      v67 = &v66;
      AIScriptedInterface::Physics_UpdateTransformForGroundEnt(&v66);
      v15 = s_actors;
      v2 = v65;
    }
    ++v17;
    ++v16;
    v65 = --v2;
  }
  while ( v2 );
  if ( v43 > 0 )
  {
    v19 = j_va("Actor Think: %d", (unsigned int)v43);
    Sys_ProfBeginNamedEvent(0xFF008008, v19);
    GMovingPlatforms::PredictPositions();
    AIScheduler::Update();
    v20 = G_MainSP_UpdateSortedEntityGroup(v69, v43, extent, timeCap);
    Sys_ProfBeginNamedEvent(0xFF008008, "proxy teleport update");
    Physics_UpdateBroadphase(PHYSICS_WORLD_ID_FIRST, 1);
    Physics_UpdateBroadphase(PHYSICS_WORLD_ID_SERVER_DETAIL, 1);
    Sys_ProfEndNamedEvent();
    GMovingPlatforms::ResetPredictedPositions();
    Sys_ProfEndNamedEvent();
    if ( !v20 )
      return 0i64;
  }
  GMovingPlatforms::DeferredUpdateAll();
  if ( v44 > 0 )
  {
    v21 = j_va("Mover Think2: %d", (unsigned int)v44);
    Sys_ProfBeginNamedEvent(0xFF008008, v21);
    if ( !G_MainSP_UpdateSortedEntityGroup(v73, v44, extent, timeCap) )
      goto LABEL_94;
    Physics_UpdateBroadphase(PHYSICS_WORLD_ID_FIRST, 1);
    Physics_UpdateBroadphase(PHYSICS_WORLD_ID_SERVER_DETAIL, 1);
    Sys_ProfEndNamedEvent();
  }
  if ( v5 > 0 )
  {
    v23 = j_va("Spawner Think: %d", (unsigned int)v5);
    Sys_ProfBeginNamedEvent(0xFF008008, v23);
    v24 = G_MainSP_UpdateSortedEntityGroup(v71, v5, extent, timeCap);
    Sys_ProfEndNamedEvent();
    if ( !v24 )
      return 0i64;
  }
  if ( v45 > 0 )
  {
    v25 = j_va("Primary Light Think: %d", (unsigned int)v45);
    Sys_ProfBeginNamedEvent(0xFF008008, v25);
    v26 = G_MainSP_UpdateSortedEntityGroup(v74, v45, extent, timeCap);
    Sys_ProfEndNamedEvent();
    if ( !v26 )
      return 0i64;
  }
  if ( v3 > 0 )
  {
    v27 = j_va("Missile Think: %d", (unsigned int)v3);
    Sys_ProfBeginNamedEvent(0xFF008008, v27);
    v28 = G_MainSP_UpdateSortedEntityGroup(v75, v3, extent, timeCap);
    Sys_ProfEndNamedEvent();
    if ( !v28 )
      return 0i64;
  }
  if ( v46 > 0 )
  {
    v29 = j_va("Turret Think: %d", (unsigned int)v46);
    Sys_ProfBeginNamedEvent(0xFF008008, v29);
    v30 = G_MainSP_UpdateSortedEntityGroup(v76, v46, extent, timeCap);
    Sys_ProfEndNamedEvent();
    if ( !v30 )
      return 0i64;
  }
  if ( v47 > 0 )
  {
    v31 = j_va("Item Think: %d", (unsigned int)v47);
    Sys_ProfBeginNamedEvent(0xFF008008, v31);
    v32 = G_MainSP_UpdateSortedEntityGroup(v77, v47, extent, timeCap);
    Sys_ProfEndNamedEvent();
    if ( !v32 )
      return 0i64;
  }
  if ( v48 > 0 )
  {
    v33 = j_va("Corpse Think: %d", (unsigned int)v48);
    Sys_ProfBeginNamedEvent(0xFF008008, v33);
    v34 = G_MainSP_UpdateSortedEntityGroup(v68, v48, extent, timeCap);
    Sys_ProfEndNamedEvent();
    if ( !v34 )
      return 0i64;
  }
  if ( v49 > 0 )
  {
    v35 = j_va("CoverWall Think: %d", (unsigned int)v49);
    Sys_ProfBeginNamedEvent(0xFF008008, v35);
    v36 = G_MainSP_UpdateSortedEntityGroup(v78, v49, extent, timeCap);
    Sys_ProfEndNamedEvent();
    if ( !v36 )
      return 0i64;
  }
  if ( v50 > 0 )
  {
    v37 = j_va("Other Think: %d", (unsigned int)v50);
    Sys_ProfBeginNamedEvent(0xFF008008, v37);
    Physics_SetNoBroadphaseQueriesAllowed(PHYSICS_WORLD_ID_FIRST, 1);
    Physics_SetNoBroadphaseQueriesAllowed(PHYSICS_WORLD_ID_SERVER_DETAIL, 1);
    v38 = G_MainSP_UpdateSortedEntityGroup(v79, v50, extent, timeCap);
    Physics_SetNoBroadphaseQueriesAllowed(PHYSICS_WORLD_ID_FIRST, 0);
    Physics_SetNoBroadphaseQueriesAllowed(PHYSICS_WORLD_ID_SERVER_DETAIL, 0);
    Sys_ProfEndNamedEvent();
    if ( !v38 )
      return 0i64;
  }
  Physics_UpdateBroadphase(PHYSICS_WORLD_ID_FIRST, 1);
  Physics_UpdateBroadphase(PHYSICS_WORLD_ID_SERVER_DETAIL, 1);
  return 1i64;
}

/*
==============
G_MainSP_UpdateSortedEntityGroup
==============
*/
__int64 G_MainSP_UpdateSortedEntityGroup(const int *thinkList, int count, ServerFrameExtent extent, unsigned int timeCap)
{
  __int64 v4; 
  __int64 v6; 
  __int64 v7; 
  gentity_s *v8; 
  __int64 v10; 
  __int64 v11; 

  v4 = count;
  if ( count > 0 )
  {
    v6 = 0i64;
    do
    {
      v7 = thinkList[v6];
      if ( (unsigned int)v7 >= 0x800 )
      {
        LODWORD(v11) = 2048;
        LODWORD(v10) = thinkList[v6];
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( g_entities[v7].r.isInUse != g_entityIsInUse[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v7] )
      {
        v8 = &g_entities[thinkList[v6]];
        level.currentEntityThink = v8->s.number;
        G_MainSP_RunFrameForEntity(v8);
        G_UpdateLinkInfoForClients(v8);
      }
      ++v6;
    }
    while ( v6 < v4 );
  }
  return 1i64;
}

/*
==============
G_MainSP_XAnimUpdateEnt
==============
*/
void G_MainSP_XAnimUpdateEnt(gentity_s *ent)
{
  scrContext_t *i; 
  signed __int64 v3; 
  __int64 v4; 
  __int64 v5; 

  for ( i = ScriptContext_Server(); ; Scr_RunCurrentThreads(i) )
  {
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    v3 = ent - g_entities;
    if ( (unsigned int)v3 >= 0x800 )
    {
      LODWORD(v5) = 2048;
      LODWORD(v4) = ((int)ent - (int)g_entities) / 1456;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    v3 = (__int16)v3;
    if ( (unsigned int)(__int16)v3 >= 0x800 )
    {
      LODWORD(v5) = 2048;
      LODWORD(v4) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v3].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( !g_entityIsInUse[v3] || GameModeFlagContainer<enum BgEntityFlagsCommon,enum BgEntityFlagsSP,enum BgEntityFlagsMP,64>::TestFlagInternal(&ent->flags, ACTIVE, 0xBu) || !G_UtilsSP_DObjUpdateServerTime(ent, 1) )
      break;
  }
}

