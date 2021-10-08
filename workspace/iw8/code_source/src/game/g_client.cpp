/*
==============
G_Client_SetSuit
==============
*/

void __fastcall G_Client_SetSuit(gentity_s *ent, playerState_s *ps, const unsigned int suitIndex)
{
  ?G_Client_SetSuit@@YAXPEAUgentity_s@@PEAUplayerState_s@@I@Z(ent, ps, suitIndex);
}

/*
==============
G_Client_GetEyePosition
==============
*/

void __fastcall G_Client_GetEyePosition(const playerState_s *ps, vec3_t *outOrigin)
{
  ?G_Client_GetEyePosition@@YAXPEBUplayerState_s@@AEATvec3_t@@@Z(ps, outOrigin);
}

/*
==============
G_Client_GetWeaponOrigin
==============
*/

void __fastcall G_Client_GetWeaponOrigin(const playerState_s *ps, vec3_t *outOrigin)
{
  ?G_Client_GetWeaponOrigin@@YAXPEBUplayerState_s@@AEATvec3_t@@@Z(ps, outOrigin);
}

/*
==============
G_Client_GetViewOrigin
==============
*/

void __fastcall G_Client_GetViewOrigin(const playerState_s *ps, vec3_t *outOrigin)
{
  ?G_Client_GetViewOrigin@@YAXPEBUplayerState_s@@AEATvec3_t@@@Z(ps, outOrigin);
}

/*
==============
G_Client_AdjustEyePosForRemoteTurretVehicle
==============
*/

void __fastcall G_Client_AdjustEyePosForRemoteTurretVehicle(const vec3_t *eyePos, const playerState_s *ps, vec3_t *outPos, vec3_t *inOutForward)
{
  ?G_Client_AdjustEyePosForRemoteTurretVehicle@@YAXAEBTvec3_t@@PEBUplayerState_s@@AEAT1@2@Z(eyePos, ps, outPos, inOutForward);
}

/*
==============
G_Client_ClearPlayerWeapons
==============
*/

void __fastcall G_Client_ClearPlayerWeapons(gclient_s *client)
{
  ?G_Client_ClearPlayerWeapons@@YAXPEAUgclient_s@@@Z(client);
}

/*
==============
G_Client_GetJuggDefaultMusicEnabled
==============
*/

bool __fastcall G_Client_GetJuggDefaultMusicEnabled(gentity_s *player)
{
  return ?G_Client_GetJuggDefaultMusicEnabled@@YA_NPEAUgentity_s@@@Z(player);
}

/*
==============
G_Client_GetEyePosition_Internal
==============
*/

void __fastcall G_Client_GetEyePosition_Internal(const playerState_s *ps, vec3_t *outOrigin, bool bIncludeBob)
{
  ?G_Client_GetEyePosition_Internal@@YAXPEBUplayerState_s@@AEATvec3_t@@_N@Z(ps, outOrigin, bIncludeBob);
}

/*
==============
G_Client_SetEntUnusable
==============
*/

void __fastcall G_Client_SetEntUnusable(gclient_s *client, unsigned __int16 entnum)
{
  ?G_Client_SetEntUnusable@@YAXPEAUgclient_s@@G@Z(client, entnum);
}

/*
==============
G_Client_SetEntUsable
==============
*/

void __fastcall G_Client_SetEntUsable(gclient_s *client, unsigned __int16 entnum)
{
  ?G_Client_SetEntUsable@@YAXPEAUgclient_s@@G@Z(client, entnum);
}

/*
==============
G_Client_GetViewDirection
==============
*/

void __fastcall G_Client_GetViewDirection(const gentity_s *ent, vec3_t *outForward, vec3_t *outRight, vec3_t *outUp)
{
  ?G_Client_GetViewDirection@@YAXPEBUgentity_s@@PEATvec3_t@@11@Z(ent, outForward, outRight, outUp);
}

/*
==============
G_Client_ClearPlayerEvents
==============
*/

void __fastcall G_Client_ClearPlayerEvents(gclient_s *client)
{
  ?G_Client_ClearPlayerEvents@@YAXPEAUgclient_s@@@Z(client);
}

/*
==============
G_Client_GetCurrentUseReloadConfig
==============
*/

