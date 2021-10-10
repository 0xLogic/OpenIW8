/*
==============
CG_GetSnapshotEntityState
==============
*/

entityState_t *__fastcall CG_GetSnapshotEntityState(int entnum)
{
  return ?CG_GetSnapshotEntityState@@YAPEAUentityState_t@@H@Z(entnum);
}

/*
==============
SV_GetSnapshotFxEntities
==============
*/

int __fastcall SV_GetSnapshotFxEntities(unsigned __int16 *fxEntityNums)
{
  return ?SV_GetSnapshotFxEntities@@YAHPEAG@Z(fxEntityNums);
}

/*
==============
SV_GetSnapshotUmbraGateStates
==============
*/

bitarray<384> *__fastcall SV_GetSnapshotUmbraGateStates(bitarray<384> *result)
{
  return ?SV_GetSnapshotUmbraGateStates@@YA?AV?$bitarray@$0BIA@@@XZ(result);
}

/*
==============
SV_GetSnapshotScriptableActiveRpInstances
==============
*/

const ScriptableReplicatedInstance *__fastcall SV_GetSnapshotScriptableActiveRpInstances()
{
  return ?SV_GetSnapshotScriptableActiveRpInstances@@YAPEBUScriptableReplicatedInstance@@XZ();
}

/*
==============
SV_AllocServerSnapshotCache
==============
*/

void __fastcall SV_AllocServerSnapshotCache(HunkUser *hunkUser)
{
  ?SV_AllocServerSnapshotCache@@YAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
CG_GetSnapshotEntityUseCount
==============
*/

unsigned int __fastcall CG_GetSnapshotEntityUseCount(int entnum)
{
  return ?CG_GetSnapshotEntityUseCount@@YAIH@Z(entnum);
}

/*
==============
SV_FreeServerSnapshotCache
==============
*/

void SV_FreeServerSnapshotCache(void)
{
  ?SV_FreeServerSnapshotCache@@YAXXZ();
}

/*
==============
SV_SnapshotSP_CanClientSeeEntity
==============
*/

bool __fastcall SV_SnapshotSP_CanClientSeeEntity(const gentity_s *ent)
{
  return ?SV_SnapshotSP_CanClientSeeEntity@@YA_NPEBUgentity_s@@@Z(ent);
}

/*
==============
CG_GetSnapshotWeaponEntry
==============
*/

WeaponMapEntry *__fastcall CG_GetSnapshotWeaponEntry(int weaponNum)
{
  return ?CG_GetSnapshotWeaponEntry@@YAPEAUWeaponMapEntry@@H@Z(weaponNum);
}

/*
==============
SV_GetSnapshotEntities
==============
*/

int __fastcall SV_GetSnapshotEntities(unsigned __int16 *entityNums)
{
  return ?SV_GetSnapshotEntities@@YAHPEAG@Z(entityNums);
}

/*
==============
SV_GetSnapshotWeapons
==============
*/

int __fastcall SV_GetSnapshotWeapons(unsigned __int16 *weaponNums)
{
  return ?SV_GetSnapshotWeapons@@YAHPEAG@Z(weaponNums);
}

/*
==============
SV_GetSnapshotHudElems
==============
*/

void __fastcall SV_GetSnapshotHudElems(hudelem_t *outHudElems)
{
  ?SV_GetSnapshotHudElems@@YAXPEAUhudelem_t@@@Z(outHudElems);
}

/*
==============
SV_ServerSnapshotCache_GetAllocationSize
==============
*/

int __fastcall SV_ServerSnapshotCache_GetAllocationSize()
{
  return ?SV_ServerSnapshotCache_GetAllocationSize@@YAHXZ();
}

/*
==============
SV_SnapshotSP_Clear
==============
*/

void SV_SnapshotSP_Clear(void)
{
  ?SV_SnapshotSP_Clear@@YAXXZ();
}

/*
==============
CG_GetSnapshotSoundInfo
==============
*/

serverSoundInfo_s *__fastcall CG_GetSnapshotSoundInfo(int entnum)
{
  return ?CG_GetSnapshotSoundInfo@@YAPEAUserverSoundInfo_s@@H@Z(entnum);
}

/*
==============
SV_GetSnapshotScriptablePartWorld
==============
*/

const ScriptablePartWorldState *__fastcall SV_GetSnapshotScriptablePartWorld()
{
  return ?SV_GetSnapshotScriptablePartWorld@@YAPEBUScriptablePartWorldState@@XZ();
}

/*
==============
SV_GetSnapshotScriptableActiveRpInstanceCount
==============
*/

unsigned int __fastcall SV_GetSnapshotScriptableActiveRpInstanceCount()
{
  return ?SV_GetSnapshotScriptableActiveRpInstanceCount@@YAIXZ();
}

/*
==============
CG_FXEntitiesGetSnapshotFXEnt
==============
*/

FxEntity *__fastcall CG_FXEntitiesGetSnapshotFXEnt(int entnum)
{
  return ?CG_FXEntitiesGetSnapshotFXEnt@@YAPEAUFxEntity@@H@Z(entnum);
}

/*
==============
SV_GetSnapshotSoundInfos
==============
*/

int __fastcall SV_GetSnapshotSoundInfos(unsigned __int16 *soundInfos)
{
  return ?SV_GetSnapshotSoundInfos@@YAHPEAG@Z(soundInfos);
}

/*
==============
SV_SnapshotSP_SendClientMessages
==============
*/

void SV_SnapshotSP_SendClientMessages(void)
{
  ?SV_SnapshotSP_SendClientMessages@@YAXXZ();
}

/*
==============
SV_GetSnapshotOmnvars
==============
*/

void __fastcall SV_GetSnapshotOmnvars(OmnvarGameData *gameOmnvars)
{
  ?SV_GetSnapshotOmnvars@@YAXPEAUOmnvarGameData@@@Z(gameOmnvars);
}

/*
==============
CG_FXEntitiesGetSnapshotFXEnt
==============
*/
FxEntity *CG_FXEntitiesGetSnapshotFXEnt(int entnum)
{
  __int64 v1; 
  __int64 v3; 
  int v4; 

  v1 = entnum;
  if ( !s_svSnapshot_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 367, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache)", (const char *)&queryFormat, "s_svSnapshot_cache") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x500 )
  {
    v4 = 1280;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 368, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( 1280 )", "entnum doesn't index FX_ENTITY_MAX\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return &s_svSnapshot_cache->fxEntities[v1];
}

/*
==============
CG_GetSnapshotEntityState
==============
*/
entityState_t *CG_GetSnapshotEntityState(int entnum)
{
  __int64 v1; 
  __int64 v3; 
  int v4; 

  v1 = entnum;
  if ( !s_svSnapshot_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 351, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache)", (const char *)&queryFormat, "s_svSnapshot_cache") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x800 )
  {
    v4 = 2048;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 352, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( ( 2048 ) )", "entnum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return &s_svSnapshot_cache->entityStates[v1];
}

/*
==============
CG_GetSnapshotEntityUseCount
==============
*/
__int64 CG_GetSnapshotEntityUseCount(int entnum)
{
  __int64 v1; 
  __int64 v3; 
  int v4; 

  v1 = entnum;
  if ( !s_svSnapshot_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 359, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache)", (const char *)&queryFormat, "s_svSnapshot_cache") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x800 )
  {
    v4 = 2048;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 360, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( ( 2048 ) )", "entnum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return s_svSnapshot_cache->entityUseCounts[v1];
}

/*
==============
CG_GetSnapshotSoundInfo
==============
*/
serverSoundInfo_s *CG_GetSnapshotSoundInfo(int entnum)
{
  __int64 v1; 
  __int64 v3; 
  int v4; 

  v1 = entnum;
  if ( !s_svSnapshot_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 375, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache)", (const char *)&queryFormat, "s_svSnapshot_cache") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 376, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL )") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x400 )
  {
    v4 = 1024;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 377, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( 1024 )", "entnum doesn't index MAX_SERVER_CULLED_SOUNDS\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return &s_svSnapshot_cache->soundInfos[v1];
}

/*
==============
CG_GetSnapshotWeaponEntry
==============
*/
WeaponMapEntry *CG_GetSnapshotWeaponEntry(int weaponNum)
{
  __int64 v1; 
  __int64 v3; 
  int v4; 

  v1 = weaponNum;
  if ( !s_svSnapshot_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 385, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache)", (const char *)&queryFormat, "s_svSnapshot_cache") )
    __debugbreak();
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( (unsigned int)v1 >= BgWeaponMap::ms_runtimeSize )
  {
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    v4 = BgWeaponMap::ms_runtimeSize;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 386, ASSERT_TYPE_ASSERT, "(unsigned)( weaponNum ) < (unsigned)( BgWeaponMap::GetRuntimeSize() )", "weaponNum doesn't index BgWeaponMap::GetRuntimeSize()\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return &s_svSnapshot_cache->weaponEntries[v1];
}

/*
==============
SV_AddEntities
==============
*/
char SV_AddEntities()
{
  SvGameGlobals *SvGameGlobalsCommon; 
  int v1; 
  SvGameGlobals *v2; 
  gentity_s *v3; 
  ServerSnapshotCache *v4; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 

  if ( !s_svSnapshot_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 615, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache)", (const char *)&queryFormat, "s_svSnapshot_cache") )
    __debugbreak();
  LOBYTE(SvGameGlobalsCommon) = (_BYTE)s_svSnapshot_cache;
  v1 = 0;
  s_svSnapshot_cache->entityCount = 0;
  if ( SvStaticGlobals::ms_svStaticGlobals.state )
  {
    SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
    v2 = SvGameGlobalsCommon;
    if ( SvGameGlobalsCommon->num_entities > 0 )
    {
      do
      {
        SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
        v3 = &SvGameGlobalsCommon->gentities[v1];
        if ( !v3 )
        {
          LOBYTE(SvGameGlobalsCommon) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 601, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent");
          if ( (_BYTE)SvGameGlobalsCommon )
            __debugbreak();
        }
        if ( v3->r.isLinked && (v3->r.svFlags & 1) == 0 )
        {
          if ( v3->s.number != v1 )
          {
            LODWORD(v8) = v3->s.eType;
            LODWORD(v7) = v1;
            LODWORD(v6) = v3->s.number;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 635, ASSERT_TYPE_ASSERT, "(ent->s.number == e)", "%s\n\tentnum: %d vs %d, eType: %d, origin: %f %f %f", "ent->s.number == e", v6, v7, v8, v3->r.currentOrigin.v[0], v3->r.currentOrigin.v[1], v3->r.currentOrigin.v[2]) )
              __debugbreak();
          }
          if ( v1 >= 1 || (LODWORD(SvGameGlobalsCommon) = CL_GetOnlyLocalClientNum(), v1 != (_DWORD)SvGameGlobalsCommon) )
          {
            v4 = s_svSnapshot_cache;
            if ( !s_svSnapshot_cache )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 416, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache)", (const char *)&queryFormat, "s_svSnapshot_cache") )
                __debugbreak();
              v4 = s_svSnapshot_cache;
            }
            if ( v4->entityCount == 2048 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 417, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache->entityCount != SV_MAX_SNAPSHOT_ENTITIES_SP)", (const char *)&queryFormat, "s_svSnapshot_cache->entityCount != SV_MAX_SNAPSHOT_ENTITIES_SP") )
                __debugbreak();
              v4 = s_svSnapshot_cache;
            }
            SvGameGlobalsCommon = (SvGameGlobals *)v4->entityCount;
            v4->entityNums[(_QWORD)SvGameGlobalsCommon] = v1;
            ++v4->entityCount;
          }
        }
        ++v1;
      }
      while ( v1 < v2->num_entities );
    }
  }
  return (char)SvGameGlobalsCommon;
}

