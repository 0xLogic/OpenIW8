/*
==============
SV_ClientAntiCheatMP_SerializeTDigest<32>
==============
*/

int __fastcall SV_ClientAntiCheatMP_SerializeTDigest<32>(DLogTDigest<32,8> *digest, unsigned __int8 *buffer, const unsigned __int64 bufferSize)
{
  return ??$SV_ClientAntiCheatMP_SerializeTDigest@$0CA@@@YAHAEAV?$DLogTDigest@$0CA@$07@@PEAE_K@Z(digest, buffer, bufferSize);
}

/*
==============
SV_ClientAntiCheatMP_LogClientSighted
==============
*/

void __fastcall SV_ClientAntiCheatMP_LogClientSighted(const int clientNum, const ClientBits *sightedPlayers, const int time)
{
  ?SV_ClientAntiCheatMP_LogClientSighted@@YAXHAEBUClientBits@@H@Z(clientNum, sightedPlayers, time);
}

/*
==============
SV_ClientAntiCheatMP_SendCollectedAntiCheatData
==============
*/

void __fastcall SV_ClientAntiCheatMP_SendCollectedAntiCheatData(const int clientNum)
{
  ?SV_ClientAntiCheatMP_SendCollectedAntiCheatData@@YAXH@Z(clientNum);
}

/*
==============
SV_ClientAntiCheatMP_FreeMemory
==============
*/

void SV_ClientAntiCheatMP_FreeMemory(void)
{
  ?SV_ClientAntiCheatMP_FreeMemory@@YAXXZ();
}

/*
==============
SV_ClientAntiCheatMP_LogPlayerLastStand
==============
*/

void __fastcall SV_ClientAntiCheatMP_LogPlayerLastStand(const gentity_s *attacker, const gentity_s *const victim, const Weapon *attackerWeapon, const bool attackerWeaponIsAlternate, const int deathMod, const hitLocation_t hitLoc, const int timeOffset)
{
  ?SV_ClientAntiCheatMP_LogPlayerLastStand@@YAXPEBUgentity_s@@QEBU1@AEBUWeapon@@_NHW4hitLocation_t@@H@Z(attacker, victim, attackerWeapon, attackerWeaponIsAlternate, deathMod, hitLoc, timeOffset);
}

/*
==============
SV_ClientAntiCheatMP_Init
==============
*/

void SV_ClientAntiCheatMP_Init(void)
{
  ?SV_ClientAntiCheatMP_Init@@YAXXZ();
}

/*
==============
SV_ClientAntiCheatMP_LogPlayerKill
==============
*/

void __fastcall SV_ClientAntiCheatMP_LogPlayerKill(const gentity_s *attacker, const gentity_s *const victim, const Weapon *attackerWeapon, const bool attackerWeaponIsAlternate, const int deathMod, const hitLocation_t hitLoc, const int timeOffset)
{
  ?SV_ClientAntiCheatMP_LogPlayerKill@@YAXPEBUgentity_s@@QEBU1@AEBUWeapon@@_NHW4hitLocation_t@@H@Z(attacker, victim, attackerWeapon, attackerWeaponIsAlternate, deathMod, hitLoc, timeOffset);
}

/*
==============
SV_ClientAntiCheatMP_SerializeTDigest<16>
==============
*/

int __fastcall SV_ClientAntiCheatMP_SerializeTDigest<16>(DLogTDigest<16,8> *digest, unsigned __int8 *buffer, const unsigned __int64 bufferSize)
{
  return ??$SV_ClientAntiCheatMP_SerializeTDigest@$0BA@@@YAHAEAV?$DLogTDigest@$0BA@$07@@PEAE_K@Z(digest, buffer, bufferSize);
}

/*
==============
SV_ClientAntiCheatMP_LogPlayerAngles
==============
*/

void __fastcall SV_ClientAntiCheatMP_LogPlayerAngles(const gentity_s *const player, const int time)
{
  ?SV_ClientAntiCheatMP_LogPlayerAngles@@YAXQEBUgentity_s@@H@Z(player, time);
}

/*
==============
SV_ClientAntiCheatMP_Shutdown
==============
*/

void SV_ClientAntiCheatMP_Shutdown(void)
{
  ?SV_ClientAntiCheatMP_Shutdown@@YAXXZ();
}

/*
==============
SV_ClientAntiCheatMP_LogPlayerKillCmd
==============
*/

void __fastcall SV_ClientAntiCheatMP_LogPlayerKillCmd(const void *const cmdInfo)
{
  ?SV_ClientAntiCheatMP_LogPlayerKillCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
SV_ClientAntiCheatMP_ResetLastRecordedPlayerAngles
==============
*/

void __fastcall SV_ClientAntiCheatMP_ResetLastRecordedPlayerAngles(const int clientNum)
{
  ?SV_ClientAntiCheatMP_ResetLastRecordedPlayerAngles@@YAXH@Z(clientNum);
}

/*
==============
SV_ClientAntiCheatMP_AllocateMemory
==============
*/

void __fastcall SV_ClientAntiCheatMP_AllocateMemory(HunkUser *const hunkUser)
{
  ?SV_ClientAntiCheatMP_AllocateMemory@@YAXQEAUHunkUser@@@Z(hunkUser);
}

/*
==============
SV_ClientAntiCheatMP_SerializeTDigest<16>
==============
*/
int SV_ClientAntiCheatMP_SerializeTDigest<16>(DLogTDigest<16,8> *digest, unsigned __int8 *buffer, const unsigned __int64 bufferSize)
{
  if ( bufferSize < 0x9E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 147, ASSERT_TYPE_ASSERT, "( bufferSize >= DLogTDigest<CENTROID_COUNT>::GetSerializedByteSize() )", (const char *)&queryFormat, "bufferSize >= DLogTDigest<CENTROID_COUNT>::GetSerializedByteSize()") )
    __debugbreak();
  DLogTDigest<16,8>::ProcessBufferedCentroids(digest);
  return DLogTDigest<16,8>::SerializeToProtobuf(digest, buffer, bufferSize);
}

/*
==============
SV_ClientAntiCheatMP_SerializeTDigest<32>
==============
*/
int SV_ClientAntiCheatMP_SerializeTDigest<32>(DLogTDigest<32,8> *digest, unsigned __int8 *buffer, const unsigned __int64 bufferSize)
{
  if ( bufferSize < 0x11E && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 147, ASSERT_TYPE_ASSERT, "( bufferSize >= DLogTDigest<CENTROID_COUNT>::GetSerializedByteSize() )", (const char *)&queryFormat, "bufferSize >= DLogTDigest<CENTROID_COUNT>::GetSerializedByteSize()") )
    __debugbreak();
  DLogTDigest<32,8>::ProcessBufferedCentroids(digest);
  return DLogTDigest<32,8>::SerializeToProtobuf(digest, buffer, bufferSize);
}

/*
==============
SV_AntiCheatMP_CollectionEnabled
==============
*/
__int64 SV_AntiCheatMP_CollectionEnabled()
{
  const dvar_t *v0; 

  v0 = DVARBOOL_sv_anticheat_dataCollectionEnabled;
  if ( !DVARBOOL_sv_anticheat_dataCollectionEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_anticheat_dataCollectionEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  return v0->current.color[0];
}

/*
==============
SV_ClientAntiCheatMP_AllocateMemory
==============
*/
void SV_ClientAntiCheatMP_AllocateMemory(HunkUser *const hunkUser)
{
  if ( !hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 760, ASSERT_TYPE_ASSERT, "( hunkUser )", (const char *)&queryFormat, "hunkUser") )
    __debugbreak();
  if ( s_killLogQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 761, ASSERT_TYPE_ASSERT, "( s_killLogQueue == nullptr )", (const char *)&queryFormat, "s_killLogQueue == nullptr") )
    __debugbreak();
  s_killLogQueue = (SvAntiCheatMP_PlayerKillLogDataQueue *)Mem_HunkUser_AllocInternal(hunkUser, 0x6818ui64, 8ui64, "SV_ClientAntiCheatMP_AllocateMemory");
}

/*
==============
SV_ClientAntiCheatMP_FreeMemory
==============
*/
void SV_ClientAntiCheatMP_FreeMemory(void)
{
  if ( s_svAntiCheatMP_isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 768, ASSERT_TYPE_ASSERT, "( !s_svAntiCheatMP_isInitialized )", (const char *)&queryFormat, "!s_svAntiCheatMP_isInitialized") )
    __debugbreak();
  s_killLogQueue = NULL;
}

