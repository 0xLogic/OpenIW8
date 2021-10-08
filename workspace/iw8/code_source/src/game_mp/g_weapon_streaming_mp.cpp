/*
==============
G_WeaponStreaming_ClearNextEquippedViewWeapons
==============
*/

void __fastcall G_WeaponStreaming_ClearNextEquippedViewWeapons(const unsigned int clientNum)
{
  ?G_WeaponStreaming_ClearNextEquippedViewWeapons@@YAXI@Z(clientNum);
}

/*
==============
G_WeaponStreaming_Shutdown
==============
*/

void G_WeaponStreaming_Shutdown(void)
{
  ?G_WeaponStreaming_Shutdown@@YAXXZ();
}

/*
==============
G_WeaponStreaming_ClearClassSelectWorldWeapons
==============
*/

void __fastcall G_WeaponStreaming_ClearClassSelectWorldWeapons(const unsigned int clientNum)
{
  ?G_WeaponStreaming_ClearClassSelectWorldWeapons@@YAXI@Z(clientNum);
}

/*
==============
G_WeaponStreaming_SetNextEquippedWorldWeapons
==============
*/

unsigned int __fastcall G_WeaponStreaming_SetNextEquippedWorldWeapons(const unsigned int clientNum, const Weapon *const weapons, const unsigned int weaponCount)
{
  return ?G_WeaponStreaming_SetNextEquippedWorldWeapons@@YAIIQEBUWeapon@@I@Z(clientNum, weapons, weaponCount);
}

/*
==============
G_WeaponStreaming_SetClassSelectWorldWeapons
==============
*/

unsigned int __fastcall G_WeaponStreaming_SetClassSelectWorldWeapons(const unsigned int clientNum, const Weapon *const weapons, const unsigned int weaponCount)
{
  return ?G_WeaponStreaming_SetClassSelectWorldWeapons@@YAIIQEBUWeapon@@I@Z(clientNum, weapons, weaponCount);
}

/*
==============
G_WeaponStreaming_LoadWeapons
==============
*/

void G_WeaponStreaming_LoadWeapons(void)
{
  ?G_WeaponStreaming_LoadWeapons@@YAXXZ();
}

/*
==============
G_WeaponStreaming_PrintWeaponRequests
==============
*/

void __fastcall G_WeaponStreaming_PrintWeaponRequests(const char *const requestName, const Weapon *const weapons, const unsigned int numWeapons)
{
  ?G_WeaponStreaming_PrintWeaponRequests@@YAXQEBDQEBUWeapon@@I@Z(requestName, weapons, numWeapons);
}

/*
==============
G_WeaponStreaming_SetPickupViewWeapons
==============
*/

unsigned int __fastcall G_WeaponStreaming_SetPickupViewWeapons(const unsigned int clientNum, const Weapon *const weapons, const unsigned int weaponCount)
{
  return ?G_WeaponStreaming_SetPickupViewWeapons@@YAIIQEBUWeapon@@I@Z(clientNum, weapons, weaponCount);
}

/*
==============
G_WeaponStreaming_PrintViewWeaponRequests
==============
*/

void __fastcall G_WeaponStreaming_PrintViewWeaponRequests(const unsigned int clientIndex)
{
  ?G_WeaponStreaming_PrintViewWeaponRequests@@YAXI@Z(clientIndex);
}

/*
==============
G_WeaponStreaming_SetNextSpectateViewWeapons
==============
*/

unsigned int __fastcall G_WeaponStreaming_SetNextSpectateViewWeapons(const unsigned int clientNum, const Weapon *const weapons, const unsigned int weaponCount)
{
  return ?G_WeaponStreaming_SetNextSpectateViewWeapons@@YAIIQEBUWeapon@@I@Z(clientNum, weapons, weaponCount);
}

/*
==============
G_WeaponStreaming_ClearGameRequests
==============
*/

void G_WeaponStreaming_ClearGameRequests(void)
{
  ?G_WeaponStreaming_ClearGameRequests@@YAXXZ();
}

/*
==============
G_WeaponStreaming_HasViewWeaponsLoaded
==============
*/

bool __fastcall G_WeaponStreaming_HasViewWeaponsLoaded(const unsigned int clientNum, const Weapon *const weapons, const unsigned int weaponCount)
{
  return ?G_WeaponStreaming_HasViewWeaponsLoaded@@YA_NIQEBUWeapon@@I@Z(clientNum, weapons, weaponCount);
}

/*
==============
G_WeaponStreaming_WriteMigrationState
==============
*/

void __fastcall G_WeaponStreaming_WriteMigrationState(MemoryFile *const memFile)
{
  ?G_WeaponStreaming_WriteMigrationState@@YAXQEAUMemoryFile@@@Z(memFile);
}

/*
==============
G_WeaponStreaming_ClearClientRequests
==============
*/

void __fastcall G_WeaponStreaming_ClearClientRequests(const unsigned int clientNum)
{
  ?G_WeaponStreaming_ClearClientRequests@@YAXI@Z(clientNum);
}

/*
==============
G_WeaponStreaming_ClearClassSelectViewWeapons
==============
*/

void __fastcall G_WeaponStreaming_ClearClassSelectViewWeapons(const unsigned int clientNum)
{
  ?G_WeaponStreaming_ClearClassSelectViewWeapons@@YAXI@Z(clientNum);
}

/*
==============
G_WeaponStreaming_SetClassSelectViewWeapons
==============
*/

unsigned int __fastcall G_WeaponStreaming_SetClassSelectViewWeapons(const unsigned int clientNum, const Weapon *const weapons, const unsigned int weaponCount)
{
  return ?G_WeaponStreaming_SetClassSelectViewWeapons@@YAIIQEBUWeapon@@I@Z(clientNum, weapons, weaponCount);
}

/*
==============
G_WeaponStreaming_ClearNextSpectateViewWeapons
==============
*/

void __fastcall G_WeaponStreaming_ClearNextSpectateViewWeapons(const unsigned int clientNum)
{
  ?G_WeaponStreaming_ClearNextSpectateViewWeapons@@YAXI@Z(clientNum);
}

/*
==============
G_WeaponStreaming_PrintGameWeaponRequestsForClient
==============
*/

void __fastcall G_WeaponStreaming_PrintGameWeaponRequestsForClient(const unsigned int clientIndex)
{
  ?G_WeaponStreaming_PrintGameWeaponRequestsForClient@@YAXI@Z(clientIndex);
}

/*
==============
G_WeaponStreaming_HasWorldWeaponsLoadedForPlayer
==============
*/

bool __fastcall G_WeaponStreaming_HasWorldWeaponsLoadedForPlayer(const unsigned int clientNum, const playerState_s *const ps)
{
  return ?G_WeaponStreaming_HasWorldWeaponsLoadedForPlayer@@YA_NIQEBUplayerState_s@@@Z(clientNum, ps);
}

/*
==============
G_WeaponStreaming_ClearNextEquippedWorldWeapons
==============
*/

void __fastcall G_WeaponStreaming_ClearNextEquippedWorldWeapons(const unsigned int clientNum)
{
  ?G_WeaponStreaming_ClearNextEquippedWorldWeapons@@YAXI@Z(clientNum);
}

/*
==============
G_WeaponStreaming_HasWorldWeaponsLoaded
==============
*/

bool __fastcall G_WeaponStreaming_HasWorldWeaponsLoaded(const unsigned int clientNum, const Weapon *const weapons, const unsigned int weaponCount)
{
  return ?G_WeaponStreaming_HasWorldWeaponsLoaded@@YA_NIQEBUWeapon@@I@Z(clientNum, weapons, weaponCount);
}

/*
==============
G_WeaponStreaming_HasViewWeaponsLoadedForPlayer
==============
*/

bool __fastcall G_WeaponStreaming_HasViewWeaponsLoadedForPlayer(const unsigned int clientNum, const playerState_s *const ps)
{
  return ?G_WeaponStreaming_HasViewWeaponsLoadedForPlayer@@YA_NIQEBUplayerState_s@@@Z(clientNum, ps);
}

/*
==============
G_WeaponStreaming_ReadMigrationState
==============
*/

void __fastcall G_WeaponStreaming_ReadMigrationState(MemoryFile *const memFile)
{
  ?G_WeaponStreaming_ReadMigrationState@@YAXQEAUMemoryFile@@@Z(memFile);
}

/*
==============
G_WeaponStreaming_HasNextSpectateViewWeaponsLoaded
==============
*/

bool __fastcall G_WeaponStreaming_HasNextSpectateViewWeaponsLoaded(const unsigned int clientNum, const characterInfo_t *const ci)
{
  return ?G_WeaponStreaming_HasNextSpectateViewWeaponsLoaded@@YA_NIQEBUcharacterInfo_t@@@Z(clientNum, ci);
}

/*
==============
G_WeaponStreaming_SetNextEquippedViewWeapons
==============
*/

unsigned int __fastcall G_WeaponStreaming_SetNextEquippedViewWeapons(const unsigned int clientNum, const Weapon *const weapons, const unsigned int weaponCount)
{
  return ?G_WeaponStreaming_SetNextEquippedViewWeapons@@YAIIQEBUWeapon@@I@Z(clientNum, weapons, weaponCount);
}

/*
==============
G_WeaponStreaming_SetGameWorldWeapons
==============
*/

void __fastcall G_WeaponStreaming_SetGameWorldWeapons(const Weapon *const weapons, const unsigned int weaponCount)
{
  ?G_WeaponStreaming_SetGameWorldWeapons@@YAXQEBUWeapon@@I@Z(weapons, weaponCount);
}

/*
==============
G_WeaponStreaming_AddViewWeaponsFromList
==============
*/
__int64 G_WeaponStreaming_AddViewWeaponsFromList(const unsigned int clientNum, const Weapon *const weapons, const unsigned int weaponCount, const AssetStreamingRequestSource source)
{
  __int64 v4; 
  __int64 v6; 
  __int64 v8; 
  bool v9; 
  unsigned int MaxViewRequestCount; 
  int v11; 
  __int64 v13; 
  __int64 v14; 

  v4 = weaponCount;
  v6 = clientNum;
  if ( clientNum >= level.maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 231, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, level.maxclients) )
    __debugbreak();
  if ( !weapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 232, ASSERT_TYPE_ASSERT, "( weapons )", (const char *)&queryFormat, "weapons") )
    __debugbreak();
  G_WeaponStreaming_RemoveViewWeaponsFromSource(v6, source);
  if ( (_DWORD)v4 )
  {
    v8 = v4;
    do
    {
      if ( (unsigned int)v6 >= level.maxclients )
      {
        LODWORD(v14) = level.maxclients;
        LODWORD(v13) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 110, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( source == ASSET_STREAMING_REQUEST_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 111, ASSERT_TYPE_ASSERT, "( source != ASSET_STREAMING_REQUEST_NONE )", (const char *)&queryFormat, "source != ASSET_STREAMING_REQUEST_NONE") )
        __debugbreak();
      if ( BG_WeaponHasStreamedModels(weapons) )
      {
        MaxViewRequestCount = G_WeaponStreaming_GetMaxViewRequestCount(v6);
        v9 = BG_AssetStreaming_AddWeaponAssetRequest(&s_viewWeaponRequestList + 24 * v6, MaxViewRequestCount, weapons, source, level.framenum);
      }
      else
      {
        v9 = 1;
      }
      v11 = v4 - 1;
      if ( v9 )
        v11 = v4;
      ++weapons;
      LODWORD(v4) = v11;
      --v8;
    }
    while ( v8 );
  }
  return (unsigned int)v4;
}