int __fastcall G_Client_GetCurrentUseReloadConfig(gentity_s *player)
{
  return ?G_Client_GetCurrentUseReloadConfig@@YAHPEAUgentity_s@@@Z(player);
}

/*
==============
G_Client_Clear
==============
*/

void __fastcall G_Client_Clear(const int entityNum, gclient_s *client)
{
  ?G_Client_Clear@@YAXHPEAUgclient_s@@@Z(entityNum, client);
}

/*
==============
G_Client_GetEyePosition_NoBob
==============
*/

void __fastcall G_Client_GetEyePosition_NoBob(const playerState_s *ps, vec3_t *outOrigin)
{
  ?G_Client_GetEyePosition_NoBob@@YAXPEBUplayerState_s@@AEATvec3_t@@@Z(ps, outOrigin);
}

/*
==============
G_Client_CopyPlayerState
==============
*/

void __fastcall G_Client_CopyPlayerState(BgWeaponMap *dstWeaponMap, playerState_s *dstPs, const BgWeaponMap *srcWeaponMap, const playerState_s *srcPs)
{
  ?G_Client_CopyPlayerState@@YAXPEAVBgWeaponMap@@PEAUplayerState_s@@PEBV1@PEBU2@@Z(dstWeaponMap, dstPs, srcWeaponMap, srcPs);
}

/*
==============
G_Client_GetViewDirectionLinked
==============
*/

void __fastcall G_Client_GetViewDirectionLinked(const gentity_s *ent, vec3_t *outForward, vec3_t *outRight, vec3_t *outUp)
{
  ?G_Client_GetViewDirectionLinked@@YAXPEBUgentity_s@@AEATvec3_t@@11@Z(ent, outForward, outRight, outUp);
}

/*
==============
G_Client_GetRemoteControlledVehicleEntity
==============
*/

gentity_s *__fastcall G_Client_GetRemoteControlledVehicleEntity(const playerState_s *ps)
{
  return ?G_Client_GetRemoteControlledVehicleEntity@@YAPEAUgentity_s@@PEBUplayerState_s@@@Z(ps);
}

/*
==============
G_Client_MayUseEnt
==============
*/

bool __fastcall G_Client_MayUseEnt(gclient_s *client, unsigned __int16 entnum)
{
  return ?G_Client_MayUseEnt@@YA_NPEAUgclient_s@@G@Z(client, entnum);
}

/*
==============
G_Client_AdjustEyePosForRemoteTurretVehicle
==============
*/
void G_Client_AdjustEyePosForRemoteTurretVehicle(const vec3_t *eyePos, const playerState_s *ps, vec3_t *outPos, vec3_t *inOutForward)
{
  gentity_s *RemoteControlledVehicleEntity; 
  gentity_s *v9; 
  GHandler *Handler; 
  const VehicleDef *ServerDef; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 38, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  outPos->v[0] = eyePos->v[0];
  outPos->v[1] = eyePos->v[1];
  outPos->v[2] = eyePos->v[2];
  RemoteControlledVehicleEntity = G_Client_GetRemoteControlledVehicleEntity(ps);
  v9 = RemoteControlledVehicleEntity;
  if ( RemoteControlledVehicleEntity )
  {
    if ( RemoteControlledVehicleEntity->vehicle )
    {
      Handler = GHandler::getHandler();
      if ( BG_ShouldHandleThirdPersonVehicleCamera(ps, Handler) )
      {
        ServerDef = G_Vehicle_GetServerDef(v9->vehicle->defIndex);
        if ( !ServerDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 56, ASSERT_TYPE_ASSERT, "( vehicleDef )", (const char *)&queryFormat, "vehicleDef") )
          __debugbreak();
        BG_Camera_AdjustEyePosForRemoteTurretVehicle(ServerDef, &v9->r.currentAngles, v9->s.number, eyePos, ps, outPos, inOutForward);
      }
    }
  }
}