/*
==============
SV_ClientAntiCheatMP_GatherPlayerKillOrLastStandData
==============
*/
void SV_ClientAntiCheatMP_GatherPlayerKillOrLastStandData(const bool isLastStand, const gentity_s *attacker, const gentity_s *const victim, const SvClientAntiCheatData *const attackerData, const Weapon *attackerWeapon, const bool attackerWeaponIsAlternate, const int deathMod, const hitLocation_t hitloc, const int timeOffset, const int attackerIndex, const int victimLastStandIndex, SvAntiCheatMP_PlayerKillLogData *r_data)
{
  int v17; 
  int v18; 
  const dvar_t *v19; 
  int integer; 
  __int64 clientNum; 
  int lastTime; 
  int v23; 
  int v24; 
  SvClient *CommonClient; 
  ClientPlatform *outClientPlatform; 
  __int64 v27; 
  msg_t buf; 
  unsigned __int8 data[1024]; 

  DebugWipe(r_data, 0x340ui64);
  DLog_Util_GetPlayerHeaderFieldsFromEntity(attacker, &r_data->attacker.unoId, &r_data->attacker.firstPartyUserId, &r_data->attacker.firstPartyAccountType, &r_data->attacker.userSessionId, (ClientPlatform *)r_data->attacker.platform);
  DLog_Util_GetPlayerHeaderFieldsFromEntity(victim, &r_data->victim.unoId, &r_data->victim.firstPartyUserId, &r_data->victim.firstPartyAccountType, &r_data->victim.userSessionId, (ClientPlatform *)r_data->victim.platform);
  r_data->isLastStand = isLastStand;
  v17 = deathMod;
  r_data->serverTime = level.time;
  r_data->attackerClientNum = attacker->s.clientNum;
  r_data->attackerEventIndex = attackerIndex;
  r_data->attackerOrigin = attacker->r.currentOrigin;
  r_data->attackerPitch = attacker->client->ps.viewangles.v[0];
  r_data->attackerYaw = attacker->client->ps.viewangles.v[1];
  r_data->attackerWeapon = *attackerWeapon;
  r_data->attackerWeaponIsAlternate = attackerWeaponIsAlternate;
  if ( (unsigned int)deathMod >= 0x19 )
  {
    LODWORD(outClientPlatform) = deathMod;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1114, ASSERT_TYPE_ASSERT, "(unsigned)( mod ) < (unsigned)( MOD_NUM )", "mod doesn't index MOD_NUM\n\t%i not in [0, %i)", outClientPlatform, 25) )
      __debugbreak();
  }
  if ( (unsigned int)deathMod <= 0x14 )
  {
    v18 = 1049102;
    if ( _bittest(&v18, deathMod) )
    {
      if ( (unsigned int)(hitloc - 1) <= 1 )
        v17 = 9;
    }
  }
  r_data->mod = v17;
  SV_ClientAntiCheatMP_LogPlayerKill_RecordAngularSpeed(attackerData, r_data);
  v19 = DVARINT_sv_anticheat_playerRecentlySighted_resetTime;
  if ( !DVARINT_sv_anticheat_playerRecentlySighted_resetTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_anticheat_playerRecentlySighted_resetTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  integer = v19->current.integer;
  if ( victim->s.clientNum >= 0xC8u )
  {
    LODWORD(v27) = 200;
    LODWORD(outClientPlatform) = victim->s.clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 288, ASSERT_TYPE_ASSERT, "(unsigned)( victim->s.clientNum ) < (unsigned)( ( sizeof( *array_counter( attackerData->recentlySightedClients ) ) + 0 ) )", "victim->s.clientNum doesn't index ARRAY_COUNT( attackerData->recentlySightedClients )\n\t%i not in [0, %i)", outClientPlatform, v27) )
      __debugbreak();
  }
  clientNum = victim->s.clientNum;
  lastTime = attackerData->recentlySightedClients[clientNum].lastTime;
  if ( lastTime < 0 || level.time - lastTime > integer )
    v23 = -1;
  else
    v23 = level.time - attackerData->recentlySightedClients[clientNum].firstTime;
  r_data->attacker_sighted_victim_time = v23;
  r_data->victimLastStandIndex = victimLastStandIndex;
  r_data->victimOrigin = victim->r.currentOrigin;
  r_data->inUse = 1;
  MSG_Init(&buf, data, 1020);
  MSG_WriteByte(&buf, 38i64);
  v24 = victim->s.clientNum;
  if ( (unsigned int)(v24 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v24, "signed", victim->s.clientNum) )
    __debugbreak();
  MSG_WriteShort(&buf, (__int16)v24);
  MSG_WriteLong(&buf, attackerIndex);
  MSG_WriteLong(&buf, level.time - timeOffset);
  CommonClient = SvClient::GetCommonClient(attacker->s.clientNum);
  if ( !CommonClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 316, ASSERT_TYPE_ASSERT, "(attackerCl)", (const char *)&queryFormat, "attackerCl") )
    __debugbreak();
  SV_Game_SendServerCommandMsg(CommonClient, SV_CMD_RELIABLE, &buf);
}

/*
==============
SV_ClientAntiCheatMP_GetDataForPlayer
==============
*/
__int64 SV_ClientAntiCheatMP_GetDataForPlayer(const int clientNum)
{
  SvClient *CommonClient; 

  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(clientNum);
  if ( CommonClient )
    return (__int64)&CommonClient[1116].lastUsercmd.angles;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 107, ASSERT_TYPE_ASSERT, "( attackerSvClient )", (const char *)&queryFormat, "attackerSvClient") )
    __debugbreak();
  return 321448i64;
}

/*
==============
SV_ClientAntiCheatMP_Init
==============
*/
void SV_ClientAntiCheatMP_Init(void)
{
  if ( !s_killLogQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 775, ASSERT_TYPE_ASSERT, "( s_killLogQueue != nullptr )", (const char *)&queryFormat, "s_killLogQueue != nullptr") )
    __debugbreak();
  if ( s_svAntiCheatMP_isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 776, ASSERT_TYPE_ASSERT, "( !s_svAntiCheatMP_isInitialized )", (const char *)&queryFormat, "!s_svAntiCheatMP_isInitialized") )
    __debugbreak();
  memset_0(s_killLogQueue, 0, sizeof(SvAntiCheatMP_PlayerKillLogDataQueue));
  s_svAntiCheatMP_isInitialized = 1;
}