/*
==============
SV_AddSoundInfos
==============
*/
char SV_AddSoundInfos()
{
  serverSoundInfo_s *ServerSoundInfo; 
  int v1; 
  int v2; 
  signed int v3; 
  float *v4; 
  playerState_s *PlayerstateForClientNum; 
  float v6; 
  float v7; 
  float v8; 
  __int16 linkEnt; 
  __int64 v10; 
  float v11; 
  int v12; 
  int v13; 
  __int64 v14; 
  int v15; 
  float *v16; 
  float *v18; 
  __int64 v19; 
  __int128 v20; 
  float v21; 
  float v22; 
  ServerSnapshotCache *v24; 
  __int64 v26; 
  __int64 v27; 
  char v28; 

  if ( !s_svSnapshot_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 480, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache)", (const char *)&queryFormat, "s_svSnapshot_cache") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 481, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL )") )
    __debugbreak();
  LOBYTE(ServerSoundInfo) = (_BYTE)s_svSnapshot_cache;
  s_svSnapshot_cache->soundInfoCount = 0;
  if ( SvStaticGlobals::ms_svStaticGlobals.state )
  {
    v1 = SvClient::ms_clientCount;
    v2 = 0;
    if ( (int)SvClient::ms_clientCount > 1 )
    {
      LODWORD(v26) = SvClient::ms_clientCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 494, ASSERT_TYPE_ASSERT, "( SvClient::GetClientCount() ) <= ( 1 )", "SvClient::GetClientCount() <= MAX_CLIENTS_SP\n\t%i, %i", v26, 1) )
        __debugbreak();
      v1 = SvClient::ms_clientCount;
    }
    v3 = 0;
    if ( v1 <= 0 )
      goto LABEL_52;
    v4 = (float *)&v28;
    do
    {
      if ( SvClient::GetCommonClient(v3)->state == CS_ACTIVE )
      {
        PlayerstateForClientNum = SV_Game_GetPlayerstateForClientNum(v3);
        if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&PlayerstateForClientNum->otherFlags, ACTIVE, 1u) )
        {
          v6 = PlayerstateForClientNum->vehicleState.origin.v[2];
          v7 = PlayerstateForClientNum->vehicleState.origin.v[1];
          v8 = PlayerstateForClientNum->vehicleState.origin.v[0];
        }
        else if ( (PlayerstateForClientNum->linkFlags.m_flags[0] & 4) == 0 || (linkEnt = PlayerstateForClientNum->linkEnt, linkEnt == 2047) )
        {
          v11 = PlayerstateForClientNum->origin.v[2];
          v7 = PlayerstateForClientNum->origin.v[1];
          v8 = PlayerstateForClientNum->origin.v[0];
          *v4 = v11;
          v6 = v11 + PlayerstateForClientNum->viewHeightCurrent;
        }
        else
        {
          v10 = linkEnt;
          v6 = g_entities[v10].r.currentOrigin.v[2];
          v7 = g_entities[v10].r.currentOrigin.v[1];
          v8 = g_entities[v10].r.currentOrigin.v[0];
        }
        *(v4 - 2) = v8;
        *(v4 - 1) = v7;
        ++v2;
        *v4 = v6;
        v4 += 3;
      }
      ++v3;
    }
    while ( v3 < (int)SvClient::ms_clientCount );
    if ( !v2 )
    {
LABEL_52:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 523, ASSERT_TYPE_ASSERT, "(listenerCount)", (const char *)&queryFormat, "listenerCount") )
        __debugbreak();
    }
    LODWORD(ServerSoundInfo) = SV_ServerCulledSoundsSP_GetMaxSoundInfo();
    v12 = 0;
    v13 = (int)ServerSoundInfo;
    if ( (int)ServerSoundInfo > 0 )
    {
      v14 = v2 % 2;
      do
      {
        ServerSoundInfo = SV_ServerCulledSoundsSP_GetServerSoundInfo(v12);
        v15 = 0;
        v16 = (float *)ServerSoundInfo;
        *(float *)&_XMM6 = FLOAT_1_0e30;
        if ( v14 > 0 )
        {
          v18 = (float *)&v28;
          v19 = v14;
          do
          {
            if ( v15 )
            {
              LODWORD(v27) = 1;
              LODWORD(v26) = v15;
              LOBYTE(ServerSoundInfo) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 539, ASSERT_TYPE_ASSERT, "(unsigned)( listenerIndex ) < (unsigned)( ( sizeof( *array_counter( listenerOrigin ) ) + 0 ) )", "listenerIndex doesn't index ARRAY_COUNT( listenerOrigin )\n\t%i not in [0, %i)", v26, v27);
              if ( (_BYTE)ServerSoundInfo )
                __debugbreak();
            }
            v20 = *((unsigned int *)v18 - 1);
            *(float *)&v20 = *(v18 - 1) - v16[1];
            v21 = (float)(*(v18 - 2) - *v16) * (float)(*(v18 - 2) - *v16);
            v22 = (float)(*v18 - v16[2]) * (float)(*v18 - v16[2]);
            ++v15;
            v18 += 3;
            *(float *)&v20 = (float)((float)(*(float *)&v20 * *(float *)&v20) + v21) + v22;
            _XMM2 = v20;
            __asm { vminss  xmm6, xmm2, xmm6 }
            --v19;
          }
          while ( v19 );
        }
        if ( *(float *)&_XMM6 <= v16[7] )
        {
          if ( !s_svSnapshot_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 458, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache)", (const char *)&queryFormat, "s_svSnapshot_cache") )
            __debugbreak();
          if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 459, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL )") )
            __debugbreak();
          if ( s_svSnapshot_cache->soundInfoCount >= 1024 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 460, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache->soundInfoCount < 1024)", (const char *)&queryFormat, "s_svSnapshot_cache->soundInfoCount < MAX_SERVER_CULLED_SOUNDS") )
            __debugbreak();
          if ( v12 >= 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 461, ASSERT_TYPE_ASSERT, "(soundIndex < 0xFFFF)", (const char *)&queryFormat, "soundIndex < 0xFFFF") )
            __debugbreak();
          v24 = s_svSnapshot_cache;
          ServerSoundInfo = (serverSoundInfo_s *)s_svSnapshot_cache->soundInfoCount;
          s_svSnapshot_cache->soundInfoNums[(_QWORD)ServerSoundInfo] = v12;
          ++v24->soundInfoCount;
        }
        ++v12;
      }
      while ( v12 < v13 );
    }
  }
  return (char)ServerSoundInfo;
}