/*
==============
G_Client_Clear
==============
*/
void G_Client_Clear(const int entityNum, gclient_s *client)
{
  GWeaponMap *Instance; 
  GWeaponMap *v5; 
  GWeaponMap *v6; 
  GHandler *Handler; 
  EdgeQueryCache *v8; 

  if ( !client )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 363, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 310, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
      __debugbreak();
  }
  Instance = GWeaponMap::GetInstance();
  BG_ClearPlayerWeapons(Instance, &client->ps);
  v5 = GWeaponMap::GetInstance();
  BG_ClearClientWeapons(v5, &client->sess.cs);
  v6 = GWeaponMap::GetInstance();
  BG_ClearMLGSpectatorClientWeapons(v6, &client->mlgSpectatorClientInfo);
  G_Vehicle_ClearPlayerVehicles(entityNum, &client->ps);
  Handler = GHandler::getHandler();
  v8 = Handler->GetEdgeQueryCache(Handler, entityNum);
  memset_0(v8, 0, sizeof(EdgeQueryCache));
  memset_0(client, 0, sizeof(gclient_s));
}

/*
==============
G_Client_ClearPlayerEvents
==============
*/
void G_Client_ClearPlayerEvents(gclient_s *client)
{
  GWeaponMap *Instance; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 324, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  BG_ClearPlayerEvents(Instance, &client->ps);
  *(_QWORD *)&client->ps.pe.eventSequence = 0i64;
  *(_QWORD *)&client->ps.pe.events[0].eventParm = 0i64;
  *(_QWORD *)&client->ps.pe.events[1].eventParm = 0i64;
  *(_QWORD *)&client->ps.pe.events[2].eventParm = 0i64;
  *(_QWORD *)&client->ps.pe.events[3].eventParm = 0i64;
  *(_QWORD *)&client->ps.unpredictableEventSequence = 0i64;
  client->ps.unpredictableEvents[0] = 0i64;
  client->ps.unpredictableEvents[1] = 0i64;
  client->ps.unpredictableEvents[2] = 0i64;
  client->ps.unpredictableEvents[3] = 0i64;
}

/*
==============
G_Client_ClearPlayerWeapons
==============
*/
void G_Client_ClearPlayerWeapons(gclient_s *client)
{
  GWeaponMap *Instance; 
  GWeaponMap *v3; 
  GWeaponMap *v4; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 310, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  Instance = GWeaponMap::GetInstance();
  BG_ClearPlayerWeapons(Instance, &client->ps);
  v3 = GWeaponMap::GetInstance();
  BG_ClearClientWeapons(v3, &client->sess.cs);
  v4 = GWeaponMap::GetInstance();
  BG_ClearMLGSpectatorClientWeapons(v4, &client->mlgSpectatorClientInfo);
}

/*
==============
G_Client_CopyPlayerState
==============
*/
void G_Client_CopyPlayerState(BgWeaponMap *dstWeaponMap, playerState_s *dstPs, const BgWeaponMap *srcWeaponMap, const playerState_s *srcPs)
{
  if ( !dstWeaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 340, ASSERT_TYPE_ASSERT, "( dstWeaponMap )", (const char *)&queryFormat, "dstWeaponMap") )
    __debugbreak();
  if ( !dstPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 341, ASSERT_TYPE_ASSERT, "( dstPs )", (const char *)&queryFormat, "dstPs") )
    __debugbreak();
  if ( !srcWeaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 342, ASSERT_TYPE_ASSERT, "( srcWeaponMap )", (const char *)&queryFormat, "srcWeaponMap") )
    __debugbreak();
  if ( !srcPs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 343, ASSERT_TYPE_ASSERT, "( srcPs )", (const char *)&queryFormat, "srcPs") )
    __debugbreak();
  BG_ClearPlayerWeapons(dstWeaponMap, dstPs);
  memcpy_0(dstPs, srcPs, sizeof(playerState_s));
  BG_InitPlayerWeapons(dstPs);
  BG_CopyPlayerWeapons(dstWeaponMap, dstPs, srcWeaponMap, srcPs);
}

/*
==============
G_Client_GetCurrentUseReloadConfig
==============
*/
__int64 G_Client_GetCurrentUseReloadConfig(gentity_s *player)
{
  unsigned __int64 buttons; 

  if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 438, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  buttons = player->client->buttons;
  if ( (buttons & 0x1000000000000000i64) != 0 )
    return (unsigned int)((buttons & 0x2000000000000000i64) != 0) + 1;
  else
    return 0i64;
}