/*
==============
SV_ClientAntiCheatMP_LogClientSighted
==============
*/
void SV_ClientAntiCheatMP_LogClientSighted(const int clientNum, const ClientBits *sightedPlayers, const int time)
{
  const dvar_t *v6; 
  __int64 DataForPlayer; 
  unsigned int v8; 
  __int64 v9; 
  unsigned int v10; 
  __int64 v11; 
  int v12; 
  __int64 v13; 
  __int64 v14; 
  int integer; 

  if ( (unsigned __int8)SV_AntiCheatMP_CollectionEnabled() )
  {
    v6 = DVARINT_sv_anticheat_playerRecentlySighted_resetTime;
    if ( !DVARINT_sv_anticheat_playerRecentlySighted_resetTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_anticheat_playerRecentlySighted_resetTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    integer = v6->current.integer;
    DataForPlayer = SV_ClientAntiCheatMP_GetDataForPlayer(clientNum);
    if ( !DataForPlayer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 685, ASSERT_TYPE_ASSERT, "( anticheatData )", (const char *)&queryFormat, "anticheatData") )
      __debugbreak();
    v8 = sightedPlayers->array[0];
    LODWORD(v9) = 0;
    while ( v8 )
    {
LABEL_12:
      v10 = __lzcnt(v8);
      v11 = v10 + 32 * (_DWORD)v9;
      if ( v10 >= 0x20 )
      {
        LODWORD(v14) = 32;
        LODWORD(v13) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( (v8 & (0x80000000 >> v10)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      v8 &= ~(0x80000000 >> v10);
      if ( (unsigned int)v11 >= 0xC8 )
      {
        LODWORD(v14) = 200;
        LODWORD(v13) = v10 + 32 * v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 692, ASSERT_TYPE_ASSERT, "(unsigned)( otherClientNum ) < (unsigned)( ( sizeof( *array_counter( anticheatData->recentlySightedClients ) ) + 0 ) )", "otherClientNum doesn't index ARRAY_COUNT( anticheatData->recentlySightedClients )\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      v12 = *(_DWORD *)(DataForPlayer + 8 * v11 + 12);
      if ( v12 < 0 || time - v12 > integer )
        *(_DWORD *)(DataForPlayer + 8 * v11 + 8) = time;
      *(_DWORD *)(DataForPlayer + 8 * v11 + 12) = time;
    }
    while ( 1 )
    {
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= 7 )
        break;
      v8 = sightedPlayers->array[v9];
      if ( v8 )
        goto LABEL_12;
    }
  }
}

/*
==============
SV_ClientAntiCheatMP_LogPlayerAngles
==============
*/
void SV_ClientAntiCheatMP_LogPlayerAngles(const gentity_s *const player, const int time)
{
  int clientNum; 
  __int64 DataForPlayer; 
  gclient_s *client; 
  __int64 v7; 
  int v8; 
  unsigned int v9; 
  float v12; 
  float v13; 
  float v15; 
  __int64 v18; 
  int v19; 
  unsigned __int8 v20; 
  int v21; 
  int v22; 
  __int128 v24; 
  float v25; 
  int v27; 
  __int64 v28; 
  __int64 v29; 

  if ( (unsigned __int8)SV_AntiCheatMP_CollectionEnabled() )
  {
    if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 601, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
      __debugbreak();
    if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 602, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
      __debugbreak();
    if ( player->s.clientNum != player->s.number )
    {
      LODWORD(v28) = player->s.clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 603, ASSERT_TYPE_ASSERT, "( player->s.clientNum ) == ( player->s.number )", "player->s.clientNum == player->s.number\n\t%i, %i", v28, player->s.number) )
        __debugbreak();
    }
    if ( player->client->ps.clientNum != player->s.clientNum )
    {
      LODWORD(v29) = player->s.clientNum;
      LODWORD(v28) = player->client->ps.clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 604, ASSERT_TYPE_ASSERT, "( player->client->ps.clientNum ) == ( player->s.clientNum )", "player->client->ps.clientNum == player->s.clientNum\n\t%i, %i", v28, v29) )
        __debugbreak();
    }
    if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 570, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
      __debugbreak();
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&player->client->ps.eFlags, ACTIVE, 0xBu) && player->client->ps.vehicleState.entity != 2047 || EntHandle::isDefined(&player->r.ownerNum) && EntHandle::ent(&player->r.ownerNum)->vehicle || GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&player->client->ps.pm_flags, ACTIVE, 0x1Cu) && player->client->ps.remoteControlEnt != 2047 )
    {
      clientNum = player->s.clientNum;
      if ( (unsigned __int8)SV_AntiCheatMP_CollectionEnabled() )
      {
        DataForPlayer = SV_ClientAntiCheatMP_GetDataForPlayer(clientNum);
        if ( !DataForPlayer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 669, ASSERT_TYPE_ASSERT, "( anticheatData )", (const char *)&queryFormat, "anticheatData") )
          __debugbreak();
        *(_DWORD *)(DataForPlayer + 1616) = -1;
        *(_DWORD *)(DataForPlayer + 20248) = 0;
      }
    }
    else
    {
      client = player->client;
      v7 = SV_ClientAntiCheatMP_GetDataForPlayer(player->s.clientNum);
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 616, ASSERT_TYPE_ASSERT, "( anticheatData )", (const char *)&queryFormat, "anticheatData") )
        __debugbreak();
      v8 = *(_DWORD *)(v7 + 1616);
      v9 = time - v8;
      if ( v8 < 0 || v9 - 1 > 0xC7 )
      {
        v27 = 0;
      }
      else
      {
        _XMM7 = 0i64;
        __asm { vroundss xmm2, xmm7, xmm1, 1 }
        v12 = 1.0 / _mm_cvtepi32_ps((__m128i)v9).m128_f32[0];
        v13 = (float)((float)((float)((float)(client->ps.viewangles.v[1] - *(float *)(v7 + 1612)) * 0.0027777778) - *(float *)&_XMM2) * 360000.0) * v12;
        __asm { vroundss xmm2, xmm7, xmm3, 1 }
        v15 = (float)((float)((float)((float)(client->ps.viewangles.v[0] - *(float *)(v7 + 1608)) * 0.0027777778) - *(float *)&_XMM2) * 360000.0) * v12;
        _XMM6 = v9;
        __asm { vcvtdq2pd xmm6, xmm6 }
        DLogTDigest<32,8>::Add((DLogTDigest<32,8> *)(v7 + 6280), v13, *(long double *)&_XMM6);
        DLogTDigest<32,8>::Add((DLogTDigest<32,8> *)(v7 + 1624), v15, *(long double *)&_XMM6);
        v18 = *(unsigned __int8 *)(v7 + 20248);
        *(float *)(v7 + 4 * (3 * v18 + 5064)) = v15;
        *(float *)(v7 + 12 * v18 + 20260) = v13;
        *(_DWORD *)(v7 + 12 * v18 + 20252) = v9;
        v19 = *(_DWORD *)(v7 + 20248);
        if ( v19 > 0 )
        {
          v20 = v19 - 1;
          v21 = *(_DWORD *)(v7 + 4 * (3i64 * v20 + 5064));
          v22 = *(_DWORD *)(v7 + 12i64 * v20 + 20260);
          v24 = 0i64;
          *(float *)&v24 = (float)(int)(v9 + *(_DWORD *)(v7 + 12i64 * v20 + 20252));
          _XMM0 = v24;
          v25 = *(float *)&v24 * 0.5;
          if ( v25 <= 0.0 )
          {
            __asm { vxorpd  xmm0, xmm0, xmm0 }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 158, ASSERT_TYPE_ASSERT, "( dtOut ) > ( 0.0f )", "dtOut > 0.0f\n\t%g, %g", v25, *(double *)&_XMM0) )
              __debugbreak();
          }
          DLogTDigest<32,8>::Add((DLogTDigest<32,8> *)(v7 + 10936), (float)((float)((float)(COERCE_FLOAT(LODWORD(v15) & _xmm) - COERCE_FLOAT(v21 & _xmm)) * 1000.0) * (float)(1.0 / v25)), v25);
          DLogTDigest<32,8>::Add((DLogTDigest<32,8> *)(v7 + 15592), (float)((float)((float)(COERCE_FLOAT(LODWORD(v13) & _xmm) - COERCE_FLOAT(v22 & _xmm)) * 1000.0) * (float)(1.0 / v25)), v25);
          v19 = *(_DWORD *)(v7 + 20248);
        }
        v27 = v19 + 1;
      }
      *(_DWORD *)(v7 + 20248) = v27;
      *(float *)(v7 + 1612) = client->ps.viewangles.v[1];
      *(float *)(v7 + 1608) = client->ps.viewangles.v[0];
      *(_DWORD *)(v7 + 1616) = time;
    }
  }
}

/*
==============
SV_ClientAntiCheatMP_LogPlayerKill
==============
*/
void SV_ClientAntiCheatMP_LogPlayerKill(const gentity_s *attacker, const gentity_s *const victim, const Weapon *attackerWeapon, const bool attackerWeaponIsAlternate, const int deathMod, const hitLocation_t hitLoc, const int timeOffset)
{
  const dvar_t *v10; 
  gentity_s *v11; 
  SvClientAntiCheatData *DataForPlayer; 
  int attackerIndex; 
  __int64 v14; 
  int v15; 
  int victimLastStandIndex; 
  gentity_s *attackera; 
  SvAntiCheatMP_PlayerKillLogData r_data; 

  attackera = (gentity_s *)attacker;
  if ( (unsigned __int8)SV_AntiCheatMP_CollectionEnabled() )
  {
    v10 = DVARBOOL_sv_anticheat_perKillEventEnabled;
    if ( !DVARBOOL_sv_anticheat_perKillEventEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_anticheat_perKillEventEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.enabled && SV_ClientAntiCheatMP_ShouldLogPlayerKillOrLastStand((const gentity_s **)&attackera) )
    {
      v11 = attackera;
      DataForPlayer = (SvClientAntiCheatData *)SV_ClientAntiCheatMP_GetDataForPlayer(attackera->s.clientNum);
      if ( !DataForPlayer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 543, ASSERT_TYPE_ASSERT, "( attackerData )", (const char *)&queryFormat, "attackerData") )
        __debugbreak();
      attackerIndex = DataForPlayer->playerKnockAndKillsCount;
      Sys_InterlockedIncrement((volatile int *)DataForPlayer);
      v14 = SV_ClientAntiCheatMP_GetDataForPlayer(victim->s.clientNum);
      if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 548, ASSERT_TYPE_ASSERT, "( victimData )", (const char *)&queryFormat, "victimData") )
        __debugbreak();
      if ( victim->client->lastStand )
        v15 = *(_DWORD *)(v14 + 4);
      else
        v15 = 0;
      victimLastStandIndex = v15 - 1;
      if ( Sys_IsServerThread() )
      {
        SV_ClientAntiCheatMP_QueuePlayerKillOrLastStandLog(0, v11, victim, DataForPlayer, attackerWeapon, attackerWeaponIsAlternate, deathMod, hitLoc, timeOffset, attackerIndex, victimLastStandIndex);
      }
      else
      {
        r_data.inUse = 0;
        SV_ClientAntiCheatMP_GatherPlayerKillOrLastStandData(0, v11, victim, DataForPlayer, attackerWeapon, attackerWeaponIsAlternate, deathMod, hitLoc, timeOffset, attackerIndex, victimLastStandIndex, &r_data);
        SV_ClientAntiCheatMP_LogPlayerKillData(&r_data);
      }
    }
  }
}