/*
==============
G_WeaponStreaming_CheckClientRequests
==============
*/
void G_WeaponStreaming_CheckClientRequests(const AssetStreamingRequestItem **clientRequests, const unsigned int clientRequestCount, const Weapon *const weapons, const unsigned int *const weaponSources, const unsigned int weaponCount)
{
  __int64 v5; 
  const AssetStreamingRequestItem **v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  int v12; 
  const dvar_t *v13; 
  unsigned int v14; 
  unsigned int MaxWorldEntryCount; 
  int v16; 
  unsigned int v17; 
  unsigned int v18; 
  __int64 v19; 
  __int64 i; 
  unsigned int v21; 
  SvClient *CommonClient; 
  unsigned int v23; 
  Weapon *p_weapon; 
  int v25; 
  bool HasStreamedModels; 
  bool HasWorldWeaponsLoaded; 
  const char *v28; 
  const char *v29; 
  __int64 v30; 
  const AssetStreamingRequestItem **v31; 
  const AssetStreamingRequestItem *v32; 
  AssetStreamingRequestSource RequestSource; 
  char *fmt; 
  __int64 v35; 
  __int64 v36; 
  unsigned int inOutWeaponCount; 
  int v38; 
  unsigned int weaponSourcesa[64]; 
  Weapon weaponsa[64]; 
  __int64 v41[6000]; 
  char output[512]; 

  v5 = clientRequestCount;
  v8 = clientRequests;
  if ( !clientRequests && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 1231, ASSERT_TYPE_ASSERT, "( clientRequests )", (const char *)&queryFormat, "clientRequests") )
    __debugbreak();
  if ( !weapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 1232, ASSERT_TYPE_ASSERT, "( weapons )", (const char *)&queryFormat, "weapons") )
    __debugbreak();
  if ( !weaponSources && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 1233, ASSERT_TYPE_ASSERT, "( weaponSources )", (const char *)&queryFormat, "weaponSources") )
    __debugbreak();
  v9 = 0i64;
  if ( (_DWORD)v5 )
  {
    v10 = v5;
    do
    {
      v11 = (__int64)*v8;
      if ( (*v8)->sourceMask >= 8 )
      {
        if ( !weapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1164, ASSERT_TYPE_ASSERT, "(checkWeapons)", (const char *)&queryFormat, "checkWeapons") )
          __debugbreak();
        v12 = 0;
        if ( weaponCount )
        {
          while ( memcmp_0(&weapons[v12], (const void *)(v11 + 12), 0x3Cui64) )
          {
            if ( ++v12 >= weaponCount )
              goto LABEL_19;
          }
        }
        else
        {
LABEL_19:
          v41[v9] = v11;
          v9 = (unsigned int)(v9 + 1);
        }
      }
      ++v8;
      --v10;
    }
    while ( v10 );
    v38 = v9;
    if ( (_DWORD)v9 )
    {
      v13 = DCONST_DVARBOOL_g_weaponstreaming_verbose;
      if ( !DCONST_DVARBOOL_g_weaponstreaming_verbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_weaponstreaming_verbose") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      if ( v13->current.enabled )
      {
        Com_Printf(16, "***** Weapon load request failure -- Too many requests to satisfy immediate needs of the game ***** \n");
        v14 = SvClient::ms_clientCount;
        MaxWorldEntryCount = Com_StreamSync_GetMaxWorldEntryCount(STREAM_SYNC_WORLD_TYPE_WEAPON, SvClient::ms_clientCount);
        v16 = 20;
        v17 = MaxWorldEntryCount;
        if ( v14 <= 0x14 )
          v16 = v14;
        v18 = 2 * v16 + 24;
        if ( MaxWorldEntryCount > v18 )
        {
          LODWORD(v36) = v18;
          LODWORD(v35) = MaxWorldEntryCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 1054, ASSERT_TYPE_ASSERT, "( maxWorldWeaponCount ) <= ( ( ((2) * (maxClientCount <= (20) ? maxClientCount : (20)) + 16 + (8)) ) )", "maxWorldWeaponCount not in [0, MAX_WORLD_WEAPONS_STREAMED_DYNAMIC( maxClientCount )]\n\t%u not in [0, %u]", v35, v36) )
            __debugbreak();
        }
        if ( v17 > 0x40 )
        {
          LODWORD(v36) = 64;
          LODWORD(v35) = v17;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 1055, ASSERT_TYPE_ASSERT, "( maxWorldWeaponCount ) <= ( ( sizeof( *array_counter( weapons ) ) + 0 ) )", "maxWorldWeaponCount not in [0, ARRAY_COUNT( weapons )]\n\t%u not in [0, %u]", v35, v36) )
            __debugbreak();
        }
        inOutWeaponCount = 0;
        inOutWeaponCount = G_WeaponStreaming_CollectWorldRequestWeapons(weaponsa, weaponSourcesa, &inOutWeaponCount, v17);
        v19 = G_WeaponStreaming_CollectGameRequestWeapons(weaponsa, weaponSourcesa, &inOutWeaponCount, v17);
        Com_Printf(16, "Game world weapon request list (size:%d)\n", v19);
        for ( i = 0i64; (unsigned int)i < (unsigned int)v19; i = (unsigned int)(i + 1) )
        {
          if ( !BG_WeaponHasStreamedModels(&weaponsa[(unsigned int)i]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 1067, ASSERT_TYPE_ASSERT, "( BG_WeaponHasStreamedModels( weapon ) )", (const char *)&queryFormat, "BG_WeaponHasStreamedModels( weapon )") )
            __debugbreak();
          BG_GetWeaponName(&weaponsa[(unsigned int)i], output, 0x200u);
          Com_Printf(16, "%s (priority:%d)\n", output, weaponSourcesa[i]);
        }
        Com_Printf(16, "\n");
        v21 = 0;
        if ( level.maxclients )
        {
          do
          {
            if ( v21 >= 0x800 )
            {
              LODWORD(v36) = 2048;
              LODWORD(v35) = v21;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v35, v36) )
                __debugbreak();
            }
            if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
              __debugbreak();
            if ( g_entities[v21].r.isInUse != g_entityIsInUse[v21] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
              __debugbreak();
            if ( g_entityIsInUse[v21] )
            {
              if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
                __debugbreak();
              CommonClient = SvClient::GetCommonClient(v21);
              Com_Printf(15, "***** Begin Client '%s' World Weapon Request List *****\n", &CommonClient[4].lastUsercmd.selectedLoc[1]);
              v23 = 0;
              p_weapon = &s_worldWeaponRequestList[v21].requestItems[0].weapon;
              do
              {
                v25 = *(_DWORD *)&p_weapon[-1].attachmentVariationIndices[21];
                if ( v25 )
                {
                  if ( v25 != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 1138, ASSERT_TYPE_ASSERT, "( BG_AssetStreaming_IsWeaponAssetRequest( *requestItem ) )", (const char *)&queryFormat, "BG_AssetStreaming_IsWeaponAssetRequest( *requestItem )") )
                    __debugbreak();
                  BG_GetWeaponName(p_weapon, output, 0x200u);
                  HasStreamedModels = BG_WeaponHasStreamedModels(p_weapon);
                  HasWorldWeaponsLoaded = G_WeaponStreaming_HasWorldWeaponsLoaded(v21, p_weapon, 1u);
                  v28 = "False";
                  v29 = "False";
                  if ( HasStreamedModels )
                    v28 = "True";
                  if ( HasWorldWeaponsLoaded )
                    v29 = "True";
                  LODWORD(fmt) = *(_DWORD *)&p_weapon[-1].weaponCamo;
                  Com_Printf(15, "Weapon World Request [%d] - SourceMask:0x%1x Frame:%d Loaded:%s Streamed:%s Weapon:%s\n", v23, *(unsigned int *)&p_weapon[-1].attachmentVariationIndices[25], fmt, v29, v28, output);
                }
                ++v23;
                p_weapon = (Weapon *)((char *)p_weapon + 72);
              }
              while ( v23 < 0x1E );
              Com_Printf(15, "***** End World Weapon Request List *****\n");
            }
            ++v21;
          }
          while ( v21 < level.maxclients );
          LODWORD(v9) = v38;
        }
        Com_Printf(16, "Could not satisfy the following immedate requests (count:%d)\n", (unsigned int)v9);
        if ( (_DWORD)v9 )
        {
          v30 = (unsigned int)v9;
          v31 = (const AssetStreamingRequestItem **)v41;
          do
          {
            v32 = *v31;
            if ( !*v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 1278, ASSERT_TYPE_ASSERT, "( requestItem )", (const char *)&queryFormat, "requestItem") )
              __debugbreak();
            if ( v32->assetIndex != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 1280, ASSERT_TYPE_ASSERT, "( BG_AssetStreaming_IsWeaponAssetRequest( *requestItem ) )", (const char *)&queryFormat, "BG_AssetStreaming_IsWeaponAssetRequest( *requestItem )") )
              __debugbreak();
            if ( !BG_WeaponHasStreamedModels(&v32->weapon) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 1283, ASSERT_TYPE_ASSERT, "( BG_WeaponHasStreamedModels( weapon ) )", (const char *)&queryFormat, "BG_WeaponHasStreamedModels( weapon )") )
              __debugbreak();
            BG_GetWeaponName(&v32->weapon, output, 0x200u);
            RequestSource = BG_AssetStreaming_GetRequestSource(v32);
            Com_Printf(16, "%s (source:%d)\n", output, (unsigned int)RequestSource);
            ++v31;
            --v30;
          }
          while ( v30 );
        }
        Com_Printf(16, "\n");
      }
      Com_PrintError(1, "Could not satisfy the streaming requests needed by the game. Run with +set g_weaponstreaming_verbose 1 for details.\n");
    }
  }
}

/*
==============
G_WeaponStreaming_ClearClassSelectViewWeapons
==============
*/
void G_WeaponStreaming_ClearClassSelectViewWeapons(const unsigned int clientNum)
{
  G_WeaponStreaming_RemoveViewWeaponsFromSource(clientNum, ASSET_STREAMING_REQUEST_CLASS_SELECT);
}