/*
==============
G_Client_GetEyePosition
==============
*/
void G_Client_GetEyePosition(const playerState_s *ps, vec3_t *outOrigin)
{
  G_Client_GetEyePosition_Internal(ps, outOrigin, 1);
}

/*
==============
G_Client_GetEyePosition_Internal
==============
*/
void G_Client_GetEyePosition_Internal(const playerState_s *ps, vec3_t *outOrigin, bool bIncludeBob)
{
  GHandler *Handler; 
  GWeaponMap *Instance; 

  if ( BG_IsTurretActive(ps) )
  {
    if ( ps->viewlocked == PLAYERVIEWLOCK_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 176, ASSERT_TYPE_ASSERT, "(ps->viewlocked)", (const char *)&queryFormat, "ps->viewlocked") )
      __debugbreak();
    if ( ps->viewlocked_entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 177, ASSERT_TYPE_ASSERT, "(ps->viewlocked_entNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "ps->viewlocked_entNum != ENTITYNUM_NONE") )
      __debugbreak();
    if ( !G_Utils_DObjGetWorldTagPos_CheckTagExists(&g_entities[ps->viewlocked_entNum], (const scr_string_t)scr_const.tag_player, 0, outOrigin) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 191, ASSERT_TYPE_ASSERT, "(foundTag)", (const char *)&queryFormat, "foundTag") )
      __debugbreak();
  }
  else
  {
    Handler = GHandler::getHandler();
    Instance = GWeaponMap::GetInstance();
    if ( bIncludeBob )
      BG_GetPlayerEyePosition(Instance, ps, outOrigin, Handler);
    else
      BG_GetPlayerEyePosition_NoBob(Instance, ps, outOrigin, Handler);
  }
}

/*
==============
G_Client_GetEyePosition_NoBob
==============
*/
void G_Client_GetEyePosition_NoBob(const playerState_s *ps, vec3_t *outOrigin)
{
  G_Client_GetEyePosition_Internal(ps, outOrigin, 0);
}

/*
==============
G_Client_GetJuggDefaultMusicEnabled
==============
*/
bool G_Client_GetJuggDefaultMusicEnabled(gentity_s *player)
{
  if ( !player->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 430, ASSERT_TYPE_ASSERT, "( player->client )", (const char *)&queryFormat, "player->client") )
    __debugbreak();
  return (player->client->buttons & 0x4000000000000000i64) != 0;
}

/*
==============
G_Client_GetLinkedViewOrigin
==============
*/
char G_Client_GetLinkedViewOrigin(const playerState_s *const ps, vec3_t *outOrigin)
{
  int v4; 
  const gentity_s *v5; 
  int entity; 
  Vehicle *vehicle; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 85, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (ps->linkFlags.m_flags[0] & 4) != 0 )
  {
    if ( ps->linkEnt == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 89, ASSERT_TYPE_ASSERT, "( ps->linkEnt != ENTITYNUM_NONE )", (const char *)&queryFormat, "ps->linkEnt != ENTITYNUM_NONE") )
      __debugbreak();
    if ( G_Utils_DObjGetWorldTagPos_CheckTagExists(&g_entities[ps->linkEnt], (const scr_string_t)scr_const.tag_player, 0, outOrigin) )
      return 1;
    v4 = 103;
    goto LABEL_20;
  }
  if ( BG_IsTurretActive(ps) )
  {
    if ( ps->viewlocked == PLAYERVIEWLOCK_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 116, ASSERT_TYPE_ASSERT, "( ps->viewlocked )", (const char *)&queryFormat, "ps->viewlocked") )
      __debugbreak();
    if ( ps->viewlocked_entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 117, ASSERT_TYPE_ASSERT, "( ps->viewlocked_entNum != ENTITYNUM_NONE )", (const char *)&queryFormat, "ps->viewlocked_entNum != ENTITYNUM_NONE") )
      __debugbreak();
    v5 = &g_entities[ps->viewlocked_entNum];
    if ( !BG_Turret_IsUsingNonRemoteTurretAndUnlinked(ps) )
    {
      if ( G_Utils_DObjGetWorldTagPos_CheckTagExists(v5, (const scr_string_t)scr_const.tag_player, 0, outOrigin) )
        return 1;
      v4 = 137;
LABEL_20:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", v4, ASSERT_TYPE_ASSERT, "(foundTag)", (const char *)&queryFormat, "foundTag") )
        __debugbreak();
      return 1;
    }
  }
  else
  {
    entity = ps->vehicleState.entity;
    if ( entity != 2047 && G_GetGEntity(entity)->vehicle )
    {
      if ( ps->vehicleState.entity == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 150, ASSERT_TYPE_ASSERT, "( ps->vehicleState.entity != ENTITYNUM_NONE )", (const char *)&queryFormat, "ps->vehicleState.entity != ENTITYNUM_NONE") )
        __debugbreak();
      vehicle = g_entities[ps->vehicleState.entity].vehicle;
      if ( vehicle )
      {
        if ( !G_Vehicle_GetServerDef(vehicle->defIndex)->vehiclePhysicsDef.physicsEnabled )
        {
          G_Vehicle_GetVehicleViewOrigin(ps, outOrigin);
          return 1;
        }
      }
    }
  }
  return 0;
}