/*
==============
SV_ClientAntiCheatMP_LogPlayerKillCmd
==============
*/
void SV_ClientAntiCheatMP_LogPlayerKillCmd(const void *const cmdInfo)
{
  volatile int *p_singleReaderLock; 
  SvAntiCheatMP_PlayerKillLogDataQueue *v2; 
  SvAntiCheatMP_PlayerKillLogDataQueue *v3; 
  volatile int *p_pendingCount; 
  int v5; 
  volatile int *v6; 
  __int64 v7; 
  __int64 v8; 
  int v9; 
  int v10; 
  char data; 

  if ( !s_killLogQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 445, ASSERT_TYPE_ASSERT, "( s_killLogQueue != nullptr )", (const char *)&queryFormat, "s_killLogQueue != nullptr") )
    __debugbreak();
  if ( !s_svAntiCheatMP_isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 446, ASSERT_TYPE_ASSERT, "( s_svAntiCheatMP_isInitialized )", (const char *)&queryFormat, "s_svAntiCheatMP_isInitialized") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF008080, "SV_ClientAntiCheatMP_LogPlayerKillCmd");
  p_singleReaderLock = &s_killLogQueue->singleReaderLock;
  if ( (((_BYTE)s_killLogQueue + 16) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_killLogQueue->singleReaderLock) )
    __debugbreak();
  if ( _InterlockedCompareExchange(p_singleReaderLock, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 452, ASSERT_TYPE_ASSERT, "( Sys_InterlockedCompareExchange( &s_killLogQueue->singleReaderLock, 1, 0 ) == 0 )", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_killLogQueue->singleReaderLock, 1, 0 ) == 0") )
    __debugbreak();
  v2 = s_killLogQueue;
  if ( s_killLogQueue->readIndex >= 0x20 )
  {
    v9 = 32;
    LODWORD(v7) = s_killLogQueue->readIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 453, ASSERT_TYPE_ASSERT, "(unsigned)( s_killLogQueue->readIndex ) < (unsigned)( ( sizeof( *array_counter( s_killLogQueue->data ) ) + 0 ) )", "s_killLogQueue->readIndex doesn't index ARRAY_COUNT( s_killLogQueue->data )\n\t%i not in [0, %i)", v7, v9) )
      __debugbreak();
    v2 = s_killLogQueue;
  }
  SV_ClientAntiCheatMP_LogPlayerKillData(&v2->data[v2->readIndex]);
  v3 = s_killLogQueue;
  if ( s_killLogQueue->readIndex >= 0x20 )
  {
    LODWORD(v8) = 32;
    LODWORD(v7) = s_killLogQueue->readIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 459, ASSERT_TYPE_ASSERT, "(unsigned)( s_killLogQueue->readIndex ) < (unsigned)( ( sizeof( *array_counter( s_killLogQueue->data ) ) + 0 ) )", "s_killLogQueue->readIndex doesn't index ARRAY_COUNT( s_killLogQueue->data )\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
    v3 = s_killLogQueue;
  }
  v3->data[v3->readIndex].inUse = 0;
  s_killLogQueue->readIndex = ((unsigned __int8)s_killLogQueue->readIndex + 1) & 0x1F;
  p_pendingCount = &s_killLogQueue->pendingCount;
  if ( (((_BYTE)s_killLogQueue + 8) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_killLogQueue->pendingCount) )
    __debugbreak();
  v5 = _InterlockedDecrement(p_pendingCount);
  v6 = &s_killLogQueue->singleReaderLock;
  if ( (((_BYTE)s_killLogQueue + 16) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_killLogQueue->singleReaderLock) )
    __debugbreak();
  if ( _InterlockedCompareExchange(v6, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 468, ASSERT_TYPE_ASSERT, "( Sys_InterlockedCompareExchange( &s_killLogQueue->singleReaderLock, 0, 1 ) == 1 )", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_killLogQueue->singleReaderLock, 0, 1 ) == 1") )
    __debugbreak();
  if ( v5 < 0 || (unsigned __int64)v5 > 0x1F )
  {
    v10 = 31;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 470, ASSERT_TYPE_ASSERT, "( 0 ) <= ( pendingCount ) && ( pendingCount ) <= ( ( sizeof( *array_counter( s_killLogQueue->data ) ) + 0 ) - 1 )", "pendingCount not in [0, ARRAY_COUNT( s_killLogQueue->data ) - 1]\n\t%i not in [%i, %i]", v7, 0i64, v10) )
      __debugbreak();
  }
  if ( v5 > 0 && !s_killLogQueue->isShuttingDown )
    Sys_AddWorkerCmd(WRKCMD_SV_CLIENT_ANTICHEAT_PLAYER_KILL, &data);
  Sys_ProfEndNamedEvent();
}

/*
==============
SV_ClientAntiCheatMP_LogPlayerKillData
==============
*/
void SV_ClientAntiCheatMP_LogPlayerKillData(const SvAntiCheatMP_PlayerKillLogData *r_data)
{
  unsigned __int64 unoId; 
  float v3; 
  float v4; 
  float attackerYaw; 
  const char *WeaponBaseName; 
  __int64 mod; 
  const char *v8; 
  float v9; 
  float v10; 
  ClientPlatform clientPlatform; 
  ClientPlatform clientPlatforma; 
  DLogContext context; 
  char buffer[4096]; 

  if ( !r_data->inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 371, ASSERT_TYPE_ASSERT, "( r_data.inUse )", (const char *)&queryFormat, "r_data.inUse") )
    __debugbreak();
  unoId = r_data->attacker.unoId;
  if ( !r_data->attacker.unoId )
    unoId = r_data->attacker.firstPartyUserId;
  if ( DLog_CreateContext(&context, unoId, buffer, 4096) && DLog_BeginEvent(&context, "dlog_event_sv_anticheat_player_killed") )
  {
    LOBYTE(clientPlatform) = r_data->attacker.platform[0];
    DLog_Util_FillPlayerHeader(&context, rowName, r_data->attacker.unoId, r_data->attacker.firstPartyUserId, r_data->attacker.firstPartyAccountType, r_data->attacker.userSessionId, clientPlatform);
    LOBYTE(clientPlatforma) = r_data->victim.platform[0];
    DLog_Util_FillPlayerHeader(&context, "victim", r_data->victim.unoId, r_data->victim.firstPartyUserId, r_data->victim.firstPartyAccountType, r_data->victim.userSessionId, clientPlatforma);
    DLog_Bool(&context, "is_last_stand", r_data->isLastStand);
    DLog_Int32(&context, "server_time", r_data->serverTime);
    DLog_Int32(&context, "attacker_clientnum", r_data->attackerClientNum);
    DLog_Int32(&context, "attacker_event_index", r_data->attackerEventIndex);
    v3 = r_data->attackerOrigin.v[2];
    v4 = r_data->attackerOrigin.v[1];
    if ( DLog_Float32(&context, "attacker_x", r_data->attackerOrigin.v[0]) && DLog_Float32(&context, "attacker_y", v4) )
      DLog_Float32(&context, "attacker_z", v3);
    attackerYaw = r_data->attackerYaw;
    if ( DLog_Float32(&context, "attacker_pitch", r_data->attackerPitch) )
      DLog_Float32(&context, "attacker_yaw", attackerYaw);
    WeaponBaseName = BG_GetWeaponBaseName(&r_data->attackerWeapon, r_data->attackerWeaponIsAlternate);
    DLog_String(&context, "attacker_weapon", WeaponBaseName, 0);
    mod = r_data->mod;
    if ( (unsigned int)mod > 0x18 )
      v8 = "badMOD";
    else
      v8 = SL_ConvertToString(*g_combat_modNames[mod]);
    DLog_String(&context, "death_mod", v8, 0);
    DLog_Int32(&context, "attacker_recent_angular_velocity_window", r_data->recentAngularVelocityWindow);
    DLog_UInt8Array(&context, "attacker_recent_pitch_velocity_tdigest", r_data->serializedRecentPitchVel, r_data->serializedRecentPitchVelSize);
    DLog_UInt8Array(&context, "attacker_recent_yaw_velocity_tdigest", r_data->serializedRecentYawVel, r_data->serializedRecentYawVelSize);
    DLog_UInt8Array(&context, "attacker_recent_pitch_accel_tdigest", r_data->serializedRecentPitchAccel, r_data->serializedRecentPitchAccelSize);
    DLog_UInt8Array(&context, "attacker_recent_yaw_accel_tdigest", r_data->serializedRecentYawAccel, r_data->serializedRecentYawAccelSize);
    DLog_Int32(&context, "attacker_sighted_victim_time", r_data->attacker_sighted_victim_time);
    DLog_Int32(&context, "victim_last_stand_index", r_data->victimLastStandIndex);
    v9 = r_data->victimOrigin.v[2];
    v10 = r_data->victimOrigin.v[1];
    if ( DLog_Float32(&context, "victim_x", r_data->victimOrigin.v[0]) && DLog_Float32(&context, "victim_y", v10) )
      DLog_Float32(&context, "victim_z", v9);
    if ( DLog_EndEvent(&context) )
      DLog_RecordContext(&context);
  }
}

