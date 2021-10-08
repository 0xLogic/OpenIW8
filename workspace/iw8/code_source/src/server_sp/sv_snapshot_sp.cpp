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
  ServerSnapshotCache *v10; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  double v15; 
  double v16; 
  double v17; 

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
        _RDI = &SvGameGlobalsCommon->gentities[v1];
        if ( !_RDI )
        {
          LOBYTE(SvGameGlobalsCommon) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 601, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent");
          if ( (_BYTE)SvGameGlobalsCommon )
            __debugbreak();
        }
        if ( _RDI->r.isLinked && (_RDI->r.svFlags & 1) == 0 )
        {
          if ( _RDI->s.number != v1 )
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rdi+138h]
              vmovss  xmm1, dword ptr [rdi+134h]
              vmovss  xmm2, dword ptr [rdi+130h]
              vcvtss2sd xmm0, xmm0, xmm0
              vmovsd  [rsp+88h+var_30], xmm0
              vcvtss2sd xmm1, xmm1, xmm1
              vmovsd  [rsp+88h+var_38], xmm1
              vcvtss2sd xmm2, xmm2, xmm2
              vmovsd  [rsp+88h+var_40], xmm2
            }
            LODWORD(v14) = _RDI->s.eType;
            LODWORD(v13) = v1;
            LODWORD(v12) = _RDI->s.number;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 635, ASSERT_TYPE_ASSERT, "(ent->s.number == e)", "%s\n\tentnum: %d vs %d, eType: %d, origin: %f %f %f", "ent->s.number == e", v12, v13, v14, v15, v16, v17) )
              __debugbreak();
          }
          if ( v1 >= 1 || (LODWORD(SvGameGlobalsCommon) = CL_GetOnlyLocalClientNum(), v1 != (_DWORD)SvGameGlobalsCommon) )
          {
            v10 = s_svSnapshot_cache;
            if ( !s_svSnapshot_cache )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 416, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache)", (const char *)&queryFormat, "s_svSnapshot_cache") )
                __debugbreak();
              v10 = s_svSnapshot_cache;
            }
            if ( v10->entityCount == 2048 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 417, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache->entityCount != SV_MAX_SNAPSHOT_ENTITIES_SP)", (const char *)&queryFormat, "s_svSnapshot_cache->entityCount != SV_MAX_SNAPSHOT_ENTITIES_SP") )
                __debugbreak();
              v10 = s_svSnapshot_cache;
            }
            SvGameGlobalsCommon = (SvGameGlobals *)v10->entityCount;
            v10->entityNums[(_QWORD)SvGameGlobalsCommon] = v1;
            ++v10->entityCount;
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
  int v3; 
  int v4; 
  signed int v5; 
  __int16 linkEnt; 
  int v15; 
  int v16; 
  __int64 v18; 
  int v19; 
  bool v22; 
  __int64 v24; 
  bool v36; 
  ServerSnapshotCache *v37; 
  __int64 v41; 
  __int64 v42; 
  char v43; 

  if ( !s_svSnapshot_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 480, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache)", (const char *)&queryFormat, "s_svSnapshot_cache") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 481, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL )") )
    __debugbreak();
  LOBYTE(ServerSoundInfo) = (_BYTE)s_svSnapshot_cache;
  s_svSnapshot_cache->soundInfoCount = 0;
  if ( SvStaticGlobals::ms_svStaticGlobals.state )
  {
    v3 = SvClient::ms_clientCount;
    v4 = 0;
    if ( (int)SvClient::ms_clientCount > 1 )
    {
      LODWORD(v41) = SvClient::ms_clientCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 494, ASSERT_TYPE_ASSERT, "( SvClient::GetClientCount() ) <= ( 1 )", "SvClient::GetClientCount() <= MAX_CLIENTS_SP\n\t%i, %i", v41, 1) )
        __debugbreak();
      v3 = SvClient::ms_clientCount;
    }
    v5 = 0;
    if ( v3 <= 0 )
      goto LABEL_53;
    _RDI = &v43;
    do
    {
      if ( SvClient::GetCommonClient(v5)->state == CS_ACTIVE )
      {
        _RBX = SV_Game_GetPlayerstateForClientNum(v5);
        if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RBX->otherFlags, ACTIVE, 1u) )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+134h]
            vmovss  xmm1, dword ptr [rbx+130h]
            vmovss  xmm2, dword ptr [rbx+12Ch]
          }
        }
        else if ( (_RBX->linkFlags.m_flags[0] & 4) == 0 || (linkEnt = _RBX->linkEnt, linkEnt == 2047) )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rbx+38h]
            vmovss  xmm1, dword ptr [rbx+34h]
            vmovss  xmm2, dword ptr [rbx+30h]
            vmovss  dword ptr [rdi], xmm0
            vaddss  xmm0, xmm0, dword ptr [rbx+1E8h]
          }
        }
        else
        {
          _RCX = 1456i64 * linkEnt;
          _RAX = g_entities;
          __asm
          {
            vmovss  xmm0, dword ptr [rcx+rax+138h]
            vmovss  xmm1, dword ptr [rcx+rax+134h]
            vmovss  xmm2, dword ptr [rcx+rax+130h]
          }
        }
        __asm
        {
          vmovss  dword ptr [rdi-8], xmm2
          vmovss  dword ptr [rdi-4], xmm1
        }
        ++v4;
        __asm { vmovss  dword ptr [rdi], xmm0 }
        _RDI += 12;
      }
      ++v5;
    }
    while ( v5 < (int)SvClient::ms_clientCount );
    if ( !v4 )
    {
LABEL_53:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 523, ASSERT_TYPE_ASSERT, "(listenerCount)", (const char *)&queryFormat, "listenerCount") )
        __debugbreak();
    }
    LODWORD(ServerSoundInfo) = SV_ServerCulledSoundsSP_GetMaxSoundInfo();
    v15 = 0;
    v16 = (int)ServerSoundInfo;
    if ( (int)ServerSoundInfo > 0 )
    {
      __asm
      {
        vmovaps [rsp+0A8h+var_38], xmm6
        vmovaps [rsp+0A8h+var_48], xmm7
        vmovss  xmm7, cs:__real@7149f2ca
      }
      v18 = v4 % 2;
      do
      {
        ServerSoundInfo = SV_ServerCulledSoundsSP_GetServerSoundInfo(v15);
        v19 = 0;
        _RSI = ServerSoundInfo;
        __asm { vmovaps xmm6, xmm7 }
        v22 = v18 == 0;
        if ( v18 > 0 )
        {
          _RDI = &v43;
          v24 = v18;
          do
          {
            if ( v19 )
            {
              LODWORD(v42) = 1;
              LODWORD(v41) = v19;
              LOBYTE(ServerSoundInfo) = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 539, ASSERT_TYPE_ASSERT, "(unsigned)( listenerIndex ) < (unsigned)( ( sizeof( *array_counter( listenerOrigin ) ) + 0 ) )", "listenerIndex doesn't index ARRAY_COUNT( listenerOrigin )\n\t%i not in [0, %i)", v41, v42);
              if ( (_BYTE)ServerSoundInfo )
                __debugbreak();
            }
            __asm
            {
              vmovss  xmm0, dword ptr [rdi-8]
              vsubss  xmm3, xmm0, dword ptr [rsi]
              vmovss  xmm1, dword ptr [rdi-4]
              vmovss  xmm0, dword ptr [rdi]
              vsubss  xmm2, xmm1, dword ptr [rsi+4]
              vsubss  xmm4, xmm0, dword ptr [rsi+8]
              vmulss  xmm2, xmm2, xmm2
              vmulss  xmm1, xmm3, xmm3
              vmulss  xmm0, xmm4, xmm4
              vaddss  xmm3, xmm2, xmm1
            }
            ++v19;
            _RDI += 12;
            __asm
            {
              vaddss  xmm2, xmm3, xmm0
              vminss  xmm6, xmm2, xmm6
            }
            v36 = v24-- == 0;
            v22 = v36 || v24 == 0;
          }
          while ( v24 );
        }
        __asm { vcomiss xmm6, dword ptr [rsi+1Ch] }
        if ( v22 )
        {
          if ( !s_svSnapshot_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 458, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache)", (const char *)&queryFormat, "s_svSnapshot_cache") )
            __debugbreak();
          if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 459, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL )") )
            __debugbreak();
          if ( s_svSnapshot_cache->soundInfoCount >= 1024 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 460, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache->soundInfoCount < 1024)", (const char *)&queryFormat, "s_svSnapshot_cache->soundInfoCount < MAX_SERVER_CULLED_SOUNDS") )
            __debugbreak();
          if ( v15 >= 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 461, ASSERT_TYPE_ASSERT, "(soundIndex < 0xFFFF)", (const char *)&queryFormat, "soundIndex < 0xFFFF") )
            __debugbreak();
          v37 = s_svSnapshot_cache;
          ServerSoundInfo = (serverSoundInfo_s *)s_svSnapshot_cache->soundInfoCount;
          s_svSnapshot_cache->soundInfoNums[(_QWORD)ServerSoundInfo] = v15;
          ++v37->soundInfoCount;
        }
        ++v15;
      }
      while ( v15 < v16 );
      __asm
      {
        vmovaps xmm7, [rsp+0A8h+var_48]
        vmovaps xmm6, [rsp+0A8h+var_38]
      }
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
  _RBX = result;
  if ( !s_svSnapshot_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 247, ASSERT_TYPE_ASSERT, "(s_svSnapshot_cache)", (const char *)&queryFormat, "s_svSnapshot_cache") )
    __debugbreak();
  _RAX = s_svSnapshot_cache;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+0A7DF0h]
    vmovups xmm1, xmmword ptr [rax+0A7E10h]
    vmovups ymmword ptr [rbx], ymm0
    vmovups xmmword ptr [rbx+20h], xmm1
  }
  return _RBX;
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
  unsigned int v7; 
  int i; 
  __int64 v9; 
  SvGameGlobals *SvGameGlobalsCommon; 
  int v28; 
  __int64 v29; 
  __int64 v30; 
  int v34; 
  int v36; 
  __int64 v37; 
  __int64 v38; 
  int v42; 
  GWeaponMap *Instance; 
  BgWeaponMap *v45; 
  int v46; 
  __int64 v47; 
  __int64 v48; 
  int v54; 
  __int16 v55; 
  int PreviousTime; 
  const ScriptableReplicatedInstance *ReplicatedInstances; 
  unsigned int ReplicatedInstanceLimit; 
  const ScriptablePartWorldState *PartWorldState; 
  ServerSnapshotCache *v60; 
  const void **v61; 
  ScriptableReplicatedInstance *scriptableActiveRpInstances; 
  __int64 v63; 
  unsigned int ReplicatedPartLimitForWorld; 
  unsigned int v65; 
  SvClient *CommonClient; 
  SvGameGlobals *v67; 
  __int64 v88; 
  __int64 v89; 
  __int64 v90; 

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
  _R9 = s_svSnapshot_cache;
  v7 = 0;
  if ( s_svSnapshot_cache->entityCount < 0 || s_svSnapshot_cache->entityCount > 0x800u )
  {
    LODWORD(v88) = s_svSnapshot_cache->entityCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 288, ASSERT_TYPE_ASSERT, "( 0 ) <= ( s_svSnapshot_cache->entityCount ) && ( s_svSnapshot_cache->entityCount ) <= ( SV_MAX_SNAPSHOT_ENTITIES_SP )", "s_svSnapshot_cache->entityCount not in [0, SV_MAX_SNAPSHOT_ENTITIES_SP]\n\t%i not in [%i, %i]", v88, 0i64, 2048) )
      __debugbreak();
    _R9 = s_svSnapshot_cache;
  }
  for ( i = 0; i < _R9->entityCount; _R9->entityUseCounts[v9] = *(_DWORD *)(_RDX + 1180) )
  {
    v9 = *(unsigned __int16 *)((char *)&_R9->entityCount + v3);
    if ( (unsigned int)v9 >= 0x800 )
    {
      LODWORD(v89) = 2048;
      LODWORD(v88) = *(unsigned __int16 *)((char *)&_R9->entityCount + v3);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 292, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( ( 2048 ) )", "entnum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v88, v89) )
        __debugbreak();
    }
    SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
    _R9 = s_svSnapshot_cache;
    ++i;
    v3 += 2i64;
    _RDX = (__int64)&SvGameGlobalsCommon->gentities[v9];
    __asm { vmovups xmm0, xmmword ptr [rdx] }
    _RCX = &s_svSnapshot_cache->entityStates[v9];
    __asm
    {
      vmovups xmmword ptr [rcx], xmm0
      vmovups xmm1, xmmword ptr [rdx+10h]
      vmovups xmmword ptr [rcx+10h], xmm1
      vmovups xmm0, xmmword ptr [rdx+20h]
      vmovups xmmword ptr [rcx+20h], xmm0
      vmovups xmm1, xmmword ptr [rdx+30h]
      vmovups xmmword ptr [rcx+30h], xmm1
      vmovups xmm0, xmmword ptr [rdx+40h]
      vmovups xmmword ptr [rcx+40h], xmm0
      vmovups xmm1, xmmword ptr [rdx+50h]
      vmovups xmmword ptr [rcx+50h], xmm1
      vmovups xmm0, xmmword ptr [rdx+60h]
      vmovups xmmword ptr [rcx+60h], xmm0
      vmovups xmm1, xmmword ptr [rdx+70h]
      vmovups xmmword ptr [rcx+70h], xmm1
      vmovups xmm0, xmmword ptr [rdx+80h]
      vmovups xmmword ptr [rcx+80h], xmm0
      vmovups xmm1, xmmword ptr [rdx+90h]
      vmovups xmmword ptr [rcx+90h], xmm1
      vmovups xmm0, xmmword ptr [rdx+0A0h]
      vmovups xmmword ptr [rcx+0A0h], xmm0
      vmovups xmm1, xmmword ptr [rdx+0B0h]
      vmovups xmmword ptr [rcx+0B0h], xmm1
      vmovups xmm0, xmmword ptr [rdx+0C0h]
      vmovups xmmword ptr [rcx+0C0h], xmm0
      vmovups xmm1, xmmword ptr [rdx+0D0h]
      vmovups xmmword ptr [rcx+0D0h], xmm1
      vmovups xmm0, xmmword ptr [rdx+0E0h]
      vmovups xmmword ptr [rcx+0E0h], xmm0
    }
    *(_QWORD *)&_RCX->partBits.array[6] = *(_QWORD *)(_RDX + 240);
  }
  if ( _R9->fxEntCount > 0x500u )
  {
    LODWORD(v90) = 1280;
    LODWORD(v88) = _R9->fxEntCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 299, ASSERT_TYPE_ASSERT, "( 0 ) <= ( s_svSnapshot_cache->fxEntCount ) && ( s_svSnapshot_cache->fxEntCount ) <= ( 1280 )", "s_svSnapshot_cache->fxEntCount not in [0, FX_ENTITY_MAX]\n\t%i not in [%i, %i]", v88, 0i64, v90) )
      __debugbreak();
    _R9 = s_svSnapshot_cache;
  }
  v28 = 0;
  if ( _R9->fxEntCount > 0 )
  {
    v29 = 520200i64;
    do
    {
      v30 = *(unsigned __int16 *)((char *)&_R9->entityCount + v29);
      if ( (unsigned int)v30 >= 0x800 )
      {
        LODWORD(v89) = 2048;
        LODWORD(v88) = *(unsigned __int16 *)((char *)&_R9->entityCount + v29);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 303, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( ( 2048 ) )", "entnum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v88, v89) )
          __debugbreak();
      }
      _RAX = SV_GetFXEntity(v30);
      _R9 = s_svSnapshot_cache;
      _RCX = v30;
      ++v28;
      v29 += 2i64;
      __asm { vmovups ymm0, ymmword ptr [rax] }
      v34 = *(_DWORD *)&_RAX->fxId;
      __asm { vmovups ymmword ptr [r9+rcx*4+7FA08h], ymm0 }
      *(_DWORD *)&_R9->fxEntities[_RCX].fxId = v34;
    }
    while ( v28 < _R9->fxEntCount );
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 307, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SOUND_SERVER_CULL )") )
    __debugbreak();
  _R8 = s_svSnapshot_cache;
  if ( s_svSnapshot_cache->soundInfoCount > 0x400u )
  {
    LODWORD(v90) = 1024;
    LODWORD(v88) = s_svSnapshot_cache->soundInfoCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 309, ASSERT_TYPE_ASSERT, "( 0 ) <= ( s_svSnapshot_cache->soundInfoCount ) && ( s_svSnapshot_cache->soundInfoCount ) <= ( 1024 )", "s_svSnapshot_cache->soundInfoCount not in [0, MAX_SERVER_CULLED_SOUNDS]\n\t%i not in [%i, %i]", v88, 0i64, v90) )
      __debugbreak();
    _R8 = s_svSnapshot_cache;
  }
  v36 = 0;
  if ( _R8->soundInfoCount > 0 )
  {
    v37 = 568844i64;
    do
    {
      v38 = *(unsigned __int16 *)((char *)&_R8->entityCount + v37);
      if ( (unsigned int)v38 >= 0x400 )
      {
        LODWORD(v89) = 1024;
        LODWORD(v88) = *(unsigned __int16 *)((char *)&_R8->entityCount + v37);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 313, ASSERT_TYPE_ASSERT, "(unsigned)( soundnum ) < (unsigned)( 1024 )", "soundnum doesn't index MAX_SERVER_CULLED_SOUNDS\n\t%i not in [0, %i)", v88, v89) )
          __debugbreak();
      }
      _RAX = SV_ServerCulledSoundsSP_GetServerSoundInfo(v38);
      _R8 = s_svSnapshot_cache;
      _RCX = v38;
      ++v36;
      v37 += 2i64;
      __asm { vmovups ymm0, ymmword ptr [rax] }
      v42 = *(_DWORD *)&_RAX->loopSound;
      __asm { vmovups ymmword ptr [r8+rcx*4+8B60Ch], ymm0 }
      *(_DWORD *)&_R8->soundInfos[_RCX].loopSound = v42;
    }
    while ( v36 < _R8->soundInfoCount );
  }
  if ( _R8->weaponCount < 0 )
    goto LABEL_55;
  if ( !BgWeaponMap::ms_runtimeSizeInitialized )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    _R8 = s_svSnapshot_cache;
  }
  if ( _R8->weaponCount > BgWeaponMap::ms_runtimeSize )
  {
LABEL_55:
    if ( !BgWeaponMap::ms_runtimeSizeInitialized )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
        __debugbreak();
      _R8 = s_svSnapshot_cache;
    }
    LODWORD(v90) = BgWeaponMap::ms_runtimeSize;
    LODWORD(v88) = _R8->weaponCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 318, ASSERT_TYPE_ASSERT, "( 0 ) <= ( s_svSnapshot_cache->weaponCount ) && ( s_svSnapshot_cache->weaponCount ) <= ( BgWeaponMap::GetRuntimeSize() )", "s_svSnapshot_cache->weaponCount not in [0, BgWeaponMap::GetRuntimeSize()]\n\t%i not in [%i, %i]", v88, 0i64, v90) )
      __debugbreak();
  }
  Instance = GWeaponMap::GetInstance();
  _R9 = s_svSnapshot_cache;
  v45 = Instance;
  v46 = 0;
  if ( s_svSnapshot_cache->weaponCount > 0 )
  {
    v47 = 624176i64;
    do
    {
      v48 = *(unsigned __int16 *)((char *)&_R9->entityCount + v47);
      if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
        __debugbreak();
      if ( (unsigned int)v48 >= BgWeaponMap::ms_runtimeSize )
      {
        if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
          __debugbreak();
        LODWORD(v89) = BgWeaponMap::ms_runtimeSize;
        LODWORD(v88) = v48;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 323, ASSERT_TYPE_ASSERT, "(unsigned)( weaponNum ) < (unsigned)( BgWeaponMap::GetRuntimeSize() )", "weaponNum doesn't index BgWeaponMap::GetRuntimeSize()\n\t%i not in [0, %i)", v88, v89) )
          __debugbreak();
      }
      _RAX = BgWeaponMap::GetWeaponEntry(v45, v48);
      _R9 = s_svSnapshot_cache;
      ++v46;
      _RCX = v48;
      __asm
      {
        vmovups ymm1, ymmword ptr [rax]
        vmovups xmm2, xmmword ptr [rax+20h]
        vmovsd  xmm0, qword ptr [rax+30h]
      }
      v54 = *(_DWORD *)&_RAX->weapon.attachmentVariationIndices[27];
      v47 += 2i64;
      v55 = *(_WORD *)&_RAX->weapon.scopeVariation;
      __asm
      {
        vmovups ymmword ptr [rcx+r9+9882Eh], ymm1
        vmovups xmmword ptr [rcx+r9+9884Eh], xmm2
        vmovsd  qword ptr [rcx+r9+9885Eh], xmm0
      }
      *(_DWORD *)&_R9->weaponEntries[_RCX].weapon.attachmentVariationIndices[27] = v54;
      *(_WORD *)&_R9->weaponEntries[_RCX].weapon.scopeVariation = v55;
    }
    while ( v46 < _R9->weaponCount );
    v1 = msg;
  }
  PreviousTime = G_MainSP_GetPreviousTime();
  G_Glass_WriteChanges(NULL, v1, PreviousTime);
  if ( !s_svSnapshot_cache && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_sp\\sv_snapshot_sp.cpp", 91, ASSERT_TYPE_ASSERT, "( s_svSnapshot_cache )", (const char *)&queryFormat, "s_svSnapshot_cache") )
    __debugbreak();
  ReplicatedInstances = ScriptableSv_GetReplicatedInstances();
  ReplicatedInstanceLimit = ScriptableSv_GetReplicatedInstanceLimit();
  PartWorldState = ScriptableSv_GetPartWorldState();
  v60 = s_svSnapshot_cache;
  v61 = (const void **)PartWorldState;
  scriptableActiveRpInstances = s_svSnapshot_cache->scriptableActiveRpInstances;
  s_svSnapshot_cache->scriptableActiveRpInstanceCount = ReplicatedInstanceLimit;
  memcpy_0(scriptableActiveRpInstances, ReplicatedInstances, 32i64 * ReplicatedInstanceLimit);
  v63 = 607760i64 - (_QWORD)v61;
  while ( 1 )
  {
    ReplicatedPartLimitForWorld = ScriptableSv_GetReplicatedPartLimitForWorld(v7);
    memcpy_0(*(void **)((char *)&v60->entityCount + (_QWORD)v61 + v63), *v61, ReplicatedPartLimitForWorld);
    ++v7;
    ++v61;
    if ( v7 >= 2 )
      break;
    v60 = s_svSnapshot_cache;
  }
  v65 = BG_Omnvar_PerGameCount();
  memcpy_0(&s_svSnapshot_cache->gameOmnvars, level.gameOmnvars, 8i64 * v65);
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
  v67 = SvGameGlobals::GetSvGameGlobalsCommon();
  _R9 = s_svSnapshot_cache;
  _RDX = (__int64)&v67->gentities[OnlyLocalClientNum];
  __asm { vmovups xmm0, xmmword ptr [rdx] }
  _RCX = &s_svSnapshot_cache->entityStates[OnlyLocalClientNum];
  __asm
  {
    vmovups xmmword ptr [rcx], xmm0
    vmovups xmm1, xmmword ptr [rdx+10h]
    vmovups xmmword ptr [rcx+10h], xmm1
    vmovups xmm0, xmmword ptr [rdx+20h]
    vmovups xmmword ptr [rcx+20h], xmm0
    vmovups xmm1, xmmword ptr [rdx+30h]
    vmovups xmmword ptr [rcx+30h], xmm1
    vmovups xmm0, xmmword ptr [rdx+40h]
    vmovups xmmword ptr [rcx+40h], xmm0
    vmovups xmm1, xmmword ptr [rdx+50h]
    vmovups xmmword ptr [rcx+50h], xmm1
    vmovups xmm0, xmmword ptr [rdx+60h]
    vmovups xmmword ptr [rcx+60h], xmm0
    vmovups xmm1, xmmword ptr [rdx+70h]
    vmovups xmmword ptr [rcx+70h], xmm1
    vmovups xmm0, xmmword ptr [rdx+80h]
    vmovups xmmword ptr [rcx+80h], xmm0
    vmovups xmm1, xmmword ptr [rdx+90h]
    vmovups xmmword ptr [rcx+90h], xmm1
    vmovups xmm0, xmmword ptr [rdx+0A0h]
    vmovups xmmword ptr [rcx+0A0h], xmm0
    vmovups xmm1, xmmword ptr [rdx+0B0h]
    vmovups xmmword ptr [rcx+0B0h], xmm1
    vmovups xmm0, xmmword ptr [rdx+0C0h]
    vmovups xmmword ptr [rcx+0C0h], xmm0
    vmovups xmm1, xmmword ptr [rdx+0D0h]
    vmovups xmmword ptr [rcx+0D0h], xmm1
    vmovups xmm0, xmmword ptr [rdx+0E0h]
    vmovups xmmword ptr [rcx+0E0h], xmm0
  }
  *(_QWORD *)&_RCX->partBits.array[6] = *(_QWORD *)(_RDX + 240);
  _R9->entityUseCounts[OnlyLocalClientNum] = *(_DWORD *)(_RDX + 1180);
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?level@@3Ulevel_locals_t@@A.umbraGateStates.array; level_locals_t level
    vmovups ymmword ptr [r9+0A7DF0h], ymm0
    vmovups xmm1, xmmword ptr cs:?level@@3Ulevel_locals_t@@A.umbraGateStates.array+20h; level_locals_t level
    vmovups xmmword ptr [r9+0A7E10h], xmm1
  }
}