/*
==============
G_Client_GetRemoteControlledVehicleEntity
==============
*/
gentity_s *G_Client_GetRemoteControlledVehicleEntity(const playerState_s *ps)
{
  GHandler *Handler; 
  int RemoteControlledVehicleEntityNum; 
  gentity_s *GEntity; 
  __int64 v5; 
  __int64 v7; 
  __int64 v8; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 20, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Handler = GHandler::getHandler();
  RemoteControlledVehicleEntityNum = BG_GetRemoteControlledVehicleEntityNum(ps, Handler);
  if ( RemoteControlledVehicleEntityNum == 2047 )
    return 0i64;
  GEntity = G_GetGEntity(RemoteControlledVehicleEntityNum);
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 196, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  v5 = GEntity - g_entities;
  if ( (unsigned int)v5 >= 0x800 )
  {
    LODWORD(v7) = GEntity - g_entities;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 199, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( ( 2048 ) )", "index doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, 2048) )
      __debugbreak();
  }
  v5 = (__int16)v5;
  if ( (unsigned int)(__int16)v5 >= 0x800 )
  {
    LODWORD(v8) = 2048;
    LODWORD(v7) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  if ( g_entities[v5].r.isInUse != g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
    __debugbreak();
  if ( !g_entityIsInUse[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 28, ASSERT_TYPE_ASSERT, "(G_IsEntityInUse( G_GetEntityIndex( remoteControlledEnt ) ))", (const char *)&queryFormat, "G_IsEntityInUse( G_GetEntityIndex( remoteControlledEnt ) )") )
    __debugbreak();
  if ( !GEntity->vehicle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 29, ASSERT_TYPE_ASSERT, "(remoteControlledEnt->vehicle)", (const char *)&queryFormat, "remoteControlledEnt->vehicle") )
    __debugbreak();
  return GEntity;
}

/*
==============
G_Client_GetViewDirection
==============
*/
void G_Client_GetViewDirection(const gentity_s *ent, vec3_t *outForward, vec3_t *outRight, vec3_t *outUp)
{
  GHandler *Handler; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 258, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 259, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  Handler = GHandler::getHandler();
  BG_GetPlayerViewDirection(&ent->client->ps, outForward, outRight, outUp, Handler, 0);
}