/*
==============
SV_ClientAntiCheatMP_LogPlayerKill_RecordAngularSpeed
==============
*/
void SV_ClientAntiCheatMP_LogPlayerKill_RecordAngularSpeed(const SvClientAntiCheatData *const anticheatData, SvAntiCheatMP_PlayerKillLogData *inOutData)
{
  signed __int64 v2; 
  void *v4; 
  SvAntiCheatMP_PlayerKillLogData *v5; 
  const dvar_t *v7; 
  int v9; 
  __int64 v11; 
  DLogTDigestCentroid *m_processedCentroids; 
  __int64 v13; 
  __int64 v14; 
  DLogTDigestCentroid *m_unprocessedCentroidBuffer; 
  __int64 v16; 
  DLogTDigestCentroid *v18; 
  __int64 v19; 
  DLogTDigestCentroid *v20; 
  __int64 v21; 
  DLogTDigestCentroid *v23; 
  __int64 v24; 
  DLogTDigestCentroid *v25; 
  __int64 v26; 
  DLogTDigestCentroid *v28; 
  DLogTDigestCentroid *v29; 
  unsigned int v34; 
  int v35; 
  int v36; 
  __int64 v38; 
  __int64 v43; 
  __int64 m_unprocessedCentroidBufferIndex; 
  int weight; 
  float yawVelocity; 
  __int128 v52; 
  float v53; 
  float pitchVelocity; 
  float v55; 
  float v56; 
  float v57; 
  double v58; 
  __int128 v60; 
  __int64 v63; 
  __int64 v66; 
  int v69; 
  int v70; 
  int v71; 
  int v72; 
  int integer; 
  DLogTDigest<16,8> v75; 
  DLogTDigest<16,8> v76; 
  DLogTDigest<16,8> v77; 
  DLogTDigest<16,8> v78; 
  __int128 v79; 

  v4 = alloca(v2);
  v79 = _XMM11;
  v5 = inOutData;
  if ( !anticheatData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 166, ASSERT_TYPE_ASSERT, "( anticheatData )", (const char *)&queryFormat, "anticheatData") )
    __debugbreak();
  v7 = DVARINT_sv_anticheat_playerKilled_angle_speed_window;
  if ( !DVARINT_sv_anticheat_playerKilled_angle_speed_window && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_anticheat_playerKilled_angle_speed_window") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  integer = v7->current.integer;
  Sys_ProfBeginNamedEvent(0xFF008080, "SV_ClientAntiCheatMP_LogPlayerKill_RecordAngularSpeed-accum");
  __asm { vmovupd xmm0, cs:__xmm@00100000000000007fefffffffffffff }
  v9 = 0;
  v75.m_serializedHeaderByteSize = 22;
  __asm { vxorpd  xmm11, xmm11, xmm11 }
  v11 = 16i64;
  *(_QWORD *)&v75.m_unprocessedCentroidBufferIndex = 0i64;
  __asm { vmovupd xmmword ptr [rsp+25F0h+var_25A0.m_min], xmm0 }
  v75.m_disableAutoMerge = 0;
  m_processedCentroids = v75.m_processedCentroids;
  *(_OWORD *)&v75.m_processedWeightTotal = _XMM11;
  v13 = 16i64;
  do
  {
    DLogTDigestCentroid::DLogTDigestCentroid(m_processedCentroids++);
    --v13;
  }
  while ( v13 );
  v14 = 128i64;
  m_unprocessedCentroidBuffer = v75.m_unprocessedCentroidBuffer;
  v16 = 128i64;
  do
  {
    DLogTDigestCentroid::DLogTDigestCentroid(m_unprocessedCentroidBuffer++);
    --v16;
  }
  while ( v16 );
  __asm
  {
    vmovupd xmm0, cs:__xmm@00100000000000007fefffffffffffff
    vmovupd xmmword ptr [rbp+24F0h+var_1C70.m_min], xmm0
  }
  v76.m_serializedHeaderByteSize = 22;
  v18 = v76.m_processedCentroids;
  v76.m_disableAutoMerge = 0;
  v19 = 16i64;
  *(_OWORD *)&v76.m_processedWeightTotal = _XMM11;
  *(_QWORD *)&v76.m_unprocessedCentroidBufferIndex = 0i64;
  do
  {
    DLogTDigestCentroid::DLogTDigestCentroid(v18++);
    --v19;
  }
  while ( v19 );
  v20 = v76.m_unprocessedCentroidBuffer;
  v21 = 128i64;
  do
  {
    DLogTDigestCentroid::DLogTDigestCentroid(v20++);
    --v21;
  }
  while ( v21 );
  __asm
  {
    vmovupd xmm0, cs:__xmm@00100000000000007fefffffffffffff
    vmovupd xmmword ptr [rbp+24F0h+var_1340.m_min], xmm0
  }
  v77.m_serializedHeaderByteSize = 22;
  v23 = v77.m_processedCentroids;
  v77.m_disableAutoMerge = 0;
  v24 = 16i64;
  *(_OWORD *)&v77.m_processedWeightTotal = _XMM11;
  *(_QWORD *)&v77.m_unprocessedCentroidBufferIndex = 0i64;
  do
  {
    DLogTDigestCentroid::DLogTDigestCentroid(v23++);
    --v24;
  }
  while ( v24 );
  v25 = v77.m_unprocessedCentroidBuffer;
  v26 = 128i64;
  do
  {
    DLogTDigestCentroid::DLogTDigestCentroid(v25++);
    --v26;
  }
  while ( v26 );
  __asm
  {
    vmovupd xmm0, cs:__xmm@00100000000000007fefffffffffffff
    vmovupd xmmword ptr [rbp+24F0h+var_A10.m_min], xmm0
  }
  v78.m_serializedHeaderByteSize = 22;
  v28 = v78.m_processedCentroids;
  v78.m_disableAutoMerge = 0;
  *(_OWORD *)&v78.m_processedWeightTotal = _XMM11;
  *(_QWORD *)&v78.m_unprocessedCentroidBufferIndex = 0i64;
  do
  {
    DLogTDigestCentroid::DLogTDigestCentroid(v28++);
    --v11;
  }
  while ( v11 );
  v29 = v78.m_unprocessedCentroidBuffer;
  do
  {
    DLogTDigestCentroid::DLogTDigestCentroid(v29++);
    --v14;
  }
  while ( v14 );
  __asm { vmovupd xmm0, cs:__xmm@00100000000000007fefffffffffffff }
  *(_QWORD *)&v75.m_unprocessedCentroidBufferIndex = 0i64;
  __asm { vmovupd xmmword ptr [rsp+25F0h+var_25A0.m_min], xmm0 }
  *(_OWORD *)&v75.m_processedWeightTotal = _XMM11;
  memset_0(v75.m_processedCentroids, 0, 0x900ui64);
  __asm { vmovupd xmm0, cs:__xmm@00100000000000007fefffffffffffff }
  *(_QWORD *)&v76.m_unprocessedCentroidBufferIndex = 0i64;
  __asm { vmovupd xmmword ptr [rbp+24F0h+var_1C70.m_min], xmm0 }
  *(_OWORD *)&v76.m_processedWeightTotal = _XMM11;
  memset_0(v76.m_processedCentroids, 0, 0x900ui64);
  __asm { vmovupd xmm0, cs:__xmm@00100000000000007fefffffffffffff }
  *(_QWORD *)&v77.m_unprocessedCentroidBufferIndex = 0i64;
  __asm { vmovupd xmmword ptr [rbp+24F0h+var_1340.m_min], xmm0 }
  *(_OWORD *)&v77.m_processedWeightTotal = _XMM11;
  memset_0(v77.m_processedCentroids, 0, 0x900ui64);
  __asm { vmovupd xmm0, cs:__xmm@00100000000000007fefffffffffffff }
  *(_QWORD *)&v78.m_unprocessedCentroidBufferIndex = 0i64;
  __asm { vmovupd xmmword ptr [rbp+24F0h+var_A10.m_min], xmm0 }
  *(_OWORD *)&v78.m_processedWeightTotal = _XMM11;
  memset_0(v78.m_processedCentroids, 0, 0x900ui64);
  v34 = 0;
  v35 = anticheatData->speedIndex - 1;
  if ( v35 >= 0 )
  {
    v36 = anticheatData->speedIndex - 2;
    while ( 1 )
    {
      if ( v34 >= 0x100 )
      {
LABEL_48:
        v5 = inOutData;
        goto LABEL_49;
      }
      _XMM7 = 0i64;
      v38 = 3i64 * (unsigned __int8)v35 + 5064;
      __asm { vcvtsi2sd xmm7, xmm7, dword ptr [r13+rbx*4+4F1Ch] }
      _XMM6 = COERCE_UNSIGNED_INT64(*((float *)&anticheatData->playerKnockAndKillsCount + v38));
      if ( (unsigned __int64)v75.m_unprocessedCentroidBufferIndex < 0x70 )
        goto LABEL_29;
      if ( !v75.m_disableAutoMerge )
        break;
      DLog_PrintError("Auto merge disabled - centroid buffer overflow\n");
LABEL_30:
      _XMM7 = 0i64;
      __asm { vcvtsi2sd xmm7, xmm7, dword ptr [r13+rbx*4+4F1Ch] }
      _XMM6 = COERCE_UNSIGNED_INT64(anticheatData->angularVelocityHistory[(unsigned __int8)v35].yawVelocity);
      if ( (unsigned __int64)v76.m_unprocessedCentroidBufferIndex < 0x70 )
        goto LABEL_33;
      if ( !v76.m_disableAutoMerge )
      {
        DLogTDigest<16,8>::ProcessBufferedCentroids(&v76);
LABEL_33:
        __asm
        {
          vmaxsd  xmm1, xmm6, [rbp+24F0h+var_1C70.m_max]
          vminsd  xmm0, xmm6, [rbp+24F0h+var_1C70.m_min]
        }
        m_unprocessedCentroidBufferIndex = v76.m_unprocessedCentroidBufferIndex;
        v76.m_max = *(double *)&_XMM1;
        v76.m_min = *(double *)&_XMM0;
        v76.m_unprocessedCentroidBuffer[m_unprocessedCentroidBufferIndex].m_mean = *(double *)&_XMM6;
        v76.m_unprocessedCentroidBuffer[m_unprocessedCentroidBufferIndex].m_weight = *(double *)&_XMM7;
        ++v76.m_unprocessedCentroidBufferIndex;
        v76.m_unprocessedWeightTotal = *(double *)&_XMM7 + v76.m_unprocessedWeightTotal;
        goto LABEL_34;
      }
      DLog_PrintError("Auto merge disabled - centroid buffer overflow\n");
LABEL_34:
      weight = anticheatData->angularVelocityHistory[(unsigned __int8)v35].weight;
      v9 += weight;
      if ( v35 <= 0 )
        goto LABEL_46;
      yawVelocity = anticheatData->angularVelocityHistory[(unsigned __int8)v35].yawVelocity;
      v52 = *(&anticheatData->playerKnockAndKillsCount + v38);
      v53 = anticheatData->angularVelocityHistory[(unsigned __int8)v36].yawVelocity;
      pitchVelocity = anticheatData->angularVelocityHistory[(unsigned __int8)v36].pitchVelocity;
      v56 = (float)(weight + anticheatData->angularVelocityHistory[(unsigned __int8)v36].weight) * 0.5;
      v55 = v56;
      if ( v56 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 158, ASSERT_TYPE_ASSERT, "( dtOut ) > ( 0.0f )", "dtOut > 0.0f\n\t%g, %g", v56, *(double *)&_XMM11) )
        __debugbreak();
      v57 = (float)((float)(COERCE_FLOAT(LODWORD(yawVelocity) & _xmm) - COERCE_FLOAT(LODWORD(v53) & _xmm)) * 1000.0) * (float)(1.0 / v56);
      v60 = v52 & (unsigned int)_xmm;
      v58 = v55;
      *(double *)&v60 = (float)((float)((float)(*(float *)&v60 - COERCE_FLOAT(LODWORD(pitchVelocity) & _xmm)) * 1000.0) * (float)(1.0 / v55));
      _XMM6 = v60;
      if ( (unsigned __int64)v77.m_unprocessedCentroidBufferIndex < 0x70 )
        goto LABEL_41;
      if ( !v77.m_disableAutoMerge )
      {
        DLogTDigest<16,8>::ProcessBufferedCentroids(&v77);
LABEL_41:
        __asm
        {
          vmaxsd  xmm1, xmm6, [rbp+24F0h+var_1340.m_max]
          vminsd  xmm0, xmm6, [rbp+24F0h+var_1340.m_min]
        }
        v63 = v77.m_unprocessedCentroidBufferIndex;
        v77.m_max = *(double *)&_XMM1;
        v77.m_min = *(double *)&_XMM0;
        v77.m_unprocessedCentroidBuffer[v63].m_mean = *(double *)&v60;
        v77.m_unprocessedCentroidBuffer[v63].m_weight = v58;
        ++v77.m_unprocessedCentroidBufferIndex;
        v77.m_unprocessedWeightTotal = v58 + v77.m_unprocessedWeightTotal;
        goto LABEL_42;
      }
      DLog_PrintError("Auto merge disabled - centroid buffer overflow\n");
LABEL_42:
      if ( (unsigned __int64)v78.m_unprocessedCentroidBufferIndex < 0x70 )
        goto LABEL_45;
      if ( !v78.m_disableAutoMerge )
      {
        DLogTDigest<16,8>::ProcessBufferedCentroids(&v78);
LABEL_45:
        _XMM0 = *(unsigned __int64 *)&v78.m_min;
        _XMM2 = *(unsigned __int64 *)&v78.m_max;
        v66 = v78.m_unprocessedCentroidBufferIndex;
        __asm { vminsd  xmm1, xmm0, xmm6 }
        v78.m_min = *(double *)&_XMM1;
        __asm { vmaxsd  xmm0, xmm2, xmm6 }
        v78.m_max = *(double *)&_XMM0;
        v78.m_unprocessedCentroidBuffer[v66].m_mean = v57;
        v78.m_unprocessedCentroidBuffer[v66].m_weight = v58;
        ++v78.m_unprocessedCentroidBufferIndex;
        v78.m_unprocessedWeightTotal = v58 + v78.m_unprocessedWeightTotal;
        goto LABEL_46;
      }
      DLog_PrintError("Auto merge disabled - centroid buffer overflow\n");
LABEL_46:
      if ( v9 < integer )
      {
        LOBYTE(v36) = v36 - 1;
        ++v34;
        if ( --v35 >= 0 )
          continue;
      }
      goto LABEL_48;
    }
    DLogTDigest<16,8>::ProcessBufferedCentroids(&v75);
LABEL_29:
    __asm
    {
      vmaxsd  xmm1, xmm6, [rsp+25F0h+var_25A0.m_max]
      vminsd  xmm0, xmm6, [rsp+25F0h+var_25A0.m_min]
    }
    v43 = v75.m_unprocessedCentroidBufferIndex;
    v75.m_max = *(double *)&_XMM1;
    v75.m_min = *(double *)&_XMM0;
    v75.m_unprocessedCentroidBuffer[v43].m_mean = *(double *)&_XMM6;
    v75.m_unprocessedCentroidBuffer[v43].m_weight = *(double *)&_XMM7;
    ++v75.m_unprocessedCentroidBufferIndex;
    v75.m_unprocessedWeightTotal = *(double *)&_XMM7 + v75.m_unprocessedWeightTotal;
    goto LABEL_30;
  }