/*
==============
G_WeaponStreaming_ClearClassSelectWorldWeapons
==============
*/
void G_WeaponStreaming_ClearClassSelectWorldWeapons(const unsigned int clientNum)
{
  G_WeaponStreaming_RemoveWorldWeaponsFromSource(clientNum, ASSET_STREAMING_REQUEST_CLASS_SELECT);
}

/*
==============
G_WeaponStreaming_ClearClientRequests
==============
*/
void G_WeaponStreaming_ClearClientRequests(const unsigned int clientNum)
{
  __int64 v1; 
  int maxclients; 

  v1 = clientNum;
  if ( clientNum >= level.maxclients )
  {
    maxclients = level.maxclients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 277, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, maxclients) )
      __debugbreak();
  }
  memset_0(&s_viewWeaponRequestList + 24 * v1, 0, 0x6C0ui64);
  memset_0(&s_worldWeaponRequestList[v1], 0, sizeof(WorldWeaponRequestList));
}

/*
==============
G_WeaponStreaming_ClearGameRequests
==============
*/
void G_WeaponStreaming_ClearGameRequests(void)
{
  memset_0(&s_gameWeaponRequestList, 0, sizeof(s_gameWeaponRequestList));
}

/*
==============
G_WeaponStreaming_ClearNextEquippedViewWeapons
==============
*/
void G_WeaponStreaming_ClearNextEquippedViewWeapons(const unsigned int clientNum)
{
  G_WeaponStreaming_RemoveViewWeaponsFromSource(clientNum, ASSET_STREAMING_REQUEST_NEXT_EQUIPPED_VIEW);
}

/*
==============
G_WeaponStreaming_ClearNextEquippedWorldWeapons
==============
*/
void G_WeaponStreaming_ClearNextEquippedWorldWeapons(const unsigned int clientNum)
{
  G_WeaponStreaming_RemoveWorldWeaponsFromSource(clientNum, ASSET_STREAMING_REQUEST_NEXT_EQUIPPED_WORLD);
}

/*
==============
G_WeaponStreaming_ClearNextSpectateViewWeapons
==============
*/
void G_WeaponStreaming_ClearNextSpectateViewWeapons(const unsigned int clientNum)
{
  G_WeaponStreaming_RemoveViewWeaponsFromSource(clientNum, ASSET_STREAMING_REQUEST_NEXT_SPECTATE_VIEW);
}

/*
==============
G_WeaponStreaming_CollectClientRequestWeapons
==============
*/
__int64 G_WeaponStreaming_CollectClientRequestWeapons(Weapon *const outWeapons, unsigned int *const outWeaponPriorities, unsigned int *inOutWeaponCount, const unsigned int maxWeaponCount)
{
  unsigned int *v4; 
  __int64 result; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  WorldWeaponRequestList *v11; 
  __int64 v12; 
  AssetStreamingRequestItem *v13; 
  __int64 v14; 
  __int64 v15; 
  AssetStreamingRequestItem **v16; 
  AssetStreamingRequestItem *v17; 
  unsigned int v19; 
  AssetStreamingRequestItem **v20; 
  unsigned int v22; 
  int v23; 
  __int64 v24; 
  __int64 v29; 
  __int64 v30; 
  int v31; 
  __int64 v34; 
  __int64 v35; 
  WorldWeaponRequestList *v36; 
  AssetStreamingRequestItem *_First[6000]; 

  v4 = inOutWeaponCount;
  if ( !outWeapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 717, ASSERT_TYPE_ASSERT, "( outWeapons )", (const char *)&queryFormat, "outWeapons") )
    __debugbreak();
  if ( !outWeaponPriorities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 718, ASSERT_TYPE_ASSERT, "( outWeaponPriorities )", (const char *)&queryFormat, "outWeaponPriorities") )
    __debugbreak();
  if ( *v4 > maxWeaponCount )
  {
    LODWORD(v29) = *v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 719, ASSERT_TYPE_ASSERT, "( inOutWeaponCount ) <= ( maxWeaponCount )", "inOutWeaponCount not in [0, maxWeaponCount]\n\t%u not in [0, %u]", v29, maxWeaponCount) )
      __debugbreak();
  }
  result = *v4;
  if ( (_DWORD)result != maxWeaponCount )
  {
    v8 = 0i64;
    v9 = 0;
    v31 = 0;
    if ( level.maxclients > 0 )
    {
      v10 = 0i64;
      v11 = s_worldWeaponRequestList;
      v12 = 0i64;
      v34 = 0i64;
      v35 = 0i64;
      v36 = s_worldWeaponRequestList;
      do
      {
        if ( (unsigned int)v9 >= 0x800 )
        {
          LODWORD(v30) = 2048;
          LODWORD(v29) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v29, v30) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( *(&g_entities->r.isInUse + v12) != g_entityIsInUse[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( g_entityIsInUse[v10] )
        {
          v13 = (AssetStreamingRequestItem *)v11;
          v14 = 30i64;
          do
          {
            if ( v13->assetIndex == -1 )
            {
              if ( !BG_WeaponHasStreamedModels(&v13->weapon) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 746, ASSERT_TYPE_ASSERT, "( BG_WeaponHasStreamedModels( weapon ) )", (const char *)&queryFormat, "BG_WeaponHasStreamedModels( weapon )") )
                __debugbreak();
              v15 = 0i64;
              if ( !(_DWORD)v8 )
                goto LABEL_36;
              v16 = _First;
              while ( 1 )
              {
                v17 = *v16;
                if ( !memcmp_0(&v13->weapon, &(*v16)->weapon, 0x3Cui64) )
                  break;
                v15 = (unsigned int)(v15 + 1);
                ++v16;
                if ( (unsigned int)v15 >= (unsigned int)v8 )
                  goto LABEL_36;
              }
              if ( v17->sourceMask < v13->sourceMask )
                _First[v15] = v13;
              if ( (unsigned int)v15 >= (unsigned int)v8 )
              {
LABEL_36:
                if ( (unsigned int)v8 >= 0x1770 )
                {
                  LODWORD(v30) = 6000;
                  LODWORD(v29) = v8;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 767, ASSERT_TYPE_ASSERT, "(unsigned)( clientRequestCount ) < (unsigned)( ( sizeof( *array_counter( clientRequests ) ) + 0 ) )", "clientRequestCount doesn't index ARRAY_COUNT( clientRequests )\n\t%i not in [0, %i)", v29, v30) )
                    __debugbreak();
                }
                _First[v8] = v13;
                v8 = (unsigned int)(v8 + 1);
              }
            }
            ++v13;
            --v14;
          }
          while ( v14 );
          v9 = v31;
          v10 = v34;
          v11 = v36;
          v12 = v35;
        }
        ++v9;
        ++v10;
        v31 = v9;
        v12 += 1456i64;
        v34 = v10;
        ++v11;
        v35 = v12;
        v36 = v11;
      }
      while ( v9 < level.maxclients );
      v4 = inOutWeaponCount;
    }
    std::_Sort_unchecked<AssetStreamingRequestItem const * *,bool (*)(AssetStreamingRequestItem const *,AssetStreamingRequestItem const *)>((const AssetStreamingRequestItem **)_First, (const AssetStreamingRequestItem **)&_First[v8], (unsigned int)v8, (bool (__fastcall *)(const AssetStreamingRequestItem *, const AssetStreamingRequestItem *))G_WeaponStreaming_CompareClientRequest);
    _R13 = outWeapons;
    v19 = 0;
    if ( (_DWORD)v8 )
    {
      v20 = _First;
      do
      {
        _R14 = *v20;
        if ( (*v20)->assetIndex != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 782, ASSERT_TYPE_ASSERT, "( BG_AssetStreaming_IsWeaponAssetRequest( *requestItem ) )", (const char *)&queryFormat, "BG_AssetStreaming_IsWeaponAssetRequest( *requestItem )") )
          __debugbreak();
        if ( !BG_WeaponHasStreamedModels(&_R14->weapon) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 785, ASSERT_TYPE_ASSERT, "( BG_WeaponHasStreamedModels( weapon ) )", (const char *)&queryFormat, "BG_WeaponHasStreamedModels( weapon )") )
          __debugbreak();
        v22 = *v4;
        if ( !outWeapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1164, ASSERT_TYPE_ASSERT, "(checkWeapons)", (const char *)&queryFormat, "checkWeapons") )
          __debugbreak();
        v23 = 0;
        if ( v22 )
        {
          while ( memcmp_0(&outWeapons[v23], &_R14->weapon, 0x3Cui64) )
          {
            if ( ++v23 >= v22 )
              goto LABEL_58;
          }
          v4 = inOutWeaponCount;
        }
        else
        {
LABEL_58:
          v4 = inOutWeaponCount;
          v24 = *inOutWeaponCount;
          if ( (_DWORD)v24 == maxWeaponCount )
            break;
          __asm { vmovups ymm0, ymmword ptr [r14+0Ch] }
          _RDX = v24;
          __asm
          {
            vmovups ymmword ptr [rdx+r13], ymm0
            vmovups xmm1, xmmword ptr [r14+2Ch]
            vmovups xmmword ptr [rdx+r13+20h], xmm1
            vmovsd  xmm0, qword ptr [r14+3Ch]
            vmovsd  qword ptr [rdx+r13+30h], xmm0
          }
          *(_DWORD *)&outWeapons[_RDX].weaponCamo = *(_DWORD *)&_R14->weapon.weaponCamo;
          outWeaponPriorities[(*inOutWeaponCount)++] = BG_AssetStreaming_GetRequestSource(_R14);
        }
        ++v19;
        ++v20;
      }
      while ( v19 < (unsigned int)v8 );
    }
    G_WeaponStreaming_CheckClientRequests((const AssetStreamingRequestItem **)_First, v8, outWeapons, outWeaponPriorities, *v4);
    return *v4;
  }
  return result;
}