/*
==============
SV_AddWeapons
==============
*/
char SV_AddWeapons()
{
  GWeaponMap *Instance; 
  WeaponMapEntry *m_entries; 
  unsigned __int16 v2; 
  unsigned __int16 v3; 
  unsigned __int16 index; 
  ServerSnapshotCache *v5; 
  __int64 v7; 
  __int64 v8; 

  Instance = GWeaponMap::GetInstance();
  if ( !s_svSnapshot_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 567, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache)", (const char *)&queryFormat, "s_svSnapshot_cache") )
    __debugbreak();
  LOBYTE(m_entries) = (_BYTE)s_svSnapshot_cache;
  v2 = 0;
  s_svSnapshot_cache->weaponCount = 0;
  while ( 1 )
  {
    if ( !BgWeaponMap::ms_runtimeSizeInitialized )
    {
      LOBYTE(m_entries) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized");
      if ( (_BYTE)m_entries )
        __debugbreak();
    }
    if ( v2 >= BgWeaponMap::ms_runtimeSize )
      break;
    if ( !Instance->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 161, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
      __debugbreak();
    v3 = truncate_cast<unsigned short,unsigned int>(v2);
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    if ( v3 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 165, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
      __debugbreak();
    m_entries = Instance->m_entries;
    if ( m_entries[v3].index == v3 )
    {
      index = BgWeaponMap::GetWeaponEntry(Instance, v2)->index;
      if ( index != v2 )
      {
        LODWORD(v8) = v2;
        LODWORD(v7) = index;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 579, ASSERT_TYPE_ASSERT, "(entry->index == weaponMapIndex)", "%s\n\tFound an active weapon in the weapon map where the entry is not correctly mapped to it's index: Entry:%d Index:%d", "entry->index == weaponMapIndex", v7, v8) )
          __debugbreak();
      }
      v5 = s_svSnapshot_cache;
      m_entries = (WeaponMapEntry *)s_svSnapshot_cache->weaponCount;
      s_svSnapshot_cache->weaponNums[(_QWORD)m_entries] = v2;
      ++v5->weaponCount;
    }
    ++v2;
  }
  return (char)m_entries;
}