LABEL_49:
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF008080, "SV_ClientAntiCheatMP_LogPlayerKill_RecordAngularSpeed-ser");
  v5->recentAngularVelocityWindow = v9;
  DLogTDigest<16,8>::ProcessBufferedCentroids(&v75);
  v69 = DLogTDigest<16,8>::SerializeToProtobuf(&v75, v5->serializedRecentPitchVel, 0x9Eui64);
  v5->serializedRecentPitchVelSize = truncate_cast<unsigned short,int>(v69);
  DLogTDigest<16,8>::ProcessBufferedCentroids(&v76);
  v70 = DLogTDigest<16,8>::SerializeToProtobuf(&v76, v5->serializedRecentYawVel, 0x9Eui64);
  v5->serializedRecentYawVelSize = truncate_cast<unsigned short,int>(v70);
  DLogTDigest<16,8>::ProcessBufferedCentroids(&v77);
  v71 = DLogTDigest<16,8>::SerializeToProtobuf(&v77, v5->serializedRecentPitchAccel, 0x9Eui64);
  v5->serializedRecentPitchAccelSize = truncate_cast<unsigned short,int>(v71);
  DLogTDigest<16,8>::ProcessBufferedCentroids(&v78);
  v72 = DLogTDigest<16,8>::SerializeToProtobuf(&v78, v5->serializedRecentYawAccel, 0x9Eui64);
  v5->serializedRecentYawAccelSize = truncate_cast<unsigned short,int>(v72);
  Sys_ProfEndNamedEvent();
}

/*
==============
SV_ClientAntiCheatMP_LogPlayerLastStand
==============
*/
void SV_ClientAntiCheatMP_LogPlayerLastStand(const gentity_s *attacker, const gentity_s *const victim, const Weapon *attackerWeapon, const bool attackerWeaponIsAlternate, const int deathMod, const hitLocation_t hitLoc, const int timeOffset)
{
  const dvar_t *v10; 
  __int64 DataForPlayer; 
  int victimLastStandIndex; 
  gentity_s *v13; 
  SvClientAntiCheatData *v14; 
  int attackerIndex; 
  gentity_s *attackera; 
  SvAntiCheatMP_PlayerKillLogData r_data; 

  attackera = (gentity_s *)attacker;
  if ( (unsigned __int8)SV_AntiCheatMP_CollectionEnabled() )
  {
    v10 = DVARBOOL_sv_anticheat_perKillEventEnabled;
    if ( !DVARBOOL_sv_anticheat_perKillEventEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_anticheat_perKillEventEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    if ( v10->current.enabled )
    {
      if ( !victim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 495, ASSERT_TYPE_ASSERT, "( victim )", (const char *)&queryFormat, "victim") )
        __debugbreak();
      if ( !victim->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 496, ASSERT_TYPE_ASSERT, "( victim->client )", (const char *)&queryFormat, "victim->client") )
        __debugbreak();
      DataForPlayer = SV_ClientAntiCheatMP_GetDataForPlayer(victim->s.clientNum);
      if ( !DataForPlayer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 500, ASSERT_TYPE_ASSERT, "( victimData )", (const char *)&queryFormat, "victimData") )
        __debugbreak();
      victimLastStandIndex = *(_DWORD *)(DataForPlayer + 4);
      Sys_InterlockedIncrement((volatile int *)(DataForPlayer + 4));
      if ( SV_ClientAntiCheatMP_ShouldLogPlayerKillOrLastStand((const gentity_s **)&attackera) )
      {
        v13 = attackera;
        v14 = (SvClientAntiCheatData *)SV_ClientAntiCheatMP_GetDataForPlayer(attackera->s.clientNum);
        if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 510, ASSERT_TYPE_ASSERT, "( attackerData )", (const char *)&queryFormat, "attackerData") )
          __debugbreak();
        attackerIndex = v14->playerKnockAndKillsCount;
        Sys_InterlockedIncrement((volatile int *)v14);
        if ( Sys_IsServerThread() )
        {
          SV_ClientAntiCheatMP_QueuePlayerKillOrLastStandLog(1, v13, victim, v14, attackerWeapon, attackerWeaponIsAlternate, deathMod, hitLoc, timeOffset, attackerIndex, victimLastStandIndex);
        }
        else
        {
          r_data.inUse = 0;
          SV_ClientAntiCheatMP_GatherPlayerKillOrLastStandData(1, v13, victim, v14, attackerWeapon, attackerWeaponIsAlternate, deathMod, hitLoc, timeOffset, attackerIndex, victimLastStandIndex, &r_data);
          SV_ClientAntiCheatMP_LogPlayerKillData(&r_data);
        }
      }
    }
  }
}