/*
==============
G_WeaponStreaming_CollectGameRequestWeapons
==============
*/
__int64 G_WeaponStreaming_CollectGameRequestWeapons(Weapon *const outWeapons, unsigned int *const outWeaponPriorities, unsigned int *inOutWeaponCount, const unsigned int maxWeaponCount)
{
  __int64 result; 
  unsigned int v10; 
  unsigned int v11; 
  int v12; 
  __int64 v13; 
  __int64 v18; 
  char output[512]; 

  _RBP = outWeapons;
  if ( !outWeapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 645, ASSERT_TYPE_ASSERT, "( outWeapons )", (const char *)&queryFormat, "outWeapons") )
    __debugbreak();
  if ( !outWeaponPriorities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 646, ASSERT_TYPE_ASSERT, "( outWeaponPriorities )", (const char *)&queryFormat, "outWeaponPriorities") )
    __debugbreak();
  if ( *inOutWeaponCount > maxWeaponCount )
  {
    LODWORD(v18) = *inOutWeaponCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 647, ASSERT_TYPE_ASSERT, "( inOutWeaponCount ) <= ( maxWeaponCount )", "inOutWeaponCount not in [0, maxWeaponCount]\n\t%u not in [0, %u]", v18, maxWeaponCount) )
      __debugbreak();
  }
  result = *inOutWeaponCount;
  if ( (_DWORD)result != maxWeaponCount )
  {
    _RDI = &s_gameWeaponRequestList;
    v10 = 0;
    while ( _RDI->weapons[0].weaponIdx )
    {
      if ( !BG_WeaponHasStreamedModels(_RDI->weapons) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 664, ASSERT_TYPE_ASSERT, "( BG_WeaponHasStreamedModels( weapon ) )", (const char *)&queryFormat, "BG_WeaponHasStreamedModels( weapon )") )
        __debugbreak();
      v11 = *inOutWeaponCount;
      if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1164, ASSERT_TYPE_ASSERT, "(checkWeapons)", (const char *)&queryFormat, "checkWeapons") )
        __debugbreak();
      v12 = 0;
      if ( v11 )
      {
        while ( memcmp_0(&_RBP[v12], _RDI, 0x3Cui64) )
        {
          if ( ++v12 >= v11 )
            goto LABEL_22;
        }
      }
      else
      {
LABEL_22:
        v13 = *inOutWeaponCount;
        if ( (_DWORD)v13 == maxWeaponCount )
        {
          BG_GetWeaponName(_RDI->weapons, output, 0x200u);
          if ( s_nextPrintTime_0 < Sys_Milliseconds() )
          {
            Com_Printf(15, "G_WeaponStreaming_CollectGameRequestWeapons: Unable to satisfy world weapon streaming request for weapon %s.\n", output);
            s_nextPrintTime_0 = Sys_Milliseconds() + 10000;
          }
          return *inOutWeaponCount;
        }
        __asm { vmovups ymm0, ymmword ptr [rdi] }
        _RCX = v13;
        __asm
        {
          vmovups ymmword ptr [rcx+rbp], ymm0
          vmovups xmm1, xmmword ptr [rdi+20h]
          vmovups xmmword ptr [rcx+rbp+20h], xmm1
          vmovsd  xmm0, qword ptr [rdi+30h]
          vmovsd  qword ptr [rcx+rbp+30h], xmm0
        }
        *(_DWORD *)&_RBP[_RCX].weaponCamo = *(_DWORD *)&_RDI->weapons[0].weaponCamo;
        outWeaponPriorities[(*inOutWeaponCount)++] = 1;
      }
      ++v10;
      _RDI = (GameWeaponRequestList *)((char *)_RDI + 60);
      if ( v10 >= 0x20 )
        return *inOutWeaponCount;
    }
    return *inOutWeaponCount;
  }
  return result;
}

/*
==============
G_WeaponStreaming_CollectWorldRequestWeapons
==============
*/
__int64 G_WeaponStreaming_CollectWorldRequestWeapons(Weapon *const weapons, unsigned int *const weaponSources, unsigned int *inOutWeaponCount, const unsigned int maxWeaponCount)
{
  __int64 result; 
  GWeaponMap *Instance; 
  unsigned __int16 v10; 
  unsigned __int16 i; 
  unsigned __int16 v12; 
  __int64 v14; 
  __int64 v19; 

  _R12 = weapons;
  if ( !weapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 582, ASSERT_TYPE_ASSERT, "( weapons )", (const char *)&queryFormat, "weapons") )
    __debugbreak();
  if ( !weaponSources && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 583, ASSERT_TYPE_ASSERT, "( weaponSources )", (const char *)&queryFormat, "weaponSources") )
    __debugbreak();
  if ( *inOutWeaponCount > maxWeaponCount )
  {
    LODWORD(v19) = *inOutWeaponCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 584, ASSERT_TYPE_ASSERT, "( inOutWeaponCount ) <= ( maxWeaponCount )", "inOutWeaponCount not in [0, maxWeaponCount]\n\t%u not in [0, %u]", v19, maxWeaponCount) )
      __debugbreak();
  }
  result = *inOutWeaponCount;
  if ( (_DWORD)result != maxWeaponCount )
  {
    Instance = GWeaponMap::GetInstance();
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    v10 = BgWeaponMap::ms_runtimeSize;
    for ( i = 1; i < v10; ++i )
    {
      if ( !Instance->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 161, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
        __debugbreak();
      v12 = truncate_cast<unsigned short,unsigned int>(i);
      if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
        __debugbreak();
      if ( v12 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 165, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
        __debugbreak();
      if ( Instance->m_entries[v12].index == v12 )
      {
        _RBX = &BgWeaponMap::GetWeaponEntry(Instance, i)->weapon;
        if ( BG_WeaponHasStreamedModels(_RBX) && !BG_IsWeaponInList(_RBX, _R12, *inOutWeaponCount) )
        {
          v14 = *inOutWeaponCount;
          if ( (_DWORD)v14 == maxWeaponCount )
          {
            if ( s_nextPrintTime < Sys_Milliseconds() )
            {
              Com_Printf(15, "G_WeaponStreaming_CollectWorldRequestWeapons: Capping weapons from world to %i limit\n", maxWeaponCount);
              s_nextPrintTime = Sys_Milliseconds() + 10000;
            }
            return *inOutWeaponCount;
          }
          __asm { vmovups ymm0, ymmword ptr [rbx] }
          _RCX = v14;
          __asm
          {
            vmovups ymmword ptr [rcx+r12], ymm0
            vmovups xmm1, xmmword ptr [rbx+20h]
            vmovups xmmword ptr [rcx+r12+20h], xmm1
            vmovsd  xmm0, qword ptr [rbx+30h]
            vmovsd  qword ptr [rcx+r12+30h], xmm0
          }
          *(_DWORD *)&_R12[_RCX].weaponCamo = *(_DWORD *)&_RBX->weaponCamo;
          weaponSources[(*inOutWeaponCount)++] = 4;
        }
      }
    }
    return *inOutWeaponCount;
  }
  return result;
}

/*
==============
G_WeaponStreaming_CompareClientRequest
==============
*/
bool G_WeaponStreaming_CompareClientRequest(const AssetStreamingRequestItem *const requestItem1, const AssetStreamingRequestItem *const requestItem2)
{
  if ( !requestItem1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 701, ASSERT_TYPE_ASSERT, "( requestItem1 )", (const char *)&queryFormat, "requestItem1") )
    __debugbreak();
  if ( !requestItem2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 702, ASSERT_TYPE_ASSERT, "( requestItem2 )", (const char *)&queryFormat, "requestItem2") )
    __debugbreak();
  return requestItem1->sourceMask > requestItem2->sourceMask;
}

/*
==============
G_WeaponStreaming_DevFillWithRandomWeapons
==============
*/
int G_WeaponStreaming_DevFillWithRandomWeapons()
{
  int result; 
  int v1; 
  __int64 v2; 
  __int64 v3; 
  unsigned int v4; 
  unsigned int MaxWorldEntryCount; 
  __int64 v6; 
  Weapon *v7; 
  __int64 v8; 
  int v15; 
  unsigned int MaxViewRequestCount; 
  __int64 v18; 
  unsigned int *v19; 
  __int64 v20; 
  int v27; 
  __int64 v29; 
  __int64 v30; 
  unsigned int v31; 
  __int64 v32; 
  Weapon weapon; 
  unsigned int v34[24]; 
  Weapon weaponSources[24]; 
  Weapon weapons; 

  result = Sys_Milliseconds();
  v31 = result;
  if ( result - s_timeSinceLastFill >= 0x7D0 )
  {
    v1 = 0;
    if ( level.maxclients > 0 )
    {
      v2 = 0i64;
      v3 = 0i64;
      v32 = 0i64;
      do
      {
        if ( (unsigned int)v1 >= 0x800 )
        {
          LODWORD(v30) = 2048;
          LODWORD(v29) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v29, v30) )
            __debugbreak();
        }
        if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
          __debugbreak();
        if ( *(&g_entities->r.isInUse + v2) != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
          __debugbreak();
        if ( g_entityIsInUse[v3] )
        {
          G_WeaponStreaming_ClearClientRequests(v1);
          v4 = s_sourceIndex;
          MaxWorldEntryCount = Com_StreamSync_GetMaxWorldEntryCount(STREAM_SYNC_WORLD_TYPE_WEAPON, SvClient::ms_clientCount);
          v6 = MaxWorldEntryCount;
          if ( MaxWorldEntryCount > 0x40 )
          {
            LODWORD(v30) = 64;
            LODWORD(v29) = MaxWorldEntryCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 915, ASSERT_TYPE_ASSERT, "( weaponCount ) <= ( MAX_REQUEST_COUNT_STATIC )", "weaponCount not in [0, MAX_REQUEST_COUNT_STATIC]\n\t%u not in [0, %u]", v29, v30) )
              __debugbreak();
          }
          if ( (_DWORD)v6 )
          {
            v7 = weaponSources;
            v8 = v6;
            _RBX = &weapons;
            do
            {
              __asm
              {
                vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
                vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
                vmovups ymmword ptr [rsp+15C0h+weapon.weaponIdx], ymm0
                vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
                vmovsd  qword ptr [rbp+14C0h+weapon.attachmentVariationIndices+15h], xmm0
                vmovups xmmword ptr [rsp+15C0h+weapon.attachmentVariationIndices+5], xmm1
              }
              *(_DWORD *)&weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
              while ( !BG_WeaponHasStreamedModels(&weapon) )
                BG_WeaponsUtil_RandomizeWeapon(&weapon, &dword_14792D2F0);
              __asm
              {
                vmovups ymm0, ymmword ptr [rsp+15C0h+weapon.weaponIdx]
                vmovups xmm1, xmmword ptr [rsp+15C0h+weapon.attachmentVariationIndices+5]
              }
              v15 = *(_DWORD *)&weapon.weaponCamo;
              __asm
              {
                vmovups ymmword ptr [rbx], ymm0
                vmovsd  xmm0, qword ptr [rbp+14C0h+weapon.attachmentVariationIndices+15h]
                vmovups xmmword ptr [rbx+20h], xmm1
                vmovsd  qword ptr [rbx+30h], xmm0
              }
              *(_DWORD *)&_RBX->weaponCamo = v15;
              ++_RBX;
              *(_DWORD *)&v7->weaponIdx = v4;
              v7 = (Weapon *)((char *)v7 + 4);
              --v8;
            }
            while ( v8 );
          }
          SV_StreamSync_AddWorldWeaponLoad(&weapons, (const unsigned int *)&weaponSources[0].weaponIdx, v6);
          MaxViewRequestCount = G_WeaponStreaming_GetMaxViewRequestCount(v1);
          v18 = MaxViewRequestCount;
          if ( MaxViewRequestCount > 0x18 )
          {
            LODWORD(v30) = 24;
            LODWORD(v29) = MaxViewRequestCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 915, ASSERT_TYPE_ASSERT, "( weaponCount ) <= ( MAX_REQUEST_COUNT_STATIC )", "weaponCount not in [0, MAX_REQUEST_COUNT_STATIC]\n\t%u not in [0, %u]", v29, v30) )
              __debugbreak();
          }
          if ( (_DWORD)v18 )
          {
            v19 = v34;
            v20 = v18;
            _RBX = weaponSources;
            do
            {
              __asm
              {
                vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
                vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
                vmovups ymmword ptr [rsp+15C0h+weapon.weaponIdx], ymm0
                vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
                vmovsd  qword ptr [rbp+14C0h+weapon.attachmentVariationIndices+15h], xmm0
                vmovups xmmword ptr [rsp+15C0h+weapon.attachmentVariationIndices+5], xmm1
              }
              *(_DWORD *)&weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
              while ( !BG_WeaponHasStreamedModels(&weapon) )
                BG_WeaponsUtil_RandomizeWeapon(&weapon, &dword_14792D2F4);
              __asm
              {
                vmovups ymm0, ymmword ptr [rsp+15C0h+weapon.weaponIdx]
                vmovups xmm1, xmmword ptr [rsp+15C0h+weapon.attachmentVariationIndices+5]
              }
              v27 = *(_DWORD *)&weapon.weaponCamo;
              __asm
              {
                vmovups ymmword ptr [rbx], ymm0
                vmovsd  xmm0, qword ptr [rbp+14C0h+weapon.attachmentVariationIndices+15h]
                vmovups xmmword ptr [rbx+20h], xmm1
                vmovsd  qword ptr [rbx+30h], xmm0
              }
              *(_DWORD *)&_RBX->weaponCamo = v27;
              ++_RBX;
              *v19++ = v4;
              --v20;
            }
            while ( v20 );
          }
          SV_StreamSync_ClientAddViewWeaponLoad(v1, weaponSources, v34, v18);
          v2 = v32;
        }
        v2 += 1456i64;
        ++v1;
        v32 = v2;
        ++v3;
      }
      while ( v1 < level.maxclients );
    }
    s_sourceIndex = ((_BYTE)s_sourceIndex + 1) & 3;
    result = v31;
    s_timeSinceLastFill = v31;
  }
  return result;
}