/*
==============
SV_AllocServerSnapshotCache
==============
*/
void SV_AllocServerSnapshotCache(HunkUser *hunkUser)
{
  ServerSnapshotCache *v2; 
  unsigned int ReplicatedInstanceLimit; 
  unsigned int v4; 
  __int64 v5; 
  unsigned int ReplicatedPartLimitForWorld; 
  unsigned __int64 v7; 
  ServerSnapshotCache *v8; 
  void *v9; 
  __int64 v10; 

  if ( s_svSnapshot_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 132, ASSERT_TYPE_ASSERT, "(!s_svSnapshot_cache)", (const char *)&queryFormat, "!s_svSnapshot_cache") )
    __debugbreak();
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( BgWeaponMap::ms_runtimeSize > 0xFFu )
  {
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 136, ASSERT_TYPE_ASSERT, "(BgWeaponMap::GetRuntimeSize() <= BgWeaponMap::SMALL_MAX_ENTRIES)", "%s\n\tSP ServerSnapshotCache uses static size BgWeaponMap::SMALL_MAX_ENTRIES (%i) but BgWeaponMap::GetRuntimeSize() = %i", "BgWeaponMap::GetRuntimeSize() <= BgWeaponMap::SMALL_MAX_ENTRIES", 255, BgWeaponMap::ms_runtimeSize) )
      __debugbreak();
  }
  s_svSnapshot_cache = (ServerSnapshotCache *)Mem_HunkUser_AllocInternal(hunkUser, 0xA7E20ui64, 8ui64, "SV_AllocServerSnapshotCache");
  v2 = s_svSnapshot_cache;
  memset_0(s_svSnapshot_cache, 0, sizeof(ServerSnapshotCache));
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 65, ASSERT_TYPE_ASSERT, "( s_svSnapshot_cache )", (const char *)&queryFormat, "s_svSnapshot_cache") )
    __debugbreak();
  ReplicatedInstanceLimit = ScriptableSv_GetReplicatedInstanceLimit();
  v4 = 0;
  v5 = 607760i64;
  s_svSnapshot_cache->scriptableActiveRpInstances = (ScriptableReplicatedInstance *)Mem_HunkUser_AllocInternal(hunkUser, 32 * ReplicatedInstanceLimit, 0x10ui64, "SV_SnapshotSP_InitScriptableWorld");
  do
  {
    ReplicatedPartLimitForWorld = ScriptableSv_GetReplicatedPartLimitForWorld(v4);
    v7 = ReplicatedPartLimitForWorld;
    if ( !ReplicatedPartLimitForWorld )
    {
      LODWORD(v10) = ReplicatedPartLimitForWorld;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 79, ASSERT_TYPE_ASSERT, "( ( replicatedPartLimit > 0 ) )", "%s\n\t( replicatedPartLimit ) = %i", "( replicatedPartLimit > 0 )", v10) )
        __debugbreak();
    }
    v8 = s_svSnapshot_cache;
    v9 = Mem_HunkUser_AllocInternal(hunkUser, v7, 0x10ui64, "SV_SnapshotSP_InitScriptableWorld");
    *(_QWORD *)((char *)&v8->entityCount + v5) = v9;
    memset_0(v9, 0, v7);
    ++v4;
    v5 += 8i64;
  }
  while ( v4 < 2 );
}

/*
==============
SV_FreeServerSnapshotCache
==============
*/
void SV_FreeServerSnapshotCache(void)
{
  if ( s_svSnapshot_cache )
  {
    DebugWipe(s_svSnapshot_cache, 0xA7E20ui64);
    s_svSnapshot_cache = NULL;
  }
}

/*
==============
SV_GetSnapshotEntities
==============
*/
__int64 SV_GetSnapshotEntities(unsigned __int16 *entityNums)
{
  ServerSnapshotCache *v1; 

  v1 = s_svSnapshot_cache;
  if ( !s_svSnapshot_cache )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 176, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache)", (const char *)&queryFormat, "s_svSnapshot_cache") )
      __debugbreak();
    v1 = s_svSnapshot_cache;
  }
  memcpy_0(entityNums, v1->entityNums, 2i64 * v1->entityCount);
  return (unsigned int)v1->entityCount;
}

/*
==============
SV_GetSnapshotFxEntities
==============
*/
__int64 SV_GetSnapshotFxEntities(unsigned __int16 *fxEntityNums)
{
  ServerSnapshotCache *v1; 

  v1 = s_svSnapshot_cache;
  if ( !s_svSnapshot_cache )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 184, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache)", (const char *)&queryFormat, "s_svSnapshot_cache") )
      __debugbreak();
    v1 = s_svSnapshot_cache;
  }
  memcpy_0(fxEntityNums, v1->fxEntNums, 2i64 * v1->fxEntCount);
  return (unsigned int)v1->fxEntCount;
}

/*
==============
SV_GetSnapshotHudElems
==============
*/
void SV_GetSnapshotHudElems(hudelem_t *outHudElems)
{
  if ( !s_svSnapshot_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 238, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache)", (const char *)&queryFormat, "s_svSnapshot_cache") )
    __debugbreak();
  if ( !outHudElems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 239, ASSERT_TYPE_ASSERT, "(outHudElems)", (const char *)&queryFormat, "outHudElems") )
    __debugbreak();
  memcpy_0(outHudElems, s_svSnapshot_cache->m_hudElems, 0xB800ui64);
}

/*
==============
SV_GetSnapshotOmnvars
==============
*/
void SV_GetSnapshotOmnvars(OmnvarGameData *gameOmnvars)
{
  unsigned int v2; 

  if ( !s_svSnapshot_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 231, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache)", (const char *)&queryFormat, "s_svSnapshot_cache") )
    __debugbreak();
  v2 = BG_Omnvar_PerGameCount();
  memcpy_0(gameOmnvars, &s_svSnapshot_cache->gameOmnvars, 8i64 * v2);
}

/*
==============
SV_GetSnapshotScriptableActiveRpInstanceCount
==============
*/
__int64 SV_GetSnapshotScriptableActiveRpInstanceCount()
{
  ServerSnapshotCache *v0; 

  v0 = s_svSnapshot_cache;
  if ( !s_svSnapshot_cache )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 224, ASSERT_TYPE_ASSERT, "( s_svSnapshot_cache )", (const char *)&queryFormat, "s_svSnapshot_cache") )
      __debugbreak();
    v0 = s_svSnapshot_cache;
  }
  return v0->scriptableActiveRpInstanceCount;
}

/*
==============
SV_GetSnapshotScriptableActiveRpInstances
==============
*/
ScriptableReplicatedInstance *SV_GetSnapshotScriptableActiveRpInstances()
{
  ServerSnapshotCache *v0; 

  v0 = s_svSnapshot_cache;
  if ( !s_svSnapshot_cache )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 217, ASSERT_TYPE_ASSERT, "( s_svSnapshot_cache )", (const char *)&queryFormat, "s_svSnapshot_cache") )
      __debugbreak();
    v0 = s_svSnapshot_cache;
  }
  return v0->scriptableActiveRpInstances;
}