/*
==============
SV_ClientAntiCheatMP_QueuePlayerKillOrLastStandLog
==============
*/
void SV_ClientAntiCheatMP_QueuePlayerKillOrLastStandLog(const bool isLastStand, const gentity_s *attacker, const gentity_s *const victim, const SvClientAntiCheatData *const attackerData, const Weapon *attackerWeapon, const bool attackerWeaponIsAlternate, const int deathMod, const hitLocation_t hitloc, const int timeOffset, const int attackerIndex, const int victimLastStandIndex)
{
  volatile int *p_pendingCount; 
  volatile int *p_singleWriterLock; 
  SvAntiCheatMP_PlayerKillLogDataQueue *v17; 
  SvAntiCheatMP_PlayerKillLogData *r_data; 
  volatile int *v19; 
  int v20; 
  volatile int *v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  char data; 

  if ( !s_svAntiCheatMP_isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 323, ASSERT_TYPE_ASSERT, "( s_svAntiCheatMP_isInitialized )", (const char *)&queryFormat, "s_svAntiCheatMP_isInitialized") )
    __debugbreak();
  if ( !s_killLogQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 324, ASSERT_TYPE_ASSERT, "( s_killLogQueue != nullptr )", (const char *)&queryFormat, "s_killLogQueue != nullptr") )
    __debugbreak();
  if ( s_killLogQueue->isShuttingDown && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 325, ASSERT_TYPE_ASSERT, "( !s_killLogQueue->isShuttingDown )", (const char *)&queryFormat, "!s_killLogQueue->isShuttingDown") )
    __debugbreak();
  if ( !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 328, ASSERT_TYPE_ASSERT, "( Sys_IsServerThread() )", (const char *)&queryFormat, "Sys_IsServerThread()") )
    __debugbreak();
  if ( !attacker && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 330, ASSERT_TYPE_ASSERT, "( attacker )", (const char *)&queryFormat, "attacker") )
    __debugbreak();
  if ( !attacker->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 331, ASSERT_TYPE_ASSERT, "( attacker->client )", (const char *)&queryFormat, "attacker->client") )
    __debugbreak();
  if ( !victim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 332, ASSERT_TYPE_ASSERT, "( victim )", (const char *)&queryFormat, "victim") )
    __debugbreak();
  if ( !victim->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 333, ASSERT_TYPE_ASSERT, "( victim->client )", (const char *)&queryFormat, "victim->client") )
    __debugbreak();
  if ( !attackerData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 334, ASSERT_TYPE_ASSERT, "( attackerData )", (const char *)&queryFormat, "attackerData") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF008080, "SV_ClientAntiCheatMP_QueuePlayerKillOrLastStandLog");
  p_pendingCount = &s_killLogQueue->pendingCount;
  if ( (((_BYTE)s_killLogQueue + 8) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &s_killLogQueue->pendingCount) )
    __debugbreak();
  if ( (unsigned __int64)*(int *)p_pendingCount < 0x20 )
  {
    p_singleWriterLock = &s_killLogQueue->singleWriterLock;
    if ( (((_BYTE)s_killLogQueue + 20) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_killLogQueue->singleWriterLock) )
      __debugbreak();
    if ( _InterlockedCompareExchange(p_singleWriterLock, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 344, ASSERT_TYPE_ASSERT, "( Sys_InterlockedCompareExchange( &s_killLogQueue->singleWriterLock, 1, 0 ) == 0 )", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_killLogQueue->singleWriterLock, 1, 0 ) == 0") )
      __debugbreak();
    v17 = s_killLogQueue;
    if ( s_killLogQueue->writeIndex >= 0x20 )
    {
      LODWORD(v22) = s_killLogQueue->writeIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 346, ASSERT_TYPE_ASSERT, "(unsigned)( s_killLogQueue->writeIndex ) < (unsigned)( ( sizeof( *array_counter( s_killLogQueue->data ) ) + 0 ) )", "s_killLogQueue->writeIndex doesn't index ARRAY_COUNT( s_killLogQueue->data)\n\t%i not in [0, %i)", v22, 32) )
        __debugbreak();
      v17 = s_killLogQueue;
    }
    r_data = &v17->data[v17->writeIndex];
    if ( r_data->inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 348, ASSERT_TYPE_ASSERT, "( !r_data.inUse )", (const char *)&queryFormat, "!r_data.inUse") )
      __debugbreak();
    SV_ClientAntiCheatMP_GatherPlayerKillOrLastStandData(isLastStand, attacker, victim, attackerData, attackerWeapon, attackerWeaponIsAlternate, deathMod, hitloc, timeOffset, attackerIndex, victimLastStandIndex, r_data);
    s_killLogQueue->writeIndex = ((unsigned __int8)s_killLogQueue->writeIndex + 1) & 0x1F;
    v19 = &s_killLogQueue->pendingCount;
    if ( (((_BYTE)s_killLogQueue + 8) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_killLogQueue->pendingCount) )
      __debugbreak();
    v20 = _InterlockedIncrement(v19);
    if ( v20 < 1 || (unsigned __int64)v20 > 0x20 )
    {
      LODWORD(v25) = 32;
      LODWORD(v24) = 1;
      LODWORD(v23) = v20;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 357, ASSERT_TYPE_ASSERT, "( 1 ) <= ( pendingCount ) && ( pendingCount ) <= ( ( sizeof( *array_counter( s_killLogQueue->data ) ) + 0 ) )", "pendingCount not in [1, ARRAY_COUNT( s_killLogQueue->data )]\n\t%i not in [%i, %i]", v23, v24, v25) )
        __debugbreak();
    }
    if ( v20 == 1 )
      Sys_AddWorkerCmd(WRKCMD_SV_CLIENT_ANTICHEAT_PLAYER_KILL, &data);
    v21 = &s_killLogQueue->singleWriterLock;
    if ( (((_BYTE)s_killLogQueue + 20) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_killLogQueue->singleWriterLock) )
      __debugbreak();
    if ( _InterlockedCompareExchange(v21, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 365, ASSERT_TYPE_ASSERT, "( Sys_InterlockedCompareExchange( &s_killLogQueue->singleWriterLock, 0, 1 ) == 1 )", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_killLogQueue->singleWriterLock, 0, 1 ) == 1") )
      __debugbreak();
  }
  else
  {
    Com_PrintWarning(131087, "SV_ClientAntiCheatMP player kill queue is full. Dropping event.\n");
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
SV_ClientAntiCheatMP_ResetLastRecordedPlayerAngles
==============
*/
void SV_ClientAntiCheatMP_ResetLastRecordedPlayerAngles(const int clientNum)
{
  __int64 DataForPlayer; 

  if ( (unsigned __int8)SV_AntiCheatMP_CollectionEnabled() )
  {
    DataForPlayer = SV_ClientAntiCheatMP_GetDataForPlayer(clientNum);
    if ( !DataForPlayer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 669, ASSERT_TYPE_ASSERT, "( anticheatData )", (const char *)&queryFormat, "anticheatData") )
      __debugbreak();
    *(_DWORD *)(DataForPlayer + 1616) = -1;
    *(_DWORD *)(DataForPlayer + 20248) = 0;
  }
}