/*
==============
G_Client_GetViewDirectionLinked
==============
*/
void G_Client_GetViewDirectionLinked(const gentity_s *ent, vec3_t *outForward, vec3_t *outRight, vec3_t *outUp)
{
  int pm_type; 
  GHandler *v10; 
  GHandler *Handler; 
  vec3_t *p_groundTiltAngles; 
  vec3_t inOutViewAngles; 
  tmat33_t<vec3_t> axis; 
  vec3_t v27; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> in1; 

  _R14 = outUp;
  _RSI = outRight;
  _RDI = outForward;
  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 267, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !ent->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 268, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  _RCX = ent->client;
  pm_type = _RCX->ps.pm_type;
  if ( pm_type == 1 || pm_type == 8 || (_RCX->ps.linkFlags.m_flags[0] & 4) != 0 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rcx+1D8h]
      vmovss  dword ptr [rbp+57h+inOutViewAngles], xmm0
      vmovss  xmm1, dword ptr [rcx+1DCh]
      vmovss  dword ptr [rbp+57h+inOutViewAngles+4], xmm1
      vmovss  xmm0, dword ptr [rcx+1E0h]
      vmovss  dword ptr [rbp+57h+inOutViewAngles+8], xmm0
    }
    BG_CalcLinkedViewValues(&_RCX->ps, &inOutViewAngles);
    if ( Com_GameMode_SupportsFeature(WEAPON_MELEE) )
    {
      AnglesToAxis(&inOutViewAngles, &axis);
      if ( ent->client->ps.groundRefEnt == 2047 )
        goto LABEL_21;
      Handler = GHandler::getHandler();
      if ( !Handler->GetEntityAngles(Handler, ent->client->ps.groundRefEnt, &v27) )
        goto LABEL_21;
      p_groundTiltAngles = &v27;
    }
    else
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_RELOAD_END_RECHAMBER) )
      {
LABEL_21:
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+57h+axis]
          vmovss  xmm1, dword ptr [rbp+57h+axis+4]
          vmovss  dword ptr [rdi], xmm0
          vmovss  xmm0, dword ptr [rbp+57h+axis+8]
          vmovss  dword ptr [rdi+4], xmm1
          vmovss  xmm1, dword ptr [rbp+57h+axis+0Ch]
          vmovss  dword ptr [rdi+8], xmm0
          vmovss  xmm0, dword ptr [rbp+57h+axis+10h]
          vmovss  dword ptr [rsi], xmm1
          vmovss  xmm1, dword ptr [rbp+57h+axis+14h]
          vmovss  dword ptr [rsi+4], xmm0
          vmovss  xmm0, dword ptr [rbp+57h+axis+18h]
          vmovss  dword ptr [rsi+8], xmm1
          vmovss  xmm1, dword ptr [rbp+57h+axis+1Ch]
          vmovss  dword ptr [r14], xmm0
          vmovss  xmm0, dword ptr [rbp+57h+axis+20h]
          vmovss  dword ptr [r14+8], xmm0
          vmovss  dword ptr [r14+4], xmm1
        }
        return;
      }
      AnglesToAxis(&inOutViewAngles, &in1);
      p_groundTiltAngles = &ent->client->ps.groundTiltAngles;
    }
    AnglesToAxis(p_groundTiltAngles, &in2);
    MatrixMultiply(&in1, &in2, &axis);
    goto LABEL_21;
  }
  if ( !_RCX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 259, ASSERT_TYPE_ASSERT, "(ent->client)", (const char *)&queryFormat, "ent->client") )
    __debugbreak();
  v10 = GHandler::getHandler();
  BG_GetPlayerViewDirection(&ent->client->ps, _RDI, _RSI, _R14, v10, 0);
}

/*
==============
G_Client_GetViewOrigin
==============
*/
void G_Client_GetViewOrigin(const playerState_s *ps, vec3_t *outOrigin)
{
  GHandler *Handler; 
  GWeaponMap *Instance; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 224, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !G_Client_GetLinkedViewOrigin(ps, outOrigin) )
  {
    Handler = GHandler::getHandler();
    Instance = GWeaponMap::GetInstance();
    BG_GetPlayerEyePosition(Instance, ps, outOrigin, Handler);
  }
}

/*
==============
G_Client_GetWeaponOrigin
==============
*/
void G_Client_GetWeaponOrigin(const playerState_s *ps, vec3_t *outOrigin)
{
  gentity_s *v4; 
  GHandler *Handler; 
  gclient_s *client; 
  const BgHandler *v7; 
  GWeaponMap *Instance; 
  GHandler *v9; 
  GWeaponMap *v10; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 235, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !G_Client_GetLinkedViewOrigin(ps, outOrigin) )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_LADDER_AIM|0x80) && (v4 = &g_entities[ps->clientNum], v4->client) )
    {
      Handler = GHandler::getHandler();
      client = v4->client;
      v7 = Handler;
      Instance = GWeaponMap::GetInstance();
      BG_GetExtrapolatedPlayerEyePosition(Instance, ps, &client->extrapolatedData, outOrigin, v7);
    }
    else
    {
      v9 = GHandler::getHandler();
      v10 = GWeaponMap::GetInstance();
      BG_GetPlayerEyePosition(v10, ps, outOrigin, v9);
    }
  }
}