/*
==============
SV_GetSnapshotScriptablePartWorld
==============
*/
ScriptablePartWorldState *SV_GetSnapshotScriptablePartWorld()
{
  ServerSnapshotCache *v0; 

  v0 = s_svSnapshot_cache;
  if ( !s_svSnapshot_cache )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 210, ASSERT_TYPE_ASSERT, "( s_svSnapshot_cache )", (const char *)&queryFormat, "s_svSnapshot_cache") )
      __debugbreak();
    v0 = s_svSnapshot_cache;
  }
  return &v0->scriptablePartWorldState;
}

/*
==============
SV_GetSnapshotSoundInfos
==============
*/
__int64 SV_GetSnapshotSoundInfos(unsigned __int16 *soundInfos)
{
  ServerSnapshotCache *v2; 

  if ( !s_svSnapshot_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 192, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache)", (const char *)&queryFormat, "s_svSnapshot_cache") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 193, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL )") )
    __debugbreak();
  v2 = s_svSnapshot_cache;
  memcpy_0(soundInfos, s_svSnapshot_cache->soundInfoNums, 2i64 * s_svSnapshot_cache->soundInfoCount);
  return (unsigned int)v2->soundInfoCount;
}

/*
==============
SV_GetSnapshotUmbraGateStates
==============
*/
bitarray<384> *SV_GetSnapshotUmbraGateStates(bitarray<384> *result)
{
  __int128 v2; 

  if ( !s_svSnapshot_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 247, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache)", (const char *)&queryFormat, "s_svSnapshot_cache") )
    __debugbreak();
  v2 = *(_OWORD *)&s_svSnapshot_cache->umbraGateStates.array[8];
  *(__m256i *)result->array = *(__m256i *)s_svSnapshot_cache->umbraGateStates.array;
  *(_OWORD *)&result->array[8] = v2;
  return result;
}

/*
==============
SV_GetSnapshotWeapons
==============
*/
__int64 SV_GetSnapshotWeapons(unsigned __int16 *weaponNums)
{
  ServerSnapshotCache *v2; 

  if ( !s_svSnapshot_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 201, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache)", (const char *)&queryFormat, "s_svSnapshot_cache") )
    __debugbreak();
  if ( !weaponNums && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 202, ASSERT_TYPE_ASSERT, "(weaponNums)", (const char *)&queryFormat, "weaponNums") )
    __debugbreak();
  v2 = s_svSnapshot_cache;
  memcpy_0(weaponNums, s_svSnapshot_cache->weaponNums, 2i64 * s_svSnapshot_cache->weaponCount);
  return (unsigned int)v2->weaponCount;
}

/*
==============
SV_ServerSnapshotCache_GetAllocationSize
==============
*/
__int64 SV_ServerSnapshotCache_GetAllocationSize()
{
  unsigned int v0; 

  v0 = 32 * ScriptableSv_GetReplicatedInstanceLimit() + 687656;
  return v0 + ScriptableSv_GetTotalReplicatedPartsLimit();
}