/*
==============
SV_ClientAntiCheatMP_SendCollectedAntiCheatData
==============
*/
void SV_ClientAntiCheatMP_SendCollectedAntiCheatData(const int clientNum)
{
  __int64 v1; 
  __int64 DataForPlayer; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  const gentity_s *v7; 
  unsigned __int64 v8; 
  char v9; 
  bool v10; 
  unsigned __int8 v11; 
  ClientPlatform *outClientPlatform; 
  ClientPlatform clientPlatform; 
  ClientPlatform v14; 
  DLogFirstPartyAccountType outFirstPartyAccountType; 
  unsigned __int64 outFirstPartyUserId; 
  unsigned __int64 outUnoId; 
  unsigned __int64 outUserSessionId[3]; 
  DLogContext context; 
  unsigned __int8 outBuffer[288]; 
  unsigned __int8 values[288]; 
  unsigned __int8 v22[288]; 
  unsigned __int8 v23[288]; 
  char buffer[3208]; 

  outUserSessionId[1] = -2i64;
  v1 = clientNum;
  if ( (unsigned __int8)SV_AntiCheatMP_CollectionEnabled() )
  {
    DataForPlayer = SV_ClientAntiCheatMP_GetDataForPlayer(v1);
    if ( !DataForPlayer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 712, ASSERT_TYPE_ASSERT, "( anticheatData )", (const char *)&queryFormat, "anticheatData") )
      __debugbreak();
    if ( *(_BYTE *)(DataForPlayer + 23324) )
    {
      Com_Printf(15, "Trying to send Player AntiCheat Data Payload thats already been sent for clientNum %i\n", (unsigned int)v1);
    }
    else
    {
      Com_Printf(15, "Sending Player Player AntiCheat Data Payload for clientNum %i\n", (unsigned int)v1);
      DLogTDigest<32,8>::ProcessBufferedCentroids((DLogTDigest<32,8> *)(DataForPlayer + 1624));
      v3 = DLogTDigest<32,8>::SerializeToProtobuf((DLogTDigest<32,8> *)(DataForPlayer + 1624), outBuffer, 0x11Eui64);
      DLogTDigest<32,8>::ProcessBufferedCentroids((DLogTDigest<32,8> *)(DataForPlayer + 6280));
      v4 = DLogTDigest<32,8>::SerializeToProtobuf((DLogTDigest<32,8> *)(DataForPlayer + 6280), values, 0x11Eui64);
      DLogTDigest<32,8>::ProcessBufferedCentroids((DLogTDigest<32,8> *)(DataForPlayer + 10936));
      v5 = DLogTDigest<32,8>::SerializeToProtobuf((DLogTDigest<32,8> *)(DataForPlayer + 10936), v22, 0x11Eui64);
      DLogTDigest<32,8>::ProcessBufferedCentroids((DLogTDigest<32,8> *)(DataForPlayer + 15592));
      v6 = DLogTDigest<32,8>::SerializeToProtobuf((DLogTDigest<32,8> *)(DataForPlayer + 15592), v23, 0x11Eui64);
      if ( (unsigned int)v1 >= 0x800 )
      {
        LODWORD(outClientPlatform) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", outClientPlatform, 2048) )
          __debugbreak();
      }
      if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
        __debugbreak();
      v7 = &g_entities[v1];
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 733, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
        __debugbreak();
      Sys_ProfBeginNamedEvent(0xFF008080, "SV_ClientAntiCheatMP_SetupDLogContextForPlayerEvent");
      DLog_Util_GetPlayerHeaderFieldsFromEntity(v7, &outUnoId, &outFirstPartyUserId, &outFirstPartyAccountType, outUserSessionId, &v14);
      v8 = outUnoId;
      if ( !outUnoId )
        v8 = outFirstPartyUserId;
      if ( DLog_CreateContext(&context, v8, buffer, 3192) && DLog_BeginEvent(&context, "dlog_event_sv_anticheat_player_match_stats") )
      {
        LOBYTE(clientPlatform) = v14;
        DLog_Util_FillPlayerHeader(&context, rowName, outUnoId, outFirstPartyUserId, outFirstPartyAccountType, outUserSessionId[0], clientPlatform);
        Sys_ProfEndNamedEvent();
        v9 = 1;
      }
      else
      {
        Sys_ProfEndNamedEvent();
        v9 = 0;
      }
      v10 = DLog_Int32(&context, "clientnum", v1) && DLog_UInt8Array(&context, "pitch_velocity_tdigest", outBuffer, v3) && DLog_UInt8Array(&context, "yaw_velocity_tdigest", values, v4) && DLog_UInt8Array(&context, "pitch_accel_tdigest", v22, v5) && DLog_UInt8Array(&context, "yaw_accel_tdigest", v23, v6);
      v11 = v10 & DLog_EndEvent(&context) & v9;
      if ( (DLog_RecordContext(&context) & v11) == 0 )
        Com_Printf(131087, "Failed to send dlog event %s for client %i\n", "dlog_event_sv_anticheat_player_match_stats", (unsigned int)v1);
      *(_BYTE *)(DataForPlayer + 23324) = 1;
    }
  }
}

/*
==============
SV_ClientAntiCheatMP_ShouldLogPlayerKillOrLastStand
==============
*/
bool SV_ClientAntiCheatMP_ShouldLogPlayerKillOrLastStand(const gentity_s **attacker)
{
  EntHandle *v1; 
  gclient_s *client; 

  v1 = (EntHandle *)*attacker;
  if ( (*attacker)->s.eType == ET_TURRET )
  {
LABEL_7:
    if ( EntHandle::isDefined(v1 + 82) )
      *attacker = EntHandle::ent(&(*attacker)->r.ownerNum);
    goto LABEL_9;
  }
  if ( !v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((v1[2].number - 12) & 0xFFFD) == 0 )
  {
    v1 = (EntHandle *)*attacker;
    goto LABEL_7;
  }
LABEL_9:
  client = (*attacker)->client;
  return client && client->ps.clientNum == (*attacker)->s.clientNum;
}

/*
==============
SV_ClientAntiCheatMP_Shutdown
==============
*/
void SV_ClientAntiCheatMP_Shutdown(void)
{
  if ( s_svAntiCheatMP_isInitialized )
    SV_ClientAntiCheatMP_Shutdown_FlushKillLogQueue();
  s_svAntiCheatMP_isInitialized = 0;
}

/*
==============
SV_ClientAntiCheatMP_Shutdown_FlushKillLogQueue
==============
*/
void SV_ClientAntiCheatMP_Shutdown_FlushKillLogQueue()
{
  unsigned __int8 i; 
  volatile int *p_singleReaderLock; 
  SvAntiCheatMP_PlayerKillLogDataQueue *v2; 
  SvAntiCheatMP_PlayerKillLogDataQueue *v3; 
  volatile int *p_pendingCount; 
  int v5; 
  volatile int *v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  char data; 

  if ( !s_killLogQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 786, ASSERT_TYPE_ASSERT, "( s_killLogQueue != nullptr )", (const char *)&queryFormat, "s_killLogQueue != nullptr") )
    __debugbreak();
  s_killLogQueue->isShuttingDown = 1;
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_SV_CLIENT_ANTICHEAT_PLAYER_KILL);
  for ( i = 0; i < 8u; ++i )
  {
    if ( !s_killLogQueue->pendingCount )
      break;
    if ( !s_killLogQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 445, ASSERT_TYPE_ASSERT, "( s_killLogQueue != nullptr )", (const char *)&queryFormat, "s_killLogQueue != nullptr") )
      __debugbreak();
    if ( !s_svAntiCheatMP_isInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 446, ASSERT_TYPE_ASSERT, "( s_svAntiCheatMP_isInitialized )", (const char *)&queryFormat, "s_svAntiCheatMP_isInitialized") )
      __debugbreak();
    Sys_ProfBeginNamedEvent(0xFF008080, "SV_ClientAntiCheatMP_LogPlayerKillCmd");
    p_singleReaderLock = &s_killLogQueue->singleReaderLock;
    if ( (((_BYTE)s_killLogQueue + 16) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_killLogQueue->singleReaderLock) )
      __debugbreak();
    if ( _InterlockedCompareExchange(p_singleReaderLock, 1, 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 452, ASSERT_TYPE_ASSERT, "( Sys_InterlockedCompareExchange( &s_killLogQueue->singleReaderLock, 1, 0 ) == 0 )", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_killLogQueue->singleReaderLock, 1, 0 ) == 0") )
      __debugbreak();
    v2 = s_killLogQueue;
    if ( s_killLogQueue->readIndex >= 0x20 )
    {
      LODWORD(v8) = 32;
      LODWORD(v7) = s_killLogQueue->readIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 453, ASSERT_TYPE_ASSERT, "(unsigned)( s_killLogQueue->readIndex ) < (unsigned)( ( sizeof( *array_counter( s_killLogQueue->data ) ) + 0 ) )", "s_killLogQueue->readIndex doesn't index ARRAY_COUNT( s_killLogQueue->data )\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
      v2 = s_killLogQueue;
    }
    SV_ClientAntiCheatMP_LogPlayerKillData(&v2->data[v2->readIndex]);
    v3 = s_killLogQueue;
    if ( s_killLogQueue->readIndex >= 0x20 )
    {
      LODWORD(v8) = 32;
      LODWORD(v7) = s_killLogQueue->readIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 459, ASSERT_TYPE_ASSERT, "(unsigned)( s_killLogQueue->readIndex ) < (unsigned)( ( sizeof( *array_counter( s_killLogQueue->data ) ) + 0 ) )", "s_killLogQueue->readIndex doesn't index ARRAY_COUNT( s_killLogQueue->data )\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
      v3 = s_killLogQueue;
    }
    v3->data[v3->readIndex].inUse = 0;
    s_killLogQueue->readIndex = ((unsigned __int8)s_killLogQueue->readIndex + 1) & 0x1F;
    p_pendingCount = &s_killLogQueue->pendingCount;
    if ( (((_BYTE)s_killLogQueue + 8) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_killLogQueue->pendingCount) )
      __debugbreak();
    v5 = _InterlockedDecrement(p_pendingCount);
    v6 = &s_killLogQueue->singleReaderLock;
    if ( (((_BYTE)s_killLogQueue + 16) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_killLogQueue->singleReaderLock) )
      __debugbreak();
    if ( _InterlockedCompareExchange(v6, 0, 1) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 468, ASSERT_TYPE_ASSERT, "( Sys_InterlockedCompareExchange( &s_killLogQueue->singleReaderLock, 0, 1 ) == 1 )", (const char *)&queryFormat, "Sys_InterlockedCompareExchange( &s_killLogQueue->singleReaderLock, 0, 1 ) == 1") )
      __debugbreak();
    if ( v5 < 0 || (unsigned __int64)v5 > 0x1F )
    {
      LODWORD(v9) = 31;
      LODWORD(v7) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 470, ASSERT_TYPE_ASSERT, "( 0 ) <= ( pendingCount ) && ( pendingCount ) <= ( ( sizeof( *array_counter( s_killLogQueue->data ) ) + 0 ) - 1 )", "pendingCount not in [0, ARRAY_COUNT( s_killLogQueue->data ) - 1]\n\t%i not in [%i, %i]", v7, 0i64, v9) )
        __debugbreak();
    }
    if ( v5 > 0 && !s_killLogQueue->isShuttingDown )
      Sys_AddWorkerCmd(WRKCMD_SV_CLIENT_ANTICHEAT_PLAYER_KILL, &data);
    Sys_ProfEndNamedEvent();
  }
  if ( s_killLogQueue->pendingCount > 0 )
    Com_PrintWarning(131087, "SV_ClientAntiCheatMP_Shutdown: dropped remaining %i pending kill logs.\n", (unsigned int)s_killLogQueue->pendingCount);
}

