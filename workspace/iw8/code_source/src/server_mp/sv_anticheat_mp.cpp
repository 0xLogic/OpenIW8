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
  int v18; 
  int v22; 
  const dvar_t *v23; 
  int integer; 
  __int64 clientNum; 
  int lastTime; 
  int v27; 
  int v28; 
  SvClient *CommonClient; 
  ClientPlatform *outClientPlatform; 
  __int64 v31; 
  msg_t buf; 
  unsigned __int8 data[1024]; 

  _RSI = r_data;
  _RDI = attackerWeapon;
  DebugWipe(r_data, 0x340ui64);
  DLog_Util_GetPlayerHeaderFieldsFromEntity(attacker, &_RSI->attacker.unoId, &_RSI->attacker.firstPartyUserId, &_RSI->attacker.firstPartyAccountType, &_RSI->attacker.userSessionId, (ClientPlatform *)_RSI->attacker.platform);
  DLog_Util_GetPlayerHeaderFieldsFromEntity(victim, &_RSI->victim.unoId, &_RSI->victim.firstPartyUserId, &_RSI->victim.firstPartyAccountType, &_RSI->victim.userSessionId, (ClientPlatform *)_RSI->victim.platform);
  r_data->isLastStand = isLastStand;
  v18 = deathMod;
  r_data->serverTime = level.time;
  r_data->attackerClientNum = attacker->s.clientNum;
  r_data->attackerEventIndex = attackerIndex;
  r_data->attackerOrigin = attacker->r.currentOrigin;
  r_data->attackerPitch = attacker->client->ps.viewangles.v[0];
  r_data->attackerYaw = attacker->client->ps.viewangles.v[1];
  __asm
  {
    vmovups ymm0, ymmword ptr [rdi]
    vmovups ymmword ptr [rsi+60h], ymm0
    vmovups xmm1, xmmword ptr [rdi+20h]
    vmovups xmmword ptr [rsi+80h], xmm1
    vmovsd  xmm0, qword ptr [rdi+30h]
    vmovsd  qword ptr [rsi+90h], xmm0
  }
  *(_DWORD *)&r_data->attackerWeapon.weaponCamo = *(_DWORD *)&attackerWeapon->weaponCamo;
  r_data->attackerWeaponIsAlternate = attackerWeaponIsAlternate;
  if ( (unsigned int)deathMod >= 0x19 )
  {
    LODWORD(outClientPlatform) = deathMod;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1114, ASSERT_TYPE_ASSERT, "(unsigned)( mod ) < (unsigned)( MOD_NUM )", "mod doesn't index MOD_NUM\n\t%i not in [0, %i)", outClientPlatform, 25) )
      __debugbreak();
  }
  if ( (unsigned int)deathMod <= 0x14 )
  {
    v22 = 1049102;
    if ( _bittest(&v22, deathMod) )
    {
      if ( (unsigned int)(hitloc - 1) <= 1 )
        v18 = 9;
    }
  }
  r_data->mod = v18;
  SV_ClientAntiCheatMP_LogPlayerKill_RecordAngularSpeed(attackerData, r_data);
  v23 = DVARINT_sv_anticheat_playerRecentlySighted_resetTime;
  if ( !DVARINT_sv_anticheat_playerRecentlySighted_resetTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_anticheat_playerRecentlySighted_resetTime") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  integer = v23->current.integer;
  if ( victim->s.clientNum >= 0xC8u )
  {
    LODWORD(v31) = 200;
    LODWORD(outClientPlatform) = victim->s.clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 288, ASSERT_TYPE_ASSERT, "(unsigned)( victim->s.clientNum ) < (unsigned)( ( sizeof( *array_counter( attackerData->recentlySightedClients ) ) + 0 ) )", "victim->s.clientNum doesn't index ARRAY_COUNT( attackerData->recentlySightedClients )\n\t%i not in [0, %i)", outClientPlatform, v31) )
      __debugbreak();
  }
  clientNum = victim->s.clientNum;
  lastTime = attackerData->recentlySightedClients[clientNum].lastTime;
  if ( lastTime < 0 || level.time - lastTime > integer )
    v27 = -1;
  else
    v27 = level.time - attackerData->recentlySightedClients[clientNum].firstTime;
  r_data->attacker_sighted_victim_time = v27;
  r_data->victimLastStandIndex = victimLastStandIndex;
  r_data->victimOrigin = victim->r.currentOrigin;
  r_data->inUse = 1;
  MSG_Init(&buf, data, 1020);
  MSG_WriteByte(&buf, 38i64);
  v28 = victim->s.clientNum;
  if ( (unsigned int)(v28 + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v28, "signed", victim->s.clientNum) )
    __debugbreak();
  MSG_WriteShort(&buf, (__int16)v28);
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
  int v17; 
  __int64 v47; 
  int v50; 
  __int64 v51; 
  int v83; 
  __int64 v89; 
  double v90; 
  __int64 v91; 
  double v92; 

  if ( (unsigned __int8)SV_AntiCheatMP_CollectionEnabled() )
  {
    if ( !player && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 601, ASSERT_TYPE_ASSERT, "( player )", (const char *)&queryFormat, rowName) )
      __debugbreak();
    if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 602, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
      __debugbreak();
    if ( player->s.clientNum != player->s.number )
    {
      LODWORD(v89) = player->s.clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 603, ASSERT_TYPE_ASSERT, "( player->s.clientNum ) == ( player->s.number )", "player->s.clientNum == player->s.number\n\t%i, %i", v89, player->s.number) )
        __debugbreak();
    }
    if ( player->client->ps.clientNum != player->s.clientNum )
    {
      LODWORD(v91) = player->s.clientNum;
      LODWORD(v89) = player->client->ps.clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 604, ASSERT_TYPE_ASSERT, "( player->client->ps.clientNum ) == ( player->s.clientNum )", "player->client->ps.clientNum == player->s.clientNum\n\t%i, %i", v89, v91) )
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
      _RSI = player->client;
      _RBX = SV_ClientAntiCheatMP_GetDataForPlayer(player->s.clientNum);
      if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 616, ASSERT_TYPE_ASSERT, "( anticheatData )", (const char *)&queryFormat, "anticheatData") )
        __debugbreak();
      v17 = *(_DWORD *)(_RBX + 1616);
      _EDI = time - v17;
      if ( v17 < 0 || (unsigned int)(_EDI - 1) > 0xC7 )
      {
        v83 = 0;
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsi+1DCh]
          vsubss  xmm1, xmm0, dword ptr [rbx+64Ch]
          vmulss  xmm3, xmm1, cs:__real@3b360b61
          vmovaps [rsp+0D8h+var_18], xmm6
          vmovaps [rsp+0D8h+var_28], xmm7
          vmovaps [rsp+0D8h+var_38], xmm8
          vmovss  xmm8, cs:__real@3f000000
          vaddss  xmm1, xmm3, xmm8
          vmovaps [rsp+0D8h+var_78], xmm12
          vmovaps [rsp+0D8h+var_88], xmm13
          vmovd   xmm0, edi
          vcvtdq2ps xmm0, xmm0
          vxorps  xmm7, xmm7, xmm7
          vroundss xmm2, xmm7, xmm1, 1
          vmovss  xmm1, dword ptr [rsi+1D8h]
          vmovaps [rsp+0D8h+var_98], xmm14
          vmovss  xmm14, cs:__real@3f800000
          vdivss  xmm6, xmm14, xmm0
          vsubss  xmm0, xmm3, xmm2
          vsubss  xmm2, xmm1, dword ptr [rbx+648h]
          vmulss  xmm4, xmm2, cs:__real@3b360b61
          vmulss  xmm0, xmm0, cs:__real@48afc800
          vmulss  xmm12, xmm0, xmm6
          vaddss  xmm3, xmm4, xmm8
          vroundss xmm2, xmm7, xmm3, 1
          vsubss  xmm0, xmm4, xmm2
          vmulss  xmm1, xmm0, cs:__real@48afc800
          vmulss  xmm13, xmm1, xmm6
          vmovd   xmm6, edi
          vcvtdq2pd xmm6, xmm6
          vmovaps xmm2, xmm6; weight
          vcvtss2sd xmm1, xmm12, xmm12; value
        }
        DLogTDigest<32,8>::Add((DLogTDigest<32,8> *)(_RBX + 6280), *(long double *)&_XMM1, *(long double *)&_XMM2);
        __asm
        {
          vcvtss2sd xmm1, xmm13, xmm13; value
          vmovaps xmm2, xmm6; weight
        }
        DLogTDigest<32,8>::Add((DLogTDigest<32,8> *)(_RBX + 1624), *(long double *)&_XMM1, *(long double *)&_XMM2);
        v47 = *(unsigned __int8 *)(_RBX + 20248);
        _RAX = 3 * v47 + 5064;
        __asm { vmovss  dword ptr [rbx+rax*4], xmm13 }
        _RAX = 3 * v47;
        __asm { vmovss  dword ptr [rbx+rax*4+4F24h], xmm12 }
        *(_DWORD *)(_RBX + 12 * v47 + 20252) = _EDI;
        v50 = *(_DWORD *)(_RBX + 20248);
        if ( v50 > 0 )
        {
          __asm { vmovaps [rsp+0D8h+var_48], xmm9 }
          v51 = (unsigned __int8)(v50 - 1);
          __asm
          {
            vmovaps [rsp+0D8h+var_58], xmm10
            vmovaps [rsp+0D8h+var_68], xmm11
            vxorps  xmm0, xmm0, xmm0
          }
          _RAX = 3 * v51 + 5064;
          __asm { vmovss  xmm11, dword ptr [rbx+rax*4] }
          _RDX = 3 * v51;
          __asm
          {
            vmovss  xmm10, dword ptr [rbx+rdx*4+4F24h]
            vcvtsi2ss xmm0, xmm0, eax
            vmulss  xmm6, xmm0, xmm8
            vxorps  xmm1, xmm1, xmm1
            vcomiss xmm6, xmm1
          }
          if ( __CFADD__(_EDI, *(_DWORD *)(_RBX + 12 * v51 + 20252)) || _EDI + *(_DWORD *)(_RBX + 12 * v51 + 20252) == 0 )
          {
            __asm
            {
              vxorpd  xmm0, xmm0, xmm0
              vmovsd  [rsp+0D8h+var_A8], xmm0
              vcvtss2sd xmm1, xmm6, xmm6
              vmovsd  [rsp+0D8h+var_B0], xmm1
            }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 158, ASSERT_TYPE_ASSERT, "( dtOut ) > ( 0.0f )", "dtOut > 0.0f\n\t%g, %g", v90, v92) )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm7, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
            vandps  xmm13, xmm13, xmm7
            vandps  xmm11, xmm11, xmm7
            vsubss  xmm0, xmm13, xmm11
            vmulss  xmm0, xmm0, cs:__real@447a0000
            vdivss  xmm8, xmm14, xmm6
            vmulss  xmm1, xmm0, xmm8
            vcvtss2sd xmm9, xmm6, xmm6
            vcvtss2sd xmm1, xmm1, xmm1; value
            vmovaps xmm2, xmm9; weight
          }
          DLogTDigest<32,8>::Add((DLogTDigest<32,8> *)(_RBX + 10936), *(long double *)&_XMM1, *(long double *)&_XMM2);
          __asm
          {
            vandps  xmm12, xmm12, xmm7
            vandps  xmm10, xmm10, xmm7
            vsubss  xmm0, xmm12, xmm10
            vmulss  xmm1, xmm0, cs:__real@447a0000
            vmulss  xmm3, xmm1, xmm8
            vcvtss2sd xmm1, xmm3, xmm3; value
            vmovaps xmm2, xmm9; weight
          }
          DLogTDigest<32,8>::Add((DLogTDigest<32,8> *)(_RBX + 15592), *(long double *)&_XMM1, *(long double *)&_XMM2);
          v50 = *(_DWORD *)(_RBX + 20248);
          __asm
          {
            vmovaps xmm11, [rsp+0D8h+var_68]
            vmovaps xmm10, [rsp+0D8h+var_58]
            vmovaps xmm9, [rsp+0D8h+var_48]
          }
        }
        __asm { vmovaps xmm14, [rsp+0D8h+var_98] }
        v83 = v50 + 1;
        __asm
        {
          vmovaps xmm13, [rsp+0D8h+var_88]
          vmovaps xmm12, [rsp+0D8h+var_78]
          vmovaps xmm8, [rsp+0D8h+var_38]
          vmovaps xmm7, [rsp+0D8h+var_28]
          vmovaps xmm6, [rsp+0D8h+var_18]
        }
      }
      *(_DWORD *)(_RBX + 20248) = v83;
      *(float *)(_RBX + 1612) = _RSI->ps.viewangles.v[1];
      *(float *)(_RBX + 1608) = _RSI->ps.viewangles.v[0];
      *(_DWORD *)(_RBX + 1616) = time;
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
  unsigned __int64 firstPartyUserId; 
  unsigned __int64 v6; 
  DLogFirstPartyAccountType firstPartyAccountType; 
  const char *WeaponBaseName; 
  __int64 mod; 
  const char *v18; 
  bool v24; 
  unsigned __int64 userSessionId; 
  ClientPlatform clientPlatform; 
  ClientPlatform clientPlatforma; 
  DLogContext context; 
  char buffer[4096]; 

  _RBX = r_data;
  if ( !r_data->inUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 371, ASSERT_TYPE_ASSERT, "( r_data.inUse )", (const char *)&queryFormat, "r_data.inUse") )
    __debugbreak();
  unoId = _RBX->attacker.unoId;
  if ( !_RBX->attacker.unoId )
    unoId = _RBX->attacker.firstPartyUserId;
  if ( DLog_CreateContext(&context, unoId, buffer, 4096) && DLog_BeginEvent(&context, "dlog_event_sv_anticheat_player_killed") )
  {
    firstPartyUserId = _RBX->attacker.firstPartyUserId;
    v6 = _RBX->attacker.unoId;
    LOBYTE(clientPlatform) = _RBX->attacker.platform[0];
    userSessionId = _RBX->attacker.userSessionId;
    firstPartyAccountType = _RBX->attacker.firstPartyAccountType;
    __asm
    {
      vmovaps [rsp+11D0h+var_10], xmm6
      vmovaps [rsp+11D0h+var_20], xmm7
    }
    DLog_Util_FillPlayerHeader(&context, rowName, v6, firstPartyUserId, firstPartyAccountType, userSessionId, clientPlatform);
    LOBYTE(clientPlatforma) = _RBX->victim.platform[0];
    DLog_Util_FillPlayerHeader(&context, "victim", _RBX->victim.unoId, _RBX->victim.firstPartyUserId, _RBX->victim.firstPartyAccountType, _RBX->victim.userSessionId, clientPlatforma);
    DLog_Bool(&context, "is_last_stand", _RBX->isLastStand);
    DLog_Int32(&context, "server_time", _RBX->serverTime);
    DLog_Int32(&context, "attacker_clientnum", _RBX->attackerClientNum);
    DLog_Int32(&context, "attacker_event_index", _RBX->attackerEventIndex);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+4Ch]; value
      vmovss  xmm6, dword ptr [rbx+54h]
      vmovss  xmm7, dword ptr [rbx+50h]
    }
    if ( DLog_Float32(&context, "attacker_x", *(float *)&_XMM2) )
    {
      __asm { vmovaps xmm2, xmm7; value }
      if ( DLog_Float32(&context, "attacker_y", *(float *)&_XMM2) )
      {
        __asm { vmovaps xmm2, xmm6; value }
        DLog_Float32(&context, "attacker_z", *(float *)&_XMM2);
      }
    }
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+58h]; value
      vmovss  xmm6, dword ptr [rbx+5Ch]
    }
    if ( DLog_Float32(&context, "attacker_pitch", *(float *)&_XMM2) )
    {
      __asm { vmovaps xmm2, xmm6; value }
      DLog_Float32(&context, "attacker_yaw", *(float *)&_XMM2);
    }
    WeaponBaseName = BG_GetWeaponBaseName(&_RBX->attackerWeapon, _RBX->attackerWeaponIsAlternate);
    DLog_String(&context, "attacker_weapon", WeaponBaseName, 0);
    mod = _RBX->mod;
    if ( (unsigned int)mod > 0x18 )
      v18 = "badMOD";
    else
      v18 = SL_ConvertToString(*g_combat_modNames[mod]);
    DLog_String(&context, "death_mod", v18, 0);
    DLog_Int32(&context, "attacker_recent_angular_velocity_window", _RBX->recentAngularVelocityWindow);
    DLog_UInt8Array(&context, "attacker_recent_pitch_velocity_tdigest", _RBX->serializedRecentPitchVel, _RBX->serializedRecentPitchVelSize);
    DLog_UInt8Array(&context, "attacker_recent_yaw_velocity_tdigest", _RBX->serializedRecentYawVel, _RBX->serializedRecentYawVelSize);
    DLog_UInt8Array(&context, "attacker_recent_pitch_accel_tdigest", _RBX->serializedRecentPitchAccel, _RBX->serializedRecentPitchAccelSize);
    DLog_UInt8Array(&context, "attacker_recent_yaw_accel_tdigest", _RBX->serializedRecentYawAccel, _RBX->serializedRecentYawAccelSize);
    DLog_Int32(&context, "attacker_sighted_victim_time", _RBX->attacker_sighted_victim_time);
    DLog_Int32(&context, "victim_last_stand_index", _RBX->victimLastStandIndex);
    __asm
    {
      vmovss  xmm2, dword ptr [rbx+330h]; value
      vmovss  xmm6, dword ptr [rbx+338h]
      vmovss  xmm7, dword ptr [rbx+334h]
    }
    if ( DLog_Float32(&context, "victim_x", *(float *)&_XMM2) )
    {
      __asm { vmovaps xmm2, xmm7; value }
      if ( DLog_Float32(&context, "victim_y", *(float *)&_XMM2) )
      {
        __asm { vmovaps xmm2, xmm6; value }
        DLog_Float32(&context, "victim_z", *(float *)&_XMM2);
      }
    }
    v24 = DLog_EndEvent(&context);
    __asm
    {
      vmovaps xmm7, [rsp+11D0h+var_20]
      vmovaps xmm6, [rsp+11D0h+var_10]
    }
    if ( v24 )
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
  void *v13; 
  SvAntiCheatMP_PlayerKillLogData *v14; 
  const dvar_t *v16; 
  int v18; 
  __int64 v20; 
  DLogTDigestCentroid *m_processedCentroids; 
  __int64 v22; 
  __int64 v23; 
  DLogTDigestCentroid *m_unprocessedCentroidBuffer; 
  __int64 v25; 
  DLogTDigestCentroid *v27; 
  __int64 v28; 
  DLogTDigestCentroid *v29; 
  __int64 v30; 
  DLogTDigestCentroid *v32; 
  __int64 v33; 
  DLogTDigestCentroid *v34; 
  __int64 v35; 
  DLogTDigestCentroid *v37; 
  DLogTDigestCentroid *v38; 
  unsigned int v43; 
  int v44; 
  unsigned __int8 v45; 
  int weight; 
  int v106; 
  int v107; 
  int v108; 
  int v109; 
  double v112; 
  double v113; 
  int integer; 
  DLogTDigest<16,8> v116; 
  DLogTDigest<16,8> v117; 
  DLogTDigest<16,8> v118; 
  DLogTDigest<16,8> v119; 
  char v130; 

  v13 = alloca(v2);
  __asm { vmovaps [rsp+25F0h+var_90], xmm11 }
  v14 = inOutData;
  _R13 = anticheatData;
  if ( !anticheatData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 166, ASSERT_TYPE_ASSERT, "( anticheatData )", (const char *)&queryFormat, "anticheatData") )
    __debugbreak();
  v16 = DVARINT_sv_anticheat_playerKilled_angle_speed_window;
  if ( !DVARINT_sv_anticheat_playerKilled_angle_speed_window && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_anticheat_playerKilled_angle_speed_window") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  integer = v16->current.integer;
  Sys_ProfBeginNamedEvent(0xFF008080, "SV_ClientAntiCheatMP_LogPlayerKill_RecordAngularSpeed-accum");
  __asm { vmovupd xmm0, cs:__xmm@00100000000000007fefffffffffffff }
  v18 = 0;
  v116.m_serializedHeaderByteSize = 22;
  __asm { vxorpd  xmm11, xmm11, xmm11 }
  v20 = 16i64;
  *(_QWORD *)&v116.m_unprocessedCentroidBufferIndex = 0i64;
  __asm { vmovupd xmmword ptr [rsp+25F0h+var_25A0.m_min], xmm0 }
  v116.m_disableAutoMerge = 0;
  m_processedCentroids = v116.m_processedCentroids;
  __asm { vmovups xmmword ptr [rsp+25F0h+var_25A0.m_processedWeightTotal], xmm11 }
  v22 = 16i64;
  do
  {
    DLogTDigestCentroid::DLogTDigestCentroid(m_processedCentroids++);
    --v22;
  }
  while ( v22 );
  v23 = 128i64;
  m_unprocessedCentroidBuffer = v116.m_unprocessedCentroidBuffer;
  v25 = 128i64;
  do
  {
    DLogTDigestCentroid::DLogTDigestCentroid(m_unprocessedCentroidBuffer++);
    --v25;
  }
  while ( v25 );
  __asm
  {
    vmovupd xmm0, cs:__xmm@00100000000000007fefffffffffffff
    vmovupd xmmword ptr [rbp+24F0h+var_1C70.m_min], xmm0
  }
  v117.m_serializedHeaderByteSize = 22;
  v27 = v117.m_processedCentroids;
  v117.m_disableAutoMerge = 0;
  v28 = 16i64;
  __asm { vmovups xmmword ptr [rbp+24F0h+var_1C70.m_processedWeightTotal], xmm11 }
  *(_QWORD *)&v117.m_unprocessedCentroidBufferIndex = 0i64;
  do
  {
    DLogTDigestCentroid::DLogTDigestCentroid(v27++);
    --v28;
  }
  while ( v28 );
  v29 = v117.m_unprocessedCentroidBuffer;
  v30 = 128i64;
  do
  {
    DLogTDigestCentroid::DLogTDigestCentroid(v29++);
    --v30;
  }
  while ( v30 );
  __asm
  {
    vmovupd xmm0, cs:__xmm@00100000000000007fefffffffffffff
    vmovupd xmmword ptr [rbp+24F0h+var_1340.m_min], xmm0
  }
  v118.m_serializedHeaderByteSize = 22;
  v32 = v118.m_processedCentroids;
  v118.m_disableAutoMerge = 0;
  v33 = 16i64;
  __asm { vmovups xmmword ptr [rbp+24F0h+var_1340.m_processedWeightTotal], xmm11 }
  *(_QWORD *)&v118.m_unprocessedCentroidBufferIndex = 0i64;
  do
  {
    DLogTDigestCentroid::DLogTDigestCentroid(v32++);
    --v33;
  }
  while ( v33 );
  v34 = v118.m_unprocessedCentroidBuffer;
  v35 = 128i64;
  do
  {
    DLogTDigestCentroid::DLogTDigestCentroid(v34++);
    --v35;
  }
  while ( v35 );
  __asm
  {
    vmovupd xmm0, cs:__xmm@00100000000000007fefffffffffffff
    vmovupd xmmword ptr [rbp+24F0h+var_A10.m_min], xmm0
  }
  v119.m_serializedHeaderByteSize = 22;
  v37 = v119.m_processedCentroids;
  v119.m_disableAutoMerge = 0;
  __asm { vmovups xmmword ptr [rbp+24F0h+var_A10.m_processedWeightTotal], xmm11 }
  *(_QWORD *)&v119.m_unprocessedCentroidBufferIndex = 0i64;
  do
  {
    DLogTDigestCentroid::DLogTDigestCentroid(v37++);
    --v20;
  }
  while ( v20 );
  v38 = v119.m_unprocessedCentroidBuffer;
  do
  {
    DLogTDigestCentroid::DLogTDigestCentroid(v38++);
    --v23;
  }
  while ( v23 );
  __asm { vmovupd xmm0, cs:__xmm@00100000000000007fefffffffffffff }
  *(_QWORD *)&v116.m_unprocessedCentroidBufferIndex = 0i64;
  __asm
  {
    vmovupd xmmword ptr [rsp+25F0h+var_25A0.m_min], xmm0
    vmovups xmmword ptr [rsp+25F0h+var_25A0.m_processedWeightTotal], xmm11
  }
  memset_0(v116.m_processedCentroids, 0, 0x900ui64);
  __asm { vmovupd xmm0, cs:__xmm@00100000000000007fefffffffffffff }
  *(_QWORD *)&v117.m_unprocessedCentroidBufferIndex = 0i64;
  __asm
  {
    vmovupd xmmword ptr [rbp+24F0h+var_1C70.m_min], xmm0
    vmovups xmmword ptr [rbp+24F0h+var_1C70.m_processedWeightTotal], xmm11
  }
  memset_0(v117.m_processedCentroids, 0, 0x900ui64);
  __asm { vmovupd xmm0, cs:__xmm@00100000000000007fefffffffffffff }
  *(_QWORD *)&v118.m_unprocessedCentroidBufferIndex = 0i64;
  __asm
  {
    vmovupd xmmword ptr [rbp+24F0h+var_1340.m_min], xmm0
    vmovups xmmword ptr [rbp+24F0h+var_1340.m_processedWeightTotal], xmm11
  }
  memset_0(v118.m_processedCentroids, 0, 0x900ui64);
  __asm { vmovupd xmm0, cs:__xmm@00100000000000007fefffffffffffff }
  *(_QWORD *)&v119.m_unprocessedCentroidBufferIndex = 0i64;
  __asm
  {
    vmovupd xmmword ptr [rbp+24F0h+var_A10.m_min], xmm0
    vmovups xmmword ptr [rbp+24F0h+var_A10.m_processedWeightTotal], xmm11
  }
  memset_0(v119.m_processedCentroids, 0, 0x900ui64);
  v43 = 0;
  v44 = _R13->speedIndex - 1;
  if ( v44 >= 0 )
  {
    __asm { vmovaps [rsp+25F0h+var_A0], xmm12 }
    v45 = v44 - 1;
    __asm
    {
      vmovss  xmm12, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vmovaps [rsp+25F0h+var_B0], xmm13
      vmovss  xmm13, cs:__real@3f000000
      vmovaps [rsp+25F0h+var_C0], xmm14
      vmovaps [rsp+25F0h+var_D0], xmm15
      vmovss  xmm15, cs:__real@447a0000
      vmovaps [rsp+25F0h+var_40], xmm6
      vmovaps [rsp+25F0h+var_50], xmm7
      vmovaps [rsp+25F0h+var_60], xmm8
      vmovaps [rsp+25F0h+var_70], xmm9
      vmovaps [rsp+25F0h+var_80], xmm10
      vxorps  xmm14, xmm14, xmm14
    }
    while ( 1 )
    {
      if ( v43 >= 0x100 )
      {
LABEL_48:
        v14 = inOutData;
        __asm
        {
          vmovaps xmm15, [rsp+25F0h+var_D0]
          vmovaps xmm14, [rsp+25F0h+var_C0]
          vmovaps xmm13, [rsp+25F0h+var_B0]
          vmovaps xmm12, [rsp+25F0h+var_A0]
          vmovaps xmm10, [rsp+25F0h+var_80]
          vmovaps xmm9, [rsp+25F0h+var_70]
          vmovaps xmm8, [rsp+25F0h+var_60]
          vmovaps xmm7, [rsp+25F0h+var_50]
          vmovaps xmm6, [rsp+25F0h+var_40]
        }
        goto LABEL_49;
      }
      __asm { vxorps  xmm7, xmm7, xmm7 }
      _RSI = 3i64 * (unsigned __int8)v44 + 5064;
      _RBX = 3i64 * (unsigned __int8)v44;
      __asm
      {
        vmovss  xmm6, dword ptr [r13+rsi*4+0]
        vcvtsi2sd xmm7, xmm7, dword ptr [r13+rbx*4+4F1Ch]
        vcvtss2sd xmm6, xmm6, xmm6
      }
      if ( (unsigned __int64)v116.m_unprocessedCentroidBufferIndex < 0x70 )
        goto LABEL_29;
      if ( !v116.m_disableAutoMerge )
        break;
      DLog_PrintError("Auto merge disabled - centroid buffer overflow\n");
LABEL_30:
      __asm
      {
        vmovss  xmm6, dword ptr [r13+rbx*4+4F24h]
        vxorps  xmm7, xmm7, xmm7
        vcvtsi2sd xmm7, xmm7, dword ptr [r13+rbx*4+4F1Ch]
        vcvtss2sd xmm6, xmm6, xmm6
      }
      if ( (unsigned __int64)v117.m_unprocessedCentroidBufferIndex < 0x70 )
        goto LABEL_33;
      if ( !v117.m_disableAutoMerge )
      {
        DLogTDigest<16,8>::ProcessBufferedCentroids(&v117);
LABEL_33:
        __asm
        {
          vmaxsd  xmm1, xmm6, [rbp+24F0h+var_1C70.m_max]
          vminsd  xmm0, xmm6, [rbp+24F0h+var_1C70.m_min]
        }
        _RAX = 2i64 * v117.m_unprocessedCentroidBufferIndex;
        __asm
        {
          vmovsd  [rbp+24F0h+var_1C70.m_max], xmm1
          vmovsd  [rbp+24F0h+var_1C70.m_min], xmm0
          vmovsd  [rbp+rax*8+24F0h+var_1C70.m_unprocessedCentroidBuffer.m_mean], xmm6
          vmovsd  [rbp+rax*8+24F0h+var_1C70.m_unprocessedCentroidBuffer.m_weight], xmm7
          vaddsd  xmm1, xmm7, [rbp+24F0h+var_1C70.m_unprocessedWeightTotal]
        }
        ++v117.m_unprocessedCentroidBufferIndex;
        __asm { vmovsd  [rbp+24F0h+var_1C70.m_unprocessedWeightTotal], xmm1 }
        goto LABEL_34;
      }
      DLog_PrintError("Auto merge disabled - centroid buffer overflow\n");
LABEL_34:
      weight = _R13->angularVelocityHistory[(unsigned __int8)v44].weight;
      v18 += weight;
      if ( v44 <= 0 )
        goto LABEL_46;
      __asm
      {
        vmovss  xmm7, dword ptr [r13+rbx*4+4F24h]
        vmovss  xmm9, dword ptr [r13+rsi*4+0]
        vxorps  xmm0, xmm0, xmm0
      }
      _RCX = 3i64 * v45;
      __asm { vmovss  xmm8, dword ptr [r13+rcx*4+4F24h] }
      _RAX = _RCX + 5064;
      __asm { vmovss  xmm10, dword ptr [r13+rax*4+0] }
      LODWORD(_RAX) = _R13->angularVelocityHistory[v45].weight;
      __asm
      {
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm6, xmm0, xmm13
        vcomiss xmm6, xmm14
      }
      if ( __CFADD__(weight, (_DWORD)_RAX) || weight + (_DWORD)_RAX == 0 )
      {
        __asm
        {
          vcvtss2sd xmm0, xmm6, xmm6
          vmovsd  [rsp+25F0h+var_25C0], xmm11
          vmovsd  [rsp+25F0h+var_25C8], xmm0
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_anticheat_mp.cpp", 158, ASSERT_TYPE_ASSERT, "( dtOut ) > ( 0.0f )", "dtOut > 0.0f\n\t%g, %g", v112, v113) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, cs:__real@3f800000
        vdivss  xmm2, xmm0, xmm6
        vandps  xmm7, xmm7, xmm12
        vandps  xmm8, xmm8, xmm12
        vsubss  xmm0, xmm7, xmm8
        vmulss  xmm1, xmm0, xmm15
        vmulss  xmm8, xmm1, xmm2
        vandps  xmm9, xmm9, xmm12
        vandps  xmm10, xmm10, xmm12
        vsubss  xmm0, xmm9, xmm10
        vmulss  xmm1, xmm0, xmm15
        vmulss  xmm2, xmm1, xmm2
        vcvtss2sd xmm7, xmm6, xmm6
        vcvtss2sd xmm6, xmm2, xmm2
      }
      if ( (unsigned __int64)v118.m_unprocessedCentroidBufferIndex < 0x70 )
        goto LABEL_41;
      if ( !v118.m_disableAutoMerge )
      {
        DLogTDigest<16,8>::ProcessBufferedCentroids(&v118);
LABEL_41:
        __asm
        {
          vmaxsd  xmm1, xmm6, [rbp+24F0h+var_1340.m_max]
          vminsd  xmm0, xmm6, [rbp+24F0h+var_1340.m_min]
        }
        _RAX = 2i64 * v118.m_unprocessedCentroidBufferIndex;
        __asm
        {
          vmovsd  [rbp+24F0h+var_1340.m_max], xmm1
          vmovsd  [rbp+24F0h+var_1340.m_min], xmm0
          vmovsd  [rbp+rax*8+24F0h+var_1340.m_unprocessedCentroidBuffer.m_mean], xmm6
          vmovsd  [rbp+rax*8+24F0h+var_1340.m_unprocessedCentroidBuffer.m_weight], xmm7
          vaddsd  xmm1, xmm7, [rbp+24F0h+var_1340.m_unprocessedWeightTotal]
        }
        ++v118.m_unprocessedCentroidBufferIndex;
        __asm { vmovsd  [rbp+24F0h+var_1340.m_unprocessedWeightTotal], xmm1 }
        goto LABEL_42;
      }
      DLog_PrintError("Auto merge disabled - centroid buffer overflow\n");
LABEL_42:
      __asm { vcvtss2sd xmm6, xmm8, xmm8 }
      if ( (unsigned __int64)v119.m_unprocessedCentroidBufferIndex < 0x70 )
        goto LABEL_45;
      if ( !v119.m_disableAutoMerge )
      {
        DLogTDigest<16,8>::ProcessBufferedCentroids(&v119);
LABEL_45:
        __asm
        {
          vmovsd  xmm0, [rbp+24F0h+var_A10.m_min]
          vmovsd  xmm2, [rbp+24F0h+var_A10.m_max]
        }
        _RAX = 2i64 * v119.m_unprocessedCentroidBufferIndex;
        __asm
        {
          vminsd  xmm1, xmm0, xmm6
          vmovsd  [rbp+24F0h+var_A10.m_min], xmm1
          vmaxsd  xmm0, xmm2, xmm6
          vmovsd  [rbp+24F0h+var_A10.m_max], xmm0
          vmovsd  [rbp+rax*8+24F0h+var_A10.m_unprocessedCentroidBuffer.m_mean], xmm6
          vmovsd  [rbp+rax*8+24F0h+var_A10.m_unprocessedCentroidBuffer.m_weight], xmm7
          vaddsd  xmm1, xmm7, [rbp+24F0h+var_A10.m_unprocessedWeightTotal]
        }
        ++v119.m_unprocessedCentroidBufferIndex;
        __asm { vmovsd  [rbp+24F0h+var_A10.m_unprocessedWeightTotal], xmm1 }
        goto LABEL_46;
      }
      DLog_PrintError("Auto merge disabled - centroid buffer overflow\n");
LABEL_46:
      if ( v18 < integer )
      {
        --v45;
        ++v43;
        if ( --v44 >= 0 )
          continue;
      }
      goto LABEL_48;
    }
    DLogTDigest<16,8>::ProcessBufferedCentroids(&v116);
LABEL_29:
    __asm
    {
      vmaxsd  xmm1, xmm6, [rsp+25F0h+var_25A0.m_max]
      vminsd  xmm0, xmm6, [rsp+25F0h+var_25A0.m_min]
    }
    _RAX = 2i64 * v116.m_unprocessedCentroidBufferIndex;
    __asm
    {
      vmovsd  [rsp+25F0h+var_25A0.m_max], xmm1
      vmovsd  [rsp+25F0h+var_25A0.m_min], xmm0
      vmovsd  [rbp+rax*8+24F0h+var_25A0.m_unprocessedCentroidBuffer.m_mean], xmm6
      vmovsd  [rbp+rax*8+24F0h+var_25A0.m_unprocessedCentroidBuffer.m_weight], xmm7
      vaddsd  xmm1, xmm7, [rsp+25F0h+var_25A0.m_unprocessedWeightTotal]
    }
    ++v116.m_unprocessedCentroidBufferIndex;
    __asm { vmovsd  [rsp+25F0h+var_25A0.m_unprocessedWeightTotal], xmm1 }
    goto LABEL_30;
  }
LABEL_49:
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF008080, "SV_ClientAntiCheatMP_LogPlayerKill_RecordAngularSpeed-ser");
  v14->recentAngularVelocityWindow = v18;
  DLogTDigest<16,8>::ProcessBufferedCentroids(&v116);
  v106 = DLogTDigest<16,8>::SerializeToProtobuf(&v116, v14->serializedRecentPitchVel, 0x9Eui64);
  v14->serializedRecentPitchVelSize = truncate_cast<unsigned short,int>(v106);
  DLogTDigest<16,8>::ProcessBufferedCentroids(&v117);
  v107 = DLogTDigest<16,8>::SerializeToProtobuf(&v117, v14->serializedRecentYawVel, 0x9Eui64);
  v14->serializedRecentYawVelSize = truncate_cast<unsigned short,int>(v107);
  DLogTDigest<16,8>::ProcessBufferedCentroids(&v118);
  v108 = DLogTDigest<16,8>::SerializeToProtobuf(&v118, v14->serializedRecentPitchAccel, 0x9Eui64);
  v14->serializedRecentPitchAccelSize = truncate_cast<unsigned short,int>(v108);
  DLogTDigest<16,8>::ProcessBufferedCentroids(&v119);
  v109 = DLogTDigest<16,8>::SerializeToProtobuf(&v119, v14->serializedRecentYawAccel, 0x9Eui64);
  v14->serializedRecentYawAccelSize = truncate_cast<unsigned short,int>(v109);
  Sys_ProfEndNamedEvent();
  _R11 = &v130;
  __asm { vmovaps xmm11, xmmword ptr [r11-60h] }
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