/*
==============
SV_SnapshotSP_BuildAndSendClientSnapshot
==============
*/
void SV_SnapshotSP_BuildAndSendClientSnapshot()
{
  signed int v0; 
  ServerSnapshotCache *v1; 
  int v2; 
  msg_t buf; 
  unsigned __int8 data[16384]; 

  SV_AddEntities();
  if ( !s_svSnapshot_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 438, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache)", (const char *)&queryFormat, "s_svSnapshot_cache") )
    __debugbreak();
  v0 = 0;
  s_svSnapshot_cache->fxEntCount = 0;
  if ( SvStaticGlobals::ms_svStaticGlobals.state )
  {
    do
    {
      if ( (SV_GetFXEntity(v0)->flags & 0x10) != 0 )
      {
        if ( !s_svSnapshot_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 426, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache)", (const char *)&queryFormat, "s_svSnapshot_cache") )
          __debugbreak();
        if ( s_svSnapshot_cache->fxEntCount == 1280 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 427, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache->fxEntCount != 1280)", (const char *)&queryFormat, "s_svSnapshot_cache->fxEntCount != FX_ENTITY_MAX") )
          __debugbreak();
        v1 = s_svSnapshot_cache;
        s_svSnapshot_cache->fxEntNums[s_svSnapshot_cache->fxEntCount] = v0;
        ++v1->fxEntCount;
      }
      ++v0;
    }
    while ( v0 < 1280 );
  }
  SV_AddSoundInfos();
  SV_AddWeapons();
  MSG_Init(&buf, data, 0x4000);
  SV_WriteSnapshot(&buf);
  if ( buf.overflowed )
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1444D8E90, 6341i64);
  MSG_WriteBits(&buf, 1i64, 4u);
  if ( BYTE1(SvGameGlobals::ms_allocatedType) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_persistent_globals_sp.h", 80, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  if ( !SvPersistentGlobals::ms_svPersistent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 72, ASSERT_TYPE_ASSERT, "(ms_svPersistent)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_svPersistent") )
    __debugbreak();
  if ( !BYTE1(SvGameGlobals::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_persistent_globals.h", 73, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server static data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  v2 = (int)SvPersistentGlobals::ms_svPersistent[1].__vftable;
  LODWORD(SvPersistentGlobals::ms_svPersistent[1].__vftable) = v2 + 1;
  CL_MainSP_LocalPacketEvent(&buf, v2);
}

/*
==============
SV_SnapshotSP_CanClientSeeEntity
==============
*/
bool SV_SnapshotSP_CanClientSeeEntity(const gentity_s *ent)
{
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 601, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  return ent->r.isLinked && (ent->r.svFlags & 1) == 0;
}

/*
==============
SV_SnapshotSP_Clear
==============
*/
void SV_SnapshotSP_Clear(void)
{
  if ( s_svSnapshot_cache )
    memset_0(s_svSnapshot_cache, 0, sizeof(ServerSnapshotCache));
}

/*
==============
SV_SnapshotSP_SendClientMessages
==============
*/
void SV_SnapshotSP_SendClientMessages(void)
{
  signed int OnlyLocalClientNum; 
  SvClient *CommonClient; 
  char *Value; 
  int *v3; 
  _QWORD *v4; 
  char *v5; 
  int *v6; 
  unsigned __int64 v7; 
  ThreadContext CurrentThreadContext; 
  __int64 v9; 
  __int64 v10; 
  int v11; 

  G_MainSP_SendClientMessages();
  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  if ( !s_svSnapshot_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 394, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache)", (const char *)&queryFormat, "s_svSnapshot_cache") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
    __debugbreak();
  if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
    __debugbreak();
  if ( OnlyLocalClientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 395, ASSERT_TYPE_ASSERT, "(clientNum == CL_GetOnlyLocalClientNum())", (const char *)&queryFormat, "clientNum == CL_GetOnlyLocalClientNum()") )
    __debugbreak();
  if ( SvClient::GetCommonClient(OnlyLocalClientNum)->state != CS_ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 396, ASSERT_TYPE_ASSERT, "( SvClient::GetConnectionState( clientNum ) == SvClientConnectionState::CS_ACTIVE )", (const char *)&queryFormat, "SvClient::GetConnectionState( clientNum ) == SvClientConnectionState::CS_ACTIVE") )
    __debugbreak();
  if ( (_BYTE)SvClient::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_client_sp.h", 83, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(OnlyLocalClientNum);
  CL_ParseSP_ParseCommandString((LocalClientNum_t)OnlyLocalClientNum, (ServerCommandsSP *)&CommonClient[1]);
  *(_DWORD *)&CommonClient[1].state = HIDWORD(CommonClient[1].__vftable);
  LODWORD(CommonClient[1].__vftable) = 0;
  Value = (char *)Sys_GetValue(0);
  v3 = (int *)(Value + 2736);
  if ( (unsigned int)(*((_DWORD *)Value + 684) + 1) >= 3 )
  {
    v11 = 3;
    LODWORD(v9) = *((_DWORD *)Value + 684) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v9, v11) )
      __debugbreak();
  }
  if ( (unsigned int)++*v3 >= 3 )
  {
    LODWORD(v10) = 3;
    LODWORD(v9) = *v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  v4 = Value + 2088;
  v5 = Value + 40;
  if ( *v4 < (unsigned __int64)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v4 += 8i64;
  if ( *v4 >= (unsigned __int64)v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v4 = v3;
  if ( *v4 <= (unsigned __int64)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v6 = &v3[*v3 + 2];
  v7 = __rdtsc();
  *v6 = v7;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 16, NULL, 0);
  SV_SnapshotSP_BuildAndSendClientSnapshot();
  Profile_EndInternal(NULL);
}

/*
==============
SV_WriteSnapshot
==============
*/
void SV_WriteSnapshot(msg_t *msg)
{
  msg_t *v1; 
  LocalClientNum_t OnlyLocalClientNum; 
  __int64 v3; 
  int Time; 
  playerState_s *PlayerstateForClientNum; 
  ServerSnapshotCache *v6; 
  unsigned int v7; 
  int i; 
  __int64 v9; 
  SvGameGlobals *SvGameGlobalsCommon; 
  __int64 v11; 
  entityState_t *v12; 
  int v13; 
  __int64 v14; 
  unsigned __int64 v15; 
  __m256i *FXEntity; 
  unsigned __int64 v17; 
  int v18; 
  ServerSnapshotCache *v19; 
  int v20; 
  __int64 v21; 
  unsigned __int64 v22; 
  __m256i *ServerSoundInfo; 
  unsigned __int64 v24; 
  int v25; 
  GWeaponMap *Instance; 
  ServerSnapshotCache *v27; 
  BgWeaponMap *v28; 
  int v29; 
  __int64 v30; 
  unsigned __int64 v31; 
  const WeaponMapEntry *WeaponEntry; 
  unsigned __int64 v33; 
  __int128 v34; 
  double v35; 
  int v36; 
  __int16 v37; 
  int PreviousTime; 
  const ScriptableReplicatedInstance *ReplicatedInstances; 
  unsigned int ReplicatedInstanceLimit; 
  const ScriptablePartWorldState *PartWorldState; 
  ServerSnapshotCache *v42; 
  const void **v43; 
  ScriptableReplicatedInstance *scriptableActiveRpInstances; 
  __int64 v45; 
  unsigned int ReplicatedPartLimitForWorld; 
  unsigned int v47; 
  SvClient *CommonClient; 
  SvGameGlobals *v49; 
  ServerSnapshotCache *v50; 
  __int64 v51; 
  entityState_t *v52; 
  __int64 v53; 
  __int64 v54; 
  __int64 v55; 

  v1 = msg;
  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  if ( !s_svSnapshot_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 268, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache)", (const char *)&queryFormat, "s_svSnapshot_cache") )
    __debugbreak();
  v3 = 4i64;
  MSG_WriteBits(v1, 0i64, 4u);
  Time = G_Main_GetTime();
  MSG_WriteLong(v1, Time);
  if ( (_BYTE)SvClient::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_client_sp.h", 83, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  if ( !SvClient::GetCommonClient(OnlyLocalClientNum)->gentity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 277, ASSERT_TYPE_ASSERT, "( SV_Client_GetSpClient( localClientNum )->gentity )", (const char *)&queryFormat, "SV_Client_GetSpClient( localClientNum )->gentity") )
    __debugbreak();
  if ( SvClient::GetCommonClient(OnlyLocalClientNum)->state != CS_ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 278, ASSERT_TYPE_ASSERT, "( SvClient::GetConnectionState( localClientNum ) == SvClientConnectionState::CS_ACTIVE )", (const char *)&queryFormat, "SvClient::GetConnectionState( localClientNum ) == SvClientConnectionState::CS_ACTIVE") )
    __debugbreak();
  PlayerstateForClientNum = SV_Game_GetPlayerstateForClientNum(OnlyLocalClientNum);
  if ( PlayerstateForClientNum->clientNum != OnlyLocalClientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 284, ASSERT_TYPE_ASSERT, "(ps->clientNum == localClientNum)", (const char *)&queryFormat, "ps->clientNum == localClientNum") )
    __debugbreak();
  CL_ParseSP_TransferPlayerstate(OnlyLocalClientNum, PlayerstateForClientNum);
  v6 = s_svSnapshot_cache;
  v7 = 0;
  if ( s_svSnapshot_cache->entityCount < 0 || s_svSnapshot_cache->entityCount > 0x800u )
  {
    LODWORD(v53) = s_svSnapshot_cache->entityCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 288, ASSERT_TYPE_ASSERT, "( 0 ) <= ( s_svSnapshot_cache->entityCount ) && ( s_svSnapshot_cache->entityCount ) <= ( SV_MAX_SNAPSHOT_ENTITIES_SP )", "s_svSnapshot_cache->entityCount not in [0, SV_MAX_SNAPSHOT_ENTITIES_SP]\n\t%i not in [%i, %i]", v53, 0i64, 2048) )
      __debugbreak();
    v6 = s_svSnapshot_cache;
  }
  for ( i = 0; i < v6->entityCount; v6->entityUseCounts[v9] = *(_DWORD *)(v11 + 1180) )
  {
    v9 = *(unsigned __int16 *)((char *)&v6->entityCount + v3);
    if ( (unsigned int)v9 >= 0x800 )
    {
      LODWORD(v54) = 2048;
      LODWORD(v53) = *(unsigned __int16 *)((char *)&v6->entityCount + v3);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 292, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( ( 2048 ) )", "entnum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v53, v54) )
        __debugbreak();
    }
    SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
    v6 = s_svSnapshot_cache;
    ++i;
    v3 += 2i64;
    v11 = (__int64)&SvGameGlobalsCommon->gentities[v9];
    v12 = &s_svSnapshot_cache->entityStates[v9];
    *(_OWORD *)&v12->number = *(_OWORD *)v11;
    *(_OWORD *)&v12->lerp.pos.trType = *(_OWORD *)(v11 + 16);
    *(_OWORD *)&v12->lerp.pos.trBase.y = *(_OWORD *)(v11 + 32);
    *(_OWORD *)&v12->lerp.pos.trDelta.z = *(_OWORD *)(v11 + 48);
    *(_OWORD *)v12->lerp.apos.trBase.v = *(_OWORD *)(v11 + 64);
    *(_OWORD *)&v12->lerp.apos.trDelta.y = *(_OWORD *)(v11 + 80);
    *(_OWORD *)&v12->lerp.u.vehicle.bodyPitch = *(_OWORD *)(v11 + 96);
    *(LerpEntityStateInfoVolumeGrapple *)((char *)&v12->lerp.u.infoVolumeGrapple + 24) = *(LerpEntityStateInfoVolumeGrapple *)(v11 + 112);
    *(_OWORD *)&v12->staticState.turret.carrierEntNum = *(_OWORD *)(v11 + 128);
    *(_OWORD *)&v12->clientNum = *(_OWORD *)(v11 + 144);
    *(_OWORD *)&v12->events[0].eventType = *(_OWORD *)(v11 + 160);
    *(_OWORD *)&v12->events[2].eventType = *(_OWORD *)(v11 + 176);
    *(_OWORD *)&v12->index.brushModel = *(_OWORD *)(v11 + 192);
    *(_OWORD *)&v12->animInfo.selectAnim = *(_OWORD *)(v11 + 208);
    *(_OWORD *)&v12->partBits.array[2] = *(_OWORD *)(v11 + 224);
    *(_QWORD *)&v12->partBits.array[6] = *(_QWORD *)(v11 + 240);
  }
  if ( v6->fxEntCount > 0x500u )
  {
    LODWORD(v55) = 1280;
    LODWORD(v53) = v6->fxEntCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 299, ASSERT_TYPE_ASSERT, "( 0 ) <= ( s_svSnapshot_cache->fxEntCount ) && ( s_svSnapshot_cache->fxEntCount ) <= ( 1280 )", "s_svSnapshot_cache->fxEntCount not in [0, FX_ENTITY_MAX]\n\t%i not in [%i, %i]", v53, 0i64, v55) )
      __debugbreak();
    v6 = s_svSnapshot_cache;
  }
  v13 = 0;
  if ( v6->fxEntCount > 0 )
  {
    v14 = 520200i64;
    do
    {
      v15 = *(unsigned __int16 *)((char *)&v6->entityCount + v14);
      if ( (unsigned int)v15 >= 0x800 )
      {
        LODWORD(v54) = 2048;
        LODWORD(v53) = *(unsigned __int16 *)((char *)&v6->entityCount + v14);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 303, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( ( 2048 ) )", "entnum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v53, v54) )
          __debugbreak();
      }
      FXEntity = (__m256i *)SV_GetFXEntity(v15);
      v6 = s_svSnapshot_cache;
      v17 = v15;
      ++v13;
      v14 += 2i64;
      v18 = FXEntity[1].m256i_i32[0];
      *(__m256i *)s_svSnapshot_cache->fxEntities[v17].origin.v = *FXEntity;
      *(_DWORD *)&v6->fxEntities[v17].fxId = v18;
    }
    while ( v13 < v6->fxEntCount );
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 307, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL )") )
    __debugbreak();
  v19 = s_svSnapshot_cache;
  if ( s_svSnapshot_cache->soundInfoCount > 0x400u )
  {
    LODWORD(v55) = 1024;
    LODWORD(v53) = s_svSnapshot_cache->soundInfoCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 309, ASSERT_TYPE_ASSERT, "( 0 ) <= ( s_svSnapshot_cache->soundInfoCount ) && ( s_svSnapshot_cache->soundInfoCount ) <= ( 1024 )", "s_svSnapshot_cache->soundInfoCount not in [0, MAX_SERVER_CULLED_SOUNDS]\n\t%i not in [%i, %i]", v53, 0i64, v55) )
      __debugbreak();
    v19 = s_svSnapshot_cache;
  }
  v20 = 0;
  if ( v19->soundInfoCount > 0 )
  {
    v21 = 568844i64;
    do
    {
      v22 = *(unsigned __int16 *)((char *)&v19->entityCount + v21);
      if ( (unsigned int)v22 >= 0x400 )
      {
        LODWORD(v54) = 1024;
        LODWORD(v53) = *(unsigned __int16 *)((char *)&v19->entityCount + v21);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 313, ASSERT_TYPE_ASSERT, "(unsigned)( soundnum ) < (unsigned)( 1024 )", "soundnum doesn't index MAX_SERVER_CULLED_SOUNDS\n\t%i not in [0, %i)", v53, v54) )
          __debugbreak();
      }
      ServerSoundInfo = (__m256i *)SV_ServerCulledSoundsSP_GetServerSoundInfo(v22);
      v19 = s_svSnapshot_cache;
      v24 = v22;
      ++v20;
      v21 += 2i64;
      v25 = ServerSoundInfo[1].m256i_i32[0];
      *(__m256i *)s_svSnapshot_cache->soundInfos[v24].soundOrigin.v = *ServerSoundInfo;
      *(_DWORD *)&v19->soundInfos[v24].loopSound = v25;
    }
    while ( v20 < v19->soundInfoCount );
  }
  if ( v19->weaponCount < 0 )
    goto LABEL_55;
  if ( !BgWeaponMap::ms_runtimeSizeInitialized )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    v19 = s_svSnapshot_cache;
  }
  if ( v19->weaponCount > BgWeaponMap::ms_runtimeSize )
  {
LABEL_55:
    if ( !BgWeaponMap::ms_runtimeSizeInitialized )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
        __debugbreak();
      v19 = s_svSnapshot_cache;
    }
    LODWORD(v55) = BgWeaponMap::ms_runtimeSize;
    LODWORD(v53) = v19->weaponCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 318, ASSERT_TYPE_ASSERT, "( 0 ) <= ( s_svSnapshot_cache->weaponCount ) && ( s_svSnapshot_cache->weaponCount ) <= ( BgWeaponMap::GetRuntimeSize() )", "s_svSnapshot_cache->weaponCount not in [0, BgWeaponMap::GetRuntimeSize()]\n\t%i not in [%i, %i]", v53, 0i64, v55) )
      __debugbreak();
  }
  Instance = GWeaponMap::GetInstance();
  v27 = s_svSnapshot_cache;
  v28 = Instance;
  v29 = 0;
  if ( s_svSnapshot_cache->weaponCount > 0 )
  {
    v30 = 624176i64;
    do
    {
      v31 = *(unsigned __int16 *)((char *)&v27->entityCount + v30);
      if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
        __debugbreak();
      if ( (unsigned int)v31 >= BgWeaponMap::ms_runtimeSize )
      {
        if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
          __debugbreak();
        LODWORD(v54) = BgWeaponMap::ms_runtimeSize;
        LODWORD(v53) = v31;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 323, ASSERT_TYPE_ASSERT, "(unsigned)( weaponNum ) < (unsigned)( BgWeaponMap::GetRuntimeSize() )", "weaponNum doesn't index BgWeaponMap::GetRuntimeSize()\n\t%i not in [0, %i)", v53, v54) )
          __debugbreak();
      }
      WeaponEntry = BgWeaponMap::GetWeaponEntry(v28, v31);
      v27 = s_svSnapshot_cache;
      ++v29;
      v33 = v31;
      v34 = *(_OWORD *)&WeaponEntry->weapon.attachmentVariationIndices[3];
      v35 = *(double *)&WeaponEntry->weapon.attachmentVariationIndices[19];
      v36 = *(_DWORD *)&WeaponEntry->weapon.attachmentVariationIndices[27];
      v30 += 2i64;
      v37 = *(_WORD *)&WeaponEntry->weapon.scopeVariation;
      *(__m256i *)&s_svSnapshot_cache->weaponEntries[v33].index = *(__m256i *)&WeaponEntry->index;
      *(_OWORD *)&v27->weaponEntries[v33].weapon.attachmentVariationIndices[3] = v34;
      *(double *)&v27->weaponEntries[v33].weapon.attachmentVariationIndices[19] = v35;
      *(_DWORD *)&v27->weaponEntries[v33].weapon.attachmentVariationIndices[27] = v36;
      *(_WORD *)&v27->weaponEntries[v33].weapon.scopeVariation = v37;
    }
    while ( v29 < v27->weaponCount );
    v1 = msg;
  }
  PreviousTime = G_MainSP_GetPreviousTime();
  G_Glass_WriteChanges(NULL, v1, PreviousTime);
  if ( !s_svSnapshot_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 91, ASSERT_TYPE_ASSERT, "( s_svSnapshot_cache )", (const char *)&queryFormat, "s_svSnapshot_cache") )
    __debugbreak();
  ReplicatedInstances = ScriptableSv_GetReplicatedInstances();
  ReplicatedInstanceLimit = ScriptableSv_GetReplicatedInstanceLimit();
  PartWorldState = ScriptableSv_GetPartWorldState();
  v42 = s_svSnapshot_cache;
  v43 = (const void **)PartWorldState;
  scriptableActiveRpInstances = s_svSnapshot_cache->scriptableActiveRpInstances;
  s_svSnapshot_cache->scriptableActiveRpInstanceCount = ReplicatedInstanceLimit;
  memcpy_0(scriptableActiveRpInstances, ReplicatedInstances, 32i64 * ReplicatedInstanceLimit);
  v45 = 607760i64 - (_QWORD)v43;
  while ( 1 )
  {
    ReplicatedPartLimitForWorld = ScriptableSv_GetReplicatedPartLimitForWorld(v7);
    memcpy_0(*(void **)((char *)&v42->entityCount + (_QWORD)v43 + v45), *v43, ReplicatedPartLimitForWorld);
    ++v7;
    ++v43;
    if ( v7 >= 2 )
      break;
    v42 = s_svSnapshot_cache;
  }
  v47 = BG_Omnvar_PerGameCount();
  memcpy_0(&s_svSnapshot_cache->gameOmnvars, level.gameOmnvars, 8i64 * v47);
  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_client_sp.h", 90, ASSERT_TYPE_ASSERT, "(Com_GameMode_GetActiveGameMode() == GameModeType::SP)", "%s\n\tThis is intended to replace a singleplayer-only feature", "Com_GameMode_GetActiveGameMode() == GameModeType::SP") )
    __debugbreak();
  if ( (int)SvClient::ms_clientCount > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_client_sp.h", 91, ASSERT_TYPE_ASSERT, "(SvClient::GetClientCount() <= 1)", "%s\n\tShould not use this function when more than one client is possible.", "SvClient::GetClientCount() <= 1") )
    __debugbreak();
  if ( OnlyLocalClientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 334, ASSERT_TYPE_ASSERT, "(localClientNum == SvClientSP::GetSpClientNum())", "%s\n\tLocal client num does not match SvClientSP::GetSpClientNum", "localClientNum == SvClientSP::GetSpClientNum()") )
    __debugbreak();
  if ( (_BYTE)SvClient::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_client_sp.h", 83, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(OnlyLocalClientNum);
  if ( !CommonClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 336, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  memcpy_0(s_svSnapshot_cache->m_hudElems, &CommonClient[31].lastUsercmd.weapon.weaponAttachments[10], sizeof(s_svSnapshot_cache->m_hudElems));
  v49 = SvGameGlobals::GetSvGameGlobalsCommon();
  v50 = s_svSnapshot_cache;
  v51 = (__int64)&v49->gentities[OnlyLocalClientNum];
  v52 = &s_svSnapshot_cache->entityStates[OnlyLocalClientNum];
  *(_OWORD *)&v52->number = *(_OWORD *)v51;
  *(_OWORD *)&v52->lerp.pos.trType = *(_OWORD *)(v51 + 16);
  *(_OWORD *)&v52->lerp.pos.trBase.y = *(_OWORD *)(v51 + 32);
  *(_OWORD *)&v52->lerp.pos.trDelta.z = *(_OWORD *)(v51 + 48);
  *(_OWORD *)v52->lerp.apos.trBase.v = *(_OWORD *)(v51 + 64);
  *(_OWORD *)&v52->lerp.apos.trDelta.y = *(_OWORD *)(v51 + 80);
  *(_OWORD *)&v52->lerp.u.vehicle.bodyPitch = *(_OWORD *)(v51 + 96);
  *(LerpEntityStateInfoVolumeGrapple *)((char *)&v52->lerp.u.infoVolumeGrapple + 24) = *(LerpEntityStateInfoVolumeGrapple *)(v51 + 112);
  *(_OWORD *)&v52->staticState.turret.carrierEntNum = *(_OWORD *)(v51 + 128);
  *(_OWORD *)&v52->clientNum = *(_OWORD *)(v51 + 144);
  *(_OWORD *)&v52->events[0].eventType = *(_OWORD *)(v51 + 160);
  *(_OWORD *)&v52->events[2].eventType = *(_OWORD *)(v51 + 176);
  *(_OWORD *)&v52->index.brushModel = *(_OWORD *)(v51 + 192);
  *(_OWORD *)&v52->animInfo.selectAnim = *(_OWORD *)(v51 + 208);
  *(_OWORD *)&v52->partBits.array[2] = *(_OWORD *)(v51 + 224);
  *(_QWORD *)&v52->partBits.array[6] = *(_QWORD *)(v51 + 240);
  v50->entityUseCounts[OnlyLocalClientNum] = *(_DWORD *)(v51 + 1180);
  *(__m256i *)v50->umbraGateStates.array = *(__m256i *)level.umbraGateStates.array;
  *(_OWORD *)&v50->umbraGateStates.array[8] = *(_OWORD *)&level.umbraGateStates.array[8];
}