/*
==============
G_WeaponStreaming_FilterStreamedWeaponList
==============
*/
bool G_WeaponStreaming_FilterStreamedWeaponList(Weapon *const outList, const unsigned int outListSize, unsigned int *const outCount, const Weapon *const weapons, const unsigned int weaponCount)
{
  unsigned int v9; 
  unsigned int i; 
  bool result; 
  __int64 v16; 
  __int64 v17; 

  _RDI = weapons;
  _R12 = outList;
  if ( !outList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 61, ASSERT_TYPE_ASSERT, "( outList )", (const char *)&queryFormat, "outList") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 62, ASSERT_TYPE_ASSERT, "( weapons )", (const char *)&queryFormat, "weapons") )
    __debugbreak();
  if ( !outCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 63, ASSERT_TYPE_ASSERT, "( outCount )", (const char *)&queryFormat, "outCount") )
    __debugbreak();
  v9 = 0;
  for ( i = 0; i < weaponCount; ++_RDI )
  {
    if ( BG_WeaponHasStreamedModels(_RDI) )
    {
      if ( v9 == outListSize )
      {
        result = 0;
        goto LABEL_19;
      }
      if ( v9 >= outListSize )
      {
        LODWORD(v17) = outListSize;
        LODWORD(v16) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 82, ASSERT_TYPE_ASSERT, "(unsigned)( requestCount ) < (unsigned)( outListSize )", "requestCount doesn't index outListSize\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      __asm { vmovups ymm0, ymmword ptr [rdi] }
      _RCX = v9++;
      __asm
      {
        vmovups ymmword ptr [rcx+r12], ymm0
        vmovups xmm1, xmmword ptr [rdi+20h]
        vmovups xmmword ptr [rcx+r12+20h], xmm1
        vmovsd  xmm0, qword ptr [rdi+30h]
        vmovsd  qword ptr [rcx+r12+30h], xmm0
      }
      *(_DWORD *)&_R12[_RCX].weaponCamo = *(_DWORD *)&_RDI->weaponCamo;
    }
    ++i;
  }
  result = 1;
LABEL_19:
  *outCount = v9;
  return result;
}

/*
==============
G_WeaponStreaming_GetMaxViewRequestCount
==============
*/
unsigned int G_WeaponStreaming_GetMaxViewRequestCount(const unsigned int clientNum)
{
  SvClientMP *CommonClient; 
  unsigned int v3; 
  unsigned int LocalClientCount; 
  unsigned int result; 
  unsigned int v6; 
  __int64 v7; 

  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = (SvClientMP *)SvClient::GetCommonClient(clientNum);
  if ( !CommonClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 95, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  v3 = SvClient::ms_clientCount;
  LocalClientCount = SvClientMP::GetLocalClientCount(CommonClient);
  result = Com_StreamSync_GetMaxEntryCount(STREAM_SYNC_CLIENT_TYPE_VIEW_WEAPON, v3, LocalClientCount);
  v6 = result;
  if ( result > 0x18 )
  {
    LODWORD(v7) = result;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 101, ASSERT_TYPE_ASSERT, "( maxRequestCount ) <= ( (24) )", "maxRequestCount not in [0, MAX_VIEW_WEAPONS_STREAMED]\n\t%u not in [0, %u]", v7, 24) )
      __debugbreak();
    return v6;
  }
  return result;
}

/*
==============
G_WeaponStreaming_HasNextSpectateViewWeaponsLoaded
==============
*/
bool G_WeaponStreaming_HasNextSpectateViewWeaponsLoaded(const unsigned int clientNum, const characterInfo_t *const ci)
{
  GWeaponMap *Instance; 
  unsigned int inOutWeaponCount[4]; 
  Weapon outViewWeapons[24]; 

  if ( clientNum >= level.maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 436, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, level.maxclients) )
    __debugbreak();
  inOutWeaponCount[0] = 0;
  Instance = GWeaponMap::GetInstance();
  if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 441, ASSERT_TYPE_ASSERT, "( ( weaponMap != nullptr ) )", "( weaponMap ) = %p", NULL) )
    __debugbreak();
  if ( !BG_GetNextSpectateViewWeapons(Instance, ci, (Weapon (*)[24])outViewWeapons, inOutWeaponCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 443, ASSERT_TYPE_ASSERT, "(BG_GetNextSpectateViewWeapons( weaponMap, ci, weapons, weaponCount ))", (const char *)&queryFormat, "BG_GetNextSpectateViewWeapons( weaponMap, ci, weapons, weaponCount )") )
    __debugbreak();
  return !inOutWeaponCount[0] || G_WeaponStreaming_HasViewWeaponsLoaded(clientNum, outViewWeapons, inOutWeaponCount[0]);
}

/*
==============
G_WeaponStreaming_HasViewWeaponsLoaded
==============
*/
bool G_WeaponStreaming_HasViewWeaponsLoaded(const unsigned int clientNum, const Weapon *const weapons, const unsigned int weaponCount)
{
  unsigned int v6; 
  unsigned int MaxViewRequestCount; 
  unsigned int v8; 
  int v12; 
  __int64 v15; 
  __int64 v16; 
  Weapon weaponsa[24]; 

  _RDI = weapons;
  if ( clientNum >= level.maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 354, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, level.maxclients) )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 355, ASSERT_TYPE_ASSERT, "( weapons )", (const char *)&queryFormat, "weapons") )
    __debugbreak();
  v6 = 0;
  MaxViewRequestCount = G_WeaponStreaming_GetMaxViewRequestCount(clientNum);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 62, ASSERT_TYPE_ASSERT, "( weapons )", (const char *)&queryFormat, "weapons") )
    __debugbreak();
  v8 = 0;
  if ( !weaponCount )
    return 1;
  do
  {
    if ( BG_WeaponHasStreamedModels(_RDI) )
    {
      if ( v6 == 24 )
        return 0;
      if ( v6 >= 0x18 )
      {
        LODWORD(v16) = 24;
        LODWORD(v15) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 82, ASSERT_TYPE_ASSERT, "(unsigned)( requestCount ) < (unsigned)( outListSize )", "requestCount doesn't index outListSize\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      __asm
      {
        vmovups ymm0, ymmword ptr [rdi]
        vmovups xmm1, xmmword ptr [rdi+20h]
      }
      _RCX = v6;
      v12 = *(_DWORD *)&_RDI->weaponCamo;
      ++v6;
      __asm
      {
        vmovups ymmword ptr [rsp+rcx+628h+weapons.weaponIdx], ymm0
        vmovsd  xmm0, qword ptr [rdi+30h]
        vmovups xmmword ptr [rsp+rcx+628h+weapons.attachmentVariationIndices+5], xmm1
        vmovsd  qword ptr [rsp+rcx+628h+weapons.attachmentVariationIndices+15h], xmm0
      }
      *(_DWORD *)&weaponsa[_RCX].weaponCamo = v12;
    }
    ++v8;
    ++_RDI;
  }
  while ( v8 < weaponCount );
  if ( v6 > MaxViewRequestCount )
    return 0;
  return !v6 || SV_StreamSync_ClientHasViewWeaponsLoaded(clientNum, weaponsa, v6) != 0;
}