/*
==============
G_Client_MayUseEnt
==============
*/
bool G_Client_MayUseEnt(gclient_s *client, unsigned __int16 entnum)
{
  unsigned int v4; 
  __int64 v6; 
  __int64 v7; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 420, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( entnum >= 0x800u )
  {
    LODWORD(v6) = entnum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 421, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( ( 2048 ) )", "entnum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v6, 2048) )
      __debugbreak();
  }
  if ( (entnum & 0xFFE0u) >= 0x800 )
  {
    LODWORD(v7) = 64;
    LODWORD(v6) = entnum >> 5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 422, ASSERT_TYPE_ASSERT, "(unsigned)( entnum / 32 ) < (unsigned)( ( sizeof( *array_counter( client->sess.unusableEntFlags ) ) + 0 ) )", "entnum / 32 doesn't index ARRAY_COUNT( client->sess.unusableEntFlags )\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  v4 = client->sess.unusableEntFlags[(unsigned __int64)entnum >> 5];
  return !_bittest((const int *)&v4, entnum & 0x1F);
}

/*
==============
G_Client_SetEntUnusable
==============
*/
void G_Client_SetEntUnusable(gclient_s *client, unsigned __int16 entnum)
{
  __int64 v4; 
  __int64 v5; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 400, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( entnum >= 0x800u )
  {
    LODWORD(v4) = entnum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 401, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( ( 2048 ) )", "entnum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v4, 2048) )
      __debugbreak();
  }
  if ( (entnum & 0xFFE0u) >= 0x800 )
  {
    LODWORD(v5) = 64;
    LODWORD(v4) = entnum >> 5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 402, ASSERT_TYPE_ASSERT, "(unsigned)( entnum / 32 ) < (unsigned)( ( sizeof( *array_counter( client->sess.unusableEntFlags ) ) + 0 ) )", "entnum / 32 doesn't index ARRAY_COUNT( client->sess.unusableEntFlags )\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  client->sess.unusableEntFlags[(unsigned __int64)entnum >> 5] |= 1 << (entnum & 0x1F);
}

/*
==============
G_Client_SetEntUsable
==============
*/
void G_Client_SetEntUsable(gclient_s *client, unsigned __int16 entnum)
{
  __int64 v4; 
  __int64 v5; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 410, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( entnum >= 0x800u )
  {
    LODWORD(v4) = entnum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 411, ASSERT_TYPE_ASSERT, "(unsigned)( entnum ) < (unsigned)( ( 2048 ) )", "entnum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v4, 2048) )
      __debugbreak();
  }
  if ( (entnum & 0xFFE0u) >= 0x800 )
  {
    LODWORD(v5) = 64;
    LODWORD(v4) = entnum >> 5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 412, ASSERT_TYPE_ASSERT, "(unsigned)( entnum / 32 ) < (unsigned)( ( sizeof( *array_counter( client->sess.unusableEntFlags ) ) + 0 ) )", "entnum / 32 doesn't index ARRAY_COUNT( client->sess.unusableEntFlags )\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  client->sess.unusableEntFlags[(unsigned __int64)entnum >> 5] &= ~(1 << (entnum & 0x1F));
}

/*
==============
G_Client_SetSuit
==============
*/
void G_Client_SetSuit(gentity_s *ent, playerState_s *ps, const unsigned int suitIndex)
{
  GHandler *Handler; 
  const SuitDef *SuitDef; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 381, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !GUtils::ms_gUtils && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_utils.h", 112, ASSERT_TYPE_ASSERT, "( ms_gUtils )", (const char *)&queryFormat, "ms_gUtils") )
    __debugbreak();
  GUtils::ms_gUtils->SetEntitySuit(GUtils::ms_gUtils, ent, suitIndex);
  Handler = GHandler::getHandler();
  BG_SetSuit(Handler, ps, suitIndex);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FREEFALL_RAISE|WEAPON_FIRING|0x80) )
  {
    SuitDef = BG_GetSuitDef(suitIndex);
    if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.cpp", 391, ASSERT_TYPE_ASSERT, "( suit )", (const char *)&queryFormat, "suit") )
      __debugbreak();
    ScriptableSv_UpdateReservedScriptableEntityBinding(ent, SuitDef->scriptableDef);
  }
}