/*
==============
G_WeaponStreaming_HasViewWeaponsLoadedForPlayer
==============
*/
bool G_WeaponStreaming_HasViewWeaponsLoadedForPlayer(const unsigned int clientNum, const playerState_s *const ps)
{
  unsigned int v3; 
  WeaponSlot *p_slot; 
  int v5; 
  BgWeaponHandle *weaponsEquipped; 
  GWeaponMap *Instance; 
  __int64 v14; 
  __int64 v15; 
  Weapon weapons[15]; 

  if ( clientNum >= level.maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 419, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, level.maxclients) )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 169, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v3 = 0;
  p_slot = &ps->weapEquippedData[0].slot;
  v5 = 0;
  weaponsEquipped = ps->weaponsEquipped;
  Instance = GWeaponMap::GetInstance();
  do
  {
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( (unsigned int)v5 >= 0xF )
    {
      LODWORD(v15) = 15;
      LODWORD(v14) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    _RBX = BgWeaponMap::GetWeaponEntry(Instance, weaponsEquipped->m_mapEntryId);
    if ( _RBX->weapon.weaponIdx && *p_slot != WEAPON_SLOT_EXECUTION )
    {
      if ( v3 >= 0xF )
      {
        LODWORD(v15) = 15;
        LODWORD(v14) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 190, ASSERT_TYPE_ASSERT, "(unsigned)( weaponCount ) < (unsigned)( outListSize )", "weaponCount doesn't index outListSize\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      __asm { vmovups ymm0, ymmword ptr [rbx+2] }
      _RCX = v3++;
      __asm
      {
        vmovups ymmword ptr [rsp+rcx+428h+weapons.weaponIdx], ymm0
        vmovups xmm1, xmmword ptr [rbx+22h]
        vmovups xmmword ptr [rsp+rcx+428h+weapons.attachmentVariationIndices+5], xmm1
        vmovsd  xmm0, qword ptr [rbx+32h]
        vmovsd  qword ptr [rsp+rcx+428h+weapons.attachmentVariationIndices+15h], xmm0
      }
      *(_DWORD *)&weapons[_RCX].weaponCamo = *(_DWORD *)&_RBX->weapon.weaponCamo;
    }
    ++v5;
    ++weaponsEquipped;
    p_slot += 4;
  }
  while ( v5 < 15 );
  return !v3 || G_WeaponStreaming_HasViewWeaponsLoaded(clientNum, weapons, v3);
}

/*
==============
G_WeaponStreaming_HasWorldWeaponsLoaded
==============
*/
bool G_WeaponStreaming_HasWorldWeaponsLoaded(const unsigned int clientNum, const Weapon *const weapons, const unsigned int weaponCount)
{
  unsigned int v6; 
  unsigned int MaxWorldEntryCount; 
  int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  int v16; 
  __int64 v19; 
  __int64 v20; 
  Weapon weaponsa[64]; 

  _RDI = weapons;
  if ( clientNum >= level.maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 386, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, level.maxclients) )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 387, ASSERT_TYPE_ASSERT, "( weapons )", (const char *)&queryFormat, "weapons") )
    __debugbreak();
  v6 = SvClient::ms_clientCount;
  MaxWorldEntryCount = Com_StreamSync_GetMaxWorldEntryCount(STREAM_SYNC_WORLD_TYPE_WEAPON, SvClient::ms_clientCount);
  v8 = 20;
  v9 = MaxWorldEntryCount;
  if ( v6 <= 0x14 )
    v8 = v6;
  v10 = 2 * v8 + 24;
  if ( MaxWorldEntryCount > v10 )
  {
    LODWORD(v20) = v10;
    LODWORD(v19) = MaxWorldEntryCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 391, ASSERT_TYPE_ASSERT, "( maxWorldWeaponsCount ) <= ( ( ((2) * (maxClientCount <= (20) ? maxClientCount : (20)) + 16 + (8)) ) )", "maxWorldWeaponsCount not in [0, MAX_WORLD_WEAPONS_STREAMED_DYNAMIC( maxClientCount )]\n\t%u not in [0, %u]", v19, v20) )
      __debugbreak();
  }
  v11 = 0;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 62, ASSERT_TYPE_ASSERT, "( weapons )", (const char *)&queryFormat, "weapons") )
    __debugbreak();
  v12 = 0;
  if ( !weaponCount )
    return 1;
  do
  {
    if ( BG_WeaponHasStreamedModels(_RDI) )
    {
      if ( v11 == 64 )
        return 0;
      if ( v11 >= 0x40 )
      {
        LODWORD(v20) = 64;
        LODWORD(v19) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 82, ASSERT_TYPE_ASSERT, "(unsigned)( requestCount ) < (unsigned)( outListSize )", "requestCount doesn't index outListSize\n\t%i not in [0, %i)", v19, v20) )
          __debugbreak();
      }
      __asm
      {
        vmovups ymm0, ymmword ptr [rdi]
        vmovups xmm1, xmmword ptr [rdi+20h]
      }
      _RCX = v11;
      v16 = *(_DWORD *)&_RDI->weaponCamo;
      ++v11;
      __asm
      {
        vmovups ymmword ptr [rsp+rcx+0F88h+weapons.weaponIdx], ymm0
        vmovsd  xmm0, qword ptr [rdi+30h]
        vmovups xmmword ptr [rsp+rcx+0F88h+weapons.attachmentVariationIndices+5], xmm1
        vmovsd  qword ptr [rsp+rcx+0F88h+weapons.attachmentVariationIndices+15h], xmm0
      }
      *(_DWORD *)&weaponsa[_RCX].weaponCamo = v16;
    }
    ++v12;
    ++_RDI;
  }
  while ( v12 < weaponCount );
  if ( v11 > v9 )
    return 0;
  return !v11 || SV_StreamSync_ClientHasWorldWeaponsLoaded(clientNum, weaponsa, v11) != 0;
}

/*
==============
G_WeaponStreaming_HasWorldWeaponsLoadedForPlayer
==============
*/
bool G_WeaponStreaming_HasWorldWeaponsLoadedForPlayer(const unsigned int clientNum, const playerState_s *const ps)
{
  unsigned int v3; 
  BgWeaponHandle *weaponsEquipped; 
  GWeaponMap *Instance; 
  int i; 
  __int64 v13; 
  __int64 v14; 
  Weapon weapons[15]; 

  if ( clientNum >= level.maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 459, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, level.maxclients) )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 203, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v3 = 0;
  weaponsEquipped = ps->weaponsEquipped;
  Instance = GWeaponMap::GetInstance();
  for ( i = 0; i < 15; ++i )
  {
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( (unsigned int)i >= 0xF )
    {
      LODWORD(v14) = 15;
      LODWORD(v13) = i;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    _RBX = BgWeaponMap::GetWeaponEntry(Instance, weaponsEquipped->m_mapEntryId);
    if ( BG_WeaponHasStreamedModels(&_RBX->weapon) )
    {
      if ( v3 >= 0xF )
      {
        LODWORD(v14) = 15;
        LODWORD(v13) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 217, ASSERT_TYPE_ASSERT, "(unsigned)( weaponCount ) < (unsigned)( outListSize )", "weaponCount doesn't index outListSize\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      __asm { vmovups ymm0, ymmword ptr [rbx+2] }
      _RCX = v3++;
      __asm
      {
        vmovups ymmword ptr [rsp+rcx+428h+weapons.weaponIdx], ymm0
        vmovups xmm1, xmmword ptr [rbx+22h]
        vmovups xmmword ptr [rsp+rcx+428h+weapons.attachmentVariationIndices+5], xmm1
        vmovsd  xmm0, qword ptr [rbx+32h]
        vmovsd  qword ptr [rsp+rcx+428h+weapons.attachmentVariationIndices+15h], xmm0
      }
      *(_DWORD *)&weapons[_RCX].weaponCamo = *(_DWORD *)&_RBX->weapon.weaponCamo;
    }
    ++weaponsEquipped;
  }
  return !v3 || G_WeaponStreaming_HasWorldWeaponsLoaded(clientNum, weapons, v3);
}

/*
==============
G_WeaponStreaming_LoadViewWeapons
==============
*/
void G_WeaponStreaming_LoadViewWeapons()
{
  int v0; 
  AssetStreamingRequestItem *v1; 
  __int64 v2; 
  __int64 v3; 
  unsigned int MaxViewRequestCount; 
  __int64 v5; 
  __int64 v7; 
  int v11; 
  AssetStreamingRequestSource RequestSource; 
  __int64 v14; 
  __int64 v15; 
  int v16; 
  __int64 v17; 
  __int64 v18; 
  unsigned int weaponSources[24]; 
  Weapon weapons[24]; 

  v0 = 0;
  v16 = 0;
  if ( level.maxclients > 0 )
  {
    v1 = &s_viewWeaponRequestList;
    v2 = 0i64;
    v3 = 0i64;
    v17 = 0i64;
    v18 = 0i64;
    do
    {
      if ( (unsigned int)v0 >= 0x800 )
      {
        LODWORD(v15) = 2048;
        LODWORD(v14) = v0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      if ( *(&g_entities->r.isInUse + v3) != g_entityIsInUse[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
        __debugbreak();
      if ( g_entityIsInUse[v2] )
      {
        MaxViewRequestCount = G_WeaponStreaming_GetMaxViewRequestCount(v0);
        v5 = 0i64;
        if ( MaxViewRequestCount )
        {
          _RDI = v1;
          v7 = MaxViewRequestCount;
          do
          {
            if ( _RDI->assetIndex )
            {
              if ( _RDI->assetIndex != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 888, ASSERT_TYPE_ASSERT, "( BG_AssetStreaming_IsWeaponAssetRequest( *requestItem ) )", (const char *)&queryFormat, "BG_AssetStreaming_IsWeaponAssetRequest( *requestItem )") )
                __debugbreak();
              if ( (unsigned int)v5 >= 0x18 )
              {
                LODWORD(v15) = 24;
                LODWORD(v14) = v5;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 889, ASSERT_TYPE_ASSERT, "(unsigned)( weaponCount ) < (unsigned)( ( sizeof( *array_counter( weapons ) ) + 0 ) )", "weaponCount doesn't index ARRAY_COUNT( weapons )\n\t%i not in [0, %i)", v14, v15) )
                  __debugbreak();
              }
              __asm
              {
                vmovups ymm0, ymmword ptr [rdi+0Ch]
                vmovups xmm1, xmmword ptr [rdi+2Ch]
              }
              _RCX = &weapons[(unsigned int)v5];
              v11 = *(_DWORD *)&_RDI->weapon.weaponCamo;
              __asm
              {
                vmovups ymmword ptr [rcx], ymm0
                vmovsd  xmm0, qword ptr [rdi+3Ch]
                vmovups xmmword ptr [rcx+20h], xmm1
                vmovsd  qword ptr [rcx+30h], xmm0
              }
              *(_DWORD *)&_RCX->weaponCamo = v11;
              RequestSource = BG_AssetStreaming_GetRequestSource(_RDI);
              weaponSources[v5] = RequestSource;
              if ( (unsigned int)RequestSource > ASSET_STREAMING_REQUEST_EQUIPPED_VIEW )
              {
                LODWORD(v15) = 7;
                LODWORD(v14) = RequestSource;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 893, ASSERT_TYPE_ASSERT, "( weaponSources[weaponCount] ) <= ( ((1 << (3)) - 1) )", "weaponSources[weaponCount] not in [0, STREAM_SYNC_MAX_SOURCE]\n\t%u not in [0, %u]", v14, v15) )
                  __debugbreak();
              }
              v5 = (unsigned int)(v5 + 1);
            }
            ++_RDI;
            --v7;
          }
          while ( v7 );
          v0 = v16;
          v2 = v17;
          v3 = v18;
        }
        SV_StreamSync_ClientAddViewWeaponLoad(v0, weapons, weaponSources, v5);
      }
      ++v0;
      ++v2;
      v16 = v0;
      v3 += 1456i64;
      v17 = v2;
      v1 += 24;
      v18 = v3;
    }
    while ( v0 < level.maxclients );
  }
}

/*
==============
G_WeaponStreaming_LoadWeapons
==============
*/
void G_WeaponStreaming_LoadWeapons(void)
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  unsigned int MaxWorldEntryCount; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned int inOutWeaponCount[4]; 
  unsigned int weaponSources[64]; 
  Weapon weapons; 

  v0 = DCONST_DVARBOOL_g_weaponStreaming_devRandomWeapons;
  if ( !DCONST_DVARBOOL_g_weaponStreaming_devRandomWeapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_weaponStreaming_devRandomWeapons") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  if ( v0->current.enabled )
  {
    G_WeaponStreaming_DevFillWithRandomWeapons();
  }
  else
  {
    G_WeaponStreaming_LoadViewWeapons();
    v1 = DCONST_DVARBOOL_g_globalWorldWeaponStreamingEnabled;
    if ( !DCONST_DVARBOOL_g_globalWorldWeaponStreamingEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_globalWorldWeaponStreamingEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v1);
    if ( v1->current.enabled )
    {
      MaxWorldEntryCount = Com_StreamSync_GetMaxWorldEntryCount(STREAM_SYNC_WORLD_TYPE_WEAPON, level.maxclients);
      v3 = MaxWorldEntryCount;
      if ( MaxWorldEntryCount > 0x40 )
      {
        LODWORD(v7) = 64;
        LODWORD(v6) = MaxWorldEntryCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 842, ASSERT_TYPE_ASSERT, "( maxWeaponCount ) <= ( ( sizeof( *array_counter( weapons ) ) + 0 ) )", "maxWeaponCount not in [0, ARRAY_COUNT( weapons )]\n\t%u not in [0, %u]", v6, v7) )
          __debugbreak();
      }
      inOutWeaponCount[0] = 0;
      inOutWeaponCount[0] = G_WeaponStreaming_CollectWorldRequestWeapons(&weapons, weaponSources, inOutWeaponCount, v3);
      inOutWeaponCount[0] = G_WeaponStreaming_CollectGameRequestWeapons(&weapons, weaponSources, inOutWeaponCount, v3);
      v4 = G_WeaponStreaming_CollectClientRequestWeapons(&weapons, weaponSources, inOutWeaponCount, v3);
      v5 = v4;
      if ( v4 > v3 )
      {
        LODWORD(v7) = v3;
        LODWORD(v6) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 845, ASSERT_TYPE_ASSERT, "( weaponCount ) <= ( maxWeaponCount )", "weaponCount not in [0, maxWeaponCount]\n\t%u not in [0, %u]", v6, v7) )
          __debugbreak();
      }
      SV_StreamSync_AddWorldWeaponLoad(&weapons, weaponSources, v5);
    }
  }
}

/*
==============
G_WeaponStreaming_PrintGameWeaponRequestsForClient
==============
*/
void G_WeaponStreaming_PrintGameWeaponRequestsForClient(const unsigned int clientIndex)
{
  SvClient *CommonClient; 
  unsigned int v3; 
  SvClient *v4; 
  unsigned int MaxWorldEntryCount; 
  int v6; 
  unsigned int v7; 
  unsigned int v8; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  Weapon *p_weapons; 
  bool HasStreamedModels; 
  bool HasWorldWeaponsLoaded; 
  const char *v16; 
  const char *v17; 
  const char *v18; 
  __int64 v19; 
  unsigned int v20; 
  unsigned int inOutWeaponCount[4]; 
  Weapon weapons; 
  unsigned int weaponSources[128]; 

  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(clientIndex);
  v3 = SvClient::ms_clientCount;
  v4 = CommonClient;
  MaxWorldEntryCount = Com_StreamSync_GetMaxWorldEntryCount(STREAM_SYNC_WORLD_TYPE_WEAPON, SvClient::ms_clientCount);
  v6 = 20;
  v7 = MaxWorldEntryCount;
  if ( v3 <= 0x14 )
    v6 = v3;
  v8 = 2 * v6 + 24;
  if ( MaxWorldEntryCount > v8 )
  {
    v20 = v8;
    LODWORD(v19) = MaxWorldEntryCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 1093, ASSERT_TYPE_ASSERT, "( maxWorldWeaponCount ) <= ( ( ((2) * (maxClientCount <= (20) ? maxClientCount : (20)) + 16 + (8)) ) )", "maxWorldWeaponCount not in [0, MAX_WORLD_WEAPONS_STREAMED_DYNAMIC( maxClientCount )]\n\t%u not in [0, %u]", v19, v20) )
      __debugbreak();
  }
  v9 = 0;
  inOutWeaponCount[0] = 0;
  inOutWeaponCount[0] = G_WeaponStreaming_CollectWorldRequestWeapons(&weapons, weaponSources, inOutWeaponCount, v7);
  v10 = inOutWeaponCount[0];
  inOutWeaponCount[0] = G_WeaponStreaming_CollectGameRequestWeapons(&weapons, weaponSources, inOutWeaponCount, v7);
  v11 = inOutWeaponCount[0];
  inOutWeaponCount[0] = G_WeaponStreaming_CollectClientRequestWeapons(&weapons, weaponSources, inOutWeaponCount, v7);
  v12 = inOutWeaponCount[0];
  Com_Printf(15, "***** Begin Game Weapon Request List For Client '%s' *****\n", &v4[4].lastUsercmd.selectedLoc[1]);
  if ( v12 )
  {
    p_weapons = &weapons;
    do
    {
      HasStreamedModels = BG_WeaponHasStreamedModels(p_weapons);
      HasWorldWeaponsLoaded = G_WeaponStreaming_HasWorldWeaponsLoaded(clientIndex, p_weapons, 1u);
      if ( v9 >= v10 )
      {
        v16 = "Client";
        if ( v9 < v11 )
          v16 = "Script";
      }
      else
      {
        v16 = "World";
      }
      BG_GetWeaponName(p_weapons, (char *)weaponSources, 0x200u);
      v17 = "False";
      if ( HasStreamedModels )
        v17 = "True";
      v18 = "False";
      if ( HasWorldWeaponsLoaded )
        v18 = "True";
      Com_Printf(15, "Weapon World Request [%d] - Source:%s Loaded:%s Streamed:%s Weapon:%s\n", v9++, v16, v18, v17, (const char *)weaponSources);
      ++p_weapons;
    }
    while ( v9 < inOutWeaponCount[0] );
  }
  Com_Printf(15, "***** End Game Weapon Request List *****\n");
}

/*
==============
G_WeaponStreaming_PrintViewWeaponRequests
==============
*/
void G_WeaponStreaming_PrintViewWeaponRequests(const unsigned int clientIndex)
{
  __int64 v1; 
  SvClient *CommonClient; 
  unsigned int MaxViewRequestCount; 
  unsigned int v4; 
  const Weapon *v5; 
  bool HasStreamedModels; 
  bool HasViewWeaponsLoaded; 
  const char *v8; 
  const char *v9; 
  char *fmt; 
  __int64 v11; 
  __int64 v13; 
  int maxclients; 
  char output[512]; 

  v1 = clientIndex;
  if ( clientIndex >= level.maxclients )
  {
    maxclients = level.maxclients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 1189, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( level.maxclients )", "clientIndex doesn't index level.maxclients\n\t%i not in [0, %i)", clientIndex, maxclients) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= 0x800 )
  {
    LODWORD(v13) = 2048;
    LODWORD(v11) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v11, v13) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[(int)v1].r.isInUse != g_entityIsInUse[(int)v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[(int)v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 1190, ASSERT_TYPE_ASSERT, "( G_IsEntityInUse( static_cast<int>( clientIndex ) ) )", (const char *)&queryFormat, "G_IsEntityInUse( static_cast<int>( clientIndex ) )") )
    __debugbreak();
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(v1);
  MaxViewRequestCount = G_WeaponStreaming_GetMaxViewRequestCount(v1);
  Com_Printf(15, "***** Begin Client '%s' View Weapon Request List *****\n", &CommonClient[4].lastUsercmd.selectedLoc[1]);
  v4 = 0;
  if ( MaxViewRequestCount )
  {
    v5 = (Weapon *)((char *)&s_viewWeaponRequestList.weapon + 1728 * v1);
    do
    {
      if ( *(_DWORD *)&v5[-1].attachmentVariationIndices[21] == -1 )
      {
        BG_GetWeaponName(v5, output, 0x200u);
        HasStreamedModels = BG_WeaponHasStreamedModels(v5);
        HasViewWeaponsLoaded = G_WeaponStreaming_HasViewWeaponsLoaded(v1, v5, 1u);
        v8 = "False";
        v9 = "False";
        if ( HasStreamedModels )
          v8 = "True";
        if ( HasViewWeaponsLoaded )
          v9 = "True";
        LODWORD(fmt) = *(_DWORD *)&v5[-1].weaponCamo;
        Com_Printf(15, "Weapon View Request [%d] - SourceMask:0x%1x Frame:%d Loaded:%s Streamed:%s Weapon:%s\n", v4, *(unsigned int *)&v5[-1].attachmentVariationIndices[25], fmt, v9, v8, output);
      }
      ++v4;
      v5 = (const Weapon *)((char *)v5 + 72);
    }
    while ( v4 < MaxViewRequestCount );
  }
  Com_Printf(15, "***** End Client[%d] View Weapon Request List *****\n", (unsigned int)v1);
}

/*
==============
G_WeaponStreaming_PrintWeaponRequests
==============
*/
void G_WeaponStreaming_PrintWeaponRequests(const char *const requestName, const Weapon *const weapons, const unsigned int numWeapons)
{
  unsigned int i; 
  bool v7; 
  const char *v8; 
  char output[512]; 

  if ( !requestName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 1160, ASSERT_TYPE_ASSERT, "(requestName)", (const char *)&queryFormat, "requestName") )
    __debugbreak();
  if ( !weapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 1161, ASSERT_TYPE_ASSERT, "(weapons)", (const char *)&queryFormat, "weapons") )
    __debugbreak();
  Com_Printf(15, "***** Begin %s Weapon Request List *****\n", requestName);
  for ( i = 0; i < numWeapons; ++weapons )
  {
    if ( weapons->weaponIdx )
    {
      BG_GetWeaponName(weapons, output, 0x200u);
      v7 = !BG_WeaponHasStreamedModels(weapons);
      v8 = "False";
      if ( !v7 )
        v8 = "True";
      Com_Printf(15, "Weapon Request [%d] - Streamed:%s Weapon:%s\n", i, v8, output);
    }
    ++i;
  }
  Com_Printf(15, "***** End Weapon Request List *****\n");
}

/*
==============
G_WeaponStreaming_ReadMigrationState
==============
*/
void G_WeaponStreaming_ReadMigrationState(MemoryFile *const memFile)
{
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 1034, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  MemFile_ReadData(memFile, 0x54600ui64, &s_viewWeaponRequestList);
  MemFile_ReadData(memFile, 0x69780ui64, s_worldWeaponRequestList);
  MemFile_ReadData(memFile, 0x780ui64, &s_gameWeaponRequestList);
}

/*
==============
G_WeaponStreaming_RemoveViewWeaponsFromSource
==============
*/
void G_WeaponStreaming_RemoveViewWeaponsFromSource(const unsigned int clientNum, const AssetStreamingRequestSource source)
{
  __int64 v3; 
  unsigned int MaxViewRequestCount; 
  int maxclients; 

  v3 = clientNum;
  if ( clientNum >= level.maxclients )
  {
    maxclients = level.maxclients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 128, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, maxclients) )
      __debugbreak();
  }
  MaxViewRequestCount = G_WeaponStreaming_GetMaxViewRequestCount(v3);
  BG_AssetStreaming_RemoveRequestsFromSource(&s_viewWeaponRequestList + 24 * v3, MaxViewRequestCount, source);
}

/*
==============
G_WeaponStreaming_RemoveWorldWeaponsFromSource
==============
*/
void G_WeaponStreaming_RemoveWorldWeaponsFromSource(const unsigned int clientNum, const AssetStreamingRequestSource source)
{
  __int64 v3; 
  int maxclients; 

  v3 = clientNum;
  if ( clientNum >= level.maxclients )
  {
    maxclients = level.maxclients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 157, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, maxclients) )
      __debugbreak();
  }
  BG_AssetStreaming_RemoveRequestsFromSource(s_worldWeaponRequestList[v3].requestItems, 0x1Eu, source);
}

/*
==============
G_WeaponStreaming_SetClassSelectViewWeapons
==============
*/
__int64 G_WeaponStreaming_SetClassSelectViewWeapons(const unsigned int clientNum, const Weapon *const weapons, const unsigned int weaponCount)
{
  if ( clientNum >= level.maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 307, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, level.maxclients) )
    __debugbreak();
  if ( !weapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 308, ASSERT_TYPE_ASSERT, "( weapons )", (const char *)&queryFormat, "weapons") )
    __debugbreak();
  return G_WeaponStreaming_AddViewWeaponsFromList(clientNum, weapons, weaponCount, ASSET_STREAMING_REQUEST_CLASS_SELECT);
}

/*
==============
G_WeaponStreaming_SetClassSelectWorldWeapons
==============
*/
__int64 G_WeaponStreaming_SetClassSelectWorldWeapons(const unsigned int clientNum, const Weapon *const weapons, const unsigned int weaponCount)
{
  __int64 v3; 
  __int64 v5; 
  const dvar_t *v6; 
  SvClient *CommonClient; 
  __int64 v8; 
  bool v9; 
  int v10; 
  __int64 v12; 
  __int64 v13; 
  char dest[64]; 

  v3 = weaponCount;
  v5 = clientNum;
  if ( clientNum >= level.maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 476, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, level.maxclients) )
    __debugbreak();
  if ( !weapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 477, ASSERT_TYPE_ASSERT, "( weapons )", (const char *)&queryFormat, "weapons") )
    __debugbreak();
  v6 = DCONST_DVARBOOL_g_weaponstreaming_verbose;
  if ( !DCONST_DVARBOOL_g_weaponstreaming_verbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_weaponstreaming_verbose") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    CommonClient = SvClient::GetCommonClient(v5);
    Com_sprintf(dest, 0x40ui64, "%s Class Select", &CommonClient[4].lastUsercmd.selectedLoc[1]);
    G_WeaponStreaming_PrintWeaponRequests(dest, weapons, v3);
  }
  G_WeaponStreaming_RemoveWorldWeaponsFromSource(v5, ASSET_STREAMING_REQUEST_CLASS_SELECT);
  if ( (_DWORD)v3 )
  {
    v8 = v3;
    do
    {
      if ( (unsigned int)v5 >= level.maxclients )
      {
        LODWORD(v13) = level.maxclients;
        LODWORD(v12) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 142, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      v9 = !BG_WeaponHasStreamedModels(weapons) || BG_AssetStreaming_AddWeaponAssetRequest(s_worldWeaponRequestList[v5].requestItems, 0x1Eu, weapons, ASSET_STREAMING_REQUEST_CLASS_SELECT, level.framenum);
      v10 = v3 - 1;
      if ( v9 )
        v10 = v3;
      ++weapons;
      LODWORD(v3) = v10;
      --v8;
    }
    while ( v8 );
  }
  return (unsigned int)v3;
}

/*
==============
G_WeaponStreaming_SetGameWorldWeapons
==============
*/
void G_WeaponStreaming_SetGameWorldWeapons(const Weapon *const weapons, const unsigned int weaponCount)
{
  unsigned int outCount; 

  if ( !weapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 563, ASSERT_TYPE_ASSERT, "( weapons )", (const char *)&queryFormat, "weapons") )
    __debugbreak();
  outCount = 0;
  memset_0(&s_gameWeaponRequestList, 0, sizeof(s_gameWeaponRequestList));
  if ( !G_WeaponStreaming_FilterStreamedWeaponList(s_gameWeaponRequestList.weapons, 0x20u, &outCount, weapons, weaponCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 573, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Array size exceeded for streamed weapons: %zu", 0x20ui64) )
    __debugbreak();
}

/*
==============
G_WeaponStreaming_SetNextEquippedViewWeapons
==============
*/
__int64 G_WeaponStreaming_SetNextEquippedViewWeapons(const unsigned int clientNum, const Weapon *const weapons, const unsigned int weaponCount)
{
  if ( clientNum >= level.maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 324, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, level.maxclients) )
    __debugbreak();
  if ( !weapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 325, ASSERT_TYPE_ASSERT, "( weapons )", (const char *)&queryFormat, "weapons") )
    __debugbreak();
  return G_WeaponStreaming_AddViewWeaponsFromList(clientNum, weapons, weaponCount, ASSET_STREAMING_REQUEST_NEXT_EQUIPPED_VIEW);
}

/*
==============
G_WeaponStreaming_SetNextEquippedWorldWeapons
==============
*/
__int64 G_WeaponStreaming_SetNextEquippedWorldWeapons(const unsigned int clientNum, const Weapon *const weapons, const unsigned int weaponCount)
{
  __int64 v3; 
  __int64 v5; 
  const dvar_t *v6; 
  SvClient *CommonClient; 
  __int64 v8; 
  bool v9; 
  int v10; 
  __int64 v12; 
  __int64 v13; 
  char dest[64]; 

  v3 = weaponCount;
  v5 = clientNum;
  if ( clientNum >= level.maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 521, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, level.maxclients) )
    __debugbreak();
  if ( !weapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 522, ASSERT_TYPE_ASSERT, "( weapons )", (const char *)&queryFormat, "weapons") )
    __debugbreak();
  v6 = DCONST_DVARBOOL_g_weaponstreaming_verbose;
  if ( !DCONST_DVARBOOL_g_weaponstreaming_verbose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_weaponstreaming_verbose") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    CommonClient = SvClient::GetCommonClient(v5);
    Com_sprintf(dest, 0x40ui64, "%s Next Equipped", &CommonClient[4].lastUsercmd.selectedLoc[1]);
    G_WeaponStreaming_PrintWeaponRequests(dest, weapons, v3);
  }
  G_WeaponStreaming_RemoveWorldWeaponsFromSource(v5, ASSET_STREAMING_REQUEST_NEXT_EQUIPPED_WORLD);
  if ( (_DWORD)v3 )
  {
    v8 = v3;
    do
    {
      if ( (unsigned int)v5 >= level.maxclients )
      {
        LODWORD(v13) = level.maxclients;
        LODWORD(v12) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 142, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      v9 = !BG_WeaponHasStreamedModels(weapons) || BG_AssetStreaming_AddWeaponAssetRequest(s_worldWeaponRequestList[v5].requestItems, 0x1Eu, weapons, ASSET_STREAMING_REQUEST_NEXT_EQUIPPED_WORLD, level.framenum);
      v10 = v3 - 1;
      if ( v9 )
        v10 = v3;
      ++weapons;
      LODWORD(v3) = v10;
      --v8;
    }
    while ( v8 );
  }
  return (unsigned int)v3;
}

/*
==============
G_WeaponStreaming_SetNextSpectateViewWeapons
==============
*/
__int64 G_WeaponStreaming_SetNextSpectateViewWeapons(const unsigned int clientNum, const Weapon *const weapons, const unsigned int weaponCount)
{
  if ( clientNum >= level.maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 290, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, level.maxclients) )
    __debugbreak();
  if ( !weapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 291, ASSERT_TYPE_ASSERT, "( ( weapons != nullptr ) )", "%s\n\t( weapons ) = %p", "( weapons != nullptr )", NULL) )
    __debugbreak();
  return G_WeaponStreaming_AddViewWeaponsFromList(clientNum, weapons, weaponCount, ASSET_STREAMING_REQUEST_NEXT_SPECTATE_VIEW);
}

/*
==============
G_WeaponStreaming_SetPickupViewWeapons
==============
*/
__int64 G_WeaponStreaming_SetPickupViewWeapons(const unsigned int clientNum, const Weapon *const weapons, const unsigned int weaponCount)
{
  if ( clientNum >= level.maxclients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 341, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", clientNum, level.maxclients) )
    __debugbreak();
  if ( !weapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 342, ASSERT_TYPE_ASSERT, "( weapons )", (const char *)&queryFormat, "weapons") )
    __debugbreak();
  return G_WeaponStreaming_AddViewWeaponsFromList(clientNum, weapons, weaponCount, ASSET_STREAMING_REQUEST_PICKUP);
}

/*
==============
G_WeaponStreaming_Shutdown
==============
*/
void G_WeaponStreaming_Shutdown(void)
{
  unsigned int maxclients; 
  unsigned int i; 
  int v2; 
  int v3; 
  int v4; 

  memset_0(&s_gameWeaponRequestList, 0, sizeof(s_gameWeaponRequestList));
  maxclients = level.maxclients;
  if ( (unsigned int)(level.maxclients - 1) > 0xC7 )
  {
    v4 = 200;
    v3 = 1;
    v2 = level.maxclients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 261, ASSERT_TYPE_ASSERT, "( 1 ) <= ( level.maxclients ) && ( level.maxclients ) <= ( 200 )", "level.maxclients not in [1, MAX_CLIENTS_MP]\n\t%i not in [%i, %i]", v2, v3, v4) )
      __debugbreak();
    maxclients = level.maxclients;
  }
  for ( i = 0; i < maxclients; ++i )
  {
    memset_0(&s_viewWeaponRequestList + 24 * i, 0, 0x6C0ui64);
    memset_0(&s_worldWeaponRequestList[i], 0, sizeof(WorldWeaponRequestList));
  }
}

/*
==============
G_WeaponStreaming_WriteMigrationState
==============
*/
void G_WeaponStreaming_WriteMigrationState(MemoryFile *const memFile)
{
  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_weapon_streaming_mp.cpp", 1023, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  MemFile_WriteData(memFile, 0x54600ui64, &s_viewWeaponRequestList);
  MemFile_WriteData(memFile, 0x69780ui64, s_worldWeaponRequestList);
  MemFile_WriteData(memFile, 0x780ui64, &s_gameWeaponRequestList);
}

